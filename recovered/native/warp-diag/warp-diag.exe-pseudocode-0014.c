/* Reconstructed Ghidra pseudocode, not original Cloudflare source. */


/* address=140c56880 name=FUN_140c56880 */

void FUN_140c56880(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_140c55cd0(param_1);
    FUN_140c584d0(uVar2,p_Var1);
  }
  return;
}


/* address=140c568d0 name=FUN_140c568d0 */

undefined8 FUN_140c568d0(longlong *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong local_18;
  
  FUN_140c56520(param_1);
  if (param_2 == 0) {
    uVar1 = 1;
  }
  else {
    uVar2 = FUN_140c55be0();
    if (uVar2 / 2 < param_2) {
      FUN_140c6c4e0(0x10,0,0x45,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\internal.h"
                    ,0x138);
      uVar1 = 0;
    }
    else {
      lVar3 = FUN_140c660d0(param_2 << 1);
      *param_1 = lVar3;
      if (*param_1 == 0) {
        uVar1 = 0;
      }
      else {
        param_1[1] = param_2;
        for (local_18 = 0; local_18 < (ulonglong)param_1[1]; local_18 = local_18 + 1) {
          FUN_140c55bd0(2,*param_1 + local_18 * 2);
        }
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}


/* address=140c569c0 name=FUN_140c569c0 */

bool FUN_140c569c0(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_140c55f80(param_2);
  cVar1 = FUN_140c568d0(param_1,uVar2);
  if (cVar1 != '\0') {
    lVar3 = FUN_140c55f80(param_2);
    uVar2 = FUN_140c55c70(param_2);
    FUN_140c53530(*param_1,uVar2,lVar3 << 1);
  }
  return cVar1 != '\0';
}


/* address=140c56a30 name=FUN_140c56a30 */

void FUN_140c56a30(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140c55cd0(param_1);
    FUN_140c584b0(uVar1,*param_1);
  }
  return;
}


/* address=140c56a70 name=FUN_140c56a70 */

void FUN_140c56a70(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_140c55cd0(param_1);
    FUN_140c584b0(uVar2,p_Var1);
  }
  return;
}


/* address=140c56ac0 name=FUN_140c56ac0 */

void FUN_140c56ac0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140c55cd0(param_1);
    FUN_140c584f0(uVar1,*param_1);
  }
  return;
}


/* address=140c56b00 name=FUN_140c56b00 */

void FUN_140c56b00(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_140c55cd0(param_1);
    FUN_140c584f0(uVar2,p_Var1);
  }
  return;
}


/* address=140c56b50 name=FUN_140c56b50 */

undefined8 FUN_140c56b50(undefined8 param_1,uint param_2)

{
  FUN_140d40870(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_140e18570(param_1,0x658);
  }
  return param_1;
}


/* address=140c56b90 name=FUN_140c56b90 */

undefined8 FUN_140c56b90(undefined8 param_1,uint param_2)

{
  FUN_140c73620(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_140e18570(param_1,0xb0);
  }
  return param_1;
}


/* address=140c56bd0 name=FUN_140c56bd0 */

undefined * FUN_140c56bd0(undefined *param_1)

{
  longlong lVar1;
  undefined *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x10;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x20;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  return param_1;
}


/* address=140c56c30 name=FUN_140c56c30 */

undefined8 * FUN_140c56c30(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  return param_1;
}


/* address=140c56c60 name=FUN_140c56c60 */

void FUN_140c56c60(undefined8 param_1,undefined8 param_2)

{
  FUN_140d3a1e0(param_1,param_2);
  return;
}


/* address=140c56c90 name=FUN_140c56c90 */

void FUN_140c56c90(undefined8 param_1)

{
  FUN_140d3a2c0(param_1);
  return;
}


/* address=140c56cb0 name=FUN_140c56cb0 */

void FUN_140c56cb0(undefined8 param_1)

{
  FUN_140d3a370(param_1);
  return;
}


/* address=140c56cd0 name=FUN_140c56cd0 */

void FUN_140c56cd0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140c55cd0(param_1);
    FUN_140c58490(uVar1,*param_1);
  }
  return;
}


/* address=140c56d10 name=FUN_140c56d10 */

void FUN_140c56d10(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_140c55cd0(param_1);
    FUN_140c58490(uVar2,p_Var1);
  }
  return;
}


/* address=140c56d60 name=FUN_140c56d60 */

longlong FUN_140c56d60(longlong param_1)

{
  FUN_140c56440(param_1);
  FUN_140c56440(param_1 + 0x10);
  return param_1;
}


/* address=140c56da0 name=FUN_140c56da0 */

void FUN_140c56da0(longlong param_1)

{
  FUN_140c564c0(param_1 + 0x10);
  FUN_140c564c0(param_1);
  return;
}


/* address=140c56dd0 name=FUN_140c56dd0 */

longlong FUN_140c56dd0(longlong param_1,longlong param_2)

{
  _Ptr_base<>(param_1,param_2);
  _Ptr_base<>(param_1 + 0x10,param_2 + 0x10);
  return param_1;
}


/* address=140c56e20 name=FUN_140c56e20 */

longlong FUN_140c56e20(longlong param_1,longlong param_2)

{
  FUN_140c564e0(param_1,param_2);
  FUN_140c564e0(param_1 + 0x10,param_2 + 0x10);
  return param_1;
}


/* address=140c56e70 name=FUN_140c56e70 */

undefined8 FUN_140c56e70(undefined8 param_1,uint param_2)

{
  FUN_140c56da0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_140e18570(param_1,0x20);
  }
  return param_1;
}


/* address=140c56eb0 name=FUN_140c56eb0 */

void FUN_140c56eb0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140c55cd0(param_1);
    FUN_140c58510(uVar1,*param_1);
  }
  return;
}


/* address=140c56ef0 name=FUN_140c56ef0 */

void FUN_140c56ef0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140c55cd0(param_1);
    FUN_140c58470(uVar1,*param_1);
  }
  return;
}


/* address=140c56f30 name=FUN_140c56f30 */

void FUN_140c56f30(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_140c55cd0(param_1);
    FUN_140c58470(uVar2,p_Var1);
  }
  return;
}


/* address=140c56f80 name=FUN_140c56f80 */

undefined8 * FUN_140c56f80(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_140c56440(param_1 + 1);
  return param_1;
}


/* address=140c56fc0 name=FUN_140c56fc0 */

void FUN_140c56fc0(longlong param_1)

{
  FUN_140c57230(param_1 + 8);
  return;
}


/* address=140c56fe0 name=FUN_140c56fe0 */

bool FUN_140c56fe0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_140c57080(param_1);
  if (cVar1 != '\0') {
    uVar2 = FUN_140c55cd0(param_2);
    uVar3 = FUN_140c57290(param_1 + 1,*param_1);
    FUN_140c56e20(uVar3,uVar2);
    *param_1 = *param_1 + 1;
    FUN_140c56da0(param_2);
  }
  else {
    FUN_140c56da0(param_2);
  }
  return cVar1 != '\0';
}


/* address=140c57080 name=FUN_140c57080 */

undefined8 FUN_140c57080(ulonglong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong local_30;
  undefined local_18 [24];
  
  lVar2 = FUN_140c55f80(param_1 + 1);
  if (lVar2 == 0) {
    uVar3 = FUN_140c57360(param_1 + 1,0x10);
  }
  else {
    uVar4 = FUN_140c55f80(param_1 + 1);
    if (*param_1 < uVar4) {
      uVar3 = 1;
    }
    else {
      uVar4 = FUN_140c55f80(param_1 + 1);
      uVar5 = FUN_140c55be0();
      if (uVar5 / 2 < uVar4) {
        FUN_140c6c4e0(0x10,0,0x45,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\internal.h"
                      ,0x1ab);
        uVar3 = 0;
      }
      else {
        FUN_140c56440(local_18);
        lVar2 = FUN_140c55f80(param_1 + 1);
        cVar1 = FUN_140c57360(local_18,lVar2 << 1);
        if (cVar1 == '\0') {
          FUN_140c57230(local_18);
          uVar3 = 0;
        }
        else {
          local_30 = 0;
          while( true ) {
            uVar4 = FUN_140c55f80(param_1 + 1);
            if (uVar4 <= local_30) break;
            uVar3 = FUN_140c57290(param_1 + 1,local_30);
            uVar3 = FUN_140c55cd0(uVar3);
            uVar6 = FUN_140c57290(local_18,local_30);
            FUN_140c56e20(uVar6,uVar3);
            local_30 = local_30 + 1;
          }
          uVar3 = FUN_140c55cd0(local_18);
          FUN_140c57250(param_1 + 1,uVar3);
          FUN_140c57230(local_18);
          uVar3 = 1;
        }
      }
    }
  }
  return uVar3;
}


/* address=140c57230 name=FUN_140c57230 */

void FUN_140c57230(undefined8 param_1)

{
  FUN_140c572b0(param_1);
  return;
}


/* address=140c57250 name=FUN_140c57250 */

longlong FUN_140c57250(longlong param_1,undefined8 param_2)

{
  FUN_140c572b0(param_1);
  FUN_140c565b0(param_2,param_1,param_1 + 8);
  return param_1;
}


/* address=140c57290 name=FUN_140c57290 */

longlong FUN_140c57290(longlong *param_1,longlong param_2)

{
  return param_2 * 0x20 + *param_1;
}


/* address=140c572b0 name=FUN_140c572b0 */

void FUN_140c572b0(undefined8 param_1)

{
  FUN_140c572d0(param_1,0,0);
  return;
}


/* address=140c572d0 name=FUN_140c572d0 */

void FUN_140c572d0(longlong *param_1,longlong param_2,longlong param_3)

{
  ulonglong local_18;
  
  for (local_18 = 0; local_18 < (ulonglong)param_1[1]; local_18 = local_18 + 1) {
    FUN_140c56e70(local_18 * 0x20 + *param_1,0);
  }
  FUN_140c66200(*param_1);
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}


/* address=140c57360 name=FUN_140c57360 */

undefined8 FUN_140c57360(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong local_18;
  
  FUN_140c572b0(param_1);
  if (param_2 == 0) {
    uVar3 = 1;
  }
  else {
    uVar1 = FUN_140c55be0();
    if (uVar1 / 0x20 < param_2) {
      FUN_140c6c4e0(0x10,0,0x45,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\internal.h"
                    ,0x138);
      uVar3 = 0;
    }
    else {
      lVar2 = FUN_140c660d0(param_2 * 0x20);
      *param_1 = lVar2;
      if (*param_1 == 0) {
        uVar3 = 0;
      }
      else {
        param_1[1] = param_2;
        for (local_18 = 0; local_18 < (ulonglong)param_1[1]; local_18 = local_18 + 1) {
          uVar3 = FUN_140c55bd0(0x20,local_18 * 0x20 + *param_1);
          FUN_140c56d60(uVar3);
        }
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}


/* address=140c57460 name=FUN_140c57460 */

void FUN_140c57460(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140c55cd0(param_1);
    FUN_140c58450(uVar1,*param_1);
  }
  return;
}


/* address=140c574a0 name=FUN_140c574a0 */

undefined8 FUN_140c574a0(undefined8 param_1,uint param_2)

{
  FUN_140c53ee0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_140e18570(param_1,0xf0);
  }
  return param_1;
}


/* address=140c574e0 name=FUN_140c574e0 */

void FUN_140c574e0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140c55cd0(param_1);
    FUN_140c58430(uVar1,*param_1);
  }
  return;
}


/* address=140c57520 name=FUN_140c57520 */

void FUN_140c57520(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_140c55cd0(param_1);
    FUN_140c58430(uVar2,p_Var1);
  }
  return;
}


/* address=140c57570 name=FUN_140c57570 */

void FUN_140c57570(longlong param_1)

{
  FUN_140c564c0(param_1 + 8);
  return;
}


/* address=140c57590 name=FUN_140c57590 */

void FUN_140c57590(longlong param_1)

{
  FUN_140c55c70(param_1 + 8);
  return;
}


/* address=140c575b0 name=FUN_140c575b0 */

longlong FUN_140c575b0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140c55c70(param_1 + 1);
  return lVar1 + *param_1 * 0x18;
}


/* address=140c575e0 name=FUN_140c575e0 */

undefined8 FUN_140c575e0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  longlong lVar5;
  
  cVar1 = FUN_140c57660(param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    puVar3 = (undefined *)FUN_140c55cd0(param_2);
    puVar4 = (undefined *)FUN_140c57830(param_1 + 1,*param_1);
    for (lVar5 = 0x18; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    lVar5 = *param_1;
    *param_1 = lVar5 + 1;
    uVar2 = CONCAT71((int7)((ulonglong)(lVar5 + 1) >> 8),1);
  }
  return uVar2;
}


/* address=140c57660 name=FUN_140c57660 */

undefined8 FUN_140c57660(ulonglong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulonglong local_40;
  undefined local_28 [24];
  
  lVar2 = FUN_140c55f80(param_1 + 1);
  if (lVar2 == 0) {
    uVar3 = FUN_140c57850(param_1 + 1,0x10);
  }
  else {
    uVar4 = FUN_140c55f80(param_1 + 1);
    if (*param_1 < uVar4) {
      uVar3 = 1;
    }
    else {
      uVar4 = FUN_140c55f80(param_1 + 1);
      uVar5 = FUN_140c55be0();
      if (uVar5 / 2 < uVar4) {
        FUN_140c6c4e0(0x10,0,0x45,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\internal.h"
                      ,0x1ab);
        uVar3 = 0;
      }
      else {
        FUN_140c56440(local_28);
        lVar2 = FUN_140c55f80(param_1 + 1);
        cVar1 = FUN_140c57850(local_28,lVar2 << 1);
        if (cVar1 == '\0') {
          FUN_140c564c0(local_28);
          uVar3 = 0;
        }
        else {
          local_40 = 0;
          while( true ) {
            uVar4 = FUN_140c55f80(param_1 + 1);
            if (uVar4 <= local_40) break;
            uVar3 = FUN_140c57830(param_1 + 1,local_40);
            puVar6 = (undefined *)FUN_140c55cd0(uVar3);
            puVar7 = (undefined *)FUN_140c57830(local_28,local_40);
            for (lVar2 = 0x18; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
            local_40 = local_40 + 1;
          }
          uVar3 = FUN_140c55cd0(local_28);
          FUN_140c564e0(param_1 + 1,uVar3);
          FUN_140c564c0(local_28);
          uVar3 = 1;
        }
      }
    }
  }
  return uVar3;
}


/* address=140c57830 name=FUN_140c57830 */

longlong FUN_140c57830(longlong *param_1,longlong param_2)

{
  return param_2 * 0x18 + *param_1;
}


/* address=140c57850 name=FUN_140c57850 */

undefined8 FUN_140c57850(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong local_18;
  
  FUN_140c56520(param_1);
  if (param_2 == 0) {
    uVar3 = 1;
  }
  else {
    uVar1 = FUN_140c55be0();
    if (uVar1 / 0x18 < param_2) {
      FUN_140c6c4e0(0x10,0,0x45,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\internal.h"
                    ,0x138);
      uVar3 = 0;
    }
    else {
      lVar2 = FUN_140c660d0(param_2 * 0x18);
      *param_1 = lVar2;
      if (*param_1 == 0) {
        uVar3 = 0;
      }
      else {
        param_1[1] = param_2;
        for (local_18 = 0; local_18 < (ulonglong)param_1[1]; local_18 = local_18 + 1) {
          uVar3 = FUN_140c55bd0(0x18,local_18 * 0x18 + *param_1);
          FUN_140c56c30(uVar3);
        }
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}


/* address=140c57950 name=FUN_140c57950 */

undefined8 FUN_140c57950(undefined8 param_1,uint param_2)

{
  FUN_140c548d0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_140e18570(param_1,0x240);
  }
  return param_1;
}


/* address=140c57990 name=FUN_140c57990 */

void FUN_140c57990(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140c55cd0(param_1);
    FUN_140c58410(uVar1,*param_1);
  }
  return;
}


/* address=140c579d0 name=FUN_140c579d0 */

void FUN_140c579d0(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_140c55cd0(param_1);
    FUN_140c58410(uVar2,p_Var1);
  }
  return;
}


/* address=140c57a20 name=FUN_140c57a20 */

undefined8 FUN_140c57a20(undefined8 param_1,uint param_2)

{
  FUN_140c54cf0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_140e18570(param_1,0xa8);
  }
  return param_1;
}


/* address=140c57a60 name=FUN_140c57a60 */

undefined8 FUN_140c57a60(undefined8 param_1)

{
  FUN_140d376c0(param_1);
  return param_1;
}


/* address=140c57a90 name=FUN_140c57a90 */

void FUN_140c57a90(undefined8 param_1)

{
  FUN_140d377b0(param_1);
  return;
}


/* address=140c57ab0 name=FUN_140c57ab0 */

undefined8 FUN_140c57ab0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c55f50(param_1,param_2,0x20);
  return param_1;
}


/* address=140c57ae0 name=FUN_140c57ae0 */

bool FUN_140c57ae0(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = operator==<>(param_1,0);
  return cVar1 == '\0';
}


/* address=140c57b20 name=operator==<> */

/* Library Function - Multiple Matches With Same Base Name
    bool __cdecl std::operator==<void __cdecl(class Concurrency::message<enum
   Concurrency::agent_status> * __ptr64)>(class std::function<void __cdecl(class
   Concurrency::message<enum Concurrency::agent_status> * __ptr64)> const & __ptr64,std::nullptr_t)
    bool __cdecl std::operator==<void __cdecl(class Concurrency::message<unsigned __int64> *
   __ptr64)>(class std::function<void __cdecl(class Concurrency::message<unsigned __int64> *
   __ptr64)> const & __ptr64,std::nullptr_t)
    bool __cdecl std::operator==<void __cdecl(void)>(class std::function<void __cdecl(void)> const &
   __ptr64,std::nullptr_t)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

bool operator==<>(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_140c56050(param_1);
  return cVar1 == '\0';
}


/* address=140c57b60 name=FUN_140c57b60 */

undefined8 FUN_140c57b60(undefined8 param_1)

{
  undefined local_18;
  
  FUN_140c581b0(param_1,local_18);
  return param_1;
}


/* address=140c57b90 name=FUN_140c57b90 */

undefined8 FUN_140c57b90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_140c55cd0(param_2);
  uVar1 = FUN_140c581d0(uVar1);
  uVar1 = FUN_140c55e40(local_18,uVar1);
  FUN_140c55e70(param_1,uVar1);
  FUN_140c56190(local_18);
  return param_1;
}


/* address=140c57be0 name=FUN_140c57be0 */

undefined8 FUN_140c57be0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_140c55cd0(param_2);
  uVar1 = FUN_140c58230(uVar1);
  uVar1 = FUN_140c55e40(local_18,uVar1);
  FUN_140c55e70(param_1,uVar1);
  FUN_140c56ef0(local_18);
  return param_1;
}


/* address=140c57c30 name=FUN_140c57c30 */

undefined8
FUN_140c57c30(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_140c56f30(param_1,p_Var1);
  uVar2 = FUN_140c55cd0(param_2);
  FUN_140c55cd0(uVar2);
  FUN_140c55cd0(param_1);
  return param_1;
}


/* address=140c57c90 name=FUN_140c57c90 */

void FUN_140c57c90(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140c55cd0(param_1);
    FUN_140c583f0(uVar1,*param_1);
  }
  return;
}


/* address=140c57cd0 name=FUN_140c57cd0 */

undefined8 FUN_140c57cd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_140c55cd0(param_2);
  uVar1 = FUN_140c58290(uVar1);
  uVar1 = FUN_140c55e40(local_18,uVar1);
  FUN_140c55e70(param_1,uVar1);
  FUN_140c57c90(local_18);
  return param_1;
}


/* address=140c57d20 name=FUN_140c57d20 */

undefined8 FUN_140c57d20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_140c55cd0(param_2);
  uVar1 = FUN_140c582f0(uVar1);
  uVar1 = FUN_140c55e40(local_18,uVar1);
  FUN_140c55e70(param_1,uVar1);
  FUN_140c57990(local_18);
  return param_1;
}


/* address=140c57d70 name=FUN_140c57d70 */

undefined8
FUN_140c57d70(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_140c579d0(param_1,p_Var1);
  uVar2 = FUN_140c55cd0(param_2);
  FUN_140c55cd0(uVar2);
  FUN_140c55cd0(param_1);
  return param_1;
}


/* address=140c57dd0 name=FUN_140c57dd0 */

undefined8 * FUN_140c57dd0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140c55c70(param_2);
  *param_1 = uVar1;
  uVar1 = FUN_140c55f80(param_2);
  param_1[1] = uVar1;
  return param_1;
}


/* address=140c57e10 name=FUN_140c57e10 */

undefined8
FUN_140c57e10(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_140c55df0(param_1,p_Var1);
  uVar2 = FUN_140c55cd0(param_2);
  FUN_140c55cd0(uVar2);
  FUN_140c55cd0(param_1);
  return param_1;
}


/* address=140c57e70 name=FUN_140c57e70 */

void FUN_140c57e70(longlong param_1)

{
  if (param_1 != 0) {
    FUN_140c57a20(param_1,0);
    FUN_140c66200(param_1);
  }
  return;
}


/* address=140c57ea0 name=std::_Min_value<unsigned___int64> */

/* Library Function - Single Match
    unsigned __int64 const & __ptr64 __cdecl std::_Min_value<unsigned __int64>(unsigned __int64
   const & __ptr64,unsigned __int64 const & __ptr64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

__uint64 * __cdecl std::_Min_value<unsigned___int64>(__uint64 *param_1,__uint64 *param_2)

{
  __uint64 *local_18;
  
  local_18 = param_1;
  if (*param_2 < *param_1) {
    local_18 = param_2;
  }
  return local_18;
}


/* address=140c57ef0 name=FUN_140c57ef0 */

undefined8
FUN_140c57ef0(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_140c56d10(param_1,p_Var1);
  uVar2 = FUN_140c55cd0(param_2);
  FUN_140c55cd0(uVar2);
  FUN_140c55cd0(param_1);
  return param_1;
}


/* address=140c57f50 name=FUN_140c57f50 */

longlong * FUN_140c57f50(longlong *param_1,longlong param_2)

{
  *param_1 = param_2;
  if (*param_1 == 0) {
    FID_conflict__assert((wchar_t *)"m",(wchar_t *)"D",0x290);
  }
  FUN_140d39630(*param_1);
  return param_1;
}


/* address=140c57fb0 name=FUN_140c57fb0 */

void FUN_140c57fb0(undefined8 *param_1)

{
  FUN_140d39670(*param_1);
  return;
}


/* address=140c57fd0 name=FUN_140c57fd0 */

undefined8 FUN_140c57fd0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_140c58350();
  uVar1 = FUN_140c55e40(local_18,uVar1);
  FUN_140c55e70(param_1,uVar1);
  FUN_140c574e0(local_18);
  return param_1;
}


/* address=140c58010 name=FUN_140c58010 */

undefined8
FUN_140c58010(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_140c57520(param_1,p_Var1);
  uVar2 = FUN_140c55cd0(param_2);
  FUN_140c55cd0(uVar2);
  FUN_140c55cd0(param_1);
  return param_1;
}


/* address=140c58070 name=FUN_140c58070 */

undefined8
FUN_140c58070(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_140c561d0(param_1,p_Var1);
  uVar2 = FUN_140c55cd0(param_2);
  FUN_140c55cd0(uVar2);
  FUN_140c55cd0(param_1);
  return param_1;
}


/* address=140c580d0 name=FUN_140c580d0 */

undefined8
FUN_140c580d0(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_140c56340(param_1,p_Var1);
  uVar2 = FUN_140c55cd0(param_2);
  FUN_140c55cd0(uVar2);
  FUN_140c55cd0(param_1);
  return param_1;
}


/* address=140c58130 name=std::_Compressed_pair<struct_std::default_delete<class_std::_Facet_base>,class_std::_Facet_base*___ptr64,1>::_Compressed_pair<struct_std::default_delete<class_std::_Facet_base>,class_std::_Facet_base*___ptr64,1><class_std::_Facet_base*___ptr64&___ptr64> */

/* Library Function - Single Match
    public: __cdecl std::_Compressed_pair<struct std::default_delete<class std::_Facet_base>,class
   std::_Facet_base * __ptr64,1>::_Compressed_pair<struct std::default_delete<class
   std::_Facet_base>,class std::_Facet_base * __ptr64,1><class std::_Facet_base * __ptr64 &
   __ptr64>(struct std::_Zero_then_variadic_args_t,class std::_Facet_base * __ptr64 & __ptr64)
   __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

_Compressed_pair<struct_std::default_delete<class_std::_Facet_base>,class_std::_Facet_base*___ptr64,1>
* __thiscall
std::
_Compressed_pair<struct_std::default_delete<class_std::_Facet_base>,class_std::_Facet_base*___ptr64,1>
::
_Compressed_pair<struct_std::default_delete<class_std::_Facet_base>,class_std::_Facet_base*___ptr64,1><class_std::_Facet_base*___ptr64&___ptr64>
          (_Compressed_pair<struct_std::default_delete<class_std::_Facet_base>,class_std::_Facet_base*___ptr64,1>
           *this,_Zero_then_variadic_args_t param_1,_Facet_base **param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140c55cd0(param_2);
  *(undefined8 *)this = *puVar1;
  return this;
}


/* address=140c58170 name=FUN_140c58170 */

undefined8 *
FUN_140c58170(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  FUN_140c55cd0(param_3);
  puVar1 = (undefined8 *)FUN_140c55cd0(param_4);
  *param_1 = *puVar1;
  return param_1;
}


/* address=140c581b0 name=FUN_140c581b0 */

undefined8 * FUN_140c581b0(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1;
}


/* address=140c581d0 name=FUN_140c581d0 */

undefined8 FUN_140c581d0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = FUN_140c660d0(0x240);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140c55bd0(0x240,lVar1);
    puVar3 = (undefined8 *)FUN_140c55cd0(param_1);
    uVar2 = FUN_140c54300(uVar2,*puVar3);
  }
  return uVar2;
}


/* address=140c58230 name=FUN_140c58230 */

undefined8 FUN_140c58230(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = FUN_140c660d0(0xb0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140c55bd0(0xb0,lVar1);
    puVar3 = (undefined8 *)FUN_140c55cd0(param_1);
    uVar2 = FUN_140c734e0(uVar2,*puVar3);
  }
  return uVar2;
}


/* address=140c58290 name=FUN_140c58290 */

undefined8 FUN_140c58290(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = FUN_140c660d0(0xa8);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140c55bd0(0xa8,lVar1);
    puVar3 = (undefined8 *)FUN_140c55cd0(param_1);
    uVar2 = FUN_140c54a40(uVar2,*puVar3);
  }
  return uVar2;
}


/* address=140c582f0 name=FUN_140c582f0 */

undefined8 FUN_140c582f0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = FUN_140c660d0(0xf0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140c55bd0(0xf0,lVar1);
    puVar3 = (undefined8 *)FUN_140c55cd0(param_1);
    uVar2 = FUN_140c53c10(uVar2,*puVar3);
  }
  return uVar2;
}


/* address=140c58350 name=FUN_140c58350 */

undefined8 FUN_140c58350(void)

{
  longlong lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = FUN_140c660d0(0x38);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined *)FUN_140c55bd0(0x38,lVar1);
    puVar4 = puVar2;
    for (lVar1 = 0x38; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    uVar3 = FUN_140c56bd0(puVar2);
  }
  return uVar3;
}


/* address=140c583b0 name=std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64> */

/* Library Function - Single Match
    class std::_Facet_base * __ptr64 __cdecl std::exchange<class std::_Facet_base * __ptr64,class
   std::_Facet_base * __ptr64>(class std::_Facet_base * __ptr64 & __ptr64,class std::_Facet_base *
   __ptr64 && __ptr64)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

_Facet_base * __cdecl
std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
          (_Facet_base **param_1,_Facet_base **param_2)

{
  _Facet_base *p_Var1;
  
  p_Var1 = *param_1;
  *param_1 = *param_2;
  return p_Var1;
}


/* address=140c583f0 name=FUN_140c583f0 */

void FUN_140c583f0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c560f0(param_2);
  return;
}


/* address=140c58410 name=FUN_140c58410 */

void FUN_140c58410(undefined8 param_1,undefined8 param_2)

{
  FUN_140c585d0(param_2);
  return;
}


/* address=140c58430 name=FUN_140c58430 */

void FUN_140c58430(undefined8 param_1,undefined8 param_2)

{
  FUN_140c585f0(param_2);
  return;
}


/* address=140c58450 name=FUN_140c58450 */

void FUN_140c58450(undefined8 param_1,undefined8 param_2)

{
  FUN_140c58610(param_2);
  return;
}


/* address=140c58470 name=FUN_140c58470 */

void FUN_140c58470(undefined8 param_1,undefined8 param_2)

{
  FUN_140c58630(param_2);
  return;
}


/* address=140c58490 name=FUN_140c58490 */

void FUN_140c58490(undefined8 param_1,undefined8 param_2)

{
  FUN_140c58650(param_2);
  return;
}


/* address=140c584b0 name=FUN_140c584b0 */

void FUN_140c584b0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c56080(param_2);
  return;
}


/* address=140c584d0 name=FUN_140c584d0 */

void FUN_140c584d0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c563e0(param_2);
  return;
}


/* address=140c584f0 name=FUN_140c584f0 */

void FUN_140c584f0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c58670(param_2);
  return;
}


/* address=140c58510 name=FUN_140c58510 */

void FUN_140c58510(undefined8 param_1,undefined8 param_2)

{
  FUN_140c586b0(param_2);
  return;
}


/* address=140c58530 name=FUN_140c58530 */

void FUN_140c58530(undefined8 param_1,undefined8 param_2)

{
  FUN_140c56280(param_2);
  return;
}


/* address=140c58550 name=FUN_140c58550 */

void FUN_140c58550(undefined8 param_1,undefined8 param_2)

{
  FUN_140c56220(param_2);
  return;
}


/* address=140c58570 name=FUN_140c58570 */

void FUN_140c58570(undefined8 param_1,undefined8 param_2)

{
  FUN_140c56110(param_2);
  return;
}


/* address=140c58590 name=FUN_140c58590 */

void FUN_140c58590(undefined8 param_1,undefined8 param_2)

{
  FUN_140c55ce0(param_2);
  return;
}


/* address=140c585b0 name=FUN_140c585b0 */

void FUN_140c585b0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c55c10(param_2);
  return;
}


/* address=140c585d0 name=FUN_140c585d0 */

void FUN_140c585d0(undefined8 param_1)

{
  FUN_140c58800(param_1);
  return;
}


/* address=140c585f0 name=FUN_140c585f0 */

void FUN_140c585f0(undefined8 param_1)

{
  FUN_140c587d0(param_1);
  return;
}


/* address=140c58610 name=FUN_140c58610 */

void FUN_140c58610(undefined8 param_1)

{
  FUN_140c74f10(param_1);
  return;
}


/* address=140c58630 name=FUN_140c58630 */

void FUN_140c58630(undefined8 param_1)

{
  FUN_140c587a0(param_1);
  return;
}


/* address=140c58650 name=FUN_140c58650 */

void FUN_140c58650(undefined8 param_1)

{
  FUN_140c58770(param_1);
  return;
}


/* address=140c58670 name=FUN_140c58670 */

void FUN_140c58670(undefined8 param_1)

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
  uVar1 = FUN_140c58760(local_18);
  FUN_140c74f50(param_1,uVar1,0);
  return;
}


/* address=140c586b0 name=FUN_140c586b0 */

void FUN_140c586b0(undefined8 param_1)

{
  FUN_140c586d0(param_1);
  return;
}


/* address=140c586d0 name=FUN_140c586d0 */

void FUN_140c586d0(longlong param_1)

{
  if (param_1 != 0) {
    FUN_140c56400(param_1,0);
    FUN_140c66200(param_1);
  }
  return;
}


/* address=140c58700 name=FUN_140c58700 */

void FUN_140c58700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140c56030(param_3);
  return;
}


/* address=140c58760 name=FUN_140c58760 */

undefined * FUN_140c58760(void)

{
  return &LAB_140c58730;
}


/* address=140c58770 name=FUN_140c58770 */

void FUN_140c58770(longlong param_1)

{
  if (param_1 != 0) {
    FUN_140c56b50(param_1,0);
    FUN_140c66200(param_1);
  }
  return;
}


/* address=140c587a0 name=FUN_140c587a0 */

void FUN_140c587a0(longlong param_1)

{
  if (param_1 != 0) {
    FUN_140c56b90(param_1,0);
    FUN_140c66200(param_1);
  }
  return;
}


/* address=140c587d0 name=FUN_140c587d0 */

void FUN_140c587d0(longlong param_1)

{
  if (param_1 != 0) {
    FUN_140c66200(param_1);
  }
  return;
}


/* address=140c58800 name=FUN_140c58800 */

void FUN_140c58800(longlong param_1)

{
  if (param_1 != 0) {
    FUN_140c574a0(param_1,0);
    FUN_140c66200(param_1);
  }
  return;
}


/* address=140c58830 name=FUN_140c58830 */

void FUN_140c58830(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_140c5a560(param_1);
  uVar1 = FUN_140c55c70(param_1 + 0xe8);
  FUN_140c5bbd0(uVar1,param_2);
  return;
}


/* address=140c58880 name=FUN_140c58880 */

undefined8 FUN_140c58880(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_140c5a500(param_1);
  cVar1 = FUN_140c56050(param_1 + 8);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    lVar2 = FUN_140c55c70(param_1 + 8);
    uVar3 = FUN_140c55c70(lVar2 + 0x20);
    uVar3 = FUN_140c5bbd0(uVar3,param_2);
  }
  return uVar3;
}


/* address=140c588f0 name=FUN_140c588f0 */

void FUN_140c588f0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_140c5a560(param_1);
  uVar1 = FUN_140c55c70(param_1 + 0xe8);
  FUN_140c5bdc0(uVar1,param_2);
  return;
}


/* address=140c58990 name=FUN_140c58990 */

undefined8 FUN_140c58990(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_140c5a500(param_1);
  cVar1 = FUN_140c56050(param_1 + 8);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    lVar2 = FUN_140c55c70(param_1 + 8);
    uVar3 = FUN_140c55c70(lVar2 + 0x20);
    uVar3 = FUN_140c5bdc0(uVar3,param_2);
  }
  return uVar3;
}


/* address=140c58a70 name=FUN_140c58a70 */

void FUN_140c58a70(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_140c5a560(param_1);
  uVar1 = FUN_140c55c70(param_1 + 0xe8);
  FUN_140c5c070(uVar1,param_2);
  return;
}


/* address=140c58c30 name=FUN_140c58c30 */

void FUN_140c58c30(undefined8 param_1)

{
  FUN_140c5a560(param_1);
  FUN_140c588f0(param_1,0);
  return;
}


/* address=140c58dd0 name=FUN_140c58dd0 */

bool FUN_140c58dd0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined local_10 [16];
  
  FUN_140c5a560(param_1);
  FUN_140c5d3f0(local_10,param_1 + 0x10);
  uVar2 = FUN_140c55c70(param_1 + 0xe8);
  iVar1 = FUN_140c5c110(uVar2);
  if (iVar1 != 0) {
    lVar3 = FUN_140c55c70(param_1 + 0xe8);
    *param_2 = *(undefined8 *)(lVar3 + 0x10);
    FUN_140c5d450(local_10);
  }
  else {
    *param_2 = 0;
    FUN_140c5d450(local_10);
  }
  return iVar1 != 0;
}


/* address=140c592a0 name=FUN_140c592a0 */

void FUN_140c592a0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_140c5a560(param_1);
  *(undefined4 *)(param_1 + 0x100) = param_2;
  *(undefined8 *)(param_1 + 0x108) = param_3;
  return;
}


/* address=140c59710 name=FUN_140c59710 */

undefined8 FUN_140c59710(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_140c5a500(param_1);
  cVar1 = FUN_140c56050(param_1 + 8);
  if (cVar1 == '\0') {
    cVar1 = FUN_140c56050(param_1 + 8);
    if (cVar1 == '\0') {
      FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0x269);
    }
    uVar2 = 0;
  }
  else {
    lVar3 = FUN_140c55c70(param_1 + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x10);
  }
  return uVar2;
}


/* address=140c59920 name=FUN_140c59920 */

undefined8 FUN_140c59920(longlong param_1)

{
  FUN_140c5a560(param_1);
  return *(undefined8 *)(param_1 + 0x30);
}


/* address=140c59a10 name=FUN_140c59a10 */

undefined8 FUN_140c59a10(undefined4 param_1)

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


/* address=140c59b70 name=FUN_140c59b70 */

undefined8 FUN_140c59b70(void)

{
  return 0;
}


/* address=140c5a0b0 name=FUN_140c5a0b0 */

undefined8 FUN_140c5a0b0(longlong param_1)

{
  undefined8 uVar1;
  undefined local_20 [8];
  undefined8 local_18;
  
  FUN_140c5a560(param_1);
  FUN_140c5d3f0(local_20,param_1 + 0x10);
  uVar1 = FUN_140c55c70(param_1 + 200);
  local_18 = FUN_140c5c660(uVar1,param_1 + 0xd0);
  FUN_140c5d450(local_20);
  return local_18;
}


/* address=140c5a290 name=FUN_140c5a290 */

_Facet_base * FUN_140c5a290(undefined8 *param_1,undefined8 *param_2,int param_3)

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
    FUN_140c6c4e0(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_x509.cc"
                  ,0x3fa);
    local_28 = (_Facet_base *)0x0;
  }
  else {
    FUN_140d35430(local_18,*param_2,(longlong)param_3);
    uVar2 = FUN_140c63b00(local_30,local_18,&PTR_LAB_140fd0540,0);
    FUN_140c55e70(local_38,uVar2);
    FUN_140c56300(local_30);
    cVar1 = FUN_140c56050(local_38);
    if (cVar1 == '\0') {
      local_28 = (_Facet_base *)0x0;
      FUN_140c56300(local_38);
    }
    else {
      if (param_1 != (undefined8 *)0x0) {
        FUN_140c5eba0(*param_1);
        uVar2 = FUN_140c55c70(local_38);
        *param_1 = uVar2;
      }
      uVar2 = FUN_140d354a0(local_18);
      *param_2 = uVar2;
      local_20 = std::
                 unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                 ::release(local_38);
      FUN_140c56300(local_38);
      local_28 = local_20;
    }
  }
  return local_28;
}


/* address=140c5a500 name=FUN_140c5a500 */

void FUN_140c5a500(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_140c55c70(param_1 + 0x68);
    if (*(undefined ***)(lVar1 + 8) != &PTR_LAB_140fd0540) {
      FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0xa3);
    }
  }
  return;
}


/* address=140c5a560 name=FUN_140c5a560 */

void FUN_140c5a560(longlong param_1)

{
  if ((param_1 != 0) && (*(undefined ***)(param_1 + 8) != &PTR_LAB_140fd0540)) {
    FID_conflict__assert((wchar_t *)"c",(wchar_t *)"D",0xa9);
  }
  return;
}


/* address=140c5a5b0 name=FUN_140c5a5b0 */

undefined8 FUN_140c5a5b0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined local_18 [24];
  
  local_20 = 0;
  iVar1 = FUN_140c67e80(param_2,&local_20);
  if (iVar1 < 1) {
    FUN_140c5cfa0(param_1,0);
  }
  else {
    uVar2 = FUN_140c75de0(local_20,(longlong)iVar1,0);
    FUN_140c55e40(local_18,uVar2);
    FUN_140c66200(local_20);
    FUN_140c55e70(param_1,local_18);
    FUN_140c5ccf0(local_18);
  }
  return param_1;
}


/* address=140c5a650 name=FUN_140c5a650 */

undefined8 FUN_140c5a650(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined local_18 [24];
  
  uVar2 = FUN_140c56020();
  FUN_140c55e40(local_18,uVar2);
  cVar1 = FUN_140c56050(local_18);
  if (cVar1 != '\0') {
    uVar2 = FUN_140c55c70(local_18);
    lVar3 = FUN_140c5cc60(uVar2,0);
    if (lVar3 != 0) {
      FUN_140c55e70(param_1,local_18);
      FUN_140c56ac0(local_18);
      return param_1;
    }
  }
  FUN_140c5cfa0(param_1,0);
  FUN_140c56ac0(local_18);
  return param_1;
}


/* address=140c5a6e0 name=FUN_140c5a6e0 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined FUN_140c5a6e0(longlong param_1,undefined8 param_2)

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
  FUN_140c57b60(local_c0);
  cVar1 = FUN_140c57ae0(param_1 + 8,0);
  if (cVar1 != '\0') {
    uVar2 = FUN_140c56020();
    FUN_140c56b00(local_c0,uVar2);
    cVar1 = FUN_140c56050(local_c0);
    if (cVar1 == '\0') {
      FUN_140c56ac0(local_c0);
      return 0;
    }
    uVar2 = FUN_140c55c70(param_1 + 8);
    local_a0 = FUN_140c560c0(uVar2,0);
    local_98 = local_48;
    uVar2 = FUN_140c5cc90(local_88,local_a0);
    local_90 = FUN_140c55e70(local_98,uVar2);
    uVar2 = FUN_140c55c70(local_c0);
    cVar1 = FUN_140c5cfd0(uVar2,local_90);
    local_b8 = (uint)(cVar1 == '\0');
    FUN_140c5ccf0(local_88);
    if (cVar1 == '\0') {
      FUN_140c56ac0(local_c0);
      return 0;
    }
  }
  local_a8 = local_res10;
  FUN_140c5d040(local_58,local_res10[0]);
  FUN_140c5d170(local_38,*local_a8);
  while( true ) {
    puVar4 = local_38;
    puVar5 = local_28;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    cVar1 = FUN_140c5d0c0(local_58,local_28);
    if (cVar1 == '\0') {
      uVar2 = FUN_140c55cd0(local_c0);
      FUN_140c5d1b0(param_1 + 8,uVar2);
      FUN_140c56ac0(local_c0);
      return 1;
    }
    local_78 = FUN_140c5d120(local_58);
    cVar1 = FUN_140c56050(local_c0);
    if (cVar1 == '\0') {
      uVar2 = FUN_140c5a650(local_80);
      FUN_140c5d1b0(local_c0,uVar2);
      FUN_140c56ac0(local_80);
      cVar1 = FUN_140c56050(local_c0);
      if (cVar1 == '\0') {
        FUN_140c56ac0(local_c0);
        return 0;
      }
    }
    uVar2 = FUN_140c5a5b0(local_70,local_78);
    FUN_140c55e70(local_b0,uVar2);
    FUN_140c5ccf0(local_70);
    cVar1 = FUN_140c56050(local_b0);
    if (cVar1 == '\0') break;
    local_68 = local_40;
    uVar2 = FUN_140c55cd0(local_b0);
    local_60 = FUN_140c55e70(local_68,uVar2);
    uVar2 = FUN_140c55c70(local_c0);
    cVar1 = FUN_140c5cfd0(uVar2,local_60);
    if (cVar1 == '\0') break;
    FUN_140c5ccf0(local_b0);
    FUN_140c5d150(local_58);
  }
  FUN_140c5ccf0(local_b0);
  FUN_140c56ac0(local_c0);
  return 0;
}


/* address=140c5aa10 name=FUN_140c5aa10 */

void FUN_140c5aa10(longlong param_1)

{
  FUN_140c67c40(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}


/* address=140c5aa40 name=FUN_140c5aa40 */

void FUN_140c5aa40(longlong param_1)

{
  FUN_140c5cd50(*(undefined8 *)(param_1 + 0x10),FUN_140c67c40);
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


/* address=140c5abc0 name=FUN_140c5abc0 */

void FUN_140c5abc0(longlong param_1)

{
  FUN_140c5aa10(param_1);
  FUN_140c5aa40(param_1);
  FUN_140c67c40(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


/* address=140c5b720 name=FUN_140c5b720 */

void FUN_140c5b720(longlong param_1)

{
  FUN_140c5cd50(*(undefined8 *)(param_1 + 0x58),FUN_140d799c0);
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}


/* address=140c5bae0 name=FUN_140c5bae0 */

void FUN_140c5bae0(longlong param_1)

{
  FUN_140c5cd50(*(undefined8 *)(param_1 + 0xd0),FUN_140d799c0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  return;
}


/* address=140c5bbd0 name=FUN_140c5bbd0 */

undefined FUN_140c5bbd0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined uVar2;
  undefined8 uVar3;
  undefined local_30 [8];
  undefined local_28 [8];
  undefined *local_20;
  undefined local_18 [24];
  
  if (param_2 == 0) {
    FUN_140c6c4e0(0x10,0,0x43,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_x509.cc"
                  ,0x2db);
    uVar2 = 0;
  }
  else {
    uVar3 = FUN_140c5a5b0(local_28,param_2);
    FUN_140c55e70(local_30,uVar3);
    FUN_140c5ccf0(local_28);
    cVar1 = FUN_140c56050(local_30);
    if (cVar1 == '\0') {
      FUN_140c5ccf0(local_30);
      uVar2 = 0;
    }
    else {
      local_20 = local_18;
      uVar3 = FUN_140c55cd0(local_30);
      uVar3 = FUN_140c55e70(local_20,uVar3);
      uVar2 = FUN_140c73c30(param_1,uVar3);
      FUN_140c5ccf0(local_30);
    }
  }
  return uVar2;
}


/* address=140c5bcb0 name=FUN_140c5bcb0 */

bool FUN_140c5bcb0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    FID_conflict__assert((wchar_t *)"c",(wchar_t *)"D",0x2f7);
  }
  if ((*(longlong *)(param_1 + 0x18) == 0) && (cVar1 = operator==<>(param_1 + 8,0), cVar1 == '\0'))
  {
    uVar2 = FUN_140c55c70(param_1 + 8);
    lVar3 = FUN_140c560c0(uVar2,0);
    if (lVar3 == 0) {
      bVar4 = true;
    }
    else {
      uVar2 = FUN_140c67e00(lVar3);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      bVar4 = *(longlong *)(param_1 + 0x18) != 0;
    }
  }
  else {
    bVar4 = true;
  }
  return bVar4;
}


/* address=140c5bd80 name=FUN_140c5bd80 */

undefined8 FUN_140c5bd80(longlong param_1)

{
  int iVar1;
  
  if ((*(longlong *)(param_1 + 0x18) == 0) && (iVar1 = FUN_140c5bcb0(param_1), iVar1 == 0)) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0x18);
}


/* address=140c5bdc0 name=FUN_140c5bdc0 */

bool FUN_140c5bdc0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_140c5a6e0(param_1,param_2);
  if (cVar1 != '\0') {
    FUN_140c5cd50(param_2,FUN_140c67c40);
    FUN_140c5aa40(param_1);
  }
  return cVar1 != '\0';
}


/* address=140c5be20 name=FUN_140c5be20 */

bool FUN_140c5be20(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_140c5a6e0(param_1,param_2);
  if (cVar1 != '\0') {
    FUN_140c5aa40(param_1);
  }
  return cVar1 != '\0';
}


/* address=140c5be70 name=FUN_140c5be70 */

uint FUN_140c5be70(longlong param_1,undefined8 param_2)

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
    FID_conflict__assert((wchar_t *)"c",(wchar_t *)"D",0x333);
  }
  uVar3 = FUN_140c5a5b0(local_50,param_2);
  FUN_140c55e70(local_68,uVar3);
  FUN_140c5ccf0(local_50);
  cVar1 = FUN_140c56050(local_68);
  if (cVar1 == '\0') {
    local_60 = 0;
    FUN_140c5ccf0(local_68);
  }
  else {
    cVar1 = FUN_140c57ae0(param_1 + 8,0);
    if (cVar1 == '\0') {
      uVar3 = FUN_140c5a650(local_38);
      FUN_140c5d1b0(param_1 + 8,uVar3);
      FUN_140c56ac0(local_38);
      cVar1 = FUN_140c56050(param_1 + 8);
      if (cVar1 != '\0') {
        local_30 = local_18;
        uVar3 = FUN_140c55cd0(local_68);
        local_28 = FUN_140c55e70(local_30,uVar3);
        uVar3 = FUN_140c55c70(param_1 + 8);
        cVar1 = FUN_140c5cfd0(uVar3,local_28);
        if (cVar1 != '\0') {
          local_54 = 1;
          FUN_140c5ccf0(local_68);
          return local_54;
        }
      }
      FUN_140c56b00(param_1 + 8,0);
      local_58 = 0;
      FUN_140c5ccf0(local_68);
      local_60 = local_58;
    }
    else {
      local_48 = local_20;
      uVar3 = FUN_140c55cd0(local_68);
      local_40 = FUN_140c55e70(local_48,uVar3);
      uVar3 = FUN_140c55c70(param_1 + 8);
      bVar2 = FUN_140c5cfd0(uVar3,local_40);
      local_5c = (uint)bVar2;
      FUN_140c5ccf0(local_68);
      local_60 = local_5c;
    }
  }
  return local_60;
}


/* address=140c5c070 name=FUN_140c5c070 */

bool FUN_140c5c070(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_140c5be70(param_1,param_2);
  if (iVar1 != 0) {
    FUN_140c67c40(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = param_2;
    FUN_140c5aa40(param_1);
  }
  return iVar1 != 0;
}


/* address=140c5c0d0 name=FUN_140c5c0d0 */

bool FUN_140c5c0d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_140c5be70(param_1,param_2);
  if (iVar1 != 0) {
    FUN_140c5aa40(param_1);
  }
  return iVar1 != 0;
}


/* address=140c5c110 name=FUN_140c5c110 */

undefined4 FUN_140c5c110(longlong param_1)

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
    FID_conflict__assert((wchar_t *)"c",(wchar_t *)"D",0x3a7);
  }
  if ((*(longlong *)(param_1 + 0x10) == 0) && (cVar1 = operator==<>(param_1 + 8,0), cVar1 == '\0'))
  {
    uVar2 = FUN_140c55c70(param_1 + 8);
    uVar3 = FUN_140c560a0(uVar2);
    if (1 < uVar3) {
      uVar2 = FUN_140c56020();
      FUN_140c55e40(local_58,uVar2);
      cVar1 = FUN_140c56050(local_58);
      if (cVar1 == '\0') {
        local_40 = 0;
        FUN_140c5d250(local_58);
        return local_40;
      }
      local_50 = 1;
      while( true ) {
        uVar2 = FUN_140c55c70(param_1 + 8);
        uVar3 = FUN_140c560a0(uVar2);
        if (uVar3 <= local_50) {
          p_Var4 = std::
                   unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                   ::release(local_58);
          *(_Facet_base **)(param_1 + 0x10) = p_Var4;
          local_38 = 1;
          FUN_140c5d250(local_58);
          return local_38;
        }
        uVar2 = FUN_140c55c70(param_1 + 8);
        local_30 = FUN_140c560c0(uVar2,local_50);
        uVar2 = FUN_140c67e00(local_30);
        FUN_140c55e40(local_48,uVar2);
        cVar1 = FUN_140c56050(local_48);
        if (cVar1 == '\0') break;
        local_28 = local_18;
        uVar2 = FUN_140c55cd0(local_48);
        local_20 = FUN_140c55e70(local_28,uVar2);
        uVar2 = FUN_140c55c70(local_58);
        cVar1 = FUN_140c5d340(uVar2,local_20);
        if (cVar1 == '\0') break;
        FUN_140c5ce80(local_48);
        local_50 = local_50 + 1;
      }
      local_3c = 0;
      FUN_140c5ce80(local_48);
      FUN_140c5d250(local_58);
      return local_3c;
    }
  }
  return 1;
}


/* address=140c5c400 name=FUN_140c5c400 */

void FUN_140c5c400(undefined8 param_1,undefined8 param_2)

{
  FUN_140d79a60(param_2);
  return;
}


/* address=140c5c450 name=FUN_140c5c450 */

undefined * FUN_140c5c450(void)

{
  return &LAB_140c5c430;
}


/* address=140c5c470 name=FUN_140c5c470 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_140c5c470(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar2 = FUN_140c56020();
  FUN_140c55e40(local_98,uVar2);
  cVar1 = FUN_140c56050(local_98);
  if (cVar1 == '\0') {
    FUN_140c56ac0(local_98);
  }
  else {
    local_78 = &local_res10;
    FUN_140c5d040(local_58,local_res10);
    FUN_140c5d170(local_40,*local_78);
    while( true ) {
      puVar4 = local_40;
      puVar5 = local_28;
      for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      cVar1 = FUN_140c5d0c0(local_58,local_28);
      if (cVar1 == '\0') {
        uVar2 = FUN_140c55cd0(local_98);
        FUN_140c5d1b0(param_1,uVar2);
        FUN_140c56ac0(local_98);
        return;
      }
      local_70 = FUN_140c5d120(local_58);
      local_80 = 0;
      local_90 = FUN_140d79a30(local_70,&local_80);
      if (local_90 < 0) {
        FUN_140c56ac0(local_98);
        return;
      }
      uVar2 = FUN_140c75de0(local_80,(longlong)local_90,local_res18);
      FUN_140c55e40(local_88,uVar2);
      FUN_140c66200(local_80);
      cVar1 = FUN_140c56050(local_88);
      if (cVar1 == '\0') break;
      local_68 = local_48;
      uVar2 = FUN_140c55cd0(local_88);
      local_60 = FUN_140c55e70(local_68,uVar2);
      uVar2 = FUN_140c55c70(local_98);
      cVar1 = FUN_140c5cfd0(uVar2,local_60);
      if (cVar1 == '\0') break;
      FUN_140c5ccf0(local_88);
      FUN_140c5d150(local_58);
    }
    FUN_140c5ccf0(local_88);
    FUN_140c56ac0(local_98);
  }
  return;
}


/* address=140c5c660 name=FUN_140c5c660 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

_Facet_base * FUN_140c5c660(longlong param_1,_Facet_base **param_2)

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
    uVar3 = FUN_140c56020();
    FUN_140c55e40(local_a8,uVar3);
    cVar1 = FUN_140c56050(local_a8);
    if (cVar1 == '\0') {
      local_80 = (_Facet_base *)0x0;
      FUN_140c5d470(local_a8);
    }
    else {
      local_90 = &local_res8;
      FUN_140c5d040(local_50,local_res8);
      FUN_140c5d170(local_38,*local_90);
      while( true ) {
        puVar6 = local_38;
        puVar7 = local_28;
        for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        cVar1 = FUN_140c5d0c0(local_50,local_28);
        if (cVar1 == '\0') {
          p_Var4 = std::
                   unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                   ::release(local_a8);
          *local_res10 = p_Var4;
          local_58 = *local_res10;
          FUN_140c5d470(local_a8);
          return local_58;
        }
        local_a0 = FUN_140c5d120(local_50);
        local_88 = FUN_140c760b0(local_a0);
        uVar2 = FUN_140c760d0(local_a0);
        uVar3 = FUN_140d799f0(0,&local_88,uVar2);
        FUN_140c55e40(local_98,uVar3);
        cVar1 = FUN_140c56050(local_98);
        if (cVar1 == '\0') break;
        local_78 = FUN_140c760b0(local_a0);
        lVar5 = FUN_140c760d0(local_a0);
        if (local_88 != local_78 + lVar5) break;
        local_70 = local_40;
        uVar3 = FUN_140c55cd0(local_98);
        local_68 = FUN_140c55e70(local_70,uVar3);
        uVar3 = FUN_140c55c70(local_a8);
        cVar1 = FUN_140c5d4b0(uVar3,local_68);
        if (cVar1 == '\0') break;
        FUN_140c5d210(local_98);
        FUN_140c5d150(local_50);
      }
      local_60 = (_Facet_base *)0x0;
      FUN_140c5d210(local_98);
      FUN_140c5d470(local_a8);
      local_80 = local_60;
    }
  }
  else {
    local_80 = *param_2;
  }
  return local_80;
}


/* address=140c5c8b0 name=FUN_140c5c8b0 */

undefined4 FUN_140c5c8b0(undefined8 param_1,longlong param_2,undefined8 param_3)

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
    uVar2 = FUN_140d79000(param_2);
    local_40 = FUN_140d79a30(uVar2,&local_28);
    if (local_40 < 0) {
      local_38 = 0;
    }
    else {
      uVar2 = FUN_140c75de0(local_28,(longlong)local_40,param_3);
      FUN_140c55e40(local_48,uVar2);
      FUN_140c66200(local_28);
      cVar1 = FUN_140c56050(local_48);
      if (cVar1 == '\0') {
        local_38 = 0;
        FUN_140c5ccf0(local_48);
      }
      else {
        local_3c = 0;
        cVar1 = operator==<>(param_1,0);
        if (cVar1 != '\0') {
          uVar2 = FUN_140c56020();
          FUN_140c56b00(param_1,uVar2);
          local_3c = 1;
          cVar1 = operator==<>(param_1,0);
          if (cVar1 != '\0') {
            local_34 = 0;
            FUN_140c5ccf0(local_48);
            return local_34;
          }
        }
        local_20 = local_10;
        uVar2 = FUN_140c55cd0(local_48);
        local_18 = FUN_140c55e70(local_20,uVar2);
        uVar2 = FUN_140c55c70(param_1);
        cVar1 = FUN_140c5cfd0(uVar2,local_18);
        if (cVar1 == '\0') {
          if (local_3c != 0) {
            FUN_140c56b00(param_1,0);
          }
          local_30 = 0;
          FUN_140c5ccf0(local_48);
          local_38 = local_30;
        }
        else {
          local_2c = 1;
          FUN_140c5ccf0(local_48);
          local_38 = local_2c;
        }
      }
    }
  }
  return local_38;
}


/* address=140c5cc00 name=FUN_140c5cc00 */

undefined8 FUN_140c5cc00(longlong *param_1,longlong param_2,int param_3)

{
  FUN_140c69640(*param_1);
  *param_1 = param_2;
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_140c69610(param_2);
  }
  return 1;
}


/* address=140c5cc60 name=FUN_140c5cc60 */

void FUN_140c5cc60(undefined8 param_1,undefined8 param_2)

{
  FUN_140c75700(param_1,param_2);
  return;
}


/* address=140c5cc90 name=FUN_140c5cc90 */

undefined8 FUN_140c5cc90(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  if (param_2 != 0) {
    FUN_140c76080(param_2);
  }
  uVar1 = FUN_140c55e40(local_18,param_2);
  FUN_140c55e70(param_1,uVar1);
  FUN_140c5ccf0(local_18);
  return param_1;
}


/* address=140c5ccf0 name=FUN_140c5ccf0 */

void FUN_140c5ccf0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140c55cd0(param_1);
    FUN_140c5d5c0(uVar1,*param_1);
  }
  return;
}


/* address=140c5cd50 name=FUN_140c5cd50 */

void FUN_140c5cd50(undefined8 param_1,undefined8 param_2)

{
  FUN_140c74f50(param_1,&LAB_140c5cd30,param_2);
  return;
}


/* address=140c5cd80 name=FUN_140c5cd80 */

void FUN_140c5cd80(undefined8 param_1)

{
  FUN_140c756c0(param_1);
  return;
}


/* address=140c5cdc0 name=FUN_140c5cdc0 */

void FUN_140c5cdc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140c759e0(param_1,&LAB_140c5cda0,param_2,&LAB_140c5cd30,param_3);
  return;
}


/* address=140c5ce00 name=FUN_140c5ce00 */

void FUN_140c5ce00(undefined8 param_1)

{
  FUN_140c67c40(param_1);
  return;
}


/* address=140c5ce20 name=FUN_140c5ce20 */

undefined8 FUN_140c5ce20(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  if (param_2 != 0) {
    FUN_140c67ba0(param_2);
  }
  uVar1 = FUN_140c55e40(local_18,param_2);
  FUN_140c55e70(param_1,uVar1);
  FUN_140c5ce80(local_18);
  return param_1;
}


/* address=140c5ce80 name=FUN_140c5ce80 */

void FUN_140c5ce80(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140c55cd0(param_1);
    FUN_140c5d5a0(uVar1,*param_1);
  }
  return;
}


/* address=140c5cec0 name=FUN_140c5cec0 */

void FUN_140c5cec0(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_140c55cd0(param_1);
    FUN_140c5d5a0(uVar2,p_Var1);
  }
  return;
}


/* address=140c5cf10 name=FUN_140c5cf10 */

undefined8 FUN_140c5cf10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_140c55c70(param_2);
  uVar1 = FUN_140c5ce20(local_18,uVar1);
  FUN_140c55e70(param_1,uVar1);
  FUN_140c5ce80(local_18);
  return param_1;
}


/* address=140c5cf60 name=FUN_140c5cf60 */

void FUN_140c5cf60(undefined8 param_1)

{
  FUN_140d799c0(param_1);
  return;
}


/* address=140c5cf80 name=FUN_140c5cf80 */

void FUN_140c5cf80(undefined8 param_1)

{
  FUN_140d6cce0(param_1);
  return;
}


/* address=140c5cfa0 name=FUN_140c5cfa0 */

undefined8 FUN_140c5cfa0(undefined8 param_1)

{
  undefined local_18;
  
  FUN_140c581b0(param_1,local_18);
  return param_1;
}


/* address=140c5cfd0 name=FUN_140c5cfd0 */

bool FUN_140c5cfd0(undefined8 param_1,
                  unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                  *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_140c55c70(param_2);
  lVar2 = FUN_140c75700(param_1,uVar1);
  if (lVar2 != 0) {
    std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
    release(param_2);
    FUN_140c5ccf0(param_2);
  }
  else {
    FUN_140c5ccf0(param_2);
  }
  return lVar2 != 0;
}


/* address=140c5d040 name=FUN_140c5d040 */

undefined8 FUN_140c5d040(undefined8 param_1,undefined8 param_2)

{
  FUN_140c55f50(param_1,param_2,0);
  return param_1;
}


/* address=140c5d070 name=FUN_140c5d070 */

undefined FUN_140c5d070(longlong *param_1,longlong *param_2)

{
  undefined local_18;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}


/* address=140c5d0c0 name=FUN_140c5d0c0 */

bool FUN_140c5d0c0(undefined8 param_1,undefined *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined local_28 [24];
  
  puVar3 = local_28;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  cVar1 = FUN_140c5d070(param_1,local_28);
  return cVar1 == '\0';
}


/* address=140c5d120 name=FUN_140c5d120 */

void FUN_140c5d120(undefined8 *param_1)

{
  FUN_140c74e80(*param_1,param_1[1]);
  return;
}


/* address=140c5d150 name=FUN_140c5d150 */

longlong FUN_140c5d150(longlong param_1)

{
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
  return param_1;
}


/* address=140c5d170 name=FUN_140c5d170 */

undefined8 FUN_140c5d170(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140c74e00(param_2);
  FUN_140c55f50(param_1,param_2,uVar1);
  return param_1;
}


/* address=140c5d1b0 name=FUN_140c5d1b0 */

undefined8
FUN_140c5d1b0(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_140c56b00(param_1,p_Var1);
  uVar2 = FUN_140c55cd0(param_2);
  FUN_140c55cd0(uVar2);
  FUN_140c55cd0(param_1);
  return param_1;
}


/* address=140c5d210 name=FUN_140c5d210 */

void FUN_140c5d210(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140c55cd0(param_1);
    FUN_140c5d580(uVar1,*param_1);
  }
  return;
}


/* address=140c5d250 name=FUN_140c5d250 */

void FUN_140c5d250(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140c55cd0(param_1);
    FUN_140c5d560(uVar1,*param_1);
  }
  return;
}


/* address=140c5d290 name=FUN_140c5d290 */

void FUN_140c5d290(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_140c55cd0(param_1);
    FUN_140c5d560(uVar2,p_Var1);
  }
  return;
}


/* address=140c5d2e0 name=FUN_140c5d2e0 */

undefined8
FUN_140c5d2e0(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_140c5cec0(param_1,p_Var1);
  uVar2 = FUN_140c55cd0(param_2);
  FUN_140c55cd0(uVar2);
  FUN_140c55cd0(param_1);
  return param_1;
}


/* address=140c5d340 name=FUN_140c5d340 */

bool FUN_140c5d340(undefined8 param_1,
                  unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                  *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_140c55c70(param_2);
  lVar2 = FUN_140c75700(param_1,uVar1);
  if (lVar2 != 0) {
    std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
    release(param_2);
    FUN_140c5ce80(param_2);
  }
  else {
    FUN_140c5ce80(param_2);
  }
  return lVar2 != 0;
}


/* address=140c5d3b0 name=FUN_140c5d3b0 */

void FUN_140c5d3b0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140c55cd0(param_1);
    FUN_140c5d540(uVar1,*param_1);
  }
  return;
}


/* address=140c5d3f0 name=FUN_140c5d3f0 */

longlong * FUN_140c5d3f0(longlong *param_1,longlong param_2)

{
  *param_1 = param_2;
  if (*param_1 == 0) {
    FID_conflict__assert((wchar_t *)"m",(wchar_t *)"D",0x290);
  }
  FUN_140d39650(*param_1);
  return param_1;
}


/* address=140c5d450 name=FUN_140c5d450 */

void FUN_140c5d450(undefined8 *param_1)

{
  FUN_140d39690(*param_1);
  return;
}


/* address=140c5d470 name=FUN_140c5d470 */

void FUN_140c5d470(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140c55cd0(param_1);
    FUN_140c5d520(uVar1,*param_1);
  }
  return;
}


/* address=140c5d4b0 name=FUN_140c5d4b0 */

bool FUN_140c5d4b0(undefined8 param_1,
                  unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                  *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_140c55c70(param_2);
  lVar2 = FUN_140c75700(param_1,uVar1);
  if (lVar2 != 0) {
    std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
    release(param_2);
    FUN_140c5d210(param_2);
  }
  else {
    FUN_140c5d210(param_2);
  }
  return lVar2 != 0;
}


/* address=140c5d520 name=FUN_140c5d520 */

void FUN_140c5d520(undefined8 param_1,undefined8 param_2)

{
  FUN_140c5d5e0(param_2);
  return;
}


/* address=140c5d540 name=FUN_140c5d540 */

void FUN_140c5d540(undefined8 param_1,undefined8 param_2)

{
  FUN_140c5cf80(param_2);
  return;
}


/* address=140c5d560 name=FUN_140c5d560 */

void FUN_140c5d560(undefined8 param_1,undefined8 param_2)

{
  FUN_140c5d620(param_2);
  return;
}


/* address=140c5d580 name=FUN_140c5d580 */

void FUN_140c5d580(undefined8 param_1,undefined8 param_2)

{
  FUN_140c5cf60(param_2);
  return;
}


/* address=140c5d5a0 name=FUN_140c5d5a0 */

void FUN_140c5d5a0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c5ce00(param_2);
  return;
}


/* address=140c5d5c0 name=FUN_140c5d5c0 */

void FUN_140c5d5c0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c56030(param_2);
  return;
}


/* address=140c5d5e0 name=FUN_140c5d5e0 */

void FUN_140c5d5e0(undefined8 param_1)

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
  uVar1 = FUN_140c5d730(local_18);
  FUN_140c74f50(param_1,uVar1,0);
  return;
}


/* address=140c5d620 name=FUN_140c5d620 */

void FUN_140c5d620(undefined8 param_1)

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
  uVar1 = FUN_140c5d6c0(local_18);
  FUN_140c74f50(param_1,uVar1,0);
  return;
}


/* address=140c5d660 name=FUN_140c5d660 */

void FUN_140c5d660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140c5ce00(param_3);
  return;
}


/* address=140c5d6c0 name=FUN_140c5d6c0 */

undefined * FUN_140c5d6c0(void)

{
  return &LAB_140c5d690;
}


/* address=140c5d6d0 name=FUN_140c5d6d0 */

void FUN_140c5d6d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140c5cf60(param_3);
  return;
}


/* address=140c5d730 name=FUN_140c5d730 */

undefined * FUN_140c5d730(void)

{
  return &LAB_140c5d700;
}


/* address=140c5ddc0 name=FUN_140c5ddc0 */

undefined4 FUN_140c5ddc0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  
  local_24 = 0;
  uVar2 = FUN_140d7d050();
  lVar3 = FUN_140d33230(uVar2);
  if (lVar3 == 0) {
    FUN_140c6c4e0(0x10,0,7,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_file.cc"
                  ,0x1ba);
  }
  else {
    iVar1 = FUN_140d7d230(lVar3,param_2);
    if (iVar1 < 1) {
      FUN_140c6c4e0(0x10,0,2,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_file.cc"
                    ,0x1bf);
    }
    else {
      if (param_3 == 1) {
        local_28 = 9;
        local_20 = FUN_140d5ebe0(lVar3,0,*(undefined8 *)(param_1 + 0xa0),
                                 *(undefined8 *)(param_1 + 0xa8));
      }
      else {
        if (param_3 != 2) {
          FUN_140c6c4e0(0x10,0,0x75,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_file.cc"
                        ,0x1cb);
          goto LAB_140c5df36;
        }
        local_28 = 0xc;
        local_20 = FUN_140d7e580(lVar3,0);
      }
      if (local_20 == 0) {
        FUN_140c6c4e0(0x10,0,local_28,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_file.cc"
                      ,0x1d0);
      }
      else {
        local_24 = FUN_140c7aca0(param_1,local_20);
        FUN_140d31750(local_20);
      }
    }
  }
LAB_140c5df36:
  FUN_140d332d0(lVar3);
  return local_24;
}


/* address=140c5e100 name=FUN_140c5e100 */

int FUN_140c5e100(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int local_38;
  longlong local_20;
  
  local_38 = 0;
  local_20 = 0;
  FUN_140c6c180();
  uVar3 = FUN_140d7d050();
  lVar4 = FUN_140d33230(uVar3);
  if (lVar4 == 0) {
    FUN_140c6c4e0(0x10,0,7,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_file.cc"
                  ,0x1e7);
  }
  else {
    iVar1 = FUN_140d7d230(lVar4,param_2);
    if (iVar1 < 1) {
      FUN_140c6c4e0(0x10,0,2,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_file.cc"
                    ,0x1ec);
    }
    else {
      local_20 = FUN_140d7f900(lVar4,0,*(undefined8 *)(param_1 + 0xa0),
                               *(undefined8 *)(param_1 + 0xa8));
      if (local_20 == 0) {
        FUN_140c6c4e0(0x10,0,9,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_file.cc"
                      ,499);
      }
      else {
        local_38 = FUN_140c58830(param_1,local_20);
        iVar1 = FUN_140c6bbb0();
        if (iVar1 != 0) {
          local_38 = 0;
        }
        if (local_38 != 0) {
          FUN_140c58c30(param_1);
          do {
            lVar5 = FUN_140d7f680(lVar4,0,*(undefined8 *)(param_1 + 0xa0),
                                  *(undefined8 *)(param_1 + 0xa8));
            if (lVar5 == 0) {
              uVar2 = FUN_140c6bc70();
              iVar1 = FUN_140c55bf0(uVar2);
              if ((iVar1 == 9) && (iVar1 = FUN_140c5e9d0(uVar2), iVar1 == 0x6e)) {
                FUN_140c6c180();
              }
              else {
                local_38 = 0;
              }
              goto LAB_140c5e2d8;
            }
            iVar1 = FUN_140c58a70(param_1);
          } while (iVar1 != 0);
          FUN_140c67c40(lVar5);
          local_38 = 0;
        }
      }
    }
  }
LAB_140c5e2d8:
  FUN_140c67c40(local_20);
  FUN_140d332d0(lVar4);
  return local_38;
}


/* address=140c5e540 name=FUN_140c5e540 */

void FUN_140c5e540(undefined8 param_1,undefined8 param_2)

{
  FUN_140c5e5a0(param_1,param_2,1);
  return;
}


/* address=140c5e5a0 name=FUN_140c5e5a0 */

undefined4 FUN_140c5e5a0(undefined8 param_1,undefined8 param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined local_a0 [8];
  undefined local_98 [8];
  ulonglong local_90;
  undefined local_88 [8];
  undefined local_80 [8];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined *local_20;
  undefined local_18 [8];
  undefined local_10 [16];
  
  uVar4 = FUN_140c5ea20(&LAB_140c5e570);
  FUN_140c55e40(local_a0,uVar4);
  cVar2 = operator==<>(local_a0,0);
  if (cVar2 == '\0') {
    local_50 = param_1;
    local_48 = FUN_140c5ead0(param_1,&LAB_140c5e570);
    FUN_140c5eab0(param_1);
    bVar1 = true;
    while( true ) {
      FUN_140d7f680(param_2,0,0,0);
      FUN_140c55e40(local_98);
      cVar2 = operator==<>(local_98);
      if (cVar2 != '\0') break;
      bVar1 = false;
      uVar4 = FUN_140c55c70(local_98);
      local_60 = FUN_140d79000(uVar4);
      iVar3 = FUN_140c5ea70(param_1);
      if (iVar3 == 0) {
        uVar4 = FUN_140d79a60(local_60);
        FUN_140c55e40(local_80,uVar4);
        cVar2 = operator==<>(local_80,0);
        if (cVar2 != '\0') {
LAB_140c5e78d:
          local_70 = 0;
          FUN_140c5d210(local_80);
          FUN_140c5ce80(local_98);
          FUN_140c5e9a0(&local_50);
          FUN_140c5d470(local_a0);
          return local_70;
        }
        local_40 = local_18;
        uVar4 = FUN_140c55cd0(local_80);
        local_38 = FUN_140c55e70(local_40,uVar4);
        uVar4 = FUN_140c55c70(local_a0);
        cVar2 = FUN_140c5d4b0(uVar4);
        if (cVar2 == '\0') goto LAB_140c5e78d;
        FUN_140c5d210(local_80);
        FUN_140c5ce80(local_98);
      }
      else {
        FUN_140c5ce80(local_98);
      }
    }
    if ((bVar1) && (param_3 == '\0')) {
      local_74 = 0;
      FUN_140c5ce80(local_98);
      FUN_140c5e9a0(&local_50);
      FUN_140c5d470(local_a0);
      local_78 = local_74;
    }
    else {
      FUN_140c6c180();
      FUN_140c5ce80(local_98);
      uVar4 = FUN_140c55c70(local_a0);
      FUN_140c5eab0(uVar4);
      uVar4 = FUN_140c55c70(local_a0);
      local_58 = FUN_140c560a0(uVar4);
      for (local_90 = 0; local_90 < local_58; local_90 = local_90 + 1) {
        uVar4 = FUN_140c55c70(local_a0);
        uVar4 = FUN_140c560c0(uVar4,local_90);
        FUN_140c55e40(local_88,uVar4);
        uVar4 = FUN_140c55c70(local_a0);
        FUN_140c5ea40(uVar4,local_90,0);
        if (local_90 + 1 < local_58) {
          local_30 = local_90 + 1;
          uVar4 = FUN_140c55c70(local_a0);
          local_28 = FUN_140c560c0(uVar4,local_30);
          uVar4 = FUN_140c55c70(local_88);
          iVar3 = FUN_140d79480(uVar4,local_28);
          if (iVar3 != 0) goto LAB_140c5e8e5;
          FUN_140c5d210(local_88);
        }
        else {
LAB_140c5e8e5:
          local_20 = local_10;
          uVar4 = FUN_140c55cd0(local_88);
          uVar4 = FUN_140c55e70(local_20,uVar4);
          cVar2 = FUN_140c5d4b0(param_1,uVar4);
          if (cVar2 == '\0') {
            local_6c = 0;
            FUN_140c5d210(local_88);
            FUN_140c5e9a0(&local_50);
            FUN_140c5d470(local_a0);
            return local_6c;
          }
          FUN_140c5d210(local_88);
        }
      }
      FUN_140c5eab0(param_1);
      local_68 = 1;
      FUN_140c5e9a0(&local_50);
      FUN_140c5d470(local_a0);
      local_78 = local_68;
    }
  }
  else {
    local_78 = 0;
    FUN_140c5d470(local_a0);
  }
  return local_78;
}


/* address=140c5e9a0 name=FUN_140c5e9a0 */

void FUN_140c5e9a0(undefined8 *param_1)

{
  FUN_140c5ead0(*param_1,param_1[1]);
  return;
}


/* address=140c5e9d0 name=FUN_140c5e9d0 */

uint FUN_140c5e9d0(uint param_1)

{
  return param_1 & 0xfff;
}


/* address=140c5ea20 name=FUN_140c5ea20 */

void FUN_140c5ea20(undefined8 param_1)

{
  FUN_140c74d20(param_1);
  return;
}


/* address=140c5ea40 name=FUN_140c5ea40 */

void FUN_140c5ea40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140c74ec0(param_1,param_2,param_3);
  return;
}


/* address=140c5ea70 name=FUN_140c5ea70 */

void FUN_140c5ea70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140c753e0(param_1,param_2,param_3,&LAB_140c5e9e0);
  return;
}


/* address=140c5eab0 name=FUN_140c5eab0 */

void FUN_140c5eab0(undefined8 param_1)

{
  FUN_140c75880(param_1,&LAB_140c5e9e0);
  return;
}


/* address=140c5ead0 name=FUN_140c5ead0 */

void FUN_140c5ead0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c75980(param_1,param_2);
  return;
}


/* address=140c5eb00 name=FUN_140c5eb00 */

void FUN_140c5eb00(undefined8 param_1)

{
  FUN_140e0fcc0(param_1);
  return;
}


/* address=140c5eb70 name=FUN_140c5eb70 */

undefined8 FUN_140c5eb70(undefined8 param_1)

{
  FUN_140d39500(param_1);
  return 1;
}


/* address=140c5eba0 name=FUN_140c5eba0 */

void FUN_140c5eba0(longlong param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = FUN_140d39550(param_1), iVar1 != 0)) {
    FUN_140c634e0(param_1,0);
    FUN_140c66200(param_1);
  }
  return;
}


/* address=140c5f080 name=FUN_140c5f080 */

undefined4 FUN_140c5f080(longlong param_1)

{
  char cVar1;
  undefined4 local_18;
  
  if ((*(byte *)(param_1 + 0x1a8) >> 2 & 1) == 0) {
    if (*(char *)(param_1 + 0x3b) == '\0') {
      cVar1 = FUN_140c55f90(param_1 + 0xe8);
      if (cVar1 != '\0') goto LAB_140c5f0d2;
    }
    local_18 = 1;
  }
  else {
LAB_140c5f0d2:
    local_18 = 0;
  }
  return local_18;
}


/* address=140c5f2e0 name=FUN_140c5f2e0 */

undefined8 FUN_140c5f2e0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) >> 5 & 1) == 0) {
    cVar1 = operator==<>(*(longlong *)(param_1 + 0x30) + 0x118,0);
    if (cVar1 == '\0') {
      lVar2 = FUN_140c55c70(*(longlong *)(param_1 + 0x30) + 0x118);
      if (*(int *)(lVar2 + 0x14) == 0) {
        FUN_140c608f0(param_1,param_2);
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* address=140c5f400 name=FUN_140c5f400 */

undefined FUN_140c5f400(longlong param_1,undefined8 param_2)

{
  undefined uVar1;
  undefined8 uVar2;
  undefined local_30 [8];
  undefined local_28 [8];
  undefined *local_20;
  undefined local_18 [8];
  undefined local_10 [16];
  
  uVar2 = FUN_140c562a0(local_28,param_2);
  FUN_140c55e70(local_30,uVar2);
  FUN_140c56300(local_28);
  FUN_140c5d3f0(local_18,param_1 + 0x10);
  local_20 = local_10;
  uVar2 = FUN_140c55cd0(local_30);
  uVar2 = FUN_140c55e70(local_20,uVar2);
  uVar1 = FUN_140c62ef0(param_1,uVar2);
  FUN_140c5d450(local_18);
  FUN_140c56300(local_30);
  return uVar1;
}


/* address=140c5f4b0 name=FUN_140c5f4b0 */

undefined FUN_140c5f4b0(undefined8 param_1,undefined8 param_2)

{
  undefined uVar1;
  
  uVar1 = FUN_140c62dd0(param_1,param_2,1);
  return uVar1;
}


/* address=140c5f4e0 name=FUN_140c5f4e0 */

void FUN_140c5f4e0(longlong param_1,undefined8 param_2)

{
  undefined local_28 [8];
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_10 = *(longlong *)(param_1 + 0x38);
  if (local_10 != 0) {
    local_20 = param_1;
    local_18 = param_2;
    FUN_140c5d3f0(local_28,param_1 + 0x10);
    FUN_140c63490(local_10,&LAB_140c63020,&local_20);
    FUN_140c5d450(local_28);
  }
  return;
}


/* address=140c5f560 name=FUN_140c5f560 */

void FUN_140c5f560(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x68) = param_2;
  return;
}


/* address=140c5f620 name=FUN_140c5f620 */

undefined * FUN_140c5f620(void)

{
  return &DAT_140fd2250;
}


/* address=140c5f630 name=FUN_140c5f630 */

undefined4 FUN_140c5f630(longlong param_1)

{
  ushort uVar1;
  undefined4 local_18;
  
  uVar1 = FUN_140c60850(param_1);
  if ((uVar1 < 0x304) || (*(int *)(param_1 + 0x174) == 0)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}


/* address=140c5f900 name=FUN_140c5f900 */

void FUN_140c5f900(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_140c57ae0(*(longlong *)(param_1 + 0x30) + 0x1d0,0);
  if (cVar1 == '\0') {
    lVar2 = FUN_140c55c70(*(longlong *)(param_1 + 0x30) + 0x118);
    if (lVar2 == 0) {
      FID_conflict__assert((wchar_t *)"h",(wchar_t *)"D",0x49f);
    }
    if ((*(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) >> 5 & 1) != 0) {
      FID_conflict__assert((wchar_t *)"!",(wchar_t *)"D",0x4a0);
    }
    cVar1 = FUN_140c56050(lVar2 + 0x5e8);
    if (cVar1 == '\0') {
      FUN_140d42550(lVar2);
    }
    else {
      FUN_140c55c70(lVar2 + 0x5e8);
    }
  }
  else {
    FUN_140c55c70(*(longlong *)(param_1 + 0x30) + 0x1d0);
  }
  return;
}


/* address=140c5fa40 name=FUN_140c5fa40 */

int FUN_140c5fa40(void *param_1,void *param_2,size_t param_3)

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


/* address=140c5fa80 name=FUN_140c5fa80 */

undefined8 FUN_140c5fa80(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140c5fad0 name=FUN_140c5fad0 */

undefined8 FUN_140c5fad0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140c5fb20 name=FUN_140c5fb20 */

undefined8 FUN_140c5fb20(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e28d40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140c5fb60 name=FUN_140c5fb60 */

void FUN_140c5fb60(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined auStack_c8 [32];
  undefined4 local_a8;
  byte local_98;
  undefined local_90 [8];
  undefined local_88;
  undefined local_87;
  undefined local_86;
  longlong local_80;
  ushort local_78;
  byte *local_70;
  byte *local_68;
  byte *local_60;
  undefined local_58 [8];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_1413d9c40 ^ (ulonglong)auStack_c8;
  local_80 = *param_1;
  if ((*(uint *)(local_80 + 0x84) & 0x200) == 0) {
    lVar2 = FUN_140c55c70(local_80 + 0x68);
    uVar3 = FUN_140c60400(local_58,*(undefined8 *)(lVar2 + 8));
    FUN_140c55e70(local_90,uVar3);
    FUN_140c56300(local_58);
    cVar1 = operator==<>(local_90,0);
    if (cVar1 == '\0') {
      lVar2 = FUN_140c55c70(local_90);
      local_70 = (byte *)(lVar2 + 0x1a8);
      *local_70 = *local_70 & 0xef | (*(byte *)(local_80 + 0xa4) & 1) << 4;
      lVar2 = FUN_140c55c70(local_90);
      *(undefined2 *)(lVar2 + 4) = *(undefined2 *)(local_80 + 0x10);
      local_98 = *(longlong *)(local_80 + 0x98) != 0;
      lVar2 = FUN_140c55c70(local_90);
      local_68 = (byte *)(lVar2 + 0x1a8);
      *local_68 = *local_68 & 0xdf | (local_98 & 1) << 5;
      FUN_140c54100(local_80,local_20);
      lVar2 = FUN_140c55c70(local_90);
      *(undefined8 *)(lVar2 + 0xc0) = local_20[0];
      local_78 = FUN_140c6de20(local_80);
      if (local_78 < 0x304) {
        local_48 = FUN_140c55c70(local_80 + 0x70);
        lVar2 = FUN_140c55c70(local_90);
        *(undefined4 *)(lVar2 + 0xb4) = *(undefined4 *)(local_48 + 0x60);
        local_40 = FUN_140c55c70(local_80 + 0x70);
        lVar2 = FUN_140c55c70(local_90);
        *(undefined4 *)(lVar2 + 0xb8) = *(undefined4 *)(local_40 + 0x60);
      }
      else {
        local_50 = FUN_140c55c70(local_80 + 0x70);
        lVar2 = FUN_140c55c70(local_90);
        *(undefined4 *)(lVar2 + 0xb4) = *(undefined4 *)(local_50 + 100);
        lVar2 = FUN_140c55c70(local_90);
        *(undefined4 *)(lVar2 + 0xb8) = 0x93a80;
      }
      lVar2 = FUN_140c55c70(param_1[1] + 0x20);
      if (*(byte *)(lVar2 + 0x70) < 0x21) {
        lVar2 = FUN_140c55c70(param_1[1] + 0x20);
        local_38 = (ulonglong)*(byte *)(lVar2 + 0x70);
        local_30 = FUN_140c55c70(param_1[1] + 0x20);
        local_30 = local_30 + 0x71;
        lVar2 = FUN_140c55c70(local_90);
        FUN_140c5fa80(lVar2 + 0x5d,local_30,local_38);
        local_28 = FUN_140c55c70(param_1[1] + 0x20);
        lVar2 = FUN_140c55c70(local_90);
        *(undefined *)(lVar2 + 0x5c) = *(undefined *)(local_28 + 0x70);
        lVar2 = FUN_140c55c70(local_90);
        local_60 = (byte *)(lVar2 + 0x1a8);
        *local_60 = *local_60 | 4;
        lVar2 = FUN_140c55c70(local_90);
        *(undefined4 *)(lVar2 + 0xb0) = 0x41;
        uVar3 = FUN_140c55cd0(local_90);
        FUN_140c580d0(param_1 + 0xbc,uVar3);
        FUN_140c608f0(local_80,0);
        local_86 = 1;
        FUN_140c56300(local_90);
      }
      else {
        local_a8 = 0x183;
        FUN_140c6c4e0(0x10,0,0x44,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_session.cc"
                     );
        local_87 = 0;
        FUN_140c56300(local_90);
      }
    }
    else {
      local_88 = 0;
      FUN_140c56300(local_90);
    }
  }
  else {
    local_a8 = 0x163;
    FUN_140c6c4e0(0x10,0,0xd1,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_session.cc"
                 );
  }
  FUN_140db44f0(local_10 ^ (ulonglong)auStack_c8);
  return;
}


/* address=140c5ff70 name=FUN_140c5ff70 */

ulonglong FUN_140c5ff70(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 local_20;
  undefined local_18 [8];
  undefined8 local_10 [2];
  
  local_20 = 0;
  uVar2 = FUN_140c63820(param_3,&local_20,local_10);
  if ((int)uVar2 == 0) {
    uVar2 = uVar2 & 0xffffffffffffff00;
  }
  else {
    FUN_140c55e40(local_18,local_20);
    lVar3 = FUN_140c55c70(*param_1 + 0x70);
    if (*(longlong *)(lVar3 + 0x208) == 0) {
      iVar1 = FUN_140c621b0(param_1,param_2,local_20,local_10[0]);
      FUN_140c56a30(local_18);
      uVar2 = (ulonglong)(iVar1 != 0);
    }
    else {
      iVar1 = FUN_140c627f0(param_1,param_2,local_20,local_10[0]);
      FUN_140c56a30(local_18);
      uVar2 = (ulonglong)(iVar1 != 0);
    }
  }
  return uVar2;
}


/* address=140c60080 name=FUN_140c60080 */

void FUN_140c60080(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined auStack_78 [32];
  undefined local_58;
  undefined local_57;
  undefined local_56;
  undefined local_50 [8];
  undefined local_48 [8];
  longlong *local_40;
  undefined local_38 [8];
  undefined local_30 [8];
  longlong local_28;
  ulonglong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_1413d9c40 ^ (ulonglong)auStack_78;
  FUN_140c54140(param_1,local_20);
  FUN_140c57f50(local_48,param_1 + 0x10);
  cVar1 = FUN_140c56050(param_1 + 0x140);
  if (cVar1 != '\0') {
    lVar2 = FUN_140c55c70(param_1 + 0x140);
    if (*(longlong *)(lVar2 + 0x30) != 0) {
      lVar2 = FUN_140c55c70(param_1 + 0x140);
      if (*(ulonglong *)(lVar2 + 0x30) <= local_20[0]) goto LAB_140c6017b;
    }
    cVar1 = FUN_140c56050(param_1 + 0x148);
    if (cVar1 != '\0') {
      lVar2 = FUN_140c55c70(param_1 + 0x148);
      if (*(ulonglong *)(lVar2 + 0x30) <= local_20[0]) goto LAB_140c6017b;
    }
    local_58 = 1;
    FUN_140c57fb0(local_48);
    goto LAB_140c603e0;
  }
LAB_140c6017b:
  FUN_140c57fb0(local_48);
  FUN_140c5d3f0(local_38,param_1 + 0x10);
  cVar1 = FUN_140c56050(param_1 + 0x140);
  if (cVar1 == '\0') {
LAB_140c60203:
    uVar3 = FUN_140c57fd0(local_30);
    FUN_140c55e70(local_50,uVar3);
    FUN_140c574e0(local_30);
    cVar1 = FUN_140c56050(local_50);
    if (cVar1 == '\0') {
      local_57 = 0;
      FUN_140c574e0(local_50);
      FUN_140c5d450(local_38);
      goto LAB_140c603e0;
    }
    uVar3 = FUN_140c55c70(local_50);
    FUN_140ca8a50(uVar3,0x10);
    lVar2 = FUN_140c55c70(local_50);
    FUN_140ca8a50(lVar2 + 0x10,0x10);
    lVar2 = FUN_140c55c70(local_50);
    FUN_140ca8a50(lVar2 + 0x20,0x10);
    local_28 = local_20[0] + 0x2a300;
    lVar2 = FUN_140c55c70(local_50);
    *(longlong *)(lVar2 + 0x30) = local_28;
    cVar1 = FUN_140c56050(param_1 + 0x140);
    if (cVar1 != '\0') {
      lVar2 = FUN_140c55c70(param_1 + 0x140);
      local_40 = (longlong *)(lVar2 + 0x30);
      *local_40 = *local_40 + 0x2a300;
      uVar3 = FUN_140c55cd0(param_1 + 0x140);
      FUN_140c58010(param_1 + 0x148,uVar3);
    }
    uVar3 = FUN_140c55cd0(local_50);
    FUN_140c58010(param_1 + 0x140,uVar3);
    FUN_140c574e0(local_50);
  }
  else {
    lVar2 = FUN_140c55c70(param_1 + 0x140);
    if (*(longlong *)(lVar2 + 0x30) != 0) {
      lVar2 = FUN_140c55c70(param_1 + 0x140);
      if (*(ulonglong *)(lVar2 + 0x30) <= local_20[0]) goto LAB_140c60203;
    }
  }
  cVar1 = FUN_140c56050(param_1 + 0x148);
  if (cVar1 != '\0') {
    lVar2 = FUN_140c55c70(param_1 + 0x148);
    if (*(ulonglong *)(lVar2 + 0x30) <= local_20[0]) {
      FUN_140c57520(param_1 + 0x148,0);
    }
  }
  local_56 = 1;
  FUN_140c5d450(local_38);
LAB_140c603e0:
  FUN_140db44f0(local_10 ^ (ulonglong)auStack_78);
  return;
}


/* address=140c60400 name=FUN_140c60400 */

undefined8 FUN_140c60400(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  undefined local_18 [24];
  
  local_res10[0] = param_2;
  uVar1 = FUN_140c63520(local_18,local_res10);
  FUN_140c55e70(param_1,uVar1);
  FUN_140c56300(local_18);
  return param_1;
}


/* address=140c60450 name=FUN_140c60450 */

uint FUN_140c60450(undefined *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined local_48 [4];
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined8 local_30;
  undefined local_28 [24];
  
  uVar1 = FUN_140c55f80(param_1);
  if (uVar1 < 4) {
    FUN_140c5fb20(local_48,0,4);
    local_30 = FUN_140c55f80(param_1);
    uVar2 = FUN_140c55c70(param_1);
    FUN_140c5fa80(local_48,uVar2,local_30);
    FUN_140c63570(local_28,local_48);
    puVar5 = local_28;
    puVar6 = param_1;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  pbVar3 = (byte *)FUN_140c631f0(param_1,0);
  local_44 = (uint)*pbVar3;
  pbVar3 = (byte *)FUN_140c631f0(param_1,1);
  local_40 = local_44 | (uint)*pbVar3 << 8;
  pbVar3 = (byte *)FUN_140c631f0(param_1,2);
  local_3c = local_40 | (uint)*pbVar3 << 0x10;
  pbVar3 = (byte *)FUN_140c631f0(param_1,3);
  return local_3c | (uint)*pbVar3 << 0x18;
}


/* address=140c60560 name=FUN_140c60560 */

ulonglong FUN_140c60560(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  ulonglong in_RAX;
  longlong lVar4;
  byte local_18;
  
  if (param_2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  cVar1 = *(char *)(param_2 + 0x5c);
  lVar4 = FUN_140c55c70(*(longlong *)(param_1 + 8) + 0x20);
  if (cVar1 == *(char *)(lVar4 + 0x70)) {
    lVar4 = FUN_140c55c70(*(longlong *)(param_1 + 8) + 0x20);
    uVar2 = *(undefined *)(lVar4 + 0x70);
    lVar4 = FUN_140c55c70(*(longlong *)(param_1 + 8) + 0x20);
    iVar3 = FUN_140c5fa40(param_2 + 0x5d,lVar4 + 0x71,uVar2);
    if (iVar3 == 0) {
      local_18 = 1;
      goto LAB_140c6060b;
    }
  }
  local_18 = 0;
LAB_140c6060b:
  return (ulonglong)local_18;
}


/* address=140c60620 name=FUN_140c60620 */

void FUN_140c60620(undefined8 param_1,longlong param_2)

{
  undefined auStack_48 [32];
  uint local_28;
  ulonglong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_1413d9c40 ^ (ulonglong)auStack_48;
  if ((param_2 != 0) &&
     (FUN_140c54100(param_1,local_20), *(ulonglong *)(param_2 + 0xc0) <= local_20[0])) {
    local_28 = (uint)(local_20[0] - *(longlong *)(param_2 + 0xc0) <
                     (ulonglong)*(uint *)(param_2 + 0xb4));
  }
  FUN_140db44f0(local_10 ^ (ulonglong)auStack_48);
  return;
}


/* address=140c606d0 name=FUN_140c606d0 */

undefined FUN_140c606d0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  cVar1 = FUN_140c60560(param_1,param_2);
  if ((((cVar1 != '\0') && ((*(byte *)(lVar3 + 0xa4) & 1) == (*(byte *)(param_2 + 0x1a8) >> 4 & 1)))
      && (cVar1 = FUN_140c60620(lVar3,param_2), cVar1 != '\0')) &&
     ((*(short *)(lVar3 + 0x10) == *(short *)(param_2 + 4) &&
      (param_1[0xc0] == *(longlong *)(param_2 + 200))))) {
    uVar2 = FUN_140c55c70(param_2 + 0x88);
    lVar3 = FUN_140c560a0(uVar2);
    if ((((lVar3 == 0) && ((*(byte *)(param_2 + 0x1a8) >> 1 & 1) == 0)) ||
        ((*(byte *)(param_2 + 0x1a8) >> 1 & 1) == (*(byte *)(param_1[1] + 0xed) >> 5 & 1))) &&
       ((*(longlong *)(*param_1 + 0x98) != 0) == (bool)(*(byte *)(param_2 + 0x1a8) >> 5 & 1))) {
      return 1;
    }
  }
  return 0;
}


/* address=140c60850 name=FUN_140c60850 */

undefined2 FUN_140c60850(longlong param_1)

{
  char cVar1;
  undefined2 local_18 [12];
  
  cVar1 = FUN_140c6d7e0(local_18,*(undefined2 *)(param_1 + 4));
  if (cVar1 == '\0') {
    FID_conflict__assert(L"0",(wchar_t *)"D",0x154);
    local_18[0] = 0;
  }
  return local_18[0];
}


/* address=140c608b0 name=FUN_140c608b0 */

void FUN_140c608b0(longlong param_1)

{
  undefined2 uVar1;
  
  uVar1 = FUN_140c60850(param_1);
  FUN_140c6f720(uVar1,*(undefined8 *)(param_1 + 200));
  return;
}


/* address=140c608f0 name=FUN_140c608f0 */

void FUN_140c608f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined local_18 [24];
  
  lVar1 = FUN_140c55c70(param_1 + 0x58);
  if (lVar1 != param_2) {
    uVar2 = FUN_140c562a0(local_18,param_2);
    FUN_140c580d0(param_1 + 0x58,uVar2);
    FUN_140c56300(local_18);
  }
  return;
}


/* address=140c60950 name=FUN_140c60950 */

int FUN_140c60950(longlong *param_1,undefined8 param_2,char *param_3,undefined *param_4,
                 longlong param_5)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  char local_b8;
  undefined local_b6 [6];
  undefined local_b0 [8];
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined local_90 [24];
  undefined local_78 [16];
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [24];
  
  if ((*(byte *)(*param_1 + 0xa4) & 1) == 0) {
    FID_conflict__assert((wchar_t *)"h",(wchar_t *)"D",0x2ca);
  }
  FUN_140c57b60(local_b0);
  local_b6[0] = 0;
  uVar2 = FUN_140c4d910(*param_1);
  if (((uVar2 & 0x4000) == 0) && (cVar1 = FUN_140d272a0(param_5,local_90,0x23), cVar1 != '\0')) {
    local_b8 = '\x01';
  }
  else {
    local_b8 = '\0';
  }
  if ((local_b8 == '\0') || (lVar3 = FUN_140d354c0(local_90), lVar3 == 0)) {
    puVar4 = (undefined *)
             FUN_140c55fe0(local_28,*(undefined8 *)(param_5 + 0x30),*(undefined8 *)(param_5 + 0x38))
    ;
    puVar6 = local_58;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    local_a4 = FUN_140c62940(param_1,local_b0,local_58);
    if (local_a4 != 1) {
      local_98 = local_a4;
      FUN_140c56300(local_b0);
      return local_98;
    }
  }
  else {
    puVar4 = (undefined *)
             FUN_140c55fe0(local_48,*(undefined8 *)(param_5 + 0x30),*(undefined8 *)(param_5 + 0x38))
    ;
    puVar6 = local_78;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar4 = (undefined *)FUN_140c630f0(local_90,local_38);
    puVar6 = local_68;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    local_a8 = FUN_140d287c0(param_1,local_b0,local_b6,local_68,local_78);
    if (local_a8 == 1) {
      local_9c = 0xb;
      FUN_140c56300(local_b0);
      return local_9c;
    }
    if (local_a8 == 2) {
      cVar1 = FUN_140c56050(local_b0);
      if (cVar1 != '\0') {
        FID_conflict__assert((wchar_t *)"!",(wchar_t *)"D",0x2db);
      }
    }
    else if (local_a8 == 3) {
      local_a0 = 0;
      FUN_140c56300(local_b0);
      return local_a0;
    }
  }
  uVar5 = FUN_140c55cd0(local_b0);
  FUN_140c580d0(param_2,uVar5);
  *param_3 = local_b8;
  *param_4 = local_b6[0];
  local_94 = 1;
  FUN_140c56300(local_b0);
  return local_94;
}


/* address=140c60c00 name=FUN_140c60c00 */

undefined8 FUN_140c60c00(undefined8 param_1,longlong param_2,uint param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined local_1b8 [8];
  undefined local_1b0 [8];
  byte *local_1a8;
  byte *local_1a0;
  byte *local_198;
  byte *local_190;
  byte *local_188;
  byte *local_180;
  undefined local_178 [8];
  ulonglong local_170;
  longlong local_168;
  ulonglong local_160;
  longlong local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  undefined local_128 [8];
  undefined8 local_120;
  undefined local_118 [8];
  longlong local_110;
  ulonglong local_108;
  longlong local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
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
  
  uVar2 = FUN_140c60400(local_178,*(undefined8 *)(param_2 + 0x90));
  FUN_140c55e70(local_1b8,uVar2);
  FUN_140c56300(local_178);
  cVar1 = FUN_140c56050(local_1b8);
  if (cVar1 == '\0') {
    FUN_140c5cfa0(param_1,0);
    FUN_140c56300(local_1b8);
    return param_1;
  }
  lVar3 = FUN_140c55c70(local_1b8);
  local_1a8 = (byte *)(lVar3 + 0x1a8);
  *local_1a8 = *local_1a8 & 0xef | (*(byte *)(param_2 + 0x1a8) >> 4 & 1) << 4;
  lVar3 = FUN_140c55c70(local_1b8);
  *(undefined2 *)(lVar3 + 4) = *(undefined2 *)(param_2 + 4);
  lVar3 = FUN_140c55c70(local_1b8);
  local_1a0 = (byte *)(lVar3 + 0x1a8);
  *local_1a0 = *local_1a0 & 0xdf | (*(byte *)(param_2 + 0x1a8) >> 5 & 1) << 5;
  lVar3 = FUN_140c55c70(local_1b8);
  *(undefined *)(lVar3 + 0x5c) = *(undefined *)(param_2 + 0x5c);
  local_170 = (ulonglong)*(byte *)(param_2 + 0x5c);
  local_168 = param_2 + 0x5d;
  lVar3 = FUN_140c55c70(local_1b8);
  FUN_140c5fa80(lVar3 + 0x5d,local_168,local_170);
  lVar3 = FUN_140c55c70(local_1b8);
  *(undefined *)(lVar3 + 10) = *(undefined *)(param_2 + 10);
  local_160 = (ulonglong)*(byte *)(param_2 + 10);
  local_158 = param_2 + 0xb;
  lVar3 = FUN_140c55c70(local_1b8);
  FUN_140c5fa80(lVar3 + 0xb,local_158,local_160);
  lVar3 = FUN_140c55c70(local_1b8);
  *(undefined8 *)(lVar3 + 200) = *(undefined8 *)(param_2 + 200);
  cVar1 = FUN_140c57ae0(param_2 + 0x80,0);
  if (cVar1 != '\0') {
    uVar2 = FUN_140c55c70(param_2 + 0x80);
    local_150 = FUN_140c66520(uVar2);
    lVar3 = FUN_140c55c70(local_1b8);
    FUN_140c56a70(lVar3 + 0x80,local_150);
    lVar3 = FUN_140c55c70(local_1b8);
    cVar1 = operator==<>(lVar3 + 0x80,0);
    if (cVar1 != '\0') {
      FUN_140c5cfa0(param_1,0);
      FUN_140c56300(local_1b8);
      return param_1;
    }
  }
  cVar1 = FUN_140c57ae0(param_2 + 0x88,0);
  if (cVar1 != '\0') {
    puVar4 = local_1b0;
    for (lVar3 = 1; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_148 = FUN_140c62190(local_1b0 + 1);
    uVar2 = FUN_140c55c70(param_2 + 0x88);
    local_140 = FUN_140c5cdc0(uVar2,local_148,FUN_140c75f60);
    lVar3 = FUN_140c55c70(local_1b8);
    FUN_140c56b00(lVar3 + 0x88,local_140);
    lVar3 = FUN_140c55c70(local_1b8);
    cVar1 = operator==<>(lVar3 + 0x88,0);
    if (cVar1 != '\0') {
      FUN_140c5cfa0(param_1,0);
      FUN_140c56300(local_1b8);
      return param_1;
    }
  }
  uVar2 = FUN_140c55c70(local_1b8);
  local_138 = *(longlong *)(param_2 + 0x90);
  cVar1 = (**(code **)(local_138 + 0x38))(uVar2,param_2);
  if (cVar1 == '\0') {
    FUN_140c5cfa0(param_1,0);
    FUN_140c56300(local_1b8);
    return param_1;
  }
  lVar3 = FUN_140c55c70(local_1b8);
  *(undefined4 *)(lVar3 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  local_130 = FUN_140c63280(local_128,param_2 + 0x100);
  lVar3 = FUN_140c55c70(local_1b8);
  FUN_140c635a0(lVar3 + 0x100,local_130);
  FUN_140c5ccf0(local_128);
  local_120 = FUN_140c63280(local_118,param_2 + 0xf8);
  lVar3 = FUN_140c55c70(local_1b8);
  FUN_140c635a0(lVar3 + 0xf8,local_120);
  FUN_140c5ccf0(local_118);
  local_110 = param_2 + 0x108;
  lVar3 = FUN_140c55c70(local_1b8);
  FUN_140c5fa80(lVar3 + 0x108,local_110,0x20);
  lVar3 = FUN_140c55c70(local_1b8);
  local_198 = (byte *)(lVar3 + 0x1a8);
  *local_198 = *local_198 & 0xfd | (*(byte *)(param_2 + 0x1a8) >> 1 & 1) << 1;
  lVar3 = FUN_140c55c70(local_1b8);
  *(undefined2 *)(lVar3 + 8) = *(undefined2 *)(param_2 + 8);
  lVar3 = FUN_140c55c70(local_1b8);
  *(undefined4 *)(lVar3 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  lVar3 = FUN_140c55c70(local_1b8);
  *(undefined4 *)(lVar3 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  lVar3 = FUN_140c55c70(local_1b8);
  *(undefined8 *)(lVar3 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  if ((param_3 & 2) == 0) {
LAB_140c61597:
    if ((param_3 & 1) != 0) {
      local_c8 = local_28;
      puVar4 = (undefined *)FUN_140c57dd0(local_c8,param_2 + 0xe8);
      puVar5 = local_78;
      for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      lVar3 = FUN_140c55c70(local_1b8);
      cVar1 = FUN_140c566e0(lVar3 + 0xe8,local_78);
      if (cVar1 == '\0') {
        FUN_140c5cfa0(param_1,0);
        FUN_140c56300(local_1b8);
        return param_1;
      }
    }
    lVar3 = FUN_140c55c70(local_1b8);
    local_180 = (byte *)(lVar3 + 0x1a8);
    *local_180 = *local_180 | 4;
    FUN_140c55e70(param_1,local_1b8);
    FUN_140c56300(local_1b8);
  }
  else {
    lVar3 = FUN_140c55c70(local_1b8);
    *(undefined *)(lVar3 + 0x3b) = *(undefined *)(param_2 + 0x3b);
    local_108 = (ulonglong)*(byte *)(param_2 + 0x3b);
    local_100 = param_2 + 0x3c;
    lVar3 = FUN_140c55c70(local_1b8);
    FUN_140c5fa80(lVar3 + 0x3c,local_100,local_108);
    lVar3 = FUN_140c55c70(local_1b8);
    *(undefined2 *)(lVar3 + 6) = *(undefined2 *)(param_2 + 6);
    local_f8 = (ulonglong)*(byte *)(param_2 + 0x168);
    local_f0 = param_2 + 0x128;
    lVar3 = FUN_140c55c70(local_1b8);
    FUN_140c5fa80(lVar3 + 0x128,local_f0,local_f8);
    lVar3 = FUN_140c55c70(local_1b8);
    *(undefined *)(lVar3 + 0x168) = *(undefined *)(param_2 + 0x168);
    lVar3 = FUN_140c55c70(local_1b8);
    *(undefined4 *)(lVar3 + 0x16c) = *(undefined4 *)(param_2 + 0x16c);
    lVar3 = FUN_140c55c70(local_1b8);
    *(undefined4 *)(lVar3 + 0x170) = *(undefined4 *)(param_2 + 0x170);
    lVar3 = FUN_140c55c70(local_1b8);
    *(undefined4 *)(lVar3 + 0x174) = *(undefined4 *)(param_2 + 0x174);
    lVar3 = FUN_140c55c70(local_1b8);
    local_190 = (byte *)(lVar3 + 0x1a8);
    *local_190 = *local_190 & 0xfe | *(byte *)(param_2 + 0x1a8) & 1;
    lVar3 = FUN_140c55c70(local_1b8);
    local_188 = (byte *)(lVar3 + 0x1a8);
    *local_188 = *local_188 & 0xbf | (*(byte *)(param_2 + 0x1a8) >> 6 & 1) << 6;
    local_e8 = local_68;
    puVar4 = (undefined *)FUN_140c57dd0(local_e8,param_2 + 0x178);
    puVar5 = local_b8;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    lVar3 = FUN_140c55c70(local_1b8);
    cVar1 = FUN_140c566e0(lVar3 + 0x178,local_b8);
    if (cVar1 != '\0') {
      local_e0 = local_58;
      puVar4 = (undefined *)FUN_140c57dd0(local_e0,param_2 + 0x1b0);
      puVar5 = local_a8;
      for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      lVar3 = FUN_140c55c70(local_1b8);
      cVar1 = FUN_140c566e0(lVar3 + 0x1b0,local_a8);
      if (cVar1 != '\0') {
        local_d8 = local_48;
        puVar4 = (undefined *)FUN_140c57dd0(local_d8,param_2 + 0x188);
        puVar5 = local_98;
        for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        lVar3 = FUN_140c55c70(local_1b8);
        cVar1 = FUN_140c566e0(lVar3 + 0x188,local_98);
        if (cVar1 != '\0') {
          local_d0 = local_38;
          puVar4 = (undefined *)FUN_140c57dd0(local_d0,param_2 + 0x198);
          puVar5 = local_88;
          for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          lVar3 = FUN_140c55c70(local_1b8);
          cVar1 = FUN_140c566e0(lVar3 + 0x198,local_88);
          if (cVar1 != '\0') goto LAB_140c61597;
        }
      }
    }
    FUN_140c5cfa0(param_1,0);
    FUN_140c56300(local_1b8);
  }
  return param_1;
}


/* address=140c61690 name=FUN_140c61690 */

void FUN_140c61690(undefined8 param_1,longlong param_2)

{
  undefined auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_1413d9c40 ^ (ulonglong)auStack_48;
  FUN_140c54100(param_1,local_20);
  if (local_20[0] < *(ulonglong *)(param_2 + 0xc0)) {
    *(ulonglong *)(param_2 + 0xc0) = local_20[0];
    *(undefined4 *)(param_2 + 0xb4) = 0;
    *(undefined4 *)(param_2 + 0xb8) = 0;
  }
  else {
    local_28 = local_20[0] - *(longlong *)(param_2 + 0xc0);
    *(ulonglong *)(param_2 + 0xc0) = local_20[0];
    if (*(uint *)(param_2 + 0xb4) < local_28) {
      *(undefined4 *)(param_2 + 0xb4) = 0;
    }
    else {
      *(int *)(param_2 + 0xb4) = *(int *)(param_2 + 0xb4) - (int)local_28;
    }
    if (*(uint *)(param_2 + 0xb8) < local_28) {
      *(undefined4 *)(param_2 + 0xb8) = 0;
    }
    else {
      *(int *)(param_2 + 0xb8) = *(int *)(param_2 + 0xb8) - (int)local_28;
    }
  }
  FUN_140db44f0(local_10 ^ (ulonglong)auStack_48);
  return;
}


/* address=140c617d0 name=FUN_140c617d0 */

void FUN_140c617d0(undefined8 param_1,longlong param_2,uint param_3)

{
  FUN_140c61690(param_1,param_2);
  if ((*(uint *)(param_2 + 0xb4) <= param_3) &&
     (*(uint *)(param_2 + 0xb4) = param_3, *(uint *)(param_2 + 0xb8) < *(uint *)(param_2 + 0xb4))) {
    *(undefined4 *)(param_2 + 0xb4) = *(undefined4 *)(param_2 + 0xb8);
  }
  return;
}


/* address=140c61850 name=FUN_140c61850 */

void FUN_140c61850(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined auStack_98 [32];
  char local_78;
  longlong local_70;
  uint local_68;
  uint local_64;
  undefined8 local_60;
  unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
  local_58 [8];
  undefined local_50 [8];
  undefined local_48 [8];
  undefined *local_40;
  undefined local_38 [8];
  undefined local_30 [8];
  undefined local_28 [8];
  undefined8 local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_1413d9c40 ^ (ulonglong)auStack_98;
  local_70 = FUN_140c55c70(param_1 + 0x70);
  local_60 = FUN_140c55c70(*(longlong *)(param_1 + 0x30) + 0x1d0);
  iVar1 = FUN_140c4c500(param_1);
  if (iVar1 == 0) {
    local_68 = 1;
  }
  else {
    local_68 = 2;
  }
  local_64 = local_68;
  iVar1 = FUN_140c5f080(local_60);
  if ((iVar1 != 0) && ((*(uint *)(local_70 + 0x5c) & local_64) == local_64)) {
    if (((*(byte *)(param_1 + 0xa4) & 1) != 0) && ((*(uint *)(local_70 + 0x5c) & 0x200) == 0)) {
      uVar2 = FUN_140c562a0(local_48,local_60);
      FUN_140c55e70(local_50,uVar2);
      FUN_140c56300(local_48);
      local_78 = '\0';
      FUN_140c5d3f0(local_38,local_70 + 0x10);
      local_40 = local_28;
      uVar2 = FUN_140c55cd0(local_50);
      uVar2 = FUN_140c55e70(local_40,uVar2);
      FUN_140c62ef0(local_70,uVar2);
      if (((*(uint *)(local_70 + 0x5c) & 0x80) == 0) &&
         (*(int *)(local_70 + 0x58) = *(int *)(local_70 + 0x58) + 1,
         0xfe < *(int *)(local_70 + 0x58))) {
        local_78 = '\x01';
        *(undefined4 *)(local_70 + 0x58) = 0;
      }
      FUN_140c5d450(local_38);
      if (local_78 != '\0') {
        FUN_140c54100(param_1,local_20);
        FUN_140c5f4e0(local_70,local_20[0]);
      }
      FUN_140c56300(local_50);
    }
    if (*(longlong *)(local_70 + 0x68) != 0) {
      uVar2 = FUN_140c562a0(local_30,local_60);
      FUN_140c55e70(local_58,uVar2);
      FUN_140c56300(local_30);
      uVar2 = FUN_140c55c70(local_58);
      iVar1 = (**(code **)(local_70 + 0x68))(param_1,uVar2);
      if (iVar1 != 0) {
        std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
        ::release(local_58);
      }
      FUN_140c56300(local_58);
    }
  }
  FUN_140db44f0(local_10 ^ (ulonglong)auStack_98);
  return;
}


/* address=140c61ab0 name=FUN_140c61ab0 */

undefined4 * FUN_140c61ab0(undefined4 *param_1,undefined8 param_2)

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
  FUN_140c57b60(param_1 + 0x20);
  FUN_140c57b60(param_1 + 0x22);
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
  FUN_140c56440(param_1 + 0x3a);
  FUN_140c57b60(param_1 + 0x3e);
  FUN_140c57b60(param_1 + 0x40);
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
  FUN_140c56440(param_1 + 0x5e);
  FUN_140c56440(param_1 + 0x62);
  FUN_140c56440(param_1 + 0x66);
  *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) & 0xfe;
  *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) & 0xfd;
  *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) & 0xfb;
  *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) & 0xf7;
  *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) & 0xef;
  *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) & 0xdf;
  *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) & 0xbf;
  FUN_140c56440(param_1 + 0x6c);
  FUN_140d39ef0(param_1 + 0x34);
  uVar1 = FUN_140c5eb00(0);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return param_1;
}


/* address=140c61df0 name=FUN_140c61df0 */

void FUN_140c61df0(longlong param_1)

{
  FUN_140d39f10(&DAT_14139df80,param_1,param_1 + 0xd0);
  (**(code **)(*(longlong *)(param_1 + 0x90) + 0x40))(param_1);
  FUN_140c564c0(param_1 + 0x1b0);
  FUN_140c564c0(param_1 + 0x198);
  FUN_140c564c0(param_1 + 0x188);
  FUN_140c564c0(param_1 + 0x178);
  FUN_140c5ccf0(param_1 + 0x100);
  FUN_140c5ccf0(param_1 + 0xf8);
  FUN_140c564c0(param_1 + 0xe8);
  FUN_140c56ac0(param_1 + 0x88);
  FUN_140c56a30(param_1 + 0x80);
  return;
}


/* address=140c61ef0 name=FUN_140c61ef0 */

void FUN_140c61ef0(longlong param_1,longlong param_2)

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


/* address=140c62050 name=FUN_140c62050 */

void FUN_140c62050(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_2 + 0xe0) != 0) && (*(longlong *)(param_2 + 0xd8) != 0)) {
    FUN_140c61ef0(param_1,param_2);
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


/* address=140c62140 name=FUN_140c62140 */

undefined8 FUN_140c62140(undefined8 param_1,undefined8 param_2)

{
  FUN_140c76080(param_2);
  return param_2;
}


/* address=140c62190 name=FUN_140c62190 */

undefined * FUN_140c62190(void)

{
  return &LAB_140c62170;
}


/* address=140c621b0 name=FUN_140c621b0 */

void FUN_140c621b0(longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  size_t sVar4;
  undefined8 uVar5;
  undefined4 local_res20;
  undefined auStack_218 [32];
  undefined8 local_1f8;
  undefined4 local_1f0;
  int local_1e8 [2];
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined local_198 [8];
  undefined *local_190;
  longlong local_188;
  undefined8 local_180;
  undefined8 local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined local_148 [112];
  undefined local_d8 [160];
  undefined local_38 [16];
  undefined local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_218;
  FUN_140c63600(local_d8);
  FUN_140c63650(local_148);
  if (0xff7f < param_4) {
    sVar4 = strlen("TICKET TOO LARGE");
    local_1c8 = FUN_140d37f00(param_2,"TICKET TOO LARGE",sVar4);
    FUN_140c63680(local_148);
    FUN_140c63630(local_d8);
    goto LAB_140c627c3;
  }
  local_1e0 = FUN_140c55c70(*param_1 + 0x70);
  if (*(longlong *)(local_1e0 + 0x150) == 0) {
    cVar1 = FUN_140c60080(local_1e0);
    if (cVar1 == '\0') {
      local_1c0 = 0;
      FUN_140c63680(local_148);
      FUN_140c63630(local_d8);
      goto LAB_140c627c3;
    }
    FUN_140c57f50(local_198,local_1e0 + 0x10);
    iVar2 = FUN_140ca8a50(local_38,0x10);
    if (iVar2 != 0) {
      local_188 = FUN_140c55c70(local_1e0 + 0x140);
      local_188 = local_188 + 0x20;
      local_180 = FUN_140caa940();
      uVar5 = FUN_140c55cd0(local_d8);
      local_1f8 = local_38;
      iVar2 = FUN_140cab0e0(uVar5,local_180,0,local_188);
      if (iVar2 != 0) {
        local_178 = FUN_140c7f110();
        local_170 = FUN_140c55c70(local_1e0 + 0x140);
        local_170 = local_170 + 0x10;
        uVar5 = FUN_140c55cd0(local_148);
        local_1f8 = (undefined *)0x0;
        iVar2 = FUN_140c7fe50(uVar5,local_170,0x10,local_178);
        if (iVar2 != 0) {
          uVar5 = FUN_140c55c70(local_1e0 + 0x140);
          FUN_140c5fa80(local_28,uVar5,0x10);
          FUN_140c57fb0(local_198);
          goto LAB_140c624c5;
        }
      }
    }
    local_1bc = 0;
    FUN_140c57fb0(local_198);
    FUN_140c63680(local_148);
    FUN_140c63630(local_d8);
    goto LAB_140c627c3;
  }
  local_190 = (undefined *)FUN_140c55cd0(local_148);
  uVar5 = FUN_140c55cd0(local_d8);
  local_1f0 = 1;
  local_1f8 = local_190;
  iVar2 = (**(code **)(local_1e0 + 0x150))(*param_1,local_28,local_38,uVar5);
  if (iVar2 < 0) {
    local_1c4 = 0;
    FUN_140c63680(local_148);
    FUN_140c63630(local_d8);
    goto LAB_140c627c3;
  }
LAB_140c624c5:
  iVar2 = FUN_140d37f00(param_2,local_28,0x10);
  if (iVar2 != 0) {
    uVar5 = FUN_140c55cd0(local_d8);
    uVar3 = FUN_140cabf70(uVar5);
    iVar2 = FUN_140d37f00(param_2,local_38,uVar3);
    if ((iVar2 != 0) && (iVar2 = FUN_140d38010(param_2,&local_1d0,param_4 + 0x20), iVar2 != 0)) {
      local_1d8 = 0;
      local_168 = local_1d0;
      uVar5 = FUN_140c55cd0(local_d8);
      local_res20 = (undefined4)param_4;
      local_1f8 = (undefined *)CONCAT44(local_1f8._4_4_,local_res20);
      iVar2 = FUN_140cab180(uVar5,local_168,local_1e8,param_3);
      if (iVar2 == 0) {
        local_1b4 = 0;
        FUN_140c63680(local_148);
        FUN_140c63630(local_d8);
      }
      else {
        local_1d8 = local_1d8 + local_1e8[0];
        local_160 = local_1d0 + local_1d8;
        uVar5 = FUN_140c55cd0(local_d8);
        iVar2 = FUN_140cab680(uVar5,local_160,local_1e8);
        if (iVar2 == 0) {
          local_1b0 = 0;
          FUN_140c63680(local_148);
          FUN_140c63630(local_d8);
        }
        else {
          local_1d8 = local_1d8 + local_1e8[0];
          iVar2 = FUN_140d38070(param_2,local_1d8);
          if (iVar2 == 0) {
            local_1ac = 0;
            FUN_140c63680(local_148);
            FUN_140c63630(local_d8);
          }
          else {
            local_158 = FUN_140d37cf0(param_2);
            local_150 = FUN_140d37c70(param_2);
            uVar5 = FUN_140c55cd0(local_148);
            iVar2 = FUN_140c801b0(uVar5,local_150,local_158);
            if ((iVar2 != 0) && (iVar2 = FUN_140d38010(param_2,&local_1d0,0x40), iVar2 != 0)) {
              uVar5 = FUN_140c55cd0(local_148);
              iVar2 = FUN_140c801f0(uVar5,local_1d0,&local_1a8);
              if ((iVar2 != 0) && (iVar2 = FUN_140d38070(param_2,local_1a8), iVar2 != 0)) {
                local_1a0 = 1;
                FUN_140c63680(local_148);
                FUN_140c63630(local_d8);
                goto LAB_140c627c3;
              }
            }
            local_1a4 = 0;
            FUN_140c63680(local_148);
            FUN_140c63630(local_d8);
          }
        }
      }
      goto LAB_140c627c3;
    }
  }
  local_1b8 = 0;
  FUN_140c63680(local_148);
  FUN_140c63630(local_d8);
LAB_140c627c3:
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_218);
  return;
}


/* address=140c627f0 name=FUN_140c627f0 */

undefined8 FUN_140c627f0(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

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
  undefined8 local_18;
  undefined8 local_10 [2];
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar1 = *param_1;
  lVar4 = FUN_140c55c70(lVar1 + 0x70);
  ppcVar2 = *(code ***)(lVar4 + 0x208);
  uVar5 = (**ppcVar2)(lVar1);
  uVar7 = param_4 + uVar5;
  if (uVar7 < uVar5) {
    FUN_140c6c4e0(0x10,0,0x45,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_session.cc"
                  ,CONCAT44(uVar8,0x21c));
    uVar6 = 0;
  }
  else {
    iVar3 = FUN_140d38010(param_2,&local_18,uVar7);
    if (iVar3 == 0) {
      uVar6 = 0;
    }
    else {
      iVar3 = (*ppcVar2[1])(lVar1,local_18,local_10,uVar7,param_3,param_4);
      if (iVar3 == 0) {
        FUN_140c6c4e0(0x10,0,0x114,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_session.cc"
                      ,0x228);
        uVar6 = 0;
      }
      else {
        iVar3 = FUN_140d38070(param_2,local_10[0]);
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


/* address=140c62940 name=FUN_140c62940 */

undefined4 FUN_140c62940(longlong *param_1,undefined8 param_2,undefined *param_3)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
  local_98 [8];
  longlong local_90;
  undefined local_88 [4];
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined local_68 [8];
  undefined local_60 [8];
  ulonglong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined local_28 [24];
  
  local_90 = *param_1;
  FUN_140c56340(param_2,0);
  cVar1 = FUN_140c55f90(param_3);
  if ((cVar1 != '\0') || (uVar2 = FUN_140c55f80(param_3), 0x20 < uVar2)) {
    return 1;
  }
  FUN_140c57b60(local_98);
  lVar3 = FUN_140c55c70(local_90 + 0x70);
  if ((*(uint *)(lVar3 + 0x5c) & 0x100) == 0) {
    puVar5 = param_3;
    puVar6 = local_28;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    local_80 = FUN_140c60450(local_28);
    puVar5 = local_88;
    for (lVar3 = 1; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    lVar3 = FUN_140c55c70(local_90 + 0x70);
    FUN_140c57f50(local_60,lVar3 + 0x10);
    local_70 = FUN_140c62db0(local_88 + 1);
    lVar3 = FUN_140c55c70(local_90 + 0x70);
    uVar4 = FUN_140c63370(*(undefined8 *)(lVar3 + 0x38),param_3,local_80,local_70);
    uVar4 = FUN_140c562a0(local_68,uVar4);
    FUN_140c580d0(local_98,uVar4);
    FUN_140c56300(local_68);
    FUN_140c57fb0(local_60);
  }
  cVar1 = FUN_140c56050(local_98);
  if ((cVar1 == '\0') && (lVar3 = FUN_140c55c70(local_90 + 0x70), *(longlong *)(lVar3 + 0x78) != 0))
  {
    local_84 = 1;
    local_58 = FUN_140c55f80(param_3);
    local_50 = FUN_140c55c70(param_3);
    lVar3 = FUN_140c55c70(local_90 + 0x70);
    uVar4 = (**(code **)(lVar3 + 0x78))(local_90,local_50,local_58 & 0xffffffff,&local_84);
    FUN_140c56340(local_98,uVar4);
    cVar1 = FUN_140c56050(local_98);
    if (cVar1 == '\0') {
      local_7c = 1;
      FUN_140c56300(local_98);
      return local_7c;
    }
    local_48 = FUN_140c55c70(local_98);
    lVar3 = FUN_140c5f620();
    if (local_48 == lVar3) {
      std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
      release(local_98);
      local_78 = 10;
      FUN_140c56300(local_98);
      return local_78;
    }
    if (local_84 != 0) {
      uVar4 = FUN_140c55c70(local_98);
      FUN_140c5eb70(uVar4);
    }
    lVar3 = FUN_140c55c70(local_90 + 0x70);
    if ((*(uint *)(lVar3 + 0x5c) & 0x200) == 0) {
      local_40 = FUN_140c55c70(local_98);
      uVar4 = FUN_140c55c70(local_90 + 0x70);
      FUN_140c5f400(uVar4,local_40);
    }
  }
  cVar1 = FUN_140c56050(local_98);
  if (cVar1 != '\0') {
    uVar4 = FUN_140c55c70(local_98);
    cVar1 = FUN_140c60620(local_90,uVar4);
    if (cVar1 == '\0') {
      local_38 = FUN_140c55c70(local_98);
      uVar4 = FUN_140c55c70(local_90 + 0x70);
      FUN_140c5f4b0(uVar4,local_38);
      FUN_140c56340(local_98,0);
    }
  }
  uVar4 = FUN_140c55cd0(local_98);
  FUN_140c580d0(param_2,uVar4);
  local_74 = 1;
  FUN_140c56300(local_98);
  return local_74;
}


/* address=140c62cc0 name=FUN_140c62cc0 */

bool FUN_140c62cc0(undefined8 param_1,undefined *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined local_60 [16];
  undefined local_50 [24];
  undefined local_38 [16];
  undefined local_28 [24];
  
  puVar3 = local_50;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_140c55fe0(local_60,param_3 + 0x3c,*(undefined *)(param_3 + 0x3b));
  puVar3 = local_60;
  puVar4 = local_38;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = local_50;
  puVar4 = local_28;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  cVar1 = FUN_140c63130(local_28,local_38);
  return cVar1 == '\0';
}


/* address=140c62db0 name=FUN_140c62db0 */

undefined * FUN_140c62db0(void)

{
  return &LAB_140c62d80;
}


/* address=140c62dd0 name=FUN_140c62dd0 */

ulonglong FUN_140c62dd0(longlong param_1,longlong param_2,char param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  bool bVar2;
  longlong local_10;
  
  if ((param_2 == 0) || (in_RAX = 0, *(char *)(param_2 + 0x3b) == '\0')) {
    uVar1 = in_RAX & 0xffffffffffffff00;
  }
  else {
    if (param_3 != '\0') {
      FUN_140d39650(param_1 + 0x10);
    }
    local_10 = FUN_140c63300(*(undefined8 *)(param_1 + 0x38),param_2);
    bVar2 = local_10 == param_2;
    if (bVar2) {
      local_10 = FUN_140c63420(*(undefined8 *)(param_1 + 0x38),param_2);
      FUN_140c61ef0(param_1,param_2);
    }
    if (param_3 != '\0') {
      FUN_140d39690(param_1 + 0x10);
    }
    if (bVar2) {
      if (*(longlong *)(param_1 + 0x70) != 0) {
        (**(code **)(param_1 + 0x70))(param_1,local_10);
      }
      FUN_140c5eba0(local_10);
    }
    uVar1 = (ulonglong)bVar2;
  }
  return uVar1;
}


/* address=140c62ef0 name=FUN_140c62ef0 */

undefined FUN_140c62ef0(longlong param_1,
                       unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                       *param_2)

{
  undefined uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_18 = FUN_140c55c70(param_2);
  iVar3 = FUN_140c633c0(*(undefined8 *)(param_1 + 0x38),&local_20,local_18);
  if (iVar3 == 0) {
    FUN_140c56300(param_2);
    uVar1 = 0;
  }
  else {
    std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
    release(param_2);
    FUN_140c56340(param_2,local_20);
    if (local_20 != 0) {
      if (local_20 == local_18) {
        FUN_140c56300(param_2);
        return 0;
      }
      FUN_140c61ef0(param_1,local_20);
    }
    FUN_140c62050(param_1,local_18);
    iVar3 = FUN_140c4ecb0(param_1);
    if (iVar3 != 0) {
      do {
        local_10 = FUN_140c56cb0(*(undefined8 *)(param_1 + 0x38));
        uVar4 = FUN_140c4ecb0(param_1);
        if (local_10 <= uVar4) break;
        cVar2 = FUN_140c62dd0(param_1,*(undefined8 *)(param_1 + 0x50),0);
      } while (cVar2 != '\0');
    }
    FUN_140c56300(param_2);
    uVar1 = 1;
  }
  return uVar1;
}


/* address=140c630f0 name=FUN_140c630f0 */

undefined8 FUN_140c630f0(undefined8 *param_1,undefined8 param_2)

{
  FUN_140c55fe0(param_2,*param_1,param_1[1]);
  return param_2;
}


/* address=140c63130 name=FUN_140c63130 */

undefined8 FUN_140c63130(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *local_28;
  char *local_20;
  
  lVar1 = FUN_140c55f80(param_1);
  lVar2 = FUN_140c55f80(param_2);
  if (lVar1 == lVar2) {
    local_28 = (char *)FUN_140c55c70(param_1);
    for (local_20 = (char *)FUN_140c55c70(param_2);
        (pcVar4 = (char *)FUN_140c55fc0(param_1), local_28 != pcVar4 &&
        (pcVar4 = (char *)FUN_140c55fc0(param_2), local_20 != pcVar4)); local_20 = local_20 + 1) {
      if (*local_28 != *local_20) {
        return 0;
      }
      local_28 = local_28 + 1;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


/* address=140c631f0 name=FUN_140c631f0 */

longlong FUN_140c631f0(longlong *param_1,ulonglong param_2)

{
  if ((ulonglong)param_1[1] <= param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *param_1 + param_2;
}


/* address=140c63230 name=FUN_140c63230 */

void FUN_140c63230(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_140c55cd0(param_1);
    FUN_140c5d5c0(uVar2,p_Var1);
  }
  return;
}


/* address=140c63280 name=FUN_140c63280 */

undefined8 FUN_140c63280(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_140c55c70(param_2);
  uVar1 = FUN_140c5cc90(local_18,uVar1);
  FUN_140c55e70(param_1,uVar1);
  FUN_140c5ccf0(local_18);
  return param_1;
}


/* address=140c63300 name=FUN_140c63300 */

void FUN_140c63300(undefined8 param_1,undefined8 param_2)

{
  FUN_140d3a390(param_1,param_2,&LAB_140c5cda0,&LAB_140c632d0);
  return;
}


/* address=140c63370 name=FUN_140c63370 */

void FUN_140c63370(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_4;
  local_10 = param_2;
  FUN_140d3a410(param_1,&local_18,param_3,&LAB_140c63330);
  return;
}


/* address=140c633c0 name=FUN_140c633c0 */

undefined4 FUN_140c633c0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  uVar1 = FUN_140d3a480(param_1,local_10,param_3,&LAB_140c5cda0,&LAB_140c632d0);
  *param_2 = local_10[0];
  return uVar1;
}


/* address=140c63420 name=FUN_140c63420 */

void FUN_140c63420(undefined8 param_1,undefined8 param_2)

{
  FUN_140d3a580(param_1,param_2,&LAB_140c5cda0,&LAB_140c632d0);
  return;
}


/* address=140c63490 name=FUN_140c63490 */

void FUN_140c63490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  FUN_140d3a630(param_1,&LAB_140c63450,&local_18);
  return;
}


/* address=140c634e0 name=FUN_140c634e0 */

undefined8 FUN_140c634e0(undefined8 param_1,uint param_2)

{
  FUN_140c61df0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_140e18570(param_1,0x1c0);
  }
  return param_1;
}


/* address=140c63520 name=FUN_140c63520 */

undefined8 FUN_140c63520(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_140c55cd0(param_2);
  uVar1 = FUN_140c636a0(uVar1);
  uVar1 = FUN_140c55e40(local_18,uVar1);
  FUN_140c55e70(param_1,uVar1);
  FUN_140c56300(local_18);
  return param_1;
}


/* address=140c63570 name=FUN_140c63570 */

undefined8 FUN_140c63570(undefined8 param_1,undefined8 param_2)

{
  FUN_140c55f50(param_1,param_2,4);
  return param_1;
}


/* address=140c635a0 name=FUN_140c635a0 */

undefined8
FUN_140c635a0(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_140c63230(param_1,p_Var1);
  uVar2 = FUN_140c55cd0(param_2);
  FUN_140c55cd0(uVar2);
  FUN_140c55cd0(param_1);
  return param_1;
}


/* address=140c63600 name=FUN_140c63600 */

undefined8 FUN_140c63600(undefined8 param_1)

{
  FUN_140caaa90(param_1);
  return param_1;
}


/* address=140c63630 name=FUN_140c63630 */

void FUN_140c63630(undefined8 param_1)

{
  FUN_140caab00(param_1);
  return;
}


/* address=140c63650 name=FUN_140c63650 */

undefined8 FUN_140c63650(undefined8 param_1)

{
  FUN_140c7fcb0(param_1);
  return param_1;
}


/* address=140c63680 name=FUN_140c63680 */

void FUN_140c63680(undefined8 param_1)

{
  FUN_140c7fd50(param_1);
  return;
}


/* address=140c636a0 name=FUN_140c636a0 */

undefined8 FUN_140c636a0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = FUN_140c660d0(0x1c0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140c55bd0(0x1c0,lVar1);
    puVar3 = (undefined8 *)FUN_140c55cd0(param_1);
    uVar2 = FUN_140c61ab0(uVar2,*puVar3);
  }
  return uVar2;
}


/* address=140c63700 name=FUN_140c63700 */

undefined4 FUN_140c63700(longlong param_1,longlong *param_2,size_t *param_3)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined local_40 [64];
  
  if ((*(byte *)(param_1 + 0x1a8) >> 2 & 1) == 0) {
    FUN_140c57a60(local_40);
    uVar5 = FUN_140c55cd0(local_40);
    iVar1 = FUN_140d376f0(uVar5,0x100);
    if (iVar1 != 0) {
      uVar5 = FUN_140c55cd0(local_40);
      iVar1 = FUN_140c64f50(param_1,uVar5,0);
      if (iVar1 != 0) {
        uVar5 = FUN_140c55cd0(local_40);
        iVar1 = FUN_140d37820(uVar5,param_2,param_3);
        if (iVar1 != 0) {
          FUN_140c57a90(local_40);
          return 1;
        }
      }
    }
    FUN_140c57a90(local_40);
    uVar2 = 0;
  }
  else {
    sVar3 = strlen("NOT RESUMABLE");
    *param_3 = sVar3;
    lVar4 = FUN_140c66ba0("NOT RESUMABLE",*param_3);
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


/* address=140c63820 name=FUN_140c63820 */

undefined4 FUN_140c63820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined local_40 [64];
  
  FUN_140c57a60(local_40);
  uVar2 = FUN_140c55cd0(local_40);
  iVar1 = FUN_140d376f0(uVar2,0x100);
  if (iVar1 != 0) {
    uVar2 = FUN_140c55cd0(local_40);
    iVar1 = FUN_140c64f50(param_1,uVar2,1);
    if (iVar1 != 0) {
      uVar2 = FUN_140c55cd0(local_40);
      iVar1 = FUN_140d37820(uVar2,param_2,param_3);
      if (iVar1 != 0) {
        FUN_140c57a90(local_40);
        return 1;
      }
    }
  }
  FUN_140c57a90(local_40);
  return 0;
}


/* address=140c638e0 name=FUN_140c638e0 */

_Facet_base * FUN_140c638e0(undefined8 param_1,undefined8 param_2,longlong param_3)

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
  
  FUN_140d35430(local_20,param_1,param_2);
  uVar2 = FUN_140c63b00(local_40,local_20,*(undefined8 *)(param_3 + 8),
                        *(undefined8 *)(param_3 + 0x200));
  FUN_140c55e70(local_48,uVar2);
  FUN_140c56300(local_40);
  cVar1 = FUN_140c56050(local_48);
  if (cVar1 == '\0') {
    local_38 = (_Facet_base *)0x0;
    FUN_140c56300(local_48);
  }
  else {
    lVar3 = FUN_140d354c0(local_20);
    if (lVar3 == 0) {
      local_28 = std::
                 unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                 ::release(local_48);
      FUN_140c56300(local_48);
      local_38 = local_28;
    }
    else {
      FUN_140c6c4e0(0x10,0,0xa0,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                    ,0x366);
      local_30 = (_Facet_base *)0x0;
      FUN_140c56300(local_48);
      local_38 = local_30;
    }
  }
  return local_38;
}


/* address=140c639f0 name=FUN_140c639f0 */

undefined4 FUN_140c639f0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 local_10 [2];
  
  iVar1 = FUN_140c63700(param_1,local_10,&local_18);
  if (iVar1 == 0) {
    local_18 = 0xffffffff;
  }
  else if (CONCAT44(uStack_14,local_18) < 0x80000000) {
    if (param_2 != (longlong *)0x0) {
      FUN_140c63ab0(*param_2,local_10[0],CONCAT44(uStack_14,local_18));
      *param_2 = *param_2 + CONCAT44(uStack_14,local_18);
    }
    FUN_140c66200(local_10[0]);
  }
  else {
    FUN_140c66200(local_10[0]);
    FUN_140c6c4e0(0x10,0,0x45,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x34f);
    local_18 = 0xffffffff;
  }
  return local_18;
}


/* address=140c63ab0 name=FUN_140c63ab0 */

undefined8 FUN_140c63ab0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140c63b00 name=FUN_140c63b00 */

undefined8 FUN_140c63b00(undefined8 param_1,wchar_t *param_2,longlong param_3,undefined8 param_4)

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
  
  uVar4 = FUN_140c60400(local_108,param_3);
  FUN_140c55e70(local_258,uVar4);
  FUN_140c56300(local_108);
  cVar1 = FUN_140c56050(local_258);
  if (cVar1 == '\0') {
    FUN_140c5cfa0(param_1,0);
    FUN_140c56300(local_258);
    return param_1;
  }
  uVar2 = wcstoul(param_2,local_248,0x20000010);
  if (((((uVar2 == 0) || (iVar3 = FUN_140d35eb0(local_248,&local_100), iVar3 == 0)) ||
       (local_100 != 1)) ||
      ((iVar3 = FUN_140d35eb0(local_248,&local_1f8), iVar3 == 0 ||
       (0xffff < CONCAT62(uStack_1f6,local_1f8))))) ||
     (cVar1 = FUN_140c6d7e0(local_210,local_1f8), cVar1 == '\0')) {
    FUN_140c6c4e0(0x10,0,0xa0,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x229);
    FUN_140c5cfa0(param_1,0);
    FUN_140c56300(local_258);
    return param_1;
  }
  lVar5 = FUN_140c55c70(local_258);
  *(undefined2 *)(lVar5 + 4) = local_1f8;
  uVar2 = wcstoul((wchar_t *)local_248,local_d0,4);
  if (((uVar2 == 0) || (iVar3 = FUN_140d35710(local_d0,local_234), iVar3 == 0)) ||
     (lVar5 = FUN_140d354c0(local_d0), lVar5 != 0)) {
    FUN_140c6c4e0(0x10,0,0xa0,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x233);
    FUN_140c5cfa0(param_1,0);
    FUN_140c56300(local_258);
    return param_1;
  }
  local_f8 = FUN_140c6e300(local_234[0]);
  lVar5 = FUN_140c55c70(local_258);
  *(undefined8 *)(lVar5 + 200) = local_f8;
  lVar5 = FUN_140c55c70(local_258);
  if (*(longlong *)(lVar5 + 200) == 0) {
    FUN_140c6c4e0(0x10,0,0xed,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x238);
    FUN_140c5cfa0(param_1,0);
    FUN_140c56300(local_258);
    return param_1;
  }
  uVar2 = wcstoul((wchar_t *)local_248,local_1a0,4);
  if ((((uVar2 == 0) || (uVar6 = FUN_140d354c0(local_1a0), 0x20 < uVar6)) ||
      (uVar2 = wcstoul((wchar_t *)local_248,local_190,4), uVar2 == 0)) ||
     (uVar6 = FUN_140d354c0(local_190), 0x30 < uVar6)) {
    FUN_140c6c4e0(0x10,0,0xa0,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x241);
    FUN_140c5cfa0(param_1,0);
    FUN_140c56300(local_258);
    return param_1;
  }
  local_f0 = FUN_140d354c0(local_1a0);
  local_e8 = FUN_140d354a0(local_1a0);
  lVar5 = FUN_140c55c70(local_258);
  FUN_140c63ab0(lVar5 + 0x3c,local_e8,local_f0);
  local_170 = FUN_140d354c0(local_1a0);
  lVar5 = FUN_140c55c70(local_258);
  *(char *)(lVar5 + 0x3b) = (char)local_170;
  local_168 = FUN_140d354c0(local_190);
  local_160 = FUN_140d354a0(local_190);
  lVar5 = FUN_140c55c70(local_258);
  FUN_140c63ab0(lVar5 + 0xb,local_160,local_168);
  local_158 = FUN_140d354c0(local_190);
  lVar5 = FUN_140c55c70(local_258);
  *(char *)(lVar5 + 10) = (char)local_158;
  uVar2 = wcstoul((wchar_t *)local_248,local_1f0,-0x5fffffff);
  if (uVar2 != 0) {
    lVar5 = FUN_140c55c70(local_258);
    iVar3 = FUN_140d35eb0(local_1f0,lVar5 + 0xc0);
    if (((iVar3 != 0) && (uVar2 = wcstoul((wchar_t *)local_248,local_1f0,-0x5ffffffe), uVar2 != 0))
       && ((iVar3 = FUN_140d35eb0(local_1f0,&local_1e0), iVar3 != 0 &&
           (CONCAT44(uStack_1dc,local_1e0) < 0x100000000)))) {
      lVar5 = FUN_140c55c70(local_258);
      *(undefined4 *)(lVar5 + 0xb4) = local_1e0;
      iVar3 = FUN_140d36170(local_248,local_b0,&local_238,0xa0000003);
      if ((iVar3 == 0) || ((local_238 != 0 && (lVar5 = FUN_140d354c0(local_b0), lVar5 == 0)))) {
        FUN_140c6c4e0(0x10,0,0xa0,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                      ,0x25e);
        FUN_140c5cfa0(param_1,0);
        FUN_140c56300(local_258);
        return param_1;
      }
      local_150 = FUN_140c55c70(local_258);
      local_150 = local_150 + 0x5c;
      lVar5 = FUN_140c55c70(local_258);
      iVar3 = FUN_140c65e70(local_248,lVar5 + 0x5d,local_150,0x20,0xa0000004);
      if (iVar3 != 0) {
        lVar5 = FUN_140c55c70(local_258);
        iVar3 = FUN_140c65f30(local_248,lVar5 + 0xb0,0xa0000005,0);
        if (iVar3 != 0) {
          iVar3 = FUN_140d36170(local_248,local_48,0,0xa0000006);
          if (iVar3 == 0) {
            FUN_140c6c4e0(0x10,0,0xa0,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                          ,0x26f);
            FUN_140c5cfa0(param_1,0);
            FUN_140c56300(local_258);
            return param_1;
          }
          lVar5 = FUN_140c55c70(local_258);
          iVar3 = FUN_140c65c10(local_248,lVar5 + 0x80,0xa0000008);
          if (iVar3 != 0) {
            lVar5 = FUN_140c55c70(local_258);
            iVar3 = FUN_140c65fc0(local_248,lVar5 + 0x16c,0xa0000009,0);
            if (iVar3 != 0) {
              lVar5 = FUN_140c55c70(local_258);
              cVar1 = FUN_140c65cf0(local_248,lVar5 + 0xe8,0xa000000a);
              if (cVar1 != '\0') {
                iVar3 = FUN_140d35ce0(local_248,0xa000000d);
                if (iVar3 == 0) {
                  lVar5 = FUN_140c55c70(local_258);
                  local_1d0 = (byte *)(lVar5 + 0x1a8);
                  *local_1d0 = *local_1d0 & 0xfd;
                }
                else {
                  uVar2 = wcstoul((wchar_t *)local_248,local_1f0,-0x5ffffff3);
                  if ((((uVar2 == 0) ||
                       (uVar2 = wcstoul((wchar_t *)local_1f0,local_c0,4), uVar2 == 0)) ||
                      (lVar5 = FUN_140d354c0(local_c0), lVar5 != 0x20)) ||
                     (lVar5 = FUN_140d354c0(local_1f0), lVar5 != 0)) {
                    FUN_140c6c4e0(0x10,0,0xa0,
                                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                  ,0x281);
                    FUN_140c5cfa0(param_1,0);
                    FUN_140c56300(local_258);
                    return param_1;
                  }
                  local_148 = FUN_140d354a0(local_c0);
                  lVar5 = FUN_140c55c70(local_258);
                  FUN_140c63ab0(lVar5 + 0x108,local_148,0x20);
                  lVar5 = FUN_140c55c70(local_258);
                  local_1d8 = (byte *)(lVar5 + 0x1a8);
                  *local_1d8 = *local_1d8 | 2;
                }
                local_140 = FUN_140c55c70(local_258);
                local_140 = local_140 + 0x168;
                lVar5 = FUN_140c55c70(local_258);
                iVar3 = FUN_140c65e70(local_248,lVar5 + 0x128,local_140,0x40,0xa000000e);
                if (iVar3 != 0) {
                  lVar5 = FUN_140c55c70(local_258);
                  iVar3 = FUN_140c65d90(local_248,lVar5 + 0xf8,0xa000000f,param_4);
                  if (iVar3 != 0) {
                    lVar5 = FUN_140c55c70(local_258);
                    iVar3 = FUN_140c65d90(local_248,lVar5 + 0x100,0xa0000010,param_4);
                    if (iVar3 != 0) {
                      iVar3 = FUN_140d36350(local_248,&local_20c,0xa0000011,0);
                      if (iVar3 == 0) {
                        FUN_140c6c4e0(0x10,0,0xa0,
                                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                      ,0x29b);
                        FUN_140c5cfa0(param_1,0);
                        FUN_140c56300(local_258);
                        return param_1;
                      }
                      local_250 = local_20c != 0;
                      lVar5 = FUN_140c55c70(local_258);
                      local_1c8 = (byte *)(lVar5 + 0x1a8);
                      *local_1c8 = *local_1c8 & 0xfe | local_250 & 1;
                      lVar5 = FUN_140c55c70(local_258);
                      iVar3 = FUN_140c66050(local_248,lVar5 + 6,0xa0000012,0);
                      if (iVar3 == 0) {
                        FUN_140c6c4e0(0x10,0,0xa0,
                                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                      ,0x2a1);
                        FUN_140c5cfa0(param_1,0);
                        FUN_140c56300(local_258);
                        return param_1;
                      }
                      FUN_140d35430(local_180,0,0);
                      iVar3 = FUN_140d36170(local_248,local_180);
                      if ((iVar3 == 0) ||
                         ((local_230 != 0 && (lVar5 = FUN_140d354c0(local_180), lVar5 == 0)))) {
                        FUN_140c6c4e0(0x10,0,0xa0,
                                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                      ,0x2ab);
                        FUN_140c5cfa0(param_1,0);
                        FUN_140c56300(local_258);
                        return param_1;
                      }
                      if ((local_230 != 0) && (local_238 == 0)) {
                        FUN_140c6c4e0(0x10,0,0xa0,
                                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                      ,0x2af);
                        FUN_140c5cfa0(param_1,0);
                        FUN_140c56300(local_258);
                        return param_1;
                      }
                      if ((local_238 != 0) || (local_230 != 0)) {
                        local_138 = FUN_140c56020();
                        lVar5 = FUN_140c55c70(local_258);
                        FUN_140c56b00(lVar5 + 0x88,local_138);
                        lVar5 = FUN_140c55c70(local_258);
                        cVar1 = operator==<>(lVar5 + 0x88,0);
                        if (cVar1 != '\0') {
                          FUN_140c5cfa0(param_1,0);
                          FUN_140c56300(local_258);
                          return param_1;
                        }
                        if (local_238 != 0) {
                          uVar4 = FUN_140c75ed0(local_b0,param_4);
                          FUN_140c55e40(local_220,uVar4);
                          cVar1 = FUN_140c56050(local_220);
                          if (cVar1 == '\0') {
LAB_140c6477c:
                            FUN_140c5cfa0(param_1,0);
                            FUN_140c5ccf0(local_220);
                            FUN_140c56300(local_258);
                            return param_1;
                          }
                          local_130 = local_80;
                          uVar4 = FUN_140c55cd0(local_220);
                          local_128 = FUN_140c55e70(local_130,uVar4);
                          lVar5 = FUN_140c55c70(local_258);
                          uVar4 = FUN_140c55c70(lVar5 + 0x88);
                          cVar1 = FUN_140c5cfd0(uVar4,local_128);
                          if (cVar1 == '\0') goto LAB_140c6477c;
                          FUN_140c5ccf0(local_220);
                        }
                        while (lVar5 = FUN_140d354c0(local_180), lVar5 != 0) {
                          pvVar7 = _aligned_recalloc(local_180,(size_t)local_a0,0,0);
                          if (((int)pvVar7 == 0) || (lVar5 = FUN_140d354c0(local_a0), lVar5 == 0)) {
                            FUN_140c6c4e0(0x10,0,0xa0,
                                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                          ,0x2c4);
                            FUN_140c5cfa0(param_1,0);
                            FUN_140c56300(local_258);
                            return param_1;
                          }
                          uVar4 = FUN_140c75ed0(local_a0,param_4);
                          FUN_140c55e40(local_218,uVar4);
                          cVar1 = operator==<>(local_218,0);
                          if (cVar1 != '\0') {
LAB_140c648df:
                            FUN_140c5cfa0(param_1,0);
                            FUN_140c5ccf0(local_218);
                            FUN_140c56300(local_258);
                            return param_1;
                          }
                          local_120 = local_78;
                          uVar4 = FUN_140c55cd0(local_218);
                          local_118 = FUN_140c55e70(local_120,uVar4);
                          lVar5 = FUN_140c55c70(local_258);
                          uVar4 = FUN_140c55c70(lVar5 + 0x88);
                          cVar1 = FUN_140c5cfd0(uVar4,local_118);
                          if (cVar1 == '\0') goto LAB_140c648df;
                          FUN_140c5ccf0(local_218);
                        }
                      }
                      iVar3 = FUN_140d361f0(local_248,local_90,local_228,0xa0000015);
                      if (iVar3 != 0) {
                        if (local_228[0] != 0) {
                          lVar5 = FUN_140c55c70(local_258);
                          iVar3 = FUN_140d35800(local_90,lVar5 + 0x170);
                          if (iVar3 == 0) goto LAB_140c6497d;
                        }
                        lVar5 = FUN_140d354c0(local_90);
                        if (lVar5 == 0) {
                          local_24f = local_228[0] != 0;
                          lVar5 = FUN_140c55c70(local_258);
                          local_1c0 = (byte *)(lVar5 + 0x1a8);
                          *local_1c0 = *local_1c0 & 0xf7 | (local_24f & 1) << 3;
                          iVar3 = FUN_140d36350(local_248,&local_208,0xa0000016,1);
                          if (iVar3 == 0) {
                            FUN_140c6c4e0(0x10,0,0xa0,
                                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                          ,0x2de);
                            FUN_140c5cfa0(param_1,0);
                            FUN_140c56300(local_258);
                            return param_1;
                          }
                          local_24e = local_208 != 0;
                          lVar5 = FUN_140c55c70(local_258);
                          local_1b8 = (byte *)(lVar5 + 0x1a8);
                          *local_1b8 = *local_1b8 & 0xef | (local_24e & 1) << 4;
                          lVar5 = FUN_140c55c70(local_258);
                          iVar3 = FUN_140c66050(local_248,lVar5 + 8,0xa0000017,0);
                          if (iVar3 != 0) {
                            lVar5 = FUN_140c55c70(local_258);
                            iVar3 = FUN_140c65fc0(local_248,lVar5 + 0x174,0xa0000018,0);
                            if (iVar3 != 0) {
                              local_110 = FUN_140c55c70(local_258);
                              lVar5 = FUN_140c55c70(local_258);
                              iVar3 = FUN_140c65fc0(local_248,lVar5 + 0xb8,0xa0000019,
                                                    *(undefined4 *)(local_110 + 0xb4));
                              if (iVar3 != 0) {
                                lVar5 = FUN_140c55c70(local_258);
                                cVar1 = FUN_140c65cf0(local_248,lVar5 + 0x178,0xa000001a);
                                if ((cVar1 != '\0') &&
                                   (iVar3 = FUN_140d36350(local_248,&local_204,0xa000001b,0),
                                   iVar3 != 0)) {
                                  lVar5 = FUN_140c55c70(local_258);
                                  cVar1 = FUN_140c65cf0(local_248,lVar5 + 0x1b0,0xa000001c);
                                  if (cVar1 != '\0') {
                                    iVar3 = FUN_140d361f0(local_248,local_e0,&local_22c,0xa000001d);
                                    if (iVar3 != 0) {
                                      puVar8 = (undefined *)FUN_140c630f0(local_e0,local_38);
                                      puVar9 = local_68;
                                      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
                                        *puVar9 = *puVar8;
                                        puVar8 = puVar8 + 1;
                                        puVar9 = puVar9 + 1;
                                      }
                                      lVar5 = FUN_140c55c70(local_258);
                                      cVar1 = FUN_140c566e0(lVar5 + 0x188,local_68);
                                      if ((cVar1 != '\0') &&
                                         (iVar3 = FUN_140d361f0(local_248,local_e0,local_200,
                                                                0xa000001e), iVar3 != 0)) {
                                        puVar8 = (undefined *)FUN_140c630f0(local_e0,local_28);
                                        puVar9 = local_58;
                                        for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
                                          *puVar9 = *puVar8;
                                          puVar8 = puVar8 + 1;
                                          puVar9 = puVar9 + 1;
                                        }
                                        lVar5 = FUN_140c55c70(local_258);
                                        cVar1 = FUN_140c566e0(lVar5 + 0x198,local_58);
                                        if ((cVar1 != '\0') &&
                                           (lVar5 = FUN_140d354c0(local_248), lVar5 == 0)) {
                                          local_24d = local_204 != 0;
                                          lVar5 = FUN_140c55c70(local_258);
                                          local_1b0 = (byte *)(lVar5 + 0x1a8);
                                          *local_1b0 = *local_1b0 & 0xdf | (local_24d & 1) << 5;
                                          if (local_22c == local_200[0]) {
                                            if (local_22c != 0) {
                                              lVar5 = FUN_140c55c70(local_258);
                                              cVar1 = FUN_140c55f90(lVar5 + 0x178);
                                              if (cVar1 != '\0') goto LAB_140c64ddc;
                                            }
                                            local_24c = local_22c != 0;
                                            lVar5 = FUN_140c55c70(local_258);
                                            local_1a8 = (byte *)(lVar5 + 0x1a8);
                                            *local_1a8 = *local_1a8 & 0xbf | (local_24c & 1) << 6;
                                            uVar4 = FUN_140c55c70(local_258);
                                            cVar1 = (**(code **)(param_3 + 0x30))(uVar4);
                                            if (cVar1 == '\0') {
                                              FUN_140c6c4e0(0x10,0,0xa0,
                                                                                                                        
                                                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                                  ,0x30e);
                                              FUN_140c5cfa0(param_1,0);
                                              FUN_140c56300(local_258);
                                              return param_1;
                                            }
                                            FUN_140c55e70(param_1,local_258);
                                            FUN_140c56300(local_258);
                                            return param_1;
                                          }
LAB_140c64ddc:
                                          FUN_140c6c4e0(0x10,0,0xa0,
                                                                                                                
                                                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                                  ,0x308);
                                          FUN_140c5cfa0(param_1,0);
                                          FUN_140c56300(local_258);
                                          return param_1;
                                        }
                                      }
                                    }
                                    FUN_140c6c4e0(0x10,0,0xa0,
                                                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                                  ,0x300);
                                    FUN_140c5cfa0(param_1,0);
                                    FUN_140c56300(local_258);
                                    return param_1;
                                  }
                                }
                              }
                            }
                          }
                          FUN_140c6c4e0(0x10,0,0xa0,
                                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                        ,0x2f3);
                          FUN_140c5cfa0(param_1,0);
                          FUN_140c56300(local_258);
                          return param_1;
                        }
                      }
LAB_140c6497d:
                      FUN_140c5cfa0(param_1,0);
                      FUN_140c56300(local_258);
                      return param_1;
                    }
                  }
                }
                FUN_140c5cfa0(param_1,0);
                FUN_140c56300(local_258);
                return param_1;
              }
            }
          }
          FUN_140c5cfa0(param_1,0);
          FUN_140c56300(local_258);
          return param_1;
        }
      }
      FUN_140c5cfa0(param_1,0);
      FUN_140c56300(local_258);
      return param_1;
    }
  }
  FUN_140c6c4e0(0x10,0,0xa0,
                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                ,0x254);
  FUN_140c5cfa0(param_1,0);
  FUN_140c56300(local_258);
  return param_1;
}


/* address=140c64f50 name=FUN_140c64f50 */

undefined8 FUN_140c64f50(longlong param_1,undefined8 param_2,int param_3)

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
  iVar2 = FUN_140d37e40(param_2,local_d0,0x20000010);
  if ((((iVar2 != 0) && (iVar2 = FUN_140d38300(local_d0,1), iVar2 != 0)) &&
      (iVar2 = FUN_140d38300(local_d0,*(undefined2 *)(param_1 + 4)), iVar2 != 0)) &&
     ((iVar2 = FUN_140d37e40(local_d0,local_108,4), iVar2 != 0 &&
      (iVar2 = FUN_140d38120(local_108,*(uint *)(*(longlong *)(param_1 + 200) + 0x10) & 0xffff),
      iVar2 != 0)))) {
    if (param_3 == 0) {
      local_d8 = (uint)*(byte *)(param_1 + 0x3b);
    }
    else {
      local_d8 = 0;
    }
    iVar2 = FUN_140d385a0(local_d0,param_1 + 0x3c,local_d8);
    if (((iVar2 != 0) &&
        (iVar2 = FUN_140d385a0(local_d0,param_1 + 0xb,*(undefined *)(param_1 + 10)), iVar2 != 0)) &&
       ((iVar2 = FUN_140d37e40(local_d0,local_108,0xa0000001), iVar2 != 0 &&
        (((iVar2 = FUN_140d38300(local_108,*(undefined8 *)(param_1 + 0xc0)), iVar2 != 0 &&
          (iVar2 = FUN_140d37e40(local_d0,local_108,0xa0000002), iVar2 != 0)) &&
         (iVar2 = FUN_140d38300(local_108,*(undefined4 *)(param_1 + 0xb4)), iVar2 != 0)))))) {
      uVar3 = FUN_140c55c70(param_1 + 0x88);
      lVar4 = FUN_140c560a0(uVar3);
      if ((lVar4 != 0) && ((*(byte *)(param_1 + 0x1a8) >> 1 & 1) == 0)) {
        uVar3 = FUN_140c55c70(param_1 + 0x88);
        local_98 = FUN_140c560c0(uVar3,0);
        iVar2 = FUN_140d37e40(local_d0,local_108,0xa0000003);
        if (iVar2 == 0) {
          return 0;
        }
        local_88 = FUN_140c760d0(local_98);
        uVar3 = FUN_140c760b0(local_98);
        iVar2 = FUN_140d37f00(local_108,uVar3,local_88);
        if (iVar2 == 0) {
          return 0;
        }
      }
      iVar2 = FUN_140d37e40(local_d0,local_108,0xa0000004);
      if ((iVar2 == 0) ||
         (iVar2 = FUN_140d385a0(local_108,param_1 + 0x5d,*(undefined *)(param_1 + 0x5c)), iVar2 == 0
         )) {
        return 0;
      }
      if ((*(int *)(param_1 + 0xb0) != 0) &&
         ((iVar2 = FUN_140d37e40(local_d0,local_108,0xa0000005), iVar2 == 0 ||
          (iVar2 = FUN_140d38300(local_108,(longlong)*(int *)(param_1 + 0xb0)), iVar2 == 0)))) {
        return 0;
      }
      cVar1 = FUN_140c56050(param_1 + 0x80);
      if (cVar1 != '\0') {
        iVar2 = FUN_140d37e40(local_d0,local_108,0xa0000008);
        if (iVar2 == 0) {
          return 0;
        }
        _Str = (char *)FUN_140c55c70(param_1 + 0x80);
        local_80 = strlen(_Str);
        uVar3 = FUN_140c55c70(param_1 + 0x80);
        iVar2 = FUN_140d385a0(local_108,uVar3,local_80);
        if (iVar2 == 0) {
          return 0;
        }
      }
      if ((*(int *)(param_1 + 0x16c) != 0) &&
         ((iVar2 = FUN_140d37e40(local_d0,local_108,0xa0000009), iVar2 == 0 ||
          (iVar2 = FUN_140d38300(local_108,*(undefined4 *)(param_1 + 0x16c)), iVar2 == 0)))) {
        return 0;
      }
      cVar1 = FUN_140c55f90(param_1 + 0xe8);
      if ((cVar1 == '\0') && (param_3 == 0)) {
        iVar2 = FUN_140d37e40(local_d0,local_108,0xa000000a);
        if (iVar2 == 0) {
          return 0;
        }
        local_78 = FUN_140c55f80(param_1 + 0xe8);
        uVar3 = FUN_140c55c70(param_1 + 0xe8);
        iVar2 = FUN_140d385a0(local_108,uVar3,local_78);
        if (iVar2 == 0) {
          return 0;
        }
      }
      if (((*(byte *)(param_1 + 0x1a8) >> 1 & 1) != 0) &&
         ((iVar2 = FUN_140d37e40(local_d0,local_108,0xa000000d), iVar2 == 0 ||
          (iVar2 = FUN_140d385a0(local_108,param_1 + 0x108,0x20), iVar2 == 0)))) {
        return 0;
      }
      if ((*(char *)(param_1 + 0x168) != '\0') &&
         ((iVar2 = FUN_140d37e40(local_d0,local_108,0xa000000e), iVar2 == 0 ||
          (iVar2 = FUN_140d385a0(local_108,param_1 + 0x128,*(undefined *)(param_1 + 0x168)),
          iVar2 == 0)))) {
        return 0;
      }
      cVar1 = FUN_140c57ae0(param_1 + 0xf8,0);
      if (cVar1 != '\0') {
        iVar2 = FUN_140d37e40(local_d0,local_108,0xa000000f);
        if (iVar2 == 0) {
          return 0;
        }
        uVar3 = FUN_140c55c70(param_1 + 0xf8);
        local_70 = FUN_140c760d0(uVar3);
        uVar3 = FUN_140c55c70(param_1 + 0xf8);
        uVar3 = FUN_140c760b0(uVar3);
        iVar2 = FUN_140d385a0(local_108,uVar3,local_70);
        if (iVar2 == 0) {
          return 0;
        }
      }
      cVar1 = FUN_140c57ae0(param_1 + 0x100,0);
      if (cVar1 != '\0') {
        iVar2 = FUN_140d37e40(local_d0,local_108,0xa0000010);
        if (iVar2 == 0) {
          return 0;
        }
        uVar3 = FUN_140c55c70(param_1 + 0x100);
        local_68 = FUN_140c760d0(uVar3);
        uVar3 = FUN_140c55c70(param_1 + 0x100);
        uVar3 = FUN_140c760b0(uVar3);
        iVar2 = FUN_140d385a0(local_108,uVar3,local_68);
        if (iVar2 == 0) {
          return 0;
        }
      }
      if (((*(byte *)(param_1 + 0x1a8) & 1) != 0) &&
         ((iVar2 = FUN_140d37e40(local_d0,local_108,0xa0000011), iVar2 == 0 ||
          (iVar2 = FUN_140d38610(local_108,1), iVar2 == 0)))) {
        return 0;
      }
      if ((*(short *)(param_1 + 6) != 0) &&
         ((iVar2 = FUN_140d37e40(local_d0,local_108,0xa0000012), iVar2 == 0 ||
          (iVar2 = FUN_140d38300(local_108,*(undefined2 *)(param_1 + 6)), iVar2 == 0)))) {
        return 0;
      }
      cVar1 = FUN_140c57ae0(param_1 + 0x88,0);
      if ((cVar1 != '\0') && ((*(byte *)(param_1 + 0x1a8) >> 1 & 1) == 0)) {
        uVar3 = FUN_140c55c70(param_1 + 0x88);
        uVar5 = FUN_140c560a0(uVar3);
        if (1 < uVar5) {
          iVar2 = FUN_140d37e40(local_d0,local_108,0xa0000013);
          if (iVar2 == 0) {
            return 0;
          }
          local_a0 = 1;
          while( true ) {
            uVar3 = FUN_140c55c70(param_1 + 0x88);
            uVar5 = FUN_140c560a0(uVar3);
            if (uVar5 <= local_a0) break;
            uVar3 = FUN_140c55c70(param_1 + 0x88);
            local_90 = FUN_140c560c0(uVar3,local_a0);
            local_60 = FUN_140c760d0(local_90);
            uVar3 = FUN_140c760b0(local_90);
            iVar2 = FUN_140d37f00(local_108,uVar3,local_60);
            if (iVar2 == 0) {
              return 0;
            }
            local_a0 = local_a0 + 1;
          }
        }
      }
      if (((*(byte *)(param_1 + 0x1a8) >> 3 & 1) != 0) &&
         (((iVar2 = FUN_140d37e40(local_d0,local_108,0xa0000015), iVar2 == 0 ||
           (iVar2 = FUN_140d37e40(local_108,local_38,4), iVar2 == 0)) ||
          (iVar2 = FUN_140d381b0(local_38,*(undefined4 *)(param_1 + 0x170)), iVar2 == 0)))) {
        return 0;
      }
      if (((*(byte *)(param_1 + 0x1a8) >> 4 & 1) == 0) &&
         ((iVar2 = FUN_140d37e40(local_d0,local_108,0xa0000016), iVar2 == 0 ||
          (iVar2 = FUN_140d38610(local_108,0), iVar2 == 0)))) {
        return 0;
      }
      if ((*(short *)(param_1 + 8) != 0) &&
         ((iVar2 = FUN_140d37e40(local_d0,local_108,0xa0000017), iVar2 == 0 ||
          (iVar2 = FUN_140d38300(local_108,*(undefined2 *)(param_1 + 8)), iVar2 == 0)))) {
        return 0;
      }
      if ((*(int *)(param_1 + 0x174) != 0) &&
         ((iVar2 = FUN_140d37e40(local_d0,local_108,0xa0000018), iVar2 == 0 ||
          (iVar2 = FUN_140d38300(local_108,*(undefined4 *)(param_1 + 0x174)), iVar2 == 0)))) {
        return 0;
      }
      if ((*(int *)(param_1 + 0xb4) != *(int *)(param_1 + 0xb8)) &&
         ((iVar2 = FUN_140d37e40(local_d0,local_108,0xa0000019), iVar2 == 0 ||
          (iVar2 = FUN_140d38300(local_108,*(undefined4 *)(param_1 + 0xb8)), iVar2 == 0)))) {
        return 0;
      }
      cVar1 = FUN_140c55f90(param_1 + 0x178);
      if (cVar1 == '\0') {
        iVar2 = FUN_140d37e40(local_d0,local_108,0xa000001a);
        if (iVar2 == 0) {
          return 0;
        }
        local_58 = FUN_140c55f80(param_1 + 0x178);
        uVar3 = FUN_140c55c70(param_1 + 0x178);
        iVar2 = FUN_140d385a0(local_108,uVar3,local_58);
        if (iVar2 == 0) {
          return 0;
        }
      }
      if (((*(byte *)(param_1 + 0x1a8) >> 5 & 1) != 0) &&
         ((iVar2 = FUN_140d37e40(local_d0,local_108,0xa000001b), iVar2 == 0 ||
          (iVar2 = FUN_140d38610(local_108,1), iVar2 == 0)))) {
        return 0;
      }
      cVar1 = FUN_140c55f90(param_1 + 0x1b0);
      if (cVar1 == '\0') {
        iVar2 = FUN_140d37e40(local_d0,local_108,0xa000001c);
        if (iVar2 == 0) {
          return 0;
        }
        local_50 = FUN_140c55f80(param_1 + 0x1b0);
        uVar3 = FUN_140c55c70(param_1 + 0x1b0);
        iVar2 = FUN_140d385a0(local_108,uVar3,local_50);
        if (iVar2 == 0) {
          return 0;
        }
      }
      if ((*(byte *)(param_1 + 0x1a8) >> 6 & 1) == 0) {
LAB_140c65be6:
        uVar3 = FUN_140d37900(param_2);
        return uVar3;
      }
      iVar2 = FUN_140d37e40(local_d0,local_108,0xa000001d);
      if (iVar2 != 0) {
        local_48 = FUN_140c55f80(param_1 + 0x188);
        uVar3 = FUN_140c55c70(param_1 + 0x188);
        iVar2 = FUN_140d385a0(local_108,uVar3,local_48);
        if ((iVar2 != 0) && (iVar2 = FUN_140d37e40(local_d0,local_108,0xa000001e), iVar2 != 0)) {
          local_40 = FUN_140c55f80(param_1 + 0x198);
          uVar3 = FUN_140c55c70(param_1 + 0x198);
          iVar2 = FUN_140d385a0(local_108,uVar3,local_40);
          if (iVar2 != 0) goto LAB_140c65be6;
        }
      }
      return 0;
    }
  }
  return 0;
}


/* address=140c65c10 name=FUN_140c65c10 */

undefined8 FUN_140c65c10(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int local_28 [2];
  undefined8 local_20;
  undefined local_18 [24];
  
  iVar1 = FUN_140d361f0(param_1,local_18,local_28,param_3);
  if (iVar1 == 0) {
    FUN_140c6c4e0(0x10,0,0xa0,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x1a6);
    return 0;
  }
  if (local_28[0] == 0) {
    FUN_140c56a70(param_2,0);
  }
  else {
    iVar1 = FUN_140d35600(local_18);
    if (iVar1 != 0) {
      FUN_140c6c4e0(0x10,0,0xa0,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                    ,0x1ab);
      return 0;
    }
    local_20 = 0;
    iVar1 = FUN_140d35580(local_18,&local_20);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_140c56a70(param_2,local_20);
  }
  return 1;
}


/* address=140c65cf0 name=FUN_140c65cf0 */

uint FUN_140c65cf0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [24];
  
  iVar1 = FUN_140d361f0(param_1,local_48,0,param_3);
  if (iVar1 == 0) {
    uVar2 = FUN_140c6c4e0(0x10,0,0xa0,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                          ,0x1c0);
    uVar2 = uVar2 & 0xffffff00;
  }
  else {
    puVar4 = (undefined *)FUN_140c630f0(local_48,local_28);
    puVar5 = local_38;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar2 = FUN_140c566e0(param_2,local_38);
  }
  return uVar2;
}


/* address=140c65d90 name=FUN_140c65d90 */

undefined8 FUN_140c65d90(wchar_t *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  wchar_t *local_28 [2];
  wchar_t *local_18 [3];
  
  iVar2 = FUN_140d35ce0(param_1,param_3);
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  else {
    uVar3 = wcstoul(param_1,local_28,param_3);
    if (((uVar3 != 0) && (uVar3 = wcstoul((wchar_t *)local_28,local_18,4), uVar3 != 0)) &&
       (lVar5 = FUN_140d354c0(local_28), lVar5 == 0)) {
      uVar4 = FUN_140c75ed0(local_18,param_4);
      FUN_140c63230(param_2,uVar4);
      cVar1 = operator==<>(param_2,0);
      if (cVar1 != '\0') {
        return 0;
      }
      return 1;
    }
    FUN_140c6c4e0(0x10,0,0xa0,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x1d2);
    uVar4 = 0;
  }
  return uVar4;
}


/* address=140c65e70 name=FUN_140c65e70 */

undefined8
FUN_140c65e70(undefined8 param_1,undefined8 param_2,undefined *param_3,byte param_4,
             undefined4 param_5)

{
  undefined uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined local_20 [32];
  
  iVar2 = FUN_140d361f0(param_1,local_20,0,param_5);
  if ((iVar2 != 0) && (uVar3 = FUN_140d354c0(local_20), uVar3 <= param_4)) {
    uVar4 = FUN_140d354c0(local_20);
    uVar5 = FUN_140d354a0(local_20);
    FUN_140c63ab0(param_2,uVar5,uVar4);
    uVar1 = FUN_140d354c0(local_20);
    *param_3 = uVar1;
    return 1;
  }
  FUN_140c6c4e0(0x10,0,0xa0,
                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                ,0x1e5);
  return 0;
}


/* address=140c65f30 name=FUN_140c65f30 */

undefined8 FUN_140c65f30(undefined8 param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_140d362c0(param_1,&local_18,param_3,(longlong)param_4);
  if ((iVar1 == 0) || (0x7fffffff < CONCAT44(uStack_14,local_18))) {
    FUN_140c6c4e0(0x10,0,0xa0,
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


/* address=140c65fc0 name=FUN_140c65fc0 */

undefined8
FUN_140c65fc0(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_140d362c0(param_1,&local_18,param_3,param_4);
  if ((iVar1 == 0) || (0xffffffff < CONCAT44(uStack_14,local_18))) {
    FUN_140c6c4e0(0x10,0,0xa0,
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


/* address=140c66050 name=FUN_140c66050 */

undefined8
FUN_140c66050(undefined8 param_1,undefined2 *param_2,undefined4 param_3,undefined2 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined2 local_18;
  undefined6 uStack_16;
  
  iVar1 = FUN_140d362c0(param_1,&local_18,param_3,param_4);
  if ((iVar1 == 0) || (0xffff < CONCAT62(uStack_16,local_18))) {
    FUN_140c6c4e0(0x10,0,0xa0,
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


/* address=140c660d0 name=FUN_140c660d0 */

ulonglong * FUN_140c660d0(ulonglong param_1)

{
  int iVar1;
  ulonglong *puVar2;
  
  iVar1 = FUN_140c67110();
  if (iVar1 == 0) {
    if (DAT_1413ea0a8 == (code *)0x0) {
      if ((param_1 <= param_1 + 8) &&
         (puVar2 = (ulonglong *)_malloc_base(param_1 + 8), puVar2 != (ulonglong *)0x0)) {
        *puVar2 = param_1;
        FUN_140c670d0(puVar2,8);
        return puVar2 + 1;
      }
    }
    else {
      if (DAT_1413ea0b0 == 0) {
        FID_conflict__assert((wchar_t *)s_O_14139e058,(wchar_t *)s_D_14139dfa0,0xea);
      }
      if (DAT_1413ea0b8 == 0) {
        FID_conflict__assert((wchar_t *)s_O_14139e150,(wchar_t *)s_D_14139e090,0xeb);
      }
      puVar2 = (ulonglong *)(*DAT_1413ea0a8)(param_1);
      if (puVar2 != (ulonglong *)0x0) {
        return puVar2;
      }
      if (param_1 == 0) {
        return (ulonglong *)0x0;
      }
    }
  }
  FUN_140c6c4e0(0xe,0,0x41,s_D__a_1_s_target_release_build_bo_14139e190,0x10b);
  return (ulonglong *)0x0;
}


/* address=140c66200 name=FUN_140c66200 */

void FUN_140c66200(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_1 != 0) {
    if (DAT_1413ea0b0 == (code *)0x0) {
      plVar2 = (longlong *)(param_1 + -8);
      FUN_140c670f0(plVar2,8);
      lVar1 = *plVar2;
      FUN_140c663a0(plVar2,lVar1 + 8);
      if (DAT_1413ea0a0 == (code *)0x0) {
        thunk_FUN_140e18570(plVar2);
      }
      else {
        (*DAT_1413ea0a0)(plVar2,lVar1 + 8,0);
      }
    }
    else {
      (*DAT_1413ea0b0)(param_1);
    }
  }
  return;
}


/* address=140c662b0 name=FUN_140c662b0 */

longlong FUN_140c662b0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong local_20;
  ulonglong local_18;
  
  if (param_1 == 0) {
    lVar1 = FUN_140c660d0(param_2);
  }
  else {
    if (DAT_1413ea0b8 == (code *)0x0) {
      puVar2 = (ulonglong *)(param_1 + -8);
      FUN_140c670f0(puVar2,8);
      local_20 = *puVar2;
      FUN_140c670d0(puVar2,8);
    }
    else {
      local_20 = (*DAT_1413ea0b8)(param_1);
    }
    lVar1 = FUN_140c660d0(param_2);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      local_18 = param_2;
      if (local_20 < param_2) {
        local_18 = local_20;
      }
      FUN_140e286a0(lVar1,param_1,local_18);
      FUN_140c66200(param_1);
    }
  }
  return lVar1;
}


/* address=140c663a0 name=FUN_140c663a0 */

void FUN_140c663a0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c671b0(param_1,param_2);
  return;
}


/* address=140c663d0 name=FUN_140c663d0 */

byte FUN_140c663d0(longlong param_1,longlong param_2,ulonglong param_3)

{
  byte local_28;
  ulonglong local_20;
  
  local_28 = 0;
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    local_28 = local_28 | *(byte *)(param_1 + local_20) ^ *(byte *)(param_2 + local_20);
  }
  return local_28;
}


/* address=140c66470 name=FUN_140c66470 */

uint FUN_140c66470(longlong param_1,ulonglong param_2)

{
  uint local_28;
  ulonglong local_20;
  
  local_28 = DAT_140fd40e8;
  for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
    local_28 = (local_28 ^ *(byte *)(param_1 + local_20)) * DAT_140fd40e4;
  }
  return local_28;
}


/* address=140c664f0 name=FUN_140c664f0 */

void FUN_140c664f0(char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  FUN_140c66470(param_1,sVar1);
  return;
}


/* address=140c66520 name=FUN_140c66520 */

longlong FUN_140c66520(char *param_1)

{
  size_t sVar1;
  longlong lVar2;
  
  if (param_1 == (char *)0x0) {
    lVar2 = 0;
  }
  else {
    sVar1 = strlen(param_1);
    lVar2 = FUN_140c660d0(sVar1 + 1);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_140c66ea0(lVar2,param_1,sVar1 + 1);
    }
  }
  return lVar2;
}


/* address=140c66590 name=FUN_140c66590 */

ulonglong FUN_140c66590(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong local_18;
  
  for (local_18 = 0;
      (uVar1 = param_2, local_18 < param_2 &&
      (uVar1 = local_18, *(char *)(param_1 + local_18) != '\0')); local_18 = local_18 + 1) {
  }
  return uVar1;
}


/* address=140c665f0 name=__ascii_iswalpha */

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


/* address=140c66640 name=FUN_140c66640 */

undefined4 FUN_140c66640(int param_1)

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


/* address=140c66680 name=FUN_140c66680 */

undefined4 FUN_140c66680(int param_1)

{
  int iVar1;
  undefined4 local_18;
  
  iVar1 = FUN_140c66640(param_1);
  if (((iVar1 == 0) && ((param_1 < 0x61 || (0x66 < param_1)))) &&
     ((param_1 < 0x41 || (0x46 < param_1)))) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}


/* address=140c666e0 name=FUN_140c666e0 */

undefined8 FUN_140c666e0(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_140c66640(param_2);
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


/* address=140c66770 name=FUN_140c66770 */

undefined4 FUN_140c66770(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = __ascii_iswalpha(param_1);
  if ((iVar1 == 0) && (iVar1 = FUN_140c66640(param_1), iVar1 == 0)) {
    return 0;
  }
  return 1;
}


/* address=140c667c0 name=__ascii_tolower */

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


/* address=140c667f0 name=FUN_140c667f0 */

undefined4 FUN_140c667f0(int param_1)

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


/* address=140c66840 name=FUN_140c66840 */

undefined8 FUN_140c66840(longlong param_1,longlong param_2)

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


/* address=140c668e0 name=FUN_140c668e0 */

undefined8 FUN_140c668e0(longlong param_1,longlong param_2,ulonglong param_3)

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


/* address=140c669a0 name=_snprintf */

/* Library Function - Single Match
    _snprintf
   
   Library: Visual Studio 2019 Release */

int __cdecl _snprintf(char *_Dest,size_t _Count,char *_Format,...)

{
  int iVar1;
  undefined8 in_R9;
  undefined8 local_res20;
  
  local_res20 = in_R9;
  iVar1 = FUN_140c66a00(_Dest,_Count,_Format,&local_res20);
  return iVar1;
}


/* address=140c66a00 name=FUN_140c66a00 */

void FUN_140c66a00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140c67130(param_1,param_2,param_3,param_4);
  return;
}


/* address=140c66a40 name=FUN_140c66a40 */

void FUN_140c66a40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140c66ef0(param_1,param_2,param_3,0);
  return;
}


/* address=140c66ae0 name=FUN_140c66ae0 */

longlong FUN_140c66ae0(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = FUN_140c66590(param_1,param_2);
  if (uVar1 + 1 < uVar1) {
    FUN_140c6c4e0(0xe,0,0x41,s_D__a_1_s_target_release_build_bo_14139e1f0,0x22f);
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_140c660d0(uVar1 + 1);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_140c66ea0(lVar2,param_1,uVar1);
      *(undefined *)(lVar2 + uVar1) = 0;
    }
  }
  return lVar2;
}


/* address=140c66ba0 name=FUN_140c66ba0 */

longlong FUN_140c66ba0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_140c660d0(param_2);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_140c66ea0(lVar1,param_1,param_2);
    }
  }
  return lVar1;
}


/* address=140c66c00 name=FUN_140c66c00 */

longlong FUN_140c66c00(char *param_1,char *param_2,ulonglong param_3)

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


/* address=140c66cb0 name=FUN_140c66cb0 */

longlong FUN_140c66cb0(char *param_1,undefined8 param_2,longlong param_3)

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
  lVar1 = FUN_140c66c00(local_res8,param_2,local_res18);
  return local_18 + lVar1;
}


/* address=140c66de0 name=FUN_140c66de0 */

void FUN_140c66de0(undefined8 param_1)

{
  FUN_140c66200(param_1);
  return;
}


/* address=140c66ea0 name=FUN_140c66ea0 */

undefined8 FUN_140c66ea0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140c66ef0 name=FUN_140c66ef0 */

uint FUN_140c66ef0(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

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
    local_50 = FUN_140c660d0;
    local_48 = FUN_140c66200;
    local_40 = FUN_140c662b0;
  }
  else {
    local_50 = _malloc_base;
    local_48 = thunk_FUN_140e18570;
    local_40 = _realloc_base;
  }
  local_58 = 0x40;
  lVar1 = (*local_50)(0x40);
  if ((lVar1 != 0) && (local_68 = FUN_140c67130(lVar1,0x40,param_2,param_3), -1 < (int)local_68)) {
    local_60 = lVar1;
    if (0x3f < local_68) {
      local_58 = (longlong)(int)local_68 + 1;
      local_60 = (*local_40)(lVar1,local_58);
      if (local_60 == 0) goto LAB_140c67092;
      local_68 = FUN_140c67130(local_60,local_58,param_2,param_3);
    }
    lVar1 = local_60;
    if ((-1 < (int)local_68) && ((ulonglong)(longlong)(int)local_68 < local_58)) {
      *param_1 = local_60;
      return local_68;
    }
  }
LAB_140c67092:
  local_60 = lVar1;
  (*local_48)(local_60);
  *param_1 = 0;
  puVar2 = (undefined4 *)FUN_140e0d4fc();
  *puVar2 = 0xc;
  return 0xffffffff;
}


/* address=140c670d0 name=FUN_140c670d0 */

void FUN_140c670d0(void)

{
  return;
}


/* address=140c670f0 name=FUN_140c670f0 */

void FUN_140c670f0(void)

{
  return;
}


/* address=140c67110 name=FUN_140c67110 */

undefined8 FUN_140c67110(void)

{
  return 0;
}


/* address=140c67120 name=FUN_140c67120 */

undefined * FUN_140c67120(void)

{
  return &DAT_1413ea0c0;
}


/* address=140c67130 name=FUN_140c67130 */

int FUN_140c67130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  int local_14;
  
  puVar1 = (ulonglong *)FUN_140c67120();
  local_14 = FUN_140e02060(*puVar1 | 2,param_1,param_2,param_3,0,param_4);
  if (local_14 < 0) {
    local_14 = -1;
  }
  return local_14;
}


/* address=140c671b0 name=FUN_140c671b0 */

undefined * FUN_140c671b0(undefined *param_1,longlong param_2)

{
  undefined *puVar1;
  
  puVar1 = param_1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  return param_1;
}


/* address=140c671e0 name=FUN_140c671e0 */

undefined * FUN_140c671e0(void)

{
  return &DAT_140fd4700;
}


/* address=140c67200 name=FUN_140c67200 */

void FUN_140c67200(void)

{
  FUN_140c671e0();
  return;
}


/* address=140c67220 name=FUN_140c67220 */

undefined * FUN_140c67220(void)

{
  return &DAT_140fd4760;
}


/* address=140c67230 name=FUN_140c67230 */

undefined * FUN_140c67230(void)

{
  return &DAT_140fd4748;
}


/* address=140c67240 name=FUN_140c67240 */

undefined * FUN_140c67240(void)

{
  return &DAT_140fd4730;
}


/* address=140c67970 name=FUN_140c67970 */

void FUN_140c67970(undefined8 param_1)

{
  FUN_140d80620(param_1);
  return;
}


/* address=140c67990 name=FUN_140c67990 */

void FUN_140c67990(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_140c55cd0(param_1);
    FUN_140c67b30(uVar2,p_Var1);
  }
  return;
}


/* address=140c679e0 name=FUN_140c679e0 */

undefined8 FUN_140c679e0(undefined8 param_1,uint param_2)

{
  FUN_140d3ae10(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_140e18570(param_1,0x268);
  }
  return param_1;
}


/* address=140c67a20 name=FUN_140c67a20 */

void FUN_140c67a20(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140c55cd0(param_1);
    FUN_140c67b10(uVar1,*param_1);
  }
  return;
}


/* address=140c67a60 name=FUN_140c67a60 */

void FUN_140c67a60(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_140c55cd0(param_1);
    FUN_140c67b10(uVar2,p_Var1);
  }
  return;
}


/* address=140c67ab0 name=FUN_140c67ab0 */

undefined8
FUN_140c67ab0(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_140c67a60(param_1,p_Var1);
  uVar2 = FUN_140c55cd0(param_2);
  FUN_140c55cd0(uVar2);
  FUN_140c55cd0(param_1);
  return param_1;
}


/* address=140c67b10 name=FUN_140c67b10 */

void FUN_140c67b10(undefined8 param_1,undefined8 param_2)

{
  FUN_140c67b50(param_2);
  return;
}


/* address=140c67b30 name=FUN_140c67b30 */

void FUN_140c67b30(undefined8 param_1,undefined8 param_2)

{
  FUN_140c67970(param_2);
  return;
}


/* address=140c67b50 name=FUN_140c67b50 */

void FUN_140c67b50(undefined8 param_1)

{
  FUN_140c67b70(param_1);
  return;
}


/* address=140c67b70 name=FUN_140c67b70 */

void FUN_140c67b70(longlong param_1)

{
  if (param_1 != 0) {
    FUN_140c679e0(param_1,0);
    FUN_140c66200(param_1);
  }
  return;
}


/* address=140c67ba0 name=FUN_140c67ba0 */

undefined8 FUN_140c67ba0(longlong param_1)

{
  FUN_140d39500(param_1 + 0x18);
  return 1;
}


/* address=140c67c40 name=FUN_140c67c40 */

void FUN_140c67c40(undefined8 *param_1)

{
  int iVar1;
  
  if ((param_1 != (undefined8 *)0x0) && (iVar1 = FUN_140d39550(param_1 + 3), iVar1 != 0)) {
    FUN_140d39f10(&DAT_1413ea0c8,param_1,param_1 + 4);
    FUN_140c685e0(*param_1);
    FUN_140d80d20(param_1[1]);
    FUN_140d81d60(param_1[2]);
    FUN_140d81710(param_1[8]);
    FUN_140d87970(param_1[9]);
    FUN_140d87d70(param_1[10]);
    FUN_140d74b10(param_1[0xb]);
    FUN_140d89660(param_1[0xc]);
    FUN_140d8b4c0(param_1[0x11]);
    FUN_140d396b0(param_1 + 0x12);
    FUN_140c66200(param_1);
  }
  return;
}


/* address=140c67d40 name=FUN_140c67d40 */

longlong FUN_140c67d40(longlong *param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  longlong local_28;
  undefined local_20 [32];
  
  local_28 = 0;
  if (param_3 < 0) {
    FUN_140c6c4e0(0xc,0,0x6b,s_D__a_1_s_target_release_build_bo_14139e520,0xf0);
  }
  else {
    FUN_140d35430(local_20,*param_2,(longlong)param_3);
    local_28 = FUN_140c68700(local_20,0);
    if (local_28 != 0) {
      uVar1 = FUN_140d354a0(local_20);
      *param_2 = uVar1;
    }
  }
  if (param_1 != (longlong *)0x0) {
    FUN_140c67c40(*param_1);
    *param_1 = local_28;
  }
  return local_28;
}


/* address=140c67e00 name=FUN_140c67e00 */

longlong FUN_140c67e00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined local_18 [24];
  
  uVar1 = FUN_140c760d0(param_1);
  uVar2 = FUN_140c760b0(param_1);
  FUN_140d35430(local_18,uVar2,uVar1);
  lVar3 = FUN_140c68700(local_18,param_1);
  if ((lVar3 == 0) || (lVar4 = FUN_140d354c0(local_18), lVar4 != 0)) {
    FUN_140c67c40(lVar3);
    lVar3 = 0;
  }
  return lVar3;
}


/* address=140c67e80 name=FUN_140c67e80 */

undefined8 FUN_140c67e80(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined local_70 [8];
  undefined local_68 [48];
  undefined local_38 [56];
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_140c6c4e0(0xc,0,0x9b,s_D__a_1_s_target_release_build_bo_14139e590,0x107);
    uVar3 = 0xffffffff;
  }
  else {
    iVar1 = FUN_140d376f0(local_38,0x40);
    if ((((((iVar1 == 0) || (iVar1 = FUN_140d37e40(local_38,local_68,0x20000010), iVar1 == 0)) ||
          (iVar1 = FUN_140c68650(*param_1,0), iVar1 < 0)) ||
         ((iVar2 = FUN_140d37fb0(local_68,local_70,(longlong)iVar1), iVar2 == 0 ||
          (iVar2 = FUN_140c68650(*param_1,local_70), iVar2 != iVar1)))) ||
        ((iVar1 = FUN_140d80d90(param_1[1],0), iVar1 < 0 ||
         ((iVar2 = FUN_140d37fb0(local_68,local_70,(longlong)iVar1), iVar2 == 0 ||
          (iVar2 = FUN_140d80d90(param_1[1],local_70), iVar2 != iVar1)))))) ||
       ((iVar1 = FUN_140d81dc0(param_1[2],0), iVar1 < 0 ||
        ((iVar2 = FUN_140d37fb0(local_68,local_70,(longlong)iVar1), iVar2 == 0 ||
         (iVar2 = FUN_140d81dc0(param_1[2],local_70), iVar2 != iVar1)))))) {
      FUN_140d377b0(local_38);
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = FUN_140d8ad30(local_38,param_2);
    }
  }
  return uVar3;
}


/* address=140c680e0 name=FUN_140c680e0 */

longlong * FUN_140c680e0(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_140c68680();
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    lVar2 = FUN_140c685c0();
    *plVar1 = lVar2;
    lVar2 = FUN_140d80cd0();
    plVar1[1] = lVar2;
    lVar2 = FUN_140d81d40();
    plVar1[2] = lVar2;
    if (((*plVar1 == 0) || (plVar1[1] == 0)) || (plVar1[2] == 0)) {
      FUN_140c67c40(plVar1);
      plVar1 = (longlong *)0x0;
    }
  }
  return plVar1;
}


/* address=140c682e0 name=FUN_140c682e0 */

ulonglong FUN_140c682e0(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong local_10 [2];
  
  if ((param_2 == (longlong *)0x0) || (*param_2 != 0)) {
    uVar2 = FUN_140c68c80(param_1,param_2);
  }
  else {
    uVar1 = FUN_140c68c80(param_1,0);
    if ((int)uVar1 < 1) {
      uVar2 = (ulonglong)uVar1;
    }
    else {
      local_10[0] = FUN_140c660d0((longlong)(int)uVar1);
      *param_2 = local_10[0];
      if (local_10[0] == 0) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar1 = FUN_140c68c80(param_1,local_10);
        if ((int)uVar1 < 1) {
          FUN_140c66200(*param_2);
          *param_2 = 0;
        }
        uVar2 = (ulonglong)uVar1;
      }
    }
  }
  return uVar2;
}


/* address=140c683b0 name=FUN_140c683b0 */

longlong FUN_140c683b0(longlong *param_1,undefined8 *param_2,int param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 local_20;
  longlong local_18;
  
  local_20 = *param_2;
  bVar1 = false;
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    bVar1 = true;
  }
  local_18 = FUN_140c67d40(param_1,&local_20,param_3);
  if (local_18 == 0) {
    local_18 = 0;
  }
  else {
    param_3 = param_3 - ((int)local_20 - (int)*param_2);
    if ((0 < param_3) && (lVar2 = FUN_140d8b4f0(local_18 + 0x88,&local_20,param_3), lVar2 == 0)) {
      if ((bVar1) && (FUN_140c67c40(local_18), param_1 != (longlong *)0x0)) {
        *param_1 = 0;
      }
      return 0;
    }
    *param_2 = local_20;
  }
  return local_18;
}


/* address=140c68580 name=FUN_140c68580 */

undefined8 FUN_140c68580(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e28d40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140c685c0 name=FUN_140c685c0 */

void FUN_140c685c0(void)

{
  FUN_140d823d0(&DAT_140fd47b0);
  return;
}


/* address=140c685e0 name=FUN_140c685e0 */

void FUN_140c685e0(undefined8 param_1)

{
  FUN_140d82cb0(param_1,&DAT_140fd47b0);
  return;
}


/* address=140c68650 name=FUN_140c68650 */

void FUN_140c68650(undefined8 param_1,undefined8 param_2)

{
  FUN_140d85630(param_1,param_2,&DAT_140fd47b0);
  return;
}


/* address=140c68680 name=FUN_140c68680 */

longlong FUN_140c68680(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140c660d0(0x98);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_140c68580(lVar1,0,0x98);
    *(undefined4 *)(lVar1 + 0x18) = 1;
    *(undefined4 *)(lVar1 + 0x28) = 0xffffffff;
    FUN_140d39ef0(lVar1 + 0x20);
    FUN_140d39610(lVar1 + 0x90);
  }
  return lVar1;
}


/* address=140c68700 name=FUN_140c68700 */

longlong ** FUN_140c68700(wchar_t *param_1,undefined8 param_2)

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
  int local_80;
  longlong local_78;
  int local_70;
  int local_6c;
  wchar_t *local_68 [2];
  undefined local_58 [16];
  undefined local_48 [16];
  undefined local_38 [16];
  undefined8 local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  uVar1 = wcstoul(param_1,local_68,0x20000010);
  if ((((uVar1 == 0) || (uVar4 = FUN_140d354c0(local_68), 0x3fffffff < uVar4)) ||
      (iVar2 = FUN_140d35ca0(local_68,local_48,0x20000010), iVar2 == 0)) ||
     (iVar2 = FUN_140d35ca0(local_68,local_38,0x20000010), iVar2 == 0)) {
    FUN_140c6c4e0(0xc,0,0x6d,s_D__a_1_s_target_release_build_bo_14139e2f0,CONCAT44(uVar9,0x9b));
  }
  else {
    piVar10 = &local_6c;
    uVar9 = 0;
    iVar2 = FUN_140d35e30(local_68,local_58,&local_70,&local_28,0,piVar10);
    if (((iVar2 == 0) || (local_70 != 3)) ||
       ((local_6c != 0 ||
        ((iVar2 = FUN_140d35470(local_58,local_28), iVar2 == 0 ||
         (lVar5 = FUN_140d354c0(local_68), lVar5 != 0)))))) {
      FUN_140c6c4e0(0xc,0,0x6d,s_D__a_1_s_target_release_build_bo_14139e360,CONCAT44(uVar9,0xad));
    }
    else {
      pplVar6 = (longlong **)FUN_140c68680();
      if (pplVar6 != (longlong **)0x0) {
        local_78 = FUN_140d354a0(local_48);
        uVar3 = FUN_140d354c0(local_48);
        uVar8 = CONCAT44(uVar9,0xffffffff);
        iVar2 = FUN_140d834a0(pplVar6,&local_78,uVar3,&DAT_140fd47b0,uVar8,
                              (ulonglong)piVar10 & 0xffffffff00000000,0,param_2);
        uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
        if (0 < iVar2) {
          local_20 = FUN_140d354a0(local_48);
          lVar5 = FUN_140d354c0(local_48);
          if (local_78 == local_20 + lVar5) {
            local_78 = FUN_140d354a0(local_38);
            uVar3 = FUN_140d354c0(local_38);
            plVar7 = (longlong *)FUN_140d80d50(0,&local_78,uVar3);
            pplVar6[1] = plVar7;
            if (pplVar6[1] != (longlong *)0x0) {
              local_18 = FUN_140d354a0(local_38);
              lVar5 = FUN_140d354c0(local_38);
              if (local_78 == local_18 + lVar5) {
                local_78 = FUN_140d354a0(local_58);
                uVar3 = FUN_140d354c0(local_58);
                plVar7 = (longlong *)FUN_140d86fd0(0,&local_78,uVar3);
                pplVar6[2] = plVar7;
                if (pplVar6[2] != (longlong *)0x0) {
                  local_10 = FUN_140d354a0(local_58);
                  lVar5 = FUN_140d354c0(local_58);
                  if (local_78 == local_10 + lVar5) {
                    local_80 = 0;
                    if ((**pplVar6 == 0) ||
                       ((local_80 = FUN_140d72ba0(**pplVar6), -1 < local_80 && (local_80 < 3)))) {
                      if ((local_80 == 0) && (((*pplVar6)[7] != 0 || ((*pplVar6)[8] != 0)))) {
                        FUN_140c6c4e0(0xb,0,0x8b,s_D__a_1_s_target_release_build_bo_14139e440,
                                      CONCAT44(uVar9,0xdc));
                      }
                      else {
                        if (local_80 == 2) {
                          return pplVar6;
                        }
                        if ((*pplVar6)[9] == 0) {
                          return pplVar6;
                        }
                        FUN_140c6c4e0(0xb,0,0x8b,s_D__a_1_s_target_release_build_bo_14139e4b0,
                                      CONCAT44(uVar9,0xe2));
                      }
                    }
                    else {
                      FUN_140c6c4e0(0xb,0,0x8c,s_D__a_1_s_target_release_build_bo_14139e3d0,
                                    CONCAT44(uVar9,0xd4));
                    }
                  }
                }
              }
            }
          }
        }
        FUN_140c67c40(pplVar6);
      }
    }
  }
  return (longlong **)0x0;
}


/* address=140c68c80 name=FUN_140c68c80 */

int FUN_140c68c80(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong local_20;
  
  if (param_2 == (longlong *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = *param_2;
    if (*param_2 == 0) {
      FID_conflict__assert((wchar_t *)s_p_14139e738,(wchar_t *)s_D_14139e670,0x1be);
    }
  }
  iVar1 = FUN_140c67e80(param_1,param_2);
  if (((0 < iVar1) && (param_1 != 0)) && (*(longlong *)(param_1 + 0x88) != 0)) {
    iVar2 = FUN_140d8b530(*(undefined8 *)(param_1 + 0x88),param_2);
    if (iVar2 < 0) {
      iVar1 = iVar2;
      if (local_20 != 0) {
        *param_2 = local_20;
      }
    }
    else {
      iVar1 = iVar1 + iVar2;
    }
  }
  return iVar1;
}


/* address=140c68db0 name=FUN_140c68db0 */

void FUN_140c68db0(void)

{
  FUN_140c74de0();
  return;
}


/* address=140c68dd0 name=FUN_140c68dd0 */

void FUN_140c68dd0(undefined8 param_1)

{
  FUN_140c74f10(param_1);
  return;
}


/* address=140c68df0 name=FUN_140c68df0 */

void FUN_140c68df0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c74f50(param_1,&LAB_140c68d80,param_2);
  return;
}


/* address=140c68e20 name=FUN_140c68e20 */

void FUN_140c68e20(undefined8 param_1,undefined8 param_2)

{
  FUN_140c75700(param_1,param_2);
  return;
}


/* address=140c68e80 name=FUN_140c68e80 */

void FUN_140c68e80(void)

{
  FUN_140c74de0();
  return;
}


/* address=140c68ea0 name=FUN_140c68ea0 */

void FUN_140c68ea0(undefined8 param_1)

{
  FUN_140c74f10(param_1);
  return;
}


/* address=140c68ec0 name=FUN_140c68ec0 */

void FUN_140c68ec0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c74f50(param_1,&LAB_140c68e50,param_2);
  return;
}


/* address=140c68ef0 name=FUN_140c68ef0 */

void FUN_140c68ef0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c75700(param_1,param_2);
  return;
}


/* address=140c68f20 name=FUN_140c68f20 */

void FUN_140c68f20(void)

{
  FUN_140c74de0();
  return;
}


/* address=140c68f40 name=FUN_140c68f40 */

void FUN_140c68f40(undefined8 param_1)

{
  FUN_140c74e00(param_1);
  return;
}


/* address=140c68f60 name=FUN_140c68f60 */

void FUN_140c68f60(undefined8 param_1,undefined8 param_2)

{
  FUN_140c74e80(param_1,param_2);
  return;
}


/* address=140c68f90 name=FUN_140c68f90 */

void FUN_140c68f90(undefined8 param_1)

{
  FUN_140c74f10(param_1);
  return;
}


/* address=140c68fb0 name=FUN_140c68fb0 */

void FUN_140c68fb0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c75700(param_1,param_2);
  return;
}


/* address=140c69060 name=FUN_140c69060 */

void FUN_140c69060(undefined8 param_1)

{
  FUN_140c74d20(param_1);
  return;
}


/* address=140c69080 name=FUN_140c69080 */

void FUN_140c69080(undefined8 param_1)

{
  FUN_140c74e00(param_1);
  return;
}


/* address=140c690a0 name=FUN_140c690a0 */

void FUN_140c690a0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c74e80(param_1,param_2);
  return;
}


/* address=140c690d0 name=FUN_140c690d0 */

void FUN_140c690d0(undefined8 param_1)

{
  FUN_140c74f10(param_1);
  return;
}


/* address=140c690f0 name=FUN_140c690f0 */

void FUN_140c690f0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c74f50(param_1,&LAB_140c68fe0,param_2);
  return;
}


/* address=140c69120 name=FUN_140c69120 */

void FUN_140c69120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140c753e0(param_1,param_2,param_3,&LAB_140c69010);
  return;
}


/* address=140c69160 name=FUN_140c69160 */

void FUN_140c69160(undefined8 param_1,undefined8 param_2)

{
  FUN_140c75700(param_1,param_2);
  return;
}


/* address=140c69190 name=FUN_140c69190 */

void FUN_140c69190(undefined8 param_1)

{
  FUN_140c75880(param_1,&LAB_140c69010);
  return;
}


/* address=140c691f0 name=FUN_140c691f0 */

void FUN_140c691f0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_140c6a820(param_1,param_2,param_3,0);
  return;
}


/* address=140c69230 name=FUN_140c69230 */

undefined8 FUN_140c69230(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_140c691f0(param_1,param_2,param_3);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140c690a0(param_1,(longlong)iVar1);
  }
  return uVar2;
}


/* address=140c69290 name=FUN_140c69290 */

longlong FUN_140c69290(undefined8 param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong local_20;
  ulonglong local_18 [3];
  
  FUN_140c69190(param_1);
  iVar1 = FUN_140c69120(param_1,local_18,param_2);
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else if ((*param_2 == 1) || (*param_2 == 2)) {
    for (local_20 = local_18[0]; uVar3 = FUN_140c69080(param_1), local_20 < uVar3;
        local_20 = local_20 + 1) {
      lVar2 = FUN_140c690a0(param_1,local_20);
      iVar1 = FUN_140c6a5c0(lVar2,param_2);
      if (iVar1 != 0) {
        return 0;
      }
      if (*param_2 == 1) {
        iVar1 = FUN_140d79430(*(undefined8 *)(lVar2 + 8),*(undefined8 *)(param_2 + 2));
      }
      else {
        if (*param_2 != 2) {
          return lVar2;
        }
        iVar1 = FUN_140d79770(*(undefined8 *)(lVar2 + 8),*(undefined8 *)(param_2 + 2));
      }
      if (iVar1 == 0) {
        return lVar2;
      }
    }
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_140c690a0(param_1,local_18[0]);
  }
  return lVar2;
}


/* address=140c693c0 name=FUN_140c693c0 */

undefined8 FUN_140c693c0(int *param_1)

{
  if (*param_1 == 1) {
    FUN_140c67ba0(*(undefined8 *)(param_1 + 2));
  }
  else if (*param_1 == 2) {
    FUN_140d8b5c0(*(undefined8 *)(param_1 + 2));
  }
  return 1;
}


/* address=140c69420 name=FUN_140c69420 */

void FUN_140c69420(int *param_1)

{
  if (*param_1 == 1) {
    FUN_140c67c40(*(undefined8 *)(param_1 + 2));
  }
  else if (*param_1 == 2) {
    FUN_140d8be20(*(undefined8 *)(param_1 + 2));
  }
  return;
}


/* address=140c694c0 name=FUN_140c694c0 */

undefined4 * FUN_140c694c0(void)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined4 *)FUN_140c660d0(0x88);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_140c6a580(puVar1,0,0x88);
    FUN_140d39610(puVar1 + 4);
    uVar2 = FUN_140c69060(&LAB_140c6a650);
    *(undefined8 *)(puVar1 + 2) = uVar2;
    if (*(longlong *)(puVar1 + 2) != 0) {
      *puVar1 = 1;
      uVar2 = FUN_140c68f20();
      *(undefined8 *)(puVar1 + 6) = uVar2;
      if (*(longlong *)(puVar1 + 6) != 0) {
        uVar2 = FUN_140c6ac60();
        *(undefined8 *)(puVar1 + 8) = uVar2;
        if (*(longlong *)(puVar1 + 8) != 0) {
          puVar1[0x20] = 1;
          return puVar1;
        }
      }
    }
    if (puVar1 != (undefined4 *)0x0) {
      FUN_140d396b0(puVar1 + 4);
      if (*(longlong *)(puVar1 + 8) != 0) {
        FUN_140c6acb0(*(undefined8 *)(puVar1 + 8));
      }
      if (*(longlong *)(puVar1 + 6) != 0) {
        FUN_140c68f90(*(undefined8 *)(puVar1 + 6));
      }
      if (*(longlong *)(puVar1 + 2) != 0) {
        FUN_140c690d0(*(undefined8 *)(puVar1 + 2));
      }
      FUN_140c66200(puVar1);
    }
  }
  return (undefined4 *)0x0;
}


/* address=140c69610 name=FUN_140c69610 */

undefined8 FUN_140c69610(longlong param_1)

{
  FUN_140d39500(param_1 + 0x80);
  return 1;
}


/* address=140c69640 name=FUN_140c69640 */

void FUN_140c69640(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong local_28;
  
  if ((param_1 != 0) && (iVar2 = FUN_140d39550(param_1 + 0x80), iVar2 != 0)) {
    FUN_140d396b0(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    for (local_28 = 0; uVar3 = FUN_140c68f40(uVar1), local_28 < uVar3; local_28 = local_28 + 1) {
      uVar4 = FUN_140c68f60(uVar1,local_28);
      FUN_140c6a530(uVar4);
      FUN_140c6a3f0(uVar4);
    }
    FUN_140c68f90(uVar1);
    FUN_140c690f0(*(undefined8 *)(param_1 + 8),&LAB_140c6a680);
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_140c6acb0(*(undefined8 *)(param_1 + 0x20));
    }
    FUN_140c66200(param_1);
  }
  return;
}


/* address=140c6a060 name=FUN_140c6a060 */

longlong FUN_140c6a060(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong local_20;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  local_20 = 0;
  while( true ) {
    uVar2 = FUN_140c68f40(uVar1);
    if (uVar2 <= local_20) {
      lVar3 = FUN_140c6a350(param_2);
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        *(longlong *)(lVar3 + 0x18) = param_1;
        lVar4 = FUN_140c68fb0(*(undefined8 *)(param_1 + 0x18),lVar3);
        if (lVar4 == 0) {
          FUN_140c6a3f0(lVar3);
          lVar3 = 0;
        }
      }
      return lVar3;
    }
    lVar3 = FUN_140c68f60(uVar1,local_20);
    if (param_2 == *(longlong *)(lVar3 + 8)) break;
    local_20 = local_20 + 1;
  }
  return lVar3;
}


/* address=140c6a140 name=FUN_140c6a140 */

void FUN_140c6a140(undefined8 param_1,undefined8 param_2)

{
  FUN_140c6a6e0(param_1,param_2,0);
  return;
}


/* address=140c6a170 name=FUN_140c6a170 */

void FUN_140c6a170(undefined8 param_1,undefined8 param_2)

{
  FUN_140c6a6e0(param_1,param_2,1);
  return;
}


/* address=140c6a1a0 name=FUN_140c6a1a0 */

undefined8 FUN_140c6a1a0(longlong *param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  int local_38;
  undefined4 *local_28;
  undefined4 local_18 [6];
  
  lVar1 = *param_1;
  FUN_140d39650(lVar1 + 0x10);
  local_28 = (undefined4 *)FUN_140c69230(*(undefined8 *)(lVar1 + 8),param_2,param_3);
  FUN_140d39690(lVar1 + 0x10);
  if ((local_28 == (undefined4 *)0x0) || (param_2 == 2)) {
    for (local_38 = 0; iVar2 = FUN_140c68f40(*(undefined8 *)(lVar1 + 0x18)), local_38 < iVar2;
        local_38 = local_38 + 1) {
      uVar3 = FUN_140c68f60(*(undefined8 *)(lVar1 + 0x18),(longlong)local_38);
      iVar2 = FUN_140c6a4a0(uVar3,param_2,param_3,local_18);
      if (iVar2 != 0) {
        local_28 = local_18;
        break;
      }
    }
    if (local_28 == (undefined4 *)0x0) {
      return 0;
    }
  }
  *param_4 = *local_28;
  *(undefined8 *)(param_4 + 2) = *(undefined8 *)(local_28 + 2);
  FUN_140c693c0(param_4);
  return 1;
}


/* address=140c6a2d0 name=FUN_140c6a2d0 */

undefined8
FUN_140c6a2d0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
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


/* address=140c6a350 name=FUN_140c6a350 */

undefined4 * FUN_140c6a350(longlong param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_140c660d0(0x20);
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
      FUN_140c66200(puVar2);
      puVar2 = (undefined4 *)0x0;
    }
  }
  return puVar2;
}


/* address=140c6a3f0 name=FUN_140c6a3f0 */

void FUN_140c6a3f0(longlong param_1)

{
  if (param_1 != 0) {
    if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) != 0)
       ) {
      (**(code **)(*(longlong *)(param_1 + 8) + 0x10))(param_1);
    }
    FUN_140c66200(param_1);
  }
  return;
}


/* address=140c6a4a0 name=FUN_140c6a4a0 */

bool FUN_140c6a4a0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

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


/* address=140c6a530 name=FUN_140c6a530 */

undefined8 FUN_140c6a530(longlong param_1)

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


/* address=140c6a580 name=FUN_140c6a580 */

undefined8 FUN_140c6a580(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e28d40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140c6a5c0 name=FUN_140c6a5c0 */

ulonglong FUN_140c6a5c0(int *param_1,int *param_2)

{
  ulonglong uVar1;
  
  if (*param_1 - *param_2 == 0) {
    if (*param_1 == 1) {
      uVar1 = FUN_140d79360(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
    }
    else if (*param_1 == 2) {
      uVar1 = FUN_140d79730(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
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


/* address=140c6a6e0 name=FUN_140c6a6e0 */

bool FUN_140c6a6e0(longlong param_1,longlong param_2,int param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  longlong lVar3;
  bool bVar4;
  
  if (param_2 == 0) {
    bVar4 = false;
  }
  else {
    puVar2 = (undefined4 *)FUN_140c660d0(0x10);
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
      FUN_140c693c0(puVar2);
      FUN_140d39650(param_1 + 0x10);
      bVar4 = true;
      lVar3 = FUN_140c69290(*(undefined8 *)(param_1 + 8),puVar2);
      bVar1 = false;
      if (lVar3 == 0) {
        lVar3 = FUN_140c69160(*(undefined8 *)(param_1 + 8),puVar2);
        bVar4 = lVar3 != 0;
        bVar1 = bVar4;
      }
      FUN_140d39690(param_1 + 0x10);
      if (!bVar1) {
        FUN_140c69420(puVar2);
        FUN_140c66200(puVar2);
      }
    }
  }
  return bVar4;
}


/* address=140c6a820 name=FUN_140c6a820 */

void FUN_140c6a820(undefined8 param_1,int param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  undefined auStack_238 [32];
  int local_218;
  int local_214;
  int local_210 [2];
  int local_208 [2];
  undefined **local_200;
  undefined8 local_1f8;
  undefined local_1e8 [16];
  undefined8 local_1d8;
  undefined local_198 [40];
  undefined8 local_170;
  undefined *local_128 [14];
  undefined *local_b8 [20];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_238;
  local_214 = param_2;
  local_208[0] = param_2;
  if (param_2 == 1) {
    local_200 = local_b8;
    local_b8[0] = local_198;
    local_170 = param_3;
  }
  else {
    if (param_2 != 2) goto LAB_140c6a999;
    local_200 = local_128;
    local_128[0] = local_1e8;
    local_1d8 = param_3;
  }
  FUN_140c69190(param_1);
  iVar1 = FUN_140c69120(param_1,local_210,local_208);
  if ((iVar1 != 0) && (param_4 != (int *)0x0)) {
    *param_4 = 1;
    while( true ) {
      local_218 = local_210[0] + 1;
      iVar1 = FUN_140c69080(param_1);
      if (iVar1 <= local_218) break;
      local_1f8 = FUN_140c690a0(param_1,(longlong)local_218);
      iVar1 = FUN_140c6a5c0(local_1f8,local_208);
      if (iVar1 != 0) break;
      *param_4 = *param_4 + 1;
      local_210[0] = local_218;
    }
  }
LAB_140c6a999:
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_238);
  return;
}


/* address=140c6aa20 name=FUN_140c6aa20 */

void FUN_140c6aa20(void)

{
  FUN_140c74de0();
  return;
}


/* address=140c6aa40 name=FUN_140c6aa40 */

void FUN_140c6aa40(undefined8 param_1)

{
  FUN_140c74e00(param_1);
  return;
}


/* address=140c6aa60 name=FUN_140c6aa60 */

void FUN_140c6aa60(undefined8 param_1)

{
  FUN_140c74f10(param_1);
  return;
}


/* address=140c6aa80 name=FUN_140c6aa80 */

void FUN_140c6aa80(undefined8 param_1,undefined8 param_2)

{
  FUN_140c74f50(param_1,&LAB_140c6a9c0,param_2);
  return;
}


/* address=140c6aab0 name=FUN_140c6aab0 */

void FUN_140c6aab0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c75700(param_1,param_2);
  return;
}


/* address=140c6aae0 name=FUN_140c6aae0 */

void FUN_140c6aae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140c759e0(param_1,&LAB_140c6a9f0,param_2,&LAB_140c6a9c0,param_3);
  return;
}


/* address=140c6ab90 name=FUN_140c6ab90 */

void FUN_140c6ab90(void)

{
  FUN_140c74de0();
  return;
}


/* address=140c6abb0 name=FUN_140c6abb0 */

void FUN_140c6abb0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c74f50(param_1,&LAB_140c6ab30,param_2);
  return;
}


/* address=140c6abe0 name=FUN_140c6abe0 */

void FUN_140c6abe0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c75700(param_1,param_2);
  return;
}


/* address=140c6ac10 name=FUN_140c6ac10 */

void FUN_140c6ac10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140c759e0(param_1,&LAB_140c6ab60,param_2,&LAB_140c6ab30,param_3);
  return;
}


/* address=140c6ac60 name=FUN_140c6ac60 */

longlong FUN_140c6ac60(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140c660d0(0x70);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_140c6b690(lVar1,0,0x70);
    FUN_140c6b840(lVar1);
  }
  return lVar1;
}


/* address=140c6acb0 name=FUN_140c6acb0 */

void FUN_140c6acb0(longlong param_1)

{
  if (param_1 != 0) {
    FUN_140c6b840(param_1);
    FUN_140c66200(param_1);
  }
  return;
}


/* address=140c6acf0 name=FUN_140c6acf0 */

undefined8 FUN_140c6acf0(longlong param_1,longlong param_2)

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
          )) && (iVar2 = FUN_140c6b2e0(param_1,*(undefined8 *)(param_2 + 0x28)), iVar2 == 0)) {
        uVar3 = 0;
      }
      else {
        if ((bVar5) ||
           ((*(longlong *)(param_2 + 0x30) != 0 && ((bVar4 || (*(longlong *)(param_1 + 0x30) == 0)))
            ))) {
          if (*(longlong *)(param_1 + 0x30) != 0) {
            FUN_140c6aa80(*(undefined8 *)(param_1 + 0x30),&LAB_140c6b6d0);
            *(undefined8 *)(param_1 + 0x30) = 0;
          }
          if (*(longlong *)(param_2 + 0x30) != 0) {
            uVar3 = FUN_140c6aae0(*(undefined8 *)(param_2 + 0x30),FUN_140c66520,&LAB_140c6b6d0);
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
           (iVar2 = FUN_140c6b450(param_1,*(undefined8 *)(param_2 + 0x48),
                                  *(undefined8 *)(param_2 + 0x50)), iVar2 == 0)) {
          uVar3 = 0;
        }
        else if (((bVar5) ||
                 ((*(longlong *)(param_2 + 0x58) != 0 &&
                  ((bVar4 || (*(longlong *)(param_1 + 0x58) == 0)))))) &&
                (iVar2 = FUN_140c6b4c0(param_1,*(undefined8 *)(param_2 + 0x58),
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


/* address=140c6b040 name=FUN_140c6b040 */

undefined4 FUN_140c6b040(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  uVar2 = FUN_140c6acf0(param_1,param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return uVar2;
}


/* address=140c6b100 name=FUN_140c6b100 */

undefined8 FUN_140c6b100(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | param_2;
  return 1;
}


/* address=140c6b180 name=FUN_140c6b180 */

void FUN_140c6b180(longlong param_1,undefined4 param_2)

{
  FUN_140d8dee0(param_1 + 0x18,param_2);
  return;
}


/* address=140c6b1b0 name=FUN_140c6b1b0 */

void FUN_140c6b1b0(longlong param_1,undefined4 param_2)

{
  FUN_140d8d300(param_1 + 0x1c,param_2);
  return;
}


/* address=140c6b1e0 name=FUN_140c6b1e0 */

void FUN_140c6b1e0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}


/* address=140c6b230 name=FUN_140c6b230 */

void FUN_140c6b230(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 2;
  return;
}


/* address=140c6b2e0 name=FUN_140c6b2e0 */

undefined8 FUN_140c6b2e0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_140c6abb0(*(undefined8 *)(param_1 + 0x28),FUN_140d73420);
    if (param_2 == 0) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_140c6ac10(param_2,FUN_140d6a3e0,FUN_140d73420);
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


/* address=140c6b370 name=FUN_140c6b370 */

bool FUN_140c6b370(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_140c6b6f0(param_1,0,param_2,param_3);
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0x68) = 1;
  }
  return iVar1 != 0;
}


/* address=140c6b410 name=FUN_140c6b410 */

void FUN_140c6b410(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}


/* address=140c6b450 name=FUN_140c6b450 */

undefined8 FUN_140c6b450(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_140c6b650(param_2,0,param_3);
  if ((lVar2 == 0) &&
     (iVar1 = FUN_140c6b9a0(param_1 + 0x48,param_1 + 0x50,param_2,param_3), iVar1 != 0)) {
    return 1;
  }
  *(undefined *)(param_1 + 0x68) = 1;
  return 0;
}


/* address=140c6b4c0 name=FUN_140c6b4c0 */

undefined8 FUN_140c6b4c0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  if (((param_3 == 4) || (param_3 == 0x10)) &&
     (iVar1 = FUN_140c6b9a0(param_1 + 0x58,param_1 + 0x60,param_2,param_3), iVar1 != 0)) {
    return 1;
  }
  *(undefined *)(param_1 + 0x68) = 1;
  return 0;
}


/* address=140c6b5a0 name=FUN_140c6b5a0 */

undefined4 FUN_140c6b5a0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}


/* address=140c6b5e0 name=FUN_140c6b5e0 */

undefined ** FUN_140c6b5e0(char *param_1)

{
  int iVar1;
  ulonglong local_18;
  
  local_18 = 0;
  while( true ) {
    if (4 < local_18) {
      return (undefined **)0x0;
    }
    iVar1 = strcmp((&PTR_s_default_140fd4970)[local_18 * 0xe],param_1);
    if (iVar1 == 0) break;
    local_18 = local_18 + 1;
  }
  return &PTR_s_default_140fd4970 + local_18 * 0xe;
}


/* address=140c6b650 name=FUN_140c6b650 */

undefined8 FUN_140c6b650(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140e28500(param_1,param_2,param_3);
  }
  return uVar1;
}


/* address=140c6b690 name=FUN_140c6b690 */

undefined8 FUN_140c6b690(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e28d40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140c6b6f0 name=FUN_140c6b6f0 */

undefined8 FUN_140c6b6f0(longlong param_1,int param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    uVar3 = 0;
  }
  else {
    if ((param_3 != 0) && (lVar1 = FUN_140c6b650(param_3,0,param_4), lVar1 != 0)) {
      return 0;
    }
    if ((param_2 == 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
      FUN_140c6aa80(*(undefined8 *)(param_1 + 0x30),&LAB_140c6b6d0);
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    lVar1 = FUN_140c66ae0(param_3,param_4);
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      if (*(longlong *)(param_1 + 0x30) == 0) {
        lVar2 = FUN_140c6aa20();
        *(longlong *)(param_1 + 0x30) = lVar2;
        if (lVar2 == 0) {
          FUN_140c66200(lVar1);
          return 0;
        }
      }
      lVar2 = FUN_140c6aab0(*(undefined8 *)(param_1 + 0x30),lVar1);
      if (lVar2 == 0) {
        FUN_140c66200(lVar1);
        lVar1 = FUN_140c6aa40(*(undefined8 *)(param_1 + 0x30));
        if (lVar1 == 0) {
          FUN_140c6aa60(*(undefined8 *)(param_1 + 0x30));
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


/* address=140c6b840 name=FUN_140c6b840 */

void FUN_140c6b840(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    if (param_1[5] != 0) {
      FUN_140c6abb0(param_1[5],FUN_140d73420);
      param_1[5] = 0;
    }
    if (param_1[6] != 0) {
      FUN_140c6aa80(param_1[6],&LAB_140c6b6d0);
      param_1[6] = 0;
    }
    if (param_1[8] != 0) {
      FUN_140c66200(param_1[8]);
      param_1[8] = 0;
    }
    if (param_1[9] != 0) {
      FUN_140c66200(param_1[9]);
      param_1[9] = 0;
      param_1[10] = 0;
    }
    if (param_1[0xb] != 0) {
      FUN_140c66200(param_1[0xb]);
      param_1[0xb] = 0;
      param_1[0xc] = 0;
    }
    *(undefined *)(param_1 + 0xd) = 0;
  }
  return;
}


/* address=140c6b9a0 name=FUN_140c6b9a0 */

undefined8 FUN_140c6b9a0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_140c66ba0(param_3,param_4);
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      if (*param_1 != 0) {
        FUN_140c66200(*param_1);
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


/* address=140c6ba90 name=FUN_140c6ba90 */

uint FUN_140c6ba90(uint param_1)

{
  return param_1 >> 0x18;
}


/* address=140c6bab0 name=FUN_140c6bab0 */

uint FUN_140c6bab0(uint param_1)

{
  return param_1 & 0xfff;
}


/* address=140c6bb60 name=FUN_140c6bb60 */

void FUN_140c6bb60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140c6cc20(1,0,param_1,param_2,param_3,param_4);
  return;
}


/* address=140c6bbb0 name=FUN_140c6bbb0 */

void FUN_140c6bbb0(void)

{
  FUN_140c6cc20(0,0,0,0,0,0);
  return;
}


/* address=140c6bc70 name=FUN_140c6bc70 */

void FUN_140c6bc70(void)

{
  FUN_140c6cc20(0,1,0,0,0,0);
  return;
}


/* address=140c6bd50 name=FUN_140c6bd50 */

void FUN_140c6bd50(uint param_1,char *param_2,ulonglong param_3)

{
  size_t sVar1;
  undefined auStack_108 [32];
  char *local_e8;
  char *local_e0;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  char *local_c8;
  char *local_c0;
  char *local_b8;
  char *local_b0;
  char *local_a8;
  char local_98 [64];
  char local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_108;
  if (param_3 != 0) {
    local_d4 = FUN_140c6ba90(param_1);
    local_d0 = FUN_140c6bab0(param_1);
    local_c0 = (char *)FUN_140c6cf40(param_1);
    local_c8 = (char *)FUN_140c6cf80(param_1);
    if (local_c0 == (char *)0x0) {
      _snprintf(local_98,0x40,s_lib__u__14139ed88,(ulonglong)local_d4);
      local_c0 = local_98;
    }
    if (local_c8 == (char *)0x0) {
      _snprintf(local_58,0x40,s_reason__u__14139ed90,(ulonglong)local_d0);
      local_c8 = local_58;
    }
    local_e0 = local_c8;
    local_e8 = local_c0;
    _snprintf(param_2,param_3,s_error__08x__s_OPENSSL_internal___14139eda0,(ulonglong)param_1);
    sVar1 = strlen(param_2);
    if ((sVar1 == param_3 - 1) && (local_a8 = param_2, DAT_140fd4cb0 < param_3)) {
      for (local_d8 = 0; local_d8 < DAT_140fd4cb0; local_d8 = local_d8 + 1) {
        local_b8 = (char *)FUN_140e01a10(local_a8,0x3a);
        local_b0 = param_2 + (ulonglong)local_d8 + ((param_3 - 1) - (ulonglong)DAT_140fd4cb0);
        if ((local_b8 == (char *)0x0) || (local_b0 < local_b8)) {
          FUN_140c6c740(local_b0,0x3a,DAT_140fd4cb0 - local_d8);
          break;
        }
        local_a8 = local_b8 + 1;
      }
    }
  }
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_108);
  return;
}


/* address=140c6bf90 name=FUN_140c6bf90 */

char * FUN_140c6bf90(undefined4 param_1)

{
  char *local_10;
  
  local_10 = (char *)FUN_140c6cf40(param_1);
  if (local_10 == (char *)0x0) {
    local_10 = s_unknown_library_14139ece0;
  }
  return local_10;
}


/* address=140c6bfe0 name=FUN_140c6bfe0 */

char * FUN_140c6bfe0(undefined4 param_1)

{
  char *local_10;
  
  local_10 = (char *)FUN_140c6cf80(param_1);
  if (local_10 == (char *)0x0) {
    local_10 = s_unknown_error_14139ed78;
  }
  return local_10;
}


/* address=140c6c030 name=FUN_140c6c030 */

void FUN_140c6c030(code *param_1,undefined8 param_2)

{
  int iVar1;
  size_t sVar2;
  undefined auStack_508 [32];
  undefined *local_4e8;
  undefined8 local_4e0;
  undefined4 local_4d8;
  undefined *local_4d0;
  int local_4c8;
  uint local_4c4;
  undefined4 local_4c0;
  uint local_4bc;
  undefined *local_4b8;
  undefined *local_4b0;
  undefined8 local_4a8 [2];
  undefined local_498 [128];
  char local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_508;
  local_4bc = FUN_140c6cbb0();
  do {
    local_4c8 = FUN_140c6bb60(local_4a8,&local_4c0,&local_4b0,&local_4c4);
    if (local_4c8 == 0) break;
    FUN_140c6bd50(local_4c8,local_498,0x78);
    if ((local_4c4 & 1) == 0) {
      local_4b8 = &DAT_1413ea0e9;
    }
    else {
      local_4b8 = local_4b0;
    }
    local_4d0 = local_4b8;
    local_4d8 = local_4c0;
    local_4e0 = local_4a8[0];
    local_4e8 = local_498;
    _snprintf(local_418,0x400,s__lu__s__s__d__s_14139edc8,(ulonglong)local_4bc);
    sVar2 = strlen(local_418);
    iVar1 = (*param_1)(local_418,sVar2,param_2);
  } while (0 < iVar1);
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_508);
  return;
}


/* address=140c6c180 name=FUN_140c6c180 */

void FUN_140c6c180(void)

{
  longlong lVar1;
  uint local_18;
  
  lVar1 = FUN_140c6cbb0();
  if (lVar1 != 0) {
    for (local_18 = 0; local_18 < 0x10; local_18 = local_18 + 1) {
      FUN_140c6ca70(lVar1 + (ulonglong)local_18 * 0x20);
    }
    thunk_FUN_140e18570(*(undefined8 *)(lVar1 + 0x208));
    *(undefined8 *)(lVar1 + 0x208) = 0;
    *(undefined4 *)(lVar1 + 0x204) = 0;
    *(undefined4 *)(lVar1 + 0x200) = 0;
  }
  return;
}


/* address=140c6c4c0 name=FUN_140c6c4c0 */

void FUN_140c6c4c0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_140e0d4fc();
  *puVar1 = 0;
  return;
}


/* address=140c6c4e0 name=FUN_140c6c4e0 */

void FUN_140c6c4e0(int param_1,undefined8 param_2,uint param_3,undefined8 param_4,undefined2 param_5
                  )

{
  longlong lVar1;
  undefined8 *puVar2;
  uint local_res18;
  
  lVar1 = FUN_140c6cbb0();
  if (lVar1 != 0) {
    local_res18 = param_3;
    if ((param_1 == 2) && (param_3 == 0)) {
      local_res18 = GetLastError();
    }
    *(uint *)(lVar1 + 0x200) = (*(int *)(lVar1 + 0x200) + 1U) % 0x10;
    if (*(int *)(lVar1 + 0x200) == *(int *)(lVar1 + 0x204)) {
      *(uint *)(lVar1 + 0x204) = (*(int *)(lVar1 + 0x204) + 1U) % 0x10;
    }
    puVar2 = (undefined8 *)(lVar1 + (ulonglong)*(uint *)(lVar1 + 0x200) * 0x20);
    FUN_140c6ca70(puVar2);
    *puVar2 = param_4;
    *(undefined2 *)((longlong)puVar2 + 0x14) = param_5;
    *(uint *)(puVar2 + 2) = param_1 << 0x18 | local_res18 & 0xfff;
  }
  return;
}


/* address=140c6c600 name=FUN_140c6c600 */

void FUN_140c6c600(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_140c6d1a0(param_1,&local_res10);
  return;
}


/* address=140c6c650 name=FUN_140c6c650 */

void FUN_140c6c650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  iVar1 = FUN_140c66ef0(local_10,param_1,&local_res10,1);
  if (iVar1 != -1) {
    FUN_140c6d110(local_10[0]);
  }
  return;
}


/* address=140c6c740 name=FUN_140c6c740 */

undefined8 FUN_140c6c740(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e28d40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140c6c780 name=FUN_140c6c780 */

void FUN_140c6c780(longlong *param_1)

{
  ulonglong local_18;
  
  if (param_1 != (longlong *)0x0) {
    for (local_18 = 0; local_18 < (ulonglong)param_1[1]; local_18 = local_18 + 1) {
      FUN_140c6ca70(local_18 * 0x20 + *param_1);
    }
    thunk_FUN_140e18570(*param_1);
    thunk_FUN_140e18570(param_1);
  }
  return;
}


/* address=140c6c800 name=FUN_140c6c800 */

longlong * FUN_140c6c800(void)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint local_38;
  ulonglong local_18;
  
  lVar1 = FUN_140c6cbb0();
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
        local_38 = (*(int *)(lVar1 + 0x200) + 0x10) - *(int *)(lVar1 + 0x204);
      }
      else {
        local_38 = *(int *)(lVar1 + 0x200) - *(int *)(lVar1 + 0x204);
      }
      uVar3 = (ulonglong)local_38;
      if (0xf < uVar3) {
        FID_conflict__assert((wchar_t *)s_n_14139f110,(wchar_t *)s_D_14139f050,0x350);
      }
      lVar1 = _malloc_base(uVar3 * 0x20);
      *plVar2 = lVar1;
      if (*plVar2 == 0) {
        thunk_FUN_140e18570(plVar2);
        plVar2 = (longlong *)0x0;
      }
      else {
        FUN_140c6c740(*plVar2,0,uVar3 * 0x20);
        plVar2[1] = uVar3;
        for (local_18 = 0; local_18 < uVar3; local_18 = local_18 + 1) {
          FUN_140c6cab0(local_18 * 0x20 + *plVar2);
        }
      }
    }
  }
  return plVar2;
}


/* address=140c6c9b0 name=FUN_140c6c9b0 */

void FUN_140c6c9b0(longlong *param_1)

{
  longlong lVar1;
  ulonglong local_18;
  
  if ((param_1 == (longlong *)0x0) || (param_1[1] == 0)) {
    FUN_140c6c180();
  }
  else {
    lVar1 = FUN_140c6cbb0();
    if (lVar1 != 0) {
      for (local_18 = 0; local_18 < (ulonglong)param_1[1]; local_18 = local_18 + 1) {
        FUN_140c6cab0(lVar1 + local_18 * 0x20,local_18 * 0x20 + *param_1);
      }
      *(int *)(lVar1 + 0x200) = (int)param_1[1] + -1;
      *(undefined4 *)(lVar1 + 0x204) = 0xf;
    }
  }
  return;
}


/* address=140c6ca70 name=FUN_140c6ca70 */

void FUN_140c6ca70(longlong param_1)

{
  thunk_FUN_140e18570(*(undefined8 *)(param_1 + 8));
  FUN_140c6c740(param_1,0,0x20);
  return;
}


/* address=140c6cab0 name=FUN_140c6cab0 */

void FUN_140c6cab0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_140c6ca70(param_1);
  *param_1 = *param_2;
  if (param_2[1] != 0) {
    uVar1 = FUN_140e0fc30(param_2[1]);
    param_1[1] = uVar1;
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined2 *)((longlong)param_1 + 0x14) = *(undefined2 *)((longlong)param_2 + 0x14);
  return;
}


/* address=140c6cbb0 name=FUN_140c6cbb0 */

longlong FUN_140c6cbb0(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_140d39780(0);
  if (lVar2 == 0) {
    lVar2 = _malloc_base(0x210);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_140c6c740(lVar2,0,0x210);
      iVar1 = FUN_140d397e0(0,lVar2,&LAB_140c6cb30);
      if (iVar1 == 0) {
        lVar2 = 0;
      }
    }
  }
  return lVar2;
}


/* address=140c6cc20 name=FUN_140c6cc20 */

undefined4
FUN_140c6cc20(int param_1,int param_2,longlong *param_3,uint *param_4,longlong *param_5,
             undefined4 *param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  uint local_28;
  
  lVar2 = FUN_140c6cbb0();
  if ((lVar2 == 0) || (*(int *)(lVar2 + 0x204) == *(int *)(lVar2 + 0x200))) {
    uVar1 = 0;
  }
  else {
    if (param_2 == 0) {
      local_28 = (*(int *)(lVar2 + 0x204) + 1U) % 0x10;
    }
    else {
      if (param_1 != 0) {
        FID_conflict__assert((wchar_t *)s___14139eb40,(wchar_t *)s_D_14139ea80,0xf3);
      }
      local_28 = *(uint *)(lVar2 + 0x200);
    }
    plVar3 = (longlong *)(lVar2 + (ulonglong)local_28 * 0x20);
    uVar1 = *(undefined4 *)(plVar3 + 2);
    if ((param_3 != (longlong *)0x0) && (param_4 != (uint *)0x0)) {
      if (*plVar3 == 0) {
        *param_3 = (longlong)&DAT_14139ea74;
        *param_4 = 0;
      }
      else {
        *param_3 = *plVar3;
        *param_4 = (uint)*(ushort *)((longlong)plVar3 + 0x14);
      }
    }
    if (param_5 != (longlong *)0x0) {
      if (plVar3[1] == 0) {
        *param_5 = (longlong)&DAT_1413ea0e8;
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
            thunk_FUN_140e18570(*(undefined8 *)(lVar2 + 0x208));
            *(longlong *)(lVar2 + 0x208) = plVar3[1];
          }
          plVar3[1] = 0;
        }
      }
    }
    if (param_1 != 0) {
      if (param_2 != 0) {
        FID_conflict__assert((wchar_t *)s___14139ec10,(wchar_t *)s_D_14139eb50,0x125);
      }
      FUN_140c6ca70(plVar3);
      *(uint *)(lVar2 + 0x204) = local_28;
    }
  }
  return uVar1;
}


/* address=140c6cea0 name=FUN_140c6cea0 */

longlong FUN_140c6cea0(uint param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                      longlong param_5)

{
  uint *puVar1;
  uint local_18 [6];
  
  if ((param_1 < 0x40) && (param_2 < 0x800)) {
    local_18[0] = param_1 << 0x1a | param_2 << 0xf;
    puVar1 = (uint *)FUN_140e11328(local_18,param_3,param_4,4,&LAB_140c6ce40);
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


/* address=140c6cf40 name=FUN_140c6cf40 */

undefined * FUN_140c6cf40(undefined4 param_1)

{
  uint uVar1;
  undefined *puVar2;
  
  uVar1 = FUN_140c6ba90(param_1);
  if (uVar1 < 0x22) {
    puVar2 = (&PTR_s_invalid_library__0__140fd4ba0)[uVar1];
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  return puVar2;
}


/* address=140c6cf80 name=FUN_140c6cf80 */

char * FUN_140c6cf80(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  iVar1 = FUN_140c6ba90(param_1);
  uVar2 = FUN_140c6bab0(param_1);
  if (iVar1 == 2) {
    if (uVar2 < 0x7f) {
      pcVar3 = (char *)FUN_140e14660(uVar2);
    }
    else {
      pcVar3 = (char *)0x0;
    }
  }
  else if (uVar2 < 0x22) {
    pcVar3 = (&PTR_s_invalid_library__0__140fd4ba0)[uVar2];
  }
  else if (uVar2 < 100) {
    if (uVar2 == 0x41) {
      pcVar3 = s_malloc_failure_14139ed08;
    }
    else if (uVar2 == 0x42) {
      pcVar3 = s_function_should_not_have_been_ca_14139ed18;
    }
    else if (uVar2 == 0x43) {
      pcVar3 = s_passed_a_null_parameter_14139ed40;
    }
    else if (uVar2 == 0x44) {
      pcVar3 = s_internal_error_14139ed58;
    }
    else if (uVar2 == 0x45) {
      pcVar3 = s_overflow_14139ed68;
    }
    else {
      pcVar3 = (char *)0x0;
    }
  }
  else {
    pcVar3 = (char *)FUN_140c6cea0(iVar1,uVar2,&DAT_141084d10,DAT_1410858d8,"ASN1_LENGTH_MISMATCH");
  }
  return pcVar3;
}


/* address=140c6d110 name=FUN_140c6d110 */

void FUN_140c6d110(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140c6cbb0();
  if ((lVar1 == 0) || (*(int *)(lVar1 + 0x200) == *(int *)(lVar1 + 0x204))) {
    thunk_FUN_140e18570(param_1);
  }
  else {
    lVar1 = lVar1 + (ulonglong)*(uint *)(lVar1 + 0x200) * 0x20;
    thunk_FUN_140e18570(*(undefined8 *)(lVar1 + 8));
    *(undefined8 *)(lVar1 + 8) = param_1;
  }
  return;
}


/* address=140c6d1a0 name=FUN_140c6d1a0 */

void FUN_140c6d1a0(uint param_1,char **param_2)

{
  size_t sVar1;
  ulonglong uVar2;
  undefined *puVar3;
  ulonglong uVar4;
  char **local_res10;
  longlong local_48;
  char **local_38;
  ulonglong local_28;
  ulonglong local_20;
  
  local_48 = 0;
  local_28 = 0;
  local_38 = param_2;
  do {
    if (param_1 <= local_28) {
      if (local_48 != -1) {
        uVar2 = local_48 + 1;
        puVar3 = (undefined *)_malloc_base(uVar2);
        if (puVar3 != (undefined *)0x0) {
          *puVar3 = 0;
          local_res10 = param_2;
          for (local_20 = 0; local_20 < param_1; local_20 = local_20 + 1) {
            if ((*local_res10 != (char *)0x0) &&
               (uVar4 = FUN_140c66cb0(puVar3,*local_res10,uVar2), uVar2 <= uVar4)) {
              FID_conflict__assert((wchar_t *)&DAT_14139ef8c,(wchar_t *)s_D_14139eed0,0x2d1);
            }
            local_res10 = local_res10 + 1;
          }
          FUN_140c6d110(puVar3);
        }
      }
      return;
    }
    if (*local_38 != (char *)0x0) {
      sVar1 = strlen(*local_38);
      if (-local_48 - 1U < sVar1) {
        return;
      }
      local_48 = local_48 + sVar1;
    }
    local_28 = local_28 + 1;
    local_38 = local_38 + 1;
  } while( true );
}


/* address=140c6d340 name=FUN_140c6d340 */

undefined FUN_140c6d340(undefined8 *param_1,undefined2 param_2)

{
  undefined uVar1;
  
  uVar1 = FUN_140c6e0a0(*param_1,(longlong)param_1 + 0x1a,param_2);
  return uVar1;
}


/* address=140c6d380 name=FUN_140c6d380 */

undefined FUN_140c6d380(undefined8 *param_1,undefined2 param_2)

{
  undefined uVar1;
  
  uVar1 = FUN_140c6e110(*param_1,param_1 + 3,param_2);
  return uVar1;
}


/* address=140c6d400 name=FUN_140c6d400 */

undefined FUN_140c6d400(undefined8 *param_1,undefined2 param_2)

{
  char cVar1;
  undefined uVar2;
  longlong lVar3;
  
  cVar1 = FUN_140c56050(param_1 + 1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    lVar3 = FUN_140c55c70(param_1 + 1);
    uVar2 = FUN_140c6e0a0(*param_1,lVar3 + 10,param_2);
  }
  return uVar2;
}


/* address=140c6d470 name=FUN_140c6d470 */

undefined FUN_140c6d470(undefined8 *param_1,undefined2 param_2)

{
  char cVar1;
  undefined uVar2;
  longlong lVar3;
  
  cVar1 = FUN_140c56050(param_1 + 1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    lVar3 = FUN_140c55c70(param_1 + 1);
    uVar2 = FUN_140c6e110(*param_1,lVar3 + 8,param_2);
  }
  return uVar2;
}


/* address=140c6d580 name=FUN_140c6d580 */

undefined2 FUN_140c6d580(undefined8 param_1)

{
  undefined2 uVar1;
  
  uVar1 = FUN_140c6e180(param_1);
  uVar1 = FUN_140c6dfb0(uVar1);
  return uVar1;
}


/* address=140c6d7e0 name=FUN_140c6d7e0 */

undefined8 FUN_140c6d7e0(ushort *param_1,ushort param_2)

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


/* address=140c6d880 name=FUN_140c6d880 */

undefined8 FUN_140c6d880(longlong *param_1,ushort *param_2,ushort *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  ushort local_24 [2];
  ushort local_20 [2];
  uint local_1c;
  ulonglong local_18;
  
  local_1c = *(uint *)(*param_1 + 0x80);
  iVar3 = FUN_140c4c520(*param_1);
  if ((iVar3 != 0) &&
     (uVar4 = local_1c & 0xefffffff, uVar5 = local_1c & 0x4000000, local_1c = uVar4, uVar5 != 0)) {
    local_1c = uVar4 | 0x10000000;
  }
  cVar2 = FUN_140c6d7e0(local_24,*(undefined2 *)(param_1[1] + 10));
  if ((cVar2 == '\0') ||
     (cVar2 = FUN_140c6d7e0(local_20,*(undefined2 *)(param_1[1] + 8)), cVar2 == '\0')) {
    FUN_140c6c4e0(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_versions.cc"
                  ,0xba);
    uVar6 = 0;
  }
  else {
    if ((*(longlong *)(*param_1 + 0x98) != 0) && (local_24[0] < 0x304)) {
      local_24[0] = 0x304;
    }
    bVar1 = false;
    for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
      if (local_24[0] <= *(ushort *)(&DAT_140fd4dd0 + local_18 * 8)) {
        if (local_20[0] < *(ushort *)(&DAT_140fd4dd0 + local_18 * 8)) break;
        if ((local_1c & *(uint *)(&DAT_140fd4dd4 + local_18 * 8)) == 0) {
          if (!bVar1) {
            bVar1 = true;
            local_24[0] = *(ushort *)(&DAT_140fd4dd0 + local_18 * 8);
          }
        }
        else if (bVar1) {
          local_20[0] = *(ushort *)("ions.cc" + local_18 * 8);
          break;
        }
      }
    }
    if (bVar1) {
      *param_2 = local_24[0];
      *param_3 = local_20[0];
      uVar6 = 1;
    }
    else {
      FUN_140c6c4e0(0x10,0,0x118,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_versions.cc"
                    ,0xe9);
      uVar6 = 0;
    }
  }
  return uVar6;
}


/* address=140c6da90 name=FUN_140c6da90 */

ulonglong FUN_140c6da90(undefined8 *param_1,undefined2 param_2)

{
  char cVar1;
  ulonglong uVar2;
  ushort local_18 [4];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)*param_1;
  cVar1 = FUN_140c6db10(*local_10,param_2);
  uVar2 = 0;
  if (cVar1 != '\0') {
    cVar1 = FUN_140c6d7e0(local_18,param_2);
    uVar2 = 0;
    if (((cVar1 != '\0') &&
        (uVar2 = (ulonglong)*(ushort *)((longlong)param_1 + 0x1c),
        *(ushort *)((longlong)param_1 + 0x1c) <= local_18[0])) &&
       (uVar2 = (ulonglong)local_18[0], local_18[0] <= *(ushort *)((longlong)param_1 + 0x1e))) {
      return CONCAT71((uint7)(byte)(local_18[0] >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}


/* address=140c6db10 name=FUN_140c6db10 */

ulonglong FUN_140c6db10(undefined8 param_1,short param_2)

{
  short *psVar1;
  short *local_30;
  undefined local_18 [24];
  
  FUN_140c6deb0(local_18,param_1);
  local_30 = (short *)FUN_140c55c70(local_18);
  psVar1 = (short *)FUN_140c6e1f0(local_18);
  while( true ) {
    if (local_30 == psVar1) {
      return (ulonglong)psVar1 & 0xffffffffffffff00;
    }
    if (*local_30 == param_2) break;
    local_30 = local_30 + 1;
  }
  return CONCAT71((uint7)(byte)((ushort)*local_30 >> 8),1);
}


/* address=140c6dba0 name=FUN_140c6dba0 */

undefined8 FUN_140c6dba0(undefined8 *param_1,undefined8 param_2,ushort param_3)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  ushort local_34 [2];
  undefined2 *local_30;
  undefined *local_28;
  undefined2 *local_20;
  undefined local_18 [24];
  
  FUN_140c6deb0(local_18,*(undefined8 *)*param_1);
  local_28 = local_18;
  local_30 = (undefined2 *)FUN_140c55c70(local_28);
  local_20 = (undefined2 *)FUN_140c6e1f0(local_28);
  while( true ) {
    if (local_30 == local_20) {
      return 1;
    }
    uVar1 = *local_30;
    cVar2 = FUN_140c6da90(param_1,uVar1);
    if ((((cVar2 != '\0') && (cVar2 = FUN_140c6d7e0(local_34,uVar1), cVar2 != '\0')) &&
        (param_3 <= local_34[0])) && (iVar3 = FUN_140d38120(param_2,uVar1), iVar3 == 0)) break;
    local_30 = local_30 + 1;
  }
  return 0;
}


/* address=140c6dc80 name=FUN_140c6dc80 */

undefined8 FUN_140c6dc80(undefined8 *param_1,undefined *param_2,short *param_3,undefined *param_4)

{
  short sVar1;
  char cVar2;
  int iVar3;
  short *psVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined *puVar7;
  short local_54;
  short *local_50;
  undefined local_38 [16];
  undefined local_28 [24];
  
  FUN_140c6deb0(local_28,*(undefined8 *)*param_1);
  local_50 = (short *)FUN_140c55c70(local_28);
  psVar4 = (short *)FUN_140c6e1f0(local_28);
  do {
    if (local_50 == psVar4) {
      FUN_140c6c4e0(0x10,0,0xf0,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_versions.cc"
                    ,0x144);
      *param_2 = 0x46;
      return 0;
    }
    sVar1 = *local_50;
    cVar2 = FUN_140c6da90(param_1);
    if ((cVar2 != '\0') &&
       ((sVar1 != 0x304 || ((*(byte *)((longlong)param_1 + 0x622) >> 6 & 1) == 0)))) {
      puVar6 = param_4;
      puVar7 = local_38;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      while (lVar5 = FUN_140d354c0(local_38), lVar5 != 0) {
        iVar3 = FUN_140d35710(local_38);
        if (iVar3 == 0) {
          FUN_140c6c4e0(0x10,0,0x89,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_versions.cc"
                        ,0x138);
          *param_2 = 0x32;
          return 0;
        }
        if (local_54 == sVar1) {
          *param_3 = sVar1;
          return 1;
        }
      }
    }
    local_50 = local_50 + 1;
  } while( true );
}


/* address=140c6de20 name=FUN_140c6de20 */

undefined2 FUN_140c6de20(longlong param_1)

{
  char cVar1;
  undefined2 local_18 [12];
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) >> 1 & 1) == 0) {
    FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0xfb);
  }
  cVar1 = FUN_140c6d7e0(local_18,*(undefined2 *)(param_1 + 0x10));
  if (cVar1 == '\0') {
    FID_conflict__assert(L"0",(wchar_t *)"D",0xff);
    local_18[0] = 0;
  }
  return local_18[0];
}


/* address=140c6deb0 name=FUN_140c6deb0 */

undefined * FUN_140c6deb0(undefined *param_1,char *param_2)

{
  longlong lVar1;
  undefined *puVar2;
  undefined *local_48;
  undefined local_38 [16];
  undefined local_28 [24];
  
  if (*param_2 == '\0') {
    local_48 = (undefined *)FUN_140c63570(local_28,&DAT_140fd4cc0);
  }
  else {
    local_48 = (undefined *)FUN_140c6e210(local_38,&DAT_140fd4cc8);
  }
  puVar2 = param_1;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *local_48;
    local_48 = local_48 + 1;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}


/* address=140c6df30 name=FUN_140c6df30 */

char * FUN_140c6df30(short param_1)

{
  short *local_28;
  
  local_28 = &DAT_140fd4cd0;
  while( true ) {
    if (local_28 == (short *)"TLSv1.3") {
      return "unknown";
    }
    if (*local_28 == param_1) break;
    local_28 = local_28 + 8;
  }
  return *(char **)(local_28 + 4);
}


/* address=140c6dfb0 name=FUN_140c6dfb0 */

undefined2 FUN_140c6dfb0(undefined2 param_1)

{
  return param_1;
}


/* address=140c6dfd0 name=FUN_140c6dfd0 */

bool FUN_140c6dfd0(undefined2 *param_1,undefined2 param_2)

{
  char cVar1;
  undefined local_18 [24];
  
  cVar1 = FUN_140c6d7e0(local_18,param_2);
  if (cVar1 != '\0') {
    *param_1 = param_2;
  }
  return cVar1 != '\0';
}


/* address=140c6e020 name=FUN_140c6e020 */

undefined8 FUN_140c6e020(undefined8 param_1,undefined2 *param_2,undefined2 param_3)

{
  char cVar1;
  undefined2 local_res18 [8];
  
  local_res18[0] = param_3;
  cVar1 = FUN_140c6dfd0(local_res18,param_3);
  if ((cVar1 != '\0') && (cVar1 = FUN_140c6db10(param_1,local_res18[0]), cVar1 != '\0')) {
    *param_2 = local_res18[0];
    return 1;
  }
  FUN_140c6c4e0(0x10,0,0xea,
                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_vers"
                ,0x81);
  return 0;
}


/* address=140c6e0a0 name=FUN_140c6e0a0 */

undefined8 FUN_140c6e0a0(char *param_1,undefined2 *param_2,short param_3)

{
  undefined8 uVar1;
  undefined2 local_18;
  
  if (param_3 == 0) {
    if (*param_1 == '\0') {
      local_18 = 0x301;
    }
    else {
      local_18 = 0xfeff;
    }
    *param_2 = local_18;
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_140c6e020(param_1,param_2,param_3);
  }
  return uVar1;
}


/* address=140c6e110 name=FUN_140c6e110 */

undefined8 FUN_140c6e110(char *param_1,undefined2 *param_2,short param_3)

{
  undefined8 uVar1;
  undefined2 local_18;
  
  if (param_3 == 0) {
    if (*param_1 == '\0') {
      local_18 = 0x304;
    }
    else {
      local_18 = 0xfefd;
    }
    *param_2 = local_18;
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_140c6e020(param_1,param_2,param_3);
  }
  return uVar1;
}


/* address=140c6e180 name=FUN_140c6e180 */

undefined2 FUN_140c6e180(longlong param_1)

{
  undefined2 uVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = FUN_140c511a0(param_1);
  if ((iVar2 == 0) || ((*(byte *)(param_1 + 0xa4) & 1) != 0)) {
    uVar1 = *(undefined2 *)(param_1 + 0x10);
  }
  else {
    lVar3 = FUN_140c55c70(*(longlong *)(param_1 + 0x30) + 0x118);
    lVar3 = FUN_140c55c70(lVar3 + 0x5e8);
    uVar1 = *(undefined2 *)(lVar3 + 4);
  }
  return uVar1;
}


/* address=140c6e1f0 name=FUN_140c6e1f0 */

longlong FUN_140c6e1f0(longlong *param_1)

{
  return *param_1 + param_1[1] * 2;
}


/* address=140c6e210 name=FUN_140c6e210 */

undefined8 FUN_140c6e210(undefined8 param_1,undefined8 param_2)

{
  FUN_140c55f50(param_1,param_2,2);
  return param_1;
}


/* address=140c6e240 name=FUN_140c6e240 */

longlong FUN_140c6e240(longlong *param_1,ulonglong param_2)

{
  if ((ulonglong)param_1[1] <= param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *param_1 + param_2 * 8;
}


/* address=140c6e280 name=FUN_140c6e280 */

undefined8 FUN_140c6e280(longlong *param_1,undefined8 param_2,ulonglong param_3,__uint64 param_4)

{
  __uint64 *p_Var1;
  __uint64 local_res20;
  __uint64 local_18 [3];
  
  local_res20 = param_4;
  if ((ulonglong)param_1[1] < param_3) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_18[0] = param_1[1] - param_3;
  p_Var1 = std::_Min_value<unsigned___int64>(local_18,&local_res20);
  FUN_140c55f50(param_2,*param_1 + param_3 * 8,*p_Var1);
  return param_2;
}


/* address=140c6e300 name=FUN_140c6e300 */

void FUN_140c6e300(ushort param_1)

{
  undefined local_38 [16];
  uint local_28;
  
  local_28 = param_1 | 0x3000000;
  FUN_140e11328(local_38,&PTR_s_DES_CBC3_SHA_140fd5390,0x18,0x28,&LAB_140c71190);
  return;
}


/* address=140c6e350 name=FUN_140c6e350 */

undefined4 FUN_140c6e350(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


/* address=140c6e370 name=FUN_140c6e370 */

undefined2 FUN_140c6e370(longlong param_1)

{
  if ((*(uint *)(param_1 + 0x10) & 0xff000000) != 0x3000000) {
    FID_conflict__assert((wchar_t *)"(",(wchar_t *)"D",0x557);
  }
  return *(undefined2 *)(param_1 + 0x10);
}


/* address=140c6e400 name=FUN_140c6e400 */

bool FUN_140c6e400(longlong param_1)

{
  return *(int *)(param_1 + 0x20) != 4;
}


/* address=140c6e700 name=FUN_140c6e700 */

undefined8 FUN_140c6e700(longlong param_1)

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


/* address=140c6e740 name=FUN_140c6e740 */

undefined8 FUN_140c6e740(longlong param_1)

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


/* address=140c6e930 name=FUN_140c6e930 */

undefined4 FUN_140c6e930(longlong param_1,undefined4 *param_2)

{
  undefined4 local_14;
  undefined4 local_10;
  
  if (param_1 == 0) {
    local_10 = 0;
  }
  else {
    switch(*(undefined4 *)(param_1 + 0x1c)) {
    case 1:
      local_14 = 0xa8;
      local_10 = 0x70;
      break;
    case 2:
    case 8:
      local_14 = 0x80;
      local_10 = 0x80;
      break;
    default:
      FID_conflict__assert(L"0",(wchar_t *)"D",0x613);
      local_14 = 0;
      local_10 = 0;
      break;
    case 4:
    case 0x10:
    case 0x20:
      local_14 = 0x100;
      local_10 = 0x100;
    }
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = local_14;
    }
  }
  return local_10;
}


/* address=140c6efe0 name=FUN_140c6efe0 */

void FUN_140c6efe0(undefined8 param_1)

{
  FUN_140c6e370(param_1);
  return;
}


/* address=140c6f000 name=FUN_140c6f000 */

undefined8 FUN_140c6f000(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140c6f050 name=FUN_140c6f050 */

undefined8 FUN_140c6f050(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e28d40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140c6f090 name=FUN_140c6f090 */

void FUN_140c6f090(longlong param_1)

{
  FUN_140c66200(*(undefined8 *)(param_1 + 8));
  FUN_140c57460(param_1);
  return;
}


/* address=140c6f0d0 name=FUN_140c6f0d0 */

undefined FUN_140c6f0d0(longlong param_1,undefined8 param_2,undefined *param_3)

{
  undefined uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined local_48 [8];
  undefined local_40 [24];
  undefined local_28 [24];
  
  uVar3 = FUN_140c55c70(param_2);
  lVar4 = FUN_140c560a0(uVar3);
  lVar5 = FUN_140c55f80(param_3);
  if (lVar4 == lVar5) {
    FUN_140c56440(local_40);
    puVar6 = local_28;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *param_3;
      param_3 = param_3 + 1;
      puVar6 = puVar6 + 1;
    }
    cVar2 = FUN_140c71360(local_40,local_28);
    if (cVar2 == '\0') {
      FUN_140c564c0(local_40);
      FUN_140c57460(param_2);
      uVar1 = 0;
    }
    else {
      uVar3 = FUN_140c55cd0(param_2);
      FUN_140c713d0(param_1,uVar3);
      FUN_140c565b0(local_40,param_1 + 8,local_48);
      FUN_140c564c0(local_40);
      FUN_140c57460(param_2);
      uVar1 = 1;
    }
  }
  else {
    FUN_140c6c4e0(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cipher.cc"
                  ,0x2dc);
    FUN_140c57460(param_2);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=140c6f450 name=FUN_140c6f450 */

undefined8
FUN_140c6f450(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
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
        uVar3 = FUN_140caa620();
        *param_1 = uVar3;
      }
      else if (bVar2) {
        uVar3 = FUN_140caa680();
        *param_1 = uVar3;
      }
      else {
        uVar3 = FUN_140ca9a20();
        *param_1 = uVar3;
      }
      *param_3 = 4;
    }
    else if (*(int *)(param_4 + 0x1c) == 0x10) {
      if (bVar1) {
        uVar3 = FUN_140caa650();
        *param_1 = uVar3;
      }
      else if (bVar2) {
        uVar3 = FUN_140caa6b0();
        *param_1 = uVar3;
      }
      else {
        uVar3 = FUN_140ca9a80();
        *param_1 = uVar3;
      }
      *param_3 = 4;
    }
    else {
      if (*(int *)(param_4 + 0x1c) != 0x20) {
        return 0;
      }
      uVar3 = FUN_140cd39e0();
      *param_1 = uVar3;
      *param_3 = 0xc;
    }
    if (0x303 < param_5) {
      uVar3 = FUN_140ca9c00(*param_1);
      *param_3 = uVar3;
    }
  }
  else if (*(int *)(param_4 + 0x20) == 1) {
    if (*(int *)(param_4 + 0x1c) == 1) {
      if (param_5 == 0x301) {
        uVar3 = FUN_140d92f90();
        *param_1 = uVar3;
        *param_3 = 8;
      }
      else {
        uVar3 = FUN_140d92f80();
        *param_1 = uVar3;
      }
    }
    else if (*(int *)(param_4 + 0x1c) == 2) {
      if (param_5 == 0x301) {
        uVar3 = FUN_140d92f40();
        *param_1 = uVar3;
        *param_3 = 0x10;
      }
      else {
        uVar3 = FUN_140d92f30();
        *param_1 = uVar3;
      }
    }
    else {
      if (*(int *)(param_4 + 0x1c) != 4) {
        return 0;
      }
      if (param_5 == 0x301) {
        uVar3 = FUN_140d92f70();
        *param_1 = uVar3;
        *param_3 = 0x10;
      }
      else {
        uVar3 = FUN_140d92f60();
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
    uVar3 = FUN_140d92f50();
    *param_1 = uVar3;
    *param_2 = 0x20;
  }
  return 1;
}


/* address=140c6f720 name=FUN_140c6f720 */

undefined8 FUN_140c6f720(ushort param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_2 + 0x24);
  if (iVar1 == 1) {
    if (param_1 < 0x303) {
      uVar2 = FUN_140c7f1d0();
    }
    else {
      uVar2 = FUN_140c7f110();
    }
  }
  else if (iVar1 == 2) {
    uVar2 = FUN_140c7f110();
  }
  else if (iVar1 == 4) {
    uVar2 = FUN_140c7f140();
  }
  else {
    FID_conflict__assert(L"0",(wchar_t *)"D",0x29a);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140c6f7c0 name=FUN_140c6f7c0 */

void FUN_140c6f7c0(longlong param_1,char param_2,char *param_3,undefined param_4)

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
  undefined4 local_418;
  longlong local_408;
  undefined local_400;
  undefined local_3ff;
  undefined local_3fe;
  undefined local_3fd;
  undefined local_3fc;
  ulonglong local_3f8;
  undefined local_3f0 [8];
  undefined2 local_3e8;
  undefined2 local_3e4;
  undefined2 local_3e0;
  undefined2 local_3dc;
  char *local_3d8;
  longlong *local_3d0;
  undefined local_3c8 [8];
  undefined2 *local_3c0;
  undefined2 *local_3b8;
  undefined2 *local_3b0;
  undefined2 *local_3a8;
  longlong local_3a0;
  undefined local_398 [16];
  longlong *local_388;
  longlong *local_380;
  undefined2 *local_378;
  undefined2 *local_370;
  undefined2 *local_368;
  undefined2 *local_360;
  undefined *local_358;
  longlong *local_350;
  undefined2 *local_348;
  undefined2 *local_340;
  undefined2 *local_338;
  longlong local_330;
  undefined local_328 [8];
  undefined *local_320;
  undefined8 local_318;
  undefined2 *local_310;
  undefined local_308 [16];
  undefined local_2f8 [16];
  undefined local_2e8 [16];
  undefined local_2d8 [16];
  longlong local_2c8;
  undefined local_2c0 [8];
  longlong *local_2b8 [78];
  undefined local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1413d9c40 ^ (ulonglong)auStack_438;
  if ((param_3 != (char *)0x0) && (param_1 != 0)) {
    for (local_3f8 = 0; local_3f8 < 0x15; local_3f8 = local_3f8 + 1) {
      if (local_3f8 + 1 < 0x15) {
        local_350 = &local_2c8 + (local_3f8 + 1) * 4;
      }
      else {
        local_350 = (longlong *)0x0;
      }
      local_2b8[local_3f8 * 4] = local_350;
      if (local_3f8 == 0) {
        local_380 = (longlong *)0x0;
      }
      else {
        local_380 = &local_2c8 + (local_3f8 - 1) * 4;
      }
      local_2b8[local_3f8 * 4 + 1] = local_380;
      local_2c0[local_3f8 * 0x20] = 0;
      local_2c0[local_3f8 * 0x20 + 1] = 0;
    }
    local_388 = &local_2c8;
    local_358 = local_48;
    local_408 = 0;
    if (param_2 != '\0') {
      local_378 = &DAT_140fd7410;
      local_310 = &DAT_140fd7418;
      for (local_3c0 = &DAT_140fd7410; local_3c0 != local_310; local_3c0 = local_3c0 + 1) {
        local_3dc = *local_3c0;
        lVar4 = FUN_140c6e300(local_3dc);
        (&local_2c8)[local_408 * 4] = lVar4;
        lVar5 = local_408 + 1;
        lVar4 = local_408 * 4;
        local_408 = lVar5;
        if ((&local_2c8)[lVar4] == 0) {
          FID_conflict__assert((wchar_t *)"c",(wchar_t *)"D",0x4a9);
        }
      }
    }
    local_370 = &DAT_140fd7418;
    local_348 = (undefined2 *)&DAT_140fd741e;
    for (local_3b8 = &DAT_140fd7418; local_3b8 != local_348; local_3b8 = local_3b8 + 1) {
      local_3e8 = *local_3b8;
      lVar4 = FUN_140c6e300(local_3e8);
      (&local_2c8)[local_408 * 4] = lVar4;
      lVar5 = local_408 + 1;
      lVar4 = local_408 * 4;
      local_408 = lVar5;
      if ((&local_2c8)[lVar4] == 0) {
        FID_conflict__assert((wchar_t *)"c",(wchar_t *)"D",0x4ae);
      }
    }
    if (param_2 == '\0') {
      local_368 = &DAT_140fd7410;
      local_340 = &DAT_140fd7418;
      for (local_3b0 = &DAT_140fd7410; local_3b0 != local_340; local_3b0 = local_3b0 + 1) {
        local_3e4 = *local_3b0;
        lVar4 = FUN_140c6e300(local_3e4);
        (&local_2c8)[local_408 * 4] = lVar4;
        lVar5 = local_408 + 1;
        lVar4 = local_408 * 4;
        local_408 = lVar5;
        if ((&local_2c8)[lVar4] == 0) {
          FID_conflict__assert((wchar_t *)"c",(wchar_t *)"D",0x4b3);
        }
      }
    }
    local_360 = &DAT_140fd7420;
    local_338 = (undefined2 *)&DAT_140fd743c;
    for (local_3a8 = &DAT_140fd7420; local_3a8 != local_338; local_3a8 = local_3a8 + 1) {
      local_3e0 = *local_3a8;
      lVar4 = FUN_140c6e300(local_3e0);
      (&local_2c8)[local_408 * 4] = lVar4;
      lVar5 = local_408 + 1;
      lVar4 = local_408 * 4;
      local_408 = lVar5;
      if ((&local_2c8)[lVar4] == 0) {
        FID_conflict__assert((wchar_t *)"c",(wchar_t *)"D",0x4b8);
      }
    }
    if (local_408 != 0x15) {
      FID_conflict__assert((wchar_t *)"n",(wchar_t *)"D",0x4ba);
    }
    local_3d8 = param_3;
    iVar3 = strncmp(param_3,"DEFAULT",7);
    pcVar1 = local_3d8;
    if (iVar3 == 0) {
      cVar2 = FUN_140c70a50(&DAT_140fd6084,&local_388,&local_358,param_4);
      if (cVar2 == '\0') goto LAB_140c70040;
      pcVar1 = local_3d8 + 7;
      if (local_3d8[7] == ':') {
        pcVar1 = local_3d8 + 8;
      }
    }
    local_3d8 = pcVar1;
    if ((*local_3d8 == '\0') ||
       (cVar2 = FUN_140c70a50(local_3d8,&local_388,&local_358,param_4), cVar2 != '\0')) {
      uVar6 = FUN_140c56020();
      FUN_140c55e40(local_3f0,uVar6);
      FUN_140c56440(local_398);
      cVar2 = operator==<>(local_3f0,0);
      if ((cVar2 == '\0') && (cVar2 = FUN_140c56600(local_398,0x18), cVar2 != '\0')) {
        local_3a0 = 0;
        for (local_3d0 = local_388; local_3d0 != (longlong *)0x0;
            local_3d0 = (longlong *)local_3d0[2]) {
          if (*(char *)(local_3d0 + 1) != '\0') {
            uVar6 = FUN_140c55c70(local_3f0);
            lVar4 = FUN_140c5cc60(uVar6,*local_3d0);
            if (lVar4 == 0) {
              local_3ff = 0;
              FUN_140c564c0(local_398);
              FUN_140c57460(local_3f0);
              goto LAB_140c70040;
            }
            local_330 = local_3a0;
            puVar7 = (undefined *)FUN_140c71340(local_398,local_3a0);
            *puVar7 = *(undefined *)((longlong)local_3d0 + 9);
            local_3a0 = local_3a0 + 1;
          }
        }
        uVar6 = FUN_140c71540(local_328);
        FUN_140c55e70(local_3c8,uVar6);
        FUN_140c56eb0(local_328);
        cVar2 = FUN_140c56050(local_3c8);
        if (cVar2 != '\0') {
          local_320 = local_308;
          uVar6 = FUN_140c71580(local_2e8,local_398);
          puVar7 = (undefined *)FUN_140c56800(uVar6,local_2d8,0,local_3a0);
          puVar8 = local_2f8;
          for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          uVar6 = FUN_140c55cd0(local_3f0);
          local_318 = FUN_140c55e70(local_320,uVar6);
          uVar6 = FUN_140c55c70(local_3c8);
          cVar2 = FUN_140c6f0d0(uVar6,local_318,local_2f8);
          if (cVar2 != '\0') {
            uVar6 = FUN_140c55cd0(local_3c8);
            FUN_140c715d0(param_1,uVar6);
            uVar6 = FUN_140c55c70(param_1);
            uVar6 = FUN_140c55c70(uVar6);
            lVar4 = FUN_140c560a0(uVar6);
            if (lVar4 == 0) {
              local_418 = 0x4f5;
              FUN_140c6c4e0(0x10,0,0xb1,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cipher.cc"
                           );
              local_3fd = 0;
              FUN_140c56eb0(local_3c8);
              FUN_140c564c0(local_398);
              FUN_140c57460(local_3f0);
            }
            else {
              local_3fc = 1;
              FUN_140c56eb0(local_3c8);
              FUN_140c564c0(local_398);
              FUN_140c57460(local_3f0);
            }
            goto LAB_140c70040;
          }
        }
        local_3fe = 0;
        FUN_140c56eb0(local_3c8);
        FUN_140c564c0(local_398);
        FUN_140c57460(local_3f0);
      }
      else {
        local_400 = 0;
        FUN_140c564c0(local_398);
        FUN_140c57460(local_3f0);
      }
    }
  }
LAB_140c70040:
  FUN_140db44f0(local_28 ^ (ulonglong)auStack_438);
  return;
}


/* address=140c70060 name=FUN_140c70060 */

undefined8 FUN_140c70060(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_140d31b10(param_1);
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


/* address=140c700b0 name=FUN_140c700b0 */

bool FUN_140c700b0(longlong param_1)

{
  return (*(uint *)(param_1 + 0x18) & 3) != 0;
}


/* address=140c700f0 name=FUN_140c700f0 */

bool FUN_140c700f0(longlong param_1)

{
  return (*(uint *)(param_1 + 0x14) & 2) != 0;
}


/* address=140c70130 name=FUN_140c70130 */

longlong FUN_140c70130(longlong param_1)

{
  int iVar1;
  ulonglong local_18;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 1) {
    local_18 = 8;
  }
  else {
    if ((iVar1 != 2) && (iVar1 != 4)) {
      return 0;
    }
    local_18 = 0x10;
  }
  if (*(int *)(param_1 + 0x20) != 1) {
    FID_conflict__assert((wchar_t *)"c",(wchar_t *)"D",0x522);
  }
  return (local_18 - 0x15U % local_18) + 0x15;
}


/* address=140c701e0 name=FUN_140c701e0 */

bool FUN_140c701e0(longlong param_1)

{
  return *(int *)(param_1 + 0x10) == 0x300c027;
}


/* address=140c70220 name=FUN_140c70220 */

undefined FUN_140c70220(char param_1,char param_2)

{
  undefined local_18;
  
  if (param_1 == ':') {
    local_18 = 1;
  }
  else if ((param_2 == '\0') && (((param_1 == ' ' || (param_1 == ';')) || (param_1 == ',')))) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}


/* address=140c70280 name=FUN_140c70280 */

undefined FUN_140c70280(char *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  undefined local_18;
  
  iVar1 = strncmp(param_1,param_2,param_3);
  if ((iVar1 == 0) && (param_1[param_3] == '\0')) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}


/* address=140c702f0 name=FUN_140c702f0 */

void FUN_140c702f0(longlong *param_1,longlong param_2,longlong *param_3)

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


/* address=140c703c0 name=FUN_140c703c0 */

void FUN_140c703c0(longlong *param_1,longlong param_2,longlong *param_3)

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


/* address=140c70490 name=FUN_140c70490 */

void FUN_140c70490(int param_1,longlong param_2,int param_3,int param_4,undefined param_5,
                  longlong **param_6,longlong **param_7)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  longlong *local_40;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  longlong *local_18;
  longlong *local_10;
  
  if ((((param_1 != 0) || (param_4 != -1)) || (*(short *)(param_2 + 0x18) != 0)) ||
     (((*(int *)(param_2 + 8) != 0 && (*(int *)(param_2 + 0xc) != 0)) &&
      ((*(int *)(param_2 + 0x10) != 0 && (*(int *)(param_2 + 0x14) != 0)))))) {
    local_30 = *param_6;
    local_28 = *param_7;
    local_20 = local_30;
    local_18 = local_28;
    if (param_3 == 3) {
      local_20 = local_28;
      local_18 = local_30;
    }
    local_40 = (longlong *)0x0;
LAB_140c70566:
    while (plVar2 = local_20, local_40 != local_18) {
      local_40 = local_20;
      if (local_20 == (longlong *)0x0) break;
      if (param_3 != 3) {
        local_10 = (longlong *)local_20[2];
      }
      else {
        local_10 = (longlong *)local_20[3];
      }
      local_20 = local_10;
      lVar1 = *plVar2;
      if (param_1 == 0) {
        if (param_4 < 0) goto LAB_140c70611;
        iVar5 = FUN_140c6e930(lVar1,0);
        if (param_4 == iVar5) goto LAB_140c706b7;
      }
      else if (param_1 == *(int *)(lVar1 + 0x10)) goto LAB_140c706b7;
    }
    *param_6 = local_30;
    *param_7 = local_28;
  }
  return;
LAB_140c70611:
  if ((((((*(uint *)(param_2 + 8) & *(uint *)(lVar1 + 0x14)) != 0) &&
        ((*(uint *)(param_2 + 0xc) & *(uint *)(lVar1 + 0x18)) != 0)) &&
       (((*(uint *)(param_2 + 0x10) & *(uint *)(lVar1 + 0x1c)) != 0 &&
        ((*(uint *)(param_2 + 0x14) & *(uint *)(lVar1 + 0x20)) != 0)))) &&
      ((*(short *)(param_2 + 0x18) == 0 ||
       (sVar4 = FUN_140c6e700(lVar1), sVar4 == *(short *)(param_2 + 0x18))))) &&
     ((*(char *)(param_2 + 0x1a) != '\0' || (cVar3 = FUN_140c701e0(lVar1), cVar3 == '\0')))) {
LAB_140c706b7:
    if (param_3 == 1) {
      if (*(char *)(plVar2 + 1) == '\0') {
        FUN_140c702f0(&local_30,plVar2,&local_28);
        *(undefined *)(plVar2 + 1) = 1;
        *(undefined *)((longlong)plVar2 + 9) = param_5;
      }
    }
    else if (param_3 == 4) {
      if (*(char *)(plVar2 + 1) != '\0') {
        FUN_140c702f0(&local_30,plVar2,&local_28);
        *(undefined *)((longlong)plVar2 + 9) = 0;
      }
    }
    else if (param_3 == 3) {
      if (*(char *)(plVar2 + 1) != '\0') {
        FUN_140c703c0(&local_30,plVar2,&local_28);
        *(undefined *)(plVar2 + 1) = 0;
        *(undefined *)((longlong)plVar2 + 9) = 0;
      }
    }
    else if (param_3 == 2) {
      if (local_30 == plVar2) {
        local_30 = (longlong *)plVar2[2];
      }
      else {
        *(longlong *)(plVar2[3] + 0x10) = plVar2[2];
      }
      if (local_28 == plVar2) {
        local_28 = (longlong *)plVar2[3];
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
  goto LAB_140c70566;
}


/* address=140c70870 name=FUN_140c70870 */

undefined FUN_140c70870(undefined8 *param_1,undefined8 param_2)

{
  undefined uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  int local_44;
  int local_40;
  undefined8 *local_38;
  undefined local_20 [32];
  
  local_44 = 0;
  for (local_38 = (undefined8 *)*param_1; local_38 != (undefined8 *)0x0;
      local_38 = (undefined8 *)local_38[2]) {
    if (*(char *)(local_38 + 1) != '\0') {
      iVar3 = FUN_140c6e930(*local_38,0);
      if (local_44 < iVar3) {
        local_44 = FUN_140c6e930(*local_38,0);
      }
    }
  }
  FUN_140c56440(local_20);
  cVar2 = FUN_140c71450(local_20,(longlong)(local_44 + 1));
  if (cVar2 == '\0') {
    FUN_140c564c0(local_20);
    uVar1 = 0;
  }
  else {
    uVar4 = FUN_140c55c70(local_20);
    FUN_140c6f050(uVar4,0,(longlong)(local_44 + 1) << 2);
    for (local_38 = (undefined8 *)*param_1; local_38 != (undefined8 *)0x0;
        local_38 = (undefined8 *)local_38[2]) {
      if (*(char *)(local_38 + 1) != '\0') {
        FUN_140c6e930(*local_38,0);
        piVar5 = (int *)FUN_140c71430(local_20);
        *piVar5 = *piVar5 + 1;
      }
    }
    for (local_40 = local_44; -1 < local_40; local_40 = local_40 + -1) {
      piVar5 = (int *)FUN_140c71430(local_20,(longlong)local_40);
      if (0 < *piVar5) {
        FUN_140c70490(0,0,4,local_40,0,param_1,param_2);
      }
    }
    FUN_140c564c0(local_20);
    uVar1 = 1;
  }
  return uVar1;
}


/* address=140c70a50 name=FUN_140c70a50 */

/* WARNING: Removing unreachable block (ram,0x000140c70bee) */

ulonglong FUN_140c70a50(char *param_1,undefined8 param_2,longlong *param_3,char param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char *_Str1;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  char local_78;
  char local_77;
  char *local_70;
  int local_64;
  ulonglong local_60;
  int local_58;
  longlong local_50;
  undefined local_30 [8];
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  short local_18;
  byte local_16;
  
  local_77 = '\0';
  bVar1 = false;
  local_70 = param_1;
  do {
    while( true ) {
      cVar4 = *local_70;
      if (cVar4 == '\0') {
        if (local_77 == '\0') {
          uVar6 = 1;
        }
        else {
          uVar6 = FUN_140c6c4e0(0x10,0,0x9e,
                                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cipher.cc"
                                ,0x465);
          uVar6 = uVar6 & 0xffffffffffffff00;
        }
        return uVar6;
      }
      if (local_77 == '\0') break;
      if (cVar4 == ']') {
        if (*param_3 != 0) {
          *(undefined *)(*param_3 + 9) = 0;
        }
        local_77 = '\0';
        local_70 = local_70 + 1;
      }
      else if (cVar4 == '|') {
        local_70 = local_70 + 1;
      }
      else {
        iVar5 = FUN_140c66770((int)cVar4);
        if (iVar5 == 0) {
          uVar6 = FUN_140c6c4e0(0x10,0,0xe0,
                                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cipher.cc"
                                ,0x3d3);
          return uVar6 & 0xffffffffffffff00;
        }
        local_64 = 1;
LAB_140c70c2f:
        if ((bVar1) && (local_64 != 1)) {
          uVar6 = FUN_140c6c4e0(0x10,0,0xa8,
                                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cipher.cc"
                                ,0x3f1);
          return uVar6 & 0xffffffffffffff00;
        }
        cVar4 = FUN_140c70220(cVar4,param_4);
        if (cVar4 == '\0') {
          bVar2 = false;
          local_58 = 0;
          FUN_140c712e0(local_30);
          bVar3 = false;
          local_16 = local_64 != 1;
          while( true ) {
            _Str1 = local_70;
            local_78 = *local_70;
            local_50 = 0;
            while ((((iVar5 = FUN_140c66770((int)local_78), iVar5 != 0 || (local_78 == '-')) ||
                    (local_78 == '.')) || (local_78 == '_'))) {
              local_70 = local_70 + 1;
              local_50 = local_50 + 1;
              local_78 = *local_70;
            }
            if (local_50 == 0) {
              uVar6 = FUN_140c6c4e0(0x10,0,0x9e,
                                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cipher.cc"
                                    ,0x40e);
              return uVar6 & 0xffffffffffffff00;
            }
            if (local_64 == 5) break;
            if ((!bVar2) && (local_78 != '+')) {
              for (local_60 = 0; local_60 < 0x18; local_60 = local_60 + 1) {
                cVar4 = FUN_140c70280((&PTR_s_DES_CBC3_SHA_140fd5390)[local_60 * 5],_Str1,local_50);
                if ((cVar4 != '\0') ||
                   (cVar4 = FUN_140c70280((&PTR_s_TLS_RSA_WITH_3DES_EDE_CBC_SHA_140fd5398)
                                          [local_60 * 5],_Str1,local_50), cVar4 != '\0')) {
                  local_58 = *(int *)(&DAT_140fd53a0 + local_60 * 0x28);
                  break;
                }
              }
            }
            if (local_58 == 0) {
              for (local_60 = 0; local_60 < 0x1d; local_60 = local_60 + 1) {
                cVar4 = FUN_140c70280((&PTR_DAT_140fd5750)[local_60 * 4],_Str1,local_50);
                if (cVar4 != '\0') {
                  local_28 = local_28 & *(uint *)(&DAT_140fd5758 + local_60 * 0x20);
                  local_24 = local_24 & *(uint *)(&DAT_140fd575c + local_60 * 0x20);
                  local_20 = local_20 & *(uint *)(&DAT_140fd5760 + local_60 * 0x20);
                  local_1c = local_1c & *(uint *)(&DAT_140fd5764 + local_60 * 0x20);
                  local_16 = local_16 | (&DAT_140fd576a)[local_60 * 0x20];
                  if ((local_18 == 0) || (local_18 == *(short *)(&DAT_140fd5768 + local_60 * 0x20)))
                  {
                    local_18 = *(short *)(&DAT_140fd5768 + local_60 * 0x20);
                  }
                  else {
                    bVar3 = true;
                  }
                  break;
                }
              }
              if ((local_60 == 0x1d) && (bVar3 = true, param_4 != '\0')) {
                uVar6 = FUN_140c6c4e0(0x10,0,0x9e,
                                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cipher.cc"
                                      ,0x441);
                return uVar6 & 0xffffffffffffff00;
              }
            }
            if (local_78 != '+') break;
            local_70 = local_70 + 1;
            bVar2 = true;
          }
          if (local_64 == 5) {
            if ((local_50 != 8) || (iVar5 = strncmp(_Str1,"STRENGTH",8), iVar5 != 0)) {
              uVar6 = FUN_140c6c4e0(0x10,0,0x9e,
                                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cipher.cc"
                                    ,0x452);
              return uVar6 & 0xffffffffffffff00;
            }
            cVar4 = FUN_140c70870(param_2,param_3);
            if (cVar4 == '\0') {
              return 0;
            }
            while ((*local_70 != '\0' && (cVar4 = FUN_140c70220(*local_70,param_4), cVar4 == '\0')))
            {
              local_70 = local_70 + 1;
            }
          }
          else if (!bVar3) {
            FUN_140c70490(local_58,local_30,local_64,0xffffffff,local_77,param_2,param_3);
          }
        }
        else {
          local_70 = local_70 + 1;
        }
      }
    }
    if (cVar4 == '-') {
      local_64 = 3;
      local_70 = local_70 + 1;
      goto LAB_140c70c2f;
    }
    if (cVar4 == '+') {
      local_64 = 4;
      local_70 = local_70 + 1;
      goto LAB_140c70c2f;
    }
    if (cVar4 == '!') {
      local_64 = 2;
      local_70 = local_70 + 1;
      goto LAB_140c70c2f;
    }
    if (cVar4 == '@') {
      local_64 = 5;
      local_70 = local_70 + 1;
      goto LAB_140c70c2f;
    }
    if (cVar4 != '[') {
      local_64 = 1;
      goto LAB_140c70c2f;
    }
    local_77 = '\x01';
    bVar1 = true;
    local_70 = local_70 + 1;
  } while( true );
}


/* address=140c71140 name=FUN_140c71140 */

undefined8 FUN_140c71140(longlong param_1,longlong param_2)

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


/* address=140c711c0 name=FUN_140c711c0 */

void FUN_140c711c0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c751c0(param_1,param_2);
  return;
}


/* address=140c711f0 name=FUN_140c711f0 */

void FUN_140c711f0(undefined8 param_1)

{
  FUN_140c75780(param_1);
  return;
}


/* address=140c71210 name=FUN_140c71210 */

longlong FUN_140c71210(longlong param_1)

{
  FUN_140c57b60(param_1);
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}


/* address=140c71240 name=FUN_140c71240 */

void FUN_140c71240(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_140c55cd0(param_1);
    FUN_140c58450(uVar2,p_Var1);
  }
  return;
}


/* address=140c71290 name=FUN_140c71290 */

void FUN_140c71290(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_140c55cd0(param_1);
    FUN_140c58510(uVar2,p_Var1);
  }
  return;
}


/* address=140c712e0 name=FUN_140c712e0 */

undefined8 * FUN_140c712e0(undefined8 *param_1)

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


/* address=140c71340 name=FUN_140c71340 */

longlong FUN_140c71340(longlong *param_1,longlong param_2)

{
  return *param_1 + param_2;
}


/* address=140c71360 name=FUN_140c71360 */

bool FUN_140c71360(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_140c55f80(param_2);
  cVar1 = FUN_140c56600(param_1,uVar2);
  if (cVar1 != '\0') {
    uVar2 = FUN_140c55f80(param_2);
    uVar3 = FUN_140c55c70(param_2);
    FUN_140c6f000(*param_1,uVar3,uVar2);
  }
  return cVar1 != '\0';
}


/* address=140c713d0 name=FUN_140c713d0 */

undefined8
FUN_140c713d0(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_140c71240(param_1,p_Var1);
  uVar2 = FUN_140c55cd0(param_2);
  FUN_140c55cd0(uVar2);
  FUN_140c55cd0(param_1);
  return param_1;
}


/* address=140c71430 name=FUN_140c71430 */

longlong FUN_140c71430(longlong *param_1,longlong param_2)

{
  return *param_1 + param_2 * 4;
}


/* address=140c71450 name=FUN_140c71450 */

undefined8 FUN_140c71450(longlong *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong local_18;
  
  FUN_140c56520(param_1);
  if (param_2 == 0) {
    uVar1 = 1;
  }
  else {
    uVar2 = FUN_140c55be0();
    if (uVar2 / 4 < param_2) {
      FUN_140c6c4e0(0x10,0,0x45,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\internal.h"
                    ,0x138);
      uVar1 = 0;
    }
    else {
      lVar3 = FUN_140c660d0(param_2 << 2);
      *param_1 = lVar3;
      if (*param_1 == 0) {
        uVar1 = 0;
      }
      else {
        param_1[1] = param_2;
        for (local_18 = 0; local_18 < (ulonglong)param_1[1]; local_18 = local_18 + 1) {
          FUN_140c55bd0(4,*param_1 + local_18 * 4);
        }
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}


/* address=140c71540 name=FUN_140c71540 */

undefined8 FUN_140c71540(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_140c71630();
  uVar1 = FUN_140c55e40(local_18,uVar1);
  FUN_140c55e70(param_1,uVar1);
  FUN_140c56eb0(local_18);
  return param_1;
}


/* address=140c71580 name=FUN_140c71580 */

undefined8 FUN_140c71580(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140c55f80(param_2);
  uVar2 = FUN_140c55c70(param_2);
  FUN_140c55fe0(param_1,uVar2,uVar1);
  return param_1;
}


/* address=140c715d0 name=FUN_140c715d0 */

undefined8
FUN_140c715d0(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_140c71290(param_1,p_Var1);
  uVar2 = FUN_140c55cd0(param_2);
  FUN_140c55cd0(uVar2);
  FUN_140c55cd0(param_1);
  return param_1;
}


/* address=140c71630 name=FUN_140c71630 */

undefined8 FUN_140c71630(void)

{
  longlong lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = FUN_140c660d0(0x10);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined *)FUN_140c55bd0(0x10,lVar1);
    puVar4 = puVar2;
    for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    uVar3 = FUN_140c71210(puVar2);
  }
  return uVar3;
}


/* address=140c71690 name=FUN_140c71690 */

void FUN_140c71690(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140c55c70(param_1 + 0xe8);
  FUN_140c740c0(uVar1,param_2,param_3);
  return;
}


/* address=140c71890 name=FUN_140c71890 */

undefined FUN_140c71890(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  cVar1 = FUN_140c56050(param_1 + 8);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar3 = FUN_140c75de0(param_2,param_3,0);
    lVar4 = FUN_140c55c70(param_1 + 8);
    lVar4 = FUN_140c55c70(lVar4 + 0x20);
    FUN_140c63230(lVar4 + 0x68,uVar3);
    lVar4 = FUN_140c55c70(param_1 + 8);
    lVar4 = FUN_140c55c70(lVar4 + 0x20);
    uVar2 = FUN_140c57ae0(lVar4 + 0x68,0);
  }
  return uVar2;
}


/* address=140c71e60 name=FUN_140c71e60 */

int FUN_140c71e60(void *param_1,void *param_2,size_t param_3)

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


/* address=140c71ea0 name=FUN_140c71ea0 */

undefined8 FUN_140c71ea0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140c71ef0 name=FUN_140c71ef0 */

undefined FUN_140c71ef0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_140c55c70(*(longlong *)(param_1 + 8) + 0x20);
  cVar1 = FUN_140c57ae0(lVar2 + 8,0);
  if (cVar1 != '\0') {
    lVar2 = FUN_140c55c70(*(longlong *)(param_1 + 8) + 0x20);
    uVar3 = FUN_140c55c70(lVar2 + 8);
    lVar2 = FUN_140c560c0(uVar3,0);
    if ((lVar2 != 0) && (cVar1 = FUN_140c7be70(param_1), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}


/* address=140c71f90 name=FUN_140c71f90 */

ulonglong FUN_140c71f90(undefined *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                       undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined local_70 [8];
  undefined local_68 [8];
  undefined local_60 [8];
  undefined local_58 [16];
  undefined local_48 [8];
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined local_28 [16];
  undefined local_18 [24];
  
  FUN_140c56b00(param_2,0);
  FUN_140c55df0(param_3,0);
  iVar2 = FUN_140d35aa0(param_5,local_28);
  if (iVar2 == 0) {
    *param_1 = 0x32;
    uVar3 = FUN_140c6c4e0(0x10,0,0x89,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                          ,0x165);
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    lVar4 = FUN_140d354c0(local_28);
    if (lVar4 == 0) {
      uVar3 = 1;
    }
    else {
      uVar5 = FUN_140c56020();
      FUN_140c55e40(local_70,uVar5);
      cVar1 = FUN_140c56050(local_70);
      if (cVar1 == '\0') {
        *param_1 = 0x50;
        FUN_140c56ac0(local_70);
        uVar3 = 0;
      }
      else {
        FUN_140c57b60(local_68);
        while (lVar4 = FUN_140d354c0(local_28), lVar4 != 0) {
          iVar2 = FUN_140d35aa0(local_28,local_58);
          if ((iVar2 == 0) || (lVar4 = FUN_140d354c0(local_58), lVar4 == 0)) {
            *param_1 = 0x32;
            FUN_140c6c4e0(0x10,0,0x7f,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                          ,0x179);
            FUN_140c55d60(local_68);
            FUN_140c56ac0(local_70);
            return 0;
          }
          uVar5 = FUN_140c55c70(local_70);
          lVar4 = FUN_140c560a0(uVar5);
          if (lVar4 == 0) {
            uVar5 = FUN_140c727a0(local_48,local_58);
            FUN_140c57e10(local_68,uVar5);
            FUN_140c55d60(local_48);
            cVar1 = FUN_140c56050(local_68);
            if (cVar1 == '\0') {
              *param_1 = 0x32;
              FUN_140c55d60(local_68);
              FUN_140c56ac0(local_70);
              return 0;
            }
            if (param_4 != 0) {
              local_40 = FUN_140d354c0(local_58);
              uVar5 = FUN_140d354a0(local_58);
              FUN_140c7e500(uVar5,local_40,param_4);
            }
          }
          uVar5 = FUN_140c75ed0(local_58,param_6);
          FUN_140c55e40(local_60,uVar5);
          cVar1 = FUN_140c56050(local_60);
          if (cVar1 == '\0') {
LAB_140c72246:
            *param_1 = 0x50;
            FUN_140c5ccf0(local_60);
            FUN_140c55d60(local_68);
            FUN_140c56ac0(local_70);
            return 0;
          }
          local_38 = local_18;
          uVar5 = FUN_140c55cd0(local_60);
          local_30 = FUN_140c55e70(local_38,uVar5);
          uVar5 = FUN_140c55c70(local_70);
          cVar1 = FUN_140c5cfd0(uVar5,local_30);
          if (cVar1 == '\0') goto LAB_140c72246;
          FUN_140c5ccf0(local_60);
        }
        uVar5 = FUN_140c55cd0(local_70);
        FUN_140c5d1b0(param_2,uVar5);
        uVar5 = FUN_140c55cd0(local_68);
        FUN_140c57e10(param_3,uVar5);
        FUN_140c55d60(local_68);
        FUN_140c56ac0(local_70);
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}


/* address=140c722f0 name=FUN_140c722f0 */

ulonglong FUN_140c722f0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong local_90;
  undefined local_70 [48];
  undefined local_40 [64];
  
  cVar1 = FUN_140c71ef0(param_1);
  if (cVar1 == '\0') {
    iVar2 = FUN_140d38180(param_2,0);
    uVar3 = (ulonglong)(iVar2 != 0);
  }
  else {
    iVar2 = FUN_140d37e10(param_2,local_70);
    if (iVar2 == 0) {
      uVar3 = FUN_140c6c4e0(0x10,0,0x44,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                            ,0x19f);
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else {
      lVar4 = FUN_140c55c70(*(longlong *)(param_1 + 8) + 0x20);
      uVar5 = FUN_140c55c70(lVar4 + 8);
      for (local_90 = 0; uVar3 = FUN_140c560a0(uVar5), local_90 < uVar3; local_90 = local_90 + 1) {
        uVar6 = FUN_140c560c0(uVar5,local_90);
        iVar2 = FUN_140d37e10(local_70,local_40);
        if (iVar2 == 0) {
LAB_140c7243f:
          uVar3 = FUN_140c6c4e0(0x10,0,0x44,
                                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                                ,0x1ab);
          return uVar3 & 0xffffffffffffff00;
        }
        uVar7 = FUN_140c760d0(uVar6);
        uVar6 = FUN_140c760b0(uVar6);
        iVar2 = FUN_140d37f00(local_40,uVar6,uVar7);
        if ((iVar2 == 0) || (iVar2 = FUN_140d37900(local_70), iVar2 == 0)) goto LAB_140c7243f;
      }
      iVar2 = FUN_140d37900(param_2);
      uVar3 = (ulonglong)(iVar2 != 0);
    }
  }
  return uVar3;
}


/* address=140c724a0 name=FUN_140c724a0 */

undefined8 FUN_140c724a0(undefined *param_1,undefined4 param_2)

{
  char cVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *puVar6;
  int local_a8 [2];
  wchar_t *local_a0 [2];
  wchar_t local_90 [8];
  wchar_t *local_80 [2];
  wchar_t *local_70 [2];
  wchar_t *local_60 [2];
  wchar_t *local_50 [2];
  undefined local_40 [16];
  wchar_t local_30 [16];
  
  puVar6 = local_40;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_1;
    param_1 = param_1 + 1;
    puVar6 = puVar6 + 1;
  }
  cVar1 = FUN_140c74570(local_40);
  if ((((cVar1 == '\0') || (uVar2 = wcstoul(local_90,(wchar_t **)0x0,0x20000010), uVar2 == 0)) ||
      (iVar3 = FUN_140d36170(local_90,0,0,0x80000001), iVar3 == 0)) ||
     ((iVar3 = FUN_140d36170(local_90,0,0,0x80000002), iVar3 == 0 ||
      (iVar3 = FUN_140d36170(local_90,local_30,local_a8,0xa0000003), iVar3 == 0)))) {
    FUN_140c6c4e0(0x10,0,0x110,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                  ,0x22d);
    uVar4 = 0;
  }
  else if (local_a8[0] == 0) {
    uVar4 = 1;
  }
  else {
    uVar2 = wcstoul(local_30,local_80,0x20000010);
    if (uVar2 == 0) {
      FUN_140c6c4e0(0x10,0,0x110,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                    ,0x237);
      uVar4 = 0;
    }
    else {
      do {
        do {
          lVar5 = FUN_140d354c0(local_80);
          if (lVar5 == 0) {
            return 1;
          }
          uVar2 = wcstoul((wchar_t *)local_80,local_a0,0x20000010);
          if ((((uVar2 == 0) || (uVar2 = wcstoul((wchar_t *)local_a0,local_70,6), uVar2 == 0)) ||
              ((iVar3 = FUN_140d35ce0(local_a0), iVar3 != 0 &&
               (uVar2 = wcstoul((wchar_t *)local_a0,(wchar_t **)0x0,1), uVar2 == 0)))) ||
             ((uVar2 = wcstoul((wchar_t *)local_a0,local_60,4), uVar2 == 0 ||
              (lVar5 = FUN_140d354c0(local_a0), lVar5 != 0)))) {
            FUN_140c6c4e0(0x10,0,0x110,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                          ,0x243);
            return 0;
          }
          lVar5 = FUN_140d354c0(local_70);
        } while (lVar5 != 3);
        uVar4 = FUN_140d354a0(local_70);
        iVar3 = FUN_140c71e60(uVar4,&DAT_140fd868c,3);
      } while (iVar3 != 0);
      uVar2 = wcstoul((wchar_t *)local_60,local_50,3);
      if ((uVar2 == 0) || (lVar5 = FUN_140d354c0(local_60), lVar5 != 0)) {
        FUN_140c6c4e0(0x10,0,0x110,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                      ,0x251);
        uVar4 = 0;
      }
      else {
        iVar3 = FUN_140d36440(local_50);
        if (iVar3 == 0) {
          FUN_140c6c4e0(0x10,0,0x110,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                        ,600);
          uVar4 = 0;
        }
        else {
          iVar3 = FUN_140d364e0(local_50,param_2);
          if (iVar3 == 0) {
            FUN_140c6c4e0(0x10,0,0x12e,
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


/* address=140c727a0 name=FUN_140c727a0 */

undefined8 FUN_140c727a0(undefined8 param_1,undefined *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined local_48 [8];
  undefined local_40 [16];
  undefined local_30 [32];
  
  puVar4 = local_40;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  cVar1 = FUN_140c74570(local_40,local_30);
  if (cVar1 == '\0') {
    FUN_140c6c4e0(0x10,0,0x110,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                  ,0x1e3);
    FUN_140c5cfa0(param_1,0);
  }
  else {
    uVar2 = FUN_140d5a510(local_30);
    uVar2 = FUN_140c55e40(local_48,uVar2);
    FUN_140c55e70(param_1,uVar2);
    FUN_140c55d60(local_48);
  }
  return param_1;
}


/* address=140c72860 name=FUN_140c72860 */

undefined8 FUN_140c72860(undefined8 param_1,longlong param_2,undefined *param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined local_68 [8];
  undefined local_60 [8];
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38 [16];
  undefined local_28 [8];
  undefined local_20 [32];
  
  lVar3 = FUN_140c55c70(param_2 + 0x68);
  local_58 = *(undefined8 *)(lVar3 + 0x200);
  uVar4 = FUN_140c56020();
  FUN_140c55e40(local_68,uVar4);
  cVar1 = FUN_140c56050(local_68);
  if (cVar1 == '\0') {
    *param_3 = 0x50;
    FUN_140c5cfa0(param_1,0);
    FUN_140c56ac0(local_68);
  }
  else {
    iVar2 = FUN_140d35a70(param_4,local_38);
    if (iVar2 == 0) {
      *param_3 = 0x32;
      FUN_140c6c4e0(0x10,0,0xa2,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                    ,0x276);
      FUN_140c5cfa0(param_1,0);
      FUN_140c56ac0(local_68);
    }
    else {
      while (lVar3 = FUN_140d354c0(local_38), lVar3 != 0) {
        iVar2 = FUN_140d35a70(local_38,local_20);
        if (iVar2 == 0) {
          *param_3 = 0x32;
          FUN_140c6c4e0(0x10,0,0x7b,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                        ,0x27e);
          FUN_140c5cfa0(param_1,0);
          FUN_140c56ac0(local_68);
          return param_1;
        }
        uVar4 = FUN_140c75ed0(local_20,local_58);
        FUN_140c55e40(local_60,uVar4);
        cVar1 = FUN_140c56050(local_60);
        if (cVar1 == '\0') {
LAB_140c72a45:
          *param_3 = 0x50;
          FUN_140c5cfa0(param_1,0);
          FUN_140c5ccf0(local_60);
          FUN_140c56ac0(local_68);
          return param_1;
        }
        local_50 = local_28;
        uVar4 = FUN_140c55cd0(local_60);
        local_48 = FUN_140c55e70(local_50,uVar4);
        uVar4 = FUN_140c55c70(local_68);
        cVar1 = FUN_140c5cfd0(uVar4);
        if (cVar1 == '\0') goto LAB_140c72a45;
        FUN_140c5ccf0(local_60);
      }
      local_40 = FUN_140c55c70(local_68);
      lVar3 = FUN_140c55c70(param_2 + 0x68);
      cVar1 = (***(code ***)(lVar3 + 8))(local_40);
      if (cVar1 == '\0') {
        *param_3 = 0x32;
        FUN_140c6c4e0(0x10,0,0x89,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                      ,0x28d);
        FUN_140c5cfa0(param_1,0);
        FUN_140c56ac0(local_68);
      }
      else {
        FUN_140c55e70(param_1,local_68);
        FUN_140c56ac0(local_68);
      }
    }
  }
  return param_1;
}


/* address=140c72b50 name=FUN_140c72b50 */

bool FUN_140c72b50(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = FUN_140c55c70(param_1 + 10);
  if (lVar1 == 0) {
    lVar1 = FUN_140c55c70(*param_1 + 0x68);
    lVar1 = FUN_140c55c70(lVar1 + 200);
  }
  if (lVar1 == 0) {
    bVar2 = false;
  }
  else {
    lVar1 = FUN_140c560a0(lVar1);
    bVar2 = lVar1 != 0;
  }
  return bVar2;
}


/* address=140c72be0 name=FUN_140c72be0 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_140c72be0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  longlong local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined local_b0 [16];
  undefined local_a0 [24];
  undefined local_88 [16];
  undefined local_78 [48];
  undefined local_48 [56];
  
  uVar3 = FUN_140d37de0(param_2,local_78);
  if ((int)uVar3 == 0) {
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    local_d0 = FUN_140c55c70(param_1[1] + 0x50);
    if (local_d0 == 0) {
      lVar4 = FUN_140c55c70(*param_1 + 0x68);
      local_d0 = FUN_140c55c70(lVar4 + 200);
    }
    if (local_d0 == 0) {
      iVar2 = FUN_140d37900(param_2);
      uVar3 = (ulonglong)(iVar2 != 0);
    }
    else {
      local_c8 = &local_d0;
      FUN_140c5d040(local_b0,local_d0);
      FUN_140c5d170(local_a0,*local_c8);
      while( true ) {
        puVar6 = local_a0;
        puVar7 = local_88;
        for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        cVar1 = FUN_140c5d0c0(local_b0,local_88);
        if (cVar1 == '\0') {
          iVar2 = FUN_140d37900(param_2);
          return (ulonglong)(iVar2 != 0);
        }
        local_c0 = FUN_140c5d120(local_b0);
        uVar3 = FUN_140d37de0(local_78,local_48);
        if ((int)uVar3 == 0) break;
        local_b8 = FUN_140c760d0(local_c0);
        uVar5 = FUN_140c760b0(local_c0);
        uVar3 = FUN_140d37f00(local_48,uVar5,local_b8);
        if ((int)uVar3 == 0) break;
        FUN_140c5d150(local_b0);
      }
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
  }
  return uVar3;
}


/* address=140c72da0 name=FUN_140c72da0 */

undefined8 FUN_140c72da0(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined2 local_28 [4];
  undefined8 local_20;
  longlong local_18;
  
  uVar2 = FUN_140c6de20(*param_1);
  if (0x303 < uVar2) {
    FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0x2ba);
  }
  local_18 = param_1[0xc0];
  uVar3 = FUN_140c70060(param_2);
  if ((*(uint *)(local_18 + 0x18) & uVar3) != 0) {
    iVar4 = FUN_140d31b10(param_2);
    if (iVar4 == 0x198) {
      local_20 = FUN_140d31de0(param_2);
      uVar6 = FUN_140cba680(local_20);
      uVar5 = FUN_140cb89c0(uVar6);
      cVar1 = FUN_140c76c10(local_28,uVar5);
      if (((cVar1 == '\0') || (cVar1 = FUN_140d27960(param_1,local_28[0]), cVar1 == '\0')) ||
         (iVar4 = FUN_140cbaa20(local_20), iVar4 != 4)) {
        FUN_140c6c4e0(0x10,0,0x6b,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                      ,0x2ca);
        return 0;
      }
    }
    return 1;
  }
  FUN_140c6c4e0(0x10,0,0xf1,
                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                ,0x2be);
  return 0;
}


/* address=140c72ee0 name=FUN_140c72ee0 */

undefined8 FUN_140c72ee0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined local_30 [8];
  undefined local_28 [8];
  undefined local_20 [32];
  
  lVar2 = *param_1;
  cVar1 = FUN_140c71ef0(param_1);
  if (cVar1 == '\0') {
    uVar3 = 1;
  }
  else {
    lVar2 = FUN_140c55c70(lVar2 + 0x68);
    cVar1 = (**(code **)(*(longlong *)(lVar2 + 8) + 0x70))(param_1);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      lVar2 = FUN_140c55c70(param_1[1] + 0x20);
      uVar3 = FUN_140c55c70(lVar2 + 8);
      uVar3 = FUN_140c560c0(uVar3,0);
      FUN_140c760f0(uVar3,local_20);
      cVar1 = FUN_140c73470(param_1);
      if (cVar1 == '\0') {
        uVar3 = FUN_140c727a0(local_28,local_20);
        FUN_140c57e10(param_1 + 0xba,uVar3);
        FUN_140c55d60(local_28);
      }
      else {
        lVar2 = FUN_140c55c70(param_1[1] + 0x20);
        lVar2 = FUN_140c55c70(lVar2 + 0x98);
        uVar3 = FUN_140c55ed0(local_30,lVar2 + 0x10);
        FUN_140c57e10(param_1 + 0xba,uVar3);
        FUN_140c55d60(local_30);
      }
      uVar3 = FUN_140c57ae0(param_1 + 0xba,0);
    }
  }
  return uVar3;
}


/* address=140c73030 name=FUN_140c73030 */

void FUN_140c73030(longlong param_1)

{
  FUN_140c55d60(param_1 + 0x10);
  FUN_140c5ccf0(param_1);
  return;
}


/* address=140c73070 name=FUN_140c73070 */

undefined8 FUN_140c73070(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined local_38 [8];
  undefined local_30 [8];
  undefined8 local_28;
  undefined local_20 [8];
  undefined8 local_18;
  undefined local_10 [16];
  
  uVar2 = FUN_140c74c70(local_30);
  FUN_140c55e70(local_38,uVar2);
  FUN_140c74b80(local_30);
  cVar1 = FUN_140c56050(local_38);
  if (cVar1 == '\0') {
    FUN_140c5cfa0(param_2,0);
    FUN_140c74b80(local_38);
  }
  else {
    local_28 = FUN_140c63280(local_20,param_1);
    uVar2 = FUN_140c55c70(local_38);
    FUN_140c635a0(uVar2,local_28);
    FUN_140c5ccf0(local_20);
    lVar3 = FUN_140c55c70(local_38);
    *(undefined2 *)(lVar3 + 8) = *(undefined2 *)(param_1 + 8);
    local_18 = FUN_140c55ed0(local_10,param_1 + 0x10);
    lVar3 = FUN_140c55c70(local_38);
    FUN_140c57e10(lVar3 + 0x10,local_18);
    FUN_140c55d60(local_10);
    FUN_140c55e70(param_2,local_38);
    FUN_140c74b80(local_38);
  }
  return param_2;
}


/* address=140c731a0 name=FUN_140c731a0 */

undefined8 FUN_140c731a0(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined local_78 [8];
  undefined local_70 [8];
  undefined local_68 [16];
  undefined local_58 [8];
  undefined local_50 [8];
  undefined8 local_48;
  undefined local_40 [8];
  undefined8 local_38;
  undefined local_30 [16];
  undefined local_20 [32];
  
  uVar3 = FUN_140c74c70(local_50);
  FUN_140c55e70(local_78,uVar3);
  FUN_140c74b80(local_50);
  cVar1 = FUN_140c56050(local_78);
  if (cVar1 == '\0') {
    *param_3 = 0x50;
    FUN_140c5cfa0(param_1,0);
    FUN_140c74b80(local_78);
  }
  else {
    local_48 = FUN_140c5cc90(local_40,param_2);
    uVar3 = FUN_140c55c70(local_78);
    FUN_140c635a0(uVar3,local_48);
    FUN_140c5ccf0(local_40);
    uVar3 = FUN_140c55c70(local_78);
    uVar3 = FUN_140c55c70(uVar3);
    FUN_140c760f0(uVar3,local_68);
    iVar2 = FUN_140d35800(local_68,local_58);
    if (iVar2 != 0) {
      lVar4 = FUN_140c55c70(local_78);
      iVar2 = FUN_140d35710(local_68,lVar4 + 8);
      if ((((iVar2 != 0) && (iVar2 = FUN_140d35aa0(local_68,local_30), iVar2 != 0)) &&
          (iVar2 = FUN_140d35710(local_68,local_70), iVar2 != 0)) &&
         ((iVar2 = FUN_140d35a70(local_68,local_20), iVar2 != 0 &&
          (lVar4 = FUN_140d354c0(local_68), lVar4 == 0)))) {
        local_38 = FUN_140d5a510(local_30);
        lVar4 = FUN_140c55c70(local_78);
        FUN_140c55df0(lVar4 + 0x10,local_38);
        lVar4 = FUN_140c55c70(local_78);
        cVar1 = operator==<>(lVar4 + 0x10,0);
        if (cVar1 != '\0') {
          FUN_140c6c4e0(0x10,0,0x89,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                        ,0x316);
          *param_3 = 0x32;
          FUN_140c5cfa0(param_1,0);
          FUN_140c74b80(local_78);
          return param_1;
        }
        FUN_140c55e70(param_1,local_78);
        FUN_140c74b80(local_78);
        return param_1;
      }
    }
    FUN_140c6c4e0(0x10,0,0x89,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                  ,0x30f);
    *param_3 = 0x32;
    FUN_140c5cfa0(param_1,0);
    FUN_140c74b80(local_78);
  }
  return param_1;
}


/* address=140c73420 name=FUN_140c73420 */

longlong FUN_140c73420(longlong param_1)

{
  FUN_140c57b60(param_1);
  *(undefined2 *)(param_1 + 8) = 0;
  FUN_140c57b60(param_1 + 0x10);
  return param_1;
}


/* address=140c73470 name=FUN_140c73470 */

undefined FUN_140c73470(longlong *param_1)

{
  char cVar1;
  
  if ((((*(byte *)(*param_1 + 0xa4) & 1) != 0) && ((*(byte *)((longlong)param_1 + 0x621) & 1) != 0))
     && (cVar1 = FUN_140c74680(param_1), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}


/* address=140c734e0 name=FUN_140c734e0 */

longlong FUN_140c734e0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined *puVar2;
  
  FUN_140c57b60(param_1);
  FUN_140c57b60(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  FUN_140c56440(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_140c57b60(param_1 + 0x60);
  FUN_140c57b60(param_1 + 0x68);
  *(undefined *)(param_1 + 0x70) = 0;
  puVar2 = (undefined *)(param_1 + 0x71);
  for (lVar1 = 0x20; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_140c5cfa0(param_1 + 0x98,0);
  FUN_140c5cfa0(param_1 + 0xa0,0);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  return param_1;
}


/* address=140c73620 name=FUN_140c73620 */

void FUN_140c73620(longlong param_1)

{
  FUN_140c73b90(param_1);
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x10))(param_1);
  FUN_140c55d60(param_1 + 0xa0);
  FUN_140c74b80(param_1 + 0x98);
  FUN_140c5ccf0(param_1 + 0x68);
  FUN_140c5ccf0(param_1 + 0x60);
  FUN_140c564c0(param_1 + 0x38);
  FUN_140c56ac0(param_1 + 8);
  FUN_140c55d60(param_1);
  return;
}


/* address=140c736d0 name=FUN_140c736d0 */

undefined8 FUN_140c736d0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined local_b8 [8];
  undefined local_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined local_98 [8];
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined local_78 [8];
  undefined8 local_70;
  undefined local_68 [8];
  longlong local_60;
  undefined8 local_58;
  undefined local_50 [8];
  undefined8 local_48;
  undefined local_40 [8];
  undefined local_38 [16];
  undefined local_28 [24];
  
  uVar2 = FUN_140c57be0(local_b0,param_2 + 0x30);
  FUN_140c55e70(local_b8,uVar2);
  FUN_140c56ef0(local_b0);
  cVar1 = FUN_140c56050(local_b8);
  if (cVar1 == '\0') {
    FUN_140c5cfa0(param_1,0);
    FUN_140c56ef0(local_b8);
  }
  else {
    cVar1 = FUN_140c56050(param_2 + 8);
    if (cVar1 != '\0') {
      uVar2 = FUN_140c55c70(param_2 + 8);
      local_a8 = FUN_140c5cdc0(uVar2,&LAB_140c74090,FUN_140c75f60);
      lVar3 = FUN_140c55c70(local_b8);
      FUN_140c56b00(lVar3 + 8,local_a8);
      lVar3 = FUN_140c55c70(local_b8);
      cVar1 = FUN_140c56050(lVar3 + 8);
      if (cVar1 == '\0') {
        FUN_140c5cfa0(param_1,0);
        FUN_140c56ef0(local_b8);
        return param_1;
      }
    }
    local_a0 = FUN_140c55ed0(local_98,param_2);
    uVar2 = FUN_140c55c70(local_b8);
    FUN_140c57e10(uVar2,local_a0);
    FUN_140c55d60(local_98);
    lVar3 = FUN_140c55c70(local_b8);
    *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    local_90 = local_28;
    puVar4 = (undefined *)FUN_140c57dd0(local_90,param_2 + 0x38);
    puVar5 = local_38;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    lVar3 = FUN_140c55c70(local_b8);
    cVar1 = FUN_140c569c0(lVar3 + 0x38,local_38);
    if (cVar1 == '\0') {
      FUN_140c5cfa0(param_1,0);
      FUN_140c56ef0(local_b8);
    }
    else {
      lVar3 = FUN_140c55c70(local_b8);
      *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(param_2 + 0x48);
      lVar3 = FUN_140c55c70(local_b8);
      *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)(param_2 + 0x50);
      local_88 = FUN_140c55c70(local_b8);
      lVar3 = FUN_140c55c70(local_b8);
      (**(code **)(*(longlong *)(lVar3 + 0x30) + 0x18))(local_88,param_2);
      local_80 = FUN_140c63280(local_78,param_2 + 0x60);
      lVar3 = FUN_140c55c70(local_b8);
      FUN_140c635a0(lVar3 + 0x60,local_80);
      FUN_140c5ccf0(local_78);
      local_70 = FUN_140c63280(local_68,param_2 + 0x68);
      lVar3 = FUN_140c55c70(local_b8);
      FUN_140c635a0(lVar3 + 0x68,local_70);
      FUN_140c5ccf0(local_68);
      lVar3 = FUN_140c55c70(local_b8);
      *(undefined *)(lVar3 + 0x70) = *(undefined *)(param_2 + 0x70);
      local_60 = param_2 + 0x71;
      lVar3 = FUN_140c55c70(local_b8);
      FUN_140c71ea0(lVar3 + 0x71,local_60,0x20);
      cVar1 = FUN_140c56050(param_2 + 0x98);
      if (cVar1 != '\0') {
        uVar2 = FUN_140c55c70(param_2 + 0x98);
        local_58 = FUN_140c73070(uVar2,local_50);
        lVar3 = FUN_140c55c70(local_b8);
        FUN_140c74c10(lVar3 + 0x98,local_58);
        FUN_140c74b80(local_50);
        lVar3 = FUN_140c55c70(local_b8);
        cVar1 = FUN_140c56050(lVar3 + 0x98);
        if (cVar1 == '\0') {
          FUN_140c5cfa0(param_1,0);
          FUN_140c56ef0(local_b8);
          return param_1;
        }
      }
      local_48 = FUN_140c55ed0(local_40,param_2 + 0xa0);
      lVar3 = FUN_140c55c70(local_b8);
      FUN_140c57e10(lVar3 + 0xa0,local_48);
      FUN_140c55d60(local_40);
      lVar3 = FUN_140c55c70(local_b8);
      *(undefined8 *)(lVar3 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
      FUN_140c55e70(param_1,local_b8);
      FUN_140c56ef0(local_b8);
    }
  }
  return param_1;
}


/* address=140c73b90 name=FUN_140c73b90 */

void FUN_140c73b90(longlong param_1)

{
  if (param_1 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x30) + 8))(param_1);
    FUN_140c56b00(param_1 + 8,0);
    FUN_140c55df0(param_1,0);
    *(undefined8 *)(param_1 + 0x28) = 0;
    FUN_140c74bc0(param_1 + 0x98,0);
    FUN_140c55df0(param_1 + 0xa0,0);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  return;
}


/* address=140c73c30 name=FUN_140c73c30 */

undefined FUN_140c73c30(longlong param_1,
                       unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                       *param_2)

{
  undefined uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  _Facet_base *p_Var6;
  undefined local_18 [24];
  
  uVar4 = FUN_140c55c70(param_1);
  uVar5 = FUN_140c55c70(param_2);
  iVar3 = FUN_140c74100(uVar5,uVar4);
  if (iVar3 == 0) {
    FUN_140c5ccf0(param_2);
    uVar1 = 0;
  }
  else {
    if (iVar3 == 2) {
      FUN_140c55df0(param_1,0);
    }
    (**(code **)(*(longlong *)(param_1 + 0x30) + 0x28))(param_1);
    cVar2 = FUN_140c57ae0(param_1 + 8,0);
    if (cVar2 == '\0') {
      uVar4 = FUN_140c56020();
      FUN_140c56b00(param_1 + 8,uVar4);
      cVar2 = operator==<>(param_1 + 8,0);
      if (cVar2 == '\0') {
        uVar4 = FUN_140c55cd0(param_2);
        uVar4 = FUN_140c55e70(local_18,uVar4);
        uVar5 = FUN_140c55c70(param_1 + 8);
        cVar2 = FUN_140c5cfd0(uVar5,uVar4);
        if (cVar2 == '\0') {
          FUN_140c56b00(param_1 + 8,0);
          FUN_140c5ccf0(param_2);
          uVar1 = 0;
        }
        else {
          FUN_140c5ccf0(param_2);
          uVar1 = 1;
        }
      }
      else {
        FUN_140c5ccf0(param_2);
        uVar1 = 0;
      }
    }
    else {
      uVar4 = FUN_140c55c70(param_1 + 8);
      uVar4 = FUN_140c560c0(uVar4,0);
      FUN_140c75f60(uVar4);
      p_Var6 = std::
               unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
               ::release(param_2);
      uVar4 = FUN_140c55c70(param_1 + 8);
      FUN_140c5ea40(uVar4,0,p_Var6);
      FUN_140c5ccf0(param_2);
      uVar1 = 1;
    }
  }
  return uVar1;
}


/* address=140c73e20 name=FUN_140c73e20 */

undefined8 FUN_140c73e20(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_140d317d0(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_140d31820(param_1,param_2);
    if (iVar1 == -2) {
      FUN_140c6c4e0(0xb,0,0x80,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                    ,0x1fc);
      uVar2 = 0;
    }
    else if (iVar1 == -1) {
      FUN_140c6c4e0(0xb,0,0x73,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                    ,0x1f9);
      uVar2 = 0;
    }
    else if (iVar1 == 0) {
      FUN_140c6c4e0(0xb,0,0x74,
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


/* address=140c73f20 name=FUN_140c73f20 */

ulonglong FUN_140c73f20(longlong param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined local_30 [8];
  undefined local_28 [8];
  undefined local_20 [32];
  
  if (param_2 == 0) {
    uVar3 = FUN_140c6c4e0(0x10,0,0xb5,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                          ,0x206);
  }
  else {
    cVar1 = operator==<>(param_1 + 8,0);
    if (cVar1 == '\0') {
      uVar4 = FUN_140c55c70(param_1 + 8);
      lVar5 = FUN_140c560c0(uVar4,0);
      if (lVar5 != 0) {
        uVar4 = FUN_140c55c70(param_1 + 8);
        uVar4 = FUN_140c560c0(uVar4,0);
        FUN_140c760f0(uVar4,local_20);
        uVar4 = FUN_140c727a0(local_28,local_20);
        FUN_140c55e70(local_30,uVar4);
        FUN_140c55d60(local_28);
        cVar1 = FUN_140c56050(local_30);
        if (cVar1 == '\0') {
          FUN_140c6c4e0(0xb,0,0x80,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                        ,0x215);
          FUN_140c55d60(local_30);
          return 0;
        }
        uVar4 = FUN_140c55c70(local_30);
        bVar2 = FUN_140c73e20(uVar4,param_2);
        FUN_140c55d60(local_30);
        return (ulonglong)bVar2;
      }
    }
    uVar3 = FUN_140c6c4e0(0x10,0,0xad,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                          ,0x20c);
  }
  return uVar3 & 0xffffffffffffff00;
}


/* address=140c740c0 name=FUN_140c740c0 */

void FUN_140c740c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}


/* address=140c74100 name=FUN_140c74100 */

undefined4 FUN_140c74100(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined local_30 [8];
  undefined local_28 [8];
  undefined local_20 [32];
  
  FUN_140c760f0(param_1,local_20);
  uVar4 = FUN_140c727a0(local_28,local_20);
  FUN_140c55e70(local_30,uVar4);
  FUN_140c55d60(local_28);
  cVar1 = FUN_140c56050(local_30);
  if (cVar1 == '\0') {
    FUN_140c6c4e0(0x10,0,0x89,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                  ,0xec);
    FUN_140c55d60(local_30);
    uVar2 = 0;
  }
  else {
    uVar4 = FUN_140c55c70(local_30);
    uVar2 = FUN_140d31b10(uVar4);
    cVar1 = FUN_140c7cb20(uVar2);
    if (cVar1 == '\0') {
      FUN_140c6c4e0(0x10,0,0xe4,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                    ,0xf1);
      FUN_140c55d60(local_30);
      uVar2 = 0;
    }
    else {
      uVar4 = FUN_140c55c70(local_30);
      iVar3 = FUN_140d31b10(uVar4);
      if ((iVar3 == 0x198) && (cVar1 = FUN_140c724a0(local_20,0), cVar1 == '\0')) {
        FUN_140c6c4e0(0x10,0,0xe4,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                      ,0xf9);
        FUN_140c55d60(local_30);
        return 0;
      }
      if (param_2 != 0) {
        uVar4 = FUN_140c55c70(local_30);
        cVar1 = FUN_140c73e20(uVar4,param_2);
        if (cVar1 == '\0') {
          FUN_140c6c180();
          FUN_140c55d60(local_30);
          return 2;
        }
      }
      FUN_140c55d60(local_30);
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=140c742d0 name=FUN_140c742d0 */

undefined4
FUN_140c742d0(longlong param_1,undefined8 *param_2,ulonglong param_3,longlong param_4,
             longlong param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined local_60 [8];
  int local_58;
  uint local_54;
  ulonglong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined local_28 [8];
  undefined local_20 [8];
  undefined local_18 [24];
  
  if ((param_3 == 0) || ((param_4 == 0 && (param_5 == 0)))) {
    FUN_140c6c4e0(0x10,0,0x43,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                  ,0x10c);
    local_48 = 0;
  }
  else if ((param_4 == 0) || (param_5 == 0)) {
    local_58 = FUN_140c74100(*param_2,param_4);
    if (local_58 == 0) {
      local_48 = 0;
    }
    else if (local_58 == 2) {
      FUN_140c6c4e0(0x10,0,0x112,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                    ,0x119);
      local_48 = 0;
    }
    else {
      uVar2 = FUN_140c56020();
      FUN_140c55e40(local_60,uVar2);
      cVar1 = FUN_140c56050(local_60);
      if (cVar1 == '\0') {
        local_48 = 0;
        FUN_140c56ac0(local_60);
      }
      else {
        for (local_50 = 0; local_50 < param_3; local_50 = local_50 + 1) {
          local_38 = local_18;
          uVar2 = FUN_140c5cc90(local_28,param_2[local_50]);
          local_30 = FUN_140c55e70(local_38,uVar2);
          uVar2 = FUN_140c55c70(local_60);
          cVar1 = FUN_140c5cfd0(uVar2,local_30);
          local_54 = (uint)(cVar1 == '\0');
          FUN_140c5ccf0(local_28);
          if (cVar1 == '\0') {
            local_44 = 0;
            FUN_140c56ac0(local_60);
            return local_44;
          }
        }
        uVar2 = FUN_140c55d00(local_20,param_4);
        FUN_140c57e10(param_1,uVar2);
        FUN_140c55d60(local_20);
        *(longlong *)(param_1 + 0x28) = param_5;
        uVar2 = FUN_140c55cd0(local_60);
        FUN_140c5d1b0(param_1 + 8,uVar2);
        local_40 = 1;
        FUN_140c56ac0(local_60);
        local_48 = local_40;
      }
    }
  }
  else {
    FUN_140c6c4e0(0x10,0,0x113,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                  ,0x111);
    local_48 = 0;
  }
  return local_48;
}


/* address=140c74570 name=FUN_140c74570 */

ulonglong FUN_140c74570(undefined *param_1,wchar_t **param_2)

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
  wchar_t local_38 [8];
  wchar_t *local_28 [3];
  
  pwVar4 = local_38;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined *)pwVar4 = *param_1;
    param_1 = param_1 + 1;
    pwVar4 = (wchar_t *)((longlong)pwVar4 + 1);
  }
  uVar1 = wcstoul(local_38,local_28,0x20000010);
  uVar2 = CONCAT44(extraout_var,uVar1);
  if ((uVar1 != 0) && (uVar2 = FUN_140d354c0(local_38), uVar2 == 0)) {
    uVar1 = wcstoul((wchar_t *)local_28,param_2,0x20000010);
    uVar2 = CONCAT44(extraout_var_00,uVar1);
    if ((uVar1 != 0) && (uVar2 = FUN_140d36170(param_2,0,0,0xa0000000), (int)uVar2 != 0)) {
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


/* address=140c74680 name=FUN_140c74680 */

ulonglong FUN_140c74680(longlong *param_1)

{
  char cVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  short *psVar7;
  short *local_38;
  undefined local_18 [24];
  
  uVar3 = FUN_140c55c70(param_1[1] + 0x20);
  cVar1 = operator==<>(uVar3 + 0x98,0);
  uVar5 = 0;
  if (cVar1 == '\0') {
    uVar4 = FUN_140c55c70(uVar3 + 0x98);
    cVar1 = operator==<>(uVar4,0);
    uVar5 = 0;
    if ((cVar1 == '\0') &&
       ((cVar1 = operator==<>(uVar3 + 0xa0,0), cVar1 == '\0' ||
        (uVar5 = uVar3, *(longlong *)(uVar3 + 0xa8) != 0)))) {
      lVar6 = FUN_140c55c70(uVar3 + 0x98);
      if ((*(byte *)(*(longlong *)(*param_1 + 0x30) + 0xdc) >> 1 & 1) == 0) {
        FID_conflict__assert((wchar_t *)"h",(wchar_t *)"D",0x32c);
      }
      uVar2 = FUN_140c6de20(*param_1);
      if (uVar2 < 0x304) {
        return (ulonglong)(byte)(uVar2 >> 8) << 8;
      }
      FUN_140c57dd0(local_18,param_1 + 0x53);
      local_38 = (short *)FUN_140c55c70(local_18);
      psVar7 = (short *)FUN_140c6e1f0(local_18);
      while( true ) {
        if (local_38 == psVar7) {
          return (ulonglong)psVar7 & 0xffffffffffffff00;
        }
        if (*(short *)(lVar6 + 8) == *local_38) break;
        local_38 = local_38 + 1;
      }
      return CONCAT71((uint7)(byte)((ushort)*(short *)(lVar6 + 8) >> 8),1);
    }
  }
  return uVar5 & 0xffffffffffffff00;
}


/* address=140c74820 name=FUN_140c74820 */

undefined4 FUN_140c74820(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined local_28 [8];
  undefined local_20 [8];
  undefined local_18 [24];
  
  if ((param_3 == 0) && (param_4 == 0)) {
    FUN_140c6c4e0(0x10,0,0x43,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                  ,0x346);
    local_34 = 0;
  }
  else if ((param_3 == 0) || (param_4 == 0)) {
    uVar2 = FUN_140c731a0(local_20,param_2,local_38);
    FUN_140c55e70(local_28,uVar2);
    FUN_140c74b80(local_20);
    cVar1 = operator==<>(local_28,0);
    if (cVar1 == '\0') {
      if (param_3 != 0) {
        lVar3 = FUN_140c55c70(local_28);
        uVar2 = FUN_140c55c70(lVar3 + 0x10);
        cVar1 = FUN_140c73e20(uVar2,param_3);
        if (cVar1 == '\0') {
          FUN_140c6c4e0(0x10,0,0x112,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                        ,0x359);
          local_30 = 0;
          FUN_140c74b80(local_28);
          return local_30;
        }
      }
      uVar2 = FUN_140c55cd0(local_28);
      FUN_140c74c10(param_1 + 0x98,uVar2);
      uVar2 = FUN_140c55d00(local_18,param_3);
      FUN_140c57e10(param_1 + 0xa0,uVar2);
      FUN_140c55d60(local_18);
      *(longlong *)(param_1 + 0xa8) = param_4;
      local_2c = 1;
      FUN_140c74b80(local_28);
      local_34 = local_2c;
    }
    else {
      FUN_140c6c4e0(0x10,0,0x12d,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                    ,0x352);
      local_34 = 0;
      FUN_140c74b80(local_28);
    }
  }
  else {
    FUN_140c6c4e0(0x10,0,0x113,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                  ,0x34b);
    local_34 = 0;
  }
  return local_34;
}


/* address=140c74a30 name=FUN_140c74a30 */

undefined FUN_140c74a30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined local_20 [32];
  
  FUN_140d35430(local_20,param_2,param_3);
  cVar1 = FUN_140d26550(local_20);
  if (cVar1 == '\0') {
    FUN_140c6c4e0(0x10,0,0x10d,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                  ,0x3b2);
    uVar2 = 0;
  }
  else {
    uVar3 = FUN_140d354c0(local_20);
    uVar4 = FUN_140d354a0(local_20);
    uVar3 = FUN_140c75de0(uVar4,uVar3,0);
    FUN_140c63230(param_1 + 0x60,uVar3);
    uVar2 = FUN_140c57ae0(param_1 + 0x60,0);
  }
  return uVar2;
}


/* address=140c74af0 name=FUN_140c74af0 */

undefined8 FUN_140c74af0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140c660d0(0x18);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140c55bd0(0x18,lVar1);
    uVar2 = FUN_140c73420(uVar2);
  }
  return uVar2;
}


/* address=140c74b40 name=FUN_140c74b40 */

undefined8 FUN_140c74b40(undefined8 param_1,uint param_2)

{
  FUN_140c73030(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_140e18570(param_1,0x18);
  }
  return param_1;
}


/* address=140c74b80 name=FUN_140c74b80 */

void FUN_140c74b80(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140c55cd0(param_1);
    FUN_140c74cb0(uVar1,*param_1);
  }
  return;
}


/* address=140c74bc0 name=FUN_140c74bc0 */

void FUN_140c74bc0(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_140c55cd0(param_1);
    FUN_140c74cb0(uVar2,p_Var1);
  }
  return;
}


/* address=140c74c10 name=FUN_140c74c10 */

undefined8
FUN_140c74c10(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_140c74bc0(param_1,p_Var1);
  uVar2 = FUN_140c55cd0(param_2);
  FUN_140c55cd0(uVar2);
  FUN_140c55cd0(param_1);
  return param_1;
}


/* address=140c74c70 name=FUN_140c74c70 */

undefined8 FUN_140c74c70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_140c74af0();
  uVar1 = FUN_140c55e40(local_18,uVar1);
  FUN_140c55e70(param_1,uVar1);
  FUN_140c74b80(local_18);
  return param_1;
}


/* address=140c74cb0 name=FUN_140c74cb0 */

void FUN_140c74cb0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c74cd0(param_2);
  return;
}


/* address=140c74cd0 name=FUN_140c74cd0 */

void FUN_140c74cd0(undefined8 param_1)

{
  FUN_140c74cf0(param_1);
  return;
}


/* address=140c74cf0 name=FUN_140c74cf0 */

void FUN_140c74cf0(longlong param_1)

{
  if (param_1 != 0) {
    FUN_140c74b40(param_1,0);
    FUN_140c66200(param_1);
  }
  return;
}


/* address=140c74d20 name=FUN_140c74d20 */

longlong FUN_140c74d20(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140c660d0(0x28);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_140c75bf0(lVar1,0,0x28);
    uVar2 = FUN_140c660d0(DAT_140fd8690 << 3);
    *(undefined8 *)(lVar1 + 8) = uVar2;
    if (*(longlong *)(lVar1 + 8) == 0) {
      FUN_140c66200(lVar1);
      lVar1 = 0;
    }
    else {
      FUN_140c75bf0(*(undefined8 *)(lVar1 + 8),0,DAT_140fd8690 << 3);
      *(undefined8 *)(lVar1 + 0x20) = param_1;
      *(longlong *)(lVar1 + 0x18) = DAT_140fd8690;
    }
  }
  return lVar1;
}


/* address=140c74de0 name=FUN_140c74de0 */

void FUN_140c74de0(void)

{
  FUN_140c74d20(0);
  return;
}


/* address=140c74e00 name=FUN_140c74e00 */

undefined8 FUN_140c74e00(undefined8 *param_1)

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


/* address=140c74e20 name=FUN_140c74e20 */

void FUN_140c74e20(longlong *param_1)

{
  if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
    FUN_140c75bf0(param_1[1],0,*param_1 << 3);
    *param_1 = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}


/* address=140c74e80 name=FUN_140c74e80 */

undefined8 FUN_140c74e80(ulonglong *param_1,ulonglong param_2)

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


/* address=140c74ec0 name=FUN_140c74ec0 */

undefined8 FUN_140c74ec0(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

{
  if ((param_1 == (ulonglong *)0x0) || (*param_1 <= param_2)) {
    param_3 = 0;
  }
  else {
    *(undefined8 *)(param_1[1] + param_2 * 8) = param_3;
  }
  return param_3;
}


/* address=140c74f10 name=FUN_140c74f10 */

void FUN_140c74f10(longlong param_1)

{
  if (param_1 != 0) {
    FUN_140c66200(*(undefined8 *)(param_1 + 8));
    FUN_140c66200(param_1);
  }
  return;
}


/* address=140c74f50 name=FUN_140c74f50 */

void FUN_140c74f50(ulonglong *param_1,code *param_2,undefined8 param_3)

{
  ulonglong local_18;
  
  if (param_1 != (ulonglong *)0x0) {
    for (local_18 = 0; local_18 < *param_1; local_18 = local_18 + 1) {
      if (*(longlong *)(param_1[1] + local_18 * 8) != 0) {
        (*param_2)(param_3,*(undefined8 *)(param_1[1] + local_18 * 8));
      }
    }
    FUN_140c74f10(param_1);
  }
  return;
}


/* address=140c74fe0 name=FUN_140c74fe0 */

ulonglong FUN_140c74fe0(ulonglong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong local_28;
  ulonglong local_20;
  
  if (param_1 == (ulonglong *)0x0) {
    return 0;
  }
  if (param_1[3] <= *param_1 + 1) {
    local_28 = param_1[3] << 1;
    local_20 = param_1[3] << 4;
    if ((local_28 < param_1[3]) || (local_20 / 8 != local_28)) {
      local_28 = param_1[3] + 1;
      local_20 = local_28 * 8;
    }
    if ((local_28 < param_1[3]) || (local_20 / 8 != local_28)) {
      return 0;
    }
    uVar1 = FUN_140c662b0(param_1[1],local_20);
    if (uVar1 == 0) {
      return 0;
    }
    param_1[1] = uVar1;
    param_1[3] = local_28;
  }
  if (param_3 < *param_1) {
    FUN_140c75ba0(param_1[1] + 8 + param_3 * 8,param_1[1] + param_3 * 8,(*param_1 - param_3) * 8);
    *(undefined8 *)(param_1[1] + param_3 * 8) = param_2;
  }
  else {
    *(undefined8 *)(param_1[1] + *param_1 * 8) = param_2;
  }
  *param_1 = *param_1 + 1;
  *(undefined4 *)(param_1 + 2) = 0;
  return *param_1;
}


/* address=140c751c0 name=FUN_140c751c0 */

undefined8 FUN_140c751c0(ulonglong *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  if ((param_1 == (ulonglong *)0x0) || (*param_1 <= param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1[1] + param_2 * 8);
    if (param_2 != *param_1 - 1) {
      FUN_140c75ba0(param_1[1] + param_2 * 8,param_1[1] + 8 + param_2 * 8,
                    (*param_1 - param_2) * 8 + -8);
    }
    *param_1 = *param_1 - 1;
  }
  return uVar1;
}


/* address=140c75290 name=FUN_140c75290 */

undefined8 FUN_140c75290(ulonglong *param_1,longlong param_2)

{
  undefined8 uVar1;
  ulonglong local_18;
  
  if (param_1 != (ulonglong *)0x0) {
    for (local_18 = 0; local_18 < *param_1; local_18 = local_18 + 1) {
      if (*(longlong *)(param_1[1] + local_18 * 8) == param_2) {
        uVar1 = FUN_140c751c0(param_1,local_18);
        return uVar1;
      }
    }
  }
  return 0;
}


/* address=140c75310 name=FUN_140c75310 */

void FUN_140c75310(ulonglong *param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong local_18;
  ulonglong local_10;
  
  if (param_1 != (ulonglong *)0x0) {
    local_10 = 0;
    for (local_18 = 0; local_18 < *param_1; local_18 = local_18 + 1) {
      iVar1 = (*param_2)(param_3,*(undefined8 *)(param_1[1] + local_18 * 8),param_4);
      if (iVar1 == 0) {
        *(undefined8 *)(param_1[1] + local_10 * 8) = *(undefined8 *)(param_1[1] + local_18 * 8);
        local_10 = local_10 + 1;
      }
    }
    *param_1 = local_10;
  }
  return;
}


/* address=140c753e0 name=FUN_140c753e0 */

undefined8 FUN_140c753e0(ulonglong *param_1,ulonglong *param_2,longlong param_3,code *param_4)

{
  int iVar1;
  ulonglong uVar2;
  longlong local_res18;
  code *local_res20;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  if (param_1 != (ulonglong *)0x0) {
    if (param_1[4] == 0) {
      for (local_28 = 0; local_28 < *param_1; local_28 = local_28 + 1) {
        if (*(longlong *)(param_1[1] + local_28 * 8) == param_3) {
          if (param_2 != (ulonglong *)0x0) {
            *param_2 = local_28;
          }
          return 1;
        }
      }
    }
    else if (param_3 != 0) {
      local_res18 = param_3;
      local_res20 = param_4;
      iVar1 = FUN_140c75920(param_1);
      if (iVar1 == 0) {
        for (local_20 = 0; local_20 < *param_1; local_20 = local_20 + 1) {
          local_18 = *(undefined8 *)(param_1[1] + local_20 * 8);
          iVar1 = (*local_res20)(param_1[4],&local_res18,&local_18);
          if (iVar1 == 0) {
            if (param_2 != (ulonglong *)0x0) {
              *param_2 = local_20;
            }
            return 1;
          }
        }
      }
      else {
        local_30 = 0;
        uVar2 = *param_1;
        while (local_38 = uVar2, local_30 < local_38) {
          uVar2 = local_30 + ((local_38 - local_30) - 1) / 2;
          if ((uVar2 < local_30) || (local_38 <= uVar2)) {
            FID_conflict__assert((wchar_t *)s_l_14139f218,(wchar_t *)s_D_14139f150,0x128);
          }
          local_10[0] = *(undefined8 *)(param_1[1] + uVar2 * 8);
          iVar1 = (*local_res20)(param_1[4],&local_res18,local_10);
          if (iVar1 < 1) {
            if (-1 < iVar1) {
              if (local_38 - local_30 == 1) {
                if (param_2 != (ulonglong *)0x0) {
                  *param_2 = uVar2;
                }
                return 1;
              }
              if (local_38 <= uVar2 + 1) {
                FID_conflict__assert((wchar_t *)s_m_14139f318,(wchar_t *)s_D_14139f250,0x13a);
              }
              uVar2 = uVar2 + 1;
            }
          }
          else {
            local_30 = uVar2 + 1;
            uVar2 = local_38;
          }
        }
        if (local_30 != local_38) {
          FID_conflict__assert((wchar_t *)s_l_14139f408,(wchar_t *)s_D_14139f340,0x13f);
        }
      }
    }
  }
  return 0;
}


/* address=140c756c0 name=FUN_140c756c0 */

undefined8 FUN_140c756c0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140c751c0(param_1,0);
  }
  return uVar1;
}


/* address=140c75700 name=FUN_140c75700 */

void FUN_140c75700(undefined8 *param_1,undefined8 param_2)

{
  FUN_140c74fe0(param_1,param_2,*param_1);
  return;
}


/* address=140c75730 name=FUN_140c75730 */

undefined8 FUN_140c75730(longlong *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140c751c0(param_1,*param_1 + -1);
  }
  return uVar1;
}


/* address=140c75780 name=FUN_140c75780 */

longlong * FUN_140c75780(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = (longlong *)FUN_140c660d0(0x28);
    if (plVar1 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    else {
      FUN_140c75bf0(plVar1,0,0x28);
      lVar2 = FUN_140c660d0(param_1[3] << 3);
      plVar1[1] = lVar2;
      if (plVar1[1] == 0) {
        FUN_140c74f10(plVar1);
        plVar1 = (longlong *)0x0;
      }
      else {
        *plVar1 = *param_1;
        FUN_140c75b50(plVar1[1],param_1[1],*param_1 << 3);
        *(undefined4 *)(plVar1 + 2) = *(undefined4 *)(param_1 + 2);
        plVar1[3] = param_1[3];
        plVar1[4] = param_1[4];
      }
    }
  }
  return plVar1;
}


/* address=140c75880 name=FUN_140c75880 */

void FUN_140c75880(ulonglong *param_1,undefined8 param_2)

{
  undefined8 local_18;
  ulonglong local_10;
  
  if (((param_1 != (ulonglong *)0x0) && (param_1[4] != 0)) && (*(int *)(param_1 + 2) == 0)) {
    if (1 < *param_1) {
      local_10 = param_1[4];
      local_18 = param_2;
      FUN_140e141c0(param_1[1],*param_1,8,&LAB_140c75c60,&local_18);
    }
    *(undefined4 *)(param_1 + 2) = 1;
  }
  return;
}


/* address=140c75920 name=FUN_140c75920 */

undefined4 FUN_140c75920(ulonglong *param_1)

{
  undefined4 local_18;
  
  if (param_1 == (ulonglong *)0x0) {
    local_18 = 1;
  }
  else if ((*(int *)(param_1 + 2) == 0) && ((param_1[4] == 0 || (1 < *param_1)))) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}


/* address=140c75980 name=FUN_140c75980 */

undefined8 FUN_140c75980(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) != param_2) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(longlong *)(param_1 + 0x20) = param_2;
  return uVar1;
}


/* address=140c759e0 name=FUN_140c759e0 */

ulonglong *
FUN_140c759e0(undefined8 param_1,code *param_2,undefined8 param_3,code *param_4,undefined8 param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong local_20;
  ulonglong local_18;
  
  puVar1 = (ulonglong *)FUN_140c75780(param_1);
  if (puVar1 == (ulonglong *)0x0) {
    puVar1 = (ulonglong *)0x0;
  }
  else {
    for (local_20 = 0; local_20 < *puVar1; local_20 = local_20 + 1) {
      if (*(longlong *)(puVar1[1] + local_20 * 8) != 0) {
        uVar2 = (*param_2)(param_3,*(undefined8 *)(puVar1[1] + local_20 * 8));
        *(undefined8 *)(puVar1[1] + local_20 * 8) = uVar2;
        if (*(longlong *)(puVar1[1] + local_20 * 8) == 0) {
          for (local_18 = 0; local_18 < local_20; local_18 = local_18 + 1) {
            if (*(longlong *)(puVar1[1] + local_18 * 8) != 0) {
              (*param_4)(param_5,*(undefined8 *)(puVar1[1] + local_18 * 8));
            }
          }
          FUN_140c74f10(puVar1);
          return (ulonglong *)0x0;
        }
      }
    }
  }
  return puVar1;
}


/* address=140c75b50 name=FUN_140c75b50 */

undefined8 FUN_140c75b50(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140c75ba0 name=FUN_140c75ba0 */

undefined8 FUN_140c75ba0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140c75bf0 name=FUN_140c75bf0 */

undefined8 FUN_140c75bf0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e28d40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140c75de0 name=FUN_140c75de0 */

void FUN_140c75de0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140c764a0(param_1,param_2,0,param_3);
  return;
}


/* address=140c75ed0 name=FUN_140c75ed0 */

void FUN_140c75ed0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140d354c0(param_1);
  uVar2 = FUN_140d354a0(param_1);
  FUN_140c75de0(uVar2,uVar1,param_2);
  return;
}


/* address=140c75f60 name=FUN_140c75f60 */

void FUN_140c75f60(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      iVar2 = FUN_140d39550(param_1 + 3);
      if (iVar2 != 0) {
        FUN_140c76460(param_1);
      }
    }
    else {
      FUN_140d39650(puVar1 + 1);
      iVar2 = FUN_140d39550(param_1 + 3);
      if (iVar2 == 0) {
        FUN_140d39690(*param_1 + 8);
      }
      else {
        plVar3 = (longlong *)FUN_140c76280(*puVar1,param_1);
        if ((plVar3 == param_1) &&
           (plVar3 = (longlong *)FUN_140c76330(*puVar1,param_1), plVar3 != param_1)) {
          FID_conflict__assert((wchar_t *)s_f_14139f7d0,(wchar_t *)s_D_14139f710,0xeb);
        }
        FUN_140d39690(*param_1 + 8);
        FUN_140c76460(param_1);
      }
    }
  }
  return;
}


/* address=140c76080 name=FUN_140c76080 */

undefined8 FUN_140c76080(longlong param_1)

{
  FUN_140d39500(param_1 + 0x18);
  return 1;
}


/* address=140c760b0 name=FUN_140c760b0 */

undefined8 FUN_140c760b0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


/* address=140c760d0 name=FUN_140c760d0 */

undefined8 FUN_140c760d0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


/* address=140c760f0 name=FUN_140c760f0 */

void FUN_140c760f0(longlong param_1,undefined8 param_2)

{
  FUN_140d35430(param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return;
}


/* address=140c76130 name=FUN_140c76130 */

int FUN_140c76130(void *param_1,void *param_2,size_t param_3)

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


/* address=140c76170 name=FUN_140c76170 */

undefined8 FUN_140c76170(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e28d40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140c76210 name=FUN_140c76210 */

void FUN_140c76210(undefined8 param_1,undefined8 param_2)

{
  FUN_140d3a1e0(param_1,param_2);
  return;
}


/* address=140c76240 name=FUN_140c76240 */

void FUN_140c76240(undefined8 param_1)

{
  FUN_140d3a2c0(param_1);
  return;
}


/* address=140c76260 name=FUN_140c76260 */

void FUN_140c76260(undefined8 param_1)

{
  FUN_140d3a370(param_1);
  return;
}


/* address=140c76280 name=FUN_140c76280 */

void FUN_140c76280(undefined8 param_1,undefined8 param_2)

{
  FUN_140d3a390(param_1,param_2,&LAB_140c761e0,&LAB_140c761b0);
  return;
}


/* address=140c762c0 name=FUN_140c762c0 */

undefined4 FUN_140c762c0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  uVar1 = FUN_140d3a480(param_1,local_10,param_3,&LAB_140c761e0,&LAB_140c761b0);
  *param_2 = local_10[0];
  return uVar1;
}


/* address=140c76330 name=FUN_140c76330 */

void FUN_140c76330(undefined8 param_1,undefined8 param_2)

{
  FUN_140d3a580(param_1,param_2,&LAB_140c761e0,&LAB_140c761b0);
  return;
}


/* address=140c76460 name=FUN_140c76460 */

void FUN_140c76460(longlong param_1)

{
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_140c66200(*(undefined8 *)(param_1 + 8));
  }
  FUN_140c66200(param_1);
  return;
}


/* address=140c764a0 name=FUN_140c764a0 */

undefined8 * FUN_140c764a0(undefined8 param_1,longlong param_2,int param_3,undefined8 *param_4)

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
    FUN_140d39630(param_4 + 1);
    local_48 = (undefined8 *)FUN_140c76280(*param_4,&local_30);
    if (((param_3 != 0) && (local_48 != (undefined8 *)0x0)) &&
       (*(int *)((longlong)local_48 + 0x1c) == 0)) {
      local_48 = (undefined8 *)0x0;
    }
    if (local_48 != (undefined8 *)0x0) {
      FUN_140d39500(local_48 + 3);
    }
    FUN_140d39670(param_4 + 1);
    if (local_48 != (undefined8 *)0x0) {
      return local_48;
    }
  }
  puVar1 = (undefined8 *)FUN_140c660d0(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_140c76170(puVar1,0,0x20);
    if (param_3 == 0) {
      uVar2 = FUN_140c66ba0(param_1,param_2);
      puVar1[1] = uVar2;
      if ((param_2 != 0) && (puVar1[1] == 0)) {
        FUN_140c66200(puVar1);
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
      FUN_140d39650(param_4 + 1);
      local_40 = (undefined8 *)FUN_140c76280(*param_4,puVar1);
      if (((param_3 != 0) && (local_40 != (undefined8 *)0x0)) &&
         (*(int *)((longlong)local_40 + 0x1c) == 0)) {
        local_40 = (undefined8 *)0x0;
      }
      local_58 = 0;
      if (local_40 == (undefined8 *)0x0) {
        local_38 = 0;
        local_58 = FUN_140c762c0(*param_4,&local_38,puVar1);
      }
      else {
        FUN_140d39500(local_40 + 3);
      }
      FUN_140d39690(param_4 + 1);
      if (local_58 == 0) {
        FUN_140c76460(puVar1);
        puVar1 = local_40;
      }
    }
  }
  return puVar1;
}


/* address=140c76740 name=FUN_140c76740 */

longlong FUN_140c76740(short param_1)

{
  undefined **local_28;
  
  local_28 = (undefined **)&DAT_140fd8900;
  while( true ) {
    if (local_28 == &PTR_DAT_140fd8bd0) {
      return 0;
    }
    if (*(short *)((longlong)local_28 + 4) == param_1) break;
    local_28 = local_28 + 9;
  }
  return (longlong)local_28 + 6;
}


/* address=140c76870 name=FUN_140c76870 */

undefined8 FUN_140c76870(undefined8 param_1,ushort param_2)

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
      uVar1 = FUN_140c7aa50();
      uVar1 = FUN_140c55e40(local_18,uVar1);
      FUN_140c55e70(param_1,uVar1);
      FUN_140c7a600(local_18);
      return param_1;
    }
    if (param_2 == 0x15) {
      local_84 = 0x15;
      local_80 = 0x2c9;
      uVar1 = FUN_140c7a7e0(local_60,&local_80,&local_84);
      FUN_140c7a850(param_1,uVar1);
      FUN_140c7a240(local_60);
      return param_1;
    }
    if (param_2 == 0x17) {
      local_7c = 0x17;
      local_78 = 0x19f;
      uVar1 = FUN_140c7a7e0(local_58,&local_78,&local_7c);
      FUN_140c7a850(param_1,uVar1);
      FUN_140c7a240(local_58);
      return param_1;
    }
    if (param_2 == 0x18) {
      local_74 = 0x18;
      local_70 = 0x2cb;
      uVar1 = FUN_140c7a7e0(local_50,&local_70,&local_74);
      FUN_140c7a850(param_1,uVar1);
      FUN_140c7a240(local_50);
      return param_1;
    }
    if (param_2 == 0x19) {
      local_6c = 0x19;
      local_68[0] = 0x2cc;
      uVar1 = FUN_140c7a7e0(local_48,local_68,&local_6c);
      FUN_140c7a850(param_1,uVar1);
      FUN_140c7a240(local_48);
      return param_1;
    }
    if (param_2 == 0x1d) {
      uVar1 = FUN_140c7a8b0(local_40);
      FUN_140c7a8f0(param_1,uVar1);
      FUN_140c7a300(local_40);
      return param_1;
    }
  }
  else {
    if (param_2 == 0x6399) {
      uVar1 = FUN_140c7a9a0(local_res10);
      uVar1 = FUN_140c55e40(local_30,uVar1);
      FUN_140c55e70(param_1,uVar1);
      FUN_140c7a600(local_30);
      return param_1;
    }
    if (param_2 == 0xfe30) {
      uVar1 = FUN_140c7a950();
      uVar1 = FUN_140c55e40(local_38,uVar1);
      FUN_140c55e70(param_1,uVar1);
      FUN_140c7a600(local_38);
      return param_1;
    }
    if (param_2 == 0xfe31) {
      uVar1 = FUN_140c7a9a0(local_res10);
      uVar1 = FUN_140c55e40(local_28,uVar1);
      FUN_140c55e70(param_1,uVar1);
      FUN_140c7a600(local_28);
      return param_1;
    }
    if (param_2 == 0xfe32) {
      uVar1 = FUN_140c7aa00();
      uVar1 = FUN_140c55e40(local_20,uVar1);
      FUN_140c55e70(param_1,uVar1);
      FUN_140c7a600(local_20);
      return param_1;
    }
  }
  FUN_140c5cfa0(param_1,0);
  return param_1;
}


/* address=140c76c10 name=FUN_140c76c10 */

undefined8 FUN_140c76c10(undefined2 *param_1,int param_2)

{
  undefined **local_28;
  
  local_28 = (undefined **)&DAT_140fd8900;
  while( true ) {
    if (local_28 == &PTR_DAT_140fd8bd0) {
      return 0;
    }
    if (*(int *)local_28 == param_2) break;
    local_28 = local_28 + 9;
  }
  *param_1 = *(undefined2 *)((longlong)local_28 + 4);
  return 1;
}


/* address=140c76ca0 name=FUN_140c76ca0 */

undefined8 FUN_140c76ca0(undefined2 *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  size_t sVar2;
  undefined **local_20;
  
  local_20 = (undefined **)&DAT_140fd8900;
  while( true ) {
    if (local_20 == &PTR_DAT_140fd8bd0) {
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


/* address=140c76dd0 name=FUN_140c76dd0 */

undefined8 * FUN_140c76dd0(undefined8 *param_1,undefined4 param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  FUN_140c7a580(param_1);
  *param_1 = &PTR_LAB_140fd8c18;
  FUN_140c57b60(param_1 + 1);
  uVar1 = FUN_140cb84b0(param_2);
  param_1[2] = uVar1;
  *(undefined2 *)(param_1 + 3) = param_3;
  return param_1;
}


/* address=140c77640 name=FUN_140c77640 */

void FUN_140c77640(longlong param_1)

{
  FUN_140c7a640(param_1 + 8);
  FUN_140c7a4e0(param_1);
  return;
}


/* address=140c776d0 name=FUN_140c776d0 */

undefined8 * FUN_140c776d0(undefined8 *param_1)

{
  FUN_140c7a580(param_1);
  *param_1 = &PTR_LAB_140fd8c58;
  return param_1;
}


/* address=140c77a20 name=FUN_140c77a20 */

void FUN_140c77a20(undefined8 param_1)

{
  FUN_140c7a4e0(param_1);
  return;
}


/* address=140c77aa0 name=FUN_140c77aa0 */

undefined8 * FUN_140c77aa0(undefined8 *param_1)

{
  FUN_140c7a580(param_1);
  *param_1 = &PTR_LAB_140fd8c98;
  FUN_140c57b60(param_1 + 1);
  return param_1;
}


/* address=140c78e40 name=FUN_140c78e40 */

void FUN_140c78e40(longlong param_1)

{
  FUN_140c7a640(param_1 + 8);
  FUN_140c7a4e0(param_1);
  return;
}


/* address=140c78ed0 name=FUN_140c78ed0 */

undefined8 * FUN_140c78ed0(undefined8 *param_1,short param_2)

{
  FUN_140c7a580(param_1);
  *param_1 = &PTR_LAB_140fd8cd8;
  *(short *)(param_1 + 0x131) = param_2;
  if ((param_2 != 0x6399) && (param_2 != -0x1cf)) {
    FID_conflict__assert((wchar_t *)"g",(wchar_t *)"D",0x1a4);
  }
  return param_1;
}


/* address=140c794f0 name=FUN_140c794f0 */

void FUN_140c794f0(undefined8 param_1)

{
  FUN_140c7a4e0(param_1);
  return;
}


/* address=140c79570 name=FUN_140c79570 */

undefined8 * FUN_140c79570(undefined8 *param_1)

{
  FUN_140c7a580(param_1);
  *param_1 = &PTR_LAB_140fd8d18;
  return param_1;
}


/* address=140c79b60 name=FUN_140c79b60 */

void FUN_140c79b60(undefined8 param_1)

{
  FUN_140c7a4e0(param_1);
  return;
}


/* address=140c79be0 name=FUN_140c79be0 */

undefined8 * FUN_140c79be0(undefined8 *param_1)

{
  FUN_140c7a580(param_1);
  *param_1 = &PTR_LAB_140fd8d58;
  return param_1;
}


/* address=140c7a1c0 name=FUN_140c7a1c0 */

void FUN_140c7a1c0(undefined8 param_1)

{
  FUN_140c7a4e0(param_1);
  return;
}


/* address=140c7a240 name=FUN_140c7a240 */

void FUN_140c7a240(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140c7a2e0(param_1);
    FUN_140c7ab80(uVar1,*param_1);
  }
  return;
}


/* address=140c7a280 name=FUN_140c7a280 */

void FUN_140c7a280(undefined8 param_1)

{
  FUN_140c7a2e0(param_1);
  return;
}


/* address=140c7a2b0 name=std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::release */

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


/* address=140c7a2e0 name=FUN_140c7a2e0 */

undefined8 FUN_140c7a2e0(undefined8 param_1)

{
  return param_1;
}


/* address=140c7a300 name=FUN_140c7a300 */

void FUN_140c7a300(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140c7a3a0(param_1);
    FUN_140c7ab60(uVar1,*param_1);
  }
  return;
}


/* address=140c7a340 name=FUN_140c7a340 */

void FUN_140c7a340(undefined8 param_1)

{
  FUN_140c7a3a0(param_1);
  return;
}


/* address=140c7a370 name=std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::release */

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


/* address=140c7a3a0 name=FUN_140c7a3a0 */

undefined8 FUN_140c7a3a0(undefined8 param_1)

{
  return param_1;
}


/* address=140c7a3c0 name=FUN_140c7a3c0 */

void FUN_140c7a3c0(facet *param_1)

{
  std::_DebugHeapDelete<class_std::locale::facet>(param_1);
  return;
}


/* address=140c7a3e0 name=FUN_140c7a3e0 */

void FUN_140c7a3e0(facet *param_1)

{
  std::_DebugHeapDelete<class_std::locale::facet>(param_1);
  return;
}


/* address=140c7a400 name=FUN_140c7a400 */

void FUN_140c7a400(undefined8 param_1)

{
  FUN_140c8a700(param_1);
  return;
}


/* address=140c7a420 name=FUN_140c7a420 */

void FUN_140c7a420(undefined8 param_1)

{
  FUN_140c8b040(param_1);
  return;
}


/* address=140c7a440 name=FUN_140c7a440 */

undefined8 * FUN_140c7a440(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  FUN_140c8b0d0(*param_1);
  return param_1;
}


/* address=140c7a480 name=FUN_140c7a480 */

void FUN_140c7a480(undefined8 *param_1)

{
  FUN_140c8b280(*param_1);
  return;
}


/* address=140c7a4a0 name=FUN_140c7a4a0 */

void FUN_140c7a4a0(undefined8 param_1)

{
  FUN_140cb8ba0(param_1);
  return;
}


/* address=140c7a4c0 name=FUN_140c7a4c0 */

void FUN_140c7a4c0(undefined8 param_1)

{
  FUN_140cb8650(param_1);
  return;
}


/* address=140c7a4e0 name=FUN_140c7a4e0 */

void FUN_140c7a4e0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_140fd8bd8;
  return;
}


/* address=140c7a500 name=FUN_140c7a500 */

void FUN_140c7a500(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* address=140c7a570 name=FUN_140c7a570 */

undefined FUN_140c7a570(void)

{
  return 0;
}


/* address=140c7a580 name=FUN_140c7a580 */

undefined8 * FUN_140c7a580(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_140fd8bd8;
  return param_1;
}


/* address=140c7a600 name=FUN_140c7a600 */

void FUN_140c7a600(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140c55cd0(param_1);
    FUN_140c7ac20(uVar1,*param_1);
  }
  return;
}


/* address=140c7a640 name=FUN_140c7a640 */

void FUN_140c7a640(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140c55cd0(param_1);
    FUN_140c7ac00(uVar1,*param_1);
  }
  return;
}


/* address=140c7a680 name=FUN_140c7a680 */

void FUN_140c7a680(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_140c55cd0(param_1);
    FUN_140c7ac00(uVar2,p_Var1);
  }
  return;
}


/* address=140c7a6d0 name=FUN_140c7a6d0 */

void FUN_140c7a6d0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140c55cd0(param_1);
    FUN_140c7abe0(uVar1,*param_1);
  }
  return;
}


/* address=140c7a710 name=FUN_140c7a710 */

void FUN_140c7a710(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140c55cd0(param_1);
    FUN_140c7abc0(uVar1,*param_1);
  }
  return;
}


/* address=140c7a750 name=FUN_140c7a750 */

void FUN_140c7a750(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140c55cd0(param_1);
    FUN_140c7aba0(uVar1,*param_1);
  }
  return;
}


/* address=140c7a790 name=FUN_140c7a790 */

void FUN_140c7a790(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_140c55cd0(param_1);
    FUN_140c7aba0(uVar2,p_Var1);
  }
  return;
}


/* address=140c7a7e0 name=FUN_140c7a7e0 */

undefined8 FUN_140c7a7e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined local_10 [16];
  
  uVar1 = FUN_140c55cd0(param_3);
  uVar2 = FUN_140c55cd0(param_2);
  uVar1 = FUN_140c7aaa0(uVar2,uVar1);
  uVar1 = FUN_140c55e40(local_10,uVar1);
  FUN_140c7a850(param_1,uVar1);
  FUN_140c7a240(local_10);
  return param_1;
}


/* address=140c7a850 name=FUN_140c7a850 */

undefined8
FUN_140c7a850(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  undefined8 uVar1;
  undefined local_18;
  _Facet_base *local_10 [2];
  
  local_10[0] = std::
                unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                ::release(param_2);
  uVar1 = FUN_140c7a280(param_2);
  uVar1 = FUN_140c55cd0(uVar1);
  FUN_140c58170(param_1,local_18,uVar1,local_10);
  return param_1;
}


/* address=140c7a8b0 name=FUN_140c7a8b0 */

undefined8 FUN_140c7a8b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_140c7ab10();
  uVar1 = FUN_140c55e40(local_18,uVar1);
  FUN_140c7a8f0(param_1,uVar1);
  FUN_140c7a300(local_18);
  return param_1;
}


/* address=140c7a8f0 name=FUN_140c7a8f0 */

undefined8
FUN_140c7a8f0(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  undefined8 uVar1;
  undefined local_18;
  _Facet_base *local_10 [2];
  
  local_10[0] = std::
                unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                ::release(param_2);
  uVar1 = FUN_140c7a340(param_2);
  uVar1 = FUN_140c55cd0(uVar1);
  FUN_140c58170(param_1,local_18,uVar1,local_10);
  return param_1;
}


/* address=140c7a950 name=FUN_140c7a950 */

undefined8 FUN_140c7a950(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140c660d0(0x688);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140c55bd0(0x688,lVar1);
    uVar2 = FUN_140c79be0(uVar2);
  }
  return uVar2;
}


/* address=140c7a9a0 name=FUN_140c7a9a0 */

undefined8 FUN_140c7a9a0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  
  lVar1 = FUN_140c660d0(0x990);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140c55bd0(0x990,lVar1);
    puVar3 = (undefined2 *)FUN_140c55cd0(param_1);
    uVar2 = FUN_140c78ed0(uVar2,*puVar3);
  }
  return uVar2;
}


/* address=140c7aa00 name=FUN_140c7aa00 */

undefined8 FUN_140c7aa00(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140c660d0(0x970);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140c55bd0(0x970,lVar1);
    uVar2 = FUN_140c77aa0(uVar2);
  }
  return uVar2;
}


/* address=140c7aa50 name=FUN_140c7aa50 */

undefined8 FUN_140c7aa50(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140c660d0(0x988);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140c55bd0(0x988,lVar1);
    uVar2 = FUN_140c79570(uVar2);
  }
  return uVar2;
}


/* address=140c7aaa0 name=FUN_140c7aaa0 */

undefined8 FUN_140c7aaa0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  
  lVar1 = FUN_140c660d0(0x20);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140c55bd0(0x20,lVar1);
    puVar3 = (undefined2 *)FUN_140c55cd0(param_2);
    puVar4 = (undefined4 *)FUN_140c55cd0(param_1);
    uVar2 = FUN_140c76dd0(uVar2,*puVar4,*puVar3);
  }
  return uVar2;
}


/* address=140c7ab10 name=FUN_140c7ab10 */

undefined8 FUN_140c7ab10(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140c660d0(0x28);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140c55bd0(0x28,lVar1);
    uVar2 = FUN_140c776d0(uVar2);
  }
  return uVar2;
}


/* address=140c7ab60 name=FUN_140c7ab60 */

void FUN_140c7ab60(undefined8 param_1,undefined8 param_2)

{
  FUN_140c7a3c0(param_2);
  return;
}


/* address=140c7ab80 name=FUN_140c7ab80 */

void FUN_140c7ab80(undefined8 param_1,undefined8 param_2)

{
  FUN_140c7a3e0(param_2);
  return;
}


/* address=140c7aba0 name=FUN_140c7aba0 */

void FUN_140c7aba0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c7a4c0(param_2);
  return;
}


/* address=140c7abc0 name=FUN_140c7abc0 */

void FUN_140c7abc0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c7a420(param_2);
  return;
}


/* address=140c7abe0 name=FUN_140c7abe0 */

void FUN_140c7abe0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c7a4a0(param_2);
  return;
}


/* address=140c7ac00 name=FUN_140c7ac00 */

void FUN_140c7ac00(undefined8 param_1,undefined8 param_2)

{
  FUN_140c7a400(param_2);
  return;
}


/* address=140c7ac20 name=FUN_140c7ac20 */

void FUN_140c7ac20(undefined8 param_1,undefined8 param_2)

{
  FUN_140c7ac40(param_2);
  return;
}


/* address=140c7ac40 name=FUN_140c7ac40 */

void FUN_140c7ac40(facet *param_1)

{
  std::_DebugHeapDelete<class_std::locale::facet>(param_1);
  return;
}


/* address=140c7ac60 name=std::_DebugHeapDelete<class_std::locale::facet> */

/* Library Function - Single Match
    void __cdecl std::_DebugHeapDelete<class std::locale::facet>(class std::locale::facet * __ptr64)
   
   Library: Visual Studio 2005 Debug */

void __cdecl std::_DebugHeapDelete<class_std::locale::facet>(facet *param_1)

{
  if (param_1 != (facet *)0x0) {
    (***(code ***)param_1)(param_1,0);
    FUN_140c66200(param_1);
  }
  return;
}


/* address=140c7aca0 name=FUN_140c7aca0 */

undefined FUN_140c7aca0(longlong param_1,longlong param_2)

{
  undefined uVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    FUN_140c6c4e0(0x10,0,0x43,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                  ,0x1c1);
    uVar1 = 0;
  }
  else {
    uVar2 = FUN_140c55c70(param_1 + 0xe8);
    uVar1 = FUN_140c7cb70(uVar2,param_2);
  }
  return uVar1;
}


/* address=140c7ad10 name=FUN_140c7ad10 */

undefined FUN_140c7ad10(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((param_2 != 0) && (cVar1 = operator==<>(param_1 + 8,0), cVar1 == '\0')) {
    lVar3 = FUN_140c55c70(param_1 + 8);
    uVar4 = FUN_140c55c70(lVar3 + 0x20);
    uVar2 = FUN_140c7cb70(uVar4,param_2);
    return uVar2;
  }
  FUN_140c6c4e0(0x10,0,0x43,
                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                ,0x18c);
  return 0;
}


/* address=140c7ada0 name=FUN_140c7ada0 */

short * FUN_140c7ada0(short param_1,int param_2)

{
  short *local_30;
  
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
  local_30 = &DAT_140fd99f0;
  while( true ) {
    if (local_30 == (short *)&DAT_140fd9b42) {
      return (short *)0x0;
    }
    if (*local_30 == param_1) break;
    local_30 = local_30 + 0xd;
  }
  return local_30 + 1;
}


/* address=140c7b130 name=FUN_140c7b130 */

undefined FUN_140c7b130(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined uVar1;
  undefined *puVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined local_38 [16];
  undefined local_28 [24];
  
  puVar2 = (undefined *)FUN_140c55fe0(local_28,param_2,param_3);
  puVar4 = local_38;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  lVar3 = FUN_140c55c70(param_1 + 0xe8);
  uVar1 = FUN_140c7d0f0(lVar3 + 0x38,local_38);
  return uVar1;
}


/* address=140c7b1a0 name=FUN_140c7b1a0 */

undefined FUN_140c7b1a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined uVar2;
  undefined *puVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined local_38 [16];
  undefined local_28 [24];
  
  cVar1 = FUN_140c56050(param_1 + 8);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    puVar3 = (undefined *)FUN_140c55fe0(local_28,param_2,param_3);
    puVar5 = local_38;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    lVar4 = FUN_140c55c70(param_1 + 8);
    lVar4 = FUN_140c55c70(lVar4 + 0x20);
    uVar2 = FUN_140c7d0f0(lVar4 + 0x38,local_38);
  }
  return uVar2;
}


/* address=140c7b240 name=FUN_140c7b240 */

undefined FUN_140c7b240(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined local_20 [8];
  undefined8 local_18;
  
  if (param_2 == 0) {
    FUN_140c6c4e0(0x10,0,0x43,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                  ,0x1a6);
  }
  else {
    uVar4 = FUN_140d316f0();
    FUN_140c55e40(local_20,uVar4);
    cVar1 = FUN_140c56050(local_20);
    if (cVar1 != '\0') {
      uVar4 = FUN_140c55c70(local_20);
      iVar3 = FUN_140d31b70(uVar4,param_2);
      if (iVar3 != 0) {
        local_18 = FUN_140c55c70(local_20);
        uVar4 = FUN_140c55c70(param_1 + 0xe8);
        uVar2 = FUN_140c7cb70(uVar4,local_18);
        FUN_140c55d60(local_20);
        return uVar2;
      }
    }
    FUN_140c6c4e0(0x10,0,6,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                  ,0x1ad);
    FUN_140c55d60(local_20);
  }
  return 0;
}


/* address=140c7b350 name=FUN_140c7b350 */

undefined FUN_140c7b350(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined local_20 [8];
  undefined8 local_18;
  
  if ((param_2 != 0) && (cVar1 = operator==<>(param_1 + 8,0), cVar1 == '\0')) {
    uVar4 = FUN_140d316f0();
    FUN_140c55e40(local_20,uVar4);
    cVar1 = FUN_140c56050(local_20);
    if (cVar1 != '\0') {
      uVar4 = FUN_140c55c70(local_20);
      iVar3 = FUN_140d31b70(uVar4,param_2);
      if (iVar3 != 0) {
        local_18 = FUN_140c55c70(local_20);
        lVar5 = FUN_140c55c70(param_1 + 8);
        uVar4 = FUN_140c55c70(lVar5 + 0x20);
        uVar2 = FUN_140c7cb70(uVar4,local_18);
        FUN_140c55d60(local_20);
        return uVar2;
      }
    }
    FUN_140c6c4e0(0x10,0,6,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                  ,0x179);
    FUN_140c55d60(local_20);
    return 0;
  }
  FUN_140c6c4e0(0x10,0,0x43,
                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                ,0x172);
  return 0;
}


/* address=140c7b8a0 name=FUN_140c7b8a0 */

undefined FUN_140c7b8a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined uVar1;
  undefined *puVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined local_38 [16];
  undefined local_28 [24];
  
  puVar2 = (undefined *)FUN_140c55fe0(local_28,param_2,param_3);
  puVar4 = local_38;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar1 = FUN_140c7d0f0(param_1 + 0x228,local_38);
  return uVar1;
}


/* address=140c7b910 name=FUN_140c7b910 */

undefined FUN_140c7b910(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined uVar2;
  undefined *puVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined local_38 [16];
  undefined local_28 [24];
  
  cVar1 = FUN_140c56050(param_1 + 8);
  if (cVar1 == '\0') {
    FUN_140c6c4e0(0x10,0,0x42,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                  ,0x3af);
    uVar2 = 0;
  }
  else {
    puVar3 = (undefined *)FUN_140c55fe0(local_28,param_2,param_3);
    puVar5 = local_38;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    lVar4 = FUN_140c55c70(param_1 + 8);
    uVar2 = FUN_140c7d0f0(lVar4 + 0xc0,local_38);
  }
  return uVar2;
}


/* address=140c7be20 name=FUN_140c7be20 */

undefined8 FUN_140c7be20(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140c7be70 name=FUN_140c7be70 */

undefined8 FUN_140c7be70(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_140c55c70(*(longlong *)(param_1 + 8) + 0x20);
  cVar1 = FUN_140c57ae0(uVar2,0);
  if ((cVar1 == '\0') &&
     (lVar3 = FUN_140c55c70(*(longlong *)(param_1 + 8) + 0x20), *(longlong *)(lVar3 + 0x28) == 0)) {
    cVar1 = FUN_140c73470(param_1);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}


/* address=140c7bee0 name=FUN_140c7bee0 */

int FUN_140c7bee0(undefined8 *param_1,undefined8 param_2,ulonglong *param_3,ulonglong param_4,
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
  int local_188;
  code **local_180;
  undefined local_170 [16];
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined *local_138;
  undefined *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined local_108 [32];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [16];
  undefined local_a8 [16];
  undefined local_98 [16];
  undefined local_88 [48];
  undefined local_58 [16];
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [24];
  
  uVar7 = *param_1;
  lVar3 = FUN_140c55c70(param_1 + 0xc3);
  FUN_140c56440(local_170);
  if (lVar3 != 0) {
    FUN_140c57a60(local_88);
    uVar4 = FUN_140c55cd0(local_88);
    iVar2 = FUN_140d376f0(uVar4,0x40);
    if (iVar2 == 0) {
LAB_140c7bfce:
      FUN_140d55f00(uVar7,2,0x50);
      local_160 = 2;
      FUN_140c57a90(local_88);
      FUN_140c564c0(local_170);
      return local_160;
    }
    local_140 = FUN_140c55c70(param_1 + 0xba);
    uVar4 = FUN_140c55cd0(local_88);
    iVar2 = FUN_140d5a6c0(uVar4,local_140);
    if (iVar2 == 0) goto LAB_140c7bfce;
    uVar4 = FUN_140c55cd0(local_88);
    cVar1 = FUN_140c535c0(uVar4,local_170);
    if (cVar1 == '\0') goto LAB_140c7bfce;
    FUN_140c57a90(local_88);
  }
  if (((lVar3 != 0) && ((*(byte *)((longlong)param_1 + 0x622) >> 4 & 1) == 0)) &&
     (param_5 == *(short *)(lVar3 + 0x48))) {
    local_138 = local_58;
    puVar5 = (undefined *)FUN_140c57dd0(local_138,lVar3 + 0x50);
    puVar9 = local_e8;
    for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar9 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar5 = param_6;
    puVar9 = local_d8;
    for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar9 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar9 = puVar9 + 1;
    }
    cVar1 = FUN_140c63130(local_d8,local_e8);
    if (cVar1 != '\0') {
      local_130 = local_48;
      puVar5 = (undefined *)FUN_140c57dd0(local_130,lVar3 + 0x60);
      puVar9 = local_c8;
      for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar9 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar9 = puVar9 + 1;
      }
      puVar5 = (undefined *)FUN_140c71580(local_38,local_170);
      puVar9 = local_b8;
      for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar9 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar9 = puVar9 + 1;
      }
      cVar1 = FUN_140c63130(local_b8,local_c8);
      if (((cVar1 != '\0') && (cVar1 = FUN_140c55f90(lVar3 + 0x70), cVar1 == '\0')) &&
         (uVar6 = FUN_140c55f80(lVar3 + 0x70), uVar6 <= param_4)) {
        uVar6 = FUN_140c55f80(lVar3 + 0x70);
        *param_3 = uVar6;
        local_128 = FUN_140c55f80(lVar3 + 0x70);
        uVar7 = FUN_140c55c70(lVar3 + 0x70);
        FUN_140c7be20(param_2,uVar7,local_128);
        local_15c = 0;
        FUN_140c564c0(local_170);
        return local_15c;
      }
    }
  }
  lVar8 = FUN_140c55c70(param_1[1] + 0x20);
  local_180 = *(code ***)(lVar8 + 0x28);
  uVar4 = FUN_140c55c70(param_1[1] + 0x20);
  local_148 = FUN_140c55c70(uVar4);
  if (*(char *)((longlong)param_1 + 0x622) < '\0') {
    FID_conflict__assert((wchar_t *)"!",(wchar_t *)"D",0xf6);
  }
  cVar1 = FUN_140c73470(param_1);
  if (cVar1 != '\0') {
    lVar8 = FUN_140c55c70(param_1[1] + 0x20);
    local_180 = *(code ***)(lVar8 + 0xa8);
    lVar8 = FUN_140c55c70(param_1[1] + 0x20);
    local_148 = FUN_140c55c70(lVar8 + 0xa0);
  }
  if (local_180 == (code **)0x0) {
    *param_3 = param_4;
    FUN_140c7dcf0(local_108);
    uVar4 = FUN_140c55cd0(local_108);
    cVar1 = FUN_140c7cde0(uVar7,uVar4,local_148,param_5,
                          in_stack_fffffffffffffe48 & 0xffffffffffffff00);
    if (cVar1 == '\0') {
LAB_140c7c507:
      local_154 = 2;
      FUN_140c7dd20(local_108);
      FUN_140c564c0(local_170);
      return local_154;
    }
    local_118 = FUN_140c55f80(param_6);
    local_110 = FUN_140c55c70(param_6);
    uVar7 = FUN_140c55cd0(local_108);
    iVar2 = FUN_140cb53a0(uVar7,param_2,param_3,local_110,local_118);
    if (iVar2 == 0) goto LAB_140c7c507;
    FUN_140c7dd20(local_108);
  }
  else {
    if ((*(byte *)((longlong)param_1 + 0x622) >> 2 & 1) == 0) {
      local_120 = FUN_140c55f80(param_6);
      uVar4 = FUN_140c55c70(param_6);
      uVar10 = CONCAT62((int6)(in_stack_fffffffffffffe48 >> 0x10),param_5);
      local_188 = (**local_180)(uVar7,param_2,param_3,param_4,uVar10,uVar4,local_120);
      uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
    }
    else {
      local_188 = (*local_180[2])(uVar7,param_2,param_3,param_4);
      uVar11 = (undefined4)(in_stack_fffffffffffffe48 >> 0x20);
    }
    if (local_188 == 2) {
      FUN_140c6c4e0(0x10,0,0x11f,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                    ,CONCAT44(uVar11,0x105));
    }
    *(byte *)((longlong)param_1 + 0x622) =
         *(byte *)((longlong)param_1 + 0x622) & 0xfb | (local_188 == 1) << 2;
    if (local_188 != 0) {
      local_158 = local_188;
      FUN_140c564c0(local_170);
      return local_158;
    }
  }
  if ((lVar3 == 0) || ((*(byte *)((longlong)param_1 + 0x622) >> 4 & 1) == 0)) {
LAB_140c7c648:
    local_14c = 0;
    FUN_140c564c0(local_170);
    local_150 = local_14c;
  }
  else {
    *(short *)(lVar3 + 0x48) = param_5;
    uVar7 = FUN_140c55cd0(local_170);
    FUN_140c564e0(lVar3 + 0x60,uVar7);
    puVar5 = local_a8;
    for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar5 = *param_6;
      param_6 = param_6 + 1;
      puVar5 = puVar5 + 1;
    }
    cVar1 = FUN_140c566e0(lVar3 + 0x50,local_a8);
    if (cVar1 != '\0') {
      puVar5 = (undefined *)FUN_140c55fe0(local_28,param_2,*param_3);
      puVar9 = local_98;
      for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar9 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar9 = puVar9 + 1;
      }
      cVar1 = FUN_140c566e0(lVar3 + 0x70,local_98);
      if (cVar1 != '\0') goto LAB_140c7c648;
    }
    local_150 = 2;
    FUN_140c564c0(local_170);
  }
  return local_150;
}


/* address=140c7c680 name=FUN_140c7c680 */

int FUN_140c7c680(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar6;
  int local_34;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uVar5 = *param_1;
  if (*(char *)((longlong)param_1 + 0x622) < '\0') {
    FID_conflict__assert((wchar_t *)"!",(wchar_t *)"D",0x136);
  }
  lVar2 = FUN_140c55c70(param_1[1] + 0x20);
  if (*(longlong *)(lVar2 + 0x28) == 0) {
    uVar5 = FUN_140c55c70(param_1[1] + 0x20);
    uVar5 = FUN_140c55c70(uVar5);
    lVar2 = FUN_140d31be0(uVar5);
    if (lVar2 == 0) {
      FUN_140c6c4e0(0x10,0,0x44,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                    ,CONCAT44(uVar6,0x149));
      local_34 = 2;
    }
    else {
      uVar5 = FUN_140c55f80(param_5);
      uVar3 = FUN_140c55c70(param_5);
      iVar1 = FUN_140db00a0(lVar2,param_3,param_2,param_4,uVar3,uVar5,3);
      if (iVar1 == 0) {
        local_34 = 2;
      }
      else {
        local_34 = 0;
      }
    }
  }
  else {
    if ((*(byte *)((longlong)param_1 + 0x622) >> 2 & 1) == 0) {
      uVar3 = FUN_140c55f80(param_5);
      uVar4 = FUN_140c55c70(param_5);
      lVar2 = FUN_140c55c70(param_1[1] + 0x20);
      local_34 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 8))
                           (uVar5,param_2,param_3,param_4,uVar4,uVar3);
      uVar6 = (undefined4)((ulonglong)uVar4 >> 0x20);
    }
    else {
      lVar2 = FUN_140c55c70(param_1[1] + 0x20);
      local_34 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x10))(uVar5,param_2,param_3,param_4);
    }
    if (local_34 == 2) {
      FUN_140c6c4e0(0x10,0,0x11f,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                    ,CONCAT44(uVar6,0x140));
    }
    *(byte *)((longlong)param_1 + 0x622) =
         *(byte *)((longlong)param_1 + 0x622) & 0xfb | (local_34 == 1) << 2;
  }
  return local_34;
}


/* address=140c7c920 name=FUN_140c7c920 */

ulonglong FUN_140c7c920(undefined8 *param_1,undefined2 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = *param_1;
  uVar3 = FUN_140c55c70(param_1 + 0xba);
  cVar1 = FUN_140c7ccc0(uVar6,uVar3,param_2);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    lVar5 = FUN_140c7cc50(param_2);
    uVar4 = 0;
    if (*(char *)(lVar5 + 0x18) != '\0') {
      uVar6 = FUN_140c55c70(param_1 + 0xba);
      iVar2 = FUN_140d31a60(uVar6);
      uVar6 = (**(code **)(lVar5 + 0x10))();
      lVar5 = FUN_140c7f990(uVar6);
      uVar4 = lVar5 * 2 + 2;
      if ((ulonglong)(longlong)iVar2 < uVar4) {
        return uVar4 & 0xffffffffffffff00;
      }
    }
    uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  return uVar4;
}


/* address=140c7c9e0 name=FUN_140c7c9e0 */

bool FUN_140c7c9e0(undefined8 param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
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
  undefined local_30 [48];
  
  FUN_140c7dcf0(local_30);
  uVar3 = FUN_140c55cd0(local_30);
  cVar1 = FUN_140c7cde0(param_1,uVar3,param_4,param_3,1);
  if (cVar1 == '\0') {
    FUN_140c7dd20(local_30);
    bVar8 = false;
  }
  else {
    uVar3 = FUN_140c55f80(param_5);
    uVar4 = FUN_140c55c70(param_5);
    uVar5 = FUN_140c55f80(param_2);
    uVar6 = FUN_140c55c70(param_2);
    uVar7 = FUN_140c55cd0(local_30);
    iVar2 = FUN_140cb56b0(uVar7,uVar6,uVar5,uVar4,uVar3);
    bVar8 = iVar2 != 0;
    FUN_140c7dd20(local_30);
  }
  return bVar8;
}


/* address=140c7cb20 name=FUN_140c7cb20 */

undefined FUN_140c7cb20(int param_1)

{
  undefined local_18;
  
  if (((param_1 == 6) || (param_1 == 0x198)) || (param_1 == 0x3b5)) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}


/* address=140c7cb70 name=FUN_140c7cb70 */

undefined8 FUN_140c7cb70(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined local_18 [24];
  
  uVar2 = FUN_140d31b10(param_2);
  cVar1 = FUN_140c7cb20(uVar2);
  if (cVar1 == '\0') {
    FUN_140c6c4e0(0x10,0,0xe4,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                  ,0x52);
    uVar3 = 0;
  }
  else {
    cVar1 = FUN_140c57ae0(param_1 + 8,0);
    if (cVar1 != '\0') {
      uVar3 = FUN_140c55c70(param_1 + 8);
      lVar4 = FUN_140c560c0(uVar3,0);
      if ((lVar4 != 0) && (cVar1 = FUN_140c73f20(param_1,param_2), cVar1 == '\0')) {
        return 0;
      }
    }
    uVar3 = FUN_140c55d00(local_18,param_2);
    FUN_140c57e10(param_1,uVar3);
    FUN_140c55d60(local_18);
    uVar3 = 1;
  }
  return uVar3;
}


/* address=140c7cc50 name=FUN_140c7cc50 */

undefined * FUN_140c7cc50(short param_1)

{
  ulonglong local_18;
  
  local_18 = 0;
  while( true ) {
    if (0xc < local_18) {
      return (undefined *)0x0;
    }
    if (*(short *)(&DAT_140fd8df0 + local_18 * 0x20) == param_1) break;
    local_18 = local_18 + 1;
  }
  return &DAT_140fd8df0 + local_18 * 0x20;
}


/* address=140c7ccc0 name=FUN_140c7ccc0 */

undefined FUN_140c7ccc0(undefined8 param_1,undefined8 param_2,short param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined local_18;
  
  lVar3 = FUN_140c7cc50(param_3);
  if ((lVar3 == 0) || (iVar2 = FUN_140d31b10(param_2), iVar2 != *(int *)(lVar3 + 4))) {
    return 0;
  }
  uVar1 = FUN_140c6de20(param_1);
  if (uVar1 < 0x303) {
    if ((param_3 == -0xff) || (param_3 == 0x203)) {
      local_18 = 1;
    }
    else {
      local_18 = 0;
    }
    return local_18;
  }
  if (param_3 != -0xff) {
    uVar1 = FUN_140c6de20(param_1);
    if (0x303 < uVar1) {
      if ((*(int *)(lVar3 + 4) == 6) && (*(char *)(lVar3 + 0x18) == '\0')) {
        return 0;
      }
      if (*(int *)(lVar3 + 4) == 0x198) {
        if (*(int *)(lVar3 + 8) != 0) {
          uVar4 = FUN_140d31de0(param_2);
          uVar4 = FUN_140cba680(uVar4);
          iVar2 = FUN_140cb89c0(uVar4);
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


/* address=140c7cde0 name=FUN_140c7cde0 */

undefined8
FUN_140c7cde0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4,
             char param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar5;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  cVar1 = FUN_140c7ccc0(param_1,param_3,param_4);
  if (cVar1 == '\0') {
    FUN_140c6c4e0(0x10,0,0xf5,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                  ,CONCAT44(uVar5,0xbe));
    uVar3 = 0;
  }
  else {
    lVar4 = FUN_140c7cc50(param_4);
    if (*(longlong *)(lVar4 + 0x10) == 0) {
      local_18 = 0;
    }
    else {
      local_18 = (**(code **)(lVar4 + 0x10))();
    }
    local_10 = local_18;
    if (param_5 == '\0') {
      iVar2 = FUN_140cb5150(param_2,&local_20,local_18,0,param_3);
      if (iVar2 == 0) {
        return 0;
      }
    }
    else {
      iVar2 = FUN_140cb54b0(param_2,&local_20,local_18,0,param_3);
      if (iVar2 == 0) {
        return 0;
      }
    }
    if ((*(char *)(lVar4 + 0x18) == '\0') ||
       ((iVar2 = FUN_140dae4b0(local_20,6), iVar2 != 0 &&
        (iVar2 = FUN_140dae550(local_20,0xffffffff), iVar2 != 0)))) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* address=140c7cf80 name=FUN_140c7cf80 */

undefined8 FUN_140c7cf80(undefined *param_1)

{
  short sVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  short *psVar6;
  longlong lVar7;
  undefined *puVar8;
  ulonglong local_50;
  undefined local_40 [24];
  undefined local_28 [24];
  
  uVar3 = FUN_140c55f80(param_1);
  if (uVar3 < 2) {
    uVar4 = 1;
  }
  else {
    FUN_140c56440(local_40);
    puVar8 = local_28;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *param_1;
      param_1 = param_1 + 1;
      puVar8 = puVar8 + 1;
    }
    cVar2 = FUN_140c569c0(local_40,local_28);
    if (cVar2 == '\0') {
      FUN_140c564c0(local_40);
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_140c55f80(local_40);
      uVar5 = FUN_140c55c70(local_40);
      FUN_140e13e20(uVar5,uVar4,2,&LAB_140c7cf20);
      for (local_50 = 1; uVar3 = FUN_140c55f80(local_40), local_50 < uVar3; local_50 = local_50 + 1)
      {
        psVar6 = (short *)FUN_140c7dd40(local_40,local_50 - 1);
        sVar1 = *psVar6;
        psVar6 = (short *)FUN_140c7dd40(local_40,local_50);
        if (sVar1 == *psVar6) {
          FUN_140c6c4e0(0x10,0,0x128,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                        ,0x254);
          FUN_140c564c0(local_40);
          return 0;
        }
      }
      FUN_140c564c0(local_40);
      uVar4 = 1;
    }
  }
  return uVar4;
}


/* address=140c7d0f0 name=FUN_140c7d0f0 */

undefined FUN_140c7d0f0(undefined8 param_1,undefined *param_2)

{
  short sVar1;
  char cVar2;
  undefined uVar3;
  undefined8 uVar4;
  short *psVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined *puVar8;
  short *local_60;
  longlong local_58;
  undefined local_50 [16];
  undefined *local_40;
  short *local_38;
  undefined local_28 [24];
  
  puVar7 = param_2;
  puVar8 = local_28;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  cVar2 = FUN_140c7cf80(local_28);
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    FUN_140c56440(local_50);
    uVar4 = FUN_140c55f80(param_2);
    cVar2 = FUN_140c568d0(local_50,uVar4);
    if (cVar2 == '\0') {
      FUN_140c564c0(local_50);
      uVar3 = 0;
    }
    else {
      local_58 = 0;
      local_40 = param_2;
      local_60 = (short *)FUN_140c55c70(param_2);
      local_38 = (short *)FUN_140c6e1f0(local_40);
      for (; local_60 != local_38; local_60 = local_60 + 1) {
        sVar1 = *local_60;
        if (sVar1 != -0xff) {
          lVar6 = FUN_140c7cc50(sVar1);
          if (lVar6 == 0) {
            FUN_140c6c4e0(0x10,0,0x127,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                          ,0x270);
            FUN_140c564c0(local_50);
            return 0;
          }
          psVar5 = (short *)FUN_140c7dd40(local_50,local_58);
          *psVar5 = sVar1;
          local_58 = local_58 + 1;
        }
      }
      FUN_140c7dd60(local_50,local_58);
      cVar2 = FUN_140c55f90(param_2);
      if ((cVar2 == '\0') && (cVar2 = FUN_140c55f90(local_50), cVar2 != '\0')) {
        FUN_140c6c4e0(0x10,0,0x127,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                      ,0x27c);
        FUN_140c564c0(local_50);
        uVar3 = 0;
      }
      else {
        uVar4 = FUN_140c55cd0(local_50);
        FUN_140c564e0(param_1,uVar4);
        FUN_140c564c0(local_50);
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}


/* address=140c7d310 name=FUN_140c7d310 */

undefined8 FUN_140c7d310(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  ulonglong local_40;
  int *local_30;
  
  if ((param_3 & 1) == 1) {
    uVar5 = 0;
  }
  else {
    cVar4 = FUN_140c568d0(param_1,param_3 / 2);
    if (cVar4 == '\0') {
      uVar5 = 0;
    }
    else {
      for (local_40 = 0; local_40 < param_3; local_40 = local_40 + 2) {
        iVar1 = *(int *)(param_2 + local_40 * 4);
        iVar2 = *(int *)(param_2 + 4 + local_40 * 4);
        bVar3 = false;
        for (local_30 = &DAT_140fd9cd0;
            local_30 !=
            (int *)
            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
            ; local_30 = local_30 + 3) {
          if ((*local_30 == iVar2) && (local_30[1] == iVar1)) {
            puVar6 = (undefined2 *)FUN_140c7dd40(param_1,local_40 / 2);
            *puVar6 = *(undefined2 *)(local_30 + 2);
            bVar3 = true;
            break;
          }
        }
        if (!bVar3) {
          FUN_140c6c4e0(0x10,0,0x127,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                        ,0x2be);
          FUN_140c6c650("unknown hash:%d pkey:%d",iVar1,iVar2);
          return 0;
        }
      }
      uVar5 = 1;
    }
  }
  return uVar5;
}


/* address=140c7d4c0 name=FUN_140c7d4c0 */

void FUN_140c7d4c0(undefined8 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  ulonglong uVar4;
  undefined auStack_108 [32];
  undefined4 local_e8;
  char local_d8;
  char local_d7;
  char local_d6;
  int local_d4;
  int local_d0;
  ulonglong local_c8;
  int local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  char local_a8;
  ulonglong local_a0;
  char *local_98;
  undefined2 *local_90;
  int *local_88;
  longlong local_80;
  int *local_78;
  ulonglong local_70;
  ulonglong local_68;
  undefined2 *local_60;
  undefined2 *local_58;
  undefined4 *local_50;
  undefined2 *local_48;
  ulonglong local_40;
  char *local_38;
  ulonglong local_30;
  char local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_1413d9c40 ^ (ulonglong)auStack_108;
  local_a0 = 1;
  local_80 = 0;
  for (local_98 = param_2; *local_98 != '\0'; local_98 = local_98 + 1) {
    local_80 = local_80 + 1;
    if (*local_98 == ':') {
      local_a0 = local_a0 + 1;
    }
  }
  cVar1 = FUN_140c568d0(param_1,local_a0);
  if (cVar1 != '\0') {
    local_b0 = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_d4 = 0;
    for (local_b8 = 0; local_b8 < local_80 + 1U; local_b8 = local_b8 + 1) {
      local_d8 = param_2[local_b8];
      local_a8 = local_d8;
      if (local_d8 == '\0') {
LAB_140c7d790:
        if (local_c8 == 0) {
          local_e8 = 0x330;
          FUN_140c6c4e0(0x10,0,0x127,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                       );
          FUN_140c6c650("empty element at offset %zu",local_b8);
          goto LAB_140c7dc76;
        }
        local_68 = local_c8;
        if (0x16 < local_c8) {
          FUN_140db42d8();
        }
        local_28[local_68] = '\0';
        if (local_c0 == 0) {
          local_d7 = '\0';
          local_60 = &DAT_140fd99f0;
          local_48 = (undefined2 *)&DAT_140fd9b42;
          for (local_90 = &DAT_140fd99f0; local_90 != local_48; local_90 = local_90 + 0xd) {
            local_58 = local_90;
            iVar2 = strcmp((char *)(local_90 + 1),local_28);
            if (iVar2 == 0) {
              if (local_a0 <= local_b0) {
                FID_conflict__assert((wchar_t *)"o",(wchar_t *)"D",0x33c);
              }
              local_40 = local_b0;
              puVar3 = (undefined2 *)FUN_140c7dd40(param_1);
              *puVar3 = *local_58;
              local_b0 = local_b0 + 1;
              local_d7 = '\x01';
              break;
            }
          }
          if (local_d7 == '\0') {
            local_e8 = 0x344;
            FUN_140c6c4e0(0x10,0,0x127,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                         );
            FUN_140c6c650("unknown signature algorithm \'%s\'",local_28);
            goto LAB_140c7dc76;
          }
        }
        else {
          iVar2 = strcmp(local_28,"SHA1");
          if (iVar2 == 0) {
            local_d4 = 0x40;
          }
          else {
            iVar2 = strcmp(local_28,"SHA256");
            if (iVar2 == 0) {
              local_d4 = 0x2a0;
            }
            else {
              iVar2 = strcmp(local_28,"SHA384");
              if (iVar2 == 0) {
                local_d4 = 0x2a1;
              }
              else {
                iVar2 = strcmp(local_28,"SHA512");
                if (iVar2 != 0) {
                  local_e8 = 0x352;
                  FUN_140c6c4e0(0x10,0,0x127,
                                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                               );
                  FUN_140c6c650("unknown hash function \'%s\'",local_28);
                  goto LAB_140c7dc76;
                }
                local_d4 = 0x2a2;
              }
            }
          }
          local_d6 = '\0';
          local_50 = &DAT_140fd9cd0;
          local_38 = 
          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
          ;
          for (local_88 = &DAT_140fd9cd0;
              local_88 !=
              (int *)
              "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
              ; local_88 = local_88 + 3) {
            local_78 = local_88;
            if ((*local_88 == local_d0) && (local_88[1] == local_d4)) {
              if (local_a0 <= local_b0) {
                FID_conflict__assert((wchar_t *)"o",(wchar_t *)"D",0x35b);
              }
              local_30 = local_b0;
              puVar3 = (undefined2 *)FUN_140c7dd40(param_1);
              *puVar3 = *(undefined2 *)(local_78 + 2);
              local_b0 = local_b0 + 1;
              local_d6 = '\x01';
              break;
            }
          }
          if (local_d6 == '\0') {
            local_e8 = 0x363;
            FUN_140c6c4e0(0x10,0,0x127,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                         );
            FUN_140c6c650("unknown pkey:%d hash:%s",local_d0,local_28);
            goto LAB_140c7dc76;
          }
        }
        local_c0 = 0;
        local_c8 = 0;
      }
      else if (local_d8 == '+') {
        if (local_c0 == 1) {
          local_e8 = 0x310;
          FUN_140c6c4e0(0x10,0,0x127,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                       );
          FUN_140c6c650("+ found in hash name at offset %zu",local_b8);
          goto LAB_140c7dc76;
        }
        if (local_c8 == 0) {
          local_e8 = 0x315;
          FUN_140c6c4e0(0x10,0,0x127,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                       );
          FUN_140c6c650("empty public key type at offset %zu",local_b8);
          goto LAB_140c7dc76;
        }
        local_70 = local_c8;
        if (0x16 < local_c8) {
          FUN_140db42d8();
        }
        local_28[local_70] = '\0';
        iVar2 = strcmp(local_28,"RSA");
        if (iVar2 == 0) {
          local_d0 = 6;
        }
        else {
          iVar2 = strcmp(local_28,"RSA-PSS");
          if ((iVar2 == 0) || (iVar2 = strcmp(local_28,"PSS"), iVar2 == 0)) {
            local_d0 = 0x390;
          }
          else {
            iVar2 = strcmp(local_28,"ECDSA");
            if (iVar2 != 0) {
              local_e8 = 0x323;
              FUN_140c6c4e0(0x10,0,0x127,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                           );
              FUN_140c6c650("unknown public key type \'%s\'",local_28);
              goto LAB_140c7dc76;
            }
            local_d0 = 0x198;
          }
        }
        local_c0 = 1;
        local_c8 = 0;
      }
      else {
        if (local_d8 == ':') goto LAB_140c7d790;
        if (local_c8 == 0x16) {
          local_e8 = 0x36f;
          FUN_140c6c4e0(0x10,0,0x127,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                       );
          FUN_140c6c650("substring too long at offset %zu",local_b8);
          goto LAB_140c7dc76;
        }
        iVar2 = FUN_140c66770(local_d8);
        if (((iVar2 == 0) && (local_d8 != '-')) && (local_d8 != '_')) {
          local_e8 = 0x377;
          FUN_140c6c4e0(0x10,0,0x127,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                       );
          FUN_140c6c650("invalid character 0x%02x at offest %zu",local_d8,local_b8);
          goto LAB_140c7dc76;
        }
        local_28[local_c8] = local_d8;
        local_c8 = local_c8 + 1;
      }
    }
    uVar4 = FUN_140c55f80(param_1);
    if (local_b0 != uVar4) {
      FID_conflict__assert((wchar_t *)"o",(wchar_t *)"D",0x37f);
    }
  }
LAB_140c7dc76:
  FUN_140db44f0(local_10 ^ (ulonglong)auStack_108);
  return;
}


/* address=140c7dc90 name=FUN_140c7dc90 */

void FUN_140c7dc90(undefined8 param_1)

{
  FUN_140cb5af0(param_1);
  return;
}


/* address=140c7dcb0 name=FUN_140c7dcb0 */

void FUN_140c7dcb0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140c55cd0(param_1);
    FUN_140c7ddd0(uVar1,*param_1);
  }
  return;
}


/* address=140c7dcf0 name=FUN_140c7dcf0 */

undefined8 FUN_140c7dcf0(undefined8 param_1)

{
  FUN_140c7f200(param_1);
  return param_1;
}


/* address=140c7dd20 name=FUN_140c7dd20 */

void FUN_140c7dd20(undefined8 param_1)

{
  FUN_140c7f270(param_1);
  return;
}


/* address=140c7dd40 name=FUN_140c7dd40 */

longlong FUN_140c7dd40(longlong *param_1,longlong param_2)

{
  return *param_1 + param_2 * 2;
}


/* address=140c7dd60 name=FUN_140c7dd60 */

void FUN_140c7dd60(longlong param_1,ulonglong param_2)

{
  ulonglong local_18;
  
  local_18 = param_2;
  if (param_2 <= *(ulonglong *)(param_1 + 8)) {
    for (; local_18 < *(ulonglong *)(param_1 + 8); local_18 = local_18 + 1) {
    }
    *(ulonglong *)(param_1 + 8) = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* address=140c7ddd0 name=FUN_140c7ddd0 */

void FUN_140c7ddd0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c7dc90(param_2);
  return;
}


/* address=140c7ddf0 name=FUN_140c7ddf0 */

undefined8 FUN_140c7ddf0(undefined4 *param_1)

{
  FUN_140c809d0(param_1,0,0x60);
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  param_1[4] = 0xc3d2e1f0;
  return 1;
}


/* address=140c7de90 name=FUN_140c7de90 */

undefined8 FUN_140c7de90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140ccca90(FUN_140aa19c0,param_1,param_1 + 0x1c,0x40,param_1 + 0x5c,param_1 + 0x18,
                param_1 + 0x14,param_2,param_3);
  return 1;
}


/* address=140c7df30 name=FUN_140c7df30 */

undefined8 FUN_140c7df30(longlong param_1,undefined4 *param_2)

{
  FUN_140ccccf0(FUN_140aa19c0,param_2,param_2 + 7,0x40,param_2 + 0x17,param_2[6],param_2[5],1);
  FUN_140c80ab0(param_1,*param_2);
  FUN_140c80ab0(param_1 + 4,param_2[1]);
  FUN_140c80ab0(param_1 + 8,param_2[2]);
  FUN_140c80ab0(param_1 + 0xc,param_2[3]);
  FUN_140c80ab0(param_1 + 0x10,param_2[4]);
  FUN_140c8a360();
  return 1;
}


/* address=140c7e0e0 name=FUN_140c7e0e0 */

void FUN_140c7e0e0(undefined8 param_1,undefined8 param_2)

{
  FUN_140aa19c0(param_1,param_2,1);
  return;
}


/* address=140c7e120 name=FUN_140c7e120 */

undefined8 FUN_140c7e120(undefined4 *param_1)

{
  FUN_140c809d0(param_1,0,0x70);
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


/* address=140c7e200 name=FUN_140c7e200 */

void FUN_140c7e200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140c7e420(param_1,param_2,param_3);
  return;
}


/* address=140c7e240 name=FUN_140c7e240 */

void FUN_140c7e240(undefined8 param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0x6c) != 0x1c) {
    FID_conflict__assert((wchar_t *)s_c_1413b8e10,(wchar_t *)s_D_1413b8d30,0xab);
  }
  FUN_140cd3370(param_1,0x1c,param_2);
  return;
}


/* address=140c7e2a0 name=FUN_140c7e2a0 */

void FUN_140c7e2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auStack_a8 [32];
  undefined local_88 [112];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_a8;
  FUN_140c7e120(local_88);
  FUN_140c7e200(local_88,param_1,param_2);
  FUN_140c7e240(param_3,local_88);
  FUN_140c663a0(local_88,0x70);
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=140c7e340 name=FUN_140c7e340 */

undefined8 FUN_140c7e340(undefined4 *param_1)

{
  FUN_140c809d0(param_1,0,0x70);
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


/* address=140c7e420 name=FUN_140c7e420 */

undefined8 FUN_140c7e420(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140ccca90(FUN_140aa65c0,param_1,param_1 + 0x28,0x40,param_1 + 0x68,param_1 + 0x24,
                param_1 + 0x20,param_2,param_3);
  return 1;
}


/* address=140c7e4c0 name=FUN_140c7e4c0 */

void FUN_140c7e4c0(undefined8 param_1,longlong param_2)

{
  FUN_140cd3370(param_1,*(undefined4 *)(param_2 + 0x6c),param_2);
  return;
}


/* address=140c7e500 name=FUN_140c7e500 */

void FUN_140c7e500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auStack_a8 [32];
  undefined local_88 [112];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_a8;
  FUN_140c7e340(local_88);
  FUN_140c7e420(local_88,param_1,param_2);
  FUN_140c7e4c0(param_3,local_88);
  FUN_140c663a0(local_88,0x70);
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=140c7e5a0 name=FUN_140c7e5a0 */

void FUN_140c7e5a0(undefined8 param_1,undefined8 param_2)

{
  FUN_140aa65c0(param_1,param_2,1);
  return;
}


/* address=140c7e620 name=FUN_140c7e620 */

undefined8 FUN_140c7e620(undefined8 *param_1)

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


/* address=140c7e750 name=FUN_140c7e750 */

void FUN_140c7e750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140c7e9c0(param_1,param_2,param_3);
  return;
}


/* address=140c7e790 name=FUN_140c7e790 */

void FUN_140c7e790(undefined8 param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0xd4) != 0x30) {
    FID_conflict__assert((wchar_t *)s_s_1413b8f40,(wchar_t *)s_D_1413b8e60,0xa7);
  }
  FUN_140cd3490(param_1,0x30,param_2);
  return;
}


/* address=140c7e7f0 name=FUN_140c7e7f0 */

void FUN_140c7e7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auStack_118 [32];
  undefined local_f8 [224];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_118;
  FUN_140c7e620(local_f8);
  FUN_140c7e750(local_f8,param_1,param_2);
  FUN_140c7e790(param_3,local_f8);
  FUN_140c663a0(local_f8,0xd8);
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_118);
  return;
}


/* address=140c7e890 name=FUN_140c7e890 */

undefined8 FUN_140c7e890(undefined8 *param_1)

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


/* address=140c7e9c0 name=FUN_140c7e9c0 */

undefined8 FUN_140c7e9c0(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong local_res18;
  longlong local_28;
  
  lVar1 = param_1 + 0x50;
  if (param_3 != 0) {
    uVar2 = *(longlong *)(param_1 + 0x40) + param_3 * 8;
    if (uVar2 < *(ulonglong *)(param_1 + 0x40)) {
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 1;
    }
    *(ulonglong *)(param_1 + 0x48) = (param_3 >> 0x3d) + *(longlong *)(param_1 + 0x48);
    *(ulonglong *)(param_1 + 0x40) = uVar2;
    local_res18 = param_3;
    local_28 = param_2;
    if (*(int *)(param_1 + 0xd0) != 0) {
      uVar2 = 0x80 - (ulonglong)*(uint *)(param_1 + 0xd0);
      if (param_3 < uVar2) {
        FUN_140c80930(lVar1 + (ulonglong)*(uint *)(param_1 + 0xd0),param_2,param_3);
        local_res18._0_4_ = (int)param_3;
        *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + (int)local_res18;
        return 1;
      }
      FUN_140c80930(lVar1 + (ulonglong)*(uint *)(param_1 + 0xd0),param_2,uVar2);
      *(undefined4 *)(param_1 + 0xd0) = 0;
      local_res18 = param_3 - uVar2;
      local_28 = param_2 + uVar2;
      FUN_140aa9bc0(param_1,lVar1,1);
    }
    if (0x7f < local_res18) {
      FUN_140aa9bc0(param_1,local_28,local_res18 / 0x80);
      local_28 = local_28 + local_res18;
      local_res18 = local_res18 % 0x80;
      local_28 = local_28 - local_res18;
    }
    if (local_res18 != 0) {
      FUN_140c80930(lVar1,local_28,local_res18);
      *(int *)(param_1 + 0xd0) = (int)local_res18;
    }
  }
  return 1;
}


/* address=140c7ec20 name=FUN_140c7ec20 */

void FUN_140c7ec20(undefined8 param_1,longlong param_2)

{
  FUN_140cd3490(param_1,*(undefined4 *)(param_2 + 0xd4),param_2);
  return;
}


/* address=140c7ec60 name=FUN_140c7ec60 */

void FUN_140c7ec60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auStack_118 [32];
  undefined local_f8 [224];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_118;
  FUN_140c7e890(local_f8);
  FUN_140c7e9c0(local_f8,param_1,param_2);
  FUN_140c7ec20(param_3,local_f8);
  FUN_140c663a0(local_f8,0xd8);
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_118);
  return;
}


/* address=140c7ed40 name=FUN_140c7ed40 */

undefined8 FUN_140c7ed40(undefined8 *param_1)

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


/* address=140c7ee70 name=FUN_140c7ee70 */

void FUN_140c7ee70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140c7e9c0(param_1,param_2,param_3);
  return;
}


/* address=140c7eeb0 name=FUN_140c7eeb0 */

void FUN_140c7eeb0(undefined8 param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0xd4) != 0x20) {
    FID_conflict__assert((wchar_t *)s_s_1413b9070,(wchar_t *)s_D_1413b8f90,0xb6);
  }
  FUN_140cd3490(param_1,0x20,param_2);
  return;
}


/* address=140c7efc0 name=FUN_140c7efc0 */

undefined8 FUN_140c7efc0(void)

{
  return 0;
}


/* address=140c7f080 name=FUN_140c7f080 */

void FUN_140c7f080(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140cb43e0();
  FUN_140d395d0(uVar1,&LAB_140cb4470);
  FUN_140cb43d0();
  return;
}


/* address=140c7f0b0 name=FUN_140c7f0b0 */

void FUN_140c7f0b0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140cb45a0();
  FUN_140d395d0(uVar1,&LAB_140cb4630);
  FUN_140cb4590();
  return;
}


/* address=140c7f110 name=FUN_140c7f110 */

void FUN_140c7f110(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140cb4920();
  FUN_140d395d0(uVar1,&LAB_140cb49b0);
  FUN_140cb4910();
  return;
}


/* address=140c7f140 name=FUN_140c7f140 */

void FUN_140c7f140(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140cb4ae0();
  FUN_140d395d0(uVar1,&LAB_140cb4b70);
  FUN_140cb4ad0();
  return;
}


/* address=140c7f1d0 name=FUN_140c7f1d0 */

void FUN_140c7f1d0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140cb50a0();
  FUN_140d395d0(uVar1,&LAB_140cb5130);
  FUN_140cb5090();
  return;
}


/* address=140c7f200 name=FUN_140c7f200 */

void FUN_140c7f200(undefined8 param_1)

{
  FUN_140c809d0(param_1,0,0x20);
  return;
}


/* address=140c7f230 name=FUN_140c7f230 */

longlong FUN_140c7f230(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140c660d0(0x20);
  if (lVar1 != 0) {
    FUN_140c7f200(lVar1);
  }
  return lVar1;
}


/* address=140c7f270 name=FUN_140c7f270 */

undefined8 FUN_140c7f270(longlong param_1)

{
  FUN_140c66200(*(undefined8 *)(param_1 + 8));
  if ((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong *)(param_1 + 0x18) == 0)) {
    FID_conflict__assert((wchar_t *)s_c_1413aa550,(wchar_t *)s_D_1413aa470,99);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (***(code ***)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_140c7f200(param_1);
  return 1;
}


/* address=140c7f300 name=FUN_140c7f300 */

void FUN_140c7f300(longlong *param_1)

{
  FUN_140c663a0(param_1[1],*(undefined4 *)(*param_1 + 0x2c));
  FUN_140c7f270(param_1);
  return;
}


/* address=140c7f340 name=FUN_140c7f340 */

void FUN_140c7f340(longlong param_1)

{
  if (param_1 != 0) {
    FUN_140c7f270(param_1);
    FUN_140c66200(param_1);
  }
  return;
}


/* address=140c7f380 name=FUN_140c7f380 */

undefined8 FUN_140c7f380(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong local_18;
  longlong local_10;
  
  if ((param_2 == (longlong *)0x0) || ((param_2[2] == 0 && (*param_2 == 0)))) {
    FUN_140c6c4e0(0x1d,0,100,s_D__a_1_s_target_release_build_bo_1413aa620,0x8a);
    uVar1 = 0;
  }
  else {
    local_18 = 0;
    if ((param_2[2] != 0) && (param_2[3] == 0)) {
      FID_conflict__assert((wchar_t *)s_i_1413aa770,(wchar_t *)s_D_1413aa690,0x8f);
    }
    if ((param_2[2] == 0) || (local_18 = (**(code **)(param_2[3] + 8))(param_2[2]), local_18 != 0))
    {
      local_10 = 0;
      if (*param_2 != 0) {
        if (*param_1 == *param_2) {
          local_10 = param_1[1];
          param_1[1] = 0;
        }
        else {
          if (*(int *)(*param_2 + 0x2c) == 0) {
            FID_conflict__assert((wchar_t *)s_i_1413aa8b0,(wchar_t *)s_D_1413aa7d0,0x9a);
          }
          local_10 = FUN_140c660d0(*(undefined4 *)(*param_2 + 0x2c));
          if (local_10 == 0) {
            if (local_18 != 0) {
              (**(code **)param_2[3])(local_18);
            }
            return 0;
          }
        }
      }
      FUN_140c7f270(param_1);
      *param_1 = *param_2;
      param_1[1] = local_10;
      if (*param_2 != 0) {
        FUN_140c80930(param_1[1],param_2[1],*(undefined4 *)(*param_2 + 0x2c));
      }
      param_1[2] = local_18;
      param_1[3] = param_2[3];
      if ((param_1[2] != 0) && (param_1[3] == 0)) {
        FID_conflict__assert((wchar_t *)s_o_1413aa9d0,(wchar_t *)s_D_1413aa8f0,0xb4);
      }
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* address=140c7f5c0 name=FUN_140c7f5c0 */

void FUN_140c7f5c0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c7f270(param_1);
  FUN_140c80930(param_1,param_2,0x20);
  FUN_140c7f200(param_2);
  return;
}


/* address=140c7f640 name=FUN_140c7f640 */

undefined8 FUN_140c7f640(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*param_1 != param_2) {
    if (*(int *)(param_2 + 0x2c) == 0) {
      FID_conflict__assert((wchar_t *)s_t_1413aab10,(wchar_t *)s_D_1413aaa30,0xcd);
    }
    lVar1 = FUN_140c660d0(*(undefined4 *)(param_2 + 0x2c));
    if (lVar1 == 0) {
      return 0;
    }
    FUN_140c66200(param_1[1]);
    param_1[1] = lVar1;
    *param_1 = param_2;
  }
  if ((param_1[2] != 0) && (param_1[3] == 0)) {
    FID_conflict__assert((wchar_t *)s_c_1413aac20,(wchar_t *)s_D_1413aab40,0xd8);
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  return 1;
}


/* address=140c7f770 name=FUN_140c7f770 */

undefined8 FUN_140c7f770(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3);
  return 1;
}


/* address=140c7f7b0 name=FUN_140c7f7b0 */

undefined8 FUN_140c7f7b0(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  if (0x40 < *(uint *)(*param_1 + 4)) {
    FID_conflict__assert((wchar_t *)s_c_1413aad60,(wchar_t *)s_D_1413aac80,0xe9);
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_2);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(*param_1 + 4);
  }
  FUN_140c663a0(param_1[1],*(undefined4 *)(*param_1 + 0x2c));
  return 1;
}


/* address=140c7f8a0 name=FUN_140c7f8a0 */

undefined4
FUN_140c7f8a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 local_38;
  undefined local_30 [48];
  
  FUN_140c7f200(local_30);
  iVar1 = FUN_140c7f640(local_30,param_5,param_6);
  if (iVar1 != 0) {
    iVar1 = FUN_140c7f770(local_30,param_1,param_2);
    if (iVar1 != 0) {
      iVar1 = FUN_140c7f7b0(local_30,param_3,param_4);
      if (iVar1 != 0) {
        local_38 = 1;
        goto LAB_140c7f922;
      }
    }
  }
  local_38 = 0;
LAB_140c7f922:
  FUN_140c7f270(local_30);
  return local_38;
}


/* address=140c7f950 name=FUN_140c7f950 */

undefined4 FUN_140c7f950(undefined4 *param_1)

{
  return *param_1;
}


/* address=140c7f970 name=FUN_140c7f970 */

undefined4 FUN_140c7f970(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


/* address=140c7f990 name=FUN_140c7f990 */

undefined4 FUN_140c7f990(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* address=140c7f9b0 name=FUN_140c7f9b0 */

undefined4 FUN_140c7f9b0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}


/* address=140c7f9d0 name=FUN_140c7f9d0 */

undefined8 FUN_140c7f9d0(undefined8 *param_1)

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


/* address=140c7fbc0 name=FUN_140c7fbc0 */

undefined8
FUN_140c7fbc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  int iVar2;
  undefined local_78 [120];
  
  FUN_140c7fcb0(local_78);
  FUN_140c8a370();
  iVar2 = FUN_140c7fe50(local_78,param_2,param_3,param_1,0);
  if (iVar2 != 0) {
    iVar2 = FUN_140c801b0(local_78,param_4,param_5);
    if (iVar2 != 0) {
      iVar2 = FUN_140c801f0(local_78,param_6,param_7);
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_140c7fc67;
      }
    }
  }
  bVar1 = false;
LAB_140c7fc67:
  FUN_140c8a380();
  FUN_140c7fd50(local_78);
  if (bVar1) {
    FUN_140c8a400(param_1);
  }
  else {
    param_6 = 0;
  }
  return param_6;
}


/* address=140c7fcb0 name=FUN_140c7fcb0 */

void FUN_140c7fcb0(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_140c7f200(param_1 + 5);
  FUN_140c7f200(param_1 + 9);
  FUN_140c7f200(param_1 + 1);
  return;
}


/* address=140c7fd50 name=FUN_140c7fd50 */

void FUN_140c7fd50(longlong param_1)

{
  FUN_140c7f270(param_1 + 0x28);
  FUN_140c7f270(param_1 + 0x48);
  FUN_140c7f270(param_1 + 8);
  FUN_140c663a0(param_1,0x68);
  return;
}


/* address=140c7fe50 name=FUN_140c7fe50 */

void FUN_140c7fe50(longlong *param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  undefined8 param_5)

{
  int iVar1;
  ulonglong uVar2;
  uint local_res18;
  longlong local_res20;
  undefined auStack_158 [32];
  ulonglong local_138;
  uint local_130;
  undefined4 local_12c;
  ulonglong local_128;
  ulonglong local_120;
  byte local_118 [128];
  byte local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_158;
  local_12c = 0;
  FUN_140c8a370();
  local_res20 = param_4;
  if (param_4 == 0) {
    local_res20 = *param_1;
  }
  if ((local_res20 != *param_1) || (param_2 != 0)) {
    local_138 = FUN_140c7f9b0(local_res20);
    if (0x80 < local_138) {
      FID_conflict__assert((wchar_t *)s_b_1413b2d80,(wchar_t *)s_D_1413b2ca0,0x99);
    }
    uVar2 = FUN_140c7f990(local_res20);
    if (local_138 < uVar2) {
      FID_conflict__assert((wchar_t *)s_E_1413b2e98,(wchar_t *)s_D_1413b2dc0,0x9a);
    }
    if (local_138 < param_3) {
      iVar1 = FUN_140c7f640(param_1 + 1,local_res20,param_5);
      if (((iVar1 == 0) || (iVar1 = FUN_140c7f770(param_1 + 1,param_2,param_3), iVar1 == 0)) ||
         (iVar1 = FUN_140c7f7b0(param_1 + 1,local_118,&local_130), iVar1 == 0)) goto LAB_140c80182;
    }
    else {
      if (0x80 < param_3) {
        FID_conflict__assert((wchar_t *)s_k_1413b2fb8,(wchar_t *)s_D_1413b2ee0,0xa3);
      }
      FUN_140c80930(local_118,param_2,param_3);
      local_res18 = (uint)param_3;
      local_130 = local_res18;
    }
    FUN_140c809d0(local_118 + local_130,0,local_138 - local_130);
    for (local_128 = 0; local_128 < local_138; local_128 = local_128 + 1) {
      local_98[local_128] = local_118[local_128] ^ 0x36;
    }
    iVar1 = FUN_140c7f640(param_1 + 5,local_res20,param_5);
    if ((iVar1 == 0) || (iVar1 = FUN_140c7f770(param_1 + 5,local_98,local_138), iVar1 == 0))
    goto LAB_140c80182;
    for (local_120 = 0; local_120 < local_138; local_120 = local_120 + 1) {
      local_98[local_120] = local_118[local_120] ^ 0x5c;
    }
    iVar1 = FUN_140c7f640(param_1 + 9,local_res20,param_5);
    if ((iVar1 == 0) || (iVar1 = FUN_140c7f770(param_1 + 9,local_98,local_138), iVar1 == 0))
    goto LAB_140c80182;
    *param_1 = local_res20;
  }
  local_12c = FUN_140c7f380(param_1 + 1,param_1 + 5);
LAB_140c80182:
  FUN_140c8a380();
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_158);
  return;
}


/* address=140c801b0 name=FUN_140c801b0 */

void FUN_140c801b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140c7f770(param_1 + 8,param_2,param_3);
  return;
}


/* address=140c801f0 name=FUN_140c801f0 */

void FUN_140c801f0(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined auStack_88 [32];
  int local_68;
  undefined4 local_64 [3];
  undefined local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_88;
  local_68 = 0;
  FUN_140c8a370();
  iVar1 = FUN_140c7f7b0(param_1 + 1,local_58,local_64);
  if (iVar1 != 0) {
    iVar1 = FUN_140c7f380(param_1 + 1,param_1 + 9);
    if (iVar1 != 0) {
      iVar1 = FUN_140c7f770(param_1 + 1,local_58,local_64[0]);
      if (iVar1 != 0) {
        iVar1 = FUN_140c7f7b0(param_1 + 1,param_2,param_3);
        if (iVar1 != 0) {
          local_68 = 1;
          goto LAB_140c802c9;
        }
      }
    }
  }
  *param_3 = 0;
LAB_140c802c9:
  FUN_140c8a380();
  if (local_68 != 0) {
    FUN_140c8a400(*param_1);
  }
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_88);
  return;
}


/* address=140c80310 name=FUN_140c80310 */

void FUN_140c80310(undefined8 *param_1)

{
  FUN_140c7f990(*param_1);
  return;
}


/* address=140c80360 name=FUN_140c80360 */

undefined8 FUN_140c80360(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_140c7f380(param_1 + 5,param_2 + 5);
  if (((iVar1 != 0) && (iVar1 = FUN_140c7f380(param_1 + 9,param_2 + 9), iVar1 != 0)) &&
     (iVar1 = FUN_140c7f380(param_1 + 1,param_2 + 1), iVar1 != 0)) {
    *param_1 = *param_2;
    return 1;
  }
  return 0;
}


/* address=140c804d0 name=FUN_140c804d0 */

undefined4 FUN_140c804d0(ulonglong param_1,longlong param_2,ulonglong param_3,longlong param_4)

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


/* address=140c80550 name=FUN_140c80550 */

ulonglong FUN_140c80550(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  if ((param_2 == 0) || ((param_2 & param_2 - 1) != 0)) {
    FID_conflict__assert((wchar_t *)s_a_14139f8d0,(wchar_t *)s_D_14139f7f0,0x102);
  }
  uVar1 = param_1 + (-param_1 & param_2 - 1);
  if ((uVar1 & param_2 - 1) != 0) {
    FID_conflict__assert((wchar_t *)s___14139fa20,(wchar_t *)s_D_14139f940,0x10a);
  }
  return uVar1;
}


/* address=140c80610 name=FUN_140c80610 */

undefined8 FUN_140c80610(undefined8 param_1)

{
  return param_1;
}


/* address=140c80630 name=FUN_140c80630 */

undefined4 FUN_140c80630(undefined4 param_1)

{
  return param_1;
}


/* address=140c80640 name=FUN_140c80640 */

longlong FUN_140c80640(longlong param_1)

{
  return param_1 >> 0x3f;
}


/* address=140c80660 name=FUN_140c80660 */

void FUN_140c80660(ulonglong param_1,ulonglong param_2)

{
  FUN_140c80640(param_1 ^ (param_1 ^ param_2 | param_1 - param_2 ^ param_1));
  return;
}


/* address=140c806c0 name=FUN_140c806c0 */

ulonglong FUN_140c806c0(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_140c80660(param_1,param_2);
  return ~uVar1;
}


/* address=140c806f0 name=FUN_140c806f0 */

void FUN_140c806f0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c806c0(param_1,param_2);
  return;
}


/* address=140c80720 name=FUN_140c80720 */

void FUN_140c80720(ulonglong param_1)

{
  FUN_140c80640(~param_1 & param_1 - 1);
  return;
}


/* address=140c80750 name=FUN_140c80750 */

void FUN_140c80750(ulonglong param_1,ulonglong param_2)

{
  FUN_140c80720(param_1 ^ param_2);
  return;
}


/* address=140c80790 name=FUN_140c80790 */

void FUN_140c80790(int param_1,int param_2)

{
  FUN_140c80750((longlong)param_1,(longlong)param_2);
  return;
}


/* address=140c807c0 name=FUN_140c807c0 */

ulonglong FUN_140c807c0(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_140c80610(param_1);
  uVar2 = FUN_140c80610(~param_1);
  return uVar1 & param_2 | uVar2 & param_3;
}


/* address=140c80810 name=FUN_140c80810 */

void FUN_140c80810(undefined8 param_1,int param_2,int param_3)

{
  FUN_140c807c0(param_1,(longlong)param_2,(longlong)param_3);
  return;
}


/* address=140c80850 name=FUN_140c80850 */

void FUN_140c80850(undefined4 param_1)

{
  FUN_140c80630(param_1);
  return;
}


/* address=140c80870 name=FUN_140c80870 */

uint FUN_140c80870(uint param_1)

{
  return param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
}


/* address=140c80890 name=FUN_140c80890 */

ulonglong FUN_140c80890(ulonglong param_1)

{
  return param_1 >> 0x38 | (param_1 & 0xff000000000000) >> 0x28 | (param_1 & 0xff0000000000) >> 0x18
         | (param_1 & 0xff00000000) >> 8 | (param_1 & 0xff000000) << 8 |
         (param_1 & 0xff0000) << 0x18 | (param_1 & 0xff00) << 0x28 | param_1 << 0x38;
}


/* address=140c808b0 name=FUN_140c808b0 */

undefined8 FUN_140c808b0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140e28500(param_1,param_2,param_3);
  }
  return uVar1;
}


/* address=140c808f0 name=FUN_140c808f0 */

int FUN_140c808f0(void *param_1,void *param_2,size_t param_3)

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


/* address=140c80930 name=FUN_140c80930 */

undefined8 FUN_140c80930(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140c80980 name=FUN_140c80980 */

undefined8 FUN_140c80980(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140c809d0 name=FUN_140c809d0 */

undefined8 FUN_140c809d0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e28d40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140c80a10 name=FUN_140c80a10 */

undefined4 FUN_140c80a10(undefined8 param_1)

{
  undefined4 local_18 [6];
  
  FUN_140c80930(local_18,param_1,4);
  return local_18[0];
}


/* address=140c80a40 name=FUN_140c80a40 */

void FUN_140c80a40(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  FUN_140c80930(param_1,local_res10,4);
  return;
}


/* address=140c80a70 name=FUN_140c80a70 */

void FUN_140c80a70(undefined8 param_1)

{
  undefined4 local_18 [6];
  
  FUN_140c80930(local_18,param_1,4);
  FUN_140c80870(local_18[0]);
  return;
}


/* address=140c80ab0 name=FUN_140c80ab0 */

void FUN_140c80ab0(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  local_res10[0] = FUN_140c80870(param_2);
  FUN_140c80930(param_1,local_res10,4);
  return;
}


/* address=140c80af0 name=FUN_140c80af0 */

undefined8 FUN_140c80af0(undefined8 param_1)

{
  undefined8 local_18 [3];
  
  FUN_140c80930(local_18,param_1,8);
  return local_18[0];
}


/* address=140c80b20 name=FUN_140c80b20 */

void FUN_140c80b20(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_140c80930(param_1,local_res10,8);
  return;
}


/* address=140c80b50 name=FUN_140c80b50 */

void FUN_140c80b50(undefined8 param_1)

{
  undefined8 local_18 [3];
  
  FUN_140c80930(local_18,param_1,8);
  FUN_140c80890(local_18[0]);
  return;
}


/* address=140c80b90 name=FUN_140c80b90 */

void FUN_140c80b90(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  local_res10[0] = FUN_140c80890(param_2);
  FUN_140c80930(param_1,local_res10,8);
  return;
}


/* address=140c80bd0 name=FUN_140c80bd0 */

undefined8 FUN_140c80bd0(undefined8 param_1)

{
  undefined8 local_18 [3];
  
  FUN_140c80930(local_18,param_1,8);
  return local_18[0];
}


/* address=140c80c00 name=FUN_140c80c00 */

void FUN_140c80c00(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_140c80930(param_1,local_res10,8);
  return;
}


/* address=140c80c30 name=FUN_140c80c30 */

void FUN_140c80c30(undefined8 param_1)

{
  undefined8 local_18 [3];
  
  FUN_140c80930(local_18,param_1,8);
  FUN_140c80890(local_18[0]);
  return;
}


/* address=140c80c70 name=FUN_140c80c70 */

uint FUN_140c80c70(uint param_1,byte param_2)

{
  return param_1 << (param_2 & 0x1f) | param_1 >> 0x20 - (param_2 & 0x1f);
}


/* address=140c80c90 name=FUN_140c80c90 */

void FUN_140c80c90(void)

{
  return;
}


/* address=140c80ca0 name=FUN_140c80ca0 */

void FUN_140c80ca0(void)

{
  return;
}


/* address=140c80cb0 name=FUN_140c80cb0 */

void FUN_140c80cb0(void)

{
  return;
}


/* address=140c80cc0 name=FUN_140c80cc0 */

void FUN_140c80cc0(void)

{
  return;
}


/* address=140c80cd0 name=FUN_140c80cd0 */

undefined8 FUN_140c80cd0(void)

{
  return 0;
}


/* address=140c80ce0 name=FUN_140c80ce0 */

undefined4 * FUN_140c80ce0(void)

{
  return &DAT_1413eb0b0;
}


/* address=140c80cf0 name=FUN_140c80cf0 */

bool FUN_140c80cf0(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_140c80ce0();
  return (*puVar1 & 0x1000000) != 0;
}


/* address=140c80d30 name=FUN_140c80d30 */

bool FUN_140c80d30(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_140c80ce0();
  return (*puVar1 & 0x40000000) != 0;
}


/* address=140c80d70 name=FUN_140c80d70 */

bool FUN_140c80d70(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140c80ce0();
  return (*(uint *)(lVar1 + 4) & 2) != 0;
}


/* address=140c80db0 name=FUN_140c80db0 */

bool FUN_140c80db0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140c80ce0();
  return (*(uint *)(lVar1 + 4) & 0x200) != 0;
}


/* address=140c80df0 name=FUN_140c80df0 */

bool FUN_140c80df0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140c80ce0();
  return (*(uint *)(lVar1 + 4) & 0x400000) != 0;
}


/* address=140c80e30 name=FUN_140c80e30 */

bool FUN_140c80e30(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140c80ce0();
  return (*(uint *)(lVar1 + 4) & 0x2000000) != 0;
}


/* address=140c80e70 name=FUN_140c80e70 */

bool FUN_140c80e70(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140c80ce0();
  return (*(uint *)(lVar1 + 4) & 0x10000000) != 0;
}


/* address=140c80eb0 name=FUN_140c80eb0 */

bool FUN_140c80eb0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140c80ce0();
  return (*(uint *)(lVar1 + 4) & 0x40000000) != 0;
}


/* address=140c80ef0 name=FUN_140c80ef0 */

bool FUN_140c80ef0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140c80ce0();
  return (*(uint *)(lVar1 + 8) & 8) != 0;
}


/* address=140c80f30 name=FUN_140c80f30 */

bool FUN_140c80f30(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140c80ce0();
  return (*(uint *)(lVar1 + 8) & 0x20) != 0;
}


/* address=140c80f70 name=FUN_140c80f70 */

bool FUN_140c80f70(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140c80ce0();
  return (*(uint *)(lVar1 + 8) & 0x100) != 0;
}


/* address=140c80fb0 name=FUN_140c80fb0 */

bool FUN_140c80fb0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140c80ce0();
  return (*(uint *)(lVar1 + 8) & 0x80000) != 0;
}


/* address=140c80ff0 name=FUN_140c80ff0 */

undefined8 FUN_140c80ff0(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((param_2 == 0x80) || (param_2 == 0xc0)) || (param_2 == 0x100)) {
    iVar1 = FUN_140c81e20();
    if (iVar1 == 0) {
      iVar1 = FUN_140c81e40();
      if (iVar1 == 0) {
        uVar2 = FUN_140c81ec0(param_1,param_2,param_3);
      }
      else {
        uVar2 = FUN_140a93510(param_1,param_2,param_3);
      }
    }
    else {
      uVar2 = FUN_140a92420(param_1,param_2,param_3);
    }
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}


/* address=140c81130 name=FUN_140c81130 */

void FUN_140c81130(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_140c81e20();
  if (iVar1 == 0) {
    iVar1 = FUN_140c81e40();
    if (iVar1 == 0) {
      FUN_140c81f80(param_1,param_2,param_3);
    }
    else {
      FUN_140a936e0(param_1,param_2,param_3);
    }
  }
  else {
    FUN_140a901c0(param_1,param_2,param_3);
  }
  return;
}


/* address=140c811b0 name=FUN_140c811b0 */

void FUN_140c811b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_140c81e20();
  if (iVar1 == 0) {
    iVar1 = FUN_140c81e40();
    if (iVar1 == 0) {
      FUN_140c82030(param_1,param_2,param_3);
    }
    else {
      FUN_140a937b0(param_1,param_2,param_3);
    }
  }
  else {
    FUN_140a90210(param_1,param_2,param_3);
  }
  return;
}


/* address=140c81350 name=FUN_140c81350 */

void FUN_140c81350(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    FID_conflict__assert((wchar_t *)s_i_1413a02d8,(wchar_t *)s_D_1413a01f0,0x54);
  }
  if ((param_4 != 1) && (param_4 != 0)) {
    FID_conflict__assert((wchar_t *)s___1413a03f0,(wchar_t *)s_D_1413a0300,0x55);
  }
  if (param_4 == 1) {
    FUN_140c81130(param_1,param_2,param_3);
  }
  else {
    FUN_140c811b0(param_1,param_2,param_3);
  }
  FUN_140c8a360();
  return;
}


/* address=140c81630 name=FUN_140c81630 */

void FUN_140c81630(undefined8 param_1,undefined *param_2,longlong param_3,undefined8 param_4,
                  ulonglong param_5)

{
  undefined *local_res10;
  undefined auStack_58 [32];
  uint local_38;
  int local_34;
  ulonglong local_30;
  ulonglong local_28;
  undefined local_20 [4];
  byte bStack_1c;
  byte bStack_1b;
  byte bStack_1a;
  byte bStack_19;
  undefined local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_1413d9c40 ^ (ulonglong)auStack_58;
  if (((param_5 < 0x7ffffff8) && (0xf < param_5)) && (param_5 % 8 == 0)) {
    local_res10 = param_2;
    if (param_2 == (undefined *)0x0) {
      local_res10 = &DAT_141002010;
    }
    FUN_140c80980(param_3 + 8,param_4,param_5);
    FUN_140c80930(local_20,local_res10,8);
    local_28 = param_5 / 8;
    for (local_38 = 0; local_38 < DAT_140fdc228; local_38 = local_38 + 1) {
      for (local_30 = 1; local_30 <= local_28; local_30 = local_30 + 1) {
        FUN_140c80930(local_18,param_3 + local_30 * 8,8);
        FUN_140c81130(local_20,local_20,param_1);
        local_34 = (int)local_28 * local_38 + (int)local_30;
        bStack_19 = bStack_19 ^ (byte)local_34;
        bStack_1a = bStack_1a ^ (byte)((uint)local_34 >> 8);
        bStack_1b = bStack_1b ^ (byte)((uint)local_34 >> 0x10);
        bStack_1c = bStack_1c ^ (byte)((uint)local_34 >> 0x18);
        FUN_140c80930(param_3 + local_30 * 8,local_18,8);
      }
    }
    FUN_140c80930(param_3,local_20,8);
    FUN_140c8a360();
  }
  FUN_140db44f0(local_10 ^ (ulonglong)auStack_58);
  return;
}


/* address=140c81e20 name=FUN_140c81e20 */

void FUN_140c81e20(void)

{
  FUN_140c80e30();
  return;
}


/* address=140c81e40 name=FUN_140c81e40 */

void FUN_140c81e40(void)

{
  FUN_140c80db0();
  return;
}


/* address=140c81e60 name=FUN_140c81e60 */

undefined FUN_140c81e60(void)

{
  return 0;
}


/* address=140c81ea0 name=FUN_140c81ea0 */

void FUN_140c81ea0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* address=140c81ec0 name=FUN_140c81ec0 */

undefined8 FUN_140c81ec0(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_2 == 0x80) {
    FUN_140c89650(param_3,param_1);
    uVar1 = 0;
  }
  else if (param_2 == 0xc0) {
    FUN_140c89830(param_3,param_1);
    uVar1 = 0;
  }
  else if (param_2 == 0x100) {
    FUN_140c89f00(param_3,param_1);
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* address=140c81f50 name=FUN_140c81f50 */

void FUN_140c81f50(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_140c81ec0(param_1,param_2,param_3);
  return;
}


/* address=140c81f80 name=FUN_140c81f80 */

void FUN_140c81f80(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined auStack_438 [32];
  undefined local_418 [64];
  undefined local_3d8 [960];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_438;
  FUN_140c894b0(local_3d8,param_3);
  FUN_140c87300(local_418,param_1,1);
  FUN_140c892f0(local_3d8,*(undefined4 *)(param_3 + 0xf0),local_418);
  FUN_140c873c0(param_2,1,local_418);
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_438);
  return;
}


/* address=140c82030 name=FUN_140c82030 */

void FUN_140c82030(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined auStack_438 [32];
  undefined local_418 [64];
  undefined local_3d8 [960];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_438;
  FUN_140c894b0(local_3d8,param_3);
  FUN_140c87300(local_418,param_1,1);
  FUN_140c893d0(local_3d8,*(undefined4 *)(param_3 + 0xf0),local_418);
  FUN_140c873c0(param_2,1,local_418);
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_438);
  return;
}


/* address=140c82350 name=FUN_140c82350 */

void FUN_140c82350(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  undefined8 param_5,int param_6)

{
  longlong local_res8;
  longlong local_res10;
  undefined auStack_4f8 [32];
  ulonglong local_4d8;
  ulonglong local_4d0;
  ulonglong local_4c8;
  ulonglong local_4c0;
  longlong local_4b8;
  undefined local_4a8 [64];
  undefined local_468 [64];
  undefined local_428 [960];
  undefined local_68 [16];
  undefined local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_4f8;
  if (param_3 % 0x10 != 0) {
    FID_conflict__assert((wchar_t *)s_l_14139ffd0,(wchar_t *)s_D_14139fef0,0x4c5);
  }
  local_4d8 = param_3 / 0x10;
  if (local_4d8 != 0) {
    FUN_140c894b0(local_428,param_4);
    FUN_140e286a0(local_68,param_5,0x10);
    local_res8 = param_1;
    local_res10 = param_2;
    if (param_6 == 0) {
      while( true ) {
        if (local_4d8 < 4) {
          local_4c0 = local_4d8;
        }
        else {
          local_4c0 = 4;
        }
        local_4c8 = local_4c0;
        FUN_140e286a0(local_58,local_res8,local_4c0 * 0x10);
        FUN_140c87300(local_468,local_res8,local_4c8);
        FUN_140c893d0(local_428,*(undefined4 *)(param_4 + 0xf0),local_468);
        FUN_140c873c0(local_res10,local_4c8,local_468);
        FUN_140c8a270(local_res10,local_res10,local_68);
        for (local_4d0 = 1; local_4d0 < local_4c8; local_4d0 = local_4d0 + 1) {
          local_4b8 = local_res10 + local_4d0 * 0x10;
          FUN_140c8a270(local_4b8,local_res10 + local_4d0 * 0x10,local_58 + (local_4d0 - 1) * 0x10);
        }
        FUN_140e286a0(local_68,local_58 + (local_4c8 - 1) * 0x10,0x10);
        local_4d8 = local_4d8 - local_4c8;
        if (local_4d8 == 0) break;
        local_res8 = local_res8 + 0x40;
        local_res10 = local_res10 + 0x40;
      }
      FUN_140e286a0(param_5,local_68,0x10);
    }
    else {
      for (; local_4d8 != 0; local_4d8 = local_4d8 - 1) {
        FUN_140c8a270(local_68,local_68,local_res8);
        FUN_140c87300(local_4a8,local_68,1);
        FUN_140c892f0(local_428,*(undefined4 *)(param_4 + 0xf0),local_4a8);
        FUN_140c873c0(local_res10,1,local_4a8);
        FUN_140e286a0(local_68,local_res10,0x10);
        local_res8 = local_res8 + 0x10;
        local_res10 = local_res10 + 0x10;
      }
      FUN_140e286a0(param_5,local_68,0x10);
    }
  }
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_4f8);
  return;
}


/* address=140c826f0 name=FUN_140c826f0 */

void FUN_140c826f0(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_18;
  
  for (local_18 = 0; local_18 < 0x10; local_18 = local_18 + 8) {
    uVar1 = FUN_140c80bd0(param_2 + local_18);
    uVar2 = FUN_140c80bd0(param_3 + local_18);
    FUN_140c80c00(param_1 + local_18,uVar1 ^ uVar2);
  }
  return;
}


/* address=140c82790 name=FUN_140c82790 */

void FUN_140c82790(byte *param_1,byte *param_2,ulonglong param_3,longlong param_4,undefined8 param_5
                  ,longlong param_6,uint *param_7,code *param_8)

{
  byte *local_res8;
  byte *local_res10;
  ulonglong local_res18;
  uint local_18;
  
  if (((param_4 == 0) || (param_6 == 0)) || (param_7 == (uint *)0x0)) {
    FID_conflict__assert((wchar_t *)s_k_1413b3cb8,(wchar_t *)s_D_1413b3be0,0x5a);
  }
  if ((param_3 != 0) && ((param_1 == (byte *)0x0 || (param_2 == (byte *)0x0)))) {
    FID_conflict__assert((wchar_t *)s_l_1413b3dc8,(wchar_t *)s_D_1413b3cf0,0x5b);
  }
  if (0xf < *param_7) {
    FID_conflict__assert((wchar_t *)s___1413b3ed8,(wchar_t *)s_D_1413b3e00,0x5c);
  }
  local_18 = *param_7;
  local_res8 = param_1;
  local_res10 = param_2;
  for (local_res18 = param_3; (local_18 != 0 && (local_res18 != 0)); local_res18 = local_res18 - 1)
  {
    *local_res10 = *local_res8 ^ *(byte *)(param_6 + (ulonglong)local_18);
    local_res10 = local_res10 + 1;
    local_res8 = local_res8 + 1;
    local_18 = (local_18 + 1) % 0x10;
  }
  for (; 0xf < local_res18; local_res18 = local_res18 - 0x10) {
    (*param_8)(param_5,param_6,param_4);
    FUN_140cce1e0(param_5);
    FUN_140c826f0(local_res10,local_res8,param_6);
    local_res10 = local_res10 + 0x10;
    local_res8 = local_res8 + 0x10;
    local_18 = 0;
  }
  if (local_res18 != 0) {
    (*param_8)(param_5,param_6,param_4);
    FUN_140cce1e0(param_5);
    while( true ) {
      if (local_res18 == 0) break;
      local_res10[local_18] = local_res8[local_18] ^ *(byte *)(param_6 + (ulonglong)local_18);
      local_18 = local_18 + 1;
      local_res18 = local_res18 - 1;
    }
  }
  *param_7 = local_18;
  return;
}


/* address=140c829b0 name=FUN_140c829b0 */

void FUN_140c829b0(byte *param_1,byte *param_2,ulonglong param_3,longlong param_4,longlong param_5,
                  longlong param_6,uint *param_7,code *param_8)

{
  byte *local_res8;
  byte *local_res10;
  ulonglong local_res18;
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  if (((param_4 == 0) || (param_6 == 0)) || (param_7 == (uint *)0x0)) {
    FID_conflict__assert((wchar_t *)s_k_1413b3fc8,(wchar_t *)s_D_1413b3ef0,0x8b);
  }
  if ((param_3 != 0) && ((param_1 == (byte *)0x0 || (param_2 == (byte *)0x0)))) {
    FID_conflict__assert((wchar_t *)s_l_1413b40d8,(wchar_t *)s_D_1413b4000,0x8c);
  }
  if (0xf < *param_7) {
    FID_conflict__assert((wchar_t *)s___1413b41e8,(wchar_t *)s_D_1413b4110,0x8d);
  }
  local_24 = *param_7;
  local_res8 = param_1;
  local_res10 = param_2;
  for (local_res18 = param_3; (local_24 != 0 && (local_res18 != 0)); local_res18 = local_res18 - 1)
  {
    *local_res10 = *local_res8 ^ *(byte *)(param_6 + (ulonglong)local_24);
    local_res10 = local_res10 + 1;
    local_res8 = local_res8 + 1;
    local_24 = (local_24 + 1) % 0x10;
  }
  local_28 = FUN_140c80a70(param_5 + 0xc);
  for (; 0xf < local_res18; local_res18 = local_res18 + local_20 * -0x10) {
    local_20 = local_res18 / 0x10;
    if (0x10000000 < local_20) {
      local_20 = 0x10000000;
    }
    local_28 = local_28 + (int)local_20;
    if (local_28 < local_20) {
      local_20 = local_20 - local_28;
      local_28 = 0;
    }
    (*param_8)(local_res8,local_res10,local_20,param_4,param_5);
    FUN_140c80ab0(param_5 + 0xc);
    if (local_28 == 0) {
      FUN_140cce250(param_5);
    }
    local_res10 = local_res10 + local_20 * 0x10;
    local_res8 = local_res8 + local_20 * 0x10;
  }
  if (local_res18 != 0) {
    FUN_140c809d0(param_6,0,0x10);
    (*param_8)(param_6,param_6,1,param_4,param_5);
    FUN_140c80ab0(param_5 + 0xc,local_28 + 1);
    if (local_28 + 1 == 0) {
      FUN_140cce250(param_5);
    }
    while (local_res18 != 0) {
      local_res10[local_24] = local_res8[local_24] ^ *(byte *)(param_6 + (ulonglong)local_24);
      local_24 = local_24 + 1;
      local_res18 = local_res18 - 1;
    }
  }
  *param_7 = local_24;
  return;
}


/* address=140c82d00 name=FUN_140c82d00 */

undefined4 FUN_140c82d00(void)

{
  int iVar1;
  
  iVar1 = FUN_140c80cf0();
  if ((iVar1 != 0) && (iVar1 = FUN_140c80d70(), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=140c82d40 name=FUN_140c82d40 */

void FUN_140c82d40(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  longlong param_5)

{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  *param_4 = 0;
  local_18 = FUN_140c80b50(param_5);
  local_10 = FUN_140c80b50(param_5 + 8);
  iVar1 = FUN_140c82d00();
  if (iVar1 == 0) {
    iVar1 = FUN_140c80db0();
    if (iVar1 == 0) {
      FUN_140c84d80(param_3,&local_18);
      *param_1 = &LAB_140c84f00;
      *param_2 = &LAB_140c84fb0;
    }
    else {
      FUN_140c85100(param_3,&local_18);
      *param_1 = &LAB_140a95040;
      *param_2 = &LAB_140a95260;
    }
  }
  else {
    iVar1 = FUN_140c80e70();
    if ((iVar1 != 0) && (iVar1 = FUN_140c80df0(), iVar1 != 0)) {
      FUN_140a946e0(param_3,&local_18);
      *param_1 = &DAT_140a948a0;
      *param_2 = &LAB_140a948c0;
      *param_4 = 1;
      return;
    }
    FUN_140a93cc0(param_3,&local_18);
    *param_1 = &LAB_140a93f30;
    *param_2 = &LAB_140a94000;
  }
  return;
}


/* address=140c82e80 name=FUN_140c82e80 */

void FUN_140c82e80(longlong param_1,undefined8 param_2,code *param_3,int param_4)

{
  undefined auStack_68 [32];
  undefined *local_48;
  uint local_38;
  int local_34;
  longlong local_30;
  undefined local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_68;
  FUN_140c809d0(param_1,0,0x120);
  *(code **)(param_1 + 0x110) = param_3;
  FUN_140c809d0(local_28,0,0x10);
  (*param_3)(local_28,local_28,param_2);
  local_30 = param_1 + 0x100;
  local_48 = local_28;
  FUN_140c82d40(local_30,param_1 + 0x108,param_1,&local_34);
  if ((local_34 == 0) || (param_4 == 0)) {
    local_38 = 0;
  }
  else {
    local_38 = 1;
  }
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xfffffffe | local_38;
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_68);
  return;
}


/* address=140c82fa0 name=FUN_140c82fa0 */

void FUN_140c82fa0(longlong param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong local_res18;
  ulonglong local_res20;
  undefined auStack_68 [32];
  int local_48;
  ulonglong local_40;
  code *local_38;
  ulonglong local_30;
  undefined local_28 [8];
  undefined local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_68;
  local_38 = *(code **)(param_1 + 0x150);
  FUN_140c809d0(param_1,0,0x10);
  FUN_140c809d0(param_1 + 0x40,0,0x10);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  uVar1 = param_4;
  if (param_4 == 0xc) {
    FUN_140c80930(param_1,param_3,0xc);
    *(undefined *)(param_1 + 0xf) = 1;
    local_48 = 1;
  }
  else {
    for (; local_30 = uVar1, 0xf < local_res20; local_res20 = local_res20 - 0x10) {
      FUN_140c826f0(param_1,param_1,local_res18);
      (*local_38)(param_1);
      local_res18 = local_res18 + 0x10;
      uVar1 = local_30;
    }
    if (local_res20 != 0) {
      for (local_40 = 0; local_40 < local_res20; local_40 = local_40 + 1) {
        *(byte *)(param_1 + local_40) =
             *(byte *)(param_1 + local_40) ^ *(byte *)(local_res18 + local_40);
      }
      (*local_38)(param_1,param_1 + 0x50);
    }
    FUN_140c809d0(local_28,0,8);
    FUN_140c80b90(local_20,local_30 << 3);
    FUN_140c826f0(param_1,param_1,local_28);
    (*local_38)(param_1,param_1 + 0x50);
    local_48 = FUN_140c80a70(param_1 + 0xc);
  }
  (**(code **)(param_1 + 0x160))(param_1,param_1 + 0x20,param_2);
  local_48 = local_48 + 1;
  FUN_140c80ab0(param_1 + 0xc,local_48);
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_68);
  return;
}


/* address=140c83240 name=FUN_140c83240 */

undefined8 FUN_140c83240(longlong param_1,byte *param_2,ulonglong param_3)

{
  code *pcVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  byte *local_res10;
  ulonglong local_res18;
  uint local_38;
  ulonglong local_30;
  
  pcVar1 = *(code **)(param_1 + 0x150);
  pcVar2 = *(code **)(param_1 + 0x158);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar3 = *(longlong *)(param_1 + 0x30) + param_3;
    if ((uVar3 < 0x2000000000000001) && (param_3 <= uVar3)) {
      *(ulonglong *)(param_1 + 0x30) = uVar3;
      local_38 = *(uint *)(param_1 + 0x174);
      local_res10 = param_2;
      local_res18 = param_3;
      if (local_38 != 0) {
        for (; (local_38 != 0 && (local_res18 != 0)); local_res18 = local_res18 - 1) {
          *(byte *)(param_1 + 0x40 + (ulonglong)local_38) =
               *(byte *)(param_1 + 0x40 + (ulonglong)local_38) ^ *local_res10;
          local_res10 = local_res10 + 1;
          local_38 = (local_38 + 1) % 0x10;
        }
        if (local_38 != 0) {
          *(uint *)(param_1 + 0x174) = local_38;
          return 1;
        }
        (*pcVar1)(param_1 + 0x40,param_1 + 0x50);
      }
      uVar3 = local_res18 & DAT_140fdb000;
      if (uVar3 != 0) {
        (*pcVar2)(param_1 + 0x40,param_1 + 0x50,local_res10,uVar3);
        local_res10 = local_res10 + uVar3;
        local_res18 = local_res18 - uVar3;
      }
      if (local_res18 != 0) {
        local_38 = (uint)local_res18;
        for (local_30 = 0; local_30 < local_res18; local_30 = local_30 + 1) {
          *(byte *)(param_1 + local_30 + 0x40) =
               *(byte *)(param_1 + local_30 + 0x40) ^ local_res10[local_30];
        }
      }
      *(uint *)(param_1 + 0x174) = local_38;
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


/* address=140c83490 name=FUN_140c83490 */

undefined8
FUN_140c83490(longlong param_1,undefined8 param_2,byte *param_3,byte *param_4,ulonglong param_5)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  byte bVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  byte *local_res18;
  byte *local_res20;
  uint local_68;
  int local_64;
  longlong local_50;
  
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
    local_68 = *(uint *)(param_1 + 0x170);
    local_res18 = param_3;
    local_res20 = param_4;
    if (local_68 != 0) {
      for (; (local_68 != 0 && (param_5 != 0)); param_5 = param_5 - 1) {
        *local_res20 = *local_res18 ^ *(byte *)(param_1 + 0x10 + (ulonglong)local_68);
        *(byte *)(param_1 + 0x40 + (ulonglong)local_68) =
             *(byte *)(param_1 + 0x40 + (ulonglong)local_68) ^ *local_res20;
        local_res20 = local_res20 + 1;
        local_res18 = local_res18 + 1;
        local_68 = (local_68 + 1) % 0x10;
      }
      if (local_68 != 0) {
        *(uint *)(param_1 + 0x170) = local_68;
        return 1;
      }
      (*pcVar2)(param_1 + 0x40,param_1 + 0x50);
    }
    local_64 = FUN_140c80a70(param_1 + 0xc);
    for (; 0xbff < param_5; param_5 = param_5 - 0xc00) {
      for (local_50 = 0xc00; local_50 != 0; local_50 = local_50 + -0x10) {
        (*pcVar1)(param_1,param_1 + 0x10,param_2);
        local_64 = local_64 + 1;
        FUN_140c80ab0(param_1 + 0xc,local_64);
        FUN_140c826f0(local_res20,local_res18,param_1 + 0x10);
        local_res20 = local_res20 + 0x10;
        local_res18 = local_res18 + 0x10;
      }
      (*pcVar3)(param_1 + 0x40,param_1 + 0x50,local_res20 + -0xc00,0xc00);
    }
    uVar5 = param_5 & DAT_140fdb000;
    if (uVar5 != 0) {
      for (; 0xf < param_5; param_5 = param_5 - 0x10) {
        (*pcVar1)(param_1,param_1 + 0x10,param_2);
        local_64 = local_64 + 1;
        FUN_140c80ab0(param_1 + 0xc,local_64);
        FUN_140c826f0(local_res20,local_res18,param_1 + 0x10);
        local_res20 = local_res20 + 0x10;
        local_res18 = local_res18 + 0x10;
      }
      (*pcVar3)(param_1 + 0x40,param_1 + 0x50,(longlong)local_res20 - uVar5,uVar5);
    }
    if (param_5 != 0) {
      (*pcVar1)(param_1,param_1 + 0x10,param_2);
      FUN_140c80ab0(param_1 + 0xc,local_64 + 1);
      while (param_5 != 0) {
        bVar4 = local_res18[local_68] ^ *(byte *)(param_1 + 0x10 + (ulonglong)local_68);
        local_res20[local_68] = bVar4;
        *(byte *)(param_1 + 0x40 + (ulonglong)local_68) =
             *(byte *)(param_1 + 0x40 + (ulonglong)local_68) ^ bVar4;
        local_68 = local_68 + 1;
        param_5 = param_5 - 1;
      }
    }
    *(uint *)(param_1 + 0x170) = local_68;
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}


/* address=140c83a30 name=FUN_140c83a30 */

undefined8
FUN_140c83a30(longlong param_1,undefined8 param_2,byte *param_3,byte *param_4,ulonglong param_5)

{
  byte bVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  byte *local_res18;
  byte *local_res20;
  uint local_58;
  int local_50;
  longlong local_40;
  
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
    local_58 = *(uint *)(param_1 + 0x170);
    local_res18 = param_3;
    local_res20 = param_4;
    if (local_58 != 0) {
      for (; (local_58 != 0 && (param_5 != 0)); param_5 = param_5 - 1) {
        bVar1 = *local_res18;
        local_res18 = local_res18 + 1;
        *local_res20 = bVar1 ^ *(byte *)(param_1 + 0x10 + (ulonglong)local_58);
        local_res20 = local_res20 + 1;
        *(byte *)(param_1 + 0x40 + (ulonglong)local_58) =
             *(byte *)(param_1 + 0x40 + (ulonglong)local_58) ^ bVar1;
        local_58 = (local_58 + 1) % 0x10;
      }
      if (local_58 != 0) {
        *(uint *)(param_1 + 0x170) = local_58;
        return 1;
      }
      (*pcVar3)(param_1 + 0x40,param_1 + 0x50);
    }
    local_50 = FUN_140c80a70(param_1 + 0xc);
    for (; 0xbff < param_5; param_5 = param_5 - 0xc00) {
      local_40 = 0xc00;
      (*pcVar4)(param_1 + 0x40,param_1 + 0x50,local_res18,0xc00);
      for (; local_40 != 0; local_40 = local_40 + -0x10) {
        (*pcVar2)(param_1,param_1 + 0x10,param_2);
        local_50 = local_50 + 1;
        FUN_140c80ab0(param_1 + 0xc,local_50);
        FUN_140c826f0(local_res20,local_res18,param_1 + 0x10);
        local_res20 = local_res20 + 0x10;
        local_res18 = local_res18 + 0x10;
      }
    }
    if ((param_5 & DAT_140fdb000) != 0) {
      (*pcVar4)(param_1 + 0x40,param_1 + 0x50,local_res18,param_5 & DAT_140fdb000);
      for (; 0xf < param_5; param_5 = param_5 - 0x10) {
        (*pcVar2)(param_1,param_1 + 0x10,param_2);
        local_50 = local_50 + 1;
        FUN_140c80ab0(param_1 + 0xc,local_50);
        FUN_140c826f0(local_res20,local_res18,param_1 + 0x10);
        local_res20 = local_res20 + 0x10;
        local_res18 = local_res18 + 0x10;
      }
    }
    if (param_5 != 0) {
      (*pcVar2)(param_1,param_1 + 0x10,param_2);
      FUN_140c80ab0(param_1 + 0xc,local_50 + 1);
      while (param_5 != 0) {
        bVar1 = local_res18[local_58];
        *(byte *)(param_1 + 0x40 + (ulonglong)local_58) =
             *(byte *)(param_1 + 0x40 + (ulonglong)local_58) ^ bVar1;
        local_res20[local_58] = bVar1 ^ *(byte *)(param_1 + 0x10 + (ulonglong)local_58);
        local_58 = local_58 + 1;
        param_5 = param_5 - 1;
      }
    }
    *(uint *)(param_1 + 0x170) = local_58;
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}


/* address=140c83f90 name=FUN_140c83f90 */

undefined8
FUN_140c83f90(longlong param_1,undefined8 param_2,byte *param_3,byte *param_4,ulonglong param_5,
             code *param_6)

{
  code *pcVar1;
  code *pcVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte *local_res18;
  byte *local_res20;
  uint local_58;
  int local_54;
  int local_28;
  
  pcVar1 = *(code **)(param_1 + 0x150);
  pcVar2 = *(code **)(param_1 + 0x158);
  uVar4 = *(longlong *)(param_1 + 0x38) + param_5;
  if ((uVar4 < 0xfffffffe1) && (param_5 <= uVar4)) {
    *(ulonglong *)(param_1 + 0x38) = uVar4;
    if (*(int *)(param_1 + 0x174) != 0) {
      (*pcVar1)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x174) = 0;
    }
    local_58 = *(uint *)(param_1 + 0x170);
    local_res18 = param_3;
    local_res20 = param_4;
    if (local_58 != 0) {
      for (; (local_58 != 0 && (param_5 != 0)); param_5 = param_5 - 1) {
        *local_res20 = *local_res18 ^ *(byte *)(param_1 + 0x10 + (ulonglong)local_58);
        *(byte *)(param_1 + 0x40 + (ulonglong)local_58) =
             *(byte *)(param_1 + 0x40 + (ulonglong)local_58) ^ *local_res20;
        local_res20 = local_res20 + 1;
        local_res18 = local_res18 + 1;
        local_58 = (local_58 + 1) % 0x10;
      }
      if (local_58 != 0) {
        *(uint *)(param_1 + 0x170) = local_58;
        return 1;
      }
      (*pcVar1)(param_1 + 0x40);
    }
    if (((*(uint *)(param_1 + 0x168) & 1) != 0) && (param_5 != 0)) {
      lVar5 = FUN_140cce3a0(local_res18,local_res20,param_5,param_2,param_1,param_1 + 0x40,
                            param_1 + 0x50);
      local_res18 = local_res18 + lVar5;
      local_res20 = local_res20 + lVar5;
      param_5 = param_5 - lVar5;
    }
    local_54 = FUN_140c80a70(param_1 + 0xc);
    for (; 0xbff < param_5; param_5 = param_5 - 0xc00) {
      (*param_6)(local_res18,local_res20,0xc0,param_2,param_1);
      local_54 = local_54 + 0xc0;
      FUN_140c80ab0(param_1 + 0xc,local_54);
      (*pcVar2)(param_1 + 0x40,param_1 + 0x50,local_res20,0xc00);
      local_res20 = local_res20 + 0xc00;
      local_res18 = local_res18 + 0xc00;
    }
    uVar4 = param_5 & DAT_140fdb000;
    if (uVar4 != 0) {
      (*param_6)(local_res18,local_res20,uVar4 / 0x10,param_2,param_1);
      local_28 = (int)(uVar4 / 0x10);
      local_54 = local_54 + local_28;
      FUN_140c80ab0(param_1 + 0xc,local_54);
      local_res18 = local_res18 + uVar4;
      param_5 = param_5 - uVar4;
      (*pcVar2)(param_1 + 0x40,param_1 + 0x50,local_res20,uVar4);
      local_res20 = local_res20 + uVar4;
    }
    if (param_5 != 0) {
      (**(code **)(param_1 + 0x160))(param_1,param_1 + 0x10,param_2);
      FUN_140c80ab0(param_1 + 0xc,local_54 + 1);
      while (param_5 != 0) {
        bVar3 = local_res18[local_58] ^ *(byte *)(param_1 + 0x10 + (ulonglong)local_58);
        local_res20[local_58] = bVar3;
        *(byte *)(param_1 + 0x40 + (ulonglong)local_58) =
             *(byte *)(param_1 + 0x40 + (ulonglong)local_58) ^ bVar3;
        local_58 = local_58 + 1;
        param_5 = param_5 - 1;
      }
    }
    *(uint *)(param_1 + 0x170) = local_58;
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}


/* address=140c845a0 name=FUN_140c845a0 */

undefined8
FUN_140c845a0(longlong param_1,undefined8 param_2,byte *param_3,byte *param_4,ulonglong param_5,
             code *param_6)

{
  byte bVar1;
  code *pcVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte *local_res18;
  byte *local_res20;
  uint local_58;
  int local_50;
  int local_20;
  
  pcVar2 = *(code **)(param_1 + 0x150);
  pcVar3 = *(code **)(param_1 + 0x158);
  uVar4 = *(longlong *)(param_1 + 0x38) + param_5;
  if ((uVar4 < 0xfffffffe1) && (param_5 <= uVar4)) {
    *(ulonglong *)(param_1 + 0x38) = uVar4;
    if (*(int *)(param_1 + 0x174) != 0) {
      (*pcVar2)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x174) = 0;
    }
    local_58 = *(uint *)(param_1 + 0x170);
    local_res18 = param_3;
    local_res20 = param_4;
    if (local_58 != 0) {
      for (; (local_58 != 0 && (param_5 != 0)); param_5 = param_5 - 1) {
        bVar1 = *local_res18;
        local_res18 = local_res18 + 1;
        *local_res20 = bVar1 ^ *(byte *)(param_1 + 0x10 + (ulonglong)local_58);
        local_res20 = local_res20 + 1;
        *(byte *)(param_1 + 0x40 + (ulonglong)local_58) =
             *(byte *)(param_1 + 0x40 + (ulonglong)local_58) ^ bVar1;
        local_58 = (local_58 + 1) % 0x10;
      }
      if (local_58 != 0) {
        *(uint *)(param_1 + 0x170) = local_58;
        return 1;
      }
      (*pcVar2)(param_1 + 0x40);
    }
    if (((*(uint *)(param_1 + 0x168) & 1) != 0) && (param_5 != 0)) {
      lVar5 = FUN_140cce400(local_res18,local_res20,param_5,param_2,param_1,param_1 + 0x40,
                            param_1 + 0x50);
      local_res18 = local_res18 + lVar5;
      local_res20 = local_res20 + lVar5;
      param_5 = param_5 - lVar5;
    }
    local_50 = FUN_140c80a70(param_1 + 0xc);
    for (; 0xbff < param_5; param_5 = param_5 - 0xc00) {
      (*pcVar3)(param_1 + 0x40,param_1 + 0x50,local_res18,0xc00);
      (*param_6)(local_res18,local_res20,0xc0,param_2,param_1);
      local_50 = local_50 + 0xc0;
      FUN_140c80ab0(param_1 + 0xc);
      local_res20 = local_res20 + 0xc00;
      local_res18 = local_res18 + 0xc00;
    }
    uVar4 = param_5 & DAT_140fdb000;
    if (uVar4 != 0) {
      (*pcVar3)(param_1 + 0x40,param_1 + 0x50,local_res18,uVar4);
      (*param_6)(local_res18,local_res20,uVar4 / 0x10,param_2,param_1);
      local_20 = (int)(uVar4 / 0x10);
      local_50 = local_50 + local_20;
      FUN_140c80ab0(param_1 + 0xc,local_50);
      local_res20 = local_res20 + uVar4;
      local_res18 = local_res18 + uVar4;
      param_5 = param_5 - uVar4;
    }
    if (param_5 != 0) {
      (**(code **)(param_1 + 0x160))(param_1,param_1 + 0x10,param_2);
      FUN_140c80ab0(param_1 + 0xc,local_50 + 1);
      while (param_5 != 0) {
        bVar1 = local_res18[local_58];
        *(byte *)(param_1 + 0x40 + (ulonglong)local_58) =
             *(byte *)(param_1 + 0x40 + (ulonglong)local_58) ^ bVar1;
        local_res20[local_58] = bVar1 ^ *(byte *)(param_1 + 0x10 + (ulonglong)local_58);
        local_58 = local_58 + 1;
        param_5 = param_5 - 1;
      }
    }
    *(uint *)(param_1 + 0x170) = local_58;
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}


/* address=140c84ba0 name=FUN_140c84ba0 */

void FUN_140c84ba0(longlong param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  undefined auStack_58 [32];
  uint local_38;
  code *local_30;
  longlong local_28;
  undefined local_20 [8];
  undefined local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_1413d9c40 ^ (ulonglong)auStack_58;
  local_30 = *(code **)(param_1 + 0x150);
  if ((*(int *)(param_1 + 0x170) != 0) || (*(int *)(param_1 + 0x174) != 0)) {
    (*local_30)(param_1 + 0x40,param_1 + 0x50);
  }
  FUN_140c80b90(local_20,*(longlong *)(param_1 + 0x30) << 3);
  FUN_140c80b90(local_18,*(longlong *)(param_1 + 0x38) << 3);
  FUN_140c826f0(param_1 + 0x40,param_1 + 0x40,local_20);
  (*local_30)(param_1 + 0x40,param_1 + 0x50);
  local_28 = param_1 + 0x40;
  FUN_140c826f0(local_28,param_1 + 0x40,param_1 + 0x20);
  if ((param_2 != 0) && (param_3 < 0x11)) {
    iVar1 = FUN_140c663d0(param_1 + 0x40,param_2,param_3);
    local_38 = (uint)(iVar1 == 0);
  }
  FUN_140db44f0(local_10 ^ (ulonglong)auStack_58);
  return;
}


/* address=140c84d10 name=FUN_140c84d10 */

void FUN_140c84d10(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong local_18;
  
  FUN_140c84ba0(param_1,0,0);
  local_18 = param_3;
  if (0x10 < param_3) {
    local_18 = 0x10;
  }
  FUN_140c80930(param_2,param_1 + 0x40,local_18);
  return;
}


/* address=140c84d80 name=FUN_140c84d80 */

void FUN_140c84d80(ulonglong *param_1,ulonglong *param_2)

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


/* address=140c85100 name=FUN_140c85100 */

void FUN_140c85100(undefined8 *param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  undefined auStack_68 [32];
  int local_48;
  undefined local_44;
  int local_40;
  undefined8 *local_38;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_1413d9c40 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  local_30 = param_2[1];
  local_28 = *param_2;
  puVar2 = &local_30;
  puVar3 = param_1 + 0x10;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined *)puVar3 = *(undefined *)puVar2;
    puVar2 = (ulonglong *)((longlong)puVar2 + 1);
    puVar3 = (undefined8 *)((longlong)puVar3 + 1);
  }
  FUN_140cce2c0(&local_30);
  puVar2 = &local_30;
  puVar3 = param_1 + 8;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined *)puVar3 = *(undefined *)puVar2;
    puVar2 = (ulonglong *)((longlong)puVar2 + 1);
    puVar3 = (undefined8 *)((longlong)puVar3 + 1);
  }
  FUN_140cce2c0(&local_30);
  puVar2 = &local_30;
  puVar3 = param_1 + 4;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined *)puVar3 = *(undefined *)puVar2;
    puVar2 = (ulonglong *)((longlong)puVar2 + 1);
    puVar3 = (undefined8 *)((longlong)puVar3 + 1);
  }
  FUN_140cce2c0(&local_30);
  puVar2 = &local_30;
  puVar3 = param_1 + 2;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined *)puVar3 = *(undefined *)puVar2;
    puVar2 = (ulonglong *)((longlong)puVar2 + 1);
    puVar3 = (undefined8 *)((longlong)puVar3 + 1);
  }
  param_1[6] = local_30 ^ param_1[4];
  param_1[7] = local_28 ^ param_1[5];
  puVar3 = param_1 + 8;
  puVar2 = &local_30;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined *)puVar2 = *(undefined *)puVar3;
    puVar3 = (undefined8 *)((longlong)puVar3 + 1);
    puVar2 = (ulonglong *)((longlong)puVar2 + 1);
  }
  param_1[10] = local_30 ^ param_1[2];
  param_1[0xb] = local_28 ^ param_1[3];
  param_1[0xc] = local_30 ^ param_1[4];
  param_1[0xd] = local_28 ^ param_1[5];
  param_1[0xe] = local_30 ^ param_1[6];
  param_1[0xf] = local_28 ^ param_1[7];
  puVar3 = param_1 + 0x10;
  puVar2 = &local_30;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined *)puVar2 = *(undefined *)puVar3;
    puVar3 = (undefined8 *)((longlong)puVar3 + 1);
    puVar2 = (ulonglong *)((longlong)puVar2 + 1);
  }
  param_1[0x12] = local_30 ^ param_1[2];
  param_1[0x13] = local_28 ^ param_1[3];
  param_1[0x14] = local_30 ^ param_1[4];
  param_1[0x15] = local_28 ^ param_1[5];
  param_1[0x16] = local_30 ^ param_1[6];
  param_1[0x17] = local_28 ^ param_1[7];
  param_1[0x18] = local_30 ^ param_1[8];
  param_1[0x19] = local_28 ^ param_1[9];
  param_1[0x1a] = local_30 ^ param_1[10];
  param_1[0x1b] = local_28 ^ param_1[0xb];
  param_1[0x1c] = local_30 ^ param_1[0xc];
  param_1[0x1d] = local_28 ^ param_1[0xd];
  param_1[0x1e] = local_30 ^ param_1[0xe];
  param_1[0x1f] = local_28 ^ param_1[0xf];
  for (local_48 = 0; local_48 < 0x10; local_48 = local_48 + 1) {
    for (local_40 = 0; local_40 < local_48; local_40 = local_40 + 1) {
      local_44 = *(undefined *)((longlong)param_1 + (longlong)(local_48 * 0x10 + local_40));
      *(undefined *)((longlong)param_1 + (longlong)(local_48 * 0x10 + local_40)) =
           *(undefined *)((longlong)param_1 + (longlong)(local_40 * 0x10 + local_48));
      *(undefined *)((longlong)param_1 + (longlong)(local_40 * 0x10 + local_48)) = local_44;
    }
  }
  local_38 = param_1;
  FUN_140db44f0(local_20 ^ (ulonglong)auStack_68);
  return;
}


/* address=140c85740 name=FUN_140c85740 */

void FUN_140c85740(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  longlong param_5,code *param_6)

{
  longlong local_res8;
  longlong local_res10;
  ulonglong local_res18;
  ulonglong local_18;
  longlong local_10;
  
  if ((param_4 == 0) || (param_5 == 0)) {
    FID_conflict__assert((wchar_t *)s_k_1413b31f8,(wchar_t *)s_D_1413b3120,0x3b);
  }
  if (param_3 != 0) {
    if ((param_1 == 0) || (param_2 == 0)) {
      FID_conflict__assert((wchar_t *)s_i_1413b3308,(wchar_t *)s_D_1413b3230,0x41);
    }
    local_10 = param_5;
    local_res8 = param_1;
    local_res10 = param_2;
    for (local_res18 = param_3; 0xf < local_res18; local_res18 = local_res18 - 0x10) {
      FUN_140c826f0(local_res10,local_res8,local_10);
      (*param_6)(local_res10,local_res10,param_4);
      local_10 = local_res10;
      local_res8 = local_res8 + 0x10;
      local_res10 = local_res10 + 0x10;
    }
    for (; local_res18 != 0; local_res18 = local_res18 - 0x10) {
      for (local_18 = 0; (local_18 < 0x10 && (local_18 < local_res18)); local_18 = local_18 + 1) {
        *(byte *)(local_res10 + local_18) =
             *(byte *)(local_res8 + local_18) ^ *(byte *)(local_10 + local_18);
      }
      for (; local_18 < 0x10; local_18 = local_18 + 1) {
        *(undefined *)(local_res10 + local_18) = *(undefined *)(local_10 + local_18);
      }
      (*param_6)(local_res10,local_res10,param_4);
      local_10 = local_res10;
      if (local_res18 < 0x11) break;
      local_res8 = local_res8 + 0x10;
      local_res10 = local_res10 + 0x10;
    }
    FUN_140c80930(param_5,local_10,0x10);
  }
  return;
}


/* address=140c85960 name=FUN_140c85960 */

void FUN_140c85960(ulonglong param_1,ulonglong param_2,ulonglong param_3,longlong param_4,
                  ulonglong param_5,code *param_6)

{
  ulonglong uVar1;
  ulonglong local_res8;
  ulonglong local_res10;
  ulonglong local_res18;
  undefined auStack_88 [32];
  ulonglong local_68;
  undefined local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  undefined8 local_38;
  byte local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_88;
  if ((param_4 == 0) || (param_5 == 0)) {
    FID_conflict__assert((wchar_t *)s_k_1413b3418,(wchar_t *)s_D_1413b3340,100);
  }
  if (param_3 != 0) {
    if ((param_1 == 0) || (param_2 == 0)) {
      FID_conflict__assert((wchar_t *)s_i_1413b3528,(wchar_t *)s_D_1413b3450,0x6a);
    }
    local_58 = param_1;
    local_50 = param_2;
    if ((param_1 < param_2) && (param_2 < param_1 + param_3)) {
      FID_conflict__assert((wchar_t *)s_i_1413b3640,(wchar_t *)s_D_1413b3560,0x6f);
    }
    local_res8 = param_1;
    local_res10 = param_2;
    local_res18 = param_3;
    if (((local_58 < 0x20) || (local_58 - 0x20 < local_50)) && (local_50 <= local_58)) {
      for (; 0xf < local_res18; local_res18 = local_res18 - 0x10) {
        (*param_6)(local_res8,local_28,param_4);
        for (local_68 = 0; local_68 < 0x10; local_68 = local_68 + 8) {
          local_38 = FUN_140c80bd0(local_res8 + local_68);
          local_40 = FUN_140c80bd0(local_28 + local_68);
          uVar1 = FUN_140c80bd0(param_5 + local_68);
          FUN_140c80c00(local_res10 + local_68,local_40 ^ uVar1);
          FUN_140c80c00(param_5 + local_68,local_38);
        }
        local_res8 = local_res8 + 0x10;
        local_res10 = local_res10 + 0x10;
      }
    }
    else {
      local_48 = param_5;
      for (; 0xf < local_res18; local_res18 = local_res18 - 0x10) {
        (*param_6)(local_res8,local_res10,param_4);
        FUN_140c826f0(local_res10,local_res10,local_48);
        local_48 = local_res8;
        local_res8 = local_res8 + 0x10;
        local_res10 = local_res10 + 0x10;
      }
      FUN_140c80930(param_5,local_48,0x10);
    }
    for (; local_res18 != 0; local_res18 = local_res18 - 0x10) {
      (*param_6)(local_res8,local_28,param_4);
      for (local_68 = 0; (local_68 < 0x10 && (local_68 < local_res18)); local_68 = local_68 + 1) {
        local_60 = *(undefined *)(local_res8 + local_68);
        *(byte *)(local_res10 + local_68) = local_28[local_68] ^ *(byte *)(param_5 + local_68);
        *(undefined *)(param_5 + local_68) = local_60;
      }
      if (local_res18 < 0x11) goto LAB_140c85d52;
      local_res8 = local_res8 + 0x10;
      local_res10 = local_res10 + 0x10;
    }
  }
LAB_140c85dca:
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_88);
  return;
LAB_140c85d52:
  for (; local_68 < 0x10; local_68 = local_68 + 1) {
    *(undefined *)(param_5 + local_68) = *(undefined *)(local_res8 + local_68);
  }
  goto LAB_140c85dca;
}


/* address=140c85df0 name=FUN_140c85df0 */

void FUN_140c85df0(byte *param_1,byte *param_2,ulonglong param_3,longlong param_4,longlong param_5,
                  uint *param_6,code *param_7)

{
  byte *local_res8;
  byte *local_res10;
  ulonglong local_res18;
  uint local_18;
  
  if (((param_4 == 0) || (param_5 == 0)) || (param_6 == (uint *)0x0)) {
    FID_conflict__assert((wchar_t *)s_k_1413b42e0,(wchar_t *)s_D_1413b4200,0x3c);
  }
  if ((param_3 != 0) && ((param_1 == (byte *)0x0 || (param_2 == (byte *)0x0)))) {
    FID_conflict__assert((wchar_t *)s_l_1413b4420,(wchar_t *)s_D_1413b4340,0x3d);
  }
  local_18 = *param_6;
  local_res8 = param_1;
  local_res10 = param_2;
  for (local_res18 = param_3; (local_18 != 0 && (local_res18 != 0)); local_res18 = local_res18 - 1)
  {
    *local_res10 = *local_res8 ^ *(byte *)(param_5 + (ulonglong)local_18);
    local_res10 = local_res10 + 1;
    local_res8 = local_res8 + 1;
    local_18 = (local_18 + 1) % 0x10;
  }
  for (; 0xf < local_res18; local_res18 = local_res18 - 0x10) {
    (*param_7)(param_5,param_5,param_4);
    FUN_140c826f0(local_res10,local_res8,param_5);
    local_res10 = local_res10 + 0x10;
    local_res8 = local_res8 + 0x10;
    local_18 = 0;
  }
  if (local_res18 != 0) {
    (*param_7)(param_5,param_5,param_4);
    while( true ) {
      if (local_res18 == 0) break;
      local_res10[local_18] = local_res8[local_18] ^ *(byte *)(param_5 + (ulonglong)local_18);
      local_18 = local_18 + 1;
      local_res18 = local_res18 - 1;
    }
  }
  *param_6 = local_18;
  return;
}


/* address=140c85fd0 name=FUN_140c85fd0 */

void FUN_140c85fd0(byte *param_1,byte *param_2,ulonglong param_3,longlong param_4,longlong param_5,
                  uint *param_6,int param_7,code *param_8)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte *local_res8;
  byte *local_res10;
  ulonglong local_res18;
  uint local_48;
  
  if ((((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) || (param_4 == 0)) ||
     ((param_5 == 0 || (param_6 == (uint *)0x0)))) {
    FID_conflict__assert((wchar_t *)s_i_1413b3780,(wchar_t *)s_D_1413b36a0,0x3c);
  }
  local_48 = *param_6;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_7 == 0) {
    for (; (local_48 != 0 && (local_res18 != 0)); local_res18 = local_res18 - 1) {
      bVar1 = *local_res8;
      *local_res10 = *(byte *)(param_5 + (ulonglong)local_48) ^ bVar1;
      local_res10 = local_res10 + 1;
      local_res8 = local_res8 + 1;
      *(byte *)(param_5 + (ulonglong)local_48) = bVar1;
      local_48 = (local_48 + 1) % 0x10;
    }
    for (; 0xf < local_res18; local_res18 = local_res18 - 0x10) {
      (*param_8)(param_5,param_5,param_4);
      for (; local_48 < 0x10; local_48 = local_48 + 8) {
        uVar2 = FUN_140c80bd0(local_res8 + local_48);
        uVar3 = FUN_140c80bd0(param_5 + (ulonglong)local_48);
        FUN_140c80c00(local_res10 + local_48,uVar3 ^ uVar2);
        FUN_140c80c00(param_5 + (ulonglong)local_48,uVar2);
      }
      local_res10 = local_res10 + 0x10;
      local_res8 = local_res8 + 0x10;
      local_48 = 0;
    }
    if (local_res18 != 0) {
      (*param_8)(param_5,param_5,param_4);
      while( true ) {
        if (local_res18 == 0) break;
        bVar1 = local_res8[local_48];
        local_res10[local_48] = *(byte *)(param_5 + (ulonglong)local_48) ^ bVar1;
        *(byte *)(param_5 + (ulonglong)local_48) = bVar1;
        local_48 = local_48 + 1;
        local_res18 = local_res18 - 1;
      }
    }
    *param_6 = local_48;
  }
  else {
    for (; (local_48 != 0 && (local_res18 != 0)); local_res18 = local_res18 - 1) {
      bVar1 = *(byte *)(param_5 + (ulonglong)local_48) ^ *local_res8;
      *(byte *)(param_5 + (ulonglong)local_48) = bVar1;
      *local_res10 = bVar1;
      local_res10 = local_res10 + 1;
      local_res8 = local_res8 + 1;
      local_48 = (local_48 + 1) % 0x10;
    }
    for (; 0xf < local_res18; local_res18 = local_res18 - 0x10) {
      (*param_8)(param_5,param_5,param_4);
      for (; local_48 < 0x10; local_48 = local_48 + 8) {
        uVar2 = FUN_140c80bd0(param_5 + (ulonglong)local_48);
        uVar3 = FUN_140c80bd0(local_res8 + local_48);
        FUN_140c80c00(param_5 + (ulonglong)local_48,uVar2 ^ uVar3);
        FUN_140c80c00(local_res10 + local_48,uVar2 ^ uVar3);
      }
      local_res10 = local_res10 + 0x10;
      local_res8 = local_res8 + 0x10;
      local_48 = 0;
    }
    if (local_res18 != 0) {
      (*param_8)(param_5,param_5,param_4);
      while( true ) {
        if (local_res18 == 0) break;
        bVar1 = *(byte *)(param_5 + (ulonglong)local_48) ^ local_res8[local_48];
        *(byte *)(param_5 + (ulonglong)local_48) = bVar1;
        local_res10[local_48] = bVar1;
        local_48 = local_48 + 1;
        local_res18 = local_res18 - 1;
      }
    }
    *param_6 = local_48;
  }
  return;
}


/* address=140c86b10 name=FUN_140c86b10 */

ulonglong FUN_140c86b10(ulonglong param_1,ulonglong param_2)

{
  return param_1 & param_2;
}


/* address=140c86b40 name=FUN_140c86b40 */

ulonglong FUN_140c86b40(ulonglong param_1,ulonglong param_2)

{
  return param_1 | param_2;
}


/* address=140c86b70 name=FUN_140c86b70 */

ulonglong FUN_140c86b70(ulonglong param_1,ulonglong param_2)

{
  return param_1 ^ param_2;
}


/* address=140c86ba0 name=FUN_140c86ba0 */

ulonglong FUN_140c86ba0(ulonglong param_1)

{
  return ~param_1;
}


/* address=140c86bc0 name=FUN_140c86bc0 */

longlong FUN_140c86bc0(longlong param_1,longlong param_2)

{
  return param_1 << ((byte)(param_2 << 2) & 0x3f);
}


/* address=140c86bf0 name=FUN_140c86bf0 */

ulonglong FUN_140c86bf0(ulonglong param_1,longlong param_2)

{
  return param_1 >> ((byte)(param_2 << 2) & 0x3f);
}


/* address=140c86c20 name=FUN_140c86c20 */

void FUN_140c86c20(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  if (3 < param_3) {
    FID_conflict__assert((wchar_t *)s_i_14139fb50,(wchar_t *)s_D_14139fa70,0xef);
  }
  *(undefined8 *)(param_1 + param_3 * 8) = *param_2;
  *(undefined8 *)(param_1 + 0x20 + param_3 * 8) = param_2[1];
  return;
}


/* address=140c86cb0 name=FUN_140c86cb0 */

void FUN_140c86cb0(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  if (3 < param_3) {
    FID_conflict__assert((wchar_t *)s_i_14139fc60,(wchar_t *)s_D_14139fb80,0x102);
  }
  *param_2 = *(undefined8 *)(param_1 + param_3 * 8);
  param_2[1] = *(undefined8 *)(param_1 + 0x20 + param_3 * 8);
  return;
}


/* address=140c86d40 name=FUN_140c86d40 */

ulonglong FUN_140c86d40(ulonglong param_1,ulonglong param_2,byte param_3)

{
  param_2 = (param_1 ^ param_1 >> (param_3 & 0x3f)) & param_2;
  return param_1 ^ param_2 ^ param_2 << (param_3 & 0x3f);
}


/* address=140c86db0 name=FUN_140c86db0 */

undefined8 FUN_140c86db0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140c86d40(param_1,0xf000f000f000f0,4);
  uVar1 = FUN_140c86d40(uVar1,0xff000000ff00,8);
  uVar1 = FUN_140c86d40(uVar1,0xffff0000,0x10);
  return uVar1;
}


/* address=140c86e30 name=FUN_140c86e30 */

undefined8 FUN_140c86e30(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140c86d40(param_1,0xffff0000,0x10);
  uVar1 = FUN_140c86d40(uVar1,0xff000000ff00,8);
  uVar1 = FUN_140c86d40(uVar1,0xf000f000f000f0,4);
  return uVar1;
}


/* address=140c86eb0 name=FUN_140c86eb0 */

void FUN_140c86eb0(ulonglong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  FUN_140e286a0(param_1,param_2,0x10);
  uVar1 = FUN_140c86db0(*param_1);
  uVar2 = FUN_140c86db0(param_1[1]);
  *param_1 = uVar1 & 0xffffffff | uVar2 << 0x20;
  param_1[1] = uVar2 & 0xffffffff00000000 | uVar1 >> 0x20;
  return;
}


/* address=140c86f80 name=FUN_140c86f80 */

void FUN_140c86f80(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  local_18 = FUN_140c86e30(uVar1 & 0xffffffff | uVar2 << 0x20);
  local_10[0] = FUN_140c86e30(uVar2 & 0xffffffff00000000 | uVar1 >> 0x20);
  FUN_140e286a0(param_1,&local_18,8);
  FUN_140e286a0(param_1 + 8,local_10,8);
  return;
}


/* address=140c87050 name=FUN_140c87050 */

void FUN_140c87050(ulonglong *param_1,ulonglong *param_2,undefined4 param_3,byte param_4)

{
  ulonglong uVar1;
  
  uVar1 = (*param_1 >> (param_4 & 0x3f) ^ *param_2) & CONCAT44(param_3,param_3);
  *param_1 = *param_1 ^ uVar1 << (param_4 & 0x3f);
  *param_2 = *param_2 ^ uVar1;
  return;
}


/* address=140c87100 name=FUN_140c87100 */

void FUN_140c87100(longlong param_1)

{
  FUN_140c87050(param_1,param_1 + 8,0x55555555,1);
  FUN_140c87050(param_1 + 0x10,param_1 + 0x18,0x55555555,1);
  FUN_140c87050(param_1 + 0x20,param_1 + 0x28,0x55555555,1);
  FUN_140c87050(param_1 + 0x30,param_1 + 0x38,0x55555555,1);
  FUN_140c87050(param_1,param_1 + 0x10,0x33333333,2);
  FUN_140c87050(param_1 + 8,param_1 + 0x18,0x33333333,2);
  FUN_140c87050(param_1 + 0x20,param_1 + 0x30,0x33333333,2);
  FUN_140c87050(param_1 + 0x28,param_1 + 0x38,0x33333333,2);
  return;
}


/* address=140c87300 name=FUN_140c87300 */

void FUN_140c87300(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  ulonglong local_28;
  undefined local_20 [32];
  
  FUN_140e28d40(param_1,0,0x40);
  if (4 < param_3) {
    FID_conflict__assert((wchar_t *)s_n_14139fd70,(wchar_t *)s_D_14139fc90,0x1de);
  }
  for (local_28 = 0; local_28 < param_3; local_28 = local_28 + 1) {
    FUN_140c86eb0(local_20,param_2 + local_28 * 0x10);
    FUN_140c86c20(param_1,local_20,local_28);
  }
  FUN_140c87100(param_1);
  return;
}


/* address=140c873c0 name=FUN_140c873c0 */

void FUN_140c873c0(longlong param_1,ulonglong param_2,undefined *param_3)

{
  longlong lVar1;
  undefined *puVar2;
  undefined auStack_a8 [32];
  ulonglong local_88;
  undefined local_80 [24];
  undefined local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_1413d9c40 ^ (ulonglong)auStack_a8;
  puVar2 = local_68;
  for (lVar1 = 0x40; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_140c87100(local_68);
  if (4 < param_2) {
    FID_conflict__assert((wchar_t *)s_n_14139fea0,(wchar_t *)s_D_14139fdc0,0x1ef);
  }
  for (local_88 = 0; local_88 < param_2; local_88 = local_88 + 1) {
    FUN_140c86cb0(local_68,local_80,local_88);
    FUN_140c86f80(param_1 + local_88 * 0x10,local_80);
  }
  FUN_140db44f0(local_28 ^ (ulonglong)auStack_a8);
  return;
}


/* address=140c874b0 name=FUN_140c874b0 */

void FUN_140c874b0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  ulonglong local_18;
  
  for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
    uVar1 = FUN_140c86b70(*(undefined8 *)(param_1 + local_18 * 8),
                          *(undefined8 *)(param_2 + local_18 * 8));
    *(undefined8 *)(param_1 + local_18 * 8) = uVar1;
  }
  return;
}


/* address=140c87520 name=FUN_140c87520 */

void FUN_140c87520(undefined8 *param_1)

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
  uVar1 = FUN_140c86b70(uVar7,uVar13);
  uVar2 = FUN_140c86b70(uVar21,uVar10);
  uVar3 = FUN_140c86b70(uVar21,uVar7);
  uVar4 = FUN_140c86b70(uVar21,uVar13);
  uVar5 = FUN_140c86b70(uVar14,uVar5);
  uVar6 = FUN_140c86b70(uVar5,uVar29);
  uVar7 = FUN_140c86b70(uVar6,uVar7);
  uVar8 = FUN_140c86b70(uVar2,uVar1);
  uVar9 = FUN_140c86b70(uVar6,uVar21);
  uVar10 = FUN_140c86b70(uVar6,uVar10);
  uVar11 = FUN_140c86b70(uVar10,uVar4);
  uVar12 = FUN_140c86b70(uVar12,uVar8);
  uVar13 = FUN_140c86b70(uVar12,uVar13);
  uVar14 = FUN_140c86b70(uVar12,uVar14);
  uVar12 = FUN_140c86b70(uVar13,uVar29);
  uVar15 = FUN_140c86b70(uVar13,uVar5);
  uVar16 = FUN_140c86b70(uVar14,uVar3);
  uVar17 = FUN_140c86b70(uVar29,uVar16);
  uVar18 = FUN_140c86b70(uVar15,uVar16);
  uVar19 = FUN_140c86b70(uVar15,uVar4);
  uVar5 = FUN_140c86b70(uVar5,uVar16);
  uVar20 = FUN_140c86b70(uVar2,uVar5);
  uVar21 = FUN_140c86b70(uVar21,uVar5);
  uVar22 = FUN_140c86b10(uVar8,uVar13);
  uVar23 = FUN_140c86b10(uVar11,uVar12);
  uVar23 = FUN_140c86b70(uVar23,uVar22);
  uVar24 = FUN_140c86b10(uVar7,uVar29);
  uVar22 = FUN_140c86b70(uVar24,uVar22);
  uVar24 = FUN_140c86b10(uVar2,uVar5);
  uVar25 = FUN_140c86b10(uVar10,uVar6);
  uVar25 = FUN_140c86b70(uVar25,uVar24);
  uVar26 = FUN_140c86b10(uVar9,uVar17);
  uVar24 = FUN_140c86b70(uVar26,uVar24);
  uVar26 = FUN_140c86b10(uVar3,uVar16);
  uVar27 = FUN_140c86b10(uVar1,uVar18);
  uVar27 = FUN_140c86b70(uVar27,uVar26);
  uVar28 = FUN_140c86b10(uVar4,uVar15);
  uVar26 = FUN_140c86b70(uVar28,uVar26);
  uVar23 = FUN_140c86b70(uVar23,uVar27);
  uVar22 = FUN_140c86b70(uVar22,uVar26);
  uVar25 = FUN_140c86b70(uVar25,uVar27);
  uVar24 = FUN_140c86b70(uVar24,uVar26);
  uVar14 = FUN_140c86b70(uVar23,uVar14);
  uVar19 = FUN_140c86b70(uVar22,uVar19);
  uVar20 = FUN_140c86b70(uVar25,uVar20);
  uVar21 = FUN_140c86b70(uVar24,uVar21);
  uVar22 = FUN_140c86b70(uVar14,uVar19);
  uVar14 = FUN_140c86b10(uVar14,uVar20);
  uVar23 = FUN_140c86b70(uVar21,uVar14);
  uVar24 = FUN_140c86b10(uVar22,uVar23);
  uVar24 = FUN_140c86b70(uVar24,uVar19);
  uVar25 = FUN_140c86b70(uVar20,uVar21);
  uVar14 = FUN_140c86b70(uVar19,uVar14);
  uVar14 = FUN_140c86b10(uVar14,uVar25);
  uVar14 = FUN_140c86b70(uVar14,uVar21);
  uVar19 = FUN_140c86b70(uVar20,uVar14);
  uVar20 = FUN_140c86b70(uVar23,uVar14);
  uVar21 = FUN_140c86b10(uVar21,uVar20);
  uVar19 = FUN_140c86b70(uVar21,uVar19);
  uVar21 = FUN_140c86b70(uVar23,uVar21);
  uVar21 = FUN_140c86b10(uVar24,uVar21);
  uVar21 = FUN_140c86b70(uVar22,uVar21);
  uVar20 = FUN_140c86b70(uVar21,uVar19);
  uVar22 = FUN_140c86b70(uVar24,uVar14);
  uVar23 = FUN_140c86b70(uVar24,uVar21);
  uVar25 = FUN_140c86b70(uVar14,uVar19);
  uVar26 = FUN_140c86b70(uVar22,uVar20);
  uVar13 = FUN_140c86b10(uVar25,uVar13);
  uVar12 = FUN_140c86b10(uVar19,uVar12);
  uVar29 = FUN_140c86b10(uVar14,uVar29);
  uVar5 = FUN_140c86b10(uVar23,uVar5);
  uVar6 = FUN_140c86b10(uVar21,uVar6);
  uVar17 = FUN_140c86b10(uVar24,uVar17);
  uVar16 = FUN_140c86b10(uVar22,uVar16);
  uVar18 = FUN_140c86b10(uVar26,uVar18);
  uVar15 = FUN_140c86b10(uVar20,uVar15);
  uVar8 = FUN_140c86b10(uVar25,uVar8);
  uVar11 = FUN_140c86b10(uVar19,uVar11);
  uVar14 = FUN_140c86b10(uVar14,uVar7);
  uVar7 = FUN_140c86b10(uVar23,uVar2);
  uVar21 = FUN_140c86b10(uVar21,uVar10);
  uVar10 = FUN_140c86b10(uVar24,uVar9);
  uVar2 = FUN_140c86b10(uVar22,uVar3);
  uVar1 = FUN_140c86b10(uVar26,uVar1);
  uVar3 = FUN_140c86b10(uVar20,uVar4);
  uVar2 = FUN_140c86b70(uVar2,uVar1);
  uVar14 = FUN_140c86b70(uVar11,uVar14);
  uVar21 = FUN_140c86b70(uVar17,uVar21);
  uVar4 = FUN_140c86b70(uVar8,uVar11);
  uVar8 = FUN_140c86b70(uVar29,uVar7);
  uVar29 = FUN_140c86b70(uVar29,uVar17);
  uVar9 = FUN_140c86b70(uVar18,uVar15);
  uVar13 = FUN_140c86b70(uVar13,uVar5);
  uVar11 = FUN_140c86b70(uVar16,uVar18);
  uVar1 = FUN_140c86b70(uVar1,uVar3);
  uVar7 = FUN_140c86b70(uVar7,uVar21);
  uVar3 = FUN_140c86b70(uVar8,uVar13);
  uVar8 = FUN_140c86b70(uVar6,uVar2);
  uVar5 = FUN_140c86b70(uVar5,uVar11);
  uVar2 = FUN_140c86b70(uVar2,uVar3);
  uVar10 = FUN_140c86b70(uVar10,uVar3);
  uVar3 = FUN_140c86b70(uVar9,uVar8);
  uVar4 = FUN_140c86b70(uVar4,uVar8);
  uVar6 = FUN_140c86b70(uVar6,uVar5);
  uVar10 = FUN_140c86b70(uVar10,uVar3);
  uVar12 = FUN_140c86b70(uVar12,uVar4);
  uVar5 = FUN_140c86b70(uVar5,uVar4);
  uVar3 = FUN_140c86ba0(uVar3);
  uVar7 = FUN_140c86b70(uVar7,uVar3);
  uVar2 = FUN_140c86ba0(uVar2);
  uVar21 = FUN_140c86b70(uVar21,uVar2);
  uVar2 = FUN_140c86b70(uVar6,uVar10);
  uVar13 = FUN_140c86b70(uVar13,uVar12);
  uVar12 = FUN_140c86b70(uVar29,uVar12);
  uVar14 = FUN_140c86b70(uVar14,uVar10);
  uVar10 = FUN_140c86ba0(uVar13);
  uVar10 = FUN_140c86b70(uVar6,uVar10);
  uVar29 = FUN_140c86ba0(uVar2);
  uVar29 = FUN_140c86b70(uVar1,uVar29);
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


/* address=140c88370 name=FUN_140c88370 */

void FUN_140c88370(undefined8 *param_1)

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
  uVar5 = FUN_140c86b70(uVar2,uVar4);
  uVar5 = FUN_140c86b70(uVar10,uVar5);
  uVar6 = FUN_140c86b70(uVar3,uVar12);
  uVar6 = FUN_140c86b70(uVar11,uVar6);
  uVar7 = FUN_140c86b70(uVar4,uVar13);
  uVar7 = FUN_140c86b70(uVar1,uVar7);
  uVar8 = FUN_140c86b70(uVar12,uVar10);
  uVar8 = FUN_140c86b70(uVar2,uVar8);
  uVar9 = FUN_140c86b70(uVar13,uVar11);
  uVar9 = FUN_140c86b70(uVar3,uVar9);
  uVar10 = FUN_140c86b70(uVar10,uVar1);
  uVar10 = FUN_140c86b70(uVar4,uVar10);
  uVar11 = FUN_140c86b70(uVar11,uVar2);
  uVar12 = FUN_140c86b70(uVar12,uVar11);
  uVar11 = FUN_140c86b70(uVar1,uVar3);
  uVar13 = FUN_140c86b70(uVar13,uVar11);
  uVar11 = FUN_140c86ba0(uVar5);
  *param_1 = uVar11;
  param_1[1] = uVar6;
  uVar11 = FUN_140c86ba0(uVar7);
  param_1[2] = uVar11;
  param_1[3] = uVar8;
  param_1[4] = uVar9;
  param_1[5] = uVar10;
  param_1[6] = uVar12;
  param_1[7] = uVar13;
  return;
}


/* address=140c88660 name=FUN_140c88660 */

void FUN_140c88660(undefined8 param_1)

{
  FUN_140c88370(param_1);
  FUN_140c87520(param_1);
  FUN_140c88370(param_1);
  return;
}


/* address=140c886a0 name=FUN_140c886a0 */

void FUN_140c886a0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong local_58;
  
  for (local_58 = 0; local_58 < 8; local_58 = local_58 + 1) {
    uVar1 = FUN_140c86b10(*(undefined8 *)(param_1 + local_58 * 8),0xf000f000f000f);
    uVar2 = FUN_140c86b10(*(undefined8 *)(param_1 + local_58 * 8),0xf000f000f000f0);
    uVar3 = FUN_140c86b10(*(undefined8 *)(param_1 + local_58 * 8),0xf000f000f000f00);
    uVar4 = FUN_140c86b10(*(undefined8 *)(param_1 + local_58 * 8),0xf000f000f000f000);
    uVar5 = FUN_140c86bc0(uVar2,0xc);
    uVar2 = FUN_140c86bf0(uVar2,4);
    uVar2 = FUN_140c86b40(uVar2,uVar5);
    uVar5 = FUN_140c86bc0(uVar3,8);
    uVar3 = FUN_140c86bf0(uVar3,8);
    uVar3 = FUN_140c86b40(uVar3,uVar5);
    uVar5 = FUN_140c86bc0(uVar4,4);
    uVar4 = FUN_140c86bf0(uVar4,0xc);
    uVar4 = FUN_140c86b40(uVar4,uVar5);
    uVar3 = FUN_140c86b40(uVar3,uVar4);
    uVar1 = FUN_140c86b40(uVar1,uVar2);
    uVar1 = FUN_140c86b40(uVar1,uVar3);
    *(undefined8 *)(param_1 + local_58 * 8) = uVar1;
  }
  return;
}


/* address=140c88860 name=FUN_140c88860 */

void FUN_140c88860(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong local_58;
  
  for (local_58 = 0; local_58 < 8; local_58 = local_58 + 1) {
    uVar1 = FUN_140c86b10(*(undefined8 *)(param_1 + local_58 * 8),0xf000f000f000f);
    uVar2 = FUN_140c86b10(*(undefined8 *)(param_1 + local_58 * 8),0xf000f000f000f0);
    uVar3 = FUN_140c86b10(*(undefined8 *)(param_1 + local_58 * 8),0xf000f000f000f00);
    uVar4 = FUN_140c86b10(*(undefined8 *)(param_1 + local_58 * 8),0xf000f000f000f000);
    uVar5 = FUN_140c86bc0(uVar2,4);
    uVar2 = FUN_140c86bf0(uVar2,0xc);
    uVar2 = FUN_140c86b40(uVar2,uVar5);
    uVar5 = FUN_140c86bc0(uVar3,8);
    uVar3 = FUN_140c86bf0(uVar3,8);
    uVar3 = FUN_140c86b40(uVar3,uVar5);
    uVar5 = FUN_140c86bc0(uVar4,0xc);
    uVar4 = FUN_140c86bf0(uVar4,4);
    uVar4 = FUN_140c86b40(uVar4,uVar5);
    uVar3 = FUN_140c86b40(uVar3,uVar4);
    uVar1 = FUN_140c86b40(uVar1,uVar2);
    uVar1 = FUN_140c86b40(uVar1,uVar3);
    *(undefined8 *)(param_1 + local_58 * 8) = uVar1;
  }
  return;
}


/* address=140c88a20 name=FUN_140c88a20 */

ulonglong FUN_140c88a20(ulonglong param_1)

{
  return param_1 >> 4 & 0xfff0fff0fff0fff | (param_1 & 0xf000f000f000f) << 0xc;
}


/* address=140c88a60 name=FUN_140c88a60 */

ulonglong FUN_140c88a60(ulonglong param_1)

{
  return param_1 >> 8 & 0xff00ff00ff00ff | (param_1 & 0xff00ff00ff00ff) << 8;
}


/* address=140c88aa0 name=FUN_140c88aa0 */

void FUN_140c88aa0(undefined8 *param_1)

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
  uVar1 = FUN_140c88a20(uVar2);
  uVar2 = FUN_140c86b70(uVar2,uVar1);
  uVar3 = FUN_140c88a20(uVar4);
  uVar4 = FUN_140c86b70(uVar4,uVar3);
  uVar5 = FUN_140c88a20(uVar6);
  uVar6 = FUN_140c86b70(uVar6,uVar5);
  uVar7 = FUN_140c88a20(uVar8);
  uVar8 = FUN_140c86b70(uVar8,uVar7);
  uVar9 = FUN_140c88a20(uVar10);
  uVar10 = FUN_140c86b70(uVar10,uVar9);
  uVar11 = FUN_140c88a20(uVar12);
  uVar12 = FUN_140c86b70(uVar12,uVar11);
  uVar13 = FUN_140c88a20(uVar14);
  uVar14 = FUN_140c86b70(uVar14,uVar13);
  uVar15 = FUN_140c88a20(uVar16);
  uVar16 = FUN_140c86b70(uVar16,uVar15);
  uVar17 = FUN_140c88a60(uVar2);
  uVar1 = FUN_140c86b70(uVar16,uVar1);
  uVar1 = FUN_140c86b70(uVar1,uVar17);
  *param_1 = uVar1;
  uVar1 = FUN_140c88a60(uVar4);
  uVar1 = FUN_140c86b70(uVar3,uVar1);
  uVar2 = FUN_140c86b70(uVar2,uVar16);
  uVar2 = FUN_140c86b70(uVar2,uVar1);
  param_1[1] = uVar2;
  uVar2 = FUN_140c88a60(uVar6);
  uVar4 = FUN_140c86b70(uVar4,uVar5);
  uVar2 = FUN_140c86b70(uVar4,uVar2);
  param_1[2] = uVar2;
  uVar2 = FUN_140c88a60(uVar8);
  uVar2 = FUN_140c86b70(uVar7,uVar2);
  uVar4 = FUN_140c86b70(uVar6,uVar16);
  uVar2 = FUN_140c86b70(uVar4,uVar2);
  param_1[3] = uVar2;
  uVar2 = FUN_140c88a60(uVar10);
  uVar2 = FUN_140c86b70(uVar9,uVar2);
  uVar4 = FUN_140c86b70(uVar8,uVar16);
  uVar2 = FUN_140c86b70(uVar4,uVar2);
  param_1[4] = uVar2;
  uVar2 = FUN_140c88a60(uVar12);
  uVar4 = FUN_140c86b70(uVar10,uVar11);
  uVar2 = FUN_140c86b70(uVar4,uVar2);
  param_1[5] = uVar2;
  uVar2 = FUN_140c88a60(uVar14);
  uVar4 = FUN_140c86b70(uVar12,uVar13);
  uVar2 = FUN_140c86b70(uVar4,uVar2);
  param_1[6] = uVar2;
  uVar2 = FUN_140c88a60(uVar16);
  uVar4 = FUN_140c86b70(uVar14,uVar15);
  uVar2 = FUN_140c86b70(uVar4,uVar2);
  param_1[7] = uVar2;
  return;
}


/* address=140c88f80 name=FUN_140c88f80 */

void FUN_140c88f80(undefined8 *param_1)

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
  uVar7 = FUN_140c88a60(uVar15);
  uVar7 = FUN_140c86b70(uVar15,uVar7);
  uVar8 = FUN_140c88a60(uVar16);
  uVar8 = FUN_140c86b70(uVar16,uVar8);
  uVar9 = FUN_140c88a60(uVar1);
  uVar9 = FUN_140c86b70(uVar1,uVar9);
  uVar10 = FUN_140c88a60(uVar2);
  uVar10 = FUN_140c86b70(uVar2,uVar10);
  uVar11 = FUN_140c88a60(uVar3);
  uVar11 = FUN_140c86b70(uVar3,uVar11);
  uVar12 = FUN_140c88a60(uVar4);
  uVar12 = FUN_140c86b70(uVar4,uVar12);
  uVar13 = FUN_140c88a60(uVar5);
  uVar13 = FUN_140c86b70(uVar5,uVar13);
  uVar14 = FUN_140c88a60(uVar6);
  uVar14 = FUN_140c86b70(uVar6,uVar14);
  uVar15 = FUN_140c86b70(uVar15,uVar13);
  *param_1 = uVar15;
  uVar15 = FUN_140c86b70(uVar13,uVar14);
  uVar15 = FUN_140c86b70(uVar16,uVar15);
  param_1[1] = uVar15;
  uVar15 = FUN_140c86b70(uVar7,uVar14);
  uVar15 = FUN_140c86b70(uVar1,uVar15);
  param_1[2] = uVar15;
  uVar15 = FUN_140c86b70(uVar8,uVar13);
  uVar15 = FUN_140c86b70(uVar2,uVar15);
  param_1[3] = uVar15;
  uVar15 = FUN_140c86b70(uVar13,uVar14);
  uVar16 = FUN_140c86b70(uVar3,uVar9);
  uVar15 = FUN_140c86b70(uVar16,uVar15);
  param_1[4] = uVar15;
  uVar15 = FUN_140c86b70(uVar10,uVar14);
  uVar15 = FUN_140c86b70(uVar4,uVar15);
  param_1[5] = uVar15;
  uVar15 = FUN_140c86b70(uVar5,uVar11);
  param_1[6] = uVar15;
  uVar15 = FUN_140c86b70(uVar6,uVar12);
  param_1[7] = uVar15;
  FUN_140c88aa0(param_1);
  return;
}


/* address=140c892f0 name=FUN_140c892f0 */

void FUN_140c892f0(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong local_18;
  
  FUN_140c874b0(param_3,param_1);
  for (local_18 = 1; local_18 < param_2; local_18 = local_18 + 1) {
    FUN_140c87520(param_3);
    FUN_140c886a0(param_3);
    FUN_140c88aa0(param_3);
    FUN_140c874b0(param_3,param_1 + local_18 * 0x40);
  }
  FUN_140c87520(param_3);
  FUN_140c886a0(param_3);
  FUN_140c874b0(param_3,param_1 + param_2 * 0x40);
  return;
}


/* address=140c893d0 name=FUN_140c893d0 */

void FUN_140c893d0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong local_18;
  
  FUN_140c874b0(param_3,param_1 + param_2 * 0x40);
  FUN_140c88860(param_3);
  FUN_140c88660(param_3);
  for (local_18 = param_2 + -1; local_18 != 0; local_18 = local_18 + -1) {
    FUN_140c874b0(param_3,param_1 + local_18 * 0x40);
    FUN_140c88f80(param_3);
    FUN_140c88860(param_3);
    FUN_140c88660(param_3);
  }
  FUN_140c874b0(param_3,param_1);
  return;
}


/* address=140c894b0 name=FUN_140c894b0 */

void FUN_140c894b0(longlong param_1,longlong param_2)

{
  ulonglong local_28;
  ulonglong local_20;
  undefined local_18 [24];
  
  for (local_28 = 0; local_28 <= *(uint *)(param_2 + 0xf0); local_28 = local_28 + 1) {
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      FUN_140e286a0(local_18,param_2 + local_28 * 0x10,0x10);
      FUN_140c86c20(param_1 + local_28 * 0x40,local_18,local_20);
    }
    FUN_140c87100(param_1 + local_28 * 0x40);
  }
  return;
}


/* address=140c89590 name=FUN_140c89590 */

byte FUN_140c89590(byte param_1,longlong param_2)

{
  return (byte)((int)(uint)param_1 >> ((byte)(param_2 << 2) & 0x1f)) & 0xf;
}


/* address=140c895c0 name=FUN_140c895c0 */

void FUN_140c895c0(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_78 [32];
  undefined local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_78;
  FUN_140e28d40(local_58,0,0x40);
  FUN_140c86c20(local_58,param_2,0);
  FUN_140c87100(local_58);
  FUN_140c87520(local_58);
  FUN_140c87100(local_58);
  FUN_140c86cb0(local_58,param_1,0);
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_78);
  return;
}


/* address=140c89650 name=FUN_140c89650 */

void FUN_140c89650(longlong param_1,undefined8 param_2)

{
  undefined uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong local_40;
  ulonglong local_38;
  undefined8 local_28 [5];
  
  *(undefined4 *)(param_1 + 0xf0) = 10;
  FUN_140c86eb0(local_28,param_2);
  FUN_140e286a0(param_1,local_28,0x10);
  for (local_38 = 1; local_38 < 0xb; local_38 = local_38 + 1) {
    FUN_140c895c0(local_28 + 2,local_28);
    uVar1 = (&UNK_141001fff)[local_38];
    for (local_40 = 0; local_40 < 2; local_40 = local_40 + 1) {
      uVar2 = FUN_140c89590(uVar1,local_40);
      uVar2 = FUN_140c86b70(local_28[local_40],uVar2);
      local_28[local_40] = uVar2;
      uVar2 = FUN_140c88a20(local_28[local_40 + 2]);
      uVar2 = FUN_140c86bf0(uVar2,0xc);
      uVar2 = FUN_140c86b70(local_28[local_40],uVar2);
      local_28[local_40] = uVar2;
      uVar2 = local_28[local_40];
      uVar3 = FUN_140c86bc0(uVar2,4);
      uVar3 = FUN_140c86b70(local_28[local_40],uVar3);
      local_28[local_40] = uVar3;
      uVar3 = FUN_140c86bc0(uVar2,8);
      uVar3 = FUN_140c86b70(local_28[local_40],uVar3);
      local_28[local_40] = uVar3;
      uVar2 = FUN_140c86bc0(uVar2,0xc);
      uVar2 = FUN_140c86b70(local_28[local_40],uVar2);
      local_28[local_40] = uVar2;
    }
    FUN_140e286a0(param_1 + local_38 * 0x10,local_28,0x10);
  }
  return;
}


/* address=140c89830 name=FUN_140c89830 */

void FUN_140c89830(longlong param_1,longlong param_2)

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
  
  local_10 = DAT_1413d9c40 ^ (ulonglong)auStack_b8;
  *(undefined4 *)(param_1 + 0xf0) = 0xc;
  local_80 = local_40;
  local_88 = local_30;
  FUN_140c86eb0(local_80,param_2);
  FUN_140e286a0(param_1,local_80,0x10);
  puVar3 = local_20;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_140e286a0(local_20,param_2 + 0x10,8);
  FUN_140c86eb0(local_88,local_20);
  for (local_70 = 0; local_70 < 4; local_70 = local_70 + 1) {
    FUN_140c895c0(local_50,local_88);
    local_98 = (&DAT_141002000)[local_70 * 2];
    for (local_78 = 0; local_78 < 2; local_78 = local_78 + 1) {
      uVar1 = FUN_140c89590(local_98,local_78);
      uVar1 = FUN_140c86b70(*(undefined8 *)(local_80 + local_78 * 8),uVar1);
      uVar1 = FUN_140c86bc0(uVar1,8);
      uVar1 = FUN_140c86b40(*(undefined8 *)(local_88 + local_78 * 8),uVar1);
      *(undefined8 *)(local_88 + local_78 * 8) = uVar1;
      uVar1 = FUN_140c88a20(local_50[local_78]);
      uVar1 = FUN_140c86bc0(uVar1,4);
      uVar1 = FUN_140c86b10(uVar1,0xffff00000000);
      uVar1 = FUN_140c86b70(*(undefined8 *)(local_88 + local_78 * 8),uVar1);
      *(undefined8 *)(local_88 + local_78 * 8) = uVar1;
      uVar1 = FUN_140c86bc0(*(undefined8 *)(local_88 + local_78 * 8),4);
      uVar1 = FUN_140c86b10(uVar1,0xffff000000000000);
      uVar1 = FUN_140c86b70(*(undefined8 *)(local_88 + local_78 * 8),uVar1);
      *(undefined8 *)(local_88 + local_78 * 8) = uVar1;
      uVar1 = FUN_140c86bf0(*(undefined8 *)(local_80 + local_78 * 8),8);
      *(undefined8 *)(local_80 + local_78 * 8) = uVar1;
      uVar1 = FUN_140c86bc0(*(undefined8 *)(local_88 + local_78 * 8),8);
      uVar1 = FUN_140c86b40(*(undefined8 *)(local_80 + local_78 * 8),uVar1);
      *(undefined8 *)(local_80 + local_78 * 8) = uVar1;
      uVar1 = FUN_140c86bf0(*(undefined8 *)(local_88 + local_78 * 8),0xc);
      uVar1 = FUN_140c86b70(*(undefined8 *)(local_80 + local_78 * 8),uVar1);
      *(undefined8 *)(local_80 + local_78 * 8) = uVar1;
      local_68 = *(undefined8 *)(local_80 + local_78 * 8);
      uVar1 = FUN_140c86bc0(local_68,4);
      uVar1 = FUN_140c86b70(*(undefined8 *)(local_80 + local_78 * 8),uVar1);
      *(undefined8 *)(local_80 + local_78 * 8) = uVar1;
      uVar1 = FUN_140c86bc0(local_68,8);
      uVar1 = FUN_140c86b70(*(undefined8 *)(local_80 + local_78 * 8),uVar1);
      *(undefined8 *)(local_80 + local_78 * 8) = uVar1;
      uVar1 = FUN_140c86bc0(local_68,0xc);
      uVar1 = FUN_140c86b70(*(undefined8 *)(local_80 + local_78 * 8),uVar1);
      *(undefined8 *)(local_80 + local_78 * 8) = uVar1;
    }
    FUN_140e286a0(param_1 + (local_70 * 0xc + 4) * 4,local_88,0x10);
    FUN_140e286a0(param_1 + (local_70 * 0xc + 8) * 4,local_80,0x10);
    FUN_140c895c0(local_50,local_80);
    local_98 = (&DAT_141002001)[local_70 * 2];
    for (local_90 = 0; local_90 < 2; local_90 = local_90 + 1) {
      uVar1 = FUN_140c86bf0(*(undefined8 *)(local_88 + local_90 * 8),8);
      *(undefined8 *)(local_88 + local_90 * 8) = uVar1;
      uVar1 = FUN_140c86bc0(*(undefined8 *)(local_80 + local_90 * 8),8);
      uVar1 = FUN_140c86b40(*(undefined8 *)(local_88 + local_90 * 8),uVar1);
      *(undefined8 *)(local_88 + local_90 * 8) = uVar1;
      uVar1 = FUN_140c89590(local_98,local_90);
      uVar1 = FUN_140c86b70(*(undefined8 *)(local_88 + local_90 * 8),uVar1);
      *(undefined8 *)(local_88 + local_90 * 8) = uVar1;
      uVar1 = FUN_140c88a20(local_50[local_90]);
      uVar1 = FUN_140c86bf0(uVar1,0xc);
      uVar1 = FUN_140c86b70(*(undefined8 *)(local_88 + local_90 * 8),uVar1);
      *(undefined8 *)(local_88 + local_90 * 8) = uVar1;
      local_60 = *(undefined8 *)(local_88 + local_90 * 8);
      uVar1 = FUN_140c86bc0(local_60,4);
      uVar1 = FUN_140c86b70(*(undefined8 *)(local_88 + local_90 * 8),uVar1);
      *(undefined8 *)(local_88 + local_90 * 8) = uVar1;
      uVar1 = FUN_140c86bc0(local_60,8);
      uVar1 = FUN_140c86b70(*(undefined8 *)(local_88 + local_90 * 8),uVar1);
      *(undefined8 *)(local_88 + local_90 * 8) = uVar1;
      uVar1 = FUN_140c86bc0(local_60,0xc);
      uVar1 = FUN_140c86b70(*(undefined8 *)(local_88 + local_90 * 8),uVar1);
      *(undefined8 *)(local_88 + local_90 * 8) = uVar1;
      uVar1 = FUN_140c86bf0(*(undefined8 *)(local_80 + local_90 * 8),8);
      *(undefined8 *)(local_80 + local_90 * 8) = uVar1;
      uVar1 = FUN_140c86bf0(*(undefined8 *)(local_88 + local_90 * 8),0xc);
      uVar1 = FUN_140c86b70(*(undefined8 *)(local_80 + local_90 * 8),uVar1);
      *(undefined8 *)(local_80 + local_90 * 8) = uVar1;
      uVar1 = FUN_140c86bc0(*(undefined8 *)(local_80 + local_90 * 8),4);
      uVar1 = FUN_140c86b70(*(undefined8 *)(local_80 + local_90 * 8),uVar1);
      *(undefined8 *)(local_80 + local_90 * 8) = uVar1;
      uVar1 = FUN_140c86b10(*(undefined8 *)(local_80 + local_90 * 8),0xffffffff);
      *(undefined8 *)(local_80 + local_90 * 8) = uVar1;
    }
    FUN_140e286a0(param_1 + (local_70 * 0xc + 0xc) * 4,local_88,0x10);
    local_58 = local_80;
    puVar3 = local_88;
    local_88 = local_80;
    local_80 = puVar3;
  }
  FUN_140db44f0(local_10 ^ (ulonglong)auStack_b8);
  return;
}


/* address=140c89f00 name=FUN_140c89f00 */

void FUN_140c89f00(longlong param_1,longlong param_2)

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
  FUN_140c86eb0(local_48,param_2);
  FUN_140e286a0(param_1,local_48,0x10);
  FUN_140c86eb0(local_48 + 2,param_2 + 0x10);
  FUN_140e286a0(param_1 + 0x10,local_48 + 2,0x10);
  local_50 = 2;
  while( true ) {
    if (0xe < local_50) {
      return;
    }
    FUN_140c895c0(local_18);
    uVar1 = (&UNK_141001fff)[local_50 / 2];
    for (local_68 = 0; local_68 < 2; local_68 = local_68 + 1) {
      uVar2 = FUN_140c89590(uVar1,local_68);
      uVar2 = FUN_140c86b70(local_48[local_68],uVar2);
      local_48[local_68] = uVar2;
      uVar2 = FUN_140c88a20(local_18[local_68]);
      uVar2 = FUN_140c86bf0(uVar2,0xc);
      uVar2 = FUN_140c86b70(local_48[local_68],uVar2);
      local_48[local_68] = uVar2;
      local_28 = local_48[local_68];
      uVar2 = FUN_140c86bc0(local_28,4);
      uVar2 = FUN_140c86b70(local_48[local_68],uVar2);
      local_48[local_68] = uVar2;
      uVar2 = FUN_140c86bc0(local_28,8);
      uVar2 = FUN_140c86b70(local_48[local_68],uVar2);
      local_48[local_68] = uVar2;
      uVar2 = FUN_140c86bc0(local_28,0xc);
      uVar2 = FUN_140c86b70(local_48[local_68],uVar2);
      local_48[local_68] = uVar2;
    }
    FUN_140e286a0(param_1 + local_50 * 0x10,local_48,0x10);
    if (local_50 == 0xe) break;
    FUN_140c895c0(local_18,local_48);
    for (local_58 = 0; local_58 < 2; local_58 = local_58 + 1) {
      uVar2 = FUN_140c86bf0(local_18[local_58],0xc);
      uVar2 = FUN_140c86b70(local_48[local_58 + 2],uVar2);
      local_48[local_58 + 2] = uVar2;
      local_20 = local_48[local_58 + 2];
      uVar2 = FUN_140c86bc0(local_20,4);
      uVar2 = FUN_140c86b70(local_48[local_58 + 2],uVar2);
      local_48[local_58 + 2] = uVar2;
      uVar2 = FUN_140c86bc0(local_20,8);
      uVar2 = FUN_140c86b70(local_48[local_58 + 2],uVar2);
      local_48[local_58 + 2] = uVar2;
      uVar2 = FUN_140c86bc0(local_20,0xc);
      uVar2 = FUN_140c86b70(local_48[local_58 + 2],uVar2);
      local_48[local_58 + 2] = uVar2;
    }
    FUN_140e286a0(param_1 + (local_50 * 4 + 4) * 4,local_48 + 2,0x10);
    local_50 = local_50 + 2;
  }
  return;
}


/* address=140c8a270 name=FUN_140c8a270 */

void FUN_140c8a270(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  for (local_28 = 0; local_28 < 0x10; local_28 = local_28 + 8) {
    FUN_140e286a0(&local_20,param_2 + local_28,8);
    FUN_140e286a0(local_18,param_3 + local_28,8);
    local_20 = FUN_140c86b70(local_20,local_18[0]);
    FUN_140e286a0(param_1 + local_28,&local_20,8);
  }
  return;
}


/* address=140c8a360 name=FUN_140c8a360 */

void FUN_140c8a360(void)

{
  return;
}


/* address=140c8a370 name=FUN_140c8a370 */

void FUN_140c8a370(void)

{
  return;
}


/* address=140c8a380 name=FUN_140c8a380 */

void FUN_140c8a380(void)

{
  return;
}


/* address=140c8a390 name=FUN_140c8a390 */

void FUN_140c8a390(void)

{
  return;
}


/* address=140c8a3a0 name=FUN_140c8a3a0 */

void FUN_140c8a3a0(void)

{
  return;
}


/* address=140c8a3b0 name=FUN_140c8a3b0 */

void FUN_140c8a3b0(void)

{
  return;
}


/* address=140c8a3c0 name=FUN_140c8a3c0 */

void FUN_140c8a3c0(void)

{
  return;
}


/* address=140c8a3d0 name=FUN_140c8a3d0 */

void FUN_140c8a3d0(void)

{
  return;
}


/* address=140c8a3e0 name=FUN_140c8a3e0 */

void FUN_140c8a3e0(void)

{
  return;
}


/* address=140c8a3f0 name=FUN_140c8a3f0 */

void FUN_140c8a3f0(void)

{
  return;
}


/* address=140c8a400 name=FUN_140c8a400 */

void FUN_140c8a400(void)

{
  return;
}


/* address=140c8a410 name=FUN_140c8a410 */

void FUN_140c8a410(void)

{
  return;
}


/* address=140c8a420 name=FUN_140c8a420 */

void FUN_140c8a420(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
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
  
  local_10 = DAT_1413d9c40 ^ (ulonglong)auStack_58;
  if (((param_5 < 0x80000000) && (0x17 < param_5)) && (param_5 % 8 == 0)) {
    FUN_140c80930(local_20,param_4,8);
    FUN_140c80980(param_2,param_4 + 8,param_5 - 8);
    local_28 = param_5 / 8 - 1;
    local_38 = DAT_140fdc228;
    while (local_38 = local_38 - 1, local_38 < DAT_140fdc228) {
      for (local_30 = local_28; local_30 != 0; local_30 = local_30 + -1) {
        local_34 = (int)local_28 * local_38 + (int)local_30;
        bStack_19 = bStack_19 ^ (byte)local_34;
        bStack_1a = bStack_1a ^ (byte)((uint)local_34 >> 8);
        bStack_1b = bStack_1b ^ (byte)((uint)local_34 >> 0x10);
        bStack_1c = bStack_1c ^ (byte)((uint)local_34 >> 0x18);
        FUN_140c80930(local_18,param_2 + -8 + local_30 * 8,8);
        FUN_140c811b0(local_20,local_20,param_1);
        FUN_140c80930(param_2 + -8 + local_30 * 8,local_18,8);
      }
    }
    FUN_140e286a0(param_3,local_20,8);
  }
  FUN_140db44f0(local_10 ^ (ulonglong)auStack_58);
  return;
}


/* address=140c8a680 name=FUN_140c8a680 */

longlong FUN_140c8a680(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140c660d0(0x18);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_140c809d0(lVar1,0,0x18);
    *(undefined4 *)(lVar1 + 0x14) = 1;
  }
  return lVar1;
}


/* address=140c8a6d0 name=FUN_140c8a6d0 */

void FUN_140c8a6d0(undefined8 param_1)

{
  FUN_140c809d0(param_1,0,0x18);
  return;
}


/* address=140c8a700 name=FUN_140c8a700 */

void FUN_140c8a700(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((*(uint *)((longlong)param_1 + 0x14) & 2) == 0) {
      FUN_140c66200(*param_1);
    }
    if ((*(uint *)((longlong)param_1 + 0x14) & 1) == 0) {
      *param_1 = 0;
    }
    else {
      FUN_140c66200(param_1);
    }
  }
  return;
}


/* address=140c8a770 name=FUN_140c8a770 */

void FUN_140c8a770(undefined8 param_1)

{
  FUN_140c8a700(param_1);
  return;
}


/* address=140c8a790 name=FUN_140c8a790 */

longlong FUN_140c8a790(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_140c8a680();
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar2 = FUN_140c8a7f0(lVar1,param_1);
      if (lVar2 == 0) {
        FUN_140c8a700(lVar1);
        lVar1 = 0;
      }
    }
  }
  return lVar1;
}


/* address=140c8a7f0 name=FUN_140c8a7f0 */

undefined8 * FUN_140c8a7f0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (param_2 != param_1) {
    iVar1 = FUN_140c927d0(param_1,(longlong)*(int *)(param_2 + 1));
    if (iVar1 == 0) {
      param_1 = (undefined8 *)0x0;
    }
    else {
      FUN_140c80930(*param_1,*param_2,(longlong)*(int *)(param_2 + 1) << 3);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    }
  }
  return param_1;
}


/* address=140c8a8f0 name=FUN_140c8a8f0 */

void FUN_140c8a8f0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140ca3350();
  FUN_140d395d0(uVar1,&LAB_140ca33b0);
  FUN_140ca3340();
  return;
}


/* address=140c8a920 name=FUN_140c8a920 */

int FUN_140c8a920(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_140c92740(param_1);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_140c92460(*(undefined8 *)(*param_1 + (longlong)(iVar1 + -1) * 8));
    iVar2 = (iVar1 + -1) * 0x40 + iVar2;
  }
  return iVar2;
}


/* address=140c8a980 name=FUN_140c8a980 */

ulonglong FUN_140c8a980(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_140c8a920(param_1);
  return (ulonglong)(iVar1 + 7) / 8;
}


/* address=140c8a9b0 name=FUN_140c8a9b0 */

void FUN_140c8a9b0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


/* address=140c8a9e0 name=FUN_140c8a9e0 */

void FUN_140c8a9e0(undefined8 param_1)

{
  FUN_140c8aa10(param_1,1);
  return;
}


/* address=140c8aa10 name=FUN_140c8aa10 */

undefined8 FUN_140c8aa10(longlong **param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    FUN_140c8a9b0(param_1);
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_140c927d0(param_1,1);
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


/* address=140c8aac0 name=FUN_140c8aac0 */

void FUN_140c8aac0(longlong param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (iVar1 = FUN_140c8cac0(param_1), iVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x10) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


/* address=140c8ab10 name=FUN_140c8ab10 */

bool FUN_140c8ab10(longlong param_1)

{
  return *(int *)(param_1 + 0x10) != 0;
}


/* address=140c8ab50 name=FUN_140c8ab50 */

undefined8 * FUN_140c8ab50(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 *local_res18;
  undefined8 *local_18;
  undefined4 local_10;
  
  local_18 = (undefined8 *)0x0;
  local_res18 = param_3;
  if ((param_3 == (undefined8 *)0x0) &&
     (local_res18 = (undefined8 *)FUN_140c8a680(), local_18 = local_res18,
     local_res18 == (undefined8 *)0x0)) {
    local_res18 = (undefined8 *)0x0;
  }
  else if (param_2 == 0) {
    *(undefined4 *)(local_res18 + 1) = 0;
  }
  else {
    uVar2 = (param_2 - 1U) / 8 + 1;
    iVar1 = FUN_140c927d0(local_res18,uVar2);
    if (iVar1 == 0) {
      FUN_140c8a700(local_18);
      local_res18 = (undefined8 *)0x0;
    }
    else {
      if (0x7fffffff < uVar2) {
        FID_conflict__assert((wchar_t *)s_n_1413a0a98,(wchar_t *)s_D_1413a09c0,0x6f);
      }
      local_10 = (undefined4)uVar2;
      *(undefined4 *)(local_res18 + 1) = local_10;
      *(undefined4 *)(local_res18 + 2) = 0;
      FUN_140ca30e0(*local_res18,(longlong)*(int *)(local_res18 + 1),param_1,param_2);
    }
  }
  return local_res18;
}


/* address=140c8ac70 name=FUN_140c8ac70 */

undefined4 FUN_140c8ac70(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140c8a980(param_1);
  FUN_140ca3240(param_2,uVar1,*param_1,(longlong)*(int *)(param_1 + 1));
  return uVar1;
}


/* address=140c8ae90 name=FUN_140c8ae90 */

bool FUN_140c8ae90(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_140ca33d0(*param_3,(longlong)*(int *)(param_3 + 1),param_2);
  if (iVar1 != 0) {
    FUN_140ca3240(param_1,param_2,*param_3,(longlong)*(int *)(param_3 + 1));
  }
  return iVar1 != 0;
}


/* address=140c8af60 name=FUN_140c8af60 */

undefined8 FUN_140c8af60(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_140c92740(param_1);
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


/* address=140c8afd0 name=FUN_140c8afd0 */

undefined8 * FUN_140c8afd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140c660d0(0x30);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = 0;
    FUN_140ca36a0(puVar1 + 1);
    puVar1[4] = 0;
    *(undefined *)(puVar1 + 5) = 0;
    *(undefined *)((longlong)puVar1 + 0x29) = 0;
  }
  return puVar1;
}


/* address=140c8b040 name=FUN_140c8b040 */

void FUN_140c8b040(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((param_1[4] != 0) && (*(char *)(param_1 + 5) == '\0')) {
      FID_conflict__assert((wchar_t *)s_c_1413a0dd0,(wchar_t *)s_D_1413a0d00,0x83);
    }
    FUN_140ca3930(*param_1,FUN_140c8a700);
    FUN_140ca36e0(param_1 + 1);
    FUN_140c66200(param_1);
  }
  return;
}


/* address=140c8b0d0 name=FUN_140c8b0d0 */

void FUN_140c8b0d0(longlong param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x28) == '\0') &&
     (iVar1 = FUN_140ca3710(param_1 + 8,*(undefined8 *)(param_1 + 0x20)), iVar1 == 0)) {
    *(undefined *)(param_1 + 0x28) = 1;
    *(undefined *)(param_1 + 0x29) = 1;
  }
  return;
}


/* address=140c8b130 name=FUN_140c8b130 */

undefined8 FUN_140c8b130(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 5) != '\0') {
    if (*(char *)((longlong)param_1 + 0x29) != '\0') {
      FUN_140c6c4e0(3,0,0x74,s_D__a_1_s_target_release_build_bo_1413a0e10,0x9b);
      *(undefined *)((longlong)param_1 + 0x29) = 0;
    }
    return 0;
  }
  if (*param_1 == 0) {
    lVar1 = FUN_140ca38c0();
    *param_1 = lVar1;
    if (*param_1 == 0) {
      *(undefined *)(param_1 + 5) = 1;
      return 0;
    }
  }
  lVar1 = FUN_140ca38e0(*param_1);
  if ((param_1[4] == lVar1) &&
     ((lVar1 = FUN_140c8a680(), lVar1 == 0 || (lVar2 = FUN_140ca3960(*param_1,lVar1), lVar2 == 0))))
  {
    FUN_140c6c4e0(3,0,0x74,s_D__a_1_s_target_release_build_bo_1413a0e80,0xac);
    FUN_140c8a700(lVar1);
    *(undefined *)(param_1 + 5) = 1;
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_140ca3900(*param_1,param_1[4]);
    FUN_140c8a9b0(uVar3);
    param_1[4] = param_1[4] + 1;
  }
  return uVar3;
}


/* address=140c8b280 name=FUN_140c8b280 */

void FUN_140c8b280(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = FUN_140ca3820(param_1 + 8);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
  }
  return;
}


/* address=140c8b2c0 name=FUN_140c8b2c0 */

undefined4 FUN_140c8b2c0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_res10;
  longlong local_res18;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 == *(int *)(param_3 + 0x10)) {
    uVar2 = FUN_140c8b3c0(param_1,param_2,param_3);
    *(int *)(param_1 + 0x10) = iVar1;
  }
  else {
    local_res10 = param_2;
    local_res18 = param_3;
    if (iVar1 != 0) {
      local_res10 = param_3;
      local_res18 = param_2;
    }
    iVar1 = FUN_140c8c820(local_res10,local_res18);
    if (iVar1 < 0) {
      iVar1 = FUN_140c8b6f0(param_1,local_res18,local_res10);
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    else {
      iVar1 = FUN_140c8b6f0(param_1,local_res10,local_res18);
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}


/* address=140c8b3c0 name=FUN_140c8b3c0 */

bool FUN_140c8b3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_140ca03e0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    FUN_140c92790(param_1);
  }
  return iVar1 != 0;
}


/* address=140c8b410 name=FUN_140c8b410 */

ulonglong FUN_140c8b410(longlong *param_1,ulonglong param_2)

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
    iVar1 = FUN_140c8cac0(param_1);
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
          iVar1 = FUN_140c927d0(param_1,(longlong)(*(int *)(param_1 + 1) + 1));
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
        uVar2 = FUN_140c8b740(param_1,param_2);
        iVar1 = FUN_140c8cac0(param_1);
        if (iVar1 == 0) {
          local_24 = (uint)(*(int *)(param_1 + 2) == 0);
          *(uint *)(param_1 + 2) = local_24;
        }
        uVar3 = (ulonglong)uVar2;
      }
    }
    else {
      uVar3 = FUN_140c8aa10(param_1,param_2);
    }
  }
  return uVar3;
}


/* address=140c8b5b0 name=FUN_140c8b5b0 */

undefined8 FUN_140c8b5b0(longlong param_1,longlong param_2,longlong param_3)

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
    iVar1 = FUN_140c8b3c0(param_1,local_res10,local_res18);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      *(uint *)(param_1 + 0x10) = local_14;
      uVar2 = 1;
    }
  }
  else {
    iVar1 = FUN_140c8c820(local_res10,local_res18);
    if (iVar1 < 0) {
      iVar1 = FUN_140c8b6f0(param_1,local_res18,local_res10);
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    else {
      iVar1 = FUN_140c8b6f0(param_1,local_res10,local_res18);
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}


/* address=140c8b6f0 name=FUN_140c8b6f0 */

bool FUN_140c8b6f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_140ca0550(param_1,param_2,param_3);
  if (iVar1 != 0) {
    FUN_140c92790(param_1);
  }
  return iVar1 != 0;
}


/* address=140c8b740 name=FUN_140c8b740 */

int FUN_140c8b740(ulonglong **param_1,ulonglong param_2)

{
  int iVar1;
  ulonglong local_res10;
  int local_18;
  
  if (param_2 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_140c8cac0(param_1);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 2) == 0) {
        iVar1 = FUN_140c92740(param_1);
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
        iVar1 = FUN_140c8b410(param_1,param_2);
        *(undefined4 *)(param_1 + 2) = 1;
      }
    }
    else {
      iVar1 = FUN_140c8aa10(param_1,param_2);
      if (iVar1 != 0) {
        FUN_140c8aac0(param_1,1);
      }
    }
  }
  return iVar1;
}


/* address=140c8b930 name=FUN_140c8b930 */

bool FUN_140c8b930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_140ca7b00(param_1,param_2,param_3,param_4);
  if (iVar1 != 0) {
    FUN_140c92790(param_1);
  }
  return iVar1 != 0;
}


/* address=140c8b990 name=FUN_140c8b990 */

undefined8 FUN_140c8b990(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 1) != 0) {
    if (param_2 == 0) {
      FUN_140c8a9b0(param_1);
    }
    else {
      lVar2 = FUN_140c934a0(*param_1,*param_1,(longlong)*(int *)(param_1 + 1),param_2);
      if (lVar2 != 0) {
        iVar1 = FUN_140c927d0(param_1,(longlong)(*(int *)(param_1 + 1) + 1));
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


/* address=140c8ba60 name=FUN_140c8ba60 */

bool FUN_140c8ba60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_140ca0910(param_1,param_2,param_3);
  if (iVar1 != 0) {
    FUN_140c92790(param_1);
  }
  return iVar1 != 0;
}


/* address=140c8bab0 name=FUN_140c8bab0 */

undefined8
FUN_140c8bab0(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4,
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
  local_90 = FUN_140c92740(param_3);
  local_8c = FUN_140c92740(param_4);
  if (((0 < local_90) && (*(longlong *)(*param_3 + (longlong)(local_90 + -1) * 8) == 0)) ||
     ((0 < local_8c && (*(longlong *)(*param_4 + (longlong)(local_8c + -1) * 8) == 0)))) {
    FUN_140c6c4e0(3,0,0x6f,s_D__a_1_s_target_release_build_bo_1413a1110,CONCAT44(uVar12,0xd4));
    return 0;
  }
  iVar4 = FUN_140c8cac0(param_4);
  if (iVar4 != 0) {
    FUN_140c6c4e0(3,0,0x69,s_D__a_1_s_target_release_build_bo_1413a1180,CONCAT44(uVar12,0xd9));
    return 0;
  }
  FUN_140c8b0d0(param_5);
  local_60 = (longlong *)FUN_140c8b130(param_5);
  plVar7 = (longlong *)FUN_140c8b130(param_5);
  plVar8 = (longlong *)FUN_140c8b130(param_5);
  local_c0 = param_1;
  if (param_1 == (longlong *)0x0) {
    local_c0 = (longlong *)FUN_140c8b130(param_5);
  }
  if ((plVar8 != (longlong *)0x0) && (local_c0 != (longlong *)0x0)) {
    uVar9 = FUN_140c8a920(param_4);
    iVar4 = -(int)((uVar9 & 0xffffffff) % 0x40);
    iVar5 = FUN_140c8ccb0(plVar8,param_4,iVar4 + 0x40);
    if (iVar5 != 0) {
      FUN_140c92790(plVar8);
      *(undefined4 *)(plVar8 + 2) = 0;
      iVar4 = iVar4 + 0x80;
      iVar5 = FUN_140c8ccb0(plVar7,param_3,iVar4);
      if (iVar5 != 0) {
        FUN_140c92790(plVar7);
        *(undefined4 *)(plVar7 + 2) = 0;
        if (*(int *)(plVar8 + 1) + 1 < *(int *)(plVar7 + 1)) {
          iVar5 = FUN_140c927d0(plVar7,(longlong)(*(int *)(plVar7 + 1) + 1));
          if (iVar5 == 0) goto LAB_140c8c28c;
          *(undefined8 *)(*plVar7 + (longlong)*(int *)(plVar7 + 1) * 8) = 0;
          *(int *)(plVar7 + 1) = *(int *)(plVar7 + 1) + 1;
        }
        else {
          iVar5 = FUN_140c927d0(plVar7,(longlong)(*(int *)(plVar8 + 1) + 2));
          if (iVar5 == 0) goto LAB_140c8c28c;
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
        iVar6 = FUN_140c927d0(local_c0,(longlong)(iVar11 + 1));
        if (iVar6 != 0) {
          *(int *)(local_c0 + 1) = iVar11 + -1;
          local_80 = (ulonglong *)(*local_c0 + (longlong)(iVar11 + -1) * 8);
          iVar6 = FUN_140c927d0(local_60,(longlong)(iVar5 + 1));
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
                FUN_140ca3d60(&local_b0,&local_98,local_30,local_28,local_78);
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
              local_18 = FUN_140c934a0(*local_60,*plVar8,(longlong)iVar5,local_b0);
              *(undefined8 *)(*local_60 + (longlong)iVar5 * 8) = local_18;
              local_50 = local_50 + -8;
              lVar10 = FUN_140c93e20(local_50,local_50,*local_60,(longlong)(iVar5 + 1));
              if (lVar10 != 0) {
                local_b0 = local_b0 - 1;
                lVar10 = FUN_140c93bf0(local_50,local_50,*plVar8,(longlong)iVar5);
                if (lVar10 != 0) {
                  *local_a0 = *local_a0 + 1;
                }
              }
              *local_80 = local_b0;
              local_a0 = local_a0 + -1;
              local_80 = local_80 + -1;
            }
            FUN_140c92790(plVar7);
            if (param_2 != 0) {
              iVar4 = FUN_140c8d030(param_2,plVar7,iVar4);
              if (iVar4 == 0) goto LAB_140c8c28c;
              iVar4 = FUN_140c8cac0(param_2);
              if (iVar4 == 0) {
                *(uint *)(param_2 + 0x10) = local_84;
              }
            }
            FUN_140c92790(local_c0);
            FUN_140c8b280(param_5);
            return 1;
          }
        }
      }
    }
  }
LAB_140c8c28c:
  FUN_140c8b280(param_5);
  return 0;
}


/* address=140c8c2b0 name=FUN_140c8c2b0 */

ulonglong FUN_140c8c2b0(longlong *param_1,longlong param_2)

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
    iVar2 = FUN_140c92460(param_2);
    bVar3 = (byte)(0x40 - iVar2);
    param_2 = param_2 << (bVar3 & 0x3f);
    iVar2 = FUN_140c8ccb0(param_1,param_1,0x40 - iVar2);
    if (iVar2 == 0) {
      local_30 = 0xffffffffffffffff;
    }
    else {
      local_38 = *(int *)(param_1 + 1);
      while (local_38 = local_38 + -1, -1 < local_38) {
        lVar1 = *(longlong *)(*param_1 + (longlong)local_38 * 8);
        FUN_140ca3d60(&local_20,local_18,local_30,lVar1,param_2);
        local_30 = lVar1 - local_20 * param_2;
        *(longlong *)(*param_1 + (longlong)local_38 * 8) = local_20;
      }
      FUN_140c92790(param_1);
      local_30 = local_30 >> (bVar3 & 0x3f);
    }
  }
  return local_30;
}


/* address=140c8c700 name=FUN_140c8c700 */

int FUN_140c8c700(longlong param_1,longlong param_2)

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
    iVar1 = FUN_140c8c820(param_1,param_2);
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


/* address=140c8c7b0 name=FUN_140c8c7b0 */

void FUN_140c8c7b0(undefined8 param_1,longlong param_2)

{
  longlong local_res10 [3];
  uint local_28;
  longlong *local_20;
  uint local_18;
  undefined4 local_14;
  undefined4 local_c;
  
  local_res10[0] = param_2;
  FUN_140c8a6d0(&local_20);
  local_20 = local_res10;
  local_28 = (uint)(local_res10[0] != 0);
  local_18 = local_28;
  local_14 = 1;
  local_c = 2;
  FUN_140c8c700(param_1,&local_20);
  return;
}


/* address=140c8c820 name=FUN_140c8c820 */

void FUN_140c8c820(undefined8 *param_1,undefined8 *param_2)

{
  FUN_140ca3470(*param_1,(longlong)*(int *)(param_1 + 1),*param_2,(longlong)*(int *)(param_2 + 1));
  return;
}


/* address=140c8c870 name=FUN_140c8c870 */

bool FUN_140c8c870(longlong *param_1,longlong *param_2)

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


/* address=140c8c9f0 name=FUN_140c8c9f0 */

bool FUN_140c8c9f0(ulonglong **param_1,ulonglong param_2)

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


/* address=140c8cac0 name=FUN_140c8cac0 */

void FUN_140c8cac0(undefined8 param_1)

{
  FUN_140c92bd0(param_1,0);
  return;
}


/* address=140c8cae0 name=FUN_140c8cae0 */

undefined4 FUN_140c8cae0(longlong param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) && (iVar1 = FUN_140c8c9f0(param_1,1), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=140c8cb30 name=FUN_140c8cb30 */

undefined4 FUN_140c8cb30(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 local_18;
  
  iVar1 = FUN_140c8c9f0(param_1,param_2);
  if ((iVar1 == 0) || ((param_2 != 0 && (*(int *)(param_1 + 0x10) != 0)))) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}


/* address=140c8cb90 name=FUN_140c8cb90 */

undefined4 FUN_140c8cb90(ulonglong **param_1)

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


/* address=140c8cbf0 name=FUN_140c8cbf0 */

bool FUN_140c8cbf0(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  int local_18;
  
  iVar1 = FUN_140c92740(param_1);
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


/* address=140c8ccb0 name=FUN_140c8ccb0 */

undefined8 FUN_140c8ccb0(longlong *param_1,longlong *param_2,int param_3)

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
    FUN_140c6c4e0(3,0,0x6d,s_D__a_1_s_target_release_build_bo_1413a65f0,0x49);
    uVar7 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    iVar5 = (int)(param_3 + (param_3 >> 0x1f & 0x3fU)) >> 6;
    iVar6 = FUN_140c927d0(param_1,(longlong)(*(int *)(param_2 + 1) + 1 + iVar5));
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
      FUN_140c809d0(lVar2,0,(longlong)iVar5 << 3);
      *(int *)(param_1 + 1) = *(int *)(param_2 + 1) + 1 + iVar5;
      FUN_140c92790(param_1);
      uVar7 = 1;
    }
  }
  return uVar7;
}


/* address=140c8cee0 name=FUN_140c8cee0 */

undefined8 FUN_140c8cee0(ulonglong **param_1,ulonglong **param_2)

{
  ulonglong uVar1;
  int iVar2;
  int local_38;
  ulonglong *local_30;
  ulonglong *local_28;
  ulonglong local_20;
  
  if (param_1 == param_2) {
    iVar2 = FUN_140c927d0(param_1,(longlong)(*(int *)(param_2 + 1) + 1));
    if (iVar2 == 0) {
      return 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    iVar2 = FUN_140c927d0(param_1,(longlong)(*(int *)(param_2 + 1) + 1));
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


/* address=140c8d030 name=FUN_140c8d030 */

undefined8 FUN_140c8d030(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3 < 0) {
    FUN_140c6c4e0(3,0,0x6d,s_D__a_1_s_target_release_build_bo_1413a6660,0x9e);
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_140c927d0(param_1,(longlong)*(int *)(param_2 + 1));
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_140c9ff70(*param_1,*param_2,param_3,(longlong)*(int *)(param_2 + 1));
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
      FUN_140c92790(param_1);
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=140c8d0f0 name=FUN_140c8d0f0 */

bool FUN_140c8d0f0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_140c927d0(param_1,(longlong)*(int *)(param_2 + 1));
  if (iVar1 != 0) {
    FUN_140c9fed0(*param_1,*param_2,(longlong)*(int *)(param_2 + 1));
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    FUN_140c92790(param_1);
  }
  return iVar1 != 0;
}


/* address=140c8d180 name=FUN_140c8d180 */

undefined8 FUN_140c8d180(longlong *param_1,int param_2)

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
      iVar3 = FUN_140c927d0(param_1,(longlong)(iVar2 + 1));
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


/* address=140c8d290 name=FUN_140c8d290 */

undefined8 FUN_140c8d290(longlong *param_1,int param_2)

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
      FUN_140c92790(param_1);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* address=140c8d350 name=FUN_140c8d350 */

undefined8 FUN_140c8d350(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140c9f770(*param_1,(longlong)*(int *)(param_1 + 1),(longlong)param_2);
  }
  return uVar1;
}


/* address=140c8d3a0 name=FUN_140c8d3a0 */

undefined8 FUN_140c8d3a0(longlong *param_1,int param_2)

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
      FUN_140c92790(param_1);
      uVar3 = 1;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}


/* address=140c8d480 name=FUN_140c8d480 */

uint FUN_140c8d480(longlong *param_1)

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
    uVar2 = FUN_140c80720(*(undefined8 *)(*param_1 + (longlong)local_38 * 8));
    uVar1 = ~uVar4;
    uVar4 = uVar4 | ~uVar2;
    iVar3 = FUN_140ca9840(*(undefined8 *)(*param_1 + (longlong)local_38 * 8));
    local_34 = local_34 | uVar1 & ~uVar2 & local_38 * 0x40 + iVar3;
  }
  return local_34;
}


/* address=140c8d560 name=FUN_140c8d560 */

ulonglong FUN_140c8d560(longlong *param_1,ulonglong param_2)

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
    lVar1 = FUN_140c8a790(param_1);
    if (lVar1 == 0) {
      local_20 = 0xffffffffffffffff;
    }
    else {
      local_20 = FUN_140c8c2b0(lVar1,param_2);
      FUN_140c8a700(lVar1);
    }
  }
  return local_20;
}


/* address=140c8d690 name=FUN_140c8d690 */

bool FUN_140c8d690(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  undefined4 local_20;
  
  if ((param_3 == 0) || (*(int *)(param_2 + 1) == 0)) {
    FUN_140c8a9b0(param_1);
    bVar4 = true;
  }
  else {
    uVar2 = (param_3 - 1) / 0x40 + 1;
    if ((ulonglong)(longlong)*(int *)(param_2 + 1) < uVar2) {
      lVar3 = FUN_140c8a7f0(param_1,param_2);
      bVar4 = lVar3 != 0;
    }
    else {
      iVar1 = FUN_140c927d0(param_1,uVar2);
      if (iVar1 == 0) {
        bVar4 = false;
      }
      else {
        FUN_140c80930(*param_1,*param_2,uVar2 * 8);
        if (param_3 % 0x40 != 0) {
          *(ulonglong *)(*param_1 + -8 + uVar2 * 8) =
               *(ulonglong *)(*param_1 + -8 + uVar2 * 8) & (1L << (sbyte)(param_3 % 0x40)) - 1U;
        }
        *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
        local_20 = (undefined4)uVar2;
        *(undefined4 *)(param_1 + 1) = local_20;
        FUN_140c92790(param_1);
        bVar4 = true;
      }
    }
  }
  return bVar4;
}


/* address=140c8d9c0 name=FUN_140c8d9c0 */

undefined8 FUN_140c8d9c0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  code *local_18;
  
  iVar1 = FUN_140c8bab0(0,param_1,param_2,param_3,param_4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    uVar2 = 1;
  }
  else {
    if (*(int *)(param_3 + 0x10) == 0) {
      local_18 = FUN_140c8b2c0;
    }
    else {
      local_18 = FUN_140c8b5b0;
    }
    uVar2 = (*local_18)(param_1,param_1,param_3);
  }
  return uVar2;
}


/* address=140c8dc40 name=FUN_140c8dc40 */

undefined4
FUN_140c8dc40(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_18;
  
  local_18 = 0;
  FUN_140c8b0d0(param_5);
  lVar2 = FUN_140c8b130(param_5);
  if (lVar2 != 0) {
    if (param_2 == param_3) {
      iVar1 = FUN_140c8ba60(lVar2,param_2,param_5);
    }
    else {
      iVar1 = FUN_140c8b930(lVar2,param_2,param_3,param_5);
    }
    if ((iVar1 != 0) && (iVar1 = FUN_140c8d9c0(param_1,lVar2,param_4,param_5), iVar1 != 0)) {
      local_18 = 1;
    }
  }
  FUN_140c8b280(param_5);
  return local_18;
}


/* address=140c8dd10 name=FUN_140c8dd10 */

undefined8
FUN_140c8dd10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_140c8ba60(param_1,param_2,param_4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140c8bab0(0,param_1,param_1,param_3,param_4);
  }
  return uVar2;
}


/* address=140c8dfc0 name=FUN_140c8dfc0 */

longlong FUN_140c8dfc0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

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
  iVar1 = FUN_140c8cb90(param_3);
  local_70 = param_1;
  if ((iVar1 == 0) || (iVar1 = FUN_140c8c9f0(param_3,1), iVar1 != 0)) {
    iVar1 = FUN_140c8c9f0(param_3,2);
    if (iVar1 == 0) {
      FUN_140c6c4e0(3,0,0x72,s_D__a_1_s_target_release_build_bo_1413a66d0,CONCAT44(uVar11,0x58));
      return 0;
    }
    if (param_1 == 0) {
      local_70 = FUN_140c8a680();
    }
    if (local_70 != 0) {
      iVar1 = FUN_140c8d350(param_2,0);
      iVar1 = FUN_140c8aa10(local_70,(longlong)iVar1);
      if (iVar1 != 0) {
        return local_70;
      }
    }
    if (local_70 != param_1) {
      FUN_140c8a700(local_70);
    }
    return 0;
  }
  iVar1 = FUN_140c8cac0(param_2);
  if ((iVar1 != 0) || (iVar1 = FUN_140c8cae0(param_2), iVar1 != 0)) {
    if (param_1 == 0) {
      local_70 = FUN_140c8a680();
    }
    if (local_70 != 0) {
      iVar1 = FUN_140c8cae0(param_2);
      iVar1 = FUN_140c8aa10(local_70,(longlong)iVar1);
      if (iVar1 != 0) {
        return local_70;
      }
    }
    if (local_70 != param_1) {
      FUN_140c8a700(local_70);
    }
    return 0;
  }
  FUN_140c8b0d0(param_4);
  uVar3 = FUN_140c8b130(param_4);
  uVar4 = FUN_140c8b130(param_4);
  lVar5 = FUN_140c8b130(param_4);
  uVar6 = FUN_140c8b130(param_4);
  uVar7 = FUN_140c8b130(param_4);
  this = (CMFCTabCtrl *)FUN_140c8b130(param_4);
  if (this != (CMFCTabCtrl *)0x0) {
    if (param_1 == 0) {
      local_70 = FUN_140c8a680();
    }
    if ((local_70 != 0) && (iVar1 = FUN_140c8d9c0(uVar3,param_2), iVar1 != 0)) {
      local_68 = 1;
      while (iVar1 = FUN_140c8d350(param_3,local_68), iVar1 == 0) {
        local_68 = local_68 + 1;
      }
      if (local_68 == 1) {
        iVar1 = FUN_140c8d030(lVar5,param_3,2);
        if (iVar1 == 0) goto LAB_140c8ead6;
        *(undefined4 *)(lVar5 + 0x10) = 0;
        iVar1 = FUN_140c8b410(lVar5,1);
        if (iVar1 == 0) goto LAB_140c8ead6;
        uVar4 = param_4;
        iVar1 = FUN_140c90c40(local_70,uVar3,lVar5,param_3,param_4,0);
        uVar11 = (undefined4)((ulonglong)uVar4 >> 0x20);
        if (iVar1 == 0) goto LAB_140c8ead6;
      }
      else {
        if (local_68 == 2) {
          iVar1 = FUN_140ca1680(uVar6,uVar3,param_3,param_4);
          if ((iVar1 == 0) || (iVar1 = FUN_140c8d030(lVar5,param_3,3), iVar1 == 0))
          goto LAB_140c8ead6;
          *(undefined4 *)(lVar5 + 0x10) = 0;
          iVar1 = FUN_140c90c40(uVar4,uVar6,lVar5,param_3,param_4,0);
          if ((iVar1 == 0) ||
             ((((iVar1 = FUN_140c8dd10(this,uVar4,param_3,param_4), iVar1 == 0 ||
                (iVar1 = FUN_140c8dc40(uVar6,uVar6,this,param_3,param_4), iVar1 == 0)) ||
               (iVar1 = FUN_140c8b740(uVar6,1), iVar1 == 0)) ||
              (iVar1 = FUN_140c8dc40(uVar7,uVar3,uVar4,param_3,param_4), iVar1 == 0))))
          goto LAB_140c8ead6;
          uVar4 = param_4;
          iVar1 = FUN_140c8dc40(uVar7,uVar7,uVar6,param_3,param_4);
          uVar11 = (undefined4)((ulonglong)uVar4 >> 0x20);
          if (iVar1 == 0) goto LAB_140c8ead6;
          lVar5 = FUN_140c8a7f0(local_70,uVar7);
        }
        else {
          lVar8 = FUN_140c8a7f0(lVar5,param_3);
          if (lVar8 == 0) goto LAB_140c8ead6;
          *(undefined4 *)(lVar5 + 0x10) = 0;
          local_78 = 2;
          do {
            if (local_78 < 0x16) {
              iVar1 = FUN_140c8aa10(this,(longlong)local_78);
joined_r0x000140c8e576:
              if (iVar1 == 0) goto LAB_140c8ead6;
            }
            else {
              uVar2 = FUN_140c8a920(param_3);
              iVar1 = CMFCTabCtrl::SetImageList(this,uVar2,0,0);
              if (iVar1 == 0) goto LAB_140c8ead6;
              iVar1 = FUN_140c8c820(this,param_3);
              if (-1 < iVar1) {
                if (*(int *)(param_3 + 0x10) == 0) {
                  local_18 = FUN_140c8b5b0;
                }
                else {
                  local_18 = FUN_140c8b2c0;
                }
                iVar1 = (*local_18)(this,this,param_3);
                if (iVar1 == 0) goto LAB_140c8ead6;
              }
              iVar1 = FUN_140c8cac0(this);
              if (iVar1 != 0) {
                iVar1 = FUN_140c8aa10(this,(longlong)local_78);
                goto joined_r0x000140c8e576;
              }
            }
            iVar1 = FUN_140c9f410(this,lVar5);
            if (iVar1 < -1) goto LAB_140c8ead6;
            if (iVar1 == 0) {
              FUN_140c6c4e0(3,0,0x72,s_D__a_1_s_target_release_build_bo_1413a6740,0x101);
              goto LAB_140c8ead6;
            }
          } while ((iVar1 == 1) && (local_78 = local_78 + 1, local_78 < 0x52));
          if (iVar1 != -1) {
            FUN_140c6c4e0(3,0,0x73,s_D__a_1_s_target_release_build_bo_1413a67b0,0x10b);
            goto LAB_140c8ead6;
          }
          iVar1 = FUN_140c8d030(lVar5,lVar5,local_68);
          if (iVar1 == 0) goto LAB_140c8ead6;
          uVar10 = param_4;
          iVar1 = FUN_140c90c40(this,this,lVar5,param_3,param_4,0);
          uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
          if (iVar1 == 0) goto LAB_140c8ead6;
          iVar1 = FUN_140c8cae0(this);
          if (iVar1 != 0) {
            FUN_140c6c4e0(3,0,0x72,s_D__a_1_s_target_release_build_bo_1413a6820,
                          CONCAT44(uVar11,0x11a));
            goto LAB_140c8ead6;
          }
          iVar1 = FUN_140c8d0f0(uVar6,lVar5);
          if (iVar1 == 0) goto LAB_140c8ead6;
          iVar1 = FUN_140c8cac0(uVar6);
          if (iVar1 == 0) {
            iVar1 = FUN_140c90c40(uVar7,uVar3,uVar6,param_3,param_4,0);
            if (iVar1 == 0) goto LAB_140c8ead6;
            iVar1 = FUN_140c8cac0(uVar7);
            if (iVar1 != 0) {
              FUN_140c8a9b0(local_70);
              bVar9 = false;
              goto LAB_140c8ead6;
            }
          }
          else {
            iVar1 = FUN_140c8d9c0(uVar6,uVar3,param_3,param_4);
            if (iVar1 == 0) goto LAB_140c8ead6;
            iVar1 = FUN_140c8cac0(uVar6);
            if (iVar1 != 0) {
              FUN_140c8a9b0(local_70);
              bVar9 = false;
              goto LAB_140c8ead6;
            }
            iVar1 = FUN_140c8a9e0(uVar7);
            if (iVar1 == 0) goto LAB_140c8ead6;
          }
          iVar1 = FUN_140c8dd10(uVar4,uVar7,param_3,param_4);
          if (((iVar1 == 0) ||
              (iVar1 = FUN_140c8dc40(uVar4,uVar4,uVar3,param_3,param_4), iVar1 == 0)) ||
             (uVar10 = param_4, iVar1 = FUN_140c8dc40(uVar7,uVar7,uVar3,param_3,param_4), iVar1 == 0
             )) goto LAB_140c8ead6;
          while( true ) {
            iVar1 = FUN_140c8cae0(uVar4);
            uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
            if (iVar1 != 0) break;
            for (local_78 = 1; uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20), local_78 < local_68
                ; local_78 = local_78 + 1) {
              if (local_78 == 1) {
                iVar1 = FUN_140c8dd10(uVar6,uVar4,param_3,param_4);
              }
              else {
                uVar10 = param_4;
                iVar1 = FUN_140c8dc40(uVar6,uVar6,uVar6,param_3,param_4);
              }
              if (iVar1 == 0) goto LAB_140c8ead6;
              iVar1 = FUN_140c8cae0(uVar6);
              uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
              if (iVar1 != 0) break;
            }
            if (local_68 <= local_78) {
              FUN_140c6c4e0(3,0,0x6e,s_D__a_1_s_target_release_build_bo_1413a6890,
                            CONCAT44(uVar11,0x179));
              goto LAB_140c8ead6;
            }
            lVar5 = FUN_140c8a7f0(uVar6,this);
            if (lVar5 == 0) goto LAB_140c8ead6;
            local_20 = local_68 - local_78;
            while (local_20 = local_20 + -1, 0 < local_20) {
              iVar1 = FUN_140c8dd10(uVar6,uVar6,param_3,param_4);
              if (iVar1 == 0) goto LAB_140c8ead6;
            }
            iVar1 = FUN_140c8dc40(this,uVar6,uVar6,param_3,param_4);
            if (((iVar1 == 0) ||
                (iVar1 = FUN_140c8dc40(uVar7,uVar7,uVar6,param_3,param_4), iVar1 == 0)) ||
               (uVar10 = param_4, iVar1 = FUN_140c8dc40(uVar4,uVar4,this,param_3,param_4),
               iVar1 == 0)) goto LAB_140c8ead6;
            if (local_68 <= local_78) {
              FID_conflict__assert((wchar_t *)s_i_1413a69d0,(wchar_t *)s_D_1413a6900,0x18d);
            }
            local_68 = local_78;
          }
          lVar5 = FUN_140c8a7f0(local_70,uVar7);
        }
        if (lVar5 == 0) goto LAB_140c8ead6;
      }
      iVar1 = FUN_140c8dd10(uVar7,local_70,param_3,param_4);
      bVar9 = iVar1 == 0;
      if ((!bVar9) && (iVar1 = FUN_140c8c700(uVar7,uVar3), iVar1 != 0)) {
        FUN_140c6c4e0(3,0,0x6e,s_D__a_1_s_target_release_build_bo_1413a69e0,CONCAT44(uVar11,0x199));
        bVar9 = true;
      }
    }
  }
LAB_140c8ead6:
  if (bVar9) {
    if (local_70 != param_1) {
      FUN_140c8a770(local_70);
    }
    local_70 = 0;
  }
  FUN_140c8b280(param_4);
  return local_70;
}


/* address=140c8eb20 name=FUN_140c8eb20 */

undefined8 FUN_140c8eb20(ulonglong **param_1,int param_2,int param_3,int param_4)

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
        FUN_140c8a9b0(param_1);
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
        iVar4 = FUN_140c927d0(param_1,(longlong)iVar2);
        if (iVar4 == 0) {
          uVar5 = 0;
        }
        else {
          FUN_140c8a370();
          FUN_140ca8a50(*param_1,(longlong)iVar2 << 3);
          FUN_140c8a380();
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
        FUN_140c6c4e0(3,0,0x66,s_D__a_1_s_target_release_build_bo_1413a5fd0,0x92);
        uVar5 = 0;
      }
    }
    else {
      FUN_140c6c4e0(3,0,0x42,s_D__a_1_s_target_release_build_bo_1413a5f60,0x88);
      uVar5 = 0;
    }
  }
  else {
    FUN_140c6c4e0(3,0,0x42,s_D__a_1_s_target_release_build_bo_1413a5ef0,0x83);
    uVar5 = 0;
  }
  return uVar5;
}


/* address=140c8eed0 name=CMFCTabCtrl::SetImageList */

/* Library Function - Single Match
    public: virtual int __cdecl CMFCTabCtrl::SetImageList(unsigned int,int,unsigned long) __ptr64
   
   Library: Visual Studio 2010 Debug */

int __thiscall CMFCTabCtrl::SetImageList(CMFCTabCtrl *this,uint param_1,int param_2,ulong param_3)

{
  int iVar1;
  
  iVar1 = FUN_140c8eb20(this,param_1,param_2,param_3);
  return iVar1;
}


/* address=140c8ef10 name=FUN_140c8ef10 */

void FUN_140c8ef10(undefined8 param_1,undefined8 param_2)

{
  FUN_140c8ef40(param_1,0,param_2);
  return;
}


/* address=140c8ef40 name=FUN_140c8ef40 */

undefined8 FUN_140c8ef40(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_140c927d0(param_1,(longlong)*(int *)(param_3 + 1));
  if ((iVar1 != 0) &&
     (iVar1 = FUN_140c9ee20(*param_1,param_2,*param_3,(longlong)*(int *)(param_3 + 1),&DAT_140fdbf60
                           ), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 1);
    return 1;
  }
  return 0;
}


/* address=140c8f0c0 name=FUN_140c8f0c0 */

undefined8 FUN_140c8f0c0(longlong param_1,undefined4 param_2,undefined4 param_3)

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


/* address=140c8f430 name=FUN_140c8f430 */

undefined4
FUN_140c8f430(undefined4 *param_1,undefined8 param_2,int param_3,undefined8 param_4,
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
  iVar1 = FUN_140c8cb90(param_2);
  if ((iVar1 == 0) || (iVar1 = FUN_140c8c7b0(param_2,3), iVar1 < 1)) {
    FUN_140c6c4e0(3,0,0x77,s_D__a_1_s_target_release_build_bo_1413a5e80,CONCAT44(uVar2,0x327));
    local_58 = 0;
  }
  else {
    local_res18 = param_3;
    if (param_3 == 0) {
      uVar2 = FUN_140c8a920(param_2);
      local_res18 = FUN_140ca84b0(uVar2);
    }
    local_58 = 0;
    local_20 = 0;
    FUN_140c8b0d0(param_4);
    lVar3 = FUN_140c8b130(param_4);
    if (((lVar3 != 0) && (lVar4 = FUN_140c8a7f0(lVar3,param_2), lVar4 != 0)) &&
       (iVar1 = FUN_140c8b740(lVar3,1), iVar1 != 0)) {
      local_60 = 0;
      while (iVar1 = FUN_140c8d350(lVar3,local_60), iVar1 == 0) {
        local_60 = local_60 + 1;
      }
      lVar4 = FUN_140c8b130(param_4);
      if ((lVar4 != 0) && (iVar1 = FUN_140c8d030(lVar4,lVar3,local_60), iVar1 != 0)) {
        lVar5 = FUN_140c8b130(param_4);
        lVar6 = FUN_140c8b130(param_4);
        lVar7 = FUN_140c8b130(param_4);
        lVar8 = FUN_140c8b130(param_4);
        lVar9 = FUN_140c8b130(param_4);
        if ((((lVar5 != 0) && ((lVar6 != 0 && (lVar7 != 0)))) && (lVar8 != 0)) &&
           ((lVar9 != 0 && (local_20 = FUN_140c904f0(param_2,param_4), local_20 != 0)))) {
          for (local_5c = 1; local_5c <= local_res18; local_5c = local_5c + 1) {
            iVar1 = FUN_140c8ef40(lVar5,2,lVar3);
            if ((iVar1 == 0) || (iVar1 = FUN_140c8fd60(lVar6,lVar5,param_2,param_4), iVar1 == 0))
            goto LAB_140c8f8f8;
            iVar1 = FUN_140c8c7b0(lVar6,1);
            if (0 < iVar1) {
              *param_1 = 1;
              local_58 = 1;
              goto LAB_140c8f8f8;
            }
            iVar1 = FUN_140c90c40(lVar7,lVar5,lVar4,param_2,param_4,local_20);
            if (iVar1 == 0) goto LAB_140c8f8f8;
            iVar1 = FUN_140c8cae0(lVar7);
            if ((iVar1 == 0) && (iVar1 = FUN_140c8c700(lVar7,lVar3), iVar1 != 0)) {
              local_40 = 1;
              do {
                if (local_60 <= local_40) {
                  lVar3 = FUN_140c8a7f0(lVar8,lVar7);
                  if (((lVar3 != 0) &&
                      (iVar1 = FUN_140c8dc40(lVar7,lVar8,lVar8,param_2,param_4), iVar1 != 0)) &&
                     ((iVar1 = FUN_140c8cae0(lVar7), iVar1 != 0 ||
                      (lVar3 = FUN_140c8a7f0(lVar8,lVar7), lVar3 != 0)))) {
LAB_140c8f835:
                    lVar3 = FUN_140c8a7f0(lVar9,lVar8);
                    if (((lVar3 != 0) && (iVar1 = FUN_140c8b740(lVar9,1), iVar1 != 0)) &&
                       (iVar1 = FUN_140c8fd60(lVar6,lVar9,param_2,param_4), iVar1 != 0)) {
                      iVar1 = FUN_140c8c7b0(lVar6,1);
                      if (iVar1 < 1) {
                        *param_1 = 2;
                      }
                      else {
                        *param_1 = 1;
                      }
                      local_58 = 1;
                    }
                  }
                  goto LAB_140c8f8f8;
                }
                lVar10 = FUN_140c8a7f0(lVar8,lVar7);
                if ((lVar10 == 0) ||
                   (iVar1 = FUN_140c8dc40(lVar7,lVar8,lVar8,param_2,param_4), iVar1 == 0))
                goto LAB_140c8f8f8;
                iVar1 = FUN_140c8c700(lVar7,lVar3);
                if (iVar1 == 0) break;
                iVar1 = FUN_140c8cae0(lVar7);
                if (iVar1 != 0) goto LAB_140c8f835;
                local_40 = local_40 + 1;
              } while( true );
            }
            iVar1 = FUN_140c8f0c0(param_5,1,local_5c + -1);
            if (iVar1 == 0) goto LAB_140c8f8f8;
          }
          *param_1 = 0;
          local_58 = 1;
        }
      }
    }
LAB_140c8f8f8:
    FUN_140c90600(local_20);
    FUN_140c8b280(param_4);
  }
  return local_58;
}


/* address=140c8f930 name=FUN_140c8f930 */

undefined4
FUN_140c8f930(undefined4 *param_1,undefined8 param_2,int param_3,longlong param_4,int param_5,
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
  uVar3 = FUN_140c8a8f0();
  iVar1 = FUN_140c8c700(param_2,uVar3);
  if (iVar1 < 1) {
    local_70 = 1;
  }
  else {
    iVar1 = FUN_140c8cb90(param_2);
    if (iVar1 == 0) {
      uVar2 = FUN_140c8cb30(param_2,2);
      *param_1 = uVar2;
      local_70 = 1;
    }
    else {
      iVar1 = FUN_140c8cb30(param_2,3);
      if (iVar1 == 0) {
        if (param_5 != 0) {
          iVar1 = FUN_140ca89c0(local_74,param_2);
          if (iVar1 != 0) {
            uVar2 = FUN_140c8cb30(param_2,local_74[0]);
            *param_1 = uVar2;
            return 1;
          }
          iVar1 = FUN_140c8f0c0(param_6,1,0xffffffff);
          if (iVar1 == 0) {
            return 0;
          }
        }
        local_res18 = param_3;
        if (param_3 == 0) {
          uVar2 = FUN_140c8a920(param_2);
          local_res18 = FUN_140ca84b0(uVar2);
        }
        local_58 = 0;
        local_res20 = param_4;
        if ((param_4 == 0) &&
           (local_res20 = FUN_140c8afd0(), local_58 = local_res20, local_res20 == 0)) {
          local_70 = 0;
        }
        else {
          local_70 = 0;
          FUN_140c8b0d0(local_res20);
          local_48 = FUN_140c8b130(local_res20);
          local_60 = FUN_140c90550(param_2,local_res20);
          if ((local_48 != 0) &&
             ((local_60 != 0 && (iVar1 = FUN_140c9fb30(local_38,local_60,local_res20), iVar1 != 0)))
             ) {
            local_68 = 0;
            local_78 = 1;
            while( true ) {
              local_40 = (ulonglong)(local_78 < 0x11);
              uVar4 = FUN_140c80660(local_68,(longlong)local_res18);
              if ((local_40 | uVar4) == 0) break;
              iVar1 = FUN_140c9ef50(local_48,local_50,2,local_38[0]);
              if (iVar1 == 0) goto LAB_140c8fc71;
              local_68 = local_68 + (longlong)local_50[0];
              local_6c = 0;
              iVar1 = FUN_140c9fca0(local_38,&local_6c,local_48,local_60,local_res20);
              if (iVar1 == 0) goto LAB_140c8fc71;
              if (local_6c == 0) {
                *param_1 = 0;
                local_70 = 1;
                goto LAB_140c8fc71;
              }
              iVar1 = FUN_140c8f0c0(param_6,1,local_78 + -1);
              if (iVar1 == 0) goto LAB_140c8fc71;
              local_78 = local_78 + 1;
            }
            if (local_68 < (ulonglong)(longlong)local_res18) {
              FID_conflict__assert((wchar_t *)s_u_1413a5e20,(wchar_t *)s_D_1413a5d40,0x308);
            }
            *param_1 = 1;
            local_70 = 1;
          }
LAB_140c8fc71:
          FUN_140c90600(local_60);
          FUN_140c8b280(local_res20);
          FUN_140c8b040(local_58);
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


/* address=140c8fcb0 name=FUN_140c8fcb0 */

undefined4
FUN_140c8fcb0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined4 local_18 [6];
  
  iVar1 = FUN_140c8f930(local_18,param_1,param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    local_18[0] = 0xffffffff;
  }
  return local_18[0];
}


/* address=140c8fd10 name=FUN_140c8fd10 */

void FUN_140c8fd10(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140c8fcb0(param_1,param_2,param_3,0,param_4);
  return;
}


/* address=140c8fd60 name=FUN_140c8fd60 */

undefined4
FUN_140c8fd60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 local_14 [5];
  
  iVar1 = FUN_140ca5550(param_1,local_14,param_2,param_3,param_4);
  if ((iVar1 != 0) && (iVar1 = FUN_140c8ccb0(param_1,param_1,local_14[0]), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=140c8fde0 name=FUN_140c8fde0 */

longlong FUN_140c8fde0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

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
  if ((param_1 == 0) && (local_res8 = FUN_140c8a680(), local_18 = local_res8, local_res8 == 0)) {
    return 0;
  }
  bVar1 = false;
  local_20 = 0;
  if ((*(int *)(param_2 + 0x10) != 0) ||
     (iVar2 = FUN_140c8c820(param_2,param_3), local_res10 = param_2, -1 < iVar2)) {
    local_20 = FUN_140c8a790(param_2);
    if ((local_20 == 0) || (iVar2 = FUN_140c8d9c0(local_20,local_20,param_3,param_4), iVar2 == 0))
    goto LAB_140c8ff0a;
    local_res10 = local_20;
  }
  iVar2 = FUN_140c8cb90(param_3);
  if (iVar2 == 0) {
    iVar2 = FUN_140ca1760(local_res8,local_24,local_res10,param_3,param_4);
  }
  else {
    iVar2 = FUN_140c900c0(local_res8,local_24,local_res10,param_3,param_4);
  }
  if (iVar2 != 0) {
    bVar1 = true;
  }
LAB_140c8ff0a:
  if (!bVar1) {
    FUN_140c8a700(local_18);
    local_res8 = 0;
  }
  FUN_140c8a700(local_20);
  return local_res8;
}


/* address=140c8ff40 name=FUN_140c8ff40 */

undefined4
FUN_140c8ff40(undefined8 param_1,undefined4 *param_2,undefined8 param_3,longlong param_4,
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
  iVar1 = FUN_140c8ab10(param_3);
  if ((iVar1 != 0) || (iVar1 = FUN_140c8c700(param_3,param_4 + 0x18), -1 < iVar1)) {
    FUN_140c6c4e0(3,0,0x6b,s_D__a_1_s_target_release_build_bo_1413a3380,CONCAT44(uVar3,0x14c));
    return 0;
  }
  local_28 = 0;
  FUN_140c8a6d0(local_20);
  iVar1 = FUN_140c8ef40(local_20,1,param_4 + 0x18);
  if (iVar1 != 0) {
    uVar2 = param_5;
    iVar1 = FUN_140c907f0(param_1,local_20,param_3,param_4,param_5);
    uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
    if (iVar1 != 0) {
      uVar2 = param_5;
      iVar1 = FUN_140c900c0(param_1,param_2,param_1,param_4 + 0x18,param_5);
      uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
      if (iVar1 != 0) {
        iVar1 = FUN_140c907f0(param_1,local_20,param_1,param_4,param_5);
        uVar3 = (undefined4)((ulonglong)param_5 >> 0x20);
        if (iVar1 != 0) {
          local_28 = 1;
          goto LAB_140c90099;
        }
      }
    }
  }
  FUN_140c6c4e0(3,0,3,s_D__a_1_s_target_release_build_bo_1413a33f0,CONCAT44(uVar3,0x158));
LAB_140c90099:
  FUN_140c8a700(local_20);
  return local_28;
}


/* address=140c900c0 name=FUN_140c900c0 */

undefined4
FUN_140c900c0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
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
  iVar1 = FUN_140c8cb90(param_4);
  if (iVar1 == 0) {
    FUN_140c6c4e0(3,0,0x68,s_D__a_1_s_target_release_build_bo_1413a3230,0x79);
    return 0;
  }
  iVar1 = FUN_140c8ab10(param_3);
  if ((iVar1 != 0) || (iVar1 = FUN_140c8c700(param_3,param_4), -1 < iVar1)) {
    FUN_140c6c4e0(3,0,0x6b,s_D__a_1_s_target_release_build_bo_1413a32a0,0x7e);
    return 0;
  }
  local_44 = 0;
  FUN_140c8b0d0(param_5);
  lVar2 = FUN_140c8b130(param_5);
  uVar3 = FUN_140c8b130(param_5);
  uVar4 = FUN_140c8b130(param_5);
  lVar5 = FUN_140c8b130(param_5);
  if (lVar5 != 0) {
    FUN_140c8a9b0(lVar5);
    iVar1 = FUN_140c8a9e0(uVar4);
    if (((iVar1 != 0) && (lVar6 = FUN_140c8a7f0(uVar3,param_3), lVar6 != 0)) &&
       (lVar6 = FUN_140c8a7f0(lVar2,param_4), lVar6 != 0)) {
      *(undefined4 *)(lVar2 + 0x10) = 0;
      while (iVar1 = FUN_140c8cac0(uVar3), iVar1 == 0) {
        local_48 = 0;
        while (iVar1 = FUN_140c8d350(uVar3,local_48), iVar1 == 0) {
          local_48 = local_48 + 1;
          iVar1 = FUN_140c8cb90(uVar4);
          if (((iVar1 != 0) && (iVar1 = FUN_140c8b3c0(uVar4,uVar4,param_4), iVar1 == 0)) ||
             (iVar1 = FUN_140c8d0f0(uVar4,uVar4), iVar1 == 0)) goto LAB_140c904d4;
        }
        if ((0 < local_48) && (iVar1 = FUN_140c8d030(uVar3,uVar3,local_48), iVar1 == 0))
        goto LAB_140c904d4;
        local_48 = 0;
        while (iVar1 = FUN_140c8d350(lVar2,local_48), iVar1 == 0) {
          local_48 = local_48 + 1;
          iVar1 = FUN_140c8cb90(lVar5);
          if (((iVar1 != 0) && (iVar1 = FUN_140c8b3c0(lVar5,lVar5,param_4), iVar1 == 0)) ||
             (iVar1 = FUN_140c8d0f0(lVar5,lVar5), iVar1 == 0)) goto LAB_140c904d4;
        }
        if ((0 < local_48) && (iVar1 = FUN_140c8d030(lVar2,lVar2,local_48), iVar1 == 0))
        goto LAB_140c904d4;
        iVar1 = FUN_140c8c820(uVar3,lVar2);
        if (iVar1 < 0) {
          iVar1 = FUN_140c8b3c0(lVar5,lVar5,uVar4);
          if (iVar1 == 0) goto LAB_140c904d4;
          iVar1 = FUN_140c8b6f0(lVar2,lVar2,uVar3);
        }
        else {
          iVar1 = FUN_140c8b3c0(uVar4,uVar4,lVar5);
          if (iVar1 == 0) goto LAB_140c904d4;
          iVar1 = FUN_140c8b6f0(uVar3,uVar3,lVar2);
        }
        if (iVar1 == 0) goto LAB_140c904d4;
      }
      iVar1 = FUN_140c8cae0(lVar2);
      if (iVar1 == 0) {
        *param_2 = 1;
        FUN_140c6c4e0(3,0,0x70,s_D__a_1_s_target_release_build_bo_1413a3310,0xf8);
      }
      else {
        iVar1 = FUN_140c8b5b0(lVar5,param_4,lVar5);
        if (iVar1 != 0) {
          if ((*(int *)(lVar5 + 0x10) == 0) && (iVar1 = FUN_140c8c820(lVar5,param_4), iVar1 < 0)) {
            lVar2 = FUN_140c8a7f0(param_1,lVar5);
            if (lVar2 == 0) goto LAB_140c904d4;
          }
          else {
            iVar1 = FUN_140c8d9c0(param_1,lVar5,param_4,param_5);
            if (iVar1 == 0) goto LAB_140c904d4;
          }
          local_44 = 1;
        }
      }
    }
  }
LAB_140c904d4:
  FUN_140c8b280(param_5);
  return local_44;
}


/* address=140c904f0 name=FUN_140c904f0 */

longlong FUN_140c904f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_140c922d0();
  if ((lVar2 == 0) || (iVar1 = FUN_140c92330(lVar2,param_1,param_2), iVar1 == 0)) {
    FUN_140c90600(lVar2);
    lVar2 = 0;
  }
  return lVar2;
}


/* address=140c90550 name=FUN_140c90550 */

longlong FUN_140c90550(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_140c922d0();
  if ((((lVar2 == 0) || (iVar1 = FUN_140ca5bf0(lVar2,param_1), iVar1 == 0)) ||
      (iVar1 = FUN_140c9f2b0(lVar2,*(int *)(lVar2 + 0x20) << 7,lVar2 + 0x18,param_2), iVar1 == 0))
     || (iVar1 = FUN_140c92950(lVar2,(longlong)*(int *)(lVar2 + 0x20)), iVar1 == 0)) {
    FUN_140c90600(lVar2);
    lVar2 = 0;
  }
  return lVar2;
}


/* address=140c90600 name=FUN_140c90600 */

void FUN_140c90600(longlong param_1)

{
  if (param_1 != 0) {
    FUN_140c8a700(param_1);
    FUN_140c8a700(param_1 + 0x18);
    FUN_140c66200(param_1);
  }
  return;
}


/* address=140c90710 name=FUN_140c90710 */

void FUN_140c90710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140c907f0(param_1,param_2,param_3,param_3,param_4);
  return;
}


/* address=140c90760 name=FUN_140c90760 */

undefined4
FUN_140c90760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 local_18;
  
  local_18 = 0;
  FUN_140c8b0d0(param_4);
  lVar1 = FUN_140c8b130(param_4);
  if ((lVar1 != 0) && (lVar2 = FUN_140c8a7f0(lVar1,param_2), lVar2 != 0)) {
    local_18 = FUN_140ca5ff0(param_1,lVar1,param_3);
  }
  FUN_140c8b280(param_4);
  return local_18;
}


/* address=140c907f0 name=FUN_140c907f0 */

undefined8
FUN_140c907f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
             undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((*(int *)(param_2 + 2) == 0) && (*(int *)(param_3 + 2) == 0)) {
    uVar1 = *(uint *)(param_4 + 0x20);
    if ((((int)uVar1 < 2) || (*(uint *)(param_2 + 1) != uVar1)) || (*(uint *)(param_3 + 1) != uVar1)
       ) {
      uVar3 = FUN_140ca6110(param_1,param_2,param_3,param_4,param_5);
    }
    else {
      iVar2 = FUN_140c927d0(param_1,(longlong)(int)uVar1);
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        if (0x400 < uVar1) {
          FID_conflict__assert((wchar_t *)s___1413a42a0,(wchar_t *)s_D_1413a41c0,0x1b5);
        }
        iVar2 = FUN_140a96280(*param_1,*param_2,*param_3,*(undefined8 *)(param_4 + 0x18),
                              param_4 + 0x30,(longlong)(int)uVar1);
        if (iVar2 == 0) {
          FID_conflict__assert((wchar_t *)&DAT_14139f8c8,(wchar_t *)s_D_1413a42f0,0x1b8);
          FUN_140c6c4e0(3,0,0x44,s_D__a_1_s_target_release_build_bo_1413a43d0,0x1b9);
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
    FUN_140c6c4e0(3,0,0x6d,s_D__a_1_s_target_release_build_bo_1413a4150,0x1a6);
    uVar3 = 0;
  }
  return uVar3;
}


/* address=140c90c40 name=FUN_140c90c40 */

void FUN_140c90c40(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
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
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_198;
  iVar1 = FUN_140c8cb90(param_4);
  if (iVar1 == 0) {
    local_178 = CONCAT44(local_178._4_4_,0x24e);
    FUN_140c6c4e0(3,0,0x68,s_D__a_1_s_target_release_build_bo_1413a1c20);
    goto LAB_140c91248;
  }
  if (*(int *)(param_4 + 0x10) != 0) {
    local_178 = CONCAT44(local_178._4_4_,0x252);
    FUN_140c6c4e0(3,0,0x6d,s_D__a_1_s_target_release_build_bo_1413a1ca0);
    goto LAB_140c91248;
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    uVar2 = FUN_140c8c820(param_2,param_4);
    iVar1 = FUN_140c80850(uVar2);
    if (iVar1 < 0) {
      local_144 = FUN_140c8a920(param_3);
      if (local_144 == 0) {
        iVar1 = FUN_140c8c9f0(param_4,1);
        if (iVar1 == 0) {
          FUN_140c8a9e0(param_1);
        }
        else {
          FUN_140c8a9b0(param_1);
        }
        goto LAB_140c91248;
      }
      local_13c = 0;
      local_138 = 0;
      FUN_140c8b0d0(param_5);
      local_150 = FUN_140c8b130(param_5);
      alStack_118[0] = FUN_140c8b130(param_5);
      if (((local_150 != 0) && (alStack_118[0] != 0)) &&
         ((param_6 != 0 ||
          (param_6 = FUN_140c90550(param_4,param_5), local_138 = param_6, param_6 != 0)))) {
        local_148 = FUN_140ca4ca0((longlong)local_144);
        iVar1 = FUN_140c90710(alStack_118[0],param_2,param_6,param_5);
        if (iVar1 != 0) {
          if (local_148 < 2) {
LAB_140c90f94:
            local_154 = 1;
            local_168 = local_144 + -1;
            while( true ) {
              while (iVar1 = FUN_140c8d350(param_3,local_168), iVar1 != 0) {
                local_164 = 1;
                local_158 = 0;
                for (local_15c = 1; (local_15c < local_148 && (local_15c <= local_168));
                    local_15c = local_15c + 1) {
                  iVar1 = FUN_140c8d350(param_3,local_168 - local_15c);
                  if (iVar1 != 0) {
                    local_164 = local_164 << ((char)local_15c - (char)local_158 & 0x1fU) | 1;
                    local_158 = local_15c;
                  }
                }
                if (local_154 == 0) {
                  for (local_140 = 0; local_140 < local_158 + 1; local_140 = local_140 + 1) {
                    local_178 = param_5;
                    iVar1 = FUN_140c907f0(local_150,local_150,local_150,param_6);
                    if (iVar1 == 0) goto LAB_140c9122d;
                  }
                }
                if ((local_164 & 1) == 0) {
                  FID_conflict__assert((wchar_t *)s_w_1413a1e88,(wchar_t *)s_D_1413a1da0,0x2b4);
                }
                local_12c = 1;
                if (1 << ((byte)local_148 & 0x1f) <= (int)local_164) {
                  FID_conflict__assert((wchar_t *)s_w_1413a1f88,(wchar_t *)s_D_1413a1ea0,0x2b5);
                }
                if (local_154 == 0) {
                  local_178 = param_5;
                  iVar1 = FUN_140c907f0(local_150,local_150,alStack_118[(int)local_164 >> 1],param_6
                                       );
                  if (iVar1 == 0) goto LAB_140c9122d;
                }
                else {
                  lVar3 = FUN_140c8a7f0(local_150,alStack_118[(int)local_164 >> 1]);
                  if (lVar3 == 0) goto LAB_140c9122d;
                }
                local_154 = 0;
                if (local_168 == local_158) goto LAB_140c911db;
                local_168 = local_168 - (local_158 + 1);
              }
              if (local_154 == 0) {
                local_178 = param_5;
                iVar1 = FUN_140c907f0(local_150,local_150,local_150,param_6);
                if (iVar1 == 0) goto LAB_140c9122d;
              }
              if (local_168 == 0) break;
              local_168 = local_168 + -1;
            }
LAB_140c911db:
            if (local_154 != 0) {
              FID_conflict__assert((wchar_t *)s___1413a20a8,(wchar_t *)s_D_1413a1fc0,0x2c6);
            }
            iVar1 = FUN_140c90760(param_1,local_150,param_6,param_5);
            if (iVar1 != 0) {
              local_13c = 1;
            }
          }
          else {
            local_128 = FUN_140c8b130(param_5);
            if (local_128 != 0) {
              local_178 = param_5;
              iVar1 = FUN_140c907f0(local_128,alStack_118[0],alStack_118[0],param_6);
              if (iVar1 != 0) {
                for (local_160 = 1; local_130 = 1, local_160 < 1 << ((char)local_148 - 1U & 0x1f);
                    local_160 = local_160 + 1) {
                  lVar3 = FUN_140c8b130(param_5);
                  alStack_118[local_160] = lVar3;
                  if (alStack_118[local_160] == 0) goto LAB_140c9122d;
                  local_178 = param_5;
                  iVar1 = FUN_140c907f0(alStack_118[local_160],alStack_118[local_160 + -1],local_128
                                        ,param_6);
                  if (iVar1 == 0) goto LAB_140c9122d;
                }
                goto LAB_140c90f94;
              }
            }
          }
        }
      }
LAB_140c9122d:
      FUN_140c90600(local_138);
      FUN_140c8b280(param_5);
      goto LAB_140c91248;
    }
  }
  local_178 = CONCAT44(local_178._4_4_,599);
  FUN_140c6c4e0(3,0,0x6b,s_D__a_1_s_target_release_build_bo_1413a1d20);
LAB_140c91248:
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_198);
  return;
}


/* address=140c91270 name=FUN_140c91270 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_140c91270(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
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
  
  uStack_10 = 0x140c9128f;
  local_40 = DAT_1413d9c40 ^ (ulonglong)auStack_1718;
  local_165c = 0;
  local_1620 = (undefined8 *)0x0;
  local_1628 = 0;
  local_1668 = 0;
  local_16a8 = (undefined *)0x0;
  iVar1 = FUN_140c8cb90(param_4);
  if (iVar1 == 0) {
    local_16f8 = (undefined8 *)CONCAT44(local_16f8._4_4_,0x37e);
    FUN_140c6c4e0(3,0,0x68,s_D__a_1_s_target_release_build_bo_1413a26e0);
    goto LAB_140c9203b;
  }
  if (*(int *)(param_4 + 2) != 0) {
    local_16f8 = (undefined8 *)CONCAT44(local_16f8._4_4_,0x382);
    FUN_140c6c4e0(3,0,0x6d,s_D__a_1_s_target_release_build_bo_1413a2760);
    goto LAB_140c9203b;
  }
  if ((*(int *)(param_2 + 2) != 0) || (iVar1 = FUN_140c8c820(param_2,param_4), -1 < iVar1)) {
    local_16f8 = (undefined8 *)CONCAT44(local_16f8._4_4_,0x386);
    FUN_140c6c4e0(3,0,0x6b,s_D__a_1_s_target_release_build_bo_1413a27e0);
    goto LAB_140c9203b;
  }
  local_16bc = *(int *)(param_3 + 1) * 0x40;
  local_166c = local_16bc;
  if (local_16bc == 0) {
    iVar1 = FUN_140c8c9f0(param_4,1);
    if (iVar1 == 0) {
      FUN_140c8a9e0(param_1);
    }
    else {
      FUN_140c8a9b0(param_1);
    }
    goto LAB_140c9203b;
  }
  if ((param_6 != (undefined8 *)0x0) ||
     (param_6 = (undefined8 *)FUN_140c90550(param_4,param_5), local_1620 = param_6,
     param_6 != (undefined8 *)0x0)) {
    local_16b8 = *(uint *)(param_6 + 4);
    if ((*(int *)(param_2 + 1) == 0x10) &&
       (((*(int *)(param_3 + 1) == 0x10 && (iVar1 = FUN_140c8a920(param_4), iVar1 == 0x400)) &&
        (iVar1 = FUN_140ca4600(), iVar1 != 0)))) {
      iVar1 = FUN_140c927d0(param_1,0x10);
      if (iVar1 != 0) {
        local_16e8 = local_1600;
        local_16f0 = param_6[6];
        local_16f8 = (undefined8 *)*param_6;
        FUN_140ca4030(*param_1,*param_2,*param_3,*param_4);
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
        FID_conflict__assert((wchar_t *)s_w_1413a2950,(wchar_t *)s_D_1413a2860,0x3bf);
      }
      if (0x400 < local_16b8) {
        FID_conflict__assert((wchar_t *)s___1413a2a90,(wchar_t *)s_D_1413a29a0,0x3c3);
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
        FID_conflict__assert((wchar_t *)s_p_1413a2bd0,(wchar_t *)s_D_1413a2ae0,0x3db);
      }
      if (local_16a8 == (undefined *)0x0) {
        local_1628 = FUN_140c660d0(local_1668 + 0x40);
        if (local_1628 == 0) goto LAB_140c92001;
        local_16a8 = (undefined *)FUN_140c80550(local_1628,0x40);
      }
      FUN_140c809d0(local_16a8,0,local_1668);
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
      iVar1 = FUN_140c9f7f0(&local_1698,param_6,param_5);
      if ((iVar1 != 0) && (iVar1 = FUN_140c92950(&local_1698,(longlong)(int)local_16b8), iVar1 != 0)
         ) {
        if (*(int *)(param_2 + 2) != 0) {
          FID_conflict__assert((wchar_t *)s___1413a2d18,(wchar_t *)s_D_1413a2c30,0x3f5);
        }
        iVar1 = FUN_140c8c820(param_2,param_4);
        if (-1 < iVar1) {
          FID_conflict__assert((wchar_t *)s_B_1413a2e18,(wchar_t *)s_D_1413a2d30,0x3f6);
        }
        iVar1 = FUN_140c90710(&local_1658,param_2,param_6,param_5);
        if ((iVar1 != 0) &&
           (iVar1 = FUN_140c92950(&local_1658,(longlong)(int)local_16b8), iVar1 != 0)) {
          if ((local_16b0 == 5) && (1 < (int)local_16b8)) {
            local_1680 = local_1658 + (longlong)(int)local_16b8 * 8;
            for (local_16c0 = 0; local_16c0 < (int)local_16b8; local_16c0 = local_16c0 + 1) {
              *(undefined8 *)(local_1680 + (longlong)local_16c0 * 8) =
                   *(undefined8 *)(param_6[3] + (longlong)local_16c0 * 8);
            }
            local_1678 = param_6 + 6;
            FUN_140a9a550(local_1698,(longlong)(int)local_16b8,local_16a8,0);
            FUN_140a9a550(local_1658,(longlong)local_1650,local_16a8,1);
            local_16f0 = (longlong)(int)local_16b8;
            local_16f8 = local_1678;
            FUN_140a96280(local_1698,local_1658,local_1658,local_1680);
            FUN_140a9a550(local_1698,(longlong)(int)local_16b8,local_16a8,2);
            for (local_16c0 = 4; local_16c0 < 0x20; local_16c0 = local_16c0 << 1) {
              local_16f0 = (longlong)(int)local_16b8;
              local_16f8 = local_1678;
              FUN_140a96280(local_1698,local_1698,local_1698,local_1680);
              FUN_140a9a550(local_1698,(longlong)(int)local_16b8,local_16a8,(longlong)local_16c0);
            }
            for (local_16c0 = 3; local_16c0 < 0x20; local_16c0 = local_16c0 + 2) {
              local_16e8 = (undefined *)CONCAT44(local_16e8._4_4_,local_16c0 + -1);
              local_16f0 = CONCAT44(local_16f0._4_4_,local_16b8);
              local_16f8 = local_1678;
              FUN_140a97540(local_1698,local_1658,local_16a8,local_1680);
              FUN_140a9a550(local_1698,(longlong)(int)local_16b8,local_16a8,(longlong)local_16c0);
              local_1670 = local_16c0;
              while (local_1670 = local_1670 << 1, local_1670 < 0x20) {
                local_16f0 = (longlong)(int)local_16b8;
                local_16f8 = local_1678;
                FUN_140a96280(local_1698,local_1698,local_1698,local_1680);
                FUN_140a9a550(local_1698,(longlong)(int)local_16b8,local_16a8,(longlong)local_1670);
              }
            }
            local_16bc = local_16bc + -1;
            local_16b4 = 0;
            for (local_16c0 = local_16bc % 5; -1 < local_16c0; local_16c0 = local_16c0 + -1) {
              iVar1 = FUN_140c8d350(param_3,local_16bc);
              local_16b4 = iVar1 + local_16b4 * 2;
              local_16bc = local_16bc + -1;
            }
            FUN_140a9a580(local_1698,(longlong)(int)local_16b8,local_16a8,(longlong)(int)local_16b4)
            ;
            if ((local_16bc < -1) || ((local_16bc != -1 && (local_16bc % 5 != 4)))) {
              FID_conflict__assert((wchar_t *)s_b_1413a2f30,(wchar_t *)s_D_1413a2e40,0x434);
            }
            if ((local_16b8 & 7) == 0) {
              local_1610 = *param_3;
              if (local_166c <= local_16bc) {
                FID_conflict__assert((wchar_t *)s_b_1413a3078,(wchar_t *)s_D_1413a2f90,0x447);
              }
              if (local_166c < 0x40) {
                FID_conflict__assert((wchar_t *)s_m_1413a3188,(wchar_t *)s_D_1413a30a0,0x44a);
              }
              if (local_166c + -8 <= local_16bc + -4) {
                uVar2 = (int)(uint)*(byte *)(local_1610 + (*(int *)(param_3 + 1) * 8 + -1)) >>
                        ((char)local_16bc - 4U & 7);
                local_16b4 = uVar2 & 0x1f;
                local_16bc = local_16bc + -5;
                local_16e8 = (undefined *)(CONCAT44(local_16e8._4_4_,uVar2) & 0xffffffff0000001f);
                local_16f0 = CONCAT44(local_16f0._4_4_,local_16b8);
                local_16f8 = local_1678;
                FUN_140a98500(local_1698,local_1698,local_16a8,local_1680);
              }
              while (-1 < local_16bc) {
                local_1630 = local_16bc + -4;
                FUN_140c80930(local_16a0,local_1610 + (local_1630 >> 3),2);
                local_16a0[0] = local_16a0[0] >> ((byte)local_1630 & 7) & 0x1f;
                local_16bc = local_16bc + -5;
                local_16e8 = (undefined *)CONCAT44(local_16e8._4_4_,(uint)local_16a0[0]);
                local_16f0 = CONCAT44(local_16f0._4_4_,local_16b8);
                local_16f8 = local_1678;
                FUN_140a98500(local_1698,local_1698,local_16a8,local_1680);
              }
            }
            else {
              while (-1 < local_16bc) {
                local_16b4 = 0;
                for (local_16c0 = 0; local_16c0 < 5; local_16c0 = local_16c0 + 1) {
                  iVar1 = FUN_140c8d350(param_3,local_16bc);
                  local_16b4 = iVar1 + local_16b4 * 2;
                  local_16bc = local_16bc + -1;
                }
                local_16f0 = (longlong)(int)local_16b8;
                local_16f8 = local_1678;
                FUN_140a96280(local_1698,local_1698,local_1698,local_1680);
                local_16f0 = (longlong)(int)local_16b8;
                local_16f8 = local_1678;
                FUN_140a96280(local_1698,local_1698,local_1698,local_1680);
                local_16f0 = (longlong)(int)local_16b8;
                local_16f8 = local_1678;
                FUN_140a96280(local_1698,local_1698,local_1698,local_1680);
                local_16f0 = (longlong)(int)local_16b8;
                local_16f8 = local_1678;
                FUN_140a96280(local_1698,local_1698,local_1698,local_1680);
                local_16f0 = (longlong)(int)local_16b8;
                local_16f8 = local_1678;
                FUN_140a96280(local_1698,local_1698,local_1698,local_1680);
                local_16e8 = (undefined *)CONCAT44(local_16e8._4_4_,local_16b4);
                local_16f0 = CONCAT44(local_16f0._4_4_,local_16b8);
                local_16f8 = local_1678;
                FUN_140a97540(local_1698,local_1698,local_16a8,local_1680);
              }
            }
LAB_140c91fd3:
            iVar1 = FUN_140c90760(param_1,&local_1698,param_6,param_5);
            if (iVar1 != 0) {
              local_165c = 1;
            }
          }
          else {
            local_16f8._0_4_ = local_16b0;
            FUN_140ca5220(&local_1698,local_16b8,local_16a8,0);
            local_16f8 = (undefined8 *)CONCAT44(local_16f8._4_4_,local_16b0);
            FUN_140ca5220(&local_1658,local_16b8,local_16a8,1);
            if (1 < (int)local_16b0) {
              local_16f8 = param_5;
              iVar1 = FUN_140c907f0(&local_1698,&local_1658,&local_1658,param_6);
              if (iVar1 == 0) goto LAB_140c92001;
              local_16f8 = (undefined8 *)CONCAT44(local_16f8._4_4_,local_16b0);
              FUN_140ca5220(&local_1698,local_16b8,local_16a8,2);
              for (local_16c0 = 3; local_16c0 < local_1660; local_16c0 = local_16c0 + 1) {
                local_16f8 = param_5;
                iVar1 = FUN_140c907f0(&local_1698,&local_1658,&local_1698,param_6);
                if (iVar1 == 0) goto LAB_140c92001;
                local_16f8 = (undefined8 *)CONCAT44(local_16f8._4_4_,local_16b0);
                FUN_140ca5220(&local_1698,local_16b8,local_16a8,local_16c0);
              }
            }
            local_16bc = local_16bc + -1;
            local_16b4 = 0;
            for (local_16c0 = local_16bc % (int)local_16b0; -1 < local_16c0;
                local_16c0 = local_16c0 + -1) {
              iVar1 = FUN_140c8d350(param_3,local_16bc);
              local_16b4 = iVar1 + local_16b4 * 2;
              local_16bc = local_16bc + -1;
            }
            local_16f8 = (undefined8 *)CONCAT44(local_16f8._4_4_,local_16b0);
            iVar1 = FUN_140ca5290(&local_1698,local_16b8,local_16a8,local_16b4);
            while (iVar1 != 0) {
              if (local_16bc < 0) goto LAB_140c91fd3;
              local_16b4 = 0;
              for (local_16c0 = 0; local_16c0 < (int)local_16b0; local_16c0 = local_16c0 + 1) {
                local_16f8 = param_5;
                iVar1 = FUN_140c907f0(&local_1698,&local_1698,&local_1698,param_6);
                if (iVar1 == 0) goto LAB_140c92001;
                iVar1 = FUN_140c8d350(param_3,local_16bc);
                local_16b4 = iVar1 + local_16b4 * 2;
                local_16bc = local_16bc + -1;
              }
              local_16f8 = (undefined8 *)CONCAT44(local_16f8._4_4_,local_16b0);
              iVar1 = FUN_140ca5290(&local_1658,local_16b8,local_16a8,local_16b4);
              if (iVar1 == 0) break;
              local_16f8 = param_5;
              iVar1 = FUN_140c907f0(&local_1698,&local_1698,&local_1658,param_6);
            }
          }
        }
      }
    }
  }
LAB_140c92001:
  FUN_140c90600(local_1620);
  if ((local_16a8 != (undefined *)0x0) && (local_1628 == 0)) {
    FUN_140c663a0(local_16a8,local_1668);
  }
  FUN_140c66200(local_1628);
LAB_140c9203b:
  FUN_140db44f0(local_40 ^ (ulonglong)auStack_1718);
  return;
}


/* address=140c92160 name=FUN_140c92160 */

undefined4
FUN_140c92160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  int iVar1;
  undefined4 local_38;
  longlong local_30;
  undefined local_28 [40];
  
  FUN_140c8a6d0(local_28);
  local_38 = 0;
  local_30 = 0;
  if ((((param_8 != 0) ||
       (param_8 = FUN_140c904f0(param_6,param_7), local_30 = param_8, param_8 != 0)) &&
      (iVar1 = FUN_140c90c40(param_1,param_2,param_3,param_6,param_7,param_8), iVar1 != 0)) &&
     (((iVar1 = FUN_140c90c40(local_28,param_4,param_5,param_6,param_7,param_8), iVar1 != 0 &&
       (iVar1 = FUN_140c90710(param_1,param_1,param_8,param_7), iVar1 != 0)) &&
      (iVar1 = FUN_140c907f0(param_1,param_1,local_28,param_8,param_7), iVar1 != 0)))) {
    local_38 = 1;
  }
  FUN_140c90600(local_30);
  FUN_140c8a700(local_28);
  return local_38;
}


/* address=140c922d0 name=FUN_140c922d0 */

longlong FUN_140c922d0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140c660d0(0x40);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_140c809d0(lVar1,0,0x40);
    FUN_140c8a6d0(lVar1);
    FUN_140c8a6d0(lVar1 + 0x18);
  }
  return lVar1;
}


/* address=140c92330 name=FUN_140c92330 */

undefined4 FUN_140c92330(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong local_res18;
  undefined4 local_28;
  longlong local_18;
  
  iVar1 = FUN_140ca5bf0(param_1,param_2);
  if (iVar1 == 0) {
    local_28 = 0;
  }
  else {
    local_18 = 0;
    local_res18 = param_3;
    if ((param_3 == 0) && (local_res18 = FUN_140c8afd0(), local_18 = local_res18, local_res18 == 0))
    {
      local_28 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x20);
      FUN_140c8a9b0(param_1);
      iVar1 = FUN_140c8d180(param_1,iVar1 << 7);
      if (((iVar1 == 0) ||
          (iVar1 = FUN_140c8bab0(0,param_1,param_1,param_1 + 0x18,local_res18), iVar1 == 0)) ||
         (iVar1 = FUN_140c92950(param_1,(longlong)*(int *)(param_1 + 0x20)), iVar1 == 0)) {
        local_28 = 0;
      }
      else {
        local_28 = 1;
      }
      FUN_140c8b040(local_18);
    }
  }
  return local_28;
}


/* address=140c92460 name=FUN_140c92460 */

int FUN_140c92460(ulonglong param_1)

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


/* address=140c92700 name=FUN_140c92700 */

uint FUN_140c92700(uint param_1)

{
  return param_1 >> 0x18;
}


/* address=140c92720 name=FUN_140c92720 */

uint FUN_140c92720(uint param_1)

{
  return param_1 & 0xfff;
}


/* address=140c92740 name=FUN_140c92740 */

int FUN_140c92740(longlong *param_1)

{
  int local_18;
  
  local_18 = *(int *)(param_1 + 1);
  while ((0 < local_18 && (*(longlong *)(*param_1 + (longlong)(local_18 + -1) * 8) == 0))) {
    local_18 = local_18 + -1;
  }
  return local_18;
}


/* address=140c92790 name=FUN_140c92790 */

void FUN_140c92790(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140c92740(param_1);
  *(undefined4 *)(param_1 + 8) = uVar1;
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}


/* address=140c927d0 name=FUN_140c927d0 */

undefined8 FUN_140c927d0(longlong *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 local_res10;
  
  if ((ulonglong)(longlong)*(int *)((longlong)param_1 + 0xc) < param_2) {
    if (param_2 < 0x800000) {
      if ((*(uint *)((longlong)param_1 + 0x14) & 2) == 0) {
        lVar2 = FUN_140c660d0(param_2 << 3);
        if (lVar2 == 0) {
          uVar1 = 0;
        }
        else {
          FUN_140c80930(lVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
          FUN_140c66200(*param_1);
          *param_1 = lVar2;
          local_res10 = (undefined4)param_2;
          *(undefined4 *)((longlong)param_1 + 0xc) = local_res10;
          uVar1 = 1;
        }
      }
      else {
        FUN_140c6c4e0(3,0,0x6a,s_D__a_1_s_target_release_build_bo_1413a0780,0x168);
        uVar1 = 0;
      }
    }
    else {
      FUN_140c6c4e0(3,0,0x66,s_D__a_1_s_target_release_build_bo_1413a0710,0x163);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* address=140c928e0 name=FUN_140c928e0 */

undefined8 FUN_140c928e0(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  if (param_2 + 0x3f < param_2) {
    FUN_140c6c4e0(3,0,0x66,s_D__a_1_s_target_release_build_bo_1413a07f0,0x17c);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140c927d0(param_1,(param_2 + 0x3f) / 0x40);
  }
  return uVar1;
}


/* address=140c92950 name=FUN_140c92950 */

undefined8 FUN_140c92950(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_res10;
  
  local_res10 = (undefined4)param_2;
  if (param_2 < (ulonglong)(longlong)*(int *)(param_1 + 1)) {
    iVar1 = FUN_140c92bd0(param_1,param_2);
    if (iVar1 == 0) {
      FUN_140c6c4e0(3,0,0x66,s_D__a_1_s_target_release_build_bo_1413a0860,399);
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 1) = local_res10;
      uVar2 = 1;
    }
  }
  else {
    iVar1 = FUN_140c927d0(param_1,param_2);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_140c809d0(*param_1 + (longlong)*(int *)(param_1 + 1) * 8,0,
                    (param_2 - (longlong)*(int *)(param_1 + 1)) * 8);
      *(undefined4 *)(param_1 + 1) = local_res10;
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=140c92a30 name=FUN_140c92a30 */

void FUN_140c92a30(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  ulonglong param_5)

{
  undefined8 uVar1;
  ulonglong local_18;
  
  for (local_18 = 0; local_18 < param_5; local_18 = local_18 + 1) {
    uVar1 = FUN_140c807c0(param_2,*(undefined8 *)(param_3 + local_18 * 8),
                          *(undefined8 *)(param_4 + local_18 * 8));
    *(undefined8 *)(param_1 + local_18 * 8) = uVar1;
  }
  return;
}


/* address=140c92ab0 name=FUN_140c92ab0 */

bool FUN_140c92ab0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined4 local_res18;
  
  iVar1 = FUN_140c927d0(param_1,param_3);
  if (iVar1 != 0) {
    FUN_140c80980(*param_1,param_2,param_3 << 3);
    local_res18 = (undefined4)param_3;
    *(undefined4 *)(param_1 + 1) = local_res18;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return iVar1 != 0;
}


/* address=140c92b20 name=FUN_140c92b20 */

void FUN_140c92b20(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined4 local_res18;
  
  if ((*(uint *)((longlong)param_1 + 0x14) & 2) == 0) {
    FUN_140c66200(*param_1);
  }
  *param_1 = param_2;
  if (0x7fffff < param_3) {
    FID_conflict__assert((wchar_t *)s_n_1413a0600,(wchar_t *)s_D_1413a0530,299);
  }
  local_res18 = (undefined4)param_3;
  *(undefined4 *)(param_1 + 1) = local_res18;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_res18;
  *(undefined4 *)(param_1 + 2) = 0;
  *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 2;
  return;
}


/* address=140c92bd0 name=FUN_140c92bd0 */

bool FUN_140c92bd0(longlong *param_1,ulonglong param_2)

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


/* address=140c92c60 name=FUN_140c92c60 */

undefined8 FUN_140c92c60(undefined8 param_1,ulonglong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong local_18;
  
  if (*(int *)(param_3 + 2) == 0) {
    local_18 = (ulonglong)*(int *)(param_3 + 1);
    if ((param_2 < local_18) &&
       (iVar1 = FUN_140c92bd0(param_3,param_2), local_18 = param_2, iVar1 == 0)) {
      FUN_140c6c4e0(3,0,0x66,s_D__a_1_s_target_release_build_bo_1413a06a0,0x144);
      uVar2 = 0;
    }
    else {
      FUN_140c809d0(param_1,0,param_2 << 3);
      FUN_140c80930(param_1,*param_3,local_18 << 3);
      uVar2 = 1;
    }
  }
  else {
    FUN_140c6c4e0(3,0,0x6d,s_D__a_1_s_target_release_build_bo_1413a0630,0x13d);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140c92d50 name=FUN_140c92d50 */

void FUN_140c92d50(longlong *param_1,ulonglong param_2)

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
        FID_conflict__assert((wchar_t *)s_b_1413a0ba8,(wchar_t *)s_D_1413a0ad0,0xab);
      }
    }
  }
  return;
}


/* address=140c92df0 name=FUN_140c92df0 */

ulonglong FUN_140c92df0(ulonglong *param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

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


/* address=140c934a0 name=FUN_140c934a0 */

longlong FUN_140c934a0(ulonglong *param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

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


/* address=140c93960 name=FUN_140c93960 */

void FUN_140c93960(undefined (*param_1) [16],ulonglong *param_2,ulonglong param_3)

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


/* address=140c93bf0 name=FUN_140c93bf0 */

undefined8
FUN_140c93bf0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

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
      uVar1 = FUN_140ca5a30(*local_res10,*local_res18,local_18[0],local_18);
      *local_res8 = uVar1;
      uVar1 = FUN_140ca5a30(local_res10[1],local_res18[1],local_18[0],local_18);
      local_res8[1] = uVar1;
      uVar1 = FUN_140ca5a30(local_res10[2],local_res18[2],local_18[0],local_18);
      local_res8[2] = uVar1;
      uVar1 = FUN_140ca5a30(local_res10[3],local_res18[3],local_18[0],local_18);
      local_res8[3] = uVar1;
      local_res10 = local_res10 + 4;
      local_res18 = local_res18 + 4;
      local_res8 = local_res8 + 4;
    }
    for (; local_res20 != 0; local_res20 = local_res20 - 1) {
      uVar1 = FUN_140ca5a30(*local_res10,*local_res18,local_18[0],local_18);
      *local_res8 = uVar1;
      local_res10 = local_res10 + 1;
      local_res18 = local_res18 + 1;
      local_res8 = local_res8 + 1;
    }
  }
  return local_18[0];
}


/* address=140c93e20 name=FUN_140c93e20 */

undefined8
FUN_140c93e20(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

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
      uVar1 = FUN_140ca5b20(*local_res10,*local_res18,local_18[0],local_18);
      *local_res8 = uVar1;
      uVar1 = FUN_140ca5b20(local_res10[1],local_res18[1],local_18[0],local_18);
      local_res8[1] = uVar1;
      uVar1 = FUN_140ca5b20(local_res10[2],local_res18[2],local_18[0],local_18);
      local_res8[2] = uVar1;
      uVar1 = FUN_140ca5b20(local_res10[3],local_res18[3],local_18[0],local_18);
      local_res8[3] = uVar1;
      local_res10 = local_res10 + 4;
      local_res18 = local_res18 + 4;
      local_res8 = local_res8 + 4;
    }
    for (; local_res20 != 0; local_res20 = local_res20 - 1) {
      uVar1 = FUN_140ca5b20(*local_res10,*local_res18,local_18[0],local_18);
      *local_res8 = uVar1;
      local_res10 = local_res10 + 1;
      local_res18 = local_res18 + 1;
      local_res8 = local_res8 + 1;
    }
  }
  return local_18[0];
}


/* address=140c94050 name=FUN_140c94050 */

/* WARNING: Removing unreachable block (ram,0x000140c94171) */
/* WARNING: Removing unreachable block (ram,0x000140c94114) */
/* WARNING: Removing unreachable block (ram,0x000140c942c0) */

void FUN_140c94050(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3)

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


/* address=140c95360 name=FUN_140c95360 */

/* WARNING: Removing unreachable block (ram,0x000140c95481) */
/* WARNING: Removing unreachable block (ram,0x000140c95427) */
/* WARNING: Removing unreachable block (ram,0x000140c955cf) */

void FUN_140c95360(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3)

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


/* address=140c99fa0 name=FUN_140c99fa0 */

/* WARNING: Removing unreachable block (ram,0x000140c9a09f) */
/* WARNING: Removing unreachable block (ram,0x000140c9a045) */
/* WARNING: Removing unreachable block (ram,0x000140c9a1ed) */

void FUN_140c99fa0(undefined8 *param_1,ulonglong *param_2)

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


/* address=140c9dda0 name=FUN_140c9dda0 */

/* WARNING: Removing unreachable block (ram,0x000140c9de9f) */
/* WARNING: Removing unreachable block (ram,0x000140c9de42) */
/* WARNING: Removing unreachable block (ram,0x000140c9dfee) */

void FUN_140c9dda0(undefined8 *param_1,ulonglong *param_2)

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


/* address=140c9ed60 name=FUN_140c9ed60 */

bool FUN_140c9ed60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_140ca3470(param_1,param_3,param_2,param_3);
  return iVar1 < 0;
}


/* address=140c9edc0 name=FUN_140c9edc0 */

ulonglong FUN_140c9edc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_140ca9600(param_1,param_4,param_2);
  iVar1 = FUN_140c9ed60(param_1,param_3,param_4);
  return ~uVar2 & (longlong)iVar1;
}


/* address=140c9ee20 name=FUN_140c9ee20 */

undefined8
FUN_140c9ee20(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  int local_28;
  longlong local_20;
  ulonglong local_18 [3];
  
  iVar1 = FUN_140ca96d0(&local_20,local_18,param_2,param_3,param_4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_140c809d0(param_1 + local_20 * 8,0,(param_4 - local_20) * 8);
    local_28 = 100;
    do {
      local_28 = local_28 + -1;
      if (local_28 == 0) {
        FUN_140c6c4e0(3,0,0x73,s_D__a_1_s_target_release_build_bo_1413a60b0,0x10f);
        return 0;
      }
      FUN_140c8a370();
      FUN_140ca8fe0(param_1,local_20 << 3,param_5);
      FUN_140c8a380();
      *(ulonglong *)(param_1 + -8 + local_20 * 8) =
           *(ulonglong *)(param_1 + -8 + local_20 * 8) & local_18[0];
      iVar1 = FUN_140c9edc0(param_1,param_2,param_3,local_20);
    } while (iVar1 == 0);
    uVar2 = 1;
  }
  return uVar2;
}


/* address=140c9ef50 name=FUN_140c9ef50 */

undefined8 FUN_140c9ef50(ulonglong **param_1,int *param_2,ulonglong param_3,undefined8 *param_4)

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
  
  iVar1 = FUN_140ca96d0(&local_38,&local_30,param_3,*param_4,(longlong)*(int *)(param_4 + 1));
  if ((iVar1 == 0) || (iVar1 = FUN_140c927d0(param_1,CONCAT44(uStack_34,local_38)), iVar1 == 0)) {
    return 0;
  }
  if (CONCAT44(uStack_34,local_38) == 0) {
    FID_conflict__assert((wchar_t *)s_w_1413a61f8,(wchar_t *)s_D_1413a6120,0x139);
  }
  if (local_30 == 0) {
    FID_conflict__assert((wchar_t *)s_m_1413a62e8,(wchar_t *)s_D_1413a6210,0x13a);
  }
  if ((CONCAT44(uStack_34,local_38) == 1) && (local_30 >> 1 < param_3)) {
    FUN_140c6c4e0(3,0,0x6c,s_D__a_1_s_target_release_build_bo_1413a6300,0x13d);
    return 0;
  }
  FUN_140c8a370();
  FUN_140ca8a50(*param_1,CONCAT44(uStack_34,local_38) << 3);
  FUN_140c8a380();
  (*param_1)[CONCAT44(uStack_34,local_38) + -1] =
       (*param_1)[CONCAT44(uStack_34,local_38) + -1] & local_30;
  iVar1 = FUN_140c9edc0(*param_1,param_3,*param_4,CONCAT44(uStack_34,local_38));
  *param_2 = iVar1;
  local_28 = -(longlong)*param_2;
  local_18 = 0;
  local_20 = *param_1;
  uVar2 = FUN_140c807c0(local_28,0,param_3);
  **param_1 = *(ulonglong *)((longlong)local_20 + local_18) | uVar2;
  local_10 = *param_1;
  uVar2 = FUN_140c807c0(local_28,0xffffffffffffffff,local_30 >> 1);
  (*param_1)[CONCAT44(uStack_34,local_38) + -1] =
       local_10[CONCAT44(uStack_34,local_38) + -1] & uVar2;
  iVar1 = FUN_140c9edc0(*param_1,param_3,*param_4,CONCAT44(uStack_34,local_38));
  if (iVar1 == 0) {
    FID_conflict__assert((wchar_t *)s_b_1413a6450,(wchar_t *)s_D_1413a6370,0x150);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 1) = local_38;
  return 1;
}


/* address=140c9f1f0 name=FUN_140c9f1f0 */

void FUN_140c9f1f0(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_140c8cac0(param_1);
  if (iVar1 != 0) {
    FID_conflict__assert((wchar_t *)s___1413a4528,(wchar_t *)s_D_1413a4440,0x24);
  }
  iVar1 = FUN_140c8ab10(param_1);
  if (iVar1 != 0) {
    FID_conflict__assert((wchar_t *)s___1413a4638,(wchar_t *)s_D_1413a4550,0x25);
  }
  iVar1 = FUN_140c8cb90(param_1);
  if (iVar1 == 0) {
    FID_conflict__assert((wchar_t *)s_B_1413a4748,(wchar_t *)s_D_1413a4660,0x26);
  }
  FUN_140ca61e0(*(undefined8 *)*param_1);
  return;
}


/* address=140c9f2b0 name=FUN_140c9f2b0 */

undefined8 FUN_140c9f2b0(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_140c8cac0(param_3);
  if (iVar1 != 0) {
    FID_conflict__assert((wchar_t *)s___1413a4958,(wchar_t *)s_D_1413a4870,0xa4);
  }
  iVar1 = FUN_140c8ab10(param_3);
  if (iVar1 != 0) {
    FID_conflict__assert((wchar_t *)s___1413a4a68,(wchar_t *)s_D_1413a4980,0xa5);
  }
  iVar1 = FUN_140c8cb90(param_3);
  if (iVar1 == 0) {
    FID_conflict__assert((wchar_t *)s_B_1413a4b78,(wchar_t *)s_D_1413a4a90,0xa6);
  }
  FUN_140c8a9b0(param_1);
  uVar2 = FUN_140c8a920(param_3);
  if (uVar2 == 0) {
    FID_conflict__assert((wchar_t *)s_n_1413a4c88,(wchar_t *)s_D_1413a4ba0,0xab);
  }
  if (param_2 <= uVar2) {
    FID_conflict__assert((wchar_t *)s_p_1413a4d88,(wchar_t *)s_D_1413a4ca0,0xac);
  }
  if (uVar2 == 1) {
    uVar3 = 1;
  }
  else {
    iVar1 = FUN_140c8d180(param_1,uVar2 - 1);
    if ((iVar1 != 0) &&
       (iVar1 = FUN_140ca16d0(param_1,param_1,param_2 - (uVar2 - 1),param_3,param_4), iVar1 != 0)) {
      return 1;
    }
    uVar3 = 0;
  }
  return uVar3;
}


/* address=140c9f410 name=FUN_140c9f410 */

int FUN_140c9f410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  
  iVar2 = FUN_140c8cb90(param_2);
  if (iVar2 == 0) {
    FUN_140c6c4e0(3,0,0x68,s_D__a_1_s_target_release_build_bo_1413a3d60,0x49);
    local_68 = -2;
  }
  else {
    iVar2 = FUN_140c8ab10(param_2);
    if (iVar2 == 0) {
      local_68 = -2;
      FUN_140c8b0d0(param_3);
      local_60 = (ulonglong **)FUN_140c8b130(param_3);
      local_50 = (ulonglong **)FUN_140c8b130(param_3);
      if (((local_50 != (ulonglong **)0x0) && (lVar3 = FUN_140c8a7f0(local_60,param_1), lVar3 != 0))
         && (lVar3 = FUN_140c8a7f0(local_50,param_2), lVar3 != 0)) {
        local_68 = 1;
        while (ppuVar1 = local_60, iVar2 = FUN_140c8cac0(local_60), iVar2 == 0) {
          local_58 = 0;
          while (iVar2 = FUN_140c8d350(local_60,local_58), iVar2 == 0) {
            local_58 = local_58 + 1;
          }
          iVar2 = FUN_140c8d030(local_60,local_60,local_58);
          if (iVar2 == 0) {
            local_68 = -2;
            goto LAB_140c9f742;
          }
          if ((local_58 & 1) != 0) {
            if (*(int *)(local_50 + 1) == 0) {
              local_40 = 0;
            }
            else {
              local_40 = **local_50;
            }
            local_68 = local_68 * *(int *)(&DAT_140fdb688 + (local_40 & 7) * 4);
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
          iVar2 = FUN_140c8d9c0(local_50,local_50,local_60,param_3);
          if (iVar2 == 0) {
            local_68 = -2;
            goto LAB_140c9f742;
          }
          local_60 = local_50;
          local_50 = ppuVar1;
          *(undefined4 *)(ppuVar1 + 2) = 0;
        }
        iVar2 = FUN_140c8cae0(local_50);
        if (iVar2 == 0) {
          local_48 = 0;
        }
        else {
          local_48 = local_68;
        }
        local_68 = local_48;
      }
LAB_140c9f742:
      FUN_140c8b280(param_3);
    }
    else {
      FUN_140c6c4e0(3,0,0x6d,s_D__a_1_s_target_release_build_bo_1413a3dd0,0x4f);
      local_68 = -2;
    }
  }
  return local_68;
}


/* address=140c9f770 name=FUN_140c9f770 */

ulonglong FUN_140c9f770(longlong param_1,ulonglong param_2,ulonglong param_3)

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


/* address=140c9f7f0 name=FUN_140c9f7f0 */

undefined8 FUN_140c9f7f0(longlong **param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong **pplVar2;
  undefined8 uVar3;
  int local_18;
  
  pplVar2 = (longlong **)(param_2 + 0x18);
  if ((*(int *)(param_2 + 0x20) < 1) || (-1 < (*pplVar2)[*(int *)(param_2 + 0x20) + -1])) {
    uVar3 = FUN_140c90760(param_1,param_2,param_2,param_3);
  }
  else {
    iVar1 = FUN_140c927d0(param_1);
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


/* address=140c9f930 name=FUN_140c9f930 */

undefined4 FUN_140c9f930(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_140c8ab10(param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_140c92bd0(param_1,(longlong)*(int *)(param_2 + 0x20)), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=140c9f990 name=FUN_140c9f990 */

undefined2 FUN_140c9f990(longlong *param_1,ushort param_2)

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
    uVar3 = FUN_140c92460((longlong)(int)(param_2 - 1));
    if (0x10 < uVar3) {
      FID_conflict__assert((wchar_t *)s_p_1413a1a00,(wchar_t *)s_D_1413a1920,0x48);
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (1L << ((char)uVar3 + 0x20U & 0x3f)) + -1 + (ulonglong)param_2;
    uVar4 = SUB164(auVar1 / ZEXT216(param_2),0);
    local_28 = 0;
    local_24 = *(int *)(param_1 + 1);
    while (local_24 = local_24 + -1, -1 < local_24) {
      uVar2 = FUN_140ca3f80(local_28,*(ulonglong *)(*param_1 + (longlong)local_24 * 8) >> 0x20,
                            param_2,uVar3,uVar4);
      local_28 = FUN_140ca3f80(uVar2,*(ulonglong *)(*param_1 + (longlong)local_24 * 8) & 0xffffffff,
                               param_2,uVar3,uVar4);
    }
  }
  return local_28;
}


/* address=140c9fad0 name=FUN_140c9fad0 */

undefined4 FUN_140c9fad0(undefined8 param_1)

{
  int iVar1;
  undefined2 local_18 [12];
  
  iVar1 = FUN_140ca89c0(local_18,param_1);
  if ((iVar1 != 0) && (iVar1 = FUN_140c8cb30(param_1,local_18[0]), iVar1 == 0)) {
    return 1;
  }
  return 0;
}


/* address=140c9fb30 name=FUN_140c9fb30 */

undefined8 FUN_140c9fb30(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = param_2 + 0x18;
  lVar4 = FUN_140c8b130(param_3);
  *param_1 = lVar4;
  lVar4 = FUN_140c8b130(param_3);
  param_1[1] = lVar4;
  lVar4 = FUN_140c8b130(param_3);
  param_1[2] = lVar4;
  lVar4 = FUN_140c8b130(param_3);
  param_1[3] = lVar4;
  if ((((*param_1 != 0) && (param_1[1] != 0)) && (param_1[2] != 0)) && (param_1[3] != 0)) {
    uVar5 = FUN_140c8a8f0();
    iVar1 = FUN_140ca0550(*param_1,lVar3,uVar5);
    if (iVar1 != 0) {
      uVar2 = FUN_140c8d480(*param_1);
      *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
      iVar1 = FUN_140ca0110(param_1[1],*param_1,*(undefined4 *)((longlong)param_1 + 0x24),param_3);
      if (iVar1 != 0) {
        uVar2 = FUN_140c8a920(lVar3);
        *(undefined4 *)(param_1 + 4) = uVar2;
        iVar1 = FUN_140c9f7f0(param_1[2],param_2,param_3);
        if ((iVar1 != 0) && (iVar1 = FUN_140ca0550(param_1[3],lVar3,param_1[2]), iVar1 != 0)) {
          return 1;
        }
      }
    }
  }
  return 0;
}


/* address=140c9fca0 name=FUN_140c9fca0 */

undefined4
FUN_140c9fca0(longlong param_1,uint *param_2,undefined8 param_3,longlong param_4,undefined8 param_5)

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
  FUN_140c8b0d0(param_5);
  lVar4 = FUN_140c8b130(param_5);
  if (((lVar4 != 0) &&
      (iVar1 = FUN_140c91270(lVar4,param_3,*(undefined8 *)(param_1 + 8),param_4 + 0x18,param_5,
                             param_4), iVar1 != 0)) &&
     (iVar1 = FUN_140c90710(lVar4,lVar4,param_4,param_5), iVar1 != 0)) {
    uVar2 = FUN_140c8c870(lVar4,*(undefined8 *)(param_1 + 0x10));
    uVar3 = FUN_140c8c870(lVar4,*(undefined8 *)(param_1 + 0x18));
    local_20 = -(longlong)(int)(uVar2 | uVar3);
    local_38 = 1;
    while ((local_38 < *(int *)(param_1 + 0x20) &&
           (uVar5 = FUN_140c80790(local_38,*(undefined4 *)(param_1 + 0x24)),
           (uVar5 & ~local_20) == 0))) {
      iVar1 = FUN_140c907f0(lVar4,lVar4,lVar4,param_4,param_5);
      if (iVar1 == 0) goto LAB_140c9fea6;
      iVar1 = FUN_140c8c870(lVar4,*(undefined8 *)(param_1 + 0x18));
      local_20 = local_20 | -(longlong)iVar1;
      iVar1 = FUN_140c8c870(lVar4,*(undefined8 *)(param_1 + 0x10));
      if (((longlong)iVar1 & ~local_20) != 0) break;
      local_38 = local_38 + 1;
    }
    *param_2 = (uint)local_20 & 1;
    local_34 = 1;
  }
LAB_140c9fea6:
  FUN_140c8b280(param_5);
  return local_34;
}


/* address=140c9fed0 name=FUN_140c9fed0 */

void FUN_140c9fed0(longlong param_1,longlong param_2,longlong param_3)

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


/* address=140c9ff70 name=FUN_140c9ff70 */

void FUN_140c9ff70(longlong param_1,longlong param_2,uint param_3,ulonglong param_4)

{
  ulonglong uVar1;
  sbyte sVar2;
  ulonglong local_28;
  
  uVar1 = (ulonglong)param_3 / 0x40;
  if (uVar1 < param_4) {
    local_28 = uVar1;
    if (param_3 % 0x40 == 0) {
      FUN_140c80980(param_1,param_2 + uVar1 * 8,(param_4 - uVar1) * 8);
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
    FUN_140c809d0(param_1 + param_4 * 8 + uVar1 * -8,0,uVar1 << 3);
  }
  else {
    FUN_140c809d0(param_1,0,param_4 << 3);
  }
  return;
}


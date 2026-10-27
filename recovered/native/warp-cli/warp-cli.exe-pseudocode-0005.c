/* Reconstructed Ghidra pseudocode, not original Cloudflare source. */


/* address=140400000 name=FUN_140400000 */

void FUN_140400000(undefined *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  switch(*param_1) {
  case 2:
  case 4:
    lVar2 = *(longlong *)(param_1 + 8);
    if (lVar2 == 0) {
      return;
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
    uVar3 = 1;
    goto LAB_1404000dc;
  case 3:
    lVar1 = *(longlong *)(param_1 + 0x10);
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (lVar2 != 0) {
      puVar4 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar4[-1] != 0) {
          thunk_FUN_1402b9bb0(*puVar4,puVar4[-1],1);
        }
        puVar4 = puVar4 + 3;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    break;
  case 5:
    lVar1 = *(longlong *)(param_1 + 0x10);
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (lVar2 != 0) {
      puVar4 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar4[-1] != 0) {
          thunk_FUN_1402b9bb0(*puVar4,puVar4[-1],1);
        }
        puVar4 = puVar4 + 3;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    break;
  default:
    goto switchD_140400029_caseD_4;
  }
  if (*(longlong *)(param_1 + 8) == 0) {
switchD_140400029_caseD_4:
    return;
  }
  lVar2 = *(longlong *)(param_1 + 8) * 0x18;
  uVar3 = 8;
LAB_1404000dc:
  thunk_FUN_1402b9bb0(lVar1,lVar2,uVar3);
  return;
}


/* address=140400100 name=FUN_140400100 */

void FUN_140400100(longlong *param_1,ulonglong param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  uVar1 = param_1[2];
  uVar4 = param_2 - uVar1;
  if (param_2 < uVar1 || uVar4 == 0) {
    param_1[2] = param_2;
    lVar3 = uVar1 - param_2;
    if (lVar3 != 0) {
      puVar6 = (undefined8 *)(param_1[1] + param_2 * 0x18 + 8);
      do {
        lVar2 = puVar6[-1];
        if ((lVar2 != -1) && (lVar2 != 0)) {
          thunk_FUN_1402b9bb0(*puVar6,lVar2,1);
        }
        puVar6 = puVar6 + 3;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    lVar3 = *param_3;
    if ((lVar3 != -1) && (lVar3 != 0)) {
      thunk_FUN_1402b9bb0(param_3[1],lVar3,1);
      return;
    }
  }
  else {
    local_58 = param_3[2];
    local_68 = *(undefined4 *)param_3;
    uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_60 = *(undefined4 *)(param_3 + 1);
    uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
    local_70 = uVar1;
    if (*param_1 - uVar1 < uVar4) {
      FUN_1408d8920(local_68,uVar1,uVar4,8,0x18);
      local_70 = param_1[2];
    }
    puVar6 = (undefined8 *)(local_70 * 0x18 + param_1[1]);
    uVar5 = local_70;
    if (1 < uVar4) {
      uVar5 = (uVar4 + local_70) - 1;
      lVar3 = CONCAT44(uStack_64,local_68);
      local_50 = 0;
      local_48 = param_1;
      do {
        if (lVar3 == -1) {
          local_88 = 0xffffffffffffffff;
        }
        else {
          FUN_1402d8290(&local_88,&local_68);
        }
        puVar6[2] = local_78;
        *puVar6 = local_88;
        puVar6[1] = local_80;
        puVar6 = puVar6 + 3;
        local_50 = local_50 + -1;
        param_1 = local_48;
      } while ((uVar1 - param_2) + 1 != local_50);
    }
    puVar6[2] = local_58;
    *(undefined4 *)puVar6 = local_68;
    *(undefined4 *)((longlong)puVar6 + 4) = uStack_64;
    *(undefined4 *)(puVar6 + 1) = uStack_60;
    *(undefined4 *)((longlong)puVar6 + 0xc) = uStack_5c;
    param_1[2] = uVar5 + 1;
  }
  return;
}


/* address=140400360 name=FUN_140400360 */

void FUN_140400360(longlong *param_1,ulonglong param_2,longlong *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar6 = param_1[2];
  if ((ulonglong)(*param_1 - lVar6) < param_2) {
    FUN_1408d8920(param_1,lVar6,param_2,8,0x18);
    lVar6 = param_1[2];
  }
  puVar7 = (ulonglong *)(lVar6 * 0x18 + param_1[1]);
  if (param_2 < 2) {
    if (param_2 == 0) {
      param_1[2] = lVar6;
      if (*param_3 == 0) {
        return;
      }
      if (param_3[2] == 0) {
        return;
      }
      thunk_FUN_1402b9bb0(param_3[1],param_3[2],1);
      return;
    }
  }
  else {
    lVar6 = lVar6 + param_2 + -1;
    cVar1 = *(char *)param_3;
    lVar9 = 1 - param_2;
    lVar8 = 0;
    do {
      if (cVar1 == '\0') {
        uVar5 = param_3[1];
        param_2 = param_3[2];
      }
      else {
        uVar5 = FUN_1402d8560(param_3 + 1);
      }
      *puVar7 = (ulonglong)(cVar1 != '\0');
      puVar7[1] = uVar5;
      puVar7[2] = param_2;
      puVar7 = puVar7 + 3;
      lVar8 = lVar8 + -1;
    } while (lVar9 != lVar8);
  }
  puVar7[2] = param_3[2];
  uVar2 = *(undefined4 *)((longlong)param_3 + 4);
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
  *(undefined4 *)puVar7 = *(undefined4 *)param_3;
  *(undefined4 *)((longlong)puVar7 + 4) = uVar2;
  *(undefined4 *)(puVar7 + 1) = uVar3;
  *(undefined4 *)((longlong)puVar7 + 0xc) = uVar4;
  param_1[2] = lVar6 + 1;
  return;
}


/* address=140400880 name=FUN_140400880 */

undefined8 * FUN_140400880(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong local_60;
  longlong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_a0 = param_2 + 2;
  lVar5 = *param_2;
  lVar2 = param_2[1];
  do {
    if (lVar5 == lVar2) {
      *param_1 = 0;
      param_1[1] = 8;
      param_1[2] = 0;
      return param_1;
    }
    lVar5 = lVar5 + 0x18;
    *param_2 = lVar5;
    FUN_14041bbb0(&local_c0,&local_a0);
  } while (CONCAT44(uStack_bc,local_c0) == -1);
  FUN_140104360();
  puVar4 = (undefined4 *)thunk_FUN_1402b9b50(0x60,8);
  if (puVar4 != (undefined4 *)0x0) {
    *(undefined8 *)(puVar4 + 4) = local_b0;
    *puVar4 = local_c0;
    puVar4[1] = uStack_bc;
    puVar4[2] = uStack_b8;
    puVar4[3] = uStack_b4;
    local_70 = 4;
    local_60 = 1;
    local_78 = param_2[2];
    local_88 = *param_2;
    uStack_80 = *(undefined4 *)(param_2 + 1);
    uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
    uStack_68 = puVar4;
    do {
      lVar3 = local_60;
      local_a8 = &local_78;
      lVar2 = CONCAT44(uStack_7c,uStack_80);
      lVar5 = local_88;
      do {
        if (lVar5 == lVar2) {
          param_1[2] = local_60;
          *(undefined4 *)param_1 = (undefined4)local_70;
          *(undefined4 *)((longlong)param_1 + 4) = local_70._4_4_;
          *(undefined4 *)(param_1 + 1) = (undefined4)uStack_68;
          *(undefined4 *)((longlong)param_1 + 0xc) = uStack_68._4_4_;
          return param_1;
        }
        lVar5 = lVar5 + 0x18;
        local_88 = lVar5;
        FUN_14041bbb0(&local_a0,&local_a8);
      } while (local_a0 == (longlong *)0xffffffffffffffff);
      if (lVar3 == local_70) {
        local_50 = local_a0;
        FUN_1408d8920(&local_70,lVar3,1,8,0x18);
        puVar4 = uStack_68;
      }
      *(undefined8 *)(puVar4 + lVar3 * 6 + 4) = local_90;
      puVar1 = puVar4 + lVar3 * 6;
      *puVar1 = (undefined4)local_a0;
      puVar1[1] = local_a0._4_4_;
      puVar1[2] = uStack_98;
      puVar1[3] = uStack_94;
      local_60 = lVar3 + 1;
    } while( true );
  }
  FUN_1408e4f5b(8,0x60);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140400b20 name=FUN_140400b20 */

longlong * FUN_140400b20(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  longlong local_98;
  undefined8 *local_90;
  undefined4 *local_88;
  code *local_80;
  longlong local_78;
  undefined4 *local_70;
  longlong local_68;
  undefined4 local_5c [3];
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  puVar4 = (undefined4 *)*param_2;
  puVar2 = (undefined4 *)param_2[1];
  do {
    if (puVar4 == puVar2) {
LAB_140400b6f:
      *param_1 = 0;
      param_1[1] = 8;
      param_1[2] = 0;
      return param_1;
    }
    if (*(char *)(puVar4 + 1) != '\0') {
      puVar6 = puVar4 + 2;
      *param_2 = (longlong)puVar6;
      local_b0 = *puVar4;
      lVar3 = param_2[2];
      local_90 = &DAT_140299300;
      local_88 = &local_b0;
      local_80 = FUN_1402e8bb0;
      local_98 = lVar3;
      FUN_1402d7e40(&local_c8,&DAT_14096a640,&local_98);
      if (CONCAT44(uStack_c4,local_c8) != -1) {
        FUN_140104360();
        puVar4 = (undefined4 *)thunk_FUN_1402b9b50(0x60,8);
        if (puVar4 == (undefined4 *)0x0) {
          FUN_1408e4f5b(8,0x60);
          do {
            invalidInstructionException();
          } while( true );
        }
        *(undefined8 *)(puVar4 + 4) = local_b8;
        *puVar4 = local_c8;
        puVar4[1] = uStack_c4;
        puVar4[2] = uStack_c0;
        puVar4[3] = uStack_bc;
        local_78 = 4;
        local_68 = 1;
        local_70 = puVar4;
        if (puVar6 == puVar2) goto LAB_140400d05;
        lVar5 = 1;
        break;
      }
      goto LAB_140400b6f;
    }
    puVar4 = puVar4 + 2;
  } while( true );
  do {
    if (*(char *)(puVar6 + 1) != '\0') {
      local_5c[0] = *puVar6;
      local_90 = &DAT_140299300;
      local_88 = local_5c;
      local_80 = FUN_1402e8bb0;
      local_98 = lVar3;
      FUN_1402d7e40(&local_b0,&DAT_14096a640,&local_98);
      local_50 = CONCAT44(uStack_ac,local_b0);
      if (local_50 == -1) break;
      if (lVar5 == local_78) {
        FUN_1408d8920(&local_78,lVar5,1,8,0x18);
        puVar4 = local_70;
      }
      *(undefined8 *)(puVar4 + lVar5 * 6 + 4) = local_a0;
      puVar1 = puVar4 + lVar5 * 6;
      *puVar1 = local_b0;
      puVar1[1] = uStack_ac;
      puVar1[2] = uStack_a8;
      puVar1[3] = uStack_a4;
      lVar5 = lVar5 + 1;
      local_68 = lVar5;
    }
    puVar6 = puVar6 + 2;
  } while (puVar6 != puVar2);
LAB_140400d05:
  param_1[2] = local_68;
  *param_1 = local_78;
  param_1[1] = (longlong)local_70;
  return param_1;
}


/* address=140400e20 name=FUN_140400e20 */

undefined8 * FUN_140400e20(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  void *pvVar2;
  size_t sVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *local_e8;
  undefined **local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  longlong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  undefined local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar8 = *param_2;
  local_60 = param_2[1];
  local_d0 = param_1;
  if (lVar8 != local_60) {
    local_68 = param_2[2];
    if (*(longlong *)(local_68 + 0x150) != 0) {
      lVar1 = *(longlong *)(local_68 + 0x148);
      local_88 = *(longlong *)(local_68 + 0x150) * 0x270;
      do {
        pvVar2 = *(void **)(lVar8 + 8);
        sVar3 = *(size_t *)(lVar8 + 0x10);
        lVar8 = lVar8 + 0x18;
        lVar7 = lVar1;
        lVar9 = local_88;
        do {
          if ((*(size_t *)(lVar7 + 0x10) == sVar3) &&
             (iVar5 = memcmp(*(void **)(lVar7 + 8),pvVar2,sVar3), iVar5 == 0)) {
            *param_2 = lVar8;
            if ((*(int *)(lVar7 + 0x50) == 2) && (*(int *)(lVar7 + 0x260) == -1)) {
              FUN_1402a8750(&local_a8,lVar7);
              lVar1 = CONCAT44(uStack_a4,local_a8);
              lVar7 = local_98;
            }
            else {
              local_80 = 0;
              uStack_78 = 1;
              local_70 = 0;
              local_d8 = 0x60000020;
              local_e8 = &local_80;
              local_e0 = &PTR_LAB_14096a688;
              cVar4 = FUN_1402a9d30(lVar7,&local_e8);
              if (cVar4 != '\0') {
                FUN_1408e5230("a Display implementation returned an error unexpectedly",0x37,
                              &local_49,&DAT_14096a668,
                              &PTR_s__rustc_48a229ceaefd4985c50990b14_14096a740);
                goto LAB_14040121e;
              }
              lVar7 = local_70;
              local_a8 = (undefined4)local_80;
              uStack_a4 = local_80._4_4_;
              uStack_a0 = (undefined4)uStack_78;
              uStack_9c = uStack_78._4_4_;
              lVar1 = local_80;
            }
            if (lVar1 != -1) {
              lVar9 = CONCAT44(uStack_9c,uStack_a0);
              local_98 = lVar7;
              FUN_140104360();
              uStack_b8 = (longlong *)thunk_FUN_1402b9b50(0x60,8);
              if (uStack_b8 != (longlong *)0x0) {
                *uStack_b8 = lVar1;
                uStack_b8[1] = lVar9;
                uStack_b8[2] = lVar7;
                local_c0 = 4;
                local_88 = 1;
                local_58 = uStack_b8;
LAB_140400f91:
                local_b0 = local_88;
                if ((lVar8 != local_60) && (lVar1 = *(longlong *)(local_68 + 0x150), lVar1 != 0)) {
                  lVar7 = *(longlong *)(local_68 + 0x148);
                  do {
                    pvVar2 = *(void **)(lVar8 + 8);
                    sVar3 = *(size_t *)(lVar8 + 0x10);
                    lVar8 = lVar8 + 0x18;
                    lVar9 = lVar7;
                    lVar10 = lVar1 * 0x270;
                    do {
                      if ((*(size_t *)(lVar9 + 0x10) == sVar3) &&
                         (iVar5 = memcmp(*(void **)(lVar9 + 8),pvVar2,sVar3), iVar5 == 0)) {
                        if ((*(int *)(lVar9 + 0x50) == 2) && (*(int *)(lVar9 + 0x260) == -1)) {
                          FUN_1402a8750(&local_a8,lVar9);
                          lVar1 = local_98;
                          lVar7 = local_c8;
                          lVar9 = local_88;
                          lVar10 = CONCAT44(uStack_a4,local_a8);
                          plVar6 = local_58;
                        }
                        else {
                          local_80 = 0;
                          uStack_78 = 1;
                          local_70 = 0;
                          local_d8 = 0x60000020;
                          local_e8 = &local_80;
                          local_e0 = &PTR_LAB_14096a688;
                          cVar4 = FUN_1402a9d30(lVar9,&local_e8);
                          if (cVar4 != '\0') {
                            FUN_1408e5230("a Display implementation returned an error unexpectedly",
                                          0x37,&local_49,&DAT_14096a668,
                                          &PTR_s__rustc_48a229ceaefd4985c50990b14_14096a740);
                            goto LAB_14040121e;
                          }
                          lVar1 = local_70;
                          local_a8 = (undefined4)local_80;
                          uStack_a4 = local_80._4_4_;
                          uStack_a0 = (undefined4)uStack_78;
                          uStack_9c = uStack_78._4_4_;
                          lVar7 = local_c8;
                          lVar9 = local_88;
                          lVar10 = local_80;
                          plVar6 = local_58;
                        }
                        local_58 = (longlong *)lVar10;
                        if (local_58 == (longlong *)0xffffffffffffffff) goto LAB_140401107;
                        local_c8 = CONCAT44(uStack_9c,uStack_a0);
                        lVar10 = local_c8;
                        local_98 = lVar1;
                        if (lVar9 == local_c0) {
                          local_88 = lVar9;
                          FUN_1408d8920(&local_c0,lVar9,1,8,0x18);
                          plVar6 = uStack_b8;
                          lVar10 = local_c8;
                          lVar7 = local_c8;
                        }
                        local_c8 = lVar7;
                        plVar6[lVar9 * 3] = (longlong)local_58;
                        plVar6[lVar9 * 3 + 1] = lVar10;
                        plVar6[lVar9 * 3 + 2] = lVar1;
                        local_88 = lVar9 + 1;
                        local_58 = plVar6;
                        goto LAB_140400f91;
                      }
                      lVar9 = lVar9 + 0x270;
                      lVar10 = lVar10 + -0x270;
                    } while (lVar10 != 0);
                  } while (lVar8 != local_60);
                }
LAB_140401107:
                local_d0[2] = local_b0;
                *(undefined4 *)local_d0 = (undefined4)local_c0;
                *(undefined4 *)((longlong)local_d0 + 4) = local_c0._4_4_;
                *(undefined4 *)(local_d0 + 1) = (undefined4)uStack_b8;
                *(undefined4 *)((longlong)local_d0 + 0xc) = uStack_b8._4_4_;
                return local_d0;
              }
              local_68 = lVar9;
              local_60 = lVar1;
              FUN_1408e4f5b(8,0x60);
LAB_14040121e:
              do {
                invalidInstructionException();
              } while( true );
            }
            goto LAB_140401181;
          }
          lVar7 = lVar7 + 0x270;
          lVar9 = lVar9 + -0x270;
        } while (lVar9 != 0);
      } while (lVar8 != local_60);
    }
  }
LAB_140401181:
  *local_d0 = 0;
  local_d0[1] = 8;
  local_d0[2] = 0;
  return local_d0;
}


/* address=1404018a0 name=FUN_1404018a0 */

longlong * FUN_1404018a0(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_2 != param_3) {
    do {
      if (*(char *)(param_2 + 0x48) != '\x01') {
        lVar4 = *(longlong *)(param_2 + 0x10);
        lVar5 = param_2 + 0x50;
        if (lVar4 < 0) {
          uVar6 = 0;
LAB_14040191a:
          FUN_1408e4f5b(uVar6,lVar4);
          do {
            invalidInstructionException();
          } while( true );
        }
        if (lVar4 == 0) {
          lVar2 = 1;
        }
        else {
          uVar1 = *(undefined8 *)(param_2 + 8);
          FUN_140104360();
          uVar6 = 1;
          lVar2 = thunk_FUN_1402b9b50(lVar4,1);
          if (lVar2 == 0) goto LAB_14040191a;
          FUN_1408d7440(lVar2,uVar1,lVar4);
        }
        FUN_140104360();
        plVar3 = (longlong *)thunk_FUN_1402b9b50(0x60,8);
        if (plVar3 == (longlong *)0x0) {
          local_58 = lVar2;
          local_50 = lVar4;
          FUN_1408e4f5b(8,0x60);
          goto LAB_140401ad2;
        }
        *plVar3 = lVar4;
        plVar3[1] = lVar2;
        plVar3[2] = lVar4;
        local_70 = 4;
        local_60 = 1;
        local_68 = plVar3;
        if (lVar5 == param_3) goto LAB_140401a90;
        lVar4 = 1;
        goto LAB_1404019c0;
      }
      param_2 = param_2 + 0x50;
    } while (param_2 != param_3);
  }
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  return param_1;
LAB_1404019c0:
  if (*(char *)(lVar5 + 0x48) != '\x01') {
    lVar2 = *(longlong *)(lVar5 + 0x10);
    if (lVar2 < 0) {
      uVar6 = 0;
LAB_140401aae:
      FUN_1408e4f5b(uVar6,local_50);
LAB_140401ad2:
      do {
        invalidInstructionException();
      } while( true );
    }
    if (lVar2 == 0) {
      local_50 = 1;
    }
    else {
      uVar6 = *(undefined8 *)(lVar5 + 8);
      FUN_140104360();
      local_50 = thunk_FUN_1402b9b50(lVar2,1);
      if (local_50 == 0) {
        uVar6 = 1;
        local_50 = lVar2;
        goto LAB_140401aae;
      }
      FUN_1408d7440(local_50,uVar6,lVar2);
    }
    if (lVar4 == local_70) {
      local_58 = lVar2;
      FUN_1408d8920(&local_70,lVar4,1,8,0x18);
      plVar3 = local_68;
      lVar2 = local_58;
    }
    plVar3[lVar4 * 3] = lVar2;
    plVar3[lVar4 * 3 + 1] = local_50;
    plVar3[lVar4 * 3 + 2] = lVar2;
    lVar4 = lVar4 + 1;
    local_60 = lVar4;
  }
  lVar5 = lVar5 + 0x50;
  if (lVar5 == param_3) {
LAB_140401a90:
    param_1[2] = local_60;
    *param_1 = local_70;
    param_1[1] = (longlong)local_68;
    return param_1;
  }
  goto LAB_1404019c0;
}


/* address=140401bc0 name=FUN_140401bc0 */

undefined8 * FUN_140401bc0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  longlong local_60;
  undefined8 *local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  puVar14 = (undefined8 *)*param_2;
  lVar13 = param_2[3];
  lVar3 = param_2[0xb];
  local_60 = param_2[4];
  local_50 = param_2[10];
  if (puVar14 == (undefined8 *)0x0) {
LAB_140401c40:
    if ((lVar13 == 0) || (lVar13 == local_60)) {
      *param_2 = 2;
LAB_140401cc4:
      if ((local_50 == 0) || (local_50 == lVar3)) {
        if (param_2[5] == 2) goto LAB_1404021de;
        if ((int)param_2[5] == 1) {
          lVar10 = param_2[6];
          lVar9 = param_2[7];
          param_2[6] = 0;
          if (lVar10 != 0) {
            puVar14 = (undefined8 *)0x2;
            goto joined_r0x000140401c64;
          }
          param_2[5] = 0;
        }
        lVar9 = param_2[8];
        if ((lVar9 == 0) || (lVar9 == param_2[9])) {
LAB_1404021de:
          *param_1 = 0;
          param_1[1] = 8;
          param_1[2] = 0;
          return param_1;
        }
        param_2[8] = lVar9 + 0x20;
        lVar10 = *(longlong *)(lVar9 + 8);
        lVar9 = *(longlong *)(lVar9 + 0x10);
        puVar14 = (undefined8 *)0x2;
      }
      else {
        param_2[10] = local_50 + 0x308;
        lVar10 = *(longlong *)(local_50 + 8);
        lVar9 = *(longlong *)(local_50 + 0x10);
        lVar13 = *(longlong *)(local_50 + 0x100);
        local_60 = *(longlong *)(local_50 + 0x108) * 0x20 + lVar13;
        *param_2 = 1;
        param_2[2] = lVar9;
        param_2[3] = lVar13;
        param_2[4] = local_60;
        param_2[1] = 0;
        puVar14 = (undefined8 *)0x1;
        local_50 = local_50 + 0x308;
      }
    }
    else {
      param_2[3] = lVar13 + 0x20;
      lVar10 = *(longlong *)(lVar13 + 8);
      lVar9 = *(longlong *)(lVar13 + 0x10);
      puVar14 = (undefined8 *)0x0;
      lVar13 = lVar13 + 0x20;
    }
  }
  else {
    if (puVar14 == (undefined8 *)0x2) goto LAB_140401cc4;
    lVar10 = param_2[1];
    lVar9 = param_2[2];
    param_2[1] = 0;
    if (lVar10 == 0) {
      *param_2 = 0;
      goto LAB_140401c40;
    }
  }
joined_r0x000140401c64:
  if (lVar9 < 0) {
    uVar8 = 0;
LAB_140401c2c:
    FUN_1408e4f5b(uVar8,lVar9);
    do {
      invalidInstructionException();
    } while( true );
  }
  local_68 = puVar14;
  if (lVar9 == 0) {
    local_58 = (undefined8 *)0x1;
    if (puVar14 == (undefined8 *)0x2) goto LAB_140401dda;
LAB_140401d87:
    if (local_68 != (undefined8 *)0x1) {
      if (lVar13 != 0) {
        uVar6 = (ulonglong)(local_60 - lVar13) >> 5;
        goto LAB_140401dca;
      }
      goto LAB_140401dda;
    }
    uVar6 = (ulonglong)(param_2[1] != 0);
    if (lVar13 != 0) {
      uVar6 = uVar6 + ((ulonglong)(local_60 - lVar13) >> 5);
      lVar10 = param_2[5];
      goto joined_r0x000140401db6;
    }
LAB_140401dca:
    lVar10 = param_2[5];
    if (lVar10 != 2) goto LAB_140401dea;
LAB_140401e24:
    uVar7 = 0;
  }
  else {
    FUN_140104360();
    uVar8 = 1;
    local_58 = (undefined8 *)thunk_FUN_1402b9b50(lVar9,1);
    if (local_58 == (undefined8 *)0x0) goto LAB_140401c2c;
    FUN_1408d7440(local_58,lVar10,lVar9);
    if (local_68 != (undefined8 *)0x2) goto LAB_140401d87;
LAB_140401dda:
    uVar6 = 0;
    lVar10 = param_2[5];
joined_r0x000140401db6:
    if (lVar10 == 2) goto LAB_140401e24;
LAB_140401dea:
    lVar12 = param_2[8];
    if ((int)lVar10 == 1) {
      uVar7 = (ulonglong)(param_2[6] != 0);
      if (lVar12 != 0) {
        uVar7 = uVar7 + ((ulonglong)(param_2[9] - lVar12) >> 5);
      }
    }
    else {
      if (lVar12 == 0) goto LAB_140401e24;
      uVar7 = (ulonglong)(param_2[9] - lVar12) >> 5;
    }
  }
  uVar7 = uVar7 + uVar6;
  uVar6 = 3;
  if (3 < uVar7) {
    uVar6 = uVar7;
  }
  if (uVar7 < 0x555555555555555) {
    lVar12 = (uVar6 * 8 + 8) * 3;
    local_78 = lVar10;
    if (lVar12 == 0) {
      plVar4 = (longlong *)&DAT_00000008;
      local_98 = 0;
    }
    else {
      local_70 = param_2;
      FUN_140104360();
      uVar8 = 8;
      plVar4 = (longlong *)thunk_FUN_1402b9b50(lVar12,8);
      if (plVar4 == (longlong *)0x0) goto LAB_140401e48;
      local_98 = uVar6 + 1;
      param_2 = local_70;
    }
    *plVar4 = lVar9;
    plVar4[1] = (longlong)local_58;
    plVar4[2] = lVar9;
    local_88 = 1;
    lVar10 = param_2[1];
    local_70 = (undefined8 *)param_2[2];
    lVar9 = param_2[6];
    puVar14 = (undefined8 *)param_2[7];
    lVar12 = param_2[8];
    local_80 = param_2[9];
    lVar17 = 0x28;
    lVar11 = local_78;
    puVar15 = local_68;
    lVar16 = lVar10;
    uStack_90 = plVar4;
    if (local_68 != (undefined8 *)0x0) goto LAB_14040207f;
LAB_1404020aa:
    do {
      lVar10 = lVar16;
      lVar18 = lVar9;
      if (lVar13 == 0) goto LAB_1404020d0;
      if (lVar13 == local_60) goto LAB_1404020d0;
      plVar1 = (longlong *)(lVar13 + 8);
      puVar5 = (undefined8 *)(lVar13 + 0x10);
      lVar13 = lVar13 + 0x20;
      puVar15 = (undefined8 *)0x0;
      puVar5 = (undefined8 *)*puVar5;
      lVar18 = *plVar1;
LAB_140402190:
      lVar10 = lVar16;
      lVar16 = local_88;
      if ((longlong)puVar5 < 0) {
        uVar8 = 0;
LAB_14040219b:
        FUN_1408e4f5b(uVar8,param_2);
        goto LAB_1404021a1;
      }
      local_78 = lVar12;
      local_68 = puVar5;
      if (puVar5 == (undefined8 *)0x0) {
        param_2 = (undefined8 *)0x1;
      }
      else {
        FUN_140104360();
        param_2 = local_68;
        puVar5 = (undefined8 *)thunk_FUN_1402b9b50(local_68,1);
        if (puVar5 == (undefined8 *)0x0) {
          uVar8 = 1;
          goto LAB_14040219b;
        }
        local_58 = puVar5;
        FUN_1408d7440(puVar5,lVar18,param_2);
        param_2 = local_58;
      }
      if (lVar16 == local_98) {
        if (puVar15 == (undefined8 *)0x2) {
LAB_140401fa4:
          uVar6 = 0;
        }
        else if (puVar15 == (undefined8 *)0x1) {
          uVar6 = (ulonglong)(lVar10 != 0);
          if (lVar13 != 0) {
            uVar6 = uVar6 + ((ulonglong)(local_60 - lVar13) >> 5);
          }
        }
        else {
          if (lVar13 == 0) goto LAB_140401fa4;
          uVar6 = (ulonglong)(local_60 - lVar13) >> 5;
        }
        if (lVar11 == 2) {
LAB_140401fe5:
          uVar7 = 0;
        }
        else if (lVar11 == 1) {
          uVar7 = (ulonglong)(lVar9 != 0);
          if (local_78 != 0) {
            uVar7 = uVar7 + ((ulonglong)(local_80 - local_78) >> 5);
          }
        }
        else {
          if (local_78 == 0) goto LAB_140401fe5;
          uVar7 = (ulonglong)(local_80 - local_78) >> 5;
        }
        local_58 = param_2;
        FUN_1408d8920(&local_98,lVar16,uVar6 + uVar7 + 1,8,0x18);
        plVar4 = uStack_90;
        param_2 = local_58;
      }
      *(undefined8 **)((longlong)plVar4 + lVar17 + -0x10) = local_68;
      *(undefined8 **)((longlong)plVar4 + lVar17 + -8) = param_2;
      *(undefined8 **)((longlong)plVar4 + lVar17) = local_68;
      local_88 = lVar16 + 1;
      lVar17 = lVar17 + 0x18;
      lVar12 = local_78;
      lVar16 = lVar10;
    } while (puVar15 == (undefined8 *)0x0);
LAB_14040207f:
    lVar18 = lVar9;
    if (puVar15 != (undefined8 *)0x2) {
      lVar16 = 0;
      if (lVar10 == 0) goto LAB_1404020aa;
      puVar5 = local_70;
      lVar16 = 0;
      lVar18 = lVar10;
      goto LAB_140402190;
    }
LAB_1404020d0:
    lVar9 = lVar18;
    if ((local_50 == 0) || (local_50 == lVar3)) {
      lVar16 = lVar10;
      if (lVar11 != 0) {
        if (lVar11 == 2) goto LAB_14040220c;
        if (lVar18 != 0) {
          puVar15 = (undefined8 *)0x2;
          lVar11 = 1;
          lVar9 = 0;
          puVar5 = puVar14;
          goto LAB_140402190;
        }
        lVar9 = 0;
      }
      if ((lVar12 == 0) || (lVar12 == local_80)) {
LAB_14040220c:
        param_1[2] = local_88;
        *(undefined4 *)param_1 = (undefined4)local_98;
        *(undefined4 *)((longlong)param_1 + 4) = local_98._4_4_;
        *(undefined4 *)(param_1 + 1) = (undefined4)uStack_90;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_90._4_4_;
        return param_1;
      }
      plVar1 = (longlong *)(lVar12 + 8);
      puVar5 = (undefined8 *)(lVar12 + 0x10);
      lVar12 = lVar12 + 0x20;
      puVar15 = (undefined8 *)0x2;
      lVar11 = 0;
      puVar5 = (undefined8 *)*puVar5;
      lVar18 = *plVar1;
    }
    else {
      plVar1 = (longlong *)(local_50 + 8);
      local_70 = *(undefined8 **)(local_50 + 0x10);
      lVar13 = *(longlong *)(local_50 + 0x100);
      plVar2 = (longlong *)(local_50 + 0x108);
      local_50 = local_50 + 0x308;
      local_60 = *plVar2 * 0x20 + lVar13;
      puVar15 = (undefined8 *)0x1;
      puVar5 = local_70;
      lVar16 = 0;
      lVar18 = *plVar1;
    }
    goto LAB_140402190;
  }
  uVar8 = 0;
  lVar12 = lVar10;
LAB_140401e48:
  local_50 = lVar9;
  FUN_1408e4f5b(uVar8,lVar12);
LAB_1404021a1:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140402310 name=FUN_140402310 */

undefined8 * FUN_140402310(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  longlong *plVar13;
  undefined *puVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  int *piVar19;
  int *piVar20;
  undefined8 uVar21;
  longlong *plVar22;
  longlong lVar23;
  undefined4 local_f8;
  undefined4 uStack_f4;
  longlong *plStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 *local_80;
  longlong local_78;
  int *local_70;
  longlong local_68;
  undefined *local_60;
  undefined *local_58;
  undefined local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_90 = param_2;
  if (param_2[4] == 0) {
LAB_140402372:
    plVar22 = local_90;
    lVar15 = *local_90;
    if (lVar15 == 0) {
      *param_1 = 0;
      param_1[1] = 8;
      param_1[2] = 0;
      return param_1;
    }
    puVar1 = (undefined8 *)local_90[1];
    puVar6 = (undefined8 *)local_90[3];
    puVar4 = puVar1;
    if (puVar1 == puVar6) {
LAB_1404023a3:
      *param_1 = 0;
      param_1[1] = 8;
      param_1[2] = 0;
      if (puVar6 != puVar4) {
        uVar10 = (ulonglong)((longlong)puVar6 - (longlong)puVar4) / 0x18;
        plVar13 = puVar4 + 2;
        do {
          if ((plVar13[-2] != 0) && (*plVar13 != 0)) {
            thunk_FUN_1402b9bb0(plVar13[-1],*plVar13,1);
          }
          plVar13 = plVar13 + 3;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      if (plVar22[2] != 0) {
        thunk_FUN_1402b9bb0(lVar15,plVar22[2] * 0x18,8);
      }
      return param_1;
    }
    puVar4 = puVar1 + 3;
    local_90[1] = (longlong)puVar4;
    puVar12 = (undefined *)*puVar1;
    if (puVar12 == (undefined *)0x2) goto LAB_1404023a3;
    plStack_f0 = (longlong *)puVar1[1];
    uVar21 = puVar1[2];
LAB_14040247c:
    uVar7 = ((ulonglong)((longlong)puVar6 - (longlong)puVar4) >> 3) * -0x5555555555555555;
    uVar10 = 3;
    if (3 < uVar7) {
      uVar10 = uVar7;
    }
    lVar15 = (uVar10 * 8 + 8) * 3;
    if (0x7fffffffffffffe0 < (ulonglong)((longlong)puVar6 - (longlong)puVar4)) {
      uVar11 = 0;
      local_70 = (int *)uVar21;
      local_68 = (longlong)plStack_f0;
      local_58 = puVar12;
      goto LAB_1404024ca;
    }
    uVar18 = plStack_f0;
    if (lVar15 == 0) {
      local_80 = (undefined8 *)&DAT_00000008;
      puVar14 = (undefined *)0x0;
      plVar22 = local_90;
      goto LAB_140402527;
    }
    puVar14 = (undefined *)(uVar10 + 1);
    local_58 = puVar12;
  }
  else {
    local_49 = 0;
    FUN_1404200d0(&local_f8,param_2 + 4);
    puVar12 = (undefined *)CONCAT44(uStack_f4,local_f8);
    if (puVar12 == (undefined *)0x2) {
      param_2[4] = 0;
      goto LAB_140402372;
    }
    uVar21 = CONCAT44(uStack_e4,local_e8);
    if (*local_90 != 0) {
      puVar4 = (undefined8 *)local_90[1];
      puVar6 = (undefined8 *)local_90[3];
      goto LAB_14040247c;
    }
    lVar15 = 0x60;
    puVar14 = &DAT_00000004;
    uVar18 = plStack_f0;
    local_58 = puVar12;
  }
  plVar22 = local_90;
  FUN_140104360();
  uVar11 = 8;
  local_80 = (undefined8 *)thunk_FUN_1402b9b50(lVar15,8);
  puVar12 = local_58;
  if (local_80 != (undefined8 *)0x0) {
LAB_140402527:
    *local_80 = puVar12;
    local_80[1] = uVar18;
    local_80[2] = uVar21;
    uStack_a8 = local_80;
    local_a0 = (undefined *)0x1;
    local_f8 = *(undefined4 *)plVar22;
    uStack_f4 = *(undefined4 *)((longlong)plVar22 + 4);
    lVar16 = *plVar22;
    plStack_f0 = (longlong *)plVar22[1];
    local_e8 = *(undefined4 *)(plVar22 + 2);
    uStack_e4 = *(undefined4 *)((longlong)plVar22 + 0x14);
    uStack_e0 = *(undefined4 *)(plVar22 + 3);
    uStack_dc = *(undefined4 *)((longlong)plVar22 + 0x1c);
    plVar13 = (longlong *)plVar22[3];
    piVar19 = (int *)plVar22[4];
    uStack_d0 = *(undefined4 *)(plVar22 + 5);
    uStack_cc = *(undefined4 *)((longlong)plVar22 + 0x2c);
    local_70 = (int *)plVar22[5];
    local_c8 = plVar22[6];
    uStack_c0 = *(undefined4 *)(plVar22 + 7);
    uStack_bc = *(undefined4 *)((longlong)plVar22 + 0x3c);
    lVar15 = plVar22[7];
    local_b8 = plVar22[8];
    piVar5 = piVar19;
    local_d8 = piVar19;
    local_b0 = puVar14;
    local_88 = plVar13;
    local_78 = lVar16;
    local_68 = local_b8;
    do {
      puVar12 = local_a0;
      if (piVar19 != (int *)0x0) {
        lVar9 = local_c8;
        if (piVar19 != local_70) {
          piVar5 = piVar19 + 6;
          lVar16 = local_c8;
          local_60 = local_a0;
          if (local_c8 != lVar15) {
            do {
              piVar20 = piVar5;
              lVar9 = lVar16 + 0x68;
              if ((*(char *)(lVar16 + 0x61) != '\0') &&
                 (lVar17 = *(longlong *)(local_68 + 0x150), lVar17 != 0)) {
                lVar2 = *(longlong *)(local_68 + 0x148);
                local_58 = *(undefined **)(piVar19 + 2);
                puVar14 = *(undefined **)(piVar19 + 4);
                lVar23 = 0;
                do {
                  if ((*(undefined **)(lVar2 + 0x10 + lVar23) == puVar14) &&
                     (puVar8 = local_58,
                     iVar3 = memcmp(*(void **)(lVar2 + 8 + lVar23),local_58,(size_t)puVar14),
                     lVar16 = local_78, iVar3 == 0)) {
                    if ((*(byte *)(lVar2 + 0x268 + lVar23) & 4) == 0) {
                      piVar5 = piVar20;
                      local_d8 = piVar20;
                      local_c8 = lVar9;
                      if (*piVar19 == 1) {
                        local_98 = local_78;
                        local_58 = (undefined *)FUN_1402d8560(piVar19 + 2);
                        lVar9 = 1;
                        puVar12 = local_60;
                        puVar14 = puVar8;
                        plVar13 = local_88;
                      }
                      else {
                        lVar9 = 0;
                        puVar12 = local_60;
                        plVar13 = local_88;
                      }
                      goto LAB_140402705;
                    }
                    break;
                  }
                  lVar23 = lVar23 + 0x270;
                } while (lVar17 * 0x270 - lVar23 != 0);
              }
              puVar12 = local_60;
              lVar16 = local_78;
              plVar13 = local_88;
              if (piVar20 == local_70) goto LAB_1404026c0;
              piVar5 = piVar20 + 6;
              piVar19 = piVar20;
              lVar16 = lVar9;
              if (lVar9 == lVar15) break;
            } while( true );
          }
          local_98 = local_78;
          local_d8 = piVar5;
          local_c8 = lVar9;
          FUN_1408e5210(&PTR_s_C__Users_VssAdministrator__cargo_140939a58);
          goto LAB_1404028a4;
        }
LAB_1404026c0:
        local_c8 = lVar9;
        local_d8 = (int *)0x0;
        piVar5 = (int *)0x0;
      }
      if (lVar16 == 0) goto LAB_140402848;
      plVar22 = plStack_f0;
      if (plStack_f0 == plVar13) {
LAB_1404027cc:
        plStack_f0 = plVar22;
        if (plVar13 != plStack_f0) {
          uVar10 = (ulonglong)((longlong)plVar13 - (longlong)plStack_f0) / 0x18;
          plVar22 = plStack_f0 + 2;
          do {
            if ((plVar22[-2] != 0) && (*plVar22 != 0)) {
              thunk_FUN_1402b9bb0(plVar22[-1],*plVar22,1);
            }
            plVar22 = plVar22 + 3;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        if (CONCAT44(uStack_e4,local_e8) != 0) {
          thunk_FUN_1402b9bb0(lVar16,CONCAT44(uStack_e4,local_e8) * 0x18,8);
        }
LAB_140402848:
        param_1[2] = local_a0;
        *(undefined4 *)param_1 = (undefined4)local_b0;
        *(undefined4 *)((longlong)param_1 + 4) = local_b0._4_4_;
        *(undefined4 *)(param_1 + 1) = (undefined4)uStack_a8;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_a8._4_4_;
        return param_1;
      }
      lVar9 = *plStack_f0;
      plVar22 = plStack_f0 + 3;
      if (lVar9 == 2) goto LAB_1404027cc;
      local_58 = (undefined *)plStack_f0[1];
      piVar20 = (int *)0x0;
      puVar14 = (undefined *)plStack_f0[2];
      plStack_f0 = plStack_f0 + 3;
LAB_140402705:
      piVar19 = piVar20;
      if (puVar12 == local_b0) {
        if (lVar16 == 0) {
          lVar17 = 0;
        }
        else {
          lVar17 = ((ulonglong)((longlong)plVar13 - (longlong)plStack_f0) >> 3) *
                   -0x5555555555555555;
        }
        local_60 = puVar14;
        FUN_1408d8920(&local_b0,puVar12,lVar17 + 1,8,0x18);
        local_80 = uStack_a8;
        puVar14 = local_60;
        piVar19 = piVar5;
      }
      local_80[(longlong)puVar12 * 3] = lVar9;
      local_80[(longlong)puVar12 * 3 + 1] = local_58;
      local_80[(longlong)puVar12 * 3 + 2] = puVar14;
      local_a0 = puVar12 + 1;
    } while( true );
  }
  local_80 = (undefined8 *)0x0;
  local_70 = (int *)uVar21;
  local_68 = uVar18;
LAB_1404024ca:
  FUN_1408e4f5b(uVar11,lVar15);
LAB_1404028a4:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140402a40 name=FUN_140402a40 */

undefined8 * FUN_140402a40(undefined8 *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
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
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_14041fcd0(&local_98);
  if (local_98 == 2) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
  }
  else {
    local_60 = local_98;
    local_58 = local_90;
    local_50 = local_88;
    FUN_14041fdc0(&local_118,param_2);
    uVar1 = CONCAT44(uStack_114,local_118) + 1;
    uVar3 = 0xffffffffffffffff;
    if (uVar1 != 0) {
      uVar3 = uVar1;
    }
    uVar1 = 4;
    if (4 < uVar3) {
      uVar1 = uVar3;
    }
    lVar4 = uVar1 * 0x18;
    if (0x555555555555555 < uVar3) {
      uVar5 = 0;
LAB_140402afc:
      FUN_1408e4f5b(uVar5,lVar4);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_80 = param_1;
    if (lVar4 == 0) {
      plVar2 = (longlong *)&DAT_00000008;
      uVar1 = 0;
    }
    else {
      FUN_140104360();
      uVar5 = 8;
      plVar2 = (longlong *)thunk_FUN_1402b9b50(lVar4,8);
      if (plVar2 == (longlong *)0x0) goto LAB_140402afc;
    }
    *plVar2 = local_60;
    plVar2[1] = local_58;
    plVar2[2] = local_50;
    local_68 = 1;
    local_c8 = param_2[0x14];
    uStack_c4 = param_2[0x15];
    uStack_c0 = param_2[0x16];
    uStack_bc = param_2[0x17];
    local_d8 = param_2[0x10];
    uStack_d4 = param_2[0x11];
    uStack_d0 = param_2[0x12];
    uStack_cc = param_2[0x13];
    local_118 = *param_2;
    uStack_114 = param_2[1];
    uStack_110 = param_2[2];
    uStack_10c = param_2[3];
    local_108 = param_2[4];
    uStack_104 = param_2[5];
    uStack_100 = param_2[6];
    uStack_fc = param_2[7];
    local_f8 = param_2[8];
    uStack_f4 = param_2[9];
    uStack_f0 = param_2[10];
    uStack_ec = param_2[0xb];
    local_e8 = param_2[0xc];
    uStack_e4 = param_2[0xd];
    uStack_e0 = param_2[0xe];
    uStack_dc = param_2[0xf];
    local_78 = uVar1;
    uStack_70 = plVar2;
    while( true ) {
      uVar3 = local_68;
      FUN_14041fcd0(&local_b0,&local_118);
      local_60 = local_b0;
      if (local_b0 == 2) break;
      local_58 = local_a8;
      local_50 = local_a0;
      if (uVar3 == local_78) {
        FUN_14041fdc0(&local_98,&local_118);
        lVar4 = local_98 + 1;
        if (lVar4 == 0) {
          lVar4 = -1;
        }
        FUN_1408d8920(&local_78,uVar3,lVar4,8,0x18);
        plVar2 = uStack_70;
      }
      plVar2[uVar3 * 3] = local_60;
      plVar2[uVar3 * 3 + 1] = local_58;
      plVar2[uVar3 * 3 + 2] = local_50;
      local_68 = uVar3 + 1;
    }
    local_80[2] = local_68;
    *(undefined4 *)local_80 = (undefined4)local_78;
    *(undefined4 *)((longlong)local_80 + 4) = local_78._4_4_;
    *(undefined4 *)(local_80 + 1) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)local_80 + 0xc) = uStack_70._4_4_;
    param_1 = local_80;
  }
  return param_1;
}


/* address=140402d50 name=FUN_140402d50 */

undefined8 * FUN_140402d50(undefined8 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  bool bVar6;
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
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  undefined4 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  puVar5 = param_2 + 8;
  plVar2 = (longlong *)FUN_14040d410(param_2,puVar5,param_2 + 10);
  local_80 = param_1;
  if (plVar2 == (longlong *)0x0) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
  }
  else {
    lVar1 = *plVar2;
    if (lVar1 != 1) {
      uVar3 = plVar2[1];
      puVar5 = (undefined4 *)plVar2[2];
    }
    else {
      uVar3 = FUN_1402d8560(plVar2 + 1);
    }
    FUN_140104360();
    puVar4 = (ulonglong *)thunk_FUN_1402b9b50(0x60,8);
    if (puVar4 == (ulonglong *)0x0) {
      local_60 = uVar3;
      local_58 = lVar1;
      local_50 = puVar5;
      FUN_1408e4f5b(8,0x60);
      do {
        invalidInstructionException();
      } while( true );
    }
    *puVar4 = (ulonglong)(lVar1 == 1);
    puVar4[1] = uVar3;
    puVar4[2] = (ulonglong)puVar5;
    local_78 = 4;
    local_68 = 1;
    local_88 = *(undefined8 *)(param_2 + 0xc);
    local_b8 = *param_2;
    uStack_b4 = param_2[1];
    uStack_b0 = param_2[2];
    uStack_ac = param_2[3];
    local_a8 = param_2[4];
    uStack_a4 = param_2[5];
    uStack_a0 = param_2[6];
    uStack_9c = param_2[7];
    local_98 = param_2[8];
    uStack_94 = param_2[9];
    uStack_90 = param_2[10];
    uStack_8c = param_2[0xb];
    uStack_70 = puVar4;
    while (lVar1 = local_68, puVar5 = &local_98,
          plVar2 = (longlong *)FUN_14040d410(&local_b8,&local_98,&uStack_90),
          plVar2 != (longlong *)0x0) {
      local_60 = *plVar2;
      bVar6 = local_60 != 1;
      if (bVar6) {
        local_58 = plVar2[1];
        local_50 = (undefined4 *)plVar2[2];
      }
      else {
        local_58 = FUN_1402d8560(plVar2 + 1);
        local_50 = puVar5;
      }
      if (lVar1 == local_78) {
        FUN_1408d8920(&local_78,lVar1,1,8,0x18);
        puVar4 = uStack_70;
      }
      puVar4[lVar1 * 3] = (ulonglong)!bVar6;
      puVar4[lVar1 * 3 + 1] = local_58;
      puVar4[lVar1 * 3 + 2] = (ulonglong)local_50;
      local_68 = lVar1 + 1;
    }
    local_80[2] = local_68;
    *(undefined4 *)local_80 = (undefined4)local_78;
    *(undefined4 *)((longlong)local_80 + 4) = local_78._4_4_;
    *(undefined4 *)(local_80 + 1) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)local_80 + 0xc) = uStack_70._4_4_;
  }
  return local_80;
}


/* address=140403450 name=FUN_140403450 */

undefined8 * FUN_140403450(undefined8 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  FUN_14041ff20(&local_98);
  if (CONCAT44(uStack_94,local_98) == 2) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
  }
  else {
    FUN_140104360();
    plVar2 = (longlong *)thunk_FUN_1402b9b50(0x60,8);
    if (plVar2 == (longlong *)0x0) {
      FUN_1408e4f5b(8,0x60);
      do {
        invalidInstructionException();
      } while( true );
    }
    *plVar2 = CONCAT44(uStack_94,local_98);
    plVar2[1] = CONCAT44(uStack_8c,uStack_90);
    plVar2[2] = CONCAT44(uStack_84,local_88);
    local_70 = 4;
    local_60 = 1;
    local_78 = *(undefined8 *)(param_2 + 8);
    local_98 = *param_2;
    uStack_94 = param_2[1];
    uStack_90 = param_2[2];
    uStack_8c = param_2[3];
    local_88 = param_2[4];
    uStack_84 = param_2[5];
    uStack_80 = param_2[6];
    uStack_7c = param_2[7];
    uStack_68 = plVar2;
    while( true ) {
      lVar1 = local_60;
      FUN_14041ff20(&local_b0,&local_98);
      if (local_b0 == 2) break;
      lVar3 = local_a0;
      lVar4 = local_a8;
      lVar5 = local_b0;
      if (lVar1 == local_70) {
        local_58 = local_b0;
        local_50 = local_a8;
        local_48 = local_a0;
        FUN_1408d8920(&local_70,lVar1,1,8,0x18);
        lVar3 = local_48;
        lVar4 = local_50;
        plVar2 = uStack_68;
        lVar5 = local_58;
      }
      plVar2[lVar1 * 3] = lVar5;
      plVar2[lVar1 * 3 + 1] = lVar4;
      plVar2[lVar1 * 3 + 2] = lVar3;
      local_60 = lVar1 + 1;
    }
    param_1[2] = local_60;
    *(undefined4 *)param_1 = (undefined4)local_70;
    *(undefined4 *)((longlong)param_1 + 4) = local_70._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_68;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_68._4_4_;
  }
  return param_1;
}


/* address=1404036c0 name=FUN_1404036c0 */

longlong * FUN_1404036c0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  byte *pbVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar3 = param_2[1];
  if (*param_2 != lVar3) {
    pbVar4 = (byte *)param_2[2];
    lVar5 = *param_2;
    do {
      lVar7 = lVar5 + 0x270;
      if ((((*(int *)(lVar5 + 0x50) == 2) && (*(int *)(lVar5 + 0x260) == -1)) &&
          ((*(longlong *)(lVar5 + 0x80) == 2 || ((int)*(longlong *)(lVar5 + 0x80) == -1)))) &&
         (uVar2 = *(uint *)(lVar5 + 0x268), (uVar2 & 4) == 0)) {
        bVar1 = *pbVar4;
        if ((uVar2 & 0x2000) == 0) {
          if ((uVar2 & 0x1000) != 0) goto joined_r0x00014040370a;
        }
        else {
          bVar1 = (uVar2 & 0x1000) == 0 & (bVar1 ^ 1);
joined_r0x00014040370a:
          if ((bVar1 == 0) && ((uVar2 & 8) == 0)) goto LAB_140403710;
        }
        *param_2 = lVar7;
        FUN_140104360();
        local_50 = (longlong *)thunk_FUN_1402b9b50(0x20,8);
        if (local_50 == (longlong *)0x0) {
          FUN_1408e4f5b(8,0x20);
          do {
            invalidInstructionException();
          } while( true );
        }
        *local_50 = lVar5;
        local_58 = 4;
        local_48 = 1;
        if (lVar7 == lVar3) goto LAB_14040387b;
        plVar6 = local_50;
        goto LAB_1404037f0;
      }
LAB_140403710:
      lVar5 = lVar7;
    } while (lVar7 != lVar3);
  }
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  return param_1;
LAB_1404037f0:
  lVar5 = local_48;
  lVar8 = lVar7 + 0x270;
  if ((((*(int *)(lVar7 + 0x50) == 2) && (*(int *)(lVar7 + 0x260) == -1)) &&
      ((*(longlong *)(lVar7 + 0x80) == 2 || ((int)*(longlong *)(lVar7 + 0x80) == -1)))) &&
     (uVar2 = *(uint *)(lVar7 + 0x268), (uVar2 & 4) == 0)) {
    bVar1 = *pbVar4;
    if ((uVar2 & 0x2000) == 0) {
      if ((uVar2 & 0x1000) != 0) goto joined_r0x0001404037cb;
    }
    else {
      bVar1 = (uVar2 & 0x1000) == 0 & (bVar1 ^ 1);
joined_r0x0001404037cb:
      if ((bVar1 == 0) && ((uVar2 & 8) == 0)) goto joined_r0x0001404037ea;
    }
    if (local_48 == local_58) {
      FUN_1408d8920(&local_58,local_48,1,8,8);
      plVar6 = local_50;
    }
    plVar6[lVar5] = lVar7;
    local_48 = lVar5 + 1;
  }
joined_r0x0001404037ea:
  lVar7 = lVar8;
  if (lVar8 == lVar3) {
LAB_14040387b:
    param_1[2] = local_48;
    *param_1 = local_58;
    param_1[1] = (longlong)local_50;
    return param_1;
  }
  goto LAB_1404037f0;
}


/* address=140403920 name=FUN_140403920 */

longlong * FUN_140403920(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  byte *pbVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar3 = param_2[1];
  if (*param_2 != lVar3) {
    pbVar4 = (byte *)param_2[2];
    lVar5 = *param_2;
    do {
      lVar7 = lVar5 + 0x270;
      if ((((*(int *)(lVar5 + 0x50) != 2) || (*(int *)(lVar5 + 0x260) != -1)) &&
          ((*(longlong *)(lVar5 + 0x80) == 2 || ((int)*(longlong *)(lVar5 + 0x80) == -1)))) &&
         (uVar2 = *(uint *)(lVar5 + 0x268), (uVar2 & 4) == 0)) {
        bVar1 = *pbVar4;
        if ((uVar2 & 0x2000) == 0) {
          if ((uVar2 & 0x1000) != 0) goto joined_r0x00014040396a;
        }
        else {
          bVar1 = (uVar2 & 0x1000) == 0 & (bVar1 ^ 1);
joined_r0x00014040396a:
          if ((bVar1 == 0) && ((uVar2 & 8) == 0)) goto LAB_140403970;
        }
        *param_2 = lVar7;
        FUN_140104360();
        local_50 = (longlong *)thunk_FUN_1402b9b50(0x20,8);
        if (local_50 == (longlong *)0x0) {
          FUN_1408e4f5b(8,0x20);
          do {
            invalidInstructionException();
          } while( true );
        }
        *local_50 = lVar5;
        local_58 = 4;
        local_48 = 1;
        if (lVar7 == lVar3) goto LAB_140403adb;
        plVar6 = local_50;
        goto LAB_140403a50;
      }
LAB_140403970:
      lVar5 = lVar7;
    } while (lVar7 != lVar3);
  }
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  return param_1;
LAB_140403a50:
  lVar5 = local_48;
  lVar8 = lVar7 + 0x270;
  if ((((*(int *)(lVar7 + 0x50) != 2) || (*(int *)(lVar7 + 0x260) != -1)) &&
      ((*(longlong *)(lVar7 + 0x80) == 2 || ((int)*(longlong *)(lVar7 + 0x80) == -1)))) &&
     (uVar2 = *(uint *)(lVar7 + 0x268), (uVar2 & 4) == 0)) {
    bVar1 = *pbVar4;
    if ((uVar2 & 0x2000) == 0) {
      if ((uVar2 & 0x1000) != 0) goto joined_r0x000140403a2b;
    }
    else {
      bVar1 = (uVar2 & 0x1000) == 0 & (bVar1 ^ 1);
joined_r0x000140403a2b:
      if ((bVar1 == 0) && ((uVar2 & 8) == 0)) goto joined_r0x000140403a4a;
    }
    if (local_48 == local_58) {
      FUN_1408d8920(&local_58,local_48,1,8,8);
      plVar6 = local_50;
    }
    plVar6[lVar5] = lVar7;
    local_48 = lVar5 + 1;
  }
joined_r0x000140403a4a:
  lVar7 = lVar8;
  if (lVar8 == lVar3) {
LAB_140403adb:
    param_1[2] = local_48;
    *param_1 = local_58;
    param_1[1] = (longlong)local_50;
    return param_1;
  }
  goto LAB_140403a50;
}


/* address=140403b80 name=FUN_140403b80 */

longlong * FUN_140403b80(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  void **ppvVar4;
  byte *pbVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar3 = param_2[1];
  if (*param_2 != lVar3) {
    ppvVar4 = (void **)param_2[2];
    pbVar5 = (byte *)param_2[3];
    lVar6 = *param_2;
    do {
      lVar9 = lVar6 + 0x270;
      if ((((*(longlong *)(lVar6 + 0x80) != -1) && ((int)*(longlong *)(lVar6 + 0x80) != 2)) &&
          (*(void **)(lVar6 + 0x90) == ppvVar4[1])) &&
         ((iVar8 = memcmp(*(void **)(lVar6 + 0x88),*ppvVar4,(size_t)*(void **)(lVar6 + 0x90)),
          iVar8 == 0 && (uVar2 = *(uint *)(lVar6 + 0x268), (uVar2 & 4) == 0)))) {
        bVar1 = *pbVar5;
        if ((uVar2 & 0x2000) == 0) {
          if ((uVar2 & 0x1000) != 0) goto joined_r0x000140403bd1;
        }
        else {
          bVar1 = (uVar2 & 0x1000) == 0 & (bVar1 ^ 1);
joined_r0x000140403bd1:
          if ((bVar1 == 0) && ((uVar2 & 8) == 0)) goto LAB_140403be0;
        }
        *param_2 = lVar9;
        FUN_140104360();
        local_58 = (longlong *)thunk_FUN_1402b9b50(0x20,8);
        if (local_58 == (longlong *)0x0) {
          FUN_1408e4f5b(8,0x20);
          do {
            invalidInstructionException();
          } while( true );
        }
        *local_58 = lVar6;
        local_60 = 4;
        local_50 = 1;
        plVar10 = local_58;
        lVar6 = local_50;
        goto joined_r0x000140403c8a;
      }
LAB_140403be0:
      lVar6 = lVar9;
    } while (lVar9 != lVar3);
  }
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  return param_1;
joined_r0x000140403c8a:
  do {
    lVar7 = lVar9;
    if (lVar7 == lVar3) {
      param_1[2] = local_50;
      *param_1 = local_60;
      param_1[1] = (longlong)local_58;
      return param_1;
    }
    lVar9 = lVar7 + 0x270;
  } while ((((*(longlong *)(lVar7 + 0x80) == -1) || ((int)*(longlong *)(lVar7 + 0x80) == 2)) ||
           (*(void **)(lVar7 + 0x90) != ppvVar4[1])) ||
          ((iVar8 = memcmp(*(void **)(lVar7 + 0x88),*ppvVar4,(size_t)*(void **)(lVar7 + 0x90)),
           iVar8 != 0 || (uVar2 = *(uint *)(lVar7 + 0x268), (uVar2 & 4) != 0))));
  bVar1 = *pbVar5;
  if ((uVar2 & 0x2000) == 0) {
    if ((uVar2 & 0x1000) != 0) goto joined_r0x000140403cab;
    goto LAB_140403d25;
  }
  bVar1 = (uVar2 & 0x1000) == 0 & (bVar1 ^ 1);
joined_r0x000140403cab:
  if ((bVar1 != 0) || ((uVar2 & 8) != 0)) {
LAB_140403d25:
    if (lVar6 == local_60) {
      FUN_1408d8920(&local_60,lVar6,1,8,8);
      plVar10 = local_58;
    }
    plVar10[lVar6] = lVar7;
    local_50 = lVar6 + 1;
    lVar6 = local_50;
  }
  goto joined_r0x000140403c8a;
}


/* address=140403e20 name=FUN_140403e20 */

longlong * FUN_140403e20(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (param_2 != param_3) {
    param_2 = param_2 + 0x270;
    do {
      if ((*(int *)(param_2 + -0x220) == 2) && (*(int *)(param_2 + -0x10) == -1)) {
        FUN_140104360();
        local_48 = (longlong *)thunk_FUN_1402b9b50(0x20,8);
        if (local_48 == (longlong *)0x0) {
          FUN_1408e4f5b(8,0x20);
          do {
            invalidInstructionException();
          } while( true );
        }
        *local_48 = param_2 + -0x270;
        local_50 = 4;
        local_40 = 1;
        if (param_2 != param_3) {
          plVar2 = local_48;
          do {
            lVar1 = local_40;
            lVar3 = param_2 + 0x270;
            if ((*(int *)(param_2 + 0x50) == 2) && (*(int *)(param_2 + 0x260) == -1)) {
              if (local_40 == local_50) {
                FUN_1408d8920(&local_50,local_40,1,8,8);
                plVar2 = local_48;
              }
              plVar2[lVar1] = param_2;
              local_40 = lVar1 + 1;
            }
            param_2 = lVar3;
          } while (lVar3 != param_3);
        }
        param_1[2] = local_40;
        *param_1 = local_50;
        param_1[1] = (longlong)local_48;
        return param_1;
      }
      bVar4 = param_2 != param_3;
      param_2 = param_2 + 0x270;
    } while (bVar4);
  }
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  return param_1;
}


/* address=140403fd0 name=FUN_140403fd0 */

longlong * FUN_140403fd0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar2 = *param_2;
  lVar3 = param_2[1];
  if (lVar2 != lVar3) {
    pcVar4 = (char *)param_2[2];
    if (*pcVar4 == '\0') {
      do {
        lVar6 = lVar2 + 0x270;
        uVar1 = *(uint *)(lVar2 + 0x268);
        if ((uVar1 & 4) == 0) {
          if ((uVar1 & 0x1000) == 0) {
            if ((uVar1 & 2) == 0) goto LAB_14040408b;
          }
          else if ((uVar1 & 10) == 8) goto LAB_14040408b;
        }
        lVar2 = lVar6;
      } while (lVar6 != lVar3);
    }
    else {
      do {
        lVar6 = lVar2 + 0x270;
        uVar1 = *(uint *)(lVar2 + 0x268);
        if ((uVar1 & 4) == 0) {
          if ((uVar1 & 0x2000) == 0) {
            if ((uVar1 & 2) == 0) goto LAB_14040408b;
          }
          else if ((uVar1 & 10) == 8) goto LAB_14040408b;
        }
        lVar2 = lVar6;
      } while (lVar6 != lVar3);
    }
  }
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  return param_1;
LAB_14040408b:
  *param_2 = lVar6;
  FUN_140104360();
  plVar5 = (longlong *)thunk_FUN_1402b9b50(0x20,8);
  if (plVar5 == (longlong *)0x0) {
    FUN_1408e4f5b(8,0x20);
    do {
      invalidInstructionException();
    } while( true );
  }
  *plVar5 = lVar6 + -0x270;
  local_60 = 4;
  local_50 = 1;
  local_58 = plVar5;
  if (lVar6 == lVar3) {
LAB_1404041a0:
    param_1[2] = local_50;
    *param_1 = local_60;
    param_1[1] = (longlong)local_58;
    return param_1;
  }
LAB_1404040db:
  lVar2 = local_50;
  lVar7 = lVar6;
  if (*pcVar4 == '\0') {
    do {
      lVar6 = lVar7 + 0x270;
      uVar1 = *(uint *)(lVar7 + 0x268);
      if ((uVar1 & 4) == 0) {
        if ((uVar1 & 0x1000) == 0) {
          if ((uVar1 & 2) == 0) goto LAB_14040415a;
        }
        else if ((uVar1 & 10) == 8) goto LAB_14040415a;
      }
      lVar7 = lVar6;
      if (lVar6 == lVar3) goto LAB_1404041a0;
    } while( true );
  }
  do {
    lVar6 = lVar7 + 0x270;
    uVar1 = *(uint *)(lVar7 + 0x268);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x2000) == 0) {
        if ((uVar1 & 2) == 0) break;
      }
      else if ((uVar1 & 10) == 8) break;
    }
    lVar7 = lVar6;
    if (lVar6 == lVar3) goto LAB_1404041a0;
  } while( true );
LAB_14040415a:
  if (local_50 == local_60) {
    FUN_1408d8920(&local_60,local_50,1,8,8);
    plVar5 = local_58;
  }
  plVar5[lVar2] = lVar6 + -0x270;
  local_50 = lVar2 + 1;
  if (lVar6 == lVar3) goto LAB_1404041a0;
  goto LAB_1404040db;
}


/* address=140404250 name=FUN_140404250 */

longlong * FUN_140404250(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (param_2 != param_3) {
    param_2 = param_2 + 0x270;
    do {
      if ((*(int *)(param_2 + -0x220) != 2) || (*(int *)(param_2 + -0x10) != -1)) {
        FUN_140104360();
        local_48 = (longlong *)thunk_FUN_1402b9b50(0x20,8);
        if (local_48 == (longlong *)0x0) {
          FUN_1408e4f5b(8,0x20);
          do {
            invalidInstructionException();
          } while( true );
        }
        *local_48 = param_2 + -0x270;
        local_50 = 4;
        local_40 = 1;
        if (param_2 != param_3) {
          plVar2 = local_48;
          do {
            lVar1 = local_40;
            lVar3 = param_2 + 0x270;
            if ((*(int *)(param_2 + 0x50) != 2) || (*(int *)(param_2 + 0x260) != -1)) {
              if (local_40 == local_50) {
                FUN_1408d8920(&local_50,local_40,1,8,8);
                plVar2 = local_48;
              }
              plVar2[lVar1] = param_2;
              local_40 = lVar1 + 1;
            }
            param_2 = lVar3;
          } while (lVar3 != param_3);
        }
        param_1[2] = local_40;
        *param_1 = local_50;
        param_1[1] = (longlong)local_48;
        return param_1;
      }
      bVar4 = param_2 != param_3;
      param_2 = param_2 + 0x270;
    } while (bVar4);
  }
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  return param_1;
}


/* address=140404430 name=FUN_140404430 */

undefined4 * FUN_140404430(undefined4 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 *local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar2 = param_2[1] - *param_2;
  if (0x7ffffffffffffff8 < uVar2) {
    uVar1 = 0;
LAB_140404468:
    FUN_1408e4f5b(uVar1,uVar2);
    do {
      invalidInstructionException();
    } while( true );
  }
  if (param_2[1] == *param_2) {
    local_50 = 8;
    local_48 = 0;
  }
  else {
    FUN_140104360();
    uVar1 = 8;
    local_50 = thunk_FUN_1402b9b50(uVar2,8);
    if (local_50 == 0) goto LAB_140404468;
    local_48 = (uVar2 >> 3) * -0x5555555555555555;
  }
  local_60 = &local_38;
  local_38 = 0;
  local_58 = 0;
  uStack_40 = local_50;
  FUN_14040d650(param_2,&local_60);
  *(undefined8 *)(param_1 + 4) = local_38;
  *param_1 = (undefined4)local_48;
  param_1[1] = local_48._4_4_;
  param_1[2] = (undefined4)uStack_40;
  param_1[3] = uStack_40._4_4_;
  return param_1;
}


/* address=140404540 name=FUN_140404540 */

ulonglong * FUN_140404540(ulonglong *param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  longlong *local_88;
  undefined *local_80;
  longlong local_78;
  ulonglong *local_70;
  ulonglong local_68;
  undefined4 *local_60;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar2 = param_3 - param_2;
  if (uVar2 < 0x7ffffffffffffff9) {
    if (param_3 == param_2) {
      local_68 = 0;
      local_60 = (undefined4 *)&DAT_00000008;
      uVar2 = 0;
    }
    else {
      local_70 = param_1;
      FUN_140104360();
      uVar3 = 8;
      puVar1 = (undefined4 *)thunk_FUN_1402b9b50(uVar2,8);
      if (puVar1 == (undefined4 *)0x0) goto LAB_14040458e;
      uVar2 = uVar2 / 0x18;
      local_50 = 0;
      local_68 = uVar2;
      local_60 = puVar1;
      do {
        local_88 = &local_78;
        local_80 = &LAB_14018b030;
        local_78 = param_2;
        FUN_1402d7e40(&local_a0,&DAT_14096cdd8,&local_88);
        *(undefined8 *)(puVar1 + 4) = local_90;
        *puVar1 = local_a0;
        puVar1[1] = uStack_9c;
        puVar1[2] = uStack_98;
        puVar1[3] = uStack_94;
        local_50 = local_50 + 1;
        param_2 = param_2 + 0x18;
        puVar1 = puVar1 + 6;
        param_1 = local_70;
      } while (uVar2 != local_50);
    }
    param_1[2] = uVar2;
    *param_1 = local_68;
    param_1[1] = (ulonglong)local_60;
    return param_1;
  }
  uVar3 = 0;
LAB_14040458e:
  FUN_1408e4f5b(uVar3,uVar2);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1404046c0 name=FUN_1404046c0 */

undefined4 * FUN_1404046c0(undefined4 *param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar3 = (ulonglong)(param_3 - param_2) / 0x18;
  uVar5 = uVar3 << 5;
  if (0x7ffffffffffffff8 < uVar5 || 0xbfffffffffffffe8 < (ulonglong)(param_3 - param_2)) {
    uVar4 = 0;
LAB_14040472e:
    FUN_1408e4f5b(uVar4,uVar5);
    do {
      invalidInstructionException();
    } while( true );
  }
  if (uVar5 == 0) {
    local_68 = 0;
    uStack_60 = (undefined4 *)&DAT_00000008;
    puVar1 = uStack_60;
  }
  else {
    FUN_140104360();
    uVar4 = 8;
    puVar1 = (undefined4 *)thunk_FUN_1402b9b50(uVar5,8);
    local_68 = uVar3;
    if (puVar1 == (undefined4 *)0x0) goto LAB_14040472e;
  }
  uStack_60 = puVar1;
  if (param_2 == param_3) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(param_2 + 0x10);
    local_50 = 0;
    do {
      FUN_1402d7820(&local_88,puVar2[-1],*puVar2);
      puVar1[4] = local_78;
      puVar1[5] = uStack_74;
      puVar1[6] = uStack_70;
      puVar1[7] = uStack_6c;
      *puVar1 = local_88;
      puVar1[1] = uStack_84;
      puVar1[2] = uStack_80;
      puVar1[3] = uStack_7c;
      local_50 = local_50 + 1;
      puVar2 = puVar2 + 3;
      puVar1 = puVar1 + 8;
    } while (uVar3 != local_50);
  }
  *(ulonglong *)(param_1 + 4) = uVar3;
  *param_1 = (undefined4)local_68;
  param_1[1] = local_68._4_4_;
  param_1[2] = (undefined4)uStack_60;
  param_1[3] = uStack_60._4_4_;
  return param_1;
}


/* address=140404840 name=FUN_140404840 */

undefined4 * FUN_140404840(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (param_2[1] - *param_2 == 0) {
    lVar3 = 0;
    local_50 = 8;
  }
  else {
    uVar2 = (ulonglong)(param_2[1] - *param_2) >> 3;
    lVar3 = uVar2 * -0x5555555555555555;
    lVar1 = uVar2 * 0x5555555555555558;
    FUN_140104360();
    local_50 = thunk_FUN_1402b9b50(lVar1,8);
    if (local_50 == 0) {
      FUN_1408e4f5b(8,lVar1);
      do {
        invalidInstructionException();
      } while( true );
    }
  }
  local_60 = &local_38;
  local_38 = 0;
  local_58 = 0;
  local_48 = lVar3;
  uStack_40 = local_50;
  FUN_14040d8a0(param_2,&local_60);
  *(undefined8 *)(param_1 + 4) = local_38;
  *param_1 = (undefined4)local_48;
  param_1[1] = local_48._4_4_;
  param_1[2] = (undefined4)uStack_40;
  param_1[3] = uStack_40._4_4_;
  return param_1;
}


/* address=140404940 name=FUN_140404940 */

ulonglong * FUN_140404940(ulonglong *param_1,longlong param_2)

{
  longlong **pplVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  longlong **pplVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong local_78;
  ulonglong local_70;
  
  uVar5 = *(ulonglong *)(param_2 + 0x10);
  lVar2 = uVar5 * 0x18;
  if (uVar5 < 0x555555555555556) {
    if (lVar2 == 0) {
      local_78 = 0;
      local_70 = 8;
    }
    else {
      lVar20 = *(longlong *)(param_2 + 8);
      FUN_140104360();
      uVar14 = 8;
      local_70 = thunk_FUN_1402b9b50(lVar2,8);
      if (local_70 == 0) goto LAB_14040497e;
      local_78 = uVar5;
      if (uVar5 != 0) {
        lVar2 = lVar20 + uVar5 * 0x18;
        uVar16 = uVar5;
        lVar19 = 0;
        do {
          if (lVar20 == lVar2) break;
          uVar6 = *(ulonglong *)(lVar20 + 0x10);
          uVar17 = uVar6 << 5;
          if (0x7ffffffffffffff8 < uVar17 || uVar6 >> 0x3b != 0) {
            uVar14 = 0;
LAB_140404b1d:
            FUN_1408e4f5b(uVar14);
LAB_140404b23:
            do {
              invalidInstructionException();
            } while( true );
          }
          if (uVar17 == 0) {
            lVar12 = 8;
          }
          else {
            pplVar15 = *(longlong ***)(lVar20 + 8);
            FUN_140104360();
            lVar12 = thunk_FUN_1402b9b50(uVar17,8);
            if (lVar12 == 0) {
              uVar14 = 8;
              goto LAB_140404b1d;
            }
            if (uVar6 != 0) {
              uVar13 = 0;
              uVar18 = uVar6;
              do {
                if (uVar17 == uVar13) break;
                plVar7 = *pplVar15;
                LOCK();
                lVar4 = *plVar7;
                *plVar7 = *plVar7 + 1;
                UNLOCK();
                if (*plVar7 == 0 || SCARRY8(lVar4,1) != *plVar7 < 0) goto LAB_140404b23;
                uVar18 = uVar18 - 1;
                plVar8 = pplVar15[1];
                *(longlong **)(lVar12 + uVar13) = plVar7;
                *(longlong **)(lVar12 + 8 + uVar13) = plVar8;
                pplVar1 = pplVar15 + 2;
                uVar9 = *(undefined4 *)((longlong)pplVar15 + 0x14);
                uVar10 = *(undefined4 *)(pplVar15 + 3);
                uVar11 = *(undefined4 *)((longlong)pplVar15 + 0x1c);
                pplVar15 = pplVar15 + 4;
                puVar3 = (undefined4 *)(lVar12 + 0x10 + uVar13);
                *puVar3 = *(undefined4 *)pplVar1;
                puVar3[1] = uVar9;
                puVar3[2] = uVar10;
                puVar3[3] = uVar11;
                uVar13 = uVar13 + 0x20;
              } while (uVar18 != 0);
            }
          }
          uVar16 = uVar16 - 1;
          lVar20 = lVar20 + 0x18;
          *(ulonglong *)(local_70 + lVar19 * 0x18) = uVar6;
          *(longlong *)(local_70 + 8 + lVar19 * 0x18) = lVar12;
          *(ulonglong *)(local_70 + 0x10 + lVar19 * 0x18) = uVar6;
          lVar19 = lVar19 + 1;
        } while (uVar16 != 0);
      }
    }
    param_1[2] = uVar5;
    *param_1 = local_78;
    param_1[1] = local_70;
    return param_1;
  }
  uVar14 = 0;
LAB_14040497e:
  FUN_1408e4f5b(uVar14,lVar2);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140404b70 name=FUN_140404b70 */

ulonglong * FUN_140404b70(ulonglong *param_1,longlong param_2)

{
  undefined uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong local_80;
  longlong local_50;
  
  uVar2 = *(ulonglong *)(param_2 + 0x10);
  lVar13 = uVar2 * 0x18;
  if (uVar2 < 0x555555555555556) {
    if (lVar13 == 0) {
      uVar5 = 8;
      uVar8 = 0;
    }
    else {
      lVar15 = *(longlong *)(param_2 + 8);
      FUN_140104360();
      uVar10 = 8;
      uVar5 = thunk_FUN_1402b9b50(lVar13,8);
      if (uVar5 == 0) goto LAB_140404bae;
      if (uVar2 == 0) {
        uVar8 = 0;
      }
      else {
        uVar6 = uVar2 * 3;
        lVar13 = uVar2 * 0x18 + lVar15;
        local_80 = 0;
        uVar14 = uVar2;
        do {
          uVar8 = uVar2;
          if (lVar15 == lVar13) break;
          uVar3 = *(ulonglong *)(lVar15 + 0x10);
          uVar9 = uVar3 << 5;
          if (0x7ffffffffffffff8 < uVar9 || uVar3 >> 0x3b != 0) {
            uVar10 = 0;
LAB_140404da2:
            FUN_1408e4f5b(uVar10,uVar6);
LAB_140404dda:
            do {
              invalidInstructionException();
            } while( true );
          }
          if (uVar9 == 0) {
            uVar6 = 8;
            uVar12 = 0;
          }
          else {
            lVar16 = *(longlong *)(lVar15 + 8);
            FUN_140104360();
            uVar6 = thunk_FUN_1402b9b50(uVar9,8);
            if (uVar6 == 0) {
              uVar10 = 8;
              uVar6 = uVar9;
              goto LAB_140404da2;
            }
            if (uVar3 == 0) {
              uVar12 = 0;
            }
            else {
              uVar11 = 0;
              uVar7 = 0;
              do {
                uVar12 = uVar3;
                if (uVar9 == uVar11) break;
                uVar7 = uVar7 + 1;
                lVar4 = *(longlong *)(lVar16 + 0x10);
                if (lVar4 < 0) {
                  uVar10 = 0;
LAB_140404dd4:
                  FUN_1408e4f5b(uVar10,local_50);
                  goto LAB_140404dda;
                }
                if (lVar4 == 0) {
                  local_50 = 1;
                }
                else {
                  uVar10 = *(undefined8 *)(lVar16 + 8);
                  FUN_140104360();
                  local_50 = thunk_FUN_1402b9b50(lVar4,1);
                  if (local_50 == 0) {
                    uVar10 = 1;
                    local_50 = lVar4;
                    goto LAB_140404dd4;
                  }
                  FUN_1408d7440(local_50,uVar10,lVar4);
                }
                uVar1 = *(undefined *)(lVar16 + 0x18);
                *(longlong *)(uVar6 + uVar11) = lVar4;
                *(longlong *)(uVar6 + 8 + uVar11) = local_50;
                *(longlong *)(uVar6 + 0x10 + uVar11) = lVar4;
                *(undefined *)(uVar6 + 0x18 + uVar11) = uVar1;
                uVar11 = uVar11 + 0x20;
                lVar16 = lVar16 + 0x20;
              } while (uVar3 != uVar7);
            }
          }
          uVar14 = uVar14 - 1;
          lVar15 = lVar15 + 0x18;
          *(ulonglong *)(uVar5 + local_80 * 0x18) = uVar12;
          *(ulonglong *)(uVar5 + 8 + local_80 * 0x18) = uVar6;
          *(ulonglong *)(uVar5 + 0x10 + local_80 * 0x18) = uVar3;
          local_80 = local_80 + 1;
        } while (uVar14 != 0);
      }
    }
    *param_1 = uVar8;
    param_1[1] = uVar5;
    param_1[2] = uVar2;
    return param_1;
  }
  uVar10 = 0;
LAB_140404bae:
  FUN_1408e4f5b(uVar10,lVar13);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140404f70 name=FUN_140404f70 */

void FUN_140404f70(undefined4 *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined local_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 *local_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar12 = *(ulonglong *)(param_2 + 0x10);
  uVar5 = uVar12 * 0x20;
  if (uVar5 < 0x7ffffffffffffff9 && uVar12 >> 0x3b == 0) {
    puVar10 = *(ulonglong **)(param_2 + 8);
    local_60 = param_1;
    local_58 = uVar12;
    if (uVar5 == 0) {
      lVar2 = 8;
      uVar9 = 0;
    }
    else {
      FUN_140104360();
      uVar11 = 8;
      lVar2 = thunk_FUN_1402b9b50(uVar5,8);
      uVar9 = uVar12;
      if (lVar2 == 0) goto LAB_140404fbc;
    }
    puVar6 = puVar10 + uVar12 * 4;
    local_50 = 0;
    uVar12 = uVar9;
    local_78 = uVar9;
    uStack_70 = lVar2;
    for (; (bVar13 = uVar12 != 0, uVar12 = uVar12 - 1, bVar13 && (puVar10 != puVar6));
        puVar10 = puVar10 + 4) {
      if (uVar9 <= local_50) {
        FUN_1408e52b3(local_50,uVar9,&PTR_s__rustc_48a229ceaefd4985c50990b14_14096a628);
        do {
          invalidInstructionException();
        } while( true );
      }
      uVar5 = *puVar10;
      lVar4 = uVar5 - 2;
      if (uVar5 < 2) {
        lVar4 = 1;
      }
      if (lVar4 == 0) {
        uVar3 = (ulonglong)*(uint *)(puVar10 + 1);
        uVar8 = 2;
        uVar7 = 0;
        uVar5 = 0;
      }
      else if (lVar4 == 1) {
        bVar13 = (uVar5 & 1) == 0;
        if (bVar13) {
          uVar3 = puVar10[1];
          uVar5 = puVar10[2];
        }
        else {
          uVar5 = puVar10[1];
          FUN_1402d7820(local_98,uVar5,puVar10[2]);
          uVar3 = FUN_1402ba260(local_98);
        }
        uVar8 = (ulonglong)!bVar13;
        uVar7 = uVar3 & 0xffffffff00000000;
      }
      else {
        uVar3 = puVar10[1];
        uVar5 = 0xffffffff00000000;
        uVar7 = uVar3 & 0xffffffff00000000;
        uVar8 = 4;
      }
      uVar1 = puVar10[3];
      lVar4 = local_50 * 0x20;
      *(ulonglong *)(lVar2 + lVar4) = uVar8;
      *(ulonglong *)(lVar2 + 8 + lVar4) = uVar3 & 0xffffffff | uVar7;
      *(ulonglong *)(lVar2 + 0x10 + lVar4) = uVar5;
      *(ulonglong *)(lVar2 + 0x18 + lVar4) = uVar1;
      local_50 = local_50 + 1;
    }
    *(ulonglong *)(local_60 + 4) = local_58;
    *local_60 = (undefined4)local_78;
    local_60[1] = local_78._4_4_;
    local_60[2] = (undefined4)uStack_70;
    local_60[3] = uStack_70._4_4_;
    return;
  }
  uVar11 = 0;
LAB_140404fbc:
  FUN_1408e4f5b(uVar11,uVar5);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1404051a0 name=FUN_1404051a0 */

undefined4 * FUN_1404051a0(undefined4 *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int *piVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_50;
  
  uVar3 = *(ulonglong *)(param_2 + 0x10);
  if (uVar3 < 0x555555555555556) {
    piVar6 = *(int **)(param_2 + 8);
    if (uVar3 * 0x18 == 0) {
      lVar4 = 8;
      uVar5 = 0;
    }
    else {
      FUN_140104360();
      uVar8 = 8;
      param_2 = 8;
      lVar4 = thunk_FUN_1402b9b50();
      uVar5 = uVar3;
      if (lVar4 == 0) goto LAB_1404051df;
    }
    piVar1 = piVar6 + uVar3 * 6;
    local_50 = 0;
    uVar7 = uVar5;
    for (; (bVar9 = uVar7 != 0, uVar7 = uVar7 - 1, bVar9 && (piVar6 != piVar1)); piVar6 = piVar6 + 6
        ) {
      if (uVar5 <= local_50) {
        FUN_1408e52b3(local_50,uVar5,&PTR_s__rustc_48a229ceaefd4985c50990b14_14096a628);
        do {
          invalidInstructionException();
        } while( true );
      }
      iVar2 = *piVar6;
      if (iVar2 != 1) {
        uVar8 = *(undefined8 *)(piVar6 + 2);
        param_2 = *(longlong *)(piVar6 + 4);
      }
      else {
        uVar8 = FUN_1402d8560(piVar6 + 2);
      }
      *(ulonglong *)(lVar4 + local_50 * 0x18) = (ulonglong)(iVar2 == 1);
      *(undefined8 *)(lVar4 + 8 + local_50 * 0x18) = uVar8;
      *(longlong *)(lVar4 + 0x10 + local_50 * 0x18) = param_2;
      local_50 = local_50 + 1;
    }
    *(ulonglong *)(param_1 + 4) = uVar3;
    local_68 = (undefined4)uVar5;
    uStack_64 = (undefined4)(uVar5 >> 0x20);
    uStack_60 = (undefined4)lVar4;
    uStack_5c = (undefined4)((ulonglong)lVar4 >> 0x20);
    *param_1 = local_68;
    param_1[1] = uStack_64;
    param_1[2] = uStack_60;
    param_1[3] = uStack_5c;
    return param_1;
  }
  uVar8 = 0;
LAB_1404051df:
  FUN_1408e4f5b(uVar8,uVar3 * 0x18);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140405320 name=FUN_140405320 */

void FUN_140405320(undefined4 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined4 local_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined8 local_488;
  undefined4 local_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined8 local_470;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined8 local_458;
  undefined4 local_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined8 local_440;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined8 local_428;
  undefined4 local_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined8 local_410;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 local_3c8;
  undefined4 local_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined8 local_3b0;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_398;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined8 local_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  longlong *local_368;
  longlong local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong *local_190;
  longlong *local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  undefined4 *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  longlong *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  longlong *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  byte local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  plVar15 = (longlong *)param_2[2];
  if ((longlong *)0x34834834834834 < plVar15) {
    uVar18 = 0;
LAB_140405363:
    FUN_1408e4f5b(uVar18,(longlong)plVar15 * 0x270);
    do {
      invalidInstructionException();
    } while( true );
  }
  plVar17 = (longlong *)param_2[1];
  local_158 = param_1;
  if ((longlong)plVar15 * 0x270 == 0) {
    lVar7 = 8;
    local_198 = (longlong *)0x0;
  }
  else {
    FUN_140104360();
    uVar18 = 8;
    param_2 = (longlong *)&DAT_00000008;
    lVar7 = thunk_FUN_1402b9b50();
    local_198 = plVar15;
    if (lVar7 == 0) goto LAB_140405363;
  }
  local_110 = 0;
  plVar4 = plVar17 + (longlong)plVar15 * 0x4e;
  plVar5 = (longlong *)0x0;
  uStack_118 = lVar7;
  plVar16 = local_198;
  local_120 = local_198;
  do {
    local_d8 = plVar5;
    if ((plVar16 == (longlong *)0x0) ||
       (plVar16 = (longlong *)((longlong)plVar16 + -1), plVar17 == plVar4)) {
      *(longlong **)(local_158 + 4) = plVar15;
      local_120._4_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
      uStack_118._4_4_ = (undefined4)((ulonglong)uStack_118 >> 0x20);
      *local_158 = (undefined4)local_120;
      local_158[1] = local_120._4_4_;
      local_158[2] = (undefined4)uStack_118;
      local_158[3] = uStack_118._4_4_;
      return;
    }
    if (local_198 <= local_d8) {
      FUN_1408e52b3(local_d8,local_198,&PTR_s__rustc_48a229ceaefd4985c50990b14_14096a628);
      goto LAB_140405e22;
    }
    local_1b8 = *plVar17;
    if (local_1b8 == 1) {
      local_88 = FUN_1402d8560(plVar17 + 1);
      local_c0 = 1;
      local_90 = param_2;
      if (plVar17[0x46] == -1) goto LAB_140405450;
LAB_1404054a9:
      param_2 = plVar17 + 0x46;
      FUN_1402d8290(&local_108);
      local_d0 = CONCAT44(uStack_104,local_108);
      local_b8 = CONCAT44(uStack_fc,uStack_100);
      lVar19 = plVar17[0x49];
      local_1a8 = local_f8;
    }
    else {
      local_88 = plVar17[1];
      local_90 = (longlong *)plVar17[2];
      local_c0 = 0;
      if (plVar17[0x46] != -1) goto LAB_1404054a9;
LAB_140405450:
      local_d0 = 0xffffffffffffffff;
      lVar19 = plVar17[0x49];
    }
    uVar18 = 0xffffffffffffffff;
    if (lVar19 != -1) {
      param_2 = plVar17 + 0x49;
      FUN_1402d8290(&local_108);
      uVar18 = CONCAT44(uStack_104,local_108);
      local_b0 = CONCAT44(uStack_fc,uStack_100);
      local_1a0 = local_f8;
    }
    local_49 = *(byte *)((longlong)plVar17 + 0x26c);
    lVar19 = plVar17[0x13];
    local_1b0 = plVar16;
    local_c8 = uVar18;
    if (lVar19 == -1) {
      local_138 = -1;
      lVar19 = local_138;
      uVar8 = uStack_130;
      param_2 = local_128;
    }
    else {
      uVar8 = (ulonglong)local_49;
      if ((int)lVar19 == 4) {
        uVar8 = (**(code **)(plVar17[0x15] + 0x38))(plVar17[0x14]);
      }
    }
    local_128 = param_2;
    uStack_130 = uVar8;
    local_138 = lVar19;
    FUN_1404051a0(&local_390,plVar17 + 0x16);
    uVar13 = *(undefined4 *)(plVar17 + 0x4d);
    FUN_1404051a0(&local_3a8,plVar17 + 0x19);
    FUN_1404051a0(&local_3c0,plVar17 + 0x1c);
    FUN_140408a30(&local_3d8,plVar17 + 0x1f);
    FUN_1404087a0(&local_3f0,plVar17 + 0x22);
    FUN_1404087a0(&local_408,plVar17 + 0x25);
    FUN_1404051a0(&local_420,plVar17 + 0x28);
    plVar16 = plVar17 + 0x2b;
    puVar14 = &local_438;
    FUN_1404051a0(puVar14);
    local_a0 = *(undefined4 *)(plVar17 + 0x4c);
    lVar19 = plVar17[10];
    uVar12 = (undefined4)CONCAT71((int7)((ulonglong)puVar14 >> 8),1);
    if (lVar19 == 0) {
      local_78 = plVar17[0xb];
      local_80 = (longlong *)plVar17[0xc];
      lVar19 = 0;
    }
    else if ((int)lVar19 != 2) {
      local_78 = FUN_1402d8560();
      lVar19 = 1;
      uVar12 = 0;
      local_80 = plVar16;
    }
    local_a4 = uVar12;
    local_9c = uVar13;
    FUN_140408cc0(&local_450,plVar17 + 0x2e);
    uVar1 = plVar17[0x33];
    uVar8 = uVar1 * 8;
    if (0x7ffffffffffffffc < uVar8 || uVar1 >> 0x3d != 0) {
      uVar18 = 0;
LAB_140405e00:
      FUN_1408e4f5b(uVar18,local_58);
LAB_140405e22:
      do {
        invalidInstructionException();
      } while( true );
    }
    lVar2 = plVar17[0x32];
    local_190 = plVar4;
    local_188 = plVar15;
    if (uVar8 == 0) {
      local_58 = 4;
      local_68 = 0;
      uVar9 = local_58;
      uVar6 = local_68;
    }
    else {
      FUN_140104360();
      uVar18 = 4;
      uVar9 = thunk_FUN_1402b9b50(uVar8,4);
      local_58 = uVar8;
      uVar6 = uVar1;
      if (uVar9 == 0) goto LAB_140405e00;
    }
    local_68 = uVar6;
    local_58 = uVar9;
    if (uVar1 != 0) {
      FUN_1408d7440(local_58,lVar2,uVar8);
    }
    local_180 = plVar17[3];
    local_178 = plVar17[4];
    FUN_1404051a0(&local_468,plVar17 + 0x34);
    local_170 = plVar17[5];
    lVar2 = plVar17[6];
    lVar3 = plVar17[7];
    uVar13 = *(undefined4 *)((longlong)plVar17 + 0x264);
    FUN_140406480(&local_480,plVar17 + 0x37);
    FUN_140408480(&local_498,plVar17 + 0x3a);
    plVar15 = plVar17 + 0x3d;
    puVar14 = &local_4b0;
    local_98 = uVar13;
    FUN_140406480(puVar14);
    lVar20 = plVar17[0xd];
    uVar13 = (undefined4)CONCAT71((int7)((ulonglong)puVar14 >> 8),1);
    if (lVar20 == 0) {
      local_70 = plVar17[0xe];
      local_60 = (longlong *)plVar17[0xf];
      lVar20 = 0;
    }
    else if ((int)lVar20 != 2) {
      local_70 = FUN_1402d8560();
      lVar20 = 1;
      uVar13 = 0;
      local_60 = plVar15;
    }
    local_168 = plVar17[8];
    local_160 = plVar17[9];
    lVar11 = plVar17[0x10];
    local_94 = uVar13;
    if (lVar11 == -1) {
      local_150 = -1;
      lVar11 = local_150;
      lVar10 = uStack_148;
      plVar15 = local_140;
    }
    else {
      lVar10 = local_160;
      if ((int)lVar11 != 2) {
        if ((int)lVar11 == 1) {
          lVar10 = FUN_1402d8560(plVar17 + 0x11);
          lVar11 = 1;
        }
        else {
          lVar11 = 0;
          lVar10 = plVar17[0x11];
          plVar15 = (longlong *)plVar17[0x12];
        }
      }
    }
    local_140 = plVar15;
    uStack_148 = lVar10;
    local_150 = lVar11;
    FUN_1401ad650(&local_108,plVar17 + 0x40);
    lVar11 = (longlong)local_d8 * 0x270;
    *(undefined8 *)(lVar7 + lVar11) = local_c0;
    *(longlong *)(lVar7 + 8 + lVar11) = local_88;
    *(longlong **)(lVar7 + 0x10 + lVar11) = local_90;
    *(longlong *)(lVar7 + 0x18 + lVar11) = local_180;
    *(longlong *)(lVar7 + 0x20 + lVar11) = local_178;
    *(longlong *)(lVar7 + 0x28 + lVar11) = local_170;
    *(longlong *)(lVar7 + 0x30 + lVar11) = lVar2;
    *(longlong *)(lVar7 + 0x38 + lVar11) = lVar3;
    *(longlong *)(lVar7 + 0x40 + lVar11) = local_168;
    *(longlong *)(lVar7 + 0x48 + lVar11) = local_160;
    *(longlong *)(lVar7 + 0x50 + lVar11) = lVar19;
    *(longlong *)(lVar7 + 0x58 + lVar11) = local_78;
    *(longlong **)(lVar7 + 0x60 + lVar11) = local_80;
    *(longlong *)(lVar7 + 0x68 + lVar11) = lVar20;
    *(longlong *)(lVar7 + 0x70 + lVar11) = local_70;
    *(longlong **)(lVar7 + 0x78 + lVar11) = local_60;
    *(longlong **)(lVar7 + 0x90 + lVar11) = local_140;
    puVar14 = (undefined4 *)(lVar7 + 0x80 + lVar11);
    *puVar14 = (undefined4)local_150;
    puVar14[1] = local_150._4_4_;
    puVar14[2] = (undefined4)uStack_148;
    puVar14[3] = uStack_148._4_4_;
    *(longlong **)(lVar7 + 0xa8 + lVar11) = local_128;
    puVar14 = (undefined4 *)(lVar7 + 0x98 + lVar11);
    *puVar14 = (undefined4)local_138;
    puVar14[1] = local_138._4_4_;
    puVar14[2] = (undefined4)uStack_130;
    puVar14[3] = uStack_130._4_4_;
    *(undefined8 *)(lVar7 + 0xc0 + lVar11) = local_380;
    puVar14 = (undefined4 *)(lVar7 + 0xb0 + lVar11);
    *puVar14 = local_390;
    puVar14[1] = uStack_38c;
    puVar14[2] = uStack_388;
    puVar14[3] = uStack_384;
    *(undefined8 *)(lVar7 + 0xd8 + lVar11) = local_398;
    puVar14 = (undefined4 *)(lVar7 + 200 + lVar11);
    *puVar14 = local_3a8;
    puVar14[1] = uStack_3a4;
    puVar14[2] = uStack_3a0;
    puVar14[3] = uStack_39c;
    *(undefined8 *)(lVar7 + 0xf0 + lVar11) = local_3b0;
    puVar14 = (undefined4 *)(lVar7 + 0xe0 + lVar11);
    *puVar14 = local_3c0;
    puVar14[1] = uStack_3bc;
    puVar14[2] = uStack_3b8;
    puVar14[3] = uStack_3b4;
    *(undefined8 *)(lVar7 + 0x108 + lVar11) = local_3c8;
    puVar14 = (undefined4 *)(lVar7 + 0xf8 + lVar11);
    *puVar14 = local_3d8;
    puVar14[1] = uStack_3d4;
    puVar14[2] = uStack_3d0;
    puVar14[3] = uStack_3cc;
    *(undefined8 *)(lVar7 + 0x120 + lVar11) = local_3e0;
    puVar14 = (undefined4 *)(lVar7 + 0x110 + lVar11);
    *puVar14 = local_3f0;
    puVar14[1] = uStack_3ec;
    puVar14[2] = uStack_3e8;
    puVar14[3] = uStack_3e4;
    *(undefined8 *)(lVar7 + 0x138 + lVar11) = local_3f8;
    puVar14 = (undefined4 *)(lVar7 + 0x128 + lVar11);
    *puVar14 = local_408;
    puVar14[1] = uStack_404;
    puVar14[2] = uStack_400;
    puVar14[3] = uStack_3fc;
    *(undefined8 *)(lVar7 + 0x150 + lVar11) = local_410;
    puVar14 = (undefined4 *)(lVar7 + 0x140 + lVar11);
    *puVar14 = local_420;
    puVar14[1] = uStack_41c;
    puVar14[2] = uStack_418;
    puVar14[3] = uStack_414;
    *(undefined8 *)(lVar7 + 0x168 + lVar11) = local_428;
    puVar14 = (undefined4 *)(lVar7 + 0x158 + lVar11);
    *puVar14 = local_438;
    puVar14[1] = uStack_434;
    puVar14[2] = uStack_430;
    puVar14[3] = uStack_42c;
    *(undefined8 *)(lVar7 + 0x180 + lVar11) = local_440;
    puVar14 = (undefined4 *)(lVar7 + 0x170 + lVar11);
    *puVar14 = local_450;
    puVar14[1] = uStack_44c;
    puVar14[2] = uStack_448;
    puVar14[3] = uStack_444;
    *(ulonglong *)(lVar7 + 0x188 + lVar11) = local_68;
    *(ulonglong *)(lVar7 + 400 + lVar11) = local_58;
    *(ulonglong *)(lVar7 + 0x198 + lVar11) = uVar1;
    *(undefined8 *)(lVar7 + 0x1b0 + lVar11) = local_458;
    puVar14 = (undefined4 *)(lVar7 + 0x1a0 + lVar11);
    *puVar14 = local_468;
    puVar14[1] = uStack_464;
    puVar14[2] = uStack_460;
    puVar14[3] = uStack_45c;
    *(undefined8 *)(lVar7 + 0x1c8 + lVar11) = local_470;
    puVar14 = (undefined4 *)(lVar7 + 0x1b8 + lVar11);
    *puVar14 = local_480;
    puVar14[1] = uStack_47c;
    puVar14[2] = uStack_478;
    puVar14[3] = uStack_474;
    *(undefined8 *)(lVar7 + 0x1e0 + lVar11) = local_488;
    puVar14 = (undefined4 *)(lVar7 + 0x1d0 + lVar11);
    *puVar14 = local_498;
    puVar14[1] = uStack_494;
    puVar14[2] = uStack_490;
    puVar14[3] = uStack_48c;
    *(undefined8 *)(lVar7 + 0x1f8 + lVar11) = local_4a0;
    puVar14 = (undefined4 *)(lVar7 + 0x1e8 + lVar11);
    *puVar14 = local_4b0;
    puVar14[1] = uStack_4ac;
    puVar14[2] = uStack_4a8;
    puVar14[3] = uStack_4a4;
    puVar14 = (undefined4 *)(lVar7 + 0x220 + lVar11);
    *puVar14 = local_e8;
    puVar14[1] = uStack_e4;
    puVar14[2] = uStack_e0;
    puVar14[3] = uStack_dc;
    puVar14 = (undefined4 *)(lVar7 + 0x210 + lVar11);
    *puVar14 = (undefined4)local_f8;
    puVar14[1] = local_f8._4_4_;
    puVar14[2] = uStack_f0;
    puVar14[3] = uStack_ec;
    puVar14 = (undefined4 *)(lVar7 + 0x200 + lVar11);
    *puVar14 = local_108;
    puVar14[1] = uStack_104;
    puVar14[2] = uStack_100;
    puVar14[3] = uStack_fc;
    *(undefined8 *)(lVar7 + 0x230 + lVar11) = local_d0;
    *(undefined8 *)(lVar7 + 0x238 + lVar11) = local_b8;
    *(longlong **)(lVar7 + 0x240 + lVar11) = local_1a8;
    *(undefined8 *)(lVar7 + 0x248 + lVar11) = local_c8;
    *(undefined8 *)(lVar7 + 0x250 + lVar11) = local_b0;
    *(longlong **)(lVar7 + 600 + lVar11) = local_1a0;
    *(undefined4 *)(lVar7 + 0x260 + lVar11) = local_a0;
    *(undefined4 *)(lVar7 + 0x264 + lVar11) = local_98;
    *(undefined4 *)(lVar7 + 0x268 + lVar11) = local_9c;
    *(byte *)(lVar7 + 0x26c + lVar11) = local_49;
    plVar17 = plVar17 + 0x4e;
    plVar15 = local_188;
    plVar4 = local_190;
    plVar5 = (longlong *)((longlong)local_d8 + 1);
    param_2 = local_d8;
    plVar16 = local_1b0;
    local_378 = (undefined4)local_138;
    uStack_374 = local_138._4_4_;
    uStack_370 = (undefined4)uStack_130;
    uStack_36c = uStack_130._4_4_;
    local_368 = local_128;
    local_108 = (undefined4)local_150;
    uStack_104 = local_150._4_4_;
    uStack_100 = (undefined4)uStack_148;
    uStack_fc = uStack_148._4_4_;
    local_f8 = local_140;
  } while( true );
}


/* address=140406480 name=FUN_140406480 */

void FUN_140406480(undefined4 *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int *piVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined local_90 [32];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 *local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar3 = *(ulonglong *)(param_2 + 0x10);
  lVar4 = uVar3 * 0x18;
  if (uVar3 < 0x555555555555556) {
    piVar8 = *(int **)(param_2 + 8);
    local_58 = param_1;
    if (lVar4 == 0) {
      lVar5 = 8;
      uVar10 = 0;
    }
    else {
      FUN_140104360();
      uVar9 = 8;
      lVar5 = thunk_FUN_1402b9b50(lVar4,8);
      uVar10 = uVar3;
      if (lVar5 == 0) goto LAB_1404064bf;
    }
    piVar1 = piVar8 + uVar3 * 6;
    local_50 = 0;
    uVar7 = uVar10;
    local_70 = uVar10;
    uStack_68 = lVar5;
    for (; (bVar11 = uVar7 != 0, uVar7 = uVar7 - 1, bVar11 && (piVar8 != piVar1));
        piVar8 = piVar8 + 6) {
      if (uVar10 <= local_50) {
        FUN_1408e52b3(local_50,uVar10,&PTR_s__rustc_48a229ceaefd4985c50990b14_14096a628);
        do {
          invalidInstructionException();
        } while( true );
      }
      iVar2 = *piVar8;
      if (iVar2 != 1) {
        uVar9 = *(undefined8 *)(piVar8 + 2);
        uVar6 = *(undefined8 *)(piVar8 + 4);
      }
      else {
        uVar6 = *(undefined8 *)(piVar8 + 2);
        FUN_1402d7820(local_90,uVar6,*(undefined8 *)(piVar8 + 4));
        uVar9 = FUN_1402ba260(local_90);
      }
      *(ulonglong *)(lVar5 + local_50 * 0x18) = (ulonglong)(iVar2 == 1);
      *(undefined8 *)(lVar5 + 8 + local_50 * 0x18) = uVar9;
      *(undefined8 *)(lVar5 + 0x10 + local_50 * 0x18) = uVar6;
      local_50 = local_50 + 1;
    }
    *(ulonglong *)(local_58 + 4) = uVar3;
    *local_58 = (undefined4)local_70;
    local_58[1] = local_70._4_4_;
    local_58[2] = (undefined4)uStack_68;
    local_58[3] = uStack_68._4_4_;
    return;
  }
  uVar9 = 0;
LAB_1404064bf:
  FUN_1408e4f5b(uVar9,lVar4);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140406620 name=FUN_140406620 */

void FUN_140406620(undefined4 *param_1,longlong *param_2)

{
  undefined uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong *plVar21;
  undefined4 uVar22;
  undefined4 *puVar23;
  longlong *plVar24;
  undefined8 uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong *plVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  bool bVar32;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 local_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined8 local_410;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  longlong *local_3c8;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined8 local_330;
  longlong local_328;
  longlong *local_320;
  longlong local_318;
  longlong local_310;
  longlong local_308;
  ulonglong local_300;
  ulonglong local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  longlong *local_2c0;
  longlong *local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong *local_290;
  longlong local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined4 *local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  ulonglong local_240;
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
  undefined8 uStack_1d0;
  longlong *local_1c8;
  uint local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  longlong *local_170;
  longlong local_168;
  longlong local_160;
  longlong *local_158;
  longlong *local_150;
  longlong *local_148;
  longlong *local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong *local_e8;
  ulonglong local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong *local_a8;
  ulonglong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  plVar24 = (longlong *)param_2[2];
  lVar27 = (longlong)plVar24 * 0x308;
  if ((longlong *)0x2a3a0fd5c5f02a < plVar24) {
    uVar25 = 0;
LAB_140406669:
    FUN_1408e4f5b(uVar25,lVar27);
    do {
      invalidInstructionException();
    } while( true );
  }
  plVar29 = (longlong *)param_2[1];
  local_260 = param_1;
  if (lVar27 == 0) {
    lVar16 = 8;
    local_320 = (longlong *)0x0;
  }
  else {
    FUN_140104360();
    uVar25 = 8;
    param_2 = (longlong *)&DAT_00000008;
    lVar16 = thunk_FUN_1402b9b50(lVar27);
    local_320 = plVar24;
    if (lVar16 == 0) goto LAB_140406669;
  }
  local_248 = 0;
  local_a8 = (longlong *)0x0;
  plVar3 = plVar29 + (longlong)plVar24 * 0x61;
  uStack_250 = lVar16;
  local_2c0 = local_320;
  local_258 = local_320;
  while (local_320 != (longlong *)0x0) {
    local_320 = (longlong *)((longlong)local_320 + -1);
    if (plVar29 == plVar3) break;
    if (local_2c0 <= local_a8) {
      FUN_1408e52b3(local_a8,local_2c0,&PTR_s__rustc_48a229ceaefd4985c50990b14_14096a628);
      goto LAB_1404076ab;
    }
    local_328 = *plVar29;
    bVar32 = local_328 != 1;
    if (bVar32) {
      local_160 = plVar29[1];
      plVar17 = (longlong *)plVar29[2];
      local_170 = plVar17;
    }
    else {
      local_160 = FUN_1402d8560(plVar29 + 1);
      plVar17 = (longlong *)0x0;
      local_170 = param_2;
    }
    local_240 = (ulonglong)!bVar32;
    lVar27 = plVar29[7];
    local_bc = (undefined4)CONCAT71((int7)((ulonglong)plVar17 >> 8),1);
    if (lVar27 == 0) {
      local_138 = plVar29[8];
      local_158 = (longlong *)plVar29[9];
      lVar27 = 0;
    }
    else if ((int)lVar27 != 2) {
      local_138 = FUN_1402d8560(plVar29 + 8);
      lVar27 = 1;
      local_bc = 0;
      local_158 = param_2;
    }
    local_1bc = *(uint *)(plVar29 + 0x5f);
    uVar18 = (ulonglong)local_1bc;
    local_1a8 = 0xffffffffffffffff;
    local_1b0 = 0xffffffffffffffff;
    local_318 = lVar27;
    if (plVar29[0x3a] != -1) {
      param_2 = plVar29 + 0x3a;
      FUN_1402d8290(&local_98);
      local_1b0 = CONCAT44(uStack_94,local_98);
      local_238 = CONCAT44(uStack_8c,uStack_90);
      uVar18 = CONCAT44(uStack_84,local_88);
      local_300 = uVar18;
    }
    if (plVar29[0x3d] != -1) {
      param_2 = plVar29 + 0x3d;
      FUN_1402d8290(&local_98);
      local_1a8 = CONCAT44(uStack_94,local_98);
      local_230 = CONCAT44(uStack_8c,uStack_90);
      uVar18 = CONCAT44(uStack_84,local_88);
      local_2f8 = uVar18;
    }
    lVar27 = plVar29[10];
    local_b8 = (undefined4)CONCAT71((int7)(uVar18 >> 8),1);
    if (lVar27 == 0) {
      local_130 = plVar29[0xb];
      local_150 = (longlong *)plVar29[0xc];
      lVar27 = 0;
    }
    else if ((int)lVar27 != 2) {
      local_130 = FUN_1402d8560(plVar29 + 0xb);
      lVar27 = 1;
      local_b8 = 0;
      local_150 = param_2;
    }
    lVar19 = plVar29[0xd];
    local_b4 = (undefined4)CONCAT71((int7)((ulonglong)lVar27 >> 8),1);
    local_310 = lVar27;
    if (lVar19 == 0) {
      local_128 = plVar29[0xe];
      local_148 = (longlong *)plVar29[0xf];
      lVar19 = 0;
    }
    else if ((int)lVar19 != 2) {
      local_128 = FUN_1402d8560(plVar29 + 0xe);
      lVar19 = 1;
      local_b4 = 0;
      local_148 = param_2;
    }
    local_168 = plVar29[0x10];
    local_b0 = (undefined4)CONCAT71((int7)((ulonglong)lVar19 >> 8),1);
    local_308 = lVar19;
    if (local_168 == 0) {
      local_120 = plVar29[0x11];
      local_140 = (longlong *)plVar29[0x12];
      local_168 = 0;
      if (plVar29[0x40] != -1) goto LAB_140406a8b;
LAB_1404069c7:
      local_198 = 0xffffffffffffffff;
      local_1a0 = 0xffffffffffffffff;
      if (plVar29[0x43] == -1) goto LAB_1404069d5;
LAB_140406ad3:
      FUN_1402d8290(&local_98,plVar29 + 0x43);
      local_198 = CONCAT44(uStack_94,local_98);
      local_220 = CONCAT44(uStack_8c,uStack_90);
      local_2e8 = CONCAT44(uStack_84,local_88);
      if (plVar29[0x46] != -1) goto LAB_140406b31;
LAB_1404069f9:
      local_188 = 0xffffffffffffffff;
      local_190 = 0xffffffffffffffff;
      if (plVar29[0x49] == -1) goto LAB_140406a07;
LAB_140406b79:
      FUN_1402d8290(&local_98,plVar29 + 0x49);
      local_188 = CONCAT44(uStack_94,local_98);
      local_210 = CONCAT44(uStack_8c,uStack_90);
      local_2d8 = CONCAT44(uStack_84,local_88);
      if (plVar29[0x4c] != -1) goto LAB_140406bd7;
LAB_140406a2b:
      local_178 = 0xffffffffffffffff;
      local_180 = 0xffffffffffffffff;
      lVar27 = plVar29[0x4f];
    }
    else {
      if ((int)local_168 != 2) {
        local_120 = FUN_1402d8560(plVar29 + 0x11);
        local_168 = 1;
        local_b0 = 0;
        local_140 = param_2;
      }
      if (plVar29[0x40] == -1) goto LAB_1404069c7;
LAB_140406a8b:
      local_198 = 0xffffffffffffffff;
      local_1a0 = 0xffffffffffffffff;
      FUN_1402d8290(&local_98,plVar29 + 0x40);
      local_1a0 = CONCAT44(uStack_94,local_98);
      local_228 = CONCAT44(uStack_8c,uStack_90);
      local_2f0 = CONCAT44(uStack_84,local_88);
      if (plVar29[0x43] != -1) goto LAB_140406ad3;
LAB_1404069d5:
      if (plVar29[0x46] == -1) goto LAB_1404069f9;
LAB_140406b31:
      local_188 = 0xffffffffffffffff;
      local_190 = 0xffffffffffffffff;
      FUN_1402d8290(&local_98,plVar29 + 0x46);
      local_190 = CONCAT44(uStack_94,local_98);
      local_218 = CONCAT44(uStack_8c,uStack_90);
      local_2e0 = CONCAT44(uStack_84,local_88);
      if (plVar29[0x49] != -1) goto LAB_140406b79;
LAB_140406a07:
      if (plVar29[0x4c] == -1) goto LAB_140406a2b;
LAB_140406bd7:
      local_178 = 0xffffffffffffffff;
      local_180 = 0xffffffffffffffff;
      FUN_1402d8290(&local_98,plVar29 + 0x4c);
      local_180 = CONCAT44(uStack_94,local_98);
      local_208 = CONCAT44(uStack_8c,uStack_90);
      local_2d0 = CONCAT44(uStack_84,local_88);
      lVar27 = plVar29[0x4f];
    }
    if (lVar27 != -1) {
      FUN_1402d8290(&local_98,plVar29 + 0x4f);
      local_178 = CONCAT44(uStack_94,local_98);
      local_200 = CONCAT44(uStack_8c,uStack_90);
      local_2c8 = CONCAT44(uStack_84,local_88);
    }
    FUN_140408cc0(&local_340,plVar29 + 0x1f);
    uVar2 = plVar29[0x24];
    uVar18 = uVar2 * 8;
    if (0x7ffffffffffffffc < uVar18 || uVar2 >> 0x3d != 0) {
      uVar25 = 0;
LAB_140407682:
      FUN_1408e4f5b(uVar25,local_a0);
LAB_1404076ab:
      do {
        invalidInstructionException();
      } while( true );
    }
    lVar27 = plVar29[0x23];
    local_2b8 = plVar24;
    if (uVar18 == 0) {
      local_a0 = 4;
      local_e0 = 0;
      uVar20 = local_a0;
      uVar15 = local_e0;
    }
    else {
      FUN_140104360();
      uVar25 = 4;
      uVar20 = thunk_FUN_1402b9b50(uVar18,4);
      local_a0 = uVar18;
      uVar15 = uVar2;
      if (uVar20 == 0) goto LAB_140407682;
    }
    local_e0 = uVar15;
    local_a0 = uVar20;
    if (uVar2 != 0) {
      FUN_1408d7440(local_a0,lVar27,uVar18);
    }
    FUN_140408cc0(&local_3f0,plVar29 + 0x25);
    uVar30 = 0xffffffffffffffff;
    uVar25 = 0xffffffffffffffff;
    if (plVar29[0x52] != -1) {
      FUN_1402d8290(&local_98,plVar29 + 0x52);
      uVar25 = CONCAT44(uStack_94,local_98);
      local_1f8 = CONCAT44(uStack_8c,uStack_90);
      local_280 = CONCAT44(uStack_84,local_88);
    }
    local_118 = uVar25;
    if (plVar29[0x55] != -1) {
      FUN_1402d8290(&local_98,plVar29 + 0x55);
      uVar30 = CONCAT44(uStack_94,local_98);
      local_1f0 = CONCAT44(uStack_8c,uStack_90);
      local_278 = CONCAT44(uStack_84,local_88);
    }
    uVar31 = 0xffffffffffffffff;
    uVar25 = 0xffffffffffffffff;
    local_110 = uVar30;
    if (plVar29[0x58] != -1) {
      FUN_1402d8290(&local_98,plVar29 + 0x58);
      uVar25 = CONCAT44(uStack_94,local_98);
      local_1e8 = CONCAT44(uStack_8c,uStack_90);
      local_270 = CONCAT44(uStack_84,local_88);
    }
    lVar27 = plVar29[3];
    local_2b0 = plVar29[4];
    local_108 = uVar25;
    if (plVar29[0x5b] != -1) {
      FUN_1402d8290(&local_98,plVar29 + 0x5b);
      uVar31 = CONCAT44(uStack_94,local_98);
      local_1e0 = CONCAT44(uStack_8c,uStack_90);
      local_268 = CONCAT44(uStack_84,local_88);
    }
    uVar25 = *(undefined8 *)((longlong)plVar29 + 0x2fc);
    local_100 = uVar31;
    FUN_140405320(&local_1d8,plVar29 + 0x28);
    FUN_140404f70(&local_98,plVar29 + 0x2b);
    uVar14 = uStack_84;
    uVar13 = local_88;
    uVar12 = uStack_8c;
    uVar11 = uStack_90;
    uVar10 = uStack_94;
    uVar9 = local_98;
    plVar8 = local_1c8;
    uVar4 = (undefined4)local_1d8;
    uVar5 = local_1d8._4_4_;
    uVar6 = (undefined4)uStack_1d0;
    uVar7 = uStack_1d0._4_4_;
    FUN_140406620(&local_408,plVar29 + 0x2e);
    plVar24 = plVar29 + 0x31;
    puVar23 = &local_420;
    FUN_140408130(puVar23);
    lVar19 = plVar29[0x13];
    plVar17 = (longlong *)CONCAT71((int7)((ulonglong)puVar23 >> 8),1);
    if (lVar19 == 0) {
      local_f8 = plVar29[0x14];
      local_d8 = (longlong *)plVar29[0x15];
      lVar19 = 0;
    }
    else if ((int)lVar19 != 2) {
      local_f8 = FUN_1402d8560();
      lVar19 = 1;
      plVar17 = (longlong *)0x0;
      local_d8 = plVar24;
    }
    local_1b8 = SUB84(plVar17,0);
    local_2a8 = plVar29[5];
    local_2a0 = plVar29[6];
    lVar26 = plVar29[0x16];
    plVar21 = (longlong *)CONCAT71((int7)((ulonglong)local_2a0 >> 8),1);
    local_ac = SUB84(plVar21,0);
    if (lVar26 == 0) {
      local_f0 = (longlong *)plVar29[0x17];
      plVar21 = (longlong *)plVar29[0x18];
      lVar26 = 0;
      local_d0 = plVar21;
    }
    else if ((int)lVar26 != 2) {
      plVar17 = plVar29 + 0x17;
      plVar21 = (longlong *)FUN_1402d8560(plVar17);
      lVar26 = 1;
      local_ac = 0;
      local_f0 = plVar21;
      local_d0 = plVar24;
    }
    lVar28 = plVar29[0x19];
    uVar22 = (undefined4)CONCAT71((int7)((ulonglong)plVar17 >> 8),1);
    local_298 = lVar27;
    if (lVar28 == 0) {
      local_e8 = (longlong *)plVar29[0x1a];
      plVar21 = (longlong *)plVar29[0x1b];
      lVar28 = 0;
      local_c8 = plVar21;
    }
    else if ((int)lVar28 != 2) {
      plVar21 = (longlong *)FUN_1402d8560();
      lVar28 = 1;
      uVar22 = 0;
      local_e8 = plVar21;
      local_c8 = plVar24;
    }
    lVar27 = plVar29[0x1c];
    local_290 = plVar3;
    local_288 = lVar19;
    local_1b4 = uVar22;
    if (lVar27 == -1) {
      local_1d8 = -1;
      lVar27 = local_1d8;
      plVar21 = uStack_1d0;
      plVar24 = local_1c8;
    }
    else if ((int)lVar27 == 4) {
      plVar21 = (longlong *)(**(code **)(plVar29[0x1e] + 0x38))(plVar29[0x1d]);
    }
    local_1c8 = plVar24;
    uStack_1d0 = plVar21;
    local_1d8 = lVar27;
    uVar1 = *(undefined *)((longlong)plVar29 + 0x304);
    lVar27 = plVar29[0x5e];
    FUN_1401ad650(&local_98,plVar29 + 0x34);
    local_448 = SUB84(plVar8,0);
    uStack_444 = (undefined4)((ulonglong)plVar8 >> 0x20);
    lVar19 = (longlong)local_a8 * 0x308;
    *(ulonglong *)(lVar16 + lVar19) = local_240;
    *(longlong *)(lVar16 + 8 + lVar19) = local_160;
    *(longlong **)(lVar16 + 0x10 + lVar19) = local_170;
    *(longlong *)(lVar16 + 0x18 + lVar19) = local_298;
    *(longlong *)(lVar16 + 0x20 + lVar19) = local_2b0;
    *(longlong *)(lVar16 + 0x28 + lVar19) = local_2a8;
    *(longlong *)(lVar16 + 0x30 + lVar19) = local_2a0;
    *(longlong *)(lVar16 + 0x38 + lVar19) = local_318;
    *(longlong *)(lVar16 + 0x40 + lVar19) = local_138;
    *(longlong **)(lVar16 + 0x48 + lVar19) = local_158;
    *(longlong *)(lVar16 + 0x50 + lVar19) = local_310;
    *(longlong *)(lVar16 + 0x58 + lVar19) = local_130;
    *(longlong **)(lVar16 + 0x60 + lVar19) = local_150;
    *(longlong *)(lVar16 + 0x68 + lVar19) = local_308;
    *(longlong *)(lVar16 + 0x70 + lVar19) = local_128;
    *(longlong **)(lVar16 + 0x78 + lVar19) = local_148;
    *(longlong *)(lVar16 + 0x80 + lVar19) = local_168;
    *(longlong *)(lVar16 + 0x88 + lVar19) = local_120;
    *(longlong **)(lVar16 + 0x90 + lVar19) = local_140;
    *(longlong *)(lVar16 + 0x98 + lVar19) = local_288;
    *(longlong *)(lVar16 + 0xa0 + lVar19) = local_f8;
    *(longlong **)(lVar16 + 0xa8 + lVar19) = local_d8;
    *(longlong *)(lVar16 + 0xb0 + lVar19) = lVar26;
    *(longlong **)(lVar16 + 0xb8 + lVar19) = local_f0;
    *(longlong **)(lVar16 + 0xc0 + lVar19) = local_d0;
    *(longlong *)(lVar16 + 200 + lVar19) = lVar28;
    *(longlong **)(lVar16 + 0xd0 + lVar19) = local_e8;
    *(longlong **)(lVar16 + 0xd8 + lVar19) = local_c8;
    *(longlong **)(lVar16 + 0xf0 + lVar19) = local_1c8;
    puVar23 = (undefined4 *)(lVar16 + 0xe0 + lVar19);
    *puVar23 = (undefined4)local_1d8;
    puVar23[1] = local_1d8._4_4_;
    puVar23[2] = (undefined4)uStack_1d0;
    puVar23[3] = uStack_1d0._4_4_;
    puVar23 = (undefined4 *)(lVar16 + 0xf8 + lVar19);
    *puVar23 = local_340;
    puVar23[1] = uStack_33c;
    puVar23[2] = uStack_338;
    puVar23[3] = uStack_334;
    *(undefined8 *)(lVar16 + 0x108 + lVar19) = local_330;
    *(ulonglong *)(lVar16 + 0x110 + lVar19) = local_e0;
    *(ulonglong *)(lVar16 + 0x118 + lVar19) = local_a0;
    *(ulonglong *)(lVar16 + 0x120 + lVar19) = uVar2;
    *(undefined8 *)(lVar16 + 0x138 + lVar19) = local_3e0;
    puVar23 = (undefined4 *)(lVar16 + 0x128 + lVar19);
    *puVar23 = local_3f0;
    puVar23[1] = uStack_3ec;
    puVar23[2] = uStack_3e8;
    puVar23[3] = uStack_3e4;
    puVar23 = (undefined4 *)(lVar16 + 0x160 + lVar19);
    *puVar23 = uVar11;
    puVar23[1] = uVar12;
    puVar23[2] = uVar13;
    puVar23[3] = uVar14;
    puVar23 = (undefined4 *)(lVar16 + 0x150 + lVar19);
    *puVar23 = local_448;
    puVar23[1] = uStack_444;
    puVar23[2] = uVar9;
    puVar23[3] = uVar10;
    puVar23 = (undefined4 *)(lVar16 + 0x140 + lVar19);
    *puVar23 = uVar4;
    puVar23[1] = uVar5;
    puVar23[2] = uVar6;
    puVar23[3] = uVar7;
    *(undefined8 *)(lVar16 + 0x180 + lVar19) = local_3f8;
    puVar23 = (undefined4 *)(lVar16 + 0x170 + lVar19);
    *puVar23 = local_408;
    puVar23[1] = uStack_404;
    puVar23[2] = uStack_400;
    puVar23[3] = uStack_3fc;
    *(undefined8 *)(lVar16 + 0x198 + lVar19) = local_410;
    puVar23 = (undefined4 *)(lVar16 + 0x188 + lVar19);
    *puVar23 = local_420;
    puVar23[1] = uStack_41c;
    puVar23[2] = uStack_418;
    puVar23[3] = uStack_414;
    puVar23 = (undefined4 *)(lVar16 + 0x1c0 + lVar19);
    *puVar23 = local_78;
    puVar23[1] = uStack_74;
    puVar23[2] = uStack_70;
    puVar23[3] = uStack_6c;
    puVar23 = (undefined4 *)(lVar16 + 0x1b0 + lVar19);
    *puVar23 = local_88;
    puVar23[1] = uStack_84;
    puVar23[2] = uStack_80;
    puVar23[3] = uStack_7c;
    puVar23 = (undefined4 *)(lVar16 + 0x1a0 + lVar19);
    *puVar23 = local_98;
    puVar23[1] = uStack_94;
    puVar23[2] = uStack_90;
    puVar23[3] = uStack_8c;
    *(undefined8 *)(lVar16 + 0x1d0 + lVar19) = local_1b0;
    *(undefined8 *)(lVar16 + 0x1d8 + lVar19) = local_238;
    *(ulonglong *)(lVar16 + 0x1e0 + lVar19) = local_300;
    *(undefined8 *)(lVar16 + 0x1e8 + lVar19) = local_1a8;
    *(undefined8 *)(lVar16 + 0x1f0 + lVar19) = local_230;
    *(ulonglong *)(lVar16 + 0x1f8 + lVar19) = local_2f8;
    *(undefined8 *)(lVar16 + 0x200 + lVar19) = local_1a0;
    *(undefined8 *)(lVar16 + 0x208 + lVar19) = local_228;
    *(undefined8 *)(lVar16 + 0x210 + lVar19) = local_2f0;
    *(undefined8 *)(lVar16 + 0x218 + lVar19) = local_198;
    *(undefined8 *)(lVar16 + 0x220 + lVar19) = local_220;
    *(undefined8 *)(lVar16 + 0x228 + lVar19) = local_2e8;
    *(undefined8 *)(lVar16 + 0x230 + lVar19) = local_190;
    *(undefined8 *)(lVar16 + 0x238 + lVar19) = local_218;
    *(undefined8 *)(lVar16 + 0x240 + lVar19) = local_2e0;
    *(undefined8 *)(lVar16 + 0x248 + lVar19) = local_188;
    *(undefined8 *)(lVar16 + 0x250 + lVar19) = local_210;
    *(undefined8 *)(lVar16 + 600 + lVar19) = local_2d8;
    *(undefined8 *)(lVar16 + 0x260 + lVar19) = local_180;
    *(undefined8 *)(lVar16 + 0x268 + lVar19) = local_208;
    *(undefined8 *)(lVar16 + 0x270 + lVar19) = local_2d0;
    *(undefined8 *)(lVar16 + 0x278 + lVar19) = local_178;
    *(undefined8 *)(lVar16 + 0x280 + lVar19) = local_200;
    *(undefined8 *)(lVar16 + 0x288 + lVar19) = local_2c8;
    *(undefined8 *)(lVar16 + 0x290 + lVar19) = local_118;
    *(undefined8 *)(lVar16 + 0x298 + lVar19) = local_1f8;
    *(undefined8 *)(lVar16 + 0x2a0 + lVar19) = local_280;
    *(undefined8 *)(lVar16 + 0x2a8 + lVar19) = local_110;
    *(undefined8 *)(lVar16 + 0x2b0 + lVar19) = local_1f0;
    *(undefined8 *)(lVar16 + 0x2b8 + lVar19) = local_278;
    *(undefined8 *)(lVar16 + 0x2c0 + lVar19) = local_108;
    *(undefined8 *)(lVar16 + 0x2c8 + lVar19) = local_1e8;
    *(undefined8 *)(lVar16 + 0x2d0 + lVar19) = local_270;
    *(undefined8 *)(lVar16 + 0x2d8 + lVar19) = local_100;
    *(undefined8 *)(lVar16 + 0x2e0 + lVar19) = local_1e0;
    *(undefined8 *)(lVar16 + 0x2e8 + lVar19) = local_268;
    *(longlong *)(lVar16 + 0x2f0 + lVar19) = lVar27;
    *(uint *)(lVar16 + 0x2f8 + lVar19) = local_1bc;
    *(undefined8 *)(lVar16 + 0x2fc + lVar19) = uVar25;
    *(undefined *)(lVar16 + 0x304 + lVar19) = uVar1;
    plVar29 = plVar29 + 0x61;
    plVar24 = local_2b8;
    plVar3 = local_290;
    param_2 = local_a8;
    local_a8 = (longlong *)((longlong)local_a8 + 1);
    local_3d8 = (undefined4)local_1d8;
    uStack_3d4 = local_1d8._4_4_;
    uStack_3d0 = (undefined4)uStack_1d0;
    uStack_3cc = uStack_1d0._4_4_;
    local_3c8 = local_1c8;
    local_98 = uVar4;
    uStack_94 = uVar5;
    uStack_90 = uVar6;
    uStack_8c = uVar7;
    local_88 = local_448;
    uStack_84 = uStack_444;
    uStack_80 = uVar9;
    uStack_7c = uVar10;
    local_78 = uVar11;
    uStack_74 = uVar12;
    uStack_70 = uVar13;
    uStack_6c = uVar14;
  }
  *(longlong **)(local_260 + 4) = plVar24;
  local_258._4_4_ = (undefined4)((ulonglong)local_258 >> 0x20);
  uStack_250._4_4_ = (undefined4)((ulonglong)uStack_250 >> 0x20);
  *local_260 = (undefined4)local_258;
  local_260[1] = local_258._4_4_;
  local_260[2] = (undefined4)uStack_250;
  local_260[3] = uStack_250._4_4_;
  return;
}


/* address=140408130 name=FUN_140408130 */

void FUN_140408130(undefined4 *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  undefined uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  undefined4 *local_70;
  ulonglong local_68;
  ulonglong local_60;
  longlong local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar9 = *(ulonglong *)(param_2 + 0x10);
  if (0x13b13b13b13b13b < uVar9) {
    uVar8 = 0;
LAB_140408170:
    FUN_1408e4f5b(uVar8,uVar9 * 0x68);
    do {
      invalidInstructionException();
    } while( true );
  }
  plVar7 = *(longlong **)(param_2 + 8);
  local_70 = param_1;
  local_68 = uVar9;
  if (uVar9 * 0x68 == 0) {
    lVar4 = 8;
    uVar10 = 0;
  }
  else {
    FUN_140104360();
    uVar8 = 8;
    param_2 = 8;
    lVar4 = thunk_FUN_1402b9b50();
    uVar10 = uVar9;
    if (lVar4 == 0) goto LAB_140408170;
  }
  plVar6 = plVar7 + uVar9 * 0xd;
  local_60 = 0;
  uStack_88 = lVar4;
  uVar9 = uVar10;
  local_90 = uVar10;
  for (; (uVar9 != 0 && (uVar9 = uVar9 - 1, plVar7 != plVar6)); plVar7 = plVar7 + 0xd) {
    if (uVar10 <= local_60) {
      FUN_1408e52b3(local_60,uVar10,&PTR_s__rustc_48a229ceaefd4985c50990b14_14096a628);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_78 = *plVar7;
    bVar11 = local_78 != 1;
    if (bVar11) {
      local_58 = plVar7[1];
      local_50 = plVar7[2];
    }
    else {
      local_58 = FUN_1402d8560(plVar7 + 1);
      local_50 = param_2;
    }
    FUN_1404051a0(&local_100,plVar7 + 3);
    uVar2 = *(undefined *)(plVar7 + 0xc);
    FUN_1404051a0(&local_118,plVar7 + 6);
    FUN_1404051a0(&local_130,plVar7 + 9);
    lVar5 = local_60 * 0x68;
    local_60 = local_60 + 1;
    bVar3 = *(byte *)((longlong)plVar7 + 0x61);
    param_2 = (ulonglong)bVar3;
    *(ulonglong *)(lVar4 + lVar5) = (ulonglong)!bVar11;
    *(longlong *)(lVar4 + 8 + lVar5) = local_58;
    *(ulonglong *)(lVar4 + 0x10 + lVar5) = local_50;
    *(undefined8 *)(lVar4 + 0x28 + lVar5) = local_f0;
    puVar1 = (undefined4 *)(lVar4 + 0x18 + lVar5);
    *puVar1 = local_100;
    puVar1[1] = uStack_fc;
    puVar1[2] = uStack_f8;
    puVar1[3] = uStack_f4;
    puVar1 = (undefined4 *)(lVar4 + 0x30 + lVar5);
    *puVar1 = local_118;
    puVar1[1] = uStack_114;
    puVar1[2] = uStack_110;
    puVar1[3] = uStack_10c;
    *(undefined8 *)(lVar4 + 0x40 + lVar5) = local_108;
    *(undefined8 *)(lVar4 + 0x58 + lVar5) = local_120;
    puVar1 = (undefined4 *)(lVar4 + 0x48 + lVar5);
    *puVar1 = local_130;
    puVar1[1] = uStack_12c;
    puVar1[2] = uStack_128;
    puVar1[3] = uStack_124;
    *(undefined *)(lVar4 + 0x60 + lVar5) = uVar2;
    *(byte *)(lVar4 + 0x61 + lVar5) = bVar3;
  }
  *(ulonglong *)(local_70 + 4) = local_68;
  local_90._4_4_ = (undefined4)(local_90 >> 0x20);
  uStack_88._4_4_ = (undefined4)((ulonglong)uStack_88 >> 0x20);
  *local_70 = (undefined4)local_90;
  local_70[1] = local_90._4_4_;
  local_70[2] = (undefined4)uStack_88;
  local_70[3] = uStack_88._4_4_;
  return;
}


/* address=140408480 name=FUN_140408480 */

void FUN_140408480(undefined4 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int *piVar6;
  ulonglong uVar7;
  int *piVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined local_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 *local_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong local_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar10 = *(ulonglong *)(param_2 + 0x10);
  if (uVar10 < 0x1c71c71c71c71c8) {
    piVar8 = *(int **)(param_2 + 8);
    local_b0 = param_1;
    if (uVar10 * 0x48 == 0) {
      lVar3 = 8;
      uVar7 = 0;
    }
    else {
      FUN_140104360();
      uVar9 = 8;
      param_2 = 8;
      lVar3 = thunk_FUN_1402b9b50();
      uVar7 = uVar10;
      if (lVar3 == 0) goto LAB_1404084c5;
    }
    piVar6 = piVar8 + uVar10 * 0x12;
    uVar4 = 0;
    uVar5 = uVar7;
    local_c8 = uVar7;
    uStack_c0 = lVar3;
    local_a8 = uVar10;
    do {
      bVar11 = uVar5 == 0;
      uVar5 = uVar5 - 1;
      if ((bVar11) || (piVar8 == piVar6)) {
        *(ulonglong *)(local_b0 + 4) = local_a8;
        *local_b0 = (undefined4)local_c8;
        local_b0[1] = local_c8._4_4_;
        local_b0[2] = (undefined4)uStack_c0;
        local_b0[3] = uStack_c0._4_4_;
        return;
      }
      local_58 = uVar4;
      if (uVar7 <= uVar4) {
        FUN_1408e52b3(uVar4,uVar7,&PTR_s__rustc_48a229ceaefd4985c50990b14_14096a628);
        do {
          invalidInstructionException();
        } while( true );
      }
      iVar2 = *piVar8;
      if (iVar2 != 1) {
        uStack_98 = *(undefined8 *)(piVar8 + 2);
        param_2 = *(longlong *)(piVar8 + 4);
      }
      else {
        uStack_98 = FUN_1402d8560();
      }
      uVar10 = (ulonglong)(iVar2 == 1);
      local_a0 = uVar10;
      local_90 = param_2;
      if (*(longlong *)(piVar8 + 6) == 0) {
        local_80 = *(undefined8 *)(piVar8 + 8);
        uVar9 = *(undefined8 *)(piVar8 + 10);
        uStack_88 = 0;
LAB_14040863b:
        uStack_78 = uVar9;
        if (*(longlong *)(piVar8 + 0xc) == -1) goto LAB_140408540;
LAB_140408652:
        FUN_140406480(&local_70,piVar8 + 0xc);
      }
      else {
        if ((int)*(longlong *)(piVar8 + 6) != 2) {
          uVar9 = *(undefined8 *)(piVar8 + 8);
          local_50 = uVar10;
          FUN_1402d7820(local_e8,uVar9,*(undefined8 *)(piVar8 + 10));
          local_50 = uVar10;
          local_80 = FUN_1402ba260(local_e8);
          uStack_88 = 1;
          goto LAB_14040863b;
        }
        uStack_88 = 2;
        if (*(longlong *)(piVar8 + 0xc) != -1) goto LAB_140408652;
LAB_140408540:
        local_70 = 0xffffffffffffffff;
      }
      piVar8 = piVar8 + 0x12;
      uVar4 = local_58 + 1;
      *(longlong *)(lVar3 + 0x40 + local_58 * 0x48) = local_60;
      puVar1 = (undefined4 *)(lVar3 + 0x30 + local_58 * 0x48);
      *puVar1 = (undefined4)local_70;
      puVar1[1] = local_70._4_4_;
      puVar1[2] = uStack_68;
      puVar1[3] = uStack_64;
      puVar1 = (undefined4 *)(lVar3 + 0x20 + local_58 * 0x48);
      *puVar1 = (undefined4)local_80;
      puVar1[1] = local_80._4_4_;
      puVar1[2] = (undefined4)uStack_78;
      puVar1[3] = uStack_78._4_4_;
      puVar1 = (undefined4 *)(lVar3 + 0x10 + local_58 * 0x48);
      *puVar1 = (undefined4)local_90;
      puVar1[1] = local_90._4_4_;
      puVar1[2] = (undefined4)uStack_88;
      puVar1[3] = uStack_88._4_4_;
      puVar1 = (undefined4 *)(lVar3 + local_58 * 0x48);
      *puVar1 = (undefined4)local_a0;
      puVar1[1] = local_a0._4_4_;
      puVar1[2] = (undefined4)uStack_98;
      puVar1[3] = uStack_98._4_4_;
      param_2 = local_60;
    } while( true );
  }
  uVar9 = 0;
LAB_1404084c5:
  FUN_1408e4f5b(uVar9,uVar10 * 0x48);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1404087a0 name=FUN_1404087a0 */

void FUN_1404087a0(undefined4 *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined local_b0 [32];
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  undefined4 *local_70;
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  if (uVar1 < 0x2aaaaaaaaaaaaab) {
    plVar8 = *(longlong **)(param_2 + 8);
    local_70 = param_1;
    if (uVar1 * 0x30 == 0) {
      lVar2 = 8;
      uVar11 = 0;
    }
    else {
      FUN_140104360();
      uVar10 = 8;
      param_2 = 8;
      lVar2 = thunk_FUN_1402b9b50();
      uVar11 = uVar1;
      if (lVar2 == 0) goto LAB_1404087e4;
    }
    plVar9 = plVar8 + uVar1 * 6;
    local_50 = 0;
    uVar5 = uVar11;
    local_90 = uVar11;
    uStack_88 = lVar2;
    local_68 = uVar1;
    do {
      bVar12 = uVar5 == 0;
      uVar5 = uVar5 - 1;
      if ((bVar12) || (plVar8 == plVar9)) {
        *(ulonglong *)(local_70 + 4) = local_68;
        *local_70 = (undefined4)local_90;
        local_70[1] = local_90._4_4_;
        local_70[2] = (undefined4)uStack_88;
        local_70[3] = uStack_88._4_4_;
        return;
      }
      if (uVar11 <= local_50) {
        FUN_1408e52b3(local_50,uVar11,&PTR_s__rustc_48a229ceaefd4985c50990b14_14096a628);
        do {
          invalidInstructionException();
        } while( true );
      }
      local_78 = *plVar8;
      if (local_78 == 1) {
        local_60 = FUN_1402d8560();
        uVar10 = 1;
        lVar7 = param_2;
        if (*(int *)(plVar8 + 3) != 1) goto LAB_140408860;
LAB_14040891c:
        param_2 = plVar8[4];
        local_58 = lVar7;
        FUN_1402d7820(local_b0,param_2,plVar8[5]);
        lVar3 = FUN_1402ba260(local_b0);
        uVar4 = 1;
        lVar7 = local_58;
      }
      else {
        local_60 = plVar8[1];
        lVar7 = plVar8[2];
        uVar10 = 0;
        if (*(int *)(plVar8 + 3) == 1) goto LAB_14040891c;
LAB_140408860:
        lVar3 = plVar8[4];
        param_2 = plVar8[5];
        uVar4 = 0;
      }
      plVar8 = plVar8 + 6;
      lVar6 = local_50 * 0x30;
      *(undefined8 *)(lVar2 + lVar6) = uVar10;
      *(longlong *)(lVar2 + 8 + lVar6) = local_60;
      *(longlong *)(lVar2 + 0x10 + lVar6) = lVar7;
      *(undefined8 *)(lVar2 + 0x18 + lVar6) = uVar4;
      *(longlong *)(lVar2 + 0x20 + lVar6) = lVar3;
      *(longlong *)(lVar2 + 0x28 + lVar6) = param_2;
      local_50 = local_50 + 1;
    } while( true );
  }
  uVar10 = 0;
LAB_1404087e4:
  FUN_1408e4f5b(uVar10,uVar1 * 0x30);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140408a30 name=FUN_140408a30 */

void FUN_140408a30(undefined4 *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined local_b0 [32];
  undefined4 *local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  undefined4 local_54;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  lVar2 = 0x2aaaaaaaaaaaaaa;
  if (uVar1 < 0x2aaaaaaaaaaaaab) {
    plVar6 = *(longlong **)(param_2 + 8);
    local_90 = param_1;
    if (uVar1 * 0x30 == 0) {
      lVar4 = 8;
      uVar10 = 0;
    }
    else {
      FUN_140104360();
      uVar8 = 8;
      param_2 = 8;
      lVar2 = thunk_FUN_1402b9b50();
      lVar4 = lVar2;
      uVar10 = uVar1;
      if (lVar2 == 0) goto LAB_140408a74;
    }
    local_70 = 0;
    plVar7 = plVar6 + uVar1 * 6;
    local_50 = 0;
    uVar3 = uVar10;
    local_88 = uVar1;
    local_80 = uVar10;
    uStack_78 = lVar4;
    do {
      bVar11 = uVar3 == 0;
      uVar3 = uVar3 - 1;
      if ((bVar11) || (plVar6 == plVar7)) {
        *(ulonglong *)(local_90 + 4) = local_88;
        *local_90 = (undefined4)local_80;
        local_90[1] = local_80._4_4_;
        local_90[2] = (undefined4)uStack_78;
        local_90[3] = uStack_78._4_4_;
        return;
      }
      if (uVar10 <= local_50) {
        FUN_1408e52b3(local_50,uVar10,&PTR_s__rustc_48a229ceaefd4985c50990b14_14096a628);
        do {
          invalidInstructionException();
        } while( true );
      }
      lVar9 = *plVar6;
      local_54 = (undefined4)CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
      if (lVar9 == 0) {
        local_68 = plVar6[1];
        local_60 = plVar6[2];
        lVar9 = 0;
        if (*(int *)(plVar6 + 3) == 1) goto LAB_140408bd1;
LAB_140408af0:
        lVar2 = plVar6[4];
        param_2 = plVar6[5];
        uVar8 = 0;
      }
      else {
        if ((int)lVar9 != 2) {
          param_2 = plVar6[1];
          FUN_1402d7820(local_b0,param_2,plVar6[2]);
          local_68 = FUN_1402ba260();
          lVar9 = 1;
          local_54 = 0;
          local_60 = param_2;
        }
        if (*(int *)(plVar6 + 3) != 1) goto LAB_140408af0;
LAB_140408bd1:
        lVar2 = FUN_1402d8560(plVar6 + 4);
        uVar8 = 1;
      }
      plVar6 = plVar6 + 6;
      lVar5 = local_50 * 0x30;
      *(longlong *)(lVar4 + lVar5) = lVar9;
      *(longlong *)(lVar4 + 8 + lVar5) = local_68;
      *(longlong *)(lVar4 + 0x10 + lVar5) = local_60;
      *(undefined8 *)(lVar4 + 0x18 + lVar5) = uVar8;
      *(longlong *)(lVar4 + 0x20 + lVar5) = lVar2;
      *(longlong *)(lVar4 + 0x28 + lVar5) = param_2;
      local_50 = local_50 + 1;
    } while( true );
  }
  uVar8 = 0;
LAB_140408a74:
  FUN_1408e4f5b(uVar8,uVar1 * 0x30);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140408cc0 name=FUN_140408cc0 */

undefined4 * FUN_140408cc0(undefined4 *param_1,longlong param_2)

{
  undefined uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int *piVar6;
  longlong lVar7;
  int *piVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_50;
  
  uVar3 = *(ulonglong *)(param_2 + 0x10);
  uVar5 = uVar3 * 0x20;
  if (uVar5 < 0x7ffffffffffffff9 && uVar3 >> 0x3b == 0) {
    piVar8 = *(int **)(param_2 + 8);
    if (uVar5 == 0) {
      lVar4 = 8;
      uVar10 = 0;
    }
    else {
      FUN_140104360();
      uVar9 = 8;
      param_2 = 8;
      lVar4 = thunk_FUN_1402b9b50();
      uVar10 = uVar3;
      if (lVar4 == 0) goto LAB_140408d0c;
    }
    piVar6 = piVar8 + uVar3 * 8;
    local_50 = 0;
    uVar5 = uVar10;
    for (; (bVar11 = uVar5 != 0, uVar5 = uVar5 - 1, bVar11 && (piVar8 != piVar6));
        piVar8 = piVar8 + 8) {
      if (uVar10 <= local_50) {
        FUN_1408e52b3(local_50,uVar10,&PTR_s__rustc_48a229ceaefd4985c50990b14_14096a628);
        do {
          invalidInstructionException();
        } while( true );
      }
      iVar2 = *piVar8;
      if (iVar2 != 1) {
        uVar9 = *(undefined8 *)(piVar8 + 2);
        param_2 = *(longlong *)(piVar8 + 4);
      }
      else {
        uVar9 = FUN_1402d8560(piVar8 + 2);
      }
      uVar1 = *(undefined *)(piVar8 + 6);
      lVar7 = local_50 * 0x20;
      *(ulonglong *)(lVar4 + lVar7) = (ulonglong)(iVar2 == 1);
      *(undefined8 *)(lVar4 + 8 + lVar7) = uVar9;
      *(longlong *)(lVar4 + 0x10 + lVar7) = param_2;
      *(undefined *)(lVar4 + 0x18 + lVar7) = uVar1;
      local_50 = local_50 + 1;
    }
    *(ulonglong *)(param_1 + 4) = uVar3;
    local_68 = (undefined4)uVar10;
    uStack_64 = (undefined4)(uVar10 >> 0x20);
    uStack_60 = (undefined4)lVar4;
    uStack_5c = (undefined4)((ulonglong)lVar4 >> 0x20);
    *param_1 = local_68;
    param_1[1] = uStack_64;
    param_1[2] = uStack_60;
    param_1[3] = uStack_5c;
    return param_1;
  }
  uVar9 = 0;
LAB_140408d0c:
  FUN_1408e4f5b(uVar9,uVar5);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140408e50 name=FUN_140408e50 */

void FUN_140408e50(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    do {
      if ((plVar2[-2] != 0) && (*plVar2 != 0)) {
        thunk_FUN_1402b9bb0(plVar2[-1],*plVar2,1);
      }
      plVar2 = plVar2 + 3;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}


/* address=140408ea0 name=FUN_140408ea0 */

void FUN_140408ea0(undefined8 param_1,undefined8 param_2,byte param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000140408ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_14096baf0 + *(int *)(&DAT_14096baf0 + (ulonglong)param_3 * 4)))();
  return;
}


/* address=140409a80 name=FUN_140409a80 */

void FUN_140409a80(longlong param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140409a95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_14096bb30 + *(int *)(&DAT_14096bb30 + (ulonglong)*(byte *)(param_1 + 4) * 4)))
            (param_1,param_2,
             &DAT_14096bb30 + *(int *)(&DAT_14096bb30 + (ulonglong)*(byte *)(param_1 + 4) * 4));
  return;
}


/* address=140409ea0 name=FUN_140409ea0 */

longlong FUN_140409ea0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                      undefined8 param_5)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  
  local_30 = param_3 + 8;
  local_38 = param_5;
  pcVar1 = *(code **)(param_2 + 0x38);
  local_40 = param_4;
  local_28 = param_3;
  do {
    lVar3 = local_30;
    lVar2 = FUN_14040a2b0(&local_40,local_30,local_28);
    if (lVar2 == 0) {
      return 0;
    }
    lVar3 = (*pcVar1)(param_1,lVar2,lVar3);
  } while (lVar3 == 0);
  return lVar3;
}


/* address=140409f20 name=FUN_140409f20 */

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_140409f20(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                       ulonglong param_5)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong unaff_R12;
  ulonglong uVar7;
  ulonglong unaff_R15;
  longlong local_c0;
  char local_b8;
  byte local_b7;
  char local_b4;
  uint3 local_b3;
  longlong local_a8;
  longlong local_a0;
  ulonglong local_98;
  undefined8 local_90;
  ulonglong local_88;
  longlong local_80;
  ulonglong local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar7 = param_3 + 0x1a8;
  *(undefined *)(param_3 + 0x1ce) = 0xfe;
  local_70 = param_1;
  if ((ulonglong)(*(longlong *)(param_3 + 0x1a8) - *(longlong *)(param_3 + 0x1b8)) < param_5) {
    FUN_1408e0b90(uVar7,*(longlong *)(param_3 + 0x1b8),param_5);
    unaff_R15 = uVar7;
  }
  local_88 = param_5;
  pcVar1 = *(code **)(param_2 + 0x18);
  local_90 = param_4;
  local_80 = param_3;
  local_78 = uVar7;
  do {
    FUN_14040a4f0(&local_b8,&local_90,local_80,local_78);
    local_60 = local_a8;
    if (local_a8 == -1) {
      return 0;
    }
    unaff_R12 = CONCAT71((int7)(unaff_R12 >> 8),0xff);
    unaff_R15 = CONCAT71((int7)(unaff_R15 >> 8),0xff);
    if ((local_b8 != -1) && (unaff_R15 = (ulonglong)local_b7, local_b8 != '\0')) {
      if (local_b8 == '\x01') {
        unaff_R15 = (ulonglong)local_b7;
        if (0xf < local_b7) {
          unaff_R15 = 0xff;
        }
      }
      else {
        unaff_R15 = 0xff;
      }
    }
    if (local_b4 != -1) {
      if (local_b4 == '\0') {
        unaff_R12 = (ulonglong)(uint)local_b3;
      }
      else if (local_b4 == '\x01') {
        uVar6 = local_b3 & 0xff;
        if (0xf < (byte)local_b3) {
          uVar6 = 0xff;
        }
        unaff_R12 = (ulonglong)uVar6;
      }
    }
    local_58 = local_a0;
    lVar5 = local_a0;
    uVar7 = local_98;
    while (uVar7 != 0) {
      uVar4 = unaff_R15 & 0xffffffff;
      lVar3 = (*pcVar1)(local_70,uVar4,unaff_R12 & 0xffffffff,lVar5,uVar7);
      if (lVar3 == 1) {
        uVar6 = (uint)uVar4 & 3;
        switch(uVar6) {
        case 0:
          cVar2 = *(char *)(uVar4 + 0x10);
          break;
        case 1:
          cVar2 = *(char *)(uVar4 + 0x1f);
          break;
        case 2:
          local_68 = lVar3;
          local_50 = uVar4;
          lVar3 = FUN_1402df980();
          local_50 = uVar4;
          cVar2 = (**(code **)(lVar3 + 8))(uVar4 >> 0x20);
          break;
        case 3:
          cVar2 = (char)(uVar4 >> 0x20);
        }
        if (cVar2 != '#') {
LAB_14040a18d:
          if (local_60 == 0) {
            return uVar4;
          }
          thunk_FUN_1402b9bb0(local_58,local_60,1);
          return uVar4;
        }
        if ((1 < uVar6 - 2) && ((uVar4 & 3) != 0)) {
          local_c0 = uVar4 - 1;
          FUN_1402e7e70(&local_c0);
        }
      }
      else {
        if (uVar4 == 0) {
          local_50 = 0;
          local_68 = lVar3;
          uVar4 = FUN_1402b4430(0x17,
                                "failed to write whole bufferC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\anstream-1.0.0\\src\\wincon.rs"
                                ,0x1c);
          goto LAB_14040a18d;
        }
        if (uVar7 < uVar4) {
          local_68 = lVar3;
          local_50 = uVar4;
          FUN_1408e54c0(uVar4,uVar7,uVar7,&DAT_14096ba30);
          do {
            invalidInstructionException();
          } while( true );
        }
        lVar5 = lVar5 + uVar4;
        uVar7 = uVar7 - uVar4;
      }
    }
    if (local_60 != 0) {
      thunk_FUN_1402b9bb0(local_58,local_60,1);
    }
  } while( true );
}


/* address=14040a2b0 name=FUN_14040a2b0 */

longlong FUN_14040a2b0(longlong *param_1,byte *param_2,undefined8 param_3)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  char cVar5;
  ulonglong uVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  byte bVar11;
  ulonglong uVar12;
  
  lVar2 = *param_1;
  uVar3 = param_1[1];
  if (uVar3 == 0) {
    uVar6 = 0;
LAB_14040a3b1:
    lVar10 = lVar2 + uVar6;
    uVar9 = uVar3 - uVar6;
    *param_1 = lVar10;
    param_1[1] = uVar9;
    if (uVar9 != 0) {
      bVar7 = *param_2;
      uVar12 = 0;
      do {
        bVar1 = *(byte *)(lVar10 + uVar12);
        uVar8 = (ulonglong)bVar1;
        if (bVar7 == 0xf) {
          cVar5 = FUN_140409a80(param_3);
          bVar7 = 0xf;
          if (cVar5 != '\0') {
            *param_2 = 0xc;
            bVar7 = 0xc;
          }
        }
        else {
          bVar11 = ""[uVar8];
          if (bVar11 == 0) {
            bVar11 = "PPPPPPPPPPPPPPPPPPPPPPPP"[uVar8];
          }
          if ((bVar11 & 0xf) != 0) {
            bVar7 = bVar11 & 0xf;
            *param_2 = bVar7;
            if (bVar7 == 0xf) {
              FUN_140409a80(param_3);
              bVar7 = 0xf;
              goto LAB_14040a400;
            }
          }
          bVar11 = bVar11 >> 4;
          if (bVar11 == 5) {
            if ((0x20 < bVar1) || ((0x100003600U >> (uVar8 & 0x3f) & 1) == 0)) goto LAB_14040a4a2;
          }
          else if ((bVar11 != 0xf) && ((bVar11 != 0xc || (bVar1 == 0x7f)))) {
LAB_14040a4a2:
            uVar8 = uVar12;
            if (uVar9 < uVar12) {
              FUN_1408e5490("mid > len",0x13,&PTR_s_C__Users_VssAdministrator__cargo_14096bad8);
              do {
                invalidInstructionException();
              } while( true );
            }
            goto LAB_14040a4c4;
          }
        }
LAB_14040a400:
        uVar12 = uVar12 + 1;
        uVar8 = uVar9;
        if (uVar3 - uVar6 == uVar12) {
LAB_14040a4c4:
          *param_1 = lVar10 + uVar8;
          param_1[1] = uVar9 - uVar8;
          if (uVar8 != 0) {
            return lVar10;
          }
          return 0;
        }
      } while( true );
    }
  }
  else {
    lVar10 = lVar2 + uVar3;
    bVar7 = *param_2;
    uVar6 = 0;
    do {
      if (bVar7 == 0xf) {
LAB_14040a390:
        if (uVar3 < uVar6) {
          FUN_1408e5490("mid > len",0x13,&PTR_s_C__Users_VssAdministrator__cargo_14096bac0);
          do {
            invalidInstructionException();
          } while( true );
        }
        goto LAB_14040a3b1;
      }
      bVar1 = *(byte *)(lVar2 + uVar6);
      uVar9 = (ulonglong)bVar1;
      bVar11 = ""[uVar9];
      if (bVar11 == 0) {
        bVar11 = ""[uVar9 + (ulonglong)bVar7 * 0x100];
      }
      bVar4 = bVar11 & 0xf;
      if (bVar4 != 0) {
        *param_2 = bVar4;
        bVar7 = bVar4;
      }
      bVar11 = bVar11 >> 4;
      if (bVar11 == 5) {
        if ((0x20 < bVar1) || ((0x100003600U >> (uVar9 & 0x3f) & 1) == 0)) goto LAB_14040a30a;
        goto LAB_14040a390;
      }
      if (bVar11 == 0xc) {
        if (bVar1 != 0x7f) goto LAB_14040a390;
      }
      else if (bVar11 == 0xf) goto LAB_14040a390;
LAB_14040a30a:
      uVar6 = uVar6 + 1;
    } while (uVar3 != uVar6);
  }
  *param_1 = lVar10;
  param_1[1] = 0;
  return 0;
}


/* address=14040a4f0 name=FUN_14040a4f0 */

void FUN_14040a4f0(char *param_1,byte **param_2,longlong param_3,longlong *param_4)

{
  undefined2 uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined6 uVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  byte bVar12;
  undefined8 *puVar13;
  byte bVar14;
  byte bVar15;
  ulonglong uVar16;
  byte *pbVar17;
  undefined3 local_7b;
  undefined5 uStack_78;
  undefined2 uStack_72;
  undefined2 local_70;
  undefined2 uStack_6e;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined2 uStack_62;
  
  *(undefined *)((longlong)param_4 + 0x26) = 0xfe;
  pbVar17 = param_2[1];
  pbVar3 = *param_2;
  do {
    pbVar17 = pbVar17 + -1;
    if (pbVar17 == (byte *)0xffffffffffffffff) {
      if (param_4[2] == 0) goto LAB_14040a87a;
      cVar8 = *(char *)(param_4 + 3);
      puVar13 = (undefined8 *)((longlong)param_4 + 0x19);
      goto LAB_14040a7f7;
    }
    *param_2 = pbVar3 + 1;
    param_2[1] = pbVar17;
    bVar14 = *pbVar3;
    uVar16 = (ulonglong)bVar14;
    bVar12 = *(byte *)(param_3 + 0x1a5);
    if (bVar12 == 0xf) {
      uVar9 = FUN_1404dd030(param_3 + 0x18,bVar14);
      if (uVar9 == 0xffffffff) goto LAB_14040a540;
      uVar16 = 1;
      if ((0x7f < uVar9) && (uVar16 = 2, 0x7ff < uVar9)) {
        uVar16 = 4 - (ulonglong)(uVar9 < 0x10000);
      }
      lVar10 = param_4[2];
      if ((ulonglong)(*param_4 - lVar10) < uVar16) {
        FUN_1408e0b90(param_4,lVar10,uVar16);
        lVar11 = param_4[1];
        if (0x7f < uVar9) goto LAB_14040a744;
LAB_14040a5cf:
        *(byte *)(lVar11 + lVar10) = (byte)uVar9;
      }
      else {
        lVar11 = param_4[1];
        if (uVar9 < 0x80) goto LAB_14040a5cf;
LAB_14040a744:
        bVar12 = (byte)uVar9 & 0x3f | 0x80;
        bVar14 = (byte)(uVar9 >> 6);
        if (uVar9 < 0x800) {
          *(byte *)(lVar11 + lVar10) = bVar14 | 0xc0;
          *(byte *)(lVar11 + 1 + lVar10) = bVar12;
        }
        else {
          bVar14 = bVar14 & 0x3f | 0x80;
          bVar15 = (byte)(uVar9 >> 0xc);
          if (uVar9 < 0x10000) {
            *(byte *)(lVar11 + lVar10) = bVar15 | 0xe0;
            *(byte *)(lVar11 + 1 + lVar10) = bVar14;
            *(byte *)(lVar11 + 2 + lVar10) = bVar12;
          }
          else {
            *(byte *)(lVar11 + lVar10) = (byte)(uVar9 >> 0x12) | 0xf0;
            *(byte *)(lVar11 + 1 + lVar10) = bVar15 & 0x3f | 0x80;
            *(byte *)(lVar11 + 2 + lVar10) = bVar14;
            *(byte *)(lVar11 + 3 + lVar10) = bVar12;
          }
        }
      }
      param_4[2] = uVar16 + lVar10;
      *(undefined *)(param_3 + 0x1a5) = 0xc;
      goto LAB_14040a540;
    }
    bVar15 = ""[uVar16];
    if (bVar15 == 0) {
      bVar15 = ""[uVar16 + (ulonglong)bVar12 * 0x100];
    }
    bVar7 = bVar15 & 0xf;
    bVar15 = bVar15 >> 4;
    if (bVar7 == 0) {
      FUN_140408ea0(param_3,param_4,bVar15,uVar16);
      goto LAB_14040a540;
    }
    if (bVar12 == 0xd) {
      FUN_140408ea0(param_3,param_4,8,bVar14);
    }
    if (bVar15 != 0) {
      FUN_140408ea0(param_3,param_4,bVar15,bVar14);
    }
    switch(bVar7) {
    case 1:
    case 5:
    case 10:
      *(undefined8 *)(param_3 + 0x20) = 0;
      *(undefined *)(param_3 + 0x1a4) = 0;
      *(undefined2 *)(param_3 + 0x1a2) = 0;
      *(undefined *)(param_3 + 0x90) = 0;
      lVar10 = 0x88;
      goto LAB_14040a6bb;
    case 9:
      if (*(longlong *)(param_3 + 0x88) == 0x20) {
        *(undefined *)(param_3 + 0x1a4) = 1;
      }
      else {
        uVar16 = *(longlong *)(param_3 + 0x88) - (ulonglong)*(byte *)(param_3 + 0x90);
        if (0x1f < uVar16) {
          FUN_1408e52b3(uVar16,0x20,&PTR_s_C__Users_VssAdministrator__cargo_14096a8a0);
          do {
            invalidInstructionException();
          } while( true );
        }
        uVar1 = *(undefined2 *)(param_3 + 0x1a2);
        *(byte *)(param_3 + 0x68 + uVar16) = *(byte *)(param_3 + 0x90) + 1;
        uVar16 = *(ulonglong *)(param_3 + 0x88);
        if (0x1f < uVar16) {
          FUN_1408e52b3(uVar16,0x20,&PTR_s_C__Users_VssAdministrator__cargo_14096a8b8);
          do {
            invalidInstructionException();
          } while( true );
        }
        *(undefined2 *)(param_3 + 0x28 + uVar16 * 2) = uVar1;
        *(undefined *)(param_3 + 0x90) = 0;
        *(longlong *)(param_3 + 0x88) = *(longlong *)(param_3 + 0x88) + 1;
      }
      if (2 < *(ulonglong *)(param_3 + 0x20)) {
        FUN_1408e54c0(0,*(ulonglong *)(param_3 + 0x20),2,
                      &PTR_s_C__Users_VssAdministrator__cargo_14096a8d0);
        do {
          invalidInstructionException();
        } while( true );
      }
      break;
    case 0xd:
      *(undefined8 *)(param_3 + 0x10) = 0;
      lVar10 = 0x198;
LAB_14040a6bb:
      *(undefined8 *)(param_3 + lVar10) = 0;
    }
    *(byte *)(param_3 + 0x1a5) = bVar7;
LAB_14040a540:
    cVar8 = *(char *)((longlong)param_4 + 0x26);
    pbVar3 = pbVar3 + 1;
  } while (cVar8 == -2);
  puVar13 = (undefined8 *)((longlong)param_4 + 0x27);
  if (param_4[2] == 0) {
LAB_14040a87a:
    *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
  }
  else {
LAB_14040a7f7:
    uVar2 = *puVar13;
    uStack_78 = (undefined5)((ulonglong)*(undefined8 *)((longlong)puVar13 + 5) >> 0x18);
    local_7b = (undefined3)((ulonglong)uVar2 >> 0x28);
    lVar10 = param_4[2];
    uVar4 = *(undefined4 *)param_4;
    uVar5 = *(undefined4 *)(param_4 + 1);
    uVar6 = *(undefined6 *)(param_4 + 1);
    *param_4 = 0;
    param_4[1] = 1;
    param_4[2] = 0;
    local_70 = (undefined2)uVar4;
    uStack_6e = (undefined2)((uint)uVar4 >> 0x10);
    uStack_6c = (undefined2)*(undefined4 *)((longlong)param_4 + 4);
    uStack_6a = (undefined2)((uint)*(undefined4 *)((longlong)param_4 + 4) >> 0x10);
    uStack_68 = (undefined2)uVar5;
    uStack_66 = (undefined2)((uint)uVar5 >> 0x10);
    uStack_64 = (undefined2)*(undefined4 *)((longlong)param_4 + 0xc);
    uStack_62 = (undefined2)((uint)*(undefined4 *)((longlong)param_4 + 0xc) >> 0x10);
    *param_1 = cVar8;
    *(undefined8 *)(param_1 + 1) = uVar2;
    *(ulonglong *)(param_1 + 6) = CONCAT53(uStack_78,local_7b);
    *(uint *)(param_1 + 0xe) = CONCAT22(local_70,uStack_72);
    *(uint *)(param_1 + 0x12) = CONCAT22(uStack_6c,uStack_6e);
    *(uint *)(param_1 + 0x16) = CONCAT22(uStack_68,uStack_6a);
    *(uint *)(param_1 + 0x1a) = CONCAT22(uStack_64,uStack_66);
    *(ulonglong *)(param_1 + 0x18) = CONCAT26(uStack_62,uVar6);
    *(longlong *)(param_1 + 0x20) = lVar10;
  }
  return;
}


/* address=14040b500 name=FUN_14040b500 */

ulonglong FUN_14040b500(HANDLE param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  ulonglong uVar3;
  uint local_c;
  
  if (param_1 == (HANDLE)0x0) {
    uVar3 = FUN_1402b4430(0xb,"console is detached",0x13);
    return uVar3;
  }
  local_c = 0;
  BVar1 = GetConsoleMode(param_1,&local_c);
  if (BVar1 != 0) {
    local_c = local_c | 4;
    BVar1 = SetConsoleMode(param_1,local_c);
    if (BVar1 != 0) {
      return 0;
    }
  }
  DVar2 = GetLastError();
  if (*(undefined ***)PTR_PTR_140bc9ce8 != &PTR_LAB_14096bd98) {
    FUN_1408e5690(&PTR_LAB_14096bd98);
  }
  return (ulonglong)DVar2 << 0x20 | 2;
}


/* address=14040b780 name=FUN_14040b780 */

ulonglong FUN_14040b780(undefined8 param_1,byte param_2,byte param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  BOOL BVar3;
  DWORD DVar4;
  HANDLE hConsoleOutput;
  ulonglong uVar5;
  
  hConsoleOutput = (HANDLE)FUN_1402d0be0();
  if (hConsoleOutput != (HANDLE)0x0) {
    BVar3 = SetConsoleTextAttribute
                      (hConsoleOutput,
                       ((ushort)(param_3 & 8) | *(ushort *)(&DAT_14096c3bc + (ulonglong)param_3 * 2)
                       ) << 4 | (ushort)(param_2 & 8) |
                                *(ushort *)(&DAT_14096c3bc + (ulonglong)param_2 * 2));
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      puVar2 = PTR_PTR_140bc9ce8;
      if (*(undefined ***)PTR_PTR_140bc9ce8 == &PTR_LAB_14096c390) {
        ppuVar1 = *(undefined ***)PTR_PTR_140bc9ce8;
      }
      else {
        FUN_1408e5690(&PTR_LAB_14096c390);
        ppuVar1 = *(undefined ***)puVar2;
      }
      if (ppuVar1 != &PTR_LAB_14096c390) {
        FUN_1408e5690(&PTR_LAB_14096c390);
      }
      uVar5 = (ulonglong)DVar4 << 0x20 | 2;
    }
    else {
      uVar5 = 0;
    }
    return uVar5;
  }
  uVar5 = FUN_1402b4430(0xb,"console is detached",0x13);
  return uVar5;
}


/* address=14040b860 name=FUN_14040b860 */

ulonglong FUN_14040b860(undefined8 param_1,byte param_2,byte param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  BOOL BVar3;
  DWORD DVar4;
  HANDLE hConsoleOutput;
  ulonglong uVar5;
  
  hConsoleOutput = (HANDLE)FUN_1402d0a80();
  if (hConsoleOutput != (HANDLE)0x0) {
    BVar3 = SetConsoleTextAttribute
                      (hConsoleOutput,
                       ((ushort)(param_3 & 8) | *(ushort *)(&DAT_14096c3bc + (ulonglong)param_3 * 2)
                       ) << 4 | (ushort)(param_2 & 8) |
                                *(ushort *)(&DAT_14096c3bc + (ulonglong)param_2 * 2));
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      puVar2 = PTR_PTR_140bc9ce8;
      if (*(undefined ***)PTR_PTR_140bc9ce8 == &PTR_LAB_14096c390) {
        ppuVar1 = *(undefined ***)PTR_PTR_140bc9ce8;
      }
      else {
        FUN_1408e5690(&PTR_LAB_14096c390);
        ppuVar1 = *(undefined ***)puVar2;
      }
      if (ppuVar1 != &PTR_LAB_14096c390) {
        FUN_1408e5690(&PTR_LAB_14096c390);
      }
      uVar5 = (ulonglong)DVar4 << 0x20 | 2;
    }
    else {
      uVar5 = 0;
    }
    return uVar5;
  }
  uVar5 = FUN_1402b4430(0xb,"console is detac
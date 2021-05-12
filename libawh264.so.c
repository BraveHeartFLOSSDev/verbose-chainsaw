#include "libawh264.so.h"



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



void __cxa_atexit(void)

{
  __cxa_atexit();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}



void SbmBufferAddress(void)

{
  SbmBufferAddress();
  return;
}



void SbmBufferSize(void)

{
  SbmBufferSize();
  return;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void VDecoderRegister(void)

{
  VDecoderRegister();
  return;
}



void __android_log_print(void)

{
  __android_log_print();
  return;
}



void FbmReturnBuffer(void)

{
  FbmReturnBuffer();
  return;
}



void ResetVeInternal(void)

{
  ResetVeInternal();
  return;
}



void FbmDestroy(void)

{
  FbmDestroy();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



void AdapterVeGetBaseAddress(void)

{
  AdapterVeGetBaseAddress();
  return;
}



void FbmEmptyBufferNum(void)

{
  FbmEmptyBufferNum();
  return;
}



void AdapterVeWaitInterrupt(void)

{
  AdapterVeWaitInterrupt();
  return;
}



void SbmStreamFrameNum(void)

{
  SbmStreamFrameNum();
  return;
}



void SbmFlushStream(void)

{
  SbmFlushStream();
  return;
}



void __aeabi_ldivmod(void)

{
  __aeabi_ldivmod();
  return;
}



void SbmRequestStream(void)

{
  SbmRequestStream();
  return;
}



void SbmReturnStream(void)

{
  SbmReturnStream();
  return;
}



void __aeabi_uidiv(void)

{
  __aeabi_uidiv();
  return;
}



void FbmCreate(void)

{
  FbmCreate();
  return;
}



void FbmGetAlignValue(void)

{
  FbmGetAlignValue();
  return;
}



void GetBufferSize(void)

{
  GetBufferSize();
  return;
}



void FbmShareBuffer(void)

{
  FbmShareBuffer();
  return;
}



void FbmValidPictureNum(void)

{
  FbmValidPictureNum();
  return;
}



void __memcpy_chk(void)

{
  __memcpy_chk();
  return;
}



void SbmBufferWritePointer(void)

{
  SbmBufferWritePointer();
  return;
}



void FbmGetBufferOffset(void)

{
  FbmGetBufferOffset();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memmove(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



void __aeabi_uidivmod(void)

{
  __aeabi_uidivmod();
  return;
}



void FbmRequestBuffer(void)

{
  FbmRequestBuffer();
  return;
}



void FUN_00012510(void)

{
  __cxa_finalize(&PTR_LOOP_0001b000);
  return;
}



undefined4 FUN_00012530(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = __cxa_atexit(param_1,0,&PTR_LOOP_0001b000);
  return uVar1;
}



int H264DecoderGetFbm(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (param_1 != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0xcc) + 8);
    iVar1 = *(int *)(iVar2 + 0x9a0);
    if (*(int *)(iVar2 + 0x9a0) != 0) {
      if (param_2 != 0) {
        iVar2 = *(int *)(*(int *)(param_1 + 0xcc) + 0xc);
      }
      iVar1 = iVar2;
      if ((iVar2 != 0) && (iVar1 = *(int *)(iVar2 + 0xb704), *(int *)(iVar2 + 0xb704) == 0)) {
        return *(int *)(iVar2 + 0xb700);
      }
    }
  }
  return iVar1;
}



undefined4 H264DecoderGetFbmNum(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xa8) == 1) {
    uVar1 = 2;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 * CreateH264Decoder(undefined4 param_1)

{
  undefined4 *__s;
  
  __s = (undefined4 *)malloc(0xd4);
  if (__s != (undefined4 *)0x0) {
    memset(__s,0,0xd4);
    *__s = 0x12c3d;
    __s[1] = 0x12a01;
    __s[2] = 0x1260d;
    __s[8] = param_1;
    __s[3] = 0x1259b;
    __s[4] = 0x12571;
    __s[5] = 0x12f55;
    __s[6] = 0x12c09;
  }
  return __s;
}



undefined4 H264DecoderSetSbm(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0xcc);
  if (param_3 == 0) {
    if (*(int *)(iVar2 + 8) == 0) {
      return 0;
    }
    *(undefined4 *)(*(int *)(iVar2 + 8) + 0xb6fc) = param_2;
    iVar3 = *(int *)(iVar2 + 8);
    uVar1 = SbmBufferAddress(param_2);
    *(undefined4 *)(iVar3 + 0xb6f4) = uVar1;
    iVar3 = *(int *)(iVar2 + 8);
    uVar1 = SbmBufferSize(param_2);
    *(undefined4 *)(iVar3 + 0xb6f8) = uVar1;
    iVar2 = *(int *)(iVar2 + 8);
  }
  else {
    if (*(int *)(iVar2 + 0xc) == 0) {
      return 0;
    }
    *(undefined4 *)(*(int *)(iVar2 + 0xc) + 0xb6fc) = param_2;
    iVar3 = *(int *)(iVar2 + 0xc);
    uVar1 = SbmBufferAddress(param_2);
    *(undefined4 *)(iVar3 + 0xb6f4) = uVar1;
    iVar3 = *(int *)(iVar2 + 0xc);
    uVar1 = SbmBufferSize(param_2);
    *(undefined4 *)(iVar3 + 0xb6f8) = uVar1;
    iVar2 = *(int *)(iVar2 + 0xc);
  }
  *(undefined4 *)(iVar2 + 0xb648) = param_2;
  return 0;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_00012680(int param_1,undefined *param_2)

{
  undefined3 uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_2c;
  uint local_28;
  int local_24;
  
  iVar6 = *(int *)(param_1 + 0xcc);
  local_24 = __stack_chk_guard;
  uVar3 = (uint)(byte)param_2[0x10];
  if (((uVar3 == 0) && (*(int *)(param_2 + 4) == 4)) &&
     (puVar2 = *(undefined **)(param_2 + 0xb654), 8 < *(int *)(param_2 + 0xb658) - (int)puVar2)) {
    if (*(int *)(param_1 + 0x68) == 0) {
      iVar5 = CONCAT31(CONCAT21(CONCAT11(*puVar2,puVar2[1]),puVar2[2]),puVar2[3]);
      local_2c._3_1_ = puVar2[8];
      uVar1 = CONCAT21(CONCAT11(puVar2[5],puVar2[6]),puVar2[7]);
    }
    else {
      local_2c = uVar3;
      local_28 = uVar3;
      (**(code **)(iVar6 + 0x30))(puVar2,&local_2c,4);
      iVar5 = CONCAT31(CONCAT21(CONCAT11((undefined)local_2c,local_2c._1_1_),local_2c._2_1_),
                       local_2c._3_1_);
      (**(code **)(iVar6 + 0x30))(*(int *)(param_2 + 0xb654) + 5,&local_2c,4);
      uVar1 = CONCAT21(CONCAT11((undefined)local_2c,local_2c._1_1_),local_2c._2_1_);
    }
    iVar6 = *(int *)(param_2 + 0xb664);
    if ((iVar5 == 1 && 8 < iVar6) && (iVar6 < CONCAT31(uVar1,local_2c._3_1_))) {
      uVar4 = 0;
    }
    else {
      if ((iVar5 < 2 || iVar6 < 4) || (iVar6 < iVar5)) goto LAB_00012776;
      uVar4 = 1;
    }
    *param_2 = uVar4;
  }
LAB_00012776:
  if (local_24 == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void CedarPluginVDInit(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = VDecoderRegister(0x115,&DAT_00019241,0x125a9,0,param_1,param_2,param_3);
  if (iVar1 != 0) {
    __android_log_print(6,"awplayer",&DAT_0001924f,"CedarPluginVDInit",0x52);
  }
  return;
}



undefined4 H264ProcessExtraData(int param_1,undefined *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xcc);
  *(undefined4 *)(param_2 + 0xb758) = *(undefined4 *)(param_1 + 0x68);
  param_2[0x10] = 1;
  iVar1 = (**(code **)(iVar2 + 0x18))(0x400);
  *(int *)(param_2 + 8) = iVar1;
  if (iVar1 != 0) {
    (**(code **)(iVar2 + 0x28))(iVar1,0,0x400);
    (**(code **)(iVar2 + 0x20))(*(undefined4 *)(param_2 + 8),0x400);
    if (**(char **)(param_1 + 0xb0) == '\x01') {
      *param_2 = 1;
      if (6 < *(int *)(param_1 + 0xac)) {
        H264DecodeExtraData(iVar2,(int)param_2,*(int *)(param_1 + 0xb0));
      }
    }
    else {
      *param_2 = 0;
      (**(code **)(iVar2 + 0x34))
                (*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_2 + 8),
                 *(undefined4 *)(param_1 + 0xac));
      *(int *)(param_2 + 0xc) = *(int *)(param_1 + 0xac) + 4;
    }
    (**(code **)(iVar2 + 0x20))(*(undefined4 *)(param_2 + 8),0x400);
    return 0;
  }
  return 0xffffffff;
}



int H264PallocBufferBeforeDecode(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)(param_2 + 0x9a0) == 0) {
    uVar1 = *(int *)(param_1 + 0x98) + 0xf;
    *(uint *)(param_2 + 0xc4) = uVar1 & 0xfffffff0;
    iVar3 = *(int *)(param_1 + 0x94);
    *(undefined *)(param_2 + 0xb0) = 1;
    uVar2 = iVar3 + 0xf;
    *(uint *)(param_2 + 0xbc) = uVar1 >> 4;
    *(uint *)(param_2 + 0xc0) = uVar2 & 0xfffffff0;
    *(uint *)(param_2 + 0xb8) = uVar2 >> 4;
    iVar3 = H264MallocFrmBuffer(param_1,param_2);
    if (iVar3 != 0) {
      __android_log_print(3,"awplayer","<%s:%u>: *********malloc buffer error\n",
                          "H264PallocBufferBeforeDecode",0xa9,param_2);
    }
  }
  return iVar3;
}



void H264FlushDelayedPictures(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  while( true ) {
    iVar6 = *(int *)(param_1 + 0xb5b8);
    iVar2 = 1;
    iVar3 = 0;
    piVar1 = (int *)(param_1 + 0xb5bc);
    iVar7 = iVar6;
    if (iVar6 != 0) {
      while( true ) {
        iVar4 = *piVar1;
        iVar6 = iVar3;
        if ((iVar4 == 0) || (*(char *)(iVar4 + 0xa8) != '\0')) break;
        if ((*(int *)(iVar4 + 0xcc) == 0) && (*(int *)(iVar4 + 0xd0) == 0)) {
          *piVar1 = 0;
        }
        else {
          if (*(int *)(iVar4 + 8) < *(int *)(iVar7 + 8)) {
            iVar3 = iVar2;
            iVar7 = iVar4;
          }
        }
        iVar2 = iVar2 + 1;
        piVar1 = piVar1 + 1;
      }
    }
    puVar5 = (undefined4 *)(param_1 + (iVar6 + 0x2d6f) * 4);
    while (puVar5[-1] != 0) {
      puVar5[-1] = *puVar5;
      puVar5 = puVar5 + 1;
    }
    if (iVar7 == 0) break;
    if (*(int *)(iVar7 + 0xd0) == 0) {
      if (*(int *)(iVar7 + 0xcc) != 0) {
        FbmReturnBuffer(*(undefined4 *)(param_1 + 0xb700),*(int *)(iVar7 + 0xcc),1,puVar5,param_4);
        *(undefined4 *)(*(int *)(iVar7 + 0xc0) * 0xe4 + param_1 + 0xa84) = 0;
        *(undefined4 *)(iVar7 + 0xcc) = 0;
      }
    }
    else {
      FbmReturnBuffer(*(undefined4 *)(param_1 + 0xb704),*(int *)(iVar7 + 0xd0),1,puVar5,param_4);
      *(undefined4 *)(iVar7 + 0xd0) = 0;
      *(undefined4 *)(*(int *)(iVar7 + 0xc0) * 0xe4 + param_1 + 0xa88) = 0;
    }
  }
  do {
    iVar3 = param_1 + iVar7;
    iVar7 = iVar7 + 4;
    *(undefined4 *)(iVar3 + 0xb5b8) = 0;
  } while (iVar7 != 0x80);
  iVar6 = *(int *)(param_1 + 0xb714);
  *(undefined4 *)(param_1 + 0xb6d8) = 0;
  iVar3 = param_1 + iVar6 * 0xe4 + 0x9b8;
  while (iVar6 < *(int *)(param_1 + 0x9a0) + *(int *)(param_1 + 0xb714)) {
    if (*(int *)(iVar3 + 0xcc) != 0) {
      FbmReturnBuffer(*(undefined4 *)(param_1 + 0xb700),*(int *)(iVar3 + 0xcc),0,
                      *(int *)(param_1 + 0xb714),param_4);
    }
    if (*(int *)(iVar3 + 0xd0) != 0) {
      FbmReturnBuffer(*(undefined4 *)(param_1 + 0xb704),*(int *)(iVar3 + 0xd0),0);
    }
    *(undefined4 *)(iVar3 + 0xcc) = 0;
    iVar6 = iVar6 + 1;
    *(undefined4 *)(iVar3 + 0xd0) = 0;
    *(undefined4 *)(iVar3 + 0xa4) = 0;
    *(undefined4 *)(iVar3 + 0xdc) = 0;
    iVar3 = iVar3 + 0xe4;
  }
  return;
}



void H264DecoderRest(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 != 0) {
    ResetVeInternal(*(undefined4 *)(param_1 + 0x20));
    iVar3 = *(int *)(param_1 + 0xcc);
    if (iVar3 != 0) {
      uVar2 = 0;
      *(undefined *)(iVar3 + 0x10) = 0;
      uVar1 = extraout_r1;
      if (*(int *)(iVar3 + 8) != 0) {
        H264FlushDelayedPictures(*(int *)(iVar3 + 8),extraout_r1,param_3,0);
        H264ResetDecoderParams(*(int *)(iVar3 + 8));
        uVar1 = extraout_r1_00;
      }
      if (*(int *)(iVar3 + 0xc) != 0) {
        H264FlushDelayedPictures(*(int *)(iVar3 + 0xc),uVar1,param_3,uVar2);
        H264ResetDecoderParams(*(int *)(iVar3 + 0xc));
        return;
      }
    }
  }
  return;
}



void H264FreeMemory(int param_1,void *param_2)

{
  void **__ptr;
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)((int)param_2 + 0xb72c) != 0) {
    (**(code **)(param_1 + 0x1c))();
    *(undefined4 *)((int)param_2 + 0xb72c) = 0;
  }
  if (*(int *)((int)param_2 + 0xb730) != 0) {
    (**(code **)(param_1 + 0x1c))();
    *(undefined4 *)((int)param_2 + 0xb730) = 0;
  }
  if (*(int *)((int)param_2 + 8) != 0) {
    (**(code **)(param_1 + 0x1c))();
    *(undefined4 *)((int)param_2 + 8) = 0;
  }
  if (*(int *)((int)param_2 + 0xb6b0) != 0) {
    (**(code **)(param_1 + 0x1c))();
    *(undefined4 *)((int)param_2 + 0xb6b0) = 0;
  }
  if (*(int *)((int)param_2 + 0xb6b4) != 0) {
    (**(code **)(param_1 + 0x1c))();
    *(undefined4 *)((int)param_2 + 0xb6b4) = 0;
  }
  if (*(int *)((int)param_2 + 0x9b4) != 0) {
    (**(code **)(param_1 + 0x1c))();
    *(undefined4 *)((int)param_2 + 0x9b4) = 0;
  }
  iVar3 = *(int *)((int)param_2 + 0xb714);
  iVar1 = (int)param_2 + iVar3 * 0xe4 + 0x9b8;
  while (iVar3 < *(int *)((int)param_2 + 0x9a0) + *(int *)((int)param_2 + 0xb714)) {
    if (*(int *)(iVar1 + 0xc4) != 0) {
      (**(code **)(param_1 + 0x1c))();
      *(undefined4 *)(iVar1 + 0xc4) = 0;
    }
    iVar3 = iVar3 + 1;
    iVar1 = iVar1 + 0xe4;
  }
  if (*(int *)((int)param_2 + 0xb6cc) != 0) {
    (**(code **)(param_1 + 0x1c))();
    *(undefined4 *)((int)param_2 + 0xb6cc) = 0;
  }
  if (*(char *)((int)param_2 + 0xb6c9) == '\x01') {
    iVar3 = 0;
    iVar1 = *(int *)((int)param_2 + 0xb714);
    iVar5 = iVar1 * 0xb0;
    while (iVar1 < *(int *)((int)param_2 + 0x9a0) + *(int *)((int)param_2 + 0xb714)) {
      iVar4 = iVar3 + iVar5;
      if (*(int *)(*(int *)(*(int *)((int)param_2 + 0xb700) + 0x24) + iVar4 + 0x74) != 0) {
        (**(code **)(param_1 + 0x1c))();
        *(undefined4 *)(iVar4 + *(int *)(*(int *)((int)param_2 + 0xb700) + 0x24) + 0x74) = 0;
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0xb0;
    }
  }
  if (*(int *)((int)param_2 + 0xb700) != 0) {
    FbmDestroy();
    *(int *)((int)param_2 + 0xb700) = 0;
  }
  if (*(int *)((int)param_2 + 0xb704) != 0) {
    FbmDestroy();
    *(undefined4 *)((int)param_2 + 0xb704) = 0;
  }
  __ptr = *(void ***)((int)param_2 + 0xb750);
  if (__ptr != (void **)0x0) {
    if (*__ptr != (void *)0x0) {
      free(*__ptr);
    }
    *__ptr = (void *)0x0;
    free(__ptr);
    *(undefined4 *)((int)param_2 + 0xb750) = 0;
  }
  iVar1 = 0;
  pvVar2 = param_2;
  while (iVar1 < (int)(uint)*(byte *)((int)param_2 + 0xe0)) {
    iVar1 = iVar1 + 1;
    free(*(void **)((int)param_2 + (uint)*(byte *)((int)pvVar2 + 0xe2) * 4 + 0x124));
    *(undefined4 *)((int)param_2 + (*(byte *)((int)pvVar2 + 0xe2) + 0x48) * 4 + 4) = 0;
    pvVar2 = (void *)((int)pvVar2 + 1);
  }
  iVar1 = 0;
  pvVar2 = param_2;
  while (iVar1 < (int)(uint)*(byte *)((int)param_2 + 0xe1)) {
    iVar1 = iVar1 + 1;
    free(*(void **)((int)param_2 + (uint)*(byte *)((int)pvVar2 + 0x102) * 4 + 0x1a4));
    *(undefined4 *)((int)param_2 + (*(byte *)((int)pvVar2 + 0x102) + 0x68) * 4 + 4) = 0;
    pvVar2 = (void *)((int)pvVar2 + 1);
  }
  free(param_2);
  return;
}



void Destroy(void *param_1)

{
  void *__ptr;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  __ptr = *(void **)((int)param_1 + 0xcc);
  if (__ptr != (void *)0x0) {
    if (*(void **)((int)__ptr + 8) != (void *)0x0) {
      H264FreeMemory((int)__ptr,*(void **)((int)__ptr + 8));
    }
    if (*(void **)((int)__ptr + 0xc) != (void *)0x0) {
      H264FreeMemory((int)__ptr,*(void **)((int)__ptr + 0xc));
    }
    free(__ptr);
  }
  free(param_1);
  return;
}



int H264DecoderInit(void *param_1,void *param_2,void *param_3,undefined4 param_4)

{
  int *__s;
  undefined *puVar1;
  int iVar2;
  void **ppvVar3;
  void *pvVar4;
  int iVar5;
  
  memcpy((void *)((int)param_1 + 0x24),param_2,0x6c);
  memcpy((void *)((int)param_1 + 0x90),param_3,0x3c);
  *(undefined4 *)((int)param_1 + 0xd0) = param_4;
  if (*(int *)((int)param_1 + 0x54) == 1) {
    *(undefined4 *)((int)param_1 + 0xa8) = 0;
  }
  __s = (int *)malloc(0x38);
  if (__s != (int *)0x0) {
    memset(__s,0,0x38);
    *(int **)((int)param_1 + 0xcc) = __s;
    if (*(int *)((int)param_1 + 0x68) == 0) {
      __s[6] = (int)AdapterMemPalloc;
      __s[7] = (int)AdapterMemPfree;
      __s[8] = (int)AdapterMemFlushCache;
      __s[9] = (int)AdapterMemGetPhysicAddress;
      __s[10] = (int)AdapterMemSet;
      __s[0xb] = (int)AdapterMemCopy;
      iVar5 = -0x6c;
      __s[0xc] = (int)AdapterMemRead;
    }
    else {
      __s[6] = (int)AdapterSecureMemAdapterAlloc;
      __s[7] = (int)AdapterSecureMemAdapterFree;
      __s[8] = (int)AdapterSecureMemAdapterFlushCache;
      __s[9] = (int)AdapterSecureMemAdapterGetPhysicAddress;
      __s[10] = (int)AdapterSecureMemAdapterSet;
      __s[0xb] = (int)AdapterSecureMemAdapterCopy;
      __s[0xc] = (int)AdapterSecureMemAdapterRead;
      iVar5 = -0x4c;
    }
    __s[0xd] = *(int *)((int)&__DT_PLTGOT + iVar5);
    iVar5 = AdapterVeGetBaseAddress();
    iVar5 = iVar5 + 0x200;
    __s[1] = iVar5;
    *__s = gVeVersion;
    puVar1 = (undefined *)malloc(0xb7c8);
    __s[2] = (int)puVar1;
    if ((puVar1 != (undefined *)0x0) &&
       (iVar5 = H264InitDecode((int)param_1,__s,puVar1,iVar5), -1 < iVar5)) {
      iVar5 = __s[2];
      *(undefined4 *)(iVar5 + 0xb758) = *(undefined4 *)((int)param_1 + 0x68);
      H264ResetDecoderParams(__s[2]);
      if ((*(int *)((int)param_1 + 0xb0) == 0) ||
         (iVar2 = H264ProcessExtraData((int)param_1,(undefined *)__s[2]), -1 < iVar2)) {
        if (*(int *)((int)param_1 + 0xa8) != 1) {
LAB_00012da6:
          if ((*(int *)((int)param_1 + 0x7c) != 1) || (*(int *)((int)param_1 + 0x94) < 1)) {
            return 0;
          }
          if (*(int *)((int)param_1 + 0x98) < 1) {
            iVar5 = 0;
          }
          else {
            iVar5 = H264PallocBufferBeforeDecode((int)param_1,__s[2]);
            if ((iVar5 == 0) && (*(int *)((int)param_1 + 0xa8) == 1)) {
              iVar5 = H264PallocBufferBeforeDecode((int)param_1,__s[3]);
              return iVar5;
            }
          }
          return iVar5;
        }
        puVar1 = (undefined *)malloc(0xb7c8);
        __s[3] = (int)puVar1;
        if (((puVar1 != (undefined *)0x0) &&
            (iVar5 = H264InitDecode((int)param_1,__s,puVar1,iVar5), -1 < iVar5)) &&
           (ppvVar3 = (void **)malloc(8), ppvVar3 != (void **)0x0)) {
          pvVar4 = malloc(0xc);
          *ppvVar3 = pvVar4;
          if (pvVar4 != (void *)0x0) {
            *(void ***)(__s[3] + 0xb750) = ppvVar3;
            H264ResetDecoderParams(__s[3]);
            *(undefined *)(__s[3] + 0x10) = 0;
            *(undefined4 *)(__s[3] + 0xc) = 0;
            *(undefined4 *)(__s[3] + 8) = 0;
            *(undefined *)__s[3] = *(undefined *)__s[2];
            goto LAB_00012da6;
          }
        }
      }
    }
    if ((void *)__s[2] != (void *)0x0) {
      H264FreeMemory((int)__s,(void *)__s[2]);
    }
    if ((void *)__s[3] != (void *)0x0) {
      H264FreeMemory((int)__s,(void *)__s[3]);
    }
    free(__s);
    *(undefined4 *)((int)param_1 + 0xcc) = 0;
  }
  free(param_1);
  return -1;
}



undefined * H264SearchNaluSize(int param_1,int param_2,uint param_3,size_t param_4)

{
  undefined *__ptr;
  undefined *puVar1;
  code *pcVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  undefined auStack292 [256];
  int local_24;
  
  local_24 = __stack_chk_guard;
  memset(auStack292,0,0x100);
  if ((int)param_4 < 0x101) {
    __ptr = (undefined *)0x0;
    puVar4 = auStack292;
  }
  else {
    __ptr = (undefined *)malloc(param_4);
    puVar4 = __ptr;
    if (__ptr == (undefined *)0x0) {
      __android_log_print(6,"awplayer",&DAT_000192ac,"H264SearchNaluSize",0x31a,param_4);
      goto LAB_00012f2c;
    }
  }
  pcVar2 = *(code **)(param_1 + 0x30);
  puVar1 = puVar4;
  if (param_3 <= param_2 + param_4) {
    (*pcVar2)(param_2,puVar4,param_3 - param_2);
    pcVar2 = *(code **)(param_1 + 0x30);
    puVar1 = puVar4 + (param_3 - param_2);
  }
  (*pcVar2)(param_2,puVar1);
  iVar5 = 0;
  uVar3 = 0xffffffff;
  while ((iVar5 < (int)param_4 && (uVar3 = (uint)(byte)puVar4[iVar5] | uVar3 << 8, uVar3 != 1))) {
    iVar5 = iVar5 + 1;
  }
  if ((iVar5 < (int)(param_4 - 1)) && ((puVar4[iVar5 + 1] & 0x1f) == 8)) {
    if (__ptr != (undefined *)0x0) {
      free(__ptr);
    }
    puVar4 = (undefined *)(iVar5 + 1);
  }
  else {
    puVar4 = __ptr;
    if (__ptr != (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
      free(__ptr);
    }
  }
LAB_00012f2c:
  if (local_24 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return puVar4;
}



// WARNING: Type propagation algorithm not settling

uint H264DecoderDecode(uint param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                      undefined4 param_6)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  byte *pbVar9;
  char *pcVar10;
  undefined *puVar11;
  int iVar12;
  int *piVar13;
  byte **ppbVar14;
  byte *pbVar15;
  undefined *puVar16;
  byte *pbVar17;
  bool bVar18;
  undefined8 uVar19;
  byte local_2a;
  byte local_29 [5];
  
  iVar12 = *(int *)(param_1 + 0xcc);
  local_2a = 0;
  if (*(char *)(iVar12 + 0x10) == '\0') {
    pcVar10 = *(char **)(iVar12 + 8);
    *(undefined4 *)(pcVar10 + 0xb714) = 0;
  }
  else {
    pcVar10 = *(char **)(iVar12 + 0xc);
    *(undefined4 *)(pcVar10 + 0xb714) = 9;
  }
  pcVar4 = pcVar10 + 0xb708;
  *(int *)(pcVar10 + 0xb754) = param_2;
  *(undefined4 *)(pcVar10 + 0xb768) = param_4;
  *(undefined4 *)(pcVar10 + 0xb760) = param_5;
  *(undefined4 *)(pcVar10 + 0xb764) = param_6;
  *(uint *)(pcVar10 + 0xb770) = param_3;
  if (pcVar10[0xb708] == '\0') {
    ResetVeInternal(*(undefined4 *)(param_1 + 0x20));
    H264InitFuncCtrlRegister(param_1);
    pcVar10[0xb709] = '\x01';
    pcVar10[0xb70a] = '\x01';
    if (pcVar10[0x10] == '\x01') {
      (**(code **)(iVar12 + 0x20))(*(undefined4 *)(pcVar10 + 8),*(undefined4 *)(pcVar10 + 0xc));
      H264SetVbvParams(iVar12,(int)pcVar10,*(int *)(pcVar10 + 8),*(int *)(pcVar10 + 8) + 0x3ff,
                       *(int *)(pcVar10 + 0xc),7);
    }
    else {
      iVar2 = *(int *)(pcVar10 + 0xb6f4);
      iVar7 = iVar2 + *(int *)(pcVar10 + 0xb6f8) + -1;
      H264SetVbvParams(iVar12,(int)pcVar10,iVar2,iVar7,0,7);
      uVar5 = H264RequestBitstreamData(param_1,(int)pcVar10,iVar2,iVar7);
      if (uVar5 != 0) {
        *pcVar4 = '\x01';
        return uVar5;
      }
    }
    FUN_00012680(param_1,pcVar10);
    if ((pcVar10[0x10] == '\x01') || (*pcVar10 == '\0')) {
      cVar3 = '\x02';
    }
    else {
      cVar3 = '\x03';
    }
    pcVar10[0xb708] = cVar3;
  }
  if (pcVar10[0xb708] != '\x01') goto LAB_000130fc;
  if (pcVar10[0xb70a] == '\x01') {
    pcVar10[0xb6e0] = (char)param_3;
    uVar5 = param_3 | *(uint *)(pcVar10 + 0xb6b8);
    *(uint *)(pcVar10 + 0xb6b8) = uVar5;
    if ((*(int *)(pcVar10 + 0xb700) == 0) || (iVar2 = FbmEmptyBufferNum(), iVar2 != 0)) {
      if ((*(int *)(pcVar10 + 0xb704) == 0) || (iVar2 = FbmEmptyBufferNum(), iVar2 != 0)) {
        pcVar10[0xb70a] = '\0';
        goto LAB_000130a6;
      }
    }
    else {
      H264ProcessDecodeFrameBuffer(param_1,(int)pcVar10,uVar5);
    }
LAB_00013844:
    uVar5 = 4;
  }
  else {
LAB_000130a6:
    if (((*(int *)(pcVar10 + 0xb64c) != 0) || (4 < *(int *)(pcVar10 + 0xb664))) ||
       (uVar5 = H264RequestBitstreamData(param_1,(int)pcVar10,0,pcVar10 + 0xb600), uVar5 == 0)) {
      ResetVeInternal(*(undefined4 *)(param_1 + 0x20));
      H264InitFuncCtrlRegister(param_1);
      FUN_00012680(param_1,pcVar10);
      if ((pcVar10[0x10] == '\x01') || (*pcVar10 == '\0')) {
        pcVar10[0xb708] = '\x02';
        pcVar10[0xb76c] = '\0';
      }
      else {
        pcVar10[0xb708] = '\x03';
      }
LAB_000130fc:
      uVar5 = 0;
LAB_00013462:
      if (*pcVar4 == '\x02') {
        if (*(int *)(param_1 + 0xbc) == 0) {
          bVar1 = 1 - pcVar10[0xb76c];
          if (1 < (byte)pcVar10[0xb76c]) {
            bVar1 = 0;
          }
          if (param_2 == 0) {
            bVar1 = bVar1 & 1;
          }
          else {
            bVar1 = 0;
          }
          if ((bVar1 != 0) && (pcVar10[0x10] == '\0')) {
            iVar2 = H264JudgeFrameEnd(param_1,(int)pcVar10);
            if (iVar2 < 0) {
              *pcVar4 = '\x01';
              return 5;
            }
            pcVar10[0xb76c] = '\x01';
          }
        }
        iVar2 = *(int *)(pcVar10 + 0xb664);
        piVar13 = (int *)(pcVar10 + 0xb664);
        pbVar9 = *(byte **)(pcVar10 + 0xb654);
        H264SearchStartcode(param_1,(int)pcVar10);
        AdapterVeWaitInterrupt();
        H264CheckBsDmaBusy(param_1);
        H264VeIsr(param_1);
        H264UpdateDataPointer(param_1,(int)pcVar10,1);
        pbVar17 = pbVar9 + iVar2;
        if (*(byte **)(pcVar10 + 0xb658) <= pbVar17) {
          pbVar17 = pbVar9 + (iVar2 - *(int *)(pcVar10 + 0xb6f8));
        }
        pbVar15 = *(byte **)(pcVar10 + 0xb654);
        if (pbVar17 <= pbVar15) {
          uVar6 = (uint)(pbVar15 < pbVar9);
          if (pbVar9 <= pbVar17) {
            uVar6 = 1;
          }
          if (uVar6 == 0) goto LAB_000131c2;
          *piVar13 = 0;
LAB_00013418:
          iVar2 = *piVar13;
          if (iVar2 < 5) {
            if (pcVar10[0x10] == '\x01') {
              pcVar10[0x10] = '\0';
              pcVar10[0xb708] = '\0';
              return 0;
            }
            SbmFlushStream(*(undefined4 *)(pcVar10 + 0xb648),*(undefined4 *)(pcVar10 + 0xb64c));
            *(undefined4 *)(pcVar10 + 0xb64c) = 0;
            uVar5 = H264RequestBitstreamData(param_1,(int)pcVar10,iVar2,uVar6);
            if (uVar5 != 0) {
              pcVar10[0xb708] = '\x01';
              pcVar10[0xb709] = '\0';
              return uVar5;
            }
          }
          goto LAB_00013462;
        }
LAB_000131c2:
        iVar7 = *(int *)(pcVar10 + 0xb650);
        uVar6 = *piVar13 << 3;
        if (*(int *)(param_1 + 0x68) == 0) {
          local_2a = *pbVar15;
        }
        else {
          (**(code **)(iVar12 + 0x30))(pbVar15,&local_2a,1);
        }
        local_2a = local_2a & 0x1f;
        if (*piVar13 < 7) {
          if (((local_2a == 8) && (pcVar10[0x10] == '\0')) &&
             (iVar7 = SbmStreamFrameNum(*(undefined4 *)(pcVar10 + 0xb648)), iVar7 == 1)) {
            *(byte **)(pcVar10 + 0xb654) = pbVar9;
            *piVar13 = iVar2;
LAB_00013274:
            pcVar10[0xb708] = (char)iVar7;
            return 5;
          }
        }
        else {
          H264SearchStartcode(param_1,(int)pcVar10);
          AdapterVeWaitInterrupt();
          H264CheckBsDmaBusy(param_1);
          uVar5 = H264VeIsr(param_1);
          if ((int)(uVar5 << 0x1f) < 0) {
            uVar5 = H264GetbitOffset(param_1,1);
            uVar6 = (int)(pbVar15 + -iVar7) * 8;
            if (uVar5 < uVar6) {
              uVar6 = uVar6 - uVar5;
            }
            else {
              uVar6 = uVar5 + (int)(pbVar15 + -iVar7) * -8;
            }
            if ((local_2a == 8) && (pcVar10[0x10] == '\0')) {
              uVar19 = H264CheckNextStartCode(iVar12,(int)pcVar10,uVar5,(uint)pbVar17);
              if (((int)uVar19 == 0) &&
                 (iVar7 = SbmStreamFrameNum(*(undefined4 *)(pcVar10 + 0xb648),
                                            (int)((ulonglong)uVar19 >> 0x20)), iVar7 == 1)) {
                *(byte **)(pcVar10 + 0xb654) = pbVar9;
                *(int *)(pcVar10 + 0xb664) = iVar2;
                goto LAB_00013274;
              }
            }
          }
        }
        H264ConfigureEptbDetect(param_1,(int)pcVar10,uVar6,1);
        uVar5 = H264GetBits(param_1,8);
        pcVar10[0x11] = (uVar5 & 0x60) != 0;
        local_2a = (byte)(uVar5 & 0x1f);
        uVar19 = H264ProcessNaluUnit(param_1,pcVar10,uVar5 & 0x1f,uVar6,*(byte *)(iVar12 + 0x10));
        uVar5 = (uint)uVar19;
        bVar18 = uVar5 == 1 || uVar5 == 3;
        if (uVar5 == 1 || uVar5 == 3) {
          H264UpdateDataPointer(param_1,(int)pcVar10,0);
          if (*(int *)(pcVar10 + 0xb664) < 5) {
            SbmFlushStream(*(undefined4 *)(pcVar10 + 0xb648),*(undefined4 *)(pcVar10 + 0xb64c));
            *(undefined4 *)(pcVar10 + 0xb64c) = 0;
          }
          pcVar10[0xb708] = '\x04';
          goto LAB_00013322;
        }
        if (uVar5 == 0xfb) {
          if ((*(char *)(iVar12 + 0x10) == '\x01') && (bVar18 = local_2a == 0xe, local_2a == 0x14))
          {
            bVar18 = true;
          }
          if ((bool)((local_2a == 5 || local_2a == 1) | bVar18)) {
            pcVar10[0xb76c] = '\0';
          }
          goto LAB_00013462;
        }
        if (uVar5 == 0) {
          H264UpdateDataPointer(param_1,(int)pcVar10,0);
          goto LAB_00013418;
        }
        if (uVar5 != 0xff) {
          if (uVar5 != 4) {
            return uVar5;
          }
          uVar5 = *(int *)(pcVar10 + 0xb654) - 4;
          bVar18 = uVar5 < *(uint *)(pcVar10 + 0xb650);
          *(uint *)(pcVar10 + 0xb654) = uVar5;
          if (bVar18) {
            uVar5 = uVar5 + *(int *)(pcVar10 + 0xb664);
          }
          if (bVar18) {
            *(uint *)(pcVar10 + 0xb654) = uVar5;
          }
          pcVar10[0xb708] = '\x01';
          *(int *)(pcVar10 + 0xb664) = *(int *)(pcVar10 + 0xb664) + 4;
          pcVar10[0xb709] = '\x01';
          goto LAB_00013844;
        }
        uVar6 = *(uint *)(pcVar10 + 0xb650);
        pcVar10[0xb708] = '\x04';
        uVar5 = *(int *)(pcVar10 + 0xb654) - 4;
        bVar18 = uVar5 < uVar6;
        pcVar10[0xb6c8] = '\x02';
        if (bVar18) {
          uVar6 = *(uint *)(pcVar10 + 0xb664);
        }
        *(uint *)(pcVar10 + 0xb654) = uVar5;
        if (bVar18) {
          uVar5 = uVar5 + uVar6;
        }
        if (bVar18) {
          *(uint *)(pcVar10 + 0xb654) = uVar5;
        }
        *(int *)(pcVar10 + 0xb664) = *(int *)(pcVar10 + 0xb664) + 4;
        uVar5 = 1;
      }
LAB_00013322:
      ppbVar14 = (byte **)(pcVar10 + 0xb654);
      puVar11 = (undefined *)0x0;
      goto LAB_00013712;
    }
  }
  return uVar5;
LAB_00013712:
  if (*pcVar4 != '\x03') goto LAB_00013722;
  puVar16 = puVar11;
  if (puVar11 == (undefined *)0x0) {
    while ((int)puVar11 < *(int *)(pcVar10 + 4)) {
      if (*(int *)(param_1 + 0x68) == 0) {
        bVar1 = **ppbVar14;
      }
      else {
        (**(code **)(iVar12 + 0x30))(*ppbVar14,local_29,1);
        bVar1 = local_29[0];
      }
      pbVar9 = *ppbVar14;
      *ppbVar14 = pbVar9 + 1;
      if (*(byte **)(pcVar10 + 0xb658) < pbVar9 + 1) {
        *ppbVar14 = *(byte **)(pcVar10 + 0xb650);
      }
      puVar11 = puVar11 + 1;
      puVar16 = (undefined *)((int)puVar16 * 0x100 + (uint)bVar1);
    }
    *(int *)(pcVar10 + 0xb664) = *(int *)(pcVar10 + 0xb664) - *(int *)(pcVar10 + 4);
  }
  puVar8 = *(undefined **)(pcVar10 + 0xb664);
  if (puVar16 == (undefined *)0x0 || puVar8 < puVar16) {
    puVar11 = (undefined *)0x0;
  }
  else {
    if (*(int *)(param_1 + 0x68) == 0) {
      local_2a = **ppbVar14;
    }
    else {
      (**(code **)(iVar12 + 0x30))(*ppbVar14,&local_2a,1);
    }
    bVar1 = local_2a & 0x60;
    local_2a = local_2a & 0x1f;
    pcVar10[0x11] = bVar1 != 0;
    if (local_2a == 6) {
      H264CheckBsDmaBusy(param_1);
      ResetVeInternal(*(undefined4 *)(param_1 + 0x20));
    }
    puVar11 = (undefined *)0x0;
    if ((local_2a == 7) &&
       (puVar11 = H264SearchNaluSize(iVar12,(int)*ppbVar14,*(uint *)(pcVar10 + 0xb658),
                                     (size_t)puVar16), puVar16 <= puVar11)) {
      puVar11 = (undefined *)0x0;
    }
    H264ConfigureAvcRegister(param_1,(int)pcVar10,1,(int)puVar16 << 3);
    H264GetBits(param_1,8);
    uVar19 = H264ProcessNaluUnit(param_1,pcVar10,(uint)local_2a,(int)puVar16 << 3,
                                 *(byte *)(iVar12 + 0x10));
    uVar5 = (uint)uVar19;
    if (local_2a == 6) {
      ResetVeInternal(*(undefined4 *)(param_1 + 0x20),(int)((ulonglong)uVar19 >> 0x20));
    }
    if (uVar5 == 1 || uVar5 == 3) {
      iVar2 = *(int *)(pcVar10 + 0xb664);
      *(int *)(pcVar10 + 0xb664) = iVar2 - (int)puVar16;
      *(undefined **)(pcVar10 + 0xb654) = puVar16 + *(int *)(pcVar10 + 0xb654);
      if (iVar2 - (int)puVar16 < 1) {
        SbmFlushStream(*(undefined4 *)(pcVar10 + 0xb648),*(undefined4 *)(pcVar10 + 0xb64c));
        *(undefined4 *)(pcVar10 + 0xb64c) = 0;
      }
      if (*(uint *)(pcVar10 + 0xb658) < *(uint *)(pcVar10 + 0xb654)) {
        *(uint *)(pcVar10 + 0xb654) =
             *(uint *)(pcVar10 + 0xb654) +
             ~(*(uint *)(pcVar10 + 0xb658) - *(int *)(pcVar10 + 0xb650));
      }
      pcVar10[0xb708] = '\x04';
LAB_00013722:
      if (pcVar10[0xb708] != '\x04') {
        return uVar5;
      }
      if (uVar5 == 1 || uVar5 == 3) {
        if (((*(char *)(*(int *)(pcVar10 + 0xb644) + 0xe1) == '\x01') &&
            (*(int *)(param_1 + 0x44) == 1)) && (*(int *)(param_1 + 0x5c) == 0)) {
          uVar5 = 0;
        }
        pcVar10[0xb709] = '\x01';
        *(undefined4 *)(pcVar10 + 0x90) = *(undefined4 *)(pcVar10 + 0x8c);
        *(undefined4 *)(pcVar10 + 0x94) = *(undefined4 *)(pcVar10 + 0x3c);
        *(undefined4 *)(pcVar10 + 0x9c) = *(undefined4 *)(pcVar10 + 0xa0);
        *(undefined4 *)(pcVar10 + 0x98) = *(undefined4 *)(pcVar10 + 0xa4);
        *(uint *)(*(int *)(pcVar10 + 0xb644) + 0xac) = (uint)(byte)pcVar10[0x16];
        if (pcVar10[0x11] != '\0') {
          *(undefined4 *)(pcVar10 + 0x9c) = *(undefined4 *)(pcVar10 + 0xa0);
          *(undefined4 *)(pcVar10 + 0x98) = *(undefined4 *)(pcVar10 + 0xa4);
          H264ExecuteRefPicMarking
                    ((int)pcVar10,(undefined4 *)(pcVar10 + 0x5a8),*(int *)(pcVar10 + 0xac));
        }
        if (pcVar10[0x13] == '\x01') {
          uVar5 = 0;
        }
        if (pcVar10[0x13] == '\x01') {
          pcVar10[0xb70a] = (char)uVar5;
          pcVar10[0xb709] = (char)uVar5;
        }
        else {
          if (*(int *)(pcVar10 + 0xb644) != 0) {
            *(undefined4 *)(*(int *)(pcVar10 + 0xb644) + 0xdc) = *(undefined4 *)(pcVar10 + 0xb6d4);
            *(int *)(pcVar10 + 0xb6d4) = *(int *)(pcVar10 + 0xb6d4) + 1;
            H264CongigureDisplayParameters(param_1,(int)pcVar10);
            if (*(int *)(param_1 + 0xa8) == 0) {
              H264SortDisplayFrameOrder(param_1,(int)pcVar10,param_3 & 0xff);
            }
            else {
              uVar6 = (uint)*(byte *)(iVar12 + 0x10);
              bVar18 = uVar6 != 1;
              if (bVar18) {
                uVar6 = *(uint *)(pcVar10 + 0xb644);
              }
              if (bVar18) {
                *(uint *)(iVar12 + 0x14) = uVar6;
              }
              else {
                H264SortDisplayFrameOrder(param_1,*(int *)(iVar12 + 8),param_3 & 0xff);
                H264SortDisplayFrameOrder(param_1,(int)pcVar10,param_3 & 0xff);
              }
              *(char *)(iVar12 + 0x10) = '\x01' - *(char *)(iVar12 + 0x10);
            }
          }
          pcVar10[0xb70a] = '\x01';
        }
        pcVar10[0xb708] = '\x01';
        return uVar5;
      }
      return uVar5;
    }
    uVar6 = uVar5;
    if (uVar5 != 0) {
      uVar6 = 1;
    }
    if (uVar5 == 0xfb) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar6 & 1;
    }
    puVar8 = puVar16;
    if (uVar6 != 0) {
      if (uVar5 == 0xff) {
        pcVar10[0xb708] = '\x04';
        pcVar10[0xb6c8] = '\x02';
        uVar5 = *(int *)(pcVar10 + 0xb654) - *(int *)(pcVar10 + 4);
        bVar18 = uVar5 < *(uint *)(pcVar10 + 0xb650);
        *(uint *)(pcVar10 + 0xb654) = uVar5;
        if (bVar18) {
          uVar5 = uVar5 + *(int *)(pcVar10 + 0xb664);
        }
        if (bVar18) {
          *(uint *)(pcVar10 + 0xb654) = uVar5;
        }
        *(int *)(pcVar10 + 0xb664) = *(int *)(pcVar10 + 0xb664) + *(int *)(pcVar10 + 4);
        uVar5 = 1;
        goto LAB_00013722;
      }
      if (uVar5 != 4) {
        return uVar5;
      }
      uVar5 = *(int *)(pcVar10 + 0xb654) - *(int *)(pcVar10 + 4);
      bVar18 = uVar5 < *(uint *)(pcVar10 + 0xb650);
      *(uint *)(pcVar10 + 0xb654) = uVar5;
      if (bVar18) {
        uVar5 = uVar5 + *(int *)(pcVar10 + 0xb664);
      }
      if (bVar18) {
        *(uint *)(pcVar10 + 0xb654) = uVar5;
      }
      *(int *)(pcVar10 + 0xb664) = *(int *)(pcVar10 + 0xb664) + *(int *)(pcVar10 + 4);
      pcVar10[0xb709] = '\x01';
      pcVar10[0xb708] = '\x01';
      goto LAB_00013844;
    }
  }
  if (puVar11 != (undefined *)0x0) {
    puVar11 = puVar8 + -(int)puVar11;
    puVar8 = puVar11;
  }
  pbVar9 = *ppbVar14 + (int)puVar8;
  *ppbVar14 = pbVar9;
  iVar2 = *(int *)(pcVar10 + 0xb664) - (int)puVar8;
  *(int *)(pcVar10 + 0xb664) = iVar2;
  if (*(byte **)(pcVar10 + 0xb658) < pbVar9) {
    *ppbVar14 = pbVar9 + ~(uint)(*(byte **)(pcVar10 + 0xb658) + -*(int *)(pcVar10 + 0xb650));
  }
  if (iVar2 < 1) {
    SbmFlushStream(*(undefined4 *)(pcVar10 + 0xb648),*(undefined4 *)(pcVar10 + 0xb64c));
    *(undefined4 *)(pcVar10 + 0xb64c) = 0;
    uVar5 = H264RequestBitstreamData(param_1,(int)pcVar10,iVar2,pbVar9);
    if (uVar5 != 0) {
      pcVar10[0xb708] = '\x01';
      pcVar10[0xb709] = '\0';
      return uVar5;
    }
  }
  goto LAB_00013712;
}



void H264ResetDecoderParams(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + iVar2 + 0xb5b8);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0xa4) = 0;
      *(undefined4 *)(*(int *)(param_1 + iVar2 + 0xb5b8) + 0xcc) = 0;
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x48);
  if (*(int *)(param_1 + 0xb638) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xb638) + 0xa4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xb638) + 0xcc) = 0;
  }
  if (*(int *)(param_1 + 0xb644) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xb644) + 0xa4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xb644) + 0xcc) = 0;
  }
  H264ReferenceRefresh(param_1);
  *(undefined4 *)(param_1 + 0xb6b8) = 1;
  *(undefined *)(param_1 + 0x14) = 0xff;
  *(undefined *)(param_1 + 0x13) = 0xff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  memset((void *)(param_1 + 0x2738),0,0x3900);
  memset((void *)(param_1 + 0x6038),0,0x3900);
  *(undefined *)(param_1 + 0xb708) = 0;
  *(undefined *)(param_1 + 0xb709) = 0;
  *(undefined *)(param_1 + 0xb6e1) = 1;
  *(undefined4 *)(param_1 + 0xb64c) = 0;
  *(undefined4 *)(param_1 + 0xb6a8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb6ac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb680) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb684) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb678) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb67c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb6d4) = 0;
  *(undefined4 *)(param_1 + 0xb6dc) = 0;
  *(undefined4 *)(param_1 + 0xb6d8) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0xb63c) = 0;
  *(undefined4 *)(param_1 + 0xb640) = 0;
  *(undefined4 *)(param_1 + 0x9b0) = 0;
  *(undefined4 *)(param_1 + 0x9ac) = 0;
  *(undefined4 *)(param_1 + 0xb690) = 0;
  *(undefined4 *)(param_1 + 0xb694) = 0;
  *(undefined4 *)(param_1 + 0xb688) = 0;
  *(undefined4 *)(param_1 + 0xb68c) = 0;
  *(undefined4 *)(param_1 + 0xb698) = 0;
  *(undefined *)(param_1 + 0xb6c8) = 2;
  *(undefined4 *)(param_1 + 0xb7c0) = 0xffffffff;
  return;
}



undefined4 H264InitDecode(int param_1,int *param_2,undefined *param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  memset(param_3,0,0xb7c8);
  iVar1 = (*(code *)param_2[6])(0x20000);
  *(int *)(param_3 + 0xb6b0) = iVar1;
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  (*(code *)param_2[10])(iVar1,0,0x20000,(code *)param_2[10],param_4);
  (*(code *)param_2[8])(*(undefined4 *)(param_3 + 0xb6b0),0x20000);
  iVar1 = (*(code *)param_2[6])(0x4000);
  *(int *)(param_3 + 0xb6b4) = iVar1;
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  (*(code *)param_2[10])(iVar1,0,0x4000);
  (*(code *)param_2[8])(*(undefined4 *)(param_3 + 0xb6b4),0x4000);
  *(undefined4 *)(param_3 + 0xb6bc) = 1;
  *(undefined4 *)(param_3 + 0xb6c0) = 1;
  *(undefined4 *)(param_3 + 0xb6b8) = 1;
  *(undefined4 *)(param_3 + 0xb678) = 0xffffffff;
  *(undefined4 *)(param_3 + 0xb67c) = 0xffffffff;
  *(undefined4 *)(param_3 + 0xb680) = 0xffffffff;
  *(undefined4 *)(param_3 + 0xb684) = 0xffffffff;
  *(undefined4 *)(param_3 + 0xb6a8) = 0xffffffff;
  *(undefined4 *)(param_3 + 0xb6ac) = 0xffffffff;
  iVar1 = *(int *)(param_1 + 0x9c);
  *(int *)(param_3 + 0xb674) = iVar1;
  if (iVar1 != 0) {
    uVar2 = __aeabi_ldivmod(1000000000,0,iVar1,0);
    *(int *)(param_3 + 0xb6a0) = (int)uVar2;
    *(int *)(param_3 + 0xb6a4) = (int)((ulonglong)uVar2 >> 0x20);
  }
  if (*param_2 == 0x1620 || *param_2 == 0x1623) {
    param_3[0xb6c9] = (char)*(undefined4 *)(param_1 + 0x58);
  }
  *(undefined4 *)(param_3 + 0xb6dc) = 0;
  *(undefined4 *)(param_3 + 0xb6d8) = 0;
  param_3[0x14] = 0xff;
  param_3[0x13] = 0xff;
  *param_3 = 0;
  *(undefined4 *)(param_3 + 0xb7c0) = 0xffffffff;
  return 0;
}



ulonglong H264DecodeExtraData(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  undefined4 local_2c;
  int iStack40;
  
  uVar6 = 2;
  puVar2 = *(undefined **)(param_2 + 8);
  *(uint *)(param_2 + 4) = (*(byte *)(param_3 + 4) & 3) + 1;
  local_2c = 0x1000000;
  bVar5 = *(byte *)(param_3 + 5) & 0x1f;
  pbVar4 = (byte *)(param_3 + 6);
  iStack40 = param_3;
  do {
    while ('\0' < (char)bVar5) {
      if (*(int *)(param_2 + 0xb758) == 0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 1;
      }
      else {
        (**(code **)(param_1 + 0x34))(&local_2c,puVar2,4);
      }
      pbVar3 = pbVar4 + 2;
      bVar5 = bVar5 - 1;
      uVar1 = (uint)CONCAT11(*pbVar4,pbVar4[1]);
      pbVar4 = pbVar3 + uVar1;
      (**(code **)(param_1 + 0x34))(pbVar3,puVar2 + 4,uVar1);
      puVar2 = puVar2 + uVar1 + 4;
    }
    uVar1 = uVar6 - 1;
    bVar5 = *pbVar4;
    uVar6 = uVar1 & 0xff;
    pbVar4 = pbVar4 + 1;
  } while (uVar6 != 0);
  *(undefined **)(param_2 + 0xc) = puVar2 + (8 - *(int *)(param_2 + 8));
  return CONCAT44(param_1,uVar1) & 0xffffffff000000ff;
}



undefined4 H264RequestBitstreamData(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined uVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined8 uVar10;
  
  while( true ) {
    uVar10 = SbmRequestStream(*(undefined4 *)(param_2 + 0xb648));
    piVar2 = (int *)uVar10;
    if (piVar2 == (int *)0x0) {
      if (*(int *)(param_2 + 0xb754) == 1) {
        H264FlushDelayedPictures(param_2,(int)((ulonglong)uVar10 >> 0x20),param_3,1);
      }
      return 5;
    }
    if (piVar2[1] != 0) break;
    SbmFlushStream(*(undefined4 *)(param_2 + 0xb648),piVar2);
  }
  if (piVar2[0xb] != 1) {
    if ((*(int *)(param_2 + 0xb770) == 0) && ((~piVar2[2] | ~piVar2[3]) != 0)) {
      iVar3 = *(int *)(param_2 + 0xb6ac);
      bVar9 = *(int *)(undefined8 *)(param_2 + 0xb6a8) != 0;
      if ((int)(iVar3 - (uint)!bVar9) < 0 ==
          (iVar3 < 0 && (int)(iVar3 + -1 + (uint)bVar9) < 0 != iVar3 < 0)) {
        uVar10 = VectorSub(*(undefined8 *)(piVar2 + 2),*(undefined8 *)(param_2 + 0xb6a8),8);
        uVar10 = VectorAdd(uVar10,1999999,8);
        iVar3 = (int)((ulonglong)uVar10 >> 0x20);
        if (0x3d08fe < (uint)uVar10 || iVar3 != 0) {
          uVar1 = *(undefined *)(param_2 + 0xb708);
          H264FlushDelayedPictures(param_2,iVar3,0x3d08fe,0);
          H264ResetDecoderParams(param_2);
          SbmReturnStream(*(undefined4 *)(param_2 + 0xb648),piVar2);
          *(undefined4 *)(param_2 + 0xb6a8) = 0xffffffff;
          *(undefined4 *)(param_2 + 0xb6ac) = 0xffffffff;
          *(undefined *)(param_2 + 0xb708) = uVar1;
          __android_log_print(3,"awplayer","<%s:%u>: diff pts is large than nDiffPts=%lld\n",
                              "H264RequestBitstreamData",0x16f);
          return 5;
        }
      }
    }
    *(int **)(param_2 + 0xb64c) = piVar2;
    iVar3 = piVar2[1];
    *(int *)(param_2 + 0xb664) = iVar3;
    *(int *)(param_2 + 0xb65c) = *piVar2 + iVar3;
    *(int *)(param_2 + 0xb660) = *piVar2;
    *(int *)(param_2 + 0xb654) = *piVar2;
    *(undefined4 *)(param_2 + 0xb680) = 0xffffffff;
    *(undefined4 *)(param_2 + 0xb684) = 0xffffffff;
    uVar7 = piVar2[2];
    uVar8 = piVar2[3];
    if (((~uVar7 | ~uVar8) != 0) &&
       ((*(uint *)(param_2 + 0xb678) ^ uVar7 | *(uint *)(param_2 + 0xb67c) ^ uVar8) != 0)) {
      *(uint *)(param_2 + 0xb6a8) = uVar7;
      *(uint *)(param_2 + 0xb6ac) = uVar8;
      iVar3 = piVar2[3];
      *(int *)(param_2 + 0xb680) = piVar2[2];
      *(int *)(param_2 + 0xb684) = iVar3;
    }
    iVar3 = piVar2[3];
    *(int *)(param_2 + 0xb678) = piVar2[2];
    *(int *)(param_2 + 0xb67c) = iVar3;
    return 0;
  }
  uVar5 = 0;
  piVar2[0xb] = 0;
  SbmReturnStream(*(undefined4 *)(param_2 + 0xb648),piVar2);
  iVar6 = *(int *)(param_1 + 0xcc);
  iVar3 = *(int *)(iVar6 + 8);
  uVar4 = extraout_r1;
  if (iVar3 != 0) {
    H264FlushDelayedPictures(iVar3,extraout_r1,uVar5,param_4);
    uVar4 = extraout_r1_00;
  }
  iVar3 = *(int *)(iVar6 + 0xc);
  if (iVar3 != 0) {
    H264FlushDelayedPictures(iVar3,uVar4,uVar5,param_4);
  }
  return 6;
}



void H264SetVbvParams(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                     undefined4 param_6)

{
  uint uVar1;
  
  *(undefined4 *)(param_2 + 0xb658) = param_4;
  *(int *)(param_2 + 0xb664) = param_5;
  *(int *)(param_2 + 0xb660) = param_3;
  *(int *)(param_2 + 0xb650) = param_3;
  *(int *)(param_2 + 0xb654) = param_3;
  *(int *)(param_2 + 0xb65c) = param_3 + param_5;
  *(undefined4 *)(param_2 + 0xb670) = param_6;
  uVar1 = (**(code **)(param_1 + 0x24))(param_3);
  *(uint *)(param_2 + 0xb668) = (uVar1 & 0xffffff0) + ((uVar1 << 1) >> 0x1d);
  uVar1 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_2 + 0xb658));
  *(uint *)(param_2 + 0xb66c) = uVar1 & 0x7fffffff;
  return;
}



int H264ComputeScaleRatio(uint param_1,uint param_2)

{
  byte bVar1;
  
  if (param_2 != 0) {
    if (param_2 < param_1) {
      bVar1 = __aeabi_uidiv();
      param_2 = 2;
      if (bVar1 < 5) {
        param_2 = (uint)(byte)(&DAT_00019aa5)[bVar1];
      }
    }
    else {
      param_2 = 0;
    }
  }
  return (int)(char)param_2;
}



void H264ComputeOffset(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = *(int *)(param_1 + 0x40);
  uVar4 = *(undefined4 *)(param_2 + 0xd4);
  uVar3 = *(undefined4 *)(param_2 + 200);
  uVar2 = *(undefined4 *)(param_2 + 0xd0);
  uVar1 = *(undefined4 *)(param_2 + 0xcc);
  if (iVar5 == 2) {
    *(undefined4 *)(param_2 + 0xd0) = uVar4;
    *(undefined4 *)(param_2 + 0xcc) = uVar3;
    *(undefined4 *)(param_2 + 0xd4) = uVar2;
    *(undefined4 *)(param_2 + 200) = uVar1;
  }
  else {
    if (iVar5 == 1) {
      *(undefined4 *)(param_2 + 0xb720) = uVar3;
      *(undefined4 *)(param_2 + 0xb71c) = uVar2;
      *(undefined4 *)(param_2 + 0xb724) = uVar1;
      *(undefined4 *)(param_2 + 0xb718) = uVar4;
    }
    else {
      bVar6 = iVar5 == 3;
      if (bVar6) {
        *(undefined4 *)(param_2 + 0xb720) = uVar1;
      }
      if (bVar6) {
        *(undefined4 *)(param_2 + 0xb71c) = uVar4;
      }
      if (bVar6) {
        *(undefined4 *)(param_2 + 0xb724) = uVar3;
      }
      if (bVar6) {
        *(undefined4 *)(param_2 + 0xb718) = uVar2;
      }
    }
  }
  if (*(uint *)(param_1 + 0x30) != 0) {
    *(int *)(param_2 + 0xb718) = *(int *)(param_2 + 0xb718) >> (*(uint *)(param_1 + 0x30) & 0xff);
    *(int *)(param_2 + 0xb71c) = *(int *)(param_2 + 0xb71c) >> (*(uint *)(param_1 + 0x30) & 0xff);
    *(uint *)(param_2 + 200) = *(uint *)(param_2 + 200) >> (*(uint *)(param_1 + 0x30) & 0xff);
    *(uint *)(param_2 + 0xcc) = *(uint *)(param_2 + 0xcc) >> (*(uint *)(param_1 + 0x30) & 0xff);
  }
  if (*(uint *)(param_1 + 0x34) != 0) {
    *(int *)(param_2 + 0xb720) = *(int *)(param_2 + 0xb720) >> (*(uint *)(param_1 + 0x34) & 0xff);
    *(int *)(param_2 + 0xb724) = *(int *)(param_2 + 0xb724) >> (*(uint *)(param_1 + 0x34) & 0xff);
    *(uint *)(param_2 + 0xd0) = *(uint *)(param_2 + 0xd0) >> (*(uint *)(param_1 + 0x34) & 0xff);
    *(uint *)(param_2 + 0xd4) = *(uint *)(param_2 + 0xd4) >> (*(uint *)(param_1 + 0x34) & 0xff);
  }
  *(int *)(param_2 + 0xb71c) = (param_3 - *(int *)(param_2 + 0xb71c)) - *(int *)(param_2 + 0xcc);
  *(int *)(param_2 + 0xb724) = (param_4 - *(int *)(param_2 + 0xb724)) - *(int *)(param_2 + 0xd4);
  *(int *)(param_2 + 0xb720) = *(int *)(param_2 + 0xb720) + *(int *)(param_2 + 0xd0);
  *(int *)(param_2 + 0xb718) = *(int *)(param_2 + 0xb718) + *(int *)(param_2 + 200);
  return;
}



undefined4 H264MallocFrmBuffer(int param_1,int param_2)

{
  undefined uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int local_64;
  int local_5c;
  int local_54;
  int local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  
  if (*(int *)(param_1 + 0xa8) == 1) {
    *(undefined *)(param_2 + 0xb6c9) = 0;
  }
  puVar9 = *(uint **)(param_1 + 0xcc);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    *(undefined4 *)(param_1 + 0x28) = 1;
  }
  if ((*(int *)(param_1 + 0x30) != 0) || (*(int *)(param_1 + 0x34) != 0)) {
    *(undefined4 *)(param_1 + 0x24) = 1;
  }
  iVar12 = *(int *)(param_1 + 0x48);
  local_64 = iVar12;
  if (iVar12 == 4) {
    if (*puVar9 < 0x1667) {
      *(undefined *)(param_2 + 0xb734) = 1;
      local_64 = 7;
    }
    else {
      *(undefined *)(param_2 + 0xb736) = 1;
    }
  }
  else {
    if (iVar12 == 5) {
      uVar13 = *puVar9;
      uVar10 = uVar13;
      if (0x1666 < uVar13) {
        uVar10 = 0xb737;
      }
      if (uVar13 < 0x1667) {
        *(undefined *)(param_2 + 0xb735) = 1;
        local_64 = 7;
      }
      else {
        *(undefined *)(param_2 + uVar10) = 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x48) = 7;
      iVar12 = 7;
      local_64 = iVar12;
    }
  }
  if ((((*(int *)(param_1 + 0x28) == 1) || (*(int *)(param_1 + 0x24) == 1)) ||
      (*(char *)(param_2 + 0xb734) == '\x01')) || (*(char *)(param_2 + 0xb735) == '\x01')) {
    *(undefined *)(param_2 + 0xb6c9) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(char *)(param_2 + 0xb6c9) == '\x01') {
    uVar10 = *(int *)(param_2 + 0xc4) * 4 + 0x3ffU & 0xfffffc00;
    iVar2 = (*(code *)puVar9[6])(uVar10);
    *(int *)(param_2 + 0xb6cc) = iVar2;
    if (iVar2 == 0) {
      *(undefined *)(param_2 + 0xb6c9) = 0;
    }
    else {
      (*(code *)puVar9[10])(iVar2,0,uVar10);
      uVar15 = *(uint *)(param_2 + 0xc0);
      uVar7 = *(uint *)(param_2 + 0xc4);
      uVar13 = uVar15 >> 5;
      uVar6 = 0;
      while (uVar6 != uVar7 >> 4) {
        uVar8 = 0;
        while (uVar8 < uVar15 >> 4) {
          uVar14 = uVar8 >> 1;
          uVar8 = uVar8 + 2;
          *(undefined *)(iVar2 + uVar14) = 0xff;
        }
        uVar6 = uVar6 + 1;
        *(byte *)(iVar2 + uVar13) = *(byte *)(iVar2 + uVar13) & 0xf;
        iVar2 = iVar2 + 0x40;
      }
      *(uint *)(param_2 + 0xb6d0) = uVar10;
      (*(code *)puVar9[8])(*(undefined4 *)(param_2 + 0xb6cc),uVar10);
    }
  }
  uVar13 = *(uint *)(param_2 + 0xc0);
  uVar15 = *(uint *)(param_2 + 0xc4);
  *(undefined4 *)(param_2 + 0xb700) = 0;
  *(undefined4 *)(param_2 + 0xb704) = 0;
  local_5c = *(int *)(param_1 + 0x84) + *(int *)(param_1 + 0x88) + *(int *)(param_1 + 0x8c);
  uVar10 = (uint)*(byte *)(param_2 + 0xb6e1);
  iVar2 = *(int *)(param_1 + 0xd0);
  if (uVar10 == 0) {
    local_5c = local_5c + *(int *)(param_1 + 0x80);
  }
  local_4c = uVar13;
  local_48 = uVar15;
  if (((*(int *)(param_1 + 0x24) == 0) && (*(int *)(param_1 + 0x28) == 0)) &&
     (uVar6 = (uint)*(ushort *)(param_2 + 0xb734), uVar6 == 0)) {
    memset(&local_54,0,0x2c);
    local_50 = *(int *)(param_2 + 0xb4) + *(int *)(iVar2 + 0x44);
    local_54 = local_5c + local_50;
    local_40 = *(undefined4 *)(param_1 + 0x44);
    local_44 = local_64;
    local_38 = *(undefined4 *)(param_1 + 0x70);
    local_3c = *(undefined4 *)(param_1 + 0x6c);
    local_2c = *(undefined4 *)(param_1 + 0x74);
    piVar11 = (int *)(param_2 + 0xb700);
    local_30 = uVar10;
    iVar12 = FbmCreate(&local_54,iVar2);
    *piVar11 = iVar12;
    if (iVar12 == 0) {
      return 0xffffffff;
    }
    H264ComputeOffset(param_1,param_2,uVar13,uVar15);
    uVar1 = FbmGetAlignValue(*piVar11);
    GetBufferSize(local_64,uVar13,uVar15,0,param_2 + 0xb73c,param_2 + 0xb740,param_2 + 0xb744,uVar1,
                  uVar10);
    iVar12 = local_54;
    *(undefined4 *)(param_2 + 0xb738) = *(undefined4 *)(param_2 + 0xb73c);
    *(undefined4 *)(param_2 + 0xb748) = *(undefined4 *)(param_2 + 0xb740);
    *(undefined4 *)(param_2 + 0xb74c) = *(undefined4 *)(param_2 + 0xb744);
    local_64 = local_54;
    if (*(char *)(param_2 + 0xb6c9) == '\x01') {
      while ((int)uVar6 < iVar12) {
        iVar2 = *(int *)(*piVar11 + 0x24) + uVar6 * 0xb0;
        uVar3 = (*(code *)puVar9[6])(*(undefined4 *)(param_2 + 0xb6d0));
        *(undefined4 *)(iVar2 + 0x74) = uVar3;
        iVar2 = *(int *)(*(int *)(*piVar11 + 0x24) + uVar6 * 0xb0 + 0x74);
        if (iVar2 == 0) {
          __android_log_print(3,"awplayer","<%s:%u>: AdapterMemPalloc for mafBuf failed!!",
                              "H264MallocBuffer",0x33e);
          *(undefined *)(param_2 + 0xb6c9) = 0;
          return 0xffffffff;
        }
        uVar6 = uVar6 + 1;
        (*(code *)puVar9[8])(iVar2,*(undefined4 *)(param_2 + 0xb6d0));
      }
    }
  }
  else {
    *(undefined *)(param_2 + 0xb6c9) = 0;
    memset(&local_54,0,0x2c);
    local_54 = *(int *)(param_2 + 0xb4) + *(int *)(iVar2 + 0x44);
    local_3c = *(undefined4 *)(param_1 + 0x6c);
    local_40 = *(undefined4 *)(param_1 + 0x44);
    local_2c = *(undefined4 *)(param_1 + 0x74);
    local_38 = *(undefined4 *)(param_1 + 0x70);
    local_44 = local_64;
    local_34 = 1;
    local_50 = local_54;
    local_30 = uVar10;
    iVar5 = FbmCreate(&local_54,*(undefined4 *)(param_1 + 0xd0));
    *(int *)(param_2 + 0xb700) = iVar5;
    if (iVar5 == 0) {
      return 0xffffffff;
    }
    uVar1 = FbmGetAlignValue();
    GetBufferSize(local_64,uVar13,uVar15,0,param_2 + 0xb73c,param_2 + 0xb740,param_2 + 0xb744,uVar1,
                  uVar10);
    if (*(int *)(param_1 + 0x40) == 3 || *(int *)(param_1 + 0x40) == 1) {
      uVar13 = *(uint *)(param_2 + 0xc4);
      uVar15 = *(uint *)(param_2 + 0xc0);
    }
    uVar13 = uVar13 >> (*(uint *)(param_1 + 0x30) & 0xff);
    uVar15 = uVar15 >> (*(uint *)(param_1 + 0x34) & 0xff);
    iVar5 = *(int *)(iVar2 + 0x48);
    if (*(char *)(param_2 + 0xb6e1) == '\0') {
      iVar5 = iVar5 + *(int *)(param_1 + 0x80);
    }
    memset(&local_54,0,0x2c);
    __android_log_print(5,"awplayer",
                        "<%s:%u>:  h264 scale down fbm buffer number need double check!  ",
                        "H264MallocBuffer",0x375);
    local_40 = *(undefined4 *)(param_1 + 0x44);
    local_50 = *(int *)(param_2 + 0xb4) + *(int *)(iVar2 + 0x44);
    local_3c = *(undefined4 *)(param_1 + 0x6c);
    local_38 = *(undefined4 *)(param_1 + 0x70);
    local_30 = (uint)*(byte *)(param_2 + 0xb6e1);
    local_2c = *(undefined4 *)(param_1 + 0x74);
    local_34 = 2;
    local_54 = iVar5;
    local_4c = uVar13;
    local_48 = uVar15;
    local_44 = iVar12;
    iVar4 = FbmCreate(&local_54,*(undefined4 *)(param_1 + 0xd0));
    *(int *)(param_2 + 0xb704) = iVar4;
    if (iVar4 == 0) {
      return 0xffffffff;
    }
    H264ComputeOffset(param_1,param_2,uVar13,uVar15);
    local_64 = local_5c + *(int *)(param_2 + 0xb4) + *(int *)(iVar2 + 0x44);
    if (local_64 < iVar5) {
      local_64 = iVar5;
    }
    uVar1 = FbmGetAlignValue(*(undefined4 *)(param_2 + 0xb704));
    GetBufferSize(iVar12,uVar13,uVar15,0,param_2 + 0xb738,param_2 + 0xb748,param_2 + 0xb74c,uVar1);
  }
  if (*(int *)(param_2 + 0xb700) != 0) {
    *(int *)(param_2 + 0x9a0) = local_64;
    memset((void *)(param_2 + 0x9b8),0,0x1c80);
    iVar12 = *(int *)(param_2 + 0xb8) * 0x20 *
             (*(int *)(param_2 + 0xbc) * (2 - (uint)*(byte *)(param_2 + 0xb0)) + 1 >> 1);
    if (*(char *)(param_2 + 0xb1) == '\0') {
      iVar12 = iVar12 * 2;
    }
    *(undefined4 *)(param_2 + 0x9b4) = 0;
    uVar10 = iVar12 + 0x3ffU & 0xfffffc00;
    iVar2 = *(int *)(param_2 + 0xb714);
    iVar12 = param_2 + iVar2 * 0xe4 + 0x9b8;
    while (piVar11 = (int *)(param_2 + 0xb714),
          iVar2 < *(int *)(param_2 + 0x9a0) + *(int *)(param_2 + 0xb714)) {
      iVar5 = (*(code *)puVar9[6])(uVar10 << 1);
      *(int *)(iVar12 + 0xc4) = iVar5;
      if (iVar5 == 0) {
        __android_log_print(6,"awplayer",&DAT_00019391,"H264MallocBuffer",0x3ad,iVar2,uVar10 << 2,
                            *(int *)(param_2 + 0x9a0) + *piVar11);
        return 0xffffffff;
      }
      iVar2 = iVar2 + 1;
      *(undefined4 *)(iVar12 + 0xcc) = 0;
      *(uint *)(iVar12 + 200) = iVar5 + uVar10;
      iVar12 = iVar12 + 0xe4;
    }
    piVar11 = *(int **)(param_1 + 0xcc);
    if ((*piVar11 != 0x1625) && (*(uint *)(param_2 + 0xc0) < 0x801)) {
      return 0;
    }
    *(undefined *)(param_2 + 0xb728) = 1;
    iVar12 = (*(code *)piVar11[6])(*(int *)(param_2 + 0xb8) * 0xc0 + 0x1740);
    *(int *)(param_2 + 0xb72c) = iVar12;
    if (iVar12 != 0) {
      iVar12 = (*(code *)piVar11[6])(*(int *)(param_2 + 0xb8) * 0x50 + 0x13b0);
      *(int *)(param_2 + 0xb730) = iVar12;
      if (iVar12 != 0) {
        (*(code *)piVar11[8])
                  (*(undefined4 *)(param_2 + 0xb72c),*(int *)(param_2 + 0xb8) * 0xc0 + 0x1740);
        (*(code *)piVar11[8])
                  (*(undefined4 *)(param_2 + 0xb730),*(int *)(param_2 + 0xb8) * 0x50 + 0x13b0);
        return 0;
      }
    }
  }
  return 0xffffffff;
}



void H264SortDisplayFrameOrder(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int local_30;
  
  if (param_3 == 1) {
    iVar10 = *(int *)(param_2 + 0xb644);
    if ((((*(int *)(param_1 + 0x28) == 1) || (*(int *)(param_1 + 0x24) == 1)) ||
        (*(char *)(param_2 + 0xb734) == '\x01')) || (*(char *)(param_2 + 0xb735) == '\x01')) {
      FbmReturnBuffer(*(undefined4 *)(param_2 + 0xb704),*(undefined4 *)(iVar10 + 0xd0),1);
      *(undefined4 *)(iVar10 + 0xd0) = 0;
      *(undefined4 *)(*(int *)(*(int *)(param_2 + 0xb644) + 0xc0) * 0xe4 + param_2 + 0xa88) = 0;
    }
    else {
      FbmReturnBuffer(*(undefined4 *)(param_2 + 0xb700),*(undefined4 *)(iVar10 + 0xcc));
      *(undefined4 *)(iVar10 + 0xcc) = 0;
      *(undefined4 *)(*(int *)(*(int *)(param_2 + 0xb644) + 0xc0) * 0xe4 + param_2 + 0xa84) = 0;
    }
    *(undefined4 *)(iVar10 + 0xa4) = 0;
    return;
  }
  iVar10 = *(int *)(param_2 + 0xb644);
  if (*(int *)(iVar10 + 0xbc) != *(int *)(iVar10 + 0xc0)) {
    *(undefined4 *)(*(int *)(iVar10 + 0xbc) * 0xe4 + param_2 + 0xa84) = 0;
    *(undefined4 *)(*(int *)(iVar10 + 0xbc) * 0xe4 + param_2 + 0xa88) = 0;
    *(undefined4 *)(*(int *)(iVar10 + 0xbc) * 0xe4 + param_2 + 0xa5c) = 0;
  }
  iVar4 = 0xff;
  local_30 = 0;
  iVar14 = *(int *)(param_2 + 0xb6d8);
  iVar18 = 0;
  iVar17 = 0;
  *(int *)(param_2 + (iVar14 + 0x2d6e) * 4) = iVar10;
  iVar10 = 0x7fffffff;
  *(undefined4 *)(param_2 + (iVar14 + 0x2d6f) * 4) = 0;
  iVar6 = 0;
  *(int *)(param_2 + 0xb6d8) = iVar14 + 1;
  *(undefined4 *)(param_2 + 0xb644) = 0;
  iVar12 = 0;
  iVar16 = 0xff;
  while (iVar6 < iVar14 + 1) {
    iVar1 = *(int *)(param_2 + iVar6 * 4 + 0xb5b8);
    uVar2 = *(uint *)(iVar1 + 0xa4);
    uVar5 = 1 - uVar2;
    if (1 < uVar2) {
      uVar5 = 0;
    }
    if (uVar2 == 4) {
      uVar5 = uVar5 | 1;
    }
    if (uVar5 == 0) {
      local_30 = local_30 + 1;
    }
    else {
      iVar17 = iVar17 + 1;
    }
    iVar13 = *(int *)(iVar1 + 8);
    iVar11 = iVar12;
    iVar15 = iVar16;
    if ((iVar13 < iVar10) && (iVar4 = iVar6, iVar10 = iVar13, iVar18 != 1)) {
      iVar11 = iVar1;
      iVar15 = iVar6;
      if (*(int *)(param_2 + 0xb6dc) < iVar13) {
        iVar18 = 0;
      }
      else {
        iVar18 = iVar6;
        if (iVar6 != 0) {
          iVar11 = iVar12;
          iVar15 = iVar16;
          iVar18 = 1;
        }
      }
    }
    iVar6 = iVar6 + 1;
    iVar12 = iVar11;
    iVar16 = iVar15;
  }
  if (*(int *)(param_2 + 0xb638) != 0) {
    if ((*(int *)(iVar12 + 8) == 0) && (iVar10 < 0)) {
      iVar12 = *(int *)(param_2 + (iVar4 + 0x2d6e) * 4);
      iVar16 = iVar4;
    }
    iVar10 = *(int *)(iVar12 + 8);
    uVar2 = (uint)*(byte *)(param_2 + 0xb6f0);
    uVar5 = iVar10 - *(int *)(param_2 + 0xb6dc);
    if (iVar17 == 0 && (iVar10 != 0 && uVar5 != uVar2)) {
      if (((uint)(0x20 < (int)uVar5) | uVar5 >> 0x1f) != 0) {
        __android_log_print(6,"awplayer",&DAT_000193ef,"H264SortDisplayFrameOrder",0x454,iVar10,
                            *(int *)(param_2 + 0xb6dc));
        *(uint *)(param_2 + 0xb6dc) = *(int *)(iVar12 + 8) - (uint)*(byte *)(param_2 + 0xb6f0);
        return;
      }
      if (*(int *)(iVar12 + 0xd0) != 0) {
        return;
      }
      if (local_30 < *(int *)(param_2 + 0xb4)) {
        return;
      }
    }
    if (((uVar5 == uVar2) && (*(int *)(param_2 + 0xb6d4) == 2)) && (uVar2 == 2)) {
      return;
    }
  }
  if (iVar12 != 0) {
    *(undefined *)(iVar12 + 0xe0) = 1;
    uVar2 = *(uint *)(param_1 + 0x5c);
    if (uVar2 != 1) {
      if (*(int *)(param_1 + 0xa8) == 0) {
        bVar3 = 1 - *(byte *)(iVar12 + 0xe1);
        if (1 < *(byte *)(iVar12 + 0xe1)) {
          bVar3 = 0;
        }
      }
      else {
        bVar3 = 1;
      }
      uVar2 = (uint)bVar3;
    }
    if (((*(int *)(param_1 + 0x28) == 1) || (*(int *)(param_1 + 0x24) == 1)) ||
       ((*(char *)(param_2 + 0xb734) == '\x01' || (*(char *)(param_2 + 0xb735) == '\x01')))) {
      FbmReturnBuffer(*(undefined4 *)(param_2 + 0xb704),*(undefined4 *)(iVar12 + 0xd0));
      *(undefined4 *)(*(int *)(iVar12 + 0xc0) * 0xe4 + param_2 + 0xa88) = 0;
      *(undefined4 *)(iVar12 + 0xd0) = 0;
      if ((*(int *)(iVar12 + 0xa4) == 4 || *(int *)(iVar12 + 0xa4) == 0) &&
         (*(int *)(iVar12 + 0xcc) != 0)) {
        FbmReturnBuffer(*(undefined4 *)(param_2 + 0xb700),*(int *)(iVar12 + 0xcc),0);
        *(undefined4 *)(*(int *)(iVar12 + 0xc0) * 0xe4 + param_2 + 0xa84) = 0;
        *(undefined4 *)(iVar12 + 0xcc) = 0;
        *(undefined4 *)(iVar12 + 0xa4) = 0;
      }
    }
    else {
      uVar5 = *(uint *)(iVar12 + 0xa4);
      uVar7 = 1 - uVar5;
      if (1 < uVar5) {
        uVar7 = 0;
      }
      if (uVar5 == 4) {
        uVar7 = uVar7 | 1;
      }
      if (uVar7 == 0) {
        if (uVar2 == 1) {
          FbmShareBuffer(*(undefined4 *)(param_2 + 0xb700),*(undefined4 *)(iVar12 + 0xcc));
        }
      }
      else {
        FbmReturnBuffer(*(undefined4 *)(param_2 + 0xb700),*(undefined4 *)(iVar12 + 0xcc));
        *(undefined4 *)(*(int *)(iVar12 + 0xc0) * 0xe4 + param_2 + 0xa84) = 0;
        *(undefined4 *)(iVar12 + 0xcc) = 0;
        *(undefined4 *)(iVar12 + 0xa4) = 0;
        *(undefined *)(iVar12 + 0xe0) = 0;
      }
    }
    iVar10 = *(int *)(param_2 + 0xb6d8);
    puVar8 = (undefined4 *)(param_2 + (iVar16 + 0x2d6e) * 4);
    while (iVar16 < iVar10) {
      iVar16 = iVar16 + 1;
      *puVar8 = puVar8[1];
      puVar8 = puVar8 + 1;
    }
    *(undefined4 *)(param_2 + (iVar16 + 0x2d6e) * 4) = 0;
    uVar9 = *(undefined4 *)(iVar12 + 8);
    *(int *)(param_2 + 0xb6d8) = iVar10 + -1;
    *(int *)(param_2 + 0xb638) = iVar12;
    *(undefined4 *)(param_2 + 0xb6dc) = uVar9;
  }
  return;
}



void H264exchangeValues(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *param_2 = *param_1;
  *param_1 = uVar1;
  return;
}



void H264CongigureDisplayParameters(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if ((((*(int *)(param_1 + 0x28) == 1) || (*(int *)(param_1 + 0x24) == 1)) ||
      (*(char *)(param_2 + 0xb734) == '\x01')) || (*(char *)(param_2 + 0xb735) == '\x01')) {
    iVar2 = *(int *)(*(int *)(param_2 + 0xb644) + 0xd0);
  }
  else {
    iVar2 = *(int *)(*(int *)(param_2 + 0xb644) + 0xcc);
  }
  *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(param_2 + 0xb720);
  *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(param_2 + 0xb718);
  *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(param_2 + 0xb71c);
  *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(param_2 + 0xb724);
  uVar5 = *(undefined4 *)(param_2 + 0xb674);
  *(undefined4 *)(iVar2 + 0x2c) = 1000;
  *(undefined4 *)(iVar2 + 0x28) = uVar5;
  iVar3 = 1000 << (*(uint *)(param_1 + 0x30) & 0xff);
  *(int *)(iVar2 + 0x2c) = iVar3;
  *(int *)(iVar2 + 0x2c) = iVar3 >> (*(uint *)(param_1 + 0x34) & 0xff);
  bVar1 = *(byte *)(param_2 + 0xb6e1);
  *(uint *)(iVar2 + 0x30) = (uint)bVar1;
  uVar4 = (uint)(**(int **)(param_2 + 0xb644) <= (*(int **)(param_2 + 0xb644))[1]);
  *(uint *)(iVar2 + 0x34) = uVar4;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  uVar5 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(iVar2 + 4) = 0;
  *(undefined4 *)(iVar2 + 8) = uVar5;
  *(undefined4 *)(iVar2 + 0x8c) = *(undefined4 *)(param_2 + 0xb7c0);
  if (bVar1 == 0) {
    if (uVar4 != 0) {
      *(uint *)(iVar2 + 0x84) = (uint)*(byte *)(*(int *)(param_2 + 0xb644) + 0xe2);
      *(uint *)(iVar2 + 0x88) = (uint)*(byte *)(*(int *)(param_2 + 0xb644) + 0xe3);
      return;
    }
    *(uint *)(iVar2 + 0x84) = (uint)*(byte *)(*(int *)(param_2 + 0xb644) + 0xe3);
    *(uint *)(iVar2 + 0x88) = (uint)*(byte *)(*(int *)(param_2 + 0xb644) + 0xe2);
  }
  return;
}



void H264ProcessDecodeFrameBuffer(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  
  puVar9 = (undefined4 *)(param_2 + 0xb700);
  iVar7 = *(int *)(param_1 + 0xcc);
  iVar3 = *(int *)(param_2 + 0x9a0);
  iVar12 = param_2;
  iVar1 = FbmValidPictureNum(*puVar9);
  if (*(int *)(param_2 + 0xb4) < (iVar3 - iVar1) + -2) {
    iVar3 = 0xe4;
    iVar1 = 0;
    uVar8 = 0xffffffff;
    iVar5 = *(int *)(param_2 + 0xb714);
    iVar6 = 0;
    iVar4 = param_2 + iVar5 * 0xe4 + 0x9b8;
    puVar11 = puVar9;
    while (iVar5 < *(int *)(param_2 + 0x9a0) + *(int *)(param_2 + 0xb714)) {
      if ((*(int *)(iVar4 + 0xcc) != 0) &&
         (*(int *)(iVar7 + 0x14) != param_2 + iVar3 * iVar5 + 0x9b8)) {
        if ((*(char *)(iVar4 + 0xe0) == '\x01') || (*(int *)(iVar4 + 0xd0) != 0)) {
          uVar2 = *(uint *)(iVar4 + 0xa4);
          uVar10 = 1 - uVar2;
          if (1 < uVar2) {
            uVar10 = 0;
          }
          if (uVar2 == 4) {
            uVar10 = uVar10 | 1;
          }
          if (uVar10 == 0) {
            iVar6 = iVar6 + 1;
            if (*(uint *)(iVar4 + 0xdc) < uVar8) {
              iVar1 = iVar5;
              uVar8 = *(uint *)(iVar4 + 0xdc);
            }
          }
          else {
            FbmReturnBuffer(*puVar9,*(int *)(iVar4 + 0xcc),0);
            *(undefined4 *)(iVar4 + 0xa4) = 0;
            *(undefined4 *)(iVar4 + 0xcc) = 0;
            *(undefined *)(iVar4 + 0xe0) = 0;
            puVar11 = puVar9;
            iVar12 = iVar3;
          }
        }
        else {
          uVar10 = *(uint *)(iVar4 + 0xa4);
          uVar2 = uVar10;
          if (uVar10 != 0) {
            uVar2 = 1;
          }
          if (uVar10 == 4) {
            uVar2 = 0;
          }
          else {
            uVar2 = uVar2 & 1;
          }
          if (uVar2 != 0) {
            iVar6 = iVar6 + 1;
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0xe4;
    }
    if (*(int *)(param_2 + 0xb4) < iVar6) {
      iVar1 = iVar1 * 0xe4 + param_2;
      FbmReturnBuffer(*(undefined4 *)(param_2 + 0xb700),*(undefined4 *)(iVar1 + 0xa84),0,
                      *(int *)(param_2 + 0xb4),puVar11,iVar12,param_3);
      *(undefined4 *)(iVar1 + 0xa84) = 0;
      *(undefined4 *)(iVar1 + 0xa5c) = 0;
      *(undefined *)(iVar1 + 0xa98) = 0;
    }
  }
  return;
}



// WARNING: Type propagation algorithm not settling

undefined8 H264CheckNextStartCode(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  int local_20;
  int iStack28;
  undefined auStack25 [5];
  
  auStack25._1_4_ = param_3;
  iStack28 = param_2;
  local_20 = param_1;
  uVar6 = *(uint *)(param_2 + 0xb658);
  uVar1 = uVar6 - *(int *)(param_2 + 0xb650);
  if (uVar1 + 1 < param_3 >> 3) {
    param_3 = param_3 + ~uVar1 * 8;
  }
  uVar1 = *(int *)(param_2 + 0xb650) + (param_3 >> 3);
  if (param_4 <= uVar1) {
    uVar1 = param_4;
  }
  puVar2 = (undefined4 *)(uVar1 - 6);
  if (uVar6 < uVar1) {
    iVar4 = (uVar6 - (int)puVar2) + 1;
    if (*(int *)(param_2 + 0xb758) == 0) {
      __memcpy_chk(&local_20,puVar2,iVar4,6);
      memcpy((void *)((int)&local_20 + iVar4),*(void **)(param_2 + 0xb650),6 - iVar4);
      puVar2 = &local_20;
      goto LAB_00014a20;
    }
    (**(code **)(param_1 + 0x30))(puVar2,&local_20,iVar4);
    pcVar5 = *(code **)(param_1 + 0x30);
    puVar3 = (undefined4 *)((int)&local_20 + iVar4);
    puVar2 = *(undefined4 **)(param_2 + 0xb650);
    iVar4 = 6 - iVar4;
  }
  else {
    if (*(int *)(param_2 + 0xb758) != 1) goto LAB_00014a20;
    pcVar5 = *(code **)(param_1 + 0x30);
    iVar4 = 6;
    puVar3 = &local_20;
  }
  (*pcVar5)(puVar2,puVar3,iVar4);
  puVar2 = &local_20;
LAB_00014a20:
  iVar4 = 0;
  uVar1 = 0xffffffff;
  do {
    uVar1 = (uint)*(byte *)((int)puVar2 + iVar4) | uVar1 << 8;
    if (uVar1 == 1) goto LAB_00014a38;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 6);
  uVar1 = 0;
LAB_00014a38:
  return CONCAT44(local_20,uVar1);
}



int H264JudgeFrameEnd(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  int *piVar7;
  int iVar8;
  undefined auStack136 [104];
  
  iVar8 = *(int *)(param_1 + 0xcc);
  memcpy(auStack136,(void *)(param_2 + 0xb648),0x68);
  uVar2 = SbmBufferWritePointer(*(undefined4 *)(param_2 + 0xb6fc));
  uVar5 = *(uint *)(param_2 + 0xb654);
  if (uVar2 <= uVar5) {
    iVar3 = SbmBufferSize(*(undefined4 *)(param_2 + 0xb6fc));
    uVar5 = *(uint *)(param_2 + 0xb654);
    uVar2 = uVar2 + iVar3;
  }
  *(uint *)(param_2 + 0xb664) = uVar2 - uVar5;
  piVar7 = (int *)(param_2 + 0xb664);
  *(int *)(param_2 + 0xb65c) = *(int *)(param_2 + 0xb654) + *(int *)(param_2 + 0xb664);
  uVar2 = 0xffffffff;
  do {
    if (*piVar7 < 6) {
LAB_00014b7c:
      cVar6 = -1;
LAB_00014b82:
      memcpy((void *)(param_2 + 0xb648),auStack136,0x68);
      return (int)cVar6;
    }
    H264SearchStartcode(param_1,param_2);
    iVar3 = AdapterVeWaitInterrupt();
    if (iVar3 < 0) {
      __android_log_print(6,"awplayer",&DAT_00019441,"H264JudgeFrameEnd",0x612,*piVar7);
      goto LAB_00014b7c;
    }
    H264CheckBsDmaBusy(param_1);
    uVar5 = H264VeIsr(param_1);
    if (-1 < (int)(uVar5 << 0x1f)) goto LAB_00014b7c;
    *(undefined4 *)(param_2 + 0xb660) = *(undefined4 *)(param_2 + 0xb654);
    H264UpdateDataPointer(param_1,param_2,1);
    H264ConfigureEptbDetect(param_1,param_2,*piVar7 << 3,1);
    uVar5 = H264GetBits(param_1,8);
    uVar5 = uVar5 & 0x1f;
    if (*(char *)(iVar8 + 0x10) == '\x01') {
      bVar1 = uVar5 == 0x14 || uVar5 == 0xe;
    }
    else {
      bVar1 = false;
    }
    uVar4 = uVar2;
    if ((bool)((uVar5 == 5 || uVar5 == 1) | bVar1)) {
      if (bVar1) {
        H264GetBits(param_1,0x18);
      }
      uVar4 = H264GetUeGolomb(param_1);
      uVar5 = uVar2 + 1;
      if (uVar5 != 0) {
        uVar5 = 1;
      }
      if (uVar2 < uVar4) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 & 1;
      }
      if (uVar5 != 0) {
        cVar6 = '\x01';
        goto LAB_00014b82;
      }
    }
    iVar3 = *(int *)(param_2 + 0xb654);
    uVar2 = iVar3 + 6;
    if (*(uint *)(param_2 + 0xb658) <= uVar2) {
      iVar3 = iVar3 + (6 - *(int *)(param_2 + 0xb6f8));
    }
    if (*(uint *)(param_2 + 0xb658) <= uVar2) {
      *(int *)(param_2 + 0xb654) = iVar3;
    }
    *piVar7 = *piVar7 + -6;
    uVar2 = uVar4;
  } while( true );
}



undefined8 H264ProcessNaluUnit(uint param_1,char *param_2,int param_3,uint param_4,byte param_5)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  
  iVar5 = *(int *)(param_1 + 0xcc);
  param_2[0x12] = (char)param_3;
  pcVar7 = (char *)(uint)param_5;
  cVar1 = *(char *)(iVar5 + 0x10);
  uVar3 = param_1;
  if (cVar1 == '\0') {
    if (((*(int *)(param_2 + 0xb6bc) != 1) && (*(int *)(param_2 + 0xb6c0) != 1)) ||
       (((param_3 == 7 || (*(int *)(param_2 + 0xb6c0) != 1)) &&
        (((param_3 - 7U & 0xff) < 2 || (*(int *)(param_2 + 0xb6bc) != 1)))))) goto LAB_00014c06;
switchD_00014c18_caseD_2:
    pcVar2 = (char *)0x0;
    goto LAB_00014e30;
  }
  if ((cVar1 == '\x01') && (*(int *)(param_2 + 0xb6c0) == 1)) {
    pcVar2 = (char *)0x0;
    if (param_3 != 0xf) goto LAB_00014e30;
    *(undefined4 *)(param_2 + 0xb6c0) = 0;
    *(undefined4 *)(param_2 + 0xb6bc) = 0;
  }
LAB_00014c06:
  iVar5 = param_3 + -1;
  param_2[0xb710] = '\0';
  pcVar8 = param_2;
  pcVar2 = pcVar7;
  switch(iVar5) {
  case 0:
    goto switchD_00014c18_caseD_1;
  default:
    goto switchD_00014c18_caseD_2;
  case 4:
    *(undefined4 *)(param_2 + 0xb6b8) = 0;
    H264ReferenceRefresh((int)param_2);
    param_2[0xb710] = '\x01';
switchD_00014c18_caseD_1:
    if ((*(int *)(param_2 + 0x9a0) == 0) &&
       (pcVar2 = (char *)H264MallocFrmBuffer(param_1,(int)param_2), pcVar2 != (char *)0x0)) {
      uVar3 = 0x728;
LAB_00014cfc:
      pcVar7 = "<%s:%u>: malloc buffer error\n";
LAB_00014d76:
      __android_log_print(3,"awplayer",pcVar7,"H264ProcessNaluUnit",uVar3,pcVar8,param_3);
      goto LAB_00014e30;
    }
    pcVar2 = (char *)H264DecodeSliceHeader(param_1,(int)param_2);
    if (pcVar2 != (char *)0x0) {
      if (pcVar2 == (char *)0xfb) {
        *(undefined4 *)(param_2 + 0xb680) = 0xffffffff;
        *(undefined4 *)(param_2 + 0xb684) = 0xffffffff;
      }
      goto LAB_00014e30;
    }
LAB_00014d38:
    param_2[0xb6c8] = '\x01';
    H264ConfigureSliceRegister(param_1,(int)param_2,(int)pcVar7);
    break;
  case 5:
    pcVar2 = (char *)H264DecodeSei(param_1,(int)param_2,param_4);
    break;
  case 6:
    pcVar2 = (char *)H264DecodeSps(param_1,(int)param_2);
    if (pcVar2 != (char *)0x0) goto LAB_00014e30;
    *(undefined4 *)(param_2 + 0xb6c0) = 0;
    break;
  case 7:
    pcVar2 = (char *)H264DecodePps(param_1,param_2,param_4);
    if (pcVar2 != (char *)0x0) goto LAB_00014e30;
    *(undefined4 *)(param_2 + 0xb6bc) = 0;
    break;
  case 0xd:
  case 0x13:
    if (pcVar7 == (char *)0x0) goto LAB_00014e30;
    if ((*(int *)(param_2 + 0x9a0) == 0) &&
       (pcVar2 = (char *)H264MallocFrmBuffer(param_1,(int)param_2), pcVar2 != (char *)0x0)) {
      uVar3 = 0x765;
      goto LAB_00014cfc;
    }
    H264DecodeNalHeaderExt(param_1,(int)param_2,iVar5);
    if (param_2[0xb710] == '\x01') {
      H264ReferenceRefresh((int)param_2);
    }
    pcVar2 = (char *)H264DecodeSliceHeader(param_1,(int)param_2);
    if (pcVar2 != (char *)0x0) {
      uVar3 = 0x772;
      pcVar7 = "<%s:%u>: ret=%d\n";
      pcVar8 = pcVar2;
      goto LAB_00014d76;
    }
    goto LAB_00014d38;
  case 0xe:
    if (pcVar7 == (char *)0x0) goto LAB_00014e30;
    *(undefined4 *)(param_2 + 0xb6c0) = 0;
    pcVar2 = (char *)H264DecodeSps(param_1,(int)param_2);
    if (pcVar2 == (char *)0x0) break;
    uVar3 = 0x783;
    pcVar7 = "<%s:%u>: decode pSps extension ret=%d\n";
    pcVar8 = pcVar2;
    goto LAB_00014d76;
  }
  cVar1 = param_2[0x12];
  if (((byte)(cVar1 - 1U) < 5) || (cVar1 == '\x14' || cVar1 == '\x0e')) {
    iVar5 = AdapterVeWaitInterrupt();
    if (iVar5 < 0) {
      uVar3 = 0x7a9;
      __android_log_print(6,"awplayer",&DAT_000194e8,"H264ProcessNaluUnit",0x7a9,pcVar8,param_3);
    }
    H264CheckBsDmaBusy(param_1);
    H264VeIsr(param_1);
    uVar4 = H264GetDecodeMbNum(param_1);
    uVar6 = *(int *)(param_2 + 0xbc) * *(int *)(param_2 + 0xb8) * (2 - (uint)(byte)param_2[0xb0]);
    if (param_2[0x14] != '\x03') {
      uVar6 = uVar6 >> 1;
    }
    *(uint *)(param_2 + 0x88) = uVar4;
    if (uVar6 <= uVar4) {
      *(undefined4 *)(param_2 + 0x34) = 0;
      *(undefined4 *)(param_2 + 0x88) = 0;
      param_2[0xb6c8] = '\x02';
      pcVar2 = (char *)0xfb;
      if (*(int *)(param_2 + 0xb644) != 0) {
        if (*(char *)(*(int *)(param_2 + 0xb644) + 0xa8) == '\x01') {
          pcVar2 = (char *)0x3;
        }
        else {
          pcVar2 = (char *)0x1;
        }
      }
    }
  }
LAB_00014e30:
  return CONCAT44(uVar3,pcVar2);
}



void H264PrintRegister(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined *puVar11;
  int iVar12;
  
  iVar9 = *(int *)(param_1 + 0xcc);
  if (*(char *)(iVar9 + 0x10) == '\0') {
    iVar6 = *(int *)(iVar9 + 8);
  }
  else {
    iVar6 = *(int *)(iVar9 + 0xc);
  }
  if (*(char *)(iVar6 + 0x14) == '\x03') {
    uVar2 = *(undefined4 *)(*(int *)(iVar6 + 0xb644) + 8);
  }
  else {
    uVar2 = *(undefined4 *)
             (*(int *)(iVar6 + 0xb644) + (uint)(*(char *)(iVar6 + 0x14) == '\x02') * 4);
  }
  __android_log_print(3,"awplayer",
                                            
                      "<%s:%u>:  ----------------- h264 reg info, nCurFrmNum: %d, header frame num: %d, poc: %d ---------"
                      ,"H264PrintRegister",0x2e,*(undefined4 *)(iVar6 + 0xb6d4),
                      *(undefined4 *)(iVar6 + 0x3c),uVar2);
  puVar11 = *(undefined **)(iVar6 + 0xb654);
  puVar10 = *(undefined4 **)(iVar9 + 4);
  __android_log_print(3,"awplayer","<%s:%u>:  bit stream[ 0- 7]: %x, %x, %x, %x,   %x, %x, %x, %x",
                      "H264PrintRegister",0x40,*puVar11,puVar11[1],puVar11[2],puVar11[3],puVar11[4],
                      puVar11[5],puVar11[6],puVar11[7]);
  __android_log_print(3,"awplayer","<%s:%u>:  bit stream[ 8-15]: %x, %x, %x, %x,   %x, %x, %x, %x",
                      "H264PrintRegister",0x43,puVar11[8],puVar11[9],puVar11[10],puVar11[0xb],
                      puVar11[0xc],puVar11[0xd],puVar11[0xe],puVar11[0xf]);
  __android_log_print(3,"awplayer","<%s:%u>:  bit stream[16-23]: %x, %x, %x, %x,   %x, %x, %x, %x",
                      "H264PrintRegister",0x46,puVar11[0x10],puVar11[0x11],puVar11[0x12],
                      puVar11[0x13],puVar11[0x14],puVar11[0x15],puVar11[0x16],puVar11[0x17]);
  __android_log_print(3,"awplayer","<%s:%u>:  bit stream[24-31]: %x, %x, %x, %x,   %x, %x, %x, %x",
                      "H264PrintRegister",0x49,puVar11[0x18],puVar11[0x19],puVar11[0x1a],
                      puVar11[0x1b],puVar11[0x1c],puVar11[0x1d],puVar11[0x1e],puVar11[0x1f]);
  __android_log_print(3,"awplayer","<%s:%u>:  bit stream[32-39]: %x, %x, %x, %x,   %x, %x, %x, %x",
                      "H264PrintRegister",0x4c,puVar11[0x20],puVar11[0x21],puVar11[0x22],
                      puVar11[0x23],puVar11[0x24],puVar11[0x25],puVar11[0x26],puVar11[0x27]);
  __android_log_print(3,"awplayer","<%s:%u>:  bit stream[40-47]: %x, %x, %x, %x,   %x, %x, %x, %x",
                      "H264PrintRegister",0x4f,puVar11[0x28],puVar11[0x29],puVar11[0x2a],
                      puVar11[0x2b],puVar11[0x2c],puVar11[0x2d],puVar11[0x2e],puVar11[0x2f]);
  uVar1 = (uint)(byte)puVar11[0x35];
  uVar3 = (uint)(byte)puVar11[0x36];
  uVar7 = (uint)(byte)puVar11[0x37];
  __android_log_print(3,"awplayer","<%s:%u>:  bit stream[48-55]: %x, %x, %x, %x,   %x, %x, %x, %x",
                      "H264PrintRegister",0x52,puVar11[0x30],puVar11[0x31],puVar11[0x32],
                      puVar11[0x33],puVar11[0x34],uVar1,uVar3,uVar7);
  __android_log_print(3,"awplayer","<%s:%u>:   ","H264PrintRegister",0x53);
  iVar9 = 0;
  do {
    uVar2 = *puVar10;
    iVar12 = iVar9 + 1;
    uVar4 = puVar10[1];
    uVar8 = puVar10[2];
    uVar5 = puVar10[3];
    puVar10 = puVar10 + 4;
    iVar6 = iVar9;
    __android_log_print(3,"awplayer","<%s:%u>: %02x, 0x%08x 0x%08x 0x%08x 0x%08x \n",
                        "H264PrintRegister",0x58,iVar9,uVar2,uVar4,uVar8,uVar5,uVar1,uVar3,uVar7);
    iVar9 = iVar12;
  } while (iVar12 != 0x10);
  __android_log_print(3,"awplayer","<%s:%u>:   ","H264PrintRegister",0x5a,iVar6,uVar2,uVar4,uVar8,
                      uVar5,uVar1,uVar3,uVar7);
  __android_log_print(3,"awplayer","<%s:%u>:   ","H264PrintRegister",0x5b);
  __android_log_print(3,"awplayer","<%s:%u>:   ","H264PrintRegister",0x5c);
  return;
}



void H264InitFuncCtrlRegister(int param_1)

{
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xcc) + 4) + 0x20) = 0x2000400;
  return;
}



void H264CheckBsDmaBusy(int param_1)

{
  do {
  } while (*(int *)(*(int *)(*(int *)(param_1 + 0xcc) + 4) + 0x28) << 9 < 0);
  return;
}



void H264EnableIntr(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xcc) + 4);
  *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) | 7;
  return;
}



undefined4 H264GetbitOffset(int param_1,int param_2)

{
  undefined4 local_4;
  
  local_4 = 0;
  if (param_2 == 0) {
    local_4 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xcc) + 4) + 0x34);
  }
  else {
    if (param_2 == 1) {
      local_4 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xcc) + 4) + 0xf0);
    }
  }
  return local_4;
}



undefined4 H264UpdateDataPointer(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = H264GetbitOffset(param_1,param_3);
  if ((param_3 == 0) && (0x17 < uVar1)) {
    uVar1 = uVar1 - 0x18;
  }
  uVar5 = *(uint *)(param_2 + 0xb658);
  uVar4 = *(uint *)(param_2 + 0xb650);
  if ((uVar5 - uVar4) + 1 < uVar1 >> 3) {
    uVar1 = uVar1 + ~(uVar5 - uVar4) * 8;
  }
  uVar3 = uVar4 + (uVar1 >> 3);
  if (uVar3 < *(uint *)(param_2 + 0xb660)) {
    iVar6 = (*(int *)(param_2 + 0xb65c) - uVar5) + -1;
  }
  else {
    iVar6 = *(int *)(param_2 + 0xb65c) - uVar4;
  }
  if (uVar5 < uVar3) {
    uVar3 = uVar4;
  }
  *(uint *)(param_2 + 0xb664) = iVar6 - (uVar1 >> 3);
  *(uint *)(param_2 + 0xb654) = uVar3;
  if (*(int *)(param_2 + 0xb664) < 5) {
    uVar2 = 5;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void H264ConfigureBitstreamRegister(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xcc);
  H264CheckBsDmaBusy(param_1);
  *(int *)(*(int *)(iVar1 + 4) + 0x34) =
       (*(int *)(param_2 + 0xb654) - *(int *)(param_2 + 0xb650)) * 8;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x38) = param_3;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x3c) = *(undefined4 *)(param_2 + 0xb66c);
  *(uint *)(*(int *)(iVar1 + 4) + 0x30) =
       *(uint *)(param_2 + 0xb668) | *(int *)(param_2 + 0xb670) << 0x1c;
  return;
}



void H264SearchStartcode(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xcc);
  H264CheckBsDmaBusy(param_1);
  *(uint *)(*(int *)(iVar1 + 4) + 0x20) =
       *(uint *)(*(int *)(iVar1 + 4) + 0x20) & 0xfdffffff | 0x1000000;
  H264ConfigureBitstreamRegister(param_1,param_2,*(int *)(param_2 + 0xb664) << 3);
  H264EnableIntr(param_1);
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x24) = 7;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x24) = 0xc;
  return;
}



void H264ConfigureEptbDetect(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xcc);
  H264CheckBsDmaBusy(param_1);
  if (param_4 == 1) {
    *(uint *)(*(int *)(iVar1 + 4) + 0x20) = *(uint *)(*(int *)(iVar1 + 4) + 0x20) & 0xfeffffff;
  }
  *(int *)(*(int *)(iVar1 + 4) + 0x34) =
       (*(int *)(param_2 + 0xb654) - *(int *)(param_2 + 0xb650)) * 8;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x38) = param_3;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x3c) = *(undefined4 *)(param_2 + 0xb66c);
  *(uint *)(*(int *)(iVar1 + 4) + 0x30) =
       *(uint *)(param_2 + 0xb668) | *(int *)(param_2 + 0xb670) << 0x1c;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x24) = 7;
  return;
}



void H264ConfigureReconMvcolBufRegister(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  sram_port_rw_offset_rege0 = (*(int *)(param_2 + 0xbc) + 0x20) * 0x20 + 0xc;
  *(int *)(*(int *)(param_1 + 4) + 0xe0) = sram_port_rw_offset_rege0;
  *(int *)(*(int *)(param_1 + 4) + 0xe4) = param_3 + *(int *)(*(int *)(param_2 + 0xcc) + 0x74);
  *(int *)(*(int *)(param_1 + 4) + 0xe4) = param_4 + *(int *)(*(int *)(param_2 + 0xcc) + 0x78);
  sram_port_rw_data_rege4 = 0;
  uVar1 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_2 + 0xc4));
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xe4) = uVar1;
  sram_port_rw_data_rege4 = 0;
  sram_port_rw_data_rege4 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_2 + 200));
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xe4) = sram_port_rw_data_rege4;
  return;
}



void H264ConfigureFrameInfoRegister(int param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar4 + 0x14);
  if (cVar1 == '\x03') {
    sram_port_rw_offset_rege0 = (param_2[0x2f] + 0x20) * 0x20;
    *(int *)(*(int *)(param_1 + 4) + 0xe0) = sram_port_rw_offset_rege0;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xe4) = *param_2;
    sram_port_rw_data_rege4 = param_2[1];
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xe4) = sram_port_rw_data_rege4;
    if (*(int *)(iVar4 + 0x58) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = 2;
    }
    if (*(char *)(iVar4 + 0x11) == '\0') {
      uVar2 = 2;
    }
    else {
      uVar2 = 0;
    }
    frame_struct_ref_info_rege4 = iVar5 << 8 | uVar2;
LAB_0001547a:
    frame_struct_ref_info_rege4 = frame_struct_ref_info_rege4 | uVar2 << 4;
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 != '\x02') goto LAB_0001548a;
      sram_port_rw_offset_rege0 = (param_2[0x2f] + 0x20) * 0x20 + 4;
      *(int *)(*(int *)(param_1 + 4) + 0xe0) = sram_port_rw_offset_rege0;
      sram_port_rw_data_rege4 = param_2[1];
      *(undefined4 *)(*(int *)(param_1 + 4) + 0xe4) = sram_port_rw_data_rege4;
      frame_struct_ref_info_rege4 = 0x100;
      if (*(char *)(iVar4 + 0x11) == '\0') {
        uVar2 = 2;
      }
      else {
        uVar2 = 0;
      }
      goto LAB_0001547a;
    }
    *(int *)(*(int *)(param_1 + 4) + 0xe0) = (param_2[0x2f] + 0x20) * 0x20;
    sram_port_rw_data_rege4 = *param_2;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xe4) = sram_port_rw_data_rege4;
    sram_port_rw_offset_rege0 = param_2[0x2f] * 0x20 + 0x408;
    *(int *)(*(int *)(param_1 + 4) + 0xe0) = sram_port_rw_offset_rege0;
    if (*(char *)(iVar4 + 0x11) == '\0') {
      uVar2 = 2;
    }
    else {
      uVar2 = 0;
    }
    frame_struct_ref_info_rege4 = uVar2 | 0x100;
  }
  *(uint *)(*(int *)(param_1 + 4) + 0xe4) = frame_struct_ref_info_rege4;
LAB_0001548a:
  if ((*(char *)(iVar4 + 0xb736) == '\x01') || (*(char *)(iVar4 + 0xb737) == '\x01')) {
    iVar5 = AdapterVeGetBaseAddress();
    if (*(char *)(iVar4 + 0xb736) == '\x01') {
      iVar3 = 3;
    }
    else {
      iVar3 = 5;
    }
    *(uint *)(iVar5 + 0xec) = *(uint *)(iVar5 + 0xec) & 0xffffff8f | iVar3 << 4;
    *(undefined4 *)(iVar5 + 0xc4) = *(undefined4 *)(iVar4 + 0xb73c);
    *(undefined2 *)(iVar5 + 200) = *(undefined2 *)(iVar4 + 0xb740);
    *(undefined2 *)(iVar5 + 0xca) = *(undefined2 *)(iVar4 + 0xb744);
  }
  return;
}



void H264CalCulateRefFrameRegisterValue(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_4 == 3) {
    *(undefined4 *)(param_1 + 8) = *param_2;
    *(undefined4 *)(param_1 + 0xc) = param_2[1];
    *(undefined4 *)(param_1 + 0x10) = 1;
    if (param_3 == 3) {
      if (*(char *)((int)param_2 + 0xd7) == '\0') {
        uVar1 = 0;
      }
      else {
        uVar1 = 2;
      }
      *(undefined4 *)(param_1 + 0x10) = uVar1;
    }
    if (*(char *)((int)param_2 + 0xd5) == '\0') {
      uVar1 = 2;
    }
    else {
      uVar1 = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = uVar1;
  }
  else {
    if (param_4 == 1) {
      uVar1 = *param_2;
      *(undefined4 *)(param_1 + 0x10) = 1;
      *(undefined4 *)(param_1 + 8) = uVar1;
      if (*(char *)((int)param_2 + 0xd5) == '\0') {
        uVar1 = 2;
      }
      else {
        uVar1 = 0;
      }
      *(undefined4 *)(param_1 + 0x14) = uVar1;
      goto LAB_00015554;
    }
    if (param_4 != 2) goto LAB_00015554;
    uVar1 = param_2[1];
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(undefined4 *)(param_1 + 0xc) = uVar1;
  }
  if (*(char *)((int)param_2 + 0xd6) == '\0') {
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = uVar1;
LAB_00015554:
  if (*(char *)(param_2 + 0x36) == '\0') {
    uVar1 = 1;
  }
  else {
    if (*(char *)((int)param_2 + 0xd7) == '\0') {
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}



void H264ConfigureRefFrameRegister(int param_1,int param_2)

{
  sram_port_rw_offset_rege0 = (*(int *)(param_2 + 4) + 0x20) * 0x20;
  *(int *)(*(int *)(param_1 + 4) + 0xe0) = sram_port_rw_offset_rege0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xe4) = *(undefined4 *)(param_2 + 8);
  sram_port_rw_data_rege4 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xe4) = sram_port_rw_data_rege4;
  frame_struct_ref_info_rege4 =
       (*(uint *)(param_2 + 0x10) & 3) << 8 | *(uint *)(param_2 + 0x14) & 3 |
       (*(uint *)(param_2 + 0x18) & 3) << 4;
  *(uint *)(*(int *)(param_1 + 4) + 0xe4) = frame_struct_ref_info_rege4;
  return;
}



void H264ConfigureRefListRegister(int param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 uStack1048;
  uint local_414 [18];
  char acStack972 [4];
  int aiStack968 [223];
  byte local_4c [32];
  int local_2c;
  
  iVar8 = 0;
  local_2c = __stack_chk_guard;
  uVar14 = 0;
  memset(local_414,0,0x48);
  memset(acStack972,0,0x380);
  cVar11 = '\0';
  iVar12 = param_2;
  while (uVar14 < *(uint *)(param_2 + 0x20)) {
    iVar10 = 0;
    puVar7 = (undefined4 *)(param_2 + uVar14 * 0x2ac0 + 0x6038);
    while (iVar10 < *(int *)(iVar12 + 0x2c)) {
      if (puVar7[0x33] != 0) {
        iVar9 = puVar7[0x2f];
        cVar11 = cVar11 + *(char *)((int)puVar7 + 0xe1);
        bVar2 = *(byte *)(puVar7 + 0x2c);
        bVar3 = *(byte *)(puVar7 + 0x29);
        aiStack968[iVar9 * 7] = iVar9;
        H264CalCulateRefFrameRegisterValue
                  ((int)(acStack972 + iVar9 * 0x1c),puVar7,(uint)bVar2,(uint)bVar3);
        local_4c[iVar8] = (byte)iVar9;
        if (acStack972[iVar9 * 0x1c] == '\0') {
          iVar8 = iVar8 + 1;
        }
        acStack972[iVar9 * 0x1c] = '\x01';
      }
      iVar10 = iVar10 + 1;
      puVar7 = puVar7 + 0x39;
    }
    iVar12 = iVar12 + 4;
    uVar14 = uVar14 + 1;
  }
  uVar4 = 1;
  if (cVar11 == '\0') {
    uVar4 = *(undefined *)(*(int *)(param_2 + 0xb644) + 0xe1);
  }
  *(undefined *)(*(int *)(param_2 + 0xb644) + 0xe1) = uVar4;
  iVar12 = 0;
  while (iVar12 < iVar8) {
    pbVar1 = local_4c + iVar12;
    iVar12 = iVar12 + 1;
    H264ConfigureRefFrameRegister(param_1,(int)(acStack972 + (uint)*pbVar1 * 0x1c));
  }
  iVar8 = 0x640;
  uVar14 = 0;
  iVar12 = param_2;
  while (uVar14 < *(uint *)(param_2 + 0x20)) {
    memset(local_414,0,0x48);
    iVar13 = *(int *)(iVar12 + 0x2c);
    iVar9 = param_2 + iVar13 * 0xe4 + uVar14 * 0x2ac0 + 0x6038;
    iVar10 = iVar13;
    while (iVar10 = iVar10 + -1, -1 < iVar10) {
      if (*(int *)(iVar9 + -0x18) != 0) {
        local_414[iVar10 >> 2] =
             (uint)(*(int *)(iVar9 + -0x34) == 2) | *(int *)(iVar9 + -0x28) << 1 |
             local_414[iVar10 >> 2] << 8;
      }
      iVar9 = iVar9 + -0xe4;
    }
    if (0 < iVar13) {
      iVar10 = 0;
      sram_port_rw_offset_rege0 = 0;
      puVar7 = &uStack1048;
      *(int *)(*(int *)(param_1 + 4) + 0xe0) = iVar8;
      while( true ) {
        uVar5 = *(uint *)(iVar12 + 0x2c);
        uVar6 = uVar5 & ~((int)uVar5 >> 0x20);
        if ((int)uVar5 < 0) {
          uVar6 = uVar5 + 3;
        }
        if ((int)uVar6 >> 2 < iVar10) break;
        iVar10 = iVar10 + 1;
        puVar7 = puVar7 + 1;
        sram_port_rw_data_rege4 = 0;
        *(undefined4 *)(*(int *)(param_1 + 4) + 0xe4) = *puVar7;
      }
    }
    uVar14 = uVar14 + 1;
    iVar12 = iVar12 + 4;
    iVar8 = iVar8 + 0x24;
  }
  if (local_2c == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void H264ConvertScalingMatrices(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0;
  do {
    iVar5 = 0;
    iVar6 = param_2;
    do {
      pbVar1 = (byte *)(iVar6 + 2);
      iVar8 = param_1 + iVar7 + iVar5;
      pbVar2 = (byte *)(iVar6 + 3);
      pbVar4 = (byte *)(param_2 + iVar5);
      iVar5 = iVar5 + 4;
      pbVar3 = (byte *)(iVar6 + 1);
      iVar6 = iVar6 + 4;
      *(uint *)(iVar8 + 0x8c0) =
           (uint)*pbVar1 << 0x10 | (uint)*pbVar2 << 0x18 | (uint)*pbVar4 | (uint)*pbVar3 << 8;
    } while (iVar5 != 0x10);
    iVar7 = iVar7 + 0x10;
    param_2 = param_2 + 0x10;
  } while (iVar7 != 0x60);
  iVar7 = 0;
  do {
    iVar5 = 0;
    iVar6 = param_3;
    do {
      pbVar3 = (byte *)(iVar6 + 2);
      iVar8 = param_1 + iVar7 + iVar5;
      pbVar1 = (byte *)(iVar6 + 3);
      pbVar4 = (byte *)(param_3 + iVar5);
      iVar5 = iVar5 + 4;
      pbVar2 = (byte *)(iVar6 + 1);
      iVar6 = iVar6 + 4;
      *(uint *)(iVar8 + 0x920) =
           (uint)*pbVar3 << 0x10 | (uint)*pbVar1 << 0x18 | (uint)*pbVar4 | (uint)*pbVar2 << 8;
    } while (iVar5 != 0x40);
    iVar7 = iVar7 + 0x40;
    param_3 = param_3 + 0x40;
  } while (iVar7 != 0x80);
  return;
}



void H264ConfigureQuantMatrixRegister(int param_1,int param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = *(int *)(param_1 + 0xcc);
  if (*(int *)(param_2 + 0xb6c4) != 1) goto LAB_000158cc;
  pcVar4 = *(char **)(param_2 + 0xdc);
  pcVar2 = pcVar4 + 0x40;
  pcVar5 = pcVar4 + 0xa0;
  if (*pcVar4 == '\x01') {
LAB_000158bc:
    H264ConvertScalingMatrices(param_2,(int)pcVar2,(int)pcVar5);
  }
  else {
    iVar6 = *(int *)(param_2 + 0xd8);
    if (*(int *)(iVar6 + 0x40) == 1) {
      pcVar2 = (char *)(iVar6 + 0x58);
      pcVar5 = (char *)(iVar6 + 0xb8);
      goto LAB_000158bc;
    }
  }
  *(undefined4 *)(param_2 + 0xb6c4) = 0;
LAB_000158cc:
  iVar6 = 0;
  do {
    iVar3 = 0;
    *(int *)(*(int *)(iVar7 + 4) + 0xe0) = iVar6 + 0x800;
    do {
      iVar8 = param_2 + iVar6 + iVar3;
      iVar3 = iVar3 + 4;
      *(undefined4 *)(*(int *)(iVar7 + 4) + 0xe4) = *(undefined4 *)(iVar8 + 0x920);
    } while (iVar3 != 0x40);
    iVar6 = iVar6 + 0x40;
  } while (iVar6 != 0x80);
  iVar6 = 0x880;
  do {
    *(int *)(*(int *)(iVar7 + 4) + 0xe0) = iVar6;
    iVar6 = iVar6 + 0x10;
    *(undefined4 *)(*(int *)(iVar7 + 4) + 0xe4) = *(undefined4 *)(param_2 + 0x8c0);
    *(undefined4 *)(*(int *)(iVar7 + 4) + 0xe4) = *(undefined4 *)(param_2 + 0x8c4);
    *(undefined4 *)(*(int *)(iVar7 + 4) + 0xe4) = *(undefined4 *)(param_2 + 0x8c8);
    puVar1 = (undefined4 *)(param_2 + 0x8cc);
    param_2 = param_2 + 0x10;
    *(undefined4 *)(*(int *)(iVar7 + 4) + 0xe4) = *puVar1;
  } while (iVar6 != 0x8e0);
  return;
}



void H264ConfigureScaleRotateRegister(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(uint *)(param_1 + 0x40);
  if (uVar4 == 3 || uVar4 == 1) {
    uVar3 = *(uint *)(param_1 + 0x30);
    uVar2 = *(uint *)(param_1 + 0x34);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x34);
    uVar2 = *(uint *)(param_1 + 0x30);
  }
  uVar3 = ((uVar3 & 3) << 10) >> 8;
  uVar4 = uVar4 & 7 | (uVar2 & 0xf | uVar3) << 8;
  sd_rotate_ctrl_reg40 = uVar4;
  *(uint *)(*(int *)(param_2 + 4) + 0x40) = uVar4;
  sd_rotate_buf_addr_reg44 = 0;
  iVar5 = *(int *)(*(int *)(*(int *)(param_3 + 0xb644) + 0xd0) + 0x74);
  iVar1 = FbmGetBufferOffset(*(undefined4 *)(param_3 + 0xb704),1,uVar2 | uVar3,uVar4,param_1,param_2
                             ,param_3);
  sd_rotate_buf_addr_reg44 = iVar1 + iVar5;
  *(int *)(*(int *)(param_2 + 4) + 0x44) = sd_rotate_buf_addr_reg44;
  sd_rotate_chroma_buf_addr_reg48 = 0;
  iVar5 = *(int *)(*(int *)(*(int *)(param_3 + 0xb644) + 0xd0) + 0x78);
  iVar1 = FbmGetBufferOffset(*(undefined4 *)(param_3 + 0xb704),0);
  sd_rotate_chroma_buf_addr_reg48 = iVar1 + iVar5;
  *(int *)(*(int *)(param_2 + 4) + 0x48) = sd_rotate_chroma_buf_addr_reg48;
  uVar4 = *(uint *)(*(int *)(param_2 + 4) + 0x20);
  if (*(char *)(param_3 + 0x11) == '\0') {
    uVar4 = uVar4 | 0x300;
  }
  else {
    uVar4 = uVar4 & 0xfffffeff | 0x200;
  }
  *(uint *)(*(int *)(param_2 + 4) + 0x20) = uVar4;
  iVar1 = AdapterVeGetBaseAddress();
  *(uint *)(iVar1 + 0xe8) = *(uint *)(iVar1 + 0xe8) & 0x3fffffff;
  if (*(char *)(param_3 + 0xb734) == '\x01') {
    *(uint *)(iVar1 + 0xe8) = *(uint *)(iVar1 + 0xe8) | 0xc0000000;
    *(uint *)(iVar1 + 0xe8) = *(uint *)(iVar1 + 0xe8) | 0x20000000;
    *(uint *)(iVar1 + 0xe8) =
         *(uint *)(iVar1 + 0xe8) & 0xf0000000 | *(uint *)(param_3 + 0xb738) & 0xfffffff;
  }
  else {
    if (*(char *)(param_3 + 0xb735) == '\x01') {
      *(uint *)(iVar1 + 0xe8) = *(uint *)(iVar1 + 0xe8) & 0x3fffffff | 0x40000000;
      uVar4 = 5;
      *(uint *)(iVar1 + 0xec) = *(uint *)(iVar1 + 0xec) & 0xffffff8f;
      uVar3 = *(uint *)(iVar1 + 0xec);
    }
    else {
      if (*(char *)(param_3 + 0xb736) == '\x01') {
        iVar5 = 3;
      }
      else {
        iVar5 = 5;
        if (*(char *)(param_3 + 0xb737) != '\x01') {
          return;
        }
      }
      *(uint *)(iVar1 + 0xec) = *(uint *)(iVar1 + 0xec) & 0xffffff8f | iVar5 << 4;
      *(undefined4 *)(iVar1 + 0xc4) = *(undefined4 *)(param_3 + 0xb73c);
      *(undefined2 *)(iVar1 + 200) = *(undefined2 *)(param_3 + 0xb740);
      *(undefined2 *)(iVar1 + 0xca) = *(undefined2 *)(param_3 + 0xb744);
      *(undefined2 *)(iVar1 + 0xcc) = *(undefined2 *)(param_3 + 0xb748);
      *(undefined2 *)(iVar1 + 0xce) = *(undefined2 *)(param_3 + 0xb74c);
      if (*(char *)(param_3 + 0xb736) == '\x01') {
        iVar5 = 3;
      }
      else {
        iVar5 = 1;
      }
      *(uint *)(iVar1 + 0xe8) = *(uint *)(iVar1 + 0xe8) & 0x3fffffff | iVar5 << 0x1e;
      *(uint *)(iVar1 + 0xe8) =
           *(uint *)(iVar1 + 0xe8) & 0xf0000000 | *(uint *)(param_3 + 0xb738) & 0xfffffff;
      if (*(char *)(param_3 + 0xb736) == '\x01') {
        uVar4 = 3;
      }
      else {
        uVar4 = 5;
      }
      uVar3 = *(uint *)(iVar1 + 0xec);
    }
    *(uint *)(iVar1 + 0xec) = uVar3 & 0xfffffff8 | uVar4;
  }
  return;
}



void H264ConfigMafRegisters(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = AdapterVeGetBaseAddress();
  uVar4 = (uint)*(byte *)(param_2 + 0x13);
  if (uVar4 != 1) {
    uVar4 = (uint)(*(char *)(param_2 + 0x14) == '\x03');
  }
  bVar1 = *(byte *)(param_2 + 0xb6c9);
  *(undefined4 *)(iVar2 + 0x34) = 0x190f1009;
  *(uint *)(iVar2 + 0x30) = (uint)bVar1 << 0x1e | 0x5622 | uVar4 << 0x1f;
  *(uint *)(*(int *)(*(int *)(param_2 + 0xb644) + 0xcc) + 0x60) = (uint)*(byte *)(param_2 + 0xb6c9);
  *(undefined4 *)(*(int *)(*(int *)(param_2 + 0xb644) + 0xcc) + 0x68) = 0x40;
  *(undefined4 *)(*(int *)(*(int *)(param_2 + 0xb644) + 0xcc) + 0x6c) = 1;
  iVar5 = *(int *)(*(int *)(param_2 + 0xb644) + 0xcc);
  *(undefined4 *)(iVar5 + 100) = *(undefined4 *)(iVar5 + 0x5c);
  if (*(int *)(param_2 + 0x9b0) == 0) {
    memcpy(*(void **)(*(int *)(*(int *)(param_2 + 0xb644) + 0xcc) + 0x5c),
           *(void **)(param_2 + 0xb6cc),*(size_t *)(param_2 + 0xb6d0));
    (**(code **)(param_1 + 0x20))
              (*(undefined4 *)(*(int *)(*(int *)(param_2 + 0xb644) + 0xcc) + 0x5c),
               *(undefined4 *)(param_2 + 0xb6d0));
    *(undefined4 *)(*(int *)(*(int *)(param_2 + 0xb644) + 0xcc) + 0x6c) = 0;
    if ((*(char *)(param_2 + 0x13) == '\0') || (*(char *)(param_2 + 0x14) == '\x03')) {
      uVar3 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_2 + 0xb6cc));
      *(undefined4 *)(param_2 + 0x9ac) = uVar3;
    }
  }
  else {
    *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(param_2 + 0x9a4);
    *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(param_2 + 0x9a8);
    *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(param_2 + 0x9ac);
    *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(param_2 + 0x9b0);
    uVar3 = (**(code **)(param_1 + 0x24))
                      (*(undefined4 *)(*(int *)(*(int *)(param_2 + 0xb644) + 0xcc) + 0x5c));
    *(undefined4 *)(iVar2 + 0x40) = uVar3;
  }
  if ((*(char *)(param_2 + 0x13) == '\0') || (*(char *)(param_2 + 0x14) == '\x03')) {
    *(undefined4 *)(param_2 + 0x9b0) = *(undefined4 *)(param_2 + 0x9ac);
    uVar3 = (**(code **)(param_1 + 0x24))
                      (*(undefined4 *)(*(int *)(*(int *)(param_2 + 0xb644) + 0xcc) + 0x5c));
    *(undefined4 *)(param_2 + 0x9ac) = uVar3;
    uVar3 = (**(code **)(param_1 + 0x24))
                      (*(undefined4 *)(*(int *)(*(int *)(param_2 + 0xb644) + 0xcc) + 0x50));
    *(undefined4 *)(param_2 + 0x9a4) = uVar3;
    uVar3 = (**(code **)(param_1 + 0x24))
                      (*(undefined4 *)(*(int *)(*(int *)(param_2 + 0xb644) + 0xcc) + 0x54));
    *(undefined4 *)(param_2 + 0x9a8) = uVar3;
  }
  return;
}



void H264ConfigTopLeveLRegisters(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (*(char *)(param_2 + 0xb728) == '\x01') {
    iVar1 = AdapterVeGetBaseAddress();
    if (*param_1 == 0x1625) {
      *(uint *)(iVar1 + 0x50) = *(uint *)(iVar1 + 0x50) & 0xfffffffc | 2;
      uVar3 = *(uint *)(iVar1 + 0x50) & 0xfffffff3 | 8;
    }
    else {
      *(uint *)(iVar1 + 0x50) = *(uint *)(iVar1 + 0x50) & 0xfffffffc | 1;
      uVar3 = *(uint *)(iVar1 + 0x50) & 0xfffffff3 | 4;
    }
    *(uint *)(iVar1 + 0x50) = uVar3;
    uVar2 = (*(code *)param_1[9])(*(undefined4 *)(param_2 + 0xb72c));
    *(undefined4 *)(iVar1 + 0x54) = uVar2;
    uVar2 = (*(code *)param_1[9])(*(undefined4 *)(param_2 + 0xb730));
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
  }
  return;
}



void H264ConfigureSliceRegister(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  
  piVar7 = *(int **)(param_1 + 0xcc);
  H264ConfigTopLeveLRegisters(piVar7,param_2);
  pbVar4 = *(byte **)(param_2 + 0xd8);
  avc_sps_reg00 =
       (uint)CONCAT11((char)*(undefined4 *)(pbVar4 + 0xc) + -1,
                      (char)*(undefined4 *)(pbVar4 + 0x10) + -1);
  avc_sps_reg00 =
       avc_sps_reg00 | (pbVar4[4] & 1) << 0x10 | (*pbVar4 & 1) << 0x11 | (pbVar4[3] & 1) << 0x12 |
       0x80000;
  *(uint *)piVar7[1] = avc_sps_reg00;
  iVar5 = *(int *)(param_2 + 0xdc);
  avc_pps_reg04 =
       *(uint *)(iVar5 + 0x30) & 1 | (*(uint *)(iVar5 + 0x3c) & 1) << 1 |
       (*(uint *)(iVar5 + 0x28) & 3) << 2 | (*(uint *)(iVar5 + 0x24) & 1) << 4 |
       (*(int *)(iVar5 + 0x20) + -1) * 0x20 & 0x3e0U |
       (*(int *)(iVar5 + 0x1c) + -1) * 0x400 & 0x7c00U | (*(uint *)(iVar5 + 8) & 1) << 0xf;
  *(uint *)(piVar7[1] + 4) = avc_pps_reg04;
  uVar9 = *(byte *)(param_2 + 0x14) - 3;
  if (uVar9 != 0) {
    uVar9 = 1;
  }
  shs_reg08 = CONCAT13(*(undefined *)(param_2 + 0x4c),
                       CONCAT12(*(undefined *)(param_2 + 0x50),
                                (ushort)*(undefined4 *)(param_2 + 0x5c) & 3 |
                                (ushort)((*(uint *)(param_2 + 0x54) & 1) << 2) |
                                (ushort)(*(byte *)(param_2 + 0x14) == 2) * 8 & 8 |
                                (ushort)((uVar9 & 1) << 4) |
                                (ushort)(*(int *)(param_2 + 0x34) == 1) << 5 |
                                (ushort)((*(uint *)(param_2 + 0x38) & 0xf) << 8) |
                                (ushort)((*(byte *)(param_2 + 0x11) & 1) << 0xc)));
  *(undefined4 *)(piVar7[1] + 8) = shs_reg08;
  shs2_reg0c = *(uint *)(param_2 + 0x70) & 0xf | (*(uint *)(param_2 + 0x6c) & 0xf) << 4 |
               (*(uint *)(param_2 + 0x68) & 3) << 8 | (*(uint *)(param_2 + 0x74) & 1) << 0xc;
  if (*(char *)(param_2 + 0x16) == '\x01') {
    shs2_reg0c = shs2_reg0c | (*(int *)(param_2 + 0x30) + -1) * 0x10000 & 0x1f0000U;
  }
  shs2_reg0c = shs2_reg0c | (*(int *)(param_2 + 0x2c) + -1) * 0x1000000 & 0x1f000000U;
  *(uint *)(piVar7[1] + 0xc) = shs2_reg0c;
  pcVar6 = *(char **)(param_2 + 0xdc);
  shs_qp_reg1c = *(uint *)(param_2 + 100) & 0x3f | (*(uint *)(pcVar6 + 0x34) & 0x3f) << 8 |
                 (*(uint *)(pcVar6 + 0x38) & 0x3f) << 0x10 | 0x1000000;
  iVar5 = *(int *)(*(int *)(param_2 + 0xd8) + 0x54);
  if (((iVar5 == 0x76 || iVar5 == 100) || (iVar5 == 0x80)) &&
     ((*(int *)(*(int *)(param_2 + 0xd8) + 0x40) == 1 || (*pcVar6 == '\x01')))) {
    H264ConfigureQuantMatrixRegister(param_1,param_2);
    shs_qp_reg1c = shs_qp_reg1c & 0xfeffffff;
  }
  *(uint *)(piVar7[1] + 0x1c) = shs_qp_reg1c;
  mb_field_intra_info_addr_reg50 = 0;
  mb_field_intra_info_addr_reg50 = (*(code *)piVar7[9])(*(undefined4 *)(param_2 + 0xb6b0));
  *(undefined4 *)(piVar7[1] + 0x50) = mb_field_intra_info_addr_reg50;
  mb_neighbor_info_addr_reg54 = 0;
  mb_neighbor_info_addr_reg54 = (*(code *)piVar7[9])(*(undefined4 *)(param_2 + 0xb6b4));
  *(undefined4 *)(piVar7[1] + 0x54) = mb_neighbor_info_addr_reg54;
  if (*(uint *)(param_2 + 0x34) < 2) {
    cur_mb_num_reg2c = 0;
    *(undefined4 *)(piVar7[1] + 0x2c) = 0;
    mb_addr_reg60 = 0;
    *(undefined4 *)(piVar7[1] + 0x60) = 0;
    shs_recon_frmbuf_index_reg4c = *(uint *)(*(int *)(param_2 + 0xb644) + 0xbc) & 0x1f;
    *(uint *)(piVar7[1] + 0x4c) = shs_recon_frmbuf_index_reg4c;
    iVar5 = *(int *)(param_2 + 0x9a0);
    if (0x11 < iVar5) {
      iVar5 = 0x12;
    }
    if ((param_3 == 1) && (piVar7[5] != 0)) {
      H264ConfigureReconMvcolBufRegister((int)piVar7,piVar7[5],0,0);
    }
    iVar1 = FbmGetBufferOffset(*(undefined4 *)(param_2 + 0xb700),1);
    iVar2 = FbmGetBufferOffset(*(undefined4 *)(param_2 + 0xb700),0);
    iVar8 = *(int *)(param_2 + 0xb714);
    while (iVar8 < iVar5 + *(int *)(param_2 + 0xb714)) {
      iVar3 = param_2 + iVar8 * 0xe4 + 0x9b8;
      if (*(int *)(iVar3 + 0xcc) != 0) {
        H264ConfigureReconMvcolBufRegister((int)piVar7,iVar3,iVar1,iVar2);
      }
      iVar8 = iVar8 + 1;
    }
    H264ConfigureFrameInfoRegister((int)piVar7,*(undefined4 **)(param_2 + 0xb644));
    H264ConfigureRefListRegister((int)piVar7,param_2);
    if ((((*(int *)(param_1 + 0x24) == 1) || (*(int *)(param_1 + 0x28) == 1)) ||
        (*(char *)(param_2 + 0xb734) == '\x01')) || (*(char *)(param_2 + 0xb735) == '\x01')) {
      H264ConfigureScaleRotateRegister(param_1,(int)piVar7,param_2);
    }
    if (*(char *)(param_2 + 0xb6c9) == '\x01') {
      if (*(char *)(param_2 + 0xb6e0) == '\0') {
        H264ConfigMafRegisters((int)piVar7,param_2);
      }
      else {
        *(undefined4 *)(*(int *)(*(int *)(param_2 + 0xb644) + 0xcc) + 0x60) = 0;
        *(undefined4 *)(*(int *)(*(int *)(param_2 + 0xb644) + 0xcc) + 0x68) = 0;
        *(undefined4 *)(*(int *)(*(int *)(param_2 + 0xb644) + 0xcc) + 0x6c) = 0;
        *(undefined4 *)(*(int *)(*(int *)(param_2 + 0xb644) + 0xcc) + 100) = 0;
      }
    }
  }
  H264EnableIntr(param_1);
  *(undefined4 *)(piVar7[1] + 0x24) = 8;
  return;
}



void H264ConfigureAvcRegister(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_14;
  
  iVar1 = *(int *)(param_1 + 0xcc);
  iVar2 = *(int *)(iVar1 + 4);
  uVar3 = *(uint *)(iVar2 + 0x20);
  local_14 = uVar3 & 0xfdffffff | 0x1000000;
  if (param_3 == 1) {
    local_14 = uVar3 & 0xfcffffff;
  }
  *(uint *)(iVar2 + 0x20) = local_14;
  H264ConfigureBitstreamRegister(param_1,param_2,param_4);
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x24) = 7;
  return;
}



void H264SyncByte(int param_1)

{
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xcc) + 4) + 0x24) = 6;
  return;
}



undefined4 H264GetBits(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xcc);
  *(uint *)(*(int *)(iVar2 + 4) + 0x24) = param_2 << 8 | 2;
  iVar2 = *(int *)(iVar2 + 4);
  do {
    iVar1 = *(int *)(iVar2 + 0x28);
    if (-1 < iVar1 << 0x17) {
      return *(undefined4 *)(iVar2 + 0xdc);
    }
  } while (-1 < iVar1 << 0x1d);
  return 0;
}



undefined4 H264ShowBits(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xcc);
  *(uint *)(*(int *)(iVar2 + 4) + 0x24) = param_2 << 8 | 1;
  iVar2 = *(int *)(iVar2 + 4);
  do {
    iVar1 = *(int *)(iVar2 + 0x28);
    if (-1 < iVar1 << 0x17) {
      return *(undefined4 *)(iVar2 + 0xdc);
    }
  } while (-1 < iVar1 << 0x1d);
  return 0;
}



undefined4 H264GetUeGolomb(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xcc);
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x24) = 5;
  iVar2 = *(int *)(iVar2 + 4);
  do {
    iVar1 = *(int *)(iVar2 + 0x28);
    if (-1 < iVar1 << 0x17) {
      return *(undefined4 *)(iVar2 + 0xdc);
    }
  } while (-1 < iVar1 << 0x1d);
  return 0;
}



undefined4 H264GetSeGolomb(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xcc);
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x24) = 4;
  iVar2 = *(int *)(iVar2 + 4);
  do {
    iVar1 = *(int *)(iVar2 + 0x28);
    if (-1 < iVar1 << 0x17) {
      return *(undefined4 *)(iVar2 + 0xdc);
    }
  } while (-1 < iVar1 << 0x1d);
  return 0;
}



undefined4 H264GetDecodeMbNum(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xcc) + 4) + 0x2c);
}



undefined4 H264GetFunctionStatus(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xcc) + 4) + 0x28);
}



uint H264VeIsr(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0xcc) + 4);
  uVar2 = *(uint *)(iVar3 + 0x28);
  uVar1 = uVar2 & 2;
  if ((int)(uVar2 << 0x1f) < 0) {
    uVar1 = uVar1 | 1;
  }
  if ((int)(uVar2 << 0x1d) < 0) {
    uVar1 = uVar1 | 4;
  }
  *(uint *)(iVar3 + 0x28) = uVar2;
  return uVar1;
}



void H264CongigureWeightTableRegisters(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0xcc);
  if (*(int *)(*(int *)(param_2 + 0xdc) + 0x28) == 2) {
    uVar1 = 5;
    uVar4 = 5;
    if (*(char *)(param_2 + 0x16) != '\x01') goto LAB_00016258;
  }
  else {
LAB_00016258:
    uVar4 = H264GetUeGolomb(param_1);
    uVar1 = H264GetUeGolomb(param_1);
  }
  shs_wp_reg10 = uVar4 & 7 | (uVar1 & 7) << 4;
  *(uint *)(*(int *)(iVar3 + 4) + 0x10) = shs_wp_reg10;
  sram_port_rw_offset_rege0 = 0;
  *(undefined4 *)(*(int *)(iVar3 + 4) + 0xe0) = 0;
  iVar5 = 2;
  do {
    iVar2 = 0x20;
    do {
      iVar2 = iVar2 + -1;
      *(int *)(*(int *)(iVar3 + 4) + 0xe4) = 1 << (uVar4 & 0xff);
    } while (iVar2 != 0);
    iVar2 = 0x40;
    do {
      iVar2 = iVar2 + -1;
      *(int *)(*(int *)(iVar3 + 4) + 0xe4) = 1 << (uVar1 & 0xff);
    } while (iVar2 != 0);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if ((*(int *)(*(int *)(param_2 + 0xdc) + 0x24) == 0) || (*(char *)(param_2 + 0x16) != '\0')) {
    if ((*(int *)(*(int *)(param_2 + 0xdc) + 0x28) != 1) || (*(char *)(param_2 + 0x16) != '\x01'))
    goto LAB_0001635a;
    iVar5 = 0;
  }
  while (iVar5 < *(int *)(param_2 + 0x2c)) {
    iVar2 = H264GetBits(param_1,1);
    if (iVar2 != 0) {
      uVar4 = H264GetSeGolomb(param_1);
      iVar2 = H264GetSeGolomb(param_1);
      *(int *)(*(int *)(iVar3 + 4) + 0xe0) = iVar5 << 2;
      *(uint *)(*(int *)(iVar3 + 4) + 0xe4) = uVar4 & 0xffff | iVar2 << 0x10;
    }
    iVar2 = H264GetBits(param_1,1);
    if (iVar2 != 0) {
      *(int *)(*(int *)(iVar3 + 4) + 0xe0) = iVar5 * 8 + 0x80;
      uVar4 = H264GetSeGolomb(param_1);
      iVar2 = H264GetSeGolomb(param_1);
      *(uint *)(*(int *)(iVar3 + 4) + 0xe4) = uVar4 & 0xffff | iVar2 << 0x10;
      uVar4 = H264GetSeGolomb(param_1);
      iVar2 = H264GetSeGolomb(param_1);
      *(uint *)(*(int *)(iVar3 + 4) + 0xe4) = uVar4 & 0xffff | iVar2 << 0x10;
    }
    iVar5 = iVar5 + 1;
  }
LAB_0001635a:
  if ((*(char *)(param_2 + 0x16) == '\x01') && (*(int *)(*(int *)(param_2 + 0xdc) + 0x28) == 1)) {
    iVar5 = 0;
    while (iVar5 < *(int *)(param_2 + 0x30)) {
      iVar2 = H264GetBits(param_1,1);
      if (iVar2 != 0) {
        uVar4 = H264GetSeGolomb(param_1);
        iVar2 = H264GetSeGolomb(param_1);
        *(int *)(*(int *)(iVar3 + 4) + 0xe0) = iVar5 * 4 + 0x180;
        *(uint *)(*(int *)(iVar3 + 4) + 0xe4) = uVar4 & 0xffff | iVar2 << 0x10;
      }
      iVar2 = H264GetBits(param_1,1);
      if (iVar2 != 0) {
        *(int *)(*(int *)(iVar3 + 4) + 0xe0) = iVar5 * 8 + 0x200;
        uVar4 = H264GetSeGolomb(param_1);
        iVar2 = H264GetSeGolomb(param_1);
        *(uint *)(*(int *)(iVar3 + 4) + 0xe4) = uVar4 & 0xffff | iVar2 << 0x10;
        uVar4 = H264GetSeGolomb(param_1);
        iVar2 = H264GetSeGolomb(param_1);
        *(uint *)(*(int *)(iVar3 + 4) + 0xe4) = uVar4 & 0xffff | iVar2 << 0x10;
      }
      iVar5 = iVar5 + 1;
    }
  }
  return;
}



int FUN_00016404(int *param_1,int *param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar1 = 0;
  while( true ) {
    if (param_5 == 0) {
      iVar2 = 0x40000000;
    }
    else {
      iVar2 = -0x40000000;
    }
    iVar3 = 0;
    piVar4 = param_2;
    while (iVar3 < param_3) {
      iVar5 = *(int *)(*piVar4 + 8);
      if ((param_4 < iVar5 != param_5) && (iVar5 < iVar2 != param_5)) {
        *param_1 = *piVar4;
        iVar2 = iVar5;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    if (param_5 == 0) {
      iVar3 = 0x40000000;
    }
    else {
      iVar3 = -0x40000000;
    }
    if (iVar2 == iVar3) break;
    iVar1 = iVar1 + 1;
    param_4 = *(int *)(*param_1 + 8) - param_5;
    param_1 = param_1 + 1;
  }
  return iVar1;
}



int FUN_00016474(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x28) <= iVar3) {
      return 0;
    }
    iVar2 = *(int *)(param_1 + iVar3 * 4 + 0x26b8);
    if (*(int *)(iVar2 + 0xc) == param_2) break;
    iVar3 = iVar3 + 1;
  }
  iVar1 = *(int *)(param_1 + 0x28) + -1;
  *(undefined4 *)(param_1 + (iVar3 + 0x9ae) * 4) = 0;
  *(int *)(param_1 + 0x28) = iVar1;
  if (iVar1 == 0) {
    return iVar2;
  }
  memmove((void *)(param_1 + (iVar3 + 0x9ae) * 4),(void *)(param_1 + (iVar3 + 0x9af) * 4),
          (iVar1 - iVar3) * 4);
  return iVar2;
}



bool FUN_000164c4(void *param_1,void *param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  bool bVar2;
  
  bVar2 = (param_3 & *(uint *)((int)param_2 + 0xa4)) != 0;
  if ((bVar2) && (memcpy(param_1,param_2,0xe4), param_3 != 3)) {
    if (param_3 == 2) {
      uVar1 = 2;
    }
    else {
      uVar1 = 1;
    }
    *(uint *)((int)param_1 + 0xa4) = param_3;
    *(undefined4 *)((int)param_1 + 0xb0) = uVar1;
    *(int *)((int)param_1 + 0x10) = param_4 + *(int *)((int)param_1 + 0x10) * 2;
  }
  return bVar2;
}



int FUN_00016500(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_30;
  int local_2c;
  
  iVar4 = 0;
  local_30 = 0;
  local_2c = 0;
  while ((local_30 < param_3 || (local_2c < param_3))) {
    iVar3 = 0;
    iVar2 = local_30 * 4;
    while ((local_30 < param_3 &&
           ((iVar1 = *(int *)(param_2 + iVar2 + iVar3), iVar1 == 0 ||
            ((param_5 & *(uint *)(iVar1 + 0xa4)) == 0))))) {
      local_30 = local_30 + 1;
      iVar3 = iVar3 + 4;
    }
    iVar3 = 0;
    iVar2 = local_2c * 4;
    while ((local_2c < param_3 &&
           ((iVar1 = *(int *)(param_2 + iVar2 + iVar3), iVar1 == 0 ||
            (((param_5 ^ 3) & *(uint *)(iVar1 + 0xa4)) == 0))))) {
      local_2c = local_2c + 1;
      iVar3 = iVar3 + 4;
    }
    if (local_30 < param_3) {
      iVar1 = local_30 * 4;
      iVar3 = *(int *)(param_2 + local_30 * 4);
      iVar2 = local_30;
      if (param_4 == 0) {
        iVar2 = *(int *)(iVar3 + 0xc);
      }
      *(int *)(iVar3 + 0x10) = iVar2;
      local_30 = local_30 + 1;
      iVar2 = iVar4 * 0xe4;
      iVar4 = iVar4 + 1;
      FUN_000164c4((void *)(iVar2 + param_1),*(void **)(param_2 + iVar1),param_5,1);
    }
    if (local_2c < param_3) {
      iVar3 = local_2c * 4;
      iVar1 = *(int *)(param_2 + local_2c * 4);
      iVar2 = local_2c;
      if (param_4 == 0) {
        iVar2 = *(int *)(iVar1 + 0xc);
      }
      *(int *)(iVar1 + 0x10) = iVar2;
      iVar2 = iVar4 * 0xe4;
      local_2c = local_2c + 1;
      iVar4 = iVar4 + 1;
      FUN_000164c4((void *)(iVar2 + param_1),*(void **)(param_2 + iVar3),param_5 ^ 3,0);
    }
  }
  return iVar4;
}



undefined4 FUN_000165ea(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(param_2 + 0xa4);
  uVar1 = param_3 & uVar2;
  *(uint *)(param_2 + 0xa4) = uVar1;
  if (uVar1 != 0) {
    if (uVar1 != 4) {
      return 0;
    }
    if (*(int *)(param_2 + 0xcc) != 0) {
      if ((*(char *)(param_2 + 0xe0) != '\x01') && (*(int *)(param_2 + 0xd0) == 0)) {
        return 0;
      }
      FbmReturnBuffer(*(undefined4 *)(param_1 + 0xb700),*(int *)(param_2 + 0xcc),0,uVar2,param_4);
      *(undefined4 *)(*(int *)(param_2 + 0xc0) * 0xe4 + param_1 + 0xa84) = 0;
      *(undefined4 *)(param_2 + 0xcc) = 0;
      *(undefined *)(param_2 + 0xe0) = 0;
      *(undefined4 *)(param_2 + 0xa4) = 0;
      *(undefined *)(param_2 + 0xd8) = 0;
      return 0;
    }
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0xb638);
  while (param_2 != iVar3) {
    iVar3 = *(int *)(param_1 + uVar1 + 0xb5b8);
    if (iVar3 == 0) goto LAB_0001666e;
    uVar1 = uVar1 + 4;
  }
  *(undefined4 *)(param_2 + 0xa4) = 4;
LAB_0001666e:
  uVar2 = *(uint *)(param_2 + 0xa4);
  uVar1 = 1 - uVar2;
  if (1 < uVar2) {
    uVar1 = 0;
  }
  if (uVar2 == 4) {
    uVar1 = uVar1 | 1;
  }
  if ((uVar1 != 0) && (*(int *)(param_2 + 0xcc) != 0)) {
    if ((*(char *)(param_2 + 0xe0) != '\x01') && (uVar2 = *(uint *)(param_2 + 0xd0), uVar2 == 0)) {
      return 1;
    }
    FbmReturnBuffer(*(undefined4 *)(param_1 + 0xb700),*(int *)(param_2 + 0xcc),0,uVar2,param_4);
    *(undefined4 *)(*(int *)(param_2 + 0xc0) * 0xe4 + param_1 + 0xa84) = 0;
    *(undefined4 *)(param_2 + 0xcc) = 0;
    *(undefined *)(param_2 + 0xe0) = 0;
    *(undefined4 *)(param_2 + 0xa4) = 0;
  }
  return 1;
}



int H264PicNumExtract(int param_1,int param_2,uint *param_3)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x14);
  *param_3 = (uint)bVar1;
  if (*(char *)(param_1 + 0x14) != '\x03') {
    if (-1 < param_2 << 0x1f) {
      *param_3 = bVar1 ^ 3;
    }
    param_2 = param_2 >> 1;
  }
  return param_2;
}



void H264ReferenceRefresh(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = (int *)(param_1 + 0x2638);
  while (iVar1 = *(int *)(param_1 + 0x24), iVar2 < iVar1) {
    if (*piVar3 != 0) {
      FUN_000165ea(param_1,*piVar3,0,iVar1);
      *piVar3 = 0;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar3 = (int *)(param_1 + 0x26b8);
  while (iVar2 < *(int *)(param_1 + 0x28)) {
    iVar2 = iVar2 + 1;
    FUN_000165ea(param_1,*piVar3,0,iVar1);
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



undefined4 H264FillDefaultRefList(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int local_1a4;
  int local_1a0;
  int *local_19c;
  int local_198;
  int local_194;
  int local_190;
  int aiStack396 [32];
  undefined auStack268 [232];
  
  piVar6 = (int *)(param_1 + 0x26b8);
  iVar3 = param_1 + 0x2738;
  if (*(char *)(param_1 + 0x16) == '\x01') {
    if (*(char *)(param_1 + 0x14) == '\x03') {
      local_1a4 = *(int *)(*(int *)(param_1 + 0xb644) + 8);
    }
    else {
      local_1a4 = *(int *)(*(int *)(param_1 + 0xb644) +
                          (uint)(*(char *)(param_1 + 0x14) == '\x02') * 4);
    }
    iVar4 = 0;
    local_19c = &local_198;
    uVar5 = 0;
    local_1a0 = param_1;
    do {
      iVar1 = FUN_00016404(aiStack396,piVar6,*(int *)(param_1 + 0x28),local_1a4,uVar5 ^ 1);
      iVar2 = FUN_00016404(aiStack396 + iVar1,piVar6,*(int *)(param_1 + 0x28),local_1a4,uVar5);
      iVar1 = FUN_00016500(param_1 + uVar5 * 0x1c80 + 0x2738,(int)aiStack396,iVar1 + iVar2,0,
                           (uint)*(byte *)(param_1 + 0x14));
      iVar2 = FUN_00016500(iVar3 + iVar1 * 0xe4 + iVar4,param_1 + 0x2638,0x10,1,
                           (uint)*(byte *)(param_1 + 0x14));
      iVar1 = iVar1 + iVar2;
      if ((param_3 == 1) && (*(int *)(param_2 + 0x14) == 0)) {
        local_198 = param_2;
        iVar2 = FUN_00016500(iVar3 + iVar1 * 0xe4 + iVar4,(int)&local_198,1,0,
                             (uint)*(byte *)(param_1 + 0x14));
        iVar1 = iVar1 + iVar2;
      }
      if (iVar1 < *(int *)(local_1a0 + 0x2c)) {
        memset((void *)(iVar3 + iVar1 * 0xe4 + iVar4),0,(*(int *)(local_1a0 + 0x2c) - iVar1) * 0xe4)
        ;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x1c80;
      local_1a0 = local_1a0 + 4;
      local_19c = local_19c + 1;
      *local_19c = iVar1;
    } while (uVar5 != 2);
    if (local_194 == local_190) {
      iVar3 = 0;
      iVar4 = 0;
      if (1 < local_194) {
        while (*(int *)(param_1 + iVar3 + 0x27f8) == *(int *)(param_1 + iVar3 + 0x4478)) {
          iVar3 = iVar3 + 0xe4;
          if (iVar4 == local_194) goto LAB_00016894;
          iVar4 = iVar4 + 1;
        }
        if (iVar4 == local_194) {
LAB_00016894:
          memcpy(auStack268,(void *)(param_1 + 0x449c),0xe4);
          memcpy((void *)(param_1 + 0x449c),(void *)(param_1 + 0x43b8),0xe4);
          memcpy((void *)(param_1 + 0x43b8),auStack268,0xe4);
        }
      }
    }
  }
  else {
    iVar4 = FUN_00016500(iVar3,(int)piVar6,*(int *)(param_1 + 0x28),0,
                         (uint)*(byte *)(param_1 + 0x14));
    iVar1 = FUN_00016500(iVar4 * 0xe4 + iVar3,param_1 + 0x2638,0x10,1,
                         (uint)*(byte *)(param_1 + 0x14));
    iVar4 = iVar4 + iVar1;
    if ((param_3 == 1) && (*(int *)(param_2 + 0x14) == 0)) {
      local_198 = param_2;
      iVar1 = FUN_00016500(iVar4 * 0xe4 + iVar3,(int)&local_198,1,0,(uint)*(byte *)(param_1 + 0x14))
      ;
      iVar4 = iVar4 + iVar1;
    }
    if (iVar4 < *(int *)(param_1 + 0x2c)) {
      memset((void *)(iVar4 * 0xe4 + iVar3),0,(*(int *)(param_1 + 0x2c) - iVar4) * 0xe4);
    }
  }
  return 0;
}



void H264DirectRefListInit(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = *(int *)(param_1 + 0xb644);
  if (*(int *)(iVar4 + 0xac) == 2) {
    *(undefined4 *)(iVar4 + 0x98) = 0;
  }
  else {
    if (*(int *)(iVar4 + 0xac) == 1) goto LAB_00016948;
  }
  *(undefined4 *)(iVar4 + 0x9c) = 0;
LAB_00016948:
  iVar3 = 0;
  iVar6 = param_1;
  iVar7 = iVar4;
  do {
    *(undefined4 *)(iVar4 + iVar3 + 0x98) = *(undefined4 *)(param_1 + 0x2c);
    iVar5 = 0;
    iVar2 = 0;
    while (iVar2 < *(int *)(param_1 + 0x2c)) {
      iVar8 = iVar6 + iVar5;
      iVar5 = iVar5 + 0xe4;
      iVar1 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      *(undefined4 *)(iVar7 + iVar1 + 0x18) = *(undefined4 *)(iVar8 + 0x6040);
    }
    iVar3 = iVar3 + 4;
    param_1 = param_1 + 4;
    iVar7 = iVar7 + 0x40;
    iVar6 = iVar6 + 0x2ac0;
  } while (iVar3 != 8);
  return;
}



uint H264DecodeRefPicMarking(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(char *)(param_2 + 0xb710) == '\x01') {
    H264GetBits(param_1,1);
    iVar1 = H264GetBits(param_1,1);
    *(int *)(param_2 + 0x5b0) = iVar1 + -1;
    if (iVar1 + -1 != -1) {
      *(undefined4 *)(param_2 + 0xac) = 1;
      *(undefined4 *)(param_2 + 0x5a8) = 6;
      return 0;
    }
    *(undefined4 *)(param_2 + 0x5b0) = 0;
    return 0;
  }
  uVar2 = H264GetBits(param_1,1);
  if (uVar2 == 0) {
    iVar1 = *(int *)(param_2 + 0x28);
    *(undefined4 *)(param_2 + 0xac) = 0;
    if (iVar1 == 0) {
      return 0;
    }
    if ((iVar1 + *(int *)(param_2 + 0x24) == *(int *)(*(int *)(param_2 + 0xd8) + 8)) &&
       (((*(char *)(param_2 + 0x14) == '\x03' ||
         (uVar2 = (uint)*(byte *)(param_2 + 0x13), uVar2 != 0)) ||
        (*(int *)(*(int *)(param_2 + 0xb644) + 0xa4) == 0)))) {
      *(undefined4 *)(param_2 + 0x5a8) = 1;
      iVar1 = *(int *)(*(int *)(param_2 + (iVar1 + 0x9ad) * 4) + 0xc);
      *(undefined4 *)(param_2 + 0xac) = 1;
      *(int *)(param_2 + 0x5ac) = iVar1;
      if (*(char *)(param_2 + 0x14) != '\x03') {
        iVar1 = iVar1 * 2;
        *(undefined4 *)(param_2 + 0x5b4) = 1;
        *(int *)(param_2 + 0x5ac) = iVar1;
        *(int *)(param_2 + 0x5b8) = iVar1 + 1;
        *(undefined4 *)(param_2 + 0xac) = 2;
        return 0;
      }
      uVar2 = 0;
    }
    return uVar2;
  }
  iVar5 = 0;
  iVar1 = param_2;
  do {
    iVar3 = H264GetUeGolomb(param_1);
    *(int *)(iVar1 + 0x5a8) = iVar3;
    if (iVar3 == 3 || iVar3 == 1) {
      iVar6 = *(int *)(param_2 + 0x44);
      iVar4 = H264GetUeGolomb(param_1);
      *(uint *)(iVar1 + 0x5ac) = (iVar6 + -1) - iVar4 & *(int *)(param_2 + 0x48) - 1U;
    }
    if ((iVar3 - 2U < 2 || iVar3 == 6) || (iVar3 == 4)) {
      uVar2 = H264GetUeGolomb(param_1);
      if ((0x20 < uVar2) ||
         ((0xf < uVar2 && ((iVar3 != 2 || (*(char *)(param_2 + 0x14) == '\x03')))))) {
        return 0xfb;
      }
      *(uint *)(iVar1 + 0x5b0) = uVar2;
    }
    if (iVar3 == 0) break;
    iVar5 = iVar5 + 1;
    iVar1 = iVar1 + 0xc;
  } while (iVar5 != 0x42);
  *(int *)(param_2 + 0xac) = iVar5;
  return 0;
}



longlong H264ReorderInterviewPic(uint param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *__src;
  int iVar4;
  int iVar5;
  
  __src = *(void **)(*(int *)(param_1 + 0xcc) + 0x14);
  if ((__src != (void *)0x0) && (*(int *)((int)__src + 0x14) != 1)) {
    iVar2 = 0;
    iVar5 = *(int *)(param_2 + param_3 * 4 + 0x2c);
    iVar3 = iVar5;
    while (iVar2 = iVar2 + -0xe4, param_4 < iVar3) {
      iVar4 = param_2 + iVar5 * 0xe4 + param_3 * 0x2ac0 + iVar2;
      memcpy((void *)(iVar4 + 0x611c),(void *)(iVar4 + 0x6038),0xe4);
      iVar3 = iVar3 + -1;
    }
    iVar3 = param_4 * 0xe4 + param_3 * 0x2ac0;
    iVar4 = param_4 + 1;
    iVar2 = param_2 + iVar3 + 0x6038;
    memcpy((void *)(param_2 + iVar3 + 0x6038),__src,0xe4);
    iVar3 = iVar4;
    while (iVar4 <= iVar5) {
      if ((*(int *)(iVar2 + 0xf8) == 1) || (*(int *)(iVar2 + 0xf0) != *(int *)(param_2 + 0x44))) {
        iVar1 = iVar3 * 0xe4;
        iVar3 = iVar3 + 1;
        memcpy((void *)(param_2 + iVar1 + param_3 * 0x2ac0 + 0x6038),(void *)(iVar2 + 0xe4),0xe4);
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0xe4;
    }
  }
  return (longlong)((ulonglong)param_1 << 0x20);
}



undefined4 H264DecodeRefPicListReordering(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void **ppvVar6;
  uint uVar7;
  int iVar8;
  void *__src;
  int iVar9;
  int iVar10;
  int iVar11;
  void *local_44;
  uint local_40;
  uint local_2c [2];
  
  local_2c[0] = 0;
  uVar7 = (uint)(*(char *)(param_2 + 0x16) == '\x02');
  if (*(char *)(param_2 + 0x16) == '\x04') {
    uVar7 = 1;
  }
  iVar10 = param_2;
  local_40 = uVar7;
  if (uVar7 == 0) {
    while ((int)uVar7 < *(int *)(param_2 + 0x20)) {
      local_44 = (void *)(param_2 + uVar7 * 0x2ac0 + 0x6038);
      memcpy(local_44,(void *)(param_2 + uVar7 * 0x1c80 + 0x2738),*(int *)(iVar10 + 0x2c) * 0xe4);
      uVar1 = H264GetBits(param_1,1);
      if ((uVar1 & 0xff) == 1) {
        uVar1 = *(uint *)(param_2 + 0x44);
        iVar8 = 0;
        while (uVar2 = H264GetUeGolomb(param_1), uVar2 != 3) {
          if (*(int *)(iVar10 + 0x2c) <= iVar8) {
            return 0xfb;
          }
          if (uVar2 < 3) {
            if (uVar2 == 2) {
              iVar3 = H264GetUeGolomb(param_1);
              iVar5 = H264PicNumExtract(param_2,iVar3,local_2c);
              if (0x1f < iVar5) {
                return 0xfb;
              }
              __src = *(void **)(param_2 + (iVar5 + 0x98e) * 4);
              if ((__src == (void *)0x0) || ((local_2c[0] & *(uint *)((int)__src + 0xa4)) == 0)) {
LAB_00016dce:
                memset((void *)(param_2 + 0x6038 + iVar8 * 0xe4 + uVar7 * 0x2ac0),0,0xe4);
                return 0xfb;
              }
              *(int *)((int)__src + 0x10) = iVar3;
            }
            else {
              iVar3 = H264GetUeGolomb(param_1);
              uVar4 = iVar3 + 1;
              if (*(uint *)(param_2 + 0x48) < uVar4) {
                return 0xfb;
              }
              if (uVar2 == 0) {
                uVar4 = -uVar4;
              }
              uVar1 = uVar1 + uVar4 & *(uint *)(param_2 + 0x48) - 1;
              iVar5 = H264PicNumExtract(param_2,uVar1,local_2c);
              iVar3 = *(int *)(param_2 + 0x28);
              ppvVar6 = (void **)(param_2 + (iVar3 + 0x9ae) * 4);
              do {
                iVar3 = iVar3 + -1;
                if (iVar3 < 0) goto LAB_00016dce;
                ppvVar6 = ppvVar6 + -1;
                __src = *ppvVar6;
              } while ((((*(int *)((int)__src + 0xcc) == 0) || (*(int *)((int)__src + 0xc) != iVar5)
                        ) || ((local_2c[0] & *(uint *)((int)__src + 0xa4)) == 0)) ||
                      (*(int *)((int)__src + 0x14) != 0));
              *(uint *)((int)__src + 0x10) = uVar1;
            }
            iVar5 = param_2 + iVar8 * 0xe4 + uVar7 * 0x2ac0 + 0x6038;
            iVar3 = iVar8;
            while ((iVar3 + 1 < *(int *)(iVar10 + 0x2c) &&
                   ((*(int *)((int)__src + 0x14) != *(int *)(iVar5 + 0x14) ||
                    (*(int *)((int)__src + 0x10) != *(int *)(iVar5 + 0x10)))))) {
              iVar5 = iVar5 + 0xe4;
              iVar3 = iVar3 + 1;
            }
            iVar5 = iVar3 * 0xe4;
            iVar9 = 0;
            while (iVar9 = iVar9 + -0xe4, iVar8 < iVar3) {
              iVar11 = param_2 + iVar5 + local_40 + iVar9;
              iVar3 = iVar3 + -1;
              memcpy((void *)(iVar11 + 0x611c),(void *)(iVar11 + 0x6038),0xe4);
            }
            memcpy(local_44,__src,0xe4);
            if (*(char *)(param_2 + 0x14) != '\x03') {
              *(uint *)((int)local_44 + 0xa4) = local_2c[0];
              *(uint *)((int)local_44 + 0xb0) = local_2c[0];
            }
          }
          else {
            if (uVar2 - 4 < 2) {
              H264GetUeGolomb(param_1);
              H264ReorderInterviewPic(param_1,param_2,uVar7,iVar8);
            }
          }
          iVar8 = iVar8 + 1;
          local_44 = (void *)((int)local_44 + 0xe4);
        }
      }
      uVar7 = uVar7 + 1;
      iVar10 = iVar10 + 4;
      local_40 = local_40 + 0x2ac0;
    }
    H264DirectRefListInit(param_2);
  }
  return 0;
}



undefined4 H264ExecuteRefPicMarking(int param_1,undefined4 *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int **ppiVar8;
  int *piVar9;
  int iVar11;
  int iVar12;
  int *local_2c [2];
  int *piVar10;
  
  local_2c[0] = (int *)0x0;
  bVar1 = false;
  iVar12 = 0;
  ppiVar8 = (int **)(param_1 + 0xb644);
  piVar6 = (int *)(param_1 + 0x2678);
  while (iVar12 < param_3) {
    switch(*param_2) {
    case 1:
      iVar4 = 0;
      iVar7 = H264PicNumExtract(param_1,param_2[1],(uint *)local_2c);
      piVar6 = *(int **)(param_1 + 0x28);
      while (iVar4 < (int)piVar6) {
        iVar11 = *(int *)(param_1 + iVar4 * 4 + 0x26b8);
        if (*(int *)(iVar11 + 0xc) == iVar7) {
          piVar6 = local_2c[0];
          iVar7 = FUN_000165ea(param_1,iVar11,(uint)local_2c[0] ^ 3,local_2c[0]);
          if (iVar7 != 0) {
            *(undefined4 *)(param_1 + (iVar4 + 0x9ae) * 4) = 0;
            iVar7 = *(int *)(param_1 + 0x28) + -1;
            *(int *)(param_1 + 0x28) = iVar7;
            if (iVar7 != 0) {
              piVar6 = (int *)(iVar7 - iVar4);
              memmove((void *)(param_1 + (iVar4 + 0x9ae) * 4),
                      (void *)(param_1 + (iVar4 + 0x9af) * 4),(int)piVar6 * 4);
            }
          }
          break;
        }
        iVar4 = iVar4 + 1;
      }
      break;
    case 2:
      iVar7 = H264PicNumExtract(param_1,param_2[2],(uint *)local_2c);
      iVar4 = *(int *)(param_1 + (iVar7 + 0x98e) * 4);
      if ((iVar4 != 0) &&
         (piVar6 = local_2c[0],
         iVar4 = FUN_000165ea(param_1,iVar4,(uint)local_2c[0] ^ 3,local_2c[0]), iVar4 != 0)) {
        *(undefined4 *)(param_1 + (iVar7 + 0x98e) * 4) = 0;
        piVar6 = (int *)(*(int *)(param_1 + 0x24) + -1);
LAB_00016f52:
        *(int **)(param_1 + 0x24) = piVar6;
      }
      break;
    case 3:
      if (((*(byte *)(param_1 + 0x14) == 3) || (*(int *)(param_1 + 0x24) <= (int)param_2[2])) ||
         (piVar6 = *(int **)(*(int *)(param_1 + (param_2[2] + 0x98e) * 4) + 0xc),
         piVar6 != (int *)((int)param_2[1] >> 1))) {
        iVar7 = param_2[1];
        uVar5 = *(byte *)(param_1 + 0x14) - 3;
        if (uVar5 != 0) {
          uVar5 = 1;
        }
        iVar4 = *(int *)(param_1 + (param_2[2] + 0x98e) * 4);
        if (iVar4 != 0) {
          *(undefined4 *)(param_1 + (param_2[2] + 0x98e) * 4) = 0;
          iVar11 = *(int *)(param_1 + 0x24);
          *(int *)(param_1 + 0x24) = iVar11 + -1;
          FUN_000165ea(param_1,iVar4,0,iVar11);
        }
        iVar4 = param_2[2];
        iVar7 = FUN_00016474(param_1,iVar7 >> (uVar5 & 0xff));
        *(int *)(param_1 + (iVar4 + 0x98e) * 4) = iVar7;
        piVar6 = *(int **)(param_1 + (param_2[2] + 0x98e) * 4);
        if (piVar6 != (int *)0x0) {
          piVar6[5] = 1;
          piVar6 = (int *)(*(int *)(param_1 + 0x24) + 1);
          goto LAB_00016f52;
        }
      }
      break;
    case 4:
      iVar11 = param_2[2];
      iVar4 = 0;
      iVar7 = iVar11 * 4;
      while (iVar11 < 0x10) {
        iVar2 = param_1 + iVar7 + iVar4;
        iVar3 = *(int *)(iVar2 + 0x2638);
        if (iVar3 != 0) {
          piVar6 = (int *)0x0;
          *(undefined4 *)(iVar2 + 0x2638) = 0;
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
          FUN_000165ea(param_1,iVar3,0,0);
        }
        iVar11 = iVar11 + 1;
        iVar4 = iVar4 + 4;
      }
      break;
    case 5:
      while (piVar6 = *(int **)(param_1 + 0x28), piVar6 != (int *)0x0) {
        iVar7 = FUN_00016474(param_1,*(int *)(*(int *)(param_1 + 0x26b8) + 0xc));
        if (iVar7 != 0) {
          FUN_000165ea(param_1,iVar7,0,piVar6);
        }
      }
      piVar9 = (int *)(param_1 + 0x2638);
      do {
        piVar10 = piVar9 + 1;
        iVar7 = *piVar9;
        if (iVar7 != 0) {
          *piVar9 = 0;
          piVar6 = (int *)(*(int *)(param_1 + 0x24) + -1);
          *(int **)(param_1 + 0x24) = piVar6;
          FUN_000165ea(param_1,iVar7,0,piVar6);
        }
        piVar9 = piVar10;
      } while (piVar10 != (int *)(param_1 + 0x2678));
      break;
    case 6:
      if (((*(char *)(param_1 + 0x14) == '\x03') || (*(char *)(param_1 + 0x13) != '\0')) ||
         ((*(int **)(param_1 + (param_2[2] + 0x98e) * 4) != *ppiVar8 && ((*ppiVar8)[0x29] == 0)))) {
        iVar7 = *(int *)(param_1 + (param_2[2] + 0x98e) * 4);
        if (iVar7 != 0) {
          *(undefined4 *)(param_1 + (param_2[2] + 0x98e) * 4) = 0;
          iVar4 = *(int *)(param_1 + 0x24);
          *(int *)(param_1 + 0x24) = iVar4 + -1;
          FUN_000165ea(param_1,iVar7,0,iVar4);
        }
        *(int **)(param_1 + (param_2[2] + 0x98e) * 4) = *ppiVar8;
        *(undefined4 *)(*(int *)(param_1 + (param_2[2] + 0x98e) * 4) + 0x14) = 1;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      }
      piVar6 = *ppiVar8;
      bVar1 = true;
      piVar6[0x29] = piVar6[0x29] | (uint)*(byte *)(param_1 + 0x14);
    }
    iVar12 = iVar12 + 1;
    param_2 = param_2 + 3;
  }
  if (!bVar1) {
    if (((*(char *)(param_1 + 0x14) == '\x03') ||
        (piVar6 = (int *)(uint)*(byte *)(param_1 + 0x13), piVar6 != (int *)0x0)) ||
       (*(int *)(*(int *)(param_1 + 0xb644) + 0xa4) == 0)) {
      iVar12 = FUN_00016474(param_1,*(int *)(*(int *)(param_1 + 0xb644) + 0xc));
      if (iVar12 != 0) {
        FUN_000165ea(param_1,iVar12,0,piVar6);
      }
      if (*(int *)(param_1 + 0x28) != 0) {
        memmove((void *)(param_1 + 0x26bc),(void *)(param_1 + 0x26b8),*(int *)(param_1 + 0x28) << 2)
        ;
      }
      *(int *)(param_1 + 0x26b8) = *(int *)(param_1 + 0xb644);
      *(undefined4 *)(*(int *)(param_1 + 0xb644) + 0x14) = 0;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      iVar12 = *(int *)(param_1 + 0xb644);
      uVar5 = *(uint *)(iVar12 + 0xa4) | (uint)*(byte *)(param_1 + 0x14);
    }
    else {
      if ((*(int *)(param_1 + 0x28) == 0) ||
         (iVar12 = *(int *)(param_1 + 0x26b8), iVar12 != *(int *)(param_1 + 0xb644)))
      goto LAB_000170ee;
      uVar5 = 3;
    }
    *(uint *)(iVar12 + 0xa4) = uVar5;
  }
LAB_000170ee:
  iVar7 = *(int *)(param_1 + 0x24);
  iVar12 = *(int *)(param_1 + 0x28);
  if (*(int *)(*(int *)(param_1 + 0xd8) + 8) < iVar7 + iVar12) {
    if (iVar7 == 0) {
      iVar4 = *(int *)(param_1 + (iVar12 + 0x9ad) * 4);
      *(undefined4 *)(param_1 + (iVar12 + 0x9ad) * 4) = 0;
      *(int *)(param_1 + 0x28) = iVar12 + -1;
    }
    else {
      iVar12 = 0;
      do {
        if (*(int *)(param_1 + iVar12 * 4 + 0x2638) != 0) break;
        iVar12 = iVar12 + 1;
      } while (iVar12 != 0x10);
      iVar7 = iVar7 + -1;
      iVar4 = *(int *)(param_1 + (iVar12 + 0x98e) * 4);
      *(undefined4 *)(param_1 + (iVar12 + 0x98e) * 4) = 0;
      *(int *)(param_1 + 0x24) = iVar7;
    }
    FUN_000165ea(param_1,iVar4,0,iVar7);
  }
  return 0;
}



longlong H264DecodeNalHeaderExt(uint param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  ushort **ppuVar2;
  int iVar3;
  
  iVar3 = param_2;
  uVar1 = H264GetBits(param_1,0x18);
  if ((int)(uVar1 << 8) < 0) {
    param_1 = 0x16;
    __android_log_print(3,"awplayer",
                        "<%s:%u>: nal_unit_header_svc_extension, specified in Annex G\n",
                        "H264DecodeNalHeaderExt",0x16,iVar3,param_3);
  }
  ppuVar2 = *(ushort ***)(param_2 + 0xb750);
  ppuVar2[1] = *ppuVar2;
  **ppuVar2 = (ushort)((uVar1 << 9) >> 0x1f);
  ppuVar2[1][1] = (ushort)((uVar1 << 10) >> 0x1a);
  ppuVar2[1][2] = (ushort)(uVar1 >> 6);
  ppuVar2[1][3] = (ushort)((uVar1 << 0x1a) >> 0x1d);
  ppuVar2[1][4] = (ushort)((uVar1 << 0x1d) >> 0x1f);
  ppuVar2[1][5] = (ushort)((uVar1 << 0x1e) >> 0x1f);
  *(char *)(param_2 + 0xb710) = '\x01' - *(char *)ppuVar2[1];
  return (longlong)((ulonglong)param_1 << 0x20);
}



undefined4 H264DecodeNalSpsExt(void)

{
  return 0;
}



void FUN_000171ec(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = H264GetUeGolomb(param_1);
  iVar2 = 0;
  H264GetBits(param_1,4);
  H264GetBits(param_1,4);
  while (iVar2 < iVar1 + 1) {
    H264GetUeGolomb(param_1);
    H264GetUeGolomb(param_1);
    iVar2 = iVar2 + 1;
    H264GetBits(param_1,1);
  }
  H264GetBits(param_1,5);
  iVar1 = H264GetBits(param_1,5);
  *(int *)(param_2 + 0x34c) = iVar1 + 1;
  iVar1 = H264GetBits(param_1,5);
  *(int *)(param_2 + 0x350) = iVar1 + 1;
  H264GetBits(param_1,5);
  return;
}



undefined4 FUN_00017254(int param_1,uint param_2,uint param_3,size_t param_4)

{
  void *__s;
  
  if (param_2 < param_3) {
    if (*(int *)(param_1 + param_2 * 4) == 0) {
      __s = malloc(param_4);
      *(void **)(param_1 + param_2 * 4) = __s;
      memset(__s,0,param_4);
    }
    return *(undefined4 *)(param_1 + param_2 * 4);
  }
  return 0;
}



void FUN_00017284(int param_1,void *param_2,size_t param_3,void *param_4,void *param_5)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_3 == 0x10) {
    puVar3 = &DAT_00019b45;
  }
  else {
    puVar3 = &UNK_00019af0;
  }
  iVar1 = H264GetBits(param_1,1);
  if (iVar1 != 0) {
    uVar2 = 8;
    uVar4 = 0;
    uVar5 = 8;
    while( true ) {
      if ((int)param_3 <= (int)uVar4) {
        return;
      }
      if (uVar2 != 0) {
        iVar1 = H264GetSeGolomb(param_1);
        uVar2 = iVar1 + uVar5 & 0xff;
      }
      param_5 = param_4;
      if ((uVar2 | uVar4) == 0) break;
      if (uVar2 != 0) {
        uVar5 = uVar2;
      }
      *(char *)((int)param_2 + (uint)(byte)puVar3[uVar4]) = (char)uVar5;
      uVar4 = uVar4 + 1;
    }
  }
  memcpy(param_2,param_5,param_3);
  return;
}



void FUN_00017304(int param_1,int param_2,undefined *param_3,uint param_4,void *param_5,
                 void *param_6)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_34;
  
  if (param_4 == 0) {
    if (*(int *)(param_2 + 0x40) == 0) {
      puVar5 = &DAT_00019b79;
      puVar4 = &DAT_00019b89;
      puVar2 = &DAT_00019b99;
      local_34 = &DAT_00019bd9;
      uVar3 = param_4;
    }
    else {
      local_34 = (undefined *)(param_2 + 0xf8);
      puVar5 = (undefined *)(param_2 + 0x58);
      puVar4 = (undefined *)(param_2 + 0x88);
      puVar2 = (undefined *)(param_2 + 0xb8);
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
    puVar2 = &DAT_00019b99;
    puVar5 = &DAT_00019b79;
    puVar4 = &DAT_00019b89;
    local_34 = &DAT_00019bd9;
  }
  iVar1 = H264GetBits(param_1,1);
  if (iVar1 == 0) {
    if (uVar3 != 0) {
      memcpy(param_5,(void *)(param_2 + 0x58),0x60);
      memcpy(param_6,(void *)(param_2 + 0xb8),0x80);
      return;
    }
  }
  else {
    if (param_3 != (undefined *)0x0) {
      *param_3 = 1;
    }
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) | param_4;
    FUN_00017284(param_1,param_5,0x10,&DAT_00019b79,puVar5);
    FUN_00017284(param_1,(void *)((int)param_5 + 0x10),0x10,&DAT_00019b79,param_5);
    FUN_00017284(param_1,(void *)((int)param_5 + 0x20),0x10,&DAT_00019b79,
                 (void *)((int)param_5 + 0x10));
    FUN_00017284(param_1,(void *)((int)param_5 + 0x30),0x10,&DAT_00019b89,puVar4);
    FUN_00017284(param_1,(void *)((int)param_5 + 0x40),0x10,&DAT_00019b89,
                 (void *)((int)param_5 + 0x30));
    FUN_00017284(param_1,(void *)((int)param_5 + 0x50),0x10,&DAT_00019b89,
                 (void *)((int)param_5 + 0x40));
    if ((param_4 != 0) || (*(int *)(param_3 + 0x30) != 0)) {
      FUN_00017284(param_1,param_6,0x40,&DAT_00019b99,puVar2);
      FUN_00017284(param_1,(void *)((int)param_6 + 0x40),0x40,&DAT_00019bd9,local_34);
      return;
    }
  }
  return;
}



int H264DecVuiParameters(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  iVar1 = H264GetBits(param_1,1);
  if ((iVar1 == 1) && (uVar2 = H264GetBits(param_1,8), (uVar2 & 0xff) == 0xff)) {
    iVar1 = H264GetBits(param_1,0x10);
    iVar3 = H264GetBits(param_1,0x10);
    if (iVar3 != 0) {
      uVar4 = __aeabi_uidiv(iVar1 * 1000,iVar3);
      *(undefined4 *)(param_3 + 0x38) = uVar4;
    }
  }
  iVar1 = H264GetBits(param_1,1);
  if (iVar1 != 0) {
    H264GetBits(param_1,1);
  }
  iVar1 = H264GetBits(param_1,1);
  if (iVar1 != 0) {
    H264GetBits(param_1,3);
    uVar2 = H264GetBits(param_1,1);
    *(uint *)(param_2 + 0xb7c0) = (uVar2 & 0xff) << 8;
    iVar1 = H264GetBits(param_1,1);
    if (iVar1 != 0) {
      H264GetBits(param_1,8);
      H264GetBits(param_1,8);
      uVar2 = H264GetBits(param_1,8);
      *(uint *)(param_2 + 0xb7c0) = uVar2 & 0xff | *(uint *)(param_2 + 0xb7c0);
    }
  }
  iVar1 = H264GetBits(param_1,1);
  if (iVar1 != 0) {
    H264GetUeGolomb(param_1);
    H264GetUeGolomb(param_1);
  }
  iVar1 = H264GetBits(param_1,1);
  if (iVar1 != 0) {
    iVar1 = H264GetBits(param_1,0x20);
    uVar4 = H264GetBits(param_1,0x20);
    if (*(int *)(param_2 + 0xb674) == 0) {
      uVar4 = __aeabi_uidiv(uVar4,iVar1 << 1);
      *(undefined4 *)(param_2 + 0xb674) = uVar4;
      __android_log_print(3,"awplayer","<%s:%u>: nFrameRate=%u","H264DecVuiParameters",0x10c,uVar4);
      if (*(int *)(param_2 + 0xb674) != 0) {
        uVar5 = __aeabi_ldivmod(1000000,0,*(int *)(param_2 + 0xb674),0);
        *(int *)(param_2 + 0xb6a0) = (int)uVar5;
        *(int *)(param_2 + 0xb6a4) = (int)((ulonglong)uVar5 >> 0x20);
      }
    }
    H264GetBits(param_1,1);
  }
  iVar1 = H264GetBits(param_1,1);
  *(int *)(param_3 + 0x344) = iVar1;
  if (iVar1 != 0) {
    FUN_000171ec(param_1,param_3);
  }
  iVar1 = H264GetBits(param_1,1);
  *(int *)(param_3 + 0x348) = iVar1;
  if (iVar1 != 0) {
    FUN_000171ec(param_1,param_3);
  }
  if ((*(int *)(param_3 + 0x344) != 0) || (*(int *)(param_3 + 0x348) != 0)) {
    uVar4 = H264GetBits(param_1,1);
    *(char *)(param_3 + 0x340) = (char)uVar4;
  }
  uVar4 = H264GetBits(param_1,1);
  *(char *)(param_3 + 0x341) = (char)uVar4;
  iVar1 = H264GetBits(param_1,1);
  *(int *)(param_3 + 0x338) = iVar1;
  if (iVar1 != 0) {
    H264GetBits(param_1,1);
    H264GetUeGolomb(param_1);
    H264GetUeGolomb(param_1);
    H264GetUeGolomb(param_1);
    H264GetUeGolomb(param_1);
    uVar2 = H264GetUeGolomb(param_1);
    H264GetUeGolomb(param_1);
    iVar1 = 0xfb;
    if (uVar2 < 0x11) {
      *(uint *)(param_3 + 0x33c) = uVar2;
      iVar1 = 0;
    }
  }
  return iVar1;
}



undefined4 H264DecodeSps(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  void *__dest;
  undefined4 uVar7;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined local_378;
  undefined local_377;
  undefined local_376;
  undefined local_375;
  undefined local_374;
  undefined4 local_370;
  int local_36c;
  int local_368;
  int local_364;
  int local_360;
  int local_35c;
  int local_358;
  int local_354;
  int local_350;
  int local_34c;
  int local_348;
  undefined local_344;
  undefined4 local_340;
  int local_33c;
  int local_334;
  undefined4 local_330;
  undefined4 local_32c;
  uint local_328;
  uint local_324;
  undefined auStack800 [96];
  undefined auStack704 [126];
  undefined2 uStack578;
  undefined2 local_240 [272];
  
  iVar9 = *(int *)(param_1 + 0xcc);
  local_324 = H264GetBits(param_1,8);
  H264GetBits(param_1,0x10);
  uVar2 = H264GetUeGolomb(param_1);
  memset(&local_378,0,0x358);
  if (uVar2 < 0x100) {
    local_324 = local_324 & 0xff;
    if (99 < local_324) {
      iVar3 = H264GetUeGolomb(param_1);
      if (iVar3 == 3) {
        H264GetBits(param_1,1);
      }
      H264GetUeGolomb(param_1);
      H264GetUeGolomb(param_1);
      H264GetBits(param_1,1);
      FUN_00017304(param_1,(int)&local_378,(undefined *)0x0,1,auStack800,auStack704);
      *(undefined4 *)(param_2 + 0xb6c4) = 1;
    }
    local_33c = H264GetUeGolomb(param_1);
    local_33c = local_33c + 4;
    uVar4 = H264GetUeGolomb(param_1);
    uVar4 = uVar4 & 0xff;
    local_377 = (undefined)uVar4;
    if (uVar4 == 0) {
      local_334 = H264GetUeGolomb(param_1);
      local_334 = local_334 + 4;
    }
    else {
      if (uVar4 == 1) {
        puVar10 = &uStack578;
        uVar7 = H264GetBits(param_1,1);
        uVar4 = 0;
        local_376 = (undefined)uVar7;
        local_330 = H264GetSeGolomb(param_1);
        local_32c = H264GetSeGolomb(param_1);
        local_328 = H264GetUeGolomb(param_1);
        while (uVar4 < local_328) {
          uVar4 = uVar4 + 1;
          uVar7 = H264GetSeGolomb(param_1);
          puVar10 = puVar10 + 1;
          *puVar10 = (short)uVar7;
        }
      }
      else {
        if (uVar4 != 2) goto LAB_00017920;
      }
    }
    local_370 = H264GetUeGolomb(param_1);
    H264GetBits(param_1,1);
    local_36c = H264GetUeGolomb(param_1);
    local_36c = local_36c + 1;
    local_368 = H264GetUeGolomb(param_1);
    iVar3 = *(int *)(param_2 + 0xb8);
    local_368 = local_368 + 1;
    if (((iVar3 == 0) || (iVar8 = *(int *)(param_2 + 0xbc), iVar8 == 0)) ||
       ((local_36c == iVar3 && (local_368 == iVar8)))) {
      uVar4 = H264GetBits(param_1,1);
      local_364 = local_36c * 0x10;
      *(int *)(param_2 + 0xc0) = local_364;
      *(int *)(param_2 + 0xb8) = local_36c;
      *(int *)(param_2 + 0xbc) = local_368;
      *(undefined4 *)(param_2 + 0xb4) = local_370;
      local_378 = 0;
      uVar4 = uVar4 & 0xff;
      local_375 = (undefined)uVar4;
      *(undefined *)(param_2 + 0xb0) = local_375;
      local_360 = (2 - uVar4) * local_368 * 0x10;
      *(int *)(param_2 + 0xc4) = local_360;
      if (uVar4 == 0) {
        uVar7 = H264GetBits(param_1,1);
        local_378 = (undefined)uVar7;
      }
      uVar7 = H264GetBits(param_1,1);
      local_374 = (undefined)uVar7;
      local_354 = 0;
      local_350 = 0;
      local_34c = 0;
      local_348 = 0;
      uVar6 = H264GetBits(param_1,1);
      if ((uVar6 & 0xff) == 1) {
        H264GetUeGolomb(param_1);
        local_350 = H264GetUeGolomb(param_1);
        H264GetUeGolomb(param_1);
        local_348 = H264GetUeGolomb(param_1);
        local_350 = local_350 << 1;
        local_348 = local_348 * (2 - uVar4) * 2;
      }
      *(int *)(param_2 + 200) = local_354;
      local_35c = (local_364 - local_354) - local_350;
      *(int *)(param_2 + 0xcc) = local_350;
      *(int *)(param_2 + 0xd0) = local_34c;
      *(int *)(param_2 + 0xd4) = local_348;
      local_358 = (local_360 - local_34c) - local_348;
      uVar4 = __aeabi_uidiv(local_35c * 1000);
      if (uVar4 < 0x5b5) {
        local_344 = 1;
      }
      else {
        if (uVar4 < 0x67d) {
          local_344 = 2;
        }
        else {
          if (uVar4 < 0x76d) {
            local_344 = 3;
          }
          else {
            local_344 = 4;
          }
        }
      }
      local_340 = 1000;
      uVar4 = H264GetBits(param_1,1);
      if ((uVar4 & 0xff) == 1) {
        H264DecVuiParameters(param_1,param_2,(int)&local_378);
      }
      if (*(int *)(param_2 + uVar2 * 4 + 0x124) == 0) {
        bVar1 = *(byte *)(param_2 + 0xe0);
        *(char *)(param_2 + (uint)bVar1 + 0xe2) = (char)uVar2;
        *(byte *)(param_2 + 0xe0) = bVar1 + 1;
      }
      __dest = (void *)FUN_00017254(param_2 + 0x124,uVar2,0x20,0x358);
      if (__dest == (void *)0x0) {
        *(char *)(param_2 + 0xe0) = *(char *)(param_2 + 0xe0) + -1;
        uVar7 = 0xffffffff;
      }
      else {
        *(uint *)(param_2 + 0x5a4) = uVar2;
        memcpy(__dest,&local_378,0x358);
        uVar7 = 0;
      }
    }
    else {
      SbmReturnStream(*(undefined4 *)(param_2 + 0xb648),*(undefined4 *)(param_2 + 0xb64c));
      iVar5 = *(int *)(iVar9 + 8);
      uVar7 = extraout_r1;
      if (iVar5 != 0) {
        H264FlushDelayedPictures(iVar5,extraout_r1,iVar3,iVar8);
        uVar7 = extraout_r1_00;
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) {
        H264FlushDelayedPictures(iVar9,uVar7,iVar3,iVar8);
      }
      uVar7 = 6;
    }
  }
  else {
LAB_00017920:
    uVar7 = 0xfb;
  }
  return uVar7;
}



int H264GetVLCSymbol(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  
  iVar4 = (int)param_2 >> 3;
  pbVar5 = (byte *)(param_1 + iVar4);
  uVar2 = ~param_2 & 7;
  iVar3 = 1;
  uVar6 = (int)(uint)*(byte *)(param_1 + iVar4) >> uVar2;
  while (iVar1 = iVar3 * 2 + -1, (uVar6 & 1) == 0) {
    iVar3 = iVar3 + 1;
    uVar2 = uVar2 - 1 & 7;
    pbVar5 = pbVar5 + (uVar2 == 7);
    iVar4 = iVar4 + (uint)(uVar2 == 7);
    uVar6 = (int)(uint)*pbVar5 >> uVar2;
  }
  if (param_3 < iVar4 + (iVar3 + 6 >> 3)) {
    iVar1 = -1;
  }
  return iVar1;
}



undefined4 H264DecodePps(int param_1,char *param_2,uint param_3)

{
  byte bVar1;
  char *__ptr;
  int iVar2;
  void *__dest;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined auStack1356 [4];
  uint local_548;
  undefined4 local_544;
  int local_540;
  uint local_53c;
  undefined local_534;
  undefined local_533;
  uint local_530;
  uint local_52c;
  undefined4 local_528;
  undefined4 local_524;
  undefined4 local_520;
  uint local_51c;
  undefined4 local_518;
  undefined4 local_514;
  undefined4 local_510;
  undefined auStack1292 [96];
  undefined auStack1196 [128];
  char acStack1068 [1024];
  int local_2c;
  
  uVar8 = param_3 & ~((int)param_3 >> 0x20);
  if ((int)param_3 < 0) {
    uVar8 = param_3 + 7;
  }
  iVar9 = (int)uVar8 >> 3;
  local_2c = __stack_chk_guard;
  iVar11 = *(int *)(param_1 + 0xcc);
  __ptr = acStack1068;
  if ((0x3fc < iVar9) && (__ptr = (char *)malloc(iVar9 + 4), __ptr == (char *)0x0)) {
    __android_log_print(3,"awplayer","<%s:%u>: malloc buffer for pBuffer error\n","H264DecodePps",
                        0x276);
  }
  iVar4 = iVar9 + 4;
  pcVar7 = *(code **)(iVar11 + 0x30);
  iVar2 = *(int *)(param_2 + 0xb654);
  pcVar10 = __ptr;
  if (*(uint *)(param_2 + 0xb658) < (uint)(iVar2 + iVar4)) {
    iVar12 = (*(uint *)(param_2 + 0xb658) - iVar2) + 1;
    (*pcVar7)(iVar2,__ptr,iVar12);
    pcVar7 = *(code **)(iVar11 + 0x30);
    iVar2 = *(int *)(param_2 + 0xb650);
    iVar4 = (4 - iVar12) + iVar9;
    pcVar10 = __ptr + iVar12;
  }
  (*pcVar7)(iVar2,pcVar10,iVar4);
  if ((param_2[0x10] == '\x01') || (iVar11 = iVar9, *param_2 == '\0')) {
    iVar2 = 0;
    pcVar10 = __ptr;
    while ((iVar11 = iVar9, iVar2 <= iVar9 &&
           ((((*pcVar10 != '\0' || (pcVar10[1] != '\0')) || (pcVar10[2] != '\0')) ||
            (iVar11 = iVar2, pcVar10[3] != '\x01'))))) {
      iVar2 = iVar2 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  uVar13 = 1;
  uVar8 = (uint)(byte)__ptr[iVar11 + -1];
  do {
    uVar5 = uVar8 & 1;
    uVar14 = uVar13;
    if (uVar5 != 0) break;
    uVar13 = uVar13 + 1;
    uVar8 = (int)uVar8 >> 1;
    uVar14 = uVar5;
  } while (uVar13 != 9);
  iVar11 = iVar11 + -1;
  uVar8 = H264GetUeGolomb(param_1);
  pcVar10 = __ptr + 1;
  memset(auStack1356,0,0x120);
  uVar13 = H264GetVLCSymbol((int)pcVar10,0,iVar11);
  uVar5 = H264GetUeGolomb(param_1);
  uVar6 = (uint)(0xff < uVar8);
  if (0x1f < uVar5) {
    uVar6 = 1;
  }
  if ((uVar6 == 0) && (*(int *)(param_2 + uVar5 * 4 + 0x124) != 0)) {
    iVar9 = H264GetVLCSymbol((int)pcVar10,uVar13,iVar11);
    local_548 = uVar5;
    local_544 = H264GetBits(param_1,1);
    uVar13 = uVar13 + iVar9 + 2;
    uVar3 = H264GetBits(param_1,1);
    local_534 = (undefined)uVar3;
    iVar9 = H264GetUeGolomb(param_1);
    local_53c = iVar9 + 1U;
    iVar2 = H264GetVLCSymbol((int)pcVar10,uVar13,iVar11);
    if (iVar9 + 1U < 2) {
      uVar13 = uVar13 + iVar2;
      iVar9 = H264GetUeGolomb(param_1);
      local_530 = iVar9 + 1;
      iVar9 = H264GetVLCSymbol((int)pcVar10,uVar13,iVar11);
      uVar13 = uVar13 + iVar9;
      iVar9 = H264GetUeGolomb(param_1);
      local_52c = iVar9 + 1U;
      iVar2 = H264GetVLCSymbol((int)pcVar10,uVar13,iVar11);
      if ((local_530 < 0x21) && (iVar9 + 1U < 0x21)) {
        local_528 = H264GetBits(param_1,1);
        local_524 = H264GetBits(param_1,2);
        uVar13 = uVar13 + iVar2 + 3;
        local_540 = H264GetSeGolomb(param_1);
        local_540 = local_540 + 0x1a;
        iVar9 = H264GetVLCSymbol((int)pcVar10,uVar13,iVar11);
        uVar13 = uVar13 + iVar9;
        H264GetSeGolomb(param_1);
        iVar9 = H264GetVLCSymbol((int)pcVar10,uVar13,iVar11);
        uVar13 = uVar13 + iVar9;
        local_518 = H264GetSeGolomb(param_1);
        iVar9 = H264GetVLCSymbol((int)pcVar10,uVar13,iVar11);
        local_520 = H264GetBits(param_1,1);
        local_510 = H264GetBits(param_1,1);
        uVar3 = H264GetBits(param_1,1);
        local_533 = (undefined)uVar3;
        local_514 = local_518;
        local_51c = uVar6;
        memset(auStack1292,0x10,0x60);
        memset(auStack1196,0x10,0x80);
        if (*(int *)(param_2 + uVar8 * 4 + 0x1a4) == 0) {
          bVar1 = param_2[0xe1];
          param_2[bVar1 + 0x102] = (char)uVar8;
          param_2[0xe1] = bVar1 + 1;
        }
        __dest = (void *)FUN_00017254((int)(param_2 + 0x1a4),uVar8,0x100,0x120);
        if (__dest == (void *)0x0) {
          param_2[0xe1] = param_2[0xe1] + -1;
          if (__ptr != acStack1068) {
            free(__ptr);
          }
          uVar3 = 0xffffffff;
        }
        else {
          iVar9 = uVar14 + uVar13 + iVar9 + 3;
          if ((iVar9 + iVar11 * -8 < 0 != SBORROW4(iVar9,iVar11 * 8)) &&
             (iVar9 = H264ShowBits(param_1,0x12), iVar9 != 0x20000)) {
            local_51c = H264GetBits(param_1,1);
            FUN_00017304(param_1,*(int *)(param_2 + uVar5 * 4 + 0x124),auStack1356,0,auStack1292,
                         auStack1196);
            *(undefined4 *)(param_2 + 0xb6c4) = 1;
            local_514 = H264GetSeGolomb(param_1);
          }
          memcpy(__dest,auStack1356,0x120);
          if (__ptr != acStack1068) {
            free(__ptr);
          }
          uVar3 = 0;
        }
        goto LAB_00017cda;
      }
    }
  }
  else {
    __android_log_print(3,"awplayer","<%s:%u>: the sequence spsId is not equal to the spsId\n",
                        "H264DecodePps",0x2a7);
  }
  if (__ptr != acStack1068) {
    free(__ptr);
  }
  uVar3 = 0xfb;
LAB_00017cda:
  if (local_2c != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar3;
}



void H264ProcessActiveFormat(int param_1,int param_2,int param_3,size_t param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  size_t sVar5;
  char cVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  undefined *__ptr;
  int iVar10;
  undefined auStack4140 [4096];
  int local_2c;
  
  iVar10 = *(int *)(param_1 + 0xcc);
  local_2c = __stack_chk_guard;
  uVar9 = *(byte *)(param_3 + 0x34) - 1;
  if (uVar9 != 0) {
    uVar9 = 1;
  }
  if (*(byte *)(param_3 + 0x34) == 3) {
    __ptr = (undefined *)0x0;
  }
  else {
    __ptr = (undefined *)(uVar9 & 1);
  }
  if (__ptr != (undefined *)0x0) {
LAB_00017f1a:
    if (local_2c == __stack_chk_guard) {
      return;
    }
LAB_00017f2a:
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  puVar1 = auStack4140;
  if (0x1000 < (int)param_4) {
    sVar5 = param_4;
    __android_log_print(6,"awplayer",&DAT_0001981e,"H264ProcessActiveFormat",0x342,param_4);
    puVar1 = (undefined *)malloc(param_4);
    __ptr = puVar1;
    if (puVar1 == (undefined *)0x0) {
      __android_log_print(6,"awplayer",&DAT_00019865,"H264ProcessActiveFormat",0x346,sVar5);
                    // WARNING: Subroutine does not return
      abort();
    }
  }
  pcVar7 = *(code **)(iVar10 + 0x30);
  iVar2 = *(int *)(param_2 + 0xb654);
  puVar3 = puVar1;
  sVar5 = param_4;
  if (*(uint *)(param_2 + 0xb658) < iVar2 + param_4) {
    iVar8 = (*(uint *)(param_2 + 0xb658) - iVar2) + 1;
    (*pcVar7)(iVar2,puVar1,iVar8);
    pcVar7 = *(code **)(iVar10 + 0x30);
    iVar2 = *(int *)(param_2 + 0xb650);
    puVar3 = puVar1 + iVar8;
    sVar5 = param_4 - iVar8;
  }
  (*pcVar7)(iVar2,puVar3,sVar5);
  uVar9 = 0xffffffff;
  iVar10 = 0;
LAB_00017dfc:
  if (iVar10 < (int)param_4) {
    uVar9 = (uint)(byte)puVar1[iVar10] | uVar9 << 8;
    if (uVar9 != 0x44544731) goto code_r0x00017dfa;
    if (-1 < (int)((uint)(byte)(puVar1 + iVar10)[1] << 0x19)) goto switchD_00017e16_caseD_5;
    switch((puVar1 + iVar10)[2] & 0xf) {
    case 2:
      if (*(char *)(param_3 + 0x34) == '\x01') {
        iVar10 = *(int *)(param_3 + 0x20) - ((uint)(*(int *)(param_3 + 0x1c) * 9) >> 4);
LAB_00017ef0:
        *(int *)(param_2 + 0xb724) = iVar10;
      }
      break;
    case 3:
      cVar6 = *(char *)(param_3 + 0x34);
      if (cVar6 != '\x01') {
LAB_00017ec0:
        if (cVar6 == '\x03') {
          iVar10 = *(int *)(param_3 + 0x20) * 0xe;
          cVar6 = '\t';
          goto LAB_00017e76;
        }
        break;
      }
      iVar10 = __aeabi_uidiv(*(int *)(param_3 + 0x1c) * 9,0xe);
      iVar10 = *(int *)(param_3 + 0x20) - iVar10;
      goto LAB_00017eba;
    case 4:
      uVar4 = 0x13;
      iVar10 = *(int *)(param_3 + 0x1c) * 10;
      goto LAB_00017ea4;
    case 9:
    case 0xd:
      cVar6 = *(char *)(param_3 + 0x34);
      if (cVar6 == '\x03') {
        iVar10 = *(int *)(param_3 + 0x20) << 2;
LAB_00017e76:
        iVar10 = __aeabi_uidiv(iVar10,cVar6);
        iVar10 = (*(int *)(param_3 + 0x1c) - iVar10) / 2;
        *(int *)(param_2 + 0xb718) = iVar10;
        *(int *)(param_2 + 0xb71c) = iVar10;
      }
      break;
    case 10:
    case 0xe:
    case 0xf:
      if (*(char *)(param_3 + 0x34) == '\x01') {
        iVar10 = (int)(*(int *)(param_3 + 0x20) - ((uint)(*(int *)(param_3 + 0x1c) * 9) >> 4)) / 2;
        *(int *)(param_2 + 0xb720) = iVar10;
        goto LAB_00017ef0;
      }
      break;
    case 0xb:
      cVar6 = *(char *)(param_3 + 0x34);
      if (cVar6 != '\x01') goto LAB_00017ec0;
      iVar10 = *(int *)(param_3 + 0x1c) * 9;
      uVar4 = 0xe;
LAB_00017ea4:
      iVar10 = __aeabi_uidiv(iVar10,uVar4);
      iVar10 = (*(int *)(param_3 + 0x20) - iVar10) / 2;
      *(int *)(param_2 + 0xb720) = iVar10;
LAB_00017eba:
      *(int *)(param_2 + 0xb724) = iVar10;
    }
switchD_00017e16_caseD_5:
    if (__ptr != (undefined *)0x0) {
      if (local_2c == __stack_chk_guard) {
        free(__ptr);
        return;
      }
      goto LAB_00017f2a;
    }
  }
  goto LAB_00017f1a;
code_r0x00017dfa:
  iVar10 = iVar10 + 1;
  goto LAB_00017dfc;
}



undefined4 H264DecodeSei(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar5 = param_3 - 8;
  uVar4 = 0;
  iVar3 = *(int *)(param_2 + *(int *)(param_2 + 0x5a4) * 4 + 0x124);
  H264ProcessActiveFormat(param_1,param_2,iVar3,param_3 >> 3);
  while( true ) {
    if ((int)uVar5 <= (int)(uVar4 + 0x10)) {
      return 0;
    }
    iVar6 = 0;
    do {
      uVar4 = uVar4 + 8;
      if ((int)uVar5 < (int)uVar4) {
        return 0;
      }
      iVar1 = H264GetBits(param_1,8);
      iVar6 = iVar6 + iVar1;
    } while (iVar1 == 0xff);
    uVar7 = 0;
    do {
      uVar4 = uVar4 + 8;
      if ((int)uVar5 < (int)uVar4) {
        return 0;
      }
      iVar1 = H264GetBits(param_1,8);
      uVar7 = uVar7 + iVar1;
    } while (iVar1 == 0xff);
    if (iVar6 == 1) break;
    uVar4 = uVar4 + uVar7 * 8;
    if ((int)uVar5 < (int)uVar4) {
      return 0;
    }
    uVar2 = uVar7 + 3 & (int)uVar7 >> 0x20;
    if (uVar4 < uVar5) {
      uVar2 = uVar7;
    }
    iVar6 = 0;
    while (iVar6 < (int)uVar2 >> 2) {
      H264GetBits(param_1,0x20);
      iVar6 = iVar6 + 1;
    }
    H264GetBits(param_1,(((int)uVar2 >> 2) * -4 + uVar7) * 8 & 0xff);
  }
  if ((*(int *)(iVar3 + 0x344) != 0) || (*(int *)(iVar3 + 0x348) != 0)) {
    if ((int)uVar5 < (int)(uVar4 + *(uint *)(iVar3 + 0x34c))) {
      return 0;
    }
    H264GetBits(param_1,*(uint *)(iVar3 + 0x34c) & 0xff);
    iVar6 = uVar4 + *(int *)(iVar3 + 0x34c);
    if ((int)uVar5 < (int)(iVar6 + *(uint *)(iVar3 + 0x350))) {
      return 0;
    }
    H264GetBits(param_1,*(uint *)(iVar3 + 0x350) & 0xff);
    uVar4 = iVar6 + *(int *)(iVar3 + 0x350);
  }
  if (*(char *)(iVar3 + 0x341) == '\0') {
    return 0;
  }
  if ((int)uVar5 < (int)(uVar4 + 4)) {
    return 0;
  }
  iVar3 = H264GetBits(param_1,4);
  *(undefined *)(param_2 + 0xb6e1) = 1;
  if (5 < iVar3 - 1U) {
    return 0;
  }
  *(undefined *)(param_2 + 0xb6e1) = 0;
  return 0;
}



void H264InitPoc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort *puVar1;
  uint extraout_r1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  
  iVar8 = *(int *)(param_1 + 0xd8);
  if (*(char *)(param_1 + 0xb710) == '\x01') {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x90);
    if (*(int *)(param_1 + 0x3c) < *(int *)(param_1 + 0x94)) {
      iVar4 = iVar4 + (1 << (*(uint *)(iVar8 + 0x3c) & 0xff));
    }
  }
  *(int *)(param_1 + 0x8c) = iVar4;
  if (*(char *)(iVar8 + 1) == '\0') {
    iVar8 = 1 << (*(uint *)(iVar8 + 0x44) & 0xff);
    bVar12 = *(char *)(param_1 + 0xb710) == '\x01';
    if (bVar12) {
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
    if (bVar12) {
      *(undefined4 *)(param_1 + 0x9c) = 0;
    }
    iVar4 = *(int *)(param_1 + 0x98);
    iVar2 = *(int *)(param_1 + 0xa4);
    if (iVar2 < iVar4) {
      if (iVar4 - iVar2 < iVar8 / 2) {
LAB_00018102:
        iVar8 = *(int *)(param_1 + 0x9c);
      }
      else {
        iVar8 = *(int *)(param_1 + 0x9c) + iVar8;
      }
    }
    else {
      if ((iVar2 <= iVar4) ||
         ((iVar4 - iVar2) + iVar8 / 2 < 0 == SBORROW4(iVar4 - iVar2,-(iVar8 / 2))))
      goto LAB_00018102;
      iVar8 = *(int *)(param_1 + 0x9c) - iVar8;
    }
    *(int *)(param_1 + 0xa0) = iVar8;
    uVar3 = iVar2 + *(int *)(param_1 + 0xa0);
    uVar11 = uVar3;
    if (*(char *)(param_1 + 0x14) != '\x03') goto LAB_000181e6;
    iVar8 = *(int *)(param_1 + 0x80);
  }
  else {
    if (*(int *)(param_1 + 0xa8) != 1) {
      uVar3 = 0;
      uVar11 = uVar3;
      if ((*(char *)(param_1 + 0xb710) != '\x01') &&
         (uVar3 = (*(int *)(param_1 + 0x8c) + *(int *)(param_1 + 0x3c)) * 2, uVar11 = uVar3,
         *(char *)(param_1 + 0x11) == '\0')) {
        uVar3 = uVar3 - 1;
        uVar11 = uVar3;
      }
      goto LAB_000181e6;
    }
    iVar2 = *(int *)(iVar8 + 0x50);
    iVar4 = iVar2;
    if (iVar2 != 0) {
      iVar4 = *(int *)(param_1 + 0x8c) + *(int *)(param_1 + 0x3c);
    }
    uVar11 = 1 - *(byte *)(param_1 + 0x11);
    if (1 < *(byte *)(param_1 + 0x11)) {
      uVar11 = 0;
    }
    if (iVar4 < 1) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar11 & 1;
    }
    if (uVar3 != 0) {
      iVar4 = iVar4 + -1;
    }
    iVar10 = 0;
    iVar9 = 0;
    iVar5 = iVar8;
    while (iVar9 != iVar2) {
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + (uint)*(ushort *)(iVar5 + 0x138);
      iVar5 = iVar5 + 2;
    }
    if (iVar4 < 1) {
      iVar4 = 0;
    }
    else {
      __aeabi_uidivmod(iVar4 + -1,iVar9,iVar2,iVar5 + 2,param_4);
      iVar4 = __aeabi_uidiv(iVar4 + -1,iVar9);
      uVar3 = 0;
      iVar4 = iVar4 * iVar10;
      iVar2 = iVar8;
      do {
        uVar3 = uVar3 + 1;
        puVar1 = (ushort *)(iVar2 + 0x138);
        iVar2 = iVar2 + 2;
        iVar4 = iVar4 + (uint)*puVar1;
      } while (uVar3 <= extraout_r1);
    }
    if (uVar11 != 0) {
      iVar4 = iVar4 + *(int *)(iVar8 + 0x48);
    }
    uVar11 = iVar4 + *(int *)(param_1 + 0x18);
    uVar3 = uVar11 + *(int *)(iVar8 + 0x4c);
    if (*(char *)(param_1 + 0x14) != '\x03') goto LAB_000181e6;
    iVar8 = *(int *)(param_1 + 0x1c);
  }
  uVar3 = uVar3 + iVar8;
LAB_000181e6:
  if (*(char *)(param_1 + 0x14) != '\x02') {
    uVar6 = uVar11 & 0x80000001;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
    }
    if (uVar6 == 1) {
      *(undefined *)(param_1 + 0xb6f0) = 1;
    }
    **(uint **)(param_1 + 0xb644) = uVar11;
    *(uint *)(*(int *)(param_1 + 0xb644) + 8) = uVar11;
    *(uint *)(*(int *)(param_1 + 0xb644) + 0xb4) = (uint)*(byte *)(param_1 + 0x14);
    *(undefined *)(*(int *)(param_1 + 0xb644) + 0xd5) = *(undefined *)(param_1 + 0x11);
    *(char *)(*(int *)(param_1 + 0xb644) + 0xd7) = (char)*(undefined4 *)(param_1 + 0x58);
  }
  if (*(char *)(param_1 + 0x14) != '\x01') {
    *(uint *)(*(int *)(param_1 + 0xb644) + 4) = uVar3;
    *(uint *)(*(int *)(param_1 + 0xb644) + 8) = uVar3;
    *(uint *)(*(int *)(param_1 + 0xb644) + 0xb8) = (uint)*(byte *)(param_1 + 0x14);
    *(undefined *)(*(int *)(param_1 + 0xb644) + 0xd6) = *(undefined *)(param_1 + 0x11);
  }
  if ((*(char *)(param_1 + 0x14) == '\x03') || (*(char *)(param_1 + 0x13) == '\0')) {
    piVar7 = *(int **)(param_1 + 0xb644);
    iVar4 = piVar7[1];
    iVar8 = *piVar7;
    if (iVar4 <= iVar8) {
      piVar7[2] = iVar4;
    }
    if (iVar8 < iVar4) {
      piVar7[2] = iVar8;
    }
  }
  return;
}



undefined4 H264GetValidBufferIndex(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x9a0);
  if (0x11 < iVar1) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar3 = param_1 + iVar1 * 0xe4 + 0x9b8;
      iVar2 = iVar1;
      while (iVar2 = iVar2 + -1, *(int *)(param_1 + 0xb4) + 1 < iVar2) {
        if ((*(int *)(iVar3 + -0x18) == 0) && (*(int *)(iVar3 + -0x14) == 0)) {
          iVar1 = iVar2 * 0xe4 + param_1;
          *(undefined4 *)(iVar1 + 0xa74) = 0;
          *(undefined4 *)(iVar1 + 0xa5c) = 0;
          *(int *)(iVar1 + 0xa78) = iVar2;
          if (iVar2 < 0x12) {
            *(int *)(iVar1 + 0xa74) = iVar2;
          }
          goto LAB_00018342;
        }
        iVar3 = iVar3 + -0xe4;
      }
    }
    else {
      iVar2 = 1;
      iVar1 = param_1;
      do {
        if ((*(int *)(iVar1 + 0xb68) == 0) && (*(int *)(iVar1 + 0xb6c) == 0)) {
          iVar1 = iVar2 * 0xe4 + param_1;
          *(undefined4 *)(iVar1 + 0xa5c) = 0;
          goto LAB_0001832c;
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0xe4;
      } while (iVar2 != 0x12);
    }
    return 4;
  }
  iVar2 = *(int *)(param_1 + 0xb714);
  iVar1 = iVar1 + iVar2;
  iVar3 = param_1 + iVar2 * 0xe4 + 0x9b8;
  do {
    if (iVar1 <= iVar2) {
      if (iVar2 == iVar1) {
        return 4;
      }
LAB_00018342:
      *param_2 = iVar2;
      return 0;
    }
    if ((*(int *)(iVar3 + 0xcc) == 0) && (*(int *)(iVar3 + 0xd0) == 0)) {
      iVar1 = iVar2 * 0xe4 + param_1;
      *(undefined4 *)(iVar1 + 0xa5c) = 0;
LAB_0001832c:
      *(int *)(iVar1 + 0xa74) = iVar2;
      *(int *)(iVar1 + 0xa78) = iVar2;
      goto LAB_00018342;
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0xe4;
  } while( true );
}



undefined4 H264FrameStart(int param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int local_9c;
  int local_98 [33];
  
  uVar5 = *(uint *)(param_2 + 0xb6d4);
  local_9c = 0;
  if (uVar5 == 0xffffffff) {
    iVar7 = *(int *)(param_2 + 0xb714);
    iVar9 = iVar7 + *(int *)(param_2 + 0x9a0);
    iVar6 = param_2 + iVar7 * 0xe4 + 0x9b8;
    iVar8 = 0;
    while (iVar7 < iVar9) {
      iVar3 = iVar8;
      if (*(int *)(iVar6 + 0xcc) != 0) {
        iVar3 = iVar8 + 1;
        if (*(uint *)(iVar6 + 0xdc) <= uVar5) {
          uVar5 = *(uint *)(iVar6 + 0xdc);
        }
        local_98[iVar8] = iVar7;
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0xe4;
      iVar8 = iVar3;
    }
    *(uint *)(param_2 + 0xb6d4) = ~uVar5;
    iVar6 = 0;
    local_9c = 0;
    while (local_9c < iVar8) {
      local_9c = local_9c + 1;
      piVar2 = (int *)((int)local_98 + iVar6);
      iVar6 = iVar6 + 4;
      iVar7 = *piVar2 * 0xe4 + param_2;
      *(uint *)(iVar7 + 0xa94) = *(int *)(iVar7 + 0xa94) - uVar5;
    }
  }
  iVar6 = H264GetValidBufferIndex(param_2,&local_9c);
  iVar8 = local_9c;
  if (iVar6 == 4) {
    return 4;
  }
  if ((((*(int *)(param_1 + 0x24) == 1) || (*(int *)(param_1 + 0x28) == 1)) ||
      (*(char *)(param_2 + 0xb734) == '\x01')) || (*(char *)(param_2 + 0xb735) == '\x01')) {
    uVar4 = FbmRequestBuffer(*(undefined4 *)(param_2 + 0xb704));
    iVar6 = local_9c * 0xe4 + param_2;
    *(undefined4 *)(iVar8 * 0xe4 + param_2 + 0xa88) = uVar4;
    if (*(int *)(iVar6 + 0xa88) != 0) {
      if ((*(char *)(param_2 + 0x11) != '\0') && (*(char *)(param_2 + 0xb6e0) == '\0')) {
        uVar4 = FbmRequestBuffer(*(undefined4 *)(param_2 + 0xb700));
        *(undefined4 *)(iVar6 + 0xa84) = uVar4;
        iVar8 = local_9c * 0xe4 + param_2;
        if (*(int *)(iVar8 + 0xa84) == 0) {
          FbmReturnBuffer(*(undefined4 *)(param_2 + 0xb704),*(undefined4 *)(iVar8 + 0xa88),0);
          *(undefined4 *)(local_9c * 0xe4 + param_2 + 0xa88) = 0;
          return 4;
        }
      }
      goto LAB_00018496;
    }
  }
  else {
    uVar4 = FbmRequestBuffer(*(undefined4 *)(param_2 + 0xb700));
    *(undefined4 *)(iVar8 * 0xe4 + param_2 + 0xa84) = uVar4;
    if (*(int *)(local_9c * 0xe4 + param_2 + 0xa84) != 0) {
LAB_00018496:
      iVar6 = local_9c * 0xe4 + param_2;
      *(undefined *)(iVar6 + 0xa98) = 0;
      iVar8 = *(int *)(iVar6 + 0xa74);
      bVar10 = iVar8 != *(int *)(iVar6 + 0xa78);
      if (bVar10) {
        iVar8 = iVar8 * 0xe4 + param_2;
        iVar6 = *(int *)(iVar6 + 0xa84);
      }
      if (bVar10) {
        *(int *)(iVar8 + 0xa84) = iVar6;
      }
      iVar8 = param_2 + local_9c * 0xe4 + 0x9b8;
      *(int *)(param_2 + 0xb644) = iVar8;
      *(undefined *)(iVar8 + 0xe1) = 0;
      *(undefined *)(iVar8 + 0xe2) = 0;
      *(undefined *)(iVar8 + 0xe3) = 0;
      *(uint *)(iVar8 + 0xb0) = (uint)*(byte *)(param_2 + 0x14);
      bVar1 = *(byte *)(param_2 + 0x16);
      *(undefined4 *)(iVar8 + 0xa4) = 0;
      *(uint *)(iVar8 + 0xac) = (uint)bVar1;
      *(bool *)(iVar8 + 0xa8) = bVar1 == 2;
      if (*(char *)(param_2 + 0x11) != '\0') {
        *(uint *)(iVar8 + 0xa4) = (uint)*(byte *)(param_2 + 0x14);
      }
      if (*(int *)(*(int *)(param_2 + 0xb644) + 0xac) != 1) {
        *(undefined4 *)(param_2 + 0xb63c) = *(undefined4 *)(param_2 + 0xb640);
        if (*(char *)(param_2 + 0x11) == '\0') {
          return 0;
        }
        *(int *)(param_2 + 0xb640) = *(int *)(param_2 + 0xb644);
      }
      return 0;
    }
  }
  return 4;
}



void H264ExchangePts(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  *param_2 = uVar1;
  param_2[1] = uVar2;
  return;
}



void H264CalculatePicturePts(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined8 uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  iVar11 = *(int *)(*(int *)(param_1 + 0xb644) + 0xd0);
  if (iVar11 == 0) {
    iVar11 = *(int *)(*(int *)(param_1 + 0xb644) + 0xcc);
  }
  uVar1 = *(undefined4 *)(param_1 + 0xb684);
  *(undefined4 *)(iVar11 + 0x40) = *(undefined4 *)(param_1 + 0xb680);
  *(undefined4 *)(iVar11 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0xb680) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb684) = 0xffffffff;
  if (*(char *)(param_1 + 0xb6e0) == '\x01') {
    return;
  }
  if ((*(char *)(param_1 + 0xb6f0) == '\0') && (*(int *)(param_1 + 0xb63c) != 0)) {
    *(undefined *)(param_1 + 0xb6f0) = 2;
  }
  uVar3 = *(uint *)(param_1 + 0xb6a0);
  uVar7 = *(uint *)(param_1 + 0xb6a4);
  if ((uVar3 | uVar7) == 0) {
    if ((*(uint *)(param_1 + 0xb6e8) | *(uint *)(param_1 + 0xb6ec)) != 0) goto LAB_000185a6;
    uVar7 = 0;
    uVar3 = 40000;
  }
  *(uint *)(param_1 + 0xb6e8) = uVar3;
  *(uint *)(param_1 + 0xb6ec) = uVar7;
LAB_000185a6:
  if ((~*(uint *)(undefined8 *)(iVar11 + 0x40) | ~*(uint *)(iVar11 + 0x44)) == 0) {
    if ((*(int *)(*(int *)(param_1 + 0xb644) + 8) == 0) || (*(char *)(param_1 + 0xb6f0) == '\0')) {
      uVar1 = *(undefined4 *)(param_1 + 0xb690);
      uVar8 = *(undefined4 *)(param_1 + 0xb694);
      *(undefined4 *)(iVar11 + 0x40) = uVar1;
      *(undefined4 *)(iVar11 + 0x44) = uVar8;
      *(undefined4 *)(param_1 + 0xb688) = uVar1;
      *(undefined4 *)(param_1 + 0xb68c) = uVar8;
      *(undefined4 *)(param_1 + 0xb698) = *(undefined4 *)(*(int *)(param_1 + 0xb644) + 8);
    }
    else {
      uVar15 = *(undefined8 *)(param_1 + 0xb688);
      *(undefined8 *)(iVar11 + 0x40) = uVar15;
      uVar3 = *(int *)(*(int *)(param_1 + 0xb644) + 8) - *(int *)(param_1 + 0xb698);
      uVar17 = __aeabi_ldivmod(*(undefined4 *)(param_1 + 0xb6e8),*(undefined4 *)(param_1 + 0xb6ec),
                               *(undefined *)(param_1 + 0xb6f0),0);
      uVar18 = (ulonglong)uVar3 * (uVar17 & 0xffffffff);
      uVar15 = VectorAdd(uVar15,((ulonglong)
                                 ((int)uVar17 * ((int)uVar3 >> 0x1f) + uVar3 * (int)(uVar17 >> 0x20)
                                 + (int)(uVar18 >> 0x20)) << 0x20) + (uVar18 & 0xffffffff),8);
      *(undefined8 *)(iVar11 + 0x40) = uVar15;
    }
  }
  else {
    if ((((*(int *)(param_1 + 0xb698) != 0) &&
         ((*(uint *)(undefined8 *)(param_1 + 0xb688) | *(uint *)(param_1 + 0xb68c)) != 0)) &&
        (iVar2 = *(int *)(*(int *)(param_1 + 0xb644) + 8), iVar2 != 0)) &&
       (iVar2 = iVar2 - *(int *)(param_1 + 0xb698), iVar2 != 0)) {
      uVar15 = VectorSub(*(undefined8 *)(iVar11 + 0x40),*(undefined8 *)(param_1 + 0xb688),8);
      uVar18 = __aeabi_ldivmod((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),iVar2,iVar2 >> 0x1f);
      lVar16 = (uVar18 & 0xffffffff) * (ulonglong)(uint)*(byte *)(param_1 + 0xb6f0);
      *(int *)(param_1 + 0xb6e8) = (int)lVar16;
      *(uint *)(param_1 + 0xb6ec) =
           (int)(uVar18 >> 0x20) * (uint)*(byte *)(param_1 + 0xb6f0) +
           (int)((ulonglong)lVar16 >> 0x20);
    }
    uVar1 = *(undefined4 *)(iVar11 + 0x44);
    *(undefined4 *)(param_1 + 0xb688) = *(undefined4 *)(iVar11 + 0x40);
    *(undefined4 *)(param_1 + 0xb68c) = uVar1;
    *(undefined4 *)(param_1 + 0xb698) = *(undefined4 *)(*(int *)(param_1 + 0xb644) + 8);
  }
  lVar16 = VectorAdd(*(undefined8 *)(iVar11 + 0x40),*(undefined8 *)(param_1 + 0xb6e8),8);
  iVar2 = *(int *)(param_1 + 0xb694);
  uVar3 = (uint)((ulonglong)lVar16 >> 0x20);
  bVar14 = (uint)lVar16 <= *(uint *)(param_1 + 0xb690);
  if ((int)((iVar2 - uVar3) - (uint)!bVar14) < 0 !=
      (iVar2 < 0 == -1 < lVar16 && (int)(iVar2 + ~uVar3 + (uint)bVar14) < 0 != iVar2 < 0)) {
    *(longlong *)(param_1 + 0xb690) = lVar16;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0xb644) + 8);
  if (iVar2 != 0) {
    iVar4 = *(int *)(param_1 + 0xb6d8);
    piVar5 = (int *)(param_1 + (iVar4 + 0x2d6e) * 4);
    do {
      iVar4 = iVar4 + -1;
      if (iVar4 < 0) {
        iVar4 = 0;
        break;
      }
      piVar5 = piVar5 + -1;
    } while (*(int *)(*piVar5 + 8) != 0);
    iVar12 = 0;
    iVar13 = iVar4 + -1;
    while( true ) {
      piVar5 = (int *)(param_1 + (iVar13 + 0x2d6e) * 4);
      while( true ) {
        piVar5 = piVar5 + 1;
        iVar9 = *piVar5;
        if ((iVar9 == 0) || (iVar6 = *(int *)(iVar9 + 0xcc), iVar6 == 0)) break;
        if (*(int *)(iVar9 + 0xd0) != 0) {
          iVar6 = *(int *)(iVar9 + 0xd0);
        }
        iVar10 = *(int *)(iVar11 + 0x44);
        uVar3 = *(uint *)(iVar6 + 0x44);
        bVar14 = *(uint *)(iVar6 + 0x40) <= *(uint *)(iVar11 + 0x40);
        if (((char)((iVar2 < *(int *)(iVar9 + 8)) +
                   ((int)((iVar10 - uVar3) - (uint)!bVar14) < 0 !=
                   (iVar10 < 0 == -1 < (int)uVar3 &&
                   (int)(iVar10 + ~uVar3 + (uint)bVar14) < 0 != iVar10 < 0))) == '\x01') &&
           (iVar2 != *(int *)(iVar9 + 8))) {
          H264ExchangePts((uint *)(iVar11 + 0x40),(uint *)(iVar6 + 0x40));
        }
      }
      iVar2 = *(int *)(param_1 + iVar4 * 4 + iVar12 + 0xb5b8);
      if (iVar2 == 0) break;
      iVar11 = *(int *)(iVar2 + 0xd0);
      if (iVar11 == 0) {
        iVar11 = *(int *)(iVar2 + 0xcc);
      }
      iVar2 = *(int *)(iVar2 + 8);
      iVar12 = iVar12 + 4;
      iVar13 = iVar13 + 1;
    }
  }
  return;
}



undefined4 H264DecodeSliceHeader(uint param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 extraout_r1;
  uint extraout_r1_00;
  undefined *puVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  bool bVar16;
  longlong lVar17;
  uint local_3c;
  byte abStack48 [12];
  
  memcpy(abStack48,&DAT_00019ad3,5);
  iVar5 = *(int *)(param_1 + 0xcc);
  *(undefined *)(param_2 + 0xb709) = 0;
  iVar6 = H264GetUeGolomb(param_1);
  if (iVar6 == 0) {
    if ((*(char *)(param_2 + 0xb6c8) == '\x01') &&
       (iVar12 = *(int *)(param_2 + 0xb644), iVar12 != 0)) {
      if ((*(char *)(param_2 + 0x13) != '\0') && (*(char *)(param_2 + 0x14) != '\x03')) {
        if (*(char *)(param_2 + 0x13) != '\x01') {
          return 0xff;
        }
        __android_log_print(6,"awplayer",&DAT_000198cb,"H264DecodeSliceHeader",0x682);
        *(undefined *)(*(int *)(param_2 + 0xb644) + 0xe2) = 1;
        return 0xff;
      }
      *(undefined *)(param_2 + 0x11) = *(undefined *)(iVar12 + 0xd4);
      *(char *)(param_2 + 0x16) = (char)*(undefined4 *)(iVar12 + 0xac);
      *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(iVar12 + 0xc);
      *(undefined *)(iVar12 + 0xe1) = 1;
      *(undefined *)(*(int *)(param_2 + 0xb644) + 0xe3) = 1;
      *(undefined *)(param_2 + 0xb6c8) = 2;
      uVar7 = 0x67e;
      puVar10 = &DAT_00019889;
      goto LAB_000189cc;
    }
    *(undefined4 *)(param_2 + 0x34) = 0;
  }
  else {
    if (*(int *)(param_2 + 0x34) == 0) {
      if (*(int *)(param_2 + 0xb644) == 0) {
        return 0xfb;
      }
      *(undefined *)(*(int *)(param_2 + 0xb644) + 0xe1) = 1;
      if (*(char *)(param_2 + 0x13) == '\x01') {
        *(undefined *)(*(int *)(param_2 + 0xb644) + 0xe2) = 1;
        return 0xfb;
      }
      *(undefined *)(*(int *)(param_2 + 0xb644) + 0xe3) = 1;
      return 0xfb;
    }
  }
  *(int *)(param_2 + 0x84) = iVar6;
  uVar8 = H264GetUeGolomb(param_1);
  if (9 < uVar8) {
LAB_000188f8:
    if (*(int *)(param_2 + 0xb644) != 0) {
      *(undefined *)(*(int *)(param_2 + 0xb644) + 0xe1) = 1;
    }
    return 0xfb;
  }
  if (4 < uVar8) {
    uVar8 = uVar8 - 5;
  }
  bVar3 = abStack48[uVar8];
  uVar8 = (uint)bVar3;
  if (*(int *)(param_2 + 0xb6b8) == 1) {
    bVar1 = *(byte *)(iVar5 + 0x10);
    bVar4 = 1 - bVar1;
    if (1 < bVar1) {
      bVar4 = 0;
    }
    if (uVar8 == 2) {
      bVar4 = 0;
    }
    else {
      bVar4 = bVar4 & 1;
    }
    if (bVar4 != 0) {
      return 0xfb;
    }
    if (uVar8 != 0 && bVar1 == 1) {
      return 0xfb;
    }
    *(undefined4 *)(param_2 + 0xb6b8) = 0;
  }
  if (uVar8 == 2) {
    local_3c = 1;
  }
  else {
    local_3c = *(uint *)(param_2 + 0x34);
    if (local_3c != 0) {
      local_3c = (uint)(uVar8 == *(uint *)(param_2 + 0x38));
    }
    if ((uVar8 == 1) && (*(int *)(param_2 + 0xb63c) == 0)) {
      return 0xfb;
    }
  }
  *(byte *)(param_2 + 0x16) = bVar3;
  uVar9 = H264GetUeGolomb(param_1);
  if ((0xff < uVar9) || (iVar12 = *(int *)(param_2 + uVar9 * 4 + 0x1a4), iVar12 == 0))
  goto LAB_000188f8;
  *(int *)(param_2 + 0xdc) = iVar12;
  iVar12 = *(int *)(param_2 + *(int *)(iVar12 + 4) * 4 + 0x124);
  iVar15 = *(int *)(param_2 + 0x3c);
  *(int *)(param_2 + 0xd8) = iVar12;
  uVar7 = H264GetBits(param_1,(uint)*(byte *)(iVar12 + 0x3c));
  *(undefined4 *)(param_2 + 0x58) = 0;
  bVar3 = *(byte *)(param_2 + 0x14);
  uVar9 = (uint)bVar3;
  *(undefined4 *)(param_2 + 0x3c) = uVar7;
  if (*(char *)(*(int *)(param_2 + 0xd8) + 3) == '\x01') {
    *(undefined *)(param_2 + 0x14) = 3;
  }
  else {
    iVar12 = H264GetBits(param_1,1);
    if (iVar12 == 1) {
      uVar7 = H264GetBits(param_1,1);
      *(char *)(param_2 + 0x14) = (char)uVar7 + '\x01';
    }
    else {
      *(undefined *)(param_2 + 0x14) = 3;
      *(uint *)(param_2 + 0x58) = (uint)**(byte **)(param_2 + 0xd8);
    }
  }
  if (iVar6 == 0) {
    if ((*(char *)(param_2 + 0x13) == '\x01') &&
       ((*(byte *)(param_2 + 0x14) == 3 || (*(byte *)(param_2 + 0x14) == uVar9)))) {
      *(undefined *)(param_2 + 0x13) = 0;
      iVar5 = *(int *)(param_2 + 0xb644);
      *(undefined *)(param_2 + 0x11) = *(undefined *)(iVar5 + 0xd4);
      *(char *)(param_2 + 0x16) = (char)*(undefined4 *)(iVar5 + 0xac);
      *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(iVar5 + 0xc);
      *(undefined *)(iVar5 + 0xe1) = 1;
      uVar7 = 0x71c;
      *(undefined *)(param_2 + 0xb6c8) = 2;
      puVar10 = &DAT_0001990d;
LAB_000189cc:
      __android_log_print(6,"awplayer",puVar10,"H264DecodeSliceHeader",uVar7);
      return 0xff;
    }
  }
  else {
    if (*(byte *)(param_2 + 0x14) != uVar9) {
      *(byte *)(param_2 + 0x14) = bVar3;
    }
  }
  cVar2 = *(char *)(param_2 + 0x13);
  if (*(int *)(param_2 + 0x34) == 0) {
    uVar13 = (uint)*(byte *)(param_2 + 0x14);
    *(int *)(param_2 + 0x40) = iVar15;
    if (uVar13 == 3) {
      *(undefined *)(param_2 + 0x13) = 0;
    }
    else {
      if (cVar2 == '\x01') {
        if (uVar13 == uVar9) {
          __android_log_print(6,"awplayer",&DAT_00019941,"H264DecodeSliceHeader",0x730);
          uVar13 = *(uint *)(param_2 + 0xb644);
          if ((uVar13 != 0) && (*(int *)(uVar13 + 0xcc) != 0)) {
            *(undefined *)(param_2 + 0x11) = *(undefined *)(uVar13 + 0xd4);
            *(char *)(param_2 + 0x16) = (char)*(undefined4 *)(uVar13 + 0xac);
            *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(uVar13 + 0xc);
            *(undefined *)(uVar13 + 0xe1) = 1;
            *(undefined *)(param_2 + 0xb6c8) = 2;
            return 0xff;
          }
        }
        else {
          *(undefined *)(param_2 + 0x13) = 0;
          if (iVar15 != *(int *)(param_2 + 0x3c)) {
            __android_log_print(3,"awplayer",
                                "<%s:%u>: the top field and the bottom field is not matched\n",
                                "H264DecodeSliceHeader",0x743);
            iVar12 = *(int *)(*(int *)(param_2 + 0xb644) + 0xcc);
            if (iVar12 == 0) {
              iVar12 = *(int *)(*(int *)(param_2 + 0xb644) + 0xd0);
              if (iVar12 != 0) {
                FbmReturnBuffer(*(undefined4 *)(param_2 + 0xb704),iVar12,0);
                *(undefined4 *)(*(int *)(param_2 + 0xb644) + 0xd0) = 0;
                iVar12 = *(int *)(param_2 + 0xb644);
                *(undefined4 *)(*(int *)(iVar12 + 0xc0) * 0xe4 + param_2 + 0xa88) = 0;
                *(undefined4 *)(*(int *)(iVar12 + 0xbc) * 0xe4 + param_2 + 0xa88) = 0;
              }
            }
            else {
              FbmReturnBuffer(*(undefined4 *)(param_2 + 0xb700),iVar12,0);
              *(undefined4 *)(*(int *)(param_2 + 0xb644) + 0xcc) = 0;
              iVar12 = *(int *)(param_2 + 0xb644);
              *(undefined4 *)(*(int *)(iVar12 + 0xc0) * 0xe4 + param_2 + 0xa84) = 0;
              *(undefined4 *)(*(int *)(iVar12 + 0xbc) * 0xe4 + param_2 + 0xa84) = 0;
            }
            uVar13 = *(uint *)(param_2 + 0xb644);
            *(undefined4 *)(uVar13 + 0xa4) = 0;
            goto LAB_00018afc;
          }
        }
      }
      else {
LAB_00018afc:
        *(undefined *)(param_2 + 0x13) = 1;
      }
    }
    cVar11 = (char)uVar13;
    if ((iVar6 == 0) &&
       ((*(char *)(param_2 + 0x14) == '\x03' || (*(char *)(param_2 + 0x13) == '\x01')))) {
      iVar12 = H264FrameStart(param_1,param_2);
      if (iVar12 == 4) {
        *(byte *)(param_2 + 0x14) = bVar3;
        cVar11 = cVar2;
      }
      if (iVar12 == 4) {
        *(char *)(param_2 + 0x13) = cVar11;
        return 4;
      }
    }
  }
  if (*(int *)(param_2 + 0xb644) == 0) {
    return 0xfb;
  }
  *(undefined4 *)(*(int *)(param_2 + 0xb644) + 0xc) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined *)(*(int *)(param_2 + 0xb644) + 0xd4) = *(undefined *)(param_2 + 0x11);
  *(uint *)(*(int *)(param_2 + 0xb644) + 0xac) = (uint)*(byte *)(param_2 + 0x16);
  *(bool *)(*(int *)(param_2 + 0xb644) + 0xd8) = *(char *)(param_2 + 0x14) == '\x03';
  iVar15 = *(int *)(param_2 + 0xd8);
  __aeabi_uidivmod(iVar6,*(undefined4 *)(iVar15 + 0xc));
  *(undefined4 *)(param_2 + 0x4c) = extraout_r1;
  iVar12 = __aeabi_uidiv(iVar6,*(undefined4 *)(iVar15 + 0xc));
  *(int *)(param_2 + 0x50) = iVar12 << (*(uint *)(param_2 + 0x58) & 0xff);
  if (*(char *)(param_2 + 0x14) == '\x03') {
    *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x3c);
    uVar9 = *(uint *)(iVar15 + 0x3c);
  }
  else {
    *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x3c) * 2 + 1;
    uVar9 = *(int *)(iVar15 + 0x3c) + 1;
  }
  *(int *)(param_2 + 0x48) = 1 << (uVar9 & 0xff);
  if (*(char *)(param_2 + 0xb710) == '\x01') {
    H264GetUeGolomb(param_1);
  }
  if (*(char *)(*(int *)(param_2 + 0xd8) + 1) == '\0') {
    uVar7 = H264GetBits(param_1,(uint)*(byte *)(*(int *)(param_2 + 0xd8) + 0x44));
    *(undefined4 *)(param_2 + 0xa4) = uVar7;
    if ((*(char *)(*(int *)(param_2 + 0xdc) + 0x18) == '\x01') &&
       (*(char *)(param_2 + 0x14) == '\x03')) {
      uVar7 = H264GetSeGolomb(param_1);
      *(undefined4 *)(param_2 + 0x80) = uVar7;
    }
  }
  puVar14 = *(uint **)(param_2 + 0xd8);
  uVar13 = *puVar14;
  uVar9 = uVar13 & 0xffff00;
  if (uVar9 == 0x100) {
    uVar7 = H264GetSeGolomb(param_1);
    uVar9 = *(uint *)(param_2 + 0xdc);
    *(undefined4 *)(param_2 + 0x18) = uVar7;
    if ((*(char *)(uVar9 + 0x18) == '\x01') && (*(char *)(param_2 + 0x14) == '\x03')) {
      uVar7 = H264GetSeGolomb(param_1);
      *(undefined4 *)(param_2 + 0x1c) = uVar7;
      uVar9 = extraout_r1_00;
    }
  }
  if (iVar6 == 0) {
    H264InitPoc(param_2,uVar9,uVar13,puVar14);
  }
  if (*(char *)(*(int *)(param_2 + 0xdc) + 0x19) != '\0') {
    uVar7 = H264GetUeGolomb(param_1);
    *(char *)(param_2 + 0x15) = (char)uVar7;
  }
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(*(int *)(param_2 + 0xdc) + 0x1c);
  uVar7 = *(undefined4 *)(*(int *)(param_2 + 0xdc) + 0x20);
  uVar9 = (uint)*(byte *)(param_2 + 0x16);
  *(undefined4 *)(param_2 + 0x20) = 0;
  uVar13 = 1 - uVar9;
  *(undefined4 *)(param_2 + 0x30) = uVar7;
  *(undefined4 *)(param_2 + 0x54) = 0;
  if (1 < uVar9) {
    uVar13 = 0;
  }
  if (uVar9 == 3) {
    uVar13 = uVar13 | 1;
  }
  *(undefined4 *)(param_2 + 0x74) = 0;
  if (uVar13 == 0) {
    if (uVar9 == 1) {
LAB_00018c58:
      uVar7 = H264GetBits(param_1,1);
      *(undefined4 *)(param_2 + 0x54) = uVar7;
      goto LAB_00018c62;
    }
  }
  else {
    if (uVar9 == 1) goto LAB_00018c58;
LAB_00018c62:
    iVar12 = H264GetBits(param_1,1);
    *(int *)(param_2 + 0x74) = iVar12;
    if (iVar12 == 1) {
      iVar12 = H264GetUeGolomb(param_1);
      *(int *)(param_2 + 0x2c) = iVar12 + 1;
      if (*(char *)(param_2 + 0x16) == '\x01') {
        iVar12 = H264GetUeGolomb(param_1);
        *(int *)(param_2 + 0x30) = iVar12 + 1;
      }
      if ((0x20 < *(int *)(param_2 + 0x2c)) || (0x20 < *(int *)(param_2 + 0x30))) {
        *(undefined4 *)(param_2 + 0x2c) = 1;
        *(undefined4 *)(param_2 + 0x30) = 1;
      }
    }
    if (*(char *)(param_2 + 0x16) == '\x01') {
      uVar7 = 2;
    }
    else {
      uVar7 = 1;
    }
    *(undefined4 *)(param_2 + 0x20) = uVar7;
  }
  if (local_3c == 0) {
    H264FillDefaultRefList(param_2,*(int *)(iVar5 + 0x14),(uint)*(byte *)(iVar5 + 0x10));
  }
  H264DecodeRefPicListReordering(param_1,param_2);
  if (((iVar6 == 0) &&
      ((((*(char *)(param_2 + 0x14) == '\x03' || (*(char *)(param_2 + 0x13) == '\x01')) &&
        (H264CalculatePicturePts(param_2), *(int *)(param_2 + 0xb768) == 1)) &&
       ((uVar8 == 1 && 0x780 < *(uint *)(param_2 + 0xc0) && (*(char *)(param_2 + 0x11) == '\0'))))))
     && (*(int *)(param_1 + 0xa8) == 0)) {
    iVar5 = *(int *)(*(int *)(param_2 + 0xb644) + 0xd0);
    if (iVar5 == 0) {
      iVar5 = *(int *)(*(int *)(param_2 + 0xb644) + 0xcc);
    }
    uVar9 = *(uint *)(iVar5 + 0x44);
    lVar17 = VectorAdd(*(undefined8 *)(param_2 + 0xb760),100000,8);
    iVar6 = (int)((ulonglong)lVar17 >> 0x20);
    bVar16 = *(uint *)(undefined8 *)(iVar5 + 0x40) <= (uint)lVar17;
    if ((int)((iVar6 - uVar9) - (uint)!bVar16) < 0 ==
        (lVar17 < 0 == -1 < (int)uVar9 && (int)(iVar6 + ~uVar9 + (uint)bVar16) < 0 != lVar17 < 0)) {
      VectorSub(*(undefined8 *)(iVar5 + 0x40),*(undefined8 *)(param_2 + 0xb760),8);
      __android_log_print(3,"awplayer",
                                                    
                          "<%s:%u>: the B frame is delayed, drop it, pts(%lld) current_time(%lld), diff: %lld"
                          ,"H264DecodeSliceHeader",0x7e5);
      if (*(int *)(*(int *)(param_2 + 0xb644) + 0xd0) == 0) {
        FbmReturnBuffer(*(undefined4 *)(param_2 + 0xb700),iVar5,0);
        iVar5 = *(int *)(param_2 + 0xb644);
        *(undefined4 *)(*(int *)(iVar5 + 0xc0) * 0xe4 + param_2 + 0xa84) = 0;
        *(undefined4 *)(*(int *)(iVar5 + 0xbc) * 0xe4 + param_2 + 0xa84) = 0;
      }
      else {
        FbmReturnBuffer(*(undefined4 *)(param_2 + 0xb704),iVar5,0);
        iVar5 = *(int *)(param_2 + 0xb644);
        *(undefined4 *)(*(int *)(iVar5 + 0xc0) * 0xe4 + param_2 + 0xa88) = 0;
        *(undefined4 *)(*(int *)(iVar5 + 0xbc) * 0xe4 + param_2 + 0xa88) = 0;
      }
      *(undefined4 *)(param_2 + 0xb644) = 0;
      return 0xfb;
    }
  }
  *(undefined4 *)(param_2 + 0xb680) = 0xffffffff;
  *(undefined4 *)(param_2 + 0xb684) = 0xffffffff;
  if (*(int *)(*(int *)(param_2 + 0xdc) + 0x24) == 0) {
LAB_00018e72:
    if ((*(int *)(*(int *)(param_2 + 0xdc) + 0x28) < 1) || (*(char *)(param_2 + 0x16) != '\x01'))
    goto LAB_00018e86;
  }
  else {
    uVar13 = (uint)*(byte *)(param_2 + 0x16);
    uVar9 = 1 - uVar13;
    if (1 < uVar13) {
      uVar9 = 0;
    }
    if (uVar13 == 3) {
      uVar9 = uVar9 | 1;
    }
    if (uVar9 == 0) goto LAB_00018e72;
  }
  H264CongigureWeightTableRegisters(param_1,param_2);
LAB_00018e86:
  if (*(char *)(param_2 + 0x11) != '\0') {
    H264DecodeRefPicMarking(param_1,param_2);
  }
  uVar9 = *(byte *)(param_2 + 0x16) - 2;
  if (uVar9 != 0) {
    uVar9 = 1;
  }
  if (*(byte *)(param_2 + 0x16) == 4) {
    uVar9 = 0;
  }
  else {
    uVar9 = uVar9 & 1;
  }
  if ((uVar9 != 0) && (*(int *)(*(int *)(param_2 + 0xdc) + 8) != 0)) {
    uVar7 = H264GetUeGolomb(param_1);
    *(undefined4 *)(param_2 + 0x5c) = uVar7;
  }
  *(undefined4 *)(param_2 + 0x60) = 0;
  iVar6 = *(int *)(*(int *)(param_2 + 0xdc) + 0xc);
  iVar5 = H264GetSeGolomb(param_1);
  *(undefined4 *)(param_2 + 0x78) = 0;
  *(undefined4 *)(param_2 + 0x7c) = 0;
  *(int *)(param_2 + 100) = iVar6 + iVar5;
  if (*(char *)(param_2 + 0x16) == '\x03') {
    H264GetBits(param_1,1);
  }
  if ((byte)(*(char *)(param_2 + 0x16) - 3U) < 2) {
    H264GetSeGolomb(param_1);
  }
  *(undefined4 *)(param_2 + 0x68) = 0;
  *(undefined4 *)(param_2 + 0x6c) = 0;
  *(undefined4 *)(param_2 + 0x70) = 0;
  if (*(int *)(*(int *)(param_2 + 0xdc) + 0x2c) != 0) {
    iVar5 = H264GetUeGolomb(param_1);
    *(int *)(param_2 + 0x68) = iVar5;
    if (iVar5 != 1) {
      uVar9 = H264GetSeGolomb(param_1);
      *(uint *)(param_2 + 0x6c) = uVar9 & 0xf;
      uVar9 = H264GetSeGolomb(param_1);
      *(uint *)(param_2 + 0x70) = uVar9 & 0xf;
    }
  }
  *(uint *)(param_2 + 0x38) = uVar8;
  *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + 1;
  return 0;
}



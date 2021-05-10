#include "libvencoder.so.h"



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



void __android_log_print(void)

{
  __android_log_print();
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



// WARNING: Unknown calling convention yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



void VeInitEncoderPerformance(void)

{
  VeInitEncoderPerformance();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



void VeUninitEncoderPerformance(void)

{
  VeUninitEncoderPerformance();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = calloc(__nmemb,__size);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = pthread_mutex_init(__mutex,__mutexattr);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_destroy(__mutex);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock(__mutex);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}



void VeInitialize(void)

{
  VeInitialize();
  return;
}



void MemAdapterOpen(void)

{
  MemAdapterOpen();
  return;
}



void SecureMemAdapterOpen(void)

{
  SecureMemAdapterOpen();
  return;
}



void SecureMemAdapterClose(void)

{
  SecureMemAdapterClose();
  return;
}



void MemAdapterClose(void)

{
  MemAdapterClose();
  return;
}



void VeEncoderLock(void)

{
  VeEncoderLock();
  return;
}



void VeEncoderUnLock(void)

{
  VeEncoderUnLock();
  return;
}



void VeReset(void)

{
  VeReset();
  return;
}



void VeWaitEncoderInterrupt(void)

{
  VeWaitEncoderInterrupt();
  return;
}



void VeGetRegisterBaseAddress(void)

{
  VeGetRegisterBaseAddress();
  return;
}



void VeGetDramType(void)

{
  VeGetDramType();
  return;
}



void MemAdapterPalloc(void)

{
  MemAdapterPalloc();
  return;
}



void MemAdapterPfree(void)

{
  MemAdapterPfree();
  return;
}



void MemAdapterFlushCache(void)

{
  MemAdapterFlushCache();
  return;
}



void MemAdapterGetPhysicAddress(void)

{
  MemAdapterGetPhysicAddress();
  return;
}



void MemAdapterGetPhysicAddressCpu(void)

{
  MemAdapterGetPhysicAddressCpu();
  return;
}



void MemAdapterGetVirtualAddress(void)

{
  MemAdapterGetVirtualAddress();
  return;
}



void VeEnableEncoder(void)

{
  VeEnableEncoder();
  return;
}



void VeDisableEncoder(void)

{
  VeDisableEncoder();
  return;
}



void VeResetEncoder(void)

{
  VeResetEncoder();
  return;
}



void VeSetDramType(void)

{
  VeSetDramType();
  return;
}



void __aeabi_uidiv(void)

{
  __aeabi_uidiv();
  return;
}



void __aeabi_idiv(void)

{
  __aeabi_idiv();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = strcpy(__dest,__src);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

double log(double __x)

{
  double dVar1;
  
  dVar1 = log(__x);
  return dVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

tm * gmtime_r(time_t *__timer,tm *__tp)

{
  tm *ptVar1;
  
  ptVar1 = gmtime_r(__timer,__tp);
  return ptVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = snprintf(__s,__maxlen,__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



void __aeabi_ldivmod(void)

{
  __aeabi_ldivmod();
  return;
}



void __aeabi_l2d(void)

{
  __aeabi_l2d();
  return;
}



void __aeabi_idivmod(void)

{
  __aeabi_idivmod();
  return;
}



void __aeabi_uidivmod(void)

{
  __aeabi_uidivmod();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

double sqrt(double __x)

{
  double dVar1;
  
  dVar1 = sqrt(__x);
  return dVar1;
}



void __aeabi_l2f(void)

{
  __aeabi_l2f();
  return;
}



void __aeabi_f2lz(void)

{
  __aeabi_f2lz();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = gettimeofday(__tv,__tz);
  return iVar1;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention yet parameter storage is locked

double pow(double __x,double __y)

{
  double dVar1;
  
  dVar1 = pow(__x,__y);
  return dVar1;
}



void FUN_00013c60(void)

{
  __cxa_finalize(&PTR_LOOP_0002b000);
  return;
}



undefined4 FUN_00013c80(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = __cxa_atexit(param_1,0,&PTR_LOOP_0002b000);
  return uVar1;
}



undefined4 * VideoEncCreate(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *__s;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = EncAdapterInitialize();
  if (iVar1 == 0) {
    __s = (undefined4 *)malloc(0xf0);
    if (__s == (undefined4 *)0x0) {
      __android_log_print(6,"awplayer",&DAT_000235cb,"VideoEncCreate",0x38,param_2);
      puVar3 = __s;
    }
    else {
      memset(__s,0,0xf0);
      __s[0x38] = param_1;
      __s[9] = 4;
      uVar2 = EncAdapterGetICVersion();
      __s[0x3a] = 0;
      __s[0x39] = uVar2;
      puVar3 = (undefined4 *)VencoderDeviceCreate(param_1);
      *__s = puVar3;
      if (puVar3 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(*(code *)puVar3[1])();
        __s[1] = puVar3;
        if (puVar3 != (undefined4 *)0x0) {
          return __s;
        }
        IspDestroy(*__s);
        *__s = 0;
      }
      free(__s);
    }
  }
  else {
    __android_log_print(6,"awplayer",&DAT_00023585,"VideoEncCreate",0x33,param_2);
    puVar3 = (undefined4 *)0x0;
  }
  return puVar3;
}



undefined4 VideoEncInit(int *param_1,void *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  void *pvVar5;
  char *pcVar6;
  
  uVar4 = 1 - (int)param_1;
  if ((int *)0x1 < param_1) {
    uVar4 = 0;
  }
  if (param_2 == (void *)0x0) {
    uVar4 = uVar4 | 1;
  }
  pvVar5 = param_2;
  if ((uVar4 == 0) && (param_1[0x3a] == 0)) {
    iVar2 = FrameBufferManagerCreate(param_1[9]);
    param_1[2] = iVar2;
    if (iVar2 != 0) {
      uVar1 = 0x80;
      pcVar6 = "VideoEncInit";
      __android_log_print(3,"awplayer","<%s:%u>: (f:%s, l:%d)","VideoEncInit",0x80,"VideoEncInit",
                          0x80,param_4);
      if (param_1[0x39] == 0x1639) {
        if ((*(uint *)((int)param_2 + 8) < 0xf00) && (*(uint *)((int)param_2 + 0xc) < 0x870)) {
          VeInitEncoderPerformance(0);
          __android_log_print(3,"awplayer","<%s:%u>: VeInitEncoderPerformance","VideoEncInit",0x8c,
                              pcVar6,uVar1,param_4);
        }
        else {
          VeInitEncoderPerformance(1);
        }
      }
      __android_log_print(3,"awplayer","<%s:%u>: (f:%s, l:%d)","VideoEncInit",0x90,"VideoEncInit",
                          0x90,param_4);
      memcpy(param_1 + 3,param_2,0x18);
      EncAdapterLockVideoEngine();
      uVar1 = (**(code **)(*param_1 + 8))(param_1[1],param_1 + 3);
      EncAdapterUnLockVideoEngine();
      param_1[0x3a] = 1;
      return uVar1;
    }
    uVar1 = 0x7c;
    puVar3 = &DAT_0002362e;
  }
  else {
    uVar1 = 0x74;
    puVar3 = &DAT_000235f9;
  }
  __android_log_print(6,"awplayer",puVar3,"VideoEncInit",uVar1,pvVar5,param_3,param_4);
  return 0xffffffff;
}



undefined4 VideoEncUnInit(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1[0x3a] != 0) {
    (**(code **)(*param_1 + 0xc))(param_1[1]);
    if (param_1[0x39] == 0x1639) {
      if (((uint)param_1[5] < 0xf00) && ((uint)param_1[6] < 0x870)) {
        VeUninitEncoderPerformance(0);
        __android_log_print(3,"awplayer","<%s:%u>: VeUninitEncoderPerformance","VideoEncUnInit",0xb2
                            ,param_2);
      }
      else {
        VeUninitEncoderPerformance(1);
      }
    }
    if (param_1[2] != 0) {
      FrameBufferManagerDestroy();
      param_1[2] = 0;
    }
    uVar1 = 0;
    param_1[0x3a] = 0;
  }
  return uVar1;
}



void VideoEncDestroy(int *param_1)

{
  VideoEncUnInit();
  if (*param_1 != 0) {
    (**(code **)(*param_1 + 0x10))(param_1[1]);
    IspDestroy(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
  }
  EncAdpaterRelease();
  free(param_1);
  return;
}



undefined8 AllocInputBuffer(uint param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  
  uVar3 = 1 - param_1;
  if (1 < param_1) {
    uVar3 = 0;
  }
  if (param_2 == 0) {
    uVar3 = uVar3 | 1;
  }
  if (uVar3 == 0) {
    if (*(int *)(param_1 + 8) == 0) {
      param_1 = 0xcd;
      puVar2 = &DAT_000236b6;
    }
    else {
      iVar1 = AllocateInputBuffer();
      if (iVar1 == 0) goto LAB_00013f98;
      param_1 = 0xd4;
      puVar2 = &DAT_00023706;
    }
  }
  else {
    param_1 = 0xc6;
    puVar2 = &DAT_000235f9;
  }
  __android_log_print(6,"awplayer",puVar2,"AllocInputBuffer",param_1,param_2,param_3);
  iVar1 = -1;
LAB_00013f98:
  return CONCAT44(param_1,iVar1);
}



undefined8 GetOneAllocInputBuffer(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == 0) {
    param_1 = 0xe1;
    puVar2 = &DAT_00023736;
  }
  else {
    iVar1 = GetOneAllocateInputBuffer(*(undefined4 *)(param_1 + 8));
    if (iVar1 == 0) goto LAB_00013ff6;
    param_1 = 0xe8;
    puVar2 = &DAT_0002375c;
  }
  __android_log_print(6,"awplayer",puVar2,"GetOneAllocInputBuffer",param_1,param_2,param_3);
  iVar1 = -1;
LAB_00013ff6:
  return CONCAT44(param_1,iVar1);
}



undefined8 FlushCacheAllocInputBuffer(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    param_1 = 0xf5;
    __android_log_print(6,"awplayer",&DAT_00023736,"FlushCacheAllocInputBuffer",0xf5,param_2,param_3
                       );
    uVar1 = 0xffffffff;
  }
  else {
    FlushCacheAllocateInputBuffer(*(undefined4 *)(param_1 + 8));
    uVar1 = 0;
  }
  return CONCAT44(param_1,uVar1);
}



undefined8 ReturnOneAllocInputBuffer(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == 0) {
    param_1 = 0x104;
    puVar2 = &DAT_00023736;
  }
  else {
    iVar1 = ReturnOneAllocateInputBuffer(*(undefined4 *)(param_1 + 8));
    if (iVar1 == 0) goto LAB_00014082;
    param_1 = 0x10b;
    puVar2 = &DAT_0002375c;
  }
  __android_log_print(6,"awplayer",puVar2,"ReturnOneAllocInputBuffer",param_1,param_2,param_3);
  iVar1 = -1;
LAB_00014082:
  return CONCAT44(param_1,iVar1);
}



undefined8 ReleaseAllocInputBuffer(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    param_1 = 0x117;
    __android_log_print(6,"awplayer",&DAT_00023795,"ReleaseAllocInputBuffer",0x117,param_2,param_3);
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(param_1,uVar1);
}



undefined4 AddOneInputBuffer(uint param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 1 - param_1;
  if (1 < param_1) {
    uVar2 = 0;
  }
  if (param_2 == 0) {
    uVar2 = uVar2 | 1;
  }
  if (uVar2 != 0) {
    __android_log_print(6,"awplayer",&DAT_000237d4,"AddOneInputBuffer",0x124,param_2,param_3);
    return 0xffffffff;
  }
  uVar1 = AddInputBuffer(*(undefined4 *)(param_1 + 8));
  return uVar1;
}



undefined4
VideoEncodeOneFrame(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  bool bVar5;
  
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  piVar4 = param_1 + 0xc;
  iVar1 = GetInputBuffer(param_1[2],piVar4,param_3,param_4,param_1,param_2);
  if (iVar1 != 0) {
    return 1;
  }
  uVar2 = param_1[0x11];
  if (param_1[0x39] == 0x1639) {
    bVar5 = 0x1fffffff < uVar2;
    if (bVar5) {
      uVar2 = uVar2 + 0xe0000000;
    }
    if (bVar5) {
      param_1[0x11] = uVar2;
    }
    else {
      __android_log_print(5,"awplayer",
                          "<%s:%u>: venc_ctx->curEncInputbuffer.pAddrPhyY: %p, maybe not right",
                          "VideoEncodeOneFrame",0x143,uVar2);
    }
    if ((uint)param_1[0x12] < 0x20000000) goto LAB_000141b6;
    iVar1 = param_1[0x12] + 0xe0000000;
  }
  else {
    bVar5 = 0x3fffffff < uVar2;
    if (bVar5) {
      uVar2 = uVar2 + 0xc0000000;
    }
    if (bVar5) {
      param_1[0x11] = uVar2;
    }
    else {
      __android_log_print(5,"awplayer",
                          "<%s:%u>: venc_ctx->curEncInputbuffer.pAddrPhyY: %p, maybe not right",
                          "VideoEncodeOneFrame",0x153,uVar2);
    }
    if ((uint)param_1[0x12] < 0x40000000) goto LAB_000141b6;
    iVar1 = param_1[0x12] + 0xc0000000;
  }
  param_1[0x12] = iVar1;
LAB_000141b6:
  EncAdapterLockVideoEngine();
  uVar3 = (**(code **)(*param_1 + 0x14))(param_1[1],piVar4);
  EncAdapterUnLockVideoEngine();
  AddUsedInputBuffer(param_1[2],piVar4);
  return uVar3;
}



undefined4 AlreadyUsedInputBuffer(uint param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 1 - param_1;
  if (1 < param_1) {
    uVar2 = 0;
  }
  if (param_2 == 0) {
    uVar2 = uVar2 | 1;
  }
  if (uVar2 != 0) {
    __android_log_print(6,"awplayer",&DAT_000237d4,"AlreadyUsedInputBuffer",0x16c,param_2,param_3);
    return 0xffffffff;
  }
  uVar1 = GetUsedInputBuffer(*(undefined4 *)(param_1 + 8));
  return uVar1;
}



void ValidBitstreamFrameNum(int *param_1)

{
  (**(code **)(*param_1 + 0x20))(param_1[1]);
  return;
}



undefined4 GetOneBitstreamFrame(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  iVar1 = (**(code **)(*param_1 + 0x24))(param_1[1]);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



undefined4 FreeOneBitStreamFrame(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1[1]);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



void VideoEncGetParameter(int *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1[1]);
  return;
}



void VideoEncSetParameter(int *param_1)

{
  (**(code **)(*param_1 + 0x1c))(param_1[1]);
  return;
}



undefined4 AWJpecEnc(int param_1,undefined4 param_2,void *param_3,size_t *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_10c;
  uint local_108;
  uint local_104;
  undefined auStack256 [20];
  size_t local_ec;
  size_t local_e8;
  void *local_e4;
  void *local_e0;
  undefined auStack200 [20];
  undefined4 local_b4;
  undefined4 local_b0;
  void *local_ac;
  void *local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  
  iVar1 = VideoEncCreate(1);
  VideoEncSetParameter(iVar1,0x201,param_2);
  VideoEncSetParameter(iVar1,0x200,param_1 + 0x40);
  iVar2 = VideoEncInit(iVar1,param_1);
  if (iVar2 < 0) {
LAB_000143ae:
    uVar3 = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x18) == 0) {
      local_b4 = *(undefined4 *)(param_1 + 0x1c);
      local_b0 = *(undefined4 *)(param_1 + 0x20);
    }
    else {
      local_108 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 4);
      local_104 = local_108 >> 1;
      local_10c = 1;
      iVar2 = AllocInputBuffer(iVar1,&local_10c);
      if (iVar2 < 0) goto LAB_000143ae;
      GetOneAllocInputBuffer(iVar1,auStack200);
      memcpy(local_ac,*(void **)(param_1 + 0x1c),local_108);
      memcpy(local_a8,*(void **)(param_1 + 0x20),local_104);
      FlushCacheAllocInputBuffer(iVar1,auStack200);
    }
    local_a4 = *(undefined4 *)(param_1 + 0x2c);
    local_a0 = *(undefined4 *)(param_1 + 0x30);
    local_9c = *(undefined4 *)(param_1 + 0x34);
    local_98 = *(undefined4 *)(param_1 + 0x38);
    local_94 = *(undefined4 *)(param_1 + 0x3c);
    AddOneInputBuffer(iVar1,auStack200);
    iVar2 = VideoEncodeOneFrame(iVar1);
    if (iVar2 != 0) {
      __android_log_print(6,"awplayer",&DAT_0002384b,"AWJpecEnc",0x1d9);
    }
    AlreadyUsedInputBuffer(iVar1,auStack200);
    if (*(int *)(param_1 + 0x18) != 0) {
      ReturnOneAllocInputBuffer(iVar1,auStack200);
    }
    GetOneBitstreamFrame(iVar1,auStack256);
    memcpy(param_3,local_e4,local_ec);
    if (local_e8 != 0) {
      param_3 = (void *)((int)param_3 + local_ec);
      local_ec = local_ec + local_e8;
      memcpy(param_3,local_e0,local_e8);
    }
    *param_4 = local_ec;
    uVar3 = 0;
    FreeOneBitStreamFrame(iVar1,auStack256);
  }
  if (iVar1 != 0) {
    VideoEncDestroy(iVar1);
  }
  return uVar3;
}



void FUN_000143d0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (*param_1 != 0) {
    do {
      iVar2 = iVar1;
      iVar1 = *(int *)(iVar2 + 0xb0);
    } while (iVar1 != 0);
    *(int *)(iVar2 + 0xb0) = param_2;
    *(undefined4 *)(param_2 + 0xb0) = 0;
    return;
  }
  *param_1 = param_2;
  *(undefined4 *)(param_2 + 0xb0) = 0;
  return;
}



void * FrameBufferManagerCreate(size_t param_1,undefined4 param_2)

{
  void *__s;
  void *__s_00;
  int iVar1;
  int iVar2;
  int iVar3;
  
  __s = malloc(0x40);
  if (__s == (void *)0x0) {
    __android_log_print(6,"awplayer",&DAT_00023873,"FrameBufferManagerCreate",0x4d,param_2);
  }
  else {
    memset(__s,0,0x40);
    *(size_t *)((int)__s + 0x20) = param_1;
    __s_00 = calloc(0xb8,param_1);
    *(void **)((int)__s + 0x30) = __s_00;
    if (__s_00 == (void *)0x0) {
      __android_log_print(6,"awplayer",&DAT_000238a8,"FrameBufferManagerCreate",0x59,param_2);
      free(__s);
      __s = __s_00;
    }
    else {
      iVar2 = 0;
      memset(__s_00,0,param_1 * 0xb8);
      iVar3 = 0;
      while (iVar3 < (int)param_1) {
        iVar3 = iVar3 + 1;
        iVar1 = *(int *)((int)__s + 0x30) + iVar2;
        iVar2 = iVar2 + 0xb8;
        FUN_000143d0((int)__s + 0x2c,iVar1);
      }
      pthread_mutex_init((pthread_mutex_t *)((int)__s + 0x34),(pthread_mutexattr_t *)0x0);
    }
  }
  return __s;
}



void FrameBufferManagerDestroy(void *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  if (*(void **)((int)param_1 + 0x30) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x30));
    *(undefined4 *)((int)param_1 + 0x30) = 0;
  }
  if (*(int *)((int)param_1 + 0x14) != 0) {
    iVar1 = 0;
    iVar2 = 0;
    while (iVar2 < *(int *)((int)param_1 + 8)) {
      if (*(int *)(*(int *)((int)param_1 + 0x14) + iVar1 + 0x1c) != 0) {
        EncAdapterMemPfree();
      }
      if (*(int *)(*(int *)((int)param_1 + 0x14) + iVar1 + 0x20) != 0) {
        EncAdapterMemPfree();
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xb8;
    }
    pthread_mutex_destroy((pthread_mutex_t *)((int)param_1 + 0x18));
    free(*(void **)((int)param_1 + 0x14));
    *(undefined4 *)((int)param_1 + 0x14) = 0;
  }
  pthread_mutex_destroy((pthread_mutex_t *)((int)param_1 + 0x34));
  free(param_1);
  return;
}



undefined4 AddInputBuffer(int param_1,void *param_2)

{
  void *__dest;
  pthread_mutex_t *__mutex;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  __mutex = (pthread_mutex_t *)(param_1 + 0x34);
  pthread_mutex_lock(__mutex);
  __dest = *(void **)(param_1 + 0x2c);
  if (__dest != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)((int)__dest + 0xb0);
    *(undefined4 *)((int)__dest + 0xb0) = 0;
  }
  pthread_mutex_unlock(__mutex);
  if (__dest != (void *)0x0) {
    memcpy(__dest,param_2,0xb0);
    pthread_mutex_lock(__mutex);
    FUN_000143d0(param_1 + 0x28,__dest);
    pthread_mutex_unlock(__mutex);
    return 0;
  }
  return 0xffffffff;
}



undefined4 GetInputBuffer(int param_1,void *param_2)

{
  void *__src;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x34));
  __src = *(void **)(param_1 + 0x28);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x34));
  if (__src != (void *)0x0) {
    memcpy(param_2,__src,0xb0);
    return 0;
  }
  return 0xffffffff;
}



undefined8 AddUsedInputBuffer(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  pthread_mutex_t *__mutex;
  int iVar3;
  int *piVar4;
  
  iVar3 = param_1;
  if (param_1 != 0) {
    __mutex = (pthread_mutex_t *)(param_1 + 0x34);
    piVar4 = param_2;
    pthread_mutex_lock(__mutex);
    piVar2 = *(int **)(param_1 + 0x28);
    if (piVar2 != (int *)0x0) {
      *(int *)(param_1 + 0x28) = piVar2[0x2c];
      piVar2[0x2c] = 0;
      if (*param_2 == *piVar2) {
        FUN_000143d0(param_1 + 0x24);
        pthread_mutex_unlock(__mutex);
        uVar1 = 0;
        goto LAB_000145fa;
      }
      iVar3 = 0xce;
      __android_log_print(6,"awplayer",&DAT_000238e3,"AddUsedInputBuffer",0xce,piVar4,param_3);
    }
    pthread_mutex_unlock(__mutex);
  }
  uVar1 = 0xffffffff;
LAB_000145fa:
  return CONCAT44(iVar3,uVar1);
}



undefined4 GetUsedInputBuffer(int param_1,void *param_2)

{
  void *__src;
  pthread_mutex_t *__mutex;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  __mutex = (pthread_mutex_t *)(param_1 + 0x34);
  pthread_mutex_lock(__mutex);
  __src = *(void **)(param_1 + 0x24);
  if (__src != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((int)__src + 0xb0);
    *(undefined4 *)((int)__src + 0xb0) = 0;
  }
  pthread_mutex_unlock(__mutex);
  if (__src != (void *)0x0) {
    memcpy(param_2,__src,0xb0);
    pthread_mutex_lock(__mutex);
    FUN_000143d0(param_1 + 0x2c,__src);
    pthread_mutex_unlock(__mutex);
    return 0;
  }
  return 0xffffffff;
}



undefined4 AllocateInputBuffer(int param_1,size_t *param_2)

{
  void *__s;
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  size_t *psVar6;
  
  if (param_1 != 0) {
    *(size_t *)(param_1 + 8) = *param_2;
    psVar6 = param_2;
    __s = calloc(0xb8,*param_2);
    *(void **)(param_1 + 0x14) = __s;
    if (__s == (void *)0x0) {
      __android_log_print(6,"awplayer",&DAT_00023912,"AllocateInputBuffer",0x108,psVar6);
    }
    else {
      iVar4 = 0;
      *(size_t *)(param_1 + 0x38) = param_2[1];
      iVar3 = 0;
      *(size_t *)(param_1 + 0x3c) = param_2[2];
      memset(__s,0,*param_2 * 0xb8);
      while (iVar3 < (int)*param_2) {
        *(int *)(*(int *)(param_1 + 0x14) + iVar4) = iVar3;
        iVar5 = *(int *)(param_1 + 0x14);
        uVar1 = EncAdapterMemPalloc(*(undefined4 *)(param_1 + 0x38));
        *(undefined4 *)(iVar5 + iVar4 + 0x1c) = uVar1;
        iVar5 = *(int *)(param_1 + 0x14) + iVar4;
        if (*(int *)(iVar5 + 0x1c) == 0) {
          uVar1 = 0x117;
          puVar2 = &DAT_0002393d;
LAB_0001472e:
          __android_log_print(6,"awplayer",puVar2,"AllocateInputBuffer",uVar1);
          break;
        }
        uVar1 = EncAdapterMemGetPhysicAddressCpu();
        *(undefined4 *)(iVar5 + 0x14) = uVar1;
        EncAdapterMemFlushCache
                  (*(undefined4 *)(*(int *)(param_1 + 0x14) + iVar4 + 0x1c),
                   *(undefined4 *)(param_1 + 0x38));
        if (*(int *)(param_1 + 0x3c) != 0) {
          iVar5 = *(int *)(param_1 + 0x14);
          uVar1 = EncAdapterMemPalloc();
          *(undefined4 *)(iVar5 + iVar4 + 0x20) = uVar1;
          iVar5 = *(int *)(param_1 + 0x14) + iVar4;
          if (*(int *)(iVar5 + 0x20) == 0) {
            uVar1 = 0x126;
            puVar2 = &DAT_00023970;
            goto LAB_0001472e;
          }
          uVar1 = EncAdapterMemGetPhysicAddressCpu();
          *(undefined4 *)(iVar5 + 0x18) = uVar1;
          EncAdapterMemFlushCache
                    (*(undefined4 *)(*(int *)(param_1 + 0x14) + iVar4 + 0x20),
                     *(undefined4 *)(param_1 + 0x3c));
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0xb8;
      }
      iVar4 = 0;
      iVar5 = 0;
      if ((int)*param_2 <= iVar3) {
        while (iVar5 < (int)*param_2) {
          iVar5 = iVar5 + 1;
          iVar3 = *(int *)(param_1 + 0x14) + iVar4;
          iVar4 = iVar4 + 0xb8;
          FUN_000143d0(param_1 + 0x10,iVar3);
        }
        pthread_mutex_init((pthread_mutex_t *)(param_1 + 0x18),(pthread_mutexattr_t *)0x0);
        return 0;
      }
      while (iVar5 < (int)*param_2) {
        if (*(int *)(*(int *)(param_1 + 0x14) + iVar4 + 0x1c) != 0) {
          EncAdapterMemPfree();
        }
        if (*(int *)(*(int *)(param_1 + 0x14) + iVar4 + 0x20) != 0) {
          EncAdapterMemPfree();
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0xb8;
      }
      free(*(void **)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  return 0xffffffff;
}



undefined8 GetOneAllocateInputBuffer(int param_1,void *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  void *__src;
  int iVar2;
  
  iVar2 = param_1;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar2 = 0x15b;
      __android_log_print(6,"awplayer",&DAT_000239a3,"GetOneAllocateInputBuffer",0x15b,param_2,
                          param_3);
    }
    else {
      pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x18));
      __src = *(void **)(param_1 + 0x10);
      if (__src != (void *)0x0) {
        *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)__src + 0xb0);
        *(undefined4 *)((int)__src + 0xb0) = 0;
      }
      pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x18));
      if (__src != (void *)0x0) {
        memcpy(param_2,__src,0xb0);
        uVar1 = 0;
        goto LAB_0001484a;
      }
    }
  }
  uVar1 = 0xffffffff;
LAB_0001484a:
  return CONCAT44(iVar2,uVar1);
}



undefined4
FlushCacheAllocateInputBuffer(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  EncAdapterMemFlushCache
            (*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_1 + 0x38),param_3,param_4,param_4
            );
  if (*(int *)(param_1 + 0x3c) != 0) {
    EncAdapterMemFlushCache(*(undefined4 *)(param_2 + 0x20));
  }
  return 0;
}



undefined4 ReturnOneAllocateInputBuffer(int param_1,uint *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *param_2;
  if (uVar3 < *(uint *)(param_1 + 8)) {
    iVar2 = *(int *)(param_1 + 0x14);
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x18));
    FUN_000143d0(param_1 + 0x10,uVar3 * 0xb8 + iVar2);
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x18));
    uVar1 = 0;
  }
  else {
    __android_log_print(6,"awplayer",&DAT_000239e5,"ReturnOneAllocateInputBuffer",0x17d,param_2);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



undefined8 BitStreamCreate(int param_1,undefined4 param_2,undefined4 param_3)

{
  pthread_mutex_t *ppVar1;
  pthread_mutex_t *__mutex;
  pthread_mutex_t *__s;
  int iVar2;
  
  __mutex = (pthread_mutex_t *)0x0;
  if (0 < param_1) {
    ppVar1 = (pthread_mutex_t *)EncAdapterMemPalloc();
    if (ppVar1 == (pthread_mutex_t *)0x0) {
      param_1 = 0x2c;
      __android_log_print(6,"awplayer",&DAT_00023a2a,"BitStreamCreate",0x2c,param_2,param_3);
      __mutex = ppVar1;
    }
    else {
      EncAdapterMemFlushCache(ppVar1,param_1);
      __mutex = (pthread_mutex_t *)malloc(0x34);
      if (__mutex == (pthread_mutex_t *)0x0) {
        param_1 = 0x35;
        __android_log_print(6,"awplayer",&DAT_00023a50,"BitStreamCreate",0x35,param_2,param_3);
        EncAdapterMemPfree(ppVar1);
      }
      else {
        memset(__mutex,0,0x34);
        __s = (pthread_mutex_t *)malloc(0x3000);
        *(pthread_mutex_t **)&__mutex[1].field_0x4 = __s;
        if (__s == (pthread_mutex_t *)0x0) {
          param_1 = 0x40;
          __android_log_print(6,"awplayer",&DAT_00023a73,"BitStreamCreate");
          free(__mutex);
          EncAdapterMemPfree(ppVar1);
          __mutex = __s;
        }
        else {
          memset(__s,0,0x3000);
          pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
          *(pthread_mutex_t **)&__mutex->field_0x4 = ppVar1;
          iVar2 = EncAdapterMemGetPhysicAddress(ppVar1);
          *(undefined4 *)&__mutex[1].field_0x8 = 0x100;
          *(int *)&__mutex->field_0x10 = param_1;
          *(int *)&__mutex->field_0x8 = iVar2 + param_1 + -1;
          *(undefined4 *)&__mutex->field_0x14 = 0;
          *(undefined4 *)(__mutex + 1) = 0;
          *(undefined4 *)&__mutex[1].field_0xc = 0;
          *(undefined4 *)&__mutex[1].field_0x10 = 0;
          *(undefined4 *)&__mutex[1].field_0x14 = 0;
          *(undefined4 *)(__mutex + 2) = 0;
          *(int *)&__mutex->field_0xc = iVar2;
          param_1 = 0x60;
          __android_log_print(3,"awplayer","<%s:%u>: BitStreamCreate OK","BitStreamCreate");
        }
      }
    }
  }
  return CONCAT44(param_1,__mutex);
}



void BitStreamDestroy(pthread_mutex_t *param_1)

{
  if (param_1 == (pthread_mutex_t *)0x0) {
    return;
  }
  pthread_mutex_destroy(param_1);
  if (*(int *)&param_1->field_0x4 != 0) {
    EncAdapterMemPfree();
    *(undefined4 *)&param_1->field_0x4 = 0;
  }
  if (*(void **)&param_1[1].field_0x4 != (void *)0x0) {
    free(*(void **)&param_1[1].field_0x4);
    *(undefined4 *)&param_1[1].field_0x4 = 0;
  }
  free(param_1);
  return;
}



int BitStreamBaseAddress(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    __android_log_print(6,"awplayer",&DAT_00023acb,"BitStreamBaseAddress",0x7e,param_2);
  }
  else {
    param_1 = *(int *)(param_1 + 4);
  }
  return param_1;
}



int BitStreamBasePhyAddress(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    __android_log_print(6,"awplayer",&DAT_00023acb,"BitStreamBasePhyAddress",0x8a,param_2);
  }
  else {
    param_1 = *(int *)(param_1 + 0xc);
  }
  return param_1;
}



int BitStreamEndPhyAddress(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    __android_log_print(6,"awplayer",&DAT_00023acb,"BitStreamEndPhyAddress",0x95,param_2);
  }
  else {
    param_1 = *(int *)(param_1 + 8);
  }
  return param_1;
}



int BitStreamBufferSize(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    __android_log_print(6,"awplayer",&DAT_00023acb,"BitStreamBufferSize",0xa0,param_2);
  }
  else {
    param_1 = *(int *)(param_1 + 0x10);
  }
  return param_1;
}



int BitStreamFreeBufferSize(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    __android_log_print(6,"awplayer",&DAT_00023acb,"BitStreamFreeBufferSize",0xab,param_2);
  }
  else {
    param_1 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x18);
  }
  return param_1;
}



undefined8 BitStreamFrameNum(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    param_1 = 0xb6;
    __android_log_print(6,"awplayer",&DAT_00023acb,"BitStreamFrameNum",0xb6,param_2,param_3);
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x24);
  }
  return CONCAT44(param_1,uVar1);
}



undefined8 BitStreamWriteOffset(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    param_1 = 0xc1;
    __android_log_print(6,"awplayer",&DAT_00023acb,"BitStreamWriteOffset",0xc1,param_2,param_3);
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x14);
  }
  return CONCAT44(param_1,uVar1);
}



undefined4 BitStreamAddOneBitstream(pthread_mutex_t *param_1,void *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 1 - (int)param_1;
  if ((pthread_mutex_t *)0x1 < param_1) {
    uVar2 = 0;
  }
  if (param_2 == (void *)0x0) {
    uVar2 = uVar2 | 1;
  }
  if (uVar2 == 0) {
    iVar1 = pthread_mutex_lock(param_1);
    if (iVar1 == 0) {
      if (*(int *)&param_1[1].field_0xc < *(int *)&param_1[1].field_0x8) {
        iVar1 = *(int *)&param_1->field_0x10 - *(int *)(param_1 + 1);
        if (*(int *)((int)param_2 + 4) <= iVar1) {
          iVar3 = *(int *)(param_1 + 2);
          memcpy((void *)(*(int *)&param_1[1].field_0x4 + iVar3 * 0x30),param_2,0x30);
          *(int *)(*(int *)&param_1[1].field_0x4 + iVar3 * 0x30 + 0x14) = iVar3;
          iVar3 = iVar3 + 1;
          iVar1 = *(int *)&param_1[1].field_0x10;
          *(int *)&param_1[1].field_0xc = *(int *)&param_1[1].field_0xc + 1;
          if (*(int *)&param_1[1].field_0x8 <= iVar3) {
            iVar3 = 0;
          }
          *(int *)(param_1 + 2) = iVar3;
          *(int *)&param_1[1].field_0x10 = iVar1 + 1;
          *(uint *)(param_1 + 1) =
               *(int *)(param_1 + 1) + (*(int *)((int)param_2 + 4) + 0x3fU & 0xffffffc0);
          iVar1 = (*(int *)((int)param_2 + 4) + 0x3fU & 0xffffffc0) + *(int *)&param_1->field_0x14;
          if (*(int *)&param_1->field_0x10 <= iVar1) {
            iVar1 = iVar1 - *(int *)&param_1->field_0x10;
          }
          *(int *)&param_1->field_0x14 = iVar1;
          pthread_mutex_unlock(param_1);
          return 0;
        }
        __android_log_print(6,"awplayer",&DAT_00023b50,"BitStreamAddOneBitstream",0xdf,
                            *(int *)((int)param_2 + 4),iVar1);
      }
      else {
        __android_log_print(6,"awplayer",&DAT_00023b1c,"BitStreamAddOneBitstream",0xd8);
      }
      pthread_mutex_unlock(param_1);
    }
  }
  else {
    __android_log_print(6,"awplayer",&DAT_00023afa,"BitStreamAddOneBitstream",0xcf);
  }
  return 0xffffffff;
}



pthread_mutex_t * BitStreamGetOneBitstream(pthread_mutex_t *param_1,undefined4 param_2)

{
  int iVar1;
  pthread_mutex_t *ppVar2;
  pthread_mutex_t *ppVar3;
  
  if (param_1 == (pthread_mutex_t *)0x0) {
    __android_log_print(6,"awplayer",&DAT_00023b96,"BitStreamGetOneBitstream",0x107,param_2);
    ppVar2 = param_1;
  }
  else {
    iVar1 = pthread_mutex_lock(param_1);
    if (iVar1 == 0) {
      ppVar3 = *(pthread_mutex_t **)&param_1[1].field_0x10;
      if (ppVar3 == (pthread_mutex_t *)0x0) {
        pthread_mutex_unlock(param_1);
        ppVar2 = ppVar3;
      }
      else {
        ppVar2 = (pthread_mutex_t *)
                 (*(int *)&param_1[1].field_0x14 * 0x30 + *(int *)&param_1[1].field_0x4);
        if (ppVar2 == (pthread_mutex_t *)0x0) {
          __android_log_print(6,"awplayer",&DAT_00023bea,"BitStreamGetOneBitstream",0x11c,param_2);
        }
        else {
          iVar1 = *(int *)&param_1[1].field_0x14 + 1;
          *(int *)&param_1[1].field_0x14 = iVar1;
          *(int *)&param_1[1].field_0x10 = &ppVar3[-1].field_0x17;
          if (*(int *)&param_1[1].field_0x8 <= iVar1) {
            *(undefined4 *)&param_1[1].field_0x14 = 0;
          }
        }
        pthread_mutex_unlock(param_1);
      }
    }
    else {
      __android_log_print(6,"awplayer",&DAT_00023bba,"BitStreamGetOneBitstream",0x10d,param_2);
      ppVar2 = (pthread_mutex_t *)0x0;
    }
  }
  return ppVar2;
}



pthread_mutex_t * BitStreamReturnOneBitstream(pthread_mutex_t *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (pthread_mutex_t *)0x0) {
    __android_log_print(6,"awplayer",&DAT_00023acb,"BitStreamReturnOneBitstream",0x132,param_2);
  }
  else {
    iVar2 = param_2;
    if ((*(int *)(param_2 + 0x14) < 0) || (*(int *)&param_1[1].field_0x8 < *(int *)(param_2 + 0x14))
       ) {
      __android_log_print(6,"awplayer",&DAT_00023c0f,"BitStreamReturnOneBitstream",0x138,param_2);
    }
    iVar1 = pthread_mutex_lock(param_1);
    if (iVar1 == 0) {
      if (*(int *)&param_1[1].field_0xc != 0) {
        iVar1 = *(int *)(param_1 + 1);
        iVar2 = *(int *)(*(int *)(param_2 + 0x14) * 0x30 + *(int *)&param_1[1].field_0x4 + 4);
        *(int *)&param_1[1].field_0xc = *(int *)&param_1[1].field_0xc + -1;
        *(uint *)(param_1 + 1) = iVar1 - (iVar2 + 0x3fU & 0xffffffc0);
        pthread_mutex_unlock(param_1);
        return (pthread_mutex_t *)0x0;
      }
      __android_log_print(6,"awplayer",&DAT_00023c3e,"BitStreamReturnOneBitstream",0x142,iVar2);
      pthread_mutex_unlock(param_1);
    }
    param_1 = (pthread_mutex_t *)0xffffffff;
  }
  return param_1;
}



undefined4 EncAdapterInitialize(void)

{
  int iVar1;
  
  iVar1 = VeInitialize();
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  iVar1 = MemAdapterOpen();
  if (-1 < iVar1) {
    SecureMemAdapterOpen();
    SecureMemAdapterClose();
    return 0;
  }
  return 0xffffffff;
}



void EncAdpaterRelease(void)

{
  MemAdapterClose();
  VeRelease();
  return;
}



void EncAdapterLockVideoEngine(void)

{
  VeEncoderLock();
  return;
}



void EncAdapterUnLockVideoEngine(void)

{
  VeEncoderUnLock();
  return;
}



void EncAdapterVeReset(void)

{
  VeReset();
  return;
}



void EncAdapterVeWaitInterrupt(void)

{
  VeWaitEncoderInterrupt();
  return;
}



void EncAdapterVeGetBaseAddress(void)

{
  VeGetRegisterBaseAddress();
  return;
}



void EncAdapterMemGetDramType(void)

{
  VeGetDramType();
  return;
}



void EncAdapterMemPalloc(void)

{
  MemAdapterPalloc();
  return;
}



void EncAdapterMemPfree(void)

{
  MemAdapterPfree();
  return;
}



void EncAdapterMemFlushCache(void)

{
  MemAdapterFlushCache();
  return;
}



void EncAdapterMemGetPhysicAddress(void)

{
  MemAdapterGetPhysicAddress();
  return;
}



void EncAdapterMemGetPhysicAddressCpu(void)

{
  MemAdapterGetPhysicAddressCpu();
  return;
}



void EncAdapterMemGetVirtualAddress(void)

{
  MemAdapterGetVirtualAddress();
  return;
}



void EncAdapterEnableEncoder(void)

{
  VeEnableEncoder();
  return;
}



void EncAdapterDisableEncoder(void)

{
  VeDisableEncoder();
  return;
}



void EncAdapterResetEncoder(void)

{
  VeResetEncoder();
  return;
}



void EncAdapterInitPerformance(void)

{
  VeInitEncoderPerformance();
  return;
}



void EncAdapterUninitPerformance(void)

{
  VeUninitEncoderPerformance();
  return;
}



undefined8 EncAdapterGetICVersion(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = VeGetRegisterBaseAddress();
  return CONCAT44(param_1,*(uint *)(iVar1 + 0xf0) >> 0x10);
}



void EncAdapterSetDramType(void)

{
  VeSetDramType();
  return;
}



void EncAdapterPrintTopVEReg(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  puVar4 = (undefined4 *)VeGetRegisterBaseAddress();
  __android_log_print(3,"awplayer",
                      "<%s:%u>: --------- register of top level ve base:%p -----------\n",
                      "EncAdapterPrintTopVEReg",0xa9,puVar4);
  iVar6 = 0;
  do {
    uVar5 = *puVar4;
    puVar1 = puVar4 + 1;
    puVar2 = puVar4 + 2;
    puVar3 = puVar4 + 3;
    puVar4 = puVar4 + 4;
    iVar7 = iVar6 + 1;
    __android_log_print(3,"awplayer","<%s:%u>: row %2d: %08x %08x %08x %08x",
                        "EncAdapterPrintTopVEReg",0xac,iVar6,uVar5,*puVar1,*puVar2,*puVar3);
    iVar6 = iVar7;
  } while (iVar7 != 0x10);
  return;
}



void EncAdapterPrintEncReg(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar4 = VeGetRegisterBaseAddress();
  puVar6 = (undefined4 *)(iVar4 + 0xb00);
  __android_log_print(3,"awplayer","<%s:%u>: --------- register of ve encoder base:%p -----------\n"
                      ,"EncAdapterPrintEncReg",0xb7,puVar6);
  iVar4 = 0;
  do {
    uVar5 = *puVar6;
    puVar1 = puVar6 + 1;
    puVar2 = puVar6 + 2;
    puVar3 = puVar6 + 3;
    puVar6 = puVar6 + 4;
    iVar7 = iVar4 + 1;
    __android_log_print(3,"awplayer","<%s:%u>: row %2d: %08x %08x %08x %08x","EncAdapterPrintEncReg"
                        ,0xba,iVar4,uVar5,*puVar1,*puVar2,*puVar3);
    iVar4 = iVar7;
  } while (iVar7 != 0x10);
  return;
}



void EncAdapterPrintIspReg(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar4 = VeGetRegisterBaseAddress();
  puVar6 = (undefined4 *)(iVar4 + 0xa00);
  __android_log_print(3,"awplayer","<%s:%u>: --------- register of ve isp base:%p -----------\n",
                      "EncAdapterPrintIspReg",0xc5,puVar6);
  iVar4 = 0;
  do {
    uVar5 = *puVar6;
    puVar1 = puVar6 + 1;
    puVar2 = puVar6 + 2;
    puVar3 = puVar6 + 3;
    puVar6 = puVar6 + 4;
    iVar7 = iVar4 + 1;
    __android_log_print(3,"awplayer","<%s:%u>: row %2d: %08x %08x %08x %08x","EncAdapterPrintIspReg"
                        ,200,iVar4,uVar5,*puVar1,*puVar2,*puVar3);
    iVar4 = iVar7;
  } while (iVar7 != 0x10);
  return;
}



void FUN_00015000(int *param_1,uint param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  int iVar10;
  float fStack68;
  float local_40 [4];
  float local_30 [5];
  
  if (param_2 < 0x100) {
    param_2 = 0x100;
  }
  iVar4 = 0;
  do {
    pfVar1 = &fStack68;
    pfVar2 = local_40 + 4;
    fVar5 = (float)(longlong)iVar4 * 0.0625;
    fVar9 = (float)(ulonglong)param_2;
    local_40[2] = ((1.0 - fVar5) * 256.0) / fVar9;
    local_40[0] = ((fVar5 + 1.0) * 256.0) / fVar9;
    local_40[1] = ((fVar5 + 0.0) * 256.0) / fVar9;
    local_40[3] = ((2.0 - fVar5) * 256.0) / fVar9;
    fVar5 = 0.0;
    do {
      pfVar1 = pfVar1 + 1;
      fVar9 = *pfVar1;
      if (1.0 < fVar9) {
        if (fVar9 <= 2.0) {
          fVar9 = ((fVar9 * 2.5 * fVar9 + fVar9 * -0.5 * fVar9 * fVar9) - fVar9 * 4.0) + 2.0;
          goto LAB_0001511c;
        }
        *pfVar2 = 0.0;
      }
      else {
        fVar9 = (fVar9 * 1.5 * fVar9 * fVar9 - fVar9 * 2.5 * fVar9) + 1.0;
LAB_0001511c:
        *pfVar2 = fVar9;
      }
      fVar9 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      fVar5 = fVar5 + fVar9;
    } while (pfVar1 != local_40 + 3);
    if (fVar5 == 1.0) {
      uVar7 = SUB84(ROUND((double)(local_30[0] * 256.0) + 0.5),0);
      iVar6 = SUB84(ROUND((double)(local_30[1] * 256.0) + 0.5),0);
      uVar8 = SUB84(ROUND((double)(local_30[2] * 256.0) + 0.5),0);
      iVar10 = SUB84(ROUND((double)(local_30[3] * 256.0) + 0.5),0);
    }
    else {
      uVar7 = SUB84(ROUND((double)((local_30[0] * 256.0) / fVar5) + 0.5),0);
      iVar6 = SUB84(ROUND((double)((local_30[1] * 256.0) / fVar5) + 0.5),0);
      uVar8 = SUB84(ROUND((double)((local_30[2] * 256.0) / fVar5) + 0.5),0);
      iVar10 = SUB84(ROUND((double)((local_30[3] * 256.0) / fVar5) + 0.5),0);
    }
    iVar3 = uVar7 + iVar6 + uVar8 + iVar10;
    if (iVar3 == 0x102) {
LAB_00015252:
      iVar6 = iVar6 + -1;
LAB_00015254:
      uVar8 = uVar8 - 1;
    }
    else {
      if (iVar3 == 0x101) {
        if (iVar6 <= (int)uVar8) goto LAB_00015254;
        iVar6 = iVar6 + -1;
      }
      else {
        if (iVar3 != 0x100) {
          if (iVar3 == 0xff) {
            if ((int)uVar8 < iVar6) {
LAB_0001523c:
              uVar8 = uVar8 + 1;
            }
            else {
              iVar6 = iVar6 + 1;
            }
          }
          else {
            if (iVar3 == 0xfe) {
              iVar6 = iVar6 + 1;
              goto LAB_0001523c;
            }
            if (iVar3 == 0x103) {
              if (iVar10 < (int)uVar7) {
                uVar7 = uVar7 - 1;
              }
              else {
                iVar10 = iVar10 + -1;
              }
              goto LAB_00015252;
            }
          }
        }
      }
    }
    iVar4 = iVar4 + 1;
    *param_1 = iVar6 * 0x10000 + (uVar7 & 0xffff);
    param_1[1] = iVar10 * 0x10000 + (uVar8 & 0xffff);
    param_1 = param_1 + 2;
    if (iVar4 == 0x10) {
      return;
    }
  } while( true );
}



void * IspCreate(undefined4 param_1,undefined4 param_2)

{
  void *__s;
  
  __s = malloc(0x130);
  if (__s == (void *)0x0) {
    __android_log_print(6,"awplayer",&DAT_00023d44,"IspCreate",0xc0,param_2);
  }
  else {
    memset(__s,0,0x130);
  }
  return __s;
}



void IspDestroy(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  free(param_1);
  return;
}



void SetIspBaseAddress(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}



void SetIspRegister(undefined4 *param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  
  puVar7 = (undefined4 *)*param_1;
  memset(param_1 + 1,0,0x28);
  *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)(param_2 + 1);
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 2);
  *puVar7 = param_1[1];
  bVar3 = *(byte *)((int)param_1 + 10);
  switch(*param_2) {
  case 0:
    bVar3 = bVar3 & 0xcf;
    break;
  case 1:
    iVar4 = 1;
    *(byte *)((int)param_1 + 10) = bVar3 & 0xcf | 0x10;
    if (param_2[1] != param_2[4]) goto LAB_00015356;
LAB_0001533e:
    iVar4 = param_2[2];
    iVar6 = param_2[3];
    goto LAB_00015342;
  case 2:
    bVar3 = bVar3 & 0xcf | 0x20;
    break;
  case 3:
    *(byte *)((int)param_1 + 10) = bVar3 | 0x30;
    if (param_2[1] == param_2[4]) goto LAB_0001533e;
    goto LAB_00015354;
  default:
    *(byte *)((int)param_1 + 10) = bVar3 & 0xcf;
    iVar4 = 0;
    goto LAB_00015356;
  }
  *(byte *)((int)param_1 + 10) = bVar3;
  if (param_2[1] == param_2[3]) {
    iVar4 = param_2[2];
    iVar6 = param_2[4];
LAB_00015342:
    iVar4 = iVar4 - iVar6;
    if (iVar4 != 0) {
      iVar4 = 1;
    }
  }
  else {
LAB_00015354:
    iVar4 = 1;
  }
LAB_00015356:
  *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) & 0xfc00 | (ushort)param_2[3] & 0x3ff;
  *(ushort *)((int)param_1 + 0x1a) =
       *(ushort *)((int)param_1 + 0x1a) & 0xfc00 | (ushort)param_2[4] & 0x3ff;
  if (param_2[0xe] == 0) {
    if (param_2[0xf] != 0) {
      iVar4 = 1;
    }
  }
  else {
    iVar4 = 1;
  }
  if ((param_2[0x12] == 0) && (iVar4 != 0)) {
    *(byte *)((int)param_1 + 10) = *(byte *)((int)param_1 + 10) | 1;
    *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) & 0xfc00 | (ushort)param_2[3] & 0x3ff;
    *(ushort *)((int)param_1 + 0x1a) =
         *(ushort *)((int)param_1 + 0x1a) & 0xfc00 | (ushort)param_2[4] & 0x3ff;
    uVar2 = param_2[0xf] << 0x18 | param_2[0xe] << 8;
    param_1[8] = uVar2;
    puVar7[0xc] = uVar2;
    uVar2 = param_2[0xf] << 0x17 | param_2[0xe] << 7;
    param_1[9] = uVar2;
    puVar7[0xd] = uVar2;
    iVar4 = param_2[2];
    iVar6 = param_2[1];
    if (*param_2 != 3 && *param_2 != 1) {
      iVar4 = param_2[1];
      iVar6 = param_2[2];
    }
    uVar1 = __aeabi_uidiv(iVar4 * 0x100 + param_2[0xe] * -0x10 + ((uint)param_2[3] >> 1));
    *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) & 0xf800 | uVar1 & 0x7ff;
    iVar4 = 0;
    uVar2 = __aeabi_uidiv(iVar6 * 0x100 + param_2[0xf] * -0x10 + ((uint)param_2[4] >> 1));
    uVar2 = param_1[10] & 0xff800fff | (uVar2 & 0x7ff) << 0xc;
    param_1[10] = uVar2;
    puVar7[0xe] = uVar2;
    puVar7[0x38] = 0;
    if (param_1[0x4b] != (*(ushort *)(param_1 + 10) & 0x7ff)) {
      param_1[0x4b] = *(ushort *)(param_1 + 10) & 0x7ff;
      FUN_00015000(param_1 + 0xb);
      piVar5 = param_1 + 0x2b;
      do {
        iVar6 = iVar4 * 0xffff;
        iVar4 = iVar4 + 8;
        *piVar5 = iVar6 + 0x100;
        piVar5 = piVar5 + 1;
      } while (iVar4 != 0x100);
    }
    iVar4 = 0;
    do {
      iVar6 = iVar4 + 4;
      puVar7[0x39] = *(undefined4 *)((int)param_1 + iVar4 + 0x2c);
      iVar4 = iVar6;
    } while (iVar6 != 0x100);
  }
  if (param_2[6] == 0) {
    *(ushort *)(param_1 + 5) = *(ushort *)(param_1 + 5) & 0xfc00 | (ushort)param_2[5] & 0x3ff;
  }
  else {
    *(byte *)((int)param_1 + 10) = *(byte *)((int)param_1 + 10) | 8;
    *(byte *)((int)param_1 + 0xb) =
         *(byte *)((int)param_1 + 0xb) & 0xf9 | (byte)(param_2[7] << 1) & 6;
    iVar4 = param_2[7];
    if (iVar4 == 0) {
      *(ushort *)(param_1 + 5) = *(ushort *)(param_1 + 5) & 0xfc00 | (ushort)param_2[3] & 0x3ff;
    }
    else {
      uVar2 = param_2[3] << 4;
      if (iVar4 == 1) {
        uVar2 = uVar2 >> 3;
      }
      else {
        uVar2 = uVar2 >> (iVar4 - 1U & 0xff);
      }
      *(ushort *)(param_1 + 5) =
           *(ushort *)(param_1 + 5) & 0xfc00 | (ushort)(uVar2 + 0xf >> 4) & 0x3ff;
    }
    puVar7[0x1c] = param_2[0xc];
    puVar7[0x1d] = param_2[0xd];
  }
  *(byte *)((int)param_1 + 10) = *(byte *)((int)param_1 + 10) & 0xcf | (byte)(*param_2 << 4) & 0x30;
  switch(param_2[8]) {
  default:
    bVar3 = *(byte *)((int)param_1 + 0xb) & 7;
    goto LAB_00015544;
  case 1:
    iVar4 = 4;
    break;
  case 2:
  case 3:
    iVar4 = 0x18;
    break;
  case 4:
    iVar4 = 2;
    break;
  case 5:
    iVar4 = 6;
    break;
  case 6:
    iVar4 = 0x1c;
    break;
  case 7:
    iVar4 = 0x1e;
    break;
  case 8:
    iVar4 = 1;
    break;
  case 9:
    iVar4 = 3;
    break;
  case 10:
    iVar4 = 5;
    break;
  case 0xb:
    iVar4 = 7;
    break;
  case 0xc:
    iVar4 = 0x10;
    break;
  case 0xd:
    iVar4 = 0x12;
    break;
  case 0xe:
    iVar4 = 0x14;
    break;
  case 0xf:
    iVar4 = 0x16;
    break;
  case 0x10:
    iVar4 = 10;
    break;
  case 0x11:
    iVar4 = 0xc;
  }
  bVar3 = *(byte *)((int)param_1 + 0xb) & 7 | (byte)(iVar4 << 3);
LAB_00015544:
  *(byte *)((int)param_1 + 0xb) = bVar3;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xf9 | (byte)(param_2[0x10] << 1) & 6;
  *(byte *)((int)param_1 + 9) = *(byte *)((int)param_1 + 9) & 0xfc | (byte)param_2[0x11] & 3;
  *(ushort *)((int)param_1 + 0x16) =
       *(ushort *)((int)param_1 + 0x16) & 0xfc00 | (ushort)param_2[5] & 0x3ff;
  puVar7[1] = param_1[5];
  puVar7[5] = param_2[5];
  puVar7[0xb] = param_1[6];
  puVar7[2] = param_1[2];
  puVar7[0x1e] = param_2[9];
  puVar7[0x1f] = param_2[10];
  puVar7[0x20] = param_2[0xb];
  return;
}



void SetIspRegister_old_version(undefined4 *param_1,int *param_2)

{
  ushort uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  int iVar10;
  undefined4 *puVar11;
  float *pfVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float local_44;
  float local_40 [4];
  float local_30 [4];
  
  puVar11 = (undefined4 *)*param_1;
  memset(param_1 + 1,0,0x28);
  *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)(param_2 + 1);
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 2);
  *puVar11 = param_1[1];
  *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) & 0xfc00 | (ushort)param_2[3] & 0x3ff;
  *(ushort *)((int)param_1 + 0x1a) =
       *(ushort *)((int)param_1 + 0x1a) & 0xfc00 | (ushort)param_2[4] & 0x3ff;
  if (param_2[1] == param_2[3]) {
    iVar7 = param_2[2] - param_2[4];
    if (iVar7 != 0) {
      iVar7 = 1;
    }
  }
  else {
    iVar7 = 1;
  }
  if (param_2[0xe] == 0) {
    if (param_2[0xf] != 0) {
      iVar7 = 1;
    }
  }
  else {
    iVar7 = 1;
  }
  if ((param_2[0x12] == 0) && (iVar7 != 0)) {
    if (param_2[0x13] == 0x1633) {
      *(byte *)((int)param_1 + 0x12) = *(byte *)((int)param_1 + 0x12) | 1;
      *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) & 0xfc00 | (ushort)param_2[3] & 0x3ff;
      *(ushort *)((int)param_1 + 0x1a) =
           *(ushort *)((int)param_1 + 0x1a) & 0xfc00 | (ushort)param_2[4] & 0x3ff;
    }
    else {
      *(byte *)((int)param_1 + 0xe) = *(byte *)((int)param_1 + 0xe) | 1;
      *(char *)(param_1 + 7) = (char)param_2[3];
      *(char *)((int)param_1 + 0x1d) = (char)param_2[4];
    }
    if (param_2[0x13] == 0x1633) {
      uVar8 = param_2[0xf] << 0x18 | param_2[0xe] << 8;
    }
    else {
      uVar8 = 0x800080;
    }
    param_1[8] = uVar8;
    puVar11[0xc] = param_1[8];
    if (param_2[0x13] == 0x1633) {
      uVar8 = param_2[0xf] << 0x17 | param_2[0xe] << 7;
    }
    else {
      uVar8 = 0x800080;
    }
    param_1[9] = uVar8;
    puVar11[0xd] = param_1[9];
    iVar7 = param_2[2];
    iVar10 = param_2[1];
    if (*param_2 != 3 && *param_2 != 1) {
      iVar7 = param_2[1];
      iVar10 = param_2[2];
    }
    uVar1 = __aeabi_uidiv(iVar7 * 0x100 + param_2[0xe] * -0x10 + ((uint)param_2[3] >> 1));
    *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) & 0xf800 | uVar1 & 0x7ff;
    uVar8 = __aeabi_uidiv(iVar10 * 0x100 + param_2[0xf] * -0x10 + ((uint)param_2[4] >> 1));
    uVar8 = param_1[10] & 0xff800fff | (uVar8 & 0x7ff) << 0xc;
    param_1[10] = uVar8;
    puVar11[0xe] = uVar8;
    if (param_1[0x4b] != (*(ushort *)(param_1 + 10) & 0x7ff)) {
      param_1[0x4b] = *(ushort *)(param_1 + 10) & 0x7ff;
      piVar2 = param_1 + 0xb;
      if (param_2[0x13] == 0x1633) {
        puVar11[0x38] = 0;
        FUN_00015000(piVar2,*(ushort *)(param_1 + 10) & 0x7ff);
      }
      else {
        puVar11[0x38] = 0x400;
        uVar8 = *(ushort *)(param_1 + 10) & 0x7ff;
        iVar7 = 0;
        if (uVar8 < 0x100) {
          uVar8 = 0x100;
        }
        do {
          pfVar12 = &local_44;
          pfVar9 = local_40 + 4;
          fVar14 = (float)(longlong)iVar7 * 0.0625;
          fVar15 = (float)(ulonglong)uVar8;
          local_40[2] = ((1.0 - fVar14) * 256.0) / fVar15;
          local_40[0] = ((fVar14 + 1.0) * 256.0) / fVar15;
          local_40[1] = ((fVar14 + 0.0) * 256.0) / fVar15;
          local_40[3] = ((2.0 - fVar14) * 256.0) / fVar15;
          fVar14 = 0.0;
          do {
            pfVar12 = pfVar12 + 1;
            fVar15 = *pfVar12;
            if (1.0 < fVar15) {
              if (fVar15 <= 2.0) {
                fVar15 = ((fVar15 * 2.5 * fVar15 + fVar15 * -0.5 * fVar15 * fVar15) - fVar15 * 4.0)
                         + 2.0;
                goto LAB_0001582c;
              }
              *pfVar9 = 0.0;
            }
            else {
              fVar15 = (fVar15 * 1.5 * fVar15 * fVar15 - fVar15 * 2.5 * fVar15) + 1.0;
LAB_0001582c:
              *pfVar9 = fVar15;
            }
            fVar15 = *pfVar9;
            pfVar9 = pfVar9 + 1;
            fVar14 = fVar14 + fVar15;
          } while (pfVar12 != local_40 + 3);
          if (fVar14 == 1.0) {
            uVar1 = SUB82(ROUND((double)(local_30[2] * 256.0) + 0.5),0);
            *piVar2 = SUB84(ROUND((double)(local_30[1] * 256.0) + 0.5),0) * 0x10000 +
                      (SUB84(ROUND((double)(local_30[0] * 256.0) + 0.5),0) & 0xffff);
            iVar10 = SUB84(ROUND((double)(local_30[3] * 256.0) + 0.5),0);
          }
          else {
            *piVar2 = SUB84(ROUND((double)((local_30[1] / fVar14) * 256.0) + 0.5),0) * 0x10000 +
                      (SUB84(ROUND((double)((local_30[0] / fVar14) * 256.0) + 0.5),0) & 0xffff);
            iVar10 = SUB84(ROUND((double)((local_30[3] / fVar14) * 256.0) + 0.5),0);
            uVar1 = SUB82(ROUND((double)((local_30[2] / fVar14) * 256.0) + 0.5),0);
          }
          iVar7 = iVar7 + 1;
          piVar2[1] = iVar10 * 0x10000 + (uint)uVar1;
          piVar2 = piVar2 + 2;
        } while (iVar7 != 0x10);
      }
      iVar7 = 0;
      piVar2 = param_1 + 0x2b;
      do {
        iVar10 = iVar7 * 0xffff;
        iVar7 = iVar7 + 8;
        *piVar2 = iVar10 + 0x100;
        piVar2 = piVar2 + 1;
      } while (iVar7 != 0x100);
    }
    iVar7 = 0;
    do {
      iVar10 = iVar7 + 4;
      puVar11[0x39] = *(undefined4 *)((int)param_1 + iVar7 + 0x2c);
      iVar7 = iVar10;
    } while (iVar10 != 0x100);
  }
  if (param_2[6] == 0) {
    *(ushort *)(param_1 + 5) = *(ushort *)(param_1 + 5) & 0xfc00 | (ushort)param_2[5] & 0x3ff;
  }
  else {
    if (param_2[0x13] == 0x1633) {
      *(byte *)((int)param_1 + 0x12) = *(byte *)((int)param_1 + 0x12) | 8;
      *(byte *)((int)param_1 + 0x13) =
           *(byte *)((int)param_1 + 0x13) & 0xf9 | (byte)(param_2[7] << 1) & 6;
    }
    else {
      *(byte *)((int)param_1 + 0xe) = *(byte *)((int)param_1 + 0xe) | 8;
      *(byte *)((int)param_1 + 0xf) =
           *(byte *)((int)param_1 + 0xf) & 0xf9 | (byte)(param_2[7] << 1) & 6;
    }
    iVar7 = param_2[7];
    if (iVar7 == 0) {
      *(ushort *)(param_1 + 5) = *(ushort *)(param_1 + 5) & 0xfc00 | (ushort)param_2[3] & 0x3ff;
    }
    else {
      uVar8 = param_2[3] << 4;
      if (iVar7 == 1) {
        uVar8 = uVar8 >> 3;
      }
      else {
        uVar8 = uVar8 >> (iVar7 - 1U & 0xff);
      }
      *(ushort *)(param_1 + 5) =
           *(ushort *)(param_1 + 5) & 0xfc00 | (ushort)(uVar8 + 0xf >> 4) & 0x3ff;
    }
    puVar11[0x1c] = param_2[0xc];
    puVar11[0x1d] = param_2[0xd];
  }
  iVar7 = param_2[8];
  if (param_2[0x13] != 0x1633) {
    if (iVar7 != 0) {
      if (iVar7 != 4) {
        *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) & 0x1f;
        uVar3 = 0x299;
        pcVar5 = "<%s:%u>: aw1651 do not support this color_foramt:%d, so use the default NV12\n";
        goto LAB_00015a88;
      }
      iVar7 = 2;
    }
    *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) & 0x1f | (byte)(iVar7 << 5);
    goto LAB_00015a94;
  }
  bVar6 = *(byte *)((int)param_1 + 0x13);
  switch(iVar7) {
  case 0:
    bVar6 = bVar6 & 0xf;
    goto LAB_00015a1e;
  case 1:
    iVar7 = 4;
    break;
  default:
    *(byte *)((int)param_1 + 0x13) = bVar6 & 0xf;
    uVar3 = 0x289;
    pcVar5 = "<%s:%u>: aw1633 do not support this color_foramt:%d, so use the default NV12\n";
LAB_00015a88:
    local_44 = (float)param_2[8];
    __android_log_print(5,"awplayer",pcVar5,"SetIspRegister_old_version",uVar3);
    goto LAB_00015a94;
  case 4:
    iVar7 = 2;
    break;
  case 5:
    iVar7 = 6;
    break;
  case 0xc:
    iVar7 = 8;
    break;
  case 0xd:
  case 0x10:
    iVar7 = 10;
    break;
  case 0xe:
  case 0x11:
    iVar7 = 0xc;
    break;
  case 0xf:
    iVar7 = 0xe;
  }
  bVar6 = bVar6 & 0xf | (byte)(iVar7 << 4);
LAB_00015a1e:
  *(byte *)((int)param_1 + 0x13) = bVar6;
LAB_00015a94:
  *(ushort *)((int)param_1 + 0x16) =
       *(ushort *)((int)param_1 + 0x16) & 0xfc00 | (ushort)param_2[5] & 0x3ff;
  puVar11[1] = param_1[5];
  iVar7 = param_2[0x13];
  bVar13 = iVar7 == 0x1633;
  if (bVar13) {
    iVar7 = param_2[5];
  }
  if (bVar13) {
    puVar11[5] = iVar7;
  }
  if (param_2[0x13] == 0x1633) {
    puVar4 = param_1 + 6;
  }
  else {
    puVar4 = param_1 + 7;
  }
  puVar11[0xb] = *puVar4;
  if (param_2[0x13] == 0x1633) {
    param_1 = param_1 + 4;
  }
  else {
    param_1 = param_1 + 3;
  }
  puVar11[2] = *param_1;
  puVar11[0x1e] = param_2[9];
  puVar11[0x1f] = param_2[10];
  puVar11[0x20] = param_2[0xb];
  return;
}



void * VencoderDeviceCreate(int param_1)

{
  void *__dest;
  
  __dest = malloc(0x2c);
  if (__dest != (void *)0x0) {
    memcpy(__dest,*(void **)(video_encoder_devices + param_1 * 4),0x2c);
  }
  return __dest;
}



void FUN_00015b24(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(iVar1 + 0x20) = param_2;
  *(undefined4 *)(iVar1 + 0x18) = 0x10801;
  do {
  } while (*(int *)(iVar1 + 0x1c) == 0);
  return;
}



undefined4 JpegFreeOneBitstream(int param_1,undefined4 *param_2)

{
  undefined auStack56 [20];
  undefined4 local_24;
  
  local_24 = *param_2;
  BitStreamReturnOneBitstream(*(undefined4 *)(param_1 + 8),auStack56);
  return 0;
}



undefined8 JpegGetOneBitstream(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = param_1;
  piVar6 = param_2;
  piVar1 = (int *)BitStreamGetOneBitstream(*(undefined4 *)(param_1 + 8));
  iVar2 = -1;
  if (piVar1 != (int *)0x0) {
    memset(param_2,0,0x38);
    *param_2 = piVar1[5];
    param_2[4] = piVar1[4];
    iVar2 = piVar1[3];
    param_2[2] = piVar1[2];
    param_2[3] = iVar2;
    if (((*(int *)(param_1 + 2000) == 0) && (*(int *)(param_1 + 0x7fc) == 0)) ||
       (iVar2 = *(int *)(param_1 + 0x808), iVar2 != 0)) {
      iVar3 = *(int *)(param_1 + 0x1c);
      iVar4 = *piVar1 + piVar1[1];
      iVar2 = *(int *)(param_1 + 0x20) + *piVar1;
      param_2[7] = iVar2;
      if (iVar4 <= iVar3) {
        iVar2 = piVar1[1];
      }
      if (iVar3 < iVar4) {
        param_2[8] = *(int *)(param_1 + 0x20);
        iVar2 = *(int *)(param_1 + 0x1c) - *piVar1;
        param_2[5] = iVar2;
        param_2[6] = piVar1[1] - iVar2;
      }
      else {
        param_2[5] = iVar2;
      }
      iVar2 = 0;
    }
    else {
      param_2[7] = *(int *)(param_1 + 0x58);
      param_2[5] = *(int *)(param_1 + 0x60);
      if (*(int *)(param_1 + 0x1c) < *piVar1 + piVar1[1]) {
        iVar5 = 0x3ba;
        __android_log_print(6,"awplayer",&DAT_00023e0e,"JpegGetOneBitstream",0x3ba,piVar6,param_3);
      }
      else {
        param_2[8] = *(int *)(param_1 + 0x20) + *piVar1;
        param_2[6] = piVar1[1];
      }
    }
  }
  return CONCAT44(iVar5,iVar2);
}



void JpegValidBitStreamFrameNum(int param_1)

{
  BitStreamFrameNum(*(undefined4 *)(param_1 + 8));
  return;
}



undefined8 JpegInit(int *param_1,void *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int unaff_r7;
  bool bVar9;
  void *pvVar10;
  
  piVar2 = param_1;
  pvVar10 = param_2;
  iVar1 = EncAdapterVeGetBaseAddress();
  param_1[3] = iVar1;
  param_1[4] = iVar1 + 0xb00;
  memcpy(param_1 + 9,param_2,0x18);
  iVar1 = BitStreamCreate(param_1[0x200]);
  param_1[2] = iVar1;
  if (iVar1 == 0) {
    piVar2 = (int *)0x311;
    puVar5 = &DAT_00023e44;
  }
  else {
    iVar1 = EncAdapterGetICVersion();
    param_1[1] = iVar1;
    iVar1 = BitStreamBaseAddress(param_1[2]);
    param_1[8] = iVar1;
    iVar1 = BitStreamBasePhyAddress(param_1[2]);
    param_1[5] = iVar1;
    iVar1 = BitStreamEndPhyAddress(param_1[2]);
    param_1[6] = iVar1;
    iVar1 = BitStreamBufferSize(param_1[2]);
    param_1[7] = iVar1;
    iVar1 = IspCreate();
    *param_1 = iVar1;
    SetIspBaseAddress(iVar1,param_1[3] + 0xa00);
    if (*param_1 != 0) {
      uVar3 = param_1[0x160];
      uVar8 = (uint)((param_1[10] & 0xfU) == 0);
      uVar4 = (uint)(uVar3 == 0x10e);
      param_1[0x1f6] = uVar8;
      uVar6 = (uint)(uVar3 == 0x10e || uVar3 == 0x5a);
      bVar9 = uVar6 != 0;
      if (bVar9) {
        uVar6 = param_1[0xb];
        unaff_r7 = param_1[0xc];
      }
      if (bVar9) {
        param_1[0xc] = uVar6;
      }
      if (bVar9) {
        param_1[0xb] = unaff_r7;
      }
      uVar6 = param_1[10] + 0xfU >> 4;
      param_1[0x12] = uVar6;
      param_1[0x11] = param_1[9] + 0xfU >> 4;
      param_1[0x13] = param_1[0xb] + 0xfU >> 4;
      uVar7 = param_1[0xc] + 0xfU >> 4;
      param_1[0x14] = uVar7;
      if (uVar8 == 0) {
        if (uVar3 == 0) {
          uVar4 = uVar3;
          if (uVar6 != uVar7) {
            param_1[0x12] = uVar6 - 1;
          }
          goto LAB_00015d2a;
        }
        if ((uVar3 != 0xb4 && uVar3 != 0x5a) && (uVar4 == 0)) goto LAB_00015d2a;
        param_1[0x12] = uVar6 - 1;
      }
      uVar4 = 0;
      goto LAB_00015d2a;
    }
    BitStreamDestroy(param_1[2]);
    piVar2 = (int *)0x324;
    puVar5 = &DAT_00023e79;
  }
  __android_log_print(6,"awplayer",puVar5,"JpegInit",piVar2,pvVar10,param_3);
  uVar4 = 0xffffffff;
LAB_00015d2a:
  return CONCAT44(piVar2,uVar4);
}



void * JpegEncOpen(undefined4 param_1,undefined4 param_2)

{
  void *__s;
  undefined4 uVar1;
  
  __s = malloc(0x818);
  if (__s == (void *)0x0) {
    __android_log_print(6,"awplayer",&DAT_00023ea3,"JpegEncOpen",0x2f4,param_2);
  }
  memset(__s,0,0x818);
  uVar1 = EncAdapterGetICVersion();
  *(undefined4 *)((int)__s + 0x800) = 0x800000;
  *(undefined4 *)((int)__s + 0x74) = 0x5f;
  *(undefined4 *)((int)__s + 0x7f0) = uVar1;
  return __s;
}



undefined4 JpegSetParameter(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0x200) {
    iVar1 = *param_3;
    *(int *)(param_1 + 0x74) = iVar1;
    if (iVar1 < 0x60) {
      if (iVar1 < 0x5a) {
        return 0;
      }
      uVar2 = 0x5f;
    }
    else {
      uVar2 = 99;
    }
    *(undefined4 *)(param_1 + 0x74) = uVar2;
  }
  else {
    if (param_2 < 0x201) {
      if (param_2 != 0xf) {
LAB_00015e1c:
        __android_log_print(6,"awplayer",&DAT_00023ed2,"JpegSetParameter",0x427,param_2);
        return 0xffffffff;
      }
      *(int *)(param_1 + 0x800) = *param_3;
    }
    else {
      if (param_2 == 0x201) {
        memcpy((void *)(param_1 + 0x4d8),param_3,0x2f8);
        *(undefined4 *)(param_1 + 0x7fc) = 0;
        if ((*(int *)(param_1 + 0x570) != 0) && (*(int *)(param_1 + 0x574) != 0)) {
          *(undefined4 *)(param_1 + 2000) = 1;
          return 0;
        }
        *(undefined4 *)(param_1 + 2000) = 0;
        *(undefined4 *)(param_1 + 0x7fc) = 1;
      }
      else {
        if (param_2 != 0x202) goto LAB_00015e1c;
        *(int *)(param_1 + 0x808) = *param_3;
      }
    }
  }
  return 0;
}



undefined4 JpegGetParameter(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_2 == 0xe) {
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    *param_3 = uVar2;
    uVar1 = *(undefined4 *)(param_1 + 0x28);
    param_3[1] = uVar1;
    __android_log_print(3,"awplayer",
                                                
                        "<%s:%u>: JpegGetParameter VENC_IndexParamSize..size->nWidth=%d, size->nHeight=%d.\n"
                        ,"JpegGetParameter",0x3ef,uVar2,uVar1);
  }
  else {
    if (param_2 != 0x201) {
      __android_log_print(6,"awplayer",&DAT_00023ed2,"JpegGetParameter",0x3f8,param_2);
      return 0xffffffff;
    }
    memcpy(param_3,(void *)(param_1 + 0x4d8),0x2f8);
  }
  return 0;
}



undefined4 JpegEncAllocThumbBuffer(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 2000) != 0) {
    iVar2 = *(int *)(param_1 + 0x7dc);
    if (iVar2 == 1) {
      *(uint *)(param_1 + 0x7f4) = (*(uint *)(param_1 + 0x3c) >> 3) + 0x1f & 0xffffffe0;
      uVar3 = *(uint *)(param_1 + 0x40) >> 3;
    }
    else {
      if (iVar2 == 2) {
        uVar3 = *(uint *)(param_1 + 0x40) >> 1;
        *(uint *)(param_1 + 0x7f4) = (*(uint *)(param_1 + 0x3c) >> 1) + 0x1f & 0xffffffe0;
      }
      else {
        if (iVar2 == 3) {
          *(uint *)(param_1 + 0x7f4) = (*(uint *)(param_1 + 0x3c) >> 2) + 0x1f & 0xffffffe0;
          uVar3 = *(uint *)(param_1 + 0x40) >> 2;
        }
        else {
          uVar3 = *(uint *)(param_1 + 0x574);
          *(uint *)(param_1 + 0x7f4) = *(int *)(param_1 + 0x570) + 0x1fU & 0xffffffe0;
        }
      }
    }
    *(uint *)(param_1 + 0x7f8) = uVar3 + 0x1f & 0xffffffe0;
    iVar2 = *(int *)(param_1 + 0x7f8) * *(int *)(param_1 + 0x7f4);
    if (*(int *)(param_1 + 100) == 0) {
      uVar1 = EncAdapterMemPalloc(iVar2);
      *(undefined4 *)(param_1 + 100) = uVar1;
    }
    if (*(int *)(param_1 + 100) == 0) {
      return 0xffffffff;
    }
    if (*(int *)(param_1 + 0x68) == 0) {
      uVar1 = EncAdapterMemPalloc(iVar2 >> 1);
      *(undefined4 *)(param_1 + 0x68) = uVar1;
    }
    if (*(int *)(param_1 + 0x68) == 0) {
      EncAdapterMemPfree();
      *(undefined4 *)(param_1 + 100) = 0;
      return 0xffffffff;
    }
    uVar1 = EncAdapterMemGetPhysicAddress(*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    uVar1 = EncAdapterMemGetPhysicAddress(*(undefined4 *)(param_1 + 0x68));
    *(undefined4 *)(param_1 + 0x70) = uVar1;
  }
  *(uint *)(param_1 + 0x804) =
       ((uint)(*(int *)(param_1 + 0x574) * *(int *)(param_1 + 0x570) * 3) >> 2) + 0x103ff &
       0xfffffc00;
  if (*(int *)(param_1 + 0x58) == 0) {
    uVar1 = EncAdapterMemPalloc();
    *(undefined4 *)(param_1 + 0x58) = uVar1;
  }
  if (*(int *)(param_1 + 0x58) == 0) {
    if (*(int *)(param_1 + 100) == 0) {
      EncAdapterMemPfree(0);
      *(undefined4 *)(param_1 + 100) = 0;
    }
    if (*(int *)(param_1 + 0x68) == 0) {
      EncAdapterMemPfree(0);
      *(undefined4 *)(param_1 + 0x68) = 0;
      return 0xffffffff;
    }
    return 0xffffffff;
  }
  uVar1 = EncAdapterMemGetPhysicAddress();
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  EncAdapterMemFlushCache(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x804));
  return 0;
}



undefined4 JpegEncMainFrame(undefined4 *param_1,int param_2)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 uStack76;
  undefined4 local_48;
  
  iVar10 = param_1[4];
  local_58 = BitStreamWriteOffset(param_1[2]);
  iVar5 = BitStreamFreeBufferSize(param_1[2]);
  if (param_1[0x203] == 0) {
    uVar6 = __aeabi_uidiv(param_1[0xc] * param_1[0xb],3);
    param_1[0x203] = uVar6;
  }
  iVar7 = BitStreamFreeBufferSize(param_1[2]);
  if (iVar7 < (int)param_1[0x203]) {
    uVar6 = BitStreamFreeBufferSize(param_1[2]);
    uVar8 = *(uint *)(param_1[2] + 0x10);
    uVar9 = uVar8 & ~((int)uVar8 >> 0x20);
    if ((int)uVar8 < 0) {
      uVar9 = uVar8 + 0x3ff;
    }
    __android_log_print(6,"awplayer",&DAT_00023f60,"JpegEncMainFrame",0xbd,uVar6,(int)uVar9 >> 10);
    return 2;
  }
  jpeg_set_quant_tbl(param_1,param_1[0x1d]);
  param_1[0xf] = param_1[0xb];
  param_1[0x10] = param_1[0xc];
  param_1[0x125] = param_1[0x14];
  param_1[0x129] = param_1[0xe];
  param_1[0x124] = param_1[0x13];
  param_1[0x126] = param_1[0x11];
  if (*(int *)(param_2 + 0x24) == 0) {
    param_1[0x122] = param_1[0x11];
    param_1[0x123] = param_1[0x12];
    param_1[0x12a] = *(undefined4 *)(param_2 + 0x14);
    param_1[299] = *(undefined4 *)(param_2 + 0x18);
    param_1[300] = *(int *)(param_2 + 0x18) + ((uint)(param_1[9] * param_1[10]) >> 2);
  }
  else {
    iVar7 = param_1[9];
    if (((((iVar7 < *(int *)(param_2 + 0x30)) || (iVar7 < *(int *)(param_2 + 0x34))) ||
         (*(int *)(param_2 + 0x30) < 0x20)) ||
        ((*(int *)(param_2 + 0x34) < 0x20 || (iVar7 < (int)*(uint *)(param_2 + 0x28))))) ||
       ((int)param_1[10] < *(int *)(param_2 + 0x2c))) {
      __android_log_print(3,"awplayer","<%s:%u>: [%s,%d],the crop parameter error!",
                          "JpegEncMainFrame",0xdb,"JpegEncMainFrame",0xdb);
      return 0xffffffff;
    }
    uVar8 = *(uint *)(param_2 + 0x28) & 0xfffffff0;
    param_1[0x1f8] = uVar8;
    uVar9 = *(uint *)(param_2 + 0x2c) & 0xfffffff0;
    param_1[0x1f9] = uVar9;
    uVar11 = *(int *)(param_2 + 0x30) + 0xf;
    param_1[0x1fa] = uVar11 & 0xfffffff0;
    uVar12 = *(uint *)(param_2 + 0x34);
    if (param_1[0x1f6] != 0) {
      uVar12 = uVar12 + 0xf;
    }
    param_1[0x1fb] = uVar12 & 0xfffffff0;
    uVar9 = iVar7 * uVar9;
    param_1[0x122] = (int)uVar11 >> 4;
    param_1[0x123] = (int)param_1[0x1fb] >> 4;
    param_1[0x12a] = *(int *)(param_2 + 0x14) + uVar8 + uVar9;
    uVar9 = uVar9 >> 1;
    param_1[299] = *(int *)(param_2 + 0x18) + uVar8 + uVar9;
    param_1[300] = *(int *)(param_2 + 0x18) + uVar8 + ((uint)(param_1[10] * iVar7) >> 2) + uVar9;
  }
  if ((param_1[500] == 0) || (param_1[0x202] != 0)) {
    uVar6 = 0;
  }
  else {
    fVar2 = (float)(ulonglong)(uint)param_1[0xf] / (float)(ulonglong)(uint)param_1[0x15c];
    fVar3 = (float)(ulonglong)(uint)param_1[0x10] / (float)(ulonglong)(uint)param_1[0x15d];
    if (((fVar2 < 4.0) && (fVar3 < 4.0)) ||
       (param_1[0x1fc] == 0x1651 || (uint)param_1[0x1fc] < 0x1634)) {
      if ((2.0 <= fVar2) || (2.0 <= fVar3)) goto LAB_00016246;
      if ((1.0 <= fVar2) || (1.0 <= fVar3)) {
        uVar6 = 2;
      }
      else {
        uVar6 = 0;
      }
    }
    else {
      if ((uint)param_1[1] < 0x1634 || param_1[1] == 0x1651) {
LAB_00016246:
        uVar6 = 3;
      }
      else {
        uVar6 = 1;
      }
    }
    param_1[0x1f7] = uVar6;
    uVar6 = 1;
  }
  param_1[0x127] = uVar6;
  if (((param_1[500] != 0) || (param_1[0x1ff] != 0)) && (param_1[0x202] == 0)) {
    JpegEncAllocThumbBuffer(param_1);
    param_1[0x128] = param_1[0x1f7];
    param_1[0x12d] = param_1[0x1b];
    param_1[0x12e] = param_1[0x1c];
  }
  *(undefined4 *)(iVar10 + 0x18) = 0x10000;
  uVar6 = __aeabi_idiv(param_1[0x160],0x5a);
  param_1[0x121] = uVar6;
  uVar9 = param_1[1];
  param_1[0x134] = uVar9;
  if (uVar9 < 0x1634 || uVar9 == 0x1651) {
    SetIspRegister_old_version();
  }
  else {
    SetIspRegister(*param_1,param_1 + 0x121);
  }
  *(undefined4 *)(iVar10 + 0x14) = 0xf;
  iVar7 = 0;
  *(uint *)(iVar10 + 0x1c) = *(uint *)(iVar10 + 0x1c) | 7;
  *(int *)(iVar10 + 0x88) = local_58 << 3;
  *(undefined4 *)(iVar10 + 0x80) = param_1[5];
  *(undefined4 *)(iVar10 + 0x84) = param_1[6];
  *(int *)(iVar10 + 0x8c) = (iVar5 + local_58) * 8;
  *(undefined4 *)(iVar10 + 4) = 0x80000000;
  FUN_00015b24(param_1,0xff);
  FUN_00015b24(param_1,0xd8);
  emit_dqt(param_1,0);
  emit_dqt(param_1,1);
  emit_sof(param_1);
  do {
    puVar1 = huf_tbl_wr + iVar7;
    iVar7 = iVar7 + 1;
    FUN_00015b24(param_1,*puVar1);
  } while (iVar7 != 0x1b0);
  emit_sos(param_1);
  uVar9 = __aeabi_idiv(0x400,*(undefined2 *)(param_1 + 0x1e));
  param_1[0x11e] = uVar9;
  uVar8 = __aeabi_idiv(0x400,*(undefined2 *)(param_1 + 0x5e));
  param_1[0x11f] = uVar8;
  param_1[0x120] = uVar8;
  *(uint *)(iVar10 + 4) = (uVar8 & 0x7ff) << 0x10 | 0x80000000 | uVar9 & 0x7ff | 0x40000000;
  if (0x1662 < (uint)param_1[0x1fc]) {
    if ((int)param_1[0x1d] < 0x5a) {
      if ((int)param_1[0x1d] < 0x50) {
        uVar9 = 0x18;
      }
      else {
        uVar9 = 0xc;
      }
      uVar9 = uVar9 | 0x500;
    }
    else {
      uVar9 = 0xc0000000;
    }
    *(uint *)(iVar10 + 8) = uVar9;
  }
  iVar7 = 0;
  *(undefined4 *)(iVar10 + 0xe0) = 0;
  do {
    iVar4 = iVar7 + 0x278;
    iVar7 = iVar7 + 4;
    *(undefined4 *)(iVar10 + 0xe4) = *(undefined4 *)((int)param_1 + iVar4);
  } while (iVar7 != 0x200);
  *(undefined4 *)(iVar10 + 0x18) = 0x10008;
  iVar7 = EncAdapterVeWaitInterrupt();
  if (iVar7 != 0) {
    EncAdapterPrintTopVEReg();
    EncAdapterPrintEncReg();
    EncAdapterPrintIspReg();
    __android_log_print(6,"awplayer",&DAT_00023fd5,"JpegEncMainFrame",0x1ac);
    return 0xffffffff;
  }
  *(undefined4 *)(iVar10 + 0x1c) = *(undefined4 *)(iVar10 + 0x1c);
  local_48 = 1;
  local_54 = (*(uint *)(iVar10 + 0x90) >> 3) - local_58;
  local_50 = *(undefined4 *)(param_2 + 8);
  uStack76 = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 < local_54) {
    __android_log_print(6,"awplayer",&DAT_0002400f,"JpegEncMainFrame",0x1bb);
  }
  if (local_54 + local_58 < (int)param_1[7]) {
    MemAdapterFlushCache(param_1[8] + local_58,local_54);
    iVar5 = local_54 + local_58;
    if ((int)param_1[7] <= iVar5 + 1) {
      *(undefined *)(param_1[8] + param_1[7] + -1) = 0xff;
      *(undefined *)param_1[8] = 0xd9;
      MemAdapterFlushCache(param_1[8] + param_1[7] + -1,1);
      iVar5 = param_1[8];
      uVar6 = 1;
      goto LAB_000164e8;
    }
    *(undefined *)(param_1[8] + iVar5) = 0xff;
    *(undefined *)(param_1[8] + iVar5 + 1) = 0xd9;
    iVar5 = param_1[8] + iVar5;
  }
  else {
    iVar5 = local_54 - (param_1[7] - local_58);
    MemAdapterFlushCache(param_1[8] + local_58);
    if (0 < iVar5) {
      MemAdapterFlushCache(param_1[8],iVar5);
    }
    *(undefined *)(param_1[8] + iVar5) = 0xff;
    *(undefined *)(param_1[8] + iVar5 + 1) = 0xd9;
    iVar5 = param_1[8] + iVar5;
  }
  uVar6 = 2;
LAB_000164e8:
  MemAdapterFlushCache(iVar5,uVar6);
  local_54 = local_54 + 2;
  BitStreamAddOneBitstream(param_1[2],&local_58);
  return 0;
}



void JpegEncFreeThumbBuffer(int param_1)

{
  if (*(int *)(param_1 + 100) != 0) {
    EncAdapterMemPfree();
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    EncAdapterMemPfree();
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    EncAdapterMemPfree();
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  return;
}



void JpegEncClose(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  if (param_1[0x202] == 0) {
    JpegEncFreeThumbBuffer();
  }
  if (*param_1 != 0) {
    IspDestroy();
  }
  if (param_1[2] != 0) {
    BitStreamDestroy();
  }
  free(param_1);
  return;
}



undefined4 JpegUnInit(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (param_1[0x202] == 0) {
      JpegEncFreeThumbBuffer();
    }
    if (*param_1 != 0) {
      IspDestroy();
      *param_1 = 0;
    }
    if (param_1[2] != 0) {
      BitStreamDestroy();
      param_1[2] = 0;
    }
  }
  return 0;
}



undefined8 JpegEncThumbFrame(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  
  iVar10 = param_1[4];
  puVar12 = param_1;
  iVar2 = InitExif(param_1[0x16]);
  param_1[0x135] = iVar2;
  if (iVar2 == 0) {
LAB_00016892:
    uVar4 = 0xffffffff;
  }
  else {
    jpeg_set_quant_tbl(param_1,0x32);
    *(undefined2 *)(param_1 + 499) = *(undefined2 *)(param_1 + 0xc);
    param_1[0x160] = 0;
    *(undefined2 *)((int)param_1 + 0x7ca) = *(undefined2 *)(param_1 + 0xb);
    WriteExifInfo(param_1[0x135],param_1 + 0x136,param_1[500],*(undefined2 *)(param_1 + 0xc),puVar12
                  ,param_2,param_3);
    iVar2 = GetThumbNailOffset(param_1[0x135]);
    EncAdapterMemFlushCache(param_1[0x16],iVar2);
    iVar8 = param_1[500];
    iVar11 = param_1[0x201];
    if (iVar8 != 0) {
      uVar5 = param_1[0x15c];
      uVar9 = param_1[0x15d];
      uVar3 = uVar5 >> 4;
      param_1[0xf] = uVar5;
      uVar6 = uVar9 >> 4;
      if ((uVar5 & 0xf) != 0) {
        uVar3 = uVar3 + 1;
      }
      param_1[0x10] = uVar9;
      iVar8 = param_1[0x1f7];
      if ((uVar9 & 0xf) != 0) {
        uVar6 = uVar6 + 1;
      }
      param_1[0x124] = uVar3;
      param_1[0x125] = uVar6;
      iVar7 = param_1[0x13];
      if (iVar8 == 0) {
        param_1[0x122] = iVar7;
        param_1[0x126] = iVar7;
        param_1[0x123] = param_1[0x14];
      }
      else {
        if (iVar8 == 1) {
          uVar3 = (uint)(iVar7 << 4) >> 3;
        }
        else {
          uVar3 = (uint)(iVar7 << 4) >> (iVar8 - 1U & 0xff);
        }
        param_1[0x122] = uVar3 >> 4;
        param_1[0x126] = uVar3 + 0xf >> 4;
        if (iVar8 == 1) {
          uVar3 = (uint)(param_1[0x14] << 4) >> 3;
        }
        else {
          uVar3 = (uint)(param_1[0x14] << 4) >> (iVar8 - 1U & 0xff);
        }
        param_1[0x123] = uVar3 >> 4;
        if (param_1[0x1f6] == 0) {
          param_1[0x123] = (uVar3 >> 4) - 1;
        }
      }
      param_1[0x127] = 0;
      param_1[0x121] = 0;
      param_1[0x129] = 0;
      *(undefined4 *)(iVar10 + 0x18) = 0x10000;
      param_1[299] = param_1[0x1c];
      uVar3 = param_1[1];
      param_1[0x12a] = param_1[0x1b];
      param_1[0x134] = uVar3;
      if (uVar3 < 0x1634 || uVar3 == 0x1651) {
        SetIspRegister_old_version();
      }
      else {
        SetIspRegister(*param_1,param_1 + 0x121);
      }
      *(undefined4 *)(iVar10 + 0x14) = 0xf;
      iVar8 = 0;
      *(uint *)(iVar10 + 0x1c) = *(uint *)(iVar10 + 0x1c) | 7;
      *(int *)(iVar10 + 0x88) = iVar2 << 3;
      *(undefined4 *)(iVar10 + 0x80) = param_1[0x17];
      *(int *)(iVar10 + 0x84) = param_1[0x17] + param_1[0x201] + -1;
      *(int *)(iVar10 + 0x8c) = (iVar11 - iVar2) * 8;
      *(undefined4 *)(iVar10 + 4) = 0x80000000;
      FUN_00015b24(param_1,0xff);
      FUN_00015b24(param_1,0xd8);
      emit_dqt(param_1,0);
      emit_dqt(param_1,1);
      emit_sof(param_1);
      do {
        puVar1 = huf_tbl_wr + iVar8;
        iVar8 = iVar8 + 1;
        FUN_00015b24(param_1,*puVar1);
      } while (iVar8 != 0x1b0);
      emit_sos(param_1);
      uVar3 = __aeabi_idiv(0x400,*(undefined2 *)(param_1 + 0x1e));
      param_1[0x11e] = uVar3;
      uVar5 = __aeabi_idiv(0x400,*(undefined2 *)(param_1 + 0x5e));
      iVar8 = 0;
      param_1[0x11f] = uVar5;
      param_1[0x120] = uVar5;
      *(uint *)(iVar10 + 4) = (uVar5 & 0x7ff) << 0x10 | 0x80000000 | uVar3 & 0x7ff | 0x40000000;
      *(undefined4 *)(iVar10 + 0xe0) = 0;
      do {
        iVar11 = iVar8 + 0x278;
        iVar8 = iVar8 + 4;
        *(undefined4 *)(iVar10 + 0xe4) = *(undefined4 *)((int)param_1 + iVar11);
      } while (iVar8 != 0x200);
      *(undefined4 *)(iVar10 + 0x18) = 0x10008;
      iVar8 = EncAdapterVeWaitInterrupt();
      if (iVar8 != 0) {
        EncAdapterPrintTopVEReg();
        EncAdapterPrintEncReg();
        EncAdapterPrintIspReg();
        puVar12 = (undefined4 *)0x2b3;
        __android_log_print(6,"awplayer",&DAT_00023fd5,"JpegEncThumbFrame");
        UnInitExif(param_1[0x135]);
        goto LAB_00016892;
      }
      *(undefined4 *)(iVar10 + 0x1c) = *(undefined4 *)(iVar10 + 0x1c);
      iVar8 = (*(uint *)(iVar10 + 0x90) >> 3) - iVar2;
      EncAdapterMemFlushCache(param_1[0x16] + iVar2,iVar8);
    }
    iVar10 = param_1[0x16];
    if (param_1[500] != 0) {
      iVar11 = iVar8 + iVar2;
      iVar8 = iVar8 + 2;
      *(undefined *)(iVar10 + iVar11) = 0xff;
      *(undefined *)(iVar10 + iVar11 + 1) = 0xd9;
      SetThumbNailSize(param_1[0x135],iVar8);
    }
    uVar3 = iVar8 + iVar2;
    param_1[0x18] = uVar3;
    uVar5 = uVar3 + 0xfff & 0xfffff000;
    if (uVar5 != uVar3) {
      memset((void *)(param_1[0x16] + uVar3),0,uVar5 - uVar3);
      param_1[0x18] = uVar5;
    }
    param_1[0x15e] = param_1[0x16] + iVar2;
    param_1[0x15f] = param_1[0x18] - iVar2;
    SetAPP1Size(param_1[0x135],uVar5 - 2);
    UnInitExif(param_1[0x135]);
    uVar4 = 0;
    param_1[0x135] = 0;
  }
  return CONCAT44(puVar12,uVar4);
}



undefined4 JpegEncEncode(int param_1,undefined4 param_2)

{
  EncAdapterResetEncoder();
  EncAdapterEnableEncoder();
  JpegEncMainFrame(param_1,param_2);
  if ((*(int *)(param_1 + 0x808) == 0) &&
     ((*(int *)(param_1 + 2000) != 0 || (*(int *)(param_1 + 0x7fc) != 0)))) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    JpegEncThumbFrame(param_1);
  }
  *(int *)(param_1 + 0x810) = *(int *)(param_1 + 0x810) + 1;
  EncAdapterDisableEncoder();
  return 0;
}



void FUN_000168f4(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  puVar1 = *(undefined **)(param_1 + 0x14);
  *puVar1 = (char)param_2;
  puVar1[1] = (char)((uint)param_2 >> 8);
  *(undefined **)(param_1 + 0x14) = puVar1 + 2;
  return;
}



void FUN_00016902(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  puVar1 = *(undefined **)(param_1 + 0x14);
  *puVar1 = (char)param_2;
  puVar1[1] = (char)((uint)param_2 >> 8);
  puVar1[2] = (char)((uint)param_2 >> 0x10);
  puVar1[3] = (char)((uint)param_2 >> 0x18);
  *(undefined **)(param_1 + 0x14) = puVar1 + 4;
  return;
}



void write_exif_byte(int param_1,undefined param_2)

{
  undefined *puVar1;
  
  puVar1 = *(undefined **)(param_1 + 0x14);
  *puVar1 = param_2;
  *(undefined **)(param_1 + 0x14) = puVar1 + 1;
  return;
}



void writer_exif_marker(int param_1,undefined param_2)

{
  undefined *puVar1;
  
  puVar1 = *(undefined **)(param_1 + 0x14);
  puVar1[1] = param_2;
  *puVar1 = 0xff;
  *(undefined **)(param_1 + 0x14) = puVar1 + 2;
  return;
}



void write_exif_element_struct(short *param_1)

{
  FUN_000168f4(param_1,(int)*param_1);
  FUN_000168f4(param_1,(int)param_1[1]);
  FUN_00016902(param_1,*(undefined4 *)(param_1 + 2));
  FUN_00016902(param_1,*(undefined4 *)(param_1 + 4));
  return;
}



void write_exif_element(undefined2 *param_1,int param_2)

{
  undefined uVar1;
  undefined uVar2;
  undefined2 uVar3;
  void *pvVar4;
  undefined2 *puVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  
  uVar3 = (undefined2)param_2;
  if (param_2 == 0x202) {
    *param_1 = uVar3;
    *(undefined4 *)(param_1 + 2) = 1;
    param_1[1] = 4;
    *(undefined4 *)(param_1 + 4) = 0;
    *(int *)(param_1 + 0x16) = *(int *)(param_1 + 10) + 8;
    goto LAB_00016eba;
  }
  if (param_2 < 0x203) {
    if (param_2 == 0x100) {
      *param_1 = uVar3;
      param_1[1] = 4;
      *(undefined4 *)(param_1 + 2) = 1;
      uVar7 = *(uint *)(param_1 + 0x1c);
    }
    else {
      if (param_2 < 0x101) {
        if (param_2 != 5) {
          if (param_2 < 6) {
            if (param_2 != 2) {
              if (param_2 < 3) {
                if (param_2 != 1) {
                  return;
                }
                *param_1 = uVar3;
                param_1[1] = 2;
                *(undefined4 *)(param_1 + 2) = 2;
                uVar1 = *(undefined *)((int)param_1 + 0xbd);
                uVar2 = *(undefined *)(param_1 + 0x5e);
              }
              else {
                if (param_2 != 3) {
                  if (param_2 != 4) {
                    return;
                  }
                  *param_1 = 4;
                  param_1[1] = 5;
                  puVar5 = param_1 + 0x6e;
                  *(undefined4 *)(param_1 + 2) = 3;
                  pvVar4 = *(void **)(param_1 + 0x22);
                  *(int *)(param_1 + 4) = (int)pvVar4 + (-0xc - *(int *)(param_1 + 8));
                  goto LAB_00016d60;
                }
                uVar1 = *(undefined *)((int)param_1 + 0xd9);
                uVar2 = *(undefined *)(param_1 + 0x6c);
                *param_1 = uVar3;
                param_1[1] = 2;
                *(undefined4 *)(param_1 + 2) = 2;
              }
              uVar7 = (uint)CONCAT11(uVar1,uVar2);
              goto LAB_00016eb8;
            }
            *param_1 = uVar3;
            param_1[1] = 5;
            *(undefined4 *)(param_1 + 2) = 3;
            pvVar4 = *(void **)(param_1 + 0x22);
            *(int *)(param_1 + 4) = (int)pvVar4 + (-0xc - *(int *)(param_1 + 8));
            puVar5 = param_1 + 0x60;
          }
          else {
            if (param_2 != 7) {
              if (param_2 < 7) {
                *param_1 = 6;
                param_1[1] = 5;
                pvVar4 = *(void **)(param_1 + 0x22);
                *(undefined4 *)(param_1 + 2) = 1;
                *(int *)(param_1 + 4) = (int)pvVar4 + (-0xc - *(int *)(param_1 + 8));
                puVar5 = param_1 + 0x7c;
                goto LAB_00016ba8;
              }
              if (param_2 == 0x1b) {
                param_1[1] = 7;
                uVar7 = *(uint *)(param_1 + 0x94);
                *param_1 = uVar3;
                *(uint *)(param_1 + 2) = uVar7;
                if (4 < uVar7) {
                  *(int *)(param_1 + 4) =
                       (int)*(void **)(param_1 + 0x22) + (-0xc - *(int *)(param_1 + 8));
                  memcpy(*(void **)(param_1 + 0x22),*(void **)(param_1 + 0x92),uVar7);
                  *(uint *)(param_1 + 0x22) = *(int *)(param_1 + 0x22) + uVar7;
                }
                goto LAB_00016eba;
              }
              if (param_2 != 0x1d) {
                return;
              }
              *param_1 = 0x1d;
              param_1[1] = 2;
              *(undefined4 *)(param_1 + 2) = 0xb;
              *(int *)(param_1 + 4) =
                   (int)*(void **)(param_1 + 0x22) + (-0xc - *(int *)(param_1 + 8));
              memcpy(*(void **)(param_1 + 0x22),param_1 + 0x8c,0xb);
              iVar8 = *(int *)(param_1 + 0x22) + 0xb;
              goto LAB_00016e92;
            }
            *param_1 = uVar3;
            param_1[1] = 5;
            puVar5 = param_1 + 0x80;
            *(undefined4 *)(param_1 + 2) = 3;
            pvVar4 = *(void **)(param_1 + 0x22);
            *(int *)(param_1 + 4) = (int)pvVar4 + (-0xc - *(int *)(param_1 + 8));
          }
LAB_00016d60:
          memcpy(pvVar4,puVar5,0x18);
          iVar8 = *(int *)(param_1 + 0x22) + 0x18;
LAB_00016e92:
          *(int *)(param_1 + 0x22) = iVar8;
          goto LAB_00016eba;
        }
        *param_1 = uVar3;
        *(undefined4 *)(param_1 + 2) = 3;
        param_1[1] = 1;
        uVar7 = (uint)*(byte *)(param_1 + 0x7a);
      }
      else {
        if (param_2 == 0x10f) {
          *param_1 = uVar3;
          param_1[1] = 2;
          pvVar4 = *(void **)(param_1 + 0x22);
          *(undefined4 *)(param_1 + 2) = 0x40;
          pvVar6 = *(void **)(param_1 + 0x2a);
          *(int *)(param_1 + 4) = (int)pvVar4 + (-0xc - *(int *)(param_1 + 8));
LAB_00016b3c:
          memcpy(pvVar4,pvVar6,0x40);
          iVar8 = *(int *)(param_1 + 0x22) + 0x40;
          goto LAB_00016e92;
        }
        if (param_2 < 0x110) {
          if (param_2 == 0x103) {
            param_1[1] = 3;
            uVar7 = 6;
            *param_1 = uVar3;
            *(undefined4 *)(param_1 + 2) = 1;
          }
          else {
            if (0x103 < param_2) {
              if (param_2 == 0x10d) {
                *param_1 = uVar3;
                pvVar4 = *(void **)(param_1 + 0x22);
                param_1[1] = 2;
                *(undefined4 *)(param_1 + 2) = 0x80;
                pvVar6 = *(void **)(param_1 + 0x54);
                *(int *)(param_1 + 4) = (int)pvVar4 + (-0xc - *(int *)(param_1 + 8));
              }
              else {
                if (param_2 != 0x10e) {
                  return;
                }
                param_1[1] = 2;
                pvVar4 = *(void **)(param_1 + 0x22);
                *param_1 = 0x10e;
                pvVar6 = *(void **)(param_1 + 0x56);
                *(undefined4 *)(param_1 + 2) = 0x80;
                *(int *)(param_1 + 4) = (int)pvVar4 + (-0xc - *(int *)(param_1 + 8));
              }
LAB_00016e4e:
              memcpy(pvVar4,pvVar6,0x80);
              iVar8 = *(int *)(param_1 + 0x22) + 0x80;
              goto LAB_00016e92;
            }
            if (param_2 != 0x101) {
              return;
            }
            param_1[1] = 4;
            *param_1 = uVar3;
            *(undefined4 *)(param_1 + 2) = 1;
            uVar7 = *(uint *)(param_1 + 0x1e);
          }
        }
        else {
          if (param_2 != 0x112) {
            if (0x112 < param_2) {
              if (param_2 != 0x132) {
                if (param_2 != 0x201) {
                  return;
                }
                *param_1 = 0x201;
                param_1[1] = 4;
                *(undefined4 *)(param_1 + 2) = 1;
                *(undefined4 *)(param_1 + 4) = 0;
                *(int *)(param_1 + 0x14) = *(int *)(param_1 + 10) + 8;
                goto LAB_00016eba;
              }
              *param_1 = uVar3;
              pvVar4 = *(void **)(param_1 + 0x22);
              param_1[1] = 2;
              *(undefined4 *)(param_1 + 2) = 0x14;
              pvVar6 = *(void **)(param_1 + 0x28);
              *(int *)(param_1 + 4) = (int)pvVar4 + (-0xc - *(int *)(param_1 + 8));
              goto LAB_00016e8a;
            }
            if (param_2 != 0x110) {
              return;
            }
            *param_1 = uVar3;
            pvVar4 = *(void **)(param_1 + 0x22);
            param_1[1] = 2;
            pvVar6 = *(void **)(param_1 + 0x2c);
            *(undefined4 *)(param_1 + 2) = 0x40;
            *(int *)(param_1 + 4) = (int)pvVar4 + (-0xc - *(int *)(param_1 + 8));
            goto LAB_00016b3c;
          }
          *param_1 = uVar3;
          param_1[1] = 3;
          *(undefined4 *)(param_1 + 2) = 1;
          uVar7 = *(uint *)(param_1 + 0x26);
        }
      }
    }
  }
  else {
    if (param_2 == 0x9204) {
      *param_1 = uVar3;
      param_1[1] = 10;
      *(undefined4 *)(param_1 + 2) = 1;
      pvVar4 = *(void **)(param_1 + 0x22);
      puVar5 = param_1 + 0x40;
      *(int *)(param_1 + 4) = (int)pvVar4 + (-0xc - *(int *)(param_1 + 8));
      goto LAB_00016ba8;
    }
    if (param_2 < 0x9205) {
      if (param_2 != 0x8827) {
        if (param_2 < 0x8828) {
          if (param_2 == 0x829d) {
            *param_1 = uVar3;
            param_1[1] = 5;
            pvVar4 = *(void **)(param_1 + 0x22);
            *(undefined4 *)(param_1 + 2) = 1;
            puVar5 = param_1 + 0x32;
            *(int *)(param_1 + 4) = (int)pvVar4 + (-0xc - *(int *)(param_1 + 8));
          }
          else {
            if (0x829d < param_2) {
              if (param_2 == 0x8769) {
                *param_1 = uVar3;
                param_1[1] = 4;
                *(undefined4 *)(param_1 + 2) = 1;
                *(undefined4 *)(param_1 + 4) = 0;
                *(int *)(param_1 + 0xe) = *(int *)(param_1 + 10) + 8;
              }
              else {
                if (param_2 != 0x8825) {
                  return;
                }
                *param_1 = 0x8825;
                param_1[1] = 4;
                *(undefined4 *)(param_1 + 2) = 1;
                *(undefined4 *)(param_1 + 4) = 0;
                *(int *)(param_1 + 0xc) = *(int *)(param_1 + 10) + 8;
              }
              goto LAB_00016eba;
            }
            if (param_2 != 0x829a) {
              return;
            }
            *param_1 = uVar3;
            param_1[1] = 5;
            pvVar4 = *(void **)(param_1 + 0x22);
            *(undefined4 *)(param_1 + 2) = 1;
            puVar5 = param_1 + 0x2e;
            *(int *)(param_1 + 4) = (int)pvVar4 + (-0xc - *(int *)(param_1 + 8));
          }
LAB_00016ba8:
          memcpy(pvVar4,puVar5,8);
          iVar8 = *(int *)(param_1 + 0x22) + 8;
        }
        else {
          if (param_2 == 0x9004) {
            *param_1 = uVar3;
            param_1[1] = 2;
            *(undefined4 *)(param_1 + 2) = 0x14;
            pvVar4 = *(void **)(param_1 + 0x22);
            pvVar6 = *(void **)(param_1 + 0x5a);
            *(int *)(param_1 + 4) = (int)pvVar4 + (-0xc - *(int *)(param_1 + 8));
          }
          else {
            if (0x9004 < param_2) {
              if (param_2 == 0x9201) {
                *param_1 = uVar3;
                param_1[1] = 10;
                puVar5 = param_1 + 0x38;
                *(undefined4 *)(param_1 + 2) = 1;
                pvVar4 = *(void **)(param_1 + 0x22);
                *(int *)(param_1 + 4) = (int)pvVar4 + (-0xc - *(int *)(param_1 + 8));
              }
              else {
                if (param_2 != 0x9203) {
                  return;
                }
                *param_1 = 0x9203;
                param_1[1] = 10;
                puVar5 = param_1 + 0x3c;
                *(undefined4 *)(param_1 + 2) = 1;
                pvVar4 = *(void **)(param_1 + 0x22);
                *(int *)(param_1 + 4) = (int)pvVar4 + (-0xc - *(int *)(param_1 + 8));
              }
              goto LAB_00016ba8;
            }
            if (param_2 != 0x9003) {
              return;
            }
            *param_1 = uVar3;
            param_1[1] = 2;
            pvVar4 = *(void **)(param_1 + 0x22);
            *(undefined4 *)(param_1 + 2) = 0x14;
            pvVar6 = *(void **)(param_1 + 0x58);
            *(int *)(param_1 + 4) = (int)pvVar4 + (-0xc - *(int *)(param_1 + 8));
          }
LAB_00016e8a:
          memcpy(pvVar4,pvVar6,0x14);
          iVar8 = *(int *)(param_1 + 0x22) + 0x14;
        }
        goto LAB_00016e92;
      }
      *param_1 = uVar3;
      *(undefined4 *)(param_1 + 2) = 1;
      uVar7 = SEXT24((short)param_1[0x36]);
      param_1[1] = 3;
    }
    else {
      if (param_2 == 0xa003) {
        uVar7 = (uint)(ushort)param_1[0x5d];
        *param_1 = uVar3;
        param_1[1] = 3;
        *(undefined4 *)(param_1 + 2) = 1;
      }
      else {
        if (param_2 < 0xa004) {
          if (param_2 == 0x9209) {
            *param_1 = uVar3;
            param_1[1] = 3;
            *(undefined4 *)(param_1 + 2) = 1;
            uVar7 = SEXT24((short)param_1[0x45]);
          }
          else {
            if (param_2 < 0x920a) {
              if (param_2 != 0x9207) {
                return;
              }
              *param_1 = uVar3;
              *(undefined4 *)(param_1 + 2) = 1;
              uVar7 = SEXT24((short)param_1[0x44]);
              param_1[1] = 3;
            }
            else {
              if (param_2 == 0x920a) {
                *param_1 = uVar3;
                *(undefined4 *)(param_1 + 2) = 1;
                pvVar4 = *(void **)(param_1 + 0x22);
                param_1[1] = 5;
                puVar5 = param_1 + 0x46;
                *(int *)(param_1 + 4) = (int)pvVar4 + (-0xc - *(int *)(param_1 + 8));
                goto LAB_00016ba8;
              }
              if (param_2 != 0xa002) {
                return;
              }
              param_1[1] = 3;
              *param_1 = 0xa002;
              *(undefined4 *)(param_1 + 2) = 1;
              uVar7 = (uint)(ushort)param_1[0x5c];
            }
          }
        }
        else {
          if (param_2 == 0xa404) {
            *param_1 = uVar3;
            *(undefined4 *)(param_1 + 2) = 1;
            pvVar4 = *(void **)(param_1 + 0x22);
            param_1[1] = 5;
            puVar5 = param_1 + 0x4a;
            *(int *)(param_1 + 4) = (int)pvVar4 + (-0xc - *(int *)(param_1 + 8));
            goto LAB_00016ba8;
          }
          if (param_2 < 0xa405) {
            if (param_2 == 0xa402) {
              *param_1 = uVar3;
              *(undefined4 *)(param_1 + 2) = 1;
              uVar7 = SEXT24((short)param_1[0x4f]);
              param_1[1] = 3;
            }
            else {
              if (param_2 != 0xa403) {
                return;
              }
              *param_1 = 0xa403;
              param_1[1] = 3;
              *(undefined4 *)(param_1 + 2) = 1;
              uVar7 = SEXT24((short)param_1[0x4e]);
            }
          }
          else {
            if (param_2 != 0xa405) {
              if (param_2 != 0xa431) {
                return;
              }
              param_1[1] = 2;
              pvVar4 = *(void **)(param_1 + 0x22);
              *param_1 = 0xa431;
              *(undefined4 *)(param_1 + 2) = 0x80;
              pvVar6 = *(void **)(param_1 + 0x52);
              *(int *)(param_1 + 4) = (int)pvVar4 + (-0xc - *(int *)(param_1 + 8));
              goto LAB_00016e4e;
            }
            *param_1 = uVar3;
            *(undefined4 *)(param_1 + 2) = 1;
            uVar7 = SEXT24((short)param_1[0x50]);
            param_1[1] = 3;
          }
        }
      }
    }
  }
LAB_00016eb8:
  *(uint *)(param_1 + 4) = uVar7;
LAB_00016eba:
  write_exif_element_struct(param_1);
  return;
}



void * InitExif(undefined4 param_1)

{
  void *__s;
  void *__s_00;
  
  __s = malloc(300);
  if (__s != (void *)0x0) {
    memset(__s,0,300);
    __s_00 = malloc(0x400);
    *(void **)((int)__s + 0xc) = __s_00;
    if (__s_00 == (void *)0x0) {
      free(__s);
      __s = __s_00;
    }
    else {
      memset(__s_00,0,0x400);
      *(void **)((int)__s + 0x50) = __s_00;
      *(int *)((int)__s + 0x54) = (int)__s_00 + 0x18;
      *(int *)((int)__s + 0x58) = (int)__s_00 + 0x58;
      *(int *)((int)__s + 0x124) = (int)__s_00 + 0x98;
      *(int *)((int)__s + 0xa4) = (int)__s_00 + 0x100;
      *(int *)((int)__s + 0xa8) = (int)__s_00 + 0x180;
      *(int *)((int)__s + 0xac) = (int)__s_00 + 0x200;
      *(int *)((int)__s + 0xb0) = (int)__s_00 + 0x280;
      *(int *)((int)__s + 0xb4) = (int)__s_00 + 0x298;
      *(undefined4 *)((int)__s + 0x10) = param_1;
      *(undefined4 *)((int)__s + 0x14) = param_1;
    }
  }
  return __s;
}



void UnInitExif(void *param_1)

{
  free(param_1);
  return;
}



undefined4 set_exif_info(int param_1,char *param_2)

{
  short sVar1;
  undefined4 uVar2;
  size_t sVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 in_stack_ffffff90;
  undefined4 in_stack_ffffff94;
  tm local_64;
  
  iVar4 = *(int *)(param_2 + 0xa8);
  if (iVar4 == 0x5a) {
    uVar5 = 6;
  }
  else {
    if (iVar4 < 0x5b) {
      if (iVar4 != 0) {
LAB_00016f88:
        *(undefined4 *)(param_1 + 0x4c) = 1;
        in_stack_ffffff90 = 0x36e;
        in_stack_ffffff94 = *(undefined4 *)(param_2 + 0xa8);
        __android_log_print(5,"awplayer","<%s:%u>: pExifInfo->Orientation %d ,error","set_exif_info"
                           );
        goto LAB_00016fb0;
      }
      uVar5 = 1;
    }
    else {
      if (iVar4 == 0xb4) {
        uVar5 = 3;
      }
      else {
        if (iVar4 != 0x10e) goto LAB_00016f88;
        uVar5 = 8;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
LAB_00016fb0:
  pcVar6 = param_2 + 0x80;
  strcpy(*(char **)(param_1 + 0x54),param_2);
  strcpy(*(char **)(param_1 + 0x58),param_2 + 0x40);
  strcpy(*(char **)(param_1 + 0x50),pcVar6);
  strcpy(*(char **)(param_1 + 0xa4),param_2 + 0x170);
  *(undefined2 *)(param_1 + 0xa0) = *(undefined2 *)(param_2 + 0x1f0);
  strcpy(*(char **)(param_1 + 0xa8),param_2 + 0x1f2);
  strcpy(*(char **)(param_1 + 0xac),param_2 + 0x272);
  *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(param_2 + 0x2f2);
  *(undefined2 *)(param_1 + 0xba) = *(undefined2 *)(param_2 + 0x2f4);
  strcpy(*(char **)(param_1 + 0xb0),pcVar6);
  strcpy(*(char **)(param_1 + 0xb4),pcVar6);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x9c);
  memcpy((void *)(param_1 + 0x5c),param_2 + 0xac,8);
  memcpy((void *)(param_1 + 100),param_2 + 0xb4,8);
  sVar1 = *(short *)(param_2 + 0xbc);
  *(short *)(param_1 + 0x6c) = sVar1;
  if (*(int *)(param_1 + 0x5c) == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 5;
    *(undefined4 *)(param_1 + 0x60) = 1000;
  }
  if ((*(int *)(param_1 + 100) == 0) || (*(int *)(param_1 + 0x68) == 0)) {
    *(undefined4 *)(param_1 + 100) = 0x16;
    *(undefined4 *)(param_1 + 0x68) = 10;
  }
  if ((*(int *)(param_1 + 0x5c) == 0) || (*(int *)(param_1 + 0x60) == 0)) {
    *(undefined4 *)(param_1 + 0x5c) = 1000;
  }
  if (sVar1 == 0) {
    *(undefined2 *)(param_1 + 0x6c) = 100;
  }
  uVar5 = SUB84((double)(ulonglong)*(uint *)(param_1 + 100) /
                (double)(ulonglong)*(uint *)(param_1 + 0x68),0);
  log((double)CONCAT44(in_stack_ffffff94,in_stack_ffffff90));
  dVar9 = (double)(ulonglong)*(uint *)(param_1 + 0x5c) /
          (double)(ulonglong)*(uint *)(param_1 + 0x60);
  uVar2 = SUB84(dVar9,0);
  if (dVar9 < 1.0) {
    log((double)CONCAT44(in_stack_ffffff94,in_stack_ffffff90));
    dVar9 = (double)CONCAT44(extraout_r1_01,uVar2) / 0.6931471805599453 - 0.5;
  }
  else {
    log((double)CONCAT44(in_stack_ffffff94,in_stack_ffffff90));
    dVar9 = (double)CONCAT44(extraout_r1_00,uVar2) / 0.6931471805599453 + 0.5;
  }
  uVar2 = SUB84((double)(longlong)(int)*(short *)(param_1 + 0x6c) / 3.125,0);
  log((double)CONCAT44(in_stack_ffffff94,in_stack_ffffff90));
  *(undefined4 *)(param_1 + 0x74) = 100;
  *(undefined4 *)(param_1 + 0x7c) = 100;
  *(int *)(param_1 + 0x70) = SUB84(ROUND((0.0 - dVar9) * 100.0),0);
  *(int *)(param_1 + 0x78) =
       SUB84(ROUND((((((double)CONCAT44(extraout_r1,uVar5) / 0.6931471805599453) * 200.0 + 0.5) /
                     100.0 + (0.0 - dVar9)) -
                   ((double)CONCAT44(extraout_r1_02,uVar2) / 0.6931471805599453 + 0.5)) * 100.0),0);
  memcpy((void *)(param_1 + 0x80),param_2 + 200,8);
  *(undefined2 *)(param_1 + 0x88) = *(undefined2 *)(param_2 + 0xd0);
  *(undefined2 *)(param_1 + 0x8a) = *(undefined2 *)(param_2 + 0xd2);
  memcpy((void *)(param_1 + 0x8c),param_2 + 0xd4,8);
  memcpy((void *)(param_1 + 0x94),param_2 + 0xdc,8);
  *(undefined2 *)(param_1 + 0x9c) = *(undefined2 *)(param_2 + 0xe4);
  *(undefined2 *)(param_1 + 0x9e) = *(undefined2 *)(param_2 + 0xe6);
  if (*(int *)(param_2 + 0xe8) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0xe8);
    if (*(double *)(param_2 + 0xf0) < 0.0) {
      pcVar6 = "S";
    }
    else {
      pcVar6 = "N";
    }
    strcpy((char *)(param_1 + 0xbc),pcVar6);
    if (*(double *)(param_2 + 0xf8) < 0.0) {
      pcVar6 = "W";
    }
    else {
      pcVar6 = "E";
    }
    strcpy((char *)(param_1 + 0xd8),pcVar6);
    *(bool *)(param_1 + 0xf4) = *(double *)(param_2 + 0x100) < 0.0;
    dVar9 = *(double *)(param_2 + 0xf0);
    dVar7 = *(double *)(param_2 + 0xf8);
    dVar8 = *(double *)(param_2 + 0x100);
    if (dVar9 < 0.0) {
      dVar9 = 0.0 - dVar9;
    }
    *(undefined4 *)(param_1 + 0xcc) = 10000000;
    *(undefined4 *)(param_1 + 0xd4) = 10000000;
    *(undefined4 *)(param_1 + 0xe8) = 10000000;
    *(undefined4 *)(param_1 + 0xf0) = 10000000;
    *(int *)(param_1 + 0xc0) = SUB84(ROUND(dVar9),0);
    dVar9 = (dVar9 - (double)((ulonglong)ROUND(dVar9) & 0xffffffff)) * 60.0;
    iVar4 = SUB84(ROUND(dVar9 * 10000000.0),0);
    *(int *)(param_1 + 200) = iVar4;
    if (dVar7 < 0.0) {
      dVar7 = 0.0 - dVar7;
    }
    if (dVar8 < 0.0) {
      dVar8 = 0.0 - dVar8;
    }
    *(undefined4 *)(param_1 + 0xc4) = 1;
    *(undefined4 *)(param_1 + 0xe0) = 1;
    *(undefined4 *)(param_1 + 0xfc) = 100;
    *(int *)(param_1 + 0xd0) =
         SUB84(ROUND((dVar9 - (double)(ulonglong)(uint)(iVar4 * 0x3c)) * 10000000.0),0);
    *(int *)(param_1 + 0xdc) = SUB84(ROUND(dVar7),0);
    dVar9 = (dVar7 - (double)((ulonglong)ROUND(dVar7) & 0xffffffff)) * 60.0 * 10000000.0;
    iVar4 = SUB84(ROUND(dVar9),0);
    *(int *)(param_1 + 0xe4) = iVar4;
    *(int *)(param_1 + 0xec) = SUB84(ROUND(dVar9 - (double)(ulonglong)(uint)(iVar4 * 0x3c)),0);
    *(int *)(param_1 + 0xf8) = SUB84(ROUND(dVar8 * 100.0),0);
    gmtime_r((time_t *)(param_2 + 0x108),&local_64);
    *(int *)(param_1 + 0x100) = local_64.tm_hour;
    *(int *)(param_1 + 0x108) = local_64.tm_min;
    *(undefined4 *)(param_1 + 0x104) = 1;
    *(undefined4 *)(param_1 + 0x10c) = 1;
    *(int *)(param_1 + 0x110) = local_64.tm_sec;
    *(undefined4 *)(param_1 + 0x114) = 1;
    snprintf((char *)(param_1 + 0x118),0xb,"%04d:%02d:%02d",local_64.tm_year + 0x76c,
             local_64.tm_mon + 1,local_64.tm_mday);
    memcpy(*(void **)(param_1 + 0x124),"ASCII",8);
    sVar3 = strlen(param_2 + 0x10c);
    memcpy((void *)(*(int *)(param_1 + 0x124) + 8),param_2 + 0x10c,sVar3 + 1);
    *(size_t *)(param_1 + 0x128) = sVar3 + 9;
  }
  return 0;
}



void write_APP1_marker_and_TIFF_header(int param_1)

{
  undefined *puVar1;
  
  writer_exif_marker(param_1,0xd8);
  writer_exif_marker(param_1,0xe1);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x14);
  FUN_000168f4(param_1,0);
  puVar1 = *(undefined **)(param_1 + 0x14);
  *puVar1 = 0x45;
  puVar1[1] = 0x78;
  puVar1[2] = 0x69;
  puVar1[3] = 0x66;
  *(undefined **)(param_1 + 0x14) = puVar1 + 4;
  FUN_000168f4(param_1,0);
  puVar1 = *(undefined **)(param_1 + 0x14);
  *puVar1 = 0x49;
  puVar1[1] = 0x49;
  *(undefined **)(param_1 + 0x14) = puVar1 + 2;
  FUN_000168f4(param_1,0x2a);
  FUN_00016902(param_1,8);
  return;
}



void write_0th_IFD(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x48) == 0) {
    iVar1 = 7;
  }
  else {
    iVar1 = 8;
  }
  FUN_000168f4(param_1,(short)iVar1,param_3,param_4,param_4);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x14) + iVar1 * 0xc;
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x14) + iVar1 * 0xc + 4;
  write_exif_element(param_1,0x112);
  write_exif_element(param_1,0x132);
  write_exif_element(param_1,0x10f);
  write_exif_element(param_1,0x110);
  write_exif_element(param_1,0x8769);
  if (*(int *)(param_1 + 0x48) != 0) {
    write_exif_element(param_1,0x8825);
  }
  write_exif_element(param_1,0x10d);
  write_exif_element(param_1,0x10e);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x44);
  return;
}



void write_exif_IFD(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = *(undefined **)(param_1 + 0x1c);
  iVar2 = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) + -0xc;
  *puVar1 = (char)iVar2;
  puVar1[1] = (char)((uint)iVar2 >> 8);
  puVar1[2] = (char)((uint)iVar2 >> 0x10);
  puVar1[3] = (char)((uint)iVar2 >> 0x18);
  FUN_000168f4(param_1,0x12);
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x14) + 0xdc;
  memset((void *)(*(int *)(param_1 + 0x14) + 0xd8),0,4);
  write_exif_element(param_1,0x829a);
  write_exif_element(param_1,0x829d);
  write_exif_element(param_1,0x8827);
  write_exif_element(param_1,0x9201);
  write_exif_element(param_1,0x9203);
  write_exif_element(param_1,0x9204);
  write_exif_element(param_1,0x9207);
  write_exif_element(param_1,0x9209);
  write_exif_element(param_1,0x920a);
  write_exif_element(param_1,0xa402);
  write_exif_element(param_1,0xa403);
  write_exif_element(param_1,0xa404);
  write_exif_element(param_1,0xa405);
  write_exif_element(param_1,0xa431);
  write_exif_element(param_1,0x9003);
  write_exif_element(param_1,0x9004);
  write_exif_element(param_1,0xa002);
  write_exif_element(param_1,0xa003);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x44);
  return;
}



void write_gps_IFD(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  void *__s;
  uint uVar2;
  int iVar3;
  size_t __n;
  
  iVar3 = *(int *)(param_1 + 0x14);
  puVar1 = *(undefined **)(param_1 + 0x18);
  uVar2 = (iVar3 - *(int *)(param_1 + 0x10)) - 0xc;
  *puVar1 = (char)uVar2;
  puVar1[1] = (char)(uVar2 >> 8);
  puVar1[2] = (char)(uVar2 >> 0x10);
  puVar1[3] = (char)(uVar2 >> 0x18);
  FUN_000168f4(param_1,9,uVar2 >> 0x18,uVar2,param_4);
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x14) + 0x70;
  memset((void *)(*(int *)(param_1 + 0x14) + 0x6c),0,4);
  write_exif_element(param_1,1);
  write_exif_element(param_1,2);
  write_exif_element(param_1,3);
  write_exif_element(param_1,4);
  write_exif_element(param_1,5);
  write_exif_element(param_1,6);
  write_exif_element(param_1,7);
  write_exif_element(param_1,0x1d);
  write_exif_element(param_1,0x1b);
  __s = *(void **)(param_1 + 0x44);
  uVar2 = (uint)((int)__s - iVar3) & 3;
  *(void **)(param_1 + 0x14) = __s;
  if (uVar2 != 0) {
    __n = 4 - uVar2;
    memset(__s,0,__n);
    *(size_t *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + __n;
  }
  return;
}



void write_1st_IFD(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  void *__s;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  void *pvVar5;
  
  puVar1 = *(undefined **)(param_1 + 0x20);
  uVar4 = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) - 0xc;
  puVar1[2] = (char)(uVar4 >> 0x10);
  *puVar1 = (char)uVar4;
  puVar1[1] = (char)(uVar4 >> 8);
  puVar1[3] = (char)(uVar4 >> 0x18);
  FUN_000168f4(param_1,5,uVar4 >> 0x18,uVar4 >> 0x10,param_4);
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x14) + 0x40;
  memset((void *)(*(int *)(param_1 + 0x14) + 0x3c),0,4);
  write_exif_element(param_1,0x103);
  write_exif_element(param_1,0x100);
  write_exif_element(param_1,0x101);
  write_exif_element(param_1,0x201);
  write_exif_element(param_1,0x202);
  __s = *(void **)(param_1 + 0x44);
  pvVar3 = (void *)((int)__s - *(int *)(param_1 + 0x10));
  *(void **)(param_1 + 0x14) = __s;
  pvVar5 = (void *)((int)pvVar3 + 0x1fU & 0xffffffe0);
  if (pvVar5 != pvVar3) {
    pvVar5 = (void *)((int)pvVar5 - (int)pvVar3);
    memset(__s,0,(size_t)pvVar5);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + (int)pvVar5;
  }
  iVar2 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  puVar1 = *(undefined **)(param_1 + 0x28);
  *(int *)(param_1 + 0x30) = iVar2;
  iVar2 = iVar2 + -0xc;
  puVar1[1] = (char)((uint)iVar2 >> 8);
  *puVar1 = (char)iVar2;
  puVar1[2] = (char)((uint)iVar2 >> 0x10);
  puVar1[3] = (char)((uint)iVar2 >> 0x18);
  return;
}



undefined4 WriteExifInfo(int param_1,undefined4 param_2,int param_3)

{
  set_exif_info();
  write_APP1_marker_and_TIFF_header(param_1);
  write_0th_IFD(param_1);
  write_exif_IFD(param_1);
  if (*(int *)(param_1 + 0x48) != 0) {
    write_gps_IFD(param_1);
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  if (param_3 != 0) {
    write_1st_IFD(param_1);
  }
  return 0;
}



undefined4 GetThumbNailOffset(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



undefined4 SetThumbNailSize(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  puVar1 = *(undefined **)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x34) = param_2;
  *puVar1 = (char)param_2;
  puVar1[1] = (char)((uint)*(undefined4 *)(param_1 + 0x34) >> 8);
  puVar1[2] = (char)*(undefined2 *)(param_1 + 0x36);
  puVar1[3] = *(undefined *)(param_1 + 0x37);
  return 0;
}



undefined4 SetAPP1Size(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(char *)(iVar1 + 4) = (char)((uint)param_2 >> 8);
  *(char *)(iVar1 + 5) = (char)param_2;
  return 0;
}



void FUN_00017744(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00015b24(param_1,(param_2 << 0x10) >> 0x18);
  FUN_00015b24(param_1,param_2 & 0xff,param_3,param_4);
  return;
}



void emit_dqt(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  int iVar2;
  
  FUN_00015b24(param_1,0xff,param_3,param_4,param_4);
  FUN_00015b24(param_1,0xdb);
  iVar2 = 0;
  FUN_00017744(param_1,0x43);
  FUN_00015b24(param_1,param_2);
  do {
    pbVar1 = jpeg_natural_order + iVar2;
    iVar2 = iVar2 + 1;
    FUN_00015b24(param_1,*(undefined *)(param_1 + (param_2 * 0x80 + (uint)*pbVar1 + 0x3c) * 2));
  } while (iVar2 != 0x40);
  return;
}



void emit_sof(int param_1)

{
  undefined4 uVar1;
  
  FUN_00015b24(param_1,0xff);
  FUN_00015b24(param_1,0xc0);
  FUN_00017744(param_1,0x11);
  FUN_00015b24(param_1,8);
  FUN_00017744(param_1,*(undefined4 *)(param_1 + 0x40));
  FUN_00017744(param_1,*(undefined4 *)(param_1 + 0x3c));
  FUN_00015b24(param_1,3);
  FUN_00015b24(param_1,1);
  uVar1 = 0x21;
  if (1 < *(int *)(param_1 + 0x38) - 4U) {
    uVar1 = 0x22;
  }
  FUN_00015b24(param_1,uVar1);
  FUN_00015b24(param_1,0);
  FUN_00015b24(param_1,2);
  FUN_00015b24(param_1,0x11);
  FUN_00015b24(param_1,1);
  FUN_00015b24(param_1,3);
  FUN_00015b24(param_1,0x11);
  FUN_00015b24(param_1,1);
  return;
}



void emit_sos(undefined4 param_1)

{
  FUN_00015b24(param_1,0xff);
  FUN_00015b24(param_1,0xda);
  FUN_00017744(param_1,0xc);
  FUN_00015b24(param_1,3);
  FUN_00015b24(param_1,1);
  FUN_00015b24(param_1,0);
  FUN_00015b24(param_1,2);
  FUN_00015b24(param_1,0x11);
  FUN_00015b24(param_1,3);
  FUN_00015b24(param_1,0x11);
  FUN_00015b24(param_1,0);
  FUN_00015b24(param_1,0x3f);
  FUN_00015b24(param_1,0);
  return;
}



void jpeg_set_quant_tbl(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  
  if (param_2 < 1) {
    param_2 = 1;
LAB_000178be:
    iVar7 = __aeabi_idiv(5000,param_2,param_3,param_4,param_4);
  }
  else {
    if (param_2 < 0x65) {
      if (param_2 < 0x32) goto LAB_000178be;
    }
    else {
      param_2 = 100;
    }
    iVar7 = (100 - param_2) * 2;
  }
  iVar6 = 0;
  puVar8 = (undefined2 *)(param_1 + 0x78);
  do {
    iVar3 = __aeabi_idiv(iVar7 * (uint)(byte)(&DAT_00024f81)[iVar6] + 0x32,100);
    if (iVar3 == 0) {
      uVar2 = 1;
    }
    else {
      if (0xfe < iVar3) {
        iVar3 = 0xff;
      }
      uVar2 = (undefined2)iVar3;
    }
    iVar6 = iVar6 + 1;
    *puVar8 = uVar2;
    puVar8 = puVar8 + 1;
  } while (iVar6 != 0x40);
  iVar6 = 0;
  puVar8 = (undefined2 *)(param_1 + 0x178);
  do {
    iVar3 = __aeabi_idiv(iVar7 * (uint)(byte)(&DAT_00024f41)[iVar6] + 0x32,100);
    if (iVar3 == 0) {
      uVar2 = 1;
    }
    else {
      if (0xfe < iVar3) {
        iVar3 = 0xff;
      }
      uVar2 = (undefined2)iVar3;
    }
    iVar6 = iVar6 + 1;
    *puVar8 = uVar2;
    puVar8 = puVar8 + 1;
  } while (iVar6 != 0x40);
  iVar7 = 0;
  do {
    iVar3 = 0;
    iVar6 = iVar3;
    do {
      iVar4 = param_1 + iVar3;
      iVar3 = iVar3 + 2;
      uVar1 = *(ushort *)(iVar4 + 0x78);
      iVar4 = __aeabi_idiv(0x10000,uVar1);
      iVar5 = param_1 + iVar6;
      iVar6 = iVar6 + 4;
      *(ushort *)(iVar5 + 0x27a) = uVar1 >> 1;
      iVar4 = iVar4 + 1;
      if (0xfffe < iVar4) {
        iVar4 = 0xffff;
      }
      *(short *)(iVar5 + 0x278) = (short)iVar4;
    } while (iVar3 != 0x80);
    iVar7 = iVar7 + 1;
    param_1 = param_1 + 0x100;
  } while (iVar7 != 2);
  return;
}



undefined4 H264SetParameter(int param_1,int param_2,int *param_3)

{
  void *__dest;
  uint uVar1;
  undefined4 uVar2;
  size_t __n;
  char *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (param_2 == 0xf) {
    *(int *)(param_1 + 0xed8) = *param_3;
    return 0;
  }
  if (param_2 < 0x10) {
    if (param_2 == 6) {
      *(undefined4 *)(param_1 + 0x1ac) = 1;
      return 0;
    }
    if (param_2 < 7) {
      if (param_2 == 2) {
        *(int *)(param_1 + 0x1b0) = *param_3;
        return 0;
      }
      if (2 < param_2) {
        iVar5 = *param_3;
        if (param_2 == 4) {
          *(int *)(param_1 + 0x68) = iVar5;
          return 0;
        }
        if (param_2 < 5) {
          *(int *)(param_1 + 0xd80) = iVar5;
          return 0;
        }
        *(int *)(param_1 + 0xe40) = iVar5;
        return 0;
      }
      if (param_2 == 0) {
        *(int *)(param_1 + 0x1b8) = *param_3;
        return 0;
      }
      if (param_2 == 1) {
        *(int *)(param_1 + 0x1bc) = *param_3 * 1000;
        return 0;
      }
    }
    else {
      if (param_2 == 10) {
        if (*(int *)(param_1 + 0xeb0) != 0) {
          *(int *)(param_1 + 0xed4) = *param_3;
          return 0;
        }
        uVar7 = 0xa48;
LAB_00017b92:
        pcVar3 = 
        "<%s:%u>: \x1b[40;31merror: the ic %04x do not support to config color_space....\n\x1b[0m";
        param_2 = *(int *)(param_1 + 8);
        uVar2 = 6;
        goto LAB_00017caa;
      }
      if (param_2 < 0xb) {
        if (param_2 == 7) {
          __dest = (void *)(param_1 + 0xd38);
          goto LAB_00017bdc;
        }
        if (param_2 == 9) {
          if (*(int *)(param_1 + 0xeb0) != 0) {
            *(int *)(param_1 + 0xed0) = *param_3;
            return 0;
          }
          uVar7 = 0xa38;
          goto LAB_00017b92;
        }
      }
      else {
        if (param_2 == 0xc) {
          *(int *)(param_1 + 100) = *param_3;
          return 0;
        }
        if (param_2 < 0xc) {
          uVar1 = param_3[1];
          if (3 < uVar1) {
            __android_log_print(6,"awplayer",&DAT_000240e0,"H264SetParameter",0xa58,uVar1);
            return 0;
          }
          __n = 0x1c;
          __dest = (void *)(uVar1 * 0x1c + param_1 + 0x11c);
          goto LAB_00017c6c;
        }
        if (param_2 == 0xd) {
          *(int *)(param_1 + 0x40) = *param_3;
          return 0;
        }
      }
    }
  }
  else {
    if (param_2 == 0x103) {
      __dest = (void *)(param_1 + 0xe50);
LAB_00017bdc:
      __n = 8;
      goto LAB_00017c6c;
    }
    if (param_2 < 0x104) {
      if (param_2 == 0x15) {
        iVar5 = *param_3;
        *(int *)(param_1 + 0x6ec) = iVar5;
        *(int *)(param_1 + 0x6f0) = param_3[1];
        *(int *)(param_1 + 0x1c4) = param_3[8];
        *(int *)(param_1 + 0x1bc) = param_3[5] * 1000;
        *(int *)(param_1 + 0x1b8) = param_3[6];
        *(int *)(param_1 + 0x1b0) = param_3[7];
        *(int *)(param_1 + 0x1d0) = param_3[4];
        *(int *)(param_1 + 0x1cc) = param_3[3];
        if ((iVar5 == 0x42) || (param_3[2] == 0)) {
          *(undefined *)(param_1 + 0x6fd) = 0;
          return 0;
        }
LAB_00017afc:
        *(undefined *)(param_1 + 0x6fd) = 1;
        return 0;
      }
      if (param_2 < 0x16) {
        if (param_2 == 0x11) {
          __dest = (void *)(param_1 + 0xee0);
          goto LAB_00017c6a;
        }
        if (param_2 == 0x12) {
          iVar5 = *param_3;
          *(int *)(param_1 + 0xf04) = iVar5;
          if (iVar5 == 0) {
            return 0;
          }
          cVar4 = *(char *)(param_1 + 0x711);
          if (*(int *)(param_1 + 0xf1c) != 0) {
            cVar4 = cVar4 << 1;
          }
          goto LAB_00017acc;
        }
      }
      else {
        if (param_2 == 0x101) {
          *(int *)(param_1 + 0x6ec) = *param_3;
          *(int *)(param_1 + 0x6f0) = param_3[1];
          return 0;
        }
        if (0x101 < param_2) {
          uVar1 = *(int *)(param_1 + 0x6ec) - 0x42;
          if (uVar1 != 0) {
            uVar1 = 1;
          }
          if (*param_3 == 0) {
            uVar1 = 0;
          }
          else {
            uVar1 = uVar1 & 1;
          }
          if (uVar1 == 0) {
            *(undefined *)(param_1 + 0x6fd) = 0;
            return 0;
          }
          goto LAB_00017afc;
        }
        if (param_2 == 0x100) {
          *(int *)(param_1 + 0x1d0) = param_3[1];
          *(int *)(param_1 + 0x1cc) = *param_3;
          return 0;
        }
      }
    }
    else {
      if (param_2 == 0x107) {
        *(int *)(param_1 + 0xf4c) = *param_3;
        return 0;
      }
      if (param_2 < 0x108) {
        if (param_2 == 0x105) {
          *(int *)(param_1 + 0xf20) = *param_3;
          iVar6 = 4;
          iVar5 = param_3[1];
          *(int *)(param_1 + 0xf1c) = iVar5;
          if (iVar5 != 8) {
            if (iVar5 == 4) {
              iVar6 = 2;
            }
            else {
              iVar6 = 1;
            }
          }
          cVar4 = (char)iVar6;
          *(char *)(param_1 + 0x711) = cVar4;
          if (*(int *)(param_1 + 0xf04) == 0) {
            return 0;
          }
          if (iVar5 != 0) {
            cVar4 = (char)(iVar6 << 1);
          }
LAB_00017acc:
          *(char *)(param_1 + 0x711) = cVar4;
          return 0;
        }
        if (0x105 < param_2) {
          memcpy((void *)(param_1 + 0xf2a),param_3,6);
          *(undefined4 *)(param_1 + 0xf24) = 1;
          *(undefined *)(param_1 + 0xf28) = 1;
          return 0;
        }
        __dest = (void *)(param_1 + 0xe44);
LAB_00017c6a:
        __n = 0xc;
LAB_00017c6c:
        memcpy(__dest,param_3,__n);
        return 0;
      }
      if (param_2 == 0x204) {
        *(int *)(param_1 + 0xefc) = *param_3;
        return 0;
      }
      if (param_2 == 0x205) {
        *(int *)(param_1 + 0xf00) = *param_3;
        return 0;
      }
      if (param_2 == 0x108) {
        memcpy((void *)(param_1 + 0xf34),param_3,0x10);
        uVar7 = 1;
        *(undefined4 *)(param_1 + 0xf24) = 1;
        *(undefined *)(param_1 + 0xf31) = 1;
        if (*(int *)(param_1 + 0xf3c) == 5) {
          if (*(int *)(param_1 + 0xf40) == 8) goto LAB_00017c2c;
        }
        else {
          if ((*(int *)(param_1 + 0xf3c) == 8) && (uVar7 = 2, *(int *)(param_1 + 0xf40) == 5))
          goto LAB_00017c2c;
        }
        uVar7 = 0;
LAB_00017c2c:
        *(undefined4 *)(param_1 + 0xed4) = uVar7;
        if (*(int *)(param_1 + 0xf40) == 8) {
          *(undefined4 *)(param_1 + 0xf40) = 5;
          *(undefined *)(param_1 + 0xf38) = 1;
          return 0;
        }
        *(undefined *)(param_1 + 0xf38) = 0;
        return 0;
      }
    }
  }
  pcVar3 = "<%s:%u>: h264 do not support this %d indexType";
  uVar2 = 5;
  uVar7 = 0xaa3;
LAB_00017caa:
  __android_log_print(uVar2,"awplayer",pcVar3,"H264SetParameter",uVar7,param_2);
  return 0xffffffff;
}



undefined4 H264FreeOneBitstream(int param_1,undefined4 *param_2)

{
  undefined auStack64 [20];
  undefined4 local_2c;
  
  MemAdapterFlushCache(param_2[7],param_2[5]);
  if (param_2[6] != 0) {
    MemAdapterFlushCache(param_2[8]);
  }
  local_2c = *param_2;
  BitStreamReturnOneBitstream(*(undefined4 *)(param_1 + 4),auStack64);
  return 0;
}



undefined4 H264GetOneBitstream(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)BitStreamGetOneBitstream(*(undefined4 *)(param_1 + 4));
  if (piVar1 == (int *)0x0) {
    return 0xffffffff;
  }
  *param_2 = piVar1[5];
  param_2[4] = piVar1[4];
  iVar2 = piVar1[3];
  param_2[2] = piVar1[2];
  param_2[3] = iVar2;
  param_2[9] = piVar1[6];
  param_2[10] = piVar1[7];
  param_2[0xb] = piVar1[8];
  param_2[0xc] = piVar1[9];
  param_2[0xd] = piVar1[10];
  iVar4 = *piVar1;
  iVar2 = piVar1[1];
  iVar3 = *(int *)(param_1 + 0x1c);
  param_2[7] = *(int *)(param_1 + 0x20) + iVar4;
  if (iVar3 < iVar4 + iVar2) {
    param_2[8] = *(int *)(param_1 + 0x20);
    iVar2 = *(int *)(param_1 + 0x1c) - *piVar1;
    param_2[5] = iVar2;
    param_2[6] = piVar1[1] - iVar2;
    MemAdapterFlushCache();
    MemAdapterFlushCache(param_2[8],param_2[6]);
    return 0;
  }
  iVar2 = piVar1[1];
  param_2[6] = 0;
  param_2[8] = 0;
  param_2[5] = iVar2;
  MemAdapterFlushCache();
  return 0;
}



void H264ValidBitStreamFrameNum(int param_1)

{
  BitStreamFrameNum(*(undefined4 *)(param_1 + 4));
  return;
}



void H264EncClose(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*param_1 != 0) {
    IspDestroy();
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    BitStreamDestroy();
    param_1[1] = 0;
  }
  iVar1 = 0;
  piVar2 = param_1;
  while (iVar1 < param_1[0x79]) {
    if (piVar2[0x7a] != 0) {
      EncAdapterMemPfree();
      piVar2[0x7a] = 0;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  }
  iVar1 = 0;
  piVar2 = param_1;
  while (iVar1 < param_1[0x398]) {
    if (piVar2[0x399] != 0) {
      EncAdapterMemPfree();
      piVar2[0x399] = 0;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  }
  if (param_1[0x8a] != 0) {
    EncAdapterMemPfree();
    param_1[0x8a] = 0;
  }
  if (param_1[0x10b] != 0) {
    EncAdapterMemPfree();
    param_1[0x10b] = 0;
  }
  if (param_1[0x10d] != 0) {
    EncAdapterMemPfree();
    param_1[0x10d] = 0;
  }
  if ((void *)param_1[9] != (void *)0x0) {
    free((void *)param_1[9]);
    param_1[9] = 0;
    param_1[10] = 0;
  }
  if (param_1[0x10f] != 0) {
    EncAdapterMemPfree();
    param_1[0x10f] = 0;
  }
  free(param_1);
  return;
}



undefined4 H264UnInit(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      IspDestroy();
      *param_1 = 0;
    }
    if (param_1[1] != 0) {
      BitStreamDestroy();
      param_1[1] = 0;
    }
    iVar1 = 0;
    piVar2 = param_1;
    while (iVar1 < param_1[0x79]) {
      if (piVar2[0x7a] != 0) {
        EncAdapterMemPfree();
        piVar2[0x7a] = 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    }
    iVar1 = 0;
    piVar2 = param_1;
    while (iVar1 < param_1[0x398]) {
      if (piVar2[0x399] != 0) {
        EncAdapterMemPfree();
        piVar2[0x399] = 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    }
    if (param_1[0x8a] != 0) {
      EncAdapterMemPfree();
      param_1[0x8a] = 0;
    }
    if (param_1[0x10b] != 0) {
      EncAdapterMemPfree();
      param_1[0x10b] = 0;
    }
    if (param_1[0x10d] != 0) {
      EncAdapterMemPfree();
      param_1[0x10d] = 0;
    }
    if ((void *)param_1[9] != (void *)0x0) {
      free((void *)param_1[9]);
      param_1[9] = 0;
      param_1[10] = 0;
    }
    if (param_1[0x10f] != 0) {
      EncAdapterMemPfree();
      param_1[0x10f] = 0;
    }
  }
  return 0;
}



undefined4 H264GetParameter(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0xe) {
    *param_3 = *(undefined4 *)(param_1 + 0x2c);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
LAB_00017f3a:
    param_3[1] = uVar1;
    return 0;
  }
  if (param_2 < 0xf) {
    if (param_2 == 8) {
      *param_3 = *(undefined4 *)(param_1 + 0xd48);
      return 0;
    }
  }
  else {
    if (param_2 == 0x10) {
      *param_3 = *(undefined4 *)(param_1 + 0xed8);
      param_3[1] = *(undefined4 *)(*(int *)(param_1 + 4) + 0x24);
      param_3[2] = *(undefined4 *)(*(int *)(param_1 + 4) + 0x18);
      param_3[3] = *(undefined4 *)(param_1 + 0xefc);
      return 0;
    }
    if (param_2 == 0x16) {
      *param_3 = *(undefined4 *)(param_1 + 0x24);
      uVar1 = *(undefined4 *)(param_1 + 0x28);
      goto LAB_00017f3a;
    }
  }
  __android_log_print(5,"awplayer","<%s:%u>: h264 do not support this %d indexType",
                      "H264GetParameter",0x9a5,param_2);
  return 0xffffffff;
}



void init_classify_engine(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  double dVar2;
  
  *(undefined4 *)(param_1 + 0x48c) = 6;
  *(undefined4 *)(param_1 + 0x488) = 1;
  *(undefined4 *)(param_1 + 0x484) = 1;
  if (*(int *)(param_1 + 0x1a8) == 1) {
    *(int *)(param_1 + 0x4c0) = *(int *)(param_1 + 0x4c4) >> 6;
  }
  else {
    uVar1 = __aeabi_uidiv(*(undefined4 *)(param_1 + 0x4c0),
                          (uint)(*(int *)(param_1 + 0x58) * *(int *)(param_1 + 0x54)) >>
                          (*(uint *)(param_1 + 0x1c4) & 0xff),*(int *)(param_1 + 0x58),
                          *(int *)(param_1 + 0x1a8),param_4);
    *(undefined4 *)(param_1 + 0x4c0) = uVar1;
  }
  dVar2 = (double)(ulonglong)*(uint *)(param_1 + 0x4c0);
  *(int *)(param_1 + 0x490) = SUB84(ROUND(dVar2 * 0.52),0);
  *(int *)(param_1 + 0x494) = SUB84(ROUND(dVar2 * 0.59),0);
  *(int *)(param_1 + 0x498) = SUB84(ROUND(dVar2 * 0.68),0);
  *(int *)(param_1 + 0x49c) = SUB84(ROUND(dVar2 * 0.77),0);
  *(int *)(param_1 + 0x4a0) = SUB84(ROUND(dVar2 * 0.88),0);
  *(int *)(param_1 + 0x4a4) = SUB84(ROUND(dVar2),0);
  *(int *)(param_1 + 0x4a8) = SUB84(ROUND(dVar2 * 1.14),0);
  *(int *)(param_1 + 0x4ac) = SUB84(ROUND(dVar2 * 1.3),0);
  *(int *)(param_1 + 0x4b0) = SUB84(ROUND(dVar2 * 1.48),0);
  *(int *)(param_1 + 0x4b4) = SUB84(ROUND(dVar2 * 1.69),0);
  *(int *)(param_1 + 0x4b8) = SUB84(ROUND(dVar2 * 1.93),0);
  *(undefined4 *)(param_2 + 0x2c) = 0x86000001;
  *(uint *)(param_2 + 0x30) =
       *(int *)(param_1 + 0x498) << 0x14 | *(int *)(param_1 + 0x494) << 10 |
       *(uint *)(param_1 + 0x490);
  *(uint *)(param_2 + 0x34) =
       *(int *)(param_1 + 0x4a4) << 0x14 | *(int *)(param_1 + 0x4a0) << 10 |
       *(uint *)(param_1 + 0x49c);
  *(uint *)(param_2 + 0x38) =
       *(int *)(param_1 + 0x4b0) << 0x14 | *(int *)(param_1 + 0x4ac) << 10 |
       *(uint *)(param_1 + 0x4a8);
  *(uint *)(param_2 + 0x3c) =
       *(int *)(param_1 + 0x4bc) << 0x14 | *(int *)(param_1 + 0x4b8) << 10 |
       *(uint *)(param_1 + 0x4b4);
  return;
}



void init_temporalfilter(int param_1,int param_2)

{
  double dVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  *(byte *)(param_1 + 0xf3) = *(byte *)(param_1 + 0xf3) | 0x80;
  if (*(int *)(param_1 + 0x1a8) == 1) {
    uVar3 = *(uint *)(param_1 + 0x4c8);
  }
  else {
    dVar1 = ROUND((double)(ulonglong)*(uint *)(param_1 + 0x4c0) * 0.2);
    *(int *)(param_1 + 0x4bc) = SUB84(dVar1,0);
    uVar3 = *(uint *)(param_1 + 0x4c8);
    if ((double)((ulonglong)dVar1 & 0xffffffff) < (double)(ulonglong)uVar3 * 1.5) {
      uVar3 = *(uint *)(param_1 + 0x494);
    }
  }
  *(uint *)(param_1 + 0x4bc) = uVar3;
  if (*(int *)(param_1 + 0xec4) != 0) {
    *(byte *)(param_1 + 0xf3) = *(byte *)(param_1 + 0xf3) & 0xbf;
    uVar3 = *(int *)(param_1 + 0xdc8) << 6;
    uVar4 = uVar3 >> 0x1a;
    *(byte *)(param_1 + 0xe7) = *(byte *)(param_1 + 0xe7) & 0xfb | 0x80;
    *(uint *)(param_1 + 0xedc) = uVar4;
    if (uVar4 != 0) {
      *(byte *)(param_1 + 0xf0) = (byte)(uVar3 >> 0x1a);
      *(byte *)(param_1 + 0xf3) = *(byte *)(param_1 + 0xf3) | 0x40;
    }
    if (*(byte *)(param_1 + 0xf0) < 2) {
      bVar2 = *(byte *)(param_1 + 0xe7) & 0x8f | 0x20;
    }
    else {
      if ((byte)(*(byte *)(param_1 + 0xf0) - 2) < 5) {
        bVar2 = *(byte *)(param_1 + 0xe7) & 0x8b | 0x27;
      }
      else {
        bVar2 = *(byte *)(param_1 + 0xe7) & 0x88 | 0x34;
      }
    }
    *(byte *)(param_1 + 0xe7) = bVar2;
  }
  *(ushort *)(param_1 + 0xf2) =
       *(ushort *)(param_1 + 0xf2) & 0xc000 |
       (ushort)*(byte *)(param_1 + 0xf0) * (*(byte *)(param_1 + 0xf1) & 0x7f) & 0x3fff;
  *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_1 + 0xf0);
  *(uint *)(param_2 + 0x3c) =
       *(uint *)(param_2 + 0x3c) & 0xfffff | *(int *)(param_1 + 0x4bc) << 0x14;
  *(undefined4 *)(param_2 + 200) = *(undefined4 *)(param_1 + 0x430);
  return;
}



void init_dynamicMe(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  
  *(byte *)(param_1 + 0xe5) = *(byte *)(param_1 + 0xe5) | 1;
  uVar1 = __aeabi_uidiv(*(int *)(param_1 + 0x54) + 0x2f,0x30,param_3,param_4,param_4);
  *(byte *)(param_1 + 0xe5) = *(byte *)(param_1 + 0xe5) & 0xc3 | (byte)((uVar1 & 0xf) << 2);
  *(uint *)(param_2 + 8) =
       (((uint)*(byte *)(param_1 + 0xe5) << 0x1e) >> 0x1f) << 10 | 0x100 | (uVar1 & 0xf) << 10 |
       *(uint *)(param_2 + 8);
  dVar3 = (double)(ulonglong)*(uint *)(param_1 + 0x54);
  uVar2 = SUB84(ROUND(dVar3 * 0.1),0) & 0xffff;
  *(ushort *)(param_1 + 0x114) = *(ushort *)(param_1 + 0x114) & 0xfc00 | (ushort)uVar2 & 0x3ff;
  uVar1 = SUB84(ROUND(dVar3 * 0.6),0) & 0xffff;
  *(ushort *)(param_1 + 0x116) = *(ushort *)(param_1 + 0x116) & 0xfc00 | (ushort)uVar1 & 0x3ff;
  *(ushort *)(param_1 + 0x118) =
       *(ushort *)(param_1 + 0x118) & 0xfc00 | SUB82(ROUND(dVar3 * 2.6),0) & 0x3ff;
  *(ushort *)(param_1 + 0x11a) =
       *(ushort *)(param_1 + 0x11a) & 0xfc00 | SUB82(ROUND(dVar3 * 3.2),0) & 0x3ff;
  *(uint *)(param_2 + 0x48) = uVar2 | uVar1 << 0x10;
  *(uint *)(param_2 + 0x4c) =
       *(ushort *)(param_1 + 0x118) & 0x3ff | (*(ushort *)(param_1 + 0x11a) & 0x3ff) << 0x10;
  return;
}



undefined4 staticst_histogram(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  memcpy((void *)(param_1 + 0x22c),*(void **)(param_1 + 0x42c),0x200);
  iVar5 = 0;
  iVar3 = 0;
  uVar7 = 0;
  iVar4 = 0;
  iVar2 = param_1;
  do {
    uVar6 = (uint)*(ushort *)(iVar2 + 0x22c);
    iVar4 = iVar4 + uVar6;
    if (uVar7 <= uVar6) {
      uVar7 = uVar6;
      iVar5 = iVar3;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 2;
  } while (iVar3 != 0x100);
  if (iVar4 == 0) {
    *(undefined *)(param_1 + 0xf0) = 0;
  }
  else {
    iVar4 = 0;
    uVar7 = iVar5 - 5;
    iVar2 = 0;
    iVar3 = 0;
    while (iVar4 != 0x14) {
      if ((uVar7 < 0x100) &&
         ((double)(longlong)(int)(uint)*(ushort *)(param_1 + (iVar5 + 0x114) * 2 + 4) * 0.8 <=
          (double)(longlong)(int)(uint)*(ushort *)(param_1 + iVar5 * 2 + iVar4 + 0x222))) {
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + uVar7;
      }
      uVar7 = uVar7 + 1;
      iVar4 = iVar4 + 2;
    }
    if (iVar3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = __aeabi_idiv(iVar2 + (iVar3 >> 1));
    }
    *(undefined *)(param_1 + 0xf0) = uVar1;
    MemAdapterFlushCache(*(undefined4 *)(param_1 + 0x42c),0x400);
  }
  return 0;
}



void flm_flag(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  uVar7 = *(int *)(param_1 + 0x1a4) - *(int *)(param_1 + 0xf18);
  if (*(int *)(param_1 + 0x1a4) == 0) {
    if (*(int *)(param_1 + 0xd84) == 0) {
      if ((*(int *)(param_1 + 0xd80) == 0) || (*(int *)(param_1 + 0x730) == 0)) {
        memset((void *)(param_1 + 0x450),0,0x20);
        uVar5 = *(int *)(param_1 + 8) - 0x1639;
        if (uVar5 != 0) {
          uVar5 = 1;
        }
        if (*(int *)(param_1 + 8) == 0x1650) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 & 1;
        }
        if (uVar5 != 0) {
          memset((void *)(param_1 + 0xe8c),0,0x20);
        }
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x468);
        iVar4 = 1 - uVar5;
        *(uint *)(param_1 + 0x464) = uVar5;
        if (1 < uVar5) {
          iVar4 = 0;
        }
        *(int *)(param_1 + 0x468) = iVar4;
        uVar5 = *(int *)(param_1 + 8) - 0x1639;
        if (uVar5 != 0) {
          uVar5 = 1;
        }
        if (*(int *)(param_1 + 8) == 0x1650) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 & 1;
        }
        if (uVar5 != 0) {
          uVar5 = *(uint *)(param_1 + 0xea4);
          iVar4 = 1 - uVar5;
          *(uint *)(param_1 + 0xea0) = uVar5;
          if (1 < uVar5) {
            iVar4 = 0;
          }
          *(int *)(param_1 + 0xea4) = iVar4;
        }
      }
    }
    else {
      *(int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1b0);
      uVar7 = *(int *)(param_1 + 0x1b0) - *(int *)(param_1 + 0xf18);
    }
  }
  if (*(int *)(param_1 + 0x1a4) == 0) goto LAB_000186e2;
  iVar4 = *(int *)(param_1 + 0xf1c);
  cVar1 = (char)uVar7;
  if (iVar4 == 4) {
    bVar2 = cVar1 - 4;
    uVar5 = *(uint *)(param_1 + 0x450);
    if ((uVar7 & 3) == 0) {
LAB_000185e6:
      *(uint *)(param_1 + 0x464) = (uint)(uVar5 != bVar2);
      uVar5 = (uint)(uVar5 == bVar2);
    }
    else {
      if (-1 < (int)(uVar7 << 0x1f)) {
        bVar2 = cVar1 - 2;
        goto LAB_000185e6;
      }
      iVar4 = uVar5 - (uVar7 - 1 & 0xff);
      if (iVar4 != 0) {
        iVar4 = 1;
      }
      uVar5 = 2;
      *(int *)(param_1 + 0x464) = iVar4;
    }
    *(uint *)(param_1 + 0x468) = uVar5;
    uVar5 = *(int *)(param_1 + 8) - 0x1639;
    if (uVar5 != 0) {
      uVar5 = 1;
    }
    if (*(int *)(param_1 + 8) == 0x1650) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar5 & 1;
    }
    if (uVar5 == 0) goto LAB_000186e2;
    uVar5 = *(uint *)(param_1 + 0xe8c);
    if ((uVar7 & 3) == 0) {
LAB_00018632:
      bVar2 = cVar1 - 4;
      goto LAB_00018692;
    }
    if (-1 < (int)(uVar7 << 0x1f)) goto LAB_0001868c;
    bVar2 = cVar1 - 1;
LAB_0001863c:
    iVar4 = uVar5 - bVar2;
    if (iVar4 != 0) {
      iVar4 = 1;
    }
    uVar8 = 2;
    *(int *)(param_1 + 0xea0) = iVar4;
  }
  else {
    if (iVar4 == 8) {
      uVar5 = *(uint *)(param_1 + 0x450);
      if ((uVar7 & 7) == 0) {
        uVar8 = uVar7 - 8;
LAB_00018534:
        bVar9 = uVar5 == (uVar8 & 0xff);
        uVar5 = (uint)bVar9;
        *(uint *)(param_1 + 0x464) = (uint)!bVar9;
      }
      else {
        if ((uVar7 & 3) == 0) {
          uVar8 = uVar7 - 4;
          goto LAB_00018534;
        }
        if ((int)(uVar7 << 0x1f) < 0) {
          uVar8 = uVar7 - 1 & 0xff;
          if (uVar5 == uVar8) {
            uVar6 = 0;
          }
          else {
            if (*(uint *)(param_1 + 0x454) == uVar8) {
              uVar6 = 1;
            }
            else {
              uVar6 = 2;
            }
          }
          *(undefined4 *)(param_1 + 0x464) = uVar6;
          uVar5 = 3;
        }
        else {
          iVar4 = uVar5 - (uVar7 - 2 & 0xff);
          if (iVar4 != 0) {
            iVar4 = 1;
          }
          *(int *)(param_1 + 0x464) = iVar4;
          uVar5 = 2;
        }
      }
      *(uint *)(param_1 + 0x468) = uVar5;
      uVar5 = *(int *)(param_1 + 8) - 0x1639;
      if (uVar5 != 0) {
        uVar5 = 1;
      }
      if (*(int *)(param_1 + 8) == 0x1650) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 & 1;
      }
      if (uVar5 == 0) goto LAB_000186e2;
      uVar5 = *(uint *)(param_1 + 0xe8c);
      bVar2 = cVar1 - 8;
      if ((uVar7 & 7) != 0) {
        if ((uVar7 & 3) != 0) {
          bVar2 = cVar1 - 2;
          if (-1 < (int)(uVar7 << 0x1f)) goto LAB_0001863c;
          uVar8 = uVar7 - 1 & 0xff;
          if (uVar5 == uVar8) {
            uVar6 = 0;
          }
          else {
            if (*(uint *)(param_1 + 0xe90) == uVar8) {
              uVar6 = 1;
            }
            else {
              uVar6 = 2;
            }
          }
          *(undefined4 *)(param_1 + 0xea0) = uVar6;
          uVar8 = 3;
          goto LAB_000186de;
        }
        goto LAB_00018632;
      }
LAB_00018692:
      uVar3 = (uint)bVar2;
    }
    else {
      uVar5 = *(uint *)(param_1 + 0x450);
      if (iVar4 == 2) {
        iVar4 = -2;
        if ((uVar7 & 1) != 0) {
          iVar4 = -1;
        }
        bVar9 = uVar5 == (uVar7 + iVar4 & 0xff);
        uVar5 = *(int *)(param_1 + 8) - 0x1639;
        *(uint *)(param_1 + 0x464) = (uint)!bVar9;
        *(uint *)(param_1 + 0x468) = (uint)bVar9;
        if (uVar5 != 0) {
          uVar5 = 1;
        }
        if (*(int *)(param_1 + 8) == 0x1650) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 & 1;
        }
        if (uVar5 == 0) goto LAB_000186e2;
        uVar5 = *(uint *)(param_1 + 0xe8c);
        if ((uVar7 & 1) != 0) {
          bVar2 = cVar1 - 1;
          goto LAB_00018692;
        }
LAB_0001868c:
        bVar2 = cVar1 - 2;
        goto LAB_00018692;
      }
      uVar3 = uVar7 - 1 & 0xff;
      uVar8 = *(int *)(param_1 + 8) - 0x1639;
      *(uint *)(param_1 + 0x464) = (uint)(uVar5 != uVar3);
      *(uint *)(param_1 + 0x468) = (uint)(uVar5 == uVar3);
      if (uVar8 != 0) {
        uVar8 = 1;
      }
      if (*(int *)(param_1 + 8) == 0x1650) {
        uVar8 = 0;
      }
      else {
        uVar8 = uVar8 & 1;
      }
      if (uVar8 == 0) goto LAB_000186e2;
      uVar5 = *(uint *)(param_1 + 0xe8c);
    }
    uVar8 = (uint)(uVar5 == uVar3);
    *(uint *)(param_1 + 0xea0) = (uint)(uVar5 != uVar3);
  }
LAB_000186de:
  *(uint *)(param_1 + 0xea4) = uVar8;
LAB_000186e2:
  *(uint *)(param_1 + (*(int *)(param_1 + 0x468) + 0x114) * 4) = uVar7 & 0xff;
  uVar5 = *(int *)(param_1 + 8) - 0x1639;
  if (uVar5 != 0) {
    uVar5 = 1;
  }
  if (*(int *)(param_1 + 8) == 0x1650) {
    uVar5 = 0;
  }
  else {
    uVar5 = uVar5 & 1;
  }
  if (uVar5 != 0) {
    *(uint *)(param_1 + *(int *)(param_1 + 0xea4) * 4 + 0xe8c) = uVar7 & 0xff;
  }
  if (*(int *)(param_1 + 0x1b0) <= *(int *)(param_1 + 0x1a4)) {
    *(undefined4 *)(param_1 + 0x1a4) = 0;
    *(undefined4 *)(param_1 + 0xf18) = 0;
  }
  return;
}



void switch_T_SVC_QP(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(int *)(param_1 + 0x1a4) - *(int *)(param_1 + 0xf18);
  iVar1 = *(int *)(param_1 + 0xf20);
  if (iVar1 == 3) {
    if ((uVar2 & 3) != 0) {
      if ((uVar2 & 1) == 0) {
        iVar1 = *(int *)(param_1 + 0x1dc) + 4;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x1dc) + 5;
      }
      *(int *)(param_1 + 0x1dc) = iVar1;
      return;
    }
  }
  else {
    if (iVar1 == 4) {
      if ((uVar2 & 7) != 0) {
        iVar1 = *(int *)(param_1 + 0x1dc);
        if ((uVar2 & 3) == 0) {
          iVar1 = iVar1 + 4;
        }
        else {
          if ((int)(uVar2 * -0x80000000) < 0) {
            iVar1 = iVar1 + 6;
          }
          else {
            iVar1 = iVar1 + 5;
          }
        }
        *(int *)(param_1 + 0x1dc) = iVar1;
        return;
      }
    }
    else {
      if ((iVar1 == 2) && ((int)(uVar2 * -0x80000000) < 0)) {
        *(int *)(param_1 + 0x1dc) = *(int *)(param_1 + 0x1dc) + 4;
      }
    }
  }
  return;
}



undefined4 h264_get_ve_capability(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  while( true ) {
    if (iVar1 == 0xd) {
      return 0xffffffff;
    }
    if (*(int *)(param_1 + 8) == *(int *)(h264_capatility + iVar2)) break;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 0x24;
  }
  memcpy((void *)(param_1 + 0xeac),h264_capatility + iVar1 * 0x24,0x24);
  return 1;
}



undefined4 h264_check_capability(int param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  undefined4 uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x44);
  if ((*(uint *)(param_1 + 0xec8) < uVar2) ||
     (uVar3 = *(uint *)(param_1 + 0x48), *(uint *)(param_1 + 0xecc) < uVar3)) {
    uVar5 = 0x21d;
    puVar1 = &DAT_0002413c;
  }
  else {
    if ((uVar2 < 0x60) || (uVar3 < 0x30)) {
      __android_log_print(5,"awplayer",
                                                    
                          "<%s:%u>: warning: the request size is %ux%u, maybe less than ve support min size ...\n"
                          ,"h264_check_capability",0x225,uVar2,uVar3);
      return 0xffffffff;
    }
    dVar4 = (double)(ulonglong)*(uint *)(param_1 + 0x54) /
            (double)(ulonglong)*(uint *)(param_1 + 0x4c);
    if ((((dVar4 < 8.0) && (-1 < (int)((uint)(dVar4 < 0.25) << 0x1f))) &&
        (dVar4 = (double)(ulonglong)*(uint *)(param_1 + 0x58) /
                 (double)(ulonglong)*(uint *)(param_1 + 0x50), dVar4 < 8.0)) &&
       (-1 < (int)((uint)(dVar4 < 0.25) << 0x1f))) {
      if (0x11 < *(uint *)(param_1 + 0x40)) {
        __android_log_print(6,"awplayer",&DAT_0002426a,"h264_check_capability",0x24f,
                            *(uint *)(param_1 + 0x40));
        return 0xffffffff;
      }
      return 0;
    }
    uVar5 = 0x22e;
    puVar1 = &DAT_000241f2;
  }
  __android_log_print(6,"awplayer",puVar1,"h264_check_capability",uVar5);
  return 0xffffffff;
}



void h264_init_default_param(int param_1)

{
  *(undefined4 *)(param_1 + 0x1e0) = 0x12;
  *(undefined4 *)(param_1 + 0x1b8) = 0x200000;
  *(undefined4 *)(param_1 + 0x1bc) = 30000;
  *(undefined4 *)(param_1 + 0x1b0) = 0x19;
  *(undefined4 *)(param_1 + 0x1cc) = 0x2d;
  *(undefined *)(param_1 + 0x711) = 1;
  *(undefined4 *)(param_1 + 0x1c8) = 1;
  *(undefined4 *)(param_1 + 0x1d0) = 10;
  *(undefined4 *)(param_1 + 0x1d4) = 2;
  *(undefined4 *)(param_1 + 0x1d8) = 0x1e;
  *(undefined4 *)(param_1 + 0x1dc) = 0x1e;
  *(undefined4 *)(param_1 + 0x6ec) = 0x4d;
  *(undefined4 *)(param_1 + 0x6f0) = 0x29;
  *(undefined *)(param_1 + 0x6f4) = 4;
  *(undefined *)(param_1 + 0x70f) = 1;
  *(undefined *)(param_1 + 0x710) = 1;
  *(undefined *)(param_1 + 0x6fd) = 1;
  *(undefined *)(param_1 + 0x6fe) = 1;
  *(undefined *)(param_1 + 0x70c) = 4;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined *)(param_1 + 0x6f5) = 8;
  *(undefined *)(param_1 + 0x6fc) = 0;
  *(undefined *)(param_1 + 0x6ff) = 0;
  *(undefined *)(param_1 + 0x700) = 0;
  *(undefined4 *)(param_1 + 0x704) = 0;
  *(undefined4 *)(param_1 + 0x708) = 0;
  *(undefined *)(param_1 + 0x70d) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x1000;
  *(undefined4 *)(param_1 + 0x60) = 0x1000;
  *(undefined4 *)(param_1 + 0xd7c) = 5;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0xee0) = 0;
  return;
}



void * H264EncOpen(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  void *__s;
  undefined4 uVar2;
  int iVar3;
  
  __s = malloc(0xf50);
  if (__s == (void *)0x0) {
    __android_log_print(6,"awplayer",&DAT_000242b0,"H264EncOpen",0x5a3,param_2);
  }
  else {
    memset(__s,0,0xf50);
    h264_init_default_param(__s);
    uVar2 = EncAdapterGetICVersion();
    *(undefined4 *)((int)__s + 8) = uVar2;
    iVar3 = h264_get_ve_capability(__s);
    if (-1 < iVar3) {
      param_4 = 0x800000;
    }
    if (-1 < iVar3) {
      *(undefined4 *)((int)__s + 0xed8) = param_4;
    }
    else {
      puVar1 = (undefined4 *)((int)__s + 8);
      __s = (void *)0x0;
      __android_log_print(6,"awplayer",&DAT_000242df,"H264EncOpen",0x5b3,*puVar1);
    }
  }
  return __s;
}



undefined4 H264InitMemory(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = BitStreamCreate(*(undefined4 *)(param_1 + 0xed8));
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    uVar2 = 0x291;
    puVar4 = &DAT_00024321;
  }
  else {
    uVar2 = BitStreamBaseAddress();
    *(undefined4 *)(param_1 + 0x20) = uVar2;
    uVar2 = BitStreamBasePhyAddress(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    uVar2 = BitStreamEndPhyAddress(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    uVar2 = BitStreamBufferSize(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
    if (*(int *)(param_1 + 0xf1c) == 8) {
      uVar2 = 4;
    }
    else {
      if (*(int *)(param_1 + 0xf1c) == 4) {
        uVar2 = 3;
      }
      else {
        uVar2 = 2;
      }
    }
    iVar1 = *(int *)(param_1 + 0x48);
    iVar6 = 0;
    *(undefined4 *)(param_1 + 0x1e4) = uVar2;
    uVar5 = *(int *)(param_1 + 0x44) + 0x1fU & 0xffffffe0;
    if (*(uint *)(param_1 + 8) < 0x1667) {
      uVar7 = iVar1 + 0x3f;
    }
    else {
      uVar7 = iVar1 + 0x47;
    }
    iVar1 = uVar5 * (iVar1 + 0x7fU & 0xffffff80);
    iVar8 = uVar5 * (uVar7 & 0xffffffc0);
    *(int *)(param_1 + 0x444) = iVar8 >> 1;
    iVar9 = iVar8 + (iVar1 >> 1);
    *(int *)(param_1 + 0x448) = iVar1 >> 2;
    iVar1 = param_1;
    while (iVar6 < *(int *)(param_1 + 0x1e4)) {
      iVar3 = EncAdapterMemPalloc(iVar9);
      *(int *)(iVar1 + 0x1e8) = iVar3;
      if (iVar3 == 0) goto LAB_00018d5a;
      iVar6 = iVar6 + 1;
      EncAdapterMemFlushCache(iVar3,iVar9);
      iVar3 = EncAdapterMemGetPhysicAddress(*(undefined4 *)(iVar1 + 0x1e8));
      *(int *)(iVar1 + 0x1fc) = iVar3;
      *(int *)(iVar1 + 0x210) = iVar3 + iVar8;
      iVar1 = iVar1 + 4;
    }
    if (*(int *)(param_1 + 0xf1c) == 8) {
      uVar2 = 4;
    }
    else {
      if (*(int *)(param_1 + 0xf1c) == 4) {
        uVar2 = 3;
      }
      else {
        uVar2 = 2;
      }
    }
    *(undefined4 *)(param_1 + 0xe60) = uVar2;
    uVar5 = *(uint *)(param_1 + 8);
    if (uVar5 < 0x1667) {
      if (uVar5 == 0x1651 || uVar5 < 0x1634) {
        iVar6 = 0;
        iVar1 = param_1;
        while (iVar6 < *(int *)(param_1 + 0xe60)) {
          iVar8 = EncAdapterMemPalloc(*(undefined4 *)(param_1 + 0x444));
          *(int *)(iVar1 + 0xe64) = iVar8;
          if (iVar8 == 0) goto LAB_00018d5a;
          iVar6 = iVar6 + 1;
          EncAdapterMemFlushCache(iVar8,*(undefined4 *)(param_1 + 0x444));
          uVar2 = EncAdapterMemGetPhysicAddress(*(undefined4 *)(iVar1 + 0xe64));
          *(undefined4 *)(iVar1 + 0xe78) = uVar2;
          iVar1 = iVar1 + 4;
        }
      }
    }
    else {
      iVar6 = *(int *)(param_1 + 0x54);
      iVar1 = __aeabi_uidiv(iVar6 + 0x2f,0x30);
      uVar5 = ((iVar6 + 0x1fU & 0xffffffe0) * 2 + iVar1 * 0x20) *
              (*(int *)(param_1 + 0x48) + 0x48U >> 3);
      *(uint *)(param_1 + 0xef0) = uVar5;
      *(uint *)(param_1 + 0x44c) = uVar5 >> 1;
      iVar6 = 0;
      iVar1 = param_1;
      while (iVar6 < *(int *)(param_1 + 0xe60)) {
        iVar8 = EncAdapterMemPalloc(uVar5);
        *(int *)(iVar1 + 0xe64) = iVar8;
        if (iVar8 == 0) goto LAB_00018d5a;
        iVar6 = iVar6 + 1;
        EncAdapterMemFlushCache(iVar8,uVar5);
        uVar2 = EncAdapterMemGetPhysicAddress(*(undefined4 *)(iVar1 + 0xe64));
        *(undefined4 *)(iVar1 + 0xe78) = uVar2;
        iVar1 = iVar1 + 4;
      }
    }
    if ((*(int *)(param_1 + 0xd48) != 0) &&
       (iVar1 = *(int *)(param_1 + 0x54) * 8 * (*(int *)(param_1 + 0x54) + 3U & 0xfffffffc),
       iVar1 != 0)) {
      iVar6 = EncAdapterMemPalloc(iVar1);
      *(int *)(param_1 + 0x228) = iVar6;
      if (iVar6 == 0) {
        uVar2 = 0x2e7;
        puVar4 = &UNK_00024356;
        goto LAB_00018d3e;
      }
      EncAdapterMemFlushCache(iVar6,iVar1);
      uVar2 = EncAdapterMemGetPhysicAddress(*(undefined4 *)(param_1 + 0x228));
      *(undefined4 *)(param_1 + 0x224) = uVar2;
    }
    iVar1 = EncAdapterMemPalloc(0x400);
    *(int *)(param_1 + 0x42c) = iVar1;
    if (iVar1 != 0) {
      EncAdapterMemFlushCache(iVar1,0x400);
      uVar2 = EncAdapterMemGetPhysicAddress(*(undefined4 *)(param_1 + 0x42c));
      *(undefined4 *)(param_1 + 0x430) = uVar2;
      if (*(int *)(param_1 + 8) == 0x1625) {
        iVar1 = EncAdapterMemPalloc(*(int *)(param_1 + 0x44) * 0xc);
        *(int *)(param_1 + 0x434) = iVar1;
        if (iVar1 == 0) {
          uVar2 = 0x300;
          puVar4 = &UNK_000243b4;
          goto LAB_00018d3e;
        }
        iVar6 = *(int *)(param_1 + 0x44) * 0xc;
      }
      else {
        iVar1 = EncAdapterMemPalloc(*(int *)(param_1 + 0x44) << 3);
        *(int *)(param_1 + 0x434) = iVar1;
        if (iVar1 == 0) {
          uVar2 = 0x30b;
          puVar4 = &UNK_000243b4;
          goto LAB_00018d3e;
        }
        iVar6 = *(int *)(param_1 + 0x44) << 3;
      }
      EncAdapterMemFlushCache(iVar1,iVar6);
      uVar2 = EncAdapterMemGetPhysicAddress(*(undefined4 *)(param_1 + 0x434));
      *(undefined4 *)(param_1 + 0x438) = uVar2;
      uVar5 = *(uint *)(param_1 + 0x44);
      if (*(int *)(param_1 + 8) == 0x1625) {
        iVar6 = 0x18;
        iVar1 = EncAdapterMemPalloc(uVar5 * 0x18);
        *(int *)(param_1 + 0x43c) = iVar1;
        if (iVar1 == 0) {
          uVar2 = 0x318;
          puVar4 = &DAT_000243e5;
          goto LAB_00018d3e;
        }
      }
      else {
        if (uVar5 < 0x800) {
          return 0;
        }
        iVar6 = 6;
        iVar1 = EncAdapterMemPalloc(uVar5 * 6);
        *(int *)(param_1 + 0x43c) = iVar1;
        if (iVar1 == 0) {
          puVar4 = &DAT_000243e5;
          uVar2 = 0x323;
          goto LAB_00018d3e;
        }
      }
      EncAdapterMemFlushCache(iVar1,iVar6 * *(int *)(param_1 + 0x44));
      uVar2 = EncAdapterMemGetPhysicAddress(*(undefined4 *)(param_1 + 0x43c));
      *(undefined4 *)(param_1 + 0x440) = uVar2;
      return 0;
    }
    uVar2 = 0x2f4;
    puVar4 = &UNK_00024383;
  }
LAB_00018d3e:
  __android_log_print(6,"awplayer",puVar4,"H264InitMemory",uVar2,param_2);
LAB_00018d5a:
  if (*(int *)(param_1 + 4) != 0) {
    BitStreamDestroy();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  iVar6 = 0;
  iVar1 = param_1;
  while (iVar6 < *(int *)(param_1 + 0x1e4)) {
    if (*(int *)(iVar1 + 0x1e8) != 0) {
      EncAdapterMemPfree();
      *(undefined4 *)(iVar1 + 0x1e8) = 0;
    }
    iVar6 = iVar6 + 1;
    iVar1 = iVar1 + 4;
  }
  iVar6 = 0;
  iVar1 = param_1;
  while (iVar6 < *(int *)(param_1 + 0xe60)) {
    if (*(int *)(iVar1 + 0xe64) != 0) {
      EncAdapterMemPfree();
      *(undefined4 *)(iVar1 + 0xe64) = 0;
    }
    iVar6 = iVar6 + 1;
    iVar1 = iVar1 + 4;
  }
  if (*(int *)(param_1 + 0x228) != 0) {
    EncAdapterMemPfree();
    *(undefined4 *)(param_1 + 0x228) = 0;
  }
  if (*(int *)(param_1 + 0x42c) != 0) {
    EncAdapterMemPfree();
    *(undefined4 *)(param_1 + 0x42c) = 0;
  }
  if (*(int *)(param_1 + 0x434) != 0) {
    EncAdapterMemPfree();
    *(undefined4 *)(param_1 + 0x434) = 0;
  }
  if (*(int *)(param_1 + 0x43c) != 0) {
    EncAdapterMemPfree();
    *(undefined4 *)(param_1 + 0x43c) = 0;
  }
  return 0xffffffff;
}



undefined4 h264_init_regInfo(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  *(undefined2 *)(param_1 + 0xda) = *(undefined2 *)(param_1 + 0x54);
  *(undefined2 *)(param_1 + 0xd8) = *(undefined2 *)(param_1 + 0x58);
  *(undefined *)(param_1 + 0xdc) = 0;
  *(byte *)(param_1 + 0xdd) =
       *(byte *)(param_1 + 0xdd) & 0x80 | *(byte *)(param_1 + 0x6fd) & 1 |
       (*(byte *)(param_1 + 0x6fe) & 3) << 2 | (*(byte *)(param_1 + 0x700) & 3) << 4;
  uVar2 = *(uint *)(param_1 + 8);
  *(byte *)(param_1 + 0xde) =
       (byte)*(undefined4 *)(param_1 + 0x704) & 0xf | (byte)(*(int *)(param_1 + 0x708) << 4);
  *(byte *)(param_1 + 0xdf) = *(byte *)(param_1 + 0xdf) & 0xdf | 0x80;
  bVar1 = (byte)*(undefined4 *)(param_1 + 0x1dc);
  if (uVar2 < 0x1667) {
    bVar1 = bVar1 & 0x3f;
    *(byte *)(param_1 + 0xe0) = bVar1;
    *(byte *)(param_1 + 0xe2) = *(byte *)(param_1 + 0xe2) & 0xf8 | *(byte *)(param_1 + 0x70c) & 7;
    *(byte *)(param_1 + 0xe1) = bVar1;
    *(ushort *)(param_1 + 0xe2) = *(ushort *)(param_1 + 0xe2) & 7;
  }
  else {
    *(byte *)(param_1 + 0xe4) = bVar1 & 0x3f;
    *(undefined *)(param_1 + 0xe5) = 0;
    *(byte *)(param_1 + 0xe6) = *(byte *)(param_1 + 0xe6) & 8 | *(byte *)(param_1 + 0x70c) & 7;
  }
  *(byte *)(param_1 + 0xeb) = *(byte *)(param_1 + 0xeb) & 0x1f;
  *(undefined *)(param_1 + 0xe8) = 0;
  *(undefined *)(param_1 + 0xec) = 4;
  *(undefined *)(param_1 + 0xed) = 0;
  *(byte *)(param_1 + 0xee) = *(byte *)(param_1 + 0xee) & 0xc9 | 1 | (uVar2 == 0x1625) << 2;
  *(uint *)(param_1 + 0x478) = (uint)(*(int *)(param_1 + 0x40) == 1);
  *(uint *)(param_1 + 0x47c) = (uint)(*(int *)(param_1 + 0xe44) == 0);
  if (uVar2 == 0x1651 || uVar2 < 0x1633) {
    *(undefined4 *)(param_1 + 0x47c) = 0;
    *(undefined4 *)(param_1 + 0x478) = 0;
  }
  *(uint *)(param_1 + 0xe5c) = (uint)(0x1666 < uVar2);
  *(undefined *)(param_1 + 0xf8) = 0;
  *(byte *)(param_1 + 0xfa) = *(byte *)(param_1 + 0xfa) & 0xfc;
  *(undefined4 *)(param_1 + 0x4c4) = 6000;
  *(byte *)(param_1 + 0xf1) = *(byte *)(param_1 + 0xf1) & 0x80 | 0x40;
  *(ushort *)(param_1 + 0xfa) = *(ushort *)(param_1 + 0xfa) & 3;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x4c8) = 0x1e;
  *(undefined *)(param_1 + 0xf9) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 1;
  *(undefined4 *)(param_1 + 0x1a0) = 1;
  if ((0xeff < *(uint *)(param_1 + 0x44)) || (*(int *)(param_1 + 0xf4c) != 0)) {
    *(byte *)(param_1 + 0xed) = *(byte *)(param_1 + 0xed) | 0x40;
    *(byte *)(param_1 + 0xee) = *(byte *)(param_1 + 0xee) | 0x10;
    *(byte *)(param_1 + 0xec) = *(byte *)(param_1 + 0xec) | 0x10;
  }
  return 0;
}



undefined8 h264_init_sps_pps(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  uint __n;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 0x10);
  iVar6 = param_1;
  iVar1 = BitStreamWriteOffset(*(undefined4 *)(param_1 + 4));
  iVar2 = BitStreamFreeBufferSize(*(undefined4 *)(param_1 + 4));
  EncAdapterEnableEncoder();
  if (*(int *)(param_1 + 0x24) == 0) {
    pvVar3 = malloc(0x40);
    *(void **)(param_1 + 0x24) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      iVar6 = 1000;
      __android_log_print(6,"awplayer",&DAT_00024414,"h264_init_sps_pps",1000,param_2,param_3);
      uVar4 = 0xffffffff;
      goto LAB_00019166;
    }
  }
  *(undefined4 *)(iVar5 + 0x18) = 0;
  *(int *)(iVar5 + 0x88) = iVar1 << 3;
  *(undefined4 *)(iVar5 + 0x80) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar5 + 0x84) = *(undefined4 *)(param_1 + 0x18);
  *(int *)(iVar5 + 0x8c) = (iVar2 + iVar1) * 8;
  *(byte *)(param_1 + 0xdf) = *(byte *)(param_1 + 0xdf) | 0x80;
  *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(param_1 + 0xdc);
  uVar4 = InitSPS(param_1,iVar5);
  *(undefined4 *)(param_1 + 0x470) = uVar4;
  uVar4 = InitPPS(param_1,iVar5);
  *(undefined4 *)(param_1 + 0x474) = uVar4;
  *(undefined4 *)(iVar5 + 0x18) = 2;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x470) + *(int *)(param_1 + 0x474);
  EncAdapterMemFlushCache(*(undefined4 *)(param_1 + 0x20));
  __n = *(uint *)(param_1 + 0x28);
  if (__n < 0x41) {
    memcpy(*(void **)(param_1 + 0x24),*(void **)(param_1 + 0x20),__n);
  }
  else {
    iVar6 = 0x405;
    __android_log_print(6,"awplayer",&DAT_00024446,"h264_init_sps_pps",0x405,__n);
  }
  EncAdapterMemFlushCache
            (*(undefined4 *)(param_1 + 0x20),*(int *)(param_1 + 0x470) + *(int *)(param_1 + 0x474));
  EncAdapterDisableEncoder();
  uVar4 = 0;
LAB_00019166:
  return CONCAT44(iVar6,uVar4);
}



undefined8 H264Init(int *param_1,void *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  void *pvVar4;
  
  piVar3 = param_1;
  pvVar4 = param_2;
  iVar1 = EncAdapterVeGetBaseAddress();
  param_1[3] = iVar1;
  param_1[4] = iVar1 + 0xb00;
  iVar1 = IspCreate();
  *param_1 = iVar1;
  SetIspBaseAddress(iVar1,param_1[3] + 0xa00);
  if (*param_1 == 0) {
    BitStreamDestroy(param_1[1]);
    piVar3 = (int *)0x5ce;
    __android_log_print(6,"awplayer",&DAT_00024473,"H264Init",0x5ce,pvVar4,param_3);
  }
  else {
    memcpy(param_1 + 0xb,param_2,0x18);
    param_1[0x30] = (uint)((param_1[0xc] & 0xfU) == 0);
    if (param_1[0x1a] == 0x10e || param_1[0x1a] == 0x5a) {
      iVar1 = param_1[0xe];
      param_1[0xe] = param_1[0xd];
      param_1[0xd] = iVar1;
    }
    param_1[0x11] = param_1[0xd] + 0xfU & 0xfffffff0;
    param_1[0x14] = param_1[0xc] + 0xfU >> 4;
    param_1[0x12] = param_1[0xe] + 0xfU & 0xfffffff0;
    param_1[0x19] = param_1[0xf];
    param_1[0x16] = param_1[0xe] + 0xfU >> 4;
    param_1[0x13] = param_1[0xb] + 0xfU >> 4;
    param_1[0x15] = param_1[0xd] + 0xfU >> 4;
    iVar1 = h264_check_capability(param_1);
    if ((-1 < iVar1) && (iVar1 = H264InitMemory(param_1), -1 < iVar1)) {
      h264_init_regInfo(param_1);
      h264_init_rc_quene(param_1);
      h264_init_Poc(param_1);
      h264_init_sps_pps(param_1);
      uVar2 = 0;
      goto LAB_00019268;
    }
  }
  uVar2 = 0xffffffff;
LAB_00019268:
  return CONCAT44(piVar3,uVar2);
}



undefined4 H264SetIspInfo(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  if ((*(int *)(param_1 + 0xd88) == 1) || (*(int *)(param_1 + 0x1c0) != 0)) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  if (*(int *)(param_2 + 0x24) == 0) {
LAB_000193a6:
    if ((*(int *)(param_1 + 0xc0) == 0) && (*(int *)(param_1 + 0x730) == 0)) {
      iVar5 = *(int *)(param_1 + 0x68);
      if (iVar5 == 0) {
        iVar5 = *(int *)(param_1 + 0x50);
        if (iVar5 != *(int *)(param_1 + 0x58)) {
LAB_000193dc:
          *(int *)(param_1 + 0x50) = iVar5 + -1;
        }
      }
      else {
        if ((iVar5 == 0x5a || iVar5 == 0xb4) || (iVar5 == 0x10e)) {
          iVar5 = *(int *)(param_1 + 0x50);
          goto LAB_000193dc;
        }
      }
    }
    iVar5 = *(int *)(param_1 + 0x1c0);
    if (iVar5 == 1) {
      uVar7 = *(uint *)(param_1 + 0x50) >> 1;
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x4c);
LAB_00019400:
      *(uint *)(param_1 + 0x74) = uVar7;
      *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x14);
      *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x18);
      iVar9 = *(int *)(param_2 + 0x18) +
              ((uint)(*(int *)(param_1 + 0x30) * *(int *)(param_1 + 100)) >> 2);
LAB_00019446:
      *(int *)(param_1 + 0x98) = iVar9;
    }
    else {
      if (iVar5 == 2) {
        *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x4c);
        *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x50) >> 1;
        iVar9 = *(int *)(param_1 + 100);
        *(int *)(param_1 + 0x90) = *(int *)(param_2 + 0x14) + iVar9;
        *(int *)(param_1 + 0x94) = *(int *)(param_2 + 0x18) + iVar9;
        iVar9 = *(int *)(param_2 + 0x18) + iVar9 + ((uint)(iVar9 * *(int *)(param_1 + 0x30)) >> 2);
        goto LAB_00019446;
      }
      if (iVar5 == 0) {
        uVar7 = *(uint *)(param_1 + 0x50);
        *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x4c);
        goto LAB_00019400;
      }
    }
    *(int *)(param_1 + 0xb4) = iVar5;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x2c);
    uVar8 = *(uint *)(param_2 + 0x30);
    if ((uVar7 == uVar8) && (*(int *)(param_1 + 0x30) == *(int *)(param_2 + 0x34)))
    goto LAB_000193a6;
    uVar6 = *(uint *)(param_2 + 0x28);
    if ((int)uVar7 < (int)(uVar6 + uVar8)) {
LAB_000192d2:
      __android_log_print(6,"awplayer",&DAT_000244a1,"H264SetIspInfo",0x424,"H264SetIspInfo",0x424,
                          uVar6,*(undefined4 *)(param_2 + 0x2c),uVar8,
                          *(undefined4 *)(param_2 + 0x34),uVar7,*(undefined4 *)(param_1 + 0x30));
      return 0xffffffff;
    }
    iVar5 = *(int *)(param_1 + 0x30);
    if ((((iVar5 < *(int *)(param_2 + 0x2c) + *(int *)(param_2 + 0x34)) || ((int)uVar8 < 0x20)) ||
        (*(int *)(param_2 + 0x34) < 0x20)) ||
       (((int)uVar7 < (int)uVar6 || (iVar5 < *(int *)(param_2 + 0x2c))))) goto LAB_000192d2;
    *(uint *)(param_1 + 200) = uVar6;
    uVar3 = *(uint *)(param_2 + 0x2c);
    *(uint *)(param_1 + 0xcc) = uVar3;
    uVar8 = *(uint *)(param_2 + 0x30) & 0xfffffff0;
    *(uint *)(param_1 + 0xd0) = uVar8;
    uVar2 = *(uint *)(param_2 + 0x34);
    *(uint *)(param_1 + 0xa4) = uVar6 & 0xf;
    iVar9 = uVar6 + uVar8;
    *(uint *)(param_1 + 0xa8) = uVar3 & 0xf;
    uVar2 = uVar2 & 0xfffffff0;
    *(uint *)(param_1 + 0xd4) = uVar2;
    uVar8 = uVar7;
    if ((int)uVar7 < iVar9) {
      uVar8 = *(uint *)(param_2 + 0x30);
    }
    uVar2 = uVar3 + uVar2;
    uVar6 = uVar6 & 0xfffffff0;
    if ((int)uVar7 < iVar9) {
      uVar8 = uVar8 & 0xfffffff0;
    }
    if ((int)uVar7 < iVar9) {
      *(uint *)(param_1 + 0xd0) = uVar8;
    }
    uVar7 = uVar2;
    if (iVar5 < (int)uVar2) {
      uVar7 = *(uint *)(param_2 + 0x34) & 0xfffffff0;
    }
    if (iVar5 < (int)uVar2) {
      *(uint *)(param_1 + 0xd4) = uVar7;
    }
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0xd0) >> 4;
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0xd4) >> 4;
    iVar9 = *(int *)(param_1 + 100) * (uVar3 & 0xfffffff0);
    iVar4 = iVar9 >> 1;
    *(uint *)(param_1 + 0x90) = *(int *)(param_2 + 0x14) + iVar9 + uVar6;
    *(uint *)(param_1 + 0x94) = *(int *)(param_2 + 0x18) + iVar4 + uVar6;
    *(uint *)(param_1 + 0x98) =
         *(int *)(param_2 + 0x18) + uVar6 + ((uint)(*(int *)(param_1 + 100) * iVar5) >> 2) + iVar4;
  }
  iVar5 = *(int *)(param_1 + 0x1c0);
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x58);
    iVar5 = *(int *)(param_1 + 100) >> 4;
  }
  else {
    if ((iVar5 < 0) || (2 < iVar5)) goto LAB_00019480;
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x54);
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x58) >> 1;
    iVar5 = (*(int *)(param_1 + 100) >> 4) << 1;
  }
  *(int *)(param_1 + 0x80) = iVar5;
LAB_00019480:
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0xbc);
  uVar1 = __aeabi_uidiv(*(undefined4 *)(param_1 + 0x68),0x5a);
  iVar5 = *(int *)(param_1 + 0xd88);
  bVar10 = iVar5 != 1;
  if (bVar10) {
    iVar5 = *(int *)(param_1 + 0x40);
  }
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0xed0);
  if (bVar10) {
    *(int *)(param_1 + 0x8c) = iVar5;
  }
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0xed4);
  if (!bVar10) {
    uVar1 = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0x10;
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x78) = uVar1;
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x80) = uVar1;
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 8);
  return 0;
}



// WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00019534
// WARNING: Could not reconcile some variable overlaps
// WARNING: Restarted to delay deadcode elimination for space: register

float insert_p_skip(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  bool bVar10;
  uint in_fpscr;
  undefined4 extraout_s0;
  undefined4 uVar11;
  undefined8 in_d0;
  double extraout_d0;
  double extraout_d0_00;
  float fVar12;
  float fVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int local_78;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  int local_5c;
  undefined8 local_58;
  uint local_50;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  
  uVar1 = BitStreamWriteOffset(*(undefined4 *)(param_1 + 4));
  extraout_s0 = (undefined4)in_d0;
  iVar2 = BitStreamFreeBufferSize(extraout_s0,*(undefined4 *)(param_1 + 4));
  fVar4 = *(float *)(param_1 + 0x730);
  if (*(float *)(param_1 + 0x730) != 0.0) {
    uVar15 = VectorSub(*(undefined8 *)(param_1 + 0xd98),*(undefined8 *)(param_1 + 0x720),8);
    uVar15 = __aeabi_ldivmod(extraout_s0,(int)((ulonglong)in_d0 >> 0x20),
                             (int)*(undefined8 *)(param_1 + 0xd98),(int)uVar15,
                             (int)((ulonglong)uVar15 >> 0x20),1000,0);
    uVar16 = __aeabi_ldivmod(extraout_s0,*(undefined4 *)(param_1 + 0x728),
                             *(undefined4 *)(param_1 + 0x72c),0xfffffc18,0xffffffff);
    uVar15 = VectorAdd(uVar15,uVar16,8);
    *(undefined8 *)(param_1 + 0xf10) = uVar15;
    dVar14 = (double)__aeabi_l2d(extraout_s0,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
    iVar3 = __aeabi_idiv(extraout_s0,1000000,*(undefined4 *)(param_1 + 0x1bc));
    dVar14 = dVar14 / (double)(longlong)iVar3;
    fVar13 = (float)dVar14;
    fVar12 = ROUND(fVar13);
    fVar4 = (float)(longlong)(int)fVar12 + 0.8;
    if (-1 < (int)(in_fpscr & 0xfffffff | (uint)(fVar13 < fVar4) << 0x1f |
                   (uint)(fVar13 == fVar4) << 0x1e | (uint)(fVar4 <= fVar13) << 0x1d)) {
      fVar12 = (float)((int)fVar12 + 1);
    }
    fVar4 = fVar12;
    if ((fVar12 != 0.0) &&
       (((*(int *)(param_1 + 0xf1c) == 0 || (*(int *)(param_1 + 0x1a4) << 0x1f < 0)) ||
        (fVar4 = *(float *)(param_1 + 0xf18), fVar4 != 0.0)))) {
      iVar3 = *(int *)(param_1 + 0x1e0);
      bVar10 = iVar3 == 0x12;
      if (bVar10) {
        iVar3 = *(int *)(param_1 + 0x1b0);
      }
      if (bVar10) {
        *(int *)(param_1 + 0x1a4) = iVar3;
      }
      *(undefined4 *)(param_1 + 0x1e0) = 0;
      fVar4 = 0.0;
      *(undefined *)(param_1 + 0x712) = 0;
      do {
        if ((*(int *)(param_1 + 0x1c4) == 1) ||
           (*(undefined4 *)(param_1 + 0x1c0) = 0, *(int *)(param_1 + 0x1c4) != 0)) {
          *(undefined4 *)(param_1 + 0x1c0) = 1;
          local_78 = 2;
          do {
            uVar11 = SUB84(dVar14,0);
            getSkipPoc(uVar11,param_1,*(undefined *)(param_1 + 0x1c0));
            p_skip_frame_encode(uVar11,&local_68,param_1);
            iVar3 = local_64;
            uVar9 = *(undefined4 *)(param_1 + 0x1bc);
            local_50 = *(uint *)(param_1 + 0xda0);
            local_5c = local_64;
            if (*(int *)(param_1 + 0x1e0) == 0x12) {
              local_50 = local_50 | 1;
            }
            local_60 = uVar1;
            uVar5 = __aeabi_idiv(uVar11,1000000000,uVar9);
            uVar6 = *(uint *)(param_1 + 0x720);
            uVar7 = uVar6 + uVar5;
            iVar8 = *(int *)(param_1 + 0x724) + ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar6,uVar5);
            *(uint *)(param_1 + 0x720) = uVar7;
            *(int *)(param_1 + 0x724) = iVar8;
            local_58 = CONCAT44(iVar8,uVar7);
            uVar5 = __aeabi_idiv(uVar11,1000000,uVar9);
            uVar6 = *(uint *)(param_1 + 0xf10);
            *(uint *)(param_1 + 0xf10) = uVar6 - uVar5;
            *(uint *)(param_1 + 0xf14) =
                 (*(int *)(param_1 + 0xf14) - ((int)uVar5 >> 0x1f)) - (uint)(uVar6 < uVar5);
            if (iVar2 < iVar3) {
              __android_log_print(uVar11,6,"awplayer",&DAT_00024531,"insert_p_skip");
            }
            local_48 = *(int *)(param_1 + 0x1dc);
            iVar3 = local_48 + *(int *)(param_1 + 0xef4);
            local_38 = *(int *)(param_1 + 0x730);
            *(int *)(param_1 + 0xef4) = iVar3;
            local_3c = *(undefined4 *)(param_1 + 0x1a4);
            local_40 = *(undefined4 *)(param_1 + 0xef8);
            local_44 = SUB84(ROUND((double)(longlong)iVar3 / (double)(longlong)(local_38 + 1) + 0.5)
                             ,0);
            iVar3 = BitStreamAddOneBitstream(uVar11,*(undefined4 *)(param_1 + 4),&local_60);
            if (iVar3 != 0) {
              return -NAN;
            }
            local_78 = local_78 + -1;
            dVar14 = extraout_d0_00;
          } while (local_78 != 0);
          *(undefined4 *)(param_1 + 0x720) = (undefined4)local_58;
          *(undefined4 *)(param_1 + 0x724) = local_58._4_4_;
        }
        else {
          uVar9 = SUB84(dVar14,0);
          getSkipPoc(uVar9,param_1);
          p_skip_frame_encode(uVar9,&local_68,param_1);
          local_50 = *(uint *)(param_1 + 0xda0);
          if (*(int *)(param_1 + 0x1e0) == 0x12) {
            local_50 = local_50 | 1;
          }
          local_60 = local_68;
          local_58 = VectorAdd(*(undefined8 *)(param_1 + 0x720),*(undefined8 *)(param_1 + 0x728),8);
          local_5c = local_64;
          *(undefined8 *)(param_1 + 0x720) = local_58;
          if (iVar2 < local_64) {
            __android_log_print(uVar9,6,"awplayer",&DAT_00024531,"insert_p_skip");
          }
          local_48 = *(int *)(param_1 + 0x1dc);
          iVar3 = local_48 + *(int *)(param_1 + 0xef4);
          local_38 = *(int *)(param_1 + 0x730);
          local_40 = *(undefined4 *)(param_1 + 0xef8);
          local_3c = *(undefined4 *)(param_1 + 0x1a4);
          *(int *)(param_1 + 0xef4) = iVar3;
          local_44 = SUB84(ROUND((double)(longlong)iVar3 / (double)(longlong)(local_38 + 1) + 0.5),0
                          );
          iVar3 = BitStreamAddOneBitstream(uVar9,*(undefined4 *)(param_1 + 4),&local_60);
          dVar14 = extraout_d0;
          if (iVar3 != 0) {
            __android_log_print(SUB84(extraout_d0,0),6,"awplayer",&DAT_00024564,"insert_p_skip");
            return -NAN;
          }
        }
        fVar4 = (float)((int)fVar4 + 1);
        iVar3 = *(int *)(param_1 + 0x1a4) + 1;
        iVar8 = *(int *)(param_1 + 0xf18) + 1;
        *(int *)(param_1 + 0x1a4) = iVar3;
        *(int *)(param_1 + 0xf18) = iVar8;
        *(int *)(param_1 + 0x730) = *(int *)(param_1 + 0x730) + 1;
      } while (fVar4 != fVar12);
      fVar4 = 0.0;
      if (iVar3 < *(int *)(param_1 + 0x1b0)) {
        *(undefined4 *)(param_1 + 0x1e0) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x1a4) = 0;
        if (*(int *)(param_1 + 0xd80) == 0) {
          iVar8 = 0;
        }
        *(int *)(param_1 + 0xf18) = iVar8;
        *(undefined4 *)(param_1 + 0x1e0) = 0x12;
      }
    }
  }
  return fVar4;
}



undefined4 H264EncMotionDetect(int param_1)

{
  ushort uVar1;
  void *__ptr;
  undefined4 uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ushort uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  void *pvVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  bool bVar22;
  uint local_3c;
  
  uVar11 = *(uint *)(param_1 + 0x54);
  uVar13 = *(uint *)(param_1 + 0x58);
  __ptr = malloc(uVar13 * uVar11 * 8);
  uVar5 = uVar11 + 3 & 0xfffffffc;
  iVar8 = uVar5 * uVar13 * 8;
  if (__ptr == (void *)0x0) {
    __android_log_print(6,"awplayer",&DAT_0002458f,"H264EncMotionDetect",0xac1);
    uVar2 = 0xffffffff;
  }
  else {
    local_3c = uVar13;
    if (*(int *)(param_1 + 0x1c4) != 0) {
      local_3c = uVar13 >> 1;
    }
    iVar9 = 0;
    iVar17 = 0;
    iVar16 = 0;
    while (iVar16 < (int)uVar13) {
      iVar15 = iVar17 << 3;
      iVar19 = 0;
      while (iVar19 < (int)uVar5) {
        if (iVar19 < (int)uVar11) {
          uVar6 = *(uint *)(*(int *)(param_1 + 0x228) + iVar15 + 4);
          uVar21 = (uVar6 << 9) >> 0x18;
          bVar22 = (uVar21 & 0x80) != 0;
          if (bVar22) {
            uVar21 = uVar21 | 0xfe00;
          }
          uVar3 = (uVar6 << 0x11) >> 0x19;
          if (bVar22) {
            uVar21 = uVar21 | 0x180;
          }
          uVar1 = (ushort)((uVar6 << 0x18) >> 0x10);
          uVar14 = uVar1 >> 0xb;
          if ((int)(uVar6 << 0x11) < 0) {
            uVar3 = uVar3 | 0xffc0;
          }
          uVar7 = *(uint *)(*(int *)(param_1 + 0x228) + iVar15) >> 0x1e | (uVar6 & 7) << 2;
          uVar4 = (ushort)uVar7;
          if ((int)(uVar6 << 0x18) < 0) {
            uVar14 = uVar1 >> 0xb | 0xffe0;
          }
          bVar22 = (int)(uVar7 << 0x1b) < 0;
          if (bVar22) {
            uVar4 = uVar4 | 0xfe00;
          }
          pvVar18 = (void *)((int)__ptr + iVar9 * 8);
          if (bVar22) {
            uVar4 = uVar4 | 0x1e0;
          }
          *(uint *)((int)__ptr + iVar9 * 8) = (uVar6 << 6) >> 0x1d;
          iVar9 = iVar9 + 1;
          *(ushort *)((int)pvVar18 + 4) = uVar14 + (short)(uVar21 << 2);
          *(ushort *)((int)pvVar18 + 6) = uVar4 + (short)(uVar3 << 2);
        }
        iVar19 = iVar19 + 1;
        iVar15 = iVar15 + 8;
      }
      iVar16 = iVar16 + 1;
      iVar17 = iVar17 + (uVar5 & ~((int)(uVar11 + 3) >> 0x1f));
    }
    iVar19 = uVar11 << 1;
    iVar17 = *(int *)(param_1 + 0xd3c) + 4;
    iVar16 = 0;
    iVar9 = 2;
    while (iVar9 < (int)((local_3c & 0xfffffffc) - 2)) {
      iVar15 = 2;
      while (iVar15 < (int)((uVar11 & 0xfffffffc) - 2)) {
        iVar20 = 5;
        pvVar18 = (void *)((int)__ptr + (iVar15 + iVar19) * 8);
        iVar12 = 0;
        while (iVar20 = iVar20 + -1, iVar20 != 0) {
          iVar10 = 0;
          do {
            if ((1 < *(int *)((int)pvVar18 + iVar10) - 9U) &&
               ((uVar13 = (uint)*(ushort *)((int)pvVar18 + iVar10 + 4),
                uVar5 = (int)(uVar13 << 0x10) >> 0x1f & 0xffff,
                0xc < ((uVar5 ^ uVar13) - uVar5 & 0xff) ||
                (uVar13 = (uint)*(ushort *)((int)pvVar18 + iVar10 + 6),
                uVar5 = (int)(uVar13 << 0x10) >> 0x1f & 0xffff,
                0xc < ((uVar5 ^ uVar13) - uVar5 & 0xff))))) {
              iVar12 = iVar12 + 1;
            }
            iVar10 = iVar10 + 8;
          } while (iVar10 != 0x20);
          pvVar18 = (void *)((int)pvVar18 + uVar11 * 8);
        }
        if (iVar17 < iVar12) {
          iVar16 = iVar16 + 1;
        }
        if (iVar17 >> 1 < iVar16) {
          free(__ptr);
          EncAdapterMemFlushCache(*(undefined4 *)(param_1 + 0x228),iVar8);
          return 1;
        }
        iVar15 = iVar15 + 4;
      }
      iVar9 = iVar9 + 4;
      iVar19 = iVar19 + uVar11 * 4;
    }
    free(__ptr);
    EncAdapterMemFlushCache(*(undefined4 *)(param_1 + 0x228),iVar8);
    uVar2 = 0;
  }
  return uVar2;
}



// WARNING: Could not reconcile some variable overlaps

undefined4 H264EncFrame(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int extraout_r1;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 uVar11;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined4 extraout_s0_03;
  undefined4 extraout_s0_04;
  undefined4 extraout_s0_05;
  undefined8 extraout_d0;
  double dVar12;
  undefined8 uVar13;
  int local_60;
  int local_5c;
  undefined8 local_58;
  uint local_50;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  
  iVar10 = param_1[4];
  iVar2 = BitStreamWriteOffset(param_1[1]);
  bVar1 = false;
  iVar3 = BitStreamFreeBufferSize(extraout_s0,param_1[1]);
  uVar13 = extraout_d0;
  while( true ) {
    param_1[0x70] = 0;
    iVar4 = H264SetIspInfo((int)uVar13,param_1,param_2);
    if (iVar4 < 0) {
      return 0xffffffff;
    }
    if ((uint)param_1[2] < 0x1634 || param_1[2] == 0x1651) {
      uVar11 = SetIspRegister_old_version(extraout_s0_00);
    }
    else {
      uVar11 = SetIspRegister(extraout_s0_00,*param_1,param_1 + 0x1b);
    }
    uVar8 = *(undefined4 *)(iVar10 + 0x14);
    *(undefined4 *)(iVar10 + 0x14) = 0xf;
    uVar6 = *(uint *)(iVar10 + 0x1c) | 7;
    *(uint *)(iVar10 + 0x1c) = uVar6;
    uVar11 = flm_flag(uVar11,param_1,uVar6,0xf,uVar8);
    if (param_1[0x11f] != 0) {
      uVar11 = init_classify_engine(uVar11,param_1,iVar10);
    }
    if (param_1[0x11e] != 0) {
      uVar11 = init_temporalfilter(uVar11,param_1,iVar10);
    }
    if (param_1[0x397] != 0) {
      uVar11 = init_dynamicMe(uVar11,param_1,iVar10);
    }
    *(int *)(iVar10 + 0x88) = iVar2 << 3;
    *(undefined4 *)(iVar10 + 0x80) = param_1[5];
    *(undefined4 *)(iVar10 + 0x84) = param_1[6];
    *(int *)(iVar10 + 0x8c) = (iVar3 + iVar2) * 8;
    *(undefined4 *)(iVar10 + 0xa0) = param_1[param_1[0x119] + 0x7f];
    *(undefined4 *)(iVar10 + 0xa4) = param_1[param_1[0x119] + 0x84];
    *(undefined4 *)(iVar10 + 0xb0) = param_1[param_1[0x11a] + 0x7f];
    *(undefined4 *)(iVar10 + 0xb4) = param_1[param_1[0x11a] + 0x84];
    uVar6 = param_1[2] - 0x1639;
    if (uVar6 != 0) {
      uVar6 = 1;
    }
    if (param_1[2] == 0x1650) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar6 & 1;
    }
    if (uVar6 != 0) {
      *(undefined4 *)(iVar10 + 0xb8) = param_1[param_1[0x3a8] + 0x39e];
      *(undefined4 *)(iVar10 + 0xbc) = param_1[param_1[0x3a9] + 0x39e];
    }
    if (param_1[0x3c8] != 0) {
      uVar11 = InitPrefixNAL(uVar11,param_1,iVar10);
    }
    uVar11 = StartSlice(uVar11,param_1,*(undefined *)(param_1 + 0x70),iVar10);
    iVar4 = EncAdapterVeWaitInterrupt(uVar11);
    if (iVar4 != 0) {
      uVar11 = EncAdapterPrintTopVEReg(extraout_s0_01);
      uVar11 = EncAdapterPrintEncReg(uVar11);
      uVar11 = EncAdapterPrintIspReg(uVar11);
      __android_log_print(uVar11,6,"awplayer",&DAT_000245bf,"H264EncFrame",0x796);
      return 0xffffffff;
    }
    *(undefined4 *)(iVar10 + 0x1c) = *(undefined4 *)(iVar10 + 0x1c);
    local_50 = *(uint *)(param_2 + 0x10);
    local_5c = (*(uint *)(iVar10 + 0x90) >> 3) - iVar2;
    if (param_1[0x78] == 0x12) {
      local_50 = local_50 | 1;
    }
    if ((param_1[0x3c1] == 0) || (param_1[0x1cc] == 0)) {
      local_58 = *(undefined8 *)(param_2 + 8);
    }
    else {
      local_58 = VectorAdd(*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(param_1 + 0x1ca),8);
    }
    uVar11 = extraout_s0_01;
    local_60 = iVar2;
    if (iVar3 < local_5c) {
      uVar11 = __android_log_print(extraout_s0_01,6,"awplayer",&DAT_00024531,"H264EncFrame",0x7bd,
                                   local_5c,iVar3);
    }
    iVar4 = local_5c;
    if (param_1[0x361] != 0) goto LAB_00019e32;
    local_48 = param_1[0x77];
    iVar5 = param_1[0x3bd];
    local_38 = param_1[0x1cc];
    iVar9 = param_1[0x3b8];
    param_1[0x3bd] = local_48 + iVar5;
    local_40 = param_1[0x3be];
    local_3c = param_1[0x69];
    dVar12 = (double)(longlong)(local_48 + iVar5) / (double)(longlong)(local_38 + 1);
    local_44 = SUB84(ROUND(dVar12 + 0.5),0);
    uVar11 = SUB84(dVar12,0);
    if (iVar9 == 1) break;
    if ((iVar9 == 0) || (iVar9 != 2)) goto LAB_00019e26;
    if (bVar1) {
LAB_00019e1c:
      uVar11 = BitStreamAddOneBitstream(uVar11,param_1[1],&local_60);
      goto LAB_00019e32;
    }
    if (param_1[0x78] == 0x12) {
      uVar6 = (uint)param_1[0x3b9] >> 3;
      if (local_5c < (int)uVar6) goto LAB_00019e1c;
      uVar11 = __android_log_print(uVar11,3,"awplayer","<%s:%u>:  stream_info.nStreamLength, %d, %d"
                                   ,"H264EncFrame",0x7f9,local_5c,uVar6);
      iVar4 = local_5c;
      iVar9 = 3;
      iVar5 = __aeabi_idiv(uVar11,local_5c,uVar6);
      if (iVar5 - 1U < 3) {
        iVar9 = (int)"H264EncOpen"[iVar5 + 0xb];
      }
      uVar8 = 0x80b;
      pcVar7 = "<%s:%u>: I, stream_info.nStreamLength(bits): %d, nRencodelevel: %d";
      uVar11 = extraout_s0_02;
    }
    else {
      if (local_5c < (int)((uint)param_1[0x3ba] >> 3)) goto LAB_00019e1c;
      iVar9 = 3;
      iVar5 = __aeabi_idiv(uVar11,local_5c);
      if (iVar5 - 1U < 3) {
        iVar9 = (int)"insert_p_skip"[iVar5 + 0xd];
      }
      uVar8 = 0x828;
      pcVar7 = "<%s:%u>: p, stream_info.nStreamLength(bits): %d, nRencodelevel: %d";
      uVar11 = extraout_s0_03;
    }
    uVar13 = __android_log_print(uVar11,3,"awplayer",pcVar7,"H264EncFrame",uVar8,iVar4 << 3,iVar9);
    bVar1 = true;
    iVar9 = param_1[0x77] + iVar9;
    if (0x32 < iVar9) {
      iVar9 = 0x33;
    }
    param_1[0x77] = iVar9;
  }
  if (param_1[0x78] == 0x12) {
    if ((int)((uint)param_1[0x3b9] >> 3) <= local_5c) {
      param_1[0x3bb] = 1;
      __android_log_print(uVar11,3,"awplayer","<%s:%u>: I, stream_info.nStreamLength(bits): %d",
                          "H264EncFrame",0x7d2,local_5c << 3);
      return 0;
    }
  }
  else {
    if ((int)((uint)param_1[0x3ba] >> 3) <= local_5c) {
      param_1[0x3bb] = 1;
      __android_log_print(uVar11,3,"awplayer",
                          "<%s:%u>: p, stream_info.nStreamLength(bits):%d, nMaxPFrameBits:%d\n",
                          "H264EncFrame",0x7e1,local_5c << 3,param_1[0x3ba]);
      return 0;
    }
  }
LAB_00019e26:
  iVar2 = BitStreamAddOneBitstream(uVar11,param_1[1],&local_60);
  uVar11 = extraout_s0_04;
  if (iVar2 != 0) {
    return 0xffffffff;
  }
LAB_00019e32:
  param_1[0x1c8] = (undefined4)local_58;
  param_1[0x1c9] = local_58._4_4_;
  param_1[0x6a] = 0;
  param_1[100] = *(undefined4 *)(iVar10 + 0x50);
  param_1[0x65] = *(undefined4 *)(iVar10 + 0x54);
  param_1[0x66] = *(undefined4 *)(iVar10 + 0x58);
  param_1[0x67] = *(undefined4 *)(iVar10 + 0x5c);
  uVar8 = *(undefined4 *)(iVar10 + 0x40);
  param_1[0x1d4] = local_5c << 3;
  param_1[0x130] = uVar8;
  if (param_1[0x361] == 1) {
    *(undefined4 *)(param_2 + 0x14) = param_1[param_1[0x11a] + 0x7f];
    *(undefined4 *)(param_2 + 0x18) = param_1[param_1[0x11a] + 0x84];
  }
  if ((((param_1[0x34e] != 0) && (param_1[0x78] != 0x12)) &&
      (-1 < (int)((uint)*(byte *)((int)param_1 + 0xee) << 0x1f))) &&
     (uVar11 = __aeabi_idivmod(uVar11,param_1[0x69],param_1[0x35f]), extraout_r1 == 0)) {
    uVar11 = H264EncMotionDetect(uVar11,param_1);
    param_1[0x352] = uVar11;
    uVar11 = extraout_s0_05;
  }
  if (param_1[0x11e] != 0) {
    staticst_histogram(uVar11,param_1);
    return 0;
  }
  return 0;
}



undefined4 H264EncField(undefined4 *param_1,int param_2)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int extraout_r1;
  int iVar8;
  int iVar9;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 uStack76;
  uint local_48;
  
  iVar9 = param_1[4];
  uVar1 = *(undefined *)((int)param_1 + 0x712);
  param_1[0x70] = 1;
  iVar8 = 0;
  puVar6 = param_1;
  while (iVar8 < (int)param_1[0x79]) {
    if (puVar6[0x114] == 0) {
      param_1[0x11a] = iVar8;
      break;
    }
    iVar8 = iVar8 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar2 = param_1[2] - 0x1639;
  if (uVar2 != 0) {
    uVar2 = 1;
  }
  if (param_1[2] == 0x1650) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar2 & 1;
  }
  if (uVar2 != 0) {
    iVar8 = 0;
    puVar6 = param_1;
    while (iVar8 < (int)param_1[0x398]) {
      if (puVar6[0x3a3] == 0) {
        param_1[0x3a9] = iVar8;
        break;
      }
      iVar8 = iVar8 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  iVar8 = 2;
  do {
    iVar3 = BitStreamWriteOffset(param_1[1]);
    iVar4 = BitStreamFreeBufferSize(param_1[1]);
    iVar5 = H264SetIspInfo(param_1,param_2);
    if (iVar5 < 0) {
      return 0xffffffff;
    }
    if ((uint)param_1[2] < 0x1634 || param_1[2] == 0x1651) {
      SetIspRegister_old_version();
    }
    else {
      SetIspRegister(*param_1,param_1 + 0x1b);
    }
    *(undefined4 *)(iVar9 + 0x14) = 0xf;
    *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) | 7;
    if (param_1[0x11f] != 0) {
      init_classify_engine(param_1,iVar9);
    }
    if (param_1[0x11e] != 0) {
      init_temporalfilter(param_1,iVar9);
    }
    if (param_1[0x397] != 0) {
      init_dynamicMe(param_1,iVar9);
    }
    *(int *)(iVar9 + 0x88) = iVar3 << 3;
    *(undefined4 *)(iVar9 + 0x80) = param_1[5];
    *(undefined4 *)(iVar9 + 0x84) = param_1[6];
    *(int *)(iVar9 + 0x8c) = (iVar4 + iVar3) * 8;
    if (param_1[0x70] == 1) {
      *(undefined4 *)(iVar9 + 0xa0) = param_1[param_1[0x119] + 0x7f];
      *(undefined4 *)(iVar9 + 0xa4) = param_1[param_1[0x119] + 0x84];
      *(undefined4 *)(iVar9 + 0xb0) = param_1[param_1[0x11a] + 0x7f];
      *(undefined4 *)(iVar9 + 0xb4) = param_1[param_1[0x11a] + 0x84];
      uVar2 = param_1[2] - 0x1639;
      if (uVar2 != 0) {
        uVar2 = 1;
      }
      if (param_1[2] == 0x1650) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 & 1;
      }
      if (uVar2 != 0) {
        *(undefined4 *)(iVar9 + 0xb8) = param_1[param_1[0x3a8] + 0x39e];
        iVar5 = param_1[param_1[0x3a9] + 0x39e];
LAB_0001a1c4:
        *(int *)(iVar9 + 0xbc) = iVar5;
      }
    }
    else {
      if (param_1[0x11b] == 0) {
        *(undefined4 *)(iVar9 + 0xa0) = param_1[param_1[0x11a] + 0x7f];
        *(undefined4 *)(iVar9 + 0xa4) = param_1[param_1[0x11a] + 0x84];
        uVar2 = param_1[2] - 0x1639;
        if (uVar2 != 0) {
          uVar2 = 1;
        }
        if (param_1[2] == 0x1650) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 & 1;
        }
        if (uVar2 != 0) {
          iVar5 = param_1[param_1[0x3a9] + 0x39e];
          goto LAB_0001a170;
        }
      }
      else {
        *(undefined4 *)(iVar9 + 0xa0) = param_1[param_1[0x119] + 0x7f] + param_1[0x111];
        *(undefined4 *)(iVar9 + 0xa4) = param_1[param_1[0x119] + 0x84] + param_1[0x112];
        uVar2 = param_1[2] - 0x1639;
        if (uVar2 != 0) {
          uVar2 = 1;
        }
        if (param_1[2] == 0x1650) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 & 1;
        }
        if (uVar2 != 0) {
          iVar5 = param_1[param_1[0x3a8] + 0x39e] + param_1[0x113];
LAB_0001a170:
          *(int *)(iVar9 + 0xb8) = iVar5;
        }
      }
      *(undefined4 *)(iVar9 + 0xb0) = param_1[param_1[0x11a] + 0x7f] + param_1[0x111];
      *(undefined4 *)(iVar9 + 0xb4) = param_1[param_1[0x11a] + 0x84] + param_1[0x112];
      uVar2 = param_1[2] - 0x1639;
      if (uVar2 != 0) {
        uVar2 = 1;
      }
      if (param_1[2] == 0x1650) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 & 1;
      }
      if (uVar2 != 0) {
        iVar5 = param_1[param_1[0x3a9] + 0x39e] + param_1[0x113];
        goto LAB_0001a1c4;
      }
    }
    StartSlice(param_1,*(undefined *)(param_1 + 0x70),iVar9);
    iVar5 = EncAdapterVeWaitInterrupt();
    if (iVar5 != 0) {
      EncAdapterPrintTopVEReg();
      EncAdapterPrintEncReg();
      EncAdapterPrintIspReg();
      __android_log_print(6,"awplayer",&DAT_000245bf,"H264EncField",0x543);
      return 0xffffffff;
    }
    *(undefined4 *)(iVar9 + 0x1c) = *(undefined4 *)(iVar9 + 0x1c);
    local_48 = *(uint *)(param_2 + 0x10);
    if (param_1[0x78] == 0x12) {
      local_48 = local_48 | 1;
    }
    local_54 = (*(uint *)(iVar9 + 0x90) >> 3) - iVar3;
    local_50 = *(undefined4 *)(param_2 + 8);
    uStack76 = *(undefined4 *)(param_2 + 0xc);
    local_58 = iVar3;
    if (iVar4 < local_54) {
      __android_log_print(6,"awplayer",&DAT_0002471e,"H264EncField",0x55c);
    }
    iVar3 = BitStreamAddOneBitstream(param_1[1],&local_58);
    if (iVar3 != 0) {
      return 0xffffffff;
    }
    param_1[0x1c8] = local_50;
    param_1[0x1c9] = uStack76;
    param_1[0x6a] = 0;
    if (param_1[0x70] == 1) {
      param_1[100] = *(int *)(iVar9 + 0x50);
      param_1[0x65] = *(undefined4 *)(iVar9 + 0x54);
      uVar7 = *(undefined4 *)(iVar9 + 0x58);
      param_1[0x78] = 0;
      param_1[0x1d4] = local_54 << 3;
      param_1[0x66] = uVar7;
      *(undefined *)((int)param_1 + 0x712) = 0;
    }
    else {
      param_1[100] = param_1[100] + *(int *)(iVar9 + 0x50);
      param_1[0x65] = param_1[0x65] + *(int *)(iVar9 + 0x54);
      param_1[0x66] = param_1[0x66] + *(int *)(iVar9 + 0x58);
      *(undefined *)((int)param_1 + 0x712) = uVar1;
      param_1[0x1d4] = param_1[0x1d4] + local_54 * 8;
    }
    param_1[0x70] = 2;
    param_1[0x67] = *(undefined4 *)(iVar9 + 0x5c);
    if ((((param_1[0x34e] != 0) && (param_1[0x78] != 0x12)) &&
        (-1 < (int)((uint)*(byte *)((int)param_1 + 0xee) << 0x1f))) &&
       (__aeabi_idivmod(param_1[0x69],param_1[0x35f]), extraout_r1 == 0)) {
      uVar7 = H264EncMotionDetect(param_1);
      param_1[0x352] = uVar7;
    }
    if (param_1[0x11e] != 0) {
      staticst_histogram(param_1);
    }
    iVar8 = iVar8 + -1;
    if (iVar8 == 0) {
      param_1[param_1[0x119] + 0x114] = 0;
      param_1[0x11b] = 1;
      param_1[0x119] = param_1[0x11a];
      param_1[param_1[0x11a] + 0x114] = 1;
      uVar2 = param_1[2] - 0x1639;
      if (uVar2 != 0) {
        uVar2 = 1;
      }
      if (param_1[2] == 0x1650) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 & 1;
      }
      if (uVar2 != 0) {
        param_1[param_1[0x3a8] + 0x3a3] = 0;
        param_1[0x3aa] = 1;
        param_1[0x3a8] = param_1[0x3a9];
        param_1[param_1[0x3a9] + 0x3a3] = 1;
      }
      return 0;
    }
  } while( true );
}



undefined4 H264EncEncode(int param_1,void *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  void *__dest;
  int iVar6;
  
  *(undefined4 *)(param_1 + 0xd84) = 0;
  *(undefined4 *)(param_1 + 0xd88) = 0;
  if (*(int *)(param_1 + 0xefc) == 0) {
    *(uint *)(param_1 + 0xefc) = (uint)(*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x44)) >> 1;
  }
  iVar1 = BitStreamFreeBufferSize(*(undefined4 *)(param_1 + 4));
  if (iVar1 < *(int *)(param_1 + 0xefc)) {
    uVar2 = BitStreamFreeBufferSize(*(undefined4 *)(param_1 + 4));
    uVar3 = *(uint *)(*(int *)(param_1 + 4) + 0x10);
    uVar4 = uVar3 & ~((int)uVar3 >> 0x20);
    if ((int)uVar3 < 0) {
      uVar4 = uVar3 + 0x3ff;
    }
    __android_log_print(6,"awplayer",&DAT_00023f60,"H264EncEncode",0x876,uVar2,(int)uVar4 >> 10,
                        param_4);
    return 2;
  }
  __dest = (void *)(param_1 + 0xd90);
  memcpy(__dest,param_2,0xb0);
  EncAdapterResetEncoder();
  EncAdapterEnableEncoder();
  if ((*(int *)(param_1 + 0xf00) != 0) &&
     (*(int *)(param_1 + 8) == 0x1651 || *(int *)(param_1 + 8) == 0x1623)) {
    if ((*(uint *)(param_1 + 0x730) & 1) == 0) {
      bVar5 = *(byte *)(param_1 + 0xec) & 0x3f | 0x80;
    }
    else {
      bVar5 = *(byte *)(param_1 + 0xec) & 0x3f;
    }
    *(byte *)(param_1 + 0xec) = bVar5;
  }
  if (*(int *)(param_1 + 0xf04) != 0) {
    *(undefined4 *)(param_1 + 0xd80) = 0;
    iVar1 = __aeabi_idiv(1000000000,*(undefined4 *)(param_1 + 0x1bc));
    *(int *)(param_1 + 0x728) = iVar1;
    *(int *)(param_1 + 0x72c) = iVar1 >> 0x1f;
    iVar1 = insert_p_skip(param_1);
    if (iVar1 < 0) {
      return 0xffffffff;
    }
  }
  if (*(int *)(param_1 + 0x1ac) != 0) {
    *(undefined4 *)(param_1 + 0x1ac) = 0;
    *(undefined4 *)(param_1 + 0x1a4) = 0;
    *(undefined4 *)(param_1 + 0x1e0) = 0x12;
  }
  if (*(int *)(param_1 + 0x1e0) == 0x12) {
    iVar6 = *(int *)(param_1 + 0x730);
    iVar1 = *(int *)(param_1 + 0x738);
    *(int *)(param_1 + 0x734) = iVar6;
    if (iVar6 <= iVar1) {
      *(int *)(param_1 + 0x738) = iVar1;
    }
    if (iVar1 < iVar6) {
      *(int *)(param_1 + 0x738) = iVar6;
    }
  }
  if ((((*(int *)(param_1 + 0xd80) != 0) && (*(int *)(param_1 + 0x730) != 0)) &&
      (*(int *)(param_1 + 0x1e0) == 0x12)) && (*(int *)(param_1 + 0x1c4) == 0)) {
    *(undefined4 *)(param_1 + 0xd84) = 1;
  }
  if (0x1666 < *(uint *)(param_1 + 8)) {
    if (*(int *)(param_1 + 0xd84) == 1) {
      bVar5 = *(byte *)(param_1 + 0xe5) | 2;
    }
    else {
      bVar5 = *(byte *)(param_1 + 0xe5) & 0xfd;
    }
    *(byte *)(param_1 + 0xe5) = bVar5;
  }
  if ((*(int *)(param_1 + 0xd80) != 0) && (*(int *)(param_1 + 0xd84) == 1)) {
    *(undefined *)(param_1 + 0x712) = 0;
    if (*(int *)(param_1 + 0x1dc) < 0x1f) {
      *(undefined4 *)(param_1 + 0x1dc) = 1;
    }
    else {
      *(int *)(param_1 + 0x1dc) = *(int *)(param_1 + 0x1dc) + -6;
    }
    H264EncFrame(param_1,__dest);
    *(undefined4 *)(param_1 + 0xd84) = 0;
    if (0x1666 < *(uint *)(param_1 + 8)) {
      *(byte *)(param_1 + 0xe5) = *(byte *)(param_1 + 0xe5) & 0xfd;
    }
    *(undefined4 *)(param_1 + 0xd88) = 1;
  }
  if (*(int *)(param_1 + 0x1e0) == 0x12) {
    *(undefined4 *)(param_1 + 0x46c) = 0;
    *(undefined *)(param_1 + 0x712) = 2;
    *(undefined4 *)(param_1 + 0xea8) = 0;
  }
  else {
    *(char *)(param_1 + 0x712) = (char)*(int *)(param_1 + 0x1e0);
  }
  getPoc(param_1,*(undefined *)(param_1 + 0x1c4));
  if (*(int *)(param_1 + 0xeec) == 0) {
    if (*(int *)(param_1 + 0xe44) == 0) {
      rcInitPic(param_1);
    }
    else {
      if (*(char *)(param_1 + 0x712) == '\x02') {
        uVar2 = *(undefined4 *)(param_1 + 0xe48);
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0xe4c);
      }
      *(undefined4 *)(param_1 + 0x1dc) = uVar2;
      switch_T_SVC_QP(param_1);
    }
  }
  else {
    if (*(int *)(param_1 + 0x1dc) < 0x32) {
      iVar1 = *(int *)(param_1 + 0x1dc) + 1;
    }
    else {
      iVar1 = 0x33;
    }
    *(int *)(param_1 + 0x1dc) = iVar1;
    *(undefined4 *)(param_1 + 0xeec) = 0;
  }
  if (*(int *)(param_1 + 0x1c4) == 0) {
    iVar1 = H264EncFrame();
  }
  else {
    iVar1 = H264EncField(param_1,__dest);
  }
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0xeec) != 0) goto LAB_0001a66c;
  if (*(int *)(param_1 + 0xe44) == 0) {
    rcUpdatePic(param_1);
  }
  if (*(int *)(param_1 + 0xf1c) == 0) {
    iVar1 = *(int *)(param_1 + 0x74c);
LAB_0001a606:
    *(int *)(param_1 + 0x74c) = iVar1 + 1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x74c);
    if (((*(uint *)(param_1 + 0x1a4) & 1) == 0) || (0 < *(int *)(param_1 + 0xf18)))
    goto LAB_0001a606;
  }
  *(uint *)(param_1 + 0x74c) = *(uint *)(param_1 + 0x74c) & (1 << *(sbyte *)(param_1 + 0x6f4)) - 1U;
  iVar1 = *(int *)(param_1 + 0x1a4) + 1;
  *(int *)(param_1 + 0x1a4) = iVar1;
  if ((*(int *)(param_1 + 0x1b0) == 0) || (iVar1 < *(int *)(param_1 + 0x1b0))) {
    *(undefined4 *)(param_1 + 0x1e0) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x1a4) = 0;
    iVar1 = *(int *)(param_1 + 0xd80);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0xf18);
    }
    *(int *)(param_1 + 0xf18) = iVar1;
    *(undefined4 *)(param_1 + 0x1e0) = 0x12;
    *(int *)(param_1 + 0xef8) = *(int *)(param_1 + 0xef8) + 1;
  }
  *(int *)(param_1 + 0x730) = *(int *)(param_1 + 0x730) + 1;
LAB_0001a66c:
  EncAdapterDisableEncoder();
  return 0;
}



undefined4 CheckRegValue_h264(uint param_1,uint *param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 10000;
  do {
    iVar2 = iVar2 + -1;
    if ((*param_2 & param_1) == param_3) {
      if (iVar2 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = 0;
      }
      return uVar1;
    }
  } while (iVar2 != 0);
  return 0xffffffff;
}



void FUN_0001a6b4(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = CheckRegValue_h264(0x200,param_3 + 0x1c,0x200,param_4,param_1,param_2);
  if (iVar1 < 0) {
    __android_log_print(6,"awplayer",&DAT_00024761,"PutBits",0x3d);
  }
  else {
    *(undefined4 *)(param_3 + 0x20) = param_1;
    *(uint *)(param_3 + 0x18) = param_2 << 8 | 1;
  }
  return;
}



void FUN_0001a700(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  uVar2 = param_1 + 1U;
  while (uVar2 = uVar2 >> 1, uVar2 != 0 && uVar1 < 0x21) {
    uVar1 = uVar1 + 1;
  }
  FUN_0001a6b4(param_1 + 1U,uVar1 * 2 + 1,param_2);
  return;
}



void PutVlcSE(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 < 1) {
    uVar1 = param_1 * -2;
  }
  else {
    uVar1 = param_1 << 1;
  }
  uVar2 = 0;
  uVar3 = uVar1;
  while (uVar3 = uVar3 >> 1, uVar3 != 0 && uVar2 < 0x21) {
    uVar2 = uVar2 + 1;
  }
  FUN_0001a6b4(uVar1 + (param_1 < 1),uVar2 * 2 + 1,param_2);
  return;
}



undefined8 RbspTrailingBits(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  FUN_0001a6b4(1,1,param_1,param_4,param_1,param_2,param_3);
  do {
    iVar1 = *(int *)(param_1 + 0x1c);
  } while (iVar1 == 0);
  uVar2 = *(uint *)(param_1 + 0x90);
  iVar3 = 8 - (uVar2 & 7);
  FUN_0001a6b4(0,iVar3,param_1);
  return CONCAT44(iVar1,iVar3 + uVar2);
}



void initVUI(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  FUN_0001a6b4(*(undefined *)(param_1 + 0xf28),1,param_2);
  if ((*(char *)(param_1 + 0xf28) != '\0') &&
     (FUN_0001a6b4(*(undefined *)(param_1 + 0xf2a),8,param_2), *(char *)(param_1 + 0xf2a) == -1)) {
    FUN_0001a6b4(*(ushort *)(param_1 + 0xf2c) >> 8,8,param_2);
    FUN_0001a6b4(*(undefined *)(param_1 + 0xf2c),8,param_2);
    FUN_0001a6b4(*(ushort *)(param_1 + 0xf2e) >> 8,8,param_2);
    FUN_0001a6b4(*(undefined *)(param_1 + 0xf2e),8,param_2);
  }
  FUN_0001a6b4(*(undefined *)(param_1 + 0xf30),1,param_2);
  FUN_0001a6b4(*(undefined *)(param_1 + 0xf31),1,param_2);
  if (*(char *)(param_1 + 0xf31) == '\0') goto LAB_0001a8d8;
  iVar3 = *(int *)(param_1 + 0xed4);
  if (iVar3 == 2) {
LAB_0001a846:
    iVar3 = 5;
LAB_0001a84e:
    *(int *)(param_1 + 0xf40) = iVar3;
  }
  else {
    if (iVar3 == 1) {
LAB_0001a842:
      *(char *)(param_1 + 0xf38) = (char)iVar3;
      goto LAB_0001a846;
    }
    iVar3 = *(int *)(param_1 + 0xed0);
    if (iVar3 == 2) {
      iVar3 = 1;
      goto LAB_0001a842;
    }
    if (iVar3 == 1) goto LAB_0001a84e;
  }
  FUN_0001a6b4(*(undefined4 *)(param_1 + 0xf34),3,param_2);
  FUN_0001a6b4(*(undefined *)(param_1 + 0xf38),1,param_2);
  iVar3 = *(int *)(param_1 + 0xf40);
  if (iVar3 != 0) {
    iVar3 = 1;
  }
  FUN_0001a6b4(iVar3,1,param_2);
  if (*(int *)(param_1 + 0xf40) == 0) goto LAB_0001a8d8;
  FUN_0001a6b4(*(int *)(param_1 + 0xf40),8,param_2);
  uVar1 = *(uint *)(param_1 + 0xf40);
  if ((uVar1 < 8) && (uVar4 = 1 << (uVar1 & 0xff), (uVar4 & 0xde) == 0)) {
    if ((uVar4 & 0x20) == 0) {
      if (-1 < (int)(uVar4 << 0x1f)) goto LAB_0001a8c4;
      FUN_0001a6b4(0,8,param_2);
      uVar2 = 1;
    }
    else {
      FUN_0001a6b4(6,8,param_2);
      uVar2 = 5;
    }
  }
  else {
LAB_0001a8c4:
    FUN_0001a6b4(uVar1,8,param_2);
    uVar2 = *(undefined4 *)(param_1 + 0xf40);
  }
  FUN_0001a6b4(uVar2,8,param_2);
LAB_0001a8d8:
  FUN_0001a6b4(*(undefined *)(param_1 + 0xf44),1,param_2);
  FUN_0001a6b4(*(undefined *)(param_1 + 0xf45),1,param_2);
  FUN_0001a6b4(*(undefined *)(param_1 + 0xf46),1,param_2);
  FUN_0001a6b4(*(undefined *)(param_1 + 0xf47),1,param_2);
  FUN_0001a6b4(*(undefined *)(param_1 + 0xf48),1,param_2);
  FUN_0001a6b4(*(undefined *)(param_1 + 0xf49),1,param_2);
  return;
}



int InitSPS(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 0x90);
  FUN_0001a6b4(0,8,param_2,param_4,param_4);
  FUN_0001a6b4(0,8,param_2);
  FUN_0001a6b4(0,8,param_2);
  FUN_0001a6b4(1,8,param_2);
  FUN_0001a6b4(0x67,8,param_2);
  *(undefined *)(param_1 + 0x4cd) = *(undefined *)(param_1 + 0x6ec);
  FUN_0001a6b4(*(undefined *)(param_1 + 0x6ec),8,param_2);
  FUN_0001a6b4(0,8,param_2);
  *(undefined *)(param_1 + 0x4d2) = *(undefined *)(param_1 + 0x6f0);
  FUN_0001a6b4(*(undefined *)(param_1 + 0x6f0),8,param_2);
  FUN_0001a700(0,param_2);
  if (*(char *)(param_1 + 0x4cd) == 'd') {
    FUN_0001a700(1,param_2);
    FUN_0001a700(0,param_2);
    FUN_0001a700(0,param_2);
    FUN_0001a6b4(0,1,param_2);
    FUN_0001a6b4(0,1,param_2);
  }
  *(byte *)(param_1 + 0x4d3) = *(byte *)(param_1 + 0x6f4);
  FUN_0001a700(*(byte *)(param_1 + 0x6f4) - 4,param_2);
  *(undefined *)(param_1 + 0x4d4) = *(undefined *)(param_1 + 0x6fc);
  FUN_0001a700(*(undefined *)(param_1 + 0x6fc),param_2);
  if (*(char *)(param_1 + 0x4d4) == '\0') {
    *(byte *)(param_1 + 0x4d5) = *(byte *)(param_1 + 0x6f5);
    FUN_0001a700(*(byte *)(param_1 + 0x6f5) - 4,param_2);
  }
  uVar2 = (uint)*(byte *)(param_1 + 0x711);
  *(byte *)(param_1 + 0x4d6) = *(byte *)(param_1 + 0x711);
  if (*(int *)(param_1 + 0x1c4) != 0) {
    uVar2 = uVar2 + 1;
  }
  FUN_0001a700(uVar2,param_2);
  iVar3 = *(int *)(param_1 + 0xf1c);
  if (iVar3 != 0) {
    iVar3 = 1;
  }
  *(char *)(param_1 + 0x4d7) = (char)iVar3;
  FUN_0001a6b4(iVar3,1,param_2);
  *(int *)(param_1 + 0x4dc) = *(int *)(param_1 + 0x54);
  FUN_0001a700(*(int *)(param_1 + 0x54) + -1,param_2);
  uVar2 = *(uint *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x4e4) = uVar2;
  bVar1 = *(int *)(param_1 + 0x1c4) != 0;
  if (bVar1) {
    *(uint *)(param_1 + 0x4d8) = uVar2 >> 1;
    FUN_0001a700((uVar2 >> 1) - 1,param_2);
    *(undefined *)(param_1 + 0x4e0) = 0;
    FUN_0001a6b4(0,1,param_2);
    *(undefined *)(param_1 + 0x4e8) = 0;
  }
  else {
    *(uint *)(param_1 + 0x4d8) = uVar2;
    FUN_0001a700(uVar2 - 1,param_2);
    *(undefined *)(param_1 + 0x4e0) = 1;
  }
  FUN_0001a6b4(!bVar1,1,param_2);
  *(undefined *)(param_1 + 0x4e9) = 1;
  FUN_0001a6b4(1,1,param_2);
  if ((*(int *)(param_1 + 0x44) == *(int *)(param_1 + 0x34)) &&
     (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x38))) {
    FUN_0001a6b4(0,1,param_2);
  }
  else {
    FUN_0001a6b4(1,1,param_2);
    FUN_0001a700(0,param_2);
    uVar2 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x34);
    *(uint *)(param_1 + 0x4ec) = uVar2;
    FUN_0001a700(uVar2 >> 1,param_2);
    FUN_0001a700(0,param_2);
    uVar2 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x4f0) = uVar2;
    FUN_0001a700(uVar2 >> (2 - *(byte *)(param_1 + 0x4e0) & 0xff),param_2);
  }
  if ((*(int *)(param_1 + 0xed4) == 2) && (*(int *)(param_1 + 0xf24) == 0)) {
    *(undefined4 *)(param_1 + 0xf24) = 1;
    *(undefined *)(param_1 + 0xf31) = 1;
    *(undefined4 *)(param_1 + 0xf34) = 5;
  }
  FUN_0001a6b4(*(undefined4 *)(param_1 + 0xf24),1,param_2);
  if (*(int *)(param_1 + 0xf24) != 0) {
    initVUI(param_1,param_2);
  }
  iVar3 = RbspTrailingBits(param_2);
  iVar4 = iVar3 - iVar4 >> 3;
  if (iVar4 < 0) {
    iVar4 = iVar4 + *(int *)(param_1 + 0x1c);
  }
  return iVar4;
}



int InitPPS(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_2 + 0x90);
  FUN_0001a6b4(0,8,param_2);
  FUN_0001a6b4(0,8,param_2);
  FUN_0001a6b4(0,8,param_2);
  FUN_0001a6b4(1,8,param_2);
  FUN_0001a6b4(0x68,8,param_2);
  *(undefined *)(param_1 + 0x5ec) = 0;
  FUN_0001a700(0,param_2);
  *(undefined *)(param_1 + 0x5ed) = 0;
  FUN_0001a700(0,param_2);
  *(undefined *)(param_1 + 0x5ee) = *(undefined *)(param_1 + 0x6fd);
  FUN_0001a6b4(*(undefined *)(param_1 + 0x6fd),1,param_2);
  *(undefined *)(param_1 + 0x5ef) = 0;
  FUN_0001a6b4(0,1,param_2);
  FUN_0001a700(0,param_2);
  uVar3 = (uint)*(byte *)(param_1 + 0x70f);
  if (*(int *)(param_1 + 0x1c4) != 0) {
    uVar3 = (uVar3 + 1) * 2 & 0xff;
  }
  *(char *)(param_1 + 0x5f0) = (char)uVar3;
  FUN_0001a700(uVar3 - 1,param_2);
  uVar3 = (uint)*(byte *)(param_1 + 0x710);
  if (*(int *)(param_1 + 0x1c4) != 0) {
    uVar3 = (uVar3 + 1) * 2 & 0xff;
  }
  *(char *)(param_1 + 0x5f1) = (char)uVar3;
  FUN_0001a700(uVar3 - 1,param_2);
  *(undefined *)(param_1 + 0x5f2) = 0;
  FUN_0001a6b4(0,1,param_2);
  *(undefined *)(param_1 + 0x5f3) = 0;
  FUN_0001a6b4(0,2,param_2);
  *(undefined *)(param_1 + 0x5f4) = 0x1a;
  PutVlcSE(0,param_2);
  PutVlcSE(0,param_2);
  *(undefined *)(param_1 + 0x5f5) = *(undefined *)(param_1 + 0x70c);
  PutVlcSE(*(undefined *)(param_1 + 0x70c),param_2);
  *(undefined *)(param_1 + 0x5f7) = 1;
  FUN_0001a6b4(1,1,param_2);
  *(undefined *)(param_1 + 0x5f8) = *(undefined *)(param_1 + 0x70d);
  FUN_0001a6b4(*(undefined *)(param_1 + 0x70d),1,param_2);
  *(undefined *)(param_1 + 0x5f9) = 0;
  FUN_0001a6b4(0,1);
  cVar1 = *(char *)(param_1 + 0x6ff);
  *(char *)(param_1 + 0x5fa) = cVar1;
  if ((*(char *)(param_1 + 0x4cd) == 'd') && (cVar1 != '\0')) {
    FUN_0001a6b4(cVar1,1,param_2);
    *(undefined *)(param_1 + 0x5fb) = 0;
    FUN_0001a6b4(0,1);
    *(undefined *)(param_1 + 0x5f6) = *(undefined *)(param_1 + 0x5f5);
    PutVlcSE(*(undefined *)(param_1 + 0x5f5),param_2);
  }
  iVar4 = RbspTrailingBits(param_2);
  iVar2 = iVar4 - iVar2 >> 3;
  if (iVar2 < 0) {
    iVar2 = iVar2 + *(int *)(param_1 + 0x1c);
  }
  return iVar2;
}



void InitPrefixNAL(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  *(byte *)(param_1 + 0xdf) = *(byte *)(param_1 + 0xdf) | 0x80;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xdc);
  FUN_0001a6b4(0,8,param_2);
  FUN_0001a6b4(0,8,param_2);
  FUN_0001a6b4(0,8,param_2);
  FUN_0001a6b4(1,8,param_2);
  if (*(int *)(param_1 + 0x1e0) == 0x12) {
    uVar1 = 0x6e;
    *(undefined *)(param_1 + 0x70e) = 1;
  }
  else {
    if ((*(int *)(param_1 + 0x1a4) << 0x1f < 0) && (*(int *)(param_1 + 0xf18) < 1)) {
      uVar1 = 0xe;
      *(undefined *)(param_1 + 0x70e) = 0;
    }
    else {
      uVar1 = 0x4e;
      *(undefined *)(param_1 + 0x70e) = 1;
    }
  }
  FUN_0001a6b4(uVar1,8,param_2);
  FUN_0001a6b4(1,1,param_2);
  FUN_0001a6b4(*(int *)(param_1 + 0x1e0) == 0x12,1,param_2);
  FUN_0001a6b4(0,6,param_2);
  FUN_0001a6b4(1,1,param_2);
  FUN_0001a6b4(0,3,param_2);
  FUN_0001a6b4(0,4,param_2);
  iVar3 = *(int *)(param_1 + 0xf20);
  if (iVar3 == 3) {
    uVar2 = *(uint *)(param_1 + 0x1a4) & 3;
    if ((uVar2 != 0) && (uVar2 = 1, (int)(*(uint *)(param_1 + 0x1a4) << 0x1f) < 0)) {
      uVar2 = 2;
    }
    goto LAB_0001adce;
  }
  if (iVar3 == 4) {
    uVar4 = *(uint *)(param_1 + 0x1a4);
    uVar2 = uVar4 & 7;
    if (uVar2 != 0) {
      if ((uVar4 & 3) == 0) goto LAB_0001adca;
      uVar2 = 2;
      if ((int)(uVar4 << 0x1f) < 0) {
        uVar2 = 3;
        iVar3 = 3;
        goto LAB_0001adce;
      }
    }
  }
  else {
    uVar2 = 0;
    if ((iVar3 == 2) && (uVar2 = *(uint *)(param_1 + 0x1a4) & 1, uVar2 != 0)) {
LAB_0001adca:
      uVar2 = 1;
    }
  }
  iVar3 = 3;
LAB_0001adce:
  FUN_0001a6b4(uVar2,iVar3,param_2);
  FUN_0001a6b4(0,1,param_2);
  FUN_0001a6b4(0,1,param_2);
  FUN_0001a6b4(1,1,param_2);
  FUN_0001a6b4(3,2,param_2);
  FUN_0001a6b4(0,1,param_2);
  FUN_0001a6b4(0,1,param_2);
  RbspTrailingBits(param_2);
  return;
}



void SliceHeader(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  
  uVar9 = *(uint *)(param_1 + 0x1a4);
  iVar8 = *(int *)(param_1 + 0xf18);
  if (*(int *)(param_1 + 0x1e0) == 1) {
    uVar5 = 0;
LAB_0001ae62:
    *(undefined *)(param_1 + 0x70e) = uVar5;
  }
  else {
    if ((*(uint *)(param_1 + 0xf1c) < 9) &&
       ((1 << (*(uint *)(param_1 + 0xf1c) & 0xff) & 0x114U) != 0)) {
      bVar10 = (uVar9 & 1) == 0;
    }
    else {
      bVar10 = true;
    }
    *(bool *)(param_1 + 0x70e) = bVar10;
    if (0 < iVar8) {
      uVar5 = 1;
      goto LAB_0001ae62;
    }
  }
  *(undefined *)(param_1 + 0x70f) = 1;
  *(byte *)(param_1 + 0xdf) = *(byte *)(param_1 + 0xdf) | 0x80;
  *(undefined *)(param_1 + 0x710) = 1;
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 0xdc);
  FUN_0001a6b4(0,8,param_3);
  FUN_0001a6b4(0,8,param_3);
  FUN_0001a6b4(0,8,param_3);
  FUN_0001a6b4(1,8,param_3);
  *(byte *)(param_1 + 0xdf) = *(byte *)(param_1 + 0xdf) & 0x7f;
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 0xdc);
  uVar2 = 0x65;
  if ((*(int *)(param_1 + 0x1e0) != 0x12) && (uVar2 = 0x41, *(char *)(param_1 + 0x70e) == '\0')) {
    uVar2 = 1;
  }
  FUN_0001a6b4(uVar2,8,param_3);
  FUN_0001a700(0,param_3);
  FUN_0001a700(*(byte *)(param_1 + 0x712) + 5,param_3);
  FUN_0001a700(*(undefined *)(param_1 + 0x5ec),param_3);
  FUN_0001a6b4(*(undefined4 *)(param_1 + 0x74c),*(undefined *)(param_1 + 0x4d3),param_3);
  cVar1 = *(char *)(param_1 + 0x4e0);
  if (cVar1 == '\0') {
    FUN_0001a6b4(1,1,param_3);
    iVar7 = param_2;
    if (param_2 != 1) {
      if (param_2 != 2) goto LAB_0001af32;
      cVar1 = '\x01';
      iVar7 = 1;
    }
    FUN_0001a6b4(cVar1,iVar7,param_3);
  }
LAB_0001af32:
  if (*(int *)(param_1 + 0x1e0) == 0x12) {
    FUN_0001a700(0,param_3);
  }
  if (*(char *)(param_1 + 0x4d4) == '\0') {
    uVar4 = (uint)*(byte *)(param_1 + 0x4d5);
    if (param_2 == 1) {
      uVar3 = (1 << uVar4) - 1;
LAB_0001af6c:
      uVar6 = *(uint *)(param_1 + 0x740);
    }
    else {
      uVar3 = (1 << uVar4) - 1;
      if (param_2 != 2) goto LAB_0001af6c;
      uVar6 = *(uint *)(param_1 + 0x744);
    }
    *(uint *)(param_1 + 0x6f8) = uVar3 & uVar6;
    FUN_0001a6b4(uVar3 & uVar6,uVar4,param_3);
  }
  if (*(char *)(param_1 + 0x712) == '\x01') {
    FUN_0001a6b4(0,1,param_3);
  }
  if (*(char *)(param_1 + 0x712) != '\x02') {
    uVar4 = (uint)*(byte *)(param_1 + 0x70f) - (uint)*(byte *)(param_1 + 0x5f0);
    if (uVar4 != 0) {
      uVar4 = 1;
    }
    if ((*(char *)(param_1 + 0x712) == '\x01') &&
       (*(char *)(param_1 + 0x710) != *(char *)(param_1 + 0x5f1))) {
      uVar4 = uVar4 | 1;
    }
    FUN_0001a6b4(uVar4,1,param_3);
    if ((uVar4 != 0) &&
       (FUN_0001a700(*(byte *)(param_1 + 0x70f) - 1,param_3), *(char *)(param_1 + 0x712) == '\x01'))
    {
      FUN_0001a700(*(byte *)(param_1 + 0x710) - 1,param_3);
    }
  }
  if (*(char *)(param_1 + 0x712) == '\x01') {
    FUN_0001a6b4(0,1,param_3);
    FUN_0001a6b4(0,1,param_3);
  }
  if (*(char *)(param_1 + 0x712) != '\0') goto LAB_0001b0a6;
  iVar7 = *(int *)(param_1 + 0xf1c);
  uVar9 = uVar9 - iVar8;
  if (iVar7 < 8) {
    if (3 < iVar7) goto LAB_0001b03e;
    if (1 < iVar7) goto LAB_0001b06a;
LAB_0001b09c:
    FUN_0001a6b4(0,1,param_3);
  }
  else {
    if ((uVar9 & 7) == 0) {
      FUN_0001a6b4(1,1,param_3);
      FUN_0001a700(0,param_3);
      if (*(int *)(param_1 + 0xf18) < 5) {
        iVar8 = *(int *)(param_1 + 0xf18) + 3;
      }
      else {
        iVar8 = 7;
      }
    }
    else {
LAB_0001b03e:
      if ((uVar9 & 3) == 0) {
        FUN_0001a6b4(1,1,param_3);
        FUN_0001a700(0,param_3);
        if (*(int *)(param_1 + 0xf18) < 3) {
          iVar8 = *(int *)(param_1 + 0xf18) + 1;
        }
        else {
          iVar8 = 3;
        }
      }
      else {
LAB_0001b06a:
        if (((uVar9 & 1) != 0) || (*(int *)(param_1 + 0xf18) < 1)) goto LAB_0001b09c;
        FUN_0001a6b4(1,1,param_3);
        FUN_0001a700(0,param_3);
        iVar8 = 1;
      }
    }
    FUN_0001a700(iVar8,param_3);
    FUN_0001a700(3,param_3);
  }
LAB_0001b0a6:
  if (*(char *)(param_1 + 0x70e) != '\0') {
    if (*(int *)(param_1 + 0x1e0) == 0x12) {
      FUN_0001a6b4(0,1,param_3);
    }
    FUN_0001a6b4(0,1,param_3);
  }
  if ((*(char *)(param_1 + 0x5ee) != '\0') && (*(char *)(param_1 + 0x712) != '\x02')) {
    FUN_0001a700(*(undefined *)(param_1 + 0x6fe),param_3);
  }
  PutVlcSE(*(int *)(param_1 + 0x1dc) - (uint)*(byte *)(param_1 + 0x5f4),param_3);
  if ((*(char *)(param_1 + 0x5f7) != '\0') &&
     (FUN_0001a700(*(undefined *)(param_1 + 0x700),param_3), *(char *)(param_1 + 0x700) != '\x01'))
  {
    PutVlcSE(*(undefined4 *)(param_1 + 0x704),param_3);
    PutVlcSE(*(undefined4 *)(param_1 + 0x708),param_3);
    return;
  }
  return;
}



void StartSlice(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int extraout_r1;
  undefined4 uVar4;
  undefined uVar5;
  byte bVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  
  if (*(int *)(param_1 + 0xe40) == 0) {
    SliceHeader();
  }
  else {
    *(byte *)(param_1 + 0xdd) = *(byte *)(param_1 + 0xdd) & 0x7f;
    *(byte *)(param_1 + 0xdf) =
         *(byte *)(param_1 + 0xdf) & 0x60 | 0x20 | (byte)*(undefined4 *)(param_1 + 0x74c) & 0xf;
    if (*(int *)(param_1 + 0x1e0) == 0x12) {
      uVar5 = 3;
    }
    else {
      if (*(int *)(param_1 + 0x1e0) == 0) {
        uVar5 = 2;
      }
      else {
        uVar5 = 0;
      }
    }
    *(undefined *)(param_1 + 0x70e) = uVar5;
    if (*(char *)(param_1 + 0x6fc) == '\0') {
      if (param_2 == 1) {
        uVar7 = *(uint *)(param_1 + 0x740) & (1 << *(sbyte *)(param_1 + 0x6f5)) - 1U;
      }
      else {
        uVar7 = param_2;
        if (param_2 == 2) {
          uVar7 = *(uint *)(param_1 + 0x744);
        }
        if (param_2 != 2) {
          uVar7 = *(uint *)(param_1 + 0x740);
        }
        uVar7 = (1 << *(sbyte *)(param_1 + 0x6f5)) - 1U & uVar7;
      }
      *(uint *)(param_1 + 0x6f8) = uVar7;
    }
    *(char *)(param_1 + 0xe9) = (char)(*(int *)(param_1 + 0xe40) >> 4);
    *(char *)(param_1 + 0xea) = (char)*(undefined4 *)(param_1 + 0x6f8);
    *(byte *)(param_1 + 0xeb) =
         *(byte *)(param_1 + 0xeb) & 0xe0 | *(char *)(param_1 + 0x6f5) - 4U & 7 |
         (*(byte *)(param_1 + 0x70e) & 3) << 3;
  }
  if (*(char *)(param_1 + 0x712) == '\x02') {
    *(byte *)(param_1 + 0xdc) = *(byte *)(param_1 + 0xdc) & 0x8f;
    bVar6 = *(byte *)(param_1 + 0xdd) & 0xf3;
  }
  else {
    *(byte *)(param_1 + 0xdc) = *(byte *)(param_1 + 0xdc) & 0x8f | 0x10;
    bVar6 = *(byte *)(param_1 + 0xdd) & 0xf3 | (*(byte *)(param_1 + 0x6fe) & 3) << 2;
  }
  *(byte *)(param_1 + 0xdd) = bVar6;
  if (param_2 == 2) {
    bVar6 = *(byte *)(param_1 + 0xdc) & 0xfc | 2;
    if (*(int *)(param_1 + 0x46c) == 0) {
      bVar6 = *(byte *)(param_1 + 0xdc) & 0xf0 | 6;
    }
    else {
LAB_0001b248:
      bVar6 = bVar6 & 0xf3 | (byte)(param_2 << 2) & 0xc;
    }
    *(byte *)(param_1 + 0xdc) = bVar6;
  }
  else {
    if (param_2 == 1) {
      bVar6 = *(byte *)(param_1 + 0xdc) & 0xfc | 1;
      goto LAB_0001b248;
    }
  }
  *(byte *)(param_1 + 0xdd) = *(byte *)(param_1 + 0xdd) & 0xfe | *(byte *)(param_1 + 0x6fd) & 1;
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 0xdc);
  bVar6 = (byte)*(undefined4 *)(param_1 + 0x1dc);
  if (*(uint *)(param_1 + 8) < 0x1667) {
    bVar6 = bVar6 & 0x3f;
    puVar8 = (undefined4 *)(param_1 + 0xe0);
    *(byte *)(param_1 + 0xe1) = *(byte *)(param_1 + 0xe1) & 0xc0 | bVar6;
    *(byte *)(param_1 + 0xe0) = *(byte *)(param_1 + 0xe0) & 0xc0 | bVar6;
  }
  else {
    puVar8 = (undefined4 *)(param_1 + 0xe4);
    *(byte *)puVar8 = *(byte *)(param_1 + 0xe4) & 0xc0 | bVar6 & 0x3f;
  }
  bVar2 = false;
  iVar13 = 0;
  *(undefined4 *)(param_3 + 8) = *puVar8;
  *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_1 + 0x18c);
  iVar11 = param_1;
  do {
    iVar14 = iVar13 * 0x1c;
    iVar13 = iVar13 + 1;
    memcpy((void *)(param_1 + iVar14 + 0x11c),(void *)(param_1 + iVar14 + 0xdcc),0x1c);
    piVar1 = (int *)(iVar11 + 0x11c);
    iVar11 = iVar11 + 0x1c;
    if (*piVar1 != 0) {
      bVar2 = true;
    }
  } while (iVar13 != 4);
  if (bVar2) {
    iVar13 = 0;
    *(byte *)(param_1 + 0xee) = *(byte *)(param_1 + 0xee) | 2;
    iVar11 = param_1;
    do {
      iVar14 = param_1 + (iVar13 + 0x40) * 4;
      if (*(int *)(iVar11 + 0x11c) == 0) {
        *(undefined *)(iVar14 + 4) = 0;
        *(undefined *)(iVar14 + 5) = 0;
        *(undefined *)(iVar14 + 6) = 0;
        *(undefined *)(iVar14 + 7) = 0;
        if (iVar13 == 2) {
          *(byte *)(param_1 + 0x102) = *(byte *)(param_1 + 0x102) & 0xc0;
        }
        else {
          if (iVar13 == 3) {
            *(byte *)(param_1 + 0x103) = *(byte *)(param_1 + 0x103) & 0xc0;
          }
          else {
            if (iVar13 == 1) {
              *(byte *)(param_1 + 0x101) = *(byte *)(param_1 + 0x101) & 0xc0;
            }
            else {
              *(byte *)(param_1 + 0x100) = *(byte *)(param_1 + 0x100) & 0xc0;
            }
          }
        }
      }
      else {
        *(char *)(iVar14 + 4) = (char)(*(int *)(iVar11 + 0x128) >> 4);
        *(char *)(iVar14 + 5) =
             (char)(*(int *)(iVar11 + 0x130) >> 4) + (char)(*(int *)(iVar11 + 0x128) >> 4) + -1;
        cVar3 = (char)((uint)(*(int *)(iVar11 + 300) << 0x14) >> 0x18);
        *(char *)(iVar14 + 6) = cVar3;
        *(char *)(iVar14 + 7) = cVar3 + (char)(*(int *)(iVar11 + 0x134) >> 4) + -1;
        if (iVar13 == 2) {
          *(byte *)(param_1 + 0x102) =
               *(byte *)(param_1 + 0x102) & 0xc0 | (byte)*(undefined4 *)(param_1 + 0x15c) & 0x3f;
        }
        else {
          if (iVar13 == 3) {
            *(byte *)(param_1 + 0x103) =
                 *(byte *)(param_1 + 0x103) & 0xc0 | (byte)*(undefined4 *)(param_1 + 0x178) & 0x3f;
          }
          else {
            if (iVar13 == 1) {
              *(byte *)(param_1 + 0x101) =
                   *(byte *)(param_1 + 0x101) & 0xc0 | (byte)*(undefined4 *)(param_1 + 0x140) & 0x3f
              ;
            }
            else {
              *(byte *)(param_1 + 0x100) =
                   *(byte *)(param_1 + 0x100) & 0xc0 | (byte)*(undefined4 *)(param_1 + 0x124) & 0x3f
              ;
            }
          }
        }
      }
      uVar4 = *(undefined4 *)(param_1 + iVar13 * 4 + 0x104);
      if (iVar13 == 2) {
        *(undefined4 *)(param_3 + 0xd8) = uVar4;
      }
      else {
        if (iVar13 == 3) {
          *(undefined4 *)(param_3 + 0xdc) = uVar4;
        }
        else {
          if (iVar13 != 1) {
            *(undefined4 *)(param_3 + 0xd0) = uVar4;
          }
          if (iVar13 == 1) {
            *(undefined4 *)(param_3 + 0xd4) = uVar4;
          }
        }
      }
      iVar13 = iVar13 + 1;
      iVar11 = iVar11 + 0x1c;
    } while (iVar13 != 4);
    *(undefined4 *)(param_3 + 0xcc) = *(undefined4 *)(param_1 + 0x100);
  }
  else {
    *(byte *)(param_1 + 0xee) = *(byte *)(param_1 + 0xee) & 0xfd | bVar2 << 1;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x438);
  *(undefined4 *)(param_3 + 0xc0) = uVar4;
  *(undefined4 *)(param_3 + 0xc4) = *(undefined4 *)(param_1 + 0x440);
  if ((*(int *)(param_1 + 0x1e0) == 1) || (*(int *)(param_1 + 0xd38) != 0)) {
    *(undefined4 *)(param_3 + 0x60) = *(undefined4 *)(param_1 + 0x224);
    bVar6 = *(byte *)(param_1 + 0xee) & 0xfe;
  }
  else {
    *(undefined4 *)(param_3 + 0x60) = *(undefined4 *)(param_1 + 0x224);
    bVar6 = *(byte *)(param_1 + 0xee) | 1;
  }
  *(byte *)(param_1 + 0xee) = bVar6;
  uVar9 = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(param_3 + 0x10) = uVar9;
  if ((param_2 != 0) || (*(int *)(param_1 + 0xe50) == 0)) {
    *(undefined4 *)(param_3 + 0x28) = 0;
    goto LAB_0001b4f8;
  }
  uVar12 = *(undefined4 *)(param_1 + 0x54);
  uVar10 = *(undefined4 *)(param_1 + 0xe54);
  iVar11 = __aeabi_uidiv(uVar12,uVar10,uVar4,uVar9,param_4);
  if (iVar11 == 0) {
    *(undefined4 *)(param_1 + 0xe50) = 0;
    goto LAB_0001b4f8;
  }
  __aeabi_uidivmod(uVar12,uVar10);
  iVar13 = *(int *)(param_1 + 0xe58);
  if (extraout_r1 == 0) {
LAB_0001b4aa:
    cVar3 = (char)iVar13 * (char)iVar11;
  }
  else {
    if (iVar13 < extraout_r1) {
      iVar11 = iVar11 + 1;
      goto LAB_0001b4aa;
    }
    iVar14 = extraout_r1;
    if (iVar13 != extraout_r1) {
      iVar14 = iVar11 * iVar13 + extraout_r1;
    }
    cVar3 = (char)iVar14;
    if (iVar13 == extraout_r1) {
      cVar3 = (char)iVar13 * ((char)iVar11 + '\x01');
    }
  }
  *(char *)(param_1 + 0xfe) = cVar3;
  *(char *)(param_1 + 0xfc) = cVar3 + (char)iVar11 + -1;
  *(byte *)(param_1 + 0xff) = *(byte *)(param_1 + 0xff) | 0x80;
  *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_1 + 0xfc);
  iVar11 = *(int *)(param_1 + 0xe58) + 1;
  *(int *)(param_1 + 0xe58) = iVar11;
  if (*(int *)(param_1 + 0xe54) <= iVar11) {
    *(undefined4 *)(param_1 + 0xe58) = 0;
  }
LAB_0001b4f8:
  *(undefined4 *)(param_3 + 0x18) = 8;
  return;
}



void _edata(void)

{
  int iVar1;
  char cVar2;
  int extraout_r1;
  int iVar3;
  undefined4 in_r3;
  int iVar4;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *(undefined4 *)(unaff_r5 + 0x60) = in_r3;
  *(byte *)(unaff_r4 + 0xee) = *(byte *)(unaff_r4 + 0xee) | 1;
  *(undefined4 *)(unaff_r5 + 0x10) = *(undefined4 *)(unaff_r4 + 0xec);
  if ((unaff_r6 != 0) || (*(int *)(unaff_r4 + 0xe50) == 0)) {
    *(undefined4 *)(unaff_r5 + 0x28) = 0;
    goto LAB_0001b4f8;
  }
  uVar6 = *(undefined4 *)(unaff_r4 + 0x54);
  uVar5 = *(undefined4 *)(unaff_r4 + 0xe54);
  iVar1 = __aeabi_uidiv(uVar6,uVar5);
  if (iVar1 == 0) {
    *(undefined4 *)(unaff_r4 + 0xe50) = 0;
    goto LAB_0001b4f8;
  }
  __aeabi_uidivmod(uVar6,uVar5);
  iVar4 = *(int *)(unaff_r4 + 0xe58);
  if (extraout_r1 == 0) {
LAB_0001b4aa:
    cVar2 = (char)iVar4 * (char)iVar1;
  }
  else {
    if (iVar4 < extraout_r1) {
      iVar1 = iVar1 + 1;
      goto LAB_0001b4aa;
    }
    iVar3 = extraout_r1;
    if (iVar4 != extraout_r1) {
      iVar3 = iVar1 * iVar4 + extraout_r1;
    }
    cVar2 = (char)iVar3;
    if (iVar4 == extraout_r1) {
      cVar2 = (char)iVar4 * ((char)iVar1 + '\x01');
    }
  }
  *(char *)(unaff_r4 + 0xfe) = cVar2;
  *(char *)(unaff_r4 + 0xfc) = cVar2 + (char)iVar1 + -1;
  *(byte *)(unaff_r4 + 0xff) = *(byte *)(unaff_r4 + 0xff) | 0x80;
  *(undefined4 *)(unaff_r5 + 0x28) = *(undefined4 *)(unaff_r4 + 0xfc);
  iVar1 = *(int *)(unaff_r4 + 0xe58) + 1;
  *(int *)(unaff_r4 + 0xe58) = iVar1;
  if (*(int *)(unaff_r4 + 0xe54) <= iVar1) {
    *(undefined4 *)(unaff_r4 + 0xe58) = 0;
  }
LAB_0001b4f8:
  *(undefined4 *)(unaff_r5 + 0x18) = 8;
  return;
}



void h264_init_Poc(int param_1)

{
  *(undefined *)(param_1 + 0x4d4) = 0;
  *(undefined4 *)(param_1 + 0x730) = 0;
  *(undefined4 *)(param_1 + 0x734) = 0;
  *(undefined4 *)(param_1 + 0x738) = 0;
  return;
}



void getPoc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x1e0);
  iVar2 = 0;
  if (iVar1 != 0x12) {
    iVar2 = (*(int *)(param_1 + 0x730) - *(int *)(param_1 + 0x738)) * 2;
  }
  *(int *)(param_1 + 0x740) = iVar2;
  iVar2 = *(int *)(param_1 + 0x740);
  if (param_2 != 0) {
    *(int *)(param_1 + 0x748) = iVar2;
    if (iVar1 == 0x12) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x74c);
    }
    *(int *)(param_1 + 0x744) = iVar2 + 1;
    *(undefined4 *)(param_1 + 0x74c) = uVar3;
    return;
  }
  *(int *)(param_1 + 0x744) = iVar2;
  *(int *)(param_1 + 0x748) = iVar2;
  if (iVar1 != 0x12) {
    param_2 = *(int *)(param_1 + 0x74c);
  }
  *(int *)(param_1 + 0x74c) = param_2;
  return;
}



void getSkipPoc(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (*(int *)(param_1 + 0x730) - *(int *)(param_1 + 0x738)) * 2;
  *(int *)(param_1 + 0x740) = iVar1;
  if (param_2 == 0) {
    *(int *)(param_1 + 0x744) = iVar1;
  }
  else {
    *(int *)(param_1 + 0x744) = iVar1 + 1;
  }
  *(int *)(param_1 + 0x748) = iVar1;
  return;
}



double QP2Qstep(undefined4 param_1)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  double dVar3;
  undefined4 local_48;
  undefined4 uStack68;
  undefined4 uStack64;
  undefined4 uStack60;
  undefined4 local_38;
  undefined4 uStack52;
  undefined4 uStack48;
  undefined4 uStack44;
  undefined4 local_28;
  undefined4 uStack36;
  undefined4 uStack32;
  undefined4 uStack28;
  
  local_48 = 0;
  uStack68 = 0x3fe40000;
  uStack64 = 0;
  uStack60 = 0x3fe60000;
  local_38 = 0;
  uStack52 = 0x3fea0000;
  uStack48 = 0;
  uStack44 = 0x3fec0000;
  local_28 = 0;
  uStack36 = 0x3ff00000;
  uStack32 = 0;
  uStack28 = 0x3ff20000;
  __aeabi_idivmod(param_1,6);
  dVar3 = *(double *)(&local_48 + extraout_r1 * 2);
  iVar1 = __aeabi_idiv(param_1,6);
  iVar2 = 0;
  while (iVar2 < iVar1) {
    dVar3 = dVar3 + dVar3;
    iVar2 = iVar2 + 1;
  }
  return dVar3;
}



int Qstep2QP(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = (double)CONCAT44(param_2,param_1);
  dVar4 = (double)QP2Qstep(0);
  if ((int)((uint)(dVar3 < dVar4) << 0x1f) < 0) {
    iVar2 = 0;
  }
  else {
    dVar4 = (double)QP2Qstep(0x33);
    if (dVar4 <= dVar3) {
      iVar2 = 0x33;
    }
    else {
      dVar4 = (double)QP2Qstep(5);
      iVar1 = 0;
      while (dVar4 <= dVar3) {
        dVar3 = dVar3 * 0.5;
        iVar1 = iVar1 + 1;
      }
      if (dVar3 <= 0.65625) {
        iVar2 = 0;
      }
      else {
        if (dVar3 <= 0.75) {
          iVar2 = 1;
        }
        else {
          if (dVar3 <= 0.84375) {
            iVar2 = 2;
          }
          else {
            if (dVar3 <= 0.9375) {
              iVar2 = 3;
            }
            else {
              if (dVar3 <= 1.0625) {
                iVar2 = 4;
              }
              else {
                iVar2 = 5;
              }
            }
          }
        }
      }
      iVar2 = iVar1 * 6 + iVar2;
    }
  }
  return iVar2;
}



int _end(void)

{
  int iVar1;
  int iVar2;
  double unaff_d8;
  double in_d16;
  double dVar3;
  
  if (in_d16 <= unaff_d8) {
    iVar2 = 0x33;
  }
  else {
    dVar3 = (double)QP2Qstep(5);
    iVar1 = 0;
    while (dVar3 <= unaff_d8) {
      unaff_d8 = unaff_d8 * 0.5;
      iVar1 = iVar1 + 1;
    }
    if (unaff_d8 <= 0.65625) {
      iVar2 = 0;
    }
    else {
      if (unaff_d8 <= 0.75) {
        iVar2 = 1;
      }
      else {
        if (unaff_d8 <= 0.84375) {
          iVar2 = 2;
        }
        else {
          if (unaff_d8 <= 0.9375) {
            iVar2 = 3;
          }
          else {
            if (unaff_d8 <= 1.0625) {
              iVar2 = 4;
            }
            else {
              iVar2 = 5;
            }
          }
        }
      }
    }
    iVar2 = iVar1 * 6 + iVar2;
  }
  return iVar2;
}



void RCModelEstimator(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  iVar2 = 0;
  iVar1 = param_2;
  piVar3 = param_3;
  while (iVar2 < param_2) {
    if (*piVar3 != 0) {
      iVar1 = iVar1 + -1;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x508) = 0;
  *(undefined4 *)(param_1 + 0x50c) = 0;
  *(undefined4 *)(param_1 + 0x500) = 0;
  *(undefined4 *)(param_1 + 0x504) = 0;
  if (0 < iVar1) {
    dVar6 = 0.0;
    iVar2 = 0;
    iVar1 = param_1;
    dVar7 = dVar6;
    dVar4 = dVar6;
    dVar8 = dVar6;
    dVar9 = dVar6;
    dVar10 = dVar6;
    while (iVar2 < param_2) {
      if (*param_3 == 0) {
        dVar4 = *(double *)(iVar1 + 0x260);
        dVar7 = dVar7 + 1.0 / dVar4;
        dVar8 = dVar8 + 1.0 / (dVar4 * dVar4);
        dVar9 = dVar9 + dVar4 * *(double *)(iVar1 + 0x308);
        dVar10 = dVar10 + 1.0;
        dVar6 = dVar6 + *(double *)(iVar1 + 0x308);
        dVar4 = dVar7;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 8;
      param_3 = param_3 + 1;
    }
    dVar5 = dVar10 * dVar8 - dVar7 * dVar4;
    if (dVar5 < 0.0) {
      iVar1 = (uint)(dVar5 < -1e-06) << 0x1f;
      if (-1 < iVar1) {
        param_3 = (int *)0x0;
      }
      if (iVar1 < 0) {
        param_3 = (int *)0x1;
      }
    }
    else {
      param_3 = (int *)(uint)(1e-06 <= dVar5);
    }
    if (param_3 == (int *)0x0) {
      *(undefined4 *)(double *)(param_1 + 0x500) = *(undefined4 *)(param_1 + 0x510);
      *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(param_1 + 0x514);
      *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(param_1 + 0x518);
      *(undefined4 *)(param_1 + 0x50c) = *(undefined4 *)(param_1 + 0x51c);
    }
    else {
      *(double *)(param_1 + 0x500) = (dVar9 * dVar8 - dVar6 * dVar7) / dVar5;
      *(double *)(param_1 + 0x508) = (dVar6 * dVar10 - dVar9 * dVar4) / dVar5;
    }
  }
  *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(param_1 + 0x500);
  *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(param_1 + 0x504);
  *(undefined4 *)(param_1 + 0x518) = *(undefined4 *)(param_1 + 0x508);
  *(undefined4 *)(param_1 + 0x51c) = *(undefined4 *)(param_1 + 0x50c);
  return;
}



void MADModelEstimator(uint param_1,int param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  iVar2 = 0;
  piVar4 = param_3;
  iVar5 = param_2;
  while (iVar2 < param_2) {
    if (*piVar4 != 0) {
      iVar5 = iVar5 + -1;
    }
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 1;
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  dVar6 = 0.0;
  iVar2 = 0;
  uVar3 = param_1;
  piVar4 = param_3;
  while (iVar2 < param_2) {
    if (*piVar4 == 0) {
      dVar6 = *(double *)(uVar3 + 0x110);
    }
    iVar2 = iVar2 + 1;
    uVar3 = uVar3 + 8;
    piVar4 = piVar4 + 1;
  }
  bVar1 = false;
  iVar2 = 0;
  uVar3 = param_1;
  piVar4 = param_3;
  while (iVar2 < param_2) {
    if ((*(double *)(uVar3 + 0x110) != dVar6) && (*piVar4 == 0)) {
      bVar1 = true;
    }
    if (*piVar4 == 0) {
      *(double *)(param_1 + 0x48) =
           *(double *)(param_1 + 0x48) +
           *(double *)(uVar3 + 0x110) / ((double)(longlong)iVar5 * *(double *)(uVar3 + 0x1b8));
    }
    iVar2 = iVar2 + 1;
    uVar3 = uVar3 + 8;
    piVar4 = piVar4 + 1;
  }
  if (iVar5 < 1) {
    bVar1 = false;
  }
  if (bVar1) {
    dVar9 = 0.0;
    iVar5 = 0;
    uVar3 = param_1;
    dVar6 = dVar9;
    dVar10 = dVar9;
    dVar11 = dVar9;
    dVar12 = dVar9;
    dVar7 = dVar9;
    while (iVar5 < param_2) {
      if (*param_3 == 0) {
        dVar7 = *(double *)(uVar3 + 0x1b8);
        dVar11 = dVar11 + dVar7 * dVar7;
        dVar9 = dVar9 + *(double *)(uVar3 + 0x110) * dVar7;
        dVar6 = dVar6 + dVar7;
        dVar12 = dVar12 + 1.0;
        dVar10 = dVar10 + *(double *)(uVar3 + 0x110);
        dVar7 = dVar6;
      }
      iVar5 = iVar5 + 1;
      uVar3 = uVar3 + 8;
      param_3 = param_3 + 1;
    }
    dVar8 = dVar12 * dVar11 - dVar6 * dVar7;
    if (dVar8 < 0.0) {
      iVar5 = (uint)(dVar8 < -1e-06) << 0x1f;
      if (-1 < iVar5) {
        uVar3 = 0;
      }
      if (iVar5 < 0) {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = (uint)(1e-06 <= dVar8);
    }
    if (uVar3 == 0) {
      dVar8 = dVar10 / dVar6;
    }
    else {
      *(double *)(param_1 + 0x50) = (dVar10 * dVar11 - dVar9 * dVar6) / dVar8;
      dVar8 = (dVar9 * dVar12 - dVar10 * dVar7) / dVar8;
    }
    *(double *)(param_1 + 0x48) = dVar8;
  }
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  return;
}



void updateMADModel(int param_1)

{
  int iVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 local_11c [19];
  double dStack208;
  undefined8 local_c8;
  
  iVar2 = *(int *)(param_1 + 0x544);
  if (0 < iVar2) {
    iVar5 = 0x13;
    iVar1 = param_1;
    do {
      *(undefined4 *)(iVar1 + 0x100) = *(undefined4 *)(iVar1 + 0xf8);
      *(undefined4 *)(iVar1 + 0x104) = *(undefined4 *)(iVar1 + 0xfc);
      *(undefined4 *)(iVar1 + 0x1a8) = *(undefined4 *)(iVar1 + 0xf8);
      *(undefined4 *)(iVar1 + 0x1ac) = *(undefined4 *)(iVar1 + 0xfc);
      *(undefined4 *)(iVar1 + 0x250) = *(undefined4 *)(iVar1 + 0x248);
      *(undefined4 *)(iVar1 + 0x254) = *(undefined4 *)(iVar1 + 0x24c);
      iVar1 = iVar1 + -8;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    dVar6 = *(double *)(param_1 + 0x558);
    *(double *)(param_1 + 0x68) = dVar6;
    *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_1 + 0x118);
    *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_1 + 0x11c);
    *(double *)(param_1 + 0x110) = dVar6;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 100);
    dVar7 = *(double *)(param_1 + 0x560);
    if (dVar7 <= dVar6) {
      dVar7 = (dVar7 * 20.0) / dVar6;
    }
    else {
      dVar7 = (dVar6 * 20.0) / dVar7;
    }
    iVar2 = iVar2 + -1;
    iVar1 = SUB84(ROUND(dVar7),0);
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    if (iVar2 <= iVar1) {
      iVar1 = iVar2;
    }
    if (*(int *)(param_1 + 0x524) < 0x14) {
      iVar2 = *(int *)(param_1 + 0x524) + 1;
    }
    else {
      iVar2 = 0x14;
    }
    if (iVar2 <= iVar1) {
      iVar1 = iVar2;
    }
    iVar2 = 0;
    *(int *)(param_1 + 0x524) = iVar1;
    do {
      *(undefined4 *)(iVar2 + (int)local_11c) = 0;
      iVar2 = iVar2 + 4;
    } while (iVar2 != 0x50);
    *(double *)(param_1 + 0x560) = dVar6;
    dVar6 = (double)MADModelEstimator(param_1,iVar1,local_11c);
    pdVar4 = &dStack208;
    dVar7 = 0.0;
    iVar5 = 0;
    pdVar3 = pdVar4;
    iVar2 = param_1;
    while (iVar5 < iVar1) {
      dVar6 = *(double *)(iVar2 + 0x1b8);
      iVar5 = iVar5 + 1;
      dVar8 = (*(double *)(param_1 + 0x50) + *(double *)(param_1 + 0x48) * dVar6) -
              *(double *)(iVar2 + 0x110);
      dVar7 = dVar7 + dVar8 * dVar8;
      *(int *)(pdVar3 + 1) = SUB84(dVar8,0);
      *(int *)((int)pdVar3 + 0xc) = (int)((ulonglong)dVar8 >> 0x20);
      pdVar3 = pdVar3 + 1;
      iVar2 = iVar2 + 8;
    }
    if (iVar1 == 2) {
      dVar7 = 0.0;
    }
    else {
      dVar7 = dVar7 / (double)(longlong)iVar1;
    }
    iVar2 = 0;
    while (iVar2 < iVar1) {
      pdVar4 = pdVar4 + 1;
      if (dVar7 <= *pdVar4 * *pdVar4) {
        local_11c[iVar2] = 1;
      }
      iVar2 = iVar2 + 1;
    }
    local_11c[0] = 0;
    MADModelEstimator(SUB84(dVar6,0),param_1,iVar1,local_11c);
  }
  return;
}



void updateRCModel(int param_1)

{
  int iVar1;
  double *pdVar2;
  int iVar3;
  double *pdVar4;
  int iVar5;
  undefined4 extraout_s0;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined4 local_11c [19];
  double dStack208;
  undefined8 local_c8;
  
  iVar5 = *(int *)(param_1 + 0x544);
  *(undefined4 *)(param_1 + 0x538) = *(undefined4 *)(param_1 + 0x5c8);
  iVar1 = 0x13;
  iVar3 = param_1;
  do {
    *(undefined4 *)(iVar3 + 0x448) = *(undefined4 *)(iVar3 + 0x440);
    *(undefined4 *)(iVar3 + 0x44c) = *(undefined4 *)(iVar3 + 0x444);
    *(undefined4 *)(iVar3 + 0x2f8) = *(undefined4 *)(iVar3 + 0x440);
    *(undefined4 *)(iVar3 + 0x2fc) = *(undefined4 *)(iVar3 + 0x444);
    *(undefined4 *)(iVar3 + 0x4f0) = *(undefined4 *)(iVar3 + 0x4e8);
    *(undefined4 *)(iVar3 + 0x4f4) = *(undefined4 *)(iVar3 + 0x4ec);
    *(undefined4 *)(iVar3 + 0x3a0) = *(undefined4 *)(iVar3 + 0x4e8);
    *(undefined4 *)(iVar3 + 0x3a4) = *(undefined4 *)(iVar3 + 0x4ec);
    iVar3 = iVar3 + -8;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  uVar10 = QP2Qstep(*(undefined4 *)(param_1 + 0x52c));
  uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
  *(int *)(param_1 + 0x3b0) = (int)uVar10;
  *(undefined4 *)(param_1 + 0x3b4) = uVar6;
  dVar7 = *(double *)(param_1 + 0x558);
  dVar8 = (double)(longlong)*(int *)(param_1 + 0x5cc) / dVar7;
  *(double *)(param_1 + 0x458) = dVar8;
  *(int *)(param_1 + 0x260) = (int)uVar10;
  *(undefined4 *)(param_1 + 0x264) = uVar6;
  *(double *)(param_1 + 0x308) = dVar8;
  *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_1 + 0x510);
  *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(param_1 + 0x514);
  *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(param_1 + 0x518);
  *(undefined4 *)(param_1 + 0x50c) = *(undefined4 *)(param_1 + 0x51c);
  dVar8 = *(double *)(param_1 + 0x560);
  if (dVar8 <= dVar7) {
    dVar8 = dVar8 / dVar7;
  }
  else {
    dVar8 = dVar7 / dVar8;
  }
  iVar3 = SUB84(ROUND(dVar8 * 20.0),0);
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  if (iVar3 < iVar5) {
    iVar5 = iVar3;
  }
  if (*(int *)(param_1 + 0x528) < iVar5) {
    iVar5 = *(int *)(param_1 + 0x528) + 1;
  }
  iVar3 = 0;
  if (0x13 < iVar5) {
    iVar5 = 0x14;
  }
  *(int *)(param_1 + 0x528) = iVar5;
  do {
    *(undefined4 *)(iVar3 + (int)local_11c) = 0;
    iVar3 = iVar3 + 4;
  } while (iVar3 != 0x50);
  dVar7 = (double)RCModelEstimator(extraout_s0,param_1,iVar5,local_11c);
  pdVar4 = &dStack208;
  iVar5 = *(int *)(param_1 + 0x528);
  dVar8 = 0.0;
  iVar1 = 0;
  pdVar2 = pdVar4;
  iVar3 = param_1;
  while (iVar1 < iVar5) {
    dVar9 = *(double *)(iVar3 + 0x260);
    dVar7 = *(double *)(param_1 + 0x500) / dVar9;
    iVar1 = iVar1 + 1;
    dVar9 = (dVar7 + *(double *)(param_1 + 0x508) / (dVar9 * dVar9)) - *(double *)(iVar3 + 0x308);
    dVar8 = dVar8 + dVar9 * dVar9;
    *(int *)(pdVar2 + 1) = SUB84(dVar9,0);
    *(int *)((int)pdVar2 + 0xc) = (int)((ulonglong)dVar9 >> 0x20);
    pdVar2 = pdVar2 + 1;
    iVar3 = iVar3 + 8;
  }
  if (iVar5 == 2) {
    dVar8 = 0.0;
  }
  else {
    dVar8 = dVar8 / (double)(longlong)iVar5;
  }
  iVar3 = 0;
  while (iVar3 < iVar5) {
    pdVar4 = pdVar4 + 1;
    if (dVar8 <= *pdVar4 * *pdVar4) {
      local_11c[iVar3] = 1;
    }
    iVar3 = iVar3 + 1;
  }
  local_11c[0] = 0;
  uVar6 = RCModelEstimator(SUB84(dVar7,0),param_1,iVar5,local_11c);
  if (*(int *)(param_1 + 0x544) < 2) {
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x558);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x55c);
  }
  else {
    updateMADModel(uVar6,param_1);
  }
  return;
}



void updateModelQPFrame(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  double *pdVar3;
  double *pdVar4;
  double unaff_d8;
  double dVar5;
  double dVar6;
  
  dVar6 = *(double *)(param_1 + 0x508);
  pdVar3 = (double *)(param_1 + 0x558);
  pdVar4 = (double *)(param_1 + 0x500);
  dVar5 = *pdVar3;
  if ((dVar6 != 0.0) &&
     (dVar5 = dVar6 * 4.0 * dVar5 * (double)(longlong)param_2 + dVar5 * *pdVar4 * dVar5 * *pdVar4,
     -1 < (int)((uint)(dVar5 < 0.0) << 0x1f))) {
    uVar1 = SUB84(dVar5,0);
    uVar2 = uVar1;
    sqrt(unaff_d8);
    dVar5 = *pdVar3;
    if (0.0 < (double)CONCAT44(extraout_r1,uVar2) - dVar5 * *pdVar4) {
      dVar6 = *(double *)(param_1 + 0x508);
      sqrt(unaff_d8);
      dVar5 = ((dVar6 + dVar6) * dVar5) /
              ((double)CONCAT44(extraout_r1_00,uVar1) - *pdVar4 * *pdVar3);
      goto LAB_0001bd4c;
    }
  }
  dVar5 = (*(double *)(param_1 + 0x500) * *(double *)(param_1 + 0x558)) / (double)(longlong)param_2;
LAB_0001bd4c:
  uVar2 = Qstep2QP(SUB84((double)(float)dVar5,0),(int)((ulonglong)(double)(float)dVar5 >> 0x20));
  *(undefined4 *)(param_1 + 0x52c) = uVar2;
  return;
}



undefined4 updateQPRC2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  float fVar8;
  bool bVar9;
  float fVar10;
  
  if (*(int *)(param_1 + 0x1a0) == 1) {
    iVar3 = *(int *)(param_1 + 0x1d8);
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    *(int *)(param_1 + 0xc98) = iVar3 + -1;
    *(int *)(param_1 + 0x790) = iVar3;
    *(int *)(param_1 + 0xc84) = iVar3;
    *(undefined4 *)(param_1 + 0x73c) = *(undefined4 *)(param_1 + 0x730);
    goto LAB_0001bfc4;
  }
  cVar1 = *(char *)(param_1 + 0x712);
  if (cVar1 != '\x02') {
    if (cVar1 == '\x01') {
      iVar6 = *(int *)(param_1 + 0x1cc);
      iVar3 = *(int *)(param_1 + 0xc94);
      if (*(int *)(param_1 + 0xc94) < *(int *)(param_1 + 0xc98)) {
        iVar3 = *(int *)(param_1 + 0xc98);
      }
      iVar2 = iVar3 + 2;
      if (iVar3 + 2 < *(int *)(param_1 + 0x1d0)) {
        iVar2 = *(int *)(param_1 + 0x1d0);
      }
      if (iVar2 <= iVar6) {
        *(int *)(param_1 + 0xc84) = iVar2;
      }
      if (iVar6 < iVar2) {
        *(int *)(param_1 + 0xc84) = iVar6;
      }
    }
    else {
      if (cVar1 == '\0') {
        if (*(int *)(param_1 + 0xca0) == 0) {
          *(undefined4 *)(param_1 + 0xc84) = *(undefined4 *)(param_1 + 0xc98);
          if (*(int *)(param_1 + 0xd80) != 0) {
            iVar3 = *(int *)(param_1 + 0x730);
            bVar9 = iVar3 != 1;
            if (bVar9) {
              iVar3 = *(int *)(param_1 + 0xc8c);
            }
            if (bVar9) {
              *(int *)(param_1 + 0xc84) = iVar3;
            }
          }
        }
        else {
          *(undefined4 *)(param_1 + 0xc58) = *(undefined4 *)(param_1 + 0xc68);
          *(undefined4 *)(param_1 + 0xc5c) = *(undefined4 *)(param_1 + 0xc6c);
          *(undefined4 *)(param_1 + 0xc60) = *(undefined4 *)(param_1 + 0xc70);
          *(undefined4 *)(param_1 + 0xc64) = *(undefined4 *)(param_1 + 0xc74);
          *(double *)(param_1 + 0x7a0) = *(double *)(param_1 + 0x7b0);
          *(double *)(param_1 + 0x7a8) = *(double *)(param_1 + 0x7b8);
          *(double *)(param_1 + 0x798) = *(double *)(param_1 + 0x7c0);
          iVar6 = *(int *)(param_1 + 0xd0c);
          iVar2 = *(int *)(param_1 + 0xc78);
          *(double *)(param_1 + 0xcb0) =
               *(double *)(param_1 + 0x7b8) +
               *(double *)(param_1 + 0x7b0) * *(double *)(param_1 + 0x7c0);
          iVar3 = *(int *)(param_1 + 0xcd0);
          if (iVar3 < 0) {
            iVar5 = iVar2 + iVar6;
            if (iVar2 + iVar6 < *(int *)(param_1 + 0x1d0)) {
              iVar5 = *(int *)(param_1 + 0x1d0);
            }
            iVar3 = *(int *)(param_1 + 0x1cc);
          }
          else {
            fVar8 = (float)(iVar3 - *(int *)(param_1 + 0xc90));
            fVar10 = ROUND(*(float *)(param_1 + 0x758) / (*(float *)(param_1 + 0x75c) * 4.0 * 8.0));
            if ((int)fVar10 < (int)fVar8) {
              fVar10 = fVar8;
            }
            updateModelQPFrame((float *)(param_1 + 0x758),fVar10,(undefined4 *)(param_1 + 0xc70),
                               iVar3,param_4);
            iVar5 = iVar2 + iVar6;
            iVar3 = *(int *)(param_1 + 0xc84);
            if (*(int *)(param_1 + 0xc84) <= *(int *)(param_1 + 0x1d0)) {
              iVar3 = *(int *)(param_1 + 0x1d0);
            }
            if (*(int *)(param_1 + 0x1cc) <= iVar3) {
              iVar3 = *(int *)(param_1 + 0x1cc);
            }
            if (iVar3 < iVar2 - iVar6) {
              iVar3 = iVar2 - iVar6;
            }
          }
          if (iVar3 <= iVar5) {
            *(int *)(param_1 + 0xc84) = iVar3;
          }
          if (iVar5 < iVar3) {
            *(int *)(param_1 + 0xc84) = iVar5;
          }
        }
        *(undefined4 *)(param_1 + 0xc94) = *(undefined4 *)(param_1 + 0xc98);
        *(undefined4 *)(param_1 + 0xc98) = *(undefined4 *)(param_1 + 0xc84);
        *(undefined4 *)(param_1 + 0xc78) = *(undefined4 *)(param_1 + 0xc84);
      }
    }
    goto LAB_0001bfc4;
  }
  if (*(int *)(param_1 + 0xc9c) < 0xb) {
    uVar4 = *(undefined4 *)(param_1 + 0xc78);
  }
  else {
    iVar3 = 0;
    iVar6 = 0;
    puVar7 = (undefined4 *)(param_1 + 0xb00);
    do {
      iVar6 = iVar6 + 1;
      iVar2 = Qstep2QP(puVar7[2],puVar7[3]);
      iVar3 = iVar3 + iVar2;
      puVar7 = puVar7 + 2;
    } while (iVar6 != 10);
    uVar4 = SUB84(ROUND((double)(longlong)iVar3 / 10.5),0);
  }
  *(undefined4 *)(param_1 + 0xc84) = uVar4;
  if (*(int *)(param_1 + 0xf04) != 0) {
    *(undefined4 *)(param_1 + 0xc84) = *(undefined4 *)(param_1 + 0xc98);
  }
  if ((*(int *)(param_1 + 0xd80) != 0) && (*(int *)(param_1 + 0x730) != 0)) {
    iVar3 = *(int *)(param_1 + 0xc84);
    *(int *)(param_1 + 0xc8c) = iVar3;
    if (iVar3 < 0x24) {
      if (iVar3 - 0x20U < 4) {
        iVar3 = iVar3 + -1;
      }
      else {
        if (iVar3 - 0x1bU < 5) {
          iVar3 = iVar3 + -2;
        }
        else {
          if (iVar3 - 0x17U < 4) {
            iVar3 = iVar3 + -3;
          }
          else {
            if (iVar3 <= *(int *)(param_1 + 0x1d0) + 3) {
              *(int *)(param_1 + 0xc84) = *(int *)(param_1 + 0x1d0);
              goto LAB_0001be42;
            }
            iVar3 = iVar3 + -4;
          }
        }
      }
      *(int *)(param_1 + 0xc84) = iVar3;
    }
  }
LAB_0001be42:
  *(undefined4 *)(param_1 + 0xc88) = 0;
  *(undefined4 *)(param_1 + 0xc94) = *(undefined4 *)(param_1 + 0xc98);
  *(undefined4 *)(param_1 + 0x73c) = *(undefined4 *)(param_1 + 0x730);
  *(undefined4 *)(param_1 + 0xc98) = *(undefined4 *)(param_1 + 0xc84);
  *(undefined4 *)(param_1 + 0xc78) = *(undefined4 *)(param_1 + 0xc84);
  *(undefined4 *)(param_1 + 0xca0) = 0;
LAB_0001bfc4:
  return *(undefined4 *)(param_1 + 0xc84);
}



void rc_init_gop_params(int param_1)

{
  longlong lVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  
  iVar8 = *(int *)(param_1 + 0x1b0);
  iVar2 = __aeabi_idiv(iVar8 + -2,*(int *)(param_1 + 0x1b4) + 1);
  fVar12 = *(float *)(param_1 + 0x758);
  fVar13 = *(float *)(param_1 + 0x75c);
  iVar7 = iVar2 + 1;
  iVar4 = (int)((ulonglong)*(undefined8 *)(param_1 + 0xd18) >> 0x20);
  uVar6 = (uint)*(undefined8 *)(param_1 + 0xd18);
  fVar3 = (float)__aeabi_l2f(uVar6,iVar4);
  iVar8 = (iVar8 - iVar7) + -1;
  *(float *)(param_1 + 0xce8) = ROUND(fVar3 + fVar12 / fVar13);
  dVar14 = (double)__aeabi_l2d(uVar6,iVar4);
  *(int *)(param_1 + 0xce0) = SUB84(ROUND(dVar14 + (double)fVar12 * 2.048),0);
  dVar14 = (double)(((float)(longlong)(iVar2 + 2 + iVar8) * fVar12) / fVar13) + 0.5;
  if (dVar14 < 0.0) {
    uVar11 = SUB84(ROUND(dVar14 - 1.0),0);
  }
  else {
    uVar11 = SUB84(ROUND(dVar14),0);
  }
  uVar9 = uVar6 + uVar11;
  uVar10 = iVar4 + ((int)uVar11 >> 0x1f) + (uint)CARRY4(uVar6,uVar11);
  uVar5 = uVar11 * 2;
  uVar6 = ((int)uVar11 >> 0x1f) * 2 + (uint)CARRY4(uVar11,uVar11);
  *(uint *)(param_1 + 0xd18) = uVar9;
  *(uint *)(param_1 + 0xd1c) = uVar10;
  if ((int)((uVar6 - uVar10) - (uint)(uVar9 > uVar5)) < 0 ==
      ((int)uVar6 < 0 == -1 < (int)uVar10 &&
      (int)(uVar6 + ~uVar10 + (uint)(uVar9 <= uVar5)) < 0 != (int)uVar6 < 0)) {
    lVar1 = (longlong)(int)uVar11 * -2;
    uVar5 = (uint)lVar1;
    uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
    if ((int)((uVar10 - uVar6) - (uint)(uVar5 > uVar9)) < 0 ==
        ((int)uVar10 < 0 == -1 < lVar1 &&
        (int)(uVar10 + ~uVar6 + (uint)(uVar5 <= uVar9)) < 0 != (int)uVar10 < 0)) goto LAB_0001c0ca;
  }
  *(uint *)(param_1 + 0xd18) = uVar5;
  *(uint *)(param_1 + 0xd1c) = uVar6;
LAB_0001c0ca:
  *(int *)(param_1 + 0xcd4) = iVar7;
  *(int *)(param_1 + 0xcd8) = iVar8;
  *(int *)(param_1 + 0xd08) = iVar7;
  *(undefined4 *)(param_1 + 0xca0) = 0;
  *(undefined4 *)(param_1 + 0xca8) = 0;
  return;
}



void resetRemainingBits(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  longlong lVar11;
  
  fVar8 = *(float *)(param_1 + 0x75c);
  fVar6 = ROUND(fVar8);
  iVar2 = __aeabi_idiv((int)fVar6 + -2,*(int *)(param_1 + 0x1b4) + 1);
  iVar2 = iVar2 + 1;
  *(undefined4 *)(param_1 + 0xd18) = 0;
  *(undefined4 *)(param_1 + 0xd1c) = 0;
  fVar7 = *(float *)(param_1 + 0x758);
  fVar9 = (float)(longlong)*(int *)(param_1 + 0x1b8);
  *(float *)(param_1 + 0xce8) = ROUND(fVar7 / fVar8 + 0.0);
  *(int *)(param_1 + 0xce0) = SUB84(ROUND((double)fVar7 * 2.048 + 0.0),0);
  *(float *)(param_1 + 0x758) = fVar9;
  iVar3 = __aeabi_idiv(*(undefined4 *)(param_1 + 0x1bc),1000);
  *(float *)(param_1 + 0x75c) = (float)(longlong)iVar3;
  *(float *)(param_1 + 0x760) = (float)(longlong)iVar3;
  *(float *)(param_1 + 0x764) = fVar9;
  lVar11 = __aeabi_f2lz(fVar9);
  uVar4 = (uint)lVar11;
  iVar3 = (int)((ulonglong)lVar11 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4);
  lVar1 = CONCAT44(iVar3,uVar4 * 2);
  if (-1 < iVar3) {
    lVar1 = lVar11 * -2;
    uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
    bVar5 = (int)lVar1 == 0;
    if ((int)(-(uint)!bVar5 - uVar4) < 0 == (lVar1 < 0 && (int)(~uVar4 + (uint)bVar5) < 0))
    goto LAB_0001c1d2;
  }
  *(int *)(param_1 + 0xd18) = (int)lVar1;
  *(int *)(param_1 + 0xd1c) = (int)((ulonglong)lVar1 >> 0x20);
LAB_0001c1d2:
  uVar10 = VectorAdd(*(undefined8 *)(param_1 + 0xd18),lVar11,8);
  *(undefined8 *)(param_1 + 0xd18) = uVar10;
  *(int *)(param_1 + 0xcd4) = iVar2;
  *(float *)(param_1 + 0xcdc) = fVar6;
  *(int *)(param_1 + 0xcd8) = ((int)fVar6 - iVar2) + -1;
  *(int *)(param_1 + 0xd08) = iVar2;
  *(undefined4 *)(param_1 + 0xca8) = 0;
  return;
}



void rc_init_frame(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  int extraout_r1;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  double *pdVar9;
  bool bVar10;
  int iVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  longlong lVar17;
  
  iVar11 = *(int *)(param_1 + 0x1b8);
  fVar14 = (float)(longlong)iVar11;
  *(float *)(param_1 + 0x758) = fVar14;
  iVar2 = __aeabi_idiv(*(undefined4 *)(param_1 + 0x1bc),1000);
  fVar15 = (float)(longlong)iVar2;
  *(float *)(param_1 + 0x75c) = fVar15;
  if (*(int *)(param_1 + 0xd30) == 0) {
    *(float *)(param_1 + 0x760) = fVar15;
    *(float *)(param_1 + 0x764) = fVar14;
  }
  if ((*(float *)(param_1 + 0x764) == fVar14) && (*(float *)(param_1 + 0x760) == fVar15)) {
    fVar12 = ROUND(fVar15);
    __aeabi_idivmod(*(int *)(param_1 + 0xd30),fVar12);
    if (extraout_r1 == 0) {
      iVar3 = __aeabi_idiv((int)fVar12 + -2,*(int *)(param_1 + 0x1b4) + 1);
      uVar6 = *(uint *)(param_1 + 0xd18);
      uVar7 = *(uint *)(param_1 + 0xd1c);
      iVar3 = iVar3 + 1;
      fVar4 = (float)__aeabi_l2f(uVar6,uVar7);
      *(float *)(param_1 + 0xce8) = ROUND(fVar4 + fVar14 / fVar15);
      dVar13 = (double)__aeabi_l2d(uVar6,uVar7);
      *(int *)(param_1 + 0xce0) = SUB84(ROUND(dVar13 + (double)(longlong)iVar11 * 2.048),0);
      lVar17 = __aeabi_f2lz(fVar14);
      uVar5 = (uint)lVar17;
      uVar8 = uVar5 * 2;
      iVar2 = (int)((ulonglong)lVar17 >> 0x20) * 2 + (uint)CARRY4(uVar5,uVar5);
      lVar1 = CONCAT44(iVar2,uVar8);
      if (((int)((iVar2 - uVar7) - (uint)(uVar6 > uVar8)) < 0 !=
           (iVar2 < 0 == -1 < (int)uVar7 &&
           (int)(iVar2 + ~uVar7 + (uint)(uVar6 <= uVar8)) < 0 != iVar2 < 0)) ||
         (lVar1 = lVar17 * -2, uVar8 = (uint)((ulonglong)lVar1 >> 0x20),
         bVar10 = (uint)lVar1 <= uVar6,
         (int)((uVar7 - uVar8) - (uint)!bVar10) < 0 !=
         ((int)uVar7 < 0 == -1 < lVar1 && (int)(uVar7 + ~uVar8 + (uint)bVar10) < 0 != (int)uVar7 < 0
         ))) {
        *(int *)(param_1 + 0xd18) = (int)lVar1;
        *(int *)(param_1 + 0xd1c) = (int)((ulonglong)lVar1 >> 0x20);
      }
      uVar16 = VectorAdd(*(undefined8 *)(param_1 + 0xd18),lVar17,8);
      *(undefined8 *)(param_1 + 0xd18) = uVar16;
      *(int *)(param_1 + 0xcd4) = iVar3;
      *(float *)(param_1 + 0xcdc) = fVar12;
      *(int *)(param_1 + 0xcd8) = ((int)fVar12 - iVar3) + -1;
      *(int *)(param_1 + 0xd08) = iVar3;
      *(undefined4 *)(param_1 + 0xca8) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xd30) = 0;
    resetRemainingBits(param_1);
  }
  if (*(char *)(param_1 + 0x712) == '\0') {
    __aeabi_ldivmod(*(undefined4 *)(param_1 + 0xd18),*(undefined4 *)(param_1 + 0xd1c),
                    *(int *)(param_1 + 0xcdc),*(int *)(param_1 + 0xcdc) >> 0x1f);
    dVar13 = (double)__aeabi_l2d();
    dVar13 = dVar13 + 0.5;
    if (dVar13 < 0.0) {
      dVar13 = dVar13 - 1.0;
    }
    iVar11 = *(int *)(param_1 + 0xce4);
    iVar2 = *(int *)(param_1 + 0xce8);
    if (*(int *)(param_1 + 0xce8) <= SUB84(ROUND(dVar13),0)) {
      iVar2 = SUB84(ROUND(dVar13),0);
    }
    if (iVar2 <= iVar11) {
      *(int *)(param_1 + 0xcd0) = iVar2;
    }
    if (iVar11 < iVar2) {
      *(int *)(param_1 + 0xcd0) = iVar11;
    }
  }
  else {
    if (*(char *)(param_1 + 0x712) == '\x01') {
      iVar2 = *(int *)(param_1 + 0xca4);
      if (iVar2 == 1) {
        if (*(int *)(param_1 + 0xc9c) == 1) {
          *(undefined4 *)(param_1 + 0x780) = *(undefined4 *)(param_1 + 0xcf0);
          *(undefined4 *)(param_1 + 0x784) = *(undefined4 *)(param_1 + 0xcf4);
        }
        *(undefined4 *)(param_1 + 0x788) = *(undefined4 *)(param_1 + 0xcf8);
        *(undefined4 *)(param_1 + 0x78c) = *(undefined4 *)(param_1 + 0xcfc);
      }
      else {
        if (1 < iVar2) {
          pdVar9 = (double *)(param_1 + 0x788);
          if (iVar2 < 8) {
            dVar13 = (*pdVar9 + (double)(longlong)(iVar2 + -1) * *(double *)(param_1 + 0xcf8)) /
                     (double)(longlong)iVar2;
          }
          else {
            dVar13 = (*(double *)(param_1 + 0xcf8) + *pdVar9 * 7.0) * 0.125;
          }
          *pdVar9 = dVar13;
        }
      }
    }
  }
  *(int *)(param_1 + 0xd30) = *(int *)(param_1 + 0xd30) + 1;
  *(int *)(param_1 + 0xcdc) = *(int *)(param_1 + 0xcdc) + -1;
  *(undefined4 *)(param_1 + 0xd20) = 0;
  *(undefined4 *)(param_1 + 0xd24) = 0;
  iVar2 = updateQPRC2(param_1);
  *(int *)(param_1 + 0x1dc) = iVar2;
  *(int *)(param_1 + 0xc88) = *(int *)(param_1 + 0xc88) + iVar2;
  return;
}



void rc_update_pict_frame(int param_1,uint param_2)

{
  float fVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  
  *(uint *)(param_1 + 0xd24) = param_2;
  *(undefined4 *)(param_1 + 0xd20) = 0;
  *(undefined4 *)(param_1 + 0xd2c) = 0;
  *(undefined4 *)(param_1 + 0xd28) = *(undefined4 *)(param_1 + 400);
  dVar10 = (double)__aeabi_l2d();
  dVar10 = dVar10 / (double)(ulonglong)(uint)(*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x48));
  *(double *)(param_1 + 0xcb0) = dVar10;
  dVar9 = (double)(longlong)(int)(param_2 * *(int *)(param_1 + 0xc84)) + 0.5;
  if (dVar9 < 0.0) {
    dVar9 = dVar9 - 1.0;
  }
  iVar6 = SUB84(ROUND(dVar9),0);
  if (*(char *)(param_1 + 0x712) == '\0') {
    *(int *)(param_1 + 0xcc8) = iVar6;
    *(int *)(param_1 + 0xcd4) = *(int *)(param_1 + 0xcd4) + -1;
    *(double *)(param_1 + 0xcf0) = (double)(longlong)iVar6;
    *(int *)(param_1 + 0xc9c) = *(int *)(param_1 + 0xc9c) + 1;
    *(int *)(param_1 + 0xca0) = *(int *)(param_1 + 0xca0) + 1;
  }
  else {
    if (*(char *)(param_1 + 0x712) == '\x01') {
      *(int *)(param_1 + 0xccc) = iVar6;
      *(int *)(param_1 + 0xcd8) = *(int *)(param_1 + 0xcd8) + -1;
      *(double *)(param_1 + 0xcf8) = (double)((float)(longlong)iVar6 / 1.3636);
      *(int *)(param_1 + 0xca8) = *(int *)(param_1 + 0xca8) + 1;
      *(int *)(param_1 + 0xca4) = *(int *)(param_1 + 0xca4) + 1;
    }
  }
  fVar8 = *(float *)(param_1 + 0x758);
  fVar7 = fVar8 / *(float *)(param_1 + 0x75c) + 0.5;
  if (fVar7 < 0.0) {
    fVar7 = fVar7 - 1.0;
  }
  uVar4 = param_2 - (int)ROUND(fVar7);
  uVar2 = *(uint *)(param_1 + 0xd18);
  puVar3 = (uint *)(param_1 + 0xd10);
  *(uint *)(param_1 + 0xd18) = uVar2 - param_2;
  *(uint *)(param_1 + 0xd1c) =
       (*(int *)(param_1 + 0xd1c) - ((int)param_2 >> 0x1f)) - (uint)(uVar2 < param_2);
  uVar2 = *puVar3;
  *puVar3 = uVar2 + uVar4;
  *(uint *)(param_1 + 0xd14) =
       *(int *)(param_1 + 0xd14) + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar2,uVar4);
  fVar1 = (float)__aeabi_l2f(SUB84(dVar10,0));
  fVar7 = 0.0 - fVar8;
  if (((int)((uint)(fVar1 < fVar7) << 0x1f) < 0) ||
     (fVar7 = fVar8, uVar5 = extraout_s0, fVar8 <= fVar1)) {
    uVar11 = __aeabi_f2lz(extraout_s0,fVar7);
    *puVar3 = (uint)uVar11;
    *(int *)(param_1 + 0xd14) = (int)((ulonglong)uVar11 >> 0x20);
    uVar5 = extraout_s0_00;
  }
  iVar6 = *(int *)(param_1 + 0xce0) - uVar4;
  *(uint *)(param_1 + 0xce8) = *(int *)(param_1 + 0xce8) - uVar4;
  *(int *)(param_1 + 0xce0) = iVar6;
  *(float *)(param_1 + 0xce4) = ROUND((float)(longlong)iVar6 * 0.9);
  if (*(char *)(param_1 + 0x712) == '\0') {
    updateRCModel(uVar5,param_1 + 0x758);
    return;
  }
  return;
}



void rc_init_sequence(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  double dVar6;
  
  *(undefined4 *)(param_1 + 0xcb8) = 0;
  *(undefined4 *)(param_1 + 0xcbc) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0xcb0) = 0;
  *(undefined4 *)(param_1 + 0xcb4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0xcc0) = 0;
  *(undefined4 *)(param_1 + 0xcc4) = 0;
  *(undefined4 *)(param_1 + 0xce0) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0xce4) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0xcd0) = 0;
  *(undefined4 *)(param_1 + 0xce8) = 0;
  *(undefined4 *)(param_1 + 0xcf0) = 0;
  *(undefined4 *)(param_1 + 0xcf4) = 0;
  *(undefined4 *)(param_1 + 0xcf8) = 0;
  *(undefined4 *)(param_1 + 0xcfc) = 0;
  *(undefined4 *)(param_1 + 0x788) = 0;
  *(undefined4 *)(param_1 + 0x78c) = 0;
  iVar4 = *(int *)(param_1 + 0x1b8);
  fVar5 = (float)(longlong)iVar4;
  *(undefined4 *)(param_1 + 0xc8c) = 0;
  *(undefined4 *)(param_1 + 0xc88) = 0;
  *(undefined4 *)(param_1 + 0xcc8) = 0;
  *(undefined4 *)(param_1 + 0xccc) = 0;
  *(float *)(param_1 + 0x758) = fVar5;
  iVar1 = __aeabi_idiv(*(undefined4 *)(param_1 + 0x1bc),1000);
  *(float *)(param_1 + 0x75c) = (float)(longlong)iVar1;
  *(float *)(param_1 + 0x764) = fVar5;
  *(undefined4 *)(param_1 + 0xd10) = 0;
  *(undefined4 *)(param_1 + 0xd14) = 0;
  *(undefined4 *)(param_1 + 0xc80) = 0;
  *(undefined4 *)(param_1 + 0xc7c) = 0;
  *(undefined4 *)(param_1 + 0xca4) = 0;
  *(undefined4 *)(param_1 + 0xc9c) = 0;
  *(undefined4 *)(param_1 + 0xd18) = 0;
  *(undefined4 *)(param_1 + 0xd1c) = 0;
  if (*(int *)(param_1 + 0x1b4) < 1) {
    *(undefined4 *)(param_1 + 0x768) = 0;
    *(undefined4 *)(param_1 + 0x76c) = 0x3fe00000;
    *(undefined4 *)(param_1 + 0x770) = 0;
    *(undefined4 *)(param_1 + 0x774) = 0x3fe00000;
  }
  else {
    *(undefined4 *)(param_1 + 0x768) = 0;
    *(undefined4 *)(param_1 + 0x76c) = 0x3fd00000;
    *(undefined4 *)(param_1 + 0x770) = 0xcccccccd;
    *(undefined4 *)(param_1 + 0x774) = 0x3feccccc;
  }
  dVar6 = (double)(longlong)iVar4;
  *(undefined4 *)(param_1 + 0xc90) = 0;
  *(double *)(param_1 + 0xc68) = dVar6;
  *(undefined4 *)(param_1 + 0xc70) = 0;
  *(undefined4 *)(param_1 + 0xc74) = 0;
  *(undefined4 *)(param_1 + 0x7b0) = 0;
  *(undefined4 *)(param_1 + 0x7b4) = 0x3ff00000;
  iVar4 = 0x15;
  *(undefined4 *)(param_1 + 0x7b8) = 0;
  *(undefined4 *)(param_1 + 0x7bc) = 0;
  puVar2 = (undefined4 *)(param_1 + 0xb00);
  do {
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[0x2c] = 0;
    puVar2[0x2d] = 0;
    iVar4 = iVar4 + -1;
    puVar2[-0xd0] = 0;
    puVar2[-0xcf] = 0;
    puVar2 = puVar2 + 2;
  } while (iVar4 != 0);
  *(undefined4 *)(param_1 + 0xd0c) = *(undefined4 *)(param_1 + 0x1d4);
  dVar6 = dVar6 / (double)((float)(longlong)iVar1 * (float)(ulonglong)*(uint *)(param_1 + 0x44) *
                          (float)(ulonglong)*(uint *)(param_1 + 0x48));
  if (dVar6 <= 0.05) {
    uVar3 = 0x23;
  }
  else {
    if (0.3 < dVar6) {
      if (dVar6 <= 0.6) {
        uVar3 = 0x14;
      }
      else {
        uVar3 = 10;
      }
    }
    else {
      uVar3 = SUB84(ROUND(35.0 - (dVar6 - 0.05) * 4.0 * 10.0),0);
    }
  }
  *(undefined4 *)(param_1 + 0x1d8) = uVar3;
  return;
}



void h264_init_rc_quene(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1c8) != 0) {
    rc_init_sequence();
    iVar1 = *(int *)(param_1 + 0x1cc);
    iVar2 = *(int *)(param_1 + 0x1d0);
    if (*(int *)(param_1 + 0x1d0) < *(int *)(param_1 + 0x1d8)) {
      iVar2 = *(int *)(param_1 + 0x1d8);
    }
    if (iVar2 <= iVar1) {
      *(int *)(param_1 + 0x1d8) = iVar2;
    }
    if (iVar1 < iVar2) {
      *(int *)(param_1 + 0x1d8) = iVar1;
    }
  }
  *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_1 + 0x1d8);
  return;
}



void rcInitPic(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1c8) != 0) {
    rc_init_frame();
    iVar1 = *(int *)(param_1 + 0x1cc);
    iVar2 = *(int *)(param_1 + 0x1d0);
    if (*(int *)(param_1 + 0x1d0) < *(int *)(param_1 + 0x1dc)) {
      iVar2 = *(int *)(param_1 + 0x1dc);
    }
    if (iVar2 <= iVar1) {
      *(int *)(param_1 + 0x1dc) = iVar2;
    }
    if (iVar1 < iVar2) {
      *(int *)(param_1 + 0x1dc) = iVar1;
    }
  }
  return;
}



void rcUpdatePic(int param_1)

{
  if (*(int *)(param_1 + 0x1c8) != 0) {
    rc_update_pict_frame(param_1,*(undefined4 *)(param_1 + 0x750));
    return;
  }
  return;
}



void updateLastQP(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc98) = param_2;
  *(undefined4 *)(param_1 + 0xc78) = param_2;
  return;
}



void FUN_0001c8f6(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  while (uVar3 = *(uint *)(param_1 + 0x14), -1 < (int)uVar3) {
    piVar2 = *(int **)(param_1 + 0x1c);
    iVar1 = *piVar2;
    *(char *)(*(int *)(param_1 + 0x18) + iVar1) =
         (char)(*(uint *)(param_1 + 8) >> ((uVar3 & 0x1f) << 3));
    *piVar2 = iVar1 + 1;
    *(uint *)(param_1 + 0x14) = uVar3 - 1;
  }
  while (7 < *(int *)(param_1 + 0x20)) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -8;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



void FUN_0001c930(int param_1,int param_2)

{
  if (2 < *(int *)(param_1 + 0x14)) {
    FUN_0001c8f6();
  }
  *(int *)(param_1 + 8) = param_2 + *(int *)(param_1 + 8) * 0x10000;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 2;
  return;
}



void FUN_0001c950(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  while (*(int *)(param_1 + 0x10) != 0) {
    FUN_0001c930(param_1,0xffff);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  }
  FUN_0001c930(param_1,param_2,param_3,param_4);
  return;
}



undefined4 writeMBLayerPSlice(int param_1,int param_2)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*(char *)(param_1 + 0x6fd) == '\x01') {
    local_24 = 0;
    local_20 = 0;
    local_28 = 2;
    (**(code **)(param_2 + 0x14))(param_2,&local_28);
  }
  else {
    local_1c = 0;
  }
  return local_1c;
}



void biari_encode_symbol_final(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[3];
  uVar3 = param_1[1] - 2;
  param_1[8] = param_1[8] + 1;
  if (param_2 == 0) {
    if (0xff < uVar3) {
      param_1[1] = uVar3;
      return;
    }
    uVar2 = uVar2 - 1;
    uVar3 = uVar3 * 2;
    if (0 < (int)uVar2) {
      param_1[1] = uVar3;
      goto LAB_0001ca34;
    }
  }
  else {
    uVar1 = uVar1 + (uVar3 << (uVar2 & 0xff));
    if (0x3ffffff < uVar1) {
      uVar1 = uVar1 + 0xfc000000;
      param_1[2] = param_1[2] + 1;
      while (param_1[4] != 0) {
        FUN_0001c930(param_1,0);
        param_1[4] = param_1[4] - 1;
      }
    }
    uVar2 = uVar2 - 7;
    uVar3 = 0x100;
    if (0 < (int)uVar2) {
      *param_1 = uVar1;
      param_1[1] = 0x100;
      goto LAB_0001ca34;
    }
  }
  *param_1 = (uVar1 & 0x3ff) << 0x10;
  if ((uVar1 << 6) >> 0x10 == 0xffff) {
    param_1[4] = param_1[4] + 1;
  }
  else {
    FUN_0001c950(param_1);
  }
  uVar2 = uVar2 + 0x10;
  param_1[1] = uVar3;
LAB_0001ca34:
  param_1[3] = uVar2;
  return;
}



void arienco_reset_EC(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



void write_terminating_bit(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[3];
  uVar3 = param_1[1] - 2;
  param_1[8] = param_1[8] + 1;
  if (param_2 == 0) {
    if (0xff < uVar3) {
      param_1[1] = uVar3;
      return;
    }
    uVar2 = uVar2 - 1;
    uVar3 = uVar3 * 2;
    if (0 < (int)uVar2) {
      param_1[1] = uVar3;
      goto LAB_0001ca34;
    }
  }
  else {
    uVar1 = uVar1 + (uVar3 << (uVar2 & 0xff));
    if (0x3ffffff < uVar1) {
      uVar1 = uVar1 + 0xfc000000;
      param_1[2] = param_1[2] + 1;
      while (param_1[4] != 0) {
        FUN_0001c930(param_1,0);
        param_1[4] = param_1[4] - 1;
      }
    }
    uVar2 = uVar2 - 7;
    uVar3 = 0x100;
    if (0 < (int)uVar2) {
      *param_1 = uVar1;
      param_1[1] = 0x100;
      goto LAB_0001ca34;
    }
  }
  *param_1 = (uVar1 & 0x3ff) << 0x10;
  if ((uVar1 << 6) >> 0x10 == 0xffff) {
    param_1[4] = param_1[4] + 1;
  }
  else {
    FUN_0001c950(param_1);
  }
  uVar2 = uVar2 + 0x10;
  param_1[1] = uVar3;
LAB_0001ca34:
  param_1[3] = uVar2;
  return;
}



void arienco_start_encoding(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[6] = param_2;
  *param_1 = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[7] = param_3;
  param_1[5] = 0xffffffff;
  param_1[3] = 0x11;
  param_1[1] = 0x1fe;
  return;
}



void arienco_done_encoding(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint unaff_r7;
  
  uVar7 = *param_1;
  uVar5 = -param_1[3] + 0x10;
  if ((int)uVar5 < 6) {
    while (param_1[4] != 0) {
      FUN_0001c930(param_1,0xffff);
      param_1[4] = param_1[4] - 1;
    }
    if (param_1[5] == 3) {
      FUN_0001c8f6(param_1);
    }
    param_1[5] = param_1[5] + 1;
    param_1[2] = (0x20 >> (uVar5 & 0xff)) + param_1[2] * 0x100 +
                 (-1 << (6 - uVar5 & 0xff) & 0xffU & uVar7 >> 0x12);
    FUN_0001c8f6(param_1);
    goto LAB_0001cb72;
  }
  if ((int)uVar5 < 0xe) {
    unaff_r7 = (uVar7 << 6) >> 0x18;
  }
  if (uVar5 == 0xd || (int)(-param_1[3] + 3) < 0 != SBORROW4(uVar5,0xd)) {
    while (param_1[4] != 0) {
      FUN_0001c930(param_1,0xffff);
      param_1[4] = param_1[4] - 1;
    }
    if (param_1[5] == 3) {
      FUN_0001c8f6(param_1);
    }
    param_1[2] = unaff_r7 + param_1[2] * 0x100;
    param_1[5] = param_1[5] + 1;
    FUN_0001c8f6(param_1);
    if (uVar5 == 6) goto LAB_0001cb64;
    uVar2 = param_1[6];
    iVar1 = 0x2000;
    piVar4 = (int *)param_1[7];
    bVar6 = (byte)(-1 << (0xe - uVar5 & 0xff)) & (byte)(uVar7 >> 10);
    iVar3 = *piVar4;
LAB_0001cb5a:
    *(byte *)(uVar2 + iVar3) = bVar6 + (char)(iVar1 >> (uVar5 & 0xff));
  }
  else {
    FUN_0001c950(param_1,(uVar7 << 6) >> 0x10,param_3,param_4,param_4);
    FUN_0001c8f6(param_1);
    if (uVar5 != 0xe) {
      iVar1 = 0x200000;
      piVar4 = (int *)param_1[7];
      bVar6 = (byte)(-1 << (0x16 - uVar5 & 0xff)) & (byte)(uVar7 >> 2);
      uVar2 = param_1[6];
      iVar3 = *piVar4;
      goto LAB_0001cb5a;
    }
LAB_0001cb64:
    piVar4 = (int *)param_1[7];
    iVar3 = *piVar4;
    *(undefined *)(param_1[6] + iVar3) = 0x80;
  }
  *piVar4 = iVar3 + 1;
LAB_0001cb72:
  param_1[3] = 8;
  return;
}



void biari_encode_symbol(uint *param_1,uint param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = *param_1;
  uVar2 = *(ushort *)(param_3 + 4);
  uVar4 = param_1[3];
  param_1[8] = param_1[8] + 1;
  if (param_2 != 0) {
    param_2 = 1;
  }
  bVar1 = (&DAT_000250cc)[((param_1[1] << 0x18) >> 0x1e) + (uint)uVar2 * 4];
  uVar5 = param_1[1] - (uint)bVar1;
  if (param_2 == *(byte *)(param_3 + 6)) {
    *(ushort *)(param_3 + 4) = (ushort)(byte)(&DAT_000252b2)[*(ushort *)(param_3 + 4)];
    if (0xff < uVar5) {
      param_1[1] = uVar5;
      return;
    }
    uVar4 = uVar4 - 1;
    uVar5 = uVar5 * 2;
    if (0 < (int)uVar4) {
      param_1[1] = uVar5;
      goto LAB_0001cc60;
    }
  }
  else {
    uVar3 = uVar3 + (uVar5 << (uVar4 & 0xff));
    uVar4 = uVar4 - (byte)(&DAT_000251cc)[bVar1 >> 3];
    uVar5 = (uint)bVar1 << (uint)(byte)(&DAT_000251cc)[bVar1 >> 3];
    if (*(ushort *)(param_3 + 4) == 0) {
      *(byte *)(param_3 + 6) = *(byte *)(param_3 + 6) ^ 1;
    }
    *(ushort *)(param_3 + 4) = (ushort)(byte)(&DAT_00025344)[*(ushort *)(param_3 + 4)];
    if (0x3ffffff < uVar3) {
      uVar3 = uVar3 + 0xfc000000;
      param_1[2] = param_1[2] + 1;
      while (param_1[4] != 0) {
        FUN_0001c930(param_1,0);
        param_1[4] = param_1[4] - 1;
      }
    }
    if (0 < (int)uVar4) {
      *param_1 = uVar3;
      param_1[1] = uVar5;
      param_1[3] = uVar4;
      return;
    }
  }
  *param_1 = (uVar3 & 0x3ff) << 0x10;
  if ((uVar3 << 6) >> 0x10 == 0xffff) {
    param_1[4] = param_1[4] + 1;
  }
  else {
    FUN_0001c950(param_1);
  }
  uVar4 = uVar4 + 0x10;
  param_1[1] = uVar5;
LAB_0001cc60:
  param_1[3] = uVar4;
  return;
}



void writeMB_Pskip_flagInfo_CABAC(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_3 + 0x10);
  iVar3 = *(int *)(param_3 + 0x14);
  iVar1 = *(int *)(param_3 + 0xc);
  iVar5 = **(int **)(param_3 + 0x1c);
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    iVar2 = 1;
  }
  *(int *)(param_1 + 0x10) = iVar2;
  biari_encode_symbol(param_3,1,param_1 + 0x78,iVar3,param_4);
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(int *)(param_2 + 4) = 1 - *(int *)(param_1 + 8);
  *(int *)(param_2 + 0xc) =
       ((*(int *)(param_3 + 0x10) * 0x10 - *(int *)(param_3 + 0xc)) +
        (**(int **)(param_3 + 0x1c) + *(int *)(param_3 + 0x14)) * 8 + 0x18) -
       ((iVar4 * 0x10 - iVar1) + (iVar5 + iVar3) * 8 + 0x18);
  return;
}



void ue_linfo(int param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = param_1 + 1;
  while (iVar2 = iVar2 >> 1, iVar2 != 0 && (int)uVar1 < 0x21) {
    uVar1 = uVar1 + 1;
  }
  *param_2 = uVar1 * 2 + 1;
  *param_3 = (param_1 + 1) - (1 << (uVar1 & 0xff));
  return;
}



undefined4 symbol2uvlc(int param_1)

{
  uint uVar1;
  
  uVar1 = 1 << (*(int *)(param_1 + 0xc) >> 1 & 0xffU);
  *(uint *)(param_1 + 0x14) = uVar1 | *(uint *)(param_1 + 0x10) & uVar1 - 1;
  return 0;
}



void writeUVLC2buffer(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (0x20 < *(int *)(param_1 + 0xc)) {
    while (iVar4 < *(int *)(param_1 + 0xc) + -0x20) {
      iVar5 = *(int *)(param_2 + 8) + -1;
      *(int *)(param_2 + 8) = iVar5;
      cVar2 = *(char *)(param_2 + 0x20) << 1;
      *(char *)(param_2 + 0x20) = cVar2;
      if (iVar5 == 0) {
        iVar5 = *(int *)(param_2 + 4);
        *(undefined4 *)(param_2 + 8) = 8;
        *(char *)(*(int *)(param_2 + 0x24) + iVar5) = cVar2;
        *(undefined *)(param_2 + 0x20) = 0;
        *(int *)(param_2 + 4) = iVar5 + 1;
      }
      iVar4 = iVar4 + 1;
    }
    iVar4 = 0x20;
    uVar3 = 0x80000000;
    do {
      bVar1 = (byte)((*(byte *)(param_2 + 0x20) & 0x7f) << 1);
      *(byte *)(param_2 + 0x20) = bVar1;
      if ((uVar3 & *(uint *)(param_1 + 0x14)) != 0) {
        *(byte *)(param_2 + 0x20) = bVar1 | 1;
      }
      iVar5 = *(int *)(param_2 + 8) + -1;
      uVar3 = uVar3 >> 1;
      *(int *)(param_2 + 8) = iVar5;
      if (iVar5 == 0) {
        iVar5 = *(int *)(param_2 + 4);
        *(undefined4 *)(param_2 + 8) = 8;
        *(undefined *)(*(int *)(param_2 + 0x24) + iVar5) = *(undefined *)(param_2 + 0x20);
        *(undefined *)(param_2 + 0x20) = 0;
        *(int *)(param_2 + 4) = iVar5 + 1;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    return;
  }
  uVar3 = 1 << (*(int *)(param_1 + 0xc) - 1U & 0xff);
  iVar4 = 0;
  while (iVar4 < *(int *)(param_1 + 0xc)) {
    bVar1 = (byte)((*(byte *)(param_2 + 0x20) & 0x7f) << 1);
    *(byte *)(param_2 + 0x20) = bVar1;
    if ((uVar3 & *(uint *)(param_1 + 0x14)) != 0) {
      *(byte *)(param_2 + 0x20) = bVar1 | 1;
    }
    iVar5 = *(int *)(param_2 + 8) + -1;
    uVar3 = uVar3 >> 1;
    *(int *)(param_2 + 8) = iVar5;
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_2 + 4);
      *(undefined4 *)(param_2 + 8) = 8;
      *(undefined *)(*(int *)(param_2 + 0x24) + iVar5) = *(undefined *)(param_2 + 0x20);
      *(undefined *)(param_2 + 0x20) = 0;
      *(int *)(param_2 + 4) = iVar5 + 1;
    }
    iVar4 = iVar4 + 1;
  }
  return;
}



void writeSE_UVLC(int param_1,undefined4 param_2)

{
  ue_linfo(*(undefined4 *)(param_1 + 4),param_1 + 0xc,param_1 + 0x10);
  symbol2uvlc(param_1);
  writeUVLC2buffer(param_1,param_2);
  return;
}



undefined4 writeMBLayerPslice_CAVLC(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  
  *(int *)(param_1 + 0xf08) = *(int *)(param_1 + 0xf08) + 1;
  param_2[2] = 1;
  if (((*param_2 == (*(uint *)(param_1 + 0x44) >> 4) - 1) &&
      (param_2[1] == (*(uint *)(param_1 + 0x48) >> (*(int *)(param_1 + 0x1c4) + 4U & 0xff)) - 1)) &&
     (local_2c = *(int *)(param_1 + 0xf08), local_2c != 0)) {
    local_28 = 0;
    local_30 = 2;
    writeSE_UVLC(&local_30,param_3);
    *(undefined4 *)(param_1 + 0xf08) = 0;
  }
  return 0;
}



void biari_init_context(int param_1,undefined4 *param_2,byte *param_3)

{
  int iVar1;
  undefined uVar2;
  
  iVar1 = (uint)param_3[1] + ((int)((uint)*param_3 * param_1) >> 4);
  if (iVar1 < 0x40) {
    uVar2 = 0;
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    *(short *)(param_2 + 1) = 0x3f - (short)iVar1;
  }
  else {
    if (0x7d < iVar1) {
      iVar1 = 0x7e;
    }
    uVar2 = 1;
    *(short *)(param_2 + 1) = (short)iVar1 + -0x40;
  }
  *(undefined *)((int)param_2 + 6) = uVar2;
  *param_2 = 0;
  return;
}



void p_skip_mb_encode(int param_1,undefined4 param_2,int *param_3)

{
  if ((*(char *)(param_1 + 0x6fd) == '\x01') && ((*param_3 != 0 || (param_3[1] != 0)))) {
    biari_encode_symbol_final(param_2,0);
  }
  (*(code *)param_3[6])(param_1,param_3,param_2);
  return;
}



undefined4 put_bit_sw(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined auStack40 [4];
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_14;
  
  local_24 = param_1;
  local_1c = param_2;
  local_14 = param_1;
  writeUVLC2buffer(auStack40,param_3);
  return local_1c;
}



undefined4 put_byte(undefined4 param_1)

{
  undefined auStack40 [4];
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_14;
  
  local_1c = 8;
  local_24 = param_1;
  local_14 = param_1;
  writeUVLC2buffer(auStack40);
  return local_1c;
}



int PutVlcUE_sw(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined auStack40 [12];
  int local_1c;
  uint local_18;
  
  local_18 = param_1 + 1;
  uVar2 = 0;
  uVar1 = local_18;
  while (uVar1 = uVar1 >> 1, uVar1 != 0 && uVar2 < 0x21) {
    uVar2 = uVar2 + 1;
  }
  local_1c = uVar2 * 2 + 1;
  symbol2uvlc(auStack40);
  writeUVLC2buffer(auStack40,param_2);
  return local_1c;
}



int PutVlcSE_sw(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined auStack48 [12];
  int local_24;
  int local_20;
  
  if (param_1 < 1) {
    uVar1 = param_1 * -2;
  }
  else {
    uVar1 = param_1 << 1;
  }
  uVar3 = 0;
  uVar2 = uVar1;
  while (uVar2 = uVar2 >> 1, uVar2 != 0 && uVar3 < 0x21) {
    uVar3 = uVar3 + 1;
  }
  local_20 = uVar1 + (param_1 < 1);
  local_24 = uVar3 * 2 + 1;
  symbol2uvlc(auStack48);
  writeUVLC2buffer(auStack48,param_2);
  return local_24;
}



int initPrefixNAL_sw(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = put_byte(0);
  iVar2 = put_byte(0,param_2);
  iVar3 = put_byte(0,param_2);
  iVar4 = put_byte(1,param_2);
  iVar5 = put_byte(0xe,param_2);
  iVar6 = put_byte(0x80,param_2);
  iVar7 = put_byte(0x80,param_2);
  iVar8 = put_byte(*(int *)(param_1 + 0xf20) * 0x20 + 7,param_2);
  iVar9 = put_byte(0x20,param_2);
  return iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9;
}



int SliceHeader_sw(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined8 uVar16;
  
  *(undefined *)(param_1 + 0x70e) = 0;
  iVar14 = *(int *)(param_1 + 0xf20);
  *(undefined *)(param_1 + 0x70f) = 1;
  *(undefined *)(param_1 + 0x710) = 1;
  if (iVar14 != 0) {
    iVar14 = initPrefixNAL_sw(param_1,param_3);
  }
  iVar2 = put_byte(0,param_3);
  iVar3 = put_byte(0,param_3);
  iVar4 = put_byte(0,param_3);
  iVar5 = put_byte(1,param_3);
  uVar6 = 0x65;
  if ((*(int *)(param_1 + 0x1e0) != 0x12) && (uVar6 = 0x41, *(char *)(param_1 + 0x70e) == '\0')) {
    uVar6 = 1;
  }
  iVar7 = put_byte(uVar6,param_3);
  iVar8 = PutVlcUE_sw(0,param_3);
  iVar9 = PutVlcUE_sw(*(byte *)(param_1 + 0x712) + 5,param_3);
  iVar10 = PutVlcUE_sw(*(undefined *)(param_1 + 0x5ec),param_3);
  iVar11 = put_bit_sw(*(undefined4 *)(param_1 + 0x74c),*(undefined *)(param_1 + 0x4d3),param_3);
  iVar11 = iVar8 + iVar9 + iVar2 + iVar3 + iVar14 + iVar4 + iVar5 + iVar7 + iVar10 + iVar11;
  cVar1 = *(char *)(param_1 + 0x4e0);
  if (cVar1 == '\0') {
    uVar16 = put_bit_sw(1,1,param_3);
    iVar14 = (int)((ulonglong)uVar16 >> 0x20);
    if (param_2 == 1) {
      iVar14 = param_2;
    }
    iVar11 = iVar11 + (int)uVar16;
    if (param_2 != 1) {
      if (param_2 != 2) goto LAB_0001d0f6;
      cVar1 = '\x01';
      iVar14 = 1;
    }
    iVar14 = put_bit_sw(cVar1,iVar14,param_3);
    iVar11 = iVar11 + iVar14;
  }
LAB_0001d0f6:
  if (*(int *)(param_1 + 0x1e0) == 0x12) {
    iVar14 = PutVlcUE_sw(0,param_3);
    iVar11 = iVar11 + iVar14;
  }
  if (*(char *)(param_1 + 0x4d4) != '\0') goto LAB_0001d146;
  uVar13 = (uint)*(byte *)(param_1 + 0x4d5);
  if (param_2 == 1) {
    uVar12 = (1 << uVar13) - 1;
LAB_0001d134:
    uVar15 = *(uint *)(param_1 + 0x740);
  }
  else {
    uVar12 = (1 << uVar13) - 1;
    if (param_2 != 2) goto LAB_0001d134;
    uVar15 = *(uint *)(param_1 + 0x744);
  }
  *(uint *)(param_1 + 0x6f8) = uVar12 & uVar15;
  iVar14 = put_bit_sw(uVar12 & uVar15,uVar13,param_3);
  iVar11 = iVar11 + iVar14;
LAB_0001d146:
  if (*(char *)(param_1 + 0x712) == '\x01') {
    iVar14 = put_bit_sw(0,1,param_3);
    iVar11 = iVar11 + iVar14;
  }
  if (*(char *)(param_1 + 0x712) != '\x02') {
    uVar13 = (uint)*(byte *)(param_1 + 0x70f) - (uint)*(byte *)(param_1 + 0x5f0);
    if (uVar13 != 0) {
      uVar13 = 1;
    }
    if ((*(char *)(param_1 + 0x712) == '\x01') &&
       (*(char *)(param_1 + 0x710) != *(char *)(param_1 + 0x5f1))) {
      uVar13 = uVar13 | 1;
    }
    iVar14 = put_bit_sw(uVar13,1,param_3);
    iVar11 = iVar11 + iVar14;
    if (uVar13 != 0) {
      iVar14 = PutVlcUE_sw(*(byte *)(param_1 + 0x70f) - 1,param_3);
      iVar11 = iVar11 + iVar14;
      if (*(char *)(param_1 + 0x712) == '\x01') {
        iVar14 = PutVlcUE_sw(*(byte *)(param_1 + 0x710) - 1,param_3);
        iVar11 = iVar11 + iVar14;
      }
    }
  }
  if (*(byte *)(param_1 + 0x712) < 2) {
    iVar14 = put_bit_sw(0,1,param_3);
    iVar11 = iVar11 + iVar14;
  }
  if (*(char *)(param_1 + 0x712) == '\x01') {
    iVar14 = put_bit_sw(0,1,param_3);
    iVar11 = iVar11 + iVar14;
  }
  if (*(char *)(param_1 + 0x70e) != '\0') {
    if (*(int *)(param_1 + 0x1e0) == 0x12) {
      iVar14 = put_bit_sw(0,1,param_3);
      iVar2 = put_bit_sw(0,1,param_3);
      iVar11 = iVar11 + iVar14 + iVar2;
    }
    else {
      iVar14 = put_bit_sw(0,1,param_3);
      iVar11 = iVar11 + iVar14;
    }
  }
  if ((*(char *)(param_1 + 0x5ee) != '\0') && (*(char *)(param_1 + 0x712) != '\x02')) {
    iVar14 = PutVlcUE_sw(*(undefined *)(param_1 + 0x6fe),param_3);
    iVar11 = iVar11 + iVar14;
  }
  iVar14 = PutVlcSE_sw(*(int *)(param_1 + 0x1dc) - (uint)*(byte *)(param_1 + 0x5f4),param_3);
  iVar14 = iVar14 + iVar11;
  if (*(char *)(param_1 + 0x5f7) != '\0') {
    iVar2 = PutVlcUE_sw(*(undefined *)(param_1 + 0x700),param_3);
    iVar14 = iVar14 + iVar2;
    if (*(char *)(param_1 + 0x700) != '\x01') {
      iVar2 = PutVlcSE_sw(*(undefined4 *)(param_1 + 0x704),param_3);
      iVar3 = PutVlcSE_sw(*(undefined4 *)(param_1 + 0x708),param_3);
      iVar14 = iVar14 + iVar2 + iVar3;
    }
  }
  return iVar14;
}



void writeVlcByteAlign(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < 8) {
    bVar1 = (byte)(0xff >> (8 - uVar3 & 0xff)) | *(char *)(param_1 + 0x20) << (uVar3 & 0xff);
    iVar2 = *(int *)(param_1 + 4);
    *(byte *)(param_1 + 0x20) = bVar1;
    *(byte *)(*(int *)(param_1 + 0x24) + iVar2) = bVar1;
    *(undefined4 *)(param_1 + 8) = 8;
    *(int *)(param_1 + 4) = iVar2 + 1;
  }
  return;
}



void SODBtoRBSP(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(char *)(*(int *)(param_1 + 0x24) + iVar1) =
       (char)(((*(byte *)(param_1 + 0x20) & 0x7f) << 1 | 1) << (*(int *)(param_1 + 8) - 1U & 0xff));
  *(int *)(param_1 + 4) = iVar1 + 1;
  *(undefined4 *)(param_1 + 8) = 8;
  *(undefined *)(param_1 + 0x20) = 0;
  return;
}



void RBSPtoEBSP(void *param_1,void *param_2,int param_3,size_t param_4)

{
  byte bVar1;
  uint uVar2;
  size_t sVar3;
  
  memcpy(param_1,param_2,param_4);
  uVar2 = 0;
  sVar3 = param_4;
  while ((int)sVar3 < param_3) {
    if ((uVar2 == 2) && (bVar1 = *(byte *)((int)param_2 + sVar3), (bVar1 & 0xfc) == 0)) {
      *(undefined *)((int)param_1 + param_4) = 3;
      param_4 = param_4 + 1;
      uVar2 = bVar1 & 0xfc;
    }
    uVar2 = uVar2 + 1;
    *(undefined *)((int)param_1 + param_4) = *(undefined *)((int)param_2 + sVar3);
    if (*(char *)((int)param_2 + sVar3) != '\0') {
      uVar2 = 0;
    }
    param_4 = param_4 + 1;
    sVar3 = sVar3 + 1;
  }
  return;
}



void p_skip_frame_encode(int *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int *__ptr;
  undefined4 *__s;
  undefined4 *__s_00;
  undefined4 *__s_01;
  undefined4 *__s_02;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  size_t sVar9;
  int iVar10;
  int iVar11;
  size_t unaff_r9;
  int local_34;
  
  iVar2 = BitStreamWriteOffset(*(undefined4 *)(param_2 + 4));
  uVar7 = *(uint *)(param_2 + 0x44);
  if (*(int *)(param_2 + 0x1c4) == 0) {
    uVar8 = *(uint *)(param_2 + 0x48) >> 4;
  }
  else {
    uVar8 = *(uint *)(param_2 + 0x48) >> 5;
  }
  __ptr = (int *)malloc(0x128);
  if (__ptr == (int *)0x0) {
    __android_log_print(3,"awplayer","<%s:%u>: currMB malloc error!\n","p_skip_frame_encode",0x436);
  }
  else {
    __s = (undefined4 *)malloc(0x28);
    if (__s == (undefined4 *)0x0) {
      __android_log_print(3,"awplayer","<%s:%u>: eep malloc error!\n","p_skip_frame_encode",0x43d);
      __s_01 = __s;
      __s_02 = __s;
      __s_00 = __s;
    }
    else {
      memset(__s,0,0x28);
      __s_00 = (undefined4 *)malloc(0x400);
      if (__s_00 == (undefined4 *)0x0) {
        __android_log_print(3,"awplayer","<%s:%u>: code_buffer malloc error!\n",
                            "p_skip_frame_encode",0x445);
        __s_01 = __s_00;
        __s_02 = __s_00;
      }
      else {
        memset(__s_00,0,0x400);
        __s_01 = (undefined4 *)malloc(0x28);
        if (__s_01 == (undefined4 *)0x0) {
          __android_log_print(3,"awplayer","<%s:%u>: code_buffer malloc error!\n",
                              "p_skip_frame_encode",0x44e);
          __s_02 = __s_01;
        }
        else {
          memset(__s_01,0,0x28);
          __s_02 = (undefined4 *)malloc(0x400);
          if (__s_02 == (undefined4 *)0x0) {
            __android_log_print(3,"awplayer","<%s:%u>: output_buf malloc error!\n",
                                "p_skip_frame_encode",0x457);
          }
          else {
            memset(__s_02,0,0x400);
            __s_01[9] = __s_00;
            __s_01[2] = 8;
            *(undefined *)(__s_01 + 8) = 0;
            SliceHeader_sw(param_2,*(undefined *)(param_2 + 0x1c0),__s_01);
            if (*(int *)(param_2 + 0xf20) == 0) {
              uVar3 = 4;
            }
            else {
              uVar3 = 0xd;
            }
            uVar7 = uVar7 >> 4;
            if (*(char *)(param_2 + 0x6fd) == '\x01') {
              writeVlcByteAlign(__s_01);
              uVar4 = __s_01[9];
              __s[3] = 0x11;
              __s[6] = uVar4;
              __s[7] = __s_01 + 1;
              *__s = 0;
              __s[4] = 0;
              __s[2] = 0;
              __s[5] = 0xffffffff;
              __s[9] = 0;
              __s[8] = 0;
              __s[1] = 0x1fe;
              __ptr[5] = 0x1cc79;
              iVar11 = 0;
              __ptr[6] = 0x1c979;
              do {
                iVar10 = 0;
                do {
                  iVar6 = iVar10 + iVar11;
                  iVar5 = (uint)*(byte *)(param_2 + 0x6fe) * 0x42 + iVar11 + iVar10;
                  iVar10 = iVar10 + 2;
                  biari_init_context(*(undefined4 *)(param_2 + 0x1dc),__ptr + 8 + iVar6,
                                     &UNK_000251ec + iVar5);
                } while (iVar10 != 0x16);
                iVar11 = iVar11 + 0x16;
              } while (iVar11 != 0x42);
              iVar11 = 0;
              while (iVar11 < (int)uVar8) {
                iVar10 = 0;
                while (iVar10 < (int)uVar7) {
                  *__ptr = iVar10;
                  __ptr[1] = iVar11;
                  iVar10 = iVar10 + 1;
                  p_skip_mb_encode(param_2,__s,__ptr);
                }
                iVar11 = iVar11 + 1;
              }
            }
            else {
              *(undefined4 *)(param_2 + 0xf08) = 0;
              iVar11 = 0;
              __ptr[7] = 0x1ce29;
              while (iVar11 < (int)uVar8) {
                iVar10 = 0;
                while (iVar10 < (int)uVar7) {
                  *__ptr = iVar10;
                  __ptr[1] = iVar11;
                  (*(code *)__ptr[7])(param_2,__ptr,__s_01);
                  iVar10 = iVar10 + 1;
                }
                iVar11 = iVar11 + 1;
              }
            }
            uVar7 = (uint)*(byte *)(param_2 + 0x6fd);
            if (uVar7 == 0) {
              SODBtoRBSP(__s_01);
              while ((int)uVar7 < (int)__s_01[1]) {
                puVar1 = (undefined *)(__s_01[9] + uVar7);
                uVar7 = uVar7 + 1;
                __android_log_print(3,"awplayer","<%s:%u>: %08x\n","p_skip_frame_encode",0x4a4,
                                    *puVar1);
              }
              unaff_r9 = RBSPtoEBSP(__s_02,__s_01[9],__s_01[1],uVar3);
              iVar11 = 0;
              while (iVar11 < (int)unaff_r9) {
                puVar1 = (undefined *)((int)__s_02 + iVar11);
                iVar11 = iVar11 + 1;
                __android_log_print(3,"awplayer","<%s:%u>: %08x\n","p_skip_frame_encode",0x4a8,
                                    *puVar1);
              }
            }
            else {
              biari_encode_symbol_final(__s,1);
              arienco_done_encoding(__s);
              uVar4 = __s[3];
              *(undefined *)(__s_01 + 8) = 0;
              __s_01[2] = uVar4;
              unaff_r9 = RBSPtoEBSP(__s_02,__s_01[9],__s_01[1],uVar3);
            }
            uVar7 = *(uint *)(*(int *)(param_2 + 4) + 0x10);
            if (uVar7 < unaff_r9 + iVar2) {
              sVar9 = uVar7 - iVar2;
              memcpy((void *)(*(int *)(param_2 + 0x20) + iVar2),__s_02,sVar9);
              memcpy(*(void **)(param_2 + 0x20),(void *)((int)__s_02 + sVar9),unaff_r9 - sVar9);
              EncAdapterMemFlushCache(*(int *)(param_2 + 0x20) + iVar2,sVar9);
              iVar11 = *(int *)(param_2 + 0x20);
              sVar9 = unaff_r9 - sVar9;
            }
            else {
              memcpy((void *)(*(int *)(param_2 + 0x20) + iVar2),__s_02,unaff_r9);
              iVar11 = *(int *)(param_2 + 0x20) + iVar2;
              sVar9 = unaff_r9;
            }
            EncAdapterMemFlushCache(iVar11,sVar9);
            local_34 = iVar2;
          }
        }
      }
    }
    free(__ptr);
    if (__s != (undefined4 *)0x0) {
      free(__s);
    }
    if (__s_01 != (undefined4 *)0x0) {
      free(__s_01);
    }
    if (__s_00 != (undefined4 *)0x0) {
      free(__s_00);
    }
    if (__s_02 != (undefined4 *)0x0) {
      free(__s_02);
    }
  }
  *param_1 = local_34;
  param_1[1] = unaff_r9;
  return;
}



undefined4 VP8SetParameter(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 6) {
    *(undefined4 *)(param_1 + 0x5f84) = 1;
    return 0;
  }
  if (param_2 < 7) {
    if (param_2 == 1) {
      *(undefined4 *)(param_1 + 0x5fd4) = *param_3;
      return 0;
    }
    if (param_2 < 2) {
      if (param_2 == 0) {
        *(undefined4 *)(param_1 + 0x5fd0) = *param_3;
        return 0;
      }
    }
    else {
      if (param_2 == 2) {
        uVar1 = *param_3;
LAB_0001d7d8:
        *(undefined4 *)(param_1 + 0x6070) = uVar1;
        return 0;
      }
      if (param_2 == 4) {
        *(undefined4 *)(param_1 + 0x5fc4) = *param_3;
        return 0;
      }
    }
  }
  else {
    if (param_2 < 0xb) {
      if (8 < param_2) {
        return 0;
      }
      if (param_2 == 7) {
        memcpy((void *)(param_1 + 0xd158),param_3,8);
        return 0;
      }
    }
    else {
      if (param_2 == 0xc) {
        *(undefined4 *)(param_1 + 0x5f9c) = *param_3;
        return 0;
      }
      if (param_2 == 0x203) {
        *(undefined4 *)(param_1 + 0x5fd4) = *param_3;
        *(undefined4 *)(param_1 + 0x5fd0) = param_3[1];
        uVar1 = param_3[2];
        goto LAB_0001d7d8;
      }
    }
  }
  __android_log_print(5,"awplayer","<%s:%u>: h264 do not support this %d indexType",
                      "VP8SetParameter",0x681,param_2);
  return 0xffffffff;
}



undefined4 VP8FreeOneBitstream(int param_1,int *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int **ppiVar3;
  int *piVar4;
  int iVar5;
  int *local_1c;
  int local_18;
  int local_14;
  
  uVar1 = 0xffffffff;
  if (param_1 != 0) {
    local_1c = param_2;
    local_18 = param_3;
    local_14 = param_4;
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xd220));
    iVar2 = *param_2;
    iVar5 = 0;
    ppiVar3 = &local_1c;
    do {
      piVar4 = *(int **)(param_1 + iVar2 * 4 + iVar5 + 0xd824);
      *ppiVar3 = piVar4;
      if (((uint)piVar4 & 0x1f) != 0) {
        *ppiVar3 = (int *)((int)piVar4 + (0x20 - ((uint)piVar4 & 0x1f)));
      }
      iVar5 = iVar5 + 0x200;
      ppiVar3 = ppiVar3 + 1;
    } while (iVar5 != 0x600);
    *(int *)(param_1 + 0x5cd0) = *(int *)(param_1 + 0x5cd0) - (int)local_1c;
    *(int *)(param_1 + 0x5d00) = *(int *)(param_1 + 0x5d00) - local_18;
    *(int *)(param_1 + 0x5ce4) = *(int *)(param_1 + 0x5ce4) - local_14;
    *(char *)(param_1 + 0xe22a) = *(char *)(param_1 + 0xe22a) + -1;
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xd220));
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 VP8GetOneBitstream(int param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  void *pvVar3;
  undefined *puVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  size_t sVar8;
  size_t sVar9;
  void *pvVar10;
  size_t __n;
  int iVar11;
  size_t __n_00;
  
  if (param_1 == 0) {
    uVar1 = 0x5af;
    puVar4 = &DAT_00024815;
  }
  else {
    if (*(char *)(param_1 + 0xe22b) == '\0') {
      uVar1 = 0x605;
      puVar4 = &DAT_000248c2;
    }
    else {
      pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xd220));
      iVar7 = param_1 + (*(byte *)(param_1 + 0xe228) + 0x1bc0) * 8;
      uVar2 = *(uint *)(iVar7 + 0x2c);
      param_2[2] = *(uint *)(iVar7 + 0x28);
      param_2[3] = uVar2;
      *param_2 = (uint)*(byte *)(param_1 + 0xe228);
      param_2[4] = *(uint *)(param_1 + (*(byte *)(param_1 + 0xe228) + 0x3880) * 4 + 0x2c);
      uVar2 = (uint)*(byte *)(param_1 + 0xe228);
      iVar7 = *(int *)(param_1 + (uVar2 + 0x3480) * 4 + 0x24);
      sVar9 = *(size_t *)(param_1 + (uVar2 + 0x3600) * 4 + 0x24);
      iVar5 = *(int *)(param_1 + (uVar2 + 0x3500) * 4 + 0x24);
      __n = *(size_t *)(param_1 + (uVar2 + 0x3680) * 4 + 0x24);
      iVar11 = *(int *)(param_1 + (uVar2 + 0x3580) * 4 + 0x24);
      sVar8 = *(size_t *)(param_1 + (uVar2 + 0x3700) * 4 + 0x24);
      uVar2 = sVar9 + __n + sVar8;
      param_2[5] = uVar2;
      if (uVar2 < 0x200001) {
        uVar2 = *(uint *)(param_1 + 0xe9d8);
        param_2[8] = 0;
        param_2[6] = 0;
        param_2[7] = uVar2;
        EncAdapterMemFlushCache(*(int *)(param_1 + 0x5cd8) + iVar11,sVar8);
        pvVar10 = *(void **)(param_1 + 0xe9d8);
        memcpy(pvVar10,(void *)(*(int *)(param_1 + 0x5cd8) + iVar11),sVar8);
        pvVar10 = (void *)((int)pvVar10 + sVar8);
        if ((int)(iVar7 + sVar9) < 0x200001) {
          EncAdapterMemFlushCache(*(int *)(param_1 + 0x5cc4) + iVar7,sVar9);
          pvVar3 = (void *)(*(int *)(param_1 + 0x5cc4) + iVar7);
          sVar8 = sVar9;
        }
        else {
          __n_00 = 0x200000 - iVar7;
          EncAdapterMemFlushCache(*(int *)(param_1 + 0x5cc4) + iVar7,__n_00);
          memcpy(pvVar10,(void *)(*(int *)(param_1 + 0x5cc4) + iVar7),__n_00);
          sVar8 = sVar9 + iVar7 + -0x200000;
          EncAdapterMemFlushCache(*(undefined4 *)(param_1 + 0x5cc4),sVar8);
          pvVar3 = *(void **)(param_1 + 0x5cc4);
          pvVar10 = (void *)((int)pvVar10 + __n_00);
        }
        memcpy(pvVar10,pvVar3,sVar8);
        pvVar10 = (void *)((int)pvVar10 + sVar9);
        if ((int)(iVar5 + __n) < 0x400001) {
          EncAdapterMemFlushCache(*(int *)(param_1 + 0x5cf4) + iVar5,__n);
          pvVar3 = (void *)(*(int *)(param_1 + 0x5cf4) + iVar5);
        }
        else {
          sVar8 = 0x400000 - iVar5;
          EncAdapterMemFlushCache(*(int *)(param_1 + 0x5cf4) + iVar5,sVar8);
          __n = __n + iVar5 + -0x400000;
          memcpy(pvVar10,(void *)(*(int *)(param_1 + 0x5cf4) + iVar5),sVar8);
          EncAdapterMemFlushCache(*(undefined4 *)(param_1 + 0x5cf4),__n);
          pvVar3 = *(void **)(param_1 + 0x5cf4);
          pvVar10 = (void *)(sVar8 + (int)pvVar10);
        }
        memcpy(pvVar10,pvVar3,__n);
        cVar6 = *(char *)(param_1 + 0xe228) + '\x01';
        *(char *)(param_1 + 0xe228) = cVar6;
        if (cVar6 == -0x80) {
          *(undefined *)(param_1 + 0xe228) = 0;
        }
        *(char *)(param_1 + 0xe22b) = *(char *)(param_1 + 0xe22b) + -1;
        pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xd220));
        EncAdapterMemFlushCache(param_2[7],param_2[5]);
        return 0;
      }
      puVar4 = &DAT_0002484e;
      uVar1 = 0x5c6;
    }
  }
  __android_log_print(6,"awplayer",puVar4,"VP8GetOneBitstream",uVar1);
  return 0xffffffff;
}



void VP8EncClose(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    IspDestroy();
    *param_1 = 0;
  }
  if (param_1[0x3a2c] != 0) {
    EncAdapterMemPfree();
    param_1[0x3a2c] = 0;
  }
  if (param_1[0x3a2d] != 0) {
    EncAdapterMemPfree();
    param_1[0x3a2d] = 0;
  }
  iVar1 = 0;
  while (iVar1 < *(short *)(param_1 + 0x1743)) {
    if (param_1[iVar1 + 0x1744] != 0) {
      EncAdapterMemPfree();
    }
    iVar1 = iVar1 + 1;
  }
  if (param_1[0x17dd] != 0) {
    EncAdapterMemPfree();
    param_1[0x17dd] = 0;
  }
  if (param_1[0x17e0] != 0) {
    EncAdapterMemPfree();
    param_1[0x17e0] = 0;
  }
  if (param_1[0x1731] != 0) {
    EncAdapterMemPfree();
    param_1[0x1731] = 0;
  }
  if (param_1[0x1736] != 0) {
    EncAdapterMemPfree();
    param_1[0x1736] = 0;
  }
  if (param_1[0x173d] != 0) {
    EncAdapterMemPfree();
    param_1[0x173d] = 0;
  }
  if (param_1[0x1742] != 0) {
    EncAdapterMemPfree();
    param_1[0x1742] = 0;
  }
  if (param_1[0x17df] != 0) {
    EncAdapterMemPfree();
    param_1[0x17df] = 0;
  }
  if (param_1[0x17e0] != 0) {
    EncAdapterMemPfree();
    param_1[0x17e0] = 0;
  }
  if (param_1[0x3a76] != 0) {
    EncAdapterMemPfree();
    param_1[0x3a76] = 0;
  }
  if (param_1[0x3a77] != 0) {
    EncAdapterMemPfree();
    param_1[0x3a77] = 0;
  }
  return;
}



undefined4 VP8UnInit(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      IspDestroy();
      *param_1 = 0;
    }
    if (param_1[0x3a2c] != 0) {
      EncAdapterMemPfree();
      param_1[0x3a2c] = 0;
    }
    if (param_1[0x3a2d] != 0) {
      EncAdapterMemPfree();
      param_1[0x3a2d] = 0;
    }
    iVar1 = 0;
    while (iVar1 < *(short *)(param_1 + 0x1743)) {
      if (param_1[iVar1 + 0x1744] != 0) {
        EncAdapterMemPfree();
      }
      iVar1 = iVar1 + 1;
    }
    if (param_1[0x17dd] != 0) {
      EncAdapterMemPfree();
      param_1[0x17dd] = 0;
    }
    if (param_1[0x17e0] != 0) {
      EncAdapterMemPfree();
      param_1[0x17e0] = 0;
    }
    if (param_1[0x1731] != 0) {
      EncAdapterMemPfree();
      param_1[0x1731] = 0;
    }
    if (param_1[0x1736] != 0) {
      EncAdapterMemPfree();
      param_1[0x1736] = 0;
    }
    if (param_1[0x173d] != 0) {
      EncAdapterMemPfree();
      param_1[0x173d] = 0;
    }
    if (param_1[0x1742] != 0) {
      EncAdapterMemPfree();
      param_1[0x1742] = 0;
    }
    if (param_1[0x17df] != 0) {
      EncAdapterMemPfree();
      param_1[0x17df] = 0;
    }
    if (param_1[0x17e0] != 0) {
      EncAdapterMemPfree();
      param_1[0x17e0] = 0;
    }
    if (param_1[0x3a76] != 0) {
      EncAdapterMemPfree();
      param_1[0x3a76] = 0;
    }
  }
  return 0;
}



undefined4 VP8GetParameter(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 8) {
    uVar1 = 0;
    *param_3 = *(undefined4 *)(param_1 + 0xd160);
  }
  else {
    __android_log_print(5,"awplayer","<%s:%u>: vp8 do not support this %d indexType",
                        "VP8GetParameter",0x63b,param_2);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



void VP8enc_time_start(int param_1,int param_2)

{
  timeval local_10;
  
  local_10.tv_sec = param_1;
  local_10.tv_usec = param_2;
  gettimeofday(&local_10,(__timezone_ptr_t)0x0);
  DAT_0002b460 = local_10.tv_sec * 1000000 + local_10.tv_usec;
  *(undefined4 *)(param_1 + 8) = 0x80000000;
  DAT_0002b464 = DAT_0002b460 >> 0x1f;
  return;
}



void VP8enc_time_end(int param_1,int param_2,undefined4 param_3)

{
  timeval local_10;
  undefined4 uStack8;
  
  *(undefined4 *)(param_1 + 8) = 0;
  local_10.tv_sec = param_1;
  local_10.tv_usec = param_2;
  uStack8 = param_3;
  gettimeofday(&local_10,(__timezone_ptr_t)0x0);
  DAT_0002b468 = local_10.tv_sec * 1000000 + local_10.tv_usec;
  DAT_0002b46c = DAT_0002b468 >> 0x1f;
  return;
}



void vp8_init_classify_engine(int param_1,int param_2)

{
  undefined4 uVar1;
  double dVar2;
  
  *(undefined *)(param_1 + 0xd1da) = 6;
  *(undefined *)(param_1 + 0xd1d9) = 0;
  *(undefined *)(param_1 + 0xd1d8) = 0;
  if (*(int *)(param_1 + 0x5658) == 1) {
    *(int *)(param_1 + 0xd20c) = *(int *)(param_1 + 0xd210) >> 6;
  }
  else {
    uVar1 = __aeabi_uidiv(*(undefined4 *)(param_1 + 0xd20c),
                          *(int *)(param_1 + 0x5fb0) * *(int *)(param_1 + 0x5fb4));
    *(undefined4 *)(param_1 + 0xd20c) = uVar1;
  }
  dVar2 = (double)(ulonglong)*(uint *)(param_1 + 0xd20c);
  *(int *)(param_1 + 0xd1dc) = SUB84(ROUND(dVar2 * 0.52),0);
  *(int *)(param_1 + 0xd1e0) = SUB84(ROUND(dVar2 * 0.59),0);
  *(int *)(param_1 + 0xd1e4) = SUB84(ROUND(dVar2 * 0.68),0);
  *(int *)(param_1 + 0xd1e8) = SUB84(ROUND(dVar2 * 0.77),0);
  *(int *)(param_1 + 0xd1ec) = SUB84(ROUND(dVar2 * 0.88),0);
  *(int *)(param_1 + 0xd1f0) = SUB84(ROUND(dVar2),0);
  *(int *)(param_1 + 0xd1f4) = SUB84(ROUND(dVar2 * 1.14),0);
  *(int *)(param_1 + 0xd1f8) = SUB84(ROUND(dVar2 * 1.3),0);
  *(int *)(param_1 + 0xd1fc) = SUB84(ROUND(dVar2 * 1.48),0);
  *(int *)(param_1 + 0xd200) = SUB84(ROUND(dVar2 * 1.69),0);
  *(int *)(param_1 + 0xd204) = SUB84(ROUND(dVar2 * 1.93),0);
  *(undefined4 *)(param_2 + 0x2c) = 0x6000000;
  return;
}



void vp8_init_temporalfilter(int param_1,int param_2)

{
  double dVar1;
  uint uVar2;
  
  *(byte *)(param_1 + 0xd117) = *(byte *)(param_1 + 0xd117) | 0x80;
  if (*(int *)(param_1 + 0x5658) == 1) {
    uVar2 = *(uint *)(param_1 + 0xd214);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xd214);
    dVar1 = ROUND((double)(ulonglong)*(uint *)(param_1 + 0xd20c) * 0.59);
    *(int *)(param_1 + 0xd208) = SUB84(dVar1,0);
    if ((double)((ulonglong)dVar1 & 0xffffffff) < (double)(ulonglong)uVar2 * 1.5) goto LAB_0001df86;
  }
  *(uint *)(param_1 + 0xd208) = uVar2;
LAB_0001df86:
  *(uint *)(param_2 + 0x44) =
       *(byte *)(param_1 + 0xd114) | 0x80000000 | (uint)*(byte *)(param_1 + 0xd115) << 8 |
       (uint)*(byte *)(param_1 + 0xd115) * (uint)*(byte *)(param_1 + 0xd114) * 0x10000;
  *(int *)(param_2 + 0x3c) = *(int *)(param_1 + 0xd208) << 0x14;
  *(undefined4 *)(param_2 + 200) = *(undefined4 *)(param_1 + 0x5f78);
  return;
}



undefined4
vp8_staticst_histogram(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined uVar8;
  int iVar9;
  uint uVar10;
  double dVar11;
  
  EncAdapterMemFlushCache(*(undefined4 *)(param_1 + 0x5f74),0x400,param_3,param_4,param_4);
  iVar4 = *(int *)(param_1 + 0x5f74);
  iVar6 = 0;
  do {
    iVar9 = param_1 + iVar6;
    puVar1 = (undefined2 *)(iVar4 + iVar6);
    iVar6 = iVar6 + 2;
    *(undefined2 *)(iVar9 + 0x5d74) = *puVar1;
  } while (iVar6 != 0x200);
  iVar4 = 0;
  iVar6 = 0;
  uVar2 = 0;
  iVar9 = 0;
  do {
    uVar10 = (uint)*(ushort *)(param_1 + iVar6 * 2 + 0x5d74);
    iVar9 = iVar9 + uVar10;
    if (uVar2 <= uVar10) {
      uVar2 = uVar10;
      iVar4 = iVar6;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0x100);
  iVar5 = 0;
  dVar11 = (double)(longlong)(int)(uint)*(ushort *)(param_1 + (iVar4 + 0x2e80) * 2 + 0x74);
  iVar6 = (uint)(dVar11 < (double)(longlong)*(int *)(param_1 + 0x5fc0) * 0.1) << 0x1f;
  iVar7 = param_1;
  if (iVar6 < 0) {
    iVar7 = param_1 + 0xd000;
    *(undefined *)(param_1 + 0xd114) = 0;
  }
  if (-1 < iVar6) {
    uVar2 = iVar4 - 5;
    iVar6 = 0;
    iVar3 = 0;
    while (iVar5 != 0x14) {
      if ((uVar2 < 0x100) &&
         (dVar11 * 0.9 <=
          (double)(longlong)(int)(uint)*(ushort *)(iVar7 + iVar4 * 2 + iVar5 + 0x5d6a))) {
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + uVar2;
      }
      uVar2 = uVar2 + 1;
      iVar5 = iVar5 + 2;
    }
    if (iVar3 != 0) {
      iVar3 = __aeabi_idiv(iVar6 + (iVar3 >> 1));
    }
    iVar4 = iVar9;
    if (iVar9 != 0) {
      iVar4 = iVar3;
    }
    uVar8 = (undefined)iVar4;
    if (iVar9 == 0) {
      uVar8 = 0;
    }
    *(undefined *)(iVar7 + 0xd114) = uVar8;
  }
  return 0;
}



void vp8_init_default_param(int param_1)

{
  *(undefined4 *)(param_1 + 0x5fb8) = 0x1000;
  *(undefined4 *)(param_1 + 0x5fbc) = 0x1000;
  *(undefined4 *)(param_1 + 0x5c6c) = 0;
  *(undefined4 *)(param_1 + 0x5fcc) = 0;
  *(undefined4 *)(param_1 + 0x5cc0) = 0;
  *(undefined4 *)(param_1 + 0x5cbc) = 1;
  *(undefined4 *)(param_1 + 0x6070) = 0x1e;
  *(undefined4 *)(param_1 + 0xd0a8) = 0x2f;
  *(undefined4 *)(param_1 + 0x5c98) = 0;
  *(undefined4 *)(param_1 + 0x5c94) = 0x7f;
  *(undefined4 *)(param_1 + 0x5c9c) = 1;
  *(undefined4 *)(param_1 + 0x5c90) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60d8) = 0;
  *(undefined4 *)(param_1 + 0x6168) = 0;
  *(undefined4 *)(param_1 + 0x616c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x6170) = 0;
  *(undefined4 *)(param_1 + 0x6174) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x6178) = 0;
  *(undefined4 *)(param_1 + 0x617c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x6180) = 0;
  *(undefined4 *)(param_1 + 0x6184) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x60b8) = 0;
  *(undefined4 *)(param_1 + 0x60bc) = 0;
  *(undefined4 *)(param_1 + 0x6000) = 1;
  *(undefined4 *)(param_1 + 0x6004) = 0;
  *(undefined4 *)(param_1 + 0x60dc) = 0;
  *(undefined4 *)(param_1 + 0x60e4) = 0;
  *(undefined4 *)(param_1 + 0x60e8) = 0;
  *(undefined4 *)(param_1 + 0x6008) = 0;
  *(undefined4 *)(param_1 + 0x600c) = 0;
  *(undefined4 *)(param_1 + 0x5fe4) = 0x7f;
  *(undefined4 *)(param_1 + 0x5fe8) = 0;
  *(undefined4 *)(param_1 + 0x5fec) = 0;
  *(undefined4 *)(param_1 + 0x5ff8) = 0;
  *(undefined4 *)(param_1 + 0x5ffc) = 0;
  *(undefined4 *)(param_1 + 0x60ec) = 1;
  *(undefined4 *)(param_1 + 0x60f0) = 1;
  *(undefined4 *)(param_1 + 0x60f4) = 1;
  *(undefined4 *)(param_1 + 0x60f8) = 1;
  *(undefined4 *)(param_1 + 0x5ca0) = 4;
  *(undefined4 *)(param_1 + 0x5ca8) = 6;
  *(undefined4 *)(param_1 + 0x5ca4) = 5;
  *(undefined4 *)(param_1 + 0x6094) = 0x5f;
  *(undefined4 *)(param_1 + 0xd16c) = 3;
  *(undefined4 *)(param_1 + 0xd17c) = 0x22;
  *(undefined4 *)(param_1 + 0xd168) = 0;
  *(undefined4 *)(param_1 + 0xd170) = 0;
  *(undefined4 *)(param_1 + 0xd178) = 0;
  *(undefined4 *)(param_1 + 0xd174) = 1;
  *(undefined4 *)(param_1 + 0xd180) = 1;
  *(undefined *)(param_1 + 0x5c80) = 2;
  *(undefined *)(param_1 + 0x5c81) = 0;
  *(undefined *)(param_1 + 0x5c84) = 4;
  *(undefined *)(param_1 + 0x5c87) = 4;
  *(undefined *)(param_1 + 0x5c82) = 0xfe;
  *(undefined *)(param_1 + 0x5c83) = 0xfe;
  *(undefined *)(param_1 + 0x5c85) = 0xfe;
  *(undefined *)(param_1 + 0x5c86) = 2;
  *(undefined4 *)(param_1 + 0xd188) = 0;
  *(undefined4 *)(param_1 + 0xd194) = 0;
  *(undefined4 *)(param_1 + 0xd198) = 0;
  *(undefined4 *)(param_1 + 0xd19c) = 0;
  *(undefined4 *)(param_1 + 0xd1a0) = 0;
  *(undefined4 *)(param_1 + 0xd1a4) = 0;
  *(undefined4 *)(param_1 + 0xd1a8) = 0;
  *(undefined4 *)(param_1 + 0xd1ac) = 0;
  *(undefined4 *)(param_1 + 0xd1b4) = 0;
  *(undefined4 *)(param_1 + 0xd1b8) = 0;
  *(undefined4 *)(param_1 + 0xd184) = 0x3c;
  *(undefined4 *)(param_1 + 0xd1b0) = 1;
  *(undefined4 *)(param_1 + 0x5c78) = 0;
  *(undefined4 *)(param_1 + 0x5c7c) = 0;
  *(undefined4 *)(param_1 + 0x5c70) = 0;
  *(undefined4 *)(param_1 + 0x618c) = 0x80;
  *(undefined4 *)(param_1 + 0x6190) = 0x80;
  *(undefined4 *)(param_1 + 0x6188) = 0x3f;
  *(undefined4 *)(param_1 + 0x6078) = 0;
  *(undefined *)(param_1 + 0x6098) = 0xff;
  *(undefined *)(param_1 + 0x6099) = 0xff;
  *(undefined *)(param_1 + 0x609a) = 0xff;
  *(undefined4 *)(param_1 + 0x6080) = 1;
  *(undefined4 *)(param_1 + 0x6110) = 0;
  *(undefined4 *)(param_1 + 0x6114) = 0;
  *(undefined4 *)(param_1 + 0x6120) = 0;
  *(undefined4 *)(param_1 + 0x6124) = 0;
  *(undefined4 *)(param_1 + 0x6134) = 0;
  *(undefined4 *)(param_1 + 0x6138) = 0;
  *(undefined4 *)(param_1 + 0x6128) = 1;
  *(undefined4 *)(param_1 + 0x610c) = 1;
  *(undefined4 *)(param_1 + 0x60fc) = 0;
  *(undefined4 *)(param_1 + 0x60c4) = 7;
  *(undefined4 *)(param_1 + 0x60ac) = 7;
  *(undefined4 *)(param_1 + 0x609c) = 1;
  *(undefined4 *)(param_1 + 0x60a0) = 1;
  *(undefined4 *)(param_1 + 0x60a4) = 1;
  *(undefined4 *)(param_1 + 0x60a8) = 1;
  *(undefined4 *)(param_1 + 0x60c0) = 0xc;
  *(undefined4 *)(param_1 + 0x60b0) = 1;
  *(undefined4 *)(param_1 + 0x60b4) = 1;
  *(undefined4 *)(param_1 + 0x615c) = 0;
  *(undefined4 *)(param_1 + 0x6160) = 0;
  *(undefined4 *)(param_1 + 0x60cc) = 0;
  *(undefined4 *)(param_1 + 0x60d0) = 0;
  *(undefined4 *)(param_1 + 0x60d4) = 0;
  *(undefined4 *)(param_1 + 0x607c) = 0;
  *(undefined4 *)(param_1 + 0x606c) = 8;
  *(undefined4 *)(param_1 + 0xd164) = 5;
  return;
}



void * VP8EncOpen(undefined4 param_1,undefined4 param_2)

{
  void *__s;
  
  __s = malloc(0xe9f0);
  if (__s == (void *)0x0) {
    __android_log_print(6,"awplayer",&DAT_00024924,"VP8EncOpen",0x2c7,param_2);
  }
  else {
    memset(__s,0,0xe9f0);
    vp8_init_default_param(__s);
  }
  return __s;
}



undefined8 VP8InitMemory(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  size_t __n;
  void **ppvVar11;
  int iVar12;
  int iVar13;
  
  if (param_1 == 0) {
    iVar1 = 0x168;
    puVar7 = &DAT_00024951;
LAB_0001e354:
    __android_log_print(6,"awplayer",puVar7,"VP8InitMemory",iVar1,param_2,param_3);
  }
  else {
    iVar1 = param_1;
    pvVar2 = (void *)EncAdapterMemPalloc(0x2000);
    *(void **)(param_1 + 0xe8b0) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      iVar1 = 0x182;
      puVar7 = &DAT_0002497f;
      goto LAB_0001e354;
    }
    memset(pvVar2,0,0x2000);
    EncAdapterMemFlushCache(*(undefined4 *)(param_1 + 0xe8b0),0x2000);
    uVar5 = EncAdapterMemGetPhysicAddress(*(undefined4 *)(param_1 + 0xe8b0));
    *(undefined4 *)(param_1 + 0xe8b8) = uVar5;
    pvVar2 = (void *)EncAdapterMemPalloc(0x8000);
    *(void **)(param_1 + 0xe8b4) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      iVar1 = 0x18e;
      puVar7 = &DAT_000249b6;
      goto LAB_0001e354;
    }
    memset(pvVar2,0,0x8000);
    EncAdapterMemFlushCache(*(undefined4 *)(param_1 + 0xe8b4),0x8000);
    uVar5 = EncAdapterMemGetPhysicAddress(*(undefined4 *)(param_1 + 0xe8b4));
    *(undefined4 *)(param_1 + 0xe8bc) = uVar5;
    pvVar2 = (void *)EncAdapterMemPalloc(0x200000);
    *(void **)(param_1 + 0x5cc4) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      iVar1 = 0x19b;
      puVar7 = &DAT_000249ee;
      goto LAB_0001e354;
    }
    memset(pvVar2,0,0x200000);
    iVar9 = 0;
    EncAdapterMemFlushCache(*(undefined4 *)(param_1 + 0x5cc4),0x200000);
    iVar3 = EncAdapterMemGetPhysicAddress(*(undefined4 *)(param_1 + 0x5cc4));
    *(undefined4 *)(param_1 + 0x5cd4) = 0;
    *(undefined4 *)(param_1 + 0x5cd0) = 0;
    *(int *)(param_1 + 0x5cc8) = iVar3;
    *(int *)(param_1 + 0x5ccc) = iVar3 + 0x1fffff;
    iVar3 = EncAdapterMemPalloc(0x4000);
    *(int *)(param_1 + 0x5cd8) = iVar3;
    if (iVar3 == 0) {
      iVar1 = 0x1a9;
      puVar7 = &DAT_00024a2b;
      goto LAB_0001e354;
    }
    EncAdapterMemFlushCache(iVar3,0x4000);
    iVar3 = EncAdapterMemGetPhysicAddress(*(undefined4 *)(param_1 + 0x5cd8));
    *(undefined4 *)(param_1 + 0x5ce8) = 0;
    *(undefined4 *)(param_1 + 0x5ce4) = 0;
    *(int *)(param_1 + 0x5cdc) = iVar3;
    *(int *)(param_1 + 0x5ce0) = iVar3 + 0x3fff;
    pvVar2 = (void *)EncAdapterMemPalloc(0x400000);
    *(void **)(param_1 + 0x5cf4) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      iVar1 = 0x1b6;
      puVar7 = &DAT_00024a78;
      goto LAB_0001e354;
    }
    memset(pvVar2,0,0x400000);
    EncAdapterMemFlushCache(*(undefined4 *)(param_1 + 0x5cf4),0x400000);
    iVar3 = EncAdapterMemGetPhysicAddress(*(undefined4 *)(param_1 + 0x5cf4));
    *(int *)(param_1 + 0x5cf8) = iVar3;
    *(int *)(param_1 + 0x5cfc) = iVar3 + 0x3fffff;
    *(undefined4 *)(param_1 + 0x5d04) = 0;
    *(undefined4 *)(param_1 + 0x5d00) = 0;
    pvVar2 = (void *)EncAdapterMemPalloc(0x40000);
    *(void **)(param_1 + 0x5d08) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      iVar1 = 0x1c4;
      puVar7 = &DAT_00024ab9;
      goto LAB_0001e354;
    }
    memset(pvVar2,0,0x40000);
    EncAdapterMemFlushCache(*(undefined4 *)(param_1 + 0x5d08),0x40000);
    *(undefined2 *)(param_1 + 0x5d0c) = 2;
    *(short *)(param_1 + 0xd102) = (short)*(int *)(param_1 + 0x5fb0);
    *(short *)(param_1 + 0xd100) = (short)*(int *)(param_1 + 0x5fb4);
    *(byte *)(param_1 + 0xd104) = *(byte *)(param_1 + 0xd104) & 0xf0;
    *(ushort *)(param_1 + 0xd104) = *(ushort *)(param_1 + 0xd104) & 0xfc0f;
    *(byte *)(param_1 + 0xd105) = (byte)(*(int *)(param_1 + 0xd168) << 4) & 0x30;
    *(byte *)(param_1 + 0xd106) = (byte)*(undefined4 *)(param_1 + 0xd16c) & 7;
    *(byte *)(param_1 + 0xd107) =
         (byte)*(undefined4 *)(param_1 + 0xd170) & 1 | (byte)(*(int *)(param_1 + 0xd174) << 1) & 2 |
         (byte)(*(int *)(param_1 + 0xd178) << 2) & 4;
    *(byte *)(param_1 + 0xd108) =
         *(byte *)(param_1 + 0xd108) & 0x80 | (byte)*(undefined4 *)(param_1 + 0xd184) & 0x7f;
    *(ushort *)(param_1 + 0xd108) =
         *(ushort *)(param_1 + 0xd108) & 0xf07f | (ushort)(*(int *)(param_1 + 0xd194) << 7) & 0xf80;
    uVar6 = *(uint *)(param_1 + 0xd108) & 0xfffe0fff | (*(uint *)(param_1 + 0xd198) & 0x1f) << 0xc;
    *(uint *)(param_1 + 0xd108) = uVar6;
    *(byte *)(param_1 + 0xd10a) =
         (byte)(uVar6 >> 0x10) & 0xc1 | (byte)(*(int *)(param_1 + 0xd19c) << 1) & 0x3e;
    *(ushort *)(param_1 + 0xd10a) =
         *(ushort *)(param_1 + 0xd10a) & 0xf83f | (ushort)(*(int *)(param_1 + 0xd1a0) << 6) & 0x7c0;
    *(undefined4 *)(param_1 + 0xd10c) = *(undefined4 *)(param_1 + 0xd1a8);
    *(undefined *)(param_1 + 0xd110) = 0x80;
    *(byte *)(param_1 + 0xd111) =
         *(byte *)(param_1 + 0xd111) & 0x10 | (byte)(*(int *)(param_1 + 0xd1ac) << 1) & 2 |
         (byte)(*(int *)(param_1 + 0xd1b0) << 2) & 4 | 0x10;
    *(undefined4 *)(param_1 + 0xd1bc) = 0;
    *(undefined4 *)(param_1 + 0xd1c0) = 0;
    *(byte *)(param_1 + 0xd112) =
         (byte)(*(int *)(param_1 + 0xd1b4) << 1) & 2 |
         (byte)(*(int *)(param_1 + 0xd1b8) << 6) & 0x40;
    *(undefined *)(param_1 + 0xd113) = 0;
    *(undefined4 *)(param_1 + 0xd1d0) = 0;
    *(undefined4 *)(param_1 + 0xd1c8) = 1;
    *(undefined4 *)(param_1 + 0xd1cc) = 1;
    *(undefined *)(param_1 + 0xd115) = 0x40;
    *(undefined *)(param_1 + 0xd120) = 0;
    *(undefined *)(param_1 + 0xd121) = 0;
    *(undefined *)(param_1 + 0xd122) = 2;
    *(byte *)(param_1 + 0xd123) = (byte)*(undefined4 *)(param_1 + 0x5cbc) & 1;
    *(undefined4 *)(param_1 + 0xd134) = 0;
    *(undefined4 *)(param_1 + 0xd210) = 6000;
    *(undefined4 *)(param_1 + 0xd214) = 0x1e;
    *(undefined4 *)(param_1 + 0x5658) = 1;
    iVar12 = (*(int *)(param_1 + 0x5fa0) + 0x3fU & 0xffffffc0) *
             (*(int *)(param_1 + 0x5fa4) + 0x3fU & 0xffffffc0);
    iVar3 = (int)((*(int *)(param_1 + 0x5fa0) + 0x7fU & 0xffffff80) *
                 (*(int *)(param_1 + 0x5fa4) + 0x7fU & 0xffffff80)) >> 1;
    __n = (*(int *)(param_1 + 0x5fb0) + 3U & 0xfffffffc) * *(int *)(param_1 + 0x5fb4) * 8 +
          iVar12 + iVar3;
    ppvVar11 = (void **)(param_1 + 0x5d10);
    iVar13 = param_1;
    while (iVar9 < *(short *)(param_1 + 0x5d0c)) {
      pvVar2 = (void *)EncAdapterMemPalloc(__n);
      *ppvVar11 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_0001e908;
      memset(pvVar2,0,__n);
      iVar9 = iVar9 + 1;
      EncAdapterMemFlushCache(*ppvVar11,__n);
      iVar4 = EncAdapterMemGetPhysicAddress(*ppvVar11);
      *(int *)(iVar13 + 0x5d24) = iVar4;
      *(int *)(iVar13 + 0x5d38) = iVar4 + iVar12;
      *(int *)(iVar13 + 0x5d60) = iVar4 + iVar12 + iVar3;
      *(int *)(iVar13 + 0x5d4c) = (int)*ppvVar11 + iVar3 + iVar12;
      ppvVar11 = ppvVar11 + 1;
      iVar13 = iVar13 + 4;
    }
    iVar3 = EncAdapterMemPalloc(0x400);
    *(int *)(param_1 + 0x5f74) = iVar3;
    if (iVar3 != 0) {
      EncAdapterMemFlushCache(iVar3,0x400);
      uVar5 = EncAdapterMemGetPhysicAddress(*(undefined4 *)(param_1 + 0x5f74));
      *(undefined4 *)(param_1 + 0x5f78) = uVar5;
      piVar10 = (int *)(param_1 + 0x5f80);
      if (*(uint *)(param_1 + 0x5fa0) < 0x801) {
        *piVar10 = 0;
        *(undefined4 *)(param_1 + 0xd140) = 0;
      }
      else {
        iVar3 = EncAdapterMemPalloc(0x200000);
        *piVar10 = iVar3;
        if (iVar3 == 0) goto LAB_0001e908;
        EncAdapterMemFlushCache(iVar3,0x200000);
        uVar5 = EncAdapterMemGetPhysicAddress(*piVar10);
        *(undefined4 *)(param_1 + 0xd140) = uVar5;
      }
      pvVar2 = (void *)EncAdapterMemPalloc(*(int *)(param_1 + 0x5fa0) << 3);
      *(void **)(param_1 + 0x5f7c) = pvVar2;
      if (pvVar2 != (void *)0x0) {
        memset(pvVar2,0,*(int *)(param_1 + 0x5fa0) << 3);
        EncAdapterMemFlushCache(*(undefined4 *)(param_1 + 0x5f7c),*(int *)(param_1 + 0x5fa0) << 3);
        uVar5 = EncAdapterMemGetPhysicAddress(*(undefined4 *)(param_1 + 0x5f7c));
        *(undefined4 *)(param_1 + 0xd13c) = uVar5;
        pvVar2 = (void *)EncAdapterMemPalloc(0x200000);
        *(void **)(param_1 + 0xe9d8) = pvVar2;
        if (pvVar2 != (void *)0x0) {
          memset(pvVar2,0,0x200000);
          EncAdapterMemFlushCache(*(undefined4 *)(param_1 + 0xe9d8),0x200000);
          vp8_coef_tree_initialize(param_1);
          *(int *)(param_1 + 0x1450) = param_1 + 0x544;
          *(int *)(param_1 + 0x1454) = param_1 + 0xf4c;
          *(int *)(param_1 + 0x286c) = param_1 + 0x2364;
          *(int *)(param_1 + 0x2868) = param_1 + 0x195c;
          iVar3 = __aeabi_uidiv((*(int *)(param_1 + 0x5fa4) + *(int *)(param_1 + 0x5fa0)) * 4,0xf);
          iVar9 = *(int *)(param_1 + 0x5fd0) >> 2;
          iVar3 = iVar3 * 1000;
          *(int *)(param_1 + 0x5fdc) = iVar3;
          if (iVar3 - iVar9 != 0 && iVar9 <= iVar3) {
            *(int *)(param_1 + 0x5fdc) = iVar9;
          }
          uVar8 = *(undefined4 *)(param_1 + 0x5fdc);
          iVar3 = *(int *)(param_1 + 0x5fd4) << 1;
          uVar5 = 0;
          *(undefined4 *)(param_1 + 0x6018) = uVar8;
          *(int *)(param_1 + 0x602c) = iVar3;
          *(undefined4 *)(param_1 + 0x601c) = uVar8;
          *(int *)(param_1 + 0x6030) = iVar3;
          *(undefined4 *)(param_1 + 0x6020) = uVar8;
          *(int *)(param_1 + 0x6034) = iVar3;
          *(undefined4 *)(param_1 + 0x6024) = uVar8;
          *(int *)(param_1 + 0x6038) = iVar3;
          *(undefined4 *)(param_1 + 0x6028) = uVar8;
          *(int *)(param_1 + 0x603c) = iVar3;
          goto LAB_0001e90c;
        }
      }
    }
  }
LAB_0001e908:
  uVar5 = 0xffffffff;
LAB_0001e90c:
  return CONCAT44(iVar1,uVar5);
}



undefined8 VP8Init(int *param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *local_28;
  
  iVar1 = EncAdapterVeGetBaseAddress();
  param_1[3] = iVar1;
  param_1[4] = iVar1 + 0xb00;
  iVar1 = EncAdapterGetICVersion();
  param_1[2] = iVar1;
  iVar1 = IspCreate();
  *param_1 = iVar1;
  SetIspBaseAddress(iVar1,param_1[3] + 0xa00);
  if (*param_1 == 0) {
    BitStreamDestroy(param_1[1]);
    local_28 = (int *)0x2e6;
    __android_log_print(6,"awplayer",&DAT_00024af7,"VP8Init");
    uVar2 = 0xffffffff;
  }
  else {
    memcpy(param_1 + 5,param_2,0x18);
    param_1[0xf] = (uint)((param_1[6] & 0xfU) == 0);
    if (param_1[0x17f1] == 0x10e || param_1[0x17f1] == 0x5a) {
      iVar1 = param_1[8];
      param_1[8] = param_1[7];
      param_1[7] = iVar1;
    }
    param_1[0x17e8] = param_1[7] + 0xfU & 0xfffffff0;
    param_1[0x17e9] = param_1[8] + 0xfU & 0xfffffff0;
    uVar3 = param_1[8] + 0xfU >> 4;
    param_1[0x17eb] = param_1[6] + 0xfU >> 4;
    param_1[0x17ed] = uVar3;
    param_1[0x17ea] = param_1[5] + 0xfU >> 4;
    uVar4 = param_1[7] + 0xfU >> 4;
    param_1[0x17ec] = uVar4;
    param_1[0x17f0] = uVar4 * uVar3;
    param_1[0x17e7] = param_1[9];
    param_1[0x1842] = 0;
    param_1[0x172c] = 1;
    if (param_1[0x181e] == 0) {
      iVar1 = param_1[0x17f4] * 0x3c;
      param_1[0x1729] = iVar1;
      param_1[0x1728] = iVar1;
      param_1[0x172d] = iVar1;
      param_1[0x172e] = iVar1;
      iVar1 = param_1[0x1725];
      param_1[0x172a] = param_1[0x17f4] * 0xf0;
      param_1[0x1813] = iVar1;
      param_1[0x1814] = iVar1;
      param_1[0x17fc] = iVar1;
      param_1[0x1815] = param_1[0x1726];
      param_1[0x1816] = param_1[0x1726];
      param_1[0x172b] = (uint)(0 < param_1[0x1729]);
      param_1[0x181a] = 0;
      param_1[0x1818] = 0;
      param_1[0x1819] = 0;
      iVar5 = param_1[0x17f5] / 2 + 2;
      param_1[0x1830] = iVar5;
      iVar1 = __aeabi_idiv();
      param_1[0x1805] = iVar1;
      if (iVar5 < 0xc) {
        param_1[0x1830] = 0xc;
      }
    }
    iVar1 = VP8InitMemory(param_1);
    local_28 = param_1;
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
    }
  }
  return CONCAT44(local_28,uVar2);
}



undefined4 VP8SetIspInfo(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  if (*(int *)(param_2 + 0x24) == 0) {
    if (*(int *)(param_1 + 0x3c) == 0) {
      uVar5 = *(uint *)(param_1 + 0x5fc4);
      uVar3 = 1 - uVar5;
      if (1 < uVar5) {
        uVar3 = 0;
      }
      if (uVar5 == 0xb4) {
        uVar3 = uVar3 | 1;
      }
      if (uVar3 == 0) {
        if (uVar5 != 0x10e && uVar5 != 0x5a) goto LAB_0001ebee;
        iVar8 = *(int *)(param_1 + 0x5fac);
        iVar6 = *(int *)(param_1 + 0x5fb0);
      }
      else {
        iVar8 = *(int *)(param_1 + 0x5fac);
        iVar6 = *(int *)(param_1 + 0x5fb4);
      }
      if (iVar8 != iVar6) {
        *(int *)(param_1 + 0x5fac) = iVar8 + -1;
      }
    }
LAB_0001ebee:
    *(undefined4 *)(param_1 + 0xe98c) = *(undefined4 *)(param_1 + 0x5fa8);
    *(undefined4 *)(param_1 + 0xe990) = *(undefined4 *)(param_1 + 0x5fac);
    *(undefined4 *)(param_1 + 0xe9ac) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0xe9b0) = *(undefined4 *)(param_2 + 0x18);
LAB_0001ec12:
    *(undefined4 *)(param_1 + 0xe994) = *(undefined4 *)(param_1 + 0x5fb0);
    *(undefined4 *)(param_1 + 0xe998) = *(undefined4 *)(param_1 + 0x5fb4);
    *(undefined4 *)(param_1 + 0xe9a0) = *(undefined4 *)(param_1 + 0xe8c0);
    *(int *)(param_1 + 0xe99c) = *(int *)(param_1 + 0x5f9c) >> 4;
    uVar1 = __aeabi_uidiv(*(undefined4 *)(param_1 + 0x5fc4),0x5a);
    *(undefined4 *)(param_1 + 0xe988) = uVar1;
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0xe9a8) = *(undefined4 *)(param_1 + 0x28);
  }
  else {
    uVar3 = *(uint *)(param_2 + 0x28);
    uVar5 = *(uint *)(param_1 + 0x14);
    if ((int)(uVar3 + *(int *)(param_2 + 0x30)) <= (int)uVar5) {
      uVar4 = *(uint *)(param_1 + 0x18);
      if ((((*(int *)(param_2 + 0x2c) + *(int *)(param_2 + 0x34) <= (int)uVar4) &&
           (0x1f < *(int *)(param_2 + 0x30))) && (0x1f < *(int *)(param_2 + 0x34))) &&
         (((int)uVar3 <= (int)uVar5 && (*(int *)(param_2 + 0x2c) <= (int)uVar4)))) {
        *(uint *)(param_1 + 0xe978) = uVar3;
        uVar2 = *(uint *)(param_2 + 0x2c);
        *(uint *)(param_1 + 0xe97c) = uVar2;
        uVar9 = *(int *)(param_2 + 0x30) + 0xfU & 0xfffffff0;
        *(uint *)(param_1 + 0xe980) = uVar9;
        iVar6 = *(int *)(param_2 + 0x34);
        *(uint *)(param_1 + 0xe9c0) = uVar3 & 0xf;
        *(uint *)(param_1 + 0xe9c4) = uVar2 & 0xf;
        iVar8 = uVar3 + uVar9;
        uVar7 = iVar6 + 0xfU & 0xfffffff0;
        *(uint *)(param_1 + 0xe984) = uVar7;
        uVar9 = uVar5;
        if ((int)uVar5 < iVar8) {
          uVar9 = *(uint *)(param_2 + 0x30);
        }
        iVar6 = uVar7 + uVar2;
        if ((int)uVar5 < iVar8) {
          uVar9 = uVar9 & 0xfffffff0;
        }
        if ((int)uVar5 < iVar8) {
          *(uint *)(param_1 + 0xe980) = uVar9;
        }
        uVar5 = uVar4;
        if ((int)uVar4 < iVar6) {
          uVar5 = *(uint *)(param_2 + 0x34) & 0xfffffff0;
        }
        if ((int)uVar4 < iVar6) {
          *(uint *)(param_1 + 0xe984) = uVar5;
        }
        *(int *)(param_1 + 0xe98c) = *(int *)(param_1 + 0xe980) >> 4;
        *(int *)(param_1 + 0xe990) = *(int *)(param_1 + 0xe984) >> 4;
        iVar6 = *(int *)(param_1 + 0x5f9c) * (uVar2 & 0xfffffff0);
        *(uint *)(param_1 + 0xe9ac) = *(int *)(param_2 + 0x14) + (uVar3 & 0xfffffff0) + iVar6;
        *(uint *)(param_1 + 0xe9b0) = *(int *)(param_2 + 0x18) + (uVar3 & 0xfffffff0) + (iVar6 >> 1)
        ;
        goto LAB_0001ec12;
      }
    }
    __android_log_print(3,"awplayer","<%s:%u>: [%s,%d],the crop parameter error!","VP8SetIspInfo",
                        0x270,"VP8SetIspInfo",0x270);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



undefined VP8ValidBitStreamFrameNum(int param_1)

{
  undefined uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xd220));
  uVar1 = *(undefined *)(param_1 + 0xe22a);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xd220));
  return uVar1;
}



undefined4 VP8EncMotionDetect(int param_1)

{
  ushort uVar1;
  void *__ptr;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  bool bVar21;
  
  uVar4 = *(uint *)(param_1 + 0x5fb4);
  uVar9 = *(uint *)(param_1 + 0x5fb0);
  __ptr = malloc(uVar4 * uVar9 * 8);
  uVar14 = uVar9 + 3 & 0xfffffffc;
  iVar8 = uVar14 * uVar4 * 8;
  if (__ptr == (void *)0x0) {
    __android_log_print(6,"awplayer",&DAT_0002458f,"VP8EncMotionDetect",0x6a6);
    uVar2 = 0xffffffff;
  }
  else {
    iVar11 = 0;
    iVar17 = 0;
    uVar19 = 0;
    while (uVar19 != uVar4) {
      uVar18 = 0;
      iVar12 = iVar11;
      while (uVar18 != uVar14) {
        if (uVar18 < uVar9) {
          uVar13 = *(uint *)(param_1 + iVar12 + 0x5d50);
          uVar15 = uVar13 << 9;
          uVar16 = uVar15 >> 0x18;
          if ((int)uVar15 < 0) {
            uVar16 = uVar16 | 0xfe00;
          }
          uVar6 = (uVar13 << 0x11) >> 0x19;
          if ((int)uVar15 < 0) {
            uVar16 = uVar16 | 0x180;
          }
          uVar1 = (ushort)((uVar13 << 0x18) >> 0x10);
          uVar3 = uVar1 >> 0xb;
          if ((int)(uVar13 << 0x11) < 0) {
            uVar6 = uVar6 | 0xffc0;
          }
          uVar15 = *(uint *)(param_1 + iVar12 + 0x5d4c) >> 0x1e | (uVar13 & 7) << 2;
          uVar7 = (ushort)uVar15;
          if ((int)(uVar13 << 0x18) < 0) {
            uVar3 = uVar1 >> 0xb | 0xffe0;
          }
          bVar21 = (int)(uVar15 << 0x1b) < 0;
          pvVar5 = (void *)((int)__ptr + iVar17 * 8);
          if (bVar21) {
            uVar7 = uVar7 | 0xfe00;
          }
          if (bVar21) {
            uVar7 = uVar7 | 0x1e0;
          }
          *(uint *)((int)__ptr + iVar17 * 8) = (uVar13 << 6) >> 0x1d;
          iVar17 = iVar17 + 1;
          *(ushort *)((int)pvVar5 + 4) = uVar3 + (short)(uVar16 << 2);
          *(ushort *)((int)pvVar5 + 6) = uVar7 + (short)(uVar6 << 2);
        }
        uVar18 = uVar18 + 1;
        iVar12 = iVar12 + 8;
      }
      uVar19 = uVar19 + 1;
      iVar11 = iVar11 + uVar14 * 8;
    }
    iVar11 = *(int *)(param_1 + 0xd15c) + 4;
    uVar4 = 2;
    iVar17 = 0;
    iVar12 = uVar9 << 1;
    while (uVar4 < (uVar19 & 0xfffffffc) - 2) {
      uVar14 = 2;
      while (uVar14 < (uVar9 & 0xfffffffc) - 2) {
        iVar20 = 0;
        pvVar5 = (void *)((int)__ptr + (uVar14 + iVar12) * 8);
        uVar18 = uVar4;
        while (uVar18 <= uVar4 + 3) {
          iVar10 = 0;
          uVar13 = uVar14;
          while (uVar13 <= uVar14 + 3) {
            if ((1 < *(int *)((int)pvVar5 + iVar10) - 9U) &&
               ((uVar16 = (uint)*(ushort *)((int)pvVar5 + iVar10 + 4),
                uVar15 = (int)(uVar16 << 0x10) >> 0x1f & 0xffff,
                0xc < ((uVar15 ^ uVar16) - uVar15 & 0xff) ||
                (uVar16 = (uint)*(ushort *)((int)pvVar5 + iVar10 + 6),
                uVar15 = (int)(uVar16 << 0x10) >> 0x1f & 0xffff,
                0xc < ((uVar15 ^ uVar16) - uVar15 & 0xff))))) {
              iVar20 = iVar20 + 1;
            }
            uVar13 = uVar13 + 1;
            iVar10 = iVar10 + 8;
          }
          uVar18 = uVar18 + 1;
          pvVar5 = (void *)((int)pvVar5 + uVar9 * 8);
        }
        if (iVar11 < iVar20) {
          iVar17 = iVar17 + 1;
        }
        if (iVar11 >> 1 < iVar17) {
          free(__ptr);
          EncAdapterMemFlushCache(param_1 + 0x5d4c,iVar8);
          return 1;
        }
        uVar14 = uVar14 + 4;
      }
      uVar4 = uVar4 + 4;
      iVar12 = iVar12 + uVar9 * 4;
    }
    free(__ptr);
    EncAdapterMemFlushCache(param_1 + 0x5d4c,iVar8);
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 VP8EncFrame(undefined4 *param_1,int param_2)

{
  ushort *puVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int extraout_r1;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint uVar18;
  undefined4 *puVar19;
  bool bVar20;
  
  iVar14 = param_1[4];
  iVar5 = VP8SetIspInfo();
  if (-1 < iVar5) {
    SetIspRegister(*param_1,param_1 + 0x3a62);
    *(undefined4 *)(iVar14 + 0x14) = 0xf;
    *(uint *)(iVar14 + 0x1c) = *(uint *)(iVar14 + 0x1c) | 7;
    iVar5 = 0;
    while (iVar5 < *(short *)(param_1 + 0x1743)) {
      if (*(char *)((int)param_1 + iVar5 + 0xd218) == '\0') {
        *(char *)((int)param_1 + 0xd21e) = (char)iVar5;
        break;
      }
      iVar5 = iVar5 + 1;
    }
    if (param_1[0x3473] != 0) {
      vp8_init_classify_engine(param_1,iVar14);
    }
    if (param_1[0x3472] != 0) {
      vp8_init_temporalfilter(param_1,iVar14);
    }
    *(undefined4 *)(iVar14 + 0x88) = param_1[0x1735] << 3;
    *(undefined4 *)(iVar14 + 0x80) = param_1[0x1732];
    *(undefined4 *)(iVar14 + 0x84) = param_1[0x1733];
    *(int *)(iVar14 + 0x8c) = ((param_1[0x1735] + 0x200000) - param_1[0x1734]) * 8;
    *(undefined4 *)(iVar14 + 0x6c) = param_1[0x1741] << 3;
    *(undefined4 *)(iVar14 + 100) = param_1[0x173e];
    *(undefined4 *)(iVar14 + 0x68) = param_1[0x173f];
    *(int *)(iVar14 + 0x70) = ((param_1[0x1741] + 0x400000) - param_1[0x1740]) * 8;
    *(undefined4 *)(iVar14 + 0xa0) = param_1[*(byte *)((int)param_1 + 0xd21d) + 0x1749];
    *(undefined4 *)(iVar14 + 0xa4) = param_1[*(byte *)((int)param_1 + 0xd21d) + 0x174e];
    *(undefined4 *)(iVar14 + 0xb0) = param_1[*(byte *)((int)param_1 + 0xd21e) + 0x1749];
    *(undefined4 *)(iVar14 + 0xb4) = param_1[*(byte *)((int)param_1 + 0xd21e) + 0x174e];
    VP8enc_time_start(param_1[3]);
    vp8_StartSlice(param_1,iVar14);
    iVar5 = EncAdapterVeWaitInterrupt();
    if (iVar5 == 0) {
      VP8enc_time_end(param_1[3]);
      *(undefined4 *)(iVar14 + 0x1c) = *(undefined4 *)(iVar14 + 0x1c);
      uVar10 = *(uint *)(iVar14 + 0xe8) & 0xffff;
      param_1[0x184f] = uVar10;
      iVar5 = param_1[0x171b];
      if (iVar5 == 1) {
        param_1[0x1850] = param_1[0x17ed] * param_1[0x17ec] - uVar10;
      }
      else {
        param_1[0x1850] = 0;
      }
      param_1[0x1851] = 0;
      param_1[0x1852] = 0;
      if (iVar5 == 0) {
        param_1[0x1853] = 100;
      }
      else {
        if (uVar10 + param_1[0x1850] != 0) {
          uVar7 = __aeabi_uidiv(uVar10 * 100);
          param_1[0x1853] = uVar7;
        }
      }
      uVar10 = *(uint *)(iVar14 + 0xe8) >> 0x10;
      param_1[0x341e] = uVar10;
      param_1[0x341f] = param_1[0x17ed] * param_1[0x17ec] - uVar10;
      param_1[0x27a2] = *(uint *)(iVar14 + 0xec) >> 0x10;
      param_1[0x27a3] = *(uint *)(iVar14 + 0xec) & 0xffff;
      param_1[0x27a4] = *(uint *)(iVar14 + 0xf0) >> 0x10;
      param_1[0x27a5] = *(uint *)(iVar14 + 0xf0) & 0xffff;
      param_1[0x27a6] = *(uint *)(iVar14 + 0xf4) >> 0x10;
      param_1[0x27a7] = *(uint *)(iVar14 + 0xf8) >> 0x10;
      param_1[0x27a9] = *(uint *)(iVar14 + 0xf8) & 0xffff;
      uVar7 = 0x1200;
      param_1[0x27aa] = *(uint *)(iVar14 + 0xfc) >> 0x10;
      param_1[0x27a8] = *(uint *)(iVar14 + 0xfc) & 0xffff;
      if (iVar5 != 0) {
        uVar7 = 0x1c04;
      }
      EncAdapterMemFlushCache(param_1[0x3a2d],uVar7);
      puVar19 = (undefined4 *)param_1[0x3a2d];
      puVar11 = param_1;
      puVar15 = puVar19;
      do {
        iVar5 = 0;
        puVar17 = puVar15;
        do {
          iVar8 = 0;
          puVar13 = puVar17;
          do {
            iVar12 = 0;
            puVar6 = puVar13;
            do {
              iVar3 = iVar12 + iVar8 + iVar5;
              iVar12 = iVar12 + 0x90;
              *(undefined4 *)((int)puVar11 + iVar3 + 0x6728) = *puVar6;
              puVar6 = puVar6 + 1;
            } while (iVar12 != 0x480);
            iVar8 = iVar8 + 0x480;
            puVar13 = puVar13 + 8;
          } while (iVar8 != 0x1200);
          iVar5 = iVar5 + 4;
          puVar17 = puVar17 + 0x20;
        } while (iVar5 != 0x30);
        puVar11 = puVar11 + 0xc;
        puVar15 = puVar15 + 0x180;
      } while (puVar11 != param_1 + 0x24);
      if (param_1[0x171b] == 0) {
        memset(param_1 + 0x27ab,0,0x1408);
      }
      else {
        iVar5 = 0;
        puVar19 = puVar19 + 0x481;
        do {
          iVar8 = (int)param_1 + iVar5;
          iVar5 = iVar5 + 4;
          *(uint *)(iVar8 + 0x9eac) = (uint)*(ushort *)(puVar19 + -1);
          puVar1 = (ushort *)((int)puVar19 + -2);
          puVar19 = puVar19 + 1;
          *(uint *)(iVar8 + 0xa8b0) = (uint)*puVar1;
        } while (iVar5 != 0xa04);
      }
      param_1[0x1596] = 0;
      param_1[0x3453] = *(undefined4 *)(iVar14 + 0x50);
      param_1[0x3454] = *(undefined4 *)(iVar14 + 0x54);
      param_1[0x3455] = *(undefined4 *)(iVar14 + 0x58);
      param_1[0x3452] = *(undefined4 *)(iVar14 + 0x5c);
      param_1[0x3483] = *(undefined4 *)(iVar14 + 0x40);
      if (param_1[0x3472] != 0) {
        vp8_staticst_histogram(param_1);
      }
      uVar16 = (*(uint *)(iVar14 + 0x90) >> 3) - param_1[0x1735];
      uVar18 = (*(uint *)(iVar14 + 0x74) >> 3) - param_1[0x1741];
      pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x3488));
      param_1[0x1597] = param_1[0x1597] & 0xff00001f | uVar16 * 0x20 & 0xffffe0;
      memcpy((void *)(param_1[0x1736] + param_1[0x173a]),param_1 + 0x1597,param_1[0x173c]);
      uVar10 = (uint)*(byte *)((int)param_1 + 0xe229);
      param_1[uVar10 + 0x3589] = param_1[0x173a];
      iVar5 = param_1[0x173c];
      param_1[uVar10 + 0x3709] = iVar5;
      param_1[uVar10 + 0x3489] = param_1[0x1735];
      param_1[uVar10 + 0x3609] = uVar16;
      param_1[uVar10 + 0x3509] = param_1[0x1741];
      param_1[uVar10 + 0x3689] = uVar18;
      uVar10 = uVar16 + uVar18 + iVar5;
      uVar9 = param_1[0x17fe];
      param_1[0x17fe] = uVar9 + uVar10;
      param_1[0x17ff] = param_1[0x17ff] + ((int)uVar10 >> 0x1f) + (uint)CARRY4(uVar9,uVar10);
      param_1[0x1804] = uVar10 * 8;
      VP8UpdateProb(param_1);
      param_1[0x1849] = 0;
      VP8UpdateRC(param_1);
      bVar2 = *(byte *)((int)param_1 + 0xe229);
      (param_1 + bVar2 + 0x388a)[1] = 0;
      if (param_1[0x171b] == 0) {
        (param_1 + bVar2 + 0x388a)[1] = 1;
      }
      uVar10 = param_1[0x173c] & 0x1f;
      if (uVar10 != 0) {
        param_1[0x173c] = (param_1[0x173c] + 0x20) - uVar10;
      }
      if ((uVar16 & 0x1f) != 0) {
        uVar16 = (uVar16 + 0x20) - (uVar16 & 0x1f);
      }
      if ((uVar18 & 0x1f) != 0) {
        uVar18 = (uVar18 + 0x20) - (uVar18 & 0x1f);
      }
      uVar7 = *(undefined4 *)(param_2 + 0xc);
      (param_1 + (bVar2 + 0x1bc0) * 2)[10] = *(undefined4 *)(param_2 + 8);
      (param_1 + (bVar2 + 0x1bc0) * 2)[0xb] = uVar7;
      param_1[0x1739] = param_1[0x173c] + param_1[0x1739];
      uVar10 = param_1[0x173c] + param_1[0x173a];
      param_1[0x173a] = uVar10;
      if (uVar10 < 0x4000) {
        if (0x3fff < uVar10 + 0x20) {
          param_1[0x173a] = 0;
        }
      }
      else {
        __android_log_print(6,"awplayer",&DAT_00024b5d,"VP8EncFrame",0x50c);
      }
      uVar10 = uVar16 + param_1[0x1735];
      bVar20 = 0x1fffff < uVar10;
      param_1[0x1735] = uVar10;
      param_1[0x1734] = uVar16 + param_1[0x1734];
      if (bVar20) {
        uVar10 = uVar10 - 0x200000;
      }
      if (bVar20) {
        param_1[0x1735] = uVar10;
      }
      uVar10 = uVar18 + param_1[0x1741];
      bVar20 = 0x3fffff < uVar10;
      param_1[0x1741] = uVar10;
      if (bVar20) {
        uVar10 = uVar10 - 0x400000;
      }
      param_1[0x1740] = uVar18 + param_1[0x1740];
      if (bVar20) {
        param_1[0x1741] = uVar10;
      }
      cVar4 = *(char *)((int)param_1 + 0xe229) + '\x01';
      *(char *)((int)param_1 + 0xe229) = cVar4;
      if (cVar4 == -0x80) {
        *(undefined *)((int)param_1 + 0xe229) = 0;
      }
      *(char *)((int)param_1 + 0xe22a) = *(char *)((int)param_1 + 0xe22a) + '\x01';
      *(char *)((int)param_1 + 0xe22b) = *(char *)((int)param_1 + 0xe22b) + '\x01';
      pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x3488));
      param_1[0x1820] = 1;
      param_1[0x184d] = 0;
      param_1[0x184e] = 0;
      param_1[0x3460] = 0;
      param_1[0x1845] = 0;
      param_1[0x1844] = 0;
      param_1[0x184a] = 1;
      param_1[0x1843] = 1;
      iVar5 = param_1[0x181f];
      param_1[0x181f] = iVar5 + 1;
      bVar20 = iVar5 + 1 == param_1[0x181c];
      if (bVar20) {
        param_1[0x181f] = 0;
      }
      if (!bVar20) {
        param_1[0x171b] = 1;
      }
      if (bVar20) {
        param_1[0x171b] = 0;
      }
      param_1[0x181e] = param_1[0x181e] + 1;
      *(undefined *)((int)param_1 + *(byte *)((int)param_1 + 0xd21d) + 0xd218) = 0;
      *(undefined *)((int)param_1 + 0xd21f) = 1;
      *(byte *)((int)param_1 + 0xd21d) = *(byte *)((int)param_1 + 0xd21e);
      *(undefined *)((int)param_1 + *(byte *)((int)param_1 + 0xd21e) + 0xd218) = 1;
      if ((((param_1[0x3456] != 0) && (param_1[0x171b] != 0)) &&
          (-1 < (int)((uint)*(byte *)((int)param_1 + 0xd112) << 0x1f))) &&
         (__aeabi_uidivmod(param_1[0x181f],param_1[0x3459]), extraout_r1 == 0)) {
        uVar7 = VP8EncMotionDetect(param_1);
        param_1[0x3458] = uVar7;
      }
      __android_log_print(3,"awplayer","<%s:%u>: vp8EncFrame one frame end","VP8EncFrame",0x558);
      return 0;
    }
    EncAdapterPrintTopVEReg();
    EncAdapterPrintEncReg();
    EncAdapterPrintIspReg();
    __android_log_print(6,"awplayer",&DAT_00024b24,"VP8EncFrame",0x45b);
  }
  return 0xffffffff;
}



undefined4 VP8EncEncode(int param_1,void *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x10);
  if ((*(uint *)(param_1 + 0x5cd0) < 0x180001) && (*(uint *)(param_1 + 0x5d00) < 0x300001)) {
    memcpy((void *)(param_1 + 0xe8c8),param_2,0xb0);
    EncAdapterEnableEncoder();
    *(undefined4 *)(iVar4 + 0x18) = 0x20000;
    if (*(int *)(param_1 + 0x5f84) != 0) {
      *(undefined4 *)(param_1 + 0x5f84) = 0;
      *(undefined4 *)(param_1 + 0x607c) = 0;
      *(undefined4 *)(param_1 + 0x5c6c) = 0;
    }
    VP8InitProb(param_1);
    VP8InitRC(param_1);
    if (*(int *)(param_1 + 0x5c6c) == 0) {
      uVar2 = *(int *)(param_1 + 0xd184) * 3;
      uVar3 = uVar2 & ~((int)uVar2 >> 0x20);
      if ((int)uVar2 < 0) {
        uVar3 = uVar2 + 7;
      }
      *(int *)(param_1 + 0xd17c) = (int)uVar3 >> 3;
      *(undefined4 *)(param_1 + 0x5cf0) = 10;
      *(undefined *)(param_1 + 0xd21f) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x5cf0) = 3;
    }
    iVar4 = VP8EncFrame(param_1,(void *)(param_1 + 0xe8c8));
    if (iVar4 < 0) {
      uVar1 = 0xffffffff;
    }
    else {
      EncAdapterDisableEncoder();
      uVar1 = 0;
    }
  }
  else {
    __android_log_print(6,"awplayer",&DAT_00024bbd,"VP8EncEncode",0x567,*(uint *)(param_1 + 0x5cd0),
                        *(undefined4 *)(param_1 + 0x5d00));
    uVar1 = 2;
  }
  return uVar1;
}



void vp8_encode_bool(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = *param_1;
  uVar6 = param_1[3];
  iVar2 = ((param_1[1] - 1) * param_3 >> 8) + 1;
  if (param_2 != 0) {
    uVar5 = uVar5 + iVar2;
    iVar2 = param_1[1] - iVar2;
  }
  uVar3 = *(uint *)(&DAT_00025498 + iVar2 * 4);
  uVar1 = uVar3 + uVar6;
  uVar4 = uVar3;
  uVar7 = uVar1;
  if (-1 < (int)uVar1) {
    if ((int)(uVar5 << (-uVar6 - 1 & 0xff)) < 0) {
      uVar4 = param_1[4];
      while ((uVar4 = uVar4 - 1, -1 < (int)uVar4 && (*(char *)(param_1[5] + uVar4) == -1))) {
        *(undefined *)(param_1[5] + uVar4) = 0;
      }
      *(char *)(param_1[5] + uVar4) = *(char *)(param_1[5] + uVar4) + '\x01';
    }
    uVar4 = param_1[4];
    uVar7 = uVar5 >> (uVar6 + 0x18 & 0xff);
    uVar5 = uVar5 << (-uVar6 & 0xff) & 0xffffff;
    *(char *)(param_1[5] + uVar4) = (char)uVar7;
    uVar7 = uVar1 - 8;
    param_1[4] = uVar4 + 1;
    uVar4 = uVar1;
  }
  param_1[3] = uVar7;
  *param_1 = uVar5 << (uVar4 & 0xff);
  param_1[1] = iVar2 << (uVar3 & 0xff);
  return;
}



void vp8_encode_value(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_3 - 1;
  while (-1 < (int)uVar1) {
    vp8_encode_bool(param_1,param_2 >> (uVar1 & 0xff) & 1,0x80);
    uVar1 = uVar1 - 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void delay_icache_VP8(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while (iVar1 < param_1) {
    iVar1 = iVar1 + 1;
  }
  return;
}



undefined4 CheckRegValue_VP8(uint param_1,uint *param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 10000;
  do {
    iVar2 = iVar2 + -1;
    if ((*param_2 & param_1) == param_3) {
      if (iVar2 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = 0;
      }
      return uVar1;
    }
    delay_icache_VP8(1);
  } while (iVar2 != 0);
  return 0xffffffff;
}



void VP8PutBin(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = CheckRegValue_VP8(0x300,param_3 + 0x1c,0x300,param_4,param_1,param_2);
  if (iVar1 < 0) {
    __android_log_print(6,"VP8encLib.c",&DAT_00024761,"VP8PutBin",0x74);
  }
  else {
    *(int *)(param_3 + 0x20) = param_1 << 8 | param_2 << 0x10;
    *(uint *)(param_3 + 0x18) = param_2 << 8 | 0x20006;
  }
  return;
}



void VP8PutBinProb(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  
  iVar1 = CheckRegValue_VP8(0x300,param_4 + 0x1c,0x300,param_4,param_1,param_2,param_3);
  if (iVar1 < 0) {
    __android_log_print(6,"VP8encLib.c",&DAT_00024761,"VP8PutBinProb",0x83);
  }
  else {
    *(uint *)(param_4 + 0x20) = param_3 | param_1 << 8 | 0x100000U | param_2 << 0x10;
    *(uint *)(param_4 + 0x18) = param_2 << 8 | 0x20006;
  }
  return;
}



void vp8_init_bool_encoder(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0xff;
  param_1[2] = 0;
  param_1[3] = 0xffffffe8;
  uVar1 = *(undefined4 *)(param_2 + 0x5d08);
  param_1[4] = 0;
  param_1[5] = uVar1;
  return;
}



int my_abs(uint param_1)

{
  int iVar1;
  
  iVar1 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
  __android_log_print(3,"VP8encLib.c","<%s:%u>: y = %d","my_abs",0xa0,iVar1);
  return iVar1;
}



void FUN_0001f7c8(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    VP8PutBin(0,1);
  }
  else {
    VP8PutBin(1,1);
    vp8_encode_bool(param_1,1,0x80);
    uVar1 = my_abs(param_2);
    VP8PutBin(uVar1,4,param_3);
    uVar1 = my_abs(param_2);
    vp8_encode_value(param_1,uVar1,4);
    if (param_2 < 0) {
      VP8PutBin(1,1,param_3);
      param_2 = 1;
    }
    else {
      VP8PutBin(1,0,param_3);
      param_2 = 0;
    }
  }
  vp8_encode_bool(param_1,param_2,0x80);
  return;
}



void init_segmentation_lf(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x6160);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  *(int *)(param_1 + 0x6138) = iVar1;
  *(undefined4 *)(param_1 + 0xd1c0) = 0;
  *(undefined4 *)(param_1 + 0xd1c4) = 0;
  *(undefined4 *)(param_1 + 0xd180) = 0;
  if (*(int *)(param_1 + 0x5c6c) == 0) {
    if (*(int *)(param_1 + 0xd1b4) != 0) {
      *(undefined4 *)(param_1 + 0xd1c0) = 1;
      *(undefined4 *)(param_1 + 0xd1c4) = 1;
    }
    if (*(int *)(param_1 + 0xd174) != 0) {
      *(undefined4 *)(param_1 + 0xd180) = 1;
    }
    *(undefined4 *)(param_1 + 0x6160) = 0;
  }
  return;
}



void vp8_SliceHeader(int param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  init_segmentation_lf();
  iVar4 = param_1 + 0x55ec;
  *(undefined4 *)(param_1 + 0x5c74) = 1;
  *(byte *)(param_1 + 0x565c) =
       *(byte *)(param_1 + 0x565c) & 0xf0 | (byte)*(undefined4 *)(param_1 + 0x5c6c) & 1 |
       (byte)(*(int *)(param_1 + 0x5c70) << 1) & 0xe | 0x10;
  uVar2 = *(uint *)(param_1 + 0x565c) & 0xff00001f;
  *(uint *)(param_1 + 0x565c) = uVar2;
  *(undefined4 *)(param_1 + 0x55ec) = 0;
  *(undefined4 *)(param_1 + 0x55f4) = 0;
  *(undefined4 *)(param_1 + 22000) = 0xff;
  *(undefined4 *)(param_1 + 0x55f8) = 0xffffffe8;
  *(undefined4 *)(param_1 + 0x55fc) = 0;
  *(undefined4 *)(param_1 + 0x5600) = *(undefined4 *)(param_1 + 0x5d08);
  if (-1 < (int)(uVar2 << 0x1f)) {
    *(undefined *)(param_1 + 0x5660) = 1;
    *(undefined *)(param_1 + 0x565f) = 0x9d;
    *(undefined *)(param_1 + 0x5661) = 0x2a;
    *(ushort *)(param_1 + 0x5662) =
         *(ushort *)(param_1 + 0x5662) & 0xc000 | (ushort)*(undefined4 *)(param_1 + 0x1c) & 0x3fff;
    *(byte *)(param_1 + 0x5663) =
         *(byte *)(param_1 + 0x5663) & 0x3f | (byte)(*(int *)(param_1 + 0x5c78) << 6);
    *(ushort *)(param_1 + 0x5664) =
         *(ushort *)(param_1 + 0x5664) & 0xc000 | (ushort)*(undefined4 *)(param_1 + 0x20) & 0x3fff;
    *(byte *)(param_1 + 0x5665) =
         *(byte *)(param_1 + 0x5665) & 0x3f | (byte)(*(int *)(param_1 + 0x5c7c) << 6);
    vp8_encode_bool(iVar4,*(undefined4 *)(param_1 + 0x5fcc),0x80);
    vp8_encode_bool(iVar4,*(undefined4 *)(param_1 + 0x5cc0),0x80);
    VP8PutBin(*(undefined4 *)(param_1 + 0x5fcc),1,param_2);
    VP8PutBin(*(undefined4 *)(param_1 + 0x5cc0),1,param_2);
  }
  if (*(int *)(param_1 + 0x5cbc) != 1) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0xd1b4);
  if (iVar3 != 0) {
    iVar3 = 1;
  }
  VP8PutBin(iVar3,1,param_2);
  iVar3 = *(int *)(param_1 + 0xd1b4);
  if (iVar3 != 0) {
    iVar3 = 1;
  }
  vp8_encode_bool(iVar4,iVar3,0x80);
  VP8PutBin(*(undefined4 *)(param_1 + 0xd170),1,param_2);
  vp8_encode_bool(iVar4,*(undefined4 *)(param_1 + 0xd170),0x80);
  VP8PutBin(*(undefined4 *)(param_1 + 0xd17c),6,param_2);
  vp8_encode_value(iVar4,*(undefined4 *)(param_1 + 0xd17c),6);
  VP8PutBin(*(undefined4 *)(param_1 + 0xd16c),3,param_2);
  vp8_encode_value(iVar4,*(undefined4 *)(param_1 + 0xd16c),3);
  iVar3 = *(int *)(param_1 + 0xd174);
  if (iVar3 != 0) {
    iVar3 = 1;
  }
  VP8PutBin(iVar3,1,param_2);
  iVar3 = *(int *)(param_1 + 0xd174);
  if (iVar3 != 0) {
    iVar3 = 1;
  }
  vp8_encode_bool(iVar4,iVar3,0x80);
  iVar3 = *(int *)(param_1 + 0xd180);
  if (iVar3 != 0) {
    iVar3 = 1;
  }
  VP8PutBin(iVar3,1,param_2);
  iVar3 = *(int *)(param_1 + 0xd180);
  if (iVar3 != 0) {
    iVar3 = 1;
  }
  vp8_encode_bool(iVar4,iVar3,0x80);
  if (*(int *)(param_1 + 0xd180) != 0) {
    iVar3 = 0;
    do {
      bVar1 = *(byte *)(param_1 + iVar3 + 0x5c80);
      if (bVar1 == 0) {
        VP8PutBin(0,1,param_2);
      }
      else {
        VP8PutBin(1,1,param_2);
        vp8_encode_bool(iVar4,1,0x80);
        VP8PutBin(bVar1 & 0x3f,6,param_2);
        vp8_encode_value(iVar4,bVar1 & 0x3f,6);
        VP8PutBin(0,1,param_2);
        bVar1 = 0;
      }
      iVar3 = iVar3 + 1;
      vp8_encode_bool(iVar4,bVar1,0x80);
    } while (iVar3 != 4);
    iVar3 = 0;
    do {
      bVar1 = *(byte *)(param_1 + iVar3 + 0x5c84);
      if (bVar1 == 0) {
        VP8PutBin(0,1,param_2);
      }
      else {
        VP8PutBin(1,1,param_2);
        vp8_encode_bool(iVar4,1,0x80);
        VP8PutBin(bVar1 & 0x3f,6,param_2);
        vp8_encode_value(iVar4,bVar1 & 0x3f,6);
        VP8PutBin(0,1,param_2);
        bVar1 = 0;
      }
      iVar3 = iVar3 + 1;
      vp8_encode_bool(iVar4,bVar1,0x80);
    } while (iVar3 != 4);
  }
  VP8PutBin(*(undefined4 *)(param_1 + 0xd188),2,param_2);
  vp8_encode_value(iVar4,*(undefined4 *)(param_1 + 0xd188),2);
  VP8PutBin(*(undefined4 *)(param_1 + 0xd184),7,param_2);
  vp8_encode_value(iVar4,*(undefined4 *)(param_1 + 0xd184),7);
  FUN_0001f7c8(iVar4,*(undefined4 *)(param_1 + 0xd194),param_2);
  FUN_0001f7c8(iVar4,*(undefined4 *)(param_1 + 0xd198),param_2);
  FUN_0001f7c8(iVar4,*(undefined4 *)(param_1 + 0xd19c),param_2);
  FUN_0001f7c8(iVar4,*(undefined4 *)(param_1 + 0xd1a0),param_2);
  FUN_0001f7c8(iVar4,*(undefined4 *)(param_1 + 0xd1a4),param_2);
  if (*(int *)(param_1 + 0x5c6c) != 0) {
    VP8PutBin(*(undefined4 *)(param_1 + 0x6110),1,param_2);
    vp8_encode_bool(iVar4,*(undefined4 *)(param_1 + 0x6110),0x80);
    VP8PutBin(*(undefined4 *)(param_1 + 0x6114),1,param_2);
    vp8_encode_bool(iVar4,*(undefined4 *)(param_1 + 0x6114),0x80);
    if (*(int *)(param_1 + 0x6110) == 0) {
      VP8PutBin(*(undefined4 *)(param_1 + 0x6120),2,param_2);
      vp8_encode_value(iVar4,*(undefined4 *)(param_1 + 0x6120),2);
    }
    if (*(int *)(param_1 + 0x6114) == 0) {
      VP8PutBin(*(undefined4 *)(param_1 + 0x6124),2,param_2);
      vp8_encode_value(iVar4,*(undefined4 *)(param_1 + 0x6124),2);
    }
    VP8PutBin(*(undefined4 *)(param_1 + 0x6134),1,param_2);
    vp8_encode_bool(iVar4,*(undefined4 *)(param_1 + 0x6134),0x80);
    VP8PutBin(*(undefined4 *)(param_1 + 0x6138),1,param_2);
    vp8_encode_bool(iVar4,*(undefined4 *)(param_1 + 0x6138),0x80);
  }
  VP8PutBin(*(undefined4 *)(param_1 + 0x6128),1,param_2);
  vp8_encode_bool(iVar4,*(undefined4 *)(param_1 + 0x6128),0x80);
  if (*(int *)(param_1 + 0x5c6c) != 0) {
    VP8PutBin(*(undefined4 *)(param_1 + 0x610c),1,param_2);
    vp8_encode_bool(iVar4,*(undefined4 *)(param_1 + 0x610c),0x80);
  }
  memcpy((void *)(param_1 + 0x3c73),(void *)(param_1 + 0x40f2),0x47f);
  update_coef_probs(param_1);
  VP8PutBin(*(undefined4 *)(param_1 + 0xd1b0),1,param_2);
  vp8_encode_bool(iVar4,*(undefined4 *)(param_1 + 0xd1b0),0x80);
  if (*(int *)(param_1 + 0x5c6c) == 0) {
    write_kfmodes();
    return;
  }
  pack_inter_mode_mvs(param_1);
  return;
}



void vp8_StartSlice(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  vp8_SliceHeader();
  iVar2 = *(int *)(param_1 + 0x5c6c);
  if (iVar2 != 0) {
    iVar2 = 1;
  }
  *(byte *)(param_1 + 0xd104) = *(byte *)(param_1 + 0xd104) & 0xf0 | (byte)iVar2 & 3;
  uVar3 = *(ushort *)(param_1 + 0xd104) & 0xfffffc0f | (*(uint *)(param_1 + 0xd17c) & 0x3f) << 4;
  *(short *)(param_1 + 0xd104) = (short)uVar3;
  *(byte *)(param_1 + 0xd105) =
       (byte)(uVar3 >> 8) & 0xcf | (byte)(*(int *)(param_1 + 0xd168) << 4) & 0x30;
  *(byte *)(param_1 + 0xd106) =
       *(byte *)(param_1 + 0xd106) & 0xf8 | (byte)*(undefined4 *)(param_1 + 0xd16c) & 7;
  *(byte *)(param_1 + 0xd107) =
       *(byte *)(param_1 + 0xd107) & 0xf8 | (byte)*(undefined4 *)(param_1 + 0xd170) & 1 |
       (byte)(*(int *)(param_1 + 0xd174) << 1) & 2 | (byte)(*(int *)(param_1 + 0xd178) << 2) & 4;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xd104);
  *(byte *)(param_1 + 0xd108) =
       *(byte *)(param_1 + 0xd108) & 0x80 | (byte)*(undefined4 *)(param_1 + 0xd184) & 0x7f;
  *(ushort *)(param_1 + 0xd108) =
       *(ushort *)(param_1 + 0xd108) & 0xf07f | (ushort)(*(int *)(param_1 + 0xd194) << 7) & 0xf80;
  uVar3 = *(uint *)(param_1 + 0xd108) & 0xfffe0fff | (*(uint *)(param_1 + 0xd198) & 0x1f) << 0xc;
  *(uint *)(param_1 + 0xd108) = uVar3;
  *(byte *)(param_1 + 0xd10a) =
       (byte)(uVar3 >> 0x10) & 0xc1 | (byte)(*(int *)(param_1 + 0xd19c) << 1) & 0x3e;
  *(ushort *)(param_1 + 0xd10a) =
       *(ushort *)(param_1 + 0xd10a) & 0xf83f | (ushort)(*(int *)(param_1 + 0xd1a0) << 6) & 0x7c0;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0xd108);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0xd110);
  *(undefined4 *)(param_2 + 0x94) = 0x2007e7e;
  *(undefined4 *)(param_2 + 0x98) = 0x47e0204;
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0xd134);
  *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(param_1 + 0xd13c);
  *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_1 + 0x5d60);
  *(undefined4 *)(param_2 + 0xc4) = *(undefined4 *)(param_1 + 0xd140);
  Initvp8sramconfig(param_1,param_1 + 0x38e8);
  uVar1 = 0x4c0;
  if (*(int *)(param_1 + 0x5c6c) != 0) {
    uVar1 = 0xec4;
  }
  EncAdapterMemFlushCache(*(undefined4 *)(param_1 + 0xe8b0),uVar1);
  *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(param_1 + 0xe8b8);
  *(undefined4 *)(param_2 + 0xac) = *(undefined4 *)(param_1 + 0xe8bc);
  *(uint *)(param_2 + 0x18) = *(int *)(param_1 + 0x5cbc) << 0x18 | 0x20008;
  return;
}



uint FUN_0001fdf4(int *param_1,int param_2)

{
  return (uint)(param_1[1] * (&DAT_00025cc0)[0xff - param_2] + *param_1 * (&DAT_00025cc0)[param_2])
         >> 8;
}



void FUN_0001fe1c(byte *param_1,int *param_2)

{
  byte bVar1;
  
  if (*param_2 + param_2[1] != 0) {
    bVar1 = __aeabi_uidiv(*param_2 * 0xff);
    bVar1 = bVar1 & 0xfe;
    if (bVar1 == 0) {
      bVar1 = 1;
    }
    *param_1 = bVar1;
  }
  return;
}



int FUN_0001fe3c(uint param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if ((int)param_1 < 8) {
    cVar3 = '\0';
    uVar2 = 3;
    iVar1 = 0;
    do {
      uVar2 = uVar2 - 1;
      uVar7 = (int)param_1 >> (uVar2 & 0xff) & 1;
      iVar5 = (int)cVar3;
      cVar3 = (&DAT_00026158)[(int)cVar3 + uVar7];
      uVar6 = (uint)param_2[(iVar5 >> 1) + 2];
      if (uVar7 != 0) {
        uVar6 = 0xff - uVar6;
      }
      iVar1 = iVar1 + (&DAT_00025cc0)[uVar6];
    } while (uVar2 != 0);
    return iVar1 + (&DAT_00025cc0)[*param_2];
  }
  uVar2 = 0;
  iVar1 = (&DAT_00025cc0)[0xff - (uint)*param_2];
  pbVar4 = param_2;
  do {
    uVar6 = (uint)pbVar4[9];
    if (((int)param_1 >> (uVar2 & 0xff) & 1U) != 0) {
      uVar6 = 0xff - uVar6;
    }
    uVar2 = uVar2 + 1;
    pbVar4 = pbVar4 + 1;
    iVar1 = iVar1 + (&DAT_00025cc0)[uVar6];
  } while (uVar2 != 3);
  uVar2 = 9;
  pbVar4 = param_2;
  do {
    uVar6 = (uint)pbVar4[0x12];
    if (((int)param_1 >> (uVar2 & 0xff) & 1U) != 0) {
      uVar6 = 0xff - uVar6;
    }
    uVar2 = uVar2 - 1;
    pbVar4 = pbVar4 + -1;
    iVar1 = iVar1 + (&DAT_00025cc0)[uVar6];
  } while (uVar2 != 3);
  if ((param_1 & 0xf0) != 0) {
    uVar2 = (uint)param_2[0xc];
    if ((param_1 & 8) != 0) {
      uVar2 = 0xff - uVar2;
    }
    iVar1 = iVar1 + (&DAT_00025cc0)[uVar2];
  }
  return iVar1;
}



void FUN_0001ff14(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = (uint)*(byte *)(param_3 + (param_4 >> 1));
  iVar5 = param_2;
  iVar6 = param_3;
  do {
    uVar4 = 0xff - uVar3;
    if (-1 < param_4 << 0x1f) {
      uVar4 = uVar3;
    }
    iVar1 = (int)*(char *)(param_2 + param_4);
    iVar2 = iVar1;
    if (iVar1 < 1) {
      iVar2 = iVar1 * -4;
    }
    if (iVar1 < 1) {
      *(int *)(param_1 + iVar2) = (&DAT_00025cc0)[uVar4] + param_5;
    }
    else {
      FUN_0001ff14(param_1,param_2,param_3,iVar2,(&DAT_00025cc0)[uVar4] + param_5,iVar5,iVar6);
    }
    param_4 = param_4 + 1;
  } while (param_4 * -0x80000000 < 0);
  return;
}



void FUN_0001ff70(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_4 * 2;
  iVar1 = param_3 + param_4 * -2;
  iVar4 = param_2;
  do {
    iVar2 = (int)*(char *)(param_2 + iVar1 + iVar3);
    if (iVar2 < 1) {
      *(int *)(param_1 + iVar2 * -8) = iVar3;
      *(int *)(param_1 + iVar2 * -8 + 4) = param_5 + 1;
    }
    else {
      FUN_0001ff70(param_1,param_2,iVar2,iVar3,param_5 + 1,iVar4,param_3);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 * -0x80000000 < 0);
  return;
}



void FUN_0001ffb2(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while (iVar2 = iVar2 + 1, iVar2 < param_2) {
    cVar1 = (char)iVar2 * '\x02';
    param_1[1] = cVar1;
    *param_1 = cVar1;
    param_1 = param_1 + 2;
  }
  param_1[1] = '\0';
  *param_1 = '\0';
  return;
}



void FUN_0001ffce(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  
  iVar3 = 0;
  param_3 = param_3 + -1;
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = 0;
  iVar7 = 0;
  do {
    iVar2 = FUN_0001fdf4(param_6,*(undefined *)(param_4 + iVar3));
    puVar1 = (undefined *)(param_5 + iVar3);
    iVar3 = iVar3 + 1;
    iVar7 = iVar7 + iVar2;
    iVar2 = FUN_0001fdf4(param_6,*puVar1);
    param_6 = param_6 + 8;
    uVar6 = uVar6 + iVar2;
  } while (iVar3 < param_3);
  if ((uint)(iVar7 + param_3 * 0x100) < uVar6) {
    iVar3 = 0;
    VP8PutBin(1,1,uVar5);
    vp8_encode_bool(param_2,1,0x80);
    do {
      cVar4 = *(char *)(param_4 + iVar3);
      if (cVar4 == '\0') {
        cVar4 = '\x01';
      }
      *(char *)(param_5 + iVar3) = cVar4;
      VP8PutBin(cVar4,8,uVar5);
      *(char *)(param_5 + iVar3) = cVar4;
      iVar3 = iVar3 + 1;
      vp8_encode_value(param_2,cVar4,8);
    } while (iVar3 < param_3);
    return;
  }
  VP8PutBin(0,1,uVar5);
  vp8_encode_bool(param_2,0,0x80);
  return;
}



void FUN_00020074(undefined4 param_1,undefined4 param_2,undefined *param_3,uint param_4,byte param_5
                 ,undefined4 *param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_0001fdf4(param_2,*param_3);
  uVar3 = (uint)param_5;
  iVar2 = FUN_0001fdf4(param_2,param_4);
  if ((int)((((&DAT_00025cc0)[0xff - uVar3] - (&DAT_00025cc0)[uVar3]) + 0x80 >> 8) + 6) <
      iVar1 - iVar2) {
    *param_3 = (char)param_4;
    VP8PutBinProb(1,1,uVar3,param_7);
    vp8_encode_bool(param_1,1,uVar3);
    VP8PutBin(param_4 >> 1,7,param_7);
    vp8_encode_value(param_1,param_4 >> 1,7);
    *param_6 = 1;
    return;
  }
  VP8PutBinProb(0,1,uVar3,param_7);
  vp8_encode_bool(param_1,0,uVar3,param_4);
  return;
}



void FUN_00020118(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined *param_5,
                 undefined4 param_6)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined auStack216 [8];
  undefined auStack208 [8];
  undefined auStack200 [56];
  undefined auStack144 [80];
  undefined local_40;
  undefined local_3f;
  undefined local_3e [6];
  undefined uStack56;
  undefined local_37 [11];
  int local_2c;
  
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  local_2c = __stack_chk_guard;
  puVar8 = auStack144;
  memcpy(&local_40,(void *)(param_1 + 0xb2b4),0x13);
  memcpy(auStack216,(void *)(param_1 + 0xb2c8),8);
  iVar5 = 0;
  memcpy(auStack208,(void *)(param_1 + 0xb2d0),8);
  puVar7 = puVar8;
  do {
    iVar3 = iVar5 + 0x165b;
    iVar5 = iVar5 + 1;
    memcpy(puVar7,(void *)(param_1 + iVar3 * 8),8);
    puVar7 = puVar7 + 8;
  } while (iVar5 != 10);
  iVar5 = 0;
  puVar7 = auStack200;
  do {
    iVar3 = iVar5 + 0x1665;
    iVar5 = iVar5 + 1;
    memcpy(puVar7,(void *)(param_1 + iVar3 * 8),8);
    puVar7 = puVar7 + 8;
  } while (iVar5 != 7);
  iVar5 = 0;
  FUN_00020074(param_2,auStack216,param_3,local_40,*param_5,param_6,uVar2);
  puVar7 = &local_3f;
  FUN_00020074(param_2,auStack208,param_3 + 1,local_3f,param_5[1],param_6,uVar2);
  puVar6 = auStack200;
  do {
    puVar1 = param_5 + 2 + iVar5;
    iVar3 = param_3 + 2 + iVar5;
    iVar5 = iVar5 + 1;
    puVar7 = puVar7 + 1;
    FUN_00020074(param_2,puVar6,iVar3,*puVar7,*puVar1,param_6,uVar2);
    puVar6 = puVar6 + 8;
  } while (iVar5 != 7);
  puVar7 = &uStack56;
  iVar5 = 0;
  do {
    puVar7 = puVar7 + 1;
    iVar4 = param_3 + 9 + iVar5;
    iVar3 = iVar5 + 7;
    iVar5 = iVar5 + 1;
    FUN_00020074(param_2,puVar8,iVar4,*puVar7,(param_5 + 2)[iVar3],param_6,uVar2);
    puVar8 = puVar8 + 8;
  } while (iVar5 != 10);
  if (local_2c != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void branch_counts(int param_1,int param_2,int param_3,undefined4 *param_4,int *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  
  iVar1 = 0;
  puVar2 = param_4;
  do {
    iVar1 = iVar1 + 1;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
  } while (iVar1 < param_1 + -1);
  iVar1 = 0;
  iVar3 = 0;
  do {
    iVar5 = *param_5;
    iVar8 = *(int *)(param_2 + iVar1);
    cVar7 = '\0';
    uVar4 = *(uint *)(param_2 + iVar1 + 4);
    do {
      uVar4 = uVar4 - 1;
      uVar6 = iVar8 >> (uVar4 & 0xff) & 1;
      (param_4 + ((int)cVar7 >> 1) * 2)[uVar6] = (param_4 + ((int)cVar7 >> 1) * 2)[uVar6] + iVar5;
      cVar7 = *(char *)(param_3 + (int)cVar7 + uVar6);
    } while ('\0' < cVar7);
    iVar3 = iVar3 + 1;
    iVar1 = iVar1 + 8;
    param_5 = param_5 + 1;
  } while (iVar3 < param_1);
  return;
}



void vp8_tree_probs_from_distribution
               (int param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5,
               undefined4 param_6,int param_7,uint param_8)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  branch_counts();
  do {
    uVar2 = *param_5 + param_5[1];
    if (uVar2 == 0) {
      *(undefined *)(param_4 + iVar3) = 0x80;
    }
    else {
      uVar2 = uVar2 >> 1;
      if (param_8 == 0) {
        uVar2 = param_8;
      }
      uVar2 = __aeabi_uidiv(uVar2 + param_7 * *param_5);
      if (uVar2 < 0x100) {
        if (uVar2 == 0) {
          uVar1 = 1;
        }
        else {
          uVar1 = (undefined)uVar2;
        }
      }
      else {
        uVar1 = 0xff;
      }
      *(undefined *)(param_4 + iVar3) = uVar1;
    }
    iVar3 = iVar3 + 1;
    param_5 = param_5 + 2;
  } while (iVar3 < param_1 + -1);
  return;
}



void vp8_default_coef_probs(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined auStack128 [92];
  
  iVar5 = 0;
  iVar3 = 0;
  do {
    iVar6 = 0;
    iVar8 = iVar5;
    iVar9 = iVar3;
    do {
      iVar4 = 0;
      iVar7 = iVar9;
      do {
        iVar2 = param_1 + 0x81d + iVar7;
        iVar1 = iVar4 + iVar8;
        iVar4 = iVar4 + 0x30;
        iVar7 = iVar7 + 0xb;
        vp8_tree_probs_from_distribution
                  (0xc,vp8_coef_encodings,&DAT_00026114,iVar2,auStack128,&DAT_00026168 + iVar1,0x100
                   ,1);
      } while (iVar4 != 0x90);
      iVar6 = iVar6 + 1;
      iVar9 = iVar9 + 0x21;
      iVar8 = iVar8 + 0x90;
    } while (iVar6 != 8);
    iVar3 = iVar3 + 0x108;
    iVar5 = iVar5 + 0x480;
  } while (iVar3 != 0x420);
  return;
}



void vp8_init_mbmode_probs(int param_1)

{
  undefined auStack72 [40];
  
  vp8_tree_probs_from_distribution
            (5,vp8_ymode_encodings,&DAT_000260c0,param_1 + 0x813,auStack72,&DAT_00026100,0x100,1);
  vp8_tree_probs_from_distribution
            (5,vp8_kf_ymode_encodings,&DAT_00027368,param_1 + 900,auStack72,&DAT_00026144,0x100,1);
  vp8_tree_probs_from_distribution
            (4,vp8_uv_mode_encodings,&DAT_0002613c,param_1 + 0x817,auStack72,&DAT_000260c8,0x100,1);
  vp8_tree_probs_from_distribution
            (4,vp8_uv_mode_encodings,&DAT_0002613c,param_1 + 0x388,auStack72,&DAT_00027370,0x100,1);
  memcpy((void *)(param_1 + 0x81a),&DAT_0002856e,3);
  return;
}



void Initvp8sramconfig(int param_1,int param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined uVar3;
  undefined uVar4;
  undefined uVar5;
  undefined uVar6;
  undefined uVar7;
  undefined uVar8;
  undefined uVar9;
  undefined uVar10;
  undefined uVar11;
  uint uVar12;
  uint uVar13;
  undefined uVar14;
  int iVar15;
  int iVar16;
  undefined *puVar17;
  undefined *puVar18;
  int iVar19;
  undefined4 uVar20;
  undefined *puVar21;
  int local_48;
  int local_44;
  undefined *local_40;
  undefined *local_3c;
  int local_38;
  
  iVar19 = *(int *)(param_1 + 0x10);
  puVar17 = *(undefined **)(param_1 + 0xe8b0);
  if (*(int *)(param_1 + 0x6080) == 1) {
    iVar15 = (&DAT_00025cc0)[0xff - *(int *)(param_1 + 0x6188)] + 1;
  }
  else {
    iVar15 = (&DAT_00025cc0)[0xff - *(int *)(param_1 + 0x6188)] +
             (&DAT_00025cc0)[*(int *)(param_1 + 0x618c)];
  }
  *puVar17 = *(undefined *)(param_1 + 0x6098);
  puVar17[1] = *(undefined *)(param_1 + 0x6099);
  uVar14 = *(undefined *)(param_1 + 0x609a);
  puVar17[3] = 0;
  puVar17[2] = uVar14;
  if (*(int *)(param_1 + 0x6078) == 0) {
    puVar17[4] = 0x80;
    uVar20 = *(undefined4 *)(param_1 + 0x6188);
    uVar14 = 1;
    puVar17[6] = 0xd6;
    puVar17[5] = (char)uVar20;
  }
  else {
    puVar17[4] = (char)*(undefined4 *)(param_1 + 0x6198);
    puVar17[5] = (char)*(undefined4 *)(param_1 + 0x6188);
    puVar17[6] = (char)*(undefined4 *)(param_1 + 0x618c);
    uVar14 = (undefined)*(undefined4 *)(param_1 + 0x6190);
  }
  puVar17[7] = uVar14;
  iVar16 = *(int *)(param_1 + 0x5c6c);
  if (iVar16 == 0) {
    puVar17[8] = *(undefined *)(param_2 + 900);
    puVar17[9] = *(undefined *)(param_2 + 0x385);
    puVar17[10] = *(undefined *)(param_2 + 0x386);
    puVar17[0xb] = *(undefined *)(param_2 + 0x387);
    puVar17[0xc] = *(undefined *)(param_2 + 0x388);
    puVar17[0xd] = *(undefined *)(param_2 + 0x389);
    puVar17[0xe] = *(undefined *)(param_2 + 0x38a);
  }
  else {
    puVar17[8] = *(undefined *)(param_2 + 0x813);
    puVar17[9] = *(undefined *)(param_2 + 0x814);
    puVar17[10] = *(undefined *)(param_2 + 0x815);
    puVar17[0xb] = *(undefined *)(param_2 + 0x816);
    iVar16 = 0;
    puVar17[0xc] = *(undefined *)(param_2 + 0x817);
    puVar17[0xd] = *(undefined *)(param_2 + 0x818);
    puVar17[0xe] = *(undefined *)(param_2 + 0x819);
  }
  puVar17[0xf] = (char)iVar16;
  puVar17[0x10] = *(undefined *)(param_2 + 0xc3d);
  puVar17[0x11] = *(undefined *)(param_2 + 0xc3e);
  puVar17[0x12] = 0;
  puVar17[0x13] = 0;
  puVar17[0x14] = *(undefined *)(param_2 + 0xc3f);
  puVar17[0x15] = *(undefined *)(param_2 + 0xc40);
  puVar17[0x16] = *(undefined *)(param_2 + 0xc41);
  puVar17[0x17] = *(undefined *)(param_2 + 0xc42);
  puVar17[0x18] = *(undefined *)(param_2 + 0xc3f);
  puVar17[0x19] = *(undefined *)(param_2 + 0xc43);
  puVar17[0x1a] = *(undefined *)(param_2 + 0xc44);
  puVar17[0x1b] = *(undefined *)(param_2 + 0xc45);
  puVar17[0x1c] = *(undefined *)(param_2 + 0xc46);
  puVar17[0x1d] = *(undefined *)(param_2 + 0xc47);
  uVar14 = *(undefined *)(param_2 + 0xc48);
  puVar17[0x1f] = 0;
  puVar17[0x1e] = uVar14;
  puVar17[0x20] = *(undefined *)(param_2 + 0xc49);
  puVar17[0x21] = *(undefined *)(param_2 + 0xc4a);
  puVar17[0x22] = *(undefined *)(param_2 + 0xc4b);
  puVar17[0x23] = *(undefined *)(param_2 + 0xc4c);
  puVar17[0x24] = *(undefined *)(param_2 + 0xc4d);
  puVar17[0x25] = *(undefined *)(param_2 + 0xc4e);
  uVar14 = *(undefined *)(param_2 + 0xc4f);
  puVar17[0x27] = 0;
  puVar17[0x26] = uVar14;
  puVar17[0x28] = *(undefined *)(param_2 + 0xc50);
  uVar14 = *(undefined *)(param_2 + 0xc51);
  puVar17[0x2a] = 0;
  puVar17[0x2b] = 0;
  puVar17[0x29] = uVar14;
  puVar17[0x2c] = *(undefined *)(param_2 + 0xc52);
  puVar17[0x2d] = *(undefined *)(param_2 + 0xc53);
  puVar17[0x2e] = *(undefined *)(param_2 + 0xc54);
  puVar17[0x2f] = *(undefined *)(param_2 + 0xc55);
  puVar17[0x30] = *(undefined *)(param_2 + 0xc52);
  puVar17[0x31] = *(undefined *)(param_2 + 0xc56);
  puVar17[0x32] = *(undefined *)(param_2 + 0xc57);
  puVar17[0x33] = *(undefined *)(param_2 + 0xc58);
  local_48 = 0;
  puVar17[0x34] = *(undefined *)(param_2 + 0xc59);
  local_40 = puVar17 + 0x40;
  puVar17[0x35] = *(undefined *)(param_2 + 0xc5a);
  uVar14 = *(undefined *)(param_2 + 0xc5b);
  puVar17[0x37] = 0;
  puVar17[0x36] = uVar14;
  puVar17[0x38] = *(undefined *)(param_2 + 0xc5c);
  puVar17[0x39] = *(undefined *)(param_2 + 0xc5d);
  puVar17[0x3a] = *(undefined *)(param_2 + 0xc5e);
  puVar17[0x3b] = *(undefined *)(param_2 + 0xc5f);
  puVar17[0x3c] = *(undefined *)(param_2 + 0xc60);
  puVar17[0x3d] = *(undefined *)(param_2 + 0xc61);
  uVar14 = *(undefined *)(param_2 + 0xc62);
  puVar17[0x3f] = 0;
  puVar17[0x3e] = uVar14;
  do {
    local_44 = 0;
    local_3c = local_40;
    do {
      local_38 = 0;
      puVar18 = (undefined *)(param_1 + local_44 * 0x108 + local_48 * 0xb + 0x4105);
      puVar21 = local_3c;
      do {
        puVar1 = puVar18 + 9;
        uVar14 = puVar18[8];
        uVar3 = puVar18[7];
        uVar8 = *puVar18;
        uVar9 = puVar18[1];
        uVar10 = puVar18[2];
        uVar4 = puVar18[3];
        uVar5 = puVar18[4];
        uVar6 = puVar18[5];
        uVar7 = puVar18[6];
        uVar11 = puVar18[10];
        puVar18 = puVar18 + 0x21;
        puVar21[9] = *puVar1;
        puVar21[8] = uVar14;
        local_38 = local_38 + 1;
        puVar21[7] = uVar3;
        *puVar21 = uVar8;
        puVar21[1] = uVar9;
        puVar21[2] = uVar10;
        puVar21[3] = uVar4;
        puVar21[4] = uVar5;
        puVar21[5] = uVar6;
        puVar21[6] = uVar7;
        puVar21[10] = uVar11;
        puVar21[0xb] = 0;
        puVar21 = puVar21 + 0xc;
      } while (local_38 != 8);
      local_44 = local_44 + 1;
      local_3c = local_3c + 0x60;
    } while (local_44 != 4);
    local_48 = local_48 + 1;
    local_40 = local_40 + 0x180;
  } while (local_48 != 3);
  puVar17 = puVar17 + 0x4c0;
  if (*(int *)(param_1 + 0x5c6c) == 1) {
    iVar16 = -0x500;
    do {
      *puVar17 = (char)((uint)*(undefined4 *)(*(int *)(param_1 + 0x1454) + iVar16) >> 8);
      puVar17[1] = (char)*(undefined4 *)(*(int *)(param_1 + 0x1454) + iVar16);
      puVar17[2] = (char)((uint)*(undefined4 *)(*(int *)(param_1 + 0x1450) + iVar16) >> 8);
      puVar2 = (undefined4 *)(*(int *)(param_1 + 0x1450) + iVar16);
      iVar16 = iVar16 + 4;
      puVar17[3] = (char)*puVar2;
      puVar17 = puVar17 + 4;
    } while (iVar16 != 0x504);
  }
  *(undefined4 *)(iVar19 + 0xe0) = 0;
  if (*(int *)(param_1 + 0x5c6c) == 0) {
    *(uint *)(iVar19 + 0xe4) = *(uint *)(param_2 + 0xc90) | *(int *)(param_2 + 0xc8c) << 0x10;
    *(uint *)(iVar19 + 0xe4) = *(uint *)(param_2 + 0xc98) | *(int *)(param_2 + 0xc94) << 0x10;
  }
  else {
    *(uint *)(iVar19 + 0xe4) = *(uint *)(param_2 + 0xcb8) | *(int *)(param_2 + 0xcb4) << 0x10;
    *(uint *)(iVar19 + 0xe4) = *(uint *)(param_2 + 0xcc0) | *(int *)(param_2 + 0xcbc) << 0x10;
  }
  *(uint *)(iVar19 + 0xe4) = *(uint *)(param_2 + 0x1cd0) | *(int *)(param_2 + 0x1ccc) << 0x10;
  *(uint *)(iVar19 + 0xe4) = *(uint *)(param_2 + 0x1cd8) | *(int *)(param_2 + 0x1cd4) << 0x10;
  *(uint *)(iVar19 + 0xe4) = *(uint *)(param_2 + 0x1ce0) | *(int *)(param_2 + 0x1cdc) << 0x10;
  *(uint *)(iVar19 + 0xe4) = *(uint *)(param_2 + 0x1ce8) | *(int *)(param_2 + 0x1ce4) << 0x10;
  *(uint *)(iVar19 + 0xe4) = *(uint *)(param_2 + 0x1cf0) | *(int *)(param_2 + 0x1cec) << 0x10;
  if (*(int *)(param_1 + 0x5c6c) == 0) {
    *(uint *)(iVar19 + 0xe4) =
         (uint)*(ushort *)(param_2 + 0xc9c) | *(int *)(param_1 + 0xd0a8) << 0x10;
  }
  else {
    *(uint *)(iVar19 + 0xe4) =
         (uint)*(ushort *)(param_2 + 0xcc4) | *(int *)(param_1 + 0xd0a8) << 0x10;
  }
  if (*(int *)(param_1 + 0x5c6c) == 1) {
    iVar16 = *(int *)(param_1 + 0xd0a8);
    uVar13 = iVar16 * 0x4af + 0x80U >> 8;
    if (0xfffe < uVar13) {
      uVar13 = 0xffff;
    }
    *(uint *)(iVar19 + 0xe4) = uVar13 | (iVar16 * iVar15 + 0x80U & 0xffff00) << 8;
    uVar13 = iVar16 * 0x533 + 0x80U >> 8;
    if (0xfffe < uVar13) {
      uVar13 = 0xffff;
    }
    uVar12 = iVar16 * 1099 + 0x80U >> 8;
    if (0xfffe < uVar12) {
      uVar12 = 0xffff;
    }
    *(uint *)(iVar19 + 0xe4) = uVar12 | uVar13 << 0x10;
    *(uint *)(iVar19 + 0xe4) =
         (uint)*(ushort *)(param_2 + 0x1cf8) | *(int *)(param_2 + 0x1cf4) << 0x10;
    *(uint *)(iVar19 + 0xe4) =
         (uint)*(ushort *)(param_2 + 0x1d00) | *(int *)(param_2 + 0x1cfc) << 0x10;
  }
  return;
}



void write_component_probs_aw
               (int param_1,undefined4 param_2,undefined4 param_3,void *param_4,undefined4 param_5,
               int param_6)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined auStack256 [8];
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8 [8];
  undefined auStack200 [56];
  int aiStack144 [20];
  undefined auStack64 [20];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  memcpy(auStack64,param_4,0x13);
  iVar8 = 0;
  local_f4 = 0;
  local_f0 = 0;
  local_ec = 0;
  memset(aiStack144,0,0x50);
  memset(local_e8,0,0x20);
  memset(auStack200,0,0x38);
  local_e8[0] = *(int *)(param_6 + 0x500);
  local_f0 = 0;
  local_f4 = 0;
  iVar4 = 1;
  iVar9 = param_6;
  local_f8 = local_e8[0];
  do {
    local_f0 = local_f0 + *(int *)(param_6 + 0x504);
    iVar1 = *(int *)(param_6 + 0x504) + *(int *)(iVar9 + 0x4fc);
    iVar8 = iVar8 + *(int *)(iVar9 + 0x4fc);
    if (iVar4 < 8) {
      local_f8 = local_f8 + iVar1;
      local_e8[iVar4] = iVar1 + local_e8[iVar4];
    }
    else {
      local_f4 = local_f4 + iVar1;
      uVar3 = 9;
      do {
        iVar7 = (iVar4 >> (uVar3 & 0xff) & 1U) + uVar3 * 2;
        bVar10 = uVar3 != 0;
        uVar3 = uVar3 - 1;
        aiStack144[iVar7] = aiStack144[iVar7] + iVar1;
      } while (bVar10);
    }
    iVar4 = iVar4 + 1;
    param_6 = param_6 + 4;
    iVar9 = iVar9 + -4;
  } while (iVar4 != 0x141);
  iVar9 = 2;
  local_ec = iVar8;
  FUN_0001fe1c(auStack64,&local_f8);
  FUN_0001fe1c(auStack64 + 1,&local_f0);
  vp8_tree_probs_from_distribution
            (8,vp8_small_mvencodings,&DAT_00026158,auStack256,auStack200,local_e8,0x100,1);
  puVar5 = auStack200;
  do {
    puVar2 = auStack64 + iVar9;
    iVar9 = iVar9 + 1;
    FUN_0001fe1c(puVar2,puVar5);
    puVar5 = puVar5 + 8;
  } while (iVar9 != 9);
  piVar6 = aiStack144;
  do {
    puVar5 = auStack64 + iVar9;
    iVar9 = iVar9 + 1;
    FUN_0001fe1c(puVar5,piVar6);
    piVar6 = piVar6 + 2;
  } while (iVar9 != 0x13);
  memcpy((void *)(param_1 + 0xb2b4),auStack64,0x13);
  memcpy((void *)(param_1 + 0xb2c8),&local_f8,8);
  memcpy((void *)(param_1 + 0xb2d0),&local_f0,8);
  iVar9 = 0;
  piVar6 = aiStack144;
  do {
    iVar4 = iVar9 + 0x165b;
    iVar9 = iVar9 + 1;
    memcpy((void *)(param_1 + iVar4 * 8),piVar6,8);
    piVar6 = piVar6 + 2;
  } while (iVar9 != 10);
  iVar9 = 0;
  puVar5 = auStack200;
  do {
    iVar4 = iVar9 + 0x1665;
    iVar9 = iVar9 + 1;
    memcpy((void *)(param_1 + iVar4 * 8),puVar5,8);
    puVar5 = puVar5 + 8;
  } while (iVar9 != 7);
  if (local_2c != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



int vp8_estimate_entropy_savings(int param_1)

{
  undefined uVar1;
  undefined uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  
  local_6c = *(int *)(param_1 + 0x5c6c);
  iVar14 = *(int *)(param_1 + 0x613c);
  iVar13 = *(int *)(param_1 + 0x6140);
  iVar11 = *(int *)(param_1 + 0x6144);
  iVar12 = *(int *)(param_1 + 0x6148);
  if (local_6c != 0) {
    iVar15 = iVar11 + iVar13 + iVar12;
    iVar4 = __aeabi_uidiv(iVar14 * 0xff,iVar15 + iVar14);
    if (iVar4 == 0) {
      iVar4 = 1;
    }
    if (iVar15 == 0) {
      iVar15 = 0x80;
    }
    else {
      iVar15 = __aeabi_uidiv(iVar13 * 0xff,iVar15);
    }
    iVar5 = 0x80;
    if (iVar12 + iVar11 != 0) {
      iVar5 = __aeabi_uidiv(iVar11 * 0xff);
    }
    iVar9 = (&DAT_00025cc0)[0xff - iVar4] + (&DAT_00025cc0)[0xff - iVar15];
    iVar6 = (&DAT_00025cc0)[0xff - *(int *)(param_1 + 0x618c)] +
            (&DAT_00025cc0)[0xff - *(int *)(param_1 + 0x6188)];
    uVar7 = (iVar11 * (iVar6 + (&DAT_00025cc0)[*(int *)(param_1 + 0x6190)]) +
            iVar12 * (iVar6 + (&DAT_00025cc0)[0xff - *(int *)(param_1 + 0x6190)]) +
            iVar13 * ((&DAT_00025cc0)[*(int *)(param_1 + 0x618c)] +
                     (&DAT_00025cc0)[0xff - *(int *)(param_1 + 0x6188)]) +
            (&DAT_00025cc0)[*(int *)(param_1 + 0x6188)] * iVar14) -
            (iVar12 * (iVar9 + (&DAT_00025cc0)[0xff - iVar5]) +
            iVar11 * (iVar9 + (&DAT_00025cc0)[iVar5]) +
            iVar13 * ((&DAT_00025cc0)[0xff - iVar4] + (&DAT_00025cc0)[iVar15]) +
            (&DAT_00025cc0)[iVar4] * iVar14);
    uVar8 = uVar7 & ~((int)uVar7 >> 0x20);
    if ((int)uVar7 < 0) {
      uVar8 = uVar7 + 0xff;
    }
    local_6c = (int)uVar8 >> 8;
  }
  iVar12 = 0;
  iVar11 = 0;
  local_70 = 0;
  do {
    iVar13 = iVar11 << 3;
    local_68 = param_1;
    local_64 = iVar11;
    local_60 = iVar12;
    do {
      iVar5 = local_68 + iVar11;
      iVar15 = 0;
      iVar14 = local_60;
      iVar4 = local_64;
      do {
        iVar6 = 0;
        vp8_tree_probs_from_distribution
                  (0xc,vp8_coef_encodings,&DAT_00026114,param_1 + 0x7928 + iVar4,
                   param_1 + 0x7d48 + iVar15 + iVar13,param_1 + 0x6728 + iVar14,0x100,1);
        do {
          iVar9 = local_70;
          if (local_70 == 2) {
            iVar9 = iVar4 + (param_1 - iVar11);
          }
          iVar10 = param_1 + 0x7d48 + iVar13 + iVar15 + iVar6 * 8;
          uVar1 = *(undefined *)(iVar5 + iVar6 + 0x4105);
          uVar2 = *(undefined *)(iVar5 + iVar6 + 0x7928);
          if (local_70 == 2) {
            *(undefined *)(iVar9 + iVar6 + 0x7b38) = uVar1;
            uVar2 = uVar1;
          }
          bVar3 = (&DAT_000258a0)[iVar6 + (iVar5 - param_1)];
          iVar6 = iVar6 + 1;
          iVar9 = FUN_0001fdf4(iVar10);
          iVar10 = FUN_0001fdf4(iVar10,uVar2);
          iVar9 = (iVar9 - iVar10) -
                  (((uint)((&DAT_00025cc0)[0xff - (uint)bVar3] - (&DAT_00025cc0)[bVar3]) >> 8) + 8);
          if (0 < iVar9) {
            local_6c = local_6c + iVar9;
          }
        } while (iVar6 != 0xb);
        iVar15 = iVar15 + 0x58;
        iVar14 = iVar14 + 0x30;
        iVar4 = iVar4 + 0xb;
        iVar5 = iVar5 + 0xb;
      } while (iVar15 != 0x108);
      iVar13 = iVar13 + 0x108;
      local_68 = local_68 + 0x21;
      local_64 = local_64 + 0x21;
      local_60 = local_60 + 0x90;
    } while (local_68 != param_1 + 0x108);
    iVar11 = iVar11 + 0x108;
    local_70 = local_70 + 1;
    iVar12 = iVar12 + 0x480;
  } while (local_70 != 4);
  return local_6c;
}



void vp8_estimate_ymode(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined auStack52 [4];
  undefined4 local_30 [8];
  
  vp8_tree_probs_from_distribution
            (5,vp8_ymode_encodings,&DAT_000260c0,auStack52,local_30,param_1 + 0x9e88,0x100,1);
  memcpy((void *)(param_1 + 0x9e48),auStack52,4);
  iVar2 = 0;
  do {
    iVar3 = iVar2 + 8;
    uVar1 = *(undefined4 *)((int)local_30 + iVar2 + 4);
    *(undefined4 *)(param_1 + iVar2 + 0x9e4c) = *(undefined4 *)((int)local_30 + iVar2);
    *(undefined4 *)(param_1 + iVar2 + 0x9e50) = uVar1;
    iVar2 = iVar3;
  } while (iVar3 != 0x20);
  return;
}



void vp8_estimate_uvmode(int param_1)

{
  undefined auStack36 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  vp8_tree_probs_from_distribution
            (4,vp8_uv_mode_encodings,&DAT_0002613c,auStack36,&local_20,param_1 + 0x9e9c,0x100,1);
  memcpy((void *)(param_1 + 0x9e6c),auStack36,3);
  *(undefined4 *)(param_1 + 0x9e70) = local_20;
  *(undefined4 *)(param_1 + 0x9e74) = local_1c;
  *(undefined4 *)(param_1 + 0x9e78) = local_18;
  *(undefined4 *)(param_1 + 0x9e7c) = local_14;
  *(undefined4 *)(param_1 + 0x9e80) = local_10;
  *(undefined4 *)(param_1 + 0x9e84) = local_c;
  return;
}



void vp8_estimate_mvd(int param_1)

{
  undefined4 local_28;
  undefined4 local_24 [2];
  
  local_28 = 0;
  local_24[0] = 0;
  write_component_probs_aw
            (param_1,param_1 + 0x55ec,param_1 + 0x4525,&DAT_000260d8,&DAT_00028548,param_1 + 0x9eac,
             0,&local_28);
  write_component_probs_aw
            (param_1,param_1 + 0x55ec,param_1 + 0x4538,&DAT_000260eb,&DAT_0002855b,param_1 + 0xa8b0,
             1,local_24);
  return;
}



void vp8_estimate_skip(int param_1)

{
  int iVar1;
  
  iVar1 = __aeabi_uidiv(*(int *)(param_1 + 0xd078) << 8,
                        *(int *)(param_1 + 0xd078) + *(int *)(param_1 + 0xd07c));
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  else {
    if (0xfe < iVar1) {
      iVar1 = 0xff;
    }
  }
  *(int *)(param_1 + 0x6198) = iVar1;
  return;
}



void vp8_kf_default_bmode_probs(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined auStack112 [76];
  
  iVar2 = 0;
  do {
    iVar3 = 0;
    iVar4 = param_1;
    do {
      iVar1 = iVar3 + iVar2;
      iVar3 = iVar3 + 0x28;
      vp8_tree_probs_from_distribution
                (10,vp8_bmode_encodings,&DAT_0002612a,iVar4,auStack112,&DAT_000275a8 + iVar1,0x100,1
                );
      iVar4 = iVar4 + 9;
    } while (iVar3 != 400);
    iVar2 = iVar2 + 400;
    param_1 = param_1 + 0x5a;
  } while (iVar2 != 4000);
  return;
}



void vp8_default_bmode_probs(undefined4 param_1)

{
  undefined auStack80 [80];
  
  vp8_tree_probs_from_distribution
            (10,vp8_bmode_encodings,&DAT_0002612a,param_1,auStack80,&DAT_00027380,0x100,1);
  return;
}



void vp8_build_component_cost_table(int *param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  if (*param_4 != 0) {
    puVar4 = (undefined4 *)*param_1;
    iVar5 = 1;
    uVar1 = FUN_0001fe3c(0,param_3);
    iVar6 = 4;
    *puVar4 = uVar1;
    do {
      iVar2 = FUN_0001fe3c(iVar5,param_3);
      iVar5 = iVar5 + 1;
      *(int *)(*param_1 + iVar6) = iVar2 + (&DAT_00025cc0)[*(byte *)(param_3 + 1)];
      piVar3 = (int *)(*param_1 - iVar6);
      iVar6 = iVar6 + 4;
      *piVar3 = iVar2 + (&DAT_00025cc0)[0xff - (uint)*(byte *)(param_3 + 1)];
    } while (iVar5 != 0x141);
  }
  if (param_4[1] != 0) {
    puVar4 = (undefined4 *)param_1[1];
    iVar6 = 4;
    uVar1 = FUN_0001fe3c(0,param_3 + 0x13);
    *puVar4 = uVar1;
    iVar5 = 1;
    do {
      iVar2 = FUN_0001fe3c(iVar5,param_3 + 0x13);
      iVar5 = iVar5 + 1;
      *(int *)(param_1[1] + iVar6) = iVar2 + (&DAT_00025cc0)[*(byte *)(param_3 + 0x14)];
      piVar3 = (int *)(param_1[1] - iVar6);
      iVar6 = iVar6 + 4;
      *piVar3 = iVar2 + (&DAT_00025cc0)[0xff - (uint)*(byte *)(param_3 + 0x14)];
    } while (iVar5 != 0x141);
  }
  return;
}



void vp8_setup_key_frame(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int local_20;
  undefined4 uStack28;
  undefined4 uStack24;
  
  local_20 = param_1;
  uStack28 = param_2;
  uStack24 = param_3;
  vp8_default_coef_probs(param_1 + 0x38e8);
  vp8_kf_default_bmode_probs(param_1 + 0x38e8);
  memcpy((void *)(param_1 + 0x4525),&DAT_000260d8,0x26);
  memcpy((void *)(param_1 + 0x454b),&DAT_000260d8,0x26);
  local_20 = 1;
  uStack28 = 1;
  vp8_build_component_cost_table
            (param_1 + 0x1450,param_1 + 0x2868,(void *)(param_1 + 0x4525),&local_20);
  if (*(int *)(param_1 + 0x60a0) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x60ac);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x60c4);
  }
  *(undefined4 *)(param_1 + 0x60dc) = uVar1;
  *(undefined4 *)(param_1 + 0x6110) = 1;
  return;
}



void vp8_cost_tokens(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0001ff14(param_1,param_3,param_2,0,0,param_2);
  return;
}



void vp8_tokens_from_tree(void)

{
  FUN_0001ff70();
  return;
}



void vp8_write_mvprobs(int param_1)

{
  undefined4 local_28;
  undefined4 local_24 [2];
  
  local_28 = 0;
  local_24[0] = 0;
  FUN_00020118(param_1,param_1 + 0x55ec,param_1 + 0x4525,&DAT_000260d8,&DAT_00028548,&local_28);
  FUN_00020118(param_1,param_1 + 0x55ec,param_1 + 0x4538,&DAT_000260eb,&DAT_0002855b,local_24);
  return;
}



void write_kfmodes(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0xd1b0);
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    iVar2 = 0x80;
    if (*(int *)(param_1 + 0x6078) != 0) {
      iVar2 = *(int *)(param_1 + 0x6198);
    }
    *(int *)(param_1 + 0x6194) = iVar2;
  }
  VP8PutBin(iVar2,8,iVar3);
  vp8_encode_value(param_1 + 0x55ec,iVar2,8);
  iVar2 = *(int *)(param_1 + 22000);
  iVar1 = *(int *)(param_1 + 0x55f8);
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_1 + 0x55ec);
  *(uint *)(iVar3 + 0x7c) = iVar2 << 0x18 | 0x800000U | (iVar1 + 0x20) * 0x10000;
  return;
}



void pack_inter_mode_mvs(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x6190);
  iVar1 = param_1 + 0x55ec;
  uVar5 = *(undefined4 *)(param_1 + 0x618c);
  if (iVar4 == 0) {
    iVar4 = 1;
  }
  if (*(int *)(param_1 + 0xd1b0) != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x6198);
    *(undefined4 *)(param_1 + 0x6194) = uVar3;
    VP8PutBin(uVar3,8,iVar2,param_1 + 0x6100,param_1,param_2,param_3);
    vp8_encode_value(iVar1,uVar3,8);
  }
  VP8PutBin(*(undefined4 *)(param_1 + 0x6188),8,iVar2);
  vp8_encode_value(iVar1,*(undefined4 *)(param_1 + 0x6188),8);
  VP8PutBin(uVar5,8,iVar2);
  vp8_encode_value(iVar1,*(undefined4 *)(param_1 + 0x618c),8);
  VP8PutBin(iVar4,8,iVar2);
  vp8_encode_value(iVar1,*(undefined4 *)(param_1 + 0x6190),8);
  FUN_0001ffce(param_1,iVar1,5,param_1 + 0x9e48,param_1 + 0x40fb,param_1 + 0x9e4c);
  FUN_0001ffce(param_1,iVar1,4,param_1 + 0x9e6c,param_1 + 0x40ff,param_1 + 0x9e70);
  vp8_write_mvprobs(param_1);
  iVar4 = *(int *)(param_1 + 22000);
  iVar1 = *(int *)(param_1 + 0x55f8);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_1 + 0x55ec);
  *(uint *)(iVar2 + 0x7c) = iVar4 << 0x18 | 0x800000U | (iVar1 + 0x20) * 0x10000;
  return;
}



void update_coef_probs(int param_1)

{
  bool bVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_58;
  
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  iVar6 = 0;
  do {
    iVar11 = iVar6 << 3;
    iVar4 = iVar6 + 0x108;
    local_58 = iVar6;
    do {
      iVar8 = 0;
      do {
        iVar7 = 0;
        do {
          iVar12 = iVar7 + iVar8 + local_58;
          iVar10 = param_1 + 0x7d48 + iVar11 + (iVar7 + iVar8) * 8;
          uVar2 = *(undefined *)(iVar8 + param_1 + iVar6 + iVar7 + 0x7928);
          uVar9 = (uint)(byte)(&DAT_000258a0)[iVar7 + iVar8 + iVar6];
          iVar3 = FUN_0001fdf4(iVar10,*(undefined *)(param_1 + 0x4105 + iVar12));
          iVar10 = FUN_0001fdf4(iVar10,uVar2);
          bVar1 = 0 < (int)((iVar3 - iVar10) -
                           (((uint)((&DAT_00025cc0)[0xff - uVar9] - (&DAT_00025cc0)[uVar9]) >> 8) +
                           8));
          VP8PutBinProb(bVar1,1,uVar9,uVar5);
          vp8_encode_bool(param_1 + 0x55ec,bVar1,uVar9);
          if (bVar1) {
            *(undefined *)(param_1 + 0x4105 + iVar12) = uVar2;
            VP8PutBin(uVar2,8,uVar5);
            vp8_encode_value(param_1 + 0x55ec,uVar2,8);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 != 0xb);
        iVar8 = iVar8 + 0xb;
      } while (iVar8 != 0x21);
      iVar11 = iVar11 + 0x108;
      iVar6 = iVar6 + 0x21;
      local_58 = local_58 + 0x21;
    } while (iVar6 != iVar4);
  } while (iVar6 != 0x420);
  return;
}



void vp8_coef_tree_initialize(int param_1)

{
  FUN_0001ffb2(&DAT_0002b470,1);
  FUN_0001ffb2(&DAT_0002b472,2);
  FUN_0001ffb2(&DAT_0002b476,3);
  FUN_0001ffb2(&DAT_0002b47c,4);
  FUN_0001ffb2(&DAT_0002b484,5);
  FUN_0001ffb2(&DAT_0002b48e,0xb);
  vp8_tokens_from_tree(vp8_coef_encodings,&DAT_00026114);
  vp8_tokens_from_tree(vp8_bmode_encodings,&DAT_0002612a);
  vp8_tokens_from_tree(vp8_ymode_encodings,&DAT_000260c0);
  vp8_tokens_from_tree(vp8_kf_ymode_encodings,&DAT_00027368);
  vp8_tokens_from_tree(vp8_uv_mode_encodings,&DAT_0002613c);
  vp8_tokens_from_tree(vp8_small_mvencodings,&DAT_00026158);
  memcpy((void *)(param_1 + 0x619c),&DAT_000273a8,0x200);
  return;
}



void VP8InitProb(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x6140);
  iVar3 = *(int *)(param_1 + 0x6144);
  iVar5 = *(int *)(param_1 + 0x6148);
  if (*(int *)(param_1 + 0x5c6c) == 0) {
    uVar2 = 0xff;
LAB_00021592:
    *(undefined4 *)(param_1 + 0x6188) = uVar2;
    *(undefined4 *)(param_1 + 0x618c) = 0x80;
    *(undefined4 *)(param_1 + 0x6190) = 0x80;
  }
  else {
    iVar4 = iVar3 + iVar6 + iVar5;
    if (iVar4 + *(int *)(param_1 + 0x613c) == 0) {
      uVar2 = 0x3f;
      goto LAB_00021592;
    }
    iVar1 = __aeabi_uidiv(*(int *)(param_1 + 0x613c) * 0xff);
    *(int *)(param_1 + 0x6188) = iVar1;
    if (iVar1 < 1) {
      *(undefined4 *)(param_1 + 0x6188) = 1;
    }
    iVar1 = 0x80;
    if (iVar4 != 0) {
      iVar1 = __aeabi_uidiv(iVar6 * 0xff,iVar4);
    }
    *(int *)(param_1 + 0x618c) = iVar1;
    if (iVar1 < 1) {
      *(undefined4 *)(param_1 + 0x618c) = 1;
    }
    iVar6 = 0x80;
    if (iVar5 + iVar3 != 0) {
      iVar6 = __aeabi_uidiv(iVar3 * 0xff);
    }
    *(int *)(param_1 + 0x6190) = iVar6;
    if (iVar6 < 1) {
      *(undefined4 *)(param_1 + 0x6190) = 1;
    }
  }
  if (*(int *)(param_1 + 0x6114) == 0) {
    if (*(int *)(param_1 + 0x60fc) == 0) {
      uVar2 = 0xd6;
      goto LAB_0002161e;
    }
    if (*(int *)(param_1 + 0x60fc) == 1) {
      uVar2 = 0xdc;
      *(undefined4 *)(param_1 + 0x618c) = 0xc0;
    }
    else {
      if ((*(int *)(param_1 + 0x6160) == 0) ||
         (iVar3 = *(int *)(param_1 + 0x6190) + -0x14, *(int *)(param_1 + 0x6190) = iVar3, 9 < iVar3)
         ) goto LAB_0002164c;
      uVar2 = 10;
    }
  }
  else {
    uVar2 = 200;
    *(int *)(param_1 + 0x6188) = *(int *)(param_1 + 0x6188) + 0x28;
LAB_0002161e:
    *(undefined4 *)(param_1 + 0x618c) = uVar2;
    uVar2 = 1;
  }
  *(undefined4 *)(param_1 + 0x6190) = uVar2;
LAB_0002164c:
  if (*(int *)(param_1 + 0x5c6c) == 0) {
    vp8_setup_key_frame(param_1);
    vp8_init_mbmode_probs(param_1 + 0x38e8);
    vp8_default_bmode_probs(param_1 + 0x40f2);
    return;
  }
  return;
}



void VP8UpdateProb(int param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  int local_18;
  int local_14;
  
  local_18 = param_1;
  local_14 = param_2;
  vp8_estimate_entropy_savings();
  vp8_estimate_ymode(param_1);
  vp8_estimate_uvmode(param_1);
  vp8_estimate_mvd(param_1);
  vp8_estimate_skip(param_1);
  if (((*(int *)(param_1 + 0x5c6c) != 0) && (*(int *)(param_1 + 0x6114) == 0)) &&
     (local_14 = *(int *)(param_1 + 0x6110), local_14 == 0)) {
    pcVar1 = (char *)(param_1 + 0x454a);
    iVar2 = local_14;
    do {
      if (pcVar1[1] != pcVar1[-0x25]) {
        local_18 = 1;
        break;
      }
      iVar2 = iVar2 + 1;
      pcVar1 = pcVar1 + 1;
      local_18 = local_14;
    } while (iVar2 != 0x13);
    iVar2 = 0;
    pcVar1 = (char *)(param_1 + 0x455d);
    do {
      if (pcVar1[1] != pcVar1[-0x25]) {
        local_14 = 1;
        break;
      }
      iVar2 = iVar2 + 1;
      pcVar1 = pcVar1 + 1;
    } while (iVar2 != 0x13);
    if ((local_18 != 0) || (local_14 != 0)) {
      vp8_build_component_cost_table
                (param_1 + 0x1450,param_1 + 0x2868,(void *)(param_1 + 0x4525),&local_18);
      memcpy((void *)(param_1 + 0x454b),(void *)(param_1 + 0x4525),0x26);
      return;
    }
  }
  return;
}



void vp8_calc_iframe_target_size
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x5c90);
  iVar5 = iVar4;
  if (iVar4 < 0) {
    iVar5 = *(int *)(param_1 + 0x5ff0);
  }
  if (*(int *)(param_1 + 0x60b0) == 1) {
    iVar1 = *(int *)(&DAT_00028d74 + iVar5 * 4);
    if (*(uint *)(param_1 + 0x606c) < 0x10) {
      iVar1 = __aeabi_idiv(*(int *)(&DAT_00029390 + *(uint *)(param_1 + 0x606c) * 4) * iVar1,100,
                           *(int *)(&DAT_00029390 + *(uint *)(param_1 + 0x606c) * 4),1,param_4);
    }
    iVar3 = *(int *)(&DAT_00028988 + iVar5 * 4);
    if ((iVar1 <= *(int *)(&DAT_00028988 + iVar5 * 4)) && (iVar3 = iVar1, iVar1 < 0x78)) {
      iVar3 = 0x78;
    }
  }
  else {
    iVar3 = 100;
  }
  *(int *)(param_1 + 0x6090) = iVar3;
  *(undefined4 *)(param_1 + 0x615c) = 0;
  if (-1 < iVar4) {
    iVar4 = *(int *)(param_1 + 0x5fc0);
    if (iVar4 < 0x801) {
      iVar4 = *(int *)(&DAT_00028588 + iVar5 * 4) * iVar4 >> 9;
    }
    else {
      iVar4 = (*(int *)(&DAT_00028588 + iVar5 * 4) >> 9) * iVar4;
    }
    uVar2 = __aeabi_idiv(iVar3 * iVar4,100,iVar4,iVar3,param_4);
    *(undefined4 *)(param_1 + 0xd190) = uVar2;
    return;
  }
  iVar5 = SUB84(ROUND((double)(longlong)*(int *)(&DAT_00028588 + iVar5 * 4) *
                      *(double *)(param_1 + 0x6170) + 0.5),0);
  uVar2 = __aeabi_idiv(iVar3 * (iVar5 * *(int *)(param_1 + 0x5fc0) >> 9),100,iVar5,iVar3,param_4);
  *(undefined4 *)(param_1 + 0xd190) = uVar2;
  *(undefined4 *)(param_1 + 0x6050) = *(undefined4 *)(param_1 + 0x604c);
  return;
}



void vp8_calc_auto_iframe_target_size
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  if (-1 < *(int *)(param_1 + 0x5c90)) {
    vp8_calc_iframe_target_size(param_1,param_2,param_3,param_4);
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x5fd4);
  iVar1 = __aeabi_idiv(*(int *)(&DAT_00028d74 + *(int *)(param_1 + 0x5fe4) * 4) * (uVar2 - 8) * 2,
                       100);
  if (*(uint *)(param_1 + 0x606c) < uVar2 >> 1) {
    iVar1 = __aeabi_uidiv(*(uint *)(param_1 + 0x606c) * iVar1,(int)uVar2 / 2);
  }
  if (iVar1 < 0x10) {
    iVar1 = 0x10;
  }
  *(undefined4 *)(param_1 + 0x6050) = *(undefined4 *)(param_1 + 0x604c);
  *(int *)(param_1 + 0xd190) = *(int *)(param_1 + 0x5fd8) * (iVar1 + 0x10) >> 4;
  *(undefined4 *)(param_1 + 0x615c) = 0;
  return;
}



void vp8_calc_pframe_target_size(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  iVar6 = param_1 + 0x6000;
  iVar7 = *(int *)(param_1 + 0x5fd8);
  iVar5 = *(int *)(param_1 + 0x60b8);
  iVar8 = iVar7 >> 2;
  if (iVar7 < 4) {
    iVar8 = 0;
  }
  if (iVar5 < 1) {
    iVar6 = param_1 + 0xd000;
  }
  if (iVar5 < 1) {
    *(int *)(iVar6 + 400) = iVar7;
  }
  else {
    iVar1 = *(int *)(iVar6 + 0xbc);
    if (iVar5 < *(int *)(iVar6 + 0xbc)) {
      iVar1 = iVar5;
    }
    if (iVar7 - iVar8 <= iVar1) {
      iVar1 = iVar7 - iVar8;
    }
    *(int *)(iVar6 + 0xb8) = iVar5 - iVar1;
    iVar7 = iVar7 - iVar1;
    if (iVar7 <= iVar8) {
      *(int *)(param_1 + 0xd190) = iVar8;
    }
    if (iVar8 < iVar7) {
      *(int *)(param_1 + 0xd190) = iVar7;
    }
  }
  iVar7 = *(int *)(param_1 + 0x60e4);
  if ((0 < iVar7) && (iVar5 = *(int *)(param_1 + 0xd190), iVar8 < iVar5)) {
    iVar6 = *(int *)(param_1 + 0x60e8);
    if (iVar7 < *(int *)(param_1 + 0x60e8)) {
      iVar6 = iVar7;
    }
    if (iVar5 - iVar8 <= iVar6) {
      iVar6 = iVar5 - iVar8;
    }
    *(int *)(param_1 + 0x60e4) = iVar7 - iVar6;
    *(int *)(param_1 + 0xd190) = iVar5 - iVar6;
  }
  iVar5 = *(int *)(param_1 + 0x6090);
  iVar7 = param_1;
  if (((0x96 < iVar5) && (0 < *(int *)(param_1 + 0x60dc))) &&
     (iVar6 = *(int *)(param_1 + 0x60e0), 7 < iVar6)) {
    iVar1 = iVar5 + -100 >> 5;
    iVar10 = *(int *)(param_1 + 0xd190);
    if (9 < iVar1) {
      iVar1 = 10;
    }
    iVar5 = __aeabi_idiv(iVar10 * iVar1,100,*(int *)(param_1 + 0x60dc),iVar5,param_1,param_2,param_3
                        );
    if (iVar10 - iVar8 < iVar5) {
      iVar5 = iVar10 - iVar8;
    }
    if (*(int *)(param_1 + 0x60fc) == iVar6 >> 1) {
      iVar5 = iVar5 * (iVar6 + -1);
    }
    else {
      iVar5 = -iVar5;
    }
    *(int *)(param_1 + 0xd190) = iVar10 + iVar5;
  }
  if (*(int *)(param_1 + 0x6094) - 1U < 100) {
    uVar2 = __aeabi_idiv(*(int *)(param_1 + 0x6094) * *(int *)(param_1 + 0xd190),100);
    *(undefined4 *)(param_1 + 0xd190) = uVar2;
  }
  if (*(int *)(param_1 + 0xd190) < iVar8) {
    *(int *)(param_1 + 0xd190) = iVar8;
  }
  iVar5 = *(int *)(param_1 + 0x6114);
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0xd190);
    *(int *)(param_1 + 0x5fe0) = iVar5;
  }
  if (*(int *)(param_1 + 0x5cac) == 0) {
    iVar7 = *(int *)(param_1 + 0x604c);
LAB_00021b7c:
    *(int *)(param_1 + 0x6050) = iVar7;
  }
  else {
    uVar9 = *(uint *)(param_1 + 0x5ca4);
    iVar6 = *(int *)(param_1 + 0x5cb4);
    if ((iVar6 < (int)uVar9) || (iVar8 = *(int *)(param_1 + 0x5cb8), iVar8 < (int)uVar9)) {
      iVar8 = *(int *)(param_1 + 0x5cb0);
      if ((iVar8 == 0) && (iVar6 < (int)uVar9)) {
        iVar5 = __aeabi_idiv(uVar9,100,iVar5,param_1 + 0x5c00,iVar7,param_2,param_3);
        uVar3 = __aeabi_idiv(uVar9 - iVar6,iVar5 + 1);
LAB_00021a6e:
        uVar3 = uVar3 & ~((int)uVar3 >> 0x1f);
        if (99 < (int)uVar3) {
          uVar3 = 100;
        }
      }
      else {
        uVar3 = 0;
        if (*(int *)(param_1 + 0x5cb8) < 0) {
          iVar5 = *(int *)(param_1 + 0x5cb8) * -100;
          uVar3 = __aeabi_ldivmod(iVar5,iVar5 >> 0x1f,*(uint *)(param_1 + 0x5ff8) << 3,
                                  *(int *)(param_1 + 0x5ffc) << 3 |
                                  *(uint *)(param_1 + 0x5ff8) >> 0x1d);
          goto LAB_00021a6e;
        }
      }
      uVar2 = __aeabi_idiv(*(int *)(param_1 + 0xd190) * (100 - (int)uVar3 / 2),100,
                           *(int *)(param_1 + 0xd190),(int)uVar3 / 2,iVar7,param_2,param_3);
      *(undefined4 *)(param_1 + 0xd190) = uVar2;
      if (*(int *)(param_1 + 0x5c9c) == 0) goto LAB_00021b60;
      iVar5 = *(int *)(param_1 + 0x5cb8);
      if ((iVar8 == 0) && (iVar6 < iVar5)) {
        iVar5 = iVar6;
      }
      if ((int)uVar9 <= iVar5) goto LAB_00021b56;
      uVar3 = uVar9 + 3 & (int)uVar9 >> 0x20;
      if (uVar9 < 0xfffffffd) {
        uVar3 = uVar9;
      }
      iVar8 = (int)uVar3 >> 2;
      iVar6 = iVar5;
      if (iVar5 <= iVar8) {
        iVar6 = *(int *)(param_1 + 0x604c);
      }
      if (iVar8 < iVar5) {
        uVar9 = uVar9 * 3;
        iVar5 = *(int *)(param_1 + 0x604c);
        uVar3 = uVar9 & ~((int)uVar9 >> 0x20);
        if ((int)uVar9 < 0) {
          uVar3 = uVar9 + 3;
        }
        iVar7 = __aeabi_idiv((iVar6 - iVar8) * (iVar5 - *(int *)(param_1 + 0x5fe4)),
                             -((int)uVar3 >> 2),(int)uVar3 >> 2,uVar9 + 3,iVar7,param_2,param_3);
        *(int *)(param_1 + 0x6050) = iVar5 + iVar7;
      }
      else {
        *(int *)(param_1 + 0x6050) = iVar6;
      }
    }
    else {
      if ((int)uVar9 < iVar8) {
        iVar7 = (iVar8 - uVar9) * 100;
        uVar9 = __aeabi_ldivmod(iVar7,iVar7 >> 0x1f,*(uint *)(param_1 + 0x5ff8) << 3,
                                *(int *)(param_1 + 0x5ffc) << 3 |
                                *(uint *)(param_1 + 0x5ff8) >> 0x1d);
        uVar9 = uVar9 & ~((int)uVar9 >> 0x1f);
        if (99 < (int)uVar9) {
          uVar9 = 100;
        }
        uVar2 = __aeabi_idiv(*(int *)(param_1 + 0xd190) * (((int)uVar9 >> 1) + 100),100);
        *(undefined4 *)(param_1 + 0xd190) = uVar2;
      }
      if (*(int *)(param_1 + 0x5c9c) == 0) {
LAB_00021b60:
        uVar2 = *(undefined4 *)(param_1 + 0x604c);
      }
      else {
LAB_00021b56:
        uVar2 = *(undefined4 *)(param_1 + 0x5fe4);
      }
      *(undefined4 *)(param_1 + 0x6050) = uVar2;
    }
    iVar7 = *(int *)(param_1 + 0x6054);
    *(int *)(param_1 + 0x6058) = iVar7;
    if (*(int *)(param_1 + 0x6050) <= iVar7) {
      iVar7 = iVar7 + 1;
      goto LAB_00021b7c;
    }
  }
  if (*(int *)(param_1 + 0x60d8) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x60dc) != 0) {
    return;
  }
  iVar7 = *(int *)(param_1 + 0x5c90);
  if (iVar7 < 0) {
    iVar7 = *(int *)(param_1 + 0x5c8c);
  }
  iVar6 = *(int *)(param_1 + 0x6108);
  iVar5 = *(int *)(param_1 + 0x60ec) + *(int *)(param_1 + 0x60f0) + *(int *)(param_1 + 0x60f4) +
          *(int *)(param_1 + 0x60f8);
  uVar2 = *(undefined4 *)(param_1 + 0x5fc0);
  if (iVar5 != 0) {
    iVar5 = __aeabi_idiv((*(int *)(param_1 + 0x60f4) + *(int *)(param_1 + 0x60f8)) * 100);
  }
  if (*(int *)(param_1 + 0x60a0) != 0) {
    iVar8 = __aeabi_idiv(iVar6 * 100,uVar2);
    if (iVar5 < iVar8) {
      iVar5 = iVar8;
    }
    if (iVar5 < 5 && 0xe < *(uint *)(param_1 + 0x614c)) goto LAB_00021c26;
  }
  *(undefined4 *)(param_1 + 0x6110) = 1;
LAB_00021c26:
  if (*(int *)(param_1 + 0x6110) == 1) {
    *(undefined4 *)(param_1 + 0x611c) = 0;
    if (*(int *)(param_1 + 0x60a4) != 0) {
      iVar1 = *(int *)(param_1 + 0x5c90);
      iVar5 = *(int *)(param_1 + 0x60ec);
      iVar8 = *(int *)(param_1 + 0x60f0);
      iVar10 = *(int *)(param_1 + 0x60f4);
      if (iVar1 < 0) {
        iVar6 = *(int *)(param_1 + 0x5c8c);
      }
      iVar11 = *(int *)(param_1 + 0x60f8);
      if (iVar1 >= 0) {
        iVar6 = iVar1;
      }
      iVar4 = __aeabi_idiv(*(int *)(param_1 + 0x6108) * 100,*(undefined4 *)(param_1 + 0x5fc0));
      iVar5 = iVar5 + iVar8 + iVar10 + iVar11;
      if (iVar5 != 0) {
        iVar5 = __aeabi_idiv((iVar11 + iVar10) * 100,iVar5);
      }
      if (iVar5 < iVar4) {
        iVar5 = iVar4;
      }
      uVar9 = *(uint *)(param_1 + 0x614c);
      if (0xd < uVar9) {
        uVar9 = 0xe;
      }
      iVar6 = __aeabi_idiv(*(int *)(&DAT_000295e4 + iVar6 * 4) * *(int *)(&DAT_00028d1c + uVar9 * 4)
                           ,100);
      iVar6 = __aeabi_idiv(*(int *)(&DAT_000297e4 + iVar5 * 4) * iVar6,100);
      iVar6 = iVar6 / 2;
      if (iVar6 < 0x6e) {
        iVar6 = 0x6e;
      }
      iVar8 = *(int *)(param_1 + 0x60c4);
      *(int *)(param_1 + 0x6090) = iVar6;
      *(int *)(param_1 + 0x60dc) = iVar8;
      if (iVar1 == -1) {
        if ((((0x2ee < iVar6) && (*(int *)(param_1 + 0x60dc) = iVar8 + 1, 1000 < iVar6)) &&
            (*(int *)(param_1 + 0x60dc) = iVar8 + 2, 0x4e2 < iVar6)) &&
           (*(int *)(param_1 + 0x60dc) = iVar8 + 3, 0x5db < iVar6)) {
          *(int *)(param_1 + 0x60dc) = iVar8 + 4;
        }
        if (*(int *)(param_1 + 0x60dc) < *(int *)(&DAT_00028b88 + iVar5 * 4)) {
          *(int *)(param_1 + 0x60dc) = *(int *)(&DAT_00028b88 + iVar5 * 4);
        }
        if (*(int *)(param_1 + 0x60c0) < *(int *)(param_1 + 0x60dc)) {
          *(int *)(param_1 + 0x60dc) = *(int *)(param_1 + 0x60c0);
        }
      }
      *(undefined4 *)(param_1 + 0x615c) = 0;
    }
    if (*(int *)(param_1 + 0x6160) == 0) {
      if (*(int *)(param_1 + 0x5c90) < 0) {
        iVar6 = *(int *)(param_1 + 0x6090);
        iVar7 = *(int *)(param_1 + 0x60dc) + 1;
        iVar5 = iVar7 * 100 + iVar6 + -100;
        iVar7 = *(int *)(param_1 + 0x5fe0) * iVar7;
        while (1000 < iVar6) {
          iVar6 = iVar6 >> 1;
          iVar5 = iVar5 / 2;
        }
        if (iVar5 < iVar7 >> 7) {
          iVar7 = __aeabi_idiv();
          *(int *)(param_1 + 0xd190) = iVar7 * iVar6;
        }
        else {
          uVar2 = __aeabi_idiv(iVar6 * iVar7);
          *(undefined4 *)(param_1 + 0xd190) = uVar2;
        }
      }
      else {
        iVar5 = *(int *)(param_1 + 0x5fc0);
        if (iVar5 < 0x801) {
          iVar5 = *(int *)(&DAT_00028588 + (iVar7 + 0x80) * 4) * iVar5 >> 9;
        }
        else {
          iVar5 = (*(int *)(&DAT_00028588 + (iVar7 + 0x80) * 4) >> 9) * iVar5;
        }
        uVar2 = __aeabi_idiv(iVar5 * *(int *)(param_1 + 0x6090),100);
        *(undefined4 *)(param_1 + 0xd190) = uVar2;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xd190) = 0;
    }
    *(undefined4 *)(param_1 + 0x60e0) = *(undefined4 *)(param_1 + 0x60dc);
  }
  return;
}



void vp8_init_rc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = __aeabi_idiv(*(undefined4 *)(param_1 + 0x5fd0),*(undefined4 *)(param_1 + 0x5fd4));
  *(int *)(param_1 + 0x5fd8) = iVar1;
  *(undefined4 *)(param_1 + 0x6120) = 0;
  *(undefined4 *)(param_1 + 0x6124) = 0;
  *(undefined4 *)(param_1 + 0x6040) = 0;
  *(undefined4 *)(param_1 + 0x6044) = 0;
  *(undefined4 *)(param_1 + 0x6048) = 1;
  if (*(int *)(param_1 + 0x5c6c) == 0) {
    *(undefined4 *)(param_1 + 0x614c) = 100;
  }
  if (*(int *)(param_1 + 0x6078) == 0) {
    *(int *)(param_1 + 0xd190) = iVar1 << 2;
    *(undefined4 *)(param_1 + 0x5c6c) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x5c6c) == 0) {
      vp8_calc_auto_iframe_target_size(param_1);
    }
    else {
      *(undefined4 *)(param_1 + 0x5c6c) = 1;
      vp8_calc_pframe_target_size(param_1);
    }
  }
  uVar2 = __aeabi_idiv(*(int *)(param_1 + 0xd190) << 8,*(undefined4 *)(param_1 + 0x5fc0));
  *(undefined4 *)(param_1 + 0x6118) = uVar2;
  if (*(int *)(param_1 + 0x5cb0) == 0) {
    iVar6 = *(int *)(param_1 + 0x5cb4);
    iVar1 = *(int *)(param_1 + 0x5ca4);
    if ((iVar1 <= iVar6) && (*(int *)(param_1 + 0x5cac) != 0)) {
      uVar5 = *(uint *)(param_1 + 0x6050);
      uVar4 = uVar5 + 3 & (int)uVar5 >> 0x20;
      if (uVar5 < 0xfffffffd) {
        uVar4 = uVar5;
      }
      iVar3 = (int)uVar4 >> 2;
      if (iVar3 != 0) {
        if (iVar6 < *(int *)(param_1 + 0x5ca8)) {
          iVar3 = __aeabi_idiv(*(int *)(param_1 + 0x5ca8) - iVar1);
          if (iVar3 == 0) goto LAB_00021f1e;
          iVar3 = __aeabi_idiv(iVar6 - iVar1);
        }
        *(uint *)(param_1 + 0x6050) = uVar5 - iVar3;
      }
    }
  }
LAB_00021f1e:
  if (*(int *)(param_1 + 0x604c) < *(int *)(param_1 + 0x6050)) {
    *(int *)(param_1 + 0x6050) = *(int *)(param_1 + 0x604c);
  }
  if (*(int *)(param_1 + 0x6058) < *(int *)(param_1 + 0x6054)) {
    *(int *)(param_1 + 0x6058) = *(int *)(param_1 + 0x6054);
    return;
  }
  if (*(int *)(param_1 + 0x6050) < *(int *)(param_1 + 0x6058)) {
    *(int *)(param_1 + 0x6058) = *(int *)(param_1 + 0x6050);
  }
  return;
}



int vp8_regulate_q(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  
  *(undefined4 *)(param_1 + 0x6040) = 0;
  iVar5 = *(int *)(param_1 + 0x5c6c);
  iVar4 = *(int *)(param_1 + 0x6050);
  if (iVar5 == 0) {
    dVar9 = *(double *)(param_1 + 0x6170);
  }
  else {
    if ((*(int *)(param_1 + 0x6114) == 0) && (*(int *)(param_1 + 0x6110) == 0)) {
      dVar9 = *(double *)(param_1 + 0x6168);
    }
    else {
      dVar9 = *(double *)(param_1 + 0x6178);
    }
  }
  if (param_2 < 0x3fffff) {
    iVar1 = __aeabi_idiv(param_2 << 9,*(undefined4 *)(param_1 + 0x5fc0));
  }
  else {
    iVar1 = __aeabi_idiv(param_2,*(undefined4 *)(param_1 + 0x5fc0));
    iVar1 = iVar1 << 9;
  }
  iVar6 = 0x7fffffff;
  iVar3 = *(int *)(param_1 + 0x6058);
  iVar2 = 0;
  iVar7 = iVar3 + iVar5 * 0x80;
  do {
    iVar8 = SUB84(ROUND(dVar9 * (double)(longlong)*(int *)(&DAT_00028588 + iVar2 + iVar7 * 4) + 0.5)
                  ,0);
    if (iVar8 <= iVar1) {
      iVar4 = iVar3 + -1;
      if (iVar1 - iVar8 <= iVar6) {
        iVar4 = iVar3;
      }
      break;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
    iVar6 = iVar8 - iVar1;
  } while (iVar3 <= iVar4);
  if (0x7e < iVar4) {
    if (((iVar5 != 0) && (iVar5 = 0x10, *(int *)(param_1 + 0x6114) == 0)) &&
       (iVar5 = 0xc0, *(int *)(param_1 + 0x6110) != 0)) {
      if (*(int *)(param_1 + 0x6160) == 0) {
        iVar5 = 0x10;
      }
      else {
        iVar5 = 0xc0;
      }
    }
    dVar9 = 0.99;
    do {
      if (iVar5 <= *(int *)(param_1 + 0x6040)) {
        return iVar4;
      }
      iVar2 = *(int *)(param_1 + 0x6040) + 1;
      if (iVar5 <= iVar2) {
        *(int *)(param_1 + 0x6040) = iVar5;
      }
      if (iVar2 < iVar5) {
        *(int *)(param_1 + 0x6040) = iVar2;
      }
      dVar10 = dVar9 + 3.90625e-05;
      iVar8 = SUB84(ROUND(dVar9),0) * iVar8;
      dVar9 = dVar10;
      if (0.999 <= dVar10) {
        dVar9 = 0.999;
      }
    } while (iVar8 - iVar1 != 0 && iVar1 <= iVar8);
  }
  return iVar4;
}



void vp8_compute_frame_size_bounds(int param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (-1 < *(int *)(param_1 + 0x5c90)) {
    *param_2 = 0;
    *param_3 = 0x7fffffff;
    return;
  }
  if (((*(int *)(param_1 + 0x5c6c) == 0) || (*(int *)(param_1 + 0x6114) != 0)) ||
     (*(int *)(param_1 + 0x6110) != 0)) {
    uVar1 = *(int *)(param_1 + 0xd190) * 9;
    uVar2 = uVar1 & ~((int)uVar1 >> 0x20);
    if ((int)uVar1 < 0) {
      uVar2 = uVar1 + 7;
    }
    *param_3 = (int)uVar2 >> 3;
    uVar2 = *(int *)(param_1 + 0xd190) * 7;
  }
  else {
    if (*(int *)(param_1 + 0x5cb0) == 0) {
      iVar4 = *(int *)(param_1 + 0xd190);
      if (*(int *)(param_1 + 0x5cb4) < *(int *)(param_1 + 0x5ca4) + *(int *)(param_1 + 0x5ca8) >> 1)
      {
        if (*(int *)(param_1 + 0x5cb4) <= *(int *)(param_1 + 0x5ca4) >> 1) {
          uVar1 = iVar4 * 10;
          uVar2 = uVar1 & ~((int)uVar1 >> 0x20);
          if ((int)uVar1 < 0) {
            uVar2 = uVar1 + 7;
          }
          *param_3 = (int)uVar2 >> 3;
          iVar4 = *(int *)(param_1 + 0xd190) / 2;
          goto LAB_00022170;
        }
        goto LAB_0002214a;
      }
      uVar1 = iVar4 * 0xc;
      uVar2 = uVar1 & ~((int)uVar1 >> 0x20);
      if ((int)uVar1 < 0) {
        uVar2 = uVar1 + 7;
      }
      *param_3 = (int)uVar2 >> 3;
      iVar4 = 6;
      iVar3 = *(int *)(param_1 + 0xd190);
    }
    else {
      iVar4 = *(int *)(param_1 + 0xd190);
LAB_0002214a:
      uVar1 = iVar4 * 0xb;
      uVar2 = uVar1 & ~((int)uVar1 >> 0x20);
      if ((int)uVar1 < 0) {
        uVar2 = uVar1 + 7;
      }
      *param_3 = (int)uVar2 >> 3;
      iVar3 = *(int *)(param_1 + 0xd190);
      iVar4 = 5;
    }
    uVar2 = iVar4 * iVar3;
  }
  uVar1 = uVar2 & ~((int)uVar2 >> 0x20);
  if ((int)uVar2 < 0) {
    uVar1 = uVar2 + 7;
  }
  iVar4 = (int)uVar1 >> 3;
LAB_00022170:
  *param_2 = iVar4;
  return;
}



undefined4 vp8_dc_quant(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1 + param_2 & ~(param_1 + param_2 >> 0x1f);
  if (0x7e < (int)uVar1) {
    uVar1 = 0x7f;
  }
  return *(undefined4 *)(&DAT_000293e4 + uVar1 * 4);
}



void vp8_init_mode_costs(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = 0;
  iVar3 = param_1 + 0x38e8;
  iVar1 = *(int *)(&DAT_00028f88 + *(int *)(param_1 + 0x6188) * 4);
  iVar5 = 0;
  do {
    iVar7 = 0;
    iVar8 = iVar5;
    do {
      iVar2 = iVar7 + iVar6;
      iVar7 = iVar7 + 9;
      vp8_cost_tokens(param_1 + 0x2910 + iVar8,iVar3 + iVar2,&DAT_000293d0);
      iVar8 = iVar8 + 0x28;
    } while (iVar7 != 0x5a);
    iVar5 = iVar5 + 400;
    iVar6 = iVar6 + 0x5a;
  } while (iVar5 != 4000);
  vp8_cost_tokens(param_1 + 0x38b0,param_1 + 0x40f2,&DAT_000293d0);
  vp8_cost_tokens(param_1 + 0x38b0,param_1 + 0x4102,&DAT_00029388);
  vp8_cost_tokens(param_1 + 0x2898,param_1 + 0x40fb,&DAT_00029978);
  vp8_cost_tokens(param_1 + 0x2870,param_1 + 0x3c6c,&DAT_00028d6c);
  vp8_cost_tokens(param_1 + 0x28e8,param_1 + 0x40ff,&DAT_00029980);
  vp8_cost_tokens(param_1 + 0x28c0,param_1 + 0x3c70,&DAT_00029980);
  iVar5 = *(int *)(param_1 + 0xd0a8);
  if (*(int *)(param_1 + 0x5c6c) == 1) {
    iVar6 = 0;
    uVar4 = (uint)((iVar5 * iVar1 + 0x80) * 0x100) >> 0x10;
    do {
      iVar1 = param_1 + iVar6;
      iVar8 = iVar3 + iVar6;
      iVar6 = iVar6 + 4;
      *(uint *)(iVar8 + 0xc8c) = uVar4 + (iVar5 * *(int *)(iVar1 + 0x2870) + 0x80U >> 8) & 0xffff;
      *(uint *)(iVar8 + 0xcb4) = uVar4 + (*(int *)(iVar1 + 0x2898) * iVar5 + 0x80U >> 8) & 0xffff;
      *(uint *)(iVar8 + 0xcdc) = (uint)((iVar5 * *(int *)(iVar1 + 0x28c0) + 0x80) * 0x100) >> 0x10;
      *(uint *)(iVar8 + 0xd04) = (uint)((iVar5 * *(int *)(iVar1 + 0x28e8) + 0x80) * 0x100) >> 0x10;
    } while (iVar6 != 0x14);
    iVar1 = 0;
    do {
      iVar6 = param_1 + iVar1;
      iVar5 = iVar3 + iVar1;
      iVar1 = iVar1 + 4;
      *(uint *)(iVar5 + 0x1ccc) =
           (uint)((*(int *)(param_1 + 0xd0a8) * *(int *)(iVar6 + 0x38b0) + 0x80) * 0x100) >> 0x10;
    } while (iVar1 != 0x38);
  }
  else {
    iVar6 = 0;
    iVar1 = iVar3;
    do {
      iVar8 = param_1 + iVar6;
      iVar7 = iVar3 + (iVar1 - param_1);
      iVar6 = iVar6 + 4;
      iVar1 = iVar1 + 4;
      *(uint *)(iVar7 + -0x2c5c) = (uint)((iVar5 * *(int *)(iVar8 + 0x2870) + 0x80) * 0x100) >> 0x10
      ;
      *(uint *)(iVar7 + -0x2c34) = (uint)((*(int *)(iVar8 + 0x2898) * iVar5 + 0x80) * 0x100) >> 0x10
      ;
      *(uint *)(iVar7 + -0x2c0c) = (uint)((iVar5 * *(int *)(iVar8 + 0x28c0) + 0x80) * 0x100) >> 0x10
      ;
      *(uint *)(iVar7 + -0x2be4) = (uint)((iVar5 * *(int *)(iVar8 + 0x28e8) + 0x80) * 0x100) >> 0x10
      ;
    } while (iVar6 != 0x14);
    iVar1 = 0;
    do {
      iVar6 = param_1 + iVar1;
      iVar5 = iVar3 + iVar1;
      iVar1 = iVar1 + 4;
      *(uint *)(iVar5 + 0x1ccc) =
           (uint)((*(int *)(param_1 + 0xd0a8) * *(int *)(iVar6 + 0x38b0) + 0x80) * 0x100) >> 0x10;
    } while (iVar1 != 0x38);
  }
  return;
}



void vp8_initialize_rd_consts(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar2;
  undefined4 in_lr;
  undefined4 uVar3;
  undefined4 extraout_s0;
  double dVar4;
  uint uVar5;
  undefined8 uVar6;
  
  if (0x9f < param_2) {
    param_2 = 0xa0;
  }
  iVar2 = param_2 * param_2 * param_2;
  uVar3 = 0;
  uVar5 = SUB84(ROUND(((((double)(longlong)(param_2 * iVar2) * 6.999999999999999e-05 -
                        (double)(longlong)iVar2 * 0.0125) +
                       (double)(longlong)(param_2 * param_2) * 2.25) -
                      (double)(longlong)param_2 * 12.5) + 25.0),0);
  *(uint *)(param_1 + 0xd0a8) = uVar5;
  if (uVar5 < 0x19) {
    *(undefined4 *)(param_1 + 0xd0a8) = 0x19;
  }
  if (0 < *(int *)(param_1 + 0x6040)) {
    uVar1 = 0x74bc6a7f;
    dVar4 = pow((double)CONCAT44(unaff_r4,param_4),(double)CONCAT44(in_lr,unaff_r5));
    uVar3 = SUB84(dVar4,0);
    dVar4 = (double)(longlong)*(int *)(param_1 + 0x6040) * 0.015625 + 1.0;
    if ((double)CONCAT44(extraout_r1,uVar1) < dVar4) {
      dVar4 = (double)CONCAT44(extraout_r1,uVar1);
    }
    *(int *)(param_1 + 0xd0a8) = *(int *)(param_1 + 0xd0a8) * SUB84(ROUND(dVar4),0);
  }
  uVar6 = __aeabi_uidiv(uVar3,*(undefined4 *)(param_1 + 0xd0a8),100);
  iVar2 = (int)uVar6;
  *(undefined4 *)(param_1 + 0xd0ac) = 1;
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  *(int *)(param_1 + 0xd0a8) = iVar2;
  vp8_init_mode_costs(extraout_s0,param_1,(int)((ulonglong)uVar6 >> 0x20),1,param_4);
  return;
}



void VP8InitRC(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x5654) = 0;
  vp8_init_rc();
  uVar1 = vp8_regulate_q(param_1,*(undefined4 *)(param_1 + 0xd190));
  *(undefined4 *)(param_1 + 0x562c) = uVar1;
  *(undefined4 *)(param_1 + 0x5638) = *(undefined4 *)(param_1 + 0x6040);
  iVar2 = *(int *)(param_1 + 0x5c6c);
  if (iVar2 != 0) {
    if ((*(int *)(param_1 + 0x6114) == 0) &&
       ((*(int *)(param_1 + 0x6110) == 0 || (*(int *)(param_1 + 0x6160) != 0)))) {
      iVar2 = 0xc0;
    }
    else {
      iVar2 = 0x10;
    }
  }
  *(int *)(param_1 + 0x5644) = iVar2;
  vp8_compute_frame_size_bounds(param_1,param_1 + 0x5634,param_1 + 0x5630);
  *(undefined4 *)(param_1 + 0x5650) = *(undefined4 *)(param_1 + 0x6058);
  *(undefined4 *)(param_1 + 0x564c) = *(undefined4 *)(param_1 + 0x6050);
  *(undefined4 *)(param_1 + 0x563c) = *(undefined4 *)(param_1 + 0x6054);
  *(undefined4 *)(param_1 + 0x5640) = *(undefined4 *)(param_1 + 0x604c);
  uVar1 = 0;
  *(undefined4 *)(param_1 + 0xd194) = 0;
  *(undefined4 *)(param_1 + 0xd198) = 0;
  *(undefined4 *)(param_1 + 0xd184) = *(undefined4 *)(param_1 + 0x562c);
  *(undefined4 *)(param_1 + 0xd19c) = 0;
  *(undefined4 *)(param_1 + 0xd1a0) = 0;
  *(undefined4 *)(param_1 + 0xd1a4) = 0;
  if (*(int *)(param_1 + 0x60d8) == 0) {
    if (*(int *)(param_1 + 0x6110) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  *(undefined4 *)(param_1 + 0x6124) = uVar1;
  uVar1 = vp8_dc_quant(*(undefined4 *)(param_1 + 0x562c),0);
  vp8_initialize_rd_consts(param_1,uVar1);
  return;
}



void vp8_update_rate_correction_factors(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  iVar2 = *(int *)(param_1 + 0x5c6c);
  if (iVar2 == 0) {
    dVar4 = *(double *)(param_1 + 0x6170);
  }
  else {
    if ((*(int *)(param_1 + 0x6114) == 0) && (*(int *)(param_1 + 0x6110) == 0)) {
      dVar4 = *(double *)(param_1 + 0x6168);
    }
    else {
      dVar4 = *(double *)(param_1 + 0x6178);
    }
  }
  iVar1 = *(int *)(param_1 + 0x6040);
  iVar3 = SUB84(ROUND((dVar4 * (double)(longlong)
                                       *(int *)(&DAT_00028588 +
                                               (*(int *)(param_1 + 0xd184) + iVar2 * 0x80) * 4) +
                      0.5) * (double)(longlong)*(int *)(param_1 + 0x5fc0) * 0.001953125),0);
  if (0 < iVar1) {
    dVar5 = 0.99;
    do {
      dVar6 = dVar5 + 3.90625e-05;
      iVar3 = SUB84(ROUND(dVar5),0) * iVar3;
      dVar5 = dVar6;
      if (0.999 <= dVar6) {
        dVar5 = 0.999;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = 100;
  if (0 < iVar3) {
    iVar1 = __aeabi_idiv(*(int *)(param_1 + 0x6010) * 100);
  }
  if (param_2 < 2) {
    dVar5 = *(double *)(&DAT_00028f78 + param_2 * 8);
  }
  else {
    dVar5 = 0.25;
  }
  if (iVar1 < 0x67) {
    if (iVar1 < 99) {
      dVar4 = (dVar4 * (double)(longlong)
                               SUB84(ROUND(100.5 - (double)(longlong)(100 - iVar1) * dVar5),0)) /
              100.0;
      if ((int)((uint)(dVar4 < 0.01) << 0x1f) < 0) {
        dVar4 = 0.01;
      }
    }
  }
  else {
    dVar4 = (dVar4 * (double)(longlong)
                             SUB84(ROUND((double)(longlong)(iVar1 + -100) * dVar5 + 100.5),0)) /
            100.0;
    if (50.0 <= dVar4) {
      dVar4 = 50.0;
    }
  }
  if (iVar2 == 0) {
    *(double *)(param_1 + 0x6170) = dVar4;
  }
  else {
    if ((*(int *)(param_1 + 0x6114) == 0) && (*(int *)(param_1 + 0x6110) == 0)) {
      *(double *)(param_1 + 0x6168) = dVar4;
    }
    else {
      *(double *)(param_1 + 0x6178) = dVar4;
    }
  }
  return;
}



void vp8_adjust_key_frame_context
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;
  undefined8 uVar12;
  
  uVar3 = *(uint *)(param_1 + 0x6010);
  uVar5 = *(uint *)(param_1 + 0x6008);
  *(uint *)(param_1 + 0x6008) = uVar5 + uVar3;
  *(uint *)(param_1 + 0x600c) =
       *(int *)(param_1 + 0x600c) + ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar5,uVar3);
  if (((uint)*(undefined8 *)(param_1 + 0x6000) ^ 1 |
      (uint)((ulonglong)*(undefined8 *)(param_1 + 0x6000) >> 0x20)) == 0) {
    iVar4 = *(int *)(param_1 + 0x5fd4) << 1;
  }
  else {
    piVar9 = (int *)&UNK_00028570;
    iVar4 = 0;
    iVar1 = 0;
    iVar6 = 0;
    piVar7 = (int *)(param_1 + 0x6028);
    do {
      bVar11 = iVar6 != 4;
      if (bVar11) {
        piVar7[-4] = piVar7[-3];
        iVar10 = piVar7[2];
      }
      else {
        *(int *)(param_1 + 0x6028) = *(int *)(param_1 + 0x6010);
        iVar10 = *(int *)(param_1 + 0x606c);
      }
      if (bVar11) {
        piVar7[1] = iVar10;
      }
      if (!bVar11) {
        *(int *)(param_1 + 0x603c) = iVar10;
      }
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
      piVar7 = piVar7 + 1;
      iVar1 = iVar1 + *piVar9;
      iVar4 = *piVar7 * *piVar9 + iVar4;
    } while (iVar6 != 5);
    iVar4 = __aeabi_uidiv(iVar4,iVar1,5,piVar7,param_4);
  }
  if (*(int *)(param_1 + 0x5fd8) < *(int *)(param_1 + 0x6010)) {
    uVar8 = *(int *)(param_1 + 0x6010) - *(int *)(param_1 + 0x5fd8);
    uVar5 = uVar8 * 7;
    uVar3 = uVar5 & ~((int)uVar5 >> 0x20);
    if ((int)uVar5 < 0) {
      uVar3 = uVar5 + 7;
    }
    uVar5 = uVar8 & ~((int)uVar8 >> 0x20);
    if ((int)uVar8 < 0) {
      uVar5 = uVar8 + 7;
    }
    iVar1 = *(int *)(param_1 + 0x60b8) + ((int)uVar3 >> 3);
    *(int *)(param_1 + 0x60b8) = iVar1;
    *(int *)(param_1 + 0x60e4) = *(int *)(param_1 + 0x60e4) + ((int)uVar5 >> 3);
    uVar2 = __aeabi_idiv(iVar1,iVar4);
    *(undefined4 *)(param_1 + 0x60bc) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x606c) = 0;
  uVar12 = VectorAdd(*(undefined8 *)(param_1 + 0x6000),1,8);
  *(undefined8 *)(param_1 + 0x6000) = uVar12;
  return;
}



void vp8_update_gf_useage_maps(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x5c6c) == 0) || (iVar1 = *(int *)(param_1 + 0x6110), iVar1 != 0)) {
    iVar1 = *(int *)(param_1 + 0x5fc0);
  }
  *(int *)(param_1 + 0x6108) = iVar1;
  return;
}



void VP8UpdateRC(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x5630) == 0) {
    *(undefined4 *)(param_1 + 0x5630) = 1;
  }
  if (((*(int *)(param_1 + 0x5cb0) == 0) &&
      (*(int *)(param_1 + 0x562c) == *(int *)(param_1 + 0x6050))) &&
     (iVar4 = *(int *)(param_1 + 0x604c), *(int *)(param_1 + 0x562c) < iVar4)) {
    if (*(int *)(param_1 + 0x5630) < *(int *)(param_1 + 0x6010)) {
      iVar1 = __aeabi_idiv((*(int *)(param_1 + 0x6010) - *(int *)(param_1 + 0x5630)) * 100);
      while (0 < iVar1 && *(int *)(param_1 + 0x6050) < iVar4) {
        iVar2 = *(int *)(param_1 + 0x6050) + 1;
        *(int *)(param_1 + 0x6050) = iVar2;
        *(int *)(param_1 + 0x564c) = iVar2;
        iVar1 = SUB84(ROUND((double)(longlong)iVar1 * 0.96),0);
      }
      uVar3 = 1;
      goto LAB_00022924;
    }
  }
  uVar3 = 0;
LAB_00022924:
  *(undefined4 *)(param_1 + 0x5654) = uVar3;
  if (*(int *)(param_1 + 0x5c6c) == 0) {
    *(undefined4 *)(param_1 + 0x610c) = 1;
  }
  vp8_update_gf_useage_maps(param_1);
  if (*(int *)(param_1 + 0x5654) == 0) {
    vp8_update_rate_correction_factors(param_1,2);
  }
  iVar4 = *(int *)(param_1 + 0x5c6c);
  *(undefined4 *)(param_1 + (iVar4 + 0x1722) * 4) = *(undefined4 *)(param_1 + 0xd184);
  if (iVar4 == 0) {
    vp8_adjust_key_frame_context(param_1);
  }
  if (*(int *)(param_1 + 0x5c6c) == 0) {
    *(undefined4 *)(param_1 + 0x5ff0) = *(undefined4 *)(param_1 + 0xd184);
  }
  else {
    *(int *)(param_1 + 0x5ff0) =
         *(int *)(param_1 + 0x5ff0) * 3 + 2 + *(int *)(param_1 + 0xd184) >> 2;
    if ((*(int *)(param_1 + 0x6110) == 0) && (*(int *)(param_1 + 0x6114) == 0)) {
      iVar4 = *(int *)(param_1 + 0x5fec) + 1;
      *(int *)(param_1 + 0x5fec) = iVar4;
      *(int *)(param_1 + 0x5fe8) = *(int *)(param_1 + 0x562c) + *(int *)(param_1 + 0x5fe8);
      if (iVar4 < 0x97) {
        iVar4 = __aeabi_idiv();
        iVar4 = (iVar4 + *(int *)(param_1 + 0x604c) + 1) / 2;
      }
      else {
        iVar4 = __aeabi_idiv();
      }
      *(int *)(param_1 + 0x5fe4) = iVar4;
      if (*(int *)(param_1 + 0x5fe4) < *(int *)(param_1 + 0x562c)) {
        *(int *)(param_1 + 0x5fe4) = *(int *)(param_1 + 0x562c) + -1;
      }
    }
  }
  if (*(int *)(param_1 + 0x6114) == 0) {
    iVar4 = *(int *)(param_1 + 0x5cb8) + (*(int *)(param_1 + 0x6014) - *(int *)(param_1 + 0x6010));
  }
  else {
    iVar4 = *(int *)(param_1 + 0x5cb8) - *(int *)(param_1 + 0x6010);
  }
  *(int *)(param_1 + 0x5cb8) = iVar4;
  *(undefined4 *)(param_1 + 0x5cb4) = *(undefined4 *)(param_1 + 0x5cb8);
  if (*(int *)(param_1 + 0x6110) == 0) {
    if (*(int *)(param_1 + 0x6114) == 0) {
      if (0 < *(int *)(param_1 + 0x60dc)) {
        *(int *)(param_1 + 0x60dc) = *(int *)(param_1 + 0x60dc) + -1;
      }
      iVar4 = *(int *)(param_1 + 0x6100);
      if (iVar4 != 0) {
        *(int *)(param_1 + 0x6100) = iVar4 + -1;
      }
      iVar4 = *(int *)(param_1 + 0x60fc) + 1;
      *(int *)(param_1 + 0x60fc) = iVar4;
      if (1 < iVar4) {
        *(int *)(param_1 + 0x60ec) = *(int *)(param_1 + 0x60ec) + *(int *)(param_1 + 0x613c);
        *(int *)(param_1 + 0x60f0) = *(int *)(param_1 + 0x60f0) + *(int *)(param_1 + 0x6140);
        *(int *)(param_1 + 0x60f4) = *(int *)(param_1 + 0x60f4) + *(int *)(param_1 + 0x6144);
        *(int *)(param_1 + 0x60f8) = *(int *)(param_1 + 0x60f8) + *(int *)(param_1 + 0x6148);
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x60a0) == 0) {
      *(undefined4 *)(param_1 + 0x60dc) = *(undefined4 *)(param_1 + 0x60ac);
    }
    if (0 < *(int *)(param_1 + 0x60dc)) {
      *(int *)(param_1 + 0x60e0) = *(int *)(param_1 + 0x60dc);
      if ((*(int *)(param_1 + 0x5c6c) != 0) && (*(int *)(param_1 + 0x6160) == 0)) {
        *(int *)(param_1 + 0x60e4) =
             *(int *)(param_1 + 0x60e4) + (*(int *)(param_1 + 0x6010) - *(int *)(param_1 + 0x5fe0));
      }
      uVar3 = __aeabi_idiv(*(undefined4 *)(param_1 + 0x60e4));
      *(undefined4 *)(param_1 + 0x60e8) = uVar3;
    }
    *(undefined4 *)(param_1 + 0x6108) = 0;
    *(undefined4 *)(param_1 + 0x6110) = 0;
    *(undefined4 *)(param_1 + 0x60fc) = 0;
    *(undefined4 *)(param_1 + 0x60ec) = 1;
    *(undefined4 *)(param_1 + 0x60f0) = 1;
    *(undefined4 *)(param_1 + 0x60f4) = 1;
    *(undefined4 *)(param_1 + 0x60f8) = 1;
    if (*(int *)(param_1 + 0x615c) == 0) {
      *(undefined4 *)(param_1 + 0x6160) = 0;
    }
    if (0 < *(int *)(param_1 + 0x60dc)) {
      *(int *)(param_1 + 0x60dc) = *(int *)(param_1 + 0x60dc) + -1;
    }
  }
  *(int *)(param_1 + 0x606c) = *(int *)(param_1 + 0x606c) + 1;
  return;
}



void VeEncoderLock(void)

{
  VeEncoderLock();
  return;
}



void VeEncoderLock(void)

{
  VeEncoderLock();
  return;
}



void VeEncoderUnLock(void)

{
  VeEncoderUnLock();
  return;
}



void VeEncoderUnLock(void)

{
  VeEncoderUnLock();
  return;
}



void VeReset(void)

{
  VeReset();
  return;
}



void VeReset(void)

{
  VeReset();
  return;
}



void VeWaitEncoderInterrupt(void)

{
  VeWaitEncoderInterrupt();
  return;
}



void VeWaitEncoderInterrupt(void)

{
  VeWaitEncoderInterrupt();
  return;
}



void VeGetRegisterBaseAddress(void)

{
  VeGetRegisterBaseAddress();
  return;
}



void VeGetRegisterBaseAddress(void)

{
  VeGetRegisterBaseAddress();
  return;
}



void VeGetDramType(void)

{
  VeGetDramType();
  return;
}



void VeGetDramType(void)

{
  VeGetDramType();
  return;
}



void MemAdapterPalloc(void)

{
  MemAdapterPalloc();
  return;
}



void MemAdapterPalloc(void)

{
  MemAdapterPalloc();
  return;
}



void MemAdapterPfree(void)

{
  MemAdapterPfree();
  return;
}



void MemAdapterPfree(void)

{
  MemAdapterPfree();
  return;
}



void MemAdapterFlushCache(void)

{
  MemAdapterFlushCache();
  return;
}



void MemAdapterFlushCache(void)

{
  MemAdapterFlushCache();
  return;
}



void MemAdapterGetPhysicAddress(void)

{
  MemAdapterGetPhysicAddress();
  return;
}



void MemAdapterGetPhysicAddress(void)

{
  MemAdapterGetPhysicAddress();
  return;
}



void MemAdapterGetPhysicAddressCpu(void)

{
  MemAdapterGetPhysicAddressCpu();
  return;
}



void MemAdapterGetPhysicAddressCpu(void)

{
  MemAdapterGetPhysicAddressCpu();
  return;
}



void MemAdapterGetVirtualAddress(void)

{
  MemAdapterGetVirtualAddress();
  return;
}



void MemAdapterGetVirtualAddress(void)

{
  MemAdapterGetVirtualAddress();
  return;
}



void VeEnableEncoder(void)

{
  VeEnableEncoder();
  return;
}



void VeEnableEncoder(void)

{
  VeEnableEncoder();
  return;
}



void VeDisableEncoder(void)

{
  VeDisableEncoder();
  return;
}



void VeDisableEncoder(void)

{
  VeDisableEncoder();
  return;
}



void VeResetEncoder(void)

{
  VeResetEncoder();
  return;
}



void VeResetEncoder(void)

{
  VeResetEncoder();
  return;
}



void VeInitEncoderPerformance(void)

{
  VeInitEncoderPerformance();
  return;
}



void VeInitEncoderPerformance(void)

{
  VeInitEncoderPerformance();
  return;
}



void VeUninitEncoderPerformance(void)

{
  VeUninitEncoderPerformance();
  return;
}



void VeUninitEncoderPerformance(void)

{
  VeUninitEncoderPerformance();
  return;
}



void VeSetDramType(void)

{
  VeSetDramType();
  return;
}



void VeSetDramType(void)

{
  VeSetDramType();
  return;
}



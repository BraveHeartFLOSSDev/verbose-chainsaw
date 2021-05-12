#include "libadecoder.so.h"



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
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



// WARNING: Unknown calling convention yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}



void __aeabi_ldivmod(void)

{
  __aeabi_ldivmod();
  return;
}



void __android_log_print(void)

{
  __android_log_print();
  return;
}



void __aeabi_idiv(void)

{
  __aeabi_idiv();
  return;
}



void dlopen(void)

{
  dlopen();
  return;
}



void dlsym(void)

{
  dlsym();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



void dlclose(void)

{
  dlclose();
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



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_destroy(__mutex);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = pthread_mutex_init(__mutex,__mutexattr);
  return iVar1;
}



void property_get(void)

{
  property_get();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void ParserRequestBsBuffer
               (int param_1,undefined param_2,undefined param_3,undefined param_4,undefined4 param_5
               ,undefined4 param_6,undefined4 param_7)

{
  (**(code **)(param_1 + 0xa4))
            (*(undefined4 *)(param_1 + 0x24),param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



void ParserUpdateBsBuffer
               (int param_1,undefined param_2,undefined param_3,undefined param_4,undefined4 param_5
               )

{
  (**(code **)(param_1 + 0xa8))(*(undefined4 *)(param_1 + 0x24),param_2,param_3,param_4,param_5);
  return;
}



void BsQueryQuality(int param_1)

{
  (**(code **)(param_1 + 0xac))(*(undefined4 *)(param_1 + 0x24));
  return;
}



void AudioStreamDataSize(int param_1)

{
  (**(code **)(param_1 + 0xa0))(*(undefined4 *)(param_1 + 0x24));
  return;
}



undefined4 AudioPCMDataSize(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}



undefined4 DecRequestPcmBuffer(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  pthread_mutex_t *__mutex;
  
  if (0x1ff < *(int *)(param_1 + 0x60)) {
    return 0xffffffff;
  }
  __mutex = (pthread_mutex_t *)(param_1 + 0x2c);
  pthread_mutex_lock(__mutex);
  iVar2 = *(int *)(param_1 + 0x3c);
  uVar1 = *(uint *)(param_1 + 0x34);
  if (uVar1 < iVar2 + 0xc000U) {
    if (*(int *)(param_1 + 0x48) < 0xc001) goto LAB_00010be8;
    if (*(int *)(param_1 + 0x4c) == 0) {
      *(uint *)(param_1 + 0x44) = uVar1 + 1;
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x38);
      memset(*(void **)(param_1 + 0x50),0,0x3000);
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 100) = 0x200;
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      iVar2 = *(int *)(param_1 + 0x48);
    }
    else {
      *(int *)(param_1 + 0x44) = iVar2;
      iVar2 = *(int *)(param_1 + 0x48) + (iVar2 - (uVar1 + 1));
      *(int *)(param_1 + 0x48) = iVar2;
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x30);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x48);
  }
  if (0xc000 < iVar2) {
    *param_2 = *(undefined4 *)(param_1 + 0x3c);
    pthread_mutex_unlock(__mutex);
    return 0;
  }
LAB_00010be8:
  pthread_mutex_unlock(__mutex);
  return 0xffffffff;
}



undefined4 DecUpdatePcmBuffer(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  iVar2 = 250000;
  if (*(int *)(*(int *)(param_1 + 0x1c) + 0x38) != 0x20) {
    iVar2 = 500000;
  }
  if (param_2 != 0) {
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2c));
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) - param_2;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + param_2;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + param_2;
    memset((void *)(*(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58) * 0x18),0,0x18);
    iVar5 = *(int *)(param_1 + 0x1c);
    uVar3 = *(int *)(param_1 + 0x58) + 1;
    uVar6 = *(uint *)(longlong *)(iVar5 + 0x58);
    uVar7 = *(uint *)(iVar5 + 0x5c);
    lVar1 = *(longlong *)(iVar5 + 0x58);
    iVar9 = *(int *)(param_1 + 0x58) * 0x18;
    iVar4 = *(int *)(param_1 + 0x50) + iVar9;
    iVar8 = (uVar6 & uVar7) + 1;
    *(int *)(*(int *)(param_1 + 0x50) + iVar9) = *(int *)(param_1 + 0x3c) - param_2;
    *(uint *)(iVar4 + 8) = uVar6;
    *(uint *)(iVar4 + 0xc) = uVar7;
    *(int *)(iVar4 + 0x10) = param_2;
    if (iVar8 != 0) {
      iVar8 = 1;
    }
    *(int *)(iVar4 + 4) = iVar8;
    *(uint *)(param_1 + 0x58) = uVar3;
    iVar9 = *(int *)(iVar5 + 0x44);
    if (0x1ff < uVar3) {
      iVar4 = 0;
    }
    iVar8 = *(int *)(iVar5 + 0x48);
    if (0x1ff < uVar3) {
      *(int *)(param_1 + 0x58) = iVar4;
    }
    iVar8 = iVar8 * iVar9;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    lVar10 = __aeabi_ldivmod((int)((longlong)param_2 * (longlong)iVar2),
                             (int)((ulonglong)((longlong)param_2 * (longlong)iVar2) >> 0x20),iVar8,
                             iVar8 >> 0x1f);
    lVar10 = lVar10 + lVar1;
    *(int *)(iVar5 + 0x58) = (int)lVar10;
    *(int *)(iVar5 + 0x5c) = (int)((ulonglong)lVar10 >> 0x20);
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2c));
  }
  return 0;
}



undefined4 PlybkRequestPcmBuffer(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  pthread_mutex_t *__mutex;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  __mutex = (pthread_mutex_t *)(param_1 + 0x2c);
  pthread_mutex_lock(__mutex);
  if ((*(int *)(param_1 + 0x4c) < 1) || (*(int *)(param_1 + 0x60) < 1)) goto LAB_00010e08;
  uVar4 = *(uint *)(param_1 + 0x58);
  uVar2 = *(uint *)(param_1 + 0x54);
  if (uVar2 <= uVar4 && uVar4 != uVar2) {
    uVar3 = *(uint *)(param_1 + 0x5c);
    if ((uVar3 < uVar2) || (uVar4 < uVar3)) {
      uVar1 = 0x1b8;
      uVar5 = 0x1b8;
LAB_00010df8:
      __android_log_print(6,"awplayer",&DAT_00011ed8,"PlybkRequestPcmBuffer",uVar5,
                          "PlybkRequestPcmBuffer",uVar1,uVar2,uVar3,uVar4);
      goto LAB_00010e08;
    }
  }
  else {
    if (uVar2 <= uVar4) {
      __android_log_print(5,"awplayer",
                          "<%s:%u>: (f:%s, l:%d) Be careful, very rare! frmFifo is full!\n",
                          "PlybkRequestPcmBuffer",0x1cd,"PlybkRequestPcmBuffer",0x1cd);
      if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 100)) {
        __android_log_print(6,"awplayer",&DAT_00011ed8,"PlybkRequestPcmBuffer",0x1d1,
                            "PlybkRequestPcmBuffer",0x1d1,*(undefined4 *)(param_1 + 0x54),
                            *(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x58));
        pthread_mutex_unlock(__mutex);
        return 0xffffffff;
      }
      uVar3 = *(uint *)(param_1 + 0x5c);
      uVar4 = *(uint *)(param_1 + 0x58);
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x5c);
      if ((uVar3 < uVar2) && (uVar4 < uVar3)) {
        uVar1 = 0x1c6;
        uVar5 = 0x1c6;
        goto LAB_00010df8;
      }
    }
  }
  if (uVar3 != uVar4) {
    *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x50) + uVar3 * 0x18);
    *param_3 = *(undefined4 *)(*(int *)(param_1 + 0x50) + uVar3 * 0x18 + 0x10);
    *(uint *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1U & 0x1ff;
    pthread_mutex_unlock(__mutex);
    return 0;
  }
LAB_00010e08:
  pthread_mutex_unlock(__mutex);
  return 0xffffffff;
}



undefined4 PlybkUpdatePcmBuffer(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2c));
  iVar1 = *(int *)(param_1 + 0x54) * 0x18;
  iVar5 = *(int *)(param_1 + 0x50) + iVar1;
  if (*(int *)(iVar5 + 0x10) != param_2) {
    __android_log_print(6,"awplayer",&DAT_00011f80,"PlybkUpdatePcmBuffer",0x210,
                        "PlybkUpdatePcmBuffer",0x210,
                        *(undefined4 *)(*(int *)(param_1 + 0x50) + iVar1),param_2,
                        *(int *)(iVar5 + 0x10),*(undefined4 *)(iVar5 + 8),
                        *(undefined4 *)(iVar5 + 0xc));
  }
  uVar3 = *(int *)(param_1 + 0x40) + param_2;
  iVar1 = param_2 + *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x40) = uVar3;
  *(int *)(param_1 + 0x48) = iVar1;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - param_2;
  if (*(uint *)(param_1 + 0x44) <= uVar3) {
    iVar5 = *(int *)(param_1 + 0x34) + 1;
    *(int *)(param_1 + 0x44) = iVar5;
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x48) = iVar1 + (iVar5 - uVar3);
  }
  if ((0 < param_2) && (iVar1 = *(int *)(param_1 + 0x60), iVar1 != 0)) {
    uVar3 = *(uint *)(param_1 + 0x54);
    iVar4 = *(int *)(param_1 + 0x50) + uVar3 * 0x18;
    iVar5 = *(int *)(iVar4 + 0x14);
    iVar6 = *(int *)(iVar4 + 0x10) - iVar5;
    if (iVar6 <= param_2) {
      iVar2 = 0;
      do {
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + iVar6;
        iVar1 = iVar1 + -1;
        if (0x1ff < uVar3) {
          uVar3 = 0;
        }
        if ((param_2 <= iVar2) || (iVar4 = *(int *)(param_1 + 0x50) + uVar3 * 0x18, iVar1 == 0)) {
          *(uint *)(param_1 + 0x54) = uVar3;
          *(int *)(param_1 + 0x60) = iVar1;
          goto LAB_00011070;
        }
        iVar5 = *(int *)(iVar4 + 0x14);
        iVar6 = *(int *)(iVar4 + 0x10) - iVar5;
      } while (iVar6 <= param_2 - iVar2);
      *(uint *)(param_1 + 0x54) = uVar3;
      *(int *)(param_1 + 0x60) = iVar1;
      param_2 = param_2 - iVar2;
    }
    iVar1 = *(int *)(param_1 + 0x1c);
    *(int *)(iVar4 + 0x14) = iVar5 + param_2;
    iVar1 = *(int *)(iVar1 + 0x48) * *(int *)(iVar1 + 0x44);
    lVar7 = __aeabi_ldivmod((int)((longlong)param_2 * 500000),
                            (int)((ulonglong)((longlong)param_2 * 500000) >> 0x20),iVar1,
                            iVar1 >> 0x1f);
    lVar7 = lVar7 + *(longlong *)(iVar4 + 8);
    *(int *)(iVar4 + 8) = (int)lVar7;
    *(int *)(iVar4 + 0xc) = (int)((ulonglong)lVar7 >> 0x20);
  }
LAB_00011070:
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2c));
  return 0;
}



undefined8 PlybkRequestPcmPts(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  pthread_mutex_t *__mutex;
  undefined4 uVar3;
  int iVar4;
  
  __mutex = (pthread_mutex_t *)(param_1 + 0x2c);
  pthread_mutex_lock(__mutex);
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar4 = *(int *)(iVar2 + 0x48) * *(int *)(iVar2 + 0x44);
  if (iVar4 == 0) {
    pthread_mutex_unlock(__mutex);
    return 0;
  }
  if (*(int *)(iVar2 + 0x4c) == 1) {
    iVar2 = *(int *)(iVar2 + 4);
    lVar1 = (longlong)*(int *)(param_1 + 0x4c) * -500000;
    lVar1 = __aeabi_ldivmod((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),iVar4,iVar4 >> 0x1f,param_4);
    lVar1 = (longlong)iVar2 * 1000 + lVar1;
    uVar3 = (undefined4)lVar1;
    iVar2 = (int)((ulonglong)lVar1 >> 0x20);
  }
  else {
    if (*(int *)(param_1 + 0x4c) == 0) {
      uVar3 = *(undefined4 *)(iVar2 + 0x58);
      iVar2 = *(int *)(iVar2 + 0x5c);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x5c) * 0x18;
      uVar3 = *(undefined4 *)(iVar2 + 8);
      iVar2 = *(int *)(iVar2 + 0xc);
    }
  }
  pthread_mutex_unlock(__mutex);
  if (iVar2 < 0) {
    uVar3 = 0;
    iVar2 = 0;
  }
  return CONCAT44(iVar2,uVar3);
}



void PcmQueryQuality(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2c));
  uVar1 = __aeabi_idiv(*(int *)(param_1 + 0x4c) * 100,*(undefined4 *)(param_1 + 0x38));
  *param_2 = uVar1;
  *param_3 = *(undefined4 *)(param_1 + 0x4c);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2c));
  return;
}



void AudioDecoderSeek(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    (**(code **)(param_1 + 0xb0))();
    iVar1 = *(int *)(param_1 + 0x54);
    if ((iVar1 != *(int *)(param_1 + 0x58)) || (iVar1 != *(int *)(param_1 + 0x5c))) {
      __android_log_print(6,"awplayer",&DAT_00011fd8,"AudioDecoderSeek",0x266,"AudioDecoderSeek",
                          0x266,*(int *)(param_1 + 0x5c),*(int *)(param_1 + 0x58),iVar1);
    }
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x30);
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x34) + 1;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x4c) = 0;
    memset(*(void **)(param_1 + 0x50),0,0x3000);
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 100) = 0x200;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  return;
}



void * InitializeAudioDecoder(void *param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  void *__ptr;
  void *__s;
  uint uVar4;
  
  uVar4 = *param_2;
  *(undefined4 *)((int)param_1 + 0x1c) = param_3;
  if (uVar4 < 0x18) {
    if ((1 << (uVar4 & 0xff) & 0xc00860U) != 0) {
      iVar1 = dlopen("libad_audio.so",0);
      *(uint *)((int)param_1 + 0x28) = *param_2;
      *(int *)((int)param_1 + 0x20) = iVar1;
      goto LAB_00011334;
    }
  }
  iVar1 = dlopen("libnormal_audio.so",0);
  *(uint *)((int)param_1 + 0x28) = *param_2;
  *(int *)((int)param_1 + 0x20) = iVar1;
LAB_00011334:
  if (iVar1 == 0) {
    __android_log_print(5,"awplayer","<%s:%u>: dlopenaudiolib fail!","InitializeAudioDecoder",0x286)
    ;
    __ptr = (void *)0xffffffff;
  }
  else {
    uVar2 = dlsym(iVar1,"ParseBitstreamSeekSync");
    *(undefined4 *)((int)param_1 + 0xb0) = uVar2;
    uVar2 = dlsym(*(undefined4 *)((int)param_1 + 0x20),"ParseRequestAudioBitstreamBuffer");
    *(undefined4 *)((int)param_1 + 0xa4) = uVar2;
    uVar2 = dlsym(*(undefined4 *)((int)param_1 + 0x20),"ParseUpdateAudioBitstreamData");
    *(undefined4 *)((int)param_1 + 0xa8) = uVar2;
    uVar2 = dlsym(*(undefined4 *)((int)param_1 + 0x20),"BitstreamQueryQuality");
    *(undefined4 *)((int)param_1 + 0xac) = uVar2;
    uVar2 = dlsym(*(undefined4 *)((int)param_1 + 0x20),"ParseAudioStreamDataSize");
    *(undefined4 *)((int)param_1 + 0xa0) = uVar2;
    uVar2 = dlsym(*(undefined4 *)((int)param_1 + 0x20),"InitializeAudioDecodeLib");
    *(undefined4 *)((int)param_1 + 0xb4) = uVar2;
    uVar2 = dlsym(*(undefined4 *)((int)param_1 + 0x20),"DecodeAudioFrame");
    *(undefined4 *)((int)param_1 + 0xb8) = uVar2;
    uVar2 = dlsym(*(undefined4 *)((int)param_1 + 0x20),"DestroyAudioDecodeLib");
    *(undefined4 *)((int)param_1 + 0xbc) = uVar2;
    uVar2 = dlsym(*(undefined4 *)((int)param_1 + 0x20),"SetAudiolibRawParam");
    *(undefined4 *)((int)param_1 + 0xc0) = uVar2;
    pcVar3 = (code *)dlsym(*(undefined4 *)((int)param_1 + 0x20),"CreateAudioDecodeLib");
    *(code **)((int)param_1 + 0xc4) = pcVar3;
    if ((((((*(int *)((int)param_1 + 0xb0) == 0) || (pcVar3 == (code *)0x0)) ||
          (*(int *)((int)param_1 + 0xb4) == 0)) ||
         ((*(int *)((int)param_1 + 0xbc) == 0 || (*(int *)((int)param_1 + 0xa4) == 0)))) ||
        ((*(int *)((int)param_1 + 0xa8) == 0 ||
         ((*(int *)((int)param_1 + 0xac) == 0 || (*(int *)((int)param_1 + 0xa0) == 0)))))) ||
       (*(int *)((int)param_1 + 0xb8) == 0)) {
      dlclose(*(undefined4 *)((int)param_1 + 0x20));
      *(undefined4 *)((int)param_1 + 0x20) = 0;
      __android_log_print(5,"awplayer","<%s:%u>: dlsym fail!","InitializeAudioDecoder",0x290);
      __ptr = (void *)0xffffffff;
    }
    else {
      iVar1 = (*pcVar3)();
      *(int *)((int)param_1 + 0x24) = iVar1;
      if (iVar1 == 0) {
        __android_log_print(6,"awplayer",&DAT_0001219c,"ADCedarInit",0xcc);
        __ptr = (void *)0xffffffff;
      }
      else {
        iVar1 = (**(code **)((int)param_1 + 0xb4))(iVar1,param_2,param_3);
        if (iVar1 == 0) {
          __ptr = malloc(0x20000);
          *(void **)((int)param_1 + 0x30) = __ptr;
          if (__ptr == (void *)0x0) {
            free(param_1);
          }
          else {
            *(undefined4 *)((int)param_1 + 0x38) = 0x20000;
            *(int *)((int)param_1 + 0x34) = (int)__ptr + 0x1ffff;
            *(int *)((int)param_1 + 0x44) = (int)__ptr + 0x20000;
            *(undefined4 *)((int)param_1 + 0x48) = 0x20000;
            *(void **)((int)param_1 + 0x40) = __ptr;
            *(void **)((int)param_1 + 0x3c) = __ptr;
            *(undefined4 *)((int)param_1 + 0x4c) = 0;
            __s = malloc(0x3000);
            *(void **)((int)param_1 + 0x50) = __s;
            if (__s == (void *)0x0) {
              free(__ptr);
              *(undefined4 *)((int)param_1 + 0x30) = 0;
              __ptr = (void *)0xffffffff;
            }
            else {
              memset(__s,0,0x3000);
              __ptr = (void *)0x0;
              *(undefined4 *)((int)param_1 + 100) = 0x200;
              *(undefined4 *)((int)param_1 + 4) = 1;
            }
          }
        }
        else {
          __android_log_print(6,"awplayer",&DAT_000121d8,"ADCedarInit",0xd2);
          __ptr = (void *)0xffffffff;
        }
      }
    }
  }
  return __ptr;
}



undefined4 ResetAudioDecoder(int param_1)

{
  AudioDecoderSeek(param_1);
  return 0;
}



uint DecodeAudioStream(int param_1,int param_2,undefined2 *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  bool bVar15;
  
  uVar1 = (**(code **)(param_1 + 0xb8))(*(undefined4 *)(param_1 + 0x24),param_3,param_4);
  uVar5 = uVar1 >> 0x1f;
  if (uVar1 == 5) {
    uVar5 = 1;
  }
  if (uVar5 != 0) {
    return uVar1;
  }
  if (param_3 == (undefined2 *)0x0) {
    iVar12 = *(int *)(param_1 + 0x1c);
    iVar11 = *(int *)(iVar12 + 0x10);
  }
  else {
    iVar12 = *(int *)(param_1 + 0x1c);
    if (*(int *)(param_2 + 8) == 1) {
      iVar11 = *(int *)(iVar12 + 0x10);
      if (iVar11 == 2) {
        iVar13 = *param_4;
        if (iVar13 < 4) {
          if (iVar13 == 0) goto LAB_0001170c;
        }
        else {
          puVar3 = param_3;
          do {
            uVar9 = uVar5 + 1;
            *puVar3 = param_3[uVar5 * 2];
            puVar3 = puVar3 + 1;
            uVar5 = uVar9;
          } while ((int)uVar9 < iVar13 >> 2);
        }
        *param_4 = iVar13 / 2;
        iVar11 = *(int *)(iVar12 + 0x10);
      }
    }
    else {
      iVar11 = *(int *)(iVar12 + 0x10);
      if ((*(int *)(param_2 + 8) == 2) && (iVar11 == 1)) {
        iVar11 = *param_4;
        if ((iVar11 != 0) && (uVar9 = iVar11 / 2, 0 < (int)uVar9)) {
          puVar4 = param_3 + uVar9 * 2;
          puVar3 = param_3 + uVar9;
          do {
            uVar5 = uVar5 + 1;
            puVar4[-2] = puVar3[-1];
            puVar3 = puVar3 + -1;
            puVar4[-1] = *puVar3;
            puVar4 = puVar4 + -2;
          } while (uVar5 != uVar9);
        }
        *param_4 = iVar11 << 1;
        iVar11 = *(int *)(iVar12 + 0x10);
      }
    }
  }
LAB_0001170c:
  if (*(int *)(param_1 + 8) == 1) {
    iVar13 = 1 - uVar1;
    if (1 < uVar1) {
      iVar13 = 0;
    }
    if (param_3 == (undefined2 *)0x0) {
      iVar13 = 0;
    }
    if (iVar13 == 0) goto LAB_00011720;
    if ((iVar11 == 2) && (3 < *param_4)) {
      iVar11 = 0;
      puVar3 = param_3;
      do {
        iVar11 = iVar11 + 1;
        puVar4 = puVar3 + 1;
        *(undefined *)((int)puVar3 + 3) = *(undefined *)((int)puVar3 + 1);
        puVar3 = puVar3 + 2;
        *(undefined *)puVar3 = *(undefined *)puVar4;
        iVar12 = *param_4;
        if (iVar12 < 0) {
          iVar12 = iVar12 + 3;
        }
      } while (iVar11 < iVar12 >> 2);
LAB_000117c4:
      iVar12 = *(int *)(param_1 + 0x1c);
      iVar11 = *(int *)(iVar12 + 0x10);
    }
LAB_000117cc:
    if ((*(int *)(param_1 + 0x84) != 0) && (*(int *)(param_1 + 0x88) == 0)) {
      if (*(int *)(iVar12 + 0x30) == 0) goto LAB_000117f0;
      iVar13 = *(int *)(param_1 + 0x28);
      uVar6 = *(undefined4 *)(iVar12 + 8);
      bVar15 = iVar13 == 5;
      *(int *)(param_1 + 0x8c) = iVar11;
      if (bVar15) {
        iVar13 = 2;
      }
      *(undefined4 *)(param_1 + 0x90) = uVar6;
      if (bVar15) {
        *(int *)(param_1 + 0x98) = iVar13;
      }
      else {
        if (iVar13 == 6) {
          *(undefined4 *)(param_1 + 0x98) = 7;
        }
        else {
          *(undefined4 *)(param_1 + 0x98) = 1;
        }
      }
      iVar11 = *(int *)(iVar12 + 0x38);
      if ((iVar11 != 0x18) && (iVar11 != 0x20)) {
        iVar11 = 0x10;
      }
      *(int *)(param_1 + 0x94) = iVar11;
      *(undefined4 *)(param_1 + 0x88) = 1;
      memcpy((void *)(param_2 + 0x78),(void *)(param_1 + 0x84),0x18);
      iVar12 = *(int *)(param_1 + 0x1c);
      iVar11 = *(int *)(iVar12 + 0x10);
    }
  }
  else {
    if (*(int *)(param_1 + 8) == 2) {
      iVar13 = 1 - uVar1;
      if (1 < uVar1) {
        iVar13 = 0;
      }
      if (param_3 == (undefined2 *)0x0) {
        iVar13 = 0;
      }
      if (iVar13 != 0) {
        if ((iVar11 == 2) && (3 < *param_4)) {
          iVar11 = 0;
          puVar3 = param_3;
          do {
            iVar11 = iVar11 + 1;
            *(undefined *)((int)puVar3 + 1) = *(undefined *)((int)puVar3 + 3);
            *(undefined *)(puVar3 + 1) = *(undefined *)(puVar3 + 2);
            puVar3 = puVar3 + 2;
            iVar12 = *param_4;
            if (iVar12 < 0) {
              iVar12 = iVar12 + 3;
            }
          } while (iVar11 < iVar12 >> 2);
          goto LAB_000117c4;
        }
        goto LAB_000117cc;
      }
    }
LAB_00011720:
    if (uVar1 == 0) goto LAB_000117cc;
  }
  if (*(int *)(iVar12 + 0x30) != 0) {
    uVar6 = *(undefined4 *)(iVar12 + 8);
    *(int *)(param_1 + 0x78) = iVar11;
    *(int *)(iVar12 + 0x44) = iVar11;
    *(int *)(param_2 + 8) = iVar11;
    *(undefined4 *)(param_1 + 0x7c) = uVar6;
    *(undefined4 *)(iVar12 + 0x48) = uVar6;
    *(undefined4 *)(param_2 + 0x10) = uVar6;
    return uVar1;
  }
LAB_000117f0:
  iVar13 = *(int *)(iVar12 + 8);
  if (48000 < iVar13) {
    iVar2 = __aeabi_idiv(*param_4 >> 1,iVar11);
    iVar7 = 1;
    do {
      iVar13 = iVar13 >> 1;
      iVar2 = iVar2 >> 1;
      iVar7 = iVar7 * 2;
    } while (48000 < iVar13);
    if (0 < iVar2) {
      iVar10 = 0;
      puVar3 = param_3;
      puVar4 = param_3;
      do {
        if (0 < iVar11) {
          iVar8 = 0;
          do {
            *(undefined2 *)((int)puVar4 + iVar8) = *(undefined2 *)((int)puVar3 + iVar8);
            iVar8 = iVar8 + 2;
          } while (iVar8 != iVar11 * 2);
          puVar4 = puVar4 + iVar11;
          puVar3 = puVar3 + iVar11;
        }
        iVar10 = iVar10 + 1;
        puVar3 = puVar3 + iVar11 * (iVar7 + -1);
      } while (iVar10 != iVar2);
    }
    *param_4 = iVar11 * iVar2 * 2;
    iVar11 = *(int *)(iVar12 + 0x10);
  }
  if ((*(int *)(param_2 + 8) != iVar11) || (*(int *)(param_2 + 0x10) != iVar13)) {
    *(undefined4 *)(param_1 + 4) = 1;
    __android_log_print(5,"awplayer","<%s:%u>: get audio decoder change ch or fs!\n",
                        "DecodeAudioStream",0x3b1);
  }
  if (*(int *)(param_1 + 4) != 0) {
    iVar11 = *(int *)(param_1 + 0x1c);
    uVar14 = *(undefined4 *)(iVar11 + 0x10);
    uVar6 = *(undefined4 *)(iVar11 + 0xc);
    *(undefined4 *)(param_1 + 0x78) = uVar14;
    *(undefined4 *)(iVar11 + 0x44) = uVar14;
    *(undefined4 *)(param_2 + 8) = uVar14;
    *(int *)(param_1 + 0x7c) = iVar13;
    *(int *)(iVar11 + 0x48) = iVar13;
    *(int *)(param_2 + 0x10) = iVar13;
    *(undefined4 *)(param_2 + 0x14) = uVar6;
    __android_log_print(3,"awplayer",
                        "<%s:%u>: ==============================pAudioDecoder->pBsInFor->bitrate:%d"
                        ,"DecodeAudioStream",0x3ba,uVar6);
    *(undefined4 *)(param_1 + 4) = 0;
    if ((*(int *)(*(int *)(param_1 + 0x1c) + 0x44) == 0) ||
       (*(int *)(*(int *)(param_1 + 0x1c) + 0x48) == 0)) {
      *(undefined4 *)(param_1 + 4) = 1;
      __android_log_print(5,"awplayer","<%s:%u>: get audio decoder info fail!\n","DecodeAudioStream"
                          ,0x3bf,uVar6);
      return 0xffffffff;
    }
  }
  iVar11 = *(int *)(param_1 + 0x10);
  if (iVar11 != 0) {
    iVar12 = *param_4 / 2;
    if (iVar11 == 2) {
      if (1 < iVar12) {
        iVar11 = 1;
        do {
          iVar11 = iVar11 + 2;
          param_3[1] = 0;
          param_3 = param_3 + 2;
        } while (iVar11 < iVar12);
      }
    }
    else {
      if (iVar11 == 3) {
        memset(param_3,0,iVar12 << 1);
      }
      else {
        if ((iVar11 == 1) && (0 < iVar12)) {
          iVar11 = 0;
          do {
            *(undefined2 *)((int)param_3 + iVar11) = 0;
            iVar11 = iVar11 + 4;
          } while (iVar11 != ((iVar12 - 1U >> 1) + 1) * 4);
        }
      }
    }
  }
  return uVar1;
}



undefined4 DestroyAudioDecoder(void *param_1)

{
  if (param_1 != (void *)0x0) {
    pthread_mutex_destroy((pthread_mutex_t *)((int)param_1 + 0x2c));
    if (*(code **)((int)param_1 + 0xbc) != (code *)0x0) {
      (**(code **)((int)param_1 + 0xbc))(*(undefined4 *)((int)param_1 + 0x24));
      *(undefined4 *)((int)param_1 + 0x24) = 0;
    }
    if (*(int *)((int)param_1 + 0x20) != 0) {
      dlclose();
      *(undefined4 *)((int)param_1 + 0x20) = 0;
    }
    if (*(void **)((int)param_1 + 0x30) != (void *)0x0) {
      free(*(void **)((int)param_1 + 0x30));
      *(undefined4 *)((int)param_1 + 0x30) = 0;
    }
    if (*(void **)((int)param_1 + 0x50) != (void *)0x0) {
      free(*(void **)((int)param_1 + 0x50));
      *(undefined4 *)((int)param_1 + 0x50) = 0;
    }
    free(param_1);
    return 0;
  }
  return 0xffffffff;
}



void * CreateAudioDecoder(void)

{
  void *__s;
  
  __s = malloc(200);
  if (__s == (void *)0x0) {
    __android_log_print(6,"awplayer",&DAT_000122bc,"CreateAudioDecoder",0x48e);
  }
  else {
    memset(__s,0,200);
    pthread_mutex_init((pthread_mutex_t *)((int)__s + 0x2c),(pthread_mutexattr_t *)0x0);
  }
  return __s;
}



void SetRawPlayParam(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char acStack148 [128];
  int local_14;
  
  local_14 = __stack_chk_guard;
  property_get("mediasw.sft.rawdata",acStack148,&DAT_00012300);
  iVar1 = strcmp(acStack148,"HDMI_RAW");
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x84) = 1;
  }
  else {
    iVar1 = strcmp(acStack148,"SPDIF_RAW");
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 0;
    }
    *(undefined4 *)(param_1 + 0x84) = uVar2;
  }
  (**(code **)(param_1 + 0xc0))(*(undefined4 *)(param_1 + 0x24));
  iVar1 = __stack_chk_guard;
  *(undefined4 *)(param_1 + 0x9c) = param_2;
  if (local_14 != iVar1) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



undefined4 AudioStreamBufferSize(void)

{
  return 0x20000;
}



undefined4 AudioStreamBufferMaxFrameNum(void)

{
  return 0x200;
}



#include "libcedarx_aencoder.so.h"



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



void __android_log_print(void)

{
  __android_log_print();
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

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = pthread_mutex_init(__mutex,__mutexattr);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_destroy(__mutex);
  return iVar1;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention yet parameter storage is locked

double log(double __x)

{
  double dVar1;
  
  dVar1 = log(__x);
  return dVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

double pow(double __x,double __y)

{
  double dVar1;
  
  dVar1 = pow(__x,__y);
  return dVar1;
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

double sqrt(double __x)

{
  double dVar1;
  
  dVar1 = sqrt(__x);
  return dVar1;
}



void __aeabi_ldivmod(void)

{
  __aeabi_ldivmod();
  return;
}



void __aeabi_idivmod(void)

{
  __aeabi_idivmod();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = sprintf(__s,__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void exit(int __status)

{
                    // WARNING: Subroutine does not return
  exit(__status);
}



void FUN_00013d58(void)

{
  __cxa_finalize(0x30000);
  return;
}



undefined4 FUN_00013d78(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = __cxa_atexit(param_1,0,0x30000);
  return uVar1;
}



undefined4 GetEmptyFrameNum(int *param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *param_1;
  __mutex = (pthread_mutex_t *)(iVar1 + 0x5e8);
  pthread_mutex_lock(__mutex);
  uVar2 = *(undefined4 *)(iVar1 + 0x5e4);
  pthread_mutex_unlock(__mutex);
  return uVar2;
}



undefined4 GetValidPcmDataSize(int *param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *param_1;
  __mutex = (pthread_mutex_t *)(iVar1 + 0x5ec);
  pthread_mutex_lock(__mutex);
  uVar2 = *(undefined4 *)(iVar1 + 0x10);
  pthread_mutex_unlock(__mutex);
  return uVar2;
}



undefined4
ReleaseAudioEncBuf(int *param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
                  int param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  pthread_mutex_t *__mutex;
  int iVar6;
  
  iVar5 = *param_1;
  __mutex = (pthread_mutex_t *)(iVar5 + 0x5e8);
  pthread_mutex_lock(__mutex);
  iVar3 = *(int *)(iVar5 + 0x5e4);
  if (iVar3 == 0x20) {
    pthread_mutex_unlock(__mutex);
    __android_log_print(6,"AudioEncApi.c","(f:%s, l:%d) fatal error! AudioEncPro: no valid fifo\n",
                        "ReleaseAudioEncBuf",0x1a9);
    return 0xffffffff;
  }
  iVar4 = *(int *)(iVar5 + 0x5dc);
  if (iVar4 != param_7) {
    pthread_mutex_unlock(__mutex);
    __android_log_print(6,"AudioEncApi.c","(f:%s, l:%d) fatal error! nReleaseId[%d]!=readId[%d]\n",
                        "ReleaseAudioEncBuf",0x1af,param_7,*(undefined4 *)(iVar5 + 0x5dc));
    return 0xffffffff;
  }
  iVar2 = iVar5 + iVar4 * 0xc;
  if (*(int *)(iVar2 + 0x458) == param_2) {
    iVar6 = *(int *)(iVar2 + 0x45c);
    if ((iVar6 == param_3) && (param_6 == 0 && *(int *)(iVar2 + 0x460) == param_5))
    goto LAB_00013eb8;
  }
  else {
    iVar6 = *(int *)(iVar2 + 0x45c);
  }
  __android_log_print(6,"AudioEncApi.c",
                      "(f:%s, l:%d) fatal error, check code!buf[%p->%p]size[%d->%d]pts[%lld->%lld]",
                      "ReleaseAudioEncBuf",0x1bb,param_2,*(int *)(iVar2 + 0x458),param_3,iVar6);
  iVar3 = *(int *)(iVar5 + 0x5e4);
  iVar4 = *(int *)(iVar5 + 0x5dc);
LAB_00013eb8:
  *(int *)(iVar5 + 0x5e4) = iVar3 + 1;
  uVar1 = (uint)(iVar4 + 1 >> 0x1f) >> 0x1b;
  *(uint *)(iVar5 + 0x5dc) = (iVar4 + 1 + uVar1 & 0x1f) - uVar1;
  pthread_mutex_unlock(__mutex);
  return 0;
}



undefined4
GetAudioEncBuf(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,int *param_5
              )

{
  uint uVar1;
  int iVar2;
  pthread_mutex_t *__mutex;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar2 = *param_1;
  __mutex = (pthread_mutex_t *)(iVar2 + 0x5e8);
  pthread_mutex_lock(__mutex);
  if (*(int *)(iVar2 + 0x5e4) < 0x20) {
    iVar5 = *(int *)(iVar2 + 0x5d8);
    iVar3 = *(int *)(iVar2 + 0x5dc);
    if (iVar3 < iVar5) {
      iVar4 = *(int *)(iVar2 + 0x5e0);
      if ((iVar4 < iVar3) || (iVar5 < iVar4)) {
        __android_log_print(6,"AudioEncApi.c",
                                                        
                            "(f:%s, l:%d) fatal error! read_id[%d], prefechId[%d], writeId[%d], check code!\n"
                            ,"GetAudioEncBuf",0x170,iVar3,iVar4,iVar5);
        goto LAB_00014164;
      }
    }
    else {
      if (iVar5 < iVar3) {
        iVar4 = *(int *)(iVar2 + 0x5e0);
        if ((iVar4 < iVar3) && (iVar5 < iVar4)) {
          __android_log_print(6,"AudioEncApi.c",
                                                            
                              "(f:%s, l:%d) fatal error! read_id[%d], prefechId[%d], writeId[%d], check code!\n"
                              ,"GetAudioEncBuf",0x17e,iVar3,iVar4,iVar5);
          pthread_mutex_unlock(__mutex);
          return 0xffffffff;
        }
      }
      else {
        if (*(int *)(iVar2 + 0x5e4) != 0) {
          __android_log_print(6,"AudioEncApi.c",
                                                            
                              "(f:%s, l:%d) fatal error! read_id[%d], prefechId[%d], writeId[%d], check code!\n"
                              ,"GetAudioEncBuf",0x188,iVar3,*(undefined4 *)(iVar2 + 0x5e0),iVar5);
          pthread_mutex_unlock(__mutex);
          return 0xffffffff;
        }
        iVar4 = *(int *)(iVar2 + 0x5e0);
      }
    }
    if (iVar5 != iVar4) {
      iVar3 = iVar2 + iVar4 * 0xc;
      uVar6 = *(undefined4 *)(iVar3 + 0x45c);
      *param_2 = *(undefined4 *)(iVar3 + 0x458);
      *param_3 = uVar6;
      iVar3 = *(int *)(iVar2 + 0x5e0);
      *param_4 = *(undefined4 *)(iVar2 + iVar3 * 0xc + 0x460);
      param_4[1] = 0;
      *param_5 = iVar3;
      iVar3 = *(int *)(iVar2 + 0x5e0) + 1;
      uVar1 = (uint)(iVar3 >> 0x1f) >> 0x1b;
      *(uint *)(iVar2 + 0x5e0) = (iVar3 + uVar1 & 0x1f) - uVar1;
      pthread_mutex_unlock(__mutex);
      return 0;
    }
  }
LAB_00014164:
  pthread_mutex_unlock(__mutex);
  return 0xffffffff;
}



undefined4 AudioEncPro(int **param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  pthread_mutex_t *__mutex;
  int iVar5;
  int iVar6;
  int local_14;
  
  piVar4 = *param_1;
  local_14 = 0;
  __mutex = (pthread_mutex_t *)(piVar4 + 0x17a);
  pthread_mutex_lock(__mutex);
  if (piVar4[0x179] < 1) {
    uVar2 = 2;
    pthread_mutex_unlock(__mutex);
  }
  else {
    pthread_mutex_unlock(__mutex);
    if (piVar4[piVar4[0x176] * 3 + 0x116] == 0) {
      uVar2 = 0xffffffff;
      __android_log_print(6,"AudioEncApi.c","AudioEncPro: error get out buf");
    }
    else {
      uVar2 = (**(code **)(*piVar4 + 0x14))(*piVar4,piVar4[piVar4[0x176] * 3 + 0x116],&local_14);
      if (local_14 != 0) {
        pthread_mutex_lock(__mutex);
        iVar3 = piVar4[0x176];
        iVar5 = iVar3 + 1;
        iVar6 = piVar4[0x179];
        uVar1 = (uint)(iVar5 >> 0x1f) >> 0x1b;
        (piVar4 + iVar3 * 3)[0x118] = piVar4[0x10];
        (piVar4 + iVar3 * 3)[0x117] = local_14;
        piVar4[0x179] = iVar6 + -1;
        piVar4[0x176] = (iVar5 + uVar1 & 0x1f) - uVar1;
        pthread_mutex_unlock(__mutex);
      }
    }
  }
  return uVar2;
}



undefined4 RequestWriteBuf(int *param_1,void *param_2,size_t param_3)

{
  void *__dest;
  void *__dest_00;
  int iVar1;
  pthread_mutex_t *__mutex;
  uint uVar2;
  size_t __n;
  
  iVar1 = *param_1;
  __mutex = (pthread_mutex_t *)(iVar1 + 0x5ec);
  pthread_mutex_lock(__mutex);
  if ((int)param_3 <= *(int *)(iVar1 + 0x18)) {
    __dest = *(void **)(iVar1 + 0x14);
    __dest_00 = *(void **)(iVar1 + 4);
    uVar2 = (int)__dest_00 + *(int *)(iVar1 + 8);
    if (uVar2 < (int)__dest + param_3) {
      __n = uVar2 - (int)__dest;
      if (0 < (int)__n) {
        memcpy(__dest,param_2,__n);
        __dest_00 = *(void **)(iVar1 + 4);
      }
      memcpy(__dest_00,(void *)((int)param_2 + __n),param_3 - __n);
      *(size_t *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + (param_3 - *(int *)(iVar1 + 8));
    }
    else {
      memcpy(__dest,param_2,param_3);
      *(size_t *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + param_3;
    }
    *(size_t *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) - param_3;
    *(size_t *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + param_3;
    pthread_mutex_unlock(__mutex);
    return 0;
  }
  pthread_mutex_unlock(__mutex);
  __android_log_print(6,"AudioEncApi.c","not enough buffer to write");
  return 0xffffffff;
}



undefined4 * AudioEncInit(void *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *__s;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 == 2 || param_2 == 0) || (param_2 == 3 || param_2 == 1)) {
    puVar1 = (undefined4 *)malloc(0x1c);
    if (puVar1 == (undefined4 *)0x0) {
      __android_log_print(6,"AudioEncApi.c","malloc gAEncContent fail");
    }
    else {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      __s = (undefined4 *)malloc(0x5f4);
      if (__s == (undefined4 *)0x0) {
        __android_log_print(6,"AudioEncApi.c","malloc audioEncData fail");
        puVar1 = __s;
      }
      else {
        memset(__s,0,0x5f4);
        puVar4 = (undefined4 *)0x20;
        *puVar1 = __s;
        __s[0x179] = 0x20;
        puVar3 = __s;
        do {
          pvVar2 = malloc(0x1000);
          puVar3[0x116] = pvVar2;
          puVar3 = puVar3 + 3;
          if (pvVar2 == (void *)0x0) {
            __android_log_print(6,"AudioEncApi.c","AudioEncInit: malloc out buffer failed");
            return (undefined4 *)0x0;
          }
          puVar4 = (undefined4 *)((int)puVar4 + -1);
        } while (puVar4 != (undefined4 *)0x0);
        pvVar2 = malloc(0x20000);
        __s[1] = pvVar2;
        if (pvVar2 == (void *)0x0) {
          __android_log_print(6,"AudioEncApi.c","AudioEncInit: malloc PcmManager failed");
          puVar1 = puVar4;
        }
        else {
          __s[5] = pvVar2;
          __s[3] = pvVar2;
          __s[2] = 0x20000;
          __s[6] = 0x20000;
          __s[4] = 0;
          __s[8] = __s;
          memcpy(__s + 9,param_1,0x1c);
          if (param_2 == 0) {
            puVar3 = (undefined4 *)AudioAACENCEncInit();
            *__s = puVar3;
          }
          else {
            if (param_2 - 1U < 2) {
              puVar3 = (undefined4 *)AudioPCMEncInit();
              *__s = puVar3;
            }
            else {
              if (param_2 != 3) {
                __android_log_print(6,"AudioEncApi.c",
                                    "(f:%s, l:%d) not support other audio encode type[%d]",
                                    "AudioEncInit",0x86,param_2);
                return (undefined4 *)0x0;
              }
              puVar3 = (undefined4 *)AudioMP3ENCEncInit();
              *__s = puVar3;
            }
          }
          if (puVar3 == (undefined4 *)0x0) {
            __android_log_print(6,"AudioEncApi.c","AudioEncInit: EncInit failed");
            puVar1 = puVar3;
          }
          else {
            __s[0x17c] = param_2;
            puVar3[1] = __s + 9;
            *puVar3 = __s + 1;
            puVar3[2] = __s + 0x10;
            (*(code *)puVar3[4])(puVar3);
            puVar1[3] = GetAudioEncBuf;
            puVar1[2] = AudioEncPro;
            puVar1[1] = RequestWriteBuf;
            puVar1[4] = ReleaseAudioEncBuf;
            puVar1[5] = GetValidPcmDataSize;
            puVar1[6] = GetEmptyFrameNum;
            pthread_mutex_init((pthread_mutex_t *)(__s + 0x17b),(pthread_mutexattr_t *)0x0);
            pthread_mutex_init((pthread_mutex_t *)(__s + 0x17a),(pthread_mutexattr_t *)0x0);
          }
        }
      }
    }
  }
  else {
    puVar1 = (undefined4 *)0x0;
    __android_log_print(6,"AudioEncApi.c","(f:%s, l:%d) not support audio encode type[%d]",
                        "AudioEncInit",0x40,param_2);
  }
  return puVar1;
}



void AudioEncExit(int **param_1)

{
  void *pvVar1;
  void **ppvVar2;
  int iVar3;
  void **__ptr;
  
  if (param_1 != (int **)0x0) {
    __ptr = (void **)*param_1;
    iVar3 = 0x20;
    ppvVar2 = __ptr;
    do {
      if (ppvVar2[0x116] != (void *)0x0) {
        free(ppvVar2[0x116]);
        ppvVar2[0x116] = (void *)0x0;
      }
      iVar3 = iVar3 + -1;
      ppvVar2 = ppvVar2 + 3;
    } while (iVar3 != 0);
    if (__ptr[1] != (void *)0x0) {
      free(__ptr[1]);
      __ptr[1] = (void *)0x0;
    }
    if (*__ptr != (void *)0x0) {
      (**(code **)((int)*__ptr + 0x18))();
      pvVar1 = *__ptr;
      if (__ptr[0x17c] == (void *)0x0) {
        AudioMP3ENCEncExit(pvVar1);
      }
      else {
        if (__ptr[0x17c] == (void *)0x3) {
          AudioMP3ENCEncExit(pvVar1);
        }
        else {
          AudioMP3ENCEncExit(pvVar1);
        }
      }
      *__ptr = (void *)0x0;
    }
    pthread_mutex_destroy((pthread_mutex_t *)(__ptr + 0x17b));
    pthread_mutex_destroy((pthread_mutex_t *)(__ptr + 0x17a));
    free(__ptr);
    free(param_1);
    return;
  }
  __android_log_print(6,"AudioEncApi.c","gAEncContent == NULL");
  return;
}



undefined4 GetPcmDataSize(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10);
}



size_t ReadPcmDataForEnc(void *param_1,size_t param_2,int param_3)

{
  void *__src;
  pthread_mutex_t *__mutex;
  int iVar1;
  uint uVar2;
  size_t sVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_3 + 0x1c);
  __mutex = (pthread_mutex_t *)(iVar1 + 0x5ec);
  pthread_mutex_lock(__mutex);
  if (*(int *)(iVar1 + 0x10) < (int)param_2) {
    sVar3 = 0;
    __android_log_print(5,"AudioEncApi.c",
                        "pcm is not enough for audio encoder! uGetLen: %d, uDataLen: %d\n",param_2,
                        *(int *)(iVar1 + 0x10));
    pthread_mutex_unlock(__mutex);
  }
  else {
    __src = *(void **)(iVar1 + 0xc);
    uVar2 = *(int *)(iVar1 + 4) + *(int *)(iVar1 + 8);
    if (uVar2 < (int)__src + param_2) {
      sVar3 = uVar2 - (int)__src;
      memcpy(param_1,__src,sVar3);
      memcpy((void *)((int)param_1 + sVar3),*(void **)(iVar1 + 4),param_2 - sVar3);
    }
    else {
      memcpy(param_1,__src,param_2);
    }
    uVar2 = *(int *)(iVar1 + 0xc) + param_2;
    bVar4 = (uint)(*(int *)(iVar1 + 4) + *(int *)(iVar1 + 8)) <= uVar2;
    *(uint *)(iVar1 + 0xc) = uVar2;
    if (bVar4) {
      uVar2 = uVar2 - *(int *)(iVar1 + 8);
    }
    if (bVar4) {
      *(uint *)(iVar1 + 0xc) = uVar2;
    }
    *(size_t *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) - param_2;
    *(size_t *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + param_2;
    pthread_mutex_unlock(__mutex);
    sVar3 = param_2;
  }
  return sVar3;
}



undefined4 PCMframeEnc(int *param_1,undefined *param_2,size_t *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined uVar3;
  size_t sVar4;
  ushort *puVar5;
  ushort *puVar6;
  size_t sVar7;
  int iVar8;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr3;
  
  *param_3 = 0;
  if (param_1[3] == 0) {
    puVar2 = (undefined4 *)param_1[1];
    iVar8 = puVar2[3];
    if (6 < (uint)puVar2[1] || (iVar8 != 0x20 && iVar8 != 0x18) && (iVar8 != 0x10 && iVar8 != 8)) {
      return 0xffffffff;
    }
    DAT_0003001c = (undefined)*puVar2;
    DAT_0003001d = (undefined)((uint)*(undefined4 *)param_1[1] >> 8);
    DAT_0003001e = (undefined)*(undefined2 *)(param_1[1] + 2);
    DAT_0003001f = *(undefined *)(param_1[1] + 3);
    DAT_0003001a = (undefined)*(undefined4 *)(param_1[1] + 4);
    DAT_0003001b = (undefined)((uint)*(undefined4 *)(param_1[1] + 4) >> 8);
    puVar2 = (undefined4 *)param_1[1];
    DAT_00030020 = (char)((int)puVar2[3] >> 3) * (char)*puVar2 * (char)puVar2[1];
    piVar1 = (int *)param_1[1];
    DAT_00030021 = (undefined)((uint)(piVar1[1] * *piVar1 * (piVar1[3] >> 3)) >> 8);
    piVar1 = (int *)param_1[1];
    DAT_00030022 = (undefined)((uint)(piVar1[1] * *piVar1 * (piVar1[3] >> 3)) >> 0x10);
    piVar1 = (int *)param_1[1];
    DAT_00030023 = (undefined)((uint)(piVar1[1] * *piVar1 * (piVar1[3] >> 3)) >> 0x18);
    DAT_00030024 = (char)*(undefined4 *)(param_1[1] + 4) * (char)(*(int *)(param_1[1] + 0xc) >> 3);
    DAT_00030025 = (undefined)
                   ((uint)(*(int *)(param_1[1] + 4) * (*(int *)(param_1[1] + 0xc) >> 3)) >> 8);
    param_1[3] = 1;
  }
  iVar8 = GetPcmDataSize(*param_1);
  piVar1 = (int *)param_1[1];
  if (piVar1[6] == 2) {
    puVar2 = (undefined4 *)param_1[2];
    if (iVar8 < 0x780) goto LAB_00014ae4;
    iVar8 = *param_1;
    coprocessor_function(0xb,6,5,in_cr3,in_cr2,in_cr1);
    coprocessor_function(0xb,6,5,in_cr1,in_cr3,in_cr1);
    coprocessor_function(0xb,6,5,in_cr0,in_cr0,in_cr2);
    *puVar2 = SUB84(ROUND(1000.0 / ((double)(longlong)*piVar1 + (double)(longlong)*piVar1)),0);
    sVar4 = ReadPcmDataForEnc(param_2 + 4,0x780,iVar8);
    param_2[2] = 0;
    *param_2 = 0xa0;
    param_2[3] = 0;
    param_2[1] = 6;
    if (*(int *)param_1[1] == 0xac44) {
      uVar3 = 9;
    }
    else {
      if (*(int *)param_1[1] == 48000) {
        uVar3 = 0x11;
      }
      else {
        __android_log_print(6,"pcm_enc.c","unsupport audio Sample rate: %d");
        uVar3 = 0x19;
      }
    }
    param_2[3] = uVar3;
    puVar5 = (ushort *)(param_2 + 4);
    do {
      puVar6 = puVar5 + 1;
      *puVar5 = (ushort)((int)(short)*puVar5 << 8) | *puVar5 >> 8;
      puVar5 = puVar6;
    } while (puVar6 != (ushort *)(param_2 + 0x784));
    *param_3 = sVar4 + 4;
  }
  else {
    sVar4 = piVar1[1] * (piVar1[3] >> 3) * 0x400;
    if (iVar8 < (int)sVar4) {
      puVar2 = (undefined4 *)param_1[2];
LAB_00014ae4:
      if (puVar2[3] == 5) {
        return 0xfffffffe;
      }
      return 1;
    }
    coprocessor_function(0xb,6,4,in_cr2,in_cr2,in_cr2);
    coprocessor_function(0xb,6,5,in_cr1,in_cr2,in_cr1);
    *(int *)param_1[2] = SUB84(ROUND(1000.0 / (double)(longlong)*piVar1),0);
    sVar7 = sVar4;
    if (0x1000 < (int)sVar4) {
      sVar7 = 0x1000;
      __android_log_print(6,"pcm_enc.c",
                          "(f:%s, l:%d) must modify code! encodeOutBufSize[%d] < len[%d]",
                          "PCMframeEnc",0xdc,0x1000,sVar4);
    }
    sVar4 = ReadPcmDataForEnc(param_2,sVar7,*param_1);
    *param_3 = sVar4;
  }
  *(int *)(param_1[2] + 8) = *(int *)(param_1[2] + 8) + 1;
  return 0;
}



undefined4 PCMEncInit(int param_1)

{
  memcpy((void *)(*(int *)(param_1 + 8) + 0x10),&WAVE_00030004,0x2c);
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x410) = 0x2c;
  return 0;
}



undefined4 PCMEncExit(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 8) * (*(int *)(iVar1 + 0xc) >> 3);
  WAVE_00030004._4_4_ = iVar2 * *(int *)(iVar1 + 4) * 0x400 + 0x24;
  DAT_0003002c = iVar2 * *(int *)(iVar1 + 4) * 0x400;
  memcpy((void *)(*(int *)(param_1 + 8) + 0x10),&WAVE_00030004,0x2c);
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x410) = 0x2c;
  return 0;
}



void AudioPCMEncInit(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(0x1c);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[4] = PCMEncInit;
  puVar1[5] = PCMframeEnc;
  puVar1[6] = PCMEncExit;
  return;
}



undefined4 AudioMP3ENCEncExit(void *param_1)

{
  free(param_1);
  return 0;
}



undefined4 AudioAACENCAACframeEnc(int *param_1,void *param_2,size_t *param_3)

{
  uint *puVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  undefined4 uVar5;
  char *pcVar6;
  char **ppcVar7;
  int iVar8;
  undefined uVar9;
  char *pcVar10;
  uint **ppuVar11;
  uint *puVar12;
  bool bVar13;
  undefined4 in_cr1;
  undefined4 in_cr2;
  
  ppuVar11 = *(uint ***)(param_1[2] + 0x414);
  *param_3 = 0;
  if (param_1[3] == 0) {
    ppcVar7 = (char **)param_1[1];
    pcVar10 = ppcVar7[3];
    pcVar6 = ppcVar7[1];
    bVar13 = pcVar6 == (char *)0x2;
    if (pcVar6 < (char *)0x3) {
      bVar13 = pcVar10 == (char *)0x10;
    }
    if (bVar13) {
      pcVar10 = (char *)0x0;
    }
    uVar9 = SUB41(pcVar10,0);
    if (bVar13) {
      puVar1 = AudioAACENCfaacEncOpen
                         (*ppcVar7,(int)pcVar6,(int *)(ppuVar11 + 1),(int *)(ppuVar11 + 2));
      *ppuVar11 = puVar1;
      if (puVar1 != (uint *)0x0) {
        iVar2 = AudioAACENCfaacEncGetCurrentConfiguration((int)puVar1);
        *(undefined *)(iVar2 + 0x11) = uVar9;
        *(undefined *)(iVar2 + 0x10) = 2;
        *(undefined *)(iVar2 + 0x3c) = 2;
        *(undefined *)(iVar2 + 0x12) = uVar9;
        *(undefined *)(iVar2 + 0x13) = uVar9;
        *(undefined *)(iVar2 + 0xc) = uVar9;
        *(undefined *)(iVar2 + 0xd) = uVar9;
        *(undefined *)(iVar2 + 0xe) = uVar9;
        *(undefined *)(iVar2 + 0xf) = uVar9;
        *(undefined *)(iVar2 + 0x1c) = uVar9;
        *(undefined *)(iVar2 + 0x1d) = uVar9;
        *(undefined *)(iVar2 + 0x1e) = uVar9;
        *(undefined *)(iVar2 + 0x1f) = uVar9;
        *(undefined *)(iVar2 + 0x3d) = uVar9;
        *(undefined *)(iVar2 + 0x3e) = uVar9;
        *(undefined *)(iVar2 + 0x3f) = uVar9;
        *(undefined *)(iVar2 + 0x14) = 1;
        *(undefined *)(iVar2 + 0x15) = uVar9;
        *(undefined *)(iVar2 + 0x16) = uVar9;
        *(undefined *)(iVar2 + 0x17) = uVar9;
        *(undefined *)(iVar2 + 0x24) = uVar9;
        *(undefined *)(iVar2 + 0x25) = uVar9;
        *(undefined *)(iVar2 + 0x26) = uVar9;
        *(undefined *)(iVar2 + 0x27) = uVar9;
        iVar8 = *(int *)(param_1[1] + 0x18);
        *(undefined *)(iVar2 + 0x38) = 1;
        *(undefined *)(iVar2 + 0x2d) = 0;
        *(undefined *)(iVar2 + 0x2e) = 0;
        *(undefined *)(iVar2 + 0x39) = uVar9;
        *(bool *)(iVar2 + 0x2c) = iVar8 == 0;
        *(undefined *)(iVar2 + 0x3a) = uVar9;
        *(undefined *)(iVar2 + 0x2f) = 0;
        *(undefined *)(iVar2 + 0x3b) = uVar9;
        iVar2 = AudioAACENCfaacEncSetConfiguration(*ppuVar11,iVar2);
        if (iVar2 == 0) {
          return 0xfffffffe;
        }
        pcVar6 = ((char **)param_1[1])[1];
        iVar2 = AudioAACENCGetSRIndex(*(char **)param_1[1]);
        *(byte *)((int)ppuVar11 + 0x13) =
             *(byte *)((int)ppuVar11 + 0x13) & 0x3f | (byte)((int)pcVar6 << 6);
        *(byte *)((int)ppuVar11 + 0x12) =
             *(byte *)((int)ppuVar11 + 0x12) & 0xc2 | (byte)(iVar2 << 2) |
             (byte)((uint)((int)pcVar6 << 0x1d) >> 0x1f);
        param_1[3] = 1;
        goto LAB_00014eec;
      }
    }
    uVar5 = 0xffffffff;
  }
  else {
LAB_00014eec:
    if (*(int *)param_1[1] != 0) {
      coprocessor_function(0xb,6,5,in_cr2,in_cr2,in_cr1);
      coprocessor_function(0xb,6,5,in_cr1,in_cr2,in_cr1);
      *(int *)param_1[2] = SUB84(ROUND(1000.0 / (double)(longlong)*(int *)param_1[1]),0);
    }
    iVar2 = GetPcmDataSize(*param_1);
    sVar3 = *(int *)(param_1[1] + 4) * 0x800;
    if (iVar2 + *(int *)(param_1[1] + 4) * -0x800 < 0 != SBORROW4(iVar2,sVar3)) {
      if (*(int *)(param_1[2] + 0xc) != 5) {
        return 1;
      }
      if (*(int *)(param_1[2] + 8) == 0) {
        return 0xfffffffe;
      }
    }
    sVar3 = ReadPcmDataForEnc(ppuVar11 + 8,sVar3,*param_1);
    iVar8 = *param_1;
    iVar2 = *(int *)(iVar8 + 4) * 9;
    if (iVar2 + *(int *)(iVar8 + 0xc) * -10 < 0 != SBORROW4(iVar2,*(int *)(iVar8 + 0xc) * 10)) {
      if ((*ppuVar11)[0x19520] == 0) {
        ppuVar11 = (uint **)((int)ppuVar11 + 0x17);
        sVar3 = 9;
      }
      else {
        sVar3 = 0x10;
        ppuVar11 = ppuVar11 + 4;
      }
      memcpy(param_2,ppuVar11,sVar3);
      iVar2 = param_1[2];
      iVar8 = *param_1;
      *param_3 = sVar3;
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
      *(undefined4 *)(iVar8 + 0x18) = 1;
      return 0;
    }
    puVar12 = ppuVar11[2];
    puVar1 = *ppuVar11;
    *(undefined4 *)(iVar8 + 0x18) = 0;
    sVar4 = AudioAACENCfaacEncEncode(puVar1,(int)(ppuVar11 + 8),(int)sVar3 >> 1,param_2,puVar12);
    if (sVar4 == 0) {
      if (sVar3 == 0) {
        return 0xfffffffe;
      }
    }
    else {
      puVar1 = ppuVar11[3];
      *(int *)(param_1[2] + 8) = *(int *)(param_1[2] + 8) + 1;
      ppuVar11[3] = (uint *)((int)puVar1 + sVar4);
    }
    *param_3 = sVar4;
    uVar5 = 0;
  }
  return uVar5;
}



undefined4 AudioAACENCAACEncExit(int param_1)

{
  void *__ptr;
  
  AudioAACENCfaacEncClose(**(uint ***)(*(int *)(param_1 + 8) + 0x414));
  __ptr = *(void **)(*(int *)(param_1 + 8) + 0x414);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x414) = 0;
  }
  return 0;
}



undefined4 AudioAACENCAACEncInit(int param_1)

{
  void *__s;
  int iVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  undefined4 uStack40;
  undefined4 uStack36;
  undefined4 uStack32;
  int local_1c;
  
  local_1c = __stack_chk_guard;
  memcpy(&local_2c,&DAT_000259dc,0x10);
  __s = malloc(0x1020);
  if (__s == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    memset(__s,0,0x1020);
    uVar2 = 0;
    *(undefined4 *)((int)__s + 0x10) = local_2c;
    *(undefined4 *)((int)__s + 0x14) = uStack40;
    *(undefined4 *)((int)__s + 0x18) = uStack36;
    *(undefined4 *)((int)__s + 0x1c) = uStack32;
    iVar1 = *(int *)(param_1 + 8);
    *(void **)(iVar1 + 0x414) = __s;
    *(undefined4 *)(iVar1 + 0x410) = 0;
  }
  if (local_1c != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar2;
}



void AudioAACENCEncInit(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(0x1c);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[4] = AudioAACENCAACEncInit;
  puVar1[5] = AudioAACENCAACframeEnc;
  puVar1[6] = AudioAACENCAACEncExit;
  return;
}



undefined4 AudioAACENCfaacEncGetVersion(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &UNK_00026820;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 
    "FAAC - Freeware Advanced Audio Coder (http://www.audiocoding.com/)\n Copyright (C) 1999,2000,2001  Menno Bakker\n Copyright (C) 2002,2003  Krzysztof Nikiel\nThis software is based on the ISO MPEG-4 reference source code.\n"
    ;
  }
  return 0x68;
}



undefined4 AudioAACENCfaacEncGetDecoderSpecificInfo(uint *param_1,void **param_2,void **param_3)

{
  void *__s;
  void **ppvVar1;
  
  if ((param_1 == (uint *)0x0 || param_2 == (void **)0x0) || (param_3 == (void **)0x0)) {
    return 0xffffffff;
  }
  if (param_1[0x19518] == 1) {
    return 0xfffffffe;
  }
  *param_3 = (void *)0x2;
  __s = AudioAACENCAllocMemory(2);
  *param_2 = __s;
  if (__s == (void *)0x0) {
    return 0xfffffffd;
  }
  memset(__s,0,(size_t)*param_3);
  ppvVar1 = AudioAACENCOpenBitStream((int)param_1,*param_3,*param_2);
  PutBit((uint *)ppvVar1,param_1[0x19519],5,(uint)*(ushort *)(param_1 + 0x19519));
  PutBit((uint *)ppvVar1,param_1[2],4,(uint)*(ushort *)(param_1 + 2));
  PutBit((uint *)ppvVar1,*param_1,4,(uint)*(ushort *)param_1);
  AudioAACENCCloseBitStream((int)ppvVar1);
  return 0;
}



int AudioAACENCfaacEncGetCurrentConfiguration(int param_1)

{
  return param_1 + 0x65454;
}



// WARNING: Removing unreachable block (ram,0x00015cd0)
// WARNING: Removing unreachable block (ram,0x00015d18)
// WARNING: Removing unreachable block (ram,0x00015d24)
// WARNING: Removing unreachable block (ram,0x00015cec)
// WARNING: Removing unreachable block (ram,0x00015e84)
// WARNING: Removing unreachable block (ram,0x00015d10)
// WARNING: Removing unreachable block (ram,0x00015d5c)
// WARNING: Removing unreachable block (ram,0x00015d6c)
// WARNING: Removing unreachable block (ram,0x00015d70)
// WARNING: Removing unreachable block (ram,0x00015d74)
// WARNING: Removing unreachable block (ram,0x00015d78)
// WARNING: Removing unreachable block (ram,0x00015e64)

undefined4 AudioAACENCfaacEncSetConfiguration(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  undefined uVar11;
  undefined uVar12;
  undefined uVar13;
  undefined uVar14;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr8;
  undefined4 uVar15;
  double dVar16;
  int local_58;
  int iStack84;
  
  iVar8 = *(int *)(param_2 + 0x14);
  *(char *)(param_1 + 0x1951a) = (char)iVar8;
  *(char *)((int)param_1 + 0x65469) = (char)((uint)(iVar8 << 0x10) >> 0x18);
  *(char *)((int)param_1 + 0x6546a) = (char)((uint)(iVar8 << 8) >> 0x18);
  *(char *)((int)param_1 + 0x6546b) = (char)((uint)iVar8 >> 0x18);
  iVar8 = *(int *)(param_2 + 0x18);
  *(char *)(param_1 + 0x1951b) = (char)iVar8;
  *(char *)((int)param_1 + 0x6546d) = (char)((uint)(iVar8 << 0x10) >> 0x18);
  *(char *)((int)param_1 + 0x6546e) = (char)((uint)(iVar8 << 8) >> 0x18);
  *(char *)((int)param_1 + 0x6546f) = (char)((uint)iVar8 >> 0x18);
  iVar8 = *(int *)(param_2 + 0x1c);
  *(char *)(param_1 + 0x1951c) = (char)iVar8;
  *(char *)((int)param_1 + 0x65471) = (char)((uint)(iVar8 << 0x10) >> 0x18);
  *(char *)((int)param_1 + 0x65472) = (char)((uint)(iVar8 << 8) >> 0x18);
  *(char *)((int)param_1 + 0x65473) = (char)((uint)iVar8 >> 0x18);
  iVar8 = *(int *)(param_2 + 0x10);
  *(char *)(param_1 + 0x19519) = (char)iVar8;
  *(char *)((int)param_1 + 0x65465) = (char)((uint)(iVar8 << 0x10) >> 0x18);
  *(char *)((int)param_1 + 0x65466) = (char)((uint)(iVar8 << 8) >> 0x18);
  *(char *)((int)param_1 + 0x65467) = (char)((uint)iVar8 >> 0x18);
  iVar3 = *(int *)(param_2 + 0xc);
  *(char *)(param_1 + 0x19518) = (char)iVar3;
  *(char *)((int)param_1 + 0x65461) = (char)((uint)(iVar3 << 0x10) >> 0x18);
  *(char *)((int)param_1 + 0x65462) = (char)((uint)(iVar3 << 8) >> 0x18);
  *(char *)((int)param_1 + 0x65463) = (char)((uint)iVar3 >> 0x18);
  iVar4 = *(int *)(param_2 + 0x2c);
  *(char *)(param_1 + 0x19520) = (char)iVar4;
  *(char *)((int)param_1 + 0x65481) = (char)((uint)(iVar4 << 0x10) >> 0x18);
  *(char *)((int)param_1 + 0x65482) = (char)((uint)(iVar4 << 8) >> 0x18);
  *(char *)((int)param_1 + 0x65483) = (char)((uint)iVar4 >> 0x18);
  uVar2 = *(uint *)(param_2 + 0x38);
  *(char *)(param_1 + 0x19523) = (char)uVar2;
  *(char *)((int)param_1 + 0x6548d) = (char)((uVar2 << 0x10) >> 0x18);
  *(char *)((int)param_1 + 0x6548e) = (char)((uVar2 << 8) >> 0x18);
  *(char *)((int)param_1 + 0x6548f) = (char)(uVar2 >> 0x18);
  iVar4 = *(int *)(param_2 + 0x3c);
  *(char *)(param_1 + 0x19524) = (char)iVar4;
  *(char *)((int)param_1 + 0x65491) = (char)((uint)(iVar4 << 0x10) >> 0x18);
  *(char *)((int)param_1 + 0x65492) = (char)((uint)(iVar4 << 8) >> 0x18);
  *(char *)((int)param_1 + 0x65493) = (char)((uint)iVar4 >> 0x18);
  if ((((4 < uVar2) || ((1 << (uVar2 & 0xff) & 0x1aU) == 0)) || (iVar8 == 3)) ||
     ((iVar8 == 4 && (iVar3 != 0)))) {
    return 0;
  }
  AudioAACENCTnsInit(param_1);
  uVar2 = *(uint *)(param_2 + 0x20);
  uVar1 = AudioAACENCMaxBitrate(param_1[1]);
  if (uVar1 < uVar2) {
    return 0;
  }
  uVar2 = *(uint *)(param_2 + 0x20);
  if (uVar2 == 0) {
    uVar1 = *(uint *)(param_2 + 0x24);
    uVar5 = uVar2;
    uVar6 = uVar2;
    uVar7 = uVar2;
LAB_00015740:
    *(char *)(param_1 + 0x1951d) = (char)uVar5;
    *(char *)((int)param_1 + 0x65475) = (char)uVar7;
    *(char *)((int)param_1 + 0x65476) = (char)uVar2;
    *(char *)((int)param_1 + 0x65477) = (char)uVar6;
    if (uVar1 == 0) {
      uVar2 = *(uint *)(param_2 + 0x28);
      uVar1 = uVar2 * 0x78 + 4000;
      uVar12 = (undefined)uVar1;
      uVar14 = (undefined)(uVar1 >> 8);
      uVar13 = (undefined)(uVar1 >> 0x10);
      uVar11 = (undefined)(uVar1 >> 0x18);
      *(undefined *)(param_2 + 0x24) = uVar12;
      *(undefined *)(param_2 + 0x25) = uVar14;
      *(undefined *)(param_2 + 0x26) = uVar13;
      *(undefined *)(param_2 + 0x27) = uVar11;
      goto LAB_000157c0;
    }
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x24);
    if (uVar1 == 0) {
      coprocessor_function(0xb,6,5,in_cr1,in_cr1,in_cr0);
      *(undefined *)(param_2 + 0x28) = 100;
      *(undefined *)(param_2 + 0x29) = 0;
      *(undefined *)(param_2 + 0x2a) = 0;
      *(undefined *)(param_2 + 0x2b) = 0;
      coprocessor_function(0xb,6,5,in_cr2,in_cr2,in_cr1);
      coprocessor_function(0xb,6,1,in_cr1,in_cr8,in_cr1);
      uVar1 = 0;
      dVar16 = ROUND((double)(ulonglong)param_1[1] / 44100.0);
      uVar6 = SUB84(dVar16,0);
      *(undefined *)(param_2 + 0x25) = 0;
      *(undefined *)(param_2 + 0x26) = 0;
      *(undefined *)(param_2 + 0x24) = 0;
      *(undefined *)(param_2 + 0x27) = 0;
      uVar5 = uVar6 & 0xff;
      uVar7 = uVar6 >> 8;
      uVar2 = uVar6 >> 0x10;
      *(char *)(param_2 + 0x20) = (char)uVar5;
      uVar6 = uVar6 >> 0x18;
      *(char *)(param_2 + 0x21) = (char)((ulonglong)dVar16 >> 8);
      *(char *)(param_2 + 0x22) = (char)((ulonglong)dVar16 >> 0x10);
      *(char *)(param_2 + 0x23) = (char)((ulonglong)dVar16 >> 0x18);
      goto LAB_00015740;
    }
    *(char *)(param_1 + 0x1951d) = (char)uVar2;
    *(char *)((int)param_1 + 0x65475) = (char)(uVar2 >> 8);
    *(char *)((int)param_1 + 0x65476) = (char)(uVar2 >> 0x10);
    *(char *)((int)param_1 + 0x65477) = (char)(uVar2 >> 0x18);
  }
  uVar12 = (undefined)uVar1;
  uVar14 = (undefined)(uVar1 >> 8);
  uVar13 = (undefined)(uVar1 >> 0x10);
  uVar2 = *(uint *)(param_2 + 0x28);
  uVar11 = (undefined)(uVar1 >> 0x18);
LAB_000157c0:
  *(undefined *)(param_1 + 0x1951e) = uVar12;
  uVar7 = uVar1;
  if (uVar1 < 100) {
    uVar7 = 100;
  }
  *(undefined *)((int)param_1 + 0x65479) = uVar14;
  *(undefined *)((int)param_1 + 0x6547a) = uVar13;
  *(undefined *)((int)param_1 + 0x6547b) = uVar11;
  if (uVar1 < 100) {
    *(char *)(param_1 + 0x1951e) = (char)uVar7;
    *(undefined *)((int)param_1 + 0x65479) = 0;
    *(undefined *)((int)param_1 + 0x6547a) = 0;
    *(undefined *)((int)param_1 + 0x6547b) = 0;
  }
  uVar1 = param_1[1];
  if (uVar1 >> 1 < uVar7) {
    *(char *)(param_1 + 0x1951e) = (char)(uVar1 >> 1);
    *(char *)((int)param_1 + 0x65479) = (char)((uVar1 << 0xf) >> 0x18);
    *(char *)((int)param_1 + 0x6547a) = (char)((uVar1 << 7) >> 0x18);
    *(byte *)((int)param_1 + 0x6547b) = (byte)(uVar1 >> 0x19);
  }
  if (uVar2 < 0x1f5) {
    if (uVar2 < 10) {
      iVar8 = 10;
      *(undefined *)(param_2 + 0x28) = 10;
      *(undefined *)(param_2 + 0x29) = 0;
      *(undefined *)(param_2 + 0x2a) = 0;
      *(undefined *)(param_2 + 0x2b) = 0;
    }
    else {
      iVar8 = *(int *)(param_2 + 0x28);
    }
  }
  else {
    iVar8 = 500;
    *(undefined *)(param_2 + 0x28) = 0xf4;
    *(undefined *)(param_2 + 0x29) = 1;
    *(undefined *)(param_2 + 0x2a) = 0;
    *(undefined *)(param_2 + 0x2b) = 0;
  }
  *(char *)(param_1 + 0x1951f) = (char)iVar8;
  *(char *)((int)param_1 + 0x6547d) = (char)((uint)(iVar8 << 0x10) >> 0x18);
  *(char *)((int)param_1 + 0x6547e) = (char)((uint)(iVar8 << 8) >> 0x18);
  *(char *)((int)param_1 + 0x6547f) = (char)((uint)iVar8 >> 0x18);
  dVar16 = (double)(ulonglong)*(uint *)(param_2 + 0x28);
  local_58 = SUB84(dVar16,0);
  *(char *)(param_1 + 0x19568) = SUB81(dVar16,0);
  *(char *)((int)param_1 + 0x655a1) = (char)((uint)(local_58 << 0x10) >> 0x18);
  *(char *)((int)param_1 + 0x655a2) = (char)((uint)(local_58 << 8) >> 0x18);
  iStack84 = (int)((ulonglong)dVar16 >> 0x20);
  *(char *)((int)param_1 + 0x655a3) = (char)((ulonglong)dVar16 >> 0x18);
  *(char *)(param_1 + 0x19569) = (char)((ulonglong)dVar16 >> 0x20);
  *(char *)((int)param_1 + 0x655a5) = (char)((uint)(iStack84 << 0x10) >> 0x18);
  *(char *)((int)param_1 + 0x655a6) = (char)((uint)(iStack84 << 8) >> 0x18);
  *(char *)((int)param_1 + 0x655a7) = (char)((ulonglong)dVar16 >> 0x38);
  uVar15 = (**(code **)(param_1[0x19565] + 4))(param_1 + 0x1950f,param_1 + 0x19505,*param_1);
  if (*(int *)(param_2 + 0x34) != 0) {
    *(undefined *)(param_2 + 0x34) = 0;
    *(undefined *)(param_2 + 0x35) = 0;
    *(undefined *)(param_2 + 0x36) = 0;
    *(undefined *)(param_2 + 0x37) = 0;
  }
  iVar8 = 0;
  *(undefined *)(param_1 + 0x19522) = 0;
  *(undefined *)((int)param_1 + 0x65489) = 0;
  *(undefined *)((int)param_1 + 0x6548a) = 0;
  *(undefined *)((int)param_1 + 0x6548b) = 0;
  *(undefined *)(param_1 + 0x19565) = 0x30;
  *(undefined *)((int)param_1 + 0x65595) = 0;
  *(undefined *)((int)param_1 + 0x65596) = 3;
  *(undefined *)((int)param_1 + 0x65597) = 0;
  uVar2 = param_1[6];
  (*AudioAACENCpsymodel2._0_4_)
            (uVar15,param_1 + 0x1950f,param_1 + 0x19505,*param_1,param_1[1],uVar2 + 0xc,
             *(undefined4 *)(uVar2 + 4),uVar2 + 0xd8,*(undefined4 *)(uVar2 + 8));
  do {
    iVar3 = iVar8 + 0x10;
    iVar9 = iVar8 + 0x19524;
    iVar8 = iVar8 + 1;
    iVar4 = param_2 + iVar3 * 4;
    uVar14 = *(undefined *)(param_2 + iVar3 * 4);
    puVar10 = param_1 + iVar9;
    uVar13 = *(undefined *)(iVar4 + 3);
    iVar3 = CONCAT13(uVar13,CONCAT12(*(undefined *)(iVar4 + 2),
                                     CONCAT11(*(undefined *)(iVar4 + 1),uVar14)));
    *(undefined *)(puVar10 + 1) = uVar14;
    *(char *)((int)puVar10 + 5) = (char)((uint)(iVar3 << 0x10) >> 0x18);
    *(char *)((int)puVar10 + 6) = (char)((uint)(iVar3 << 8) >> 0x18);
    *(undefined *)((int)puVar10 + 7) = uVar13;
  } while (iVar8 != 0x40);
  return 1;
}



undefined4 AudioAACENCfaacEncClose(uint *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  (**(code **)(param_1[0x19565] + 4))(param_1 + 0x1950f,param_1 + 0x19505,*param_1);
  AudioAACENCFilterBankEnd(param_1);
  AudioAACENCLtpEnd(param_1);
  AudioAACENCAACQuantizeEnd((int)(param_1 + 0x17),*param_1);
  AudioAACENCHuffmanEnd((int)(param_1 + 0x17),*param_1);
  AudioAACENCfft_terminate((void **)(param_1 + 0x1956a));
  if (*param_1 != 0) {
    uVar3 = 0;
    do {
      puVar1 = param_1 + uVar3 + 6;
      if ((void *)puVar1[1] != (void *)0x0) {
        AudioAACENCFreeMemory((void *)puVar1[1]);
        *(undefined *)(puVar1 + 1) = 0;
        *(undefined *)((int)puVar1 + 5) = 0;
        *(undefined *)((int)puVar1 + 6) = 0;
        *(undefined *)((int)puVar1 + 7) = 0;
      }
      puVar1 = param_1 + uVar3 + 8;
      if ((void *)puVar1[1] != (void *)0x0) {
        AudioAACENCFreeMemory((void *)puVar1[1]);
        *(undefined *)(puVar1 + 1) = 0;
        *(undefined *)((int)puVar1 + 5) = 0;
        *(undefined *)((int)puVar1 + 6) = 0;
        *(undefined *)((int)puVar1 + 7) = 0;
      }
      puVar1 = param_1 + uVar3 + 10;
      if ((void *)puVar1[1] != (void *)0x0) {
        AudioAACENCFreeMemory((void *)puVar1[1]);
        *(undefined *)(puVar1 + 1) = 0;
        *(undefined *)((int)puVar1 + 5) = 0;
        *(undefined *)((int)puVar1 + 6) = 0;
        *(undefined *)((int)puVar1 + 7) = 0;
      }
      iVar2 = uVar3 + 0xc;
      uVar3 = uVar3 + 1;
      puVar1 = param_1 + iVar2;
      if ((void *)puVar1[1] != (void *)0x0) {
        AudioAACENCFreeMemory((void *)puVar1[1]);
        *(undefined *)(puVar1 + 1) = 0;
        *(undefined *)((int)puVar1 + 5) = 0;
        *(undefined *)((int)puVar1 + 6) = 0;
        *(undefined *)((int)puVar1 + 7) = 0;
      }
    } while (uVar3 < *param_1);
  }
  if ((void *)param_1[0x1a972] != (void *)0x0) {
    AudioAACENCFreeMemory((void *)param_1[0x1a972]);
    *(undefined *)(param_1 + 0x1a972) = 0;
    *(undefined *)((int)param_1 + 0x6a5c9) = 0;
    *(undefined *)((int)param_1 + 0x6a5ca) = 0;
    *(undefined *)((int)param_1 + 0x6a5cb) = 0;
  }
  AudioAACENCFreeMemory(param_1);
  return 0;
}



uint * AudioAACENCfaacEncOpen(char *param_1,int param_2,int *param_3,int *param_4)

{
  double dVar1;
  uint *__s;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr7;
  uint uVar13;
  double extraout_d7;
  
  *param_3 = param_2 << 10;
  *param_4 = param_2 * 0x300;
  __s = (uint *)AudioAACENCAllocMemory(0x6a5d0);
  puVar10 = __s;
  if (__s != (uint *)0x0) {
    memset(__s,0,0x6a5d0);
    pvVar2 = AudioAACENCAllocMemory(0x14);
    *(char *)(__s + 0x1a972) = (char)pvVar2;
    *(char *)((int)__s + 0x6a5c9) = (char)((uint)((int)pvVar2 << 0x10) >> 0x18);
    *(char *)((int)__s + 0x6a5ca) = (char)((uint)((int)pvVar2 << 8) >> 0x18);
    *(char *)((int)__s + 0x6a5cb) = (char)((uint)pvVar2 >> 0x18);
    if (pvVar2 != (void *)0x0) {
      *(char *)__s = (char)param_2;
      *(char *)((int)__s + 1) = (char)((uint)(param_2 << 0x10) >> 0x18);
      *(char *)((int)__s + 2) = (char)((uint)(param_2 << 8) >> 0x18);
      *(char *)(__s + 1) = (char)param_1;
      *(char *)((int)__s + 3) = (char)((uint)param_2 >> 0x18);
      *(char *)((int)__s + 5) = (char)((uint)((int)param_1 << 0x10) >> 0x18);
      *(char *)((int)__s + 6) = (char)((uint)((int)param_1 << 8) >> 0x18);
      *(char *)((int)__s + 7) = (char)((uint)param_1 >> 0x18);
      iVar3 = AudioAACENCGetSRIndex(param_1);
      *(undefined *)(__s + 4) = 0;
      *(char *)(__s + 2) = (char)iVar3;
      *(undefined *)((int)__s + 0x11) = 0;
      *(char *)((int)__s + 9) = (char)((uint)(iVar3 << 0x10) >> 0x18);
      *(char *)((int)__s + 10) = (char)((uint)(iVar3 << 8) >> 0x18);
      *(char *)((int)__s + 0xb) = (char)((uint)iVar3 >> 0x18);
      *(undefined *)((int)__s + 0x12) = 0;
      *(undefined *)((int)__s + 0x13) = 0;
      *(undefined *)(__s + 5) = 0;
      *(undefined *)((int)__s + 0x15) = 0;
      *(undefined *)((int)__s + 0x16) = 0;
      *(undefined *)((int)__s + 0x17) = 0;
      *(undefined *)(__s + 0x19515) = 0x68;
      *(undefined *)((int)__s + 0x65455) = 0;
      *(undefined *)((int)__s + 0x65456) = 0;
      *(undefined *)((int)__s + 0x65457) = 0;
      *(undefined *)(__s + 0x19516) = 0x20;
      *(undefined *)((int)__s + 0x65459) = 0x68;
      *(undefined *)((int)__s + 0x6545a) = 2;
      *(undefined *)((int)__s + 0x6545b) = 0;
      *(undefined *)(__s + 0x19517) = 0x28;
      *(undefined *)((int)__s + 0x6545d) = 0x68;
      *(undefined *)((int)__s + 0x6545e) = 2;
      *(undefined *)((int)__s + 0x6545f) = 0;
      *(undefined *)(__s + 0x19518) = 0;
      *(undefined *)((int)__s + 0x65461) = 0;
      *(undefined *)((int)__s + 0x65462) = 0;
      *(undefined *)((int)__s + 0x65463) = 0;
      *(undefined *)(__s + 0x19519) = 4;
      *(undefined *)((int)__s + 0x65465) = 0;
      *(undefined *)((int)__s + 0x65466) = 0;
      *(undefined *)((int)__s + 0x65467) = 0;
      *(undefined *)(__s + 0x1951a) = 1;
      *(undefined *)((int)__s + 0x65469) = 0;
      *(undefined *)((int)__s + 0x6546a) = 0;
      *(undefined *)((int)__s + 0x6546b) = 0;
      *(undefined *)(__s + 0x1951b) = 1;
      *(undefined *)((int)__s + 0x6546d) = 0;
      *(undefined *)((int)__s + 0x6546e) = 0;
      *(undefined *)((int)__s + 0x6546f) = 0;
      *(undefined *)(__s + 0x1951c) = 0;
      *(undefined *)((int)__s + 0x65471) = 0;
      *(undefined *)((int)__s + 0x65472) = 0;
      *(undefined *)((int)__s + 0x65473) = 0;
      *(undefined *)(__s + 0x1951d) = 0;
      *(undefined *)((int)__s + 0x65475) = 0;
      *(undefined *)((int)__s + 0x65476) = 0;
      *(undefined *)((int)__s + 0x65477) = 0;
      coprocessor_function(0xb,2,5,in_cr7,in_cr1,in_cr0);
      dVar1 = ROUND(extraout_d7);
      uVar13 = SUB84(dVar1,0);
      *(char *)(__s + 0x1951e) = SUB81(dVar1,0);
      *(char *)((int)__s + 0x65479) = (char)((uVar13 << 0x10) >> 0x18);
      *(char *)((int)__s + 0x6547a) = (char)((uVar13 << 8) >> 0x18);
      *(char *)((int)__s + 0x6547b) = (char)((ulonglong)dVar1 >> 0x18);
      if (16000 < uVar13) {
        *(undefined *)(__s + 0x1951e) = 0x80;
        *(undefined *)((int)__s + 0x65479) = 0x3e;
        *(undefined *)((int)__s + 0x6547a) = 0;
        *(undefined *)((int)__s + 0x6547b) = 0;
      }
      *(undefined *)(__s + 0x1951f) = 100;
      *(undefined *)((int)__s + 0x6547d) = 0;
      *(undefined *)((int)__s + 0x6547e) = 0;
      *(undefined *)((int)__s + 0x6547f) = 0;
      *(undefined *)(__s + 0x19521) = 0x50;
      *(undefined *)((int)__s + 0x65485) = 0xfc;
      *(undefined *)((int)__s + 0x65486) = 2;
      *(undefined *)((int)__s + 0x65487) = 0;
      *(undefined *)(__s + 0x19522) = 0;
      *(undefined *)((int)__s + 0x65489) = 0;
      *(undefined *)((int)__s + 0x6548a) = 0;
      *(undefined *)((int)__s + 0x6548b) = 0;
      *(undefined *)(__s + 0x19565) = 0x30;
      *(undefined *)((int)__s + 0x65595) = 0;
      *(undefined *)((int)__s + 0x65596) = 3;
      *(undefined *)((int)__s + 0x65597) = 0;
      *(undefined *)(__s + 0x19524) = 0;
      *(undefined *)((int)__s + 0x65491) = 0;
      *(undefined *)((int)__s + 0x65492) = 0;
      *(undefined *)((int)__s + 0x65493) = 0;
      iVar4 = 0;
      do {
        iVar12 = 0;
        puVar10 = __s + iVar4 + 0x19524;
        *(char *)(puVar10 + 1) = (char)iVar4;
        iVar6 = iVar4 + 1;
        *(char *)((int)puVar10 + 5) = (char)((uint)(iVar4 << 0x10) >> 0x18);
        *(char *)((int)puVar10 + 6) = (char)((uint)(iVar4 << 8) >> 0x18);
        *(char *)((int)puVar10 + 7) = (char)((uint)iVar4 >> 0x18);
        iVar4 = iVar6;
      } while (iVar6 != 0x40);
      puVar7 = &UNK_000259ec + iVar3 * 0x114;
      *(undefined *)(__s + 0x19520) = 1;
      *(undefined *)((int)__s + 0x65481) = 0;
      *(undefined *)((int)__s + 0x65482) = 0;
      *(undefined *)((int)__s + 0x65483) = 0;
      *(undefined *)(__s + 0x19523) = 1;
      *(undefined *)((int)__s + 0x6548d) = 0;
      *(undefined *)((int)__s + 0x6548e) = 0;
      *(undefined *)((int)__s + 0x6548f) = 0;
      *(char *)(__s + 6) = (char)puVar7;
      *(char *)((int)__s + 0x19) = (char)((uint)((int)puVar7 * 0x10000) >> 0x18);
      *(char *)((int)__s + 0x1a) = (char)((uint)((int)puVar7 * 0x100) >> 0x18);
      *(char *)((int)__s + 0x1b) = (char)((uint)puVar7 >> 0x18);
      if (param_2 != 0) {
        do {
          puVar11 = __s + iVar12 * 0xc9ee;
          *(undefined *)(puVar11 + 0x18) = 0;
          *(undefined *)((int)puVar11 + 0x61) = 0;
          *(undefined *)((int)puVar11 + 0x62) = 0;
          *(undefined *)((int)puVar11 + 99) = 0;
          *(undefined *)(puVar11 + 0x17) = 0;
          *(undefined *)((int)puVar11 + 0x5d) = 0;
          *(undefined *)((int)puVar11 + 0x5e) = 0;
          *(undefined *)((int)puVar11 + 0x5f) = 0;
          *(undefined *)(puVar11 + 0x19) = 2;
          *(undefined *)((int)puVar11 + 0x65) = 0;
          *(undefined *)((int)puVar11 + 0x66) = 0;
          *(undefined *)((int)puVar11 + 0x67) = 0;
          *(undefined *)(puVar11 + 0x9c) = 1;
          *(undefined *)((int)puVar11 + 0x271) = 0;
          *(undefined *)((int)puVar11 + 0x272) = 0;
          *(undefined *)((int)puVar11 + 0x273) = 0;
          *(undefined *)(puVar11 + 0x9d) = 1;
          *(undefined *)((int)puVar11 + 0x275) = 0;
          *(undefined *)((int)puVar11 + 0x276) = 0;
          *(undefined *)((int)puVar11 + 0x277) = 0;
          iVar3 = AudioAACENCGetMaxPredSfb(__s[2]);
          iVar4 = iVar12 + 6;
          iVar6 = iVar12 + 8;
          iVar8 = iVar12 + 10;
          iVar12 = iVar12 + 1;
          puVar10 = __s + iVar4;
          puVar5 = __s + iVar6;
          puVar9 = __s + iVar8;
          *(char *)(puVar11 + 0xac9f) = (char)iVar3;
          *(char *)((int)puVar11 + 0x2b27d) = (char)((uint)(iVar3 << 0x10) >> 0x18);
          *(char *)((int)puVar11 + 0x2b27e) = (char)((uint)(iVar3 << 8) >> 0x18);
          *(char *)((int)puVar11 + 0x2b27f) = (char)((uint)iVar3 >> 0x18);
          *(undefined *)(puVar10 + 1) = 0;
          *(undefined *)((int)puVar10 + 5) = 0;
          *(undefined *)((int)puVar10 + 6) = 0;
          *(undefined *)((int)puVar10 + 7) = 0;
          *(undefined *)(puVar5 + 1) = 0;
          *(undefined *)((int)puVar5 + 5) = 0;
          *(undefined *)((int)puVar5 + 6) = 0;
          *(undefined *)((int)puVar5 + 7) = 0;
          *(undefined *)(puVar9 + 1) = 0;
          *(undefined *)((int)puVar9 + 5) = 0;
          *(undefined *)((int)puVar9 + 6) = 0;
          *(undefined *)((int)puVar9 + 7) = 0;
        } while (iVar12 != param_2);
      }
      iVar3 = AudioAACENCfft_initialize((void **)(__s + 0x1956a));
      if (iVar3 == 0) {
        uVar13 = __s[6];
        iVar3 = (**(code **)__s[0x19565])
                          (__s + 0x1950f,__s + 0x19505,*__s,__s[1],uVar13 + 0xc,
                           *(undefined4 *)(uVar13 + 4),uVar13 + 0xd8,*(undefined4 *)(uVar13 + 8));
        if ((iVar3 == 0) && (iVar3 = AudioAACENCFilterBankInit(__s), iVar3 == 0)) {
          AudioAACENCTnsInit(__s);
          iVar3 = AudioAACENCLtpInit(__s);
          if (iVar3 == 0) {
            PredInit((int *)__s);
            iVar3 = AudioAACENCAACQuantizeInit((int)(__s + 0x17),*__s);
            if ((iVar3 == 0) && (iVar3 = AudioAACENCHuffmanInit((int)(__s + 0x17),*__s), iVar3 == 0)
               ) {
              return __s;
            }
          }
        }
      }
    }
    puVar10 = (uint *)0x0;
    AudioAACENCfaacEncClose(__s);
  }
  return puVar10;
}



int AudioAACENCfaacEncEncode(uint *param_1,int param_2,int param_3,void *param_4,void *param_5)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  void **ppvVar8;
  int iVar9;
  uint uVar10;
  float *pfVar11;
  int *piVar12;
  uint *puVar13;
  uint *puVar14;
  short *psVar15;
  float *pfVar16;
  uint uVar17;
  undefined4 *puVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint *puVar22;
  uint *puVar23;
  uint uVar24;
  uint *puVar25;
  uint uVar26;
  uint uVar27;
  bool bVar28;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr8;
  float fVar29;
  undefined local_98;
  
  iVar7 = param_1[4] + 1;
  uVar3 = *param_1;
  uVar17 = param_1[1];
  uVar4 = param_1[0x19519];
  uVar5 = param_1[0x19518];
  uVar24 = param_1[0x1951c];
  uVar6 = param_1[0x1951a];
  uVar26 = param_1[0x1951e];
  uVar27 = param_1[0x19524];
  *(char *)(param_1 + 4) = (char)iVar7;
  *(char *)((int)param_1 + 0x13) = (char)((uint)iVar7 >> 0x18);
  *(char *)((int)param_1 + 0x11) = (char)((uint)(iVar7 * 0x10000) >> 0x18);
  *(char *)((int)param_1 + 0x12) = (char)((uint)(iVar7 * 0x100) >> 0x18);
  uVar19 = CONCAT13(*(undefined *)((int)param_1 + 0x17),*(undefined3 *)(param_1 + 5));
  if (param_3 == 0) {
    uVar19 = uVar19 + 1;
    *(char *)(param_1 + 5) = (char)uVar19;
    *(char *)((int)param_1 + 0x15) = (char)(uVar19 * 0x10000 >> 0x18);
    *(char *)((int)param_1 + 0x16) = (char)(uVar19 * 0x100 >> 0x18);
    *(char *)((int)param_1 + 0x17) = (char)(uVar19 >> 0x18);
  }
  if (4 < uVar19) {
    return 0;
  }
  puVar23 = param_1 + 0x193f3;
  AudioAACENCGetChannelInfo(puVar23,uVar3,param_1[0x1951b]);
  if (uVar3 != 0) {
    uVar19 = 0;
    do {
      while( true ) {
        puVar25 = param_1 + uVar19 + 6;
        pfVar11 = (float *)puVar25[1];
        if (pfVar11 == (float *)0x0) {
          pfVar11 = (float *)AudioAACENCAllocMemory(0x1000);
          local_98 = SUB41(pfVar11,0);
          *(undefined *)(puVar25 + 1) = local_98;
          *(char *)((int)puVar25 + 5) = (char)((uint)pfVar11 >> 8);
          *(char *)((int)puVar25 + 6) = (char)((uint)pfVar11 >> 0x10);
          *(char *)((int)puVar25 + 7) = (char)((uint)pfVar11 >> 0x18);
          if (pfVar11 == (float *)0x0) {
            return -1;
          }
        }
        else {
          local_98 = SUB41(pfVar11,0);
        }
        puVar13 = param_1 + uVar19 + 6;
        puVar25 = param_1 + uVar19 + 8;
        puVar14 = param_1 + uVar19 + 10;
        puVar22 = param_1 + uVar19 + 0xc;
        uVar21 = puVar25[1];
        *(char *)(puVar13 + 1) = (char)uVar21;
        *(char *)((int)puVar13 + 5) = (char)((uVar21 << 0x10) >> 0x18);
        *(char *)((int)puVar13 + 6) = (char)((uVar21 << 8) >> 0x18);
        *(char *)((int)puVar13 + 7) = (char)(uVar21 >> 0x18);
        uVar21 = puVar14[1];
        *(char *)(puVar25 + 1) = (char)uVar21;
        *(char *)((int)puVar25 + 5) = (char)((uVar21 << 0x10) >> 0x18);
        *(char *)((int)puVar25 + 6) = (char)((uVar21 << 8) >> 0x18);
        *(char *)((int)puVar25 + 7) = (char)(uVar21 >> 0x18);
        uVar21 = puVar22[1];
        *(char *)(puVar14 + 1) = (char)uVar21;
        *(char *)((int)puVar14 + 6) = (char)((uVar21 << 8) >> 0x18);
        *(char *)((int)puVar14 + 5) = (char)((uVar21 << 0x10) >> 0x18);
        *(char *)((int)puVar14 + 7) = (char)(uVar21 >> 0x18);
        *(undefined *)(puVar22 + 1) = local_98;
        *(char *)((int)puVar22 + 5) = (char)((uint)pfVar11 >> 8);
        *(char *)((int)puVar22 + 6) = (char)((uint)pfVar11 >> 0x10);
        *(char *)((int)puVar22 + 7) = (char)((uint)pfVar11 >> 0x18);
        iVar7 = param_3;
        if (param_3 != 0) break;
        do {
          *(undefined4 *)((int)pfVar11 + iVar7) = 0;
          iVar7 = iVar7 + 4;
        } while (iVar7 != 0x1000);
LAB_0001718c:
        uVar19 = uVar19 + 1;
        if (uVar19 == uVar3) goto LAB_000171a0;
      }
      uVar10 = __aeabi_uidiv(param_3,uVar3);
      uVar21 = param_1[0x19523];
      if (uVar21 == 3) {
        if (uVar10 != 0) {
          uVar21 = 0;
          piVar12 = (int *)(param_2 + param_1[uVar19 + 0x19525] * 4);
          do {
            uVar21 = uVar21 + 1;
            coprocessor_function(0xb,6,4,in_cr0,in_cr0,in_cr8);
            *pfVar11 = SUB84(ROUND((double)(longlong)*piVar12),0);
            pfVar11 = pfVar11 + 1;
            piVar12 = piVar12 + uVar3;
          } while (uVar21 != uVar10);
          goto LAB_000175c4;
        }
      }
      else {
        if (uVar21 == 4) {
          if (uVar10 != 0) {
            uVar21 = 0;
            pfVar16 = (float *)(param_2 + param_1[uVar19 + 0x19525] * 4);
            do {
              fVar29 = *pfVar16;
              uVar21 = uVar21 + 1;
              pfVar16 = pfVar16 + uVar3;
              *pfVar11 = ROUND(fVar29);
              pfVar11 = pfVar11 + 1;
            } while (uVar21 != uVar10);
            goto LAB_000175c4;
          }
        }
        else {
          if (uVar21 != 1) {
            return -1;
          }
          if (uVar10 != 0) {
            uVar21 = 0;
            psVar15 = (short *)(param_2 + param_1[uVar19 + 0x19525] * 2);
            do {
              uVar21 = uVar21 + 1;
              *pfVar11 = (float)(int)*psVar15;
              psVar15 = psVar15 + uVar3;
              pfVar11 = pfVar11 + 1;
            } while (uVar21 != uVar10);
LAB_000175c4:
            if (0x3ff < uVar10) goto LAB_0001718c;
            pfVar11 = (float *)param_1[uVar19 + 0xd];
          }
        }
      }
      pfVar11 = pfVar11 + uVar10;
      do {
        uVar10 = uVar10 + 1;
        *pfVar11 = 0.0;
        pfVar11 = pfVar11 + 1;
      } while (uVar10 < 0x400);
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar3);
  }
LAB_000171a0:
  if (param_1[4] < 4) {
    return 0;
  }
  puVar25 = param_1 + 0x17;
  if (uVar27 == 1) {
    if (uVar3 != 0) {
      uVar19 = 0;
      do {
        uVar27 = uVar19 + 1;
        param_1[uVar19 * 0xc9ee + 0x19] = 0;
        uVar19 = uVar27;
      } while (uVar27 != uVar3);
      goto LAB_00017754;
    }
  }
  else {
    if (uVar27 == 2) {
      if (uVar3 != 0) {
        uVar19 = 0;
        do {
          uVar27 = uVar19 + 1;
          param_1[uVar19 * 0xc9ee + 0x19] = 2;
          uVar19 = uVar27;
        } while (uVar27 != uVar3);
        goto LAB_00017754;
      }
    }
    else {
      if (uVar3 != 0) {
LAB_00017754:
        uVar19 = 0;
        do {
          puVar14 = param_1 + uVar19 + 0x12;
          AudioAACENCFilterBank
                    ((int)param_1,(int)(param_1 + uVar19 * 0xc9ee + 0x17),
                     (void *)param_1[uVar19 + 7],(int *)puVar14[1],(void *)param_1[uVar19 + 0x15],0)
          ;
          if ((param_1 + uVar19 * 0xc9ee)[0x19] == 2) {
            iVar7 = 0;
            do {
              iVar9 = puVar14[1] + iVar7;
              iVar7 = iVar7 + 0x200;
              AudioAACENCspecFilter(iVar9,uVar17,uVar26,0x80);
            } while (iVar7 != 0x1000);
          }
          else {
            AudioAACENCspecFilter(puVar14[1],uVar17,uVar26,0x400);
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 < uVar3);
        if (uVar3 != 0) {
          uVar19 = 0;
          do {
            puVar14 = param_1 + uVar19 * 0xc9ee;
            uVar26 = puVar14[0x19];
            param_1[uVar19 * 0x89 + 0x193fb] = 0;
            uVar17 = param_1[6];
            if (uVar26 == 2) {
              uVar27 = *(uint *)(uVar17 + 8);
              puVar14[0x9c] = 1;
              uVar26 = 0;
              puVar14[0x9d] = 8;
              puVar14[0xa5] = uVar27;
              puVar14[0xa6] = uVar27;
              puVar14[0x9e] = 0;
              puVar14[0x9f] = 0;
              puVar14[0xa0] = 0;
              puVar14[0xa1] = 0;
              puVar14[0xa2] = 0;
              puVar14[0xa3] = 0;
              puVar14[0xa4] = 0;
              if (0 < (int)uVar27) {
                puVar13 = puVar14 + 0xa6;
                piVar12 = (int *)(uVar17 + 0xd4);
                uVar17 = 0;
                do {
                  uVar17 = uVar17 + 1;
                  piVar12 = piVar12 + 1;
                  iVar7 = *piVar12;
                  puVar13 = puVar13 + 1;
                  *puVar13 = uVar26;
                  uVar26 = uVar26 + iVar7;
                } while (uVar17 != uVar27);
              }
            }
            else {
              uVar27 = *(uint *)(uVar17 + 4);
              uVar26 = 0;
              puVar14[0x9c] = 1;
              puVar14[0x9d] = 1;
              puVar14[0xa5] = uVar27;
              puVar14[0xa6] = uVar27;
              if (0 < (int)uVar27) {
                puVar13 = puVar14 + 0xa6;
                piVar12 = (int *)(uVar17 + 8);
                uVar17 = 0;
                do {
                  uVar17 = uVar17 + 1;
                  piVar12 = piVar12 + 1;
                  iVar7 = *piVar12;
                  puVar13 = puVar13 + 1;
                  *puVar13 = uVar26;
                  uVar26 = uVar26 + iVar7;
                } while (uVar17 != uVar27);
              }
            }
            uVar19 = uVar19 + 1;
            puVar14[uVar27 + 0xa7] = uVar26;
          } while (uVar19 != uVar3);
          uVar19 = 0;
          if (uVar24 != 0) {
            uVar24 = 1;
          }
          do {
            puVar14 = param_1 + uVar19 * 0xc9ee;
            if (param_1[uVar19 * 0x89 + 0x193fa] == 0) {
              uVar17 = uVar24 & 1;
            }
            else {
              uVar17 = 0;
            }
            if (uVar17 == 0) {
              puVar14[0x229] = 0;
            }
            else {
              AudioAACENCTnsEncode
                        (puVar14 + 0x229,puVar14[0xa5],puVar14[0xa5],puVar14[0x19],
                         (int)(puVar14 + 0xa7),param_1[uVar19 + 0x13]);
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 != uVar3);
          if (uVar4 == 4) {
            uVar19 = 0;
            do {
              puVar14 = param_1 + uVar19 * 0xc9ee;
              if (puVar14[0x229] == 0) {
                puVar13 = (uint *)0x0;
              }
              else {
                puVar13 = (uint *)(uVar24 & 1);
              }
              puVar22 = puVar14 + 0x229;
              if (puVar13 == (uint *)0x0) {
                puVar22 = puVar13;
              }
              if (((param_1 + uVar19 * 0x89)[0x193f4] == 0) ||
                 ((param_1 + uVar19 * 0x89)[0x193fa] != 0)) {
LAB_000181e0:
                puVar14[0x1095] = 0;
              }
              else {
                iVar7 = 1 - uVar5;
                if (1 < uVar5) {
                  iVar7 = 0;
                }
                if (puVar14[0x19] == 2) {
                  iVar7 = 0;
                }
                if (iVar7 == 0) goto LAB_000181e0;
                AudioAACENCLtpEncode
                          (param_1,(int)(puVar14 + 0x17),(int *)(puVar14 + 0x1001),(int *)puVar22,
                           (double *)param_1[uVar19 + 0x13]);
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 != uVar3);
LAB_000179d4:
            uVar19 = 0;
            do {
              uVar17 = uVar19 + 1;
              param_1[uVar19 * 0xc9ee + 0xaca0] = 0;
              uVar19 = uVar17;
            } while (uVar17 != uVar3);
          }
          else {
            uVar19 = 0;
            do {
              uVar17 = uVar19 + 1;
              param_1[uVar19 * 0xc9ee + 0x1095] = 0;
              uVar19 = uVar17;
            } while (uVar17 != uVar3);
            if (uVar4 != 1) goto LAB_000179d4;
            uVar19 = 0;
            do {
              puVar14 = param_1 + uVar19 * 0xc9ee;
              if (param_1[uVar19 * 0x89 + 0x193fa] == 0) {
                uVar17 = puVar14[0xac9f];
                if ((int)puVar14[0xa6] <= (int)uVar17) {
                  uVar17 = puVar14[0xa6];
                }
                if (puVar14[0x19] == 2) {
                  piVar12 = (int *)(param_1[6] + 0xd8);
                }
                else {
                  piVar12 = (int *)(param_1[6] + 0xc);
                }
                PredCalcPrediction((double *)
                                   CONCAT13(*(undefined *)((int)(param_1 + uVar19 + 0x12) + 7),
                                            *(undefined3 *)(param_1 + uVar19 + 0x12 + 1)),
                                   puVar14[0x228],puVar14[0x19],uVar17,piVar12,(int)puVar25,
                                   (int)puVar23,uVar19);
              }
              else {
                puVar14[0xaca0] = 0;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 != uVar3);
          }
          uVar19 = 0;
          do {
            puVar14 = param_1 + uVar19 * 0xc9ee;
            if (puVar14[0x19] == 2) {
              AudioAACENCSortForGrouping
                        ((int)(puVar14 + 0x17),param_1 + uVar19 * 5 + 0x19505,
                         param_1 + uVar19 * 0x89 + 0x193f3,param_1[6] + 0xd8,param_1[uVar19 + 0x13])
              ;
            }
            AudioAACENCCalcAvgEnrg((int)(puVar14 + 0x17),(int *)param_1[uVar19 + 0x13]);
            iVar7 = uVar19 * 0x89;
            uVar19 = uVar19 + 1;
            if (((param_1 + iVar7)[0x193f8] == 0) && ((param_1 + iVar7)[0x193fa] != 0)) {
              puVar14[0xa5] = 3;
              puVar14[0xa6] = 3;
            }
          } while (uVar19 != uVar3);
          AudioAACENCMSEncode((int)puVar25,(int)puVar23,(int)(param_1 + 0x13),uVar3,uVar6);
          uVar19 = 0;
          do {
            uVar17 = uVar19 + 1;
            AudioAACENCCalcAvgEnrg
                      ((int)(param_1 + uVar19 * 0xc9ee + 0x17),(int *)param_1[uVar19 + 0x13]);
            uVar19 = uVar17;
          } while (uVar17 != uVar3);
          uVar19 = 0;
          do {
            puVar14 = param_1 + uVar19 * 0xc9ee;
            cVar2 = (char)uVar19;
            cVar1 = (char)param_1;
            if (puVar14[0x19] == 2) {
              AudioAACENCAACQuantize
                        ((int)(puVar14 + 0x17),cVar1 + cVar2 * '\x14' + '\x14',
                         cVar2 * '$' + cVar1 + -0x34,(char)param_1[6] + -0x28,
                         (char)*(undefined4 *)(param_1[6] + 8),param_1[uVar19 + 0x13],
                         param_1 + 0x19566);
            }
            else {
              AudioAACENCAACQuantize
                        ((int)(puVar14 + 0x17),cVar1 + cVar2 * '\x14' + '\x14',
                         cVar2 * '$' + cVar1 + -0x34,(char)param_1[6] + '\f',
                         (char)*(undefined4 *)(param_1[6] + 4),param_1[uVar19 + 0x13],
                         param_1 + 0x19566);
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 != uVar3);
          uVar19 = 0;
          do {
            puVar14 = param_1 + uVar19 * 0x89;
            if (((puVar14[0x193f4] != 0) && (puVar14[0x193f8] != 0)) &&
               (puVar13 = param_1 + uVar19 * 0xc9ee, puVar14[0x193f5] != 0)) {
              uVar17 = puVar13[0xa5];
              puVar14 = param_1 + puVar14[0x193f6] * 0xc9ee;
              if ((int)uVar17 < (int)puVar14[0xa5]) {
                uVar17 = puVar14[0xa5];
              }
              puVar14[0xa5] = uVar17;
              puVar14[0xa6] = uVar17;
              puVar13[0xa5] = uVar17;
              puVar13[0xa6] = uVar17;
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 != uVar3);
          uVar19 = 0;
          do {
            puVar14 = param_1 + uVar19 * 0xc9ee;
            if (puVar14[0x19] == 2) {
              iVar7 = 0x400;
              puVar18 = (undefined4 *)(puVar14[0x228] - 8);
              do {
                iVar7 = iVar7 + -1;
                puVar18[2] = 0;
                puVar18[3] = 0;
                puVar18 = puVar18 + 2;
              } while (iVar7 != 0);
            }
            else {
              if (puVar14[0x229] == 0) {
                puVar13 = (uint *)0x0;
              }
              else {
                puVar13 = (uint *)(uVar24 & 1);
              }
              bVar28 = puVar13 != (uint *)0x0;
              if (bVar28) {
                puVar13 = puVar14 + 0x227;
              }
              if (bVar28) {
                puVar13 = puVar13 + 2;
              }
              if (uVar4 == 4 && param_1[uVar19 * 0x89 + 0x193fa] == 0) {
                AudioAACENCLtpReconstruct
                          ((int)(puVar14 + 0x17),(int)(puVar14 + 0x1001),(double *)puVar14[0x228]);
                if (puVar13 != (uint *)0x0) {
                  AudioAACENCTnsDecodeFilterOnly
                            ((int *)(puVar14 + 0x229),puVar14[0xa6],puVar14[0xa5],puVar14[0x19],
                             (int)(puVar14 + 0xa7),puVar14[0x228]);
                }
                AudioAACENCIFilterBank
                          (param_1,(int)(puVar14 + 0x17),(void *)puVar14[0x228],
                           (void *)puVar14[0x1099],(void *)puVar14[0x109a],0);
                AudioAACENCLtpUpdate
                          ((int)(puVar14 + 0x1001),(undefined4 *)puVar14[0x1099],
                           (undefined4 *)puVar14[0x109a],0x400);
              }
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 != uVar3);
          goto LAB_00017204;
        }
      }
    }
  }
  AudioAACENCMSEncode((int)puVar25,(int)puVar23,(int)(param_1 + 0x13),uVar3,uVar6);
LAB_00017204:
  ppvVar8 = AudioAACENCOpenBitStream((int)param_1,param_5,param_4);
  AudioAACENCWriteBitstream(param_1,puVar25,puVar23,(uint *)ppvVar8,uVar3);
  iVar7 = AudioAACENCCloseBitStream((int)ppvVar8);
  if (param_1[0x1951d] == 0) {
    return iVar7;
  }
  iVar9 = __aeabi_uidiv(param_1[0x1951d] * uVar3 * 0x400,param_1[1]);
  iVar9 = iVar7 * 8 - iVar9;
  iVar20 = param_1[0x1a970] + iVar9;
  *(char *)(param_1 + 0x1a970) = (char)iVar20;
  *(char *)((int)param_1 + 0x6a5c1) = (char)((uint)(iVar20 * 0x10000) >> 0x18);
  *(char *)((int)param_1 + 0x6a5c2) = (char)((uint)(iVar20 * 0x100) >> 0x18);
  *(char *)((int)param_1 + 0x6a5c3) = (char)((uint)iVar20 >> 0x18);
  coprocessor_function(0xb,6,5,in_cr0,in_cr2,in_cr0);
  if (iVar9 < 1) {
    if (iVar9 == 0) {
      return iVar7;
    }
    if (-1 < iVar9) {
      return iVar7;
    }
  }
  else {
    if (iVar9 < 1) {
      return iVar7;
    }
  }
  uVar19 = param_1[0x19568];
  uVar3 = param_1[0x19569];
  coprocessor_function(0xb,6,4,in_cr1,in_cr1,in_cr3);
  *(char *)(param_1 + 0x19568) = (char)uVar19;
  *(char *)((int)param_1 + 0x655a1) = (char)((uVar19 << 0x10) >> 0x18);
  *(char *)((int)param_1 + 0x655a2) = (char)((uVar19 << 8) >> 0x18);
  *(char *)((int)param_1 + 0x655a3) = (char)(uVar19 >> 0x18);
  *(char *)(param_1 + 0x19569) = (char)uVar3;
  *(char *)((int)param_1 + 0x655a5) = (char)((uVar3 << 0x10) >> 0x18);
  *(char *)((int)param_1 + 0x655a6) = (char)((uVar3 << 8) >> 0x18);
  *(char *)((int)param_1 + 0x655a7) = (char)(uVar3 >> 0x18);
  if (0 < iVar9) {
    *(undefined *)(param_1 + 0x19568) = 0;
    *(undefined *)((int)param_1 + 0x655a1) = 0;
    *(undefined *)((int)param_1 + 0x655a2) = 0;
    *(undefined *)((int)param_1 + 0x655a3) = 0;
    *(undefined *)(param_1 + 0x19569) = 0;
    *(undefined *)((int)param_1 + 0x655a5) = 0xc0;
    *(undefined *)((int)param_1 + 0x655a6) = 0x72;
    *(undefined *)((int)param_1 + 0x655a7) = 0x40;
    return iVar7;
  }
  if (-1 >= iVar9) {
    *(undefined *)(param_1 + 0x19568) = 0;
    *(undefined *)((int)param_1 + 0x655a1) = 0;
    *(undefined *)((int)param_1 + 0x655a2) = 0;
    *(undefined *)((int)param_1 + 0x655a3) = 0;
    *(undefined *)(param_1 + 0x19569) = 0;
    *(undefined *)((int)param_1 + 0x655a5) = 0;
    *(undefined *)((int)param_1 + 0x655a6) = 0x49;
    *(undefined *)((int)param_1 + 0x655a7) = 0x40;
    return iVar7;
  }
  return iVar7;
}



int FUN_000181f8(uint param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
  iVar1 = iVar5 >> 4;
  if (iVar1 < 1) {
    iVar1 = 8;
    iVar4 = -0x10;
    iVar6 = 3;
  }
  else {
    uVar3 = 0xffffffff;
    do {
      uVar2 = uVar3;
      iVar1 = iVar1 >> 1;
      uVar3 = uVar2 + 1;
    } while (iVar1 != 0);
    iVar1 = 1 << (uVar2 + 5 & 0xff);
    iVar6 = uVar3 * 2 + 5;
    iVar4 = (1 << (uVar3 & 0xff)) + -1 << (uVar2 + 6 & 0xff);
  }
  *param_2 = iVar6;
  return (iVar5 + iVar4) - iVar1;
}



void AudioAACENCHuffmanEnd(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    if (*(void **)(param_1 + 0x83c) != (void *)0x0) {
      AudioAACENCFreeMemory(*(void **)(param_1 + 0x83c));
      *(undefined4 *)(param_1 + 0x83c) = 0;
    }
    if (*(void **)(param_1 + 0x840) != (void *)0x0) {
      AudioAACENCFreeMemory(*(void **)(param_1 + 0x840));
      *(undefined4 *)(param_1 + 0x840) = 0;
    }
    param_1 = param_1 + 0x327b8;
  } while (iVar1 != param_2);
  return;
}



undefined4 AudioAACENCHuffmanInit(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar3 = 0;
  iVar2 = param_1;
  while( true ) {
    iVar3 = iVar3 + 1;
    pvVar1 = AudioAACENCAllocMemory(0x5000);
    *(void **)(iVar2 + 0x83c) = pvVar1;
    if (pvVar1 == (void *)0x0) break;
    pvVar1 = AudioAACENCAllocMemory(0x5000);
    *(void **)(iVar2 + 0x840) = pvVar1;
    iVar2 = iVar2 + 0x327b8;
    if (pvVar1 == (void *)0x0) break;
    if (iVar3 == param_2) {
      return 0;
    }
  }
  AudioAACENCHuffmanEnd(param_1,param_2);
  return 0xffffffff;
}



int AudioAACENCOutputBits(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int local_2c [2];
  
  iVar13 = *(int *)(param_1 + 0x83c);
  iVar14 = *(int *)(param_1 + 0x840);
  iVar11 = *(int *)(param_1 + 0x638);
  switch(param_2) {
  case 0:
    goto LAB_000184d8;
  case 1:
    iVar12 = param_4 + param_5;
    if ((int)param_4 < iVar12) {
      piVar8 = (int *)(param_3 + param_4 * 4);
      iVar18 = 0;
      uVar9 = param_4;
      puVar16 = (uint *)(iVar13 + iVar11 * 4);
      puVar15 = (uint *)(iVar14 + iVar11 * 4);
      do {
        iVar13 = *piVar8;
        uVar9 = uVar9 + 4;
        piVar1 = piVar8 + 1;
        piVar2 = piVar8 + 2;
        piVar3 = piVar8 + 3;
        piVar8 = piVar8 + 4;
        iVar13 = (iVar13 * 0x1b + *piVar1 * 9 + *piVar2 * 3 + *piVar3 + 0x28) * 4;
        uVar4 = *(ushort *)(huff1 + iVar13);
        iVar18 = iVar18 + (uint)uVar4;
        *puVar16 = (uint)*(ushort *)(huff1 + iVar13 + 2);
        *puVar15 = (uint)uVar4;
        puVar16 = puVar16 + 1;
        puVar15 = puVar15 + 1;
      } while ((int)uVar9 < iVar12);
      iVar11 = iVar11 + 1 + (~param_4 + iVar12 >> 2);
      goto LAB_00018594;
    }
    goto LAB_00018cb0;
  case 2:
    iVar18 = param_4 + param_5;
    if ((int)param_4 < iVar18) {
      piVar8 = (int *)(param_3 + param_4 * 4);
      iVar12 = 0;
      uVar9 = param_4;
      puVar16 = (uint *)(iVar13 + iVar11 * 4);
      puVar15 = (uint *)(iVar14 + iVar11 * 4);
      do {
        iVar13 = *piVar8;
        uVar9 = uVar9 + 4;
        piVar1 = piVar8 + 1;
        piVar2 = piVar8 + 2;
        piVar3 = piVar8 + 3;
        piVar8 = piVar8 + 4;
        iVar13 = (iVar13 * 0x1b + *piVar1 * 9 + *piVar2 * 3 + *piVar3 + 0x28) * 4;
        uVar4 = *(ushort *)(huff2 + iVar13);
        iVar12 = iVar12 + (uint)uVar4;
        *puVar16 = (uint)*(ushort *)(huff2 + iVar13 + 2);
        *puVar15 = (uint)uVar4;
        puVar16 = puVar16 + 1;
        puVar15 = puVar15 + 1;
      } while ((int)uVar9 < iVar18);
      iVar11 = iVar11 + 1 + (~param_4 + iVar18 >> 2);
      break;
    }
    goto LAB_00018ca8;
  case 3:
    iVar18 = param_4 + param_5;
    iVar12 = 0;
    if ((int)param_4 < iVar18) {
      piVar8 = (int *)(param_3 + param_4 * 4);
      do {
        iVar7 = *piVar8;
        iVar5 = 0;
        iVar10 = piVar8[1];
        if (iVar7 < 0) {
          iVar7 = -iVar7;
        }
        iVar17 = piVar8[2];
        if (iVar10 < 0) {
          iVar10 = -iVar10;
        }
        iVar19 = piVar8[3];
        if (iVar17 < 0) {
          iVar17 = -iVar17;
        }
        if (iVar19 < 0) {
          iVar19 = -iVar19;
        }
        iVar7 = (iVar7 * 0x1b + iVar10 * 9 + iVar17 * 3 + iVar19) * 4;
        uVar4 = *(ushort *)(huff3 + iVar7);
        iVar12 = iVar12 + (uint)uVar4;
        *(uint *)(iVar13 + iVar11 * 4) = (uint)*(ushort *)(huff3 + iVar7 + 2);
        *(uint *)(iVar14 + iVar11 * 4) = (uint)uVar4;
        iVar11 = iVar11 + 1;
        do {
          if (*(int *)((int)piVar8 + iVar5) < 1) {
            if (*(int *)((int)piVar8 + iVar5) != 0) {
              *(undefined4 *)(iVar13 + iVar11 * 4) = 1;
              iVar12 = iVar12 + 1;
              *(undefined4 *)(iVar14 + iVar11 * 4) = 1;
              iVar11 = iVar11 + 1;
            }
          }
          else {
            *(undefined4 *)(iVar13 + iVar11 * 4) = 0;
            iVar12 = iVar12 + 1;
            *(undefined4 *)(iVar14 + iVar11 * 4) = 1;
            iVar11 = iVar11 + 1;
          }
          iVar5 = iVar5 + 4;
        } while (iVar5 != 0x10);
        param_4 = param_4 + 4;
        piVar8 = piVar8 + 4;
      } while ((int)param_4 < iVar18);
    }
    break;
  case 4:
    iVar18 = param_4 + param_5;
    iVar12 = 0;
    if ((int)param_4 < iVar18) {
      piVar8 = (int *)(param_3 + param_4 * 4);
      do {
        iVar7 = *piVar8;
        iVar5 = 0;
        iVar10 = piVar8[1];
        if (iVar7 < 0) {
          iVar7 = -iVar7;
        }
        iVar17 = piVar8[2];
        if (iVar10 < 0) {
          iVar10 = -iVar10;
        }
        iVar19 = piVar8[3];
        if (iVar17 < 0) {
          iVar17 = -iVar17;
        }
        if (iVar19 < 0) {
          iVar19 = -iVar19;
        }
        iVar7 = (iVar7 * 0x1b + iVar10 * 9 + iVar17 * 3 + iVar19) * 4;
        uVar4 = *(ushort *)(huff4 + iVar7);
        iVar12 = iVar12 + (uint)uVar4;
        *(uint *)(iVar13 + iVar11 * 4) = (uint)*(ushort *)(huff4 + iVar7 + 2);
        *(uint *)(iVar14 + iVar11 * 4) = (uint)uVar4;
        iVar11 = iVar11 + 1;
        do {
          if (*(int *)((int)piVar8 + iVar5) < 1) {
            if (*(int *)((int)piVar8 + iVar5) != 0) {
              *(undefined4 *)(iVar13 + iVar11 * 4) = 1;
              iVar12 = iVar12 + 1;
              *(undefined4 *)(iVar14 + iVar11 * 4) = 1;
              iVar11 = iVar11 + 1;
            }
          }
          else {
            *(undefined4 *)(iVar13 + iVar11 * 4) = 0;
            iVar12 = iVar12 + 1;
            *(undefined4 *)(iVar14 + iVar11 * 4) = 1;
            iVar11 = iVar11 + 1;
          }
          iVar5 = iVar5 + 4;
        } while (iVar5 != 0x10);
        param_4 = param_4 + 4;
        piVar8 = piVar8 + 4;
      } while ((int)param_4 < iVar18);
    }
    break;
  case 5:
    iVar12 = param_4 + param_5;
    if ((int)param_4 < iVar12) {
      iVar7 = 0;
      piVar8 = (int *)(param_3 + param_4 * 4);
      iVar18 = 0;
      uVar9 = param_4;
      do {
        iVar10 = *piVar8;
        uVar9 = uVar9 + 2;
        piVar1 = piVar8 + 1;
        piVar8 = piVar8 + 2;
        iVar10 = (iVar10 * 9 + *piVar1 + 0x28) * 4;
        uVar4 = *(ushort *)(huff5 + iVar10);
        iVar18 = iVar18 + (uint)uVar4;
        *(uint *)(iVar13 + iVar11 * 4 + iVar7) = (uint)*(ushort *)(huff5 + iVar10 + 2);
        *(uint *)(iVar14 + iVar11 * 4 + iVar7) = (uint)uVar4;
        iVar7 = iVar7 + 4;
      } while ((int)uVar9 < iVar12);
      iVar11 = iVar11 + 1 + (~param_4 + iVar12 >> 1);
      goto LAB_00018594;
    }
LAB_00018cb0:
    iVar18 = 0;
LAB_00018594:
    *(int *)(param_1 + 0x638) = iVar11;
    return iVar18;
  case 6:
    iVar18 = param_4 + param_5;
    if ((int)param_4 < iVar18) {
      iVar7 = 0;
      piVar8 = (int *)(param_3 + param_4 * 4);
      iVar12 = 0;
      uVar9 = param_4;
      do {
        iVar10 = *piVar8;
        uVar9 = uVar9 + 2;
        piVar1 = piVar8 + 1;
        piVar8 = piVar8 + 2;
        iVar10 = (iVar10 * 9 + *piVar1 + 0x28) * 4;
        uVar4 = *(ushort *)(huff6 + iVar10);
        iVar12 = iVar12 + (uint)uVar4;
        *(uint *)(iVar13 + iVar11 * 4 + iVar7) = (uint)*(ushort *)(huff6 + iVar10 + 2);
        *(uint *)(iVar14 + iVar11 * 4 + iVar7) = (uint)uVar4;
        iVar7 = iVar7 + 4;
      } while ((int)uVar9 < iVar18);
      iVar11 = iVar11 + 1 + (~param_4 + iVar18 >> 1);
      break;
    }
    goto LAB_00018ca8;
  case 7:
    iVar12 = param_4 + param_5;
    iVar18 = 0;
    if ((int)param_4 < iVar12) {
      piVar8 = (int *)(param_3 + param_4 * 4);
      do {
        iVar7 = *piVar8;
        iVar5 = 0;
        iVar10 = piVar8[1];
        if (iVar7 < 0) {
          iVar7 = -iVar7;
        }
        if (iVar10 < 0) {
          iVar10 = -iVar10;
        }
        iVar7 = (iVar10 + iVar7 * 8) * 4;
        uVar4 = *(ushort *)(huff7 + iVar7);
        iVar18 = iVar18 + (uint)uVar4;
        *(uint *)(iVar13 + iVar11 * 4) = (uint)*(ushort *)(huff7 + iVar7 + 2);
        *(uint *)(iVar14 + iVar11 * 4) = (uint)uVar4;
        iVar11 = iVar11 + 1;
        do {
          if (*(int *)((int)piVar8 + iVar5) < 1) {
            if (*(int *)((int)piVar8 + iVar5) != 0) {
              *(undefined4 *)(iVar13 + iVar11 * 4) = 1;
              iVar18 = iVar18 + 1;
              *(undefined4 *)(iVar14 + iVar11 * 4) = 1;
              iVar11 = iVar11 + 1;
            }
          }
          else {
            *(undefined4 *)(iVar13 + iVar11 * 4) = 0;
            iVar18 = iVar18 + 1;
            *(undefined4 *)(iVar14 + iVar11 * 4) = 1;
            iVar11 = iVar11 + 1;
          }
          iVar5 = iVar5 + 4;
        } while (iVar5 != 8);
        param_4 = param_4 + 2;
        piVar8 = piVar8 + 2;
      } while ((int)param_4 < iVar12);
    }
    goto LAB_00018594;
  case 8:
    iVar18 = param_4 + param_5;
    iVar12 = 0;
    if ((int)param_4 < iVar18) {
      piVar8 = (int *)(param_3 + param_4 * 4);
      do {
        iVar7 = *piVar8;
        iVar5 = 0;
        iVar10 = piVar8[1];
        if (iVar7 < 0) {
          iVar7 = -iVar7;
        }
        if (iVar10 < 0) {
          iVar10 = -iVar10;
        }
        iVar7 = (iVar10 + iVar7 * 8) * 4;
        uVar4 = *(ushort *)(huff8 + iVar7);
        iVar12 = iVar12 + (uint)uVar4;
        *(uint *)(iVar13 + iVar11 * 4) = (uint)*(ushort *)(huff8 + iVar7 + 2);
        *(uint *)(iVar14 + iVar11 * 4) = (uint)uVar4;
        iVar11 = iVar11 + 1;
        do {
          if (*(int *)((int)piVar8 + iVar5) < 1) {
            if (*(int *)((int)piVar8 + iVar5) != 0) {
              *(undefined4 *)(iVar13 + iVar11 * 4) = 1;
              iVar12 = iVar12 + 1;
              *(undefined4 *)(iVar14 + iVar11 * 4) = 1;
              iVar11 = iVar11 + 1;
            }
          }
          else {
            *(undefined4 *)(iVar13 + iVar11 * 4) = 0;
            iVar12 = iVar12 + 1;
            *(undefined4 *)(iVar14 + iVar11 * 4) = 1;
            iVar11 = iVar11 + 1;
          }
          iVar5 = iVar5 + 4;
        } while (iVar5 != 8);
        param_4 = param_4 + 2;
        piVar8 = piVar8 + 2;
      } while ((int)param_4 < iVar18);
    }
    break;
  case 9:
    iVar18 = param_4 + param_5;
    iVar12 = 0;
    if ((int)param_4 < iVar18) {
      piVar8 = (int *)(param_3 + param_4 * 4);
      do {
        iVar7 = *piVar8;
        iVar5 = 0;
        iVar10 = piVar8[1];
        if (iVar7 < 0) {
          iVar7 = -iVar7;
        }
        if (iVar10 < 0) {
          iVar10 = -iVar10;
        }
        iVar7 = (iVar7 * 0xd + iVar10) * 4;
        uVar4 = *(ushort *)(huff9 + iVar7);
        iVar12 = iVar12 + (uint)uVar4;
        *(uint *)(iVar13 + iVar11 * 4) = (uint)*(ushort *)(huff9 + iVar7 + 2);
        *(uint *)(iVar14 + iVar11 * 4) = (uint)uVar4;
        iVar11 = iVar11 + 1;
        do {
          if (*(int *)((int)piVar8 + iVar5) < 1) {
            if (*(int *)((int)piVar8 + iVar5) != 0) {
              *(undefined4 *)(iVar13 + iVar11 * 4) = 1;
              iVar12 = iVar12 + 1;
              *(undefined4 *)(iVar14 + iVar11 * 4) = 1;
              iVar11 = iVar11 + 1;
            }
          }
          else {
            *(undefined4 *)(iVar13 + iVar11 * 4) = 0;
            iVar12 = iVar12 + 1;
            *(undefined4 *)(iVar14 + iVar11 * 4) = 1;
            iVar11 = iVar11 + 1;
          }
          iVar5 = iVar5 + 4;
        } while (iVar5 != 8);
        param_4 = param_4 + 2;
        piVar8 = piVar8 + 2;
      } while ((int)param_4 < iVar18);
    }
    break;
  case 10:
    iVar18 = param_4 + param_5;
    iVar12 = 0;
    if ((int)param_4 < iVar18) {
      piVar8 = (int *)(param_3 + param_4 * 4);
      do {
        iVar7 = *piVar8;
        iVar5 = 0;
        iVar10 = piVar8[1];
        if (iVar7 < 0) {
          iVar7 = -iVar7;
        }
        if (iVar10 < 0) {
          iVar10 = -iVar10;
        }
        iVar7 = (iVar7 * 0xd + iVar10) * 4;
        uVar4 = *(ushort *)(huff10 + iVar7);
        iVar12 = iVar12 + (uint)uVar4;
        *(uint *)(iVar13 + iVar11 * 4) = (uint)*(ushort *)(huff10 + iVar7 + 2);
        *(uint *)(iVar14 + iVar11 * 4) = (uint)uVar4;
        iVar11 = iVar11 + 1;
        do {
          if (*(int *)((int)piVar8 + iVar5) < 1) {
            if (*(int *)((int)piVar8 + iVar5) != 0) {
              *(undefined4 *)(iVar13 + iVar11 * 4) = 1;
              iVar12 = iVar12 + 1;
              *(undefined4 *)(iVar14 + iVar11 * 4) = 1;
              iVar11 = iVar11 + 1;
            }
          }
          else {
            *(undefined4 *)(iVar13 + iVar11 * 4) = 0;
            iVar12 = iVar12 + 1;
            *(undefined4 *)(iVar14 + iVar11 * 4) = 1;
            iVar11 = iVar11 + 1;
          }
          iVar5 = iVar5 + 4;
        } while (iVar5 != 8);
        param_4 = param_4 + 2;
        piVar8 = piVar8 + 2;
      } while ((int)param_4 < iVar18);
    }
    break;
  case 0xb:
    iVar18 = param_4 + param_5;
    if ((int)param_4 < iVar18) {
      iVar12 = 0;
      puVar16 = (uint *)(param_3 + (param_4 + 1) * 4);
      do {
        uVar9 = puVar16[-1];
        uVar6 = *puVar16;
        if ((int)uVar9 < 0) {
          uVar9 = -uVar9;
        }
        if ((int)uVar6 < 0) {
          uVar6 = -uVar6;
        }
        if ((int)uVar9 < 0x10) {
          if ((int)uVar6 < 0x10) {
            iVar7 = uVar6 + uVar9 * 0x11;
          }
          else {
            iVar7 = uVar9 * 0x11 + 0x10;
          }
        }
        else {
          if ((int)uVar6 < 0x10) {
            iVar7 = uVar6 + 0x110;
          }
          else {
            iVar7 = 0x120;
          }
        }
        iVar10 = 0;
        uVar4 = *(ushort *)(huff11 + iVar7 * 4);
        iVar12 = iVar12 + (uint)uVar4;
        *(uint *)(iVar13 + iVar11 * 4) = (uint)*(ushort *)(huff11 + iVar7 * 4 + 2);
        *(uint *)(iVar14 + iVar11 * 4) = (uint)uVar4;
        iVar11 = iVar11 + 1;
        do {
          iVar7 = *(int *)((int)puVar16 + iVar10 + -4);
          if (iVar7 < 1) {
            if (iVar7 != 0) {
              *(undefined4 *)(iVar13 + iVar11 * 4) = 1;
              iVar12 = iVar12 + 1;
              *(undefined4 *)(iVar14 + iVar11 * 4) = 1;
              iVar11 = iVar11 + 1;
            }
          }
          else {
            *(undefined4 *)(iVar13 + iVar11 * 4) = 0;
            iVar12 = iVar12 + 1;
            *(undefined4 *)(iVar14 + iVar11 * 4) = 1;
            iVar11 = iVar11 + 1;
          }
          iVar10 = iVar10 + 4;
        } while (iVar10 != 8);
        uVar9 = puVar16[-1];
        if ((int)((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f)) < 0x10) {
          uVar9 = *puVar16;
          if (0xf < (int)((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f))) goto LAB_0001841c;
        }
        else {
          uVar6 = *puVar16;
          if ((int)uVar6 < 0) {
            uVar6 = -uVar6;
          }
          if ((int)uVar6 < 0x10) {
LAB_0001841c:
            iVar7 = FUN_000181f8(uVar9,local_2c);
            iVar12 = iVar12 + local_2c[0];
            *(int *)(iVar13 + iVar11 * 4) = iVar7;
            *(int *)(iVar14 + iVar11 * 4) = local_2c[0];
            iVar11 = iVar11 + 1;
          }
          else {
            iVar7 = FUN_000181f8(uVar9,local_2c);
            iVar12 = iVar12 + local_2c[0];
            *(int *)(iVar13 + iVar11 * 4) = iVar7;
            *(int *)(iVar14 + iVar11 * 4) = local_2c[0];
            iVar7 = FUN_000181f8(*puVar16,local_2c);
            iVar10 = iVar11 + 1;
            iVar11 = iVar11 + 2;
            iVar12 = iVar12 + local_2c[0];
            *(int *)(iVar13 + iVar10 * 4) = iVar7;
            *(int *)(iVar14 + iVar10 * 4) = local_2c[0];
          }
        }
        param_4 = param_4 + 2;
        puVar16 = puVar16 + 2;
      } while ((int)param_4 < iVar18);
      break;
    }
LAB_00018ca8:
    iVar12 = 0;
    break;
  case 0xc:
    return 0;
  case 0xd:
    return 0;
  case 0xe:
    goto LAB_000184d8;
  case 0xf:
LAB_000184d8:
    *(undefined4 *)(iVar13 + iVar11 * 4) = 0;
    *(undefined4 *)(iVar14 + iVar11 * 4) = 0;
    *(int *)(param_1 + 0x638) = iVar11 + 1;
    return 0;
  default:
    return 0;
  }
  *(int *)(param_1 + 0x638) = iVar11;
  return iVar12;
}



int AudioAACENCCalcBits(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int local_1c;
  
  switch(param_2) {
  case 1:
    iVar13 = param_4 + param_5;
    if (param_4 < iVar13) {
      piVar8 = (int *)(param_3 + param_4 * 4);
      iVar11 = 0;
      do {
        iVar9 = *piVar8;
        param_4 = param_4 + 4;
        piVar4 = piVar8 + 1;
        piVar2 = piVar8 + 2;
        piVar3 = piVar8 + 3;
        piVar8 = piVar8 + 4;
        iVar11 = iVar11 + (uint)*(ushort *)
                                 (huff1 + (iVar9 * 0x1b + *piVar4 * 9) * 4 + *piVar2 * 0xc +
                                          *piVar3 * 4 + 0xa0);
      } while (param_4 < iVar13);
      return iVar11;
    }
    break;
  case 2:
    iVar13 = param_4 + param_5;
    if (param_4 < iVar13) {
      piVar8 = (int *)(param_3 + param_4 * 4);
      iVar11 = 0;
      do {
        iVar9 = *piVar8;
        param_4 = param_4 + 4;
        piVar4 = piVar8 + 1;
        piVar2 = piVar8 + 2;
        piVar3 = piVar8 + 3;
        piVar8 = piVar8 + 4;
        iVar11 = iVar11 + (uint)*(ushort *)
                                 (huff2 + (iVar9 * 0x1b + *piVar4 * 9) * 4 + *piVar2 * 0xc +
                                          *piVar3 * 4 + 0xa0);
      } while (param_4 < iVar13);
      return iVar11;
    }
    break;
  case 3:
    iVar13 = param_4 + param_5;
    if (param_4 < iVar13) {
      piVar8 = (int *)(param_3 + param_4 * 4);
      iVar11 = 0;
      do {
        iVar9 = *piVar8;
        iVar7 = 0;
        iVar10 = piVar8[2];
        if (iVar9 < 0) {
          iVar9 = -iVar9;
        }
        iVar5 = piVar8[1];
        if (iVar10 < 0) {
          iVar10 = -iVar10;
        }
        iVar14 = piVar8[3];
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        if (iVar14 < 0) {
          iVar14 = -iVar14;
        }
        iVar11 = iVar11 + (uint)*(ushort *)
                                 (huff3 + (iVar9 * 0x1b + iVar10 * 3 + iVar5 * 9) * 4 + iVar14 * 4);
        do {
          piVar4 = (int *)((int)piVar8 + iVar7);
          iVar7 = iVar7 + 4;
          if (*piVar4 != 0) {
            iVar11 = iVar11 + 1;
          }
        } while (iVar7 != 0x10);
        param_4 = param_4 + 4;
        piVar8 = piVar8 + 4;
      } while (param_4 < iVar13);
      return iVar11;
    }
    break;
  case 4:
    iVar13 = param_4 + param_5;
    if (param_4 < iVar13) {
      piVar8 = (int *)(param_3 + param_4 * 4);
      iVar11 = 0;
      do {
        iVar9 = *piVar8;
        iVar7 = 0;
        iVar10 = piVar8[2];
        if (iVar9 < 0) {
          iVar9 = -iVar9;
        }
        iVar5 = piVar8[1];
        if (iVar10 < 0) {
          iVar10 = -iVar10;
        }
        iVar14 = piVar8[3];
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        if (iVar14 < 0) {
          iVar14 = -iVar14;
        }
        iVar11 = iVar11 + (uint)*(ushort *)
                                 (huff4 + (iVar9 * 0x1b + iVar10 * 3 + iVar5 * 9) * 4 + iVar14 * 4);
        do {
          piVar4 = (int *)((int)piVar8 + iVar7);
          iVar7 = iVar7 + 4;
          if (*piVar4 != 0) {
            iVar11 = iVar11 + 1;
          }
        } while (iVar7 != 0x10);
        param_4 = param_4 + 4;
        piVar8 = piVar8 + 4;
      } while (param_4 < iVar13);
      return iVar11;
    }
    break;
  case 5:
    iVar13 = param_4 + param_5;
    if (param_4 < iVar13) {
      piVar8 = (int *)(param_3 + param_4 * 4);
      iVar11 = 0;
      do {
        iVar9 = *piVar8;
        param_4 = param_4 + 2;
        piVar4 = piVar8 + 1;
        piVar8 = piVar8 + 2;
        iVar11 = iVar11 + (uint)*(ushort *)(huff5 + (iVar9 * 9 + *piVar4) * 4 + 0xa0);
      } while (param_4 < iVar13);
      return iVar11;
    }
    break;
  case 6:
    iVar13 = param_4 + param_5;
    if (param_4 < iVar13) {
      piVar8 = (int *)(param_3 + param_4 * 4);
      iVar11 = 0;
      do {
        iVar9 = *piVar8;
        param_4 = param_4 + 2;
        piVar4 = piVar8 + 1;
        piVar8 = piVar8 + 2;
        iVar11 = iVar11 + (uint)*(ushort *)(huff6 + (iVar9 * 9 + *piVar4) * 4 + 0xa0);
      } while (param_4 < iVar13);
      return iVar11;
    }
    break;
  case 7:
    iVar13 = param_4 + param_5;
    if (param_4 < iVar13) {
      puVar12 = (uint *)(param_3 + param_4 * 4);
      iVar11 = 0;
      do {
        uVar6 = *puVar12;
        param_4 = param_4 + 2;
        uVar15 = puVar12[1];
        if ((int)uVar15 < 0) {
          uVar15 = -uVar15;
        }
        puVar1 = puVar12 + 1;
        puVar12 = puVar12 + 2;
        iVar11 = iVar11 + (uint)*(ushort *)
                                 (huff7 + (uVar15 + ((uVar6 ^ (int)uVar6 >> 0x1f) -
                                                    ((int)uVar6 >> 0x1f)) * 8) * 4);
        if (uVar6 != 0) {
          iVar11 = iVar11 + 1;
        }
        if (*puVar1 != 0) {
          iVar11 = iVar11 + 1;
        }
      } while (param_4 < iVar13);
      return iVar11;
    }
    break;
  case 8:
    iVar13 = param_4 + param_5;
    if (param_4 < iVar13) {
      puVar12 = (uint *)(param_3 + param_4 * 4);
      iVar11 = 0;
      do {
        uVar6 = *puVar12;
        param_4 = param_4 + 2;
        uVar15 = puVar12[1];
        if ((int)uVar15 < 0) {
          uVar15 = -uVar15;
        }
        puVar1 = puVar12 + 1;
        puVar12 = puVar12 + 2;
        iVar11 = iVar11 + (uint)*(ushort *)
                                 (huff8 + (uVar15 + ((uVar6 ^ (int)uVar6 >> 0x1f) -
                                                    ((int)uVar6 >> 0x1f)) * 8) * 4);
        if (uVar6 != 0) {
          iVar11 = iVar11 + 1;
        }
        if (*puVar1 != 0) {
          iVar11 = iVar11 + 1;
        }
      } while (param_4 < iVar13);
      return iVar11;
    }
    break;
  case 9:
    iVar13 = param_4 + param_5;
    if (param_4 < iVar13) {
      puVar12 = (uint *)(param_3 + param_4 * 4);
      iVar11 = 0;
      do {
        uVar6 = *puVar12;
        param_4 = param_4 + 2;
        uVar15 = puVar12[1];
        if ((int)uVar15 < 0) {
          uVar15 = -uVar15;
        }
        puVar1 = puVar12 + 1;
        puVar12 = puVar12 + 2;
        iVar11 = iVar11 + (uint)*(ushort *)
                                 (huff9 + (((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f)) *
                                           0xd + uVar15) * 4);
        if (uVar6 != 0) {
          iVar11 = iVar11 + 1;
        }
        if (*puVar1 != 0) {
          iVar11 = iVar11 + 1;
        }
      } while (param_4 < iVar13);
      return iVar11;
    }
    break;
  case 10:
    iVar13 = param_4 + param_5;
    if (param_4 < iVar13) {
      puVar12 = (uint *)(param_3 + param_4 * 4);
      iVar11 = 0;
      do {
        uVar6 = *puVar12;
        param_4 = param_4 + 2;
        uVar15 = puVar12[1];
        if ((int)uVar15 < 0) {
          uVar15 = -uVar15;
        }
        puVar1 = puVar12 + 1;
        puVar12 = puVar12 + 2;
        iVar11 = iVar11 + (uint)*(ushort *)
                                 (huff10 + (((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f)) *
                                            0xd + uVar15) * 4);
        if (uVar6 != 0) {
          iVar11 = iVar11 + 1;
        }
        if (*puVar1 != 0) {
          iVar11 = iVar11 + 1;
        }
      } while (param_4 < iVar13);
      return iVar11;
    }
    break;
  case 0xb:
    iVar13 = param_4 + param_5;
    if (param_4 < iVar13) {
      puVar12 = (uint *)(param_3 + (param_4 + 1) * 4);
      iVar11 = 0;
      do {
        uVar6 = puVar12[-1];
        uVar15 = *puVar12;
        iVar10 = (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f);
        iVar9 = (uVar15 ^ (int)uVar15 >> 0x1f) - ((int)uVar15 >> 0x1f);
        if (iVar10 < 0x10) {
          if (iVar9 < 0x10) {
            iVar7 = iVar9 + iVar10 * 0x11;
          }
          else {
            iVar7 = iVar10 * 0x11 + 0x10;
          }
        }
        else {
          if (iVar9 < 0x10) {
            iVar7 = iVar9 + 0x110;
          }
          else {
            iVar7 = 0x120;
          }
        }
        iVar11 = iVar11 + (uint)*(ushort *)(huff11 + iVar7 * 4);
        if (uVar6 != 0) {
          iVar11 = iVar11 + 1;
        }
        if (*puVar12 != 0) {
          iVar11 = iVar11 + 1;
        }
        if (iVar10 < 0x10) {
          if (0xf < iVar9) goto LAB_00019218;
        }
        else {
          uVar15 = uVar6;
          if (iVar9 < 0x10) {
LAB_00019218:
            FUN_000181f8(uVar15,&local_1c);
            iVar11 = iVar11 + local_1c;
          }
          else {
            FUN_000181f8(uVar6,&local_1c);
            iVar11 = iVar11 + local_1c;
            FUN_000181f8(*puVar12,&local_1c);
            iVar11 = iVar11 + local_1c;
          }
        }
        param_4 = param_4 + 2;
        puVar12 = puVar12 + 2;
        if (iVar13 <= param_4) {
          return iVar11;
        }
      } while( true );
    }
  }
  return 0;
}



int AudioAACENCNoiselessBitCount(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_80;
  int local_7c [22];
  
  iVar1 = *(int *)(param_1 + 0x23c);
  if (iVar1 < 1) {
    iVar10 = 0;
  }
  else {
    iVar10 = 0;
    iVar7 = 0;
    iVar8 = param_1;
    do {
      while( true ) {
        iVar6 = *(int *)(iVar8 + 0x240);
        iVar8 = iVar8 + param_3 * 4;
        iVar2 = *(int *)(iVar8 + 0x240);
        iVar7 = param_3 + iVar7;
        if (iVar6 < iVar2) break;
        iVar9 = iVar2 - iVar6;
LAB_0001945c:
        iVar2 = AudioAACENCCalcBits(param_1,0,param_2,iVar6,iVar9);
        *param_4 = iVar2;
        param_4[1] = 0;
LAB_00019490:
        iVar10 = iVar10 + *param_4;
        param_4 = param_4 + param_3 * 3;
        if (iVar1 <= iVar7) {
          return iVar10;
        }
      }
      iVar5 = 0;
      piVar4 = (int *)(param_2 + iVar6 * 4);
      iVar9 = iVar6;
      do {
        iVar3 = *piVar4;
        iVar9 = iVar9 + 1;
        if (iVar3 < 0) {
          iVar3 = -iVar3;
        }
        if (iVar5 < iVar3) {
          iVar5 = iVar3;
        }
        piVar4 = piVar4 + 1;
      } while (iVar9 != iVar2);
      iVar9 = iVar9 - iVar6;
      if (iVar5 == 0) goto LAB_0001945c;
      if (1 < iVar5) {
        if (iVar5 == 2) {
          iVar5 = AudioAACENCCalcBits(param_1,3,param_2,iVar6,iVar9);
          local_80 = AudioAACENCCalcBits(param_1,4,param_2,iVar6,iVar9);
          iVar6 = AudioAACENCCalcBits(param_1,5,param_2,iVar6,iVar9);
          iVar9 = 3;
          local_7c[2] = 5;
          local_7c[1] = iVar6;
          iVar2 = iVar9;
          goto LAB_000193f4;
        }
        if (iVar5 < 5) {
          iVar5 = AudioAACENCCalcBits(param_1,5,param_2,iVar6,iVar9);
          local_80 = AudioAACENCCalcBits(param_1,6,param_2,iVar6,iVar9);
          iVar6 = AudioAACENCCalcBits(param_1,7,param_2,iVar6,iVar9);
          iVar9 = 5;
          local_7c[2] = 7;
          local_7c[1] = iVar6;
          iVar2 = 3;
          goto LAB_000193f4;
        }
        if (iVar5 < 8) {
          iVar5 = AudioAACENCCalcBits(param_1,7,param_2,iVar6,iVar9);
          local_80 = AudioAACENCCalcBits(param_1,8,param_2,iVar6,iVar9);
          iVar6 = AudioAACENCCalcBits(param_1,9,param_2,iVar6,iVar9);
          iVar9 = 7;
          local_7c[2] = 9;
          local_7c[1] = iVar6;
          iVar2 = 3;
          goto LAB_000193f4;
        }
        if (iVar5 < 0xd) {
          iVar5 = AudioAACENCCalcBits(param_1,9,param_2,iVar6,iVar9);
          iVar6 = AudioAACENCCalcBits(param_1,10,param_2,iVar6,iVar9);
          iVar9 = 9;
          iVar2 = 2;
          local_80 = iVar6;
          goto LAB_000193f4;
        }
        iVar2 = AudioAACENCCalcBits(param_1,0xb,param_2,iVar6,iVar9);
        *param_4 = iVar2;
        param_4[1] = 0xb;
        goto LAB_00019490;
      }
      iVar5 = AudioAACENCCalcBits(param_1,1,param_2,iVar6,iVar9);
      local_80 = AudioAACENCCalcBits(param_1,2,param_2,iVar6,iVar9);
      iVar6 = AudioAACENCCalcBits(param_1,3,param_2,iVar6,iVar9);
      iVar2 = 3;
      iVar9 = 1;
      local_7c[2] = 3;
      local_7c[1] = iVar6;
LAB_000193f4:
      param_4[1] = iVar9;
      iVar9 = 1;
      *param_4 = iVar5;
      piVar4 = local_7c + 1;
      while( true ) {
        iVar9 = iVar9 + 1;
        if (local_80 < iVar5) {
          *param_4 = local_80;
          iVar6 = piVar4[-1];
        }
        if (local_80 < iVar5) {
          param_4[1] = iVar6;
        }
        if (iVar2 <= iVar9) break;
        local_80 = *piVar4;
        iVar5 = *param_4;
        piVar4 = piVar4 + 2;
      }
      iVar10 = iVar10 + *param_4;
      param_4 = param_4 + param_3 * 3;
    } while (iVar7 < iVar1);
  }
  return iVar10;
}



int AudioAACENCBitSearch(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_1090 [337];
  int aiStack2892 [719];
  
  piVar7 = local_1090;
  uVar3 = AudioAACENClog2x(*(uint *)(param_1 + 0x23c));
  AudioAACENCNoiselessBitCount(param_1,param_2,1,local_1090);
  iVar1 = 1 << (uVar3 >> 0x1a) + 1;
  iVar5 = iVar1 + *(int *)(param_1 + 0x23c);
  if (iVar1 < iVar5) {
    piVar6 = aiStack2892 + iVar1 * 3;
    iVar4 = 0;
    piVar8 = (int *)(param_1 + 0x63c);
    do {
      iVar11 = piVar7[1];
      iVar9 = *piVar8;
      iVar10 = *piVar7;
      piVar7 = piVar7 + 3;
      *piVar6 = iVar11;
      if (1 < iVar9 - 0xeU) {
        *piVar8 = iVar11;
      }
      piVar6[-1] = iVar10;
      piVar2 = piVar6 + -1;
      piVar6 = piVar6 + 3;
      iVar4 = iVar4 + *piVar2;
      piVar8 = piVar8 + 1;
    } while (piVar7 != local_1090 + (iVar5 - iVar1) * 3);
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}



int AudioAACENCSortBookNumbers(int param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  int local_48;
  int local_44;
  int local_3c;
  
  iVar6 = *(int *)(param_1 + 0x214);
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 2) {
    iVar10 = 3;
    uVar12 = 7;
  }
  else {
    iVar10 = 5;
    uVar12 = 0x1f;
  }
  iVar1 = __aeabi_idiv(*(undefined4 *)(param_1 + 0x23c),iVar6);
  if (iVar6 < 1) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    local_44 = 0;
    local_48 = 1;
    iVar11 = iVar1;
    local_3c = param_1;
    do {
      uVar8 = *(uint *)(local_3c + 0x63c);
      if (param_3 == (uint *)0x0) {
        if (iVar11 <= local_48) goto LAB_00019a6c;
LAB_00019860:
        iVar6 = iVar6 + 4;
        if (param_3 != (uint *)0x0) {
          uVar7 = 1;
          iVar2 = local_48;
          puVar4 = (uint *)(param_1 + local_48 * 4 + 0x63c);
          do {
            while( true ) {
              iVar9 = iVar6 + iVar10;
              if (*puVar4 == uVar8) break;
              PutBit(param_2,uVar7,iVar10,iVar3);
              bVar13 = uVar7 == uVar12;
              uVar7 = 1;
              if (bVar13) {
                iVar9 = iVar9 + iVar10;
                PutBit(param_2,0,iVar10,iVar3);
              }
              iVar6 = iVar9 + 4;
              PutBit(param_2,*puVar4,4,iVar3);
              uVar8 = *puVar4;
LAB_00019988:
              iVar2 = iVar2 + 1;
              iVar3 = iVar11;
              puVar4 = puVar4 + 1;
              if (iVar2 == iVar11) goto LAB_000199f4;
            }
            bVar13 = uVar12 != uVar7;
            uVar7 = uVar7 + 1;
            if (bVar13) goto LAB_00019988;
            PutBit(param_2,uVar12,iVar10,iVar3);
            iVar2 = iVar2 + 1;
            iVar6 = iVar6 + iVar10;
            uVar7 = 1;
            iVar3 = iVar11;
            puVar4 = puVar4 + 1;
          } while (iVar2 != iVar11);
          goto LAB_000199f4;
        }
        uVar7 = 1;
        puVar4 = (uint *)(param_1 + local_48 * 4 + 0x63c);
        iVar3 = local_48;
        do {
          while( true ) {
            puVar5 = puVar4 + 1;
            iVar2 = iVar6 + iVar10;
            if (*puVar4 != uVar8) break;
            bVar13 = uVar7 == uVar12;
            iVar3 = iVar3 + 1;
            uVar7 = uVar7 + 1;
            if (bVar13) {
              uVar7 = 1;
              iVar6 = iVar2;
            }
            puVar4 = puVar5;
            if (iVar3 == iVar11) goto joined_r0x000198d8;
          }
          iVar3 = iVar3 + 1;
          if (uVar7 == uVar12) {
            iVar2 = iVar2 + iVar10;
          }
          iVar6 = iVar2 + 4;
          uVar7 = 1;
          uVar8 = *puVar4;
          puVar4 = puVar5;
        } while (iVar3 != iVar11);
      }
      else {
        PutBit(param_2,uVar8,4,iVar3);
        if (local_48 < iVar11) goto LAB_00019860;
LAB_00019a6c:
        iVar6 = iVar6 + 4;
        uVar7 = 1;
LAB_000199f4:
        puVar5 = param_3;
        if (param_3 != (uint *)0x0) {
          PutBit(param_2,uVar7,iVar10,param_3);
        }
      }
joined_r0x000198d8:
      iVar6 = iVar6 + iVar10;
      if (uVar7 == uVar12) {
        if (param_3 == (uint *)0x0) {
          iVar6 = iVar6 + iVar10;
        }
        else {
          iVar6 = iVar6 + iVar10;
          PutBit(param_2,0,iVar10,puVar5);
        }
      }
      local_44 = local_44 + 1;
      local_3c = local_3c + iVar1 * 4;
      iVar11 = iVar11 + iVar1;
      iVar3 = local_48;
      local_48 = local_48 + iVar1;
    } while (local_44 < *(int *)(param_1 + 0x214));
  }
  return iVar6;
}



int AudioAACENCWriteScalefactors(int param_1,uint *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int local_48;
  int local_44;
  int *piVar3;
  
  if (*(int *)(param_1 + 8) == 2) {
    iVar5 = *(int *)(param_1 + 0x214);
    iVar6 = __aeabi_idiv(*(undefined4 *)(param_1 + 0x23c),iVar5);
    iVar8 = iVar5;
    if (iVar5 < 1) {
      iVar8 = 0;
    }
    iVar7 = *(int *)(param_1 + 0x10);
    if (iVar5 < 1) {
      return iVar8;
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 0x23c);
    iVar7 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x214) = 1;
    *(undefined4 *)(param_1 + 0x218) = 1;
  }
  iVar8 = 0;
  local_48 = 0;
  iVar5 = 0;
  local_44 = 0;
  do {
    if (0 < iVar6) {
      if (param_3 == 1) {
        iVar4 = 0;
        iVar1 = iVar7;
        piVar2 = (int *)(param_1 + local_44 * 4 + 0x638);
        do {
          while( true ) {
            piVar3 = piVar2 + 1;
            iVar7 = iVar1;
            if (1 < *piVar3 - 0xeU) break;
            iVar10 = piVar2[-0x189];
            uVar9 = (iVar10 - iVar8) + 0x3c;
            if (uVar9 < 0x78) {
              iVar8 = *(int *)(huff12 + uVar9 * 8);
            }
            else {
              iVar8 = 0;
            }
            iVar5 = iVar5 + iVar8;
            iVar4 = iVar4 + 1;
            PutBit(param_2,*(uint *)(huff12 + uVar9 * 8 + 4),iVar8,iVar10);
            iVar8 = iVar10;
            piVar2 = piVar3;
            if (iVar4 == iVar6) goto LAB_00019cac;
          }
          if (*piVar3 != 0) {
            iVar7 = piVar2[-0x189];
            uVar9 = (iVar7 - iVar1) + 0x3c;
            if (uVar9 < 0x78) {
              iVar1 = *(int *)(huff12 + uVar9 * 8);
            }
            else {
              iVar1 = 0;
            }
            iVar5 = iVar5 + iVar1;
            PutBit(param_2,*(uint *)(huff12 + uVar9 * 8 + 4),iVar1,iVar7);
          }
          iVar4 = iVar4 + 1;
          iVar1 = iVar7;
          piVar2 = piVar3;
        } while (iVar4 != iVar6);
LAB_00019cac:
        local_44 = iVar6 + local_44;
      }
      else {
        iVar4 = 0;
        piVar2 = (int *)(param_1 + local_44 * 4 + 0x638);
        iVar1 = iVar7;
        do {
          while( true ) {
            piVar3 = piVar2 + 1;
            iVar7 = iVar1;
            if (1 < *piVar3 - 0xeU) break;
            iVar10 = piVar2[-0x189];
            iVar4 = iVar4 + 1;
            uVar9 = (iVar10 - iVar8) + 0x3c;
            if (uVar9 < 0x78) {
              iVar8 = *(int *)(huff12 + uVar9 * 8);
            }
            else {
              iVar8 = 0;
            }
            iVar5 = iVar5 + iVar8;
            piVar2 = piVar3;
            iVar8 = iVar10;
            if (iVar4 == iVar6) goto LAB_00019b84;
          }
          if (*piVar3 != 0) {
            iVar7 = piVar2[-0x189];
            uVar9 = (iVar7 - iVar1) + 0x3c;
            if (uVar9 < 0x78) {
              iVar1 = *(int *)(huff12 + uVar9 * 8);
            }
            else {
              iVar1 = 0;
            }
            iVar5 = iVar5 + iVar1;
          }
          iVar4 = iVar4 + 1;
          piVar2 = piVar3;
          iVar1 = iVar7;
        } while (iVar4 != iVar6);
LAB_00019b84:
        local_44 = iVar6 + local_44;
      }
    }
    local_48 = local_48 + 1;
    if (*(int *)(param_1 + 0x214) <= local_48) {
      return iVar5;
    }
  } while( true );
}



double FUN_00019d10(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4,uint param_5,
                   int param_6,int param_7)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  double *pdVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  undefined4 in_cr0;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  undefined8 local_21b8;
  undefined4 auStack8232 [2050];
  
  puVar1 = (undefined8 *)(param_1 + -8);
  iVar3 = 0;
  puVar5 = auStack8232;
  if (param_5 == 2) {
    iVar8 = 0x80;
  }
  else {
    iVar8 = 0x400;
  }
  do {
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + 1;
    uVar12 = *puVar1;
    coprocessor_function(0xb,6,5,in_cr0,in_cr0,in_cr0);
    puVar5[2] = (int)uVar12;
    puVar5[3] = (int)((ulonglong)uVar12 >> 0x20);
    puVar5 = puVar5 + 2;
  } while (iVar3 < iVar8);
  bVar11 = param_7 == 0;
  bVar10 = false;
  if (param_7 < 1) {
    dVar14 = 0.0;
    iVar3 = param_7;
  }
  else {
    pdVar6 = (double *)&local_21b8;
    dVar14 = 0.0;
    piVar4 = (int *)(param_4 + 4);
    iVar9 = 0;
    puVar5 = param_3;
LAB_00019da0:
    do {
      iVar7 = iVar9;
      if (piVar4[-1] < *piVar4) {
        puVar2 = auStack8232 + (piVar4[-1] + -1) * 2 + 2;
        do {
          puVar2 = puVar2 + 2;
        } while (puVar2 != auStack8232 + *piVar4 * 2);
        if ((int)puVar2 <= (int)(auStack8232 + *piVar4 * 2)) goto LAB_00019de4;
      }
      else {
LAB_00019de4:
        *(undefined4 *)pdVar6 = 0;
        *(undefined4 *)((int)pdVar6 + 4) = 0;
      }
      *puVar5 = 1;
      if (param_5 == 2) {
LAB_00019e34:
        iVar9 = iVar7 + 1;
        pdVar6 = pdVar6 + 1;
        iVar3 = iVar9 - param_7;
        bVar11 = iVar9 == param_7;
        piVar4 = piVar4 + 1;
        puVar5 = puVar5 + 1;
        if (bVar11) break;
        goto LAB_00019da0;
      }
      dVar13 = *pdVar6;
      if (param_5 < 3) {
        *puVar5 = 0;
        iVar9 = *piVar4;
        iVar3 = piVar4[-1];
        if (iVar3 < iVar9) {
          puVar2 = param_2 + iVar3 * 2;
          do {
            iVar3 = iVar3 + 1;
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2 = puVar2 + 2;
          } while (iVar3 != iVar9);
        }
        goto LAB_00019e34;
      }
      iVar9 = iVar7 + 1;
      iVar3 = iVar9 - param_7;
      bVar11 = iVar9 == param_7;
      pdVar6 = pdVar6 + 1;
      dVar14 = dVar14 + (dVar13 / 6.0) * (double)(longlong)(*piVar4 - piVar4[-1]);
      piVar4 = piVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (!bVar11);
    bVar10 = SBORROW4(iVar7 + 1,param_7);
  }
  dVar13 = (double)(longlong)param_6;
  if (bVar11 || iVar3 < 0 != bVar10) {
    dVar13 = dVar14 - dVar13;
  }
  if (!bVar11 && iVar3 < 0 == bVar10) {
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      *param_2 = 0;
      param_2[1] = 0;
      param_2 = param_2 + 2;
    } while (iVar3 < iVar8);
    if (0 < param_7) {
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 1;
        *param_3 = 0;
        param_3 = param_3 + 1;
      } while (iVar3 != param_7);
    }
    dVar13 = 0.0;
  }
  return dVar13;
}



void AudioAACENCLtpEnd(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*param_1 != 0) {
    uVar2 = 0;
    do {
      puVar1 = param_1 + uVar2 * 0xc9ee;
      uVar2 = uVar2 + 1;
      if ((void *)puVar1[0x1097] != (void *)0x0) {
        AudioAACENCFreeMemory((void *)puVar1[0x1097]);
        puVar1[0x1097] = 0;
      }
      if ((void *)puVar1[0x1098] != (void *)0x0) {
        AudioAACENCFreeMemory((void *)puVar1[0x1098]);
        puVar1[0x1098] = 0;
      }
      if ((void *)puVar1[0x1099] != (void *)0x0) {
        AudioAACENCFreeMemory((void *)puVar1[0x1099]);
        puVar1[0x1099] = 0;
      }
      if ((void *)puVar1[0x109a] != (void *)0x0) {
        AudioAACENCFreeMemory((void *)puVar1[0x109a]);
        puVar1[0x109a] = 0;
      }
    } while (uVar2 < *param_1);
  }
  if ((void *)param_1[0x1a973] == (void *)0x0) {
    return;
  }
  AudioAACENCFreeMemory((void *)param_1[0x1a973]);
  *(undefined *)(param_1 + 0x1a973) = 0;
  *(undefined *)((int)param_1 + 0x6a5cd) = 0;
  *(undefined *)((int)param_1 + 0x6a5ce) = 0;
  *(undefined *)((int)param_1 + 0x6a5cf) = 0;
  return;
}



undefined4 AudioAACENCLtpInit(uint *param_1)

{
  void *pvVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  
  if (*param_1 != 0) {
    uVar5 = 0;
    do {
      pvVar1 = AudioAACENCAllocMemory(0x6000);
      puVar6 = param_1 + uVar5 * 0xc9ee;
      puVar6[0x1097] = (uint)pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_0001a1a0;
      pvVar1 = AudioAACENCAllocMemory(0x4000);
      puVar6[0x1098] = (uint)pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_0001a1a0;
      pvVar1 = AudioAACENCAllocMemory(0x2000);
      puVar6[0x1099] = (uint)pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_0001a1a0;
      pvVar1 = AudioAACENCAllocMemory(0x2000);
      puVar6[0x109a] = (uint)pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_0001a1a0;
      iVar4 = 0xc00;
      puVar3 = (undefined4 *)(puVar6[0x1097] - 8);
      do {
        iVar4 = iVar4 + -1;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3 = puVar3 + 2;
      } while (iVar4 != 0);
      iVar4 = 8;
      puVar6[0x1001] = 0;
      puVar2 = puVar6 + 0x108c;
      do {
        iVar4 = iVar4 + -1;
        puVar2[1] = 0;
        puVar2[-0x87] = 0;
        puVar2 = puVar2 + 1;
      } while (iVar4 != 0);
      puVar2 = puVar6 + 0x100c;
      iVar4 = 0x80;
      do {
        iVar4 = iVar4 + -1;
        puVar2 = puVar2 + 1;
        *puVar2 = 0;
      } while (iVar4 != 0);
      iVar4 = 0x800;
      puVar6[0x1096] = 1;
      puVar3 = (undefined4 *)(puVar6[0x1098] - 8);
      do {
        iVar4 = iVar4 + -1;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3 = puVar3 + 2;
      } while (iVar4 != 0);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *param_1);
  }
  pvVar1 = AudioAACENCAllocMemory(0x4000);
  *(char *)(param_1 + 0x1a973) = (char)pvVar1;
  *(char *)((int)param_1 + 0x6a5cd) = (char)((uint)((int)pvVar1 << 0x10) >> 0x18);
  *(char *)((int)param_1 + 0x6a5ce) = (char)((uint)((int)pvVar1 << 8) >> 0x18);
  *(char *)((int)param_1 + 0x6a5cf) = (char)((uint)pvVar1 >> 0x18);
  if (pvVar1 != (void *)0x0) {
    return 0;
  }
LAB_0001a1a0:
  AudioAACENCLtpEnd(param_1);
  return 0xffffffff;
}



void AudioAACENCLtpEncode(undefined4 param_1,int param_2,int *param_3,int *param_4,double *param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined uVar10;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined8 uVar11;
  double dVar12;
  
  uVar1 = *(uint *)(param_2 + 8);
  param_3[0x94] = 0;
  param_3[0x95] = 0;
  if ((uVar1 < 4) && ((1 << (uVar1 & 0xff) & 0xbU) != 0)) {
    iVar8 = *(int *)(param_2 + 0x23c);
    iVar5 = iVar8 + -0x28;
    if (0x27 < iVar8) {
      iVar8 = 0x28;
    }
    param_3[2] = 0;
    param_3[3] = 0;
    iVar3 = 0;
    do {
      coprocessor_function(0xb,6,5,in_cr0,in_cr0,in_cr0);
      if (iVar5 < 0) {
        *param_3 = iVar3;
      }
      iVar4 = iVar3 + 1;
      iVar5 = iVar3 + -7;
      iVar3 = iVar4;
    } while (iVar4 != 8);
    puVar2 = (undefined8 *)(param_3[0x96] + 0x3ff8);
    iVar5 = 0x800;
    coprocessor_function(0xb,6,5,in_cr1,in_cr0,in_cr1);
    *(undefined8 *)(param_3 + 2) = (&DAT_00028050)[*param_3];
    puVar7 = (undefined4 *)0xfffffff8;
    do {
      puVar2 = puVar2 + 1;
      iVar5 = iVar5 + 1;
      uVar11 = *puVar2;
      coprocessor_function(0xb,6,5,in_cr0,in_cr0,in_cr1);
      puVar7[2] = (int)uVar11;
      puVar7[3] = (int)((ulonglong)uVar11 >> 0x20);
      puVar7 = puVar7 + 2;
    } while (iVar5 != 0xc00);
    iVar5 = 0x400;
    puVar7 = (undefined4 *)0x1ff8;
    do {
      iVar5 = iVar5 + 1;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7 = puVar7 + 2;
    } while (iVar5 != 0x800);
    uVar10 = param_4 == (int *)0x0;
    puVar7 = (undefined4 *)param_3[0x97];
    param_3[0x8c] = 0;
    uVar9 = *(uint *)(param_2 + 0x23c);
    uVar1 = param_3[0x95];
    if (!(bool)uVar10) {
      AudioAACENCTnsEncodeFilterOnly
                (param_4,uVar9,uVar9,*(int *)(param_2 + 8),param_2 + 0x240,(int)puVar7);
      uVar9 = *(uint *)(param_2 + 0x23c);
    }
    FUN_00019d10((int)param_5,puVar7,param_3 + 0xc,param_2 + 0x240,uVar1,iVar8,uVar9);
    param_3[0x94] = (uint)!(bool)uVar10;
    if (!(bool)uVar10 == 0) {
      param_3[0x95] = 1;
    }
    else {
      iVar5 = *(int *)(param_2 + (iVar8 + 0x90) * 4);
      if (0 < iVar5) {
        pdVar6 = (double *)param_3[0x97];
        iVar8 = 0;
        do {
          iVar8 = iVar8 + 1;
          dVar12 = *pdVar6;
          pdVar6 = pdVar6 + 1;
          *param_5 = *param_5 - dVar12;
          param_5 = param_5 + 1;
        } while (iVar8 != iVar5);
      }
    }
  }
  return;
}



void AudioAACENCLtpReconstruct(int param_1,int param_2,double *param_3)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  if (*(int *)(param_2 + 0x250) == 0) {
    return;
  }
  if (3 < *(uint *)(param_1 + 8)) {
    return;
  }
  if ((1 << (*(uint *)(param_1 + 8) & 0xff) & 0xbU) == 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x23c);
  if (0x27 < iVar3) {
    iVar3 = 0x28;
  }
  iVar3 = *(int *)(param_1 + (iVar3 + 0x90) * 4);
  if (iVar3 < 1) {
    return;
  }
  pdVar1 = *(double **)(param_2 + 0x25c);
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    dVar4 = *pdVar1;
    pdVar1 = pdVar1 + 1;
    *param_3 = *param_3 + dVar4;
    param_3 = param_3 + 1;
  } while (iVar2 != iVar3);
  return;
}



void AudioAACENCLtpUpdate(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (0x600 - param_4) * 2;
  if (0 < iVar5) {
    iVar4 = 0;
    puVar1 = *(undefined4 **)(param_1 + 600);
    puVar3 = *(undefined4 **)(param_1 + 600) + param_4 * 2;
    do {
      iVar4 = iVar4 + 1;
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      puVar1 = puVar1 + 2;
      puVar3 = puVar3 + 2;
    } while (iVar4 != iVar5);
  }
  if (0 < param_4) {
    iVar5 = 0;
    puVar1 = (undefined4 *)(*(int *)(param_1 + 600) + (0xc00 - param_4) * 8);
    puVar3 = (undefined4 *)(*(int *)(param_1 + 600) + (0x600 - param_4) * 0x10);
    do {
      iVar5 = iVar5 + 1;
      uVar2 = param_2[1];
      *puVar3 = *param_2;
      puVar3[1] = uVar2;
      uVar2 = param_3[1];
      *puVar1 = *param_3;
      puVar1[1] = uVar2;
      param_3 = param_3 + 2;
      puVar1 = puVar1 + 2;
      puVar3 = puVar3 + 2;
      param_2 = param_2 + 2;
    } while (iVar5 != param_4);
  }
  return;
}



void AudioAACENCMSEncode(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  bool bVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  uint local_a0;
  uint uStack156;
  uint local_98;
  uint uStack148;
  uint local_90;
  uint uStack140;
  uint local_88;
  uint uStack132;
  int local_7c;
  int local_64;
  int *local_58;
  int local_38;
  
  if (param_4 != 0) {
    local_38 = 0;
    do {
      iVar7 = local_38 * 0x224 + param_2;
      if (((*(int *)(iVar7 + 4) != 0) && (*(int *)(iVar7 + 0x14) != 0)) &&
         (*(int *)(iVar7 + 8) != 0)) {
        iVar18 = *(int *)(iVar7 + 0xc);
        *(undefined4 *)(iVar7 + 0x20) = 0;
        iVar26 = local_38 * 0x327b8 + param_1;
        iVar14 = iVar18 * 0x327b8 + param_1;
        iVar19 = iVar18 * 0x224 + param_2;
        iVar16 = *(int *)(iVar26 + 8);
        iVar12 = param_5;
        if (param_5 != 0) {
          iVar12 = 1;
        }
        iVar23 = *(int *)(iVar14 + 8);
        *(undefined4 *)(iVar19 + 0x20) = 0;
        if (iVar16 != iVar23) {
          iVar12 = 0;
        }
        if (iVar12 != 0) {
          iVar12 = *(int *)(iVar26 + 0x23c);
          uVar30 = *(undefined8 *)(iVar26 + 0x630);
          uVar29 = *(undefined8 *)(iVar14 + 0x630);
          *(undefined4 *)(iVar7 + 0x20) = 1;
          uVar29 = VectorAdd(uVar30,uVar29,8);
          *(undefined4 *)(iVar7 + 0x10) = 1;
          iVar16 = (int)((longlong)uVar29 >> 0x21);
          uVar5 = (uint)((byte)((ulonglong)uVar29 >> 0x20) & 1) << 0x1f | (uint)uVar29 >> 1;
          *(undefined4 *)(iVar19 + 0x20) = 1;
          *(uint *)(undefined8 *)(iVar14 + 0x630) = uVar5;
          *(int *)(iVar14 + 0x634) = iVar16;
          *(uint *)(undefined8 *)(iVar26 + 0x630) = uVar5;
          *(int *)(iVar26 + 0x634) = iVar16;
          if (0 < iVar12) {
            iVar12 = iVar12 << 2;
            local_64 = 0;
            local_58 = (int *)(iVar26 + 0x23c);
            do {
              while( true ) {
                piVar6 = local_58 + 1;
                iVar14 = *piVar6;
                iVar16 = local_58[2];
                local_58 = piVar6;
                if (iVar14 < iVar16) break;
LAB_0001a800:
                *(undefined4 *)(iVar7 + 0x20 + local_64 + 4) = 0;
                *(undefined4 *)(iVar19 + 0x20 + local_64 + 4) = 0;
                local_64 = local_64 + 4;
                if (local_64 == iVar12) goto LAB_0001a7d8;
              }
              local_a0 = 0;
              uStack156 = 0;
              iVar26 = iVar14 * 4;
              iVar20 = *(int *)(param_3 + local_38 * 4);
              iVar24 = 0;
              iVar25 = 0;
              iVar8 = *(int *)(param_3 + iVar18 * 4);
              iVar23 = 0;
              iVar21 = 0;
              local_90 = 0;
              uStack140 = 0;
              local_98 = 0;
              uStack148 = 0;
              local_88 = 0;
              uStack132 = 0;
              local_7c = 0;
              iVar22 = iVar14;
              do {
                iVar22 = iVar22 + 1;
                uVar10 = *(uint *)(iVar20 + iVar26 + iVar24);
                uVar13 = *(uint *)(iVar8 + iVar26 + iVar24);
                iVar24 = iVar24 + 4;
                iVar17 = (uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f);
                uVar9 = uVar10 + uVar13;
                uVar5 = uVar10 - uVar13;
                iVar27 = (uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f);
                iVar15 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
                if (iVar23 < iVar27) {
                  iVar23 = iVar27;
                }
                if (iVar21 < iVar17) {
                  iVar21 = iVar17;
                }
                iVar17 = (uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f);
                if (local_7c < iVar15) {
                  local_7c = iVar15;
                }
                if (iVar25 < iVar17) {
                  iVar25 = iVar17;
                }
                lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar9 + CONCAT44(uStack132,local_88);
                local_88 = (uint)lVar1;
                uStack132 = (uint)((ulonglong)lVar1 >> 0x20);
                lVar2 = (longlong)(int)uVar5 * (longlong)(int)uVar5 + CONCAT44(uStack148,local_98);
                local_98 = (uint)lVar2;
                uStack148 = (uint)((ulonglong)lVar2 >> 0x20);
                lVar3 = (longlong)(int)uVar10 * (longlong)(int)uVar10 + CONCAT44(uStack140,local_90)
                ;
                local_90 = (uint)lVar3;
                uStack140 = (uint)((ulonglong)lVar3 >> 0x20);
                lVar4 = (longlong)(int)uVar13 * (longlong)(int)uVar13 + CONCAT44(uStack156,local_a0)
                ;
                local_a0 = (uint)lVar4;
                uStack156 = (uint)((ulonglong)lVar4 >> 0x20);
              } while (iVar22 != iVar16);
              if ((int)(uStack148 - (uStack132 + (local_88 > local_98))) < 0 !=
                  (lVar2 < 0 == -1 < lVar1 &&
                  (int)(uStack148 + ~uStack132 + (uint)(local_88 <= local_98)) < 0 != lVar2 < 0)) {
                local_88 = local_98;
                uStack132 = uStack148;
              }
              if ((int)(uStack156 - (uStack140 + (local_90 > local_a0))) < 0 !=
                  (lVar4 < 0 == -1 < lVar3 &&
                  (int)(uStack156 + ~uStack140 + (uint)(local_90 <= local_a0)) < 0 != lVar4 < 0)) {
                local_90 = local_a0;
                uStack140 = uStack156;
              }
              uVar5 = uStack140 << 2 | local_90 >> 0x1e;
              bVar28 = local_90 << 2 <= local_88;
              if ((int)(uStack132 - (uVar5 + !bVar28)) < 0 ==
                  ((int)uStack132 < 0 == -1 < (int)uVar5 &&
                  (int)(uStack132 + ~uVar5 + (uint)bVar28) < 0 != (int)uStack132 < 0))
              goto LAB_0001a800;
              if (iVar21 <= iVar25) {
                iVar25 = iVar21;
              }
              if (iVar23 <= local_7c) {
                local_7c = iVar23;
              }
              if (local_7c + iVar25 * -2 < 0 == SBORROW4(local_7c,iVar25 * 2)) goto LAB_0001a800;
              *(undefined4 *)(iVar7 + 0x20 + local_64 + 4) = 1;
              *(undefined4 *)(iVar19 + 0x20 + local_64 + 4) = 1;
              piVar6 = (int *)(iVar8 + iVar26);
              piVar11 = (int *)(iVar20 + iVar26);
              do {
                iVar26 = *piVar6;
                iVar14 = iVar14 + 1;
                iVar23 = *piVar11;
                *piVar11 = iVar23 + iVar26 >> 1;
                *piVar6 = iVar23 - iVar26 >> 1;
                piVar6 = piVar6 + 1;
                piVar11 = piVar11 + 1;
              } while (iVar14 != iVar16);
              local_64 = local_64 + 4;
            } while (local_64 != iVar12);
          }
        }
      }
LAB_0001a7d8:
      local_38 = local_38 + 1;
    } while (local_38 != param_4);
  }
  return;
}



void AudioAACENCMSReconstruct(int param_1,int param_2,int param_3)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  double *pdVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  double dVar12;
  double dVar13;
  
  if (0 < param_3) {
    iVar9 = 0;
    iVar7 = param_1;
    do {
      if ((((*(int *)(param_2 + 4) != 0) && (*(int *)(param_2 + 0x14) != 0)) &&
          (*(int *)(param_2 + 8) != 0)) &&
         ((iVar8 = *(int *)(param_2 + 0xc), *(int *)(param_2 + 0x20) != 0 &&
          (iVar6 = *(int *)(iVar7 + 0x23c), 0 < iVar6)))) {
        piVar5 = (int *)(param_2 + 0x20);
        piVar10 = (int *)(iVar7 + 0x23c);
        do {
          piVar5 = piVar5 + 1;
          piVar11 = piVar10 + 1;
          iVar3 = *piVar11;
          iVar2 = piVar10[2];
          if ((*piVar5 != 0) && (iVar3 < iVar2)) {
            pdVar4 = (double *)(*(int *)(iVar7 + 0x844) + iVar3 * 8);
            pdVar1 = (double *)(*(int *)(iVar8 * 0x327b8 + param_1 + 0x844) + iVar3 * 8);
            do {
              dVar13 = *pdVar4;
              iVar3 = iVar3 + 1;
              dVar12 = *pdVar1;
              *pdVar4 = dVar13 + dVar12;
              pdVar4 = pdVar4 + 1;
              *pdVar1 = dVar13 - dVar12;
              pdVar1 = pdVar1 + 1;
            } while (iVar3 != iVar2);
          }
          piVar10 = piVar11;
        } while (piVar11 != (int *)(iVar7 + 0x23c) + iVar6);
      }
      iVar9 = iVar9 + 1;
      param_2 = param_2 + 0x224;
      iVar7 = iVar7 + 0x327b8;
    } while (iVar9 != param_3);
  }
  return;
}



void FUN_0001afdc(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    AudioAACENCFreeMemory(*(void **)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
    AudioAACENCFreeMemory(*(void **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (param_3 == 0) {
    return;
  }
  iVar2 = 0;
  iVar1 = param_2;
  do {
    iVar2 = iVar2 + 1;
    if (*(void **)(iVar1 + 8) != (void *)0x0) {
      AudioAACENCFreeMemory(*(void **)(iVar1 + 8));
      *(undefined4 *)(iVar1 + 8) = 0;
    }
    iVar1 = iVar1 + 0x14;
  } while (iVar2 != param_3);
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    if (*(void **)(param_2 + 0x10) != (void *)0x0) {
      AudioAACENCFreeMemory(*(void **)(param_2 + 0x10));
      *(undefined4 *)(param_2 + 0x10) = 0;
    }
    param_2 = param_2 + 0x14;
  } while (iVar1 != param_3);
  return;
}



undefined4 FUN_0001b084(double *param_1,undefined4 *param_2,int param_3,uint param_4)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  *param_1 = (double)(ulonglong)param_4;
  if (param_3 == 0) {
    return 0;
  }
  iVar4 = 0;
  puVar3 = param_2;
  do {
    iVar4 = iVar4 + 1;
    pvVar1 = AudioAACENCAllocMemory(0x88);
    if (pvVar1 == (void *)0x0) goto LAB_0001b0d8;
    puVar3[4] = pvVar1;
    puVar3 = puVar3 + 5;
  } while (iVar4 != param_3);
  iVar4 = 0;
  puVar3 = param_2;
  while( true ) {
    *puVar3 = 0x400;
    pvVar1 = AudioAACENCAllocMemory(0x2000);
    iVar4 = iVar4 + 1;
    puVar3[2] = pvVar1;
    puVar3 = puVar3 + 5;
    if (pvVar1 == (void *)0x0) break;
    memset(pvVar1,0,0x2000);
    if (iVar4 == param_3) {
      iVar2 = 0;
      iVar4 = 0;
      do {
        iVar2 = iVar2 + 1;
        *(undefined4 *)((int)param_2 + iVar4 + 4) = 0x80;
        iVar4 = iVar4 + 0x14;
      } while (iVar2 != param_3);
      return 0;
    }
  }
LAB_0001b0d8:
  FUN_0001afdc((int)param_1,(int)param_2,param_3);
  return 0xffffffff;
}



double FUN_0001b168(int param_1,int param_2,double *param_3,undefined4 *param_4)

{
  double *pdVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  int iVar8;
  double *pdVar9;
  bool bVar10;
  undefined4 in_cr0;
  undefined4 in_cr3;
  undefined4 in_cr4;
  double in_d16;
  double dVar11;
  double dVar12;
  undefined4 local_218;
  undefined4 uStack532;
  undefined4 local_170;
  undefined4 uStack364;
  undefined8 local_c8;
  double local_c0 [20];
  
  bVar10 = param_1 == 0;
  if (-1 < param_1) {
    iVar8 = param_2 - param_1;
    pdVar7 = (double *)&local_c8;
    do {
      *(undefined4 *)pdVar7 = 0;
      *(undefined4 *)((int)pdVar7 + 4) = 0;
      if (0 < param_2) {
        in_d16 = 0.0;
        pdVar6 = (double *)((int)param_3 + (-8 - (int)&local_c8) + (int)(pdVar7 + 1));
        iVar3 = 0;
        pdVar5 = param_3;
        do {
          iVar3 = iVar3 + 1;
          dVar12 = *pdVar5;
          pdVar5 = pdVar5 + 1;
          dVar11 = *pdVar6;
          pdVar6 = pdVar6 + 1;
          in_d16 = in_d16 + dVar12 * dVar11;
        } while (iVar3 != param_2);
        *pdVar7 = in_d16;
      }
      param_2 = param_2 + -1;
      bVar10 = param_2 == iVar8 + -1;
      pdVar7 = pdVar7 + 1;
    } while (!bVar10);
  }
  if (bVar10) {
    *param_4 = 0;
    param_4[1] = 0x3ff00000;
    if (0 < param_1) {
      iVar8 = 1;
      do {
        iVar8 = iVar8 + 1;
        param_4[2] = 0;
        param_4[3] = 0;
        param_4 = param_4 + 2;
      } while (iVar8 <= param_1);
    }
    dVar11 = 0.0;
  }
  else {
    if (param_1 < 1) {
      in_d16 = local_c8;
    }
    *param_4 = 0;
    param_4[1] = 0x3ff00000;
    local_218 = 0;
    uStack532 = 0x3ff00000;
    local_170 = 0;
    uStack364 = 0x3ff00000;
    if (0 < param_1) {
      dVar11 = 1.0;
      iVar8 = 1;
      pdVar6 = (double *)(param_4 + 2);
      pdVar7 = (double *)&local_170;
      pdVar5 = (double *)&local_218;
      iVar3 = 8;
      coprocessor_function(0xb,6,5,in_cr3,in_cr3,in_cr4);
      do {
        dVar11 = (0.0 - dVar11) / local_c8;
        *pdVar6 = dVar11;
        *(double *)((int)pdVar5 + iVar3) = dVar11;
        coprocessor_function(0xb,6,5,in_cr0,in_cr0,in_cr3);
        pdVar1 = pdVar5;
        pdVar5 = pdVar7;
        iVar4 = iVar8;
        while( true ) {
          pdVar7 = pdVar1;
          iVar8 = iVar4 + 1;
          in_d16 = local_c8;
          if (param_1 < iVar8) goto LAB_0001b394;
          pdVar6 = pdVar6 + 1;
          iVar3 = iVar3 + 8;
          dVar11 = *pdVar7;
          coprocessor_function(0xb,6,5,in_cr3,in_cr3,in_cr4);
          if (iVar8 == 1) break;
          pdVar1 = local_c0 + iVar4;
          pdVar2 = pdVar7;
          do {
            pdVar2 = pdVar2 + 1;
            pdVar1 = pdVar1 + -1;
            dVar11 = dVar11 + *pdVar1 * *pdVar2;
          } while (pdVar1 != local_c0);
          pdVar1 = (double *)((int)pdVar7 + iVar3);
          iVar4 = 1;
          dVar11 = (0.0 - dVar11) / local_c8;
          *pdVar6 = dVar11;
          *(double *)((int)pdVar5 + iVar3) = dVar11;
          pdVar2 = pdVar5;
          pdVar9 = pdVar7;
          do {
            pdVar9 = pdVar9 + 1;
            pdVar1 = pdVar1 + -1;
            iVar4 = iVar4 + 1;
            dVar12 = *pdVar9 + *pdVar1 * dVar11;
            *(int *)(pdVar2 + 1) = SUB84(dVar12,0);
            *(int *)((int)pdVar2 + 0xc) = (int)((ulonglong)dVar12 >> 0x20);
            pdVar2 = pdVar2 + 1;
          } while (iVar4 != iVar8);
          coprocessor_function(0xb,6,5,in_cr0,in_cr0,in_cr3);
          pdVar1 = pdVar5;
          pdVar5 = pdVar7;
          iVar4 = iVar8;
        }
      } while( true );
    }
LAB_0001b394:
    dVar11 = local_c8 / in_d16;
  }
  return dVar11;
}



void FUN_0001b3a8(int param_1,undefined4 *param_2,int *param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  double *pdVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  double *pdVar11;
  int iVar12;
  bool bVar13;
  double dVar14;
  
  iVar8 = *param_3;
  pdVar1 = (double *)AudioAACENCAllocMemory(param_1 * 8);
  if (param_3[1] == 0) {
    uVar6 = param_2[1];
    *(undefined4 *)pdVar1 = *param_2;
    *(undefined4 *)((int)pdVar1 + 4) = uVar6;
    if (1 < iVar8) {
      iVar4 = 1;
      pdVar3 = pdVar1;
      pdVar2 = (double *)(param_2 + 2);
      do {
        uVar6 = *(undefined4 *)((int)pdVar2 + 4);
        pdVar11 = pdVar3 + 1;
        *(undefined4 *)pdVar11 = *(undefined4 *)pdVar2;
        *(undefined4 *)((int)pdVar3 + 0xc) = uVar6;
        dVar14 = *pdVar2;
        iVar9 = 1;
        pdVar7 = (double *)(param_3 + 4);
        pdVar3 = pdVar11;
        do {
          pdVar7 = pdVar7 + 1;
          pdVar3 = pdVar3 + -1;
          iVar9 = iVar9 + 1;
          dVar14 = dVar14 + *pdVar3 * *pdVar7;
          *pdVar2 = dVar14;
        } while (iVar9 <= iVar4);
        iVar4 = iVar4 + 1;
        pdVar3 = pdVar11;
        pdVar2 = pdVar2 + 1;
      } while (iVar4 != iVar8);
    }
    if (iVar8 < param_1) {
      pdVar3 = pdVar1 + iVar8 + -1;
      iVar4 = iVar8;
      pdVar2 = (double *)(param_2 + iVar8 * 2);
      do {
        uVar6 = *(undefined4 *)((int)pdVar2 + 4);
        pdVar7 = pdVar3 + 1;
        *(undefined4 *)pdVar7 = *(undefined4 *)pdVar2;
        *(undefined4 *)((int)pdVar3 + 0xc) = uVar6;
        if (0 < iVar8) {
          dVar14 = *pdVar2;
          pdVar11 = (double *)(param_3 + 4);
          iVar9 = 1;
          pdVar3 = pdVar7;
          do {
            pdVar11 = pdVar11 + 1;
            pdVar3 = pdVar3 + -1;
            iVar9 = iVar9 + 1;
            dVar14 = dVar14 + *pdVar3 * *pdVar11;
            *pdVar2 = dVar14;
          } while (iVar9 <= iVar8);
        }
        iVar4 = iVar4 + 1;
        pdVar3 = pdVar7;
        pdVar2 = pdVar2 + 1;
      } while (iVar4 != param_1);
    }
  }
  else {
    iVar12 = param_1 + -1;
    iVar9 = param_1 + -2;
    iVar4 = iVar12 - iVar8;
    uVar6 = (param_2 + iVar12 * 2)[1];
    *(undefined4 *)(pdVar1 + iVar12) = param_2[iVar12 * 2];
    *(undefined4 *)((int)(pdVar1 + iVar12) + 4) = uVar6;
    if (iVar4 < iVar9) {
      puVar10 = param_2 + param_1 * 2;
      pdVar3 = pdVar1 + iVar9;
      iVar12 = 0;
      do {
        uVar6 = puVar10[-3];
        *(undefined4 *)pdVar3 = puVar10[-4];
        *(undefined4 *)((int)pdVar3 + 4) = uVar6;
        dVar14 = *(double *)(puVar10 + -4);
        iVar12 = iVar12 + 1;
        iVar5 = 1;
        pdVar2 = pdVar3;
        pdVar7 = (double *)(param_3 + 4);
        do {
          pdVar2 = pdVar2 + 1;
          pdVar7 = pdVar7 + 1;
          iVar5 = iVar5 + 1;
          dVar14 = dVar14 + *pdVar2 * *pdVar7;
          *(double *)(puVar10 + -4) = dVar14;
        } while (iVar5 <= iVar12);
        puVar10 = puVar10 + -2;
        pdVar3 = pdVar3 + -1;
      } while (iVar12 != iVar9 - iVar4);
    }
    if (-1 < iVar4) {
      pdVar3 = pdVar1 + iVar4 + 1;
      pdVar2 = (double *)(param_2 + (iVar4 + 1) * 2);
      do {
        pdVar7 = pdVar2 + -1;
        uVar6 = *(undefined4 *)((int)pdVar2 + -4);
        pdVar2 = pdVar3 + -1;
        *(undefined4 *)pdVar2 = *(undefined4 *)pdVar7;
        *(undefined4 *)((int)pdVar3 + -4) = uVar6;
        if (0 < iVar8) {
          dVar14 = *pdVar7;
          pdVar11 = (double *)(param_3 + 4);
          iVar9 = 1;
          pdVar3 = pdVar2;
          do {
            pdVar3 = pdVar3 + 1;
            pdVar11 = pdVar11 + 1;
            iVar9 = iVar9 + 1;
            dVar14 = dVar14 + *pdVar3 * *pdVar11;
            *pdVar7 = dVar14;
          } while (iVar9 <= iVar8);
        }
        bVar13 = iVar4 != 0;
        iVar4 = iVar4 + -1;
        pdVar3 = pdVar2;
        pdVar2 = pdVar7;
      } while (bVar13);
    }
  }
  if (pdVar1 == (double *)0x0) {
    return;
  }
  AudioAACENCFreeMemory(pdVar1);
  return;
}



void AudioAACENCTnsInit(uint *param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = *param_1;
  uVar4 = param_1[0x19519];
  if (uVar3 != 0) {
    iVar1 = param_1[2] * 2;
    uVar5 = 0;
    uVar8 = (uint)*(ushort *)(&DAT_000280d8 + iVar1);
    uVar7 = (uint)*(ushort *)(&DAT_00028090 + iVar1);
    if ((int)param_1[2] < 6) {
      do {
        puVar6 = param_1 + uVar5 * 0xc9ee;
        if (uVar4 == 2) {
          uVar2 = *(ushort *)(&UNK_000280c0 + iVar1);
          puVar6[0x22c] = (uint)*(ushort *)(&DAT_000280a8 + iVar1);
          puVar6[0x22d] = (uint)uVar2;
          puVar6[0x22e] = 0xc;
LAB_0001b874:
          puVar6[0x22f] = 7;
        }
        else {
          if ((uVar4 == 4) || (uVar4 == 1)) {
            uVar2 = *(ushort *)(&UNK_000280c0 + iVar1);
            puVar6[0x22c] = (uint)*(ushort *)(&DAT_000280a8 + iVar1);
            puVar6[0x22d] = (uint)uVar2;
            if (param_1[0x19518] == 1) {
              uVar9 = 0x14;
            }
            else {
              uVar9 = 0xc;
            }
            puVar6[0x22e] = uVar9;
            goto LAB_0001b874;
          }
        }
        uVar5 = uVar5 + 1;
        puVar6[0x22a] = uVar7;
        puVar6[0x22b] = uVar8;
      } while (uVar5 < uVar3);
    }
    else {
      do {
        while (puVar6 = param_1 + uVar5 * 0xc9ee, uVar4 != 2) {
          if ((uVar4 == 4) || (uVar4 == 1)) {
            uVar2 = *(ushort *)(&UNK_000280c0 + iVar1);
            puVar6[0x22c] = (uint)*(ushort *)(&DAT_000280a8 + iVar1);
            puVar6[0x22d] = (uint)uVar2;
LAB_0001b76c:
            puVar6[0x22e] = 0x14;
            goto LAB_0001b774;
          }
          uVar5 = uVar5 + 1;
          puVar6[0x22a] = uVar7;
          puVar6[0x22b] = uVar8;
          if (uVar3 <= uVar5) {
            return;
          }
        }
        uVar2 = *(ushort *)(&UNK_000280c0 + iVar1);
        puVar6[0x22c] = (uint)*(ushort *)(&DAT_000280a8 + iVar1);
        puVar6[0x22d] = (uint)uVar2;
        if (param_1[0x19518] != 1) goto LAB_0001b76c;
        puVar6[0x22e] = 0xc;
LAB_0001b774:
        uVar5 = uVar5 + 1;
        puVar6[0x22f] = 7;
        puVar6[0x22a] = uVar7;
        puVar6[0x22b] = uVar8;
      } while (uVar5 < uVar3);
    }
  }
  return;
}



void AudioAACENCTnsEncode
               (undefined4 *param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  double *pdVar3;
  int *piVar4;
  double *pdVar5;
  int iVar6;
  double *pdVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  double *pdVar12;
  double *pdVar13;
  uint uVar14;
  double *pdVar15;
  uint uVar16;
  bool bVar17;
  char cVar18;
  bool bVar19;
  char cVar20;
  bool bVar21;
  double dVar22;
  double dVar23;
  undefined4 local_d8;
  undefined4 uStack212;
  undefined4 local_d0 [43];
  
  if (param_4 == 2) {
    *param_1 = 0;
  }
  else {
    uVar14 = param_1[3];
    uVar16 = param_1[1];
    uVar1 = param_2;
    if ((int)uVar14 <= (int)param_2) {
      uVar1 = uVar14;
    }
    *param_1 = 0;
    if ((int)uVar16 <= (int)uVar14) {
      uVar14 = uVar16;
    }
    if ((int)param_3 <= (int)uVar1) {
      uVar1 = param_3;
    }
    cVar20 = SBORROW4(uVar14,param_3);
    cVar18 = (int)(uVar14 - param_3) < 0;
    bVar19 = uVar14 == param_3;
    if ((int)param_3 <= (int)uVar14) {
      uVar14 = param_3;
    }
    param_1[8] = 0;
    param_1[9] = 4;
    iVar6 = *(int *)(param_5 + (uVar14 & ~((int)uVar14 >> 0x1f)) * 4);
    pdVar13 = (double *)(param_1 + 0x38);
    pdVar15 = (double *)(param_1 + 0xe);
    iVar10 = param_1[5];
    iVar2 = *(int *)(param_5 + (uVar1 & ~((int)uVar1 >> 0x1f)) * 4) - iVar6;
    pdVar3 = (double *)(param_6 + iVar6 * 8);
    FUN_0001b168(iVar10,iVar2,pdVar3,(undefined4 *)pdVar13);
    if (!bVar19 && cVar18 == cVar20) {
      bVar21 = false;
      bVar19 = iVar10 < 0;
      *param_1 = 1;
      param_1[8] = param_1[8] + 1;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = param_2 - uVar16;
      if (!bVar19) {
        piVar4 = param_1 + 10 + (iVar10 + 0x18) * 2;
        do {
          bVar17 = iVar10 == 0;
          if (bVar17 || bVar19 != bVar21) {
            piVar4[-2] = 0;
            piVar4[-1] = 0;
            piVar4 = piVar4 + -2;
          }
          if ((!bVar17 && bVar19 == bVar21) && (piVar4 = piVar4 + -2, !bVar17)) {
            param_1[10] = iVar10;
            param_1[0xe] = 0;
            param_1[0xf] = 0x3ff00000;
            local_d8 = 0;
            uStack212 = 0x3ff00000;
            if (0 < iVar10) {
              iVar6 = 1;
              pdVar5 = pdVar15;
              do {
                pdVar13 = pdVar13 + 1;
                pdVar12 = pdVar5 + 1;
                *(undefined4 *)pdVar12 = 0;
                *(undefined4 *)((int)pdVar5 + 0xc) = 0;
                dVar23 = *pdVar13;
                iVar8 = 1;
                pdVar5 = pdVar12;
                pdVar7 = pdVar15;
                puVar11 = &local_d8;
                do {
                  pdVar7 = pdVar7 + 1;
                  pdVar5 = pdVar5 + -1;
                  iVar8 = iVar8 + 1;
                  dVar22 = *pdVar7 + *pdVar5 * dVar23;
                  puVar11[2] = SUB84(dVar22,0);
                  puVar11[3] = (int)((ulonglong)dVar22 >> 0x20);
                  puVar11 = puVar11 + 2;
                } while (iVar8 <= iVar6);
                iVar8 = 1;
                puVar11 = &local_d8;
                pdVar5 = pdVar15;
                do {
                  iVar8 = iVar8 + 1;
                  uVar9 = puVar11[3];
                  *(undefined4 *)(pdVar5 + 1) = puVar11[2];
                  *(undefined4 *)((int)pdVar5 + 0xc) = uVar9;
                  puVar11 = puVar11 + 2;
                  pdVar5 = pdVar5 + 1;
                } while (iVar8 <= iVar6);
                iVar6 = iVar6 + 1;
                pdVar5 = pdVar12;
              } while (iVar6 <= iVar10);
            }
            goto LAB_0001bb50;
          }
          bVar17 = iVar10 != 0;
          bVar21 = SBORROW4(iVar10,1);
          iVar10 = iVar10 + -1;
          bVar19 = iVar10 < 0;
        } while (bVar17);
      }
      param_1[10] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0x3ff00000;
LAB_0001bb50:
      FUN_0001b3a8(iVar2,(undefined4 *)pdVar3,param_1 + 10);
      return;
    }
  }
  return;
}



void AudioAACENCTnsEncodeFilterOnly
               (int *param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  if (param_4 == 2) {
    uVar7 = param_1[2];
    iVar8 = 0x80;
    iVar6 = 8;
    uVar1 = param_1[4];
  }
  else {
    uVar7 = param_1[1];
    iVar8 = 0x400;
    uVar1 = param_1[3];
    iVar6 = 1;
  }
  iVar5 = 0;
  if ((int)uVar1 <= (int)param_2) {
    param_2 = uVar1;
  }
  if ((int)uVar7 <= (int)uVar1) {
    uVar1 = uVar7;
  }
  if ((int)param_3 <= (int)uVar1) {
    uVar1 = param_3;
  }
  if ((int)param_3 <= (int)param_2) {
    param_2 = param_3;
  }
  iVar3 = 0;
  do {
    while( true ) {
      iVar4 = iVar3 + 1;
      iVar2 = *(int *)(param_5 + (uVar1 & ~((int)uVar1 >> 0x1f)) * 4);
      if ((*param_1 != 0) && (param_1[iVar3 * 0x1ba + 8] != 0)) break;
      iVar5 = iVar5 + iVar8;
      iVar3 = iVar4;
      if (iVar6 <= iVar4) {
        return;
      }
    }
    iVar9 = iVar5 + iVar2;
    iVar5 = iVar5 + iVar8;
    FUN_0001b3a8(*(int *)(param_5 + (param_2 & ~((int)param_2 >> 0x1f)) * 4) - iVar2,
                 (undefined4 *)(param_6 + iVar9 * 8),param_1 + iVar3 * 0x1ba + 10);
    iVar3 = iVar4;
  } while (iVar4 < iVar6);
  return;
}



void AudioAACENCTnsDecodeFilterOnly
               (int *param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  double *pdVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double *pdVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  double *pdVar12;
  int *piVar13;
  int iVar14;
  double *pdVar15;
  double dVar16;
  int local_3c;
  
  if (param_4 == 2) {
    uVar3 = param_1[4];
    uVar9 = param_1[2];
    iVar7 = 0x80;
    local_3c = 8;
  }
  else {
    uVar3 = param_1[3];
    iVar7 = 0x400;
    uVar9 = param_1[1];
    local_3c = 1;
  }
  if ((int)uVar3 <= (int)param_2) {
    param_2 = uVar3;
  }
  if ((int)uVar9 <= (int)uVar3) {
    uVar3 = uVar9;
  }
  if ((int)param_3 <= (int)uVar3) {
    uVar3 = param_3;
  }
  if ((int)param_3 <= (int)param_2) {
    param_2 = param_3;
  }
  iVar1 = *param_1;
  iVar4 = *(int *)(param_5 + (uVar3 & ~((int)uVar3 >> 0x1f)) * 4);
  iVar11 = 0;
  iVar14 = *(int *)(param_5 + (param_2 & ~((int)param_2 >> 0x1f)) * 4) - iVar4;
  pdVar12 = (double *)(param_6 + iVar4 * 8);
  do {
    if ((iVar1 != 0) && (piVar13 = param_1 + iVar11 * 0x1ba + 8, param_1[iVar11 * 0x1ba + 8] != 0))
    {
      iVar4 = piVar13[2];
      if (piVar13[3] == 0) {
        if (1 < iVar4) {
          iVar10 = 1;
          pdVar8 = pdVar12;
          do {
            pdVar8 = pdVar8 + 1;
            dVar16 = *pdVar8;
            iVar5 = 1;
            pdVar2 = pdVar8;
            pdVar15 = (double *)(piVar13 + 6);
            do {
              pdVar15 = pdVar15 + 1;
              pdVar2 = pdVar2 + -1;
              iVar5 = iVar5 + 1;
              dVar16 = dVar16 - *pdVar2 * *pdVar15;
              *pdVar8 = dVar16;
            } while (iVar5 <= iVar10);
            iVar10 = iVar10 + 1;
          } while (iVar10 != iVar4);
        }
        if (iVar4 < iVar14) {
          pdVar8 = pdVar12 + iVar4;
          iVar10 = iVar4;
          do {
            if (0 < iVar4) {
              dVar16 = *pdVar8;
              pdVar15 = (double *)(piVar13 + 6);
              iVar5 = 1;
              pdVar2 = pdVar8;
              do {
                pdVar15 = pdVar15 + 1;
                pdVar2 = pdVar2 + -1;
                iVar5 = iVar5 + 1;
                dVar16 = dVar16 - *pdVar2 * *pdVar15;
                *pdVar8 = dVar16;
              } while (iVar5 <= iVar4);
            }
            iVar10 = iVar10 + 1;
            pdVar8 = pdVar8 + 1;
          } while (iVar10 != iVar14);
        }
      }
      else {
        iVar10 = (iVar14 + -1) - iVar4;
        if (iVar10 < iVar14 + -2) {
          pdVar8 = pdVar12 + iVar14 + -1;
          iVar5 = 0;
          do {
            pdVar8 = pdVar8 + -1;
            dVar16 = *pdVar8;
            iVar5 = iVar5 + 1;
            iVar6 = 1;
            pdVar2 = pdVar8;
            pdVar15 = (double *)(piVar13 + 6);
            do {
              pdVar2 = pdVar2 + 1;
              pdVar15 = pdVar15 + 1;
              iVar6 = iVar6 + 1;
              dVar16 = dVar16 - *pdVar2 * *pdVar15;
              *pdVar8 = dVar16;
            } while (iVar6 <= iVar5);
          } while (iVar5 != (iVar14 + -2) - iVar10);
        }
        if (-1 < iVar10) {
          pdVar8 = pdVar12 + iVar10;
          do {
            if (0 < iVar4) {
              dVar16 = *pdVar8;
              pdVar15 = (double *)(piVar13 + 6);
              iVar5 = 1;
              pdVar2 = pdVar8;
              do {
                pdVar15 = pdVar15 + 1;
                pdVar2 = pdVar2 + 1;
                iVar5 = iVar5 + 1;
                dVar16 = dVar16 - *pdVar2 * *pdVar15;
                *pdVar8 = dVar16;
              } while (iVar5 <= iVar4);
            }
            iVar10 = iVar10 + -1;
            pdVar8 = pdVar8 + -1;
          } while (iVar10 != -1);
        }
      }
    }
    pdVar12 = pdVar12 + iVar7;
    iVar11 = iVar11 + 1;
  } while (iVar11 < local_3c);
  return;
}



undefined4 AudioAACENCGetSRIndex(char *param_1)

{
  undefined4 uVar1;
  
  if ((char *)0x16770 < param_1) {
    return 0;
  }
  if ("_out_INTERNAL" < param_1) {
    return 1;
  }
  if ((char *)0xd881 < param_1) {
    return 2;
  }
  if ((char *)0xb3b8 < param_1) {
    return 3;
  }
  if ((char *)0x92bd < param_1) {
    return 4;
  }
  if ((char *)0x6c40 < param_1) {
    return 5;
  }
  if ((char *)0x59db < param_1) {
    return 6;
  }
  if (param_1 < (char *)0x495f) {
    if ((char *)0x361f < param_1) {
      return 8;
    }
    if (param_1 < (char *)0x2cee) {
      if (param_1 < (char *)0x24af) {
        uVar1 = 0xb;
      }
      else {
        uVar1 = 10;
      }
      return uVar1;
    }
    return 9;
  }
  return 7;
}



undefined4 AudioAACENCMaxBitrate(uint param_1)

{
  undefined4 in_cr0;
  undefined4 in_cr1;
  
  coprocessor_function(0xb,6,5,in_cr1,in_cr1,in_cr0);
  return SUB84(ROUND((double)(ulonglong)param_1 * 0.0009765625 + 0.5),0);
}



undefined4 AudioAACENCMinBitrate(void)

{
  return 8000;
}



undefined4 AudioAACENCGetMaxPredSfb(int param_1)

{
  return *(undefined4 *)(AudioAACENCMaxPredSfb + param_1 * 4);
}



void AudioAACENCBitAllocation(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 in_cr0;
  undefined4 in_cr10;
  double unaff_d8;
  
  if (param_3 != 0) {
    sqrt(unaff_d8);
  }
  coprocessor_function(0xb,6,4,in_cr0,in_cr0,in_cr10);
  return;
}



int AudioAACENCMaxBitresSize(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr7;
  undefined4 in_s14;
  
  coprocessor_function(0xb,2,5,in_cr7,in_cr1,in_cr0);
  return 0x1800 - SUB84(ROUND((double)CONCAT44(param_2,in_s14)),0);
}



void * AudioAACENCAllocMemory(size_t param_1)

{
  void *pvVar1;
  
  if (-1 < (int)param_1) {
    pvVar1 = malloc(param_1);
    return pvVar1;
  }
  return (void *)0x0;
}



void AudioAACENCFreeMemory(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  free(param_1);
  return;
}



int AudioAACENClog2x(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 == 0) {
    iVar1 = -0x4000000;
    uVar2 = 0x20;
  }
  else {
    if (param_1 >> 0x10 == 0) {
      iVar1 = 0x11;
      uVar2 = param_1 << 0x10;
    }
    else {
      iVar1 = 1;
      uVar2 = param_1;
    }
    if (uVar2 >> 0x18 == 0) {
      uVar2 = uVar2 << 8;
      iVar1 = iVar1 + 8;
    }
    if (uVar2 >> 0x1c == 0) {
      uVar2 = uVar2 << 4;
      iVar1 = iVar1 + 4;
    }
    if (uVar2 >> 0x1e == 0) {
      uVar2 = uVar2 << 2;
      iVar1 = iVar1 + 2;
    }
    uVar2 = iVar1 + ((int)uVar2 >> 0x1f);
    iVar1 = (0x1f - uVar2) * 0x4000000;
  }
  uVar3 = (param_1 << 1) << (uVar2 & 0xff);
  uVar2 = uVar3 >> 0x1b;
  iVar4 = *(uint *)(AudioAACENClog2_table + uVar2 * 8) +
          (int)((ulonglong)uVar3 * (ulonglong)*(uint *)(AudioAACENClog2_table + uVar2 * 8) >> 0x20);
  uVar3 = (int)((ulonglong)
                ((longlong)
                 (iVar4 + (int)((ulonglong)
                                ((longlong)
                                 ((int)((ulonglong)
                                        ((longlong)iVar4 *
                                        (longlong)
                                        (int)((ulonglong)((longlong)iVar4 * 0x55555555) >> 0x20)) >>
                                       0x20) - (iVar4 >> 1)) * (longlong)iVar4) >> 0x20)) *
                0x5c551d9) >> 0x20) + *(int *)(AudioAACENClog2_table + uVar2 * 8 + 4);
  uVar2 = (int)uVar3 >> 0x1f;
  return ((uVar3 ^ uVar2) - uVar2) + iVar1;
}



void AudioAACENCAACQuantizeEnd(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    if (*(void **)(param_1 + 0x844) != (void *)0x0) {
      AudioAACENCFreeMemory(*(void **)(param_1 + 0x844));
      *(undefined4 *)(param_1 + 0x844) = 0;
    }
    param_1 = param_1 + 0x327b8;
  } while (iVar1 != param_2);
  return;
}



undefined4 AudioAACENCAACQuantizeInit(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar3 = 0;
  iVar2 = param_1;
  do {
    iVar3 = iVar3 + 1;
    pvVar1 = AudioAACENCAllocMemory(0x2000);
    *(void **)(iVar2 + 0x844) = pvVar1;
    iVar2 = iVar2 + 0x327b8;
    if (pvVar1 == (void *)0x0) {
      AudioAACENCAACQuantizeEnd(param_1,param_2);
      return 0xffffffff;
    }
  } while (iVar3 != param_2);
  return 0;
}



undefined4
AudioAACENCAACQuantize
          (int param_1,undefined param_2,undefined param_3,undefined param_4,undefined param_5,
          int param_6,int param_7)

{
  ushort uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int *__s;
  int iVar16;
  uint *puVar17;
  int *piVar18;
  uint uVar19;
  uint *puVar20;
  int *piVar21;
  uint uVar22;
  int iVar23;
  undefined4 uVar24;
  uint uVar25;
  int *piVar26;
  bool bVar27;
  bool bVar28;
  longlong lVar29;
  undefined8 uVar30;
  uint local_68;
  uint local_64;
  uint *local_5c;
  int local_48;
  int local_44;
  uint local_3c;
  
  iVar10 = 0;
  iVar23 = *(int *)(param_1 + 0x23c);
  __s = (int *)(lowsubbandtable + param_1 + 0x2e0);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0 < iVar23) {
    puVar6 = (undefined4 *)(param_1 + 0x10);
    do {
      iVar10 = iVar10 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = 0;
    } while (iVar10 != iVar23);
  }
  iVar10 = 0;
  puVar6 = (undefined4 *)(param_1 + 0x2f5b4);
  iVar14 = 0;
  do {
    uVar11 = *(uint *)(param_6 + iVar10);
    if ((int)uVar11 < 0) {
      uVar11 = -uVar11;
    }
    bVar27 = (int)uVar11 < 0;
    bVar28 = uVar11 == 0;
    if (bVar28) {
      uVar4 = 0x7fffffff;
    }
    else {
      if (uVar11 >> 0x10 == 0) {
        iVar16 = 0x11;
        uVar4 = uVar11 << 0x10;
      }
      else {
        iVar16 = 1;
        uVar4 = uVar11;
      }
      if (uVar4 >> 0x18 == 0) {
        uVar4 = uVar4 << 8;
        iVar16 = iVar16 + 8;
      }
      if (uVar4 >> 0x1c == 0) {
        uVar4 = uVar4 << 4;
        iVar16 = iVar16 + 4;
      }
      if (uVar4 >> 0x1e == 0) {
        uVar4 = uVar4 << 2;
        iVar16 = iVar16 + 2;
      }
      uVar19 = iVar16 + ((int)uVar4 >> 0x1f);
      uVar25 = uVar11 << (uVar19 & 0xfc);
      uVar1 = *(ushort *)(AudioAACENCsqrt_table + (uVar25 >> 0x19) * 2 + 0xb0);
      uVar4 = (uint)uVar1 * (uint)uVar1;
      uVar2 = (ulonglong)uVar4 * (ulonglong)uVar4;
      lVar29 = (ulonglong)uVar1 * 0x80 *
               (ulonglong)
               (0x28000 -
               ((uVar25 >> 0x11) * (int)(uVar2 >> 0x20) +
               (int)((ulonglong)(uVar25 >> 0x11) * (uVar2 & 0xffffffff) >> 0x20)));
      bVar28 = (uint)((ulonglong)lVar29 >> 0x21) == 0;
      bVar27 = false;
      uVar4 = (uint)((byte)((ulonglong)lVar29 >> 0x20) & 1) << 0x1f | (uint)lVar29 >> 1;
      lVar29 = (ulonglong)uVar4 *
               ((ulonglong)uVar4 *
                ((ulonglong)uVar4 * ((ulonglong)uVar25 * (ulonglong)uVar4 >> 0x20) >> 0x20) >> 0x20)
      ;
      uVar4 = (uint)((ulonglong)uVar4 *
                     (ulonglong)
                     (0xa0000000 - ((uint)lVar29 >> 0x1f | (int)((ulonglong)lVar29 >> 0x20) << 1))
                    >> 0x20) >> (7 - (uVar19 >> 2) & 0xff);
    }
    iVar10 = iVar10 + 4;
    puVar6 = puVar6 + 1;
    *puVar6 = (int)((ulonglong)((longlong)(int)(uVar11 << 1) * (longlong)(int)uVar4) >> 0x20);
    iVar14 = iVar14 + (uint)(!bVar28 && !bVar27);
  } while (iVar10 != 0x1000);
  if (iVar14 == 0) {
    memset(__s,0,0x1000);
  }
  else {
    uVar11 = *(uint *)(param_1 + 0x628);
    local_68 = *(uint *)(param_1 + 0x630);
    local_64 = *(uint *)(param_1 + 0x634);
    if (SUB84(ROUND(*(double *)(param_7 + 8)),0) == 0) {
      iVar10 = 0x55cccd;
    }
    else {
      iVar10 = __aeabi_idiv(0x55cccd);
    }
    if (0 < iVar23) {
      iVar14 = 0;
      iVar16 = 0;
      piVar9 = (int *)(param_1 + 0x23c);
      do {
        piVar9 = piVar9 + 1;
        if (*piVar9 < (int)uVar11) {
          iVar14 = iVar16;
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 != iVar23);
      iVar16 = 0;
      piVar9 = (int *)(param_1 + 0x23c);
      puVar20 = (uint *)(lowsubbandtable + param_1 + 0xe0);
      do {
        iVar15 = piVar9[1];
        iVar7 = piVar9[2];
        if (iVar14 < iVar16) {
          *puVar20 = 0;
        }
        else {
          if (iVar15 < iVar7) {
            iVar3 = 0;
            iVar5 = 0;
            iVar12 = iVar15;
            piVar21 = (int *)(param_6 + iVar15 * 4);
            do {
              iVar12 = iVar12 + 1;
              uVar2 = (longlong)*piVar21 * (longlong)*piVar21 + CONCAT44(iVar5,iVar3);
              iVar3 = (int)uVar2;
              iVar5 = (int)(uVar2 >> 0x20);
              piVar21 = piVar21 + 1;
            } while (iVar12 != iVar7);
            uVar2 = (ulonglong)uVar11 * (uVar2 & 0xffffffff);
            lVar29 = (uVar2 & 0xffffffff) * 0xe;
            uVar24 = (undefined4)lVar29;
            iVar12 = (uVar11 * iVar5 + iVar3 * ((int)uVar11 >> 0x1f) + (int)(uVar2 >> 0x20)) * 0xe +
                     (int)((ulonglong)lVar29 >> 0x20);
          }
          else {
            if (iVar15 == iVar7) {
              iVar7 = iVar15 + 1;
            }
            uVar24 = 0;
            iVar12 = 0;
          }
          uVar4 = iVar7 - iVar15;
          if ((local_68 | local_64) == 0) {
            local_68 = 1;
            local_64 = 0;
          }
          lVar29 = __aeabi_ldivmod(uVar24,iVar12,(int)((ulonglong)local_68 * (ulonglong)uVar4),
                                   local_68 * ((int)uVar4 >> 0x1f) + uVar4 * local_64 +
                                   (int)((ulonglong)local_68 * (ulonglong)uVar4 >> 0x20));
          uVar4 = (uVar11 - iVar15) * 10;
          uVar25 = (uint)(lVar29 * (int)uVar11);
          lVar29 = __aeabi_ldivmod(uVar11 * 0x50000,(int)(uVar11 * 0x50000) >> 0x1f,uVar25 + uVar4,
                                   (int)((ulonglong)(lVar29 * (int)uVar11) >> 0x20) +
                                   ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar25,uVar4));
          *puVar20 = (uint)(lVar29 * iVar10) >> 0x10 |
                     (int)((ulonglong)(lVar29 * iVar10) >> 0x20) * 0x10000;
        }
        iVar16 = iVar16 + 1;
        puVar20 = puVar20 + 1;
        piVar9 = piVar9 + 1;
      } while (iVar16 != iVar23);
      iVar23 = *(int *)(param_1 + 0x23c);
    }
    piVar9 = (int *)(param_1 + 0x23c);
    iVar10 = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    local_5c = (uint *)(lowsubbandtable + param_1 + 0xe0);
LAB_0001c67c:
    piVar21 = piVar9;
    if (iVar10 < iVar23) {
LAB_0001c684:
      iVar10 = iVar10 + 1;
      piVar9 = piVar21 + 1;
      iVar14 = *piVar9;
      puVar20 = local_5c + 1;
      iVar16 = piVar21[2];
      if (*local_5c == 0) {
        if (iVar14 < iVar16) {
          iVar23 = iVar14 << 2;
LAB_0001c9a0:
          puVar6 = (undefined4 *)((int)__s + iVar23);
          do {
            iVar14 = iVar14 + 1;
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          } while (iVar14 != iVar16);
          iVar23 = *(int *)(param_1 + 0x23c);
        }
      }
      else {
        if (iVar14 < iVar16) {
          iVar23 = iVar14 * 4;
          uVar11 = 0;
          puVar17 = (uint *)(param_1 + 0x2f5b8 + iVar23);
          puVar8 = puVar17;
          iVar7 = iVar14;
          do {
            iVar7 = iVar7 + 1;
            if ((int)uVar11 < (int)*puVar8) {
              uVar11 = *puVar8;
            }
            puVar8 = puVar8 + 1;
          } while (iVar7 != iVar16);
          if (9 < (int)uVar11) {
            uVar4 = __aeabi_idiv(0x40000000,uVar11);
            iVar7 = AudioAACENClog2x(uVar11);
            iVar23 = iVar14;
            puVar8 = puVar17;
            do {
              iVar23 = iVar23 + 1;
              *puVar8 = *puVar8 * uVar4;
              puVar8 = puVar8 + 1;
            } while (iVar23 != iVar16);
            iVar15 = 0;
            piVar21[-0x8a] = -((int)((ulonglong)((longlong)iVar7 * 0x555) >> 0x20) + 2 >> 2);
            piVar18 = __s + iVar14;
            iVar23 = iVar14;
            do {
              iVar23 = iVar23 + 1;
              *(int *)((int)piVar18 + iVar15) = *(int *)((int)puVar17 + iVar15) + 0x20000000 >> 0x1e
              ;
              iVar15 = iVar15 + 4;
            } while (iVar23 != iVar16);
            iVar23 = (iVar16 - iVar14) * 0x8000;
            local_44 = 0x81;
            uVar25 = 8;
            uVar11 = 0x40000;
            local_48 = 0x7fffffff;
            local_3c = 0x40000000;
            do {
              uVar19 = 0;
              uVar13 = 0;
              iVar7 = iVar14;
              piVar26 = piVar18;
              do {
                iVar7 = iVar7 + 1;
                uVar22 = *piVar26 * *piVar26;
                bVar27 = CARRY4(uVar19,uVar22);
                uVar19 = uVar19 + uVar22;
                uVar13 = uVar13 + ((int)uVar22 >> 0x1f) + (uint)bVar27;
                piVar26 = piVar26 + 1;
              } while (iVar7 != iVar16);
              if ((uVar19 | uVar13) == 0) {
                uVar19 = 1;
                uVar13 = 0;
              }
              iVar12 = (uVar25 ^ (int)uVar25 >> 0x1f) - ((int)uVar25 >> 0x1f);
              iVar15 = __aeabi_ldivmod(iVar23,iVar23 >> 0x1f,uVar19,uVar13);
              uVar19 = *local_5c;
              iVar7 = iVar15;
              uVar13 = uVar4;
              if (2 < iVar12) {
                if (uVar19 == 0) {
                  uVar19 = 1;
                  *local_5c = 1;
                }
                iVar3 = __aeabi_idiv(iVar15 << 4,uVar19);
                uVar22 = iVar3 - 0x10;
                iVar3 = (uVar22 ^ (int)uVar22 >> 0x1f) - ((int)uVar22 >> 0x1f);
                if ((iVar12 <= iVar3) || (uVar25 = uVar22, 1 < iVar3)) goto LAB_0001c848;
                if (0 < (int)uVar22) {
                  uVar25 = 2;
                  goto LAB_0001c850;
                }
                uVar25 = 0xfffffffe;
LAB_0001c9f0:
                local_3c = uVar13;
                local_48 = iVar7;
                iVar7 = (uVar25 ^ (int)uVar25 >> 0x1f) - ((int)uVar25 >> 0x1f);
                uVar19 = (uint)((int)uVar19 < iVar15);
                if (1 < iVar7) {
                  if ((uVar19 & uVar25 >> 0x1f) == 0) {
                    uVar13 = (uint)(0 < (int)uVar25);
                    goto LAB_0001c878;
                  }
                  goto LAB_0001c884;
                }
                if (uVar19 != 0) {
                  iVar7 = iVar7 + 0x20;
                  goto LAB_0001c894;
                }
LAB_0001cac8:
                iVar23 = *(int *)(param_1 + 0x23c);
                local_5c = puVar20;
                goto LAB_0001c67c;
              }
LAB_0001c848:
              if ((int)uVar25 < 1) goto LAB_0001c9f0;
LAB_0001c850:
              if ((iVar15 < local_48) || (iVar7 = local_48, uVar13 = local_3c, (int)uVar25 < 3))
              goto LAB_0001c9f0;
              uVar13 = 1;
              uVar25 = 2;
              if ((int)uVar19 < iVar15) {
                uVar19 = 1;
              }
              else {
                uVar19 = 0;
              }
LAB_0001c878:
              if ((uVar13 & (uVar19 ^ 1)) != 0) {
LAB_0001c884:
                uVar25 = -((int)uVar25 >> 1);
              }
              iVar7 = uVar25 + 0x20;
              if (iVar7 == 0) goto LAB_0001c948;
LAB_0001c894:
              if (0x1ffeff < ((int)uVar11 >> 0xf) * iVar7) goto code_r0x0001c8a8;
              if (piVar21[-0x8a] + 10 < 0 == SCARRY4(piVar21[-0x8a],10)) goto LAB_0001cac8;
              uVar11 = (int)(uVar11 * iVar7) >> 5;
              uVar19 = AudioAACENClog2x(uVar11);
              uVar13 = AudioAACENClog2x(uVar4);
              iVar15 = 0;
              piVar21[-0x8a] =
                   ((int)((ulonglong)((longlong)(int)((uVar19 >> 1) + (uVar13 >> 1)) * 0x555) >>
                         0x20) + 1 >> 1) + -0x100;
              iVar7 = iVar14;
              do {
                iVar7 = iVar7 + 1;
                *(int *)((int)piVar18 + iVar15) =
                     (int)((ulonglong)
                           ((longlong)*(int *)((int)puVar17 + iVar15) * (longlong)(int)uVar11) >>
                          0x20) + 0x8000 >> 0x10;
                iVar15 = iVar15 + 4;
              } while (iVar7 != iVar16);
              local_44 = local_44 + -1;
              if (local_44 == 0) {
                iVar23 = *(int *)(param_1 + 0x23c);
                local_5c = puVar20;
                goto LAB_0001c67c;
              }
            } while( true );
          }
          goto LAB_0001c9a0;
        }
      }
      piVar21[-0x8a] = 10;
      local_5c = puVar20;
      goto LAB_0001c67c;
    }
LAB_0001c95c:
    iVar10 = 0;
    piVar9 = __s;
    do {
      piVar21 = (int *)(param_6 + iVar10);
      iVar10 = iVar10 + 4;
      if (*piVar21 < 0) {
        iVar23 = -1;
      }
      else {
        iVar23 = 1;
      }
      *piVar9 = *piVar9 * iVar23;
      piVar9 = piVar9 + 1;
    } while (iVar10 != 0x1000);
  }
  AudioAACENCBitSearch(param_1,(int)__s);
  iVar10 = *(int *)(param_1 + 0x23c);
  if (iVar10 < 1) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x14);
  }
  else {
    piVar9 = (int *)(param_1 + 0x638);
    do {
      piVar21 = piVar9 + 1;
      if (1 < *piVar21 - 0xeU) {
        piVar9[-0x189] = (*(int *)(param_1 + 0x10) - piVar9[-0x189]) + 100;
      }
      piVar9 = piVar21;
    } while (piVar21 != (int *)(param_1 + iVar10 * 4 + 0x638));
    iVar14 = 0;
    iVar16 = *(int *)(param_1 + 0x14);
    iVar10 = *(int *)(param_1 + 0x23c);
    *(int *)(param_1 + 0x10) = iVar16;
    piVar9 = (int *)(param_1 + 0x638);
    iVar23 = 0;
    do {
      iVar7 = piVar9[1];
      if (iVar7 - 0xeU < 2) {
        iVar15 = piVar9[-0x189];
        iVar7 = iVar15 - iVar23;
        if (iVar7 + 0x3c < 0 == SCARRY4(iVar7,0x3c)) {
          if (0x3b < iVar7) {
            iVar15 = iVar23 + 0x3b;
            piVar9[-0x189] = iVar15;
          }
        }
        else {
          iVar15 = iVar23 + -0x3c;
          piVar9[-0x189] = iVar15;
        }
      }
      else {
        iVar15 = iVar23;
        if (iVar7 != 0) {
          iVar23 = piVar9[-0x189] - iVar16;
          if (iVar23 + 0x3c < 0 == SCARRY4(iVar23,0x3c)) {
            if (0x3b < iVar23) {
              piVar9[-0x189] = iVar16 + 0x3b;
            }
          }
          else {
            piVar9[-0x189] = iVar16 + -0x3c;
          }
          iVar16 = piVar9[-0x189];
        }
      }
      iVar14 = iVar14 + 1;
      piVar9 = piVar9 + 1;
      iVar23 = iVar15;
    } while (iVar14 < iVar10);
  }
  *(undefined4 *)(param_1 + 0x638) = 0;
  iVar23 = param_1;
  iVar14 = 0;
  iVar16 = 0;
  while (iVar7 = iVar14, iVar7 < iVar10) {
    AudioAACENCOutputBits
              (param_1,*(undefined4 *)(iVar23 + 0x63c),(int)__s,*(uint *)(iVar23 + 0x240),
               *(int *)(iVar23 + 0x244) - *(uint *)(iVar23 + 0x240));
    piVar9 = (int *)(iVar23 + 0x63c);
    iVar23 = iVar23 + 4;
    iVar10 = *(int *)(param_1 + 0x23c);
    iVar14 = iVar7 + 1;
    if (*piVar9 != 0) {
      iVar16 = iVar7;
    }
  }
  *(int *)(param_1 + 0x23c) = iVar16 + 1;
  *(int *)(param_1 + 0x238) = iVar16 + 1;
  return 0;
code_r0x0001c8a8:
  if (uVar4 != 0) {
    iVar23 = (int)uVar4 >> 0x1f;
    uVar25 = uVar4;
  }
  else {
    iVar23 = 0;
    uVar25 = 1;
  }
  if (uVar4 == 0) {
    uVar4 = 1;
  }
  uVar30 = __aeabi_ldivmod((int)((longlong)(int)local_3c * (longlong)(int)uVar11),
                           (int)((ulonglong)((longlong)(int)local_3c * (longlong)(int)uVar11) >>
                                0x20),uVar25,iVar23);
  lVar29 = (longlong)(int)uVar11 *
           (longlong)(int)((uint)uVar30 >> 0xd | (int)((ulonglong)uVar30 >> 0x20) << 0x13);
  uVar25 = (uint)lVar29 >> 5 | (int)((ulonglong)lVar29 >> 0x20) << 0x1b;
  uVar11 = AudioAACENClog2x(uVar25);
  uVar4 = AudioAACENClog2x(uVar4);
  iVar23 = 0;
  piVar21[-0x8a] =
       ((int)((ulonglong)((longlong)(int)((uVar11 >> 1) + (uVar4 >> 1)) * 0x555) >> 0x20) + 1 >> 1)
       + -0x100;
  do {
    iVar14 = iVar14 + 1;
    *(int *)((int)piVar18 + iVar23) =
         (int)((ulonglong)((longlong)*(int *)((int)puVar17 + iVar23) * (longlong)(int)uVar25) >>
              0x20) + 0x8000 >> 0x10;
    iVar23 = iVar23 + 4;
  } while (iVar14 != iVar16);
LAB_0001c948:
  iVar23 = *(int *)(param_1 + 0x23c);
  piVar21 = piVar9;
  local_5c = puVar20;
  if (iVar23 <= iVar10) goto LAB_0001c95c;
  goto LAB_0001c684;
}



undefined4
AudioAACENCSortForGrouping
          (int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int local_3c;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar2 = *(int *)(param_1 + 0x238);
  iVar4 = 0;
  iVar7 = *(int *)(param_1 + 0x214);
  *(int *)(param_1 + 0x23c) = iVar2;
  *(undefined4 *)(param_1 + 0x240) = 0;
  if (0 < iVar2) {
    iVar14 = 0;
    iVar13 = param_1;
    while( true ) {
      piVar10 = (int *)(param_4 + iVar4);
      iVar4 = iVar4 + 4;
      *(int *)(iVar13 + 0x244) = *piVar10 + iVar14;
      if (iVar4 == iVar2 * 4) break;
      iVar14 = *(int *)(iVar13 + 0x244);
      iVar13 = iVar13 + 4;
    }
  }
  if (0 < iVar7) {
    iVar4 = 0;
    local_3c = 0;
    local_24 = 0;
    local_2c = param_1;
    do {
      if (iVar2 < 1) {
        iVar13 = *(int *)(local_2c + 0x218);
      }
      else {
        iVar8 = 0;
        local_28 = 0;
        iVar13 = *(int *)(local_2c + 0x218);
        iVar14 = param_1;
        do {
          if (0 < iVar13) {
            iVar11 = 0;
            do {
              if (0 < *(int *)(param_4 + iVar8)) {
                iVar9 = *(int *)(iVar14 + 0x240);
                iVar6 = 0;
                iVar12 = iVar4 * 4;
                iVar5 = 0;
                do {
                  puVar3 = (undefined4 *)(param_5 + (iVar9 + local_3c + iVar11 * 0x80) * 4 + iVar6);
                  iVar15 = param_1 + iVar12 + iVar6;
                  iVar5 = iVar5 + 1;
                  iVar4 = iVar4 + 1;
                  iVar6 = iVar6 + 4;
                  *(undefined4 *)(powTable43_1 + iVar15 + 0x684) = *puVar3;
                } while (iVar5 < *(int *)(param_4 + iVar8));
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 != iVar13);
          }
          iVar8 = iVar8 + 4;
          iVar14 = iVar14 + 4;
          local_28 = local_28 + 1;
        } while (local_28 != iVar2);
      }
      local_24 = local_24 + 1;
      local_3c = local_3c + iVar13 * 0x80;
      local_2c = local_2c + 4;
    } while (local_24 != iVar7);
  }
  iVar2 = 0;
  puVar3 = (undefined4 *)(powTable43_1 + param_1 + 0x680);
  do {
    puVar3 = puVar3 + 1;
    *(undefined4 *)(param_5 + iVar2) = *puVar3;
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x1000);
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  if (0 < iVar7) {
    iVar14 = *(int *)(param_1 + 0x23c);
    iVar13 = 1;
    iVar4 = param_1;
    do {
      if (0 < iVar14) {
        iVar8 = 0;
        iVar11 = *(int *)(iVar4 + 0x218);
        piVar10 = (int *)(param_1 + (iVar13 + 0x8f) * 4);
        do {
          piVar1 = (int *)(param_4 + iVar8);
          iVar12 = param_1 + iVar13 * 4 + iVar8;
          iVar8 = iVar8 + 4;
          *(int *)(iVar12 + 0x240) = *piVar1 * iVar11 + *piVar10;
          piVar10 = piVar10 + 1;
        } while (iVar8 != iVar14 << 2);
        iVar13 = iVar13 + iVar14;
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar2 != iVar7);
  }
  *(int *)(param_1 + 0x23c) = iVar7 * *(int *)(param_1 + 0x23c);
  return 0;
}



void AudioAACENCCalcAvgEnrg(int param_1,int *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = *(int *)(param_1 + (*(int *)(param_1 + 0x23c) + 0x90) * 4);
  if (iVar5 < 1) {
    uVar2 = 0;
    uVar3 = 0;
    iVar6 = 1;
  }
  else {
    iVar6 = 0;
    uVar2 = 0;
    uVar3 = 0;
    iVar7 = 0;
    do {
      iVar4 = *param_2;
      if (iVar4 != 0) {
        iVar6 = iVar7;
      }
      iVar7 = iVar7 + 1;
      if (iVar4 != 0) {
        lVar1 = (longlong)iVar4 * (longlong)iVar4 + CONCAT44(uVar3,uVar2);
        uVar2 = (undefined4)lVar1;
        uVar3 = (undefined4)((ulonglong)lVar1 >> 0x20);
      }
      param_2 = param_2 + 1;
    } while (iVar7 != iVar5);
    iVar6 = iVar6 + 1;
  }
  *(int *)(param_1 + 0x628) = iVar6;
  *(undefined4 *)(param_1 + 0x630) = uVar2;
  *(undefined4 *)(param_1 + 0x634) = uVar3;
  return;
}



void PredInit(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar3 = 0;
    do {
      iVar2 = iVar3 * 0xc9ee;
      iVar3 = iVar3 + 1;
      (param_1 + iVar2)[0x109b] = 0;
      (param_1 + iVar2)[0xac9d] = 0;
    } while (iVar3 != iVar1);
  }
  return;
}



void PredCalcPrediction(double *param_1,int param_2,int param_3,int param_4,int *param_5,int param_6
                       ,int param_7,int param_8)

{
  double *pdVar1;
  undefined4 *puVar2;
  int *piVar3;
  double *pdVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  double *pdVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  double *pdVar14;
  double *pdVar15;
  double *pdVar16;
  undefined4 *puVar17;
  uint uVar18;
  double *pdVar19;
  int iVar20;
  undefined4 uVar21;
  double *pdVar22;
  undefined4 *puVar23;
  int *piVar24;
  uint uVar25;
  double *pdVar26;
  double *pdVar27;
  int iVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr4;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined4 *local_60;
  undefined4 *local_5c;
  double *local_58;
  double *local_54;
  double *local_50;
  int *local_48;
  int local_3c;
  
  iVar28 = param_8 * 0x327b8 + param_6;
  iVar11 = param_8 * 0x224 + param_7;
  uVar18 = (uint)(*(int *)(iVar28 + 0x4210) != 0 && param_3 != 2);
  pdVar1 = param_1;
  if (uVar18 != 0) {
    pdVar1 = (double *)(AudioAACENCcostbl8_table + iVar28 + 0xbc);
  }
  *(uint *)(iVar28 + 0x4210) = uVar18;
  if (uVar18 != 0) {
    local_48 = (int *)((int)pdVar1 + 0x214);
  }
  else {
    iVar12 = 0x400;
    local_48 = (int *)(AudioAACENCsin_window_short_table + iVar28 + 0xd0);
    piVar3 = local_48;
    do {
      iVar12 = iVar12 + -1;
      piVar3 = piVar3 + 1;
      *piVar3 = 1;
    } while (iVar12 != 0);
    *(undefined4 *)(iVar28 + 0x4210) = 1;
    if (param_3 == 2) {
      *(undefined4 *)(AudioAACENChannWindow_table + iVar28 + 0xee0) = 0;
      if (*(int *)(iVar11 + 8) == 0) {
        return;
      }
      iVar11 = *(int *)(AudioAACENChannWindow_table + iVar28 + 0xed4);
      iVar12 = iVar11 + 1;
      *(int *)(AudioAACENChannWindow_table + iVar28 + 0xed4) = iVar12;
      bVar31 = SBORROW4(iVar12,0xf7);
      bVar30 = iVar12 == 0xf7;
      if (0xf7 < iVar12) {
        iVar12 = 8;
      }
      if (bVar30 || iVar11 + -0xf6 < 0 != bVar31) {
        return;
      }
      *(int *)(AudioAACENChannWindow_table + iVar28 + 0xed4) = iVar12;
      return;
    }
  }
  pdVar9 = (double *)(AudioAACENCsin_window_long_table + iVar28 + 0xec);
  pdVar14 = (double *)(iVar28 + 0x14210);
  local_58 = (double *)(param_2 + -8);
  pdVar1 = (double *)(iVar28 + 0x8218);
  pdVar16 = (double *)(iVar28 + 0x16218);
  dVar32 = 0.5;
  pdVar26 = (double *)(iVar28 + 0x18218);
  pdVar19 = (double *)("num_samples_read" + iVar28 + 0xb);
  pdVar27 = (double *)(iVar28 + 0x6218);
  iVar12 = 0;
  local_60 = (undefined4 *)(iVar28 + 0xa210);
  local_5c = (undefined4 *)(iVar28 + 0xc210);
  local_54 = pdVar9;
  local_50 = pdVar14;
  do {
    iVar20 = iVar12 * 8;
    local_58 = local_58 + 1;
    local_54 = local_54 + 1;
    dVar33 = *local_58;
    dVar34 = *local_54;
    *pdVar1 = dVar33 + dVar34;
    dVar33 = (dVar33 + dVar34) - *pdVar19 * *pdVar16;
    local_60[2] = SUB84(dVar33,0);
    local_60[3] = (int)((ulonglong)dVar33 >> 0x20);
    local_50 = local_50 + 1;
    dVar33 = dVar33 - *local_50 * *pdVar26;
    local_5c[2] = SUB84(dVar33,0);
    local_5c[3] = (int)((ulonglong)dVar33 >> 0x20);
    iVar13 = 1;
    coprocessor_function(0xb,6,5,in_cr3,in_cr4,in_cr3);
    *pdVar27 = *pdVar1;
    do {
      iVar8 = (iVar13 + -1) * 0x2000;
      pdVar4 = (double *)(iVar28 + iVar8 + 0x8218 + iVar20);
      pdVar22 = (double *)(iVar28 + iVar13 * 0x2000 + 0x1c218 + iVar20);
      dVar33 = *(double *)(iVar28 + iVar8 + 0x16218 + iVar20);
      pdVar15 = (double *)(iVar28 + iVar13 * 0x2000 + 0x22218 + iVar20);
      coprocessor_function(0xb,6,5,in_cr3,in_cr3,in_cr3);
      iVar13 = iVar13 + 1;
      coprocessor_function(0xb,6,5,in_cr3,in_cr3,in_cr2);
      *pdVar22 = *pdVar4 + dVar33 * dVar33 + *pdVar22 * 0.90625;
      coprocessor_function(0xb,6,5,in_cr3,in_cr4,in_cr3);
      *pdVar15 = *pdVar4 + *pdVar15 * 0.90625;
    } while (iVar13 != 3);
    iVar12 = iVar12 + 1;
    dVar33 = *pdVar27;
    pdVar27 = pdVar27 + 1;
    pdVar19 = pdVar19 + 1;
    coprocessor_function(0xb,2,1,in_cr1,in_cr1,in_cr1);
    *pdVar26 = *pdVar16 - dVar33;
    pdVar26 = pdVar26 + 1;
    dVar33 = *pdVar1;
    pdVar1 = pdVar1 + 1;
    coprocessor_function(0xb,6,5,in_cr3,in_cr3,in_cr1);
    *pdVar16 = dVar33;
    pdVar16 = pdVar16 + 1;
    local_60 = local_60 + 2;
    local_5c = local_5c + 2;
  } while (iVar12 != 0x400);
  iVar12 = 0;
  piVar3 = local_48;
  do {
    iVar20 = iVar12;
    piVar3 = piVar3 + 1;
    if (*piVar3 != 0) {
      iVar12 = iVar20 * 8;
      iVar13 = 0;
      do {
        iVar8 = iVar13 * 0x2000;
        iVar13 = iVar13 + 1;
        puVar23 = (undefined4 *)(iVar28 + iVar8 + 0x10218 + iVar12);
        puVar2 = (undefined4 *)(iVar28 + iVar8 + 0x8218 + iVar12);
        *puVar23 = 0;
        puVar23[1] = 0;
        puVar23 = (undefined4 *)(iVar28 + iVar8 + 0x16218 + iVar12);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar17 = (undefined4 *)(iVar28 + iVar8 + 0x1c218 + iVar12);
        *puVar23 = 0;
        puVar23[1] = 0;
        puVar23 = (undefined4 *)(iVar28 + iVar8 + 0x22218 + iVar12);
        puVar2 = (undefined4 *)(iVar28 + iVar8 + 0x4218 + iVar12);
        *puVar17 = 0;
        puVar17[1] = 0x3ff00000;
        *puVar23 = 0;
        puVar23[1] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      } while (iVar13 != 3);
    }
    iVar12 = iVar20 + 1;
    bVar30 = iVar12 == 0x400;
  } while (!bVar30);
  iVar13 = 0;
  do {
    iVar8 = iVar13;
    iVar20 = iVar20 + -0x3ff;
    bVar31 = SBORROW4(iVar12,0x400);
    iVar12 = iVar8 * 8;
    uVar18 = 1;
    do {
      bVar29 = iVar20 < 0;
      iVar20 = uVar18 * 0x2000;
      uVar5 = uVar18 + 1;
      dVar33 = *(double *)(iVar28 + iVar20 + 0x1c218 + iVar12);
      puVar2 = (undefined4 *)(iVar28 + iVar20 + 0x10218);
      if (!bVar30 && bVar29 == bVar31) {
        dVar32 = *(double *)(iVar28 + iVar20 + 0x22218 + iVar12);
      }
      if (bVar30 || bVar29 != bVar31) {
        puVar2 = puVar2 + iVar8 * 2;
      }
      if (bVar30 || bVar29 != bVar31) {
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      if (!bVar30 && bVar29 == bVar31) {
        dVar33 = dVar32 / dVar33;
      }
      if (!bVar30 && bVar29 == bVar31) {
        coprocessor_function(0xb,6,5,in_cr0,in_cr0,in_cr3);
      }
      if (!bVar30 && bVar29 == bVar31) {
        *(double *)(iVar28 + iVar20 + 0x10218 + iVar12) = dVar33;
      }
      bVar31 = SBORROW4(uVar5,3);
      iVar20 = uVar18 - 2;
      bVar30 = uVar5 == 3;
      uVar18 = uVar5;
    } while (!bVar30);
    iVar12 = iVar8 + 1;
    bVar30 = iVar12 == 0x400;
    iVar13 = iVar12;
    iVar20 = iVar8;
  } while (!bVar30);
  pdVar16 = (double *)(AudioAACENCsin_window_long_table + iVar28 + 0xf4);
  pdVar26 = (double *)("num_samples_read" + iVar28 + 3);
  pdVar19 = (double *)(iVar28 + 0x16210);
  pdVar1 = (double *)(iVar28 + 0x18210);
  do {
    pdVar26 = pdVar26 + 1;
    pdVar19 = pdVar19 + 1;
    *pdVar16 = 0.0;
    pdVar14 = pdVar14 + 1;
    pdVar1 = pdVar1 + 1;
    iVar12 = iVar12 + -1;
    dVar32 = *pdVar26 * *pdVar19 + 0.0;
    *pdVar16 = dVar32;
    *pdVar16 = dVar32 + *pdVar14 * *pdVar1;
    pdVar16 = pdVar16 + 1;
  } while (iVar12 != 0);
  iVar12 = *(int *)(iVar11 + 0x14);
  if (((iVar12 == 0) || (*(int *)(iVar11 + 8) != 0)) ||
     (local_3c = *(int *)(iVar11 + 0xc), *(int *)(local_3c * 0x224 + param_7 + 0x10) == 0)) {
    iVar12 = 0;
    puVar2 = (undefined4 *)(t16_5l + param_6 + 0xf0);
    pdVar1 = pdVar9;
    pdVar14 = param_1;
    puVar23 = (undefined4 *)(AudioAACENChannWindow_table + param_6 + 0x126c);
    do {
      dVar32 = *pdVar14;
      pdVar1 = pdVar1 + 1;
      iVar12 = iVar12 + 1;
      coprocessor_function(0xb,6,5,in_cr0,in_cr0,in_cr0);
      puVar23[2] = SUB84(dVar32,0);
      puVar23[3] = (int)((ulonglong)dVar32 >> 0x20);
      dVar32 = *pdVar14;
      pdVar14 = pdVar14 + 1;
      dVar33 = *pdVar1;
      coprocessor_function(0xb,6,5,in_cr0,in_cr0,in_cr0);
      puVar2[2] = SUB84(dVar32 - dVar33,0);
      puVar2[3] = (int)((ulonglong)(dVar32 - dVar33) >> 0x20);
      puVar2 = puVar2 + 2;
      puVar23 = puVar23 + 2;
    } while (iVar12 != 0x400);
    if (param_4 < 1) {
      uVar18 = 3;
      iVar12 = param_4 << 2;
LAB_0001d844:
      puVar2 = (undefined4 *)(iVar28 + (uVar18 + 0x5042) * 8);
      do {
        uVar18 = uVar18 + 1;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2 = puVar2 + 2;
      } while ((int)uVar18 < 0x400);
    }
    else {
      iVar12 = param_4 * 4;
      puVar23 = (undefined4 *)(AudioAACENChannWindow_table + param_6 + 0x10ec);
      uVar5 = 0;
      puVar2 = (undefined4 *)(AudioAACENChannWindow_table + iVar28 + 0xee4);
      do {
        puVar17 = puVar2 + 1;
        *puVar2 = 1;
        uVar25 = *param_5 + uVar5;
        uVar7 = uVar5;
        if ((int)uVar5 < (int)uVar25) {
          do {
            uVar7 = uVar7 + 1;
          } while (uVar7 != uVar25);
          uVar18 = uVar5 + 1 + uVar7 + ~uVar5;
          if (uVar7 == uVar25) goto LAB_0001d7d4;
          if (uVar7 <= uVar25) goto LAB_0001d7d8;
        }
        else {
LAB_0001d7d4:
          *puVar23 = 0;
          puVar23[1] = 0;
LAB_0001d7d8:
          *puVar2 = 0;
          uVar7 = uVar5 + *param_5;
          uVar18 = uVar5;
          if ((int)uVar5 < (int)uVar7) {
            puVar2 = (undefined4 *)(iVar28 + (uVar5 + 0x5042) * 8);
            uVar25 = uVar5;
            do {
              uVar25 = uVar25 + 1;
              puVar2[2] = 0;
              puVar2[3] = 0;
              puVar2 = puVar2 + 2;
            } while (uVar25 != uVar7);
            uVar18 = uVar5 + 1 + uVar25 + ~uVar5;
            uVar7 = uVar25;
          }
        }
        puVar23 = puVar23 + 2;
        uVar5 = uVar7;
        puVar2 = puVar17;
        param_5 = param_5 + 1;
      } while (puVar17 != (undefined4 *)(iVar28 + iVar12 + 0x2b228));
      if ((int)uVar18 < 0x400) goto LAB_0001d844;
    }
    if (param_4 < 0x31) {
      iVar20 = 0;
      do {
        iVar13 = iVar28 + iVar12 + iVar20;
        iVar20 = iVar20 + 4;
        *(undefined4 *)(AudioAACENChannWindow_table + iVar13 + 0xee4) = 0;
      } while (iVar20 != (0x31 - param_4) * 4);
      if (0 < param_4) goto LAB_0001d8b0;
LAB_0001d91c:
      iVar12 = 0;
      *(undefined4 *)(AudioAACENChannWindow_table + iVar28 + 0xee0) = 0;
      pdVar1 = pdVar9;
      do {
        iVar12 = iVar12 + 1;
        *(undefined4 *)(pdVar1 + 1) = 0;
        *(undefined4 *)((int)pdVar1 + 0xc) = 0;
        pdVar1 = pdVar1 + 1;
      } while (iVar12 != 0x400);
    }
    else {
LAB_0001d8b0:
      iVar20 = 0;
      do {
        iVar20 = iVar20 + 4;
      } while (iVar20 != iVar12);
      *(undefined4 *)(AudioAACENChannWindow_table + iVar28 + 0xee0) = 1;
      if (iVar20 - iVar12 < 0) goto LAB_0001d91c;
    }
    iVar12 = 0;
    do {
      pdVar9 = pdVar9 + 1;
      iVar12 = iVar12 + 1;
      *param_1 = *param_1 - *pdVar9;
      param_1 = param_1 + 1;
    } while (iVar12 != 0x400);
    iVar12 = *(int *)(iVar11 + 0x14);
  }
  else {
    iVar20 = local_3c * 0x327b8 + param_6;
    piVar24 = (int *)(AudioAACENChannWindow_table + iVar28 + 0xee0);
    uVar18 = 0x80;
    piVar10 = (int *)(AudioAACENChannWindow_table + iVar20 + 0xee0);
    iVar13 = *(int *)(AudioAACENChannWindow_table + iVar20 + 0xee0);
    uVar21 = *(undefined4 *)(AudioAACENChannWindow_table + iVar20 + 0x10e4);
    *(int *)(AudioAACENChannWindow_table + iVar28 + 0xee0) = iVar13;
    *(undefined4 *)(AudioAACENChannWindow_table + iVar28 + 0x10e4) = uVar21;
    piVar3 = piVar24;
    do {
      piVar10 = piVar10 + 1;
      uVar18 = uVar18 - 1;
      piVar3 = piVar3 + 1;
      *piVar3 = *piVar10;
    } while (uVar18 != 0);
    if (param_4 < 1) {
      uVar5 = 3;
LAB_0001d5ac:
      puVar2 = (undefined4 *)(iVar28 + (uVar5 + 0x5042) * 8);
      do {
        uVar5 = uVar5 + 1;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2 = puVar2 + 2;
      } while ((int)uVar5 < 0x400);
    }
    else {
      uVar7 = uVar18;
LAB_0001d53c:
      do {
        piVar24 = piVar24 + 1;
        if (*piVar24 == 0) {
          uVar25 = uVar7 + *(int *)((int)param_5 + uVar18);
          uVar5 = uVar7;
          if ((int)uVar7 < (int)uVar25) {
            puVar2 = (undefined4 *)(iVar28 + (uVar7 + 0x5042) * 8);
            uVar6 = uVar7;
            do {
              uVar6 = uVar6 + 1;
              puVar2[2] = 0;
              puVar2[3] = 0;
              puVar2 = puVar2 + 2;
            } while (uVar6 != uVar25);
            uVar18 = uVar18 + 4;
            uVar5 = uVar7 + 1 + uVar6 + ~uVar7;
            uVar7 = uVar6;
            if (uVar18 == param_4 * 4) break;
            goto LAB_0001d53c;
          }
        }
        else {
          uVar25 = uVar7 + *(int *)((int)param_5 + uVar18);
        }
        uVar7 = uVar25;
        uVar18 = uVar18 + 4;
      } while (uVar18 != param_4 * 4);
      if ((int)uVar5 < 0x400) goto LAB_0001d5ac;
    }
    if (param_4 < 0x31) {
      iVar12 = 0;
      do {
        iVar20 = iVar28 + param_4 * 4 + iVar12;
        iVar12 = iVar12 + 4;
        *(undefined4 *)(AudioAACENChannWindow_table + iVar20 + 0xee4) = 0;
      } while (iVar12 != (0x31 - param_4) * 4);
      iVar12 = *(int *)(iVar11 + 0x14);
    }
    if (iVar13 == 0) {
      iVar20 = 0x400;
      pdVar1 = pdVar9;
      do {
        iVar20 = iVar20 + -1;
        *(undefined4 *)(pdVar1 + 1) = 0;
        *(undefined4 *)((int)pdVar1 + 0xc) = 0;
        pdVar1 = pdVar1 + 1;
      } while (iVar20 != 0);
    }
    iVar20 = 0;
    do {
      pdVar9 = pdVar9 + 1;
      iVar20 = iVar20 + 1;
      *param_1 = *param_1 - *pdVar9;
      param_1 = param_1 + 1;
    } while (iVar20 != 0x400);
  }
  if ((iVar12 == 0) || (iVar11 = *(int *)(iVar11 + 8), iVar11 != 0)) {
    iVar12 = 0;
    iVar11 = *(int *)(AudioAACENChannWindow_table + iVar28 + 0xed4);
    uVar18 = iVar11 + 1;
    *(uint *)(AudioAACENChannWindow_table + iVar28 + 0xed4) = uVar18;
    do {
      iVar12 = iVar12 + 1;
      local_48 = local_48 + 1;
      *local_48 = 0;
    } while (iVar12 != 0x400);
    if ((int)uVar18 < 0xf8) {
      if ((uVar18 & 7) != 0) goto LAB_0001d6b0;
      if ((int)uVar18 < 0) {
        uVar18 = iVar11 + 8;
      }
      iVar11 = (int)uVar18 >> 3;
      iVar12 = iVar11 + -1;
    }
    else {
      iVar12 = 0;
      *(undefined4 *)(AudioAACENChannWindow_table + iVar28 + 0xed4) = 8;
      iVar11 = 1;
    }
    iVar20 = iVar12 * 4;
    iVar13 = 0;
    *(int *)(AudioAACENChannWindow_table + iVar28 + 0x10e4) = iVar11;
    do {
      iVar8 = iVar28 + iVar20 + iVar13;
      iVar12 = iVar12 + 0x1e;
      iVar13 = iVar13 + 0x78;
      *(undefined4 *)(AudioAACENCsin_window_short_table + iVar8 + 0xd4) = 1;
    } while (iVar12 < 0x400);
  }
  else {
    do {
      iVar11 = iVar11 + 1;
      local_48 = local_48 + 1;
      *local_48 = 0;
    } while (iVar11 != 0x400);
    uVar18 = *(uint *)(AudioAACENChannWindow_table + local_3c * 0x327b8 + param_6 + 0xed4);
    if ((uVar18 & 7) != 0) {
LAB_0001d6b0:
      *(undefined4 *)(AudioAACENChannWindow_table + iVar28 + 0x10e4) = 0xffffffff;
      return;
    }
    if ((int)uVar18 < 0) {
      uVar18 = uVar18 + 7;
    }
    iVar11 = (int)uVar18 >> 3;
    *(int *)(AudioAACENChannWindow_table + iVar28 + 0x10e4) = iVar11;
    iVar12 = iVar11 + -1;
    if (iVar12 < 0x400) {
      iVar20 = iVar28 + (iVar11 + 0xa886) * 4;
      do {
        iVar12 = iVar12 + 0x1e;
        *(undefined4 *)(iVar20 + -4) = 1;
        iVar20 = iVar20 + 0x78;
      } while (iVar12 < 0x400);
    }
  }
  if (((iVar11 != -1) &&
      (iVar11 = *(int *)(AudioAACENChannWindow_table + iVar28 + 0xee0), iVar11 == 0)) &&
     (*(undefined4 *)(AudioAACENChannWindow_table + iVar28 + 0xee0) = 1, 0 < param_4)) {
    puVar2 = (undefined4 *)(AudioAACENChannWindow_table + iVar28 + 0xee0);
    do {
      iVar11 = iVar11 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = 0;
    } while (iVar11 != param_4);
  }
  return;
}



void CopyPredInfo(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  uVar3 = *(undefined4 *)(AudioAACENChannWindow_table + param_2 + 0x10e4);
  puVar2 = (undefined4 *)(AudioAACENChannWindow_table + param_2 + 0xee0);
  puVar4 = (undefined4 *)(AudioAACENChannWindow_table + param_1 + 0xee0);
  iVar1 = 0x80;
  *(undefined4 *)(AudioAACENChannWindow_table + param_1 + 0xee0) =
       *(undefined4 *)(AudioAACENChannWindow_table + param_2 + 0xee0);
  *(undefined4 *)(AudioAACENChannWindow_table + param_1 + 0x10e4) = uVar3;
  do {
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
    puVar4 = puVar4 + 1;
    *puVar4 = *puVar2;
  } while (iVar1 != 0);
  return;
}



void ** AudioAACENCOpenBitStream(int param_1,void *param_2,void *param_3)

{
  void **ppvVar1;
  
  ppvVar1 = *(void ***)(param_1 + 0x6a5c8);
  ppvVar1[1] = (void *)0x0;
  ppvVar1[2] = param_2;
  ppvVar1[3] = (void *)0x0;
  *ppvVar1 = param_3;
  memset(param_3,0,(size_t)param_2);
  return ppvVar1;
}



int AudioAACENCCloseBitStream(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + 7;
  if (iVar1 < 0) {
    iVar1 = *(int *)(param_1 + 4) + 0xe;
  }
  return iVar1 >> 3;
}



undefined4 PutBit(uint *param_1,uint param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int extraout_r1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  if ((param_3 != 0) && (uVar4 = param_1[3], 0 < param_3)) {
    uVar8 = (int)uVar4 >> 0x1f;
    iVar6 = 0;
    uVar3 = uVar8 >> 0x1d;
    uVar2 = 8 - ((uVar4 + uVar3 & 7) - uVar3);
    while( true ) {
      uVar7 = param_3 - iVar6;
      uVar1 = uVar4 + 7;
      if (-1 < (int)uVar4) {
        uVar1 = uVar4;
      }
      uVar5 = uVar7;
      if ((int)uVar2 <= (int)uVar7) {
        uVar5 = uVar2;
      }
      __aeabi_idivmod((int)uVar1 >> 3,param_1[2],uVar2,uVar3,param_4);
      uVar3 = (1 << (uVar5 & 0xff)) - 1;
      iVar9 = (uVar4 + (uVar8 >> 0x1d) & 7) - (uVar8 >> 0x1d);
      uVar4 = uVar3 & param_2 >> (uVar7 - uVar5 & 0xff);
      iVar6 = iVar6 + uVar5;
      if (iVar9 == 0) {
        uVar3 = *param_1;
      }
      uVar2 = 8;
      if (iVar9 == 0) {
        *(undefined *)(uVar3 + extraout_r1) = 0;
      }
      uVar3 = *param_1;
      *(byte *)(uVar3 + extraout_r1) =
           *(byte *)(uVar3 + extraout_r1) | (byte)(uVar4 << ((8 - iVar9) - uVar5 & 0xff));
      uVar4 = uVar5 + param_1[3];
      param_1[3] = uVar4;
      param_1[1] = uVar4;
      if (param_3 <= iVar6) break;
      uVar8 = (int)uVar4 >> 0x1f;
    }
  }
  return 0;
}



int FUN_0001dcd0(uint *param_1,undefined4 param_2,int param_3)

{
  size_t sVar1;
  int iVar2;
  uint uVar3;
  int unaff_r8;
  uint uVar4;
  byte *pbVar5;
  byte bStack237;
  byte local_ec [200];
  int local_24;
  
  local_24 = __stack_chk_guard;
  iVar2 = __stack_chk_guard;
  sprintf((char *)local_ec,"libfaac %s",param_2);
  sVar1 = strlen((char *)local_ec);
  uVar3 = sVar1 + 4;
  if (0xe < (int)uVar3) {
    unaff_r8 = 0xf;
  }
  if (uVar3 == 0xe || (int)(sVar1 - 10) < 0 != SBORROW4(uVar3,0xe)) {
    unaff_r8 = 7;
  }
  uVar4 = param_1[1];
  if (param_3 != 0) {
    PutBit(param_1,6,3,iVar2);
    if ((int)uVar3 < 0xf) {
      PutBit(param_1,uVar3,4,iVar2);
    }
    else {
      PutBit(param_1,0xf,4,iVar2);
      PutBit(param_1,sVar1 - 10,8,iVar2);
    }
    uVar4 = 1 - uVar4 & 7;
    PutBit(param_1,0,uVar4,iVar2);
    PutBit(param_1,0,8,iVar2);
    PutBit(param_1,0,8,iVar2);
    if (0 < (int)(sVar1 + 1)) {
      pbVar5 = &bStack237;
      do {
        pbVar5 = pbVar5 + 1;
        PutBit(param_1,(uint)*pbVar5,8,iVar2);
      } while (pbVar5 != local_ec + sVar1);
    }
    PutBit(param_1,0,8 - uVar4,iVar2);
  }
  if (local_24 == __stack_chk_guard) {
    return unaff_r8 + uVar3 * 8;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



int FUN_0001de24(int param_1,uint *param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x41f8);
  if (iVar5 != 0) {
    if (param_3 == 0) {
      uVar1 = *(uint *)(param_1 + 8);
    }
    else {
      PutBit(param_2,1,1,param_4);
      uVar1 = *(uint *)(param_1 + 8);
    }
    if ((uVar1 < 4) && (uVar1 = 1 << (uVar1 & 0xff), (uVar1 & 0xb) != 0)) {
      if (param_3 == 0) {
        iVar5 = *(int *)(param_1 + 0x23c);
        if (0x27 < iVar5) {
          iVar5 = 0x28;
        }
        return iVar5 + 0xf;
      }
      PutBit(param_2,*(uint *)(param_1 + 0x41d8),0xb,uVar1);
      PutBit(param_2,*(uint *)(param_1 + 0x3fa8),3,uVar1);
      iVar4 = *(int *)(param_1 + 0x23c);
      if (0x27 < iVar4) {
        iVar4 = 0x28;
      }
      iVar5 = iVar4 + 0xf;
      if (0 < iVar4) {
        iVar2 = 0;
        puVar3 = (uint *)(param_1 + 0x3fd4);
        do {
          iVar2 = iVar2 + 1;
          puVar3 = puVar3 + 1;
          PutBit(param_2,*puVar3,1,uVar1);
        } while (iVar2 != iVar4);
        return iVar5;
      }
    }
    else {
      iVar5 = 1;
    }
  }
  return iVar5;
}



int FUN_0001df24(uint *param_1,uint *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint auStack56 [8];
  
  if (param_5 == 0) {
    uVar3 = param_1[2];
  }
  else {
    iVar2 = param_4;
    PutBit(param_2,0,1,param_4);
    PutBit(param_2,param_1[2],2,iVar2);
    PutBit(param_2,*param_1,1,iVar2);
    uVar3 = param_1[2];
  }
  if (uVar3 == 2) {
    if (param_5 == 0) {
      return 0xf;
    }
    PutBit(param_2,param_1[0x8e],4,2);
    uVar3 = param_1[0x85];
    if (0 < (int)uVar3) {
      uVar7 = 0;
      puVar4 = param_1 + 0x85;
      iVar2 = 0;
      do {
        puVar4 = puVar4 + 1;
        uVar6 = *puVar4;
        if (0 < (int)uVar6) {
          iVar1 = 0;
          do {
            *(uint *)((int)auStack56 + iVar1 + iVar2 * 4) = uVar7;
            iVar1 = iVar1 + 4;
          } while (iVar1 != uVar6 << 2);
          iVar2 = iVar2 + uVar6;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar3);
    }
    uVar3 = 0;
    puVar4 = auStack56;
    do {
      uVar3 = uVar3 * 2;
      puVar5 = puVar4 + 1;
      if (puVar4[1] == *puVar4) {
        uVar3 = uVar3 + 1;
      }
      puVar4 = puVar5;
    } while (puVar5 != auStack56 + 7);
    PutBit(param_2,uVar3,7,puVar5);
    return 0xf;
  }
  if (param_5 != 0) {
    PutBit(param_2,param_1[0x8e],6,uVar3);
  }
  if (param_3 != 4) {
    if (param_5 == 0) {
      if (*(short *)(param_1 + 0xac89) == 0) {
        return 0xb;
      }
      uVar7 = param_1[0xac88];
      if ((int)param_1[0x8f] <= (int)param_1[0xac88]) {
        uVar7 = param_1[0x8f];
      }
    }
    else {
      PutBit(param_2,param_1[0xac89],1,uVar3);
      uVar6 = param_1[0x8f];
      uVar7 = param_1[0xac88];
      if (*(short *)(param_1 + 0xac89) == 0) {
        return 0xb;
      }
      if (param_1[0xad0a] == 0xffffffff) {
        PutBit(param_2,0,1,uVar3);
      }
      else {
        PutBit(param_2,1,1,uVar3);
        PutBit(param_2,param_1[0xad0a],5,uVar3);
      }
      if ((int)uVar6 <= (int)uVar7) {
        uVar7 = uVar6;
      }
      if (0 < (int)uVar7) {
        uVar6 = 0;
        puVar4 = param_1 + 0xac89;
        do {
          uVar6 = uVar6 + 1;
          puVar4 = puVar4 + 1;
          PutBit(param_2,*puVar4,1,uVar3);
        } while (uVar6 != uVar7);
      }
    }
    if (param_1[0xad0a] == 0xffffffff) {
      iVar2 = 1;
    }
    else {
      iVar2 = 6;
    }
    return uVar7 + iVar2 + 0xb;
  }
  if (param_5 != 0) {
    PutBit(param_2,param_1[0x107e],1,uVar3);
  }
  iVar2 = FUN_0001de24((int)param_1,param_2,param_5,uVar3);
  if (param_4 != 0) {
    iVar1 = FUN_0001de24((int)param_1,param_2,param_5,uVar3);
    return iVar2 + 0xb + iVar1;
  }
  return iVar2 + 0xb;
}



int FUN_0001e1dc(uint *param_1,uint *param_2,int param_3,int param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int local_50;
  int local_4c;
  int local_2c;
  
  if (param_5 != (uint *)0x0) {
    PutBit(param_2,param_1[4],8,param_4);
  }
  if (param_3 == 0) {
    iVar6 = FUN_0001df24(param_1,param_2,param_4,0,(int)param_5);
    iVar6 = iVar6 + 8;
    param_4 = param_3;
  }
  else {
    iVar6 = 8;
  }
  iVar1 = AudioAACENCSortBookNumbers((int)param_1,param_2,param_5);
  iVar2 = AudioAACENCWriteScalefactors((int)param_1,param_2,(int)param_5);
  if (param_5 != (uint *)0x0) {
    PutBit(param_2,0,1,param_4);
    PutBit(param_2,param_1[0x212],1,param_1);
  }
  local_2c = iVar2 + iVar1 + iVar6 + 1;
  if (param_1[0x212] == 0) {
    local_50 = 1;
  }
  else {
    local_4c = 0;
    if (param_1[2] == 2) {
      local_50 = 9;
      iVar2 = 3;
      iVar1 = 4;
      iVar6 = 1;
      iVar13 = 8;
    }
    else {
      local_50 = 3;
      iVar2 = 5;
      iVar1 = 6;
      iVar6 = 2;
      iVar13 = 1;
    }
    do {
      puVar7 = param_1 + 0x212 + local_4c * 0x1ba + 8;
      uVar4 = (param_1 + 0x212)[local_4c * 0x1ba + 8];
      if (param_5 != (uint *)0x0) {
        PutBit(param_2,uVar4,iVar6,uVar4);
      }
      if (uVar4 != 0) {
        uVar14 = puVar7[1];
        if (param_5 != (uint *)0x0) {
          PutBit(param_2,uVar14 - 3,1,local_50);
        }
        local_50 = (iVar1 + iVar2) * uVar4 + local_50 + 1;
        if (0 < (int)uVar4) {
          uVar12 = 0;
          do {
            uVar5 = 0x1b8;
            puVar9 = puVar7 + uVar12 * 0x6e + 2;
            uVar10 = puVar7[uVar12 * 0x6e + 2];
            if (param_5 != (uint *)0x0) {
              PutBit(param_2,puVar9[3],iVar1,0x1b8);
              PutBit(param_2,uVar10,iVar2,uVar5);
            }
            if (uVar10 != 0) {
              if (param_5 == (uint *)0x0) {
                local_50 = (uVar14 - puVar9[2]) * uVar10 + local_50 + 2;
              }
              else {
                PutBit(param_2,puVar9[1],1,uVar5);
                PutBit(param_2,puVar9[2],1,uVar5);
                uVar11 = uVar14 - puVar9[2];
                local_50 = uVar11 * uVar10 + local_50 + 2;
                if (0 < (int)uVar10) {
                  puVar9 = puVar9 + 0x58;
                  iVar8 = 1;
                  do {
                    puVar9 = puVar9 + 1;
                    iVar8 = iVar8 + 1;
                    PutBit(param_2,~(-1 << (uVar11 & 0xff)) & *puVar9,uVar11,uVar5);
                  } while (iVar8 <= (int)uVar10);
                }
              }
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 != uVar4);
        }
      }
      local_4c = local_4c + 1;
    } while (local_4c < iVar13);
  }
  if (param_5 == (uint *)0x0) {
    piVar3 = (int *)param_1[0x210];
    puVar7 = param_5;
    if (0 < (int)(uint *)param_1[0x18e]) {
      do {
        param_5 = (uint *)((int)param_5 + 1);
        puVar7 = (uint *)((int)puVar7 + *piVar3);
        piVar3 = piVar3 + 1;
      } while (param_5 != (uint *)param_1[0x18e]);
    }
  }
  else {
    PutBit(param_2,0,1,local_2c);
    puVar7 = (uint *)0x0;
    uVar4 = param_1[0x18e];
    uVar14 = param_1[0x20f];
    if (0 < (int)uVar4) {
      iVar6 = 0;
      piVar3 = (int *)param_1[0x210];
      do {
        if (0 < *piVar3) {
          PutBit(param_2,*(uint *)(uVar14 + iVar6 * 4),*piVar3,uVar4);
          uVar4 = param_1[0x18e];
          puVar7 = (uint *)((int)puVar7 + *piVar3);
        }
        iVar6 = iVar6 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar6 < (int)uVar4);
    }
  }
  return local_2c + local_50 + 1 + (int)puVar7;
}



int FUN_0001e5a4(uint *param_1,uint *param_2,uint *param_3,uint *param_4,int param_5,uint *param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_6 != (uint *)0x0) {
    puVar5 = param_4;
    PutBit(param_4,1,3,param_4);
    PutBit(param_4,*param_3,4,puVar5);
    PutBit(param_4,param_3[4],1,puVar5);
  }
  uVar3 = param_3[4];
  if (uVar3 == 0) {
    iVar7 = 8;
    goto LAB_0001e5e0;
  }
  iVar1 = FUN_0001df24(param_1,param_4,param_5,uVar3,(int)param_6);
  uVar4 = param_1[0x85];
  uVar9 = param_1[0x8e];
  if (param_6 == (uint *)0x0) {
LAB_0001e648:
    iVar7 = iVar1 + 10;
    if (param_3[8] != 1) {
      uVar3 = param_3[4];
      goto LAB_0001e5e0;
    }
  }
  else {
    PutBit(param_4,param_3[8],2,uVar4);
    if (param_3[8] != 1) {
      uVar3 = param_3[4];
      iVar7 = iVar1 + 10;
      goto LAB_0001e5e0;
    }
    if (0 < (int)uVar4) {
      iVar7 = -1;
      uVar8 = 0;
      uVar3 = uVar4;
      do {
        if (0 < (int)uVar9) {
          uVar6 = 0;
          puVar5 = param_3 + iVar7 + 9;
          do {
            uVar6 = uVar6 + 1;
            puVar5 = puVar5 + 1;
            PutBit(param_4,*puVar5,1,uVar3);
          } while (uVar6 != uVar9);
        }
        uVar8 = uVar8 + 1;
        iVar7 = iVar7 + uVar9;
      } while (uVar8 != uVar4);
      goto LAB_0001e648;
    }
  }
  uVar3 = param_3[4];
  iVar7 = uVar9 * uVar4 + iVar1 + 10;
LAB_0001e5e0:
  iVar1 = FUN_0001e1dc(param_1,param_4,uVar3,param_5,param_6);
  iVar2 = FUN_0001e1dc(param_2,param_4,param_3[4],param_5,param_6);
  return iVar2 + iVar1 + iVar7;
}



int FUN_0001e754(uint *param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (6 < param_2) {
    do {
      while( true ) {
        if (param_3 != 0) {
          PutBit(param_1,6,3,param_4);
        }
        iVar4 = param_2 + -7;
        uVar1 = iVar4 >> 3;
        if (0xe < (int)uVar1) break;
        if ((param_3 != 0) && (PutBit(param_1,uVar1,4,param_4), 0 < (int)uVar1)) {
          uVar3 = 0;
          do {
            uVar3 = uVar3 + 1;
            PutBit(param_1,0,8,param_4);
          } while (uVar3 != uVar1);
        }
LAB_0001e77c:
        param_2 = iVar4 + uVar1 * -8;
        if (param_2 < 7) {
          return param_2;
        }
      }
      if (param_3 != 0) {
        if (0x10d < (int)uVar1) {
          uVar1 = 0x10e;
        }
        PutBit(param_1,0xf,4,param_4);
        PutBit(param_1,uVar1 - 0xf,8,param_4);
        iVar2 = 0;
        do {
          iVar2 = iVar2 + 1;
          PutBit(param_1,0,8,param_4);
        } while (iVar2 < (int)(uVar1 - 1));
        goto LAB_0001e77c;
      }
      if (0x10d < (int)uVar1) {
        uVar1 = 0x10e;
      }
      param_2 = iVar4 + uVar1 * -8;
    } while (6 < param_2);
  }
  return param_2;
}



int AudioAACENCWriteBitstream(uint *param_1,uint *param_2,uint *param_3,uint *param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int local_44;
  
  if (param_1[0x19520] == 1) {
    iVar9 = 0x38;
  }
  else {
    iVar9 = 0;
  }
  puVar3 = param_4;
  if (param_1[4] == 4) {
    puVar3 = (uint *)(uint)*(uint3 *)(param_1 + 0x19516);
    iVar6 = FUN_0001dcd0(param_4,param_1[0x19516],0);
    iVar9 = iVar9 + iVar6;
  }
  if (0 < param_5) {
    iVar6 = 0;
    puVar5 = param_3;
    puVar8 = param_2;
LAB_0001e9b8:
    do {
      if (puVar5[1] != 0) {
        puVar3 = (uint *)puVar5[5];
        if (puVar3 == (uint *)0x0) {
          if (puVar5[7] == 0) {
            puVar3 = (uint *)param_1[0x19519];
            iVar1 = FUN_0001e1dc(puVar8,param_4,0,(int)puVar3,(uint *)0x0);
            iVar9 = iVar9 + iVar1 + 7;
          }
          else {
            puVar3 = (uint *)param_1[0x19519];
            iVar1 = FUN_0001e1dc(puVar8,param_4,0,(int)puVar3,(uint *)0x0);
            iVar9 = iVar9 + iVar1 + 7;
          }
        }
        else {
          if (puVar5[2] != 0) {
            iVar6 = iVar6 + 1;
            puVar3 = param_4;
            iVar1 = FUN_0001e5a4(puVar8,param_2 + puVar5[3] * 0xc9ee,puVar5,param_4,param_1[0x19519]
                                 ,(uint *)0x0);
            iVar9 = iVar9 + iVar1;
            puVar5 = puVar5 + 0x89;
            puVar8 = puVar8 + 0xc9ee;
            if (iVar6 == param_5) break;
            goto LAB_0001e9b8;
          }
        }
      }
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 0x89;
      puVar8 = puVar8 + 0xc9ee;
    } while (iVar6 != param_5);
  }
  if (iVar9 < 5) {
    iVar6 = 0xb - iVar9;
  }
  else {
    iVar6 = 6;
  }
  iVar1 = FUN_0001e754(param_4,iVar6,0,puVar3);
  uVar7 = iVar9 + (iVar6 - iVar1) + 3;
  uVar2 = uVar7 & 7;
  if (uVar2 != 0) {
    uVar2 = -uVar7 & 7;
  }
  iVar9 = uVar7 + uVar2 + 7;
  if (iVar9 < 0) {
    iVar9 = uVar7 + uVar2 + 0xe;
  }
  iVar6 = iVar9 >> 3;
  *(char *)(param_1 + 3) = (char)iVar6;
  *(char *)((int)param_1 + 0xd) = (char)((uint)(iVar6 << 0x10) >> 0x18);
  *(char *)((int)param_1 + 0xe) = (char)((uint)(iVar6 << 8) >> 0x18);
  *(char *)((int)param_1 + 0xf) = (char)(iVar9 >> 0x1b);
  if (param_1[0x19520] == 1) {
    local_44 = 0x38;
    PutBit(param_4,0xffff,0xc,(uint)*(byte *)((int)param_1 + 0x65481));
    uVar2 = (uint)*(byte *)((int)param_1 + 0x65463);
    PutBit(param_4,param_1[0x19518],1,uVar2);
    PutBit(param_4,0,2,uVar2);
    PutBit(param_4,1,1,uVar2);
    PutBit(param_4,param_1[0x19519] - 1,2,(uint)*(byte *)((int)param_1 + 0x65467));
    uVar2 = (uint)*(ushort *)(param_1 + 2);
    PutBit(param_4,param_1[2],4,uVar2);
    PutBit(param_4,0,1,uVar2);
    uVar2 = (uint)*(byte *)((int)param_1 + 2);
    PutBit(param_4,*param_1,3,uVar2);
    PutBit(param_4,0,1,uVar2);
    PutBit(param_4,0,1,uVar2);
    PutBit(param_4,0,1,uVar2);
    PutBit(param_4,0,1,uVar2);
    uVar2 = (uint)*(byte *)((int)param_1 + 0xd);
    PutBit(param_4,param_1[3],0xd,uVar2);
    PutBit(param_4,0x7ff,0xb,uVar2);
    PutBit(param_4,0,2,uVar2);
  }
  else {
    local_44 = 0;
  }
  if (param_1[4] == 4) {
    FUN_0001dcd0(param_4,param_1[0x19516],1);
  }
  if (0 < param_5) {
    iVar9 = 0;
    puVar3 = param_2;
LAB_0001ec34:
    do {
      if (param_3[1] != 0) {
        if (param_3[5] == 0) {
          if (param_3[7] == 0) {
            uVar2 = param_1[0x19519];
            uVar7 = (uint)*(byte *)((int)param_1 + 0x65467);
            PutBit(param_4,0,3,uVar7);
            PutBit(param_4,*param_3,4,uVar7);
            iVar6 = FUN_0001e1dc(puVar3,param_4,0,uVar2,(uint *)0x1);
            local_44 = local_44 + iVar6 + 7;
          }
          else {
            uVar2 = param_1[0x19519];
            uVar7 = (uint)*(byte *)((int)param_1 + 0x65466);
            PutBit(param_4,3,3,uVar7);
            PutBit(param_4,*param_3,4,uVar7);
            iVar6 = FUN_0001e1dc(puVar3,param_4,0,uVar2,(uint *)0x1);
            local_44 = local_44 + iVar6 + 7;
          }
        }
        else {
          if (param_3[2] != 0) {
            iVar9 = iVar9 + 1;
            iVar6 = FUN_0001e5a4(puVar3,param_2 + param_3[3] * 0xc9ee,param_3,param_4,
                                 param_1[0x19519],(uint *)0x1);
            param_3 = param_3 + 0x89;
            puVar3 = puVar3 + 0xc9ee;
            local_44 = local_44 + iVar6;
            if (iVar9 == param_5) break;
            goto LAB_0001ec34;
          }
        }
      }
      iVar9 = iVar9 + 1;
      param_3 = param_3 + 0x89;
      puVar3 = puVar3 + 0xc9ee;
    } while (iVar9 != param_5);
  }
  if (local_44 < 5) {
    iVar9 = 0xb - local_44;
  }
  else {
    iVar9 = 6;
  }
  iVar6 = local_44;
  iVar1 = FUN_0001e754(param_4,iVar9,1,local_44);
  PutBit(param_4,7,3,iVar6);
  uVar2 = param_4[1];
  uVar7 = uVar2 & 7;
  if ((uVar7 != 0) && (uVar7 = -uVar2 & 7, uVar7 != 0)) {
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
      PutBit(param_4,0,1,uVar2);
    } while (uVar4 != uVar7);
  }
  return (iVar9 - iVar1) + local_44 + 3 + uVar7;
}



void AudioAACENCGetChannelInfo(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (param_2 == 2) {
    uVar6 = 0;
    iVar3 = param_2;
  }
  else {
    iVar3 = param_2 + -1;
    uVar6 = 1;
    *param_1 = 0;
    param_1[1] = 1;
    param_1[5] = 0;
    param_1[7] = 0;
    if (iVar3 < 2) goto LAB_0001f118;
  }
  iVar2 = param_2 - iVar3;
  iVar4 = 0;
  puVar1 = param_1 + iVar2 * 0x89 + 7;
  do {
    iVar3 = iVar3 + -2;
    puVar1[-7] = iVar4;
    iVar5 = iVar2 + 1;
    puVar1[0x85] = iVar2;
    iVar4 = iVar4 + 1;
    puVar1[-6] = 1;
    iVar2 = iVar2 + 2;
    puVar1[-2] = 1;
    puVar1[-3] = 0;
    puVar1[-5] = 1;
    puVar1[-4] = iVar5;
    *puVar1 = 0;
    puVar1[0x83] = 1;
    puVar1[0x87] = 1;
    puVar1[0x86] = 0;
    puVar1[0x84] = 0;
    puVar1[0x89] = 0;
    puVar1 = puVar1 + 0x112;
  } while (1 < iVar3);
LAB_0001f118:
  if (iVar3 != 0) {
    iVar3 = param_2 - iVar3;
    if (param_3 == 0) {
      puVar1 = param_1 + iVar3 * 0x89;
      param_1[iVar3 * 0x89] = uVar6;
      puVar1[5] = 0;
      puVar1[1] = 1;
      puVar1[7] = 0;
    }
    else {
      puVar1 = param_1 + iVar3 * 0x89;
      param_1[iVar3 * 0x89] = 0;
      puVar1[1] = 1;
      puVar1[5] = 0;
      puVar1[7] = 1;
    }
  }
  return;
}



void FUN_0001f188(uint param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ushort *puVar12;
  ushort *puVar13;
  
  iVar10 = *(int *)(param_1 + 8);
  uVar2 = 1 << (param_3 & 0xff);
  puVar13 = *(ushort **)(iVar10 + param_3 * 4);
  if (puVar13 == (ushort *)0x0) {
    pvVar4 = AudioAACENCAllocMemory(uVar2 << 1);
    *(void **)(iVar10 + param_3 * 4) = pvVar4;
    if ((int)uVar2 < 1) {
      return;
    }
    uVar3 = 0;
    puVar13 = *(ushort **)(*(int *)(param_1 + 8) + param_3 * 4);
    puVar12 = puVar13;
    do {
      if ((int)param_3 < 1) {
        param_1 = 0;
      }
      else {
        uVar8 = 0;
        uVar9 = 0;
        uVar5 = uVar3;
        do {
          uVar8 = uVar8 + 1;
          uVar11 = uVar5 & 1;
          uVar1 = uVar9 << 1;
          uVar9 = uVar11 | uVar1;
          uVar5 = (int)uVar5 >> 1;
        } while (uVar8 != param_3);
        param_1 = uVar11 | uVar1 & 0xffff;
      }
      uVar3 = uVar3 + 1;
      *puVar12 = (ushort)param_1;
      puVar12 = puVar12 + 1;
    } while (uVar3 != uVar2);
  }
  else {
    if ((int)uVar2 < 1) {
      return;
    }
  }
  iVar6 = 0;
  iVar10 = 0;
  do {
    uVar3 = (uint)*puVar13;
    iVar7 = iVar10 + 1;
    if (iVar10 < (int)uVar3) {
      param_1 = *(uint *)(param_2 + iVar6);
      *(undefined4 *)(param_2 + iVar6) = *(undefined4 *)(param_2 + uVar3 * 4);
    }
    iVar6 = iVar6 + 4;
    if (iVar10 < (int)uVar3) {
      *(uint *)(param_2 + uVar3 * 4) = param_1;
    }
    iVar10 = iVar7;
    puVar13 = puVar13 + 1;
  } while (iVar7 < (int)uVar2);
  return;
}



undefined4 AudioAACENCfft_initialize(void **param_1)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = AudioAACENCAllocMemory(0x28);
  *param_1 = pvVar1;
  if (pvVar1 != (void *)0x0) {
    pvVar1 = AudioAACENCAllocMemory(0x28);
    param_1[1] = pvVar1;
    if (pvVar1 != (void *)0x0) {
      pvVar1 = AudioAACENCAllocMemory(0x28);
      param_1[2] = pvVar1;
      if (pvVar1 != (void *)0x0) {
        pvVar1 = AudioAACENCAllocMemory(0x100);
        param_1[0x1404] = pvVar1;
        if (pvVar1 != (void *)0x0) {
          pvVar1 = AudioAACENCAllocMemory(0x100);
          param_1[0x1405] = pvVar1;
          if (pvVar1 != (void *)0x0) {
            iVar2 = 0;
            do {
              *(undefined4 *)((int)*param_1 + iVar2) = 0;
              *(undefined4 *)((int)param_1[1] + iVar2) = 0;
              *(undefined4 *)((int)param_1[2] + iVar2) = 0;
              iVar2 = iVar2 + 4;
            } while (iVar2 != 0x28);
            *(undefined1 **)((int)*param_1 + 0x18) = AudioAACENCcostbl6_table;
            *(undefined1 **)((int)param_1[1] + 0x18) = AudioAACENCnegsintbl6_table;
            *(undefined1 **)((int)*param_1 + 0x20) = AudioAACENCcostbl8_table;
            *(undefined1 **)((int)param_1[1] + 0x20) = AudioAACENCnegsintbl8_table;
            *(undefined1 **)((int)*param_1 + 0x24) = AudioAACENCcostbl9_table;
            *(undefined1 **)((int)param_1[1] + 0x24) = AudioAACENCnegsintbl9_table;
            return 0;
          }
        }
      }
    }
    if (*param_1 != (void *)0x0) {
      AudioAACENCFreeMemory(*param_1);
      *param_1 = (void *)0x0;
    }
  }
  if (param_1[1] != (void *)0x0) {
    AudioAACENCFreeMemory(param_1[1]);
    param_1[1] = (void *)0x0;
  }
  if (param_1[2] != (void *)0x0) {
    AudioAACENCFreeMemory(param_1[2]);
    param_1[2] = (void *)0x0;
  }
  if (param_1[0x1404] != (void *)0x0) {
    AudioAACENCFreeMemory(param_1[0x1404]);
    param_1[0x1404] = (void *)0x0;
  }
  if (param_1[0x1405] != (void *)0x0) {
    AudioAACENCFreeMemory(param_1[0x1405]);
    param_1[0x1405] = (void *)0x0;
    return 0xffffffff;
  }
  return 0xffffffff;
}



void AudioAACENCfft_terminate(void **param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(void **)((int)param_1[2] + iVar1) != (void *)0x0) {
      AudioAACENCFreeMemory(*(void **)((int)param_1[2] + iVar1));
      *(undefined4 *)((int)param_1[2] + iVar1) = 0;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x28);
  if (*param_1 != (void *)0x0) {
    AudioAACENCFreeMemory(*param_1);
  }
  if (param_1[1] != (void *)0x0) {
    AudioAACENCFreeMemory(param_1[1]);
  }
  if (param_1[2] != (void *)0x0) {
    AudioAACENCFreeMemory(param_1[2]);
  }
  *param_1 = (void *)0x0;
  param_1[1] = (void *)0x0;
  param_1[2] = (void *)0x0;
  if (param_1[0x1404] != (void *)0x0) {
    AudioAACENCFreeMemory(param_1[0x1404]);
    param_1[0x1404] = (void *)0x0;
  }
  if (param_1[0x1405] == (void *)0x0) {
    return;
  }
  AudioAACENCFreeMemory(param_1[0x1405]);
  param_1[0x1405] = (void *)0x0;
  return;
}



void AudioAACENCfft(int *param_1,int param_2,int param_3,uint param_4)

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
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int local_5c;
  int local_4c;
  int local_48;
  int local_44;
  int local_2c;
  
  FUN_0001f188((uint)param_1,param_2,param_4);
  FUN_0001f188((uint)param_1,param_3,param_4);
  iVar3 = 1 << (param_4 & 0xff);
  iVar5 = *(int *)(*param_1 + param_4 * 4);
  iVar6 = *(int *)(param_1[1] + param_4 * 4);
  if (1 < iVar3) {
    local_5c = 1;
    local_2c = iVar3;
    do {
      iVar1 = local_5c * 2;
      local_2c = local_2c >> 1;
      if (local_5c < 1) {
        iVar13 = 0;
      }
      else {
        iVar13 = local_5c + -1;
      }
      iVar13 = iVar13 + local_5c + 1;
      local_4c = 0;
      local_44 = 0;
      local_48 = local_5c;
      do {
        iVar8 = 0;
        iVar14 = param_2 + local_48 * 4;
        iVar11 = param_2 + local_4c * 4;
        iVar10 = param_3 + local_4c * 4;
        iVar12 = param_3 + local_48 * 4;
        iVar7 = 0;
        iVar9 = 0;
        do {
          iVar4 = *(int *)(iVar5 + iVar8);
          iVar16 = *(int *)(iVar14 + iVar7) << 1;
          iVar15 = *(int *)(iVar6 + iVar8);
          iVar2 = *(int *)(iVar12 + iVar7) << 1;
          iVar17 = (int)((ulonglong)((longlong)iVar16 * (longlong)iVar4) >> 0x20) -
                   (int)((ulonglong)((longlong)iVar2 * (longlong)iVar15) >> 0x20);
          iVar16 = (int)((ulonglong)((longlong)iVar16 * (longlong)iVar15) >> 0x20) +
                   (int)((ulonglong)((longlong)iVar2 * (longlong)iVar4) >> 0x20);
          iVar9 = iVar9 + 1;
          *(int *)(iVar14 + iVar7) = *(int *)(iVar11 + iVar7) - iVar17;
          iVar8 = iVar8 + local_2c * 4;
          *(int *)(iVar11 + iVar7) = *(int *)(iVar11 + iVar7) + iVar17;
          *(int *)(iVar12 + iVar7) = *(int *)(iVar10 + iVar7) - iVar16;
          *(int *)(iVar10 + iVar7) = *(int *)(iVar10 + iVar7) + iVar16;
          iVar7 = iVar7 + 4;
        } while (iVar9 < local_5c);
        local_48 = local_48 + iVar13;
        local_44 = local_44 + iVar1;
        local_4c = local_4c + iVar13;
      } while (local_44 < iVar3);
      local_5c = iVar1;
    } while (iVar1 < iVar3);
  }
  return;
}



void AudioAACENCrfft(int *param_1,int param_2,uint param_3)

{
  size_t __n;
  int *__s;
  
  __s = param_1 + 0x1204;
  memset(__s,0,8 << (param_3 & 0xff));
  AudioAACENCfft(param_1,param_2,(int)__s,param_3);
  __n = 8 << (param_3 - 1 & 0xff);
  memcpy((void *)(param_2 + __n),__s,__n);
  return;
}



void AudioAACENCffti(int *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 in_cr0;
  undefined4 in_cr1;
  
  AudioAACENCfft(param_1,(int)param_3,(int)param_2,param_4);
  iVar1 = 1 << (param_4 & 0xff);
  if (iVar1 < 1) {
    return;
  }
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    coprocessor_function(0xb,6,5,in_cr1,in_cr1,in_cr0);
    *param_2 = *param_2;
    param_2 = param_2 + 1;
    coprocessor_function(0xb,6,5,in_cr1,in_cr1,in_cr0);
    *param_3 = *param_3;
    param_3 = param_3 + 1;
  } while (iVar2 != iVar1);
  return;
}



void AudioAACENCFilterBankEnd(uint *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    uVar3 = 0;
    do {
      puVar1 = param_1 + uVar3 + 0x12;
      if ((void *)puVar1[1] != (void *)0x0) {
        AudioAACENCFreeMemory((void *)puVar1[1]);
        *(undefined *)(puVar1 + 1) = 0;
        *(undefined *)((int)puVar1 + 5) = 0;
        *(undefined *)((int)puVar1 + 6) = 0;
        *(undefined *)((int)puVar1 + 7) = 0;
      }
      iVar2 = uVar3 + 0x14;
      uVar3 = uVar3 + 1;
      puVar1 = param_1 + iVar2;
      if ((void *)puVar1[1] != (void *)0x0) {
        AudioAACENCFreeMemory((void *)puVar1[1]);
        *(undefined *)(puVar1 + 1) = 0;
        *(undefined *)((int)puVar1 + 5) = 0;
        *(undefined *)((int)puVar1 + 6) = 0;
        *(undefined *)((int)puVar1 + 7) = 0;
      }
    } while (uVar3 < *param_1);
  }
  if ((void *)param_1[0x1a971] == (void *)0x0) {
    return;
  }
  AudioAACENCFreeMemory((void *)param_1[0x1a971]);
  *(undefined *)(param_1 + 0x1a971) = 0;
  *(undefined *)((int)param_1 + 0x6a5c5) = 0;
  *(undefined *)((int)param_1 + 0x6a5c6) = 0;
  *(undefined *)((int)param_1 + 0x6a5c7) = 0;
  return;
}



undefined4 AudioAACENCFilterBankInit(uint *param_1)

{
  void *pvVar1;
  uint uVar2;
  uint *puVar3;
  
  if (*param_1 != 0) {
    uVar2 = 0;
    do {
      pvVar1 = AudioAACENCAllocMemory(0x2000);
      puVar3 = param_1 + uVar2 + 0x12;
      *(char *)(puVar3 + 1) = (char)pvVar1;
      *(char *)((int)puVar3 + 5) = (char)((uint)((int)pvVar1 << 0x10) >> 0x18);
      *(char *)((int)puVar3 + 6) = (char)((uint)((int)pvVar1 << 8) >> 0x18);
      *(char *)((int)puVar3 + 7) = (char)((uint)pvVar1 >> 0x18);
      if (pvVar1 == (void *)0x0) goto LAB_0001f968;
      pvVar1 = AudioAACENCAllocMemory(0x1000);
      puVar3 = param_1 + uVar2 + 0x14;
      uVar2 = uVar2 + 1;
      *(char *)(puVar3 + 1) = (char)pvVar1;
      *(char *)((int)puVar3 + 5) = (char)((uint)((int)pvVar1 << 0x10) >> 0x18);
      *(char *)((int)puVar3 + 6) = (char)((uint)((int)pvVar1 << 8) >> 0x18);
      *(char *)((int)puVar3 + 7) = (char)((uint)pvVar1 >> 0x18);
      if (pvVar1 == (void *)0x0) goto LAB_0001f968;
      memset(pvVar1,0,0x1000);
    } while (uVar2 < *param_1);
  }
  pvVar1 = AudioAACENCAllocMemory(0x2000);
  *(char *)(param_1 + 0x1a971) = (char)pvVar1;
  *(char *)((int)param_1 + 0x6a5c5) = (char)((uint)((int)pvVar1 << 0x10) >> 0x18);
  *(char *)((int)param_1 + 0x6a5c6) = (char)((uint)((int)pvVar1 << 8) >> 0x18);
  *(char *)((int)param_1 + 0x6a5c7) = (char)((uint)pvVar1 >> 0x18);
  if (pvVar1 != (void *)0x0) {
    return 0;
  }
LAB_0001f968:
  AudioAACENCFilterBankEnd(param_1);
  return 0xffffffff;
}



void AudioAACENCFilterBank
               (int param_1,int param_2,void *param_3,int *param_4,void *param_5,int param_6)

{
  longlong lVar1;
  longlong lVar2;
  void *__dest;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  
  __dest = *(void **)(param_1 + 0x6a5c4);
  iVar8 = *(int *)(param_2 + 8);
  if (param_6 == 1) {
    memcpy(__dest,param_3,0x2000);
  }
  else {
    memcpy(__dest,param_5,0x1000);
    memcpy((void *)((int)__dest + 0x1000),param_3,0x1000);
    memcpy(param_5,param_3,0x1000);
  }
  if (iVar8 == 2) {
    iVar8 = (int)__dest + 0x700;
    do {
      piVar14 = (int *)(iVar8 + 0x1fc);
      piVar3 = param_4 + 0x7f;
      iVar5 = 0;
      puVar12 = AudioAACENChannWindow_table;
      do {
        *(int *)((int)param_4 + iVar5) =
             (int)((ulonglong)
                   ((longlong)(*(int *)(iVar8 + iVar5) << 1) *
                   (longlong)*(int *)(AudioAACENCsin_window_short_table + iVar5)) >> 0x20);
        piVar14 = piVar14 + 1;
        puVar12 = (undefined1 *)((int)puVar12 + -4);
        iVar5 = iVar5 + 4;
        piVar3 = piVar3 + 1;
        *piVar3 = (int)((ulonglong)((longlong)(*piVar14 << 1) * (longlong)*(int *)puVar12) >> 0x20);
      } while (iVar5 != 0x200);
      iVar13 = 0x6487e3;
      iVar6 = 0;
      iVar11 = *(int *)(param_1 + 0x6a5bc);
      iVar5 = 0x7fffd886;
      iVar4 = *(int *)(param_1 + 0x6a5b8);
      iVar10 = 0;
      piVar3 = param_4;
      piVar14 = param_4;
      do {
        if (iVar10 < 0x20) {
          iVar9 = piVar3[0xc0];
          iVar7 = piVar3[0x40];
          iVar15 = iVar7 - piVar14[0x3f];
        }
        else {
          iVar9 = -piVar3[-0x40];
          iVar7 = piVar3[0x40];
          iVar15 = piVar14[0x13f];
        }
        iVar9 = (piVar14[0xbf] + iVar9) * 2;
        if (0x1f < iVar10) {
          iVar15 = iVar7 + iVar15;
        }
        *(int *)(iVar11 + iVar6) =
             (int)((ulonglong)((longlong)iVar9 * (longlong)iVar5) >> 0x20) +
             (int)((ulonglong)((longlong)(iVar15 << 1) * (longlong)iVar13) >> 0x20);
        lVar2 = (longlong)iVar5;
        iVar10 = iVar10 + 1;
        piVar14 = piVar14 + -2;
        piVar3 = piVar3 + 2;
        lVar1 = (longlong)iVar5;
        iVar5 = ((uint)((longlong)iVar5 * 0x7ff62182) >> 0x1f |
                (int)((ulonglong)((longlong)iVar5 * 0x7ff62182) >> 0x20) << 1) -
                ((uint)((longlong)iVar13 * 0x3242abf) >> 0x1f |
                (int)((ulonglong)((longlong)iVar13 * 0x3242abf) >> 0x20) << 1);
        *(int *)(iVar4 + iVar6) =
             (int)((ulonglong)((iVar15 << 1) * lVar2) >> 0x20) -
             (int)((ulonglong)((longlong)iVar9 * (longlong)iVar13) >> 0x20);
        iVar6 = iVar6 + 4;
        iVar13 = ((uint)(lVar1 * 0x3242abf) >> 0x1f |
                 (int)((ulonglong)(lVar1 * 0x3242abf) >> 0x20) << 1) +
                 ((uint)((longlong)iVar13 * 0x7ff62182) >> 0x1f |
                 (int)((ulonglong)((longlong)iVar13 * 0x7ff62182) >> 0x20) << 1);
      } while (iVar10 != 0x40);
      AudioAACENCfft((int *)(param_1 + 0x655a8),iVar11,iVar4,6);
      iVar5 = 0x6487e3;
      iVar6 = 0x7fffd886;
      iVar10 = 0;
      piVar3 = param_4;
      piVar14 = param_4;
      do {
        iVar13 = *(int *)(iVar11 + iVar10) << 2;
        iVar9 = *(int *)(iVar4 + iVar10) << 2;
        iVar7 = (int)((ulonglong)((longlong)iVar13 * (longlong)iVar6) >> 0x20) +
                (int)((ulonglong)((longlong)iVar9 * (longlong)iVar5) >> 0x20);
        iVar13 = (int)((ulonglong)((longlong)iVar9 * (longlong)iVar6) >> 0x20) -
                 (int)((ulonglong)((longlong)iVar13 * (longlong)iVar5) >> 0x20);
        iVar10 = iVar10 + 4;
        lVar1 = (longlong)iVar6;
        *piVar14 = -iVar7;
        piVar3[0x7f] = iVar13;
        iVar6 = ((uint)((longlong)iVar6 * 0x7ff62182) >> 0x1f |
                (int)((ulonglong)((longlong)iVar6 * 0x7ff62182) >> 0x20) << 1) -
                ((uint)((longlong)iVar5 * 0x3242abf) >> 0x1f |
                (int)((ulonglong)((longlong)iVar5 * 0x3242abf) >> 0x20) << 1);
        piVar14[0x80] = -iVar13;
        piVar14 = piVar14 + 2;
        piVar3[0xff] = iVar7;
        iVar5 = ((uint)(lVar1 * 0x3242abf) >> 0x1f |
                (int)((ulonglong)(lVar1 * 0x3242abf) >> 0x20) << 1) +
                ((uint)((longlong)iVar5 * 0x7ff62182) >> 0x1f |
                (int)((ulonglong)((longlong)iVar5 * 0x7ff62182) >> 0x20) << 1);
        piVar3 = piVar3 + -2;
      } while (iVar10 != 0x100);
      iVar8 = iVar8 + 0x200;
      param_4 = param_4 + 0x80;
    } while (iVar8 != (int)__dest + 0x1700);
  }
  return;
}



void AudioAACENCIFilterBank
               (undefined4 param_1,int param_2,void *param_3,void *param_4,void *param_5,int param_6
               )

{
  void *__src;
  double *__dest;
  double *__dest_00;
  double *pdVar1;
  undefined1 *puVar2;
  double *pdVar3;
  size_t __n;
  double *pdVar4;
  void *pvVar5;
  int iVar6;
  double *pdVar7;
  int iVar8;
  double *pdVar9;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr3;
  double dVar10;
  
  iVar6 = *(int *)(param_2 + 8);
  __dest = (double *)AudioAACENCAllocMemory(0x4000);
  __dest_00 = (double *)AudioAACENCAllocMemory(0x4000);
  memcpy(__dest_00,param_5,0x2000);
  if (iVar6 != 2) {
LAB_0001fe70:
    if (param_6 == 1) {
      __n = 0x4000;
      pdVar7 = __dest;
    }
    else {
      __n = 0x2000;
      pdVar7 = __dest_00;
    }
    memcpy(param_4,pdVar7,__n);
    memcpy(param_5,__dest_00 + 0x400,0x2000);
    if (__dest_00 != (double *)0x0) {
      AudioAACENCFreeMemory(__dest_00);
    }
    if (__dest != (double *)0x0) {
      AudioAACENCFreeMemory(__dest);
      return;
    }
    return;
  }
  pdVar7 = __dest;
  if (param_6 != 1) {
    pdVar7 = __dest_00 + 0x1c0;
  }
  pvVar5 = (void *)((int)param_3 + 0x400);
  memcpy(__dest,param_3,0x400);
  if (param_6 == 1) goto LAB_0001ffa0;
  do {
    pdVar9 = __dest + 0x7f;
    iVar6 = 0;
    pdVar1 = pdVar7 + 0x7f;
    pdVar3 = __dest;
    pdVar4 = pdVar7;
    do {
      dVar10 = *pdVar3;
      pdVar9 = pdVar9 + 1;
      iVar6 = iVar6 + 4;
      coprocessor_function(0xb,2,0,in_cr0,in_cr1,in_cr0);
      *pdVar3 = dVar10;
      pdVar3 = pdVar3 + 1;
      *pdVar4 = *pdVar4 + dVar10;
      pdVar4 = pdVar4 + 1;
      dVar10 = *pdVar9;
      coprocessor_function(0xb,6,5,in_cr0,in_cr0,in_cr1);
      *(int *)(pdVar1 + 1) = SUB84(dVar10,0);
      *(int *)((int)pdVar1 + 0xc) = (int)((ulonglong)dVar10 >> 0x20);
      pdVar1 = pdVar1 + 1;
    } while (iVar6 != 0x200);
    pdVar7 = pdVar7 + 0x80;
    __src = pvVar5;
    while( true ) {
      if (__src == (void *)((int)param_3 + 0x2000)) {
        memset(__dest_00 + 0x640,0,0xe00);
        goto LAB_0001fe70;
      }
      pvVar5 = (void *)((int)__src + 0x400);
      memcpy(__dest,__src,0x400);
      if (param_6 != 1) break;
LAB_0001ffa0:
      pdVar3 = pdVar7 + 0x80;
      puVar2 = AudioAACENChannWindow_table;
      iVar6 = 0;
      pdVar1 = pdVar7;
      do {
        puVar2 = (undefined1 *)((int)puVar2 + -4);
        iVar8 = *(int *)puVar2;
        iVar6 = iVar6 + 1;
        coprocessor_function(0xb,2,0,in_cr2,in_cr2,in_cr3);
        *pdVar1 = *pdVar1;
        pdVar1 = pdVar1 + 1;
        coprocessor_function(0xb,6,5,in_cr0,in_cr1,in_cr0);
        *pdVar3 = (double)(longlong)iVar8;
        pdVar3 = pdVar3 + 1;
      } while (iVar6 != 0x80);
      pdVar7 = pdVar7 + 0x100;
      __src = pvVar5;
    }
  } while( true );
}



void AudioAACENCspecFilter(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = __aeabi_idiv(param_4 * param_3,param_2 >> 1,param_3,param_4,param_4);
  iVar2 = iVar1 + 1;
  if (param_4 <= iVar1 + 1) {
    iVar2 = param_4;
  }
  memset((void *)(param_1 + iVar2 * 4),0,(param_4 - iVar2) * 4);
  return;
}



undefined4 AudioMP3ENCMP3EncInit(void)

{
  return 0;
}



undefined4 AudioMP3ENCMP3EncExit(void)

{
  return 0;
}



int MP3Encframe(int *param_1,void *param_2,size_t *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 in_cr0;
  undefined4 in_cr1;
  
  *param_3 = 0;
  OutBsLens = 0;
  if (param_1[3] == 0) {
    lame_init_old();
    puVar3 = (undefined4 *)param_1[1];
    in_samplerate_GLOBAL = *puVar3;
    num_channels_GLOBAL = puVar3[1];
    brate_GLOBAL = (int)puVar3[2] / 1000;
    if (puVar3[5] == 1) {
      mode_GLOBAL = 3;
    }
    else {
      mode_GLOBAL = 0;
    }
    out_samplerate_GLOBAL = in_samplerate_GLOBAL;
    lame_init_params();
    AudioMP3ENChuffman_init();
    param_1[3] = 1;
    SamplesTotal = 0.0;
    pdec = param_1;
  }
  uVar1 = GetPcmDataSize(*pdec);
  piVar4 = (int *)param_1[1];
  iVar2 = __aeabi_idiv(uVar1,piVar4[5] << 1);
  if (iVar2 < framesize_L2G) {
    if (*(int *)(param_1[2] + 0xc) == 5) {
      iVar2 = -2;
    }
    else {
      iVar2 = 1;
    }
    return iVar2;
  }
  coprocessor_function(0xb,6,5,in_cr1,in_cr1,in_cr0);
  *(int *)param_1[2] = SUB84(ROUND(SamplesTotal / (double)(longlong)*piVar4),0);
  ErrorMessage = 0;
  iVar2 = get_audio();
  if (iVar2 == 0) {
    return ErrorMessage;
  }
  nsamples_A2G = iVar2;
  lame_encode_buffer_sample_t();
  if (ErrorMessage != 0) {
    return ErrorMessage;
  }
  SamplesTotal = (double)(longlong)framesize_L2G + SamplesTotal;
  memcpy(param_2,Outbsptr,OutBsLens);
  *param_3 = OutBsLens;
  return ErrorMessage;
}



void AudioMP3ENCEncInit(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(0x1c);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[4] = AudioMP3ENCMP3EncInit;
  puVar1[5] = MP3Encframe;
  puVar1[6] = AudioMP3ENCMP3EncExit;
  return;
}



void FWRITEBS(undefined4 param_1,undefined4 param_2)

{
  OutBsLens = param_2;
  Outbsptr = param_1;
  return;
}



void FREADPCM(void *param_1,int param_2,int param_3)

{
  size_t sVar1;
  
  sVar1 = ReadPcmDataForEnc(param_1,param_3 * param_2,*pdec);
  __aeabi_idiv(sVar1,param_2);
  return;
}



int get_audio(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  int *piVar9;
  
  iVar2 = mf_size_INTERNAL;
  if (frames_L2G == 0) {
    mf_size_INTERNAL = 0;
  }
  iVar3 = FREADPCM(insamp,2,num_channels_GLOBAL * framesize_L2G);
  iVar7 = num_channels_GLOBAL;
  puVar8 = insamp + iVar3 * 2;
  iVar4 = __aeabi_idiv(iVar3,num_channels_GLOBAL);
  iVar3 = mf_size_INTERNAL;
  if (iVar7 == 2) {
    if (-1 < iVar4 + -1) {
      iVar3 = 0;
      piVar9 = (int *)(mfbuf_INTERNAL + (iVar4 + -1 + mf_size_INTERNAL) * 4 + 0x1980);
      piVar5 = (int *)(mfbuf_INTERNAL + (iVar4 + mf_size_INTERNAL) * 4);
      do {
        puVar6 = puVar8 + iVar3;
        iVar3 = iVar3 + -4;
        sVar1 = *(short *)(puVar6 + -4);
        piVar9 = piVar9 + -1;
        *piVar9 = (int)*(short *)(puVar6 + -2) << 10;
        piVar5 = piVar5 + -1;
        *piVar5 = (int)sVar1 << 10;
      } while (iVar3 != iVar4 * -4);
    }
  }
  else {
    if ((iVar7 == 1) &&
       (memset(mfbuf_INTERNAL + (mf_size_INTERNAL + 0x65f) * 4,0,iVar4 << 2), 0 < iVar4)) {
      piVar9 = (int *)(mfbuf_INTERNAL + (iVar4 + iVar3) * 4);
      iVar3 = 0;
      do {
        iVar7 = iVar3 + -2;
        piVar9 = piVar9 + -1;
        *piVar9 = (int)*(short *)(puVar8 + iVar3 + -2) << 10;
        iVar3 = iVar7;
      } while (iVar7 != iVar4 * -2);
    }
  }
  mf_size_INTERNAL = iVar2;
  num_samples_read = iVar4 + num_samples_read;
  return iVar4;
}



void ix_max(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (loopval < 1) {
    max_choose_table = 0;
  }
  else {
    iVar2 = 0;
    iVar1 = 0;
    max_choose_table = 0;
    piVar3 = ix_choose_table;
    do {
      xbits2 = *piVar3;
      iVar2 = iVar2 + 1;
      if (max_choose_table < xbits2) {
        max_choose_table = xbits2;
      }
      ybits2 = piVar3[1];
      piVar3 = piVar3 + 2;
      if (iVar1 < ybits2) {
        iVar1 = ybits2;
      }
    } while (iVar2 != loopval);
    if (max_choose_table < iVar1) {
      max_choose_table = iVar1;
    }
    ix_choose_table = ix_choose_table + iVar2 * 2;
  }
  return;
}



void count_bit_ESC(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(AudioMP3ENCxlen_Huffman + choice2 * 4) +
          *(int *)(AudioMP3ENCxlen_Huffman + choice * 4) * 0x10000;
  if (loopval < 1) {
    uVar4 = 0;
  }
  else {
    iVar5 = 0;
    uVar3 = 0;
    piVar2 = ix_choose_table;
    do {
      iVar7 = *piVar2;
      iVar1 = 0xf0;
      iVar5 = iVar5 + 1;
      if (iVar7 < 0xf) {
        iVar1 = iVar7 << 4;
      }
      ybits2 = piVar2[1];
      if (0xe < iVar7) {
        uVar3 = uVar3 + iVar6;
      }
      piVar2 = piVar2 + 2;
      iVar7 = ybits2;
      if (0xe < ybits2) {
        uVar3 = uVar3 + iVar6;
        iVar7 = 0xf;
      }
      xbits2 = iVar1 + iVar7;
      if (0xe < ybits2) {
        ybits2 = 0xf;
      }
      uVar3 = uVar3 + *(int *)(largetbl + xbits2 * 4);
    } while (iVar5 != loopval);
    uVar4 = (int)uVar3 >> 0x10;
    if ((int)(uVar3 & 0xffff) < (int)uVar3 >> 0x10) {
      choice = choice2;
      uVar4 = uVar3 & 0xffff;
    }
  }
  choose_table_val = choice;
  real_bits_L2G = real_bits_L2G + uVar4;
  return;
}



void FUN_00020744(void)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  int local_38;
  int local_34;
  
  ix_choose_table = ix_Back;
  ix_max();
  if (max_choose_table == 0) {
    choose_table_val = 0;
  }
  else {
    if (max_choose_table == 1) {
      ix_choose_table = ix_Back;
      if (loopval < 1) {
        iVar6 = 0;
      }
      else {
        iVar7 = 0;
        iVar6 = 0;
        do {
          iVar9 = *ix_choose_table;
          iVar7 = iVar7 + 1;
          piVar3 = ix_choose_table + 1;
          ix_choose_table = ix_choose_table + 2;
          iVar6 = iVar6 + (uint)*(byte *)(AudioMP3ENChlen_Huffman._4_4_ + *piVar3 + iVar9 * 2);
        } while (iVar7 != loopval);
      }
      real_bits_L2G = real_bits_L2G + iVar6;
      choose_table_val = 1;
    }
    else {
      if (max_choose_table < 4) {
        ix_choose_table = ix_Back;
        hufval = *(int *)(huf_tbl_noESC + (max_choose_table + -1) * 4);
        if (hufval == 2) {
          puVar10 = table23;
        }
        else {
          puVar10 = table56;
        }
        if (loopval < 1) {
          uVar5 = 0;
        }
        else {
          iVar6 = 0;
          uVar4 = 0;
          piVar3 = ix_Back;
          do {
            iVar7 = *piVar3;
            iVar6 = iVar6 + 1;
            piVar1 = piVar3 + 1;
            piVar3 = piVar3 + 2;
            uVar4 = uVar4 + *(int *)(puVar10 +
                                    (iVar7 * *(int *)(AudioMP3ENCxlen_Huffman + hufval * 4) +
                                    *piVar1) * 4);
          } while (iVar6 != loopval);
          uVar5 = uVar4 >> 0x10;
          if ((uVar4 & 0xffff) < uVar5) {
            hufval = hufval + 1;
            uVar5 = uVar4 & 0xffff;
          }
        }
        real_bits_L2G = real_bits_L2G + uVar5;
        choose_table_val = hufval;
      }
      else {
        if (max_choose_table < 0x10) {
          ix_choose_table = ix_Back;
          hufval = *(int *)(huf_tbl_noESC + (max_choose_table + -1) * 4);
          puVar10 = AudioMP3ENCxlen_Huffman;
          if (loopval < 1) {
            puVar10 = (undefined1 *)0x0;
          }
          local_34 = hufval;
          if (0 < loopval) {
            iVar6 = 0;
            puVar10 = (undefined1 *)0x0;
            puVar8 = (undefined1 *)0x0;
            puVar2 = (undefined1 *)0x0;
            do {
              iVar7 = *ix_choose_table;
              iVar6 = iVar6 + 1;
              piVar3 = ix_choose_table + 1;
              ix_choose_table = ix_choose_table + 2;
              iVar7 = iVar7 * *(int *)(AudioMP3ENCxlen_Huffman + hufval * 4) + *piVar3;
              puVar2 = puVar2 + *(byte *)(*(int *)(AudioMP3ENChlen_Huffman + hufval * 4) + iVar7);
              puVar8 = puVar8 + *(byte *)(*(int *)(AudioMP3ENChlen_Huffman + (hufval + 1) * 4) +
                                         iVar7);
              puVar10 = puVar10 + *(byte *)(*(int *)(AudioMP3ENChlen_Huffman + (hufval + 2) * 4) +
                                           iVar7);
            } while (iVar6 != loopval);
            local_38 = hufval;
            if ((int)puVar8 < (int)puVar2) {
              puVar2 = puVar8;
              local_38 = hufval + 1;
            }
            local_34 = hufval + 2;
            if ((int)puVar2 <= (int)puVar10) {
              local_34 = local_38;
              puVar10 = puVar2;
            }
          }
          real_bits_L2G = puVar10 + (int)real_bits_L2G;
          choose_table_val = local_34;
        }
        else {
          if (max_choose_table < 0x200f) {
            max_choose_table = max_choose_table + -0xf;
            choice2 = 0x18;
            if (max_choose_table < 0x10) {
              iVar6 = 0x10;
LAB_000209bc:
              if (*(int *)(linmax_Huffman + iVar6 * 4) < max_choose_table) {
                piVar3 = (int *)(linmax_Huffman + iVar6 * 4);
                do {
                  iVar6 = iVar6 + 1;
                  choice = iVar6;
                  if (iVar6 == 0x18) break;
                  piVar3 = piVar3 + 1;
                } while (*piVar3 < max_choose_table);
              }
            }
            else {
              piVar3 = (int *)(linmax_Huffman + 0x60);
              choice2 = 0x19;
              do {
                piVar3 = piVar3 + 1;
                if (max_choose_table <= *piVar3) {
                  iVar6 = choice2 + -8;
                  goto LAB_000209bc;
                }
                choice2 = choice2 + 1;
              } while (choice2 != 0x20);
              choice2 = 0x20;
              choice = 0x18;
            }
            ix_choose_table = ix_Back;
            count_bit_ESC();
            return;
          }
          real_bits_L2G = (undefined1 *)0x186a0;
          choose_table_val = -1;
        }
      }
    }
  }
  return;
}



void count_bits_long(void)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int local_38;
  
  iVar7 = gr_L2G;
  iVar9 = ch_L2G;
  iVar4 = 0x240;
  i_count_L2G = 0x240;
  if ((*(uint *)(l3_enc_w_L2G + 0x8fc) | *(uint *)(l3_enc_w_L2G + 0x8f8)) == 0) {
    i_count_L2G = 0x23e;
    iVar8 = l3_enc_w_L2G;
    do {
      puVar1 = (uint *)(iVar8 + 0x8f0);
      puVar2 = (uint *)(iVar8 + 0x8f4);
      iVar8 = iVar8 + -8;
      if ((*puVar1 | *puVar2) != 0) {
        *(int *)(count1_SIDE_INFO + (gr_L2G * 2 + ch_L2G) * 4) = i_count_L2G;
        iVar4 = i_count_L2G;
        if (i_count_L2G < 4) goto LAB_00020c60;
        goto LAB_00020ee0;
      }
      iVar4 = i_count_L2G + -2;
      i_count_L2G = iVar4;
    } while (iVar4 != 0);
    *(undefined4 *)(count1_SIDE_INFO + (gr_L2G * 2 + ch_L2G) * 4) = 0;
    a1_L2G = 0;
LAB_00020c60:
    local_38 = iVar7 * 2;
    a2_L2G = 0;
    real_bits_L2G = 0;
    *(undefined4 *)(count1table_select_SIDE_INFO + (local_38 + iVar9) * 4) = 0;
  }
  else {
    *(undefined4 *)(count1_SIDE_INFO + (gr_L2G * 2 + ch_L2G) * 4) = 0x240;
    a1_L2G = 0;
LAB_00020ee0:
    local_38 = iVar7 * 2;
    a2_L2G = 0;
    iVar8 = 0;
    do {
      uVar13 = *(uint *)(l3_enc_w_L2G + (iVar4 + -2) * 4);
      uVar12 = *(uint *)(l3_enc_w_L2G + (iVar4 + -1) * 4);
      uVar5 = *(uint *)(l3_enc_w_L2G + (iVar4 + -3) * 4);
      uVar10 = *(uint *)(l3_enc_w_L2G + (iVar4 + -4) * 4);
      if (1 < (uVar13 | uVar12 | uVar5 | uVar10)) break;
      iVar11 = uVar12 + (uVar13 + (uVar5 + uVar10 * 2) * 2) * 2;
      iVar4 = i_count_L2G + -4;
      iVar8 = iVar8 + (uint)(byte)t32l[iVar11];
      a2_L2G = a2_L2G + (uint)(byte)t33l[iVar11];
      a1_L2G = iVar8;
      i_count_L2G = iVar4;
    } while (3 < iVar4);
    iVar11 = a2_L2G;
    iVar6 = a2_L2G;
    real_bits_L2G = iVar8;
    if (a2_L2G < iVar8) {
      iVar6 = 1;
      real_bits_L2G = a2_L2G;
    }
    *(undefined4 *)(count1table_select_SIDE_INFO + (local_38 + iVar9) * 4) = 0;
    if (iVar11 < iVar8) {
      *(int *)(count1table_select_SIDE_INFO + (local_38 + iVar9) * 4) = iVar6;
    }
  }
  local_38 = iVar7 * 2;
  local_38 = local_38 + iVar9;
  *(int *)(big_values_SIDE_INFO + local_38 * 4) = iVar4;
  if (iVar4 != 0) {
    uVar5 = (uint)(byte)buf_header_INTERNAL[iVar4 + 0x27e];
    bVar3 = buf_header_INTERNAL[iVar4 + 0x27f];
    *(uint *)(region0_count_SIDE_INFO + local_38 * 4) = uVar5;
    *(uint *)(region1_count_SIDE_INFO + local_38 * 4) = (uint)bVar3;
    a2_L2G = *(int *)(l_INTERNAL + (uVar5 + bVar3 + 2) * 4);
    a1_L2G = *(int *)(l_INTERNAL + (uVar5 + 1) * 4);
    loopval = (iVar4 - a2_L2G) / 2;
    if (0 < loopval) {
      ix_Back = l3_enc_w_L2G + a2_L2G * 4;
      FUN_00020744();
      *(undefined4 *)(table_select_SIDE_INFO + gr_L2G * 0x18 + ch_L2G * 0xc + 8) = choose_table_val;
    }
    iVar9 = a1_L2G;
    if (i_count_L2G <= a1_L2G) {
      iVar9 = i_count_L2G;
    }
    iVar7 = a2_L2G;
    if (i_count_L2G <= a2_L2G) {
      iVar7 = i_count_L2G;
    }
    loopval = iVar9 / 2;
    a1_L2G = iVar9;
    a2_L2G = iVar7;
    if (0 < iVar9) {
      ix_Back = l3_enc_w_L2G;
      FUN_00020744();
      iVar7 = a2_L2G;
      iVar9 = a1_L2G;
      *(undefined4 *)(table_select_SIDE_INFO + gr_L2G * 0x18 + ch_L2G * 0xc) = choose_table_val;
    }
    loopval = (iVar7 - iVar9) / 2;
    if (0 < loopval) {
      ix_Back = l3_enc_w_L2G + iVar9 * 4;
      FUN_00020744();
      *(undefined4 *)(table_select_SIDE_INFO + gr_L2G * 0x18 + ch_L2G * 0xc + 4) = choose_table_val;
    }
  }
  return;
}



void AudioMP3ENCcount_bits(void)

{
  uint uVar1;
  
  AudioMP3ENCpowInt =
       *(int *)(powTable43_1 + *(int *)(global_gain_SIDE_INFO + (ch_L2G + gr_L2G * 2) * 4) * 8);
  AudioMP3ENCpowFloat =
       *(int *)(powTable43_1 +
               (*(int *)(global_gain_SIDE_INFO + (ch_L2G + gr_L2G * 2) * 4) * 2 + 1) * 4);
  uVar1 = AudioMP3ENCmuls6(max_xrpowVal,AudioMP3ENCpowFloat,AudioMP3ENCpowInt - 0x3b);
  if (0x2868c < (int)uVar1) {
    real_bits_L2G = 100000;
    return;
  }
  quantize_xrpow_ISO();
  count_bits_long();
  return;
}



void AudioMP3ENChuffman_init(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  
  iVar6 = 2;
  puVar7 = bv_scf_INTERNAL + 1;
  do {
    iVar2 = 0;
    piVar1 = (int *)l_INTERNAL;
    do {
      piVar1 = piVar1 + 1;
      iVar2 = iVar2 + 1;
    } while (*piVar1 < iVar6);
    uVar8 = *(uint *)(subdv_table0 + iVar2 * 4);
    uVar3 = uVar8;
    if (iVar6 < *(int *)(l_INTERNAL + (uVar8 + 1) * 4)) {
      piVar1 = (int *)(l_INTERNAL + (uVar8 + 1) * 4);
      do {
        piVar1 = piVar1 + -1;
        uVar3 = uVar3 - 1;
      } while (iVar6 < *piVar1);
    }
    iVar2 = *(int *)(subdv_table1 + iVar2 * 4);
    if ((int)uVar3 < 0) {
      uVar3 = uVar8;
    }
    puVar7[-1] = (char)(uVar3 & 0xff);
    iVar4 = iVar2 + (uVar3 & 0xff);
    iVar5 = iVar2;
    if (iVar6 < *(int *)(l_INTERNAL + (iVar4 + 2) * 4)) {
      piVar1 = (int *)(l_INTERNAL + (iVar4 + 1) * 4);
      do {
        iVar4 = *piVar1;
        iVar5 = iVar5 + -1;
        piVar1 = piVar1 + -1;
      } while (iVar6 < iVar4);
    }
    iVar6 = iVar6 + 2;
    if (iVar5 < 0) {
      iVar5 = iVar2;
    }
    *puVar7 = (char)iVar5;
    puVar7 = puVar7 + 2;
  } while (iVar6 != 0x242);
  return;
}



void bin_search_StepSize(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = 0;
  bVar2 = false;
  iVar4 = *(int *)((int)&OldValue_INTERNAL + ch_L2G * 4);
  iVar5 = iVar4;
  while( true ) {
    *(int *)(global_gain_SIDE_INFO + (ch_L2G + gr_L2G * 2) * 4) = iVar5;
    AudioMP3ENCcount_bits();
    while( true ) {
      if (CurrentStep_INTERNAL == 1) goto LAB_00021324;
      if (bVar2) {
        CurrentStep_INTERNAL = CurrentStep_INTERNAL / 2;
      }
      iVar3 = *(int *)((int)&targ_bits_L2G + ch_L2G * 4);
      if (real_bits_L2G <= iVar3) break;
      bVar1 = (bool)(bVar2 ^ 1);
      if (iVar7 != 2) {
        bVar1 = false;
      }
      if (bVar1) {
        bVar2 = true;
        CurrentStep_INTERNAL = CurrentStep_INTERNAL / 2;
      }
      iVar5 = iVar5 + CurrentStep_INTERNAL;
      if (0xff < iVar5) goto LAB_00021324;
      iVar7 = 1;
      *(int *)(global_gain_SIDE_INFO + (ch_L2G + gr_L2G * 2) * 4) = iVar5;
      AudioMP3ENCcount_bits();
    }
    if (iVar3 <= real_bits_L2G) break;
    bVar1 = (bool)(bVar2 ^ 1);
    if (iVar7 != 1) {
      bVar1 = false;
    }
    if (bVar1) {
      bVar2 = true;
      CurrentStep_INTERNAL = CurrentStep_INTERNAL / 2;
    }
    iVar5 = iVar5 - CurrentStep_INTERNAL;
    if (iVar5 < 0) break;
    iVar7 = 2;
  }
LAB_00021324:
  uVar6 = iVar4 - iVar5;
  if ((int)uVar6 < 0) {
    uVar6 = uVar6 + 3;
  }
  if (uVar6 >> 2 == 0) {
    CurrentStep_INTERNAL = 2;
  }
  else {
    CurrentStep_INTERNAL = 4;
  }
  return;
}



void iteration_loop(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_98;
  int local_90;
  
  targ_bits_L2G._0_4_ = 0;
  targ_bits_L2G._4_4_ = 0;
  ResvFrameBegin();
  gr_L2G = 0;
  if (0 < mode_gr_INTERNAL) {
    do {
      on_pe();
      if (mode_ext_INTERNAL == 2) {
        iVar12 = 0;
        do {
          iVar2 = iVar12 + gr_L2G * 0x480;
          iVar6 = *(int *)(xr_L2G + iVar2 * 4);
          iVar8 = *(int *)(xr_L2G + (iVar2 + 0x240) * 4);
          uVar1 = AudioMP3ENCmuls(iVar6 + iVar8,0x5a827999);
          iVar3 = gr_L2G;
          *(uint *)(xr_L2G + iVar2 * 4) = uVar1;
          uVar1 = AudioMP3ENCmuls(iVar6 - iVar8,0x5a827999);
          iVar3 = iVar12 + iVar3 * 0x480;
          iVar12 = iVar12 + 1;
          *(uint *)(xr_L2G + (iVar3 + 0x240) * 4) = uVar1;
        } while (iVar12 != 0x240);
      }
      ch_L2G = 0;
      iVar12 = gr_L2G;
      if (0 < channels_out_INTERNAL) {
        local_90 = gr_L2G << 3;
        iVar3 = gr_L2G << 1;
        do {
          iVar6 = gr_L2G;
          iVar8 = ch_L2G;
          local_98 = ch_L2G * 8;
          iVar2 = ch_L2G * 0x900;
          iVar4 = (iVar3 + iVar12) * 8 + ch_L2G * 0xc;
          iVar10 = iVar3 + ch_L2G;
          *(undefined4 *)(table_select_SIDE_INFO + iVar4) = 0;
          *(undefined4 *)(table_select_SIDE_INFO + iVar4 + 4) = 0;
          piVar9 = (int *)(sb_sample_INTERNAL + (local_90 + iVar12) * 0x200 + iVar2 + 0x23fc);
          *(undefined4 *)(table_select_SIDE_INFO + iVar4 + 8) = 0;
          *(undefined4 *)(region0_count_SIDE_INFO + iVar10 * 4) = 0;
          *(undefined4 *)(region1_count_SIDE_INFO + iVar10 * 4) = 0;
          *(undefined4 *)(count1table_select_SIDE_INFO + iVar10 * 4) = 0;
          *(undefined4 *)(part2_length_SIDE_INFO + iVar10 * 4) = 0;
          *(undefined4 *)(global_gain_SIDE_INFO + iVar10 * 4) = 0xd2;
          *(undefined4 *)(part2_3_length_SIDE_INFO + iVar10 * 4) = 0;
          *(undefined4 *)(count1_SIDE_INFO + iVar10 * 4) = 0;
          max_xrpowVal = 0;
          xrpow_L2G = 0x398d8;
          *(undefined4 *)(big_values_SIDE_INFO + (iVar8 + iVar6 * 2) * 4) = 0;
          piVar5 = (int *)(sb_sample_INTERNAL + 0x8fc);
          iVar2 = 0;
          do {
            piVar9 = piVar9 + 1;
            iVar6 = *piVar9;
            if (iVar6 < 0) {
              iVar6 = -iVar6;
            }
            piVar5 = piVar5 + 1;
            *piVar5 = iVar6;
            iVar2 = iVar2 + iVar6;
            if (max_xrpowVal < iVar6) {
              max_xrpowVal = iVar6;
            }
          } while (piVar5 != (int *)(sb_sample_INTERNAL + 0x11fc));
          if (iVar2 != 0) {
            iVar2 = 1;
          }
          puVar7 = mfbuf_INTERNAL + (iVar8 * 0x65f + (local_90 + iVar12) * 0x40) * 4;
          initloopflag = iVar2;
          l3_enc_w_L2G = puVar7;
          if (iVar2 == 0) {
            do {
              *(undefined4 *)(puVar7 + iVar2) = 0;
              iVar2 = iVar2 + 4;
            } while (iVar2 != 0x900);
            iVar6 = *(int *)(part2_3_length_SIDE_INFO + (iVar3 + iVar8) * 4);
          }
          else {
            bin_search_StepSize();
            iVar6 = real_bits_L2G;
            iVar12 = gr_L2G;
            iVar8 = ch_L2G;
            iVar3 = gr_L2G * 2;
            iVar10 = iVar3 + ch_L2G;
            iVar11 = *(int *)(global_gain_SIDE_INFO + iVar10 * 4);
            bits_found = real_bits_L2G;
            iVar2 = ch_L2G * 4;
            *(int *)((int)&OldValue_INTERNAL + ch_L2G * 4) = iVar11;
            iVar4 = *(int *)(part2_length_SIDE_INFO + iVar10 * 4);
            huff_bits_L2G = *(int *)((int)&targ_bits_L2G + iVar2) - iVar4;
            if (huff_bits_L2G < 0) {
              iVar6 = *(int *)(part2_3_length_SIDE_INFO + iVar10 * 4);
            }
            else {
              if (huff_bits_L2G < iVar6) {
                *(int *)(global_gain_SIDE_INFO + iVar10 * 4) = iVar11 + 1;
                AudioMP3ENCcount_bits();
                if (huff_bits_L2G < real_bits_L2G) {
                  do {
                    iVar12 = ch_L2G + gr_L2G * 2;
                    *(int *)(global_gain_SIDE_INFO + iVar12 * 4) =
                         *(int *)(global_gain_SIDE_INFO + iVar12 * 4) + 1;
                    AudioMP3ENCcount_bits();
                  } while (huff_bits_L2G < real_bits_L2G);
                  iVar3 = gr_L2G * 2;
                  iVar4 = *(int *)(part2_length_SIDE_INFO + (iVar3 + ch_L2G) * 4);
                  iVar8 = ch_L2G;
                  iVar12 = gr_L2G;
                  iVar6 = real_bits_L2G;
                }
                else {
                  iVar3 = gr_L2G * 2;
                  iVar4 = *(int *)(part2_length_SIDE_INFO + (iVar3 + ch_L2G) * 4);
                  iVar8 = ch_L2G;
                  iVar12 = gr_L2G;
                  iVar6 = real_bits_L2G;
                }
              }
              *(int *)(part2_3_length_SIDE_INFO + (iVar3 + iVar8) * 4) = iVar6;
            }
            local_90 = iVar12 * 8;
            local_98 = iVar8 << 3;
            iVar6 = iVar6 + iVar4;
            *(int *)(part2_3_length_SIDE_INFO + (iVar3 + iVar8) * 4) = iVar6;
            puVar7 = mfbuf_INTERNAL + (iVar8 * 0x65f + iVar12 * 0x240) * 4;
          }
          iVar2 = channels_out_INTERNAL;
          iVar4 = __aeabi_idiv(mean_bits_A2G,channels_out_INTERNAL);
          iVar10 = 0;
          ResvSize_INTERNAL = (iVar4 - iVar6) + ResvSize_INTERNAL;
          l3_enc_w_L2G = puVar7;
          do {
            if (*(int *)(xr_L2G + iVar10 + (local_90 + iVar12) * 0x200 + (local_98 + iVar8) * 0x100)
                < 0) {
              *(int *)(puVar7 + iVar10) = -*(int *)(puVar7 + iVar10);
            }
            iVar10 = iVar10 + 4;
          } while (iVar10 != 0x900);
          ch_L2G = iVar8 + 1;
        } while (ch_L2G < iVar2);
      }
      gr_L2G = iVar12 + 1;
    } while (gr_L2G < mode_gr_INTERNAL);
  }
  ResvFrameEnd();
  return;
}



void ResvFrameBegin(void)

{
  if (bitsPerFrame_A2G < 0x2d01) {
    ResvMax_INTERNAL = 0x2d00 - bitsPerFrame_A2G;
    if (resvLimit < ResvMax_INTERNAL) {
      ResvMax_INTERNAL = resvLimit;
    }
    return;
  }
  ResvMax_INTERNAL = 0;
  return;
}



void ResvFrameEnd(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)(ResvSize_INTERNAL >> 0x1f) >> 0x1d;
  resvDrain_post_SIDE_INFO = (ResvSize_INTERNAL + uVar1 & 7) - uVar1;
  iVar2 = ResvSize_INTERNAL - resvDrain_post_SIDE_INFO;
  over_bits_L2G = iVar2 - ResvMax_INTERNAL;
  if (0 < over_bits_L2G) {
    resvDrain_post_SIDE_INFO = resvDrain_post_SIDE_INFO + over_bits_L2G;
    iVar2 = ResvSize_INTERNAL - resvDrain_post_SIDE_INFO;
  }
  ResvSize_INTERNAL = iVar2;
  return;
}



void on_pe(void)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 in_cr0;
  undefined4 in_cr1;
  
  iVar2 = channels_out_INTERNAL;
  iVar5 = ResvMax_INTERNAL * 9 >> 0x1f;
  iVar1 = (ResvMax_INTERNAL * 9) / 10 + iVar5;
  if (iVar1 - iVar5 < ResvSize_INTERNAL) {
    iVar5 = ResvSize_INTERNAL + (iVar5 - iVar1);
  }
  else {
    coprocessor_function(0xb,6,5,in_cr0,in_cr1,in_cr0);
    iVar5 = 0;
  }
  tbits_L2G = mean_bits_A2G + iVar5;
  ch_L2G = 0;
  if (0 < channels_out_INTERNAL) {
    iVar5 = __aeabi_idiv(tbits_L2G,channels_out_INTERNAL);
    puVar3 = &targ_bits_L2G;
    if (0xffe < iVar5) {
      iVar5 = 0xfff;
    }
    do {
      puVar4 = (undefined8 *)((int)puVar3 + 4);
      *(int *)puVar3 = iVar5;
      puVar3 = puVar4;
    } while (puVar4 != (undefined8 *)((int)&targ_bits_L2G + iVar2 * 4));
    ch_L2G = iVar2;
    return;
  }
  ch_L2G = 0;
  return;
}



void quantize_xrpow_ISO(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  uVar4 = AudioMP3ENCpowInt - 0x3b;
  do {
    uVar1 = AudioMP3ENCmuls6(*(int *)(xrpow_L2G + iVar3),AudioMP3ENCpowFloat,uVar4);
    if ((int)uVar1 < 0x2000) {
      iVar2 = (int)*(short *)(AudioMP3ENCpowTable43_2 + uVar1 * 2);
    }
    else {
      if ((int)uVar1 < 0x20000) {
        iVar2 = (int)*(short *)(AudioMP3ENCpowTable43_2 + ((int)uVar1 >> 4) * 2) << 3;
      }
      else {
        iVar2 = (int)*(short *)(AudioMP3ENCpowTable43_2 + ((int)uVar1 >> 8) * 2) << 6;
      }
    }
    *(int *)(l3_enc_w_L2G + iVar3) = iVar2;
    iVar3 = iVar3 + 4;
  } while (iVar3 != 0x900);
  return;
}



void lame_encode_mp3_frame(void)

{
  bool bVar1;
  
  slot_lag_INTERNAL = slot_lag_INTERNAL - frac_SpF_INTERNAL;
  bVar1 = slot_lag_INTERNAL < 0;
  if (bVar1) {
    slot_lag_INTERNAL = slot_lag_INTERNAL + out_samplerate_GLOBAL;
  }
  padding_INTERNAL = (uint)bVar1;
  bitsPerFrame_A2G = ((uint)bVar1 + whole_SpF) * 8;
  mean_bits_A2G = __aeabi_idiv(bitsPerFrame_A2G + sideinfo_len_INTERNAL * -8,mode_gr_INTERNAL);
  mdct_sub48();
  iteration_loop();
  format_bitstream();
  copy_buffer();
  return;
}



undefined4 mul(int param_1,int param_2)

{
  return (int)((ulonglong)((longlong)param_1 * (longlong)param_2) >> 0x20);
}



uint AudioMP3ENCmuls(int param_1,int param_2)

{
  return (uint)((longlong)param_1 * (longlong)param_2) >> 0x1f |
         (int)((ulonglong)((longlong)param_1 * (longlong)param_2) >> 0x20) << 1;
}



uint AudioMP3ENCmuls3(int param_1,int param_2)

{
  return (uint)((longlong)param_1 * (longlong)param_2) >> 0x17 |
         (int)((ulonglong)((longlong)param_1 * (longlong)param_2) >> 0x20) << 9;
}



uint muls4(int param_1,int param_2)

{
  return (uint)((longlong)param_1 * (longlong)param_2) >> 0xe |
         (int)((ulonglong)((longlong)param_1 * (longlong)param_2) >> 0x20) << 0x12;
}



uint muls5(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = -param_3 + 0x2d;
  iVar2 = (int)((ulonglong)((longlong)param_1 * (longlong)param_2) >> 0x20);
  uVar1 = -param_3 + 0xd;
  uVar3 = (uint)((longlong)param_1 * (longlong)param_2) >> (uVar3 & 0xff) |
          iVar2 << (0x20 - uVar3 & 0xff);
  if (-1 < (int)uVar1) {
    uVar3 = iVar2 >> (uVar1 & 0xff);
  }
  return uVar3;
}



uint AudioMP3ENCmuls6(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (uint)((longlong)param_1 * (longlong)param_2);
  iVar2 = (int)((ulonglong)((longlong)param_1 * (longlong)param_2) >> 0x20);
  if (-1 < (int)param_3) {
    return uVar1 << (param_3 & 0xff);
  }
  uVar1 = uVar1 >> (-param_3 & 0xff) | iVar2 << (param_3 + 0x20 & 0xff);
  uVar3 = -param_3 - 0x20;
  if (-1 < (int)uVar3) {
    uVar1 = iVar2 >> (uVar3 & 0xff);
  }
  return uVar1;
}



uint AudioMP3ENCmuls2(int param_1,int param_2)

{
  return (uint)((longlong)param_1 * (longlong)param_2) >> 0x1e |
         (int)((ulonglong)((longlong)param_1 * (longlong)param_2) >> 0x20) << 2;
}



undefined4 mulr(int param_1,int param_2)

{
  return (int)((ulonglong)((longlong)param_1 * (longlong)param_2 + 0x80000000) >> 0x20);
}



undefined4 mulsr(int param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = ((longlong)param_1 * (longlong)param_2 & 0xffffffff00000000U) +
          ((longlong)param_1 * (longlong)param_2 & 0xffffffffU);
  uVar2 = VectorAdd(lVar1,lVar1,8);
  uVar2 = VectorAdd(uVar2,0x800000000,8);
  return (int)((ulonglong)uVar2 >> 0x20);
}



void FUN_00021e88(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int *piVar24;
  int iVar25;
  int iVar26;
  int *piVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int *piVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  undefined8 uVar42;
  uint local_70;
  int iStack108;
  
  piVar24 = param_1 + -0x3e;
  iVar22 = 0x300b4;
  piVar27 = param_1;
  piVar35 = param_2;
  do {
    piVar7 = piVar24 + -0xe0;
    piVar8 = piVar24 + -0xa0;
    piVar9 = piVar24 + -0x60;
    piVar10 = piVar24 + -0x20;
    piVar17 = piVar24 + 0x20;
    piVar1 = piVar24 + 0x60;
    piVar2 = piVar24 + 0xa0;
    piVar3 = piVar24 + 0xe0;
    piVar11 = piVar27 + -0x100;
    uVar18 = (longlong)piVar27[-0xe0] * (longlong)*(int *)(iVar22 + -0x54) +
             (longlong)piVar27[-0xa0] * (longlong)*(int *)(iVar22 + -0x58) +
             (longlong)piVar27[-0x60] * (longlong)*(int *)(iVar22 + -0x5c) +
             (longlong)piVar27[-0x20] * (longlong)*(int *)(iVar22 + -0x60) +
             (longlong)piVar27[0x20] * (longlong)*(int *)(iVar22 + -100) +
             (longlong)piVar27[0x60] * (longlong)*(int *)(iVar22 + -0x68) +
             (longlong)piVar27[0xa0] * (longlong)*(int *)(iVar22 + -0x6c) +
             (longlong)piVar27[0xe0] * (longlong)*(int *)(iVar22 + -0x70);
    piVar12 = piVar27 + -0xc0;
    uVar42 = VectorSub((uVar18 & 0xffffffff00000000) + (uVar18 & 0xffffffff),
                       (longlong)piVar24[0x100] * (longlong)*(int *)(iVar22 + -0x50),8);
    piVar13 = piVar27 + -0x80;
    uVar42 = VectorSub(uVar42,(longlong)piVar24[0xc0] * (longlong)*(int *)(iVar22 + -0x4c),8);
    piVar4 = piVar27 + 0x80;
    uVar42 = VectorSub(uVar42,(longlong)piVar24[0x80] * (longlong)*(int *)(iVar22 + -0x48),8);
    piVar14 = piVar27 + -0x40;
    uVar42 = VectorSub(uVar42,(longlong)piVar24[0x40] * (longlong)*(int *)(iVar22 + -0x44),8);
    piVar15 = piVar24 + -0x80;
    iVar20 = *piVar27;
    uVar42 = VectorSub(uVar42,(longlong)*piVar24 * (longlong)*(int *)(iVar22 + -0x40),8);
    piVar5 = piVar27 + 0x40;
    piVar16 = piVar24 + -0xc0;
    piVar6 = piVar27 + 0xc0;
    uVar42 = VectorSub(uVar42,(longlong)piVar24[-0x40] * (longlong)*(int *)(iVar22 + -0x3c),8);
    piVar24 = piVar24 + 1;
    piVar27 = piVar27 + -1;
    uVar42 = VectorSub(uVar42,(longlong)*piVar15 * (longlong)*(int *)(iVar22 + -0x38),8);
    lVar19 = (longlong)*piVar6 * (longlong)*(int *)(iVar22 + -0x34) +
             (longlong)*piVar4 * (longlong)*(int *)(iVar22 + -0x38) +
             (longlong)*piVar5 * (longlong)*(int *)(iVar22 + -0x3c) +
             (longlong)iVar20 * (longlong)*(int *)(iVar22 + -0x40) +
             (longlong)*piVar14 * (longlong)*(int *)(iVar22 + -0x44) +
             (longlong)*piVar13 * (longlong)*(int *)(iVar22 + -0x48) +
             (longlong)*piVar12 * (longlong)*(int *)(iVar22 + -0x4c) +
             (longlong)*piVar11 * (longlong)*(int *)(iVar22 + -0x50) +
             (longlong)*piVar3 * (longlong)*(int *)(iVar22 + -0x54) +
             (longlong)*piVar2 * (longlong)*(int *)(iVar22 + -0x58) +
             (longlong)*piVar1 * (longlong)*(int *)(iVar22 + -0x5c) +
             (longlong)*piVar17 * (longlong)*(int *)(iVar22 + -0x60) +
             (longlong)*piVar10 * (longlong)*(int *)(iVar22 + -100) +
             (longlong)*piVar9 * (longlong)*(int *)(iVar22 + -0x68) +
             (longlong)*piVar8 * (longlong)*(int *)(iVar22 + -0x6c) +
             (longlong)*piVar7 * (longlong)*(int *)(iVar22 + -0x70);
    uVar42 = VectorSub(uVar42,(longlong)*piVar16 * (longlong)*(int *)(iVar22 + -0x34),8);
    local_70 = (uint)uVar42;
    iStack108 = (int)((ulonglong)uVar42 >> 0x20);
    uVar29 = local_70 >> 0x1f | iStack108 << 1;
    uVar21 = AudioMP3ENCmuls((uint)lVar19 >> 0x1f | (int)((ulonglong)lVar19 >> 0x20) << 1,
                             *(int *)(iVar22 + -0x30));
    *piVar35 = uVar29 + uVar21;
    piVar17 = (int *)(iVar22 + -0x2c);
    iVar22 = iVar22 + 0x48;
    uVar21 = AudioMP3ENCmuls2(*piVar17,uVar29 - uVar21);
    piVar35[1] = uVar21;
    piVar35 = piVar35 + 2;
  } while (iVar22 != 0x304ec);
  uVar18 = (longlong)param_1[-0xef] * (longlong)enwindow._1124_4_ +
           (longlong)param_1[-0xaf] * (longlong)enwindow._1120_4_ +
           (longlong)param_1[-0x6f] * (longlong)enwindow._1116_4_ +
           (longlong)param_1[-0x2f] * (longlong)enwindow._1112_4_;
  uVar42 = VectorSub((uVar18 & 0xffffffff00000000) + (uVar18 & 0xffffffff),
                     (longlong)param_1[0x11] * (longlong)enwindow._1128_4_,8);
  uVar42 = VectorSub(uVar42,(longlong)param_1[0x51] * (longlong)enwindow._1132_4_,8);
  uVar42 = VectorSub(uVar42,(longlong)param_1[0x91] * (longlong)enwindow._1136_4_,8);
  lVar19 = (longlong)(param_1[-0xff] - param_1[0xc1]) * (longlong)enwindow._1108_4_ +
           (longlong)(param_1[-0xdf] + param_1[0xa1]) * (longlong)enwindow._1104_4_ +
           (longlong)(param_1[-0xbf] - param_1[0x81]) * (longlong)enwindow._1100_4_ +
           (longlong)(param_1[-0x9f] + param_1[0x61]) * (longlong)enwindow._1096_4_ +
           (longlong)(param_1[-0x7f] - param_1[0x41]) * (longlong)enwindow._1092_4_ +
           (longlong)(param_1[-0x5f] + param_1[0x21]) * (longlong)enwindow._1088_4_ +
           (longlong)(param_1[-0x3f] - param_1[1]) * (longlong)enwindow._1084_4_ +
           (longlong)param_1[-0x1f] * (longlong)enwindow._1080_4_;
  uVar29 = (uint)((longlong)param_1[0xd1] * (longlong)enwindow._1140_4_);
  iVar40 = param_2[0xe];
  uVar21 = (uint)lVar19 >> 0x1f | (int)((ulonglong)lVar19 >> 0x20) << 1;
  uVar29 = (uint)uVar42 - uVar29 >> 0x1f |
           ((int)((ulonglong)uVar42 >> 0x20) -
           ((int)((ulonglong)((longlong)param_1[0xd1] * (longlong)enwindow._1140_4_) >> 0x20) +
           (uint)((uint)uVar42 < uVar29))) * 2;
  iVar25 = uVar29 + uVar21;
  iVar22 = uVar29 - uVar21;
  param_2[0x1f] = iVar25 + iVar40;
  iVar20 = *param_2;
  param_2[0xe] = iVar25 - iVar40;
  param_2[0x1e] = iVar22 + (param_2[0xf] - iVar40);
  *param_2 = param_2[0x1c] + iVar20;
  param_2[0xf] = iVar22 - (param_2[0xf] - iVar40);
  uVar21 = AudioMP3ENCmuls2(param_2[0x1c] - iVar20,TwindTable._0_4_);
  iVar20 = param_2[1];
  param_2[1] = param_2[0x1d] + iVar20;
  iVar22 = TwindTable._0_4_;
  param_2[0x1c] = uVar21;
  uVar21 = AudioMP3ENCmuls2(param_2[0x1d] - iVar20,iVar22);
  iVar20 = param_2[2];
  param_2[2] = param_2[0x1a] + iVar20;
  iVar22 = TwindTable._4_4_;
  param_2[0x1d] = uVar21;
  uVar21 = AudioMP3ENCmuls2(param_2[0x1a] - iVar20,iVar22);
  iVar20 = param_2[3];
  param_2[3] = param_2[0x1b] + iVar20;
  iVar22 = TwindTable._4_4_;
  param_2[0x1a] = uVar21;
  uVar21 = AudioMP3ENCmuls2(param_2[0x1b] - iVar20,iVar22);
  iVar20 = param_2[4];
  param_2[4] = param_2[0x18] + iVar20;
  iVar22 = TwindTable._8_4_;
  param_2[0x1b] = uVar21;
  uVar21 = AudioMP3ENCmuls2(param_2[0x18] - iVar20,iVar22);
  iVar20 = param_2[5];
  param_2[5] = param_2[0x19] + iVar20;
  iVar22 = TwindTable._8_4_;
  param_2[0x18] = uVar21;
  uVar21 = AudioMP3ENCmuls2(param_2[0x19] - iVar20,iVar22);
  iVar20 = param_2[6];
  param_2[6] = param_2[0x16] + iVar20;
  iVar22 = TwindTable._12_4_;
  param_2[0x19] = uVar21;
  uVar21 = AudioMP3ENCmuls2(param_2[0x16] - iVar20,iVar22);
  iVar20 = param_2[7];
  param_2[7] = param_2[0x17] + iVar20;
  iVar22 = TwindTable._12_4_;
  param_2[0x16] = uVar21;
  uVar21 = AudioMP3ENCmuls2(param_2[0x17] - iVar20,iVar22);
  iVar20 = param_2[8];
  param_2[8] = param_2[0x14] + iVar20;
  iVar22 = TwindTable._16_4_;
  param_2[0x17] = uVar21;
  uVar21 = AudioMP3ENCmuls2(param_2[0x14] - iVar20,iVar22);
  iVar20 = param_2[9];
  param_2[9] = param_2[0x15] + iVar20;
  iVar22 = TwindTable._16_4_;
  param_2[0x14] = uVar21;
  uVar21 = AudioMP3ENCmuls2(param_2[0x15] - iVar20,iVar22);
  iVar20 = param_2[10];
  param_2[10] = param_2[0x12] + iVar20;
  iVar22 = TwindTable._20_4_;
  param_2[0x15] = uVar21;
  uVar21 = AudioMP3ENCmuls2(param_2[0x12] - iVar20,iVar22);
  iVar20 = param_2[0xb];
  param_2[0xb] = param_2[0x13] + iVar20;
  iVar22 = TwindTable._20_4_;
  param_2[0x12] = uVar21;
  uVar21 = AudioMP3ENCmuls2(param_2[0x13] - iVar20,iVar22);
  iVar20 = param_2[0xc];
  param_2[0xc] = param_2[0x10] + iVar20;
  iVar22 = TwindTable._24_4_;
  param_2[0x13] = uVar21;
  uVar21 = AudioMP3ENCmuls2(param_2[0x10] - iVar20,iVar22);
  iVar22 = TwindTable._24_4_;
  iVar20 = param_2[0xd];
  param_2[0xd] = param_2[0x11] + iVar20;
  param_2[0x10] = uVar21;
  uVar21 = AudioMP3ENCmuls2(param_2[0x11] - iVar20,iVar22);
  iVar22 = TwindTable._20_4_;
  iVar20 = param_2[0x14];
  param_2[0x14] = param_2[0x18] + iVar20;
  param_2[0x11] = uVar21;
  uVar21 = AudioMP3ENCmuls2(param_2[0x18] - iVar20,iVar22);
  iVar22 = TwindTable._20_4_;
  iVar20 = param_2[0x15];
  param_2[0x15] = param_2[0x19] + iVar20;
  param_2[0x18] = uVar21;
  uVar21 = AudioMP3ENCmuls2(param_2[0x19] - iVar20,iVar22);
  iVar20 = param_2[4];
  param_2[4] = iVar20 + param_2[8];
  iVar22 = TwindTable._20_4_;
  param_2[0x19] = uVar21;
  uVar21 = AudioMP3ENCmuls2(iVar20 - param_2[8],iVar22);
  iVar22 = param_2[5];
  param_2[5] = iVar22 + param_2[9];
  param_2[8] = uVar21;
  uVar21 = AudioMP3ENCmuls2(iVar22 - param_2[9],TwindTable._20_4_);
  iVar20 = *param_2;
  *param_2 = iVar20 + param_2[0xc];
  iVar22 = TwindTable._4_4_;
  param_2[9] = uVar21;
  uVar21 = AudioMP3ENCmuls2(iVar20 - param_2[0xc],iVar22);
  iVar20 = param_2[1];
  param_2[1] = iVar20 + param_2[0xd];
  iVar22 = TwindTable._4_4_;
  param_2[0xc] = uVar21;
  uVar21 = AudioMP3ENCmuls2(iVar20 - param_2[0xd],iVar22);
  iVar22 = TwindTable._4_4_;
  iVar20 = param_2[0x10];
  param_2[0x10] = iVar20 + param_2[0x1c];
  param_2[0xd] = uVar21;
  uVar21 = AudioMP3ENCmuls2(iVar20 - param_2[0x1c],iVar22);
  iVar22 = TwindTable._4_4_;
  iVar20 = param_2[0x11];
  param_2[0x11] = param_2[0x1d] + iVar20;
  param_2[0x1c] = uVar21;
  uVar21 = AudioMP3ENCmuls2(param_2[0x1d] - iVar20,iVar22);
  iVar22 = param_2[6];
  iVar40 = param_2[7] - iVar22;
  iVar20 = param_2[0x16] - iVar40;
  iVar25 = (param_2[0x17] - param_2[7]) - iVar20;
  param_2[6] = param_2[0x1f] - iVar22;
  param_2[0x1f] = iVar22 + param_2[0x1f];
  param_2[0x16] = param_2[0xf] - iVar20;
  param_2[7] = param_2[0x1e] - iVar40;
  param_2[0x1e] = iVar40 + param_2[0x1e];
  param_2[0xf] = iVar20 + param_2[0xf];
  param_2[0x17] = param_2[0xe] - iVar25;
  param_2[0xe] = iVar25 + param_2[0xe];
  param_2[0x1d] = uVar21;
  uVar21 = AudioMP3ENCmuls2(0x5a827999,param_2[2] - param_2[10]);
  param_2[2] = param_2[2] + param_2[10];
  param_2[10] = uVar21;
  uVar21 = AudioMP3ENCmuls2(0x5a827999,param_2[3] - param_2[0xb]);
  param_2[3] = param_2[3] + param_2[0xb];
  param_2[0xb] = uVar21;
  uVar21 = AudioMP3ENCmuls2(0x5a827999,param_2[0x1a] - param_2[0x12]);
  iVar22 = param_2[0x12];
  param_2[0x12] = iVar22 + param_2[0x1a];
  param_2[0x1a] = uVar21 - (iVar22 + param_2[0x1a]);
  uVar21 = AudioMP3ENCmuls2(0x5a827999,param_2[0x1b] - param_2[0x13]);
  iVar28 = param_2[2];
  iVar22 = param_2[0x13];
  iVar26 = param_2[3] - iVar28;
  iVar23 = param_2[0x12] - iVar26;
  iVar20 = (iVar22 + param_2[0x1b]) - param_2[3];
  iVar41 = iVar20 - iVar23;
  iVar30 = param_2[0x1f];
  iVar39 = param_2[10] - iVar41;
  iVar20 = param_2[0xb] - iVar20;
  iVar25 = iVar20 - iVar39;
  iVar40 = param_2[0x1a] - iVar25;
  param_2[0x1f] = iVar28 + iVar30;
  param_2[3] = param_2[0x1e] - iVar26;
  param_2[0x1e] = iVar26 + param_2[0x1e];
  param_2[0x12] = param_2[0xf] - iVar23;
  param_2[0xf] = iVar23 + param_2[0xf];
  param_2[0x13] = param_2[0xe] - iVar41;
  param_2[0xe] = iVar41 + param_2[0xe];
  param_2[10] = param_2[0x17] - iVar39;
  param_2[2] = iVar30 - iVar28;
  param_2[0x17] = iVar39 + param_2[0x17];
  iVar22 = ((uVar21 - (iVar22 + param_2[0x1b])) - iVar20) - iVar40;
  param_2[0xb] = param_2[0x16] - iVar25;
  param_2[0x16] = iVar25 + param_2[0x16];
  param_2[0x1a] = param_2[7] - iVar40;
  param_2[7] = iVar40 + param_2[7];
  param_2[0x1b] = param_2[6] - iVar22;
  param_2[6] = iVar22 + param_2[6];
  uVar21 = AudioMP3ENCmuls2(0x5a827999,*param_2 - param_2[4]);
  *param_2 = *param_2 + param_2[4];
  param_2[4] = uVar21;
  uVar21 = AudioMP3ENCmuls2(0x5a827999,param_2[1] - param_2[5]);
  param_2[1] = param_2[1] + param_2[5];
  param_2[5] = uVar21;
  uVar21 = AudioMP3ENCmuls2(0x5a827999,param_2[0x10] - param_2[0x14]);
  param_2[0x10] = param_2[0x10] + param_2[0x14];
  param_2[0x14] = uVar21;
  uVar21 = AudioMP3ENCmuls2(0x5a827999,param_2[0x11] - param_2[0x15]);
  param_2[0x11] = param_2[0x11] + param_2[0x15];
  param_2[0x15] = uVar21;
  uVar21 = AudioMP3ENCmuls2(-0x5a827999,param_2[8] - param_2[0xc]);
  iVar22 = param_2[8];
  param_2[8] = iVar22 + param_2[0xc];
  param_2[0xc] = uVar21 - (iVar22 + param_2[0xc]);
  uVar21 = AudioMP3ENCmuls2(-0x5a827999,param_2[9] - param_2[0xd]);
  iVar22 = param_2[9];
  param_2[9] = iVar22 + param_2[0xd];
  param_2[0xd] = uVar21 - (iVar22 + param_2[0xd]);
  uVar21 = AudioMP3ENCmuls2(-0x5a827999,param_2[0x19] - param_2[0x1d]);
  iVar22 = param_2[0x19];
  param_2[0x19] = iVar22 + param_2[0x1d];
  param_2[0x1d] = uVar21 - (iVar22 + param_2[0x1d]);
  uVar21 = AudioMP3ENCmuls2(-0x5a827999,param_2[0x18] + param_2[0x1c]);
  iVar41 = param_2[1] - *param_2;
  iVar25 = param_2[0x10] - iVar41;
  iVar23 = param_2[0x11] - param_2[1];
  iVar31 = iVar23 - iVar25;
  iVar23 = param_2[9] - iVar23;
  iVar20 = param_2[8] - iVar31;
  iVar40 = iVar23 - iVar20;
  iVar39 = (param_2[0x18] - param_2[0x1c]) - param_2[0x10];
  iVar33 = param_2[0x19] - param_2[0x11];
  iVar36 = param_2[0x14] - iVar39;
  iVar39 = iVar39 - iVar40;
  iVar23 = iVar33 - iVar23;
  iVar33 = param_2[0x15] - iVar33;
  iVar28 = iVar23 - iVar39;
  iVar22 = param_2[4] - iVar28;
  iVar23 = param_2[5] - iVar23;
  iVar30 = iVar23 - iVar22;
  iVar23 = iVar33 - iVar23;
  iVar32 = iVar36 - iVar30;
  iVar34 = param_2[0xd] - iVar23;
  iVar23 = iVar23 - iVar32;
  iVar26 = param_2[0xc] - iVar23;
  iVar37 = iVar34 - iVar26;
  iVar38 = param_2[0x1f];
  param_2[0x1f] = iVar38 - *param_2;
  param_2[1] = iVar41 + param_2[0x1e];
  param_2[0x1e] = param_2[0x1e] - iVar41;
  param_2[4] = iVar22 + param_2[0x1b];
  *param_2 = *param_2 + iVar38;
  param_2[0x1b] = param_2[0x1b] - iVar22;
  iVar22 = ((uVar21 - (param_2[0x18] - param_2[0x1c])) - iVar36) - iVar37;
  param_2[5] = iVar30 + param_2[0x1a];
  iVar36 = param_2[2];
  iVar41 = ((param_2[0x1d] - iVar33) - iVar34) - iVar22;
  param_2[0x1a] = param_2[0x1a] - iVar30;
  param_2[2] = iVar36 - iVar41;
  param_2[0x1d] = iVar41 + iVar36;
  param_2[0x1c] = iVar22 + param_2[3];
  param_2[0x19] = iVar28 + param_2[6];
  param_2[3] = param_2[3] - iVar22;
  iVar41 = param_2[0x16];
  iVar30 = param_2[0xb];
  param_2[0x18] = iVar39 + param_2[7];
  param_2[0x15] = iVar23 + param_2[10];
  param_2[8] = iVar20 + param_2[0x17];
  param_2[0x17] = param_2[0x17] - iVar20;
  iVar22 = param_2[0xe];
  param_2[0x16] = iVar41 - iVar40;
  iVar20 = param_2[0xf];
  param_2[9] = iVar40 + iVar41;
  param_2[6] = param_2[6] - iVar28;
  param_2[10] = param_2[10] - iVar23;
  param_2[0xb] = iVar30 - iVar32;
  param_2[7] = param_2[7] - iVar39;
  param_2[0x14] = iVar32 + iVar30;
  param_2[0xc] = iVar26 + param_2[0x13];
  param_2[0x13] = param_2[0x13] - iVar26;
  param_2[0xd] = iVar37 + param_2[0x12];
  param_2[0x12] = param_2[0x12] - iVar37;
  param_2[0xe] = iVar22 - iVar31;
  param_2[0x11] = iVar31 + iVar22;
  param_2[0xf] = iVar20 - iVar25;
  param_2[0x10] = iVar25 + iVar20;
  return;
}



void mdct_sub48(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int local_ac;
  int local_a0;
  int local_68;
  int local_64;
  int *local_54;
  int *local_50;
  int local_4c;
  int local_48;
  int local_3c;
  undefined1 *local_38;
  
  if (channels_out_INTERNAL < 1) {
    return;
  }
  local_48 = 0;
  local_3c = 0;
  local_54 = (int *)(mfbuf_INTERNAL + 0x478);
  local_38 = xr_L2G;
LAB_00022bac:
  if (0 < mode_gr_INTERNAL) {
    local_64 = local_48;
    local_50 = (int *)local_38;
    local_4c = 0;
    local_68 = local_48 + 0x900;
LAB_00022c2c:
    piVar21 = local_54 + 0x240;
    mdct_enc = local_50;
    piVar7 = (int *)(sb_sample_INTERNAL + local_68);
    samp = piVar7;
    do {
      FUN_00021e88(local_54,piVar7);
      piVar7 = local_54 + 0x20;
      local_54 = local_54 + 0x40;
      FUN_00021e88(piVar7,samp + 0x20);
      piVar1 = samp + 0x20;
      piVar7 = samp + 0x40;
      piVar9 = samp;
      samp = piVar7;
      do {
        piVar9[0x21] = -piVar9[0x21];
        piVar9 = piVar9 + 2;
      } while (piVar9 != piVar1);
    } while (local_54 != piVar21);
    piVar7 = (int *)(huf_tbl_noESC + 0x38);
    local_ac = 0;
    local_a0 = 1;
    do {
      piVar21 = mdct_enc;
      piVar7 = piVar7 + 1;
      band1 = sb_sample_INTERNAL + local_68 + *piVar7 * 4;
      band0 = sb_sample_INTERNAL + *piVar7 * 4 + local_64;
      if (local_ac < lowpass_band_INTERNAL) {
        iVar8 = 0;
        puVar12 = &DAT_0002cad4;
        piVar21 = (int *)(work + 0x20);
        do {
          iVar15 = iVar8 * -0x20 + 0x880;
          uVar3 = AudioMP3ENCmuls3(puVar12[0x12],*(int *)(band1 + iVar8 * 0x20));
          uVar4 = AudioMP3ENCmuls3(puVar12[0x1b],*(int *)(band1 + iVar15));
          uVar5 = AudioMP3ENCmuls3(*(int *)((int)&DAT_0002cad4 + iVar8),
                                   *(int *)(band0 + iVar8 * 0x20));
          uVar6 = AudioMP3ENCmuls3(puVar12[9],*(int *)(band0 + iVar15));
          puVar12 = puVar12 + 1;
          iVar15 = *(int *)((int)&DAT_0002cb84 + iVar8);
          uVar2 = AudioMP3ENCmuls(uVar5 - uVar6,iVar15);
          *(uint *)(work + iVar8) = uVar2 * -0x17 + uVar3 + uVar4;
          iVar8 = iVar8 + 4;
          uVar3 = AudioMP3ENCmuls(uVar3 + uVar4,iVar15);
          piVar21 = piVar21 + 1;
          *piVar21 = uVar3 * 0x17 + (uVar5 - uVar6);
          piVar9 = mdct_enc;
        } while (iVar8 != 0x24);
        iVar17 = work._64_4_ + work._40_4_;
        iVar24 = work._32_4_ + work._0_4_;
        iVar15 = work._32_4_ - work._0_4_;
        iVar22 = work._24_4_ + work._8_4_;
        iVar18 = work._24_4_ - work._8_4_;
        iVar10 = work._68_4_ + work._36_4_;
        iVar16 = work._60_4_ - work._44_4_;
        iVar19 = work._68_4_ - work._36_4_;
        iVar13 = work._60_4_ + work._44_4_;
        iVar20 = work._20_4_ + work._12_4_;
        iVar11 = work._20_4_ - work._12_4_;
        iVar14 = work._56_4_ - work._48_4_;
        iVar25 = work._56_4_ + work._48_4_;
        iVar23 = work._4_4_ + work._28_4_;
        uVar3 = AudioMP3ENCmuls(work._64_4_ - work._40_4_,0x6ed9eba0);
        iVar8 = (iVar24 + iVar22) - iVar20;
        piVar9[0x11] = iVar8 + (work._16_4_ - iVar23);
        uVar4 = AudioMP3ENCmuls(iVar8,0x3fffffff);
        iVar8 = uVar4 + (iVar23 - work._16_4_);
        uVar4 = AudioMP3ENCmuls((iVar19 - iVar16) - iVar14,0x6ed9eba0);
        piVar9[6] = uVar4 - iVar8;
        piVar9[5] = iVar8 + uVar4;
        uVar4 = AudioMP3ENCmuls(iVar23,0x3fffffff);
        iVar8 = uVar4 + work._16_4_;
        uVar4 = AudioMP3ENCmuls(iVar19,0x7e0e2e31);
        uVar5 = AudioMP3ENCmuls(iVar16,0x5246dd48);
        uVar6 = AudioMP3ENCmuls(iVar14,0x2bc750e8);
        iVar26 = uVar3 + uVar4 + uVar5 + uVar6;
        uVar4 = AudioMP3ENCmuls(-iVar24,-0x163a1a7d);
        uVar5 = AudioMP3ENCmuls(iVar22,-0x620dbe8a);
        uVar6 = AudioMP3ENCmuls(iVar20,0x7847d908);
        iVar23 = ((iVar8 + uVar4) - uVar5) + uVar6;
        piVar9[1] = iVar26 + iVar23;
        piVar9[2] = iVar26 - iVar23;
        uVar4 = AudioMP3ENCmuls(iVar19,0x5246dd48);
        uVar5 = AudioMP3ENCmuls(iVar16,0x2bc750e8);
        uVar6 = AudioMP3ENCmuls(iVar14,0x7e0e2e31);
        iVar23 = ((uVar4 - uVar3) - uVar5) + uVar6;
        uVar4 = AudioMP3ENCmuls(-iVar24,-0x620dbe8a);
        uVar5 = AudioMP3ENCmuls(iVar22,0x7847d908);
        uVar6 = AudioMP3ENCmuls(iVar20,-0x163a1a7d);
        iVar26 = ((iVar8 + uVar4) - uVar5) + uVar6;
        piVar9[10] = iVar23 - iVar26;
        piVar9[9] = iVar23 + iVar26;
        uVar4 = AudioMP3ENCmuls(iVar19,0x2bc750e8);
        uVar5 = AudioMP3ENCmuls(iVar16,0x7e0e2e31);
        uVar6 = AudioMP3ENCmuls(iVar14,0x5246dd48);
        iVar16 = ((uVar4 - uVar3) + uVar5) - uVar6;
        uVar3 = AudioMP3ENCmuls(iVar24,0x7847d908);
        uVar4 = AudioMP3ENCmuls(iVar22,-0x163a1a7d);
        uVar5 = AudioMP3ENCmuls(iVar20,-0x620dbe8a);
        iVar20 = iVar25 + iVar10 + iVar13;
        iVar8 = ((uVar3 - iVar8) + uVar4) - uVar5;
        piVar9[0xd] = iVar16 + iVar8;
        piVar9[0xe] = iVar16 - iVar8;
        *piVar9 = iVar20 + iVar17 + work._52_4_;
        uVar3 = AudioMP3ENCmuls(iVar20,0x3fffffff);
        iVar8 = uVar3 - (iVar17 + work._52_4_);
        uVar3 = AudioMP3ENCmuls(iVar11 + (iVar15 - iVar18),0x6ed9eba0);
        piVar9[0xc] = iVar8 - uVar3;
        piVar9[0xb] = iVar8 + uVar3;
        uVar3 = AudioMP3ENCmuls(work._28_4_ - work._4_4_,0x6ed9eba0);
        iVar8 = work._52_4_;
        uVar4 = AudioMP3ENCmuls(iVar17,0x3fffffff);
        iVar8 = iVar8 - uVar4;
        uVar4 = AudioMP3ENCmuls(iVar10,0x7847d908);
        uVar5 = AudioMP3ENCmuls(iVar13,-0x163a1a7d);
        uVar6 = AudioMP3ENCmuls(iVar25,-0x620dbe8a);
        iVar20 = (uVar4 - iVar8) + uVar5 + uVar6;
        uVar4 = AudioMP3ENCmuls(iVar15,0x2bc750e8);
        uVar5 = AudioMP3ENCmuls(iVar18,0x7e0e2e31);
        uVar6 = AudioMP3ENCmuls(iVar11,0x5246dd48);
        iVar16 = uVar3 + uVar4 + uVar5 + uVar6;
        piVar9[3] = iVar20 + iVar16;
        piVar9[4] = iVar20 - iVar16;
        uVar4 = AudioMP3ENCmuls(-iVar10,-0x620dbe8a);
        uVar5 = AudioMP3ENCmuls(iVar13,0x7847d908);
        uVar6 = AudioMP3ENCmuls(iVar25,-0x163a1a7d);
        iVar16 = ((iVar8 + uVar4) - uVar5) - uVar6;
        uVar4 = AudioMP3ENCmuls(iVar15,0x5246dd48);
        uVar5 = AudioMP3ENCmuls(iVar18,0x2bc750e8);
        uVar6 = AudioMP3ENCmuls(iVar11,0x7e0e2e31);
        iVar20 = ((uVar3 + uVar4) - uVar5) - uVar6;
        piVar9[7] = iVar16 + iVar20;
        piVar9[8] = iVar16 - iVar20;
        uVar4 = AudioMP3ENCmuls(-iVar10,-0x163a1a7d);
        uVar5 = AudioMP3ENCmuls(iVar13,-0x620dbe8a);
        uVar6 = AudioMP3ENCmuls(iVar25,0x7847d908);
        iVar16 = ((iVar8 + uVar4) - uVar5) - uVar6;
        uVar4 = AudioMP3ENCmuls(iVar15,0x7e0e2e31);
        uVar5 = AudioMP3ENCmuls(iVar18,0x5246dd48);
        uVar6 = AudioMP3ENCmuls(iVar11,0x2bc750e8);
        piVar21 = mdct_enc;
        iVar8 = ((uVar4 - uVar3) + uVar5) - uVar6;
        piVar9[0xf] = iVar16 + iVar8;
        piVar9[0x10] = iVar16 - iVar8;
LAB_000233a8:
        if (local_ac != 0) {
          iVar8 = 0x1c;
          do {
            iVar16 = *(int *)(&DAT_0002cab4 + iVar8);
            iVar15 = -4 - iVar8;
            uVar3 = AudioMP3ENCmuls(*(int *)((int)piVar21 + iVar8),iVar16);
            iVar20 = *(int *)(&DAT_0002cb64 + iVar8);
            uVar4 = AudioMP3ENCmuls(*(int *)((int)mdct_enc + iVar15),iVar20);
            uVar5 = AudioMP3ENCmuls(*(int *)((int)mdct_enc + iVar8),iVar20);
            uVar6 = AudioMP3ENCmuls(*(int *)((int)mdct_enc + iVar15),iVar16);
            piVar21 = mdct_enc;
            *(uint *)((int)mdct_enc + iVar15) = uVar3 + uVar4;
            *(uint *)((int)piVar21 + iVar8) = uVar5 - uVar6;
            iVar8 = iVar8 + -4;
          } while (iVar8 != -4);
          goto joined_r0x00023460;
        }
        mdct_enc = piVar21 + 0x12;
      }
      else {
        iVar8 = 0;
        do {
          *(undefined4 *)((int)piVar21 + iVar8) = 0;
          iVar8 = iVar8 + 4;
        } while (iVar8 != 0x48);
        if (local_ac <= lowpass_band_INTERNAL) goto LAB_000233a8;
joined_r0x00023460:
        mdct_enc = piVar21 + 0x12;
        if (local_a0 == 0x20) goto LAB_00023464;
      }
      local_ac = local_ac + 1;
      local_a0 = local_a0 + 1;
    } while( true );
  }
  goto LAB_000234ac;
LAB_00023464:
  local_4c = local_4c + 1;
  local_50 = local_50 + 0x480;
  local_68 = local_68 + -0x900;
  local_64 = local_64 + 0x900;
  if (mode_gr_INTERNAL <= local_4c) goto code_r0x000234a4;
  goto LAB_00022c2c;
code_r0x000234a4:
  if (mode_gr_INTERNAL == 1) {
    iVar8 = 0;
    band0 = sb_sample_INTERNAL + local_48;
    band1 = (undefined1 *)(local_48 + 0x398d8);
    do {
      *(undefined4 *)(sb_sample_INTERNAL + local_48 + iVar8) =
           *(undefined4 *)((undefined1 *)(local_48 + 0x398d8) + iVar8);
      iVar8 = iVar8 + 4;
    } while (iVar8 != 0x900);
  }
LAB_000234ac:
  local_3c = local_3c + 1;
  local_48 = local_48 + 0x1200;
  local_38 = (undefined1 *)((int)local_38 + 0x900);
  if (channels_out_INTERNAL <= local_3c) {
    return;
  }
  local_54 = (int *)(mfbuf_INTERNAL + 0x1df4);
  goto LAB_00022bac;
}



undefined4 map2MP3Frequency(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x1f41) {
    return 8000;
  }
  uVar1 = 0x2b11;
  if ((0x2b11 < param_1) && (uVar1 = 12000, 12000 < param_1)) {
    if (param_1 < 0x3e81) {
      return 16000;
    }
    uVar1 = 0x5622;
    if ((0x5622 < param_1) && (uVar1 = 24000, 24000 < param_1)) {
      if (param_1 < 0x7d01) {
        return 32000;
      }
      if (param_1 < 0xac45) {
        uVar1 = 0xac44;
      }
      else {
        uVar1 = 48000;
      }
      return uVar1;
    }
  }
  return uVar1;
}



void BitrateIndex(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = (int *)(t11l + version_GLOBAL * 0x40 + 0x3c);
  do {
    piVar1 = piVar1 + 1;
    if (*piVar1 == brate_GLOBAL) {
      bitrate_index_INTERNAL = iVar2;
      return;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0xf);
  ErrorMessage = 0x12;
  return;
}



void lame_errorf(void)

{
  return;
}



undefined4 map2MP3FrequencyIndex(void)

{
  undefined4 uVar1;
  
  if (out_samplerate_GLOBAL < 0x1f41) {
    return 0;
  }
  if (out_samplerate_GLOBAL < 0x2b12) {
    return 1;
  }
  if (out_samplerate_GLOBAL < 0x2ee1) {
    return 2;
  }
  if (16000 < out_samplerate_GLOBAL) {
    if (out_samplerate_GLOBAL < 0x5623) {
      return 4;
    }
    if (24000 < out_samplerate_GLOBAL) {
      if (32000 < out_samplerate_GLOBAL) {
        if (out_samplerate_GLOBAL < 0xac45) {
          uVar1 = 7;
        }
        else {
          uVar1 = 8;
        }
        return uVar1;
      }
      return 6;
    }
    return 5;
  }
  return 3;
}



void lame_init_params(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  int iVar5;
  int iVar6;
  
  if (num_channels_GLOBAL == 1) {
    mode_GLOBAL = 3;
LAB_00023a50:
    channels_out_INTERNAL = 1;
  }
  else {
    channels_out_INTERNAL = 2;
    if (mode_GLOBAL == 3) goto LAB_00023a50;
  }
  if (brate_GLOBAL == 0) {
    if (out_samplerate_GLOBAL < 0x5dc1) {
      if (out_samplerate_GLOBAL < 0x2ee1) {
        brate_GLOBAL = 0x10;
      }
      else {
        brate_GLOBAL = 0x20;
      }
      goto LAB_00023788;
    }
    brate_GLOBAL = 0x80;
LAB_00023838:
    mode_gr_INTERNAL = 2;
    version_GLOBAL = 1;
    resvLimit = 0xff8;
    framesize_L2G = 0x480;
    if (out_samplerate_GLOBAL != 0xac44) goto LAB_000237c8;
  }
  else {
    if (24000 < out_samplerate_GLOBAL) goto LAB_00023838;
LAB_00023788:
    mode_gr_INTERNAL = 1;
    version_GLOBAL = 0;
    resvLimit = 0x7f8;
    framesize_L2G = 0x240;
LAB_000237c8:
    if (out_samplerate_GLOBAL == 48000) {
LAB_00023a2c:
      samplerate_index_INTERNAL = 1;
      goto LAB_00023894;
    }
    if (out_samplerate_GLOBAL == 32000) {
LAB_00023a18:
      samplerate_index_INTERNAL = 2;
      goto LAB_00023894;
    }
    if (out_samplerate_GLOBAL != 0x5622) {
      if (out_samplerate_GLOBAL == 24000) goto LAB_00023a2c;
      if (out_samplerate_GLOBAL == 16000) goto LAB_00023a18;
      if (out_samplerate_GLOBAL != 0x2b11) {
        if (out_samplerate_GLOBAL == 12000) {
          samplerate_index_INTERNAL = 1;
        }
        else {
          samplerate_index_INTERNAL = 2;
        }
        goto LAB_00023894;
      }
    }
  }
  samplerate_index_INTERNAL = 0;
LAB_00023894:
  BitrateIndex();
  iVar1 = mode_GLOBAL;
  if (mode_GLOBAL == 3) {
    iVar4 = 0;
  }
  else {
    iVar4 = mode_GLOBAL;
    if (mode_GLOBAL != 1) {
      if (mode_GLOBAL == 2 || mode_GLOBAL == 0) {
        iVar4 = 2;
      }
      else {
        iVar4 = 0;
      }
    }
  }
  outsamplerate_index = map2MP3FrequencyIndex();
  iVar3 = version_GLOBAL;
  iVar2 = out_samplerate_GLOBAL;
  iVar5 = 0;
  iVar6 = version_GLOBAL * 3 + samplerate_index_INTERNAL;
  lowpass_band_INTERNAL =
       *(undefined4 *)
        (lowsubbandtable +
        (outsamplerate_index * 0x2a + iVar4 * 0xe + bitrate_index_INTERNAL + -1) * 4);
  if (out_samplerate_GLOBAL < 16000) {
    iVar4 = 6;
  }
  else {
    iVar4 = 0;
  }
  do {
    *(undefined4 *)(l_INTERNAL + iVar5) =
         *(undefined4 *)(sfBandIndex + iVar5 + (iVar6 + iVar4) * 0x5c);
    iVar5 = iVar5 + 4;
  } while (iVar5 != 0x5c);
  if (iVar3 == 1) {
    if (channels_out_INTERNAL == 1) {
      sideinfo_len_INTERNAL = 0x15;
    }
    else {
      sideinfo_len_INTERNAL = 0x24;
    }
  }
  else {
    if (channels_out_INTERNAL == 1) {
      sideinfo_len_INTERNAL = 0xd;
    }
    else {
      sideinfo_len_INTERNAL = 0x15;
    }
  }
  iVar4 = brate_GLOBAL * (int)("AudioAACENCfaacEncGetCurrentConfiguration" + iVar3 * 72000 + 0x25);
  mode_ext_INTERNAL = 0;
  if (iVar1 == 1) {
    mode_ext_INTERNAL = 2;
  }
  __aeabi_idivmod(iVar4,iVar2);
  frac_SpF_INTERNAL = extraout_r1;
  slot_lag_INTERNAL = extraout_r1;
  whole_SpF = __aeabi_idiv(iVar4,iVar2);
  return;
}



void lame_encode_buffer_sample_t(void)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  if (nsamples_A2G == 0) {
    return;
  }
  if (((num_channels_GLOBAL == 2) && (channels_out_INTERNAL == 1)) && (0 < nsamples_A2G)) {
    iVar3 = 0;
    iVar1 = nsamples_A2G * 4;
    piVar6 = (int *)(mfbuf_INTERNAL + (mf_size_INTERNAL + 0x65f) * 4);
    do {
      *(int *)(mfbuf_INTERNAL + mf_size_INTERNAL * 4 + iVar3) =
           (*piVar6 + *(int *)(mfbuf_INTERNAL + mf_size_INTERNAL * 4 + iVar3)) / 2;
      iVar3 = iVar3 + 4;
      *piVar6 = 0;
      piVar6 = piVar6 + 1;
    } while (iVar3 != iVar1);
  }
  if (frames_L2G == 0) {
    nsamples_A2G = framesize_L2G;
    mf_size_INTERNAL = mf_size_INTERNAL + framesize_L2G;
  }
  mf_size_INTERNAL = nsamples_A2G + mf_size_INTERNAL;
  lame_encode_mp3_frame();
  iVar1 = channels_out_INTERNAL;
  frames_L2G = frames_L2G + 1;
  mf_size_INTERNAL = 0x1df;
  if (0 < channels_out_INTERNAL) {
    iVar3 = framesize_L2G * 4;
    iVar5 = 0;
    puVar2 = mfbuf_INTERNAL;
    do {
      iVar4 = 0;
      do {
        *(undefined4 *)(puVar2 + iVar4) = *(undefined4 *)(puVar2 + iVar4 + iVar3);
        iVar4 = iVar4 + 4;
      } while (iVar4 != 0x77c);
      iVar5 = iVar5 + 1;
      puVar2 = puVar2 + 0x197c;
    } while (iVar5 != iVar1);
    return;
  }
  mf_size_INTERNAL = 0x1df;
  return;
}



void lame_init_old(void)

{
  write_timing_header_INTERNAL._0_4_ = 0;
  OldValue_INTERNAL._0_4_ = 0xb4;
  OldValue_INTERNAL._4_4_ = 0xb4;
  CurrentStep_INTERNAL = 4;
  brate_GLOBAL = 0;
  buf_bit_idx_Bit_stream = 0;
  buf_byte_idx_Bit_stream = 0xffffffff;
  frames_L2G = 0;
  h_ptr_INTERNAL = 0;
  in_samplerate_GLOBAL = 0xac44;
  lowpass_band_INTERNAL = 0x20;
  main_data_begin_SIDE_INFO = 0;
  mf_size_INTERNAL = 0x1df;
  mode_GLOBAL = 0;
  num_channels_GLOBAL = 2;
  num_samples_GLOBAL = 0xffffffff;
  num_samples_read = 0;
  out_samplerate_GLOBAL = 0;
  pcmbitwidth = 0x10;
  totbit_Bit_stream = 0;
  w_ptr_INTERNAL = 0;
  return;
}



void _FINI_0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5)

{
  undefined4 in_r12;
  
  *param_1 = in_r12;
  **(undefined4 **)(param_4 + -0x70) = param_2;
  **(undefined4 **)(param_4 + -0x6c) = param_3;
  **(undefined4 **)(param_4 + -0x68) = param_3;
  **(undefined4 **)(param_4 + -0x1e4) = param_3;
  return;
}



void FUN_00023de8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar3 = val_A2G;
  iVar2 = h_ptr_INTERNAL;
  ptr_L2G = *(uint *)(ptr_header_INTERNAL + h_ptr_INTERNAL * 4);
  if (0 < (int)j_A2G) {
    iVar1 = h_ptr_INTERNAL * 0x28;
    do {
      iVar4 = iVar1 + ((int)ptr_L2G >> 3);
      uVar6 = 8 - (ptr_L2G & 7);
      uVar5 = uVar6;
      if ((int)j_A2G <= (int)uVar6) {
        uVar5 = j_A2G;
      }
      j_A2G = j_A2G - uVar5;
      ptr_L2G = ptr_L2G + uVar5;
      buf_header_INTERNAL[iVar4] =
           buf_header_INTERNAL[iVar4] | (byte)((iVar3 >> (j_A2G & 0xff)) << (uVar6 - uVar5 & 0xff));
    } while (0 < (int)j_A2G);
  }
  *(uint *)(ptr_header_INTERNAL + iVar2 * 4) = ptr_L2G;
  return;
}



void FUN_00023ec8(void)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  iVar3 = val_A2G;
  uVar7 = buf_bit_idx_Bit_stream;
  uVar8 = j_A2G;
  if (0 < (int)j_A2G) {
    do {
      uVar6 = w_ptr_INTERNAL;
      sVar2 = sideinfo_len_INTERNAL;
      if (uVar7 == 0) {
        iVar9 = buf_byte_idx_Bit_stream + 1;
        buf_bit_idx_Bit_stream = 8;
        iVar10 = iVar9;
        if (*(int *)(write_timing_header_INTERNAL + w_ptr_INTERNAL * 4) <= totbit_Bit_stream) {
          iVar5 = totbit_Bit_stream - *(int *)(write_timing_header_INTERNAL + w_ptr_INTERNAL * 4);
          iVar1 = buf_byte_idx_Bit_stream + 1;
          iVar10 = iVar9 + sideinfo_len_INTERNAL;
          buf_byte_idx_Bit_stream = iVar9;
          memcpy(buf_Bit_stream + iVar1,buf_header_INTERNAL + w_ptr_INTERNAL * 0x28,
                 sideinfo_len_INTERNAL);
          w_ptr_INTERNAL = uVar6 + 1 & 0xf;
          totbit_Bit_stream = iVar5 + sVar2 * 8;
        }
        uVar7 = 8;
        bVar4 = 0;
        buf_byte_idx_Bit_stream = iVar10;
        buf_Bit_stream[iVar10] = 0;
      }
      else {
        bVar4 = buf_Bit_stream[buf_byte_idx_Bit_stream];
        iVar10 = buf_byte_idx_Bit_stream;
      }
      uVar6 = uVar7;
      if ((int)uVar8 <= (int)uVar7) {
        uVar6 = uVar8;
      }
      uVar8 = uVar8 - uVar6;
      uVar7 = uVar7 - uVar6;
      totbit_Bit_stream = totbit_Bit_stream + uVar6;
      buf_bit_idx_Bit_stream = uVar7;
      j_A2G = uVar8;
      buf_Bit_stream[iVar10] = bVar4 | (byte)((iVar3 >> (uVar8 & 0xff)) << (uVar7 & 0xff));
    } while (0 < (int)uVar8);
  }
  return;
}



void FUN_00024060(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  uint local_64;
  
  if (start_A2G < end_A2G) {
    iVar7 = start_A2G << 2;
    iVar6 = start_A2G;
    do {
      x1_A2G = *(int *)(ix_A2G + iVar7);
      uVar2 = *(uint *)(AudioMP3ENCxlen_Huffman + tableIdx_A2G * 4);
      bVar8 = x1_A2G < 0;
      iVar5 = x1_A2G;
      if (bVar8) {
        iVar5 = -x1_A2G;
      }
      iVar3 = ((int *)(ix_A2G + iVar7))[1];
      if (bVar8) {
        sgn_x1 = 1;
        x1_A2G = iVar5;
      }
      local_64 = (uint)bVar8;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
        sgn_x2 = 1;
        x2_A2G = iVar3;
      }
      ext = local_64;
      if (0xf < tableIdx_A2G) {
        if (0xe < iVar5) {
          ext = local_64 | (iVar5 + -0xf) * 2;
          x1_A2G = 0xf;
          xbits = uVar2;
        }
        if (0xe < iVar3) {
          uVar4 = iVar3 - 0xf;
          iVar3 = 0xf;
          x2_A2G = 0xf;
          ext = uVar4 | ext << (uVar2 & 0xff);
          xbits = uVar2 + xbits;
        }
        xlen = 0x10;
        iVar5 = x1_A2G;
      }
      iVar1 = iVar5;
      if (iVar5 != 0) {
        iVar1 = -1;
      }
      if (iVar3 != 0) {
        iVar1 = iVar1 + -1;
        ext = sgn_x2 | ext << 1;
      }
      iVar6 = iVar6 + 2;
      iVar7 = iVar7 + 8;
      x1_A2G = xlen * iVar5 + iVar3;
      xbits = xbits - iVar1;
      code = (int)*(short *)(*(int *)(AudioMP3ENCtable_Huffman + tableIdx_A2G * 4) + x1_A2G * 2);
      cbits = iVar1 + (uint)*(byte *)(*(int *)(AudioMP3ENChlen_Huffman + tableIdx_A2G * 4) + x1_A2G)
      ;
      j_A2G = cbits;
      val_A2G = code;
      FUN_00023ec8();
      val_A2G = ext;
      j_A2G = xbits;
      FUN_00023ec8();
      bitsTemp_L2G = bitsTemp_L2G + cbits + xbits;
    } while (iVar6 < end_A2G);
  }
  return;
}



void format_bitstream(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *local_68;
  int *local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  uint *local_58;
  
  iVar4 = h_ptr_INTERNAL;
  *(undefined4 *)(ptr_header_INTERNAL + h_ptr_INTERNAL * 4) = 0;
  memset(buf_header_INTERNAL + iVar4 * 0x28,0,sideinfo_len_INTERNAL);
  if (out_samplerate_GLOBAL < 16000) {
    val_A2G = 0xffe;
    j_A2G = 0xc;
    FUN_00023de8();
  }
  else {
    val_A2G = 0xfff;
    j_A2G = 0xc;
    FUN_00023de8();
  }
  iVar4 = 0;
  j_A2G = 1;
  val_A2G = version_GLOBAL;
  FUN_00023de8();
  val_A2G = 1;
  j_A2G = 2;
  FUN_00023de8();
  val_A2G = 1;
  j_A2G = 1;
  FUN_00023de8();
  j_A2G = 4;
  val_A2G = bitrate_index_INTERNAL;
  FUN_00023de8();
  j_A2G = 2;
  val_A2G = samplerate_index_INTERNAL;
  FUN_00023de8();
  j_A2G = 1;
  val_A2G = padding_INTERNAL;
  FUN_00023de8();
  val_A2G = 0;
  j_A2G = 1;
  FUN_00023de8();
  j_A2G = 2;
  val_A2G = mode_GLOBAL;
  FUN_00023de8();
  j_A2G = 2;
  val_A2G = mode_ext_INTERNAL;
  FUN_00023de8();
  val_A2G = 0;
  j_A2G = 1;
  FUN_00023de8();
  val_A2G = 1;
  j_A2G = 1;
  FUN_00023de8();
  val_A2G = 0;
  j_A2G = 2;
  FUN_00023de8();
  if (version_GLOBAL == 1) {
    j_A2G = 9;
    val_A2G = main_data_begin_SIDE_INFO;
    FUN_00023de8();
    if (channels_out_INTERNAL == 2) {
      j_A2G = 3;
    }
    else {
      j_A2G = 5;
    }
    val_A2G = 0;
    FUN_00023de8();
    ch_L2G = 0;
    if (0 < (int)channels_out_INTERNAL) {
      do {
        val_A2G = 0;
        if (mode_gr_INTERNAL == 2) {
          val_A2G = 0xf;
          j_A2G = 4;
        }
        FUN_00023de8();
        ch_L2G = ch_L2G + 1;
      } while (ch_L2G < (int)channels_out_INTERNAL);
    }
    iVar4 = 0;
    do {
      if (0 < (int)channels_out_INTERNAL) {
        iVar6 = iVar4 * 8;
        iVar1 = 0;
        local_68 = (undefined4 *)(global_gain_SIDE_INFO + iVar6 + 0xc);
        local_64 = (int *)(table_select_SIDE_INFO + iVar6 + 0x2c);
        puVar10 = (undefined4 *)(count1table_select_SIDE_INFO + iVar6 + 0xc);
        piVar7 = (int *)(table_select_SIDE_INFO + iVar4 * 0x18);
        local_60 = (undefined4 *)(part2_length_SIDE_INFO + iVar6 + 0xc);
        local_5c = (undefined4 *)(region0_count_SIDE_INFO + iVar6 + 0xc);
        local_58 = (uint *)(count1_SIDE_INFO + iVar6 + 0xc);
        do {
          j_A2G = 0xc;
          local_68 = local_68 + 1;
          val_A2G = *local_68;
          FUN_00023de8();
          j_A2G = 9;
          iVar1 = iVar1 + 1;
          local_64 = local_64 + 1;
          val_A2G = *local_64 / 2;
          FUN_00023de8();
          puVar10 = puVar10 + 1;
          val_A2G = *puVar10;
          j_A2G = 8;
          FUN_00023de8();
          val_A2G = 0;
          j_A2G = 4;
          FUN_00023de8();
          val_A2G = 0;
          j_A2G = 1;
          FUN_00023de8();
          val_A2G = *piVar7;
          j_A2G = 5;
          if (val_A2G == 0xe) {
            val_A2G = 0x10;
            *piVar7 = 0x10;
          }
          FUN_00023de8();
          val_A2G = piVar7[1];
          j_A2G = 5;
          if (val_A2G == 0xe) {
            val_A2G = 0x10;
            piVar7[1] = 0x10;
          }
          FUN_00023de8();
          val_A2G = piVar7[2];
          j_A2G = 5;
          if (val_A2G == 0xe) {
            val_A2G = 0x10;
            piVar7[2] = 0x10;
          }
          piVar7 = piVar7 + 3;
          FUN_00023de8();
          j_A2G = 4;
          local_60 = local_60 + 1;
          val_A2G = *local_60;
          FUN_00023de8();
          j_A2G = 3;
          local_5c = local_5c + 1;
          val_A2G = *local_5c;
          FUN_00023de8();
          val_A2G = 0;
          j_A2G = 1;
          FUN_00023de8();
          val_A2G = 0;
          j_A2G = 1;
          FUN_00023de8();
          j_A2G = 1;
          local_58 = local_58 + 1;
          val_A2G = *local_58;
          FUN_00023de8();
        } while (iVar1 < (int)channels_out_INTERNAL);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 2);
  }
  else {
    j_A2G = 8;
    val_A2G = main_data_begin_SIDE_INFO;
    FUN_00023de8();
    val_A2G = 0;
    j_A2G = channels_out_INTERNAL;
    FUN_00023de8();
    if (0 < (int)channels_out_INTERNAL) {
      iVar6 = 0;
      puVar5 = table_select_SIDE_INFO;
      do {
        j_A2G = 0xc;
        val_A2G = *(uint *)(part2_3_length_SIDE_INFO + iVar4);
        iVar6 = iVar6 + 1;
        FUN_00023de8();
        j_A2G = 9;
        val_A2G = *(int *)(big_values_SIDE_INFO + iVar4) / 2;
        FUN_00023de8();
        j_A2G = 8;
        val_A2G = *(uint *)(global_gain_SIDE_INFO + iVar4);
        FUN_00023de8();
        val_A2G = 0;
        j_A2G = 9;
        FUN_00023de8();
        val_A2G = 0;
        j_A2G = 1;
        FUN_00023de8();
        val_A2G = *(uint *)puVar5;
        j_A2G = 5;
        if (val_A2G == 0xe) {
          *(int *)puVar5 = 0x10;
          val_A2G = 0x10;
        }
        FUN_00023de8();
        val_A2G = *(int *)((int)puVar5 + 4);
        j_A2G = 5;
        if (val_A2G == 0xe) {
          *(int *)((int)puVar5 + 4) = 0x10;
          val_A2G = 0x10;
        }
        FUN_00023de8();
        val_A2G = *(int *)((int)puVar5 + 8);
        j_A2G = 5;
        if (val_A2G == 0xe) {
          *(int *)((int)puVar5 + 8) = 0x10;
        }
        puVar5 = (undefined1 *)((int)puVar5 + 0xc);
        if (val_A2G == 0xe) {
          val_A2G = 0x10;
        }
        FUN_00023de8();
        j_A2G = 4;
        val_A2G = *(uint *)(region0_count_SIDE_INFO + iVar4);
        FUN_00023de8();
        j_A2G = 3;
        val_A2G = *(uint *)(region1_count_SIDE_INFO + iVar4);
        FUN_00023de8();
        j_A2G = 1;
        val_A2G = 0;
        FUN_00023de8();
        j_A2G = 1;
        val_A2G = *(uint *)(count1table_select_SIDE_INFO + iVar4);
        iVar4 = iVar4 + 4;
        FUN_00023de8();
      } while (iVar6 < (int)channels_out_INTERNAL);
    }
  }
  uVar2 = h_ptr_INTERNAL + 1 & 0xf;
  puVar5 = write_timing_header_INTERNAL;
  h_ptr_INTERNAL = uVar2;
  *(int *)(write_timing_header_INTERNAL + uVar2 * 4) = bitsPerFrame_A2G;
  if (uVar2 == w_ptr_INTERNAL) {
    lame_errorf();
  }
  bitsTemp_L2G = sideinfo_len_INTERNAL << 3;
  gr_L2G = 0;
  if (0 < mode_gr_INTERNAL) {
    do {
      ch_L2G = 0;
      iVar4 = gr_L2G;
      if (0 < (int)channels_out_INTERNAL) {
        do {
          iVar6 = iVar4 * 2;
          iVar3 = *(int *)(big_values_SIDE_INFO + (ch_L2G + gr_L2G * 2) * 4);
          tableIdx_A2G = *(int *)(table_select_SIDE_INFO + iVar4 * 0x18 + ch_L2G * 0xc);
          iVar1 = *(int *)(l_INTERNAL +
                          (*(int *)(region0_count_SIDE_INFO + (iVar6 + ch_L2G) * 4) + 1 +
                           *(int *)(region1_count_SIDE_INFO + (iVar6 + ch_L2G) * 4) + 1) * 4);
          iVar8 = *(int *)(l_INTERNAL +
                          (*(int *)(region0_count_SIDE_INFO + (iVar6 + ch_L2G) * 4) + 1) * 4);
          if (iVar3 <= *(int *)(l_INTERNAL +
                               (*(int *)(region0_count_SIDE_INFO + (iVar6 + ch_L2G) * 4) + 1) * 4))
          {
            iVar8 = iVar3;
          }
          if (iVar3 <= iVar1) {
            iVar1 = iVar3;
          }
          ix_A2G = (int *)(mfbuf_INTERNAL + (ch_L2G * 0x65f + iVar4 * 0x240) * 4);
          start_A2G = 0;
          if (tableIdx_A2G != 0) {
            end_A2G = iVar8;
            FUN_00024060();
            iVar6 = gr_L2G << 1;
            iVar4 = gr_L2G;
          }
          iVar9 = ch_L2G * 2;
          tableIdx_A2G = *(int *)(table_select_SIDE_INFO + (iVar6 + iVar4) * 8 + ch_L2G * 0xc + 4);
          if (tableIdx_A2G != 0) {
            end_A2G = iVar1;
            start_A2G = iVar8;
            FUN_00024060();
            iVar6 = gr_L2G << 1;
            iVar9 = ch_L2G << 1;
            iVar4 = gr_L2G;
          }
          tableIdx_A2G = *(int *)(table_select_SIDE_INFO +
                                 (iVar6 + iVar4) * 8 + (iVar9 + ch_L2G) * 4 + 8);
          end_A2G = iVar3;
          start_A2G = iVar1;
          if (tableIdx_A2G != 0) {
            FUN_00024060();
            iVar6 = gr_L2G << 1;
            iVar4 = gr_L2G;
          }
          iVar1 = *(int *)(count1_SIDE_INFO + (iVar6 + ch_L2G) * 4) -
                  *(int *)(big_values_SIDE_INFO + (iVar6 + ch_L2G) * 4);
          if (iVar1 < 0) {
            iVar1 = iVar1 + 3;
          }
          ix_A2G = (int *)(mfbuf_INTERNAL +
                          *(int *)(big_values_SIDE_INFO + (iVar6 + ch_L2G) * 4) * 4 +
                          (ch_L2G * 0x65f + iVar4 * 0x240) * 4);
          iVar1 = iVar1 >> 2;
          if (0 < iVar1) {
            do {
              iVar4 = *ix_A2G;
              iVar6 = iVar4;
              if (iVar4 != 0) {
                iVar6 = 8;
                if (iVar4 < 0) {
                  iVar4 = 1;
                }
                else {
                  iVar4 = 0;
                }
              }
              if (ix_A2G[1] != 0) {
                iVar4 = iVar4 * 2;
                iVar6 = iVar6 + 4;
                if (ix_A2G[1] < 0) {
                  iVar4 = iVar4 + 1;
                }
              }
              if (ix_A2G[2] != 0) {
                iVar4 = iVar4 * 2;
                iVar6 = iVar6 + 2;
                if (ix_A2G[2] < 0) {
                  iVar4 = iVar4 + 1;
                }
              }
              if (ix_A2G[3] != 0) {
                iVar4 = iVar4 * 2;
                iVar6 = iVar6 + 1;
                if (ix_A2G[3] < 0) {
                  iVar4 = iVar4 + 1;
                }
              }
              ix_A2G = ix_A2G + 4;
              val_A2G = *(short *)(*(int *)(AudioMP3ENCtable_Huffman +
                                           (*(int *)(count1table_select_SIDE_INFO +
                                                    (ch_L2G + gr_L2G * 2) * 4) + 0x20) * 4) +
                                  iVar6 * 2) + iVar4;
              j_A2G = (uint)*(byte *)(*(int *)(AudioMP3ENChlen_Huffman +
                                              (*(int *)(count1table_select_SIDE_INFO +
                                                       (ch_L2G + gr_L2G * 2) * 4) + 0x20) * 4) +
                                     iVar6);
              bitsTemp_L2G = j_A2G + bitsTemp_L2G;
              FUN_00023ec8();
              iVar1 = iVar1 + -1;
              iVar4 = gr_L2G;
            } while (iVar1 != 0);
          }
          ch_L2G = ch_L2G + 1;
        } while (ch_L2G < (int)channels_out_INTERNAL);
      }
      gr_L2G = iVar4 + 1;
    } while (gr_L2G < mode_gr_INTERNAL);
  }
  remainingBits_A2G = resvDrain_post_SIDE_INFO;
  if (back < resvDrain_post_SIDE_INFO) {
    back = resvDrain_post_SIDE_INFO;
  }
  while (0 < remainingBits_A2G) {
    j_A2G = 1;
    val_A2G = ancillary_flag_INTERNAL;
    FUN_00023ec8();
    remainingBits_A2G = remainingBits_A2G + -1;
    ancillary_flag_INTERNAL = ancillary_flag_INTERNAL ^ 1;
  }
  bitsTemp_L2G = bitsTemp_L2G + resvDrain_post_SIDE_INFO;
  iVar4 = bitsPerFrame_A2G - bitsTemp_L2G;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 7;
  }
  main_data_begin_SIDE_INFO = main_data_begin_SIDE_INFO + (iVar4 >> 3);
  if (main_data_begin_SIDE_INFO * 8 - ResvSize_INTERNAL != 0) {
    lame_errorf();
    ResvSize_INTERNAL = main_data_begin_SIDE_INFO << 3;
  }
  if (1000000000 < totbit_Bit_stream) {
    do {
      piVar7 = (int *)((int)puVar5 + 4);
      *(int *)puVar5 = *(int *)puVar5 - totbit_Bit_stream;
      puVar5 = (undefined1 *)piVar7;
    } while (piVar7 != (int *)table_select_SIDE_INFO);
    totbit_Bit_stream = 0;
  }
  return;
}



void copy_buffer(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = buf_byte_idx_Bit_stream + 1;
  if (iVar1 < 1) {
    return;
  }
  if (iVar1 < 0xc01) {
    if (XingTagWriteFlag == 0) {
      XingTagWriteFlag = 1;
      if (version_GLOBAL == 1) {
        if (channels_out_INTERNAL == 1) {
          iVar5 = 0x11;
        }
        else {
          iVar5 = 0x20;
        }
      }
      else {
        if (channels_out_INTERNAL == 1) {
          iVar5 = 9;
        }
        else {
          iVar5 = 0x11;
        }
      }
      iVar4 = 0;
      puVar2 = buf_Bit_stream + 4;
      do {
        iVar4 = iVar4 + 1;
        puVar3 = puVar2 + 1;
        *puVar2 = 0;
        puVar2 = puVar3;
      } while (iVar4 < iVar5);
      iVar5 = 0;
      do {
        puVar3[iVar5] = XingVbrTag[iVar5];
        iVar5 = iVar5 + 1;
      } while (iVar5 != 0xc);
    }
    FWRITEBS(buf_Bit_stream,iVar1);
    buf_bit_idx_Bit_stream = 0;
    buf_byte_idx_Bit_stream = 0xffffffff;
    return;
  }
  fwrite("mp3 buffer is not big enough... \n",1,0x21,(FILE *)0x400f8);
                    // WARNING: Subroutine does not return
  exit(9);
}



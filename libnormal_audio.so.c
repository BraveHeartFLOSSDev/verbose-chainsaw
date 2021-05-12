#include "libnormal_audio.so.h"



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

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = usleep(__useconds);
  return iVar1;
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



void __aeabi_ldivmod(void)

{
  __aeabi_ldivmod();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



void __memcpy_chk(void)

{
  __memcpy_chk();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
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



void __aeabi_uidiv(void)

{
  __aeabi_uidiv();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memmove(__dest,__src,__n);
  return pvVar1;
}



void FUN_00013458(void)

{
  __cxa_finalize(&PTR_LOOP_00042000);
  return;
}



undefined4 FUN_00013478(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = __cxa_atexit(param_1,0,&PTR_LOOP_00042000);
  return uVar1;
}



undefined4 FUN_000134b8(pthread_mutex_t *param_1,void *param_2,size_t param_3)

{
  uint uVar1;
  void *__dest;
  int iVar2;
  
  pthread_mutex_lock(param_1);
  memset((void *)(*(int *)(param_1 + 4) + *(int *)&param_1[4].field_0x8 * 0x18),0,0x18);
  uVar1 = *(int *)&param_1[4].field_0x8 + 1;
  iVar2 = *(int *)(param_1 + 4) + *(int *)&param_1[4].field_0x8 * 0x18;
  *(size_t *)(iVar2 + 0x10) = param_3;
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 4) = 0xffffffff;
  *(uint *)&param_1[4].field_0x8 = uVar1;
  if (uVar1 < 0x200) {
    __dest = *(void **)&param_1[3].field_0xc;
    *(int *)&param_1[4].field_0x10 = *(int *)&param_1[4].field_0x10 + 1;
  }
  else {
    __dest = *(void **)&param_1[3].field_0xc;
    *(undefined4 *)&param_1[4].field_0x8 = 0;
    *(int *)&param_1[4].field_0x10 = *(int *)&param_1[4].field_0x10 + 1;
  }
  memcpy(__dest,param_2,param_3);
  iVar2 = *(int *)&param_1[2].field_0x8;
  *(size_t *)&param_1[3].field_0xc = *(int *)&param_1[3].field_0xc + param_3;
  *(size_t *)&param_1[3].field_0x10 = *(int *)&param_1[3].field_0x10 - param_3;
  *(size_t *)&param_1[3].field_0x8 = *(int *)&param_1[3].field_0x8 + param_3;
  *(size_t *)&param_1[2].field_0x8 = iVar2 + param_3;
  pthread_mutex_unlock(param_1);
  return 0;
}



void ss_xxxx(undefined4 param_1,undefined4 *param_2)

{
  param_2[1] = 0xf000;
  param_2[3] = 0;
  *param_2 = 0x72613c21;
  param_2[2] = 0xf001;
  return;
}



size_t ShowAbsBits(ushort *param_1,size_t param_2,int param_3)

{
  char cVar1;
  void *pvVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  size_t sVar7;
  size_t __n;
  
  iVar5 = *(int *)(param_3 + 0x58);
  while (*(int *)(param_3 + 0x20) < (int)param_2) {
    while( true ) {
      if (*(int *)(*(int *)(*(int *)(iVar5 + 0x554) + 4) + 0x40) != 0) {
        *(undefined *)(iVar5 + 0xd8) = 0;
        sVar7 = *(size_t *)(param_3 + 0x20);
        pvVar2 = *(void **)(param_3 + 0x1c);
        uVar6 = *(int *)(param_3 + 0x14) + *(int *)(param_3 + 0x18);
        *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x554) + 4) + 0x3c) = 1;
        if (uVar6 < (int)pvVar2 + sVar7) {
          __n = uVar6 - (int)pvVar2;
          memcpy(param_1,pvVar2,__n);
          memcpy((void *)((int)param_1 + __n),*(void **)(param_3 + 0x14),sVar7 - __n);
        }
        else {
          memcpy(param_1,pvVar2,sVar7);
        }
        if (*(short *)(param_3 + 0x12) != 0) {
          return sVar7;
        }
        if ((int)sVar7 / 2 < 1) {
          return sVar7;
        }
        puVar4 = param_1;
        do {
          puVar3 = puVar4 + 1;
          *puVar4 = (ushort)((int)(short)*puVar4 << 8) | *puVar4 >> 8;
          puVar4 = puVar3;
        } while (puVar3 != param_1 + (int)sVar7 / 2);
        return sVar7;
      }
      cVar1 = *(char *)(iVar5 + 0xf4);
      if (cVar1 != -0x78 && cVar1 != '\0') break;
      if (*(char *)(iVar5 + 0xd8) == '\x01') {
        return (uint)(cVar1 != -0x78 && cVar1 != '\0');
      }
      usleep(5000);
      if ((int)param_2 <= *(int *)(param_3 + 0x20)) goto LAB_00013634;
    }
    usleep(5000);
  }
LAB_00013634:
  pvVar2 = *(void **)(param_3 + 0x1c);
  uVar6 = *(int *)(param_3 + 0x14) + *(int *)(param_3 + 0x18);
  if (uVar6 < (int)pvVar2 + param_2) {
    sVar7 = uVar6 - (int)pvVar2;
    memcpy(param_1,pvVar2,sVar7);
    memcpy((void *)((int)param_1 + sVar7),*(void **)(param_3 + 0x14),param_2 - sVar7);
  }
  else {
    memcpy(param_1,pvVar2,param_2);
  }
  if ((*(short *)(param_3 + 0x12) == 0) && (0 < (int)param_2 / 2)) {
    puVar4 = param_1;
    do {
      puVar3 = puVar4 + 1;
      *puVar4 = (ushort)((int)(short)*puVar4 << 8) | *puVar4 >> 8;
      puVar4 = puVar3;
    } while (puVar3 != param_1 + (int)param_2 / 2);
  }
  return param_2;
}



void FlushAbsBits(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  pthread_mutex_t *__mutex;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  __mutex = *(pthread_mutex_t **)(param_2 + 0x58);
  if (*(int *)(param_2 + 0x20) < param_1) {
    __android_log_print(5,"awplayer",
                        "<%s:%u>: length of audio bitstream to be flushed is invalid!\n",
                        "FlushAbsBits",0x197);
    param_1 = *(int *)(param_2 + 0x20);
  }
  pthread_mutex_lock(__mutex);
  uVar1 = *(int *)(param_2 + 0x1c) + param_1;
  bVar7 = (uint)(*(int *)(param_2 + 0x14) + *(int *)(param_2 + 0x18)) <= uVar1;
  *(uint *)(param_2 + 0x1c) = uVar1;
  if (bVar7) {
    uVar1 = uVar1 - *(int *)(param_2 + 0x18);
  }
  *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) - param_1;
  if (bVar7) {
    *(uint *)(param_2 + 0x1c) = uVar1;
  }
  *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + param_1;
  pthread_mutex_unlock(__mutex);
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + param_1;
  if ((0 < *(int *)(param_2 + 0x40)) &&
     (iVar5 = *(int *)(param_2 + 0x30) + *(int *)(param_2 + 0x34) * 0x18, *(int *)(iVar5 + 4) != 0))
  {
    iVar3 = *(int *)(iVar5 + 0xc);
    iVar2 = *(int *)(*(int *)&__mutex[0x38].field_0x14 + 4);
    if (*(int *)(iVar2 + 0x5c) != iVar3 || *(int *)(iVar2 + 0x58) != *(int *)(iVar5 + 8)) {
      *(int *)(iVar2 + 0x58) = *(int *)(iVar5 + 8);
      *(int *)(iVar2 + 0x5c) = iVar3;
    }
    *(undefined4 *)(iVar5 + 4) = 0;
  }
  pthread_mutex_lock(__mutex);
  if ((0 < param_1) && (iVar5 = *(int *)(param_2 + 0x40), iVar5 != 0)) {
    iVar3 = 0;
    while( true ) {
      iVar4 = param_1 - iVar3;
      iVar5 = iVar5 + -1;
      uVar1 = *(int *)(param_2 + 0x34) + 1;
      iVar2 = *(int *)(param_2 + 0x30) + *(int *)(param_2 + 0x34) * 0x18;
      iVar6 = *(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0x14);
      iVar3 = iVar3 + iVar6;
      if (iVar4 < iVar6) break;
      *(int *)(param_2 + 0x40) = iVar5;
      if (0x1ff < uVar1) {
        uVar1 = 0;
      }
      *(uint *)(param_2 + 0x34) = uVar1;
      if ((param_1 <= iVar3) || (iVar5 == 0)) goto LAB_000138a4;
    }
    *(int *)(iVar2 + 0x14) = iVar4 + *(int *)(iVar2 + 0x14);
  }
LAB_000138a4:
  pthread_mutex_unlock(__mutex);
  return;
}



size_t FREAD_AC320(ushort *param_1,size_t param_2,int param_3)

{
  size_t sVar1;
  
  sVar1 = ShowAbsBits(param_1,param_2,param_3);
  FlushAbsBits(sVar1,param_3);
  return sVar1;
}



undefined4 FSeek_AC320(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  pthread_mutex_t *__mutex;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  
  __mutex = *(pthread_mutex_t **)(param_2 + 0x58);
  if (param_1 == 0) {
    return 0;
  }
  pthread_mutex_lock(__mutex);
  if ((param_1 < 0) || (*(int *)(param_2 + 0x20) < param_1)) {
    iVar1 = *(int *)(*(int *)&__mutex[0x38].field_0x14 + 4);
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_2 + 0x24);
    uVar7 = *(undefined4 *)(iVar1 + 0x4c);
    iVar1 = param_1 + *(int *)(param_2 + 4);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_2 + 0x20) = 0;
    *(int *)(param_2 + 4) = iVar1;
    *(short *)(param_2 + 0x10) = (short)uVar7;
    *(int *)(param_2 + 0xc) = iVar1;
    memset(*(void **)(param_2 + 0x30),0,0x3000);
    *(undefined4 *)(param_2 + 0x44) = 0x200;
    *(undefined4 *)(param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 0x38) = 0;
    *(undefined4 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_2 + 0x50) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x54) = 0xffffffff;
  }
  else {
    uVar2 = *(int *)(param_2 + 0x1c) + param_1;
    *(uint *)(param_2 + 0x1c) = uVar2;
    bVar8 = (uint)(*(int *)(param_2 + 0x14) + *(int *)(param_2 + 0x18)) <= uVar2;
    if (bVar8) {
      uVar2 = uVar2 - *(int *)(param_2 + 0x18);
    }
    iVar1 = *(int *)(param_2 + 0x40);
    if (bVar8) {
      *(uint *)(param_2 + 0x1c) = uVar2;
    }
    iVar3 = 0;
    *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) - param_1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + param_1;
    *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + param_1;
    do {
      bVar8 = iVar1 == 0;
      iVar6 = param_1 - iVar3;
      iVar1 = iVar1 + -1;
      if (bVar8) break;
      uVar2 = *(int *)(param_2 + 0x34) + 1;
      iVar4 = *(int *)(param_2 + 0x30) + *(int *)(param_2 + 0x34) * 0x18;
      iVar5 = *(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0x14);
      iVar3 = iVar3 + iVar5;
      if (iVar6 < iVar5) {
        *(int *)(iVar4 + 0x14) = iVar6 + *(int *)(iVar4 + 0x14);
        break;
      }
      *(int *)(param_2 + 0x40) = iVar1;
      if (0x1ff < uVar2) {
        uVar2 = 0;
      }
      *(uint *)(param_2 + 0x34) = uVar2;
    } while (iVar3 < param_1);
  }
  pthread_mutex_unlock(__mutex);
  return 0;
}



undefined4 FSeek_AC320_Origin(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    if (param_1 < 0) {
      return 0xffffffff;
    }
    param_1 = param_1 - *(int *)(param_2 + 4);
  }
  uVar1 = FSeek_AC320(param_1,param_2);
  return uVar1;
}



// WARNING: Could not reconcile some variable overlaps

undefined4 BigLitEndianCheck(int param_1,int param_2)

{
  size_t sVar1;
  int iVar2;
  undefined2 local_14;
  
  sVar1 = ShowAbsBits(&local_14,2,param_1);
  if (sVar1 == 2) {
    iVar2 = 0x100000;
    do {
      if ((short)local_14 == param_2) {
        return 0;
      }
      if (CONCAT11((undefined)local_14,local_14._1_1_) == param_2) {
        *(undefined2 *)(param_1 + 0x12) = 0;
        return 1;
      }
      FlushAbsBits(1,param_1);
      sVar1 = ShowAbsBits(&local_14,2,param_1);
    } while ((sVar1 == 2) && (iVar2 = iVar2 + -1, iVar2 != 0));
  }
  return 0xffffffff;
}



uint ParseRequestAudioBitstreamBuffer
               (pthread_mutex_t *param_1,int param_2,int *param_3,int *param_4,uint *param_5,
               uint *param_6,undefined4 *param_7)

{
  undefined2 uVar1;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar2;
  
  iVar5 = *(int *)&param_1[2].field_0x14;
  iVar6 = *(int *)(param_1 + 3);
  iVar7 = *(int *)&param_1[3].field_0xc;
  if ((*(int *)&param_1[3].field_0x10 < param_2) || (0x1ff < *(int *)&param_1[4].field_0x10)) {
    return 0xffffffff;
  }
  iVar2 = pthread_mutex_lock(param_1);
  uVar1 = (undefined2)iVar2;
  uVar4 = (uint)*(ushort *)&param_1[2].field_0x10;
  bVar9 = uVar4 == 1;
  if (bVar9) {
    uVar4 = *(uint *)&param_1[2].field_0xc;
    uVar1 = 2;
  }
  iVar7 = (iVar5 + iVar6) - iVar7;
  if (bVar9) {
    *(uint *)&param_1[2].field_0x8 = uVar4;
    *(undefined2 *)&param_1[2].field_0x10 = uVar1;
  }
  pthread_mutex_unlock(param_1);
  iVar5 = *(int *)&param_1[0x38].field_0x10;
  *param_7 = *(undefined4 *)&param_1[2].field_0x8;
  if (((*(uint *)(iVar5 + 0xc) & 2) == 0) || (uVar4 = *(uint *)&param_1->field_0x4 & 1, uVar4 != 0))
  {
    iVar5 = *(int *)&param_1[3].field_0xc;
    *(undefined4 *)&param_1->field_0x8 = 1;
    *param_3 = iVar5;
    if (iVar7 <= param_2) {
      uVar4 = *(uint *)&param_1[2].field_0x14;
      *param_4 = iVar7;
      *param_5 = uVar4;
      *param_6 = param_2 - iVar7;
      return 0;
    }
    uVar4 = 0;
  }
  else {
    iVar5 = *(int *)&param_1[1].field_0x4;
    if (iVar7 <= iVar5) {
      iVar6 = *(int *)&param_1[2].field_0x14;
      uVar8 = *(undefined4 *)&param_1[3].field_0xc;
      *(int *)&param_1->field_0x10 = iVar7;
      *(undefined4 *)&param_1->field_0x8 = 2;
      *(undefined4 *)&param_1->field_0xc = uVar8;
      *(int *)&param_1->field_0x14 = iVar6;
      *(int *)(param_1 + 1) = iVar5 - iVar7;
      *param_3 = iVar6 + (iVar5 - iVar7);
      *param_4 = param_2;
      *param_5 = 0;
      *param_6 = 0;
      return 0;
    }
    iVar6 = *(int *)&param_1[3].field_0xc;
    *(int *)&param_1->field_0x10 = iVar5;
    iVar5 = iVar6 + iVar5;
    *(undefined4 *)&param_1->field_0x14 = 0;
    iVar7 = *(int *)(param_1 + 3);
    *(int *)&param_1->field_0xc = iVar6;
    *(undefined4 *)&param_1->field_0x8 = 3;
    *(undefined4 *)(param_1 + 1) = 0;
    *param_3 = iVar5;
    uVar3 = *(uint *)&param_1[2].field_0x14;
    iVar5 = (uVar3 + iVar7) - iVar5;
    if (iVar5 <= param_2) {
      *param_4 = iVar5;
      *param_5 = uVar3;
      *param_6 = param_2 - iVar5;
      return 0;
    }
  }
  *param_4 = param_2;
  *param_5 = uVar4;
  *param_6 = uVar4;
  return uVar4;
}



undefined4
ParseUpdateAudioBitstreamData
          (pthread_mutex_t *param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (0 < param_2) {
    pthread_mutex_lock(param_1);
    if (*(short *)&param_1[2].field_0x10 == 1) {
      pthread_mutex_unlock(param_1);
    }
    else {
      if (*(short *)&param_1[2].field_0x10 == 2) {
        if (*(int *)&param_1[2].field_0xc != param_5) {
          *(undefined2 *)&param_1[2].field_0x10 = 1;
          pthread_mutex_unlock(param_1);
          return 0;
        }
        *(undefined2 *)&param_1[2].field_0x10 = 0;
      }
      if (*(int *)&param_1->field_0x8 == 3) {
        AdCedarUpdateAACPacketHdr
                  ((int)(void *)&param_1[1].field_0x8,*(int *)&param_1[1].field_0x4,param_2);
        memcpy(*(void **)&param_1->field_0xc,(void *)&param_1[1].field_0x8,
               *(size_t *)&param_1->field_0x10);
      }
      else {
        if (*(int *)&param_1->field_0x8 == 2) {
          AdCedarUpdateAACPacketHdr
                    ((int)(void *)&param_1[1].field_0x8,*(int *)&param_1[1].field_0x4,param_2);
          memcpy(*(void **)&param_1->field_0xc,(void *)&param_1[1].field_0x8,
                 *(size_t *)&param_1->field_0x10);
          memcpy(*(void **)&param_1->field_0x14,
                 (void *)(&param_1[1].field_0x8 + *(int *)&param_1->field_0x10),
                 *(size_t *)(param_1 + 1));
        }
      }
      iVar1 = *(int *)&param_1[3].field_0xc;
      iVar2 = *(int *)(param_1 + 3);
      iVar4 = param_2 + *(int *)&param_1[1].field_0x4;
      iVar6 = *(int *)&param_1[4].field_0x8;
      iVar8 = *(int *)&param_1[2].field_0x8;
      bVar9 = (uint)(iVar1 + iVar4) < (uint)(*(int *)&param_1[2].field_0x14 + iVar2);
      if (bVar9) {
        *(int *)&param_1[3].field_0xc = iVar1 + iVar4;
      }
      if (!bVar9) {
        iVar2 = iVar4 - iVar2;
      }
      iVar7 = *(int *)(param_1 + 4);
      if (!bVar9) {
        iVar1 = iVar1 + iVar2;
      }
      if (!bVar9) {
        *(int *)&param_1[3].field_0xc = iVar1;
      }
      *(int *)&param_1[3].field_0x8 = *(int *)&param_1[3].field_0x8 + iVar4;
      *(int *)&param_1[3].field_0x10 = *(int *)&param_1[3].field_0x10 - iVar4;
      *(int *)&param_1[2].field_0x8 = iVar8 + iVar4;
      memset((void *)(iVar7 + iVar6 * 0x18),0,0x18);
      iVar1 = *(int *)&param_1[4].field_0x8;
      uVar5 = (param_3 & param_4) + 1;
      iVar2 = *(int *)&param_1[1].field_0x4;
      if (uVar5 != 0) {
        uVar5 = 1;
      }
      iVar4 = *(int *)(param_1 + 4) + iVar1 * 0x18;
      *(uint *)(iVar4 + 8) = param_3;
      *(uint *)(iVar4 + 0xc) = param_4;
      *(int *)(iVar4 + 0x10) = iVar2 + param_2;
      *(uint *)(iVar4 + 4) = uVar5;
      if (uVar5 != 0) {
        uVar5 = *(uint *)&param_1[5].field_0xc;
        if (uVar5 == param_4 && *(uint *)&param_1[5].field_0x8 == param_3) {
          uVar5 = 0;
          *(undefined4 *)(iVar4 + 4) = 0;
        }
        else {
          *(uint *)&param_1[5].field_0x8 = param_3;
          *(uint *)&param_1[5].field_0xc = param_4;
        }
      }
      uVar3 = iVar1 + 1;
      *(uint *)&param_1[4].field_0x8 = uVar3;
      if (0x1ff < uVar3) {
        uVar5 = 0;
      }
      *(int *)&param_1[4].field_0x10 = *(int *)&param_1[4].field_0x10 + 1;
      if (0x1ff < uVar3) {
        *(uint *)&param_1[4].field_0x8 = uVar5;
      }
      pthread_mutex_unlock(param_1);
    }
  }
  return 0;
}



undefined4 ParseAudioStreamDataSize(int param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}



void BitstreamQueryQuality(pthread_mutex_t *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  pthread_mutex_lock(param_1);
  uVar1 = __aeabi_idiv(*(int *)&param_1[3].field_0x8 * 100,*(undefined4 *)(param_1 + 3));
  *param_2 = uVar1;
  *param_3 = *(undefined4 *)&param_1[4].field_0x10;
  pthread_mutex_unlock(param_1);
  return;
}



void ParseBitstreamSeekSync
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  undefined uVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)(*(int *)(param_1 + 0x554) + 0xc) == 0) {
    return;
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x554) + 4);
  if (*(int *)(iVar3 + 0x4c) != 1) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
    *(undefined *)(param_1 + 0xf4) = 0x88;
    uVar1 = __aeabi_ldivmod(param_3,param_4,1000000,0);
    if (param_5 != 0) {
      *(undefined *)(param_1 + 0xf4) = 0;
    }
    *(undefined4 *)(param_1 + 0xf0) = uVar1;
    return;
  }
  lVar4 = VectorSub(CONCAT44(param_4,param_3),*(undefined8 *)(iVar3 + 0x58),8);
  iVar3 = (int)lVar4;
  if (lVar4 < 0) {
    uVar2 = 0x66;
  }
  else {
    uVar2 = 0x44;
  }
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  *(undefined *)(param_1 + 0xf4) = uVar2;
  if (param_5 != 0) {
    *(undefined *)(param_1 + 0xf4) = 0;
  }
  *(int *)(param_1 + 0xf0) = iVar3 / 1000000;
  return;
}



// WARNING: Could not reconcile some variable overlaps

undefined4 InitializeAudioDecodeLib(pthread_mutex_t *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  void *__ptr;
  void *__s;
  pthread_mutex_t *ppVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  ushort *puVar7;
  size_t sVar8;
  uint uVar9;
  uint auStack72 [2];
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  undefined local_30;
  undefined local_2f;
  int local_2c;
  
  uVar6 = param_2[0x1c];
  uVar1 = *param_2;
  *(pthread_mutex_t **)&param_1[5].field_0x10 = param_1;
  local_2c = __stack_chk_guard;
  *(undefined4 *)&param_1->field_0x4 = uVar6;
  switch(uVar1) {
  case 1:
    goto LAB_000142b0;
  case 2:
    goto LAB_000142b0;
  case 3:
LAB_000142b0:
    *(undefined4 *)&param_1[0x38].field_0x10 = CedarCodesT._48_4_;
    goto LAB_000140a8;
  case 4:
    goto LAB_000142e0;
  case 5:
    break;
  case 6:
    break;
  case 7:
    goto LAB_0001429c;
  case 8:
    goto LAB_0001429c;
  case 9:
    goto LAB_0001429c;
  case 10:
LAB_0001429c:
    *(undefined4 *)&param_1[0x38].field_0x10 = CedarCodesT._36_4_;
LAB_000140a8:
    puVar7 = (ushort *)param_2[0x1b];
    sVar8 = param_2[0x1a];
    __ptr = malloc(0x20000);
    *(void **)&param_1[2].field_0x14 = __ptr;
    if (__ptr == (void *)0x0) {
      __android_log_print(3,"awplayer","<%s:%u>: err bufStart malloc","AC320DecInit",0x2e0);
    }
    else {
      __s = malloc(0x3000);
      *(void **)(param_1 + 4) = __s;
      if (__s == (void *)0x0) {
        free(__ptr);
        *(undefined4 *)&param_1[2].field_0x14 = 0;
      }
      else {
        memset(__s,0,0x3000);
        iVar5 = param_2[8];
        uVar6 = param_2[7];
        uVar1 = *(undefined4 *)&param_1[2].field_0x14;
        *(undefined4 *)&param_1[4].field_0x14 = 0x200;
        *(undefined4 *)(param_1 + 3) = 0x20000;
        *(undefined4 *)&param_1[5].field_0x8 = 0xffffffff;
        *(undefined4 *)&param_1[5].field_0xc = 0xffffffff;
        *(undefined4 *)&param_1[3].field_0xc = uVar1;
        *(undefined4 *)&param_1[3].field_0x10 = 0x20000;
        *(undefined4 *)&param_1[3].field_0x4 = uVar1;
        *(undefined4 *)&param_1[3].field_0x8 = 0;
        *(undefined2 *)&param_1[2].field_0x12 = 1;
        *(undefined4 *)(param_1 + 2) = uVar6;
        if (iVar5 == 0x2001) {
          *(undefined4 *)(param_3 + 0x4c) = 1;
          iVar5 = *(int *)&param_1[0x38].field_0x10;
        }
        else {
          iVar5 = *(int *)&param_1[0x38].field_0x10;
          if (*(int *)(param_3 + 0x4c) != 1) {
            uVar3 = *(uint *)(iVar5 + 0xc);
            *(undefined4 *)&param_1[0x22].field_0x8 = 1;
            *(undefined4 *)(param_1 + 2) = 0x7fffffff;
            if ((uVar3 & 4) == 0) {
              if ((uVar3 & 1) == 0) {
                if (((uVar3 & 2) == 0) || ((*(uint *)&param_1->field_0x4 & 1) != 0)) {
                  if ((uVar3 & 8) == 0) {
                    uVar9 = uVar3 & 0x20;
                    if (uVar9 == 0) {
                      if ((uVar3 & 0x40) == 0) {
                        if ((uVar3 & 0x10) != 0) goto LAB_000143ec;
                      }
                      else {
                        if (puVar7 != (ushort *)0x0) {
                          local_40 = uVar9;
                          local_3c = uVar9;
                          local_38 = uVar9;
                          local_34 = uVar9;
                          __memcpy_chk(&local_40,puVar7,sVar8,0x10);
                          local_34 = param_2[4];
                          local_38 = (param_2[2] & 0xff) << 0x10;
                          local_38 = CONCAT13((char)((uint)param_2[2] >> 8),
                                              (uint3)local_38 | (uint3)(ushort)param_2[3]);
                          FUN_000134b8(param_1,&local_40,0x10);
                          iVar5 = *(int *)&param_1[0x38].field_0x10;
                        }
                      }
                    }
                    else {
                      if (sVar8 != 0 && puVar7 != (ushort *)0x0) {
                        param_2[0x1d] = param_2[2] * 4 + (int)(param_2[2] * (*puVar7 - 1)) / 2;
                      }
                      SetAudioBsHeader_PCM((int)param_2,(int)(param_1 + 2));
                      iVar5 = *(int *)&param_1[0x38].field_0x10;
                    }
                  }
                  else {
                    memcpy(auStack72,"#!AMR\n",6);
                    memcpy(&local_40,"#!AMR-WB\n",9);
                    if (param_2[1] == 1) {
                      puVar4 = auStack72;
                      sVar8 = 6;
                    }
                    else {
                      puVar4 = &local_40;
                      sVar8 = 9;
                    }
                    FUN_000134b8(param_1,puVar4,sVar8);
                    iVar5 = *(int *)&param_1[0x38].field_0x10;
                  }
                }
                else {
                  if (puVar7 != (ushort *)0x0) {
                    AdCedarBuildAACPacketHdr
                              ((byte *)puVar7,sVar8,0,(undefined *)&param_1[1].field_0x8,
                               (undefined4 *)&param_1[1].field_0x4,param_2[2],param_2[4]);
                    iVar5 = *(int *)&param_1[0x38].field_0x10;
                  }
                  if ((int)sVar8 < 2) {
                    *(undefined4 *)&param_1[1].field_0x4 = 0;
                  }
                }
              }
              else {
                if (puVar7 != (ushort *)0x0) {
                  iVar5 = param_2[5];
                  local_3c = param_2[4];
                  local_40 = CONCAT13((char)((uint)param_2[2] >> 8),
                                      CONCAT12((char)param_2[2],(short)param_2[1]));
                  local_30 = (undefined)param_2[0x1a];
                  local_2f = (undefined)((uint)param_2[0x1a] >> 8);
                  local_38 = CONCAT13((char)(iVar5 >> 0x1b),
                                      CONCAT12((char)(iVar5 >> 0x13),
                                               CONCAT11((char)(iVar5 >> 0xb),(char)(iVar5 >> 3))));
                  local_34._0_3_ =
                       CONCAT12((char)param_2[3],
                                (ushort)(byte)((uint)param_2[0x1d] >> 8) << 8 |
                                (ushort)param_2[0x1d] & 0xff);
                  local_34 = ((uint)param_2[3] >> 8) << 0x18 | (uint)(uint3)local_34;
                  FUN_000134b8(param_1,&local_40,0x12);
                  goto LAB_000143f4;
                }
              }
            }
            else {
LAB_000143ec:
              if (puVar7 != (ushort *)0x0) {
LAB_000143f4:
                FUN_000134b8(param_1,puVar7,sVar8);
                iVar5 = *(int *)&param_1[0x38].field_0x10;
              }
            }
          }
        }
        ppVar2 = (pthread_mutex_t *)(**(code **)(iVar5 + 4))();
        *(pthread_mutex_t **)&param_1[0x38].field_0x14 = ppVar2;
        if (ppVar2 == (pthread_mutex_t *)0x0) {
          free(*(void **)&param_1[2].field_0x14);
          *(undefined4 *)&param_1[2].field_0x14 = 0;
        }
        else {
          uVar1 = 0;
          *(undefined4 *)(param_3 + 0x28) = 0;
          *(pthread_mutex_t **)ppVar2 = param_1 + 2;
          *(pthread_mutex_t **)&ppVar2->field_0x8 = param_1 + 6;
          *(int *)&ppVar2->field_0x4 = param_3;
          iVar5 = (**(code **)&ppVar2->field_0x10)();
          if (-1 < iVar5) {
            iVar5 = *(int *)(*(int *)&param_1[0x38].field_0x14 + 8);
            uVar6 = *(undefined4 *)(*(int *)(*(int *)&param_1[0x38].field_0x14 + 4) + 0x34);
            *(undefined *)(param_1 + 9) = 1;
            *(char *)(iVar5 + 0x5c) = (char)uVar6;
            goto LAB_000142c8;
          }
          __android_log_print(3,"awplayer","<%s:%u>: err DecInit","AC320DecInit",0x3b3);
        }
      }
    }
    __android_log_print(5,"awplayer","<%s:%u>: cedar audio dec init error!",
                        "InitializeAudioDecodeLib",0x567);
    uVar1 = 0xffffffff;
    goto LAB_000142c8;
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
LAB_000142e0:
    *(undefined4 *)&param_1[0x38].field_0x10 = CedarCodesT._0_4_;
    goto LAB_000140a8;
  case 0x10:
    break;
  case 0x11:
    break;
  case 0x12:
    break;
  case 0x13:
    *(undefined4 *)&param_1[0x38].field_0x10 = CedarCodesT._40_4_;
    goto LAB_000140a8;
  }
  uVar1 = 0xffffffff;
LAB_000142c8:
  if (local_2c == __stack_chk_guard) {
    return uVar1;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void DecodeAudioFrame(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x554) + 0x14))();
  *(undefined *)(param_1 + 0xf4) = 0;
  return;
}



undefined4 DestroyAudioDecodeLib(pthread_mutex_t *param_1)

{
  if (param_1 != (pthread_mutex_t *)0x0) {
    if (*(void **)&param_1[2].field_0x14 != (void *)0x0) {
      free(*(void **)&param_1[2].field_0x14);
      *(undefined4 *)&param_1[2].field_0x14 = 0;
    }
    if (*(void **)(param_1 + 4) != (void *)0x0) {
      free(*(void **)(param_1 + 4));
      *(undefined4 *)(param_1 + 4) = 0;
    }
    if (*(int *)&param_1[0x38].field_0x14 != 0) {
      (**(code **)(*(int *)&param_1[0x38].field_0x14 + 0x18))();
      (**(code **)(*(int *)&param_1[0x38].field_0x10 + 8))(*(undefined4 *)&param_1[0x38].field_0x14)
      ;
      *(undefined4 *)&param_1[0x38].field_0x14 = 0;
    }
    pthread_mutex_destroy(param_1);
    free(param_1);
    return 0;
  }
  return 0xffffffff;
}



void SetAudiolibRawParam(int param_1,undefined param_2)

{
  *(undefined *)(*(int *)(*(int *)(param_1 + 0x554) + 8) + 0x5c) = param_2;
  return;
}



pthread_mutex_t * CreateAudioDecodeLib(void)

{
  pthread_mutex_t *__mutex;
  
  __mutex = (pthread_mutex_t *)malloc(0x558);
  if (__mutex != (pthread_mutex_t *)0x0) {
    memset(__mutex,0,0x558);
    pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
  }
  return __mutex;
}



undefined4
AdCedarBuildAACPacketHdr
          (byte *param_1,int param_2,int param_3,undefined *param_4,undefined4 *param_5,uint param_6
          ,int param_7)

{
  byte bVar1;
  bool bVar2;
  uint *puVar3;
  int *piVar4;
  byte bVar5;
  byte bVar6;
  uint unaff_r10;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  
  bVar10 = (int)param_1 < 0;
  bVar11 = param_1 == (byte *)0x0;
  if (!bVar11) {
    bVar10 = param_2 + -1 < 0;
  }
  bVar2 = param_2 == 1;
  bVar9 = !bVar11 && SBORROW4(param_2,1);
  if ((bVar11 || bVar2) || bVar10 != bVar9) {
    unaff_r10 = 0;
  }
  if ((!bVar11 && !bVar2) && bVar10 == bVar9) {
    unaff_r10 = 1;
  }
  *param_5 = 0;
  if ((bVar11 || bVar2) || bVar10 != bVar9) {
    __android_log_print(5,"awplayer","<%s:%u>: !!!please implement it!\n","AdCedarBuildAACPacketHdr"
                        ,0xf3);
    uVar7 = param_6 & 7;
    piVar4 = (int *)(CedarMp3DecT + 0xc);
    do {
      piVar4 = piVar4 + 1;
      if (*piVar4 == param_7) {
        bVar5 = 0x40;
        bVar6 = (byte)((unaff_r10 & 0x3f) << 2);
        goto LAB_000147c4;
      }
      unaff_r10 = unaff_r10 + 1;
    } while (unaff_r10 != 0xd);
    bVar6 = 0x34;
    bVar5 = 0x40;
    goto LAB_000147c4;
  }
  uVar7 = (uint)*param_1;
  switch(*param_1 >> 3) {
  case 1:
    bVar5 = 0;
    goto LAB_000147a4;
  case 2:
    goto LAB_000147a0;
  case 3:
    bVar5 = 0x80;
    goto LAB_000147a4;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
    break;
  case 0x10:
    goto LAB_000147a0;
  }
  __android_log_print(5,"awplayer","<%s:%u>: AAC sub type can\'t support, just think it as LC!\n",
                      "AdCedarBuildAACPacketHdr",0xd5);
  uVar7 = (uint)*param_1;
LAB_000147a0:
  bVar5 = 0x40;
LAB_000147a4:
  bVar6 = param_1[1];
  uVar8 = (uint)(bVar6 >> 7) | (uVar7 & 7) << 1;
  if (uVar8 == 0xf) {
    uVar8 = 0;
    bVar1 = param_1[4];
    puVar3 = (uint *)(CedarMp3DecT + 0xc);
    do {
      puVar3 = puVar3 + 1;
      if (*puVar3 ==
          ((uint)param_1[2] << 9 | (uint)param_1[3] << 1 | (uint)(bVar1 >> 7) |
          (bVar6 & 0x7f) << 0x11)) {
        uVar7 = ((uint)bVar1 << 0x1a) >> 0x1d;
        bVar6 = (byte)((uVar8 & 0x3f) << 2);
        goto LAB_000147c4;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != 0xd);
    bVar6 = 0x34;
    uVar7 = ((uint)bVar1 << 0x1a) >> 0x1d;
  }
  else {
    uVar7 = ((uint)bVar6 << 0x1a) >> 0x1d;
    bVar6 = (byte)(uVar8 << 2);
  }
LAB_000147c4:
  param_4[1] = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  param_4[4] = 0;
  param_4[5] = 0;
  param_4[6] = 0;
  *param_5 = 7;
  param_4[1] = ~(~param_4[1] & 0xe);
  *param_4 = 0xff;
  param_4[2] = bVar5 | bVar6 | param_4[2] | (byte)(uVar7 >> 2);
  param_4[3] = (byte)((uint)(param_3 << 0x13) >> 0x1e) | param_4[3] | (byte)(uVar7 << 6);
  param_4[4] = param_4[4] | (byte)(param_3 >> 3);
  param_4[5] = param_4[5] | (byte)(param_3 << 5) | 0x1f;
  param_4[6] = ~((byte)~(byte)(((uint)(byte)param_4[6] << 0x1e) >> 0x18) >> 6);
  return 0;
}



undefined4 AdCedarUpdateAACPacketHdr(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 == 7) {
    iVar1 = param_3 + 7;
    *(char *)(param_1 + 4) = (char)(iVar1 >> 3);
    *(byte *)(param_1 + 3) = (byte)((uint)(iVar1 * 0x80000) >> 0x1e) | *(byte *)(param_1 + 3) & 0xfc
    ;
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x1f | (char)iVar1 * ' ';
  }
  return 0;
}



undefined4 split_xiph_headers(ushort *param_1,int param_2,undefined4 *param_3,size_t *param_4)

{
  size_t __size;
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  ushort *local_40;
  void *local_3c;
  void *local_38;
  size_t local_34 [4];
  
  if (param_2 < 6) {
    if (param_2 < 3) {
      return 0xffffffff;
    }
  }
  else {
    uVar5 = (uint)*param_1;
    if (uVar5 == 0x1e) {
      iVar14 = 0;
      iVar13 = 6;
      while( true ) {
        *(uint *)((int)local_34 + iVar14) = uVar5;
        puVar8 = param_1 + 1;
        iVar6 = iVar13 + uVar5;
        *(ushort **)((int)&local_40 + iVar14) = puVar8;
        iVar14 = iVar14 + 4;
        param_1 = (ushort *)((int)puVar8 + uVar5);
        if ((int)(param_2 - uVar5) < iVar13) {
          return 0xffffffff;
        }
        if (iVar14 == 0xc) break;
        uVar5 = (uint)*(ushort *)((int)puVar8 + uVar5);
        iVar13 = iVar6;
      }
      goto LAB_00014a8c;
    }
  }
  if (*(char *)param_1 != '\x02') {
    return 0xffffffff;
  }
  local_40 = (ushort *)((int)param_1 + 1);
  iVar13 = 3;
  puVar9 = local_34;
  do {
    puVar10 = puVar9 + 1;
    *puVar9 = 0;
    uVar5 = (uint)*(byte *)local_40;
    if ((iVar13 < param_2) && (uVar11 = uVar5, puVar8 = local_40, uVar5 == 0xff)) {
      do {
        uVar12 = uVar11;
        iVar13 = iVar13 + 0x100;
        puVar7 = (ushort *)((int)local_40 + 1);
        if (param_2 <= iVar13) {
          uVar5 = (uint)*(byte *)((int)local_40 + 1);
          *puVar9 = uVar12;
          local_40 = puVar7;
          goto LAB_00014a4c;
        }
        uVar5 = (uint)*(byte *)(ushort *)((int)puVar8 + 1);
        local_40 = puVar7;
        uVar11 = uVar12 + 0xff;
        puVar8 = (ushort *)((int)puVar8 + 1);
      } while (uVar5 == 0xff);
      *puVar9 = uVar12;
    }
    else {
      uVar12 = 0;
    }
LAB_00014a4c:
    iVar13 = iVar13 + uVar5;
    *puVar9 = uVar5 + uVar12;
    if (param_2 < iVar13) {
      return 0xffffffff;
    }
    local_40 = (ushort *)((int)local_40 + 1);
    puVar9 = puVar10;
  } while (puVar10 != local_34 + 2);
  local_34[2] = param_2 - iVar13;
  local_3c = (void *)((int)local_40 + local_34[0]);
  local_38 = (void *)((int)local_3c + local_34[1]);
LAB_00014a8c:
  if ((int)local_34[0] < 1) {
    uVar5 = 0;
    iVar13 = 0x1b;
  }
  else {
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1 & 0xff;
    } while ((int)(uVar5 * 0xff) < (int)local_34[0]);
    iVar13 = uVar5 + 0x1b;
  }
  if ((int)local_34[1] < 1) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    do {
      uVar11 = uVar11 + 1 & 0xff;
    } while ((int)(uVar11 * 0xff) < (int)local_34[1]);
  }
  if ((int)local_34[2] < 1) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    do {
      uVar12 = uVar12 + 1 & 0xff;
    } while ((int)(uVar12 * 0xff) < (int)local_34[2]);
  }
  __size = local_34[0] + iVar13 + 0x1b + uVar11 + local_34[1] + uVar12 + local_34[2];
  *param_4 = __size;
  puVar1 = (undefined *)malloc(__size);
  *param_3 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    return 0xffffffff;
  }
  memset(puVar1,0,*param_4);
  iVar13 = 0;
  do {
    puVar1[iVar13] = 0;
    iVar13 = iVar13 + 1;
  } while (iVar13 != 0x1a);
  puVar1[1] = 0x67;
  puVar1[2] = 0x67;
  *puVar1 = 0x4f;
  puVar2 = puVar1 + 0x1b;
  puVar1[3] = 0x53;
  puVar1[5] = 2;
  puVar1[0x1a] = (char)uVar5;
  if (uVar5 != 0) {
    uVar4 = 0;
    do {
      bVar15 = uVar4 != uVar5 - 1;
      if (bVar15) {
        puVar1[0x1b] = 0xff;
      }
      puVar1 = puVar1 + 1;
      if (!bVar15) {
        puVar2[uVar4] = (char)uVar5 + (char)local_34[0] + -1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar5);
  }
  puVar1 = puVar2 + uVar5 + local_34[0];
  memcpy(puVar2 + uVar5,local_40,local_34[0]);
  iVar13 = 0;
  do {
    puVar1[iVar13] = 0;
    iVar13 = iVar13 + 1;
  } while (iVar13 != 0x1a);
  *puVar1 = 0x4f;
  puVar1[1] = 0x67;
  puVar2 = puVar1 + 0x1b;
  puVar1[2] = 0x67;
  puVar1[0x12] = 1;
  puVar1[3] = 0x53;
  puVar1[0x1a] = (char)uVar12 + (char)uVar11;
  if (uVar11 != 0) {
    uVar5 = 0;
    do {
      bVar15 = uVar5 == uVar11 - 1;
      if (bVar15) {
        puVar2[uVar5] = (char)uVar11 + (char)local_34[1] + -1;
      }
      uVar5 = uVar5 + 1;
      if (!bVar15) {
        puVar1[0x1b] = 0xff;
      }
      puVar1 = puVar1 + 1;
    } while (uVar5 != uVar11);
  }
  puVar2 = puVar2 + uVar11;
  if (uVar12 != 0) {
    uVar5 = 0;
    do {
      cVar3 = (char)uVar12 + (char)local_34[2] + -1;
      if (uVar5 != uVar12 - 1) {
        cVar3 = -1;
      }
      puVar2[uVar5] = cVar3;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar12);
  }
  memcpy(puVar2 + uVar12,local_3c,local_34[1]);
  memcpy(puVar2 + uVar12 + local_34[1],local_38,local_34[2]);
  return 0;
}



undefined4 SetAudioBsHeader_PCM(int param_1,int param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  
  uVar19 = *(uint *)(param_1 + 4);
  if (((uVar19 & 0xffff) == 0x11 || (uVar19 & 0xffff) == 2) || ((uVar19 & 0xf000) == 0xe000)) {
    puVar6 = *(undefined4 **)(param_2 + 0x24);
    iVar11 = *(int *)(param_1 + 8);
    puVar4 = (uint *)0x32920;
    uVar8 = *(uint *)(param_1 + 0x10);
    *puVar6 = 0x46464952;
    puVar6[3] = 0x20746d66;
    puVar6[1] = 0x7fffffff;
    puVar6[2] = 0x45564157;
    puVar6[4] = 0x14;
    *(short *)(puVar6 + 5) = (short)uVar19;
    *(short *)((int)puVar6 + 0x16) = (short)iVar11;
    do {
      puVar4 = puVar4 + 1;
      uVar19 = *puVar4;
      if ((uVar19 - 500 <= uVar8) && (uVar8 <= uVar19 + 500)) goto LAB_00015058;
    } while (puVar4 != (uint *)&UNK_00032954);
    uVar19 = 0xac44;
    if (uVar8 != 0) {
      uVar19 = uVar8;
    }
LAB_00015058:
    uVar1 = *(ushort *)(param_1 + 0x74);
    puVar6[6] = uVar19;
    *(undefined2 *)((int)puVar6 + 0x22) = 4;
    *(undefined2 *)(puVar6 + 9) = 2;
    *(ushort *)(puVar6 + 8) = uVar1;
    uVar2 = __aeabi_idiv((uint)uVar1 * 2 + iVar11 * -7,iVar11);
    iVar11 = *(int *)(param_1 + 0x14);
    if (iVar11 != 0) {
      puVar6[7] = iVar11 >> 3;
    }
    *(undefined2 *)((int)puVar6 + 0x26) = uVar2;
    if (iVar11 == 0) {
      uVar3 = __aeabi_uidiv(uVar1 * uVar19);
      puVar6[7] = uVar3;
    }
    iVar14 = *(int *)(param_2 + 0x44);
    uVar19 = *(int *)(param_2 + 0x38) + 1;
    iVar10 = *(int *)(param_2 + 0x30);
    iVar12 = *(int *)(param_2 + 0x40);
    iVar11 = *(int *)(param_2 + 0x38) * 0x18;
    iVar17 = iVar10 + iVar11;
    puVar6[10] = 0x61746164;
    puVar6[0xb] = 0x7fffffff;
    *(undefined4 *)(iVar17 + 4) = 0;
    *(undefined4 *)(iVar17 + 8) = 0;
    *(undefined4 *)(iVar17 + 0xc) = 0;
    *(undefined4 *)(iVar17 + 0x14) = 0;
    *(undefined4 *)(iVar17 + 0x10) = 0x2c;
    iVar15 = *(int *)(param_2 + 0x20);
    iVar17 = *(int *)(param_2 + 0x28);
    iVar18 = *(int *)(param_2 + 8);
    *(undefined4 **)(iVar10 + iVar11) = puVar6;
    *(uint *)(param_2 + 0x38) = uVar19;
    *(int *)(param_2 + 0x40) = iVar12 + 1;
    if (iVar14 - 1U < uVar19) {
      *(undefined4 *)(param_2 + 0x38) = 0;
    }
    *(undefined4 **)(param_2 + 0x24) = puVar6 + 0xc;
    *(int *)(param_2 + 0x28) = iVar17 + -0x30;
    *(int *)(param_2 + 0x20) = iVar15 + 0x30;
    *(int *)(param_2 + 8) = iVar18 + 0x30;
  }
  else {
    uVar13 = *(uint *)(param_1 + 8);
    puVar6 = *(undefined4 **)(param_2 + 0x24);
    puVar4 = (uint *)0x32920;
    uVar9 = *(uint *)(param_1 + 0x10);
    uVar16 = uVar13 & 0xffff;
    uVar8 = uVar19 & 0xffff;
    *puVar6 = 0x46464952;
    puVar6[2] = 0x45564157;
    puVar6[1] = 0x7fffffff;
    puVar6[3] = 0x20746d66;
    puVar6[4] = 0x10;
    *(short *)(puVar6 + 5) = (short)uVar8;
    *(short *)((int)puVar6 + 0x16) = (short)uVar16;
    do {
      puVar4 = puVar4 + 1;
      uVar7 = *puVar4;
      if ((uVar7 - 500 <= uVar9) && (uVar9 <= uVar7 + 500)) goto LAB_00014e70;
    } while (puVar4 != (uint *)&UNK_00032954);
    uVar7 = 0xac44;
    if (uVar9 != 0) {
      uVar7 = uVar9;
    }
LAB_00014e70:
    iVar11 = *(int *)(param_2 + 0x38);
    iVar17 = *(int *)(param_2 + 0x30);
    iVar14 = *(int *)(param_1 + 0xc) * uVar13;
    *(short *)((int)puVar6 + 0x22) = (short)*(int *)(param_1 + 0xc);
    uVar9 = iVar11 + 1;
    iVar15 = *(int *)(param_2 + 0x40);
    iVar11 = iVar11 * 0x18;
    puVar6[6] = uVar7;
    if (iVar14 < 0) {
      iVar14 = iVar14 + 7;
    }
    uVar13 = (uint)(iVar14 << 0xd) >> 0x10;
    uVar1 = (ushort)((uint)(iVar14 << 0xd) >> 0x10);
    *(ushort *)(puVar6 + 8) = uVar1;
    uVar5 = uVar13 * uVar7;
    puVar6[7] = uVar5;
    if ((uVar8 - 6 & 0xffff) < 2) {
      *(undefined2 *)((int)puVar6 + 0x22) = 8;
    }
    iVar14 = *(int *)(param_2 + 0x44);
    puVar6[9] = 0x61746164;
    puVar6[10] = 0x7fffffff;
    iVar17 = iVar17 + iVar11;
    *(undefined4 *)(iVar17 + 8) = 0;
    *(undefined4 *)(iVar17 + 0xc) = 0;
    iVar18 = *(int *)(param_2 + 0x30);
    *(undefined4 *)(iVar17 + 4) = 0;
    *(undefined4 *)(iVar17 + 0x14) = 0;
    *(undefined4 **)(iVar18 + iVar11) = puVar6;
    *(undefined4 *)(iVar17 + 0x10) = 0x2c;
    *(uint *)(param_2 + 0x38) = uVar9;
    if (iVar14 - 1U < uVar9) {
      *(undefined4 *)(param_2 + 0x38) = 0;
    }
    *(int *)(param_2 + 0x40) = iVar15 + 1;
    *(undefined4 **)(param_2 + 0x24) = puVar6 + 0xb;
    *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + -0x2c;
    *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 0x2c;
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 0x2c;
    if ((uVar19 & 0x10000) != 0) {
      *puVar6 = 0x58464952;
      puVar6[1] = 0xffffff7f;
      *(ushort *)(puVar6 + 5) = (ushort)(uVar8 << 8) | (ushort)(uVar8 >> 8);
      puVar6[4] = 0x10000000;
      *(ushort *)((int)puVar6 + 0x16) = (ushort)(uVar16 << 8) | (ushort)(uVar16 >> 8);
      puVar6[6] = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                  uVar7 >> 0x18;
      puVar6[7] = uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                  uVar5 >> 0x18;
      *(ushort *)(puVar6 + 8) = (ushort)(uVar13 << 8) | uVar1 >> 8;
      *(ushort *)((int)puVar6 + 0x22) =
           *(ushort *)((int)puVar6 + 0x22) << 8 | *(ushort *)((int)puVar6 + 0x22) >> 8;
      puVar6[10] = 0xffffff7f;
    }
  }
  return 0;
}



size_t FUN_00015198(int *param_1,void *param_2,void *param_3,int param_4,size_t param_5)

{
  size_t sVar1;
  size_t sVar2;
  
  sVar2 = param_4 - param_5;
  memmove(param_2,param_3,param_5);
  sVar1 = FREAD_AC320((ushort *)((int)param_2 + param_5),sVar2,*param_1);
  if ((int)sVar1 < (int)sVar2) {
    memset((void *)((int)param_2 + sVar1 + param_5),0,sVar2 - sVar1);
  }
  return sVar1;
}



uint AudioAACAACframeDec(int *param_1,short *param_2,size_t *param_3)

{
  char cVar1;
  short sVar2;
  short sVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  size_t sVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  size_t sVar13;
  short *psVar14;
  short *psVar15;
  void *pvVar16;
  int iVar17;
  void *pvVar18;
  short *psVar19;
  short sVar20;
  undefined4 *puVar21;
  int iVar22;
  void **ppvVar23;
  int iVar24;
  void *pvVar25;
  undefined4 *puVar26;
  short sVar27;
  int iVar28;
  undefined4 uVar29;
  int iVar30;
  bool bVar31;
  bool bVar32;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 uVar33;
  double dVar34;
  void *local_c8;
  void *local_b0;
  void *local_ac;
  int local_a8;
  int aiStack164 [6];
  undefined auStack140 [4];
  undefined4 local_88;
  undefined4 local_84;
  uint local_74;
  uint local_68;
  undefined4 local_64;
  undefined4 local_54;
  
  puVar21 = *(undefined4 **)param_1[2];
  *param_3 = 0;
  if ((puVar21[0x5015] != 0) && (*(int *)(param_1[1] + 0x28) != 0)) {
    sVar13 = puVar21[0x5016];
    *param_3 = sVar13;
    if ((int)puVar21[0x5015] < 2) {
      memcpy(param_2,puVar21 + 0x4814,sVar13);
    }
    else {
      memset(param_2,0,sVar13);
      puVar21[0x5016] = *param_3;
    }
    puVar21[0x5015] = puVar21[0x5015] + -1;
    return 0;
  }
  iVar24 = param_1[3];
  puVar21[0x5015] = 0;
  if (iVar24 == 0) {
    ppvVar23 = AACInitDecoder((void *)puVar21[10]);
    puVar21[9] = ppvVar23;
    if (ppvVar23 == (void **)0x0) {
      return 0xffffffff;
    }
    iVar24 = param_1[1];
    puVar21[0x12] = 0;
    puVar21[0x5017] = puVar21 + 0x14;
    *(undefined4 *)(iVar24 + 0x10) = 0;
    *(undefined4 *)(iVar24 + 8) = 0;
    puVar21[2] = 0;
    param_1[3] = 1;
  }
  else {
    ppvVar23 = (void **)puVar21[9];
    iVar24 = param_1[1];
  }
  iVar24 = *(int *)(iVar24 + 0x28);
  pvVar25 = (void *)0x0;
  ppvVar23[0x1f] = (void *)0x0;
  ppvVar23[0x1e] = (void *)0x0;
  if (iVar24 == 0) {
    iVar24 = *(int *)(param_1[2] + 0x2b0);
    if (iVar24 == 0) {
LAB_00015338:
      pvVar16 = ppvVar23[0x17];
      pvVar25 = (void *)0x0;
      if (pvVar16 == (void *)0x0) {
        puVar6 = puVar21 + 0x14;
        pvVar25 = (void *)ShowAbsBits((ushort *)puVar6,10,*param_1);
        if (pvVar25 != (void *)0xa) goto LAB_00015368;
        uVar10 = puVar21[0x14];
        if ((uVar10 & 0xffffff) == 0x334449) {
          iVar28 = (*(byte *)((int)puVar21 + 0x59) & 0x7f |
                   (*(byte *)(puVar21 + 0x16) & 0x7f |
                   (*(byte *)((int)puVar21 + 0x57) & 0x7f |
                   (*(byte *)((int)puVar21 + 0x56) & 0x7f) << 7) << 7) << 7) + 10;
          FSeek_AC320(iVar28,*param_1);
          iVar24 = *param_1;
          puVar21[0x12] = puVar21[0x12] + iVar28;
          pvVar25 = (void *)ShowAbsBits((ushort *)puVar6,4,iVar24);
          if (pvVar25 != (void *)0x4) goto LAB_00015368;
          uVar10 = puVar21[0x14];
        }
        if (uVar10 == 0x46494441) {
          iVar24 = param_1[2];
          ppvVar23[0x17] = (void *)0x0;
          if (*(int *)(iVar24 + 0x2a8) == 0) goto LAB_0001551c;
          if (*(int *)(*param_1 + 0x20) < 0x16) {
            sVar13 = *(int *)(*param_1 + 0x20) + 2;
          }
          else {
            sVar13 = 0x16;
          }
          sVar8 = FUN_00015198(param_1,puVar6,(void *)puVar21[0x5017],puVar21[0xd] + sVar13,
                               puVar21[0xd]);
          if (sVar8 != sVar13) {
LAB_00015368:
            if (*(char *)(param_1[2] + 0x48) != '\x01') {
              return 0xfffffffe;
            }
            return 5;
          }
          iVar28 = *param_1;
          puVar21[0x5017] = puVar6;
          iVar24 = *(int *)(iVar28 + 0x30);
          sVar13 = sVar13 + puVar21[0xd];
          iVar28 = *(int *)(iVar28 + 0x34);
          puVar21[0xd] = sVar13;
          iVar24 = iVar28 * 0x18 + iVar24;
          pvVar16 = (void *)(*(int *)(iVar24 + 0x10) - *(int *)(iVar24 + 0x14));
          pvVar25 = (void *)FUN_00015198(param_1,puVar6,puVar6,sVar13 + (int)pvVar16,sVar13);
          if (pvVar25 != pvVar16) goto LAB_00015368;
          pvVar16 = ppvVar23[0x17];
          puVar21[0x5017] = puVar6;
          puVar21[0xd] = puVar21[0xd] + (int)pvVar25;
        }
        else {
          pvVar16 = *(void **)(*param_1 + 0x20);
          if (0x3ff < (int)pvVar16) {
            pvVar16 = (void *)0x400;
          }
          pvVar25 = (void *)ShowAbsBits((ushort *)puVar6,(size_t)pvVar16,*param_1);
          if (pvVar25 != pvVar16) goto LAB_00015368;
          iVar24 = (int)pvVar25 - 1;
          if (iVar24 < 1) {
            iVar28 = 0;
          }
          else {
            pcVar12 = (char *)((int)puVar21 + 0x4f);
            iVar28 = 0;
            do {
              pcVar11 = pcVar12 + 1;
              iVar17 = iVar28 + 1;
              if (*pcVar11 == -1) {
                if ((pcVar12[2] & 0xf0U) == 0xf0) {
                  ppvVar23[0x17] = (void *)0x1;
                  break;
                }
              }
              else {
                if ((*pcVar11 == 'V') && ((pcVar12[2] & 0xe0U) == 0xe0)) {
                  if ((int)((int)pvVar25 - 2U) <= (int)(pcVar11 + (-0x50 - (int)puVar21))) {
LAB_00015dd0:
                    ppvVar23[0x17] = (void *)0x4;
                    break;
                  }
                  iVar22 = (CONCAT11(pcVar12[2],pcVar12[3]) & 0x1fff) + 3;
                  pvVar16 = (void *)(iVar28 + iVar22);
                  if ((int)pvVar16 < iVar24) {
                    if ((*(char *)((int)puVar21 + (int)pvVar16 + 0x50) == 'V') &&
                       ((*(byte *)((int)puVar21 + iVar22 + iVar17 + 0x50) & 0xe0) != 0))
                    goto LAB_00015dd0;
                  }
                  else {
                    if (pvVar25 == pvVar16) goto LAB_00015dd0;
                  }
                }
              }
              iVar28 = iVar17;
              pcVar12 = pcVar11;
            } while (iVar17 < iVar24);
          }
          FlushAbsBits(iVar28,*param_1);
          pvVar16 = ppvVar23[0x17];
          bVar31 = pvVar25 == (void *)0x3ff;
          if ((int)pvVar25 < 0x400) {
            bVar31 = pvVar16 == (void *)0x0;
          }
          if (bVar31) {
            pvVar25 = (void *)ShowAbsBits((ushort *)puVar6,0x400,*param_1);
            if (pvVar25 != (void *)0x400) goto LAB_00015368;
            iVar24 = 0;
            pcVar12 = (char *)((int)puVar21 + 0x4f);
            iVar28 = 0;
            do {
              cVar1 = pcVar12[1];
              iVar24 = iVar24 + 1;
              iVar17 = iVar28 + 1;
              if (cVar1 == -1) {
                if ((pcVar12[2] & 0xf0U) == 0xf0) {
                  ppvVar23[0x17] = (void *)0x1;
                  iVar24 = iVar28;
                  break;
                }
              }
              else {
                if ((cVar1 == 'V') && ((pcVar12[2] & 0xe0U) == 0xe0)) {
                  if (iVar28 == 0x3fe) {
LAB_0001674c:
                    ppvVar23[0x17] = (void *)0x4;
                    iVar24 = iVar28;
                    break;
                  }
                  iVar22 = (CONCAT11(pcVar12[2],pcVar12[3]) & 0x1fff) + 3;
                  iVar30 = iVar28 + iVar22;
                  if (iVar30 < 0x3ff) {
                    if ((*(char *)((int)puVar21 + iVar30 + 0x50) == 'V') &&
                       ((*(byte *)((int)puVar21 + iVar22 + iVar24 + 0x50) & 0xe0) != 0))
                    goto LAB_0001674c;
                  }
                  else {
                    if (iVar30 == 0x400) goto LAB_0001674c;
                  }
                }
              }
              ppvVar23[0x17] = (void *)0x1;
              pcVar12 = pcVar12 + 1;
              iVar28 = iVar17;
            } while (iVar17 != 0x3ff);
            FlushAbsBits(iVar24,*param_1);
            goto LAB_000154e8;
          }
        }
      }
    }
    else {
      feedBitstream(aiStack164,iVar24,*(int *)(param_1[2] + 0x2b4) << 3);
      setAtBitstream(aiStack164,0,1);
      local_74 = ga_config_get_data(aiStack164,&local_68);
      if (local_74 != 0) {
        return 0x80004005;
      }
      local_88 = local_54;
      local_84 = local_64;
      if (local_68 == 2) {
LAB_00015300:
        local_74 = 1;
      }
      else {
        if (local_68 != 1) {
          if (local_68 != 3) goto LAB_00015300;
          local_74 = 2;
        }
      }
      AACSetRawBlockParams((int *)ppvVar23,0,(int)auStack140);
      iVar24 = param_1[1];
      ppvVar23[0x22] = (void *)0x1;
      pvVar16 = *(void **)(iVar24 + 0x28);
      bVar31 = pvVar16 != (void *)0x0;
      if (bVar31) {
        pvVar16 = ppvVar23[0x17];
      }
      pvVar25 = (void *)0x0;
      if (!bVar31) goto LAB_00015338;
    }
  }
  else {
LAB_000154e8:
    pvVar16 = ppvVar23[0x17];
  }
  if (pvVar16 == (void *)0x2) {
    if (*(char *)(param_1[2] + 100) == 'f' || *(char *)(param_1[2] + 100) == 'D') {
      return 1;
    }
    puVar21[0x10] = 0;
    puVar21[0x11] = 0;
  }
LAB_0001551c:
  uVar10 = AudioAACfuntion(param_1,puVar21[2]);
  if (-1 < (int)uVar10) {
    if (uVar10 == 0x88) {
      pvVar25 = ppvVar23[0x17];
      puVar21[0xd] = 0;
      puVar21[0xc] = 0;
      puVar21[0x5018] = 0;
      if ((pvVar25 == (void *)0x3) && (*(int *)(param_1[2] + 0x2b0) == 0)) {
        ppvVar23[0x17] = (void *)0x1;
      }
      uVar10 = 0;
      ppvVar23[0x20] = (void *)0x6;
      puVar21[0x5014] = 0;
    }
    else {
      if (uVar10 != 1) {
        pvVar16 = ppvVar23[0x17];
        local_c8 = (void *)0x0;
        bVar31 = false;
        if (pvVar16 != (void *)0x2 && pvVar16 != (void *)0x0) goto LAB_000156ec;
LAB_00015574:
        if (*(int *)(param_1[2] + 0x2a8) == 0) {
          pvVar16 = (void *)puVar21[0xd];
          iVar24 = puVar21[0xb] * puVar21[0xb];
          if (((int)((int)pvVar16 + iVar24 * -0x300) < 0 != SBORROW4((int)pvVar16,iVar24 * 0x300))
             && (puVar21[0xc] == 0)) {
            pvVar25 = (void *)FUN_00015198(param_1,puVar21 + 0x14,(void *)puVar21[0x5017],
                                           iVar24 * 0x600,(size_t)pvVar16);
            if (pvVar25 == (void *)0x0) goto LAB_00015368;
            iVar24 = puVar21[0xd];
            puVar21[0x5017] = puVar21 + 0x14;
            pvVar16 = (void *)((int)pvVar25 + iVar24);
            puVar21[0xd] = pvVar16;
            if ((void *)(puVar21[0xb] * puVar21[0xb] * 0x600 - iVar24) != pvVar25) {
              puVar21[0xc] = 1;
            }
          }
        }
        else {
          pvVar16 = (void *)puVar21[0xd];
          if (1 < (int)pvVar16) goto LAB_00015590;
          if (puVar21[0xc] == 0) {
            iVar24 = *param_1;
            iVar28 = *(int *)(iVar24 + 0x30) + *(int *)(iVar24 + 0x34) * 0x18;
            if (((*(int *)(iVar24 + 0x34) == *(int *)(iVar24 + 0x38)) ||
                (pvVar18 = (void *)(*(int *)(iVar28 + 0x10) - *(int *)(iVar28 + 0x14)),
                pvVar18 == (void *)0x0)) || (*(int *)(iVar24 + 0x20) == 0)) {
              puVar6 = puVar21 + 0x14;
              sVar13 = FUN_00015198(param_1,puVar6,(void *)puVar21[0x5017],(int)pvVar16 + 2,
                                    (size_t)pvVar16);
              if (sVar13 == 0) goto LAB_00015368;
              iVar24 = *param_1;
              if (sVar13 != 2) {
                puVar21[0xc] = 1;
              }
              iVar28 = *(int *)(iVar24 + 0x34);
              pvVar16 = (void *)(sVar13 + puVar21[0xd]);
              iVar24 = *(int *)(iVar24 + 0x30);
              puVar21[0x5017] = puVar6;
              puVar21[0xd] = pvVar16;
              iVar24 = iVar24 + iVar28 * 0x18;
              pvVar18 = (void *)(*(int *)(iVar24 + 0x10) - *(int *)(iVar24 + 0x14));
            }
            else {
              puVar6 = (undefined4 *)puVar21[0x5017];
            }
            iVar24 = (int)pvVar18 + (int)pvVar16;
            pvVar25 = (void *)FUN_00015198(param_1,puVar21 + 0x14,puVar6,iVar24,(size_t)pvVar16);
            if (pvVar25 == (void *)0x0) goto LAB_00015368;
            puVar21[0x5017] = puVar21 + 0x14;
            if (pvVar25 != pvVar18) {
              iVar24 = 1;
            }
            pvVar16 = (void *)((int)pvVar25 + puVar21[0xd]);
            if (pvVar25 != pvVar18) {
              puVar21[0xc] = iVar24;
            }
            puVar21[0xd] = pvVar16;
          }
        }
        while( true ) {
          if ((int)pvVar16 < 1) {
            return 0xfffffffe;
          }
LAB_00015590:
          uVar5 = AACDecode((int *)ppvVar23,(byte **)(puVar21 + 0x5017),(byte **)(puVar21 + 0xd),
                            param_2);
          if (uVar5 == 0) {
            iVar24 = param_1[1];
            pvVar18 = (void *)puVar21[0xd];
            *(undefined4 *)(iVar24 + 0x28) = 1;
          }
          else {
            pvVar18 = ppvVar23[0x17];
            if (*(int *)(param_1[2] + 0x2b0) != 0) {
              puVar21[0xd] = 0;
            }
            if (pvVar18 != (void *)0x4) {
              AACResetDecoder(ppvVar23);
              pvVar18 = ppvVar23[0x17];
            }
            if (0 < (int)ppvVar23[0x21]) {
              ppvVar23[0x21] = (void *)((int)ppvVar23[0x21] + -1);
            }
            if ((pvVar18 == (void *)0x3) && (*(int *)(param_1[2] + 0x2b0) == 0)) {
              ppvVar23[0x17] = (void *)0x1;
            }
            iVar24 = param_1[1];
            *(undefined4 *)(iVar24 + 0x28) = 0;
            if (uVar5 == 0xffffffff) {
              if (puVar21[0xc] != 0) {
                return 0xfffffffe;
              }
              pvVar18 = (void *)puVar21[0xd];
              if (pvVar18 == (void *)(puVar21[0xb] * puVar21[0xb] * 0x800)) {
                bVar31 = true;
              }
            }
            else {
              pvVar18 = (void *)puVar21[0xd];
              bVar31 = true;
            }
          }
          bVar32 = pvVar18 == pvVar16;
          iVar28 = *(int *)(iVar24 + 0x1c);
          if (bVar32) {
            puVar21[0xd] = (int)pvVar16 + -1;
            pvVar18 = (void *)puVar21[0x5017];
          }
          if (bVar32) {
            puVar21[0x5017] = (int)pvVar18 + 1;
          }
          pvVar18 = ppvVar23[0x17];
          *(int *)(iVar24 + 0x1c) = iVar28 + 1;
          if (pvVar18 == (void *)0x2) break;
          if (uVar5 == 0) {
            FlushAbsBits((int)((int)pvVar16 - puVar21[0xd]),*param_1);
            local_c8 = (void *)((int)local_c8 + (int)((int)pvVar16 - puVar21[0xd]));
            if (*(int *)(param_1[2] + 0x2a8) == 0) goto LAB_00015678;
            if ((int)puVar21[0xd] < 5) {
              if ((ppvVar23[0x17] == (void *)0x3) && (*(int *)(param_1[2] + 0x2b0) == 0)) {
                ppvVar23[0x17] = (void *)0x1;
              }
              goto LAB_00015678;
            }
            ppvVar23[0x17] = (void *)0x3;
          }
          else {
            if (pvVar18 == (void *)0x4) {
              local_c8 = (void *)((int)local_c8 + (int)ppvVar23[0x1e] + (int)ppvVar23[0x1f]);
              FlushAbsBits((int)ppvVar23[0x1e] + (int)ppvVar23[0x1f],*param_1);
              ppvVar23[0x1e] = (void *)0x0;
              ppvVar23[0x1f] = (void *)0x0;
            }
            else {
              FlushAbsBits((int)((int)pvVar16 - puVar21[0xd]),*param_1);
              local_c8 = (void *)((int)local_c8 + (int)((int)pvVar16 - puVar21[0xd]));
            }
LAB_00015678:
            puVar21[0x5017] = puVar21 + 0x14;
            puVar21[0xd] = 0;
          }
          if (puVar21[0x5018] != 0) {
            sVar13 = puVar21[0x5018] - (int)local_c8;
            puVar21[0x5018] = sVar13;
            if ((int)sVar13 < 1) {
              return 0xfffffffe;
            }
            memcpy(puVar21 + 0x14,(void *)((int)puVar21 + (int)local_c8 + 0x50),sVar13);
          }
          pvVar16 = ppvVar23[0x1e];
          if (pvVar16 != (void *)0xffffffff) {
            if (0 < (int)pvVar16) {
              FlushAbsBits((int)pvVar16,*param_1);
              local_c8 = (void *)((int)local_c8 + (int)ppvVar23[0x1e]);
            }
            goto LAB_00015f8c;
          }
          pvVar16 = ppvVar23[0x17];
          puVar21[0x5015] = puVar21[0x5015] + 1;
          if (pvVar16 == (void *)0x2 || pvVar16 == (void *)0x0) goto LAB_00015574;
LAB_000156ec:
          iVar24 = param_1[2];
          if ((*(int *)(iVar24 + 0x2a8) == 0) || (pvVar16 != (void *)0x3)) {
            if (puVar21[0xd] != 0) {
              FSeek_AC320_Origin(-puVar21[0xd],*param_1,1);
              pvVar16 = ppvVar23[0x17];
              puVar21[0xd] = 0;
              puVar21[0xc] = 0;
            }
          }
          else {
            pvVar16 = (void *)puVar21[0xd];
            if ((int)pvVar16 < 2) {
              if (*(int *)(iVar24 + 0x2b0) == 0) {
                ppvVar23[0x17] = (void *)0x1;
              }
              puVar21[0xd] = 0;
              puVar21[0x5017] = puVar21 + 0x14;
            }
            else {
              ppvVar23[0x1f] = pvVar16;
              pvVar25 = pvVar16;
            }
            if (*(int *)(iVar24 + 0x2b0) == 0) {
              pvVar16 = ppvVar23[0x17];
            }
            else {
              puVar6 = puVar21 + 0x14;
              sVar13 = ShowAbsBits((ushort *)puVar6,2,*param_1);
              if ((int)sVar13 < 2) goto LAB_00015368;
              iVar24 = *param_1;
              pvVar25 = *(void **)(*(int *)(iVar24 + 0x30) + *(int *)(iVar24 + 0x34) * 0x18 + 0x10);
              ppvVar23[0x1f] = pvVar25;
              pvVar16 = (void *)ShowAbsBits((ushort *)puVar6,(size_t)pvVar25,iVar24);
              pvVar25 = ppvVar23[0x1f];
              if (pvVar25 != pvVar16) goto LAB_00015368;
              puVar21[0xd] = pvVar25;
              pvVar16 = ppvVar23[0x17];
              ppvVar23[0x1e] = (void *)0x0;
              puVar21[0x5017] = puVar6;
            }
          }
          if (pvVar16 == (void *)0x1) {
            pvVar25 = (void *)puVar21[0x5018];
            if (pvVar25 == (void *)0x0) {
              pvVar16 = *(void **)(*param_1 + 0x20);
              if (((int)pvVar16 < 0x81) && (*(char *)(param_1[2] + 0x48) != '\0')) {
                pvVar18 = (void *)(1 - (int)pvVar16);
                if ((void *)0x1 < pvVar16) {
                  pvVar18 = (void *)0x0;
                }
              }
              else {
                pvVar16 = (void *)0x80;
                pvVar18 = pvVar25;
              }
              pvVar25 = (void *)ShowAbsBits((ushort *)(puVar21 + 0x14),(size_t)pvVar16,*param_1);
              if (pvVar25 != pvVar16) {
                pvVar18 = (void *)((uint)pvVar18 | 1);
              }
              if (((uint)pvVar18 & 0xff) != 0) {
                if (pvVar25 == (void *)0x0) goto LAB_00015368;
                puVar21[0x5018] = pvVar25;
              }
            }
            puVar26 = puVar21 + 0x14;
            puVar21[0x5017] = puVar26;
            puVar21[0xd] = 0;
            puVar6 = puVar26;
            while( true ) {
              pvVar18 = (void *)AACFindSyncWord((byte *)puVar6,(int)pvVar25);
              ppvVar23[0x1e] = pvVar18;
              if (-1 < (int)pvVar18) break;
              FlushAbsBits((int)pvVar25 - 1,*param_1);
              pvVar25 = (void *)ShowAbsBits((ushort *)puVar26,0x80,*param_1);
              if (pvVar25 != (void *)0x80) {
                if (pvVar25 == (void *)0x0) goto LAB_00015368;
                puVar21[0x5018] = pvVar25;
              }
              puVar6 = (undefined4 *)puVar21[0x5017];
            }
            if (pvVar18 != (void *)0x0) {
              FlushAbsBits((int)pvVar18,*param_1);
              pvVar18 = ppvVar23[0x1e];
              local_c8 = pvVar18;
            }
            if ((int)pvVar25 <= (int)pvVar18 + 6) {
              iVar24 = *param_1;
              puVar21[0xd] = puVar21[0xd] + (int)pvVar18;
              sVar13 = ShowAbsBits((ushort *)((int)puVar21 + (int)pvVar18 + 0x50),0x80,iVar24);
              pvVar25 = (void *)(sVar13 + (int)pvVar18);
              pvVar18 = ppvVar23[0x1e];
              if ((int)pvVar25 <= (int)pvVar18 + 6) goto LAB_00015368;
            }
            iVar24 = (int)puVar21 + (int)pvVar18;
            pvVar16 = (void *)((uint)(*(byte *)(iVar24 + 0x55) >> 5) |
                               (*(byte *)(iVar24 + 0x53) & 3) << 0xb |
                              (uint)*(byte *)(iVar24 + 0x54) << 3);
            ppvVar23[0x1f] = pvVar16;
            if ((ppvVar23[0x12] == (void *)0x0) && ((void *)0x400 < pvVar16)) {
              local_a8 = (int)((int)pvVar25 - (int)pvVar18) * 8;
              local_ac = (void *)((int)puVar21 + (int)pvVar18 + 0x50);
              local_b0 = ppvVar23[0x12];
              iVar24 = raac_UnpackADTSHeader(ppvVar23,&local_ac,(uint *)&local_b0,&local_a8);
              ppvVar23[0x12] = (void *)0x0;
              if (iVar24 != 0) {
                AACResetDecoder(ppvVar23);
                iVar24 = param_1[1];
                if (0 < (int)ppvVar23[0x21]) {
                  ppvVar23[0x21] = (void *)((int)ppvVar23[0x21] + -1);
                }
                if (ppvVar23[0x17] == (void *)0x3) {
                  ppvVar23[0x17] = (void *)0x1;
                }
                *(undefined4 *)(iVar24 + 0x28) = 0;
                ppvVar23[0x1f] = (void *)0x0;
                goto LAB_00015f18;
              }
              goto LAB_00015720;
            }
          }
          else {
            if (pvVar16 == (void *)0x4) {
              puVar6 = puVar21 + 0x14;
              pvVar25 = (void *)ShowAbsBits((ushort *)puVar6,0x80,*param_1);
              puVar21[0x5017] = puVar6;
              puVar21[0xd] = 0;
              pvVar16 = (void *)AACFindSyncWord_LATM((byte *)puVar6,(int)pvVar25);
              ppvVar23[0x1e] = pvVar16;
              while ((int)pvVar16 < 0) {
                if (pvVar25 != (void *)0x80) goto LAB_00015368;
                FlushAbsBits(0x7f,*param_1);
                pvVar25 = (void *)ShowAbsBits((ushort *)puVar6,0x80,*param_1);
                pvVar16 = (void *)AACFindSyncWord_LATM((byte *)puVar21[0x5017],(int)pvVar25);
                ppvVar23[0x1e] = pvVar16;
              }
              if (pvVar16 != (void *)0x0) {
                FlushAbsBits((int)pvVar16,*param_1);
                pvVar16 = ppvVar23[0x1e];
                local_c8 = pvVar16;
              }
              iVar24 = (int)pvVar16 + 2;
              if ((int)pvVar25 <= iVar24) {
                iVar24 = *param_1;
                puVar21[0xd] = puVar21[0xd] + (int)pvVar16;
                sVar13 = ShowAbsBits((ushort *)((int)puVar21 + (int)pvVar16 + 0x50),0x80,iVar24);
                pvVar25 = (void *)(sVar13 + (int)pvVar16);
                pvVar16 = ppvVar23[0x1e];
                iVar24 = (int)pvVar16 + 2;
                if ((int)pvVar25 <= iVar24) goto LAB_00015368;
              }
              pvVar16 = (void *)(((uint)*(byte *)((int)puVar21 + iVar24 + 0x50) |
                                 (*(byte *)((int)puVar21 + (int)pvVar16 + 0x51) & 0x1f) << 8) + 3);
              ppvVar23[0x1f] = pvVar16;
            }
            else {
LAB_00015720:
              pvVar16 = ppvVar23[0x1f];
            }
          }
          if (pvVar16 == (void *)0x0 || 0x9000 < (int)pvVar16) {
LAB_00015f18:
            FlushAbsBits(1,*param_1);
            pvVar25 = ppvVar23[0x1e];
            puVar21[0x12] = (int)pvVar25 + puVar21[0x12] + 1;
            if (puVar21[0x5018] == 0) {
              return 0xffffffff;
            }
            sVar13 = puVar21[0x5018] + ~(uint)pvVar25;
            puVar21[0x5018] = sVar13;
            if ((int)sVar13 < 1) {
              return 0xfffffffe;
            }
            memcpy(puVar21 + 0x14,(void *)((int)puVar21 + (int)pvVar25 + 0x51U),sVar13);
            return 0xffffffff;
          }
          pvVar18 = ppvVar23[0x1e];
          if ((int)pvVar25 < (int)pvVar18 + (int)pvVar16) {
            sVar13 = ShowAbsBits((ushort *)((int)puVar21 + (int)pvVar18 + 0x50),(size_t)pvVar16,
                                 *param_1);
            if ((int)pvVar16 <= (int)sVar13) {
              pvVar16 = ppvVar23[0x1f];
              pvVar18 = ppvVar23[0x1e];
              goto LAB_00015750;
            }
            goto LAB_00015368;
          }
LAB_00015750:
          puVar21[0xd] = pvVar16;
          puVar21[0x5017] = puVar21[0x5017] + (int)pvVar18;
          ppvVar23[0x1e] = (void *)0x0;
        }
        local_c8 = (void *)((int)pvVar16 - puVar21[0xd]);
LAB_00015f8c:
        if ((bVar31) && (ppvVar23[0x17] == (void *)0x2)) {
          if (*(int *)(param_1[2] + 0x2a8) == 0) {
            return 0xfffffffe;
          }
          puVar21[0xd] = 0;
          *param_3 = 0;
          return 0xffffffff;
        }
        if ((uVar5 | puVar21[0x5014]) == 0) {
          pvVar25 = ppvVar23[0x14];
          if ((int)ppvVar23[0x20] < (int)pvVar25) {
            ppvVar23[0x14] = ppvVar23[0x20];
          }
          else {
            if ((int)pvVar25 < 1) {
              return 0xffffffff;
            }
            ppvVar23[0x20] = pvVar25;
            if (pvVar25 == (void *)0x1) {
              ppvVar23[0x20] = (void *)0x2;
            }
          }
          puVar21[0x5014] = 1;
        }
        else {
          if (uVar5 != 0) {
            ppvVar23[0x20] = (void *)0x6;
            puVar21[0x5014] = 0;
            return 0xffffffff;
          }
        }
        uVar33 = AACGetLastFrameInfo((int)ppvVar23,puVar21);
        uVar7 = puVar21[1];
        uVar5 = uVar7;
        switch(uVar7) {
        case 0:
          return 0xffffffff;
        case 1:
          break;
        case 2:
          break;
        case 3:
          iVar28 = puVar21[5];
          iVar24 = 0;
          if (0 < iVar28) {
            iVar17 = 0;
            psVar14 = param_2;
            psVar19 = param_2;
            do {
              sVar27 = *psVar19;
              iVar22 = (int)psVar19[1] + ((int)sVar27 >> 1);
              if (iVar22 < 0x8000) {
                if (iVar22 + 0x8000 < 0 == SCARRY4(iVar22,0x8000)) {
                  sVar20 = (short)iVar22;
                }
                else {
                  sVar20 = -0x8000;
                }
              }
              else {
                sVar20 = 0x7fff;
              }
              sVar2 = psVar19[2];
              *psVar14 = sVar20;
              uVar5 = ((int)sVar27 >> 1) + (int)sVar2;
              if ((int)uVar5 < 0x8000) {
                if ((int)(uVar5 + 0x8000) < 0 == SCARRY4(uVar5,0x8000)) {
                  uVar5 = uVar5 & 0xffff;
                }
                else {
                  uVar5 = 0x8000;
                }
              }
              else {
                uVar5 = 0x7fff;
              }
              iVar17 = iVar17 + 3;
              psVar14[1] = (short)uVar5;
              iVar24 = iVar24 + 2;
              psVar19 = psVar19 + 3;
              psVar14 = psVar14 + 2;
            } while (iVar17 < iVar28);
            puVar21[5] = iVar24;
            break;
          }
          goto LAB_000160e4;
        case 4:
          if (0 < (int)puVar21[5]) {
            uVar5 = puVar21[5] - 1;
            psVar14 = param_2;
            psVar19 = param_2;
            do {
              iVar24 = (int)*psVar19 + (int)psVar19[3] >> 1;
              iVar28 = psVar19[1] + iVar24;
              if (iVar28 < 0x8000) {
                if (iVar28 + 0x8000 < 0 == SCARRY4(iVar28,0x8000)) {
                  sVar27 = (short)iVar28;
                }
                else {
                  sVar27 = -0x8000;
                }
              }
              else {
                sVar27 = 0x7fff;
              }
              sVar20 = psVar19[2];
              *psVar14 = sVar27;
              iVar24 = iVar24 + sVar20;
              if (iVar24 < 0x8000) {
                if (iVar24 + 0x8000 < 0 == SCARRY4(iVar24,0x8000)) {
                  sVar27 = (short)iVar24;
                }
                else {
                  sVar27 = -0x8000;
                }
              }
              else {
                sVar27 = 0x7fff;
              }
              psVar19 = psVar19 + 4;
              psVar14[1] = sVar27;
              psVar14 = psVar14 + 2;
            } while (psVar19 != param_2 + (uVar5 & 0xfffffffc) + 4);
            puVar21[5] = ((uVar5 >> 2) + 1) * 2;
            uVar5 = (int)sVar20;
            break;
          }
          goto LAB_00016868;
        case 5:
          iVar24 = puVar21[5];
          iVar28 = 0;
          if (0 < iVar24) {
            iVar17 = 0;
            psVar14 = param_2;
            psVar19 = param_2;
            do {
              sVar27 = *psVar19;
              iVar22 = (int)psVar19[1] + ((int)sVar27 >> 1) + (int)psVar19[3];
              if (iVar22 < 0x8000) {
                if (iVar22 + 0x8000 < 0 == SCARRY4(iVar22,0x8000)) {
                  sVar20 = (short)iVar22;
                }
                else {
                  sVar20 = -0x8000;
                }
              }
              else {
                sVar20 = 0x7fff;
              }
              sVar2 = psVar19[2];
              sVar3 = psVar19[4];
              *psVar14 = sVar20;
              uVar5 = ((int)sVar27 >> 1) + (int)sVar2 + (int)sVar3;
              if ((int)uVar5 < 0x8000) {
                if ((int)(uVar5 + 0x8000) < 0 == SCARRY4(uVar5,0x8000)) {
                  uVar5 = uVar5 & 0xffff;
                }
                else {
                  uVar5 = 0x8000;
                }
              }
              else {
                uVar5 = 0x7fff;
              }
              iVar17 = iVar17 + 5;
              psVar14[1] = (short)uVar5;
              iVar28 = iVar28 + 2;
              psVar19 = psVar19 + 5;
              psVar14 = psVar14 + 2;
            } while (iVar17 < iVar24);
          }
          goto LAB_0001639c;
        case 6:
          iVar24 = puVar21[5];
          iVar28 = 0;
          if (0 < iVar24) {
            iVar17 = 0;
            psVar14 = param_2;
            psVar19 = param_2;
            do {
              iVar22 = (int)*psVar19 + (int)psVar19[5] >> 1;
              iVar30 = psVar19[1] + iVar22 + (int)psVar19[3];
              if (iVar30 < 0x8000) {
                if (iVar30 + 0x8000 < 0 == SCARRY4(iVar30,0x8000)) {
                  sVar27 = (short)iVar30;
                }
                else {
                  sVar27 = -0x8000;
                }
              }
              else {
                sVar27 = 0x7fff;
              }
              sVar20 = psVar19[2];
              sVar2 = psVar19[4];
              *psVar14 = sVar27;
              uVar5 = iVar22 + sVar20 + (int)sVar2;
              if ((int)uVar5 < 0x8000) {
                if ((int)(uVar5 + 0x8000) < 0 == SCARRY4(uVar5,0x8000)) {
                  uVar5 = uVar5 & 0xffff;
                }
                else {
                  uVar5 = 0x8000;
                }
              }
              else {
                uVar5 = 0x7fff;
              }
              iVar17 = iVar17 + 6;
              psVar14[1] = (short)uVar5;
              iVar28 = iVar28 + 2;
              psVar19 = psVar19 + 6;
              psVar14 = psVar14 + 2;
            } while (iVar17 < iVar24);
          }
LAB_0001639c:
          puVar21[5] = iVar28;
          break;
        case 7:
        default:
          iVar28 = puVar21[5];
          iVar24 = 0;
          if (0 < iVar28) {
            iVar17 = 0;
            psVar14 = param_2;
            psVar19 = param_2;
            do {
              sVar27 = *psVar19;
              iVar22 = (int)psVar19[1] + ((int)sVar27 >> 1);
              if (iVar22 < 0x8000) {
                if (iVar22 + 0x8000 < 0 == SCARRY4(iVar22,0x8000)) {
                  sVar20 = (short)iVar22;
                }
                else {
                  sVar20 = -0x8000;
                }
              }
              else {
                sVar20 = 0x7fff;
              }
              sVar2 = psVar19[2];
              *psVar14 = sVar20;
              uVar5 = ((int)sVar27 >> 1) + (int)sVar2;
              if ((int)uVar5 < 0x8000) {
                if ((int)(uVar5 + 0x8000) < 0 == SCARRY4(uVar5,0x8000)) {
                  uVar5 = uVar5 & 0xffff;
                }
                else {
                  uVar5 = 0x8000;
                }
              }
              else {
                uVar5 = 0x7fff;
              }
              iVar17 = iVar17 + uVar7;
              psVar14[1] = (short)uVar5;
              iVar24 = iVar24 + 2;
              psVar19 = psVar19 + uVar7;
              psVar14 = psVar14 + 2;
            } while (iVar17 < iVar28);
          }
LAB_000160e4:
          puVar21[5] = iVar24;
          break;
        case 8:
          if (0 < (int)puVar21[5]) {
            uVar9 = puVar21[5] - 1;
            uVar5 = uVar9 >> 3;
            psVar14 = param_2;
            psVar19 = param_2;
            do {
              iVar24 = (int)*psVar19 + (int)psVar19[7] >> 1;
              iVar28 = psVar19[1] + iVar24 + (int)psVar19[3] + (int)psVar19[5];
              if (iVar28 < 0x8000) {
                if (iVar28 + 0x8000 < 0 == SCARRY4(iVar28,0x8000)) {
                  sVar27 = (short)iVar28;
                }
                else {
                  sVar27 = -0x8000;
                }
              }
              else {
                sVar27 = 0x7fff;
              }
              sVar20 = psVar19[2];
              sVar2 = psVar19[4];
              sVar3 = psVar19[6];
              *psVar14 = sVar27;
              iVar24 = iVar24 + sVar20 + (int)sVar2 + (int)sVar3;
              if (iVar24 < 0x8000) {
                if (iVar24 + 0x8000 < 0 == SCARRY4(iVar24,0x8000)) {
                  sVar27 = (short)iVar24;
                }
                else {
                  sVar27 = -0x8000;
                }
              }
              else {
                sVar27 = 0x7fff;
              }
              psVar19 = psVar19 + 8;
              psVar14[1] = sVar27;
              psVar14 = psVar14 + 2;
            } while (psVar19 != param_2 + (uVar9 & 0xfffffff8) + 8);
            puVar21[5] = (uVar5 + 1) * 2;
            break;
          }
LAB_00016868:
          puVar21[5] = 0;
        }
        iVar24 = param_1[1];
        uVar29 = *puVar21;
        if (puVar21[3] != 0) {
          *(undefined4 *)(iVar24 + 8) = puVar21[3];
        }
        iVar28 = puVar21[2];
        if ((int)uVar7 < 2) {
          uVar5 = 1;
        }
        iVar17 = puVar21[0x12];
        if (1 < (int)uVar7) {
          uVar5 = 2;
        }
        *(uint *)(iVar24 + 0x10) = uVar5;
        *(undefined4 *)(iVar24 + 0xc) = uVar29;
        puVar21[0xb] = uVar7;
        puVar21[0x12] = iVar17 + (int)local_c8;
        if (iVar28 != 0) {
          lVar4 = (longlong)*(int *)(iVar24 + 0x1c) * 0xfa000;
          uVar33 = __aeabi_ldivmod(uVar33,(int)lVar4,(int)((ulonglong)lVar4 >> 0x20),iVar28,
                                   iVar28 >> 0x1f);
          *(undefined4 *)(iVar24 + 4) = uVar33;
        }
        *param_3 = puVar21[5] << 1;
        iVar28 = *(int *)(iVar24 + 8);
        iVar17 = puVar21[0x5015];
        coprocessor_function(0xb,6,4,in_cr1,in_cr1,in_cr0);
        coprocessor_function(0xb,6,5,in_cr1,in_cr1,in_cr0);
        dVar34 = 1024.0;
        if (ppvVar23[0x18] != (void *)0x0) {
          dVar34 = 2048.0;
        }
        *(int *)(iVar24 + 0xc) = SUB84(ROUND((double)(longlong)(int)ppvVar23[0x1f] / dVar34),0);
        if (iVar17 != 0) {
          memcpy(puVar21 + 0x4814,param_2,*param_3);
          memset(param_2,0,*param_3);
          iVar24 = param_1[1];
          iVar28 = *(int *)(iVar24 + 8);
          puVar21[0x5016] = *param_3;
        }
        if (iVar28 < 0xbb81) {
          return uVar10;
        }
        sVar13 = *param_3;
        if (0 < (int)sVar13 >> 2) {
          iVar17 = 0;
          psVar14 = param_2;
          do {
            psVar19 = (short *)((int)param_2 + iVar17);
            iVar17 = iVar17 + 4;
            psVar15 = psVar14 + 1;
            *psVar14 = *psVar19;
            psVar14 = psVar15;
          } while (psVar15 != param_2 + ((int)sVar13 >> 2));
        }
        *(int *)(iVar24 + 8) = iVar28 >> 1;
        *param_3 = (int)*param_3 >> 1;
        return uVar10;
      }
      iVar24 = puVar21[2];
      puVar21[0x5018] = 0;
      if (iVar24 != 0) {
        iVar28 = param_1[1];
        lVar4 = (longlong)*(int *)(iVar28 + 0x1c) * 0xfa000;
        uVar33 = __aeabi_ldivmod((int)lVar4,(int)((ulonglong)lVar4 >> 0x20),iVar24,iVar24 >> 0x1f);
        *(undefined4 *)(iVar28 + 4) = uVar33;
      }
    }
  }
  return uVar10;
}



undefined4 AudioAACAACDecExit(int param_1)

{
  void **ppvVar1;
  void *__ptr;
  
  __ptr = **(void ***)(param_1 + 8);
  if (*(void ***)((int)__ptr + 0x24) != (void **)0x0) {
    AACFreeDecoder(*(void ***)((int)__ptr + 0x24));
    ppvVar1 = *(void ***)(param_1 + 8);
    *(undefined4 *)((int)__ptr + 0x24) = 0;
    __ptr = *ppvVar1;
  }
  if (__ptr != (void *)0x0) {
    free(__ptr);
    **(undefined4 **)(param_1 + 8) = 0;
  }
  return 0;
}



undefined4 AudioAACAACDecInit(int param_1)

{
  void *__s;
  void **ppvVar1;
  
  __s = malloc(0x14064);
  if (__s != (void *)0x0) {
    memset(__s,0,0x14064);
    ppvVar1 = *(void ***)(param_1 + 8);
    ppvVar1[1] = (void *)((int)__s + 0x38);
    *ppvVar1 = __s;
    *(undefined2 *)(ppvVar1 + 0xd) = 0x18;
    *(undefined4 *)((int)__s + 0x2c) = 2;
    *(undefined4 *)((int)__s + 0x28) = 1;
    return 0;
  }
  return 0xffffffff;
}



void FUN_00016938(undefined4 *param_1)

{
  ss_xxxx(ss_ssss,param_1);
  return;
}



undefined4 * AudioAACDecInit(void)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  undefined *apuStack40 [4];
  undefined *puStack24;
  undefined4 uStack20;
  
  puVar1 = (undefined4 *)malloc(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    apuStack40[0] = PTR_AudioAACDecInit_00042098;
    apuStack40[1] = PTR_FUN_0004209c;
    apuStack40[2] = PTR_FREAD_AC320_000420a0;
    apuStack40[3] = (undefined *)DAT_000420a4;
    puVar1[4] = AudioAACAACDecInit;
    puStack24 = PTR_AudioAACAACframeDec_000420a8;
    uStack20 = DAT_000420ac;
    FUN_00016938(&local_38);
    puVar1[6] = AudioAACAACDecExit;
    puVar2 = apuStack40[((local_2c + local_38 + local_30) - local_34) - (local_2c ^ 0x72613c1e)];
    puVar1[7] = &LAB_00015160;
    puVar1[5] = puVar2;
  }
  return puVar1;
}



undefined4 AudioAACDecExit(void *param_1)

{
  free(param_1);
  return 0;
}



int AACFindSyncWord_before(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = param_2 + -2;
  if (0 < iVar2) {
    pbVar1 = (byte *)(param_1 + param_2 + -1);
    do {
      if ((pbVar1[-1] == 0xff) && ((*pbVar1 & 0xf0) == 0xf0)) {
        return iVar2;
      }
      iVar2 = iVar2 + -1;
      pbVar1 = pbVar1 + -1;
    } while (iVar2 != 0);
  }
  return -1;
}



int AACFindSyncWord_before_LATM(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = param_2 + -2;
  if (0 < iVar2) {
    pbVar1 = (byte *)(param_1 + param_2 + -1);
    do {
      if ((pbVar1[-1] == 0x56) && ((*pbVar1 & 0xe0) == 0xe0)) {
        return iVar2;
      }
      iVar2 = iVar2 + -1;
      pbVar1 = pbVar1 + -1;
    } while (iVar2 != 0);
  }
  return -1;
}



undefined4 GetBeforeFrame(int *param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  size_t sVar10;
  int iVar11;
  
  iVar6 = *(int *)param_1[2];
  puVar7 = (ushort *)(iVar6 + 0x50);
  iVar11 = *(int *)(iVar6 + 0x1405c);
  iVar8 = *(int *)(iVar6 + 0x24);
  if (iVar11 - (int)puVar7 < 9) {
    iVar5 = *param_1;
    iVar9 = (int)puVar7 + (-*(int *)(iVar6 + 0x34) - iVar11);
    if (*(uint *)(iVar5 + 4) < (iVar11 - (int)puVar7) + *(int *)(iVar6 + 0x34) + 0x800U) {
      sVar10 = iVar9 + *(uint *)(iVar5 + 4);
      if ((int)sVar10 < 1) {
        return 0xfffffffe;
      }
      FSeek_AC320_Origin(0,iVar5,0);
      FREAD_AC320(puVar7,sVar10,*param_1);
      iVar5 = 0;
      iVar11 = iVar6 + sVar10 + 0x50;
      *(undefined4 *)(iVar6 + 0x34) = 0;
      *(int *)(iVar6 + 0x1405c) = iVar11;
      iVar9 = *(int *)(iVar8 + 0x5c);
    }
    else {
      FSeek_AC320_Origin(iVar9 + -0x800,iVar5,1);
      FREAD_AC320(puVar7,0x800,*param_1);
      iVar5 = 0;
      iVar9 = *(int *)(iVar8 + 0x5c);
      iVar11 = iVar6 + 0x850;
      *(undefined4 *)(iVar6 + 0x34) = 0;
      *(int *)(iVar6 + 0x1405c) = iVar11;
    }
  }
  else {
    iVar11 = iVar11 + -7;
    iVar9 = *(int *)(iVar8 + 0x5c);
    iVar5 = *(int *)(iVar6 + 0x34) + 7;
    *(int *)(iVar6 + 0x1405c) = iVar11;
    *(int *)(iVar6 + 0x34) = iVar5;
  }
joined_r0x00016b38:
  do {
    if (iVar9 == 1) {
LAB_00016bac:
      iVar1 = iVar11 - (int)puVar7;
      do {
        iVar4 = iVar1 + -2;
        if (iVar4 < 1) {
LAB_00016c60:
          iVar9 = *param_1;
          if (iVar1 + iVar5 + 0x800U <= *(uint *)(iVar9 + 4)) goto LAB_00016d38;
          sVar10 = (int)puVar7 + *(uint *)(iVar9 + 4) + (-iVar5 - iVar11);
          if ((int)sVar10 < 1) {
            return 0xfffffffe;
          }
          goto LAB_00016cc0;
        }
        pbVar2 = (byte *)(iVar6 + iVar1 + 0x4f);
        while ((pbVar2[-1] != 0xff || ((*pbVar2 & 0xf0) != 0xf0))) {
          iVar4 = iVar4 + -1;
          pbVar2 = pbVar2 + -1;
          if (iVar4 == 0) goto LAB_00016c60;
        }
        iVar3 = *(int *)(iVar8 + 0x84);
        iVar5 = iVar5 + (iVar1 - iVar4);
        iVar11 = iVar6 + iVar4 + 0x50;
        *(int *)(iVar6 + 0x34) = iVar5;
        *(int *)(iVar6 + 0x1405c) = iVar11;
        if (iVar3 < 4) {
          if (((*(byte *)(iVar6 + iVar4 + 0x51) & 6) == 0) &&
             (((uint)*(byte *)(iVar6 + iVar4 + 0x52) << 0x1a) >> 0x1c < 0xc))
          goto joined_r0x00016d1c;
          goto LAB_00016bac;
        }
        iVar1 = iVar6 + iVar4;
        if ((*(char *)(iVar8 + 0x10a5) != *(char *)(iVar1 + 0x51)) ||
           (*(char *)(iVar8 + 0x10a6) != *(char *)(iVar1 + 0x52))) goto LAB_00016bac;
        if (((*(byte *)(iVar1 + 0x53) ^ *(byte *)(iVar8 + 0x10a7)) & 0xf0) == 0)
        goto joined_r0x00016d1c;
        iVar1 = iVar11 - (int)puVar7;
      } while( true );
    }
    iVar1 = iVar11 - (int)puVar7;
    iVar4 = iVar1 + -2;
    if (iVar4 < 1) {
LAB_00016c94:
      iVar9 = *param_1;
      if (*(uint *)(iVar9 + 4) < iVar5 + iVar1 + 0x800U) {
        sVar10 = (int)puVar7 + *(uint *)(iVar9 + 4) + (-iVar5 - iVar11);
        if ((int)sVar10 < 1) {
          return 0xfffffffe;
        }
LAB_00016cc0:
        FSeek_AC320_Origin(0,iVar9,0);
        FREAD_AC320(puVar7,sVar10,*param_1);
        iVar5 = 0;
        iVar11 = iVar6 + sVar10 + 0x50;
        *(undefined4 *)(iVar6 + 0x34) = 0;
        *(int *)(iVar6 + 0x1405c) = iVar11;
        iVar9 = *(int *)(iVar8 + 0x5c);
      }
      else {
LAB_00016d38:
        FSeek_AC320_Origin((int)puVar7 + (-iVar5 - iVar11) + -0x800,iVar9,1);
        FREAD_AC320(puVar7,0x800,*param_1);
        iVar5 = 0;
        iVar11 = iVar6 + 0x850;
        *(undefined4 *)(iVar6 + 0x34) = 0;
        *(int *)(iVar6 + 0x1405c) = iVar11;
        iVar9 = *(int *)(iVar8 + 0x5c);
      }
      goto joined_r0x00016b38;
    }
    pbVar2 = (byte *)(iVar6 + iVar1 + 0x4f);
    while ((pbVar2[-1] != 0x56 || ((*pbVar2 & 0xe0) != 0xe0))) {
      iVar4 = iVar4 + -1;
      pbVar2 = pbVar2 + -1;
      if (iVar4 == 0) goto LAB_00016c94;
    }
    iVar5 = iVar5 + (iVar1 - iVar4);
    *(int *)(iVar6 + 0x34) = iVar5;
    *(int *)(iVar6 + 0x1405c) = iVar6 + iVar4 + 0x50;
joined_r0x00016d1c:
    if (iVar4 != -1) {
      *(int *)(iVar6 + 0x48) = *(int *)(*param_1 + 4) - iVar5;
      return 0;
    }
    iVar11 = *(int *)(iVar6 + 0x1405c);
  } while( true );
}



uint GetNextFrame(int *param_1)

{
  byte bVar1;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  size_t sVar11;
  int iVar12;
  int iVar13;
  
  iVar6 = *(int *)param_1[2];
  sVar11 = *(size_t *)(iVar6 + 0x34);
  iVar9 = *(int *)(iVar6 + 0x24);
  if (((int)sVar11 < 0x1000) && (*(int *)(iVar6 + 0x30) == 0)) {
    pbVar7 = (byte *)(iVar6 + 0x50);
    sVar2 = FUN_00015198(param_1,pbVar7,*(void **)(iVar6 + 0x1405c),sVar11 + 0x1000,sVar11);
    *(byte **)(iVar6 + 0x1405c) = pbVar7;
    sVar11 = sVar2 + *(int *)(iVar6 + 0x34);
    *(size_t *)(iVar6 + 0x34) = sVar11;
    if (sVar2 == 0) {
      return 0xffffffff;
    }
    if (sVar2 != 0x1000) {
      *(undefined4 *)(iVar6 + 0x30) = 1;
    }
  }
  else {
    pbVar7 = *(byte **)(iVar6 + 0x1405c);
  }
  uVar10 = *(uint *)(iVar9 + 0x5c);
  if (uVar10 == 1) {
    iVar4 = AACFindSyncWord(pbVar7,sVar11);
    if (-1 < iVar4) {
      iVar12 = *(int *)(iVar6 + 0x1405c) + iVar4;
      *(int *)(iVar6 + 0x1405c) = iVar12;
      iVar5 = *(int *)(iVar6 + 0x34) - iVar4;
      iVar4 = iVar4 + *(int *)(iVar6 + 0x48);
      *(int *)(iVar6 + 0x34) = iVar5;
      *(int *)(iVar6 + 0x48) = iVar4;
      uVar3 = (uint)(*(byte *)(iVar12 + 5) >> 5) | (*(byte *)(iVar12 + 3) & 3) << 0xb |
              (uint)*(byte *)(iVar12 + 4) << 3;
      if ((0x1000 < uVar3) || (iVar5 < (int)uVar3)) {
        uVar3 = uVar10;
      }
      pbVar7 = (byte *)(iVar12 + uVar3);
      sVar11 = iVar5 - uVar3;
      pbVar8 = (byte *)(iVar6 + 0x50);
      *(byte **)(iVar6 + 0x1405c) = pbVar7;
      *(size_t *)(iVar6 + 0x34) = sVar11;
      *(uint *)(iVar6 + 0x48) = iVar4 + uVar3;
      while( true ) {
        if (((int)sVar11 < 0x1000) && (*(int *)(iVar6 + 0x30) == 0)) {
          sVar2 = FUN_00015198(param_1,pbVar8,pbVar7,sVar11 + 0x1000,sVar11);
          *(byte **)(iVar6 + 0x1405c) = pbVar8;
          sVar11 = sVar2 + *(int *)(iVar6 + 0x34);
          *(size_t *)(iVar6 + 0x34) = sVar11;
          if (sVar2 == 0) {
            return 0xffffffff;
          }
          pbVar7 = pbVar8;
          if (sVar2 != 0x1000) {
            *(undefined4 *)(iVar6 + 0x30) = 1;
          }
        }
        iVar4 = AACFindSyncWord(pbVar7,sVar11);
        if (iVar4 < 0) break;
        iVar12 = *(int *)(iVar9 + 0x84);
        iVar5 = *(int *)(iVar6 + 0x1405c) + iVar4;
        iVar13 = *(int *)(iVar6 + 0x34) - iVar4;
        *(int *)(iVar6 + 0x1405c) = iVar5;
        *(int *)(iVar6 + 0x34) = iVar13;
        *(int *)(iVar6 + 0x48) = *(int *)(iVar6 + 0x48) + iVar4;
        if (iVar12 < 4) {
          if ((((uint)*(byte *)(iVar5 + 1) << 0x1d) >> 0x1e == 0) &&
             (((uint)*(byte *)(iVar5 + 2) << 0x1a) >> 0x1c < 0xc)) {
            return 0;
          }
        }
        else {
          if (((*(char *)(iVar9 + 0x10a5) == *(char *)(iVar5 + 1)) &&
              (*(char *)(iVar9 + 0x10a6) == *(char *)(iVar5 + 2))) &&
             (bVar1 = *(byte *)(iVar5 + 3) ^ *(byte *)(iVar9 + 0x10a7), (bVar1 & 0xf0) == 0)) {
            return bVar1 & 0xf0;
          }
        }
        sVar11 = iVar13 - 1;
        pbVar7 = (byte *)(iVar5 + 1);
        *(size_t *)(iVar6 + 0x34) = sVar11;
        *(byte **)(iVar6 + 0x1405c) = pbVar7;
      }
      return 0xffffffff;
    }
  }
  else {
    iVar9 = AACFindSyncWord_LATM(pbVar7,sVar11);
    if (-1 < iVar9) {
      iVar12 = *(int *)(iVar6 + 0x34) - iVar9;
      iVar4 = *(int *)(iVar6 + 0x1405c) + iVar9;
      *(int *)(iVar6 + 0x34) = iVar12;
      *(int *)(iVar6 + 0x1405c) = iVar4;
      iVar9 = iVar9 + *(int *)(iVar6 + 0x48);
      *(int *)(iVar6 + 0x48) = iVar9;
      uVar10 = (uint)*(byte *)(iVar4 + 2) | (*(byte *)(iVar4 + 1) & 0x1f) << 8;
      if ((uVar10 < 0x1001) && ((int)uVar10 <= iVar12)) {
        iVar5 = uVar10 + 3;
      }
      else {
        iVar5 = 3;
      }
      sVar11 = iVar12 - iVar5;
      pbVar7 = (byte *)(iVar4 + iVar5);
      *(byte **)(iVar6 + 0x1405c) = pbVar7;
      *(size_t *)(iVar6 + 0x34) = sVar11;
      *(int *)(iVar6 + 0x48) = iVar5 + iVar9;
      if (((int)sVar11 < 0x1000) && (*(int *)(iVar6 + 0x30) == 0)) {
        pbVar8 = (byte *)(iVar6 + 0x50);
        sVar11 = FUN_00015198(param_1,pbVar8,pbVar7,sVar11 + 0x1000,sVar11);
        *(byte **)(iVar6 + 0x1405c) = pbVar8;
        iVar9 = sVar11 + *(int *)(iVar6 + 0x34);
        *(int *)(iVar6 + 0x34) = iVar9;
        if (sVar11 == 0) {
          return 0xffffffff;
        }
        if (sVar11 != 0x1000) {
          *(undefined4 *)(iVar6 + 0x30) = 1;
        }
        iVar9 = AACFindSyncWord_LATM(pbVar8,iVar9);
      }
      else {
        iVar9 = AACFindSyncWord_LATM(pbVar7,sVar11);
      }
      if (-1 < iVar9) {
        *(int *)(iVar6 + 0x34) = *(int *)(iVar6 + 0x34) - iVar9;
        *(int *)(iVar6 + 0x1405c) = *(int *)(iVar6 + 0x1405c) + iVar9;
        *(int *)(iVar6 + 0x48) = *(int *)(iVar6 + 0x48) + iVar9;
        return 0;
      }
    }
  }
  return 0xffffffff;
}



uint AudioAACfuntion(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  bool bVar10;
  
  piVar4 = (int *)param_1[2];
  iVar6 = *piVar4;
  if (*(char *)((int)piVar4 + 0x37) == '\x02') {
    uVar9 = *(undefined4 *)(iVar6 + 0x4c);
    iVar3 = *(int *)(iVar6 + 0x40);
    *(undefined4 *)(param_1[1] + 0x1c) = *(undefined4 *)(iVar6 + 0x44);
    iVar7 = *param_1;
    *(undefined4 *)(iVar6 + 0x2c) = uVar9;
    FSeek_AC320_Origin(iVar3,iVar7,0);
    iVar3 = param_1[2];
    *(undefined4 *)(iVar6 + 0x34) = 0;
    *(undefined4 *)(iVar6 + 0x48) = *(undefined4 *)(iVar6 + 0x40);
    uVar1 = 3;
    *(undefined4 *)(iVar6 + 0x14060) = 0;
    *(undefined *)(iVar3 + 0x37) = 0;
    *(undefined4 *)(iVar6 + 0x30) = 0;
    piVar4 = (int *)param_1[2];
  }
  else {
    uVar1 = 0;
  }
  iVar3 = param_1[1];
  uVar2 = uVar1;
  if (*(int *)(iVar3 + 0x28) != 0) {
    uVar2 = (uint)*(byte *)(piVar4 + 0x19);
    if (uVar2 == 0x66) {
      iVar7 = param_2 * piVar4[0x18];
      iVar8 = 0;
      iVar5 = *(int *)(iVar3 + 0x1c);
      *(undefined4 *)(iVar6 + 0x30) = 0;
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0x3ff;
      }
      iVar7 = iVar7 >> 10;
      if (iVar5 <= iVar7) {
        return 0xfffffffe;
      }
      if (0 < iVar7) {
        do {
          iVar8 = iVar8 + 1;
          iVar3 = GetBeforeFrame(param_1);
          if (iVar3 < 0) {
            return 0xfffffffe;
          }
        } while (iVar8 != iVar7);
        iVar3 = param_1[1];
        piVar4 = (int *)param_1[2];
      }
      uVar2 = 1;
      *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) - iVar7;
    }
    else {
      if ((uVar2 != 0x88) && (bVar10 = uVar2 == 0x44, uVar2 = uVar1, bVar10)) {
        iVar7 = param_2 * piVar4[0x18];
        if (iVar7 < 0) {
          iVar7 = iVar7 + 0x3ff;
        }
        iVar7 = iVar7 >> 10;
        if (0 < iVar7) {
          iVar3 = 0;
          do {
            iVar3 = iVar3 + 1;
            uVar1 = GetNextFrame(param_1);
            if ((int)uVar1 < 0) {
              return 0xfffffffe;
            }
          } while (iVar3 != iVar7);
          iVar3 = param_1[1];
          piVar4 = (int *)param_1[2];
        }
        uVar2 = 1;
        *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + iVar7;
      }
    }
  }
  if (*(char *)((int)piVar4 + 0x65) == '\x12') {
    iVar7 = *(int *)(*param_1 + 4);
    *(undefined4 *)(iVar6 + 0x3c) = *(undefined4 *)(iVar3 + 0x1c);
    *(int *)(iVar6 + 0x38) = iVar7 - *(int *)(iVar6 + 0x34);
    *(undefined *)((int)piVar4 + 0x65) = 0;
    iVar7 = *(int *)(iVar6 + 0x34);
    iVar3 = param_1[1];
  }
  else {
    if (*(char *)((int)piVar4 + 0x65) == 'B') {
      iVar8 = *(int *)(iVar6 + 0x38);
      iVar7 = 0;
      iVar3 = *param_1;
      *(undefined4 *)(iVar6 + 0x30) = 0;
      FSeek_AC320_Origin(iVar8,iVar3,0);
      iVar3 = param_1[1];
      iVar5 = param_1[2];
      *(int *)(iVar6 + 0x48) = iVar8;
      uVar2 = 2;
      *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar6 + 0x3c);
      *(undefined *)(iVar5 + 0x65) = 0;
      iVar3 = param_1[1];
      *(undefined4 *)(iVar6 + 0x14060) = 0;
      *(undefined4 *)(iVar6 + 0x34) = 0;
    }
    else {
      iVar7 = *(int *)(iVar6 + 0x34);
    }
  }
  iVar5 = *(int *)(*param_1 + 4);
  *(undefined4 *)(iVar6 + 0x44) = *(undefined4 *)(iVar3 + 0x1c);
  *(undefined4 *)(iVar6 + 0x4c) = *(undefined4 *)(iVar6 + 0x2c);
  *(int *)(iVar6 + 0x40) = iVar5 - iVar7;
  return uVar2;
}



uint FUN_000173f8(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *apbStack44 [5];
  
  uVar4 = *(uint *)(param_1 + 0x90);
  raac_SetBitstreamPointer(apbStack44,param_4 + 7 >> 3,param_2);
  raac_GetBits(apbStack44,param_3);
  if ((int)(*(int *)(param_1 + 0x90) + param_5) < 0x8001) {
    uVar4 = uVar4 & 7;
    if (uVar4 != 0) {
      uVar4 = 8 - uVar4;
      iVar6 = *(int *)(param_1 + 0x90) >> 3;
      if ((int)param_5 <= (int)uVar4) {
        iVar6 = param_1 + iVar6;
        bVar1 = *(byte *)(iVar6 + 0xa4);
        uVar2 = raac_GetBits(apbStack44,param_5);
        *(byte *)(iVar6 + 0xa4) = bVar1 | (byte)((uVar2 & 0xff) << (uVar4 - param_5 & 0xff));
        return 0;
      }
      iVar6 = param_1 + iVar6;
      param_5 = param_5 - uVar4;
      bVar1 = *(byte *)(iVar6 + 0xa4);
      uVar4 = raac_GetBits(apbStack44,uVar4);
      *(byte *)(iVar6 + 0xa4) = bVar1 | (byte)uVar4;
    }
    iVar6 = 0;
    uVar4 = param_5 & 7;
    if (0 < (int)param_5 >> 3) {
      do {
        iVar5 = iVar6 + (*(int *)(param_1 + 0x90) + 7 >> 3);
        uVar2 = raac_GetBits(apbStack44,8);
        iVar6 = iVar6 + 1;
        *(char *)(param_1 + iVar5 + 0xa4) = (char)uVar2;
      } while (iVar6 != (int)param_5 >> 3);
    }
    if (uVar4 != 0) {
      iVar5 = *(int *)(param_1 + 0x90);
      uVar2 = raac_GetBits(apbStack44,uVar4);
      uVar3 = 8 - uVar4;
      uVar4 = 0;
      *(char *)(param_1 + iVar6 + (iVar5 + 7 >> 3) + 0xa4) = (char)(uVar2 << (uVar3 & 0xff));
    }
  }
  else {
    uVar4 = 0xffffffe7;
  }
  return uVar4;
}



void ** AACResetDecoder(void **param_1)

{
  if (param_1 == (void **)0x0) {
    return (void **)0x0;
  }
  param_1[0x12] = (void *)0x0;
  if (*param_1 == (void *)0x0) {
    return (void **)0x0;
  }
  memset(*param_1,0,0xb060);
  if (param_1[0x1c] == (void *)0x0) {
    return (void **)0x0;
  }
  if (param_1[0x1d] != (void *)0x0) {
    raac_ResetSBR((int)param_1);
    return param_1;
  }
  return param_1;
}



void AACFreeDecoder(void **param_1)

{
  if (param_1 == (void **)0x0) {
    return;
  }
  if (param_1[0x1c] != (void *)0x0) {
    latm_exit(param_1[0x1c]);
    param_1[0x1c] = (void *)0x0;
  }
  if (param_1[0x1d] != (void *)0x0) {
    raac_FreeSBR((int)param_1);
  }
  raac_FreeBuffers(param_1);
  return;
}



void ** AACInitDecoder(void *param_1)

{
  void **ppvVar1;
  void **ppvVar2;
  int iVar3;
  
  ppvVar1 = raac_AllocateBuffers();
  ppvVar2 = ppvVar1;
  if (ppvVar1 != (void **)0x0) {
    ppvVar2 = (void **)latm_init();
    ppvVar1[0x1c] = ppvVar2;
    if (ppvVar2 != (void **)0x0) {
      ppvVar1[0x1d] = param_1;
      ppvVar1[0x20] = (void *)0x6;
      ppvVar2 = ppvVar1;
      if ((param_1 != (void *)0x0) && (iVar3 = raac_InitSBR((int)ppvVar1), iVar3 != 0)) {
        ppvVar2 = (void **)0x0;
        AACFreeDecoder(ppvVar1);
      }
    }
  }
  return ppvVar2;
}



int AACFindSyncWord(byte *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar2 = param_2 + -1;
  if (iVar2 < 1) {
    return -1;
  }
  iVar1 = 0;
  do {
    while (pbVar3 = param_1 + 1, *param_1 != 0xff) {
      iVar1 = iVar1 + 1;
      param_1 = pbVar3;
      if (iVar2 <= iVar1) {
        return -1;
      }
    }
    if ((*pbVar3 & 0xf0) == 0xf0) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    param_1 = pbVar3;
  } while (iVar1 < iVar2);
  return -1;
}



int AACFindSyncWord_LATM(byte *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar2 = param_2 + -1;
  if (iVar2 < 1) {
    return -1;
  }
  iVar1 = 0;
  do {
    while (pbVar3 = param_1 + 1, *param_1 != 0x56) {
      iVar1 = iVar1 + 1;
      param_1 = pbVar3;
      if (iVar2 <= iVar1) {
        return -1;
      }
    }
    if ((*pbVar3 & 0xe0) == 0xe0) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    param_1 = pbVar3;
  } while (iVar1 < iVar2);
  return -1;
}



void AACGetLastFrameInfo(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (param_1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x60);
    iVar4 = *(int *)(param_1 + 0x50);
    iVar3 = *(int *)(param_1 + 0x54);
    *param_2 = *(undefined4 *)(param_1 + 0x4c);
    param_2[1] = iVar4;
    param_2[2] = iVar3;
    if (iVar2 == 0) {
      iVar2 = 1;
      param_2[3] = iVar3;
      param_2[4] = 0x10;
    }
    else {
      iVar2 = 2;
      param_2[3] = iVar3 << 1;
      param_2[4] = 0x10;
    }
    uVar5 = *(undefined4 *)(param_1 + 100);
    uVar1 = *(undefined4 *)(param_1 + 0x68);
    param_2[6] = *(undefined4 *)(param_1 + 0x58);
    param_2[7] = uVar5;
    param_2[5] = iVar2 * iVar4 * 0x400;
    param_2[8] = uVar1;
  }
  return;
}



void AACSetRawBlockParams(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    param_1[0x17] = 3;
    if (param_2 == 0) {
      iVar3 = *(int *)(param_3 + 4);
      iVar2 = *(int *)(param_3 + 0x18);
      iVar1 = *(int *)(param_3 + 8);
    }
    else {
      iVar3 = 0;
      param_2 = 1;
      iVar2 = 0;
      iVar1 = iVar3;
    }
    raac_SetRawBlockParams(param_1,param_2,iVar3,iVar1,iVar2);
  }
  return;
}



undefined4 AACFlushCodec(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return 0xfffffffe;
  }
  param_1[0x10] = 0;
  param_1[0xd] = -1;
  param_1[0xe] = -1;
  param_1[0xf] = -1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  raac_FlushCodec(param_1);
  if (param_1[0x1d] == 0) {
    return 0;
  }
  raac_FlushCodecSBR((int)param_1);
  return 0;
}



// WARNING: Type propagation algorithm not settling

uint AACDecode(int *param_1,byte **param_2,byte **param_3,undefined2 *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  int *piVar11;
  int iVar12;
  byte *pbVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  uint local_60;
  int local_5c;
  uint local_4c;
  uint local_48;
  byte *local_44;
  uint local_40;
  byte *apbStack60 [6];
  
  if (param_1 == (int *)0x0) {
    return 0xfffffffe;
  }
  iVar6 = param_1[0x17];
  local_44 = *param_2;
  local_4c = 0;
  local_48 = (int)*param_3 * 8;
  if (iVar6 == 0) {
    if ((int)local_48 < 0x20) {
      return 0xffffffff;
    }
    if ((((*local_44 == 0x41) && (local_44[1] == 0x44)) && (local_44[2] == 0x49)) &&
       (local_44[3] == 0x46)) {
      param_1[0x17] = 2;
      uVar2 = raac_UnpackADIFHeader(param_1,(int *)&local_44,&local_4c,(int *)&local_48);
      if (uVar2 != 0) {
        return uVar2;
      }
      iVar6 = param_1[0x17];
      goto LAB_00017aec;
    }
    iVar7 = 0;
    iVar6 = ((int)local_48 >> 3) + -1;
    pbVar13 = local_44;
    do {
      if ((*pbVar13 == 0xff) && ((pbVar13[1] & 0xf0) == 0xf0)) {
        bVar15 = false;
        goto LAB_000178e0;
      }
      iVar7 = iVar7 + 1;
      pbVar13 = pbVar13 + 1;
    } while (iVar7 < iVar6);
    bVar15 = true;
    iVar7 = -1;
LAB_000178e0:
    iVar1 = 0;
    pbVar13 = local_44;
    do {
      if ((*pbVar13 == 0x56) && ((pbVar13[1] & 0xe0) == 0xe0)) {
        bVar14 = iVar1 < 0;
        bVar16 = iVar1 == 0;
        bVar15 = bVar14;
        if (!bVar14) {
          bVar15 = iVar7 - iVar1 < 0;
          bVar16 = iVar7 == iVar1;
        }
        bVar14 = !bVar14 && SBORROW4(iVar7,iVar1);
        if (!bVar16 && bVar15 == bVar14) {
          iVar7 = 4;
        }
        if (!bVar16 && bVar15 == bVar14) {
          param_1[0x17] = iVar7;
        }
        if (!bVar16 && bVar15 == bVar14) goto LAB_00017924;
        goto LAB_00017c78;
      }
      iVar1 = iVar1 + 1;
      pbVar13 = pbVar13 + 1;
    } while (iVar1 < iVar6);
    if (bVar15) {
      return 0xffffffff;
    }
LAB_00017c78:
    param_1[0x17] = 1;
LAB_00017c80:
    iVar7 = param_1[0x12];
    if (iVar7 == 0) {
      iVar6 = ((int)local_48 >> 3) + -1;
      if (iVar6 < 1) {
        return 0xffffffff;
      }
      while ((*local_44 != 0xff || ((local_44[1] & 0xf0) != 0xf0))) {
        iVar7 = iVar7 + 1;
        local_44 = local_44 + 1;
        if (iVar6 <= iVar7) {
          return 0xffffffff;
        }
      }
      param_1[0x1e] = iVar7;
      local_48 = local_48 + iVar7 * -8;
      uVar2 = raac_UnpackADTSHeader(param_1,&local_44,&local_4c,(int *)&local_48);
      if (uVar2 != 0) {
        return uVar2;
      }
      if ((int)*param_3 < param_1[0x1f]) {
        return 0xfffffffd;
      }
      if (param_1[0x14] == -1) {
        uVar2 = raac_GetADTSChannelMapping(param_1,(int)local_44,local_4c,local_48);
        if (uVar2 != 0) {
          return uVar2;
        }
        iVar7 = param_1[0x12];
      }
      else {
        iVar7 = param_1[0x12];
      }
    }
    iVar6 = param_1[0x17];
    param_1[0x12] = iVar7 + -1;
  }
  else {
LAB_00017aec:
    if (iVar6 == 1) goto LAB_00017c80;
  }
  if (iVar6 == 4) {
LAB_00017924:
    iVar6 = param_1[0x12];
    if (iVar6 == 0) {
      iVar7 = ((int)local_48 >> 3) + -1;
      if (iVar7 < 1) {
        return 0xffffffff;
      }
      while ((*local_44 != 0x56 || ((local_44[1] & 0xe0) != 0xe0))) {
        iVar6 = iVar6 + 1;
        local_44 = local_44 + 1;
        if (iVar7 <= iVar6) {
          return 0xffffffff;
        }
      }
      param_1[0x1e] = iVar6;
      param_1[0x24] = 0;
      local_48 = local_48 + iVar6 * -8;
      uVar2 = UnpackLATMHeader(param_1,(int *)&local_44,&local_4c,(int *)&local_48,&local_40);
      if (local_40 == 0) {
        param_1[0x12] = 0;
        local_60 = local_40;
        goto LAB_00017fb8;
      }
      if (uVar2 != 0) {
        return uVar2;
      }
      iVar7 = param_1[0x14];
      if (iVar7 == -1) {
        uVar2 = raac_GetADTSChannelMapping(param_1,(int)local_44,local_4c,local_48);
        if (uVar2 != 0) {
          return uVar2;
        }
        iVar6 = param_1[0x12];
        goto LAB_00017a00;
      }
      iVar6 = param_1[0x12];
    }
    else {
LAB_00017a00:
      iVar7 = param_1[0x14];
    }
    param_1[0x12] = iVar6 + -1;
  }
  else {
    if ((iVar6 == 3) && (uVar2 = raac_PrepareRawBlock(param_1), uVar2 != 0)) {
      return uVar2;
    }
    iVar7 = param_1[0x14];
  }
  pbVar13 = local_44;
  if (5 < iVar7 - 1U) {
    return 0xfffffff1;
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if ((param_1[0x17] == 4) && ((local_48 & 7) != 0)) {
    local_4c = 8 - (local_48 & 7);
    raac_SetBitstreamPointer(apbStack60,(int)(local_48 + 7) >> 3,local_44);
    raac_GetBits(apbStack60,local_4c);
    iVar7 = local_48 + (param_1[0x1f] - (int)*param_3) * 8;
    iVar6 = iVar7 + 7;
    if (iVar6 < 0) {
      iVar6 = iVar7 + 0xe;
    }
    if (0 < iVar6 >> 3) {
      pbVar9 = pbVar13;
      do {
        uVar2 = raac_GetBits(apbStack60,8);
        pbVar10 = pbVar9 + 1;
        *pbVar9 = (byte)uVar2;
        pbVar9 = pbVar10;
      } while (pbVar10 != pbVar13 + (iVar6 >> 3));
    }
  }
  local_4c = 0;
  local_5c = 0;
  uVar2 = 0;
  do {
    if ((int)local_48 < 0) {
      *param_3 = (byte *)0x0;
      return 0xffffffff;
    }
    param_1[0x28] = local_48;
    param_1[0x25] = (int)local_44;
    param_1[0x27] = local_4c;
    uVar3 = raac_DecodeNextElement(param_1,(int *)&local_44,&local_4c,(int *)&local_48);
    if (uVar3 != 0) {
      return uVar3;
    }
    iVar6 = param_1[0xe];
    iVar7 = *(int *)(raac_elementNumChans + iVar6 * 4);
    local_60 = uVar2 + iVar7;
    if (param_1[0x14] < iVar7) {
      param_1[0x14] = iVar7;
    }
    if (param_1[0x20] < (int)local_60) {
      return 0xfffffff1;
    }
    iVar1 = 0;
    if (0 < iVar7) {
      do {
        pbVar13 = local_44;
        uVar8 = local_48;
        uVar3 = local_4c;
        uVar4 = raac_DecodeNoiselessData(param_1,(int *)&local_44,&local_4c,(int *)&local_48,iVar1);
        if (uVar4 != 0) {
          return uVar4;
        }
        if (iVar1 == 1 && param_1[0x22] == 0) {
          param_1[0x24] = param_1[0x24] + 0xc0;
          uVar4 = uVar8 - local_48;
          if (0x7f < (int)uVar4) {
            uVar4 = 0x80;
          }
          uVar3 = FUN_000173f8((int)param_1,pbVar13,uVar3,uVar8,uVar4);
          param_1[0x24] = param_1[0x24] + -0xc0;
          if (uVar3 != 0) {
            return uVar3;
          }
        }
        iVar6 = raac_Dequantize(param_1,iVar1);
        iVar1 = iVar1 + 1;
        if (iVar6 != 0) {
          return 0xfffffff7;
        }
      } while (iVar1 != iVar7);
      iVar6 = param_1[0xe];
    }
    if ((param_1[0x22] == 0) && (-1 < iVar6)) {
      if (iVar6 < 4) {
        iVar6 = param_1[0x27];
        uVar3 = (param_1[0x28] - local_48) - 3;
        param_1[0x27] = iVar6 + 3U;
        if (0xbf < (int)uVar3) {
          uVar3 = 0xc0;
        }
        uVar3 = FUN_000173f8((int)param_1,param_1[0x25],iVar6 + 3U,param_1[0x28],uVar3);
        if (uVar3 != 0) {
          return uVar3;
        }
        iVar6 = param_1[0x24];
        iVar12 = iVar6 + 0xc0;
        if (iVar1 != 2) {
          iVar6 = param_1[0xe];
        }
        param_1[0x24] = iVar12;
        if (iVar1 == 2) {
          iVar1 = iVar6 + 0x140;
          iVar6 = param_1[0xe];
          param_1[0x24] = iVar1;
        }
      }
      else {
        if (iVar6 == 5) {
          iVar6 = param_1[0x27];
          param_1[0x27] = iVar6 + 3U;
          uVar8 = (param_1[0x28] - local_48) - 3;
          uVar3 = FUN_000173f8((int)param_1,param_1[0x25],iVar6 + 3U,param_1[0x28],uVar8);
          if (uVar3 != 0) {
            return uVar3;
          }
          iVar6 = param_1[0xe];
          param_1[0x24] = param_1[0x24] + uVar8;
        }
      }
    }
    if ((iVar6 == 1) && (iVar6 = raac_StereoProcess(param_1), iVar6 != 0)) {
      return 0xfffffff6;
    }
    if (0 < iVar7) {
      iVar6 = 0;
      piVar11 = param_1;
      do {
        iVar1 = raac_PNS(param_1,iVar6);
        if (iVar1 != 0) {
          return 0xfffffff5;
        }
        if (piVar11[0x10] != 0) {
          iVar1 = raac_DeinterleaveShortBlocks();
          if (iVar1 != 0) {
            return 0xfffffff4;
          }
          piVar11[0x10] = 0;
        }
        uVar3 = raac_TNSFilter(param_1,iVar6);
        piVar11 = piVar11 + 1;
        iVar1 = iVar6 + 1;
        if (uVar3 != 0) {
          return 0xfffffff3;
        }
        iVar6 = raac_IMDCT(param_1,iVar6,iVar6 + uVar2,(int)param_4);
        if (iVar6 != 0) {
          return 0xfffffff2;
        }
        iVar6 = iVar1;
      } while (iVar1 != iVar7);
    }
    if (param_1[0x1d] == 0) {
      iVar6 = param_1[0xe];
    }
    else {
      iVar6 = param_1[0xe];
      if (param_1[0x18] != 0) {
        uVar2 = (uint)(iVar6 == 6);
        uVar3 = (uint)(iVar6 == 3);
        if (iVar6 == 3 || iVar6 == 6) {
          if (uVar3 == 0) {
            if ((uVar2 != 0) && (uVar2 = uVar3, (uint)param_1[0xd] < 2)) {
              uVar2 = *(uint *)(raac_elementNumChans + param_1[0xd] * 4);
            }
          }
          else {
            uVar2 = 1;
          }
          if (param_1[0x20] < (int)(local_5c + uVar2)) {
            return 0xffffffec;
          }
          iVar6 = raac_DecodeSBRBitstream((int)param_1,local_5c);
          if (iVar6 != 0) {
            return 0xffffffef;
          }
          iVar6 = raac_DecodeSBRData((int)param_1,local_5c,(int)param_4);
          if (iVar6 != 0) {
            return 0xffffffee;
          }
          iVar6 = param_1[0xe];
          local_5c = local_5c + uVar2;
        }
      }
    }
    uVar2 = local_60;
  } while (iVar6 != 7);
LAB_00017fb8:
  if ((local_4c != 0) && (local_44 = local_44 + 1, (int)((local_4c - 8) + local_48) < 0)) {
    return 0xffffffff;
  }
  if (param_1[0x17] != 4) {
    pbVar13 = *param_2;
  }
  else {
    pbVar13 = *param_2;
    local_44 = (byte *)(param_1[0x1f] + param_1[0x1e]);
  }
  param_1[0x1b] = param_1[0x1b] + 1;
  if (param_1[0x17] == 4) {
    local_44 = pbVar13 + (int)local_44;
  }
  *param_3 = *param_3 + (int)(pbVar13 + -(int)local_44);
  *param_2 = local_44;
  if (local_60 == 6) {
    param_1[0x14] = 6;
  }
  else {
    if (param_1[0x14] != local_60) {
      if (param_1[0x14] != local_60 * 2) {
        return 0xfffffff1;
      }
      if (param_1[0x18] == 0) {
        iVar6 = 1;
      }
      else {
        iVar6 = 2;
      }
      iVar6 = iVar6 * local_60 * 0x800;
      if (0 < iVar6) {
        puVar5 = param_4 + iVar6;
        do {
          param_4[1] = *param_4;
          param_4 = param_4 + 2;
        } while (param_4 != puVar5);
      }
    }
  }
  if ((param_1[0x17] == 4) && (local_40 == 0)) {
    param_1[0x1e] = -1;
    return 0;
  }
  return 0;
}



void raac_SetBitstreamPointer(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[3] = param_2;
  *param_1 = param_3;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  return;
}



uint raac_GetBits(byte **param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  
  uVar4 = param_2 & 0x1f;
  pbVar6 = param_1[2] + -uVar4;
  uVar3 = ((uint)param_1[1] >> (0x1f - uVar4 & 0xff)) >> 1;
  param_1[1] = (byte *)((int)param_1[1] << uVar4);
  param_1[2] = pbVar6;
  if ((int)pbVar6 < 0) {
    pbVar10 = param_1[3];
    if ((int)pbVar10 < 4) {
      pbVar5 = (byte *)0x0;
      param_1[1] = (byte *)0x0;
      if ((int)pbVar10 < 1) {
        param_1[4] = (byte *)0x1;
      }
      else {
        pbVar7 = *param_1;
        pbVar9 = pbVar7;
        do {
          pbVar8 = pbVar9 + 1;
          bVar1 = *pbVar9;
          *param_1 = pbVar8;
          pbVar5 = (byte *)(((uint)bVar1 | (uint)pbVar5) << 8);
          param_1[1] = pbVar5;
          pbVar9 = pbVar8;
        } while (pbVar8 != pbVar7 + (int)pbVar10);
      }
      iVar11 = (int)pbVar10 << 3;
      param_1[3] = (byte *)0x0;
      uVar4 = (int)pbVar5 << ((3 - (int)pbVar10) * 8 & 0xffU);
    }
    else {
      pbVar9 = *param_1;
      iVar11 = 0x20;
      bVar1 = *pbVar9;
      *param_1 = pbVar9 + 1;
      param_1[1] = (byte *)((uint)bVar1 << 0x18);
      bVar2 = pbVar9[1];
      *param_1 = pbVar9 + 2;
      pbVar5 = (byte *)((uint)(byte *)((uint)bVar1 << 0x18) | (uint)bVar2 << 0x10);
      param_1[1] = pbVar5;
      bVar1 = pbVar9[2];
      *param_1 = pbVar9 + 3;
      pbVar5 = (byte *)((uint)pbVar5 | (uint)bVar1 << 8);
      param_1[1] = pbVar5;
      bVar1 = pbVar9[3];
      *param_1 = pbVar9 + 4;
      uVar4 = (uint)pbVar5 | (uint)bVar1;
      param_1[3] = pbVar10 + -4;
    }
    uVar3 = uVar3 | uVar4 >> ((uint)(pbVar6 + 0x20) & 0xff);
    param_1[1] = (byte *)(uVar4 << (-(int)pbVar6 & 0xffU));
    param_1[2] = pbVar6 + iVar11;
  }
  return uVar3;
}



uint raac_GetBitsNoAdvance(byte **param_1,uint param_2)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = (param_2 & 0x1f) - (int)param_1[2];
  uVar1 = ((uint)param_1[1] >> (0x1f - (param_2 & 0x1f) & 0xff)) >> 1;
  if (0 < iVar6) {
    uVar3 = 0;
    pbVar4 = *param_1 + 1;
    pbVar2 = *param_1;
    pbVar5 = pbVar4;
    do {
      bVar7 = pbVar5 != pbVar4 + (iVar6 - 1U >> 3);
      uVar3 = (uint)*pbVar2 | uVar3 << 8;
      pbVar2 = pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar7);
    uVar1 = uVar1 | uVar3 >> ((iVar6 - 1U & 0xfffffff8) - (iVar6 + -8) & 0xff);
  }
  return uVar1;
}



void raac_AdvanceBitstream(byte **param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  pbVar5 = param_1[2];
  uVar3 = param_2 & 0x1f;
  if ((int)pbVar5 < (int)uVar3) {
    pbVar8 = param_1[3];
    uVar3 = uVar3 - (int)pbVar5;
    if ((int)pbVar8 < 4) {
      pbVar4 = (byte *)0x0;
      param_1[1] = (byte *)0x0;
      if ((int)pbVar8 < 1) {
        param_1[4] = (byte *)0x1;
      }
      else {
        pbVar6 = *param_1;
        pbVar5 = pbVar6;
        do {
          pbVar7 = pbVar5 + 1;
          bVar1 = *pbVar5;
          *param_1 = pbVar7;
          pbVar4 = (byte *)(((uint)bVar1 | (uint)pbVar4) << 8);
          param_1[1] = pbVar4;
          pbVar5 = pbVar7;
        } while (pbVar7 != pbVar8 + (int)pbVar6);
      }
      pbVar5 = (byte *)((int)pbVar8 << 3);
      param_1[3] = (byte *)0x0;
      pbVar4 = (byte *)((int)pbVar4 << ((3 - (int)pbVar8) * 8 & 0xffU));
    }
    else {
      pbVar6 = *param_1;
      pbVar5 = (byte *)0x20;
      bVar1 = *pbVar6;
      *param_1 = pbVar6 + 1;
      param_1[1] = (byte *)((uint)bVar1 << 0x18);
      bVar2 = pbVar6[1];
      *param_1 = pbVar6 + 2;
      pbVar4 = (byte *)((uint)(byte *)((uint)bVar1 << 0x18) | (uint)bVar2 << 0x10);
      param_1[1] = pbVar4;
      bVar1 = pbVar6[2];
      *param_1 = pbVar6 + 3;
      pbVar4 = (byte *)((uint)pbVar4 | (uint)bVar1 << 8);
      param_1[1] = pbVar4;
      bVar1 = pbVar6[3];
      *param_1 = pbVar6 + 4;
      pbVar4 = (byte *)((uint)pbVar4 | (uint)bVar1);
      param_1[3] = pbVar8 + -4;
    }
  }
  else {
    pbVar4 = param_1[1];
  }
  param_1[1] = (byte *)((int)pbVar4 << (uVar3 & 0xff));
  param_1[2] = pbVar5 + -uVar3;
  return;
}



int raac_CalcBitsUsed(int *param_1,int param_2,int param_3)

{
  return ((*param_1 - param_2) * 8 - param_1[2]) - param_3;
}



void raac_ByteAlignBitstream(byte **param_1)

{
  raac_AdvanceBitstream(param_1,(uint)param_1[2] & 7);
  return;
}



void raac_ClearBuffer(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 1) {
    return;
  }
  iVar1 = 0;
  do {
    *(undefined *)(param_1 + iVar1) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != param_2);
  return;
}



void raac_FreeBuffers(void **param_1)

{
  if (param_1 == (void **)0x0) {
    return;
  }
  if (*param_1 != (void *)0x0) {
    free(*param_1);
  }
  *param_1 = (void *)0x0;
  free(param_1);
  return;
}



void ** raac_AllocateBuffers(void)

{
  void **ppvVar1;
  void **ppvVar2;
  int iVar3;
  
  ppvVar1 = (void **)malloc(0x10ac);
  if (ppvVar1 != (void **)0x0) {
    iVar3 = 0;
    do {
      *(undefined *)((int)ppvVar1 + iVar3) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x10ac);
    ppvVar2 = (void **)malloc(0xb060);
    *ppvVar1 = ppvVar2;
    if (ppvVar2 == (void **)0x0) {
      raac_FreeBuffers(ppvVar1);
      ppvVar1 = ppvVar2;
    }
    else {
      iVar3 = 0;
      do {
        *(undefined *)((int)ppvVar2 + iVar3) = 0;
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0xb060);
    }
  }
  return ppvVar1;
}



undefined4 raac_DecodeProgramConfigElement(undefined *param_1,byte **param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  byte *pbVar5;
  
  uVar2 = raac_GetBits(param_2,4);
  *param_1 = (char)uVar2;
  uVar2 = raac_GetBits(param_2,2);
  param_1[1] = (char)uVar2;
  uVar2 = raac_GetBits(param_2,4);
  param_1[2] = (char)uVar2;
  uVar2 = raac_GetBits(param_2,4);
  param_1[3] = (char)uVar2;
  uVar2 = raac_GetBits(param_2,4);
  param_1[4] = (char)uVar2;
  uVar2 = raac_GetBits(param_2,4);
  param_1[5] = (char)uVar2;
  uVar2 = raac_GetBits(param_2,2);
  param_1[6] = (char)uVar2;
  uVar2 = raac_GetBits(param_2,3);
  param_1[7] = (char)uVar2;
  uVar2 = raac_GetBits(param_2,4);
  param_1[8] = (char)uVar2;
  uVar2 = raac_GetBits(param_2,1);
  bVar1 = (char)(uVar2 & 0xf) * '\x10';
  param_1[9] = bVar1;
  if ((uVar2 & 0xf) == 0) {
    uVar2 = raac_GetBits(param_2,1);
    uVar2 = uVar2 & 0xf;
    bVar1 = (char)uVar2 * '\x10';
    param_1[10] = bVar1;
  }
  else {
    uVar2 = raac_GetBits(param_2,4);
    param_1[9] = bVar1 | (byte)uVar2;
    uVar2 = raac_GetBits(param_2,1);
    uVar2 = uVar2 & 0xf;
    bVar1 = (char)uVar2 * '\x10';
    param_1[10] = bVar1;
  }
  if (uVar2 == 0) {
    uVar2 = raac_GetBits(param_2,1);
    uVar2 = uVar2 & 0xf;
    bVar1 = (char)uVar2 * '\x10';
    param_1[0xb] = bVar1;
  }
  else {
    uVar2 = raac_GetBits(param_2,4);
    param_1[10] = bVar1 | (byte)uVar2;
    uVar2 = raac_GetBits(param_2,1);
    uVar2 = uVar2 & 0xf;
    bVar1 = (char)uVar2 * '\x10';
    param_1[0xb] = bVar1;
  }
  if (uVar2 != 0) {
    uVar2 = raac_GetBits(param_2,2);
    bVar1 = bVar1 | (byte)((uVar2 & 0x7f) << 1);
    param_1[0xb] = bVar1;
    uVar2 = raac_GetBits(param_2,1);
    param_1[0xb] = bVar1 | (byte)uVar2;
  }
  if (param_1[3] != '\0') {
    iVar3 = 0;
    pbVar5 = param_1 + 0xc;
    do {
      uVar2 = raac_GetBits(param_2,1);
      iVar3 = iVar3 + 1;
      bVar1 = (byte)((uVar2 & 0xf) << 4);
      *pbVar5 = bVar1;
      uVar2 = raac_GetBits(param_2,4);
      *pbVar5 = bVar1 | (byte)uVar2;
      pbVar5 = pbVar5 + 1;
    } while (iVar3 < (int)(uint)(byte)param_1[3]);
  }
  if (param_1[4] != '\0') {
    iVar3 = 0;
    pbVar5 = param_1 + 0x1b;
    do {
      uVar2 = raac_GetBits(param_2,1);
      iVar3 = iVar3 + 1;
      bVar1 = (byte)((uVar2 & 0xf) << 4);
      *pbVar5 = bVar1;
      uVar2 = raac_GetBits(param_2,4);
      *pbVar5 = bVar1 | (byte)uVar2;
      pbVar5 = pbVar5 + 1;
    } while (iVar3 < (int)(uint)(byte)param_1[4]);
  }
  if (param_1[5] != '\0') {
    iVar3 = 0;
    pbVar5 = param_1 + 0x2a;
    do {
      uVar2 = raac_GetBits(param_2,1);
      iVar3 = iVar3 + 1;
      bVar1 = (byte)((uVar2 & 0xf) << 4);
      *pbVar5 = bVar1;
      uVar2 = raac_GetBits(param_2,4);
      *pbVar5 = bVar1 | (byte)uVar2;
      pbVar5 = pbVar5 + 1;
    } while (iVar3 < (int)(uint)(byte)param_1[5]);
  }
  if (param_1[6] != '\0') {
    iVar3 = 0;
    puVar4 = param_1;
    do {
      uVar2 = raac_GetBits(param_2,4);
      iVar3 = iVar3 + 1;
      puVar4[0x39] = (char)uVar2;
      puVar4 = puVar4 + 1;
    } while (iVar3 < (int)(uint)(byte)param_1[6]);
  }
  if (param_1[7] != '\0') {
    puVar4 = param_1 + 0x3b;
    iVar3 = 0;
    do {
      uVar2 = raac_GetBits(param_2,4);
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
      *puVar4 = (char)uVar2;
    } while (iVar3 < (int)(uint)(byte)param_1[7]);
  }
  if (param_1[8] != '\0') {
    iVar3 = 0;
    pbVar5 = param_1 + 0x43;
    do {
      uVar2 = raac_GetBits(param_2,1);
      iVar3 = iVar3 + 1;
      bVar1 = (byte)((uVar2 & 0xf) << 4);
      *pbVar5 = bVar1;
      uVar2 = raac_GetBits(param_2,4);
      *pbVar5 = bVar1 | (byte)uVar2;
      pbVar5 = pbVar5 + 1;
    } while (iVar3 < (int)(uint)(byte)param_1[8]);
  }
  raac_ByteAlignBitstream(param_2);
  uVar2 = raac_GetBits(param_2,8);
  while (uVar2 != 0) {
    raac_GetBits(param_2,8);
    uVar2 = uVar2 - 1;
  }
  return 0;
}



undefined4 raac_DecodeNextElement(int *param_1,int *param_2,uint *param_3,int *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  byte *apbStack60 [6];
  
  if ((param_1 == (int *)0x0) || (iVar5 = *param_1, iVar5 == 0)) {
    return 0xfffffffe;
  }
  raac_SetBitstreamPointer(apbStack60,*param_4 + 7 >> 3,*param_2);
  raac_GetBits(apbStack60,*param_3);
  param_1[0xd] = param_1[0xe];
  uVar1 = raac_GetBits(apbStack60,3);
  param_1[0xe] = uVar1;
  *(undefined4 *)(iVar5 + 0x8f0) = 0;
  switch(uVar1) {
  case 0:
    goto LAB_00018918;
  case 1:
    iVar5 = *param_1;
    if (iVar5 == 0) {
      return 0xfffffff8;
    }
    uVar1 = raac_GetBits(apbStack60,4);
    param_1[0xf] = uVar1;
    uVar1 = raac_GetBits(apbStack60,1);
    *(uint *)(iVar5 + 0x8f0) = uVar1;
    if (uVar1 != 0) {
      uVar1 = raac_DecodeICSInfo(apbStack60,(undefined *)(iVar5 + 0x87c),*(int *)(iVar5 + 0x878));
      if (uVar1 != 0) {
        return 0xfffffff8;
      }
      uVar3 = raac_GetBits(apbStack60,2);
      *(uint *)(iVar5 + 0xbc4) = uVar3;
      if (uVar3 == 1) {
        uVar3 = (uint)*(byte *)(iVar5 + 0x8ad);
        *(undefined *)(iVar5 + 0xbc8) = 0;
        if (uVar3 != 0) {
          uVar4 = (uint)*(byte *)(iVar5 + 0x87f);
          pbVar7 = (byte *)(iVar5 + 0xbc8);
          uVar8 = uVar1;
          do {
            if (uVar4 != 0) {
              iVar9 = 0;
              do {
                uVar4 = raac_GetBits(apbStack60,1);
                iVar9 = iVar9 + 1;
                uVar3 = uVar1 & 0xff;
                uVar1 = uVar1 + 1;
                *pbVar7 = *pbVar7 | (byte)((uVar4 & 0xff) << uVar3);
                if (uVar1 == 8) {
                  pbVar7[1] = 0;
                }
                uVar4 = (uint)*(byte *)(iVar5 + 0x87f);
                if (uVar1 == 8) {
                  pbVar7 = pbVar7 + 1;
                  uVar1 = 0;
                }
              } while (iVar9 < (int)uVar4);
              uVar3 = (uint)*(byte *)(iVar5 + 0x8ad);
            }
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < (int)uVar3);
        }
      }
    }
    break;
  case 2:
    break;
  case 3:
LAB_00018918:
    if (*param_1 == 0) {
      return 0xfffffff8;
    }
    uVar1 = raac_GetBits(apbStack60,4);
    param_1[0xf] = uVar1;
    break;
  case 4:
    iVar5 = *param_1;
    if (iVar5 == 0) {
      return 0xfffffff8;
    }
    uVar1 = raac_GetBits(apbStack60,4);
    param_1[0xf] = uVar1;
    uVar1 = raac_GetBits(apbStack60,1);
    uVar3 = raac_GetBits(apbStack60,8);
    if (uVar3 == 0xff) {
      uVar3 = raac_GetBits(apbStack60,8);
      uVar3 = uVar3 + 0xff;
    }
    if (uVar1 != 0) {
      raac_ByteAlignBitstream(apbStack60);
    }
    *(uint *)(iVar5 + 0x558) = uVar3;
    if (uVar3 != 0) {
      puVar6 = (undefined *)(iVar5 + 0x55c);
      do {
        uVar1 = raac_GetBits(apbStack60,8);
        uVar3 = uVar3 - 1;
        *puVar6 = (char)uVar1;
        puVar6 = puVar6 + 1;
      } while (uVar3 != 0);
    }
    break;
  case 5:
    iVar5 = raac_DecodeProgramConfigElement((undefined *)(iVar5 + 0x38),apbStack60);
    if (iVar5 != 0) {
      return 0xfffffff8;
    }
    break;
  case 6:
    iVar5 = *param_1;
    if (iVar5 == 0) {
      return 0xfffffff8;
    }
    uVar1 = raac_GetBits(apbStack60,4);
    if (uVar1 == 0xf) {
      uVar1 = raac_GetBits(apbStack60,8);
      uVar1 = uVar1 + 0xe;
    }
    *(uint *)(iVar5 + 0x75c) = uVar1;
    puVar6 = (undefined *)(iVar5 + 0x760);
    while (uVar1 != 0) {
      uVar3 = raac_GetBits(apbStack60,8);
      uVar1 = uVar1 - 1;
      *puVar6 = (char)uVar3;
      puVar6 = puVar6 + 1;
    }
    param_1[0xf] = -1;
    param_1[0xc] = 0;
    iVar9 = *(int *)(iVar5 + 0x75c);
    if (((param_1[0x1d] != 0) && (0 < iVar9)) &&
       (uVar1 = (uint)(*(byte *)(iVar5 + 0x760) >> 4), param_1[0xc] = uVar1, uVar1 - 0xd < 2)) {
      param_1[0x18] = 1;
    }
    param_1[10] = (int)(undefined *)(iVar5 + 0x760);
    param_1[0xb] = iVar9;
  }
  iVar5 = raac_CalcBitsUsed((int *)apbStack60,*param_2,*param_3);
  uVar1 = *param_3;
  *param_2 = *param_2 + ((int)(iVar5 + uVar1) >> 3);
  *param_3 = iVar5 + uVar1 & 7;
  iVar9 = *param_4;
  *param_4 = iVar9 - iVar5;
  if (iVar9 - iVar5 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 raac_Dequantize(int *param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  short *psVar16;
  int iVar17;
  undefined *puVar18;
  uint *puVar19;
  uint *puVar20;
  int iVar21;
  int iVar22;
  byte *pbVar23;
  int iVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  uint local_80;
  int local_70;
  short *local_64;
  byte *local_60;
  byte *local_50;
  int local_4c;
  int local_3c;
  int local_34;
  uint local_30 [4];
  
  if ((param_1 == (int *)0x0) || (iVar5 = *param_1, iVar5 == 0)) {
    return 0xfffffffe;
  }
  if ((param_2 != 1) || (iVar11 = iVar5, *(int *)(iVar5 + 0x8f0) != 1)) {
    iVar11 = param_2 * 0x3a + iVar5;
  }
  if (*(char *)(iVar11 + 0x87d) == '\x02') {
    local_34 = 0x80;
    local_64 = (short *)(raac_sfBandTabShort +
                        *(int *)(raac_sfBandTabShortOffset + *(int *)(iVar5 + 0x878) * 4) * 2);
  }
  else {
    local_34 = 0x400;
    local_64 = (short *)(raac_sfBandTabLong +
                        *(int *)(raac_sfBandTabLongOffset + *(int *)(iVar5 + 0x878) * 4) * 2);
  }
  iVar12 = param_2 + 0x2f6;
  *(undefined4 *)(iVar5 + (param_2 + 0x2f8) * 4 + 4) = 0;
  *(undefined4 *)(iVar5 + iVar12 * 4) = 0;
  uVar10 = (uint)*(byte *)(iVar11 + 0x8ad);
  if (uVar10 != 0) {
    local_3c = 0;
    local_80 = 0;
    local_70 = iVar5 + param_2 * 0xf0 + 0x8f4;
    puVar19 = (uint *)(iVar5 + param_2 * 0x1000 + 0x1048);
    uVar7 = (uint)*(byte *)(iVar11 + 0x87f);
    local_60 = (byte *)(iVar5 + param_2 * 0x78 + 0xad4);
    local_50 = (byte *)(iVar11 + 0x8ae);
    do {
      if (*local_50 != 0) {
        local_4c = 0;
        do {
          if (uVar7 != 0) {
            bVar4 = *local_60;
            iVar13 = (int)local_64[1] - (int)*local_64;
            if (iVar13 < 1) {
              return 0xffffffe8;
            }
            iVar24 = 0;
            iVar6 = 0;
            psVar16 = local_64;
            puVar20 = puVar19;
            pbVar23 = local_60;
            do {
              uVar10 = (uint)bVar4;
              if (uVar10 < 0xc) {
                uVar10 = (int)*(short *)(local_70 + iVar24) - 100;
                uVar7 = uVar10 & 3;
                iVar1 = (int)uVar10 >> 2;
                iVar21 = *(int *)(&DAT_00032ff8 + uVar7 * 4);
                uVar10 = 0x17 - iVar1;
                iVar24 = uVar7 * 0x40;
                if ((int)uVar10 < 0x20) {
                  if ((int)uVar10 < 1) {
                    uVar10 = -uVar10;
                    if (0x1e < (int)uVar10) {
                      uVar10 = 0x1f;
                    }
                    iVar9 = 0;
                    do {
                      iVar22 = *(int *)(&UNK_00032e18 + iVar24 + iVar9);
                      iVar17 = 0x3fffffff;
                      if (iVar22 <= 0x3fffffff >> (uVar10 & 0xff)) {
                        iVar17 = iVar22 << (uVar10 & 0xff);
                      }
                      *(int *)((int)local_30 + iVar9) = iVar17;
                      iVar9 = iVar9 + 4;
                    } while (iVar9 != 0x10);
                  }
                  else {
                    local_30[0] = 0;
                    local_30[1] = *(int *)(&UNK_00032e1c + iVar24) >> (uVar10 & 0xff);
                    local_30[2] = *(int *)(&UNK_00032e20 + iVar24) >> (uVar10 & 0xff);
                    local_30[3] = *(int *)(&UNK_00032e24 + iVar24) >> (uVar10 & 0xff);
                  }
                }
                else {
                  local_30[3] = 0;
                  local_30[2] = 0;
                  local_30[1] = 0;
                  local_30[0] = 0;
                }
                uVar10 = 0;
                puVar8 = puVar20;
                iVar9 = iVar13;
                puVar19 = puVar20;
                do {
                  while( true ) {
                    uVar7 = (int)*puVar8 >> 0x1f;
                    iVar17 = (uVar7 ^ *puVar8) - uVar7;
                    if (3 < iVar17) break;
                    uVar15 = local_30[iVar17];
LAB_00018e04:
                    iVar9 = iVar9 + -1;
                    uVar10 = uVar10 | uVar15;
                    *puVar8 = (uVar15 ^ uVar7) - uVar7;
                    puVar8 = puVar8 + 1;
                    if (iVar9 == 0) goto LAB_00018e78;
                  }
                  if (iVar17 < 0x10) {
                    iVar17 = *(int *)(&UNK_00032e18 + iVar24 + iVar17 * 4);
                    uVar14 = 0x14 - iVar1;
                  }
                  else {
                    if (iVar17 < 0x40) {
                      uVar14 = 0x10 - iVar1;
                      iVar17 = (int)((ulonglong)
                                     ((longlong)*(int *)(&UNK_00032f18 + (iVar17 + -0x10) * 4) *
                                     (longlong)iVar21) >> 0x20);
                    }
                    else {
                      iVar22 = iVar17 * 0x20000;
                      bVar27 = SCARRY4(iVar22,-0x7ffffff);
                      bVar25 = iVar22 + -0x7ffffff < 0;
                      bVar26 = iVar22 == 0x7ffffff;
                      if (bVar26 || bVar25 != bVar27) {
                        iVar22 = iVar17 * 0x200000;
                      }
                      if (bVar26 || bVar25 != bVar27) {
                        puVar19 = (uint *)0x4;
                      }
                      if (!bVar26 && bVar25 == bVar27) {
                        puVar19 = (uint *)0x0;
                      }
                      bVar27 = SCARRY4(iVar22,-0x1fffffff);
                      bVar25 = iVar22 + -0x1fffffff < 0;
                      bVar26 = iVar22 == 0x1fffffff;
                      if (bVar26 || bVar25 != bVar27) {
                        iVar22 = iVar22 << 2;
                      }
                      if (bVar26 || bVar25 != bVar27) {
                        puVar19 = (uint *)((int)puVar19 + 2);
                      }
                      bVar27 = SCARRY4(iVar22,-0x3fffffff);
                      bVar25 = iVar22 + -0x3fffffff < 0;
                      bVar26 = iVar22 == 0x3fffffff;
                      if (bVar26 || bVar25 != bVar27) {
                        iVar22 = iVar22 << 1;
                      }
                      if (bVar26 || bVar25 != bVar27) {
                        puVar19 = (uint *)((int)puVar19 + 1);
                      }
                      if (iVar22 < 0x5a82799a) {
                        iVar17 = 0x29a0bda9;
                        puVar18 = &DAT_00033008;
                      }
                      else {
                        iVar17 = 0x10852163;
                        puVar18 = &DAT_00032de4;
                      }
                      iVar17 = (int)((ulonglong)
                                     ((longlong)
                                      ((int)((ulonglong)
                                             ((longlong)
                                              ((int)((ulonglong)
                                                     ((longlong)
                                                      ((int)((ulonglong)
                                                             ((longlong)
                                                              ((int)((ulonglong)
                                                                     ((longlong)
                                                                      ((int)((ulonglong)
                                                                             ((longlong)iVar17 *
                                                                             (longlong)iVar22) >>
                                                                            0x20) +
                                                                      *(int *)(puVar18 + 4)) *
                                                                     (longlong)iVar22) >> 0x20) +
                                                              *(int *)(puVar18 + 8)) *
                                                             (longlong)iVar22) >> 0x20) +
                                                      *(int *)(puVar18 + 0xc)) * (longlong)iVar22)
                                                    >> 0x20) + *(int *)(puVar18 + 0x10)) *
                                             (longlong)*(int *)(&DAT_00032df8 + (int)puVar19 * 4))
                                            >> 0x20) << 3) * (longlong)iVar21) >> 0x20);
                      uVar14 = (0x13 - iVar1) - *(int *)(&DAT_00032fd8 + (int)puVar19 * 4);
                    }
                  }
                  if ((int)uVar14 < 1) {
                    uVar14 = -uVar14;
                    uVar15 = 0x3fffffff;
                    if (0x1e < (int)uVar14) {
                      uVar14 = 0x1f;
                    }
                    if (iVar17 <= 0x3fffffff >> (uVar14 & 0xff)) {
                      uVar15 = iVar17 << (uVar14 & 0xff);
                    }
                    goto LAB_00018e04;
                  }
                  if (0x1e < (int)uVar14) {
                    uVar14 = 0x1f;
                  }
                  iVar9 = iVar9 + -1;
                  uVar14 = iVar17 >> (uVar14 & 0xff);
                  uVar10 = uVar10 | uVar14;
                  *puVar8 = (uVar14 ^ uVar7) - uVar7;
                  puVar8 = puVar8 + 1;
                } while (iVar9 != 0);
LAB_00018e78:
                local_80 = local_80 | uVar10;
                uVar7 = (uint)*(byte *)(iVar11 + 0x87f);
                puVar19 = puVar20 + iVar13;
                if ((int)uVar7 <= iVar6 + 1) break;
              }
              else {
                if (uVar10 == 0xd) {
                  *(undefined4 *)(iVar5 + iVar12 * 4) = 1;
                  uVar7 = (uint)*(byte *)(iVar11 + 0x87f);
                }
                else {
                  if (uVar10 - 0xe < 2) {
                    *(undefined4 *)(iVar5 + (param_2 + 0x2f8) * 4 + 4) = 1;
                    uVar7 = (uint)*(byte *)(iVar11 + 0x87f);
                  }
                }
                puVar19 = puVar20 + iVar13;
                if ((int)uVar7 <= iVar6 + 1) break;
              }
              puVar20 = puVar20 + iVar13;
              iVar6 = iVar6 + 1;
              psVar2 = psVar16 + 2;
              iVar24 = iVar6 * 2;
              psVar3 = psVar16 + 1;
              psVar16 = psVar16 + 1;
              pbVar23 = pbVar23 + 1;
              bVar4 = *pbVar23;
              iVar13 = (int)*psVar2 - (int)*psVar3;
              if (iVar13 < 1) {
                return 0xffffffe8;
              }
            } while( true );
          }
          local_4c = local_4c + 1;
          puVar19 = puVar19 + (local_34 - local_64[uVar7]);
        } while (local_4c < (int)(uint)*local_50);
        uVar10 = (uint)*(byte *)(iVar11 + 0x8ad);
      }
      local_3c = local_3c + 1;
      local_60 = local_60 + uVar7;
      local_70 = local_70 + uVar7 * 2;
      local_50 = local_50 + 1;
    } while (local_3c < (int)uVar10);
    param_1[0x1a] = param_1[0x1a] | *(uint *)(iVar5 + iVar12 * 4);
    if (local_80 != 0) {
      if ((int)local_80 < 0) {
        iVar11 = -1;
      }
      else {
        iVar12 = 0;
        do {
          iVar11 = iVar12;
          local_80 = local_80 << 1;
          iVar12 = iVar11 + 1;
        } while (-1 < (int)local_80);
      }
      goto LAB_00018f5c;
    }
  }
  iVar11 = 0x1f;
LAB_00018f5c:
  *(int *)(iVar5 + (param_2 + 0x410) * 4) = iVar11;
  return 0;
}



undefined4 raac_DeinterleaveShortBlocks(void)

{
  return 0;
}



undefined4 raac_UnpackADTSHeader(undefined4 *param_1,void **param_2,uint *param_3,int *param_4)

{
  byte bVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  byte *apbStack52 [5];
  
  if ((param_1 == (undefined4 *)0x0) || (puVar6 = (undefined *)*param_1, puVar6 == (undefined *)0x0)
     ) {
    uVar4 = 0xfffffffe;
  }
  else {
    raac_SetBitstreamPointer(apbStack52,*param_4 + 7 >> 3,*param_2);
    raac_GetBits(apbStack52,*param_3);
    uVar2 = raac_GetBits(apbStack52,0xc);
    if (uVar2 == 0xfff) {
      uVar2 = raac_GetBits(apbStack52,1);
      *puVar6 = (char)uVar2;
      uVar2 = raac_GetBits(apbStack52,2);
      puVar6[1] = (char)uVar2;
      uVar2 = raac_GetBits(apbStack52,1);
      puVar6[2] = (char)uVar2;
      uVar2 = raac_GetBits(apbStack52,2);
      puVar6[3] = (char)uVar2;
      uVar2 = raac_GetBits(apbStack52,4);
      puVar6[4] = (char)uVar2;
      uVar2 = raac_GetBits(apbStack52,1);
      puVar6[5] = (char)uVar2;
      uVar2 = raac_GetBits(apbStack52,3);
      puVar6[6] = (char)uVar2;
      uVar2 = raac_GetBits(apbStack52,1);
      puVar6[7] = (char)uVar2;
      uVar2 = raac_GetBits(apbStack52,1);
      puVar6[8] = (char)uVar2;
      uVar2 = raac_GetBits(apbStack52,1);
      puVar6[9] = (char)uVar2;
      uVar2 = raac_GetBits(apbStack52,1);
      puVar6[10] = (char)uVar2;
      uVar2 = raac_GetBits(apbStack52,0xd);
      *(uint *)(puVar6 + 0xc) = uVar2;
      uVar2 = raac_GetBits(apbStack52,0xb);
      *(uint *)(puVar6 + 0x10) = uVar2;
      uVar2 = raac_GetBits(apbStack52,2);
      uVar7 = (uint)(byte)puVar6[2];
      puVar6[0x14] = (char)uVar2 + '\x01';
      if (uVar7 == 0) {
        uVar2 = raac_GetBits(apbStack52,0x10);
        *(uint *)(puVar6 + 0x18) = uVar2;
        param_1[0x23] = uVar2;
        memset(param_1 + 0x29,0,0x1000);
        memcpy(param_1 + 0x29,*param_2,7);
        param_1[0x24] = 0x38;
        uVar7 = (uint)(byte)puVar6[2];
      }
      pvVar3 = *param_2;
      param_1[0x21] = 1;
      param_1[0x22] = uVar7;
      memcpy(param_1 + 0x429,pvVar3,7);
      raac_ByteAlignBitstream(apbStack52);
      if ((((puVar6[1] == '\x03' || puVar6[1] == '\0') && (puVar6[3] != '\x03')) &&
          ((byte)puVar6[4] < 0xc)) && ((byte)puVar6[6] < 8)) {
        iVar8 = *(int *)(puVar6 + 0x874);
        param_1[0x1f] = *(undefined4 *)(puVar6 + 0xc);
        bVar1 = puVar6[4];
        *(uint *)(puVar6 + 0x878) = (uint)bVar1;
        if (iVar8 == 0) {
          *(undefined4 *)(puVar6 + 0x870) =
               *(undefined4 *)(raac_channelMapTab + (uint)(byte)puVar6[6] * 4);
        }
        uVar9 = *(undefined4 *)(puVar6 + 0x870);
        param_1[0xd] = 0xffffffff;
        param_1[0xe] = 0xffffffff;
        uVar4 = *(undefined4 *)(raac_sampRateTab + (uint)bVar1 * 4);
        param_1[0xf] = 0xffffffff;
        param_1[0x14] = uVar9;
        param_1[0x15] = uVar4;
        bVar1 = puVar6[3];
        pvVar3 = *param_2;
        param_1[0x18] = 0;
        param_1[0x16] = (uint)bVar1;
        param_1[0x12] = (uint)(byte)puVar6[0x14];
        iVar8 = raac_CalcBitsUsed((int *)apbStack52,(int)pvVar3,*param_3);
        uVar2 = *param_3;
        *param_2 = (void *)((int)*param_2 + ((int)(iVar8 + uVar2) >> 3));
        *param_3 = iVar8 + uVar2 & 7;
        iVar5 = *param_4;
        *param_4 = iVar5 - iVar8;
        if (iVar5 - iVar8 < 0) {
          return 0xffffffff;
        }
        return 0;
      }
    }
    uVar4 = 0xfffffffd;
  }
  return uVar4;
}



undefined4
UnpackLATMHeader(undefined4 *param_1,int *param_2,uint *param_3,int *param_4,undefined4 *param_5)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  undefined4 uVar10;
  
  if ((param_1 == (undefined4 *)0x0) || (puVar9 = (undefined *)*param_1, puVar9 == (undefined *)0x0)
     ) {
    return 0xfffffffe;
  }
  AudioAACaacframe_latm((uint *)param_1[0x1c],*param_4 >> 3,*param_2);
  iVar7 = param_1[0x1c];
  *param_5 = *(undefined4 *)(iVar7 + 4);
  *puVar9 = 0;
  cVar1 = *(char *)(iVar7 + 0x14);
  puVar9[2] = 1;
  puVar9[1] = cVar1;
  cVar2 = *(char *)(iVar7 + 0x8e4);
  puVar9[3] = cVar2;
  bVar3 = *(byte *)(iVar7 + 0x28);
  puVar9[4] = bVar3;
  bVar4 = *(byte *)(iVar7 + 0x2c);
  puVar9[6] = bVar4;
  iVar6 = *(int *)(iVar7 + 0x8d4);
  puVar9[0x14] = 1;
  iVar6 = iVar6 + 3;
  *(int *)(puVar9 + 0xc) = iVar6;
  if ((((cVar1 == '\x03' || cVar1 == '\0') && (cVar2 != '\x03')) && (bVar3 < 0xc)) && (bVar4 < 8)) {
    param_1[0x1f] = iVar6;
    if (*param_4 >> 3 < iVar6) {
      return 0xfffffffd;
    }
    *(uint *)(puVar9 + 0x878) = (uint)(byte)puVar9[4];
    if (*(int *)(puVar9 + 0x874) == 0) {
      *(undefined4 *)(puVar9 + 0x870) =
           *(undefined4 *)(raac_channelMapTab + (uint)(byte)puVar9[6] * 4);
    }
    uVar10 = *(undefined4 *)(iVar7 + 0x8d8);
    uVar5 = *(undefined4 *)(puVar9 + 0x870);
    param_1[0xd] = 0xffffffff;
    param_1[0x15] = uVar10;
    param_1[0xe] = 0xffffffff;
    param_1[0xf] = 0xffffffff;
    param_1[0x14] = uVar5;
    bVar3 = puVar9[3];
    iVar7 = *(int *)(iVar7 + 0xfd8);
    param_1[0x18] = 0;
    param_1[0x16] = (uint)bVar3;
    iVar6 = *param_2;
    param_1[0x12] = (uint)(byte)puVar9[0x14];
    iVar7 = *param_4 - iVar7;
    uVar8 = iVar7 + *param_3;
    *param_2 = iVar6 + ((int)uVar8 >> 3);
    *param_3 = uVar8 & 7;
    iVar7 = *param_4 - iVar7;
    *param_4 = iVar7;
    if (iVar7 < 0) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = 0;
    }
    return uVar5;
  }
  return 0xfffffffd;
}



int raac_GetADTSChannelMapping(int *param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_24;
  uint local_20;
  int local_1c;
  
  if ((param_1 == (int *)0x0) || (iVar5 = *param_1, iVar5 == 0)) {
    iVar4 = -2;
  }
  else {
    iVar4 = 0;
    local_24 = param_4;
    local_20 = param_3;
    local_1c = param_2;
    do {
      iVar1 = raac_DecodeNextElement(param_1,&local_1c,&local_20,&local_24);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar2 = param_1[0xe];
      iVar3 = *(int *)(raac_elementNumChans + iVar2 * 4);
      if (0 < iVar3) {
        do {
          iVar2 = raac_DecodeNoiselessData(param_1,&local_1c,&local_20,&local_24,iVar1);
          iVar1 = iVar1 + 1;
          if (iVar2 != 0) {
            return iVar2;
          }
        } while (iVar1 != iVar3);
        iVar2 = param_1[0xe];
      }
      iVar4 = iVar4 + iVar3;
    } while (iVar2 != 7);
    if (iVar4 < 1) {
      iVar4 = -7;
    }
    else {
      *(int *)(iVar5 + 0x870) = iVar4;
      param_1[0x14] = iVar4;
      iVar4 = 0;
      *(undefined4 *)(iVar5 + 0x874) = 1;
    }
  }
  return iVar4;
}



undefined4 raac_UnpackADIFHeader(int *param_1,int *param_2,uint *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined *puVar10;
  int iVar11;
  uint uVar12;
  byte *apbStack60 [6];
  
  if ((param_1 == (int *)0x0) || (iVar6 = *param_1, iVar6 == 0)) {
    return 0xfffffffe;
  }
  raac_SetBitstreamPointer(apbStack60,*param_4 + 7 >> 3,*param_2);
  raac_GetBits(apbStack60,*param_3);
  uVar1 = raac_GetBits(apbStack60,8);
  if ((((uVar1 == 0x41) && (uVar1 = raac_GetBits(apbStack60,8), uVar1 == 0x44)) &&
      (uVar1 = raac_GetBits(apbStack60,8), uVar1 == 0x49)) &&
     (uVar1 = raac_GetBits(apbStack60,8), uVar1 == 0x46)) {
    uVar1 = raac_GetBits(apbStack60,1);
    *(char *)(iVar6 + 0x1c) = (char)(uVar1 & 0xff);
    if ((uVar1 & 0xff) != 0) {
      puVar10 = (undefined *)(iVar6 + 0x2b);
      iVar8 = 0;
      do {
        uVar1 = raac_GetBits(apbStack60,8);
        iVar8 = iVar8 + 1;
        puVar10 = puVar10 + 1;
        *puVar10 = (char)uVar1;
      } while (iVar8 != 9);
    }
    uVar1 = raac_GetBits(apbStack60,1);
    *(char *)(iVar6 + 0x1d) = (char)uVar1;
    uVar1 = raac_GetBits(apbStack60,1);
    *(char *)(iVar6 + 0x1e) = (char)uVar1;
    uVar1 = raac_GetBits(apbStack60,1);
    *(char *)(iVar6 + 0x1f) = (char)uVar1;
    uVar1 = raac_GetBits(apbStack60,0x17);
    *(uint *)(iVar6 + 0x20) = uVar1;
    uVar1 = raac_GetBits(apbStack60,4);
    uVar1 = uVar1 + 1 & 0xff;
    *(char *)(iVar6 + 0x24) = (char)uVar1;
    if (*(char *)(iVar6 + 0x1f) == '\0') {
      uVar4 = raac_GetBits(apbStack60,0x14);
      uVar1 = (uint)*(byte *)(iVar6 + 0x24);
      *(uint *)(iVar6 + 0x28) = uVar4;
    }
    if (uVar1 != 0) {
      iVar8 = 0;
      do {
        iVar5 = iVar8 * 0x52;
        iVar8 = iVar8 + 1;
        raac_DecodeProgramConfigElement((undefined *)(iVar5 + iVar6 + 0x38),apbStack60);
      } while (iVar8 < (int)(uint)*(byte *)(iVar6 + 0x24));
    }
    raac_ByteAlignBitstream(apbStack60);
    uVar1 = (uint)*(byte *)(iVar6 + 0x24);
    if (0xf < uVar1 - 1) {
      *(undefined4 *)(iVar6 + 0x870) = 0xffffffff;
      *(undefined4 *)(iVar6 + 0x878) = 0xffffffff;
      return 0xfffffffc;
    }
    iVar11 = 0;
    iVar5 = 0;
    iVar8 = iVar6 + 0x38;
    do {
      uVar4 = (uint)*(byte *)(iVar8 + 8);
      if (uVar4 != 0) {
        iVar5 = -1;
        break;
      }
      iVar2 = iVar6 + 0x38 + iVar11;
      uVar9 = (uint)*(byte *)(iVar2 + 3);
      uVar7 = (uint)*(byte *)(iVar2 + 4);
      uVar12 = (uint)*(byte *)(iVar2 + 5);
      iVar5 = uVar9 + iVar5 + uVar7 + uVar12 + (uint)*(byte *)(iVar2 + 6);
      if (uVar9 != 0) {
        pbVar3 = (byte *)(iVar8 + 0xb);
        do {
          pbVar3 = pbVar3 + 1;
          uVar4 = uVar4 + 1;
          if ((*pbVar3 & 0x10) != 0) {
            iVar5 = iVar5 + 1;
          }
        } while ((int)uVar4 < (int)uVar9);
      }
      if (uVar7 != 0) {
        pbVar3 = (byte *)(iVar8 + 0x1a);
        iVar2 = 0;
        do {
          pbVar3 = pbVar3 + 1;
          iVar2 = iVar2 + 1;
          if ((*pbVar3 & 0x10) != 0) {
            iVar5 = iVar5 + 1;
          }
        } while (iVar2 < (int)uVar7);
      }
      if (uVar12 != 0) {
        pbVar3 = (byte *)(iVar8 + 0x29);
        iVar2 = 0;
        do {
          pbVar3 = pbVar3 + 1;
          iVar2 = iVar2 + 1;
          if ((*pbVar3 & 0x10) != 0) {
            iVar5 = iVar5 + 1;
          }
        } while (iVar2 < (int)uVar12);
      }
      iVar11 = iVar11 + 0x52;
      iVar8 = iVar8 + 0x52;
    } while (iVar11 != uVar1 * 0x52);
    *(int *)(iVar6 + 0x870) = iVar5;
    uVar4 = (uint)*(byte *)(iVar6 + 0x3a);
    if (uVar1 != 1) {
      if (uVar4 == *(byte *)(iVar6 + 0x8c)) {
        iVar8 = 1;
        do {
          iVar8 = iVar8 + 1;
          if ((int)uVar1 <= iVar8) goto LAB_000199c8;
        } while (uVar4 == *(byte *)(iVar8 * 0x52 + iVar6 + 0x3a));
      }
      uVar4 = 0xffffffff;
    }
LAB_000199c8:
    *(uint *)(iVar6 + 0x878) = uVar4;
    if (((iVar5 != -1) && (uVar4 != 0xffffffff)) && ((int)uVar4 < 0xc)) {
      iVar11 = *(int *)(iVar6 + 0x20);
      param_1[0xd] = -1;
      param_1[0xe] = -1;
      iVar8 = *(int *)(raac_sampRateTab + uVar4 * 4);
      param_1[0xf] = -1;
      param_1[0x13] = iVar11;
      param_1[0x15] = iVar8;
      param_1[0x14] = iVar5;
      iVar8 = *param_2;
      param_1[0x16] = (uint)*(byte *)(iVar6 + 0x39);
      param_1[0x18] = 0;
      iVar6 = raac_CalcBitsUsed((int *)apbStack60,iVar8,*param_3);
      uVar1 = *param_3;
      *param_2 = *param_2 + ((int)(iVar6 + uVar1) >> 3);
      *param_3 = iVar6 + uVar1 & 7;
      iVar8 = *param_4;
      *param_4 = iVar8 - iVar6;
      if (iVar8 - iVar6 < 0) {
        return 0xffffffff;
      }
      return 0;
    }
  }
  return 0xfffffffc;
}



undefined4 raac_SetRawBlockParams(int *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 == (int *)0x0) || (iVar3 = *param_1, iVar3 == 0)) {
    uVar1 = 0xfffffffe;
  }
  else {
    if (param_2 == 0) {
      piVar2 = (int *)(raac_sfBandTabLong + 0x288);
      param_1[0x16] = param_5;
      *(int *)(iVar3 + 0x870) = param_3;
      do {
        piVar2 = piVar2 + 1;
        iVar4 = *piVar2;
        if (iVar4 == param_4) {
          *(uint *)(iVar3 + 0x878) = param_2;
          goto LAB_00019b10;
        }
        param_2 = param_2 + 1;
      } while (param_2 != 0xc);
      uVar1 = 0xfffffffb;
    }
    else {
      param_2 = *(uint *)(iVar3 + 0x878);
      param_3 = *(int *)(iVar3 + 0x870);
      iVar4 = *(int *)(raac_sampRateTab + param_2 * 4);
LAB_00019b10:
      param_1[0x14] = param_3;
      param_1[0x15] = iVar4;
      if (param_2 < 0xc) {
        if (param_1[0x16] == 1) {
          uVar1 = 0;
        }
        else {
          uVar1 = 0xffffffea;
        }
      }
      else {
        uVar1 = 0xffffffea;
      }
    }
  }
  return uVar1;
}



undefined4 raac_PrepareRawBlock(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0) {
      uVar1 = 0xfffffffe;
    }
    else {
      uVar1 = 0;
      param_1[0x13] = 0;
      param_1[0xd] = -1;
      param_1[0xe] = -1;
      param_1[0xf] = -1;
      param_1[0x18] = 0;
    }
    return uVar1;
  }
  return 0xfffffffe;
}



undefined4 raac_FlushCodec(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return 0xfffffffe;
  }
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return 0xfffffffe;
  }
  raac_ClearBuffer(iVar1 + 0x5048,0x6000);
  raac_ClearBuffer(iVar1 + 0xb048,0x18);
  return 0;
}



undefined4 raac_IMDCT(int *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  ushort *puVar13;
  ushort *puVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  ushort *puVar20;
  int *piVar21;
  undefined1 *puVar22;
  int iVar23;
  int iVar24;
  int *piVar25;
  bool bVar26;
  int *local_60;
  ushort *local_5c;
  int *local_54;
  int local_44;
  ushort *local_40;
  int *local_3c;
  undefined1 *local_34;
  
  if ((param_1 == (int *)0x0) || (iVar17 = *param_1, iVar17 == 0)) {
    uVar5 = 0xffffffff;
  }
  else {
    if ((param_2 != 1) || (iVar2 = iVar17, *(int *)(iVar17 + 0x8f0) != 1)) {
      iVar2 = param_2 * 0x3a + iVar17;
    }
    puVar13 = (ushort *)(param_4 + param_3 * 2);
    if (*(char *)(iVar2 + 0x87d) == '\x02') {
      iVar11 = 0;
      do {
        iVar7 = iVar11 + param_2 * 0x1000;
        iVar11 = iVar11 + 0x200;
        raac_DCT4(0,(uint *)(iVar17 + 0x1048 + iVar7),*(int *)(iVar17 + (param_2 + 0x410) * 4));
      } while (iVar11 != 0x1000);
    }
    else {
      raac_DCT4(1,(uint *)(iVar17 + param_2 * 0x1000 + 0x1048),
                *(int *)(iVar17 + (param_2 + 0x410) * 4));
    }
    if (param_1[0x1d] == 0) {
      cVar1 = *(char *)(iVar2 + 0x87d);
      local_60 = (int *)puVar13;
      if (cVar1 == '\0') {
        iVar7 = param_1[0x14];
        iVar23 = iVar17 + param_3 * 0x1000;
        iVar11 = iVar17 + param_2 * 0x1000;
        uVar6 = *(uint *)(iVar17 + (param_3 + 0x2c12) * 4);
        piVar21 = (int *)(iVar11 + 0x1848);
        piVar9 = (int *)(iVar11 + 0x1844);
        if (uVar6 == 1) {
          puVar22 = raac_kbdWindow;
        }
        else {
          puVar22 = raac_sinWindow;
        }
        piVar8 = (int *)(puVar22 + 0x200);
        if (*(byte *)(iVar2 + 0x87e) == uVar6) {
          uVar6 = iVar23 + 0x504c;
          uVar12 = iVar23 + 0x6040;
          puVar13 = puVar13 + iVar7 * 0x3ff;
          do {
            iVar18 = *piVar21;
            iVar24 = *piVar8;
            iVar11 = piVar8[1];
            piVar8 = piVar8 + 2;
            iVar23 = (*(int *)(uVar6 - 4) -
                     (int)((ulonglong)((longlong)iVar24 * (longlong)iVar18) >> 0x20)) + 4;
            uVar3 = (ushort)(iVar23 >> 3);
            if (iVar23 >> 0x1f != iVar23 >> 0x12) {
              uVar3 = (ushort)(iVar23 >> 0x1f) ^ 0x7fff;
            }
            iVar23 = *(int *)(uVar12 + 4);
            *(ushort *)local_60 = uVar3;
            iVar23 = (int)((ulonglong)((longlong)iVar11 * (longlong)iVar18) >> 0x20) + iVar23 + 4;
            uVar3 = (ushort)(iVar23 >> 3);
            if (iVar23 >> 0x1f != iVar23 >> 0x12) {
              uVar3 = (ushort)(iVar23 >> 0x1f) ^ 0x7fff;
            }
            iVar23 = *piVar9;
            *puVar13 = uVar3;
            *(int *)(uVar12 + 4) = (int)((ulonglong)((longlong)iVar24 * (longlong)iVar23) >> 0x20);
            *(int *)(uVar6 - 4) = (int)((ulonglong)((longlong)iVar11 * (longlong)iVar23) >> 0x20);
            bVar26 = uVar6 < uVar12;
            uVar6 = uVar6 + 4;
            uVar12 = uVar12 - 4;
            piVar9 = piVar9 + -1;
            puVar13 = puVar13 + -iVar7;
            piVar21 = piVar21 + 1;
            local_60 = (int *)((int)local_60 + iVar7 * 2);
          } while (bVar26);
        }
        else {
          if (*(byte *)(iVar2 + 0x87e) == 1) {
            puVar22 = raac_kbdWindow;
          }
          else {
            puVar22 = raac_sinWindow;
          }
          piVar15 = (int *)(puVar22 + 0x200);
          uVar6 = iVar23 + 0x504c;
          uVar12 = iVar23 + 0x6040;
          puVar14 = puVar13 + iVar7 * 0x3ff;
          do {
            iVar18 = *piVar21;
            iVar23 = *piVar8;
            iVar11 = piVar8[1];
            piVar8 = piVar8 + 2;
            iVar24 = (*(int *)(uVar6 - 4) -
                     (int)((ulonglong)((longlong)iVar23 * (longlong)iVar18) >> 0x20)) + 4;
            uVar3 = (ushort)(iVar24 >> 3);
            iVar23 = *(int *)(uVar12 + 4);
            if (iVar24 >> 0x1f != iVar24 >> 0x12) {
              uVar3 = (ushort)(iVar24 >> 0x1f) ^ 0x7fff;
            }
            *puVar13 = uVar3;
            iVar11 = (int)((ulonglong)((longlong)iVar11 * (longlong)iVar18) >> 0x20) + iVar23 + 4;
            uVar3 = (ushort)(iVar11 >> 3);
            iVar23 = *piVar9;
            if (iVar11 >> 0x1f != iVar11 >> 0x12) {
              uVar3 = (ushort)(iVar11 >> 0x1f) ^ 0x7fff;
            }
            iVar11 = *piVar15;
            iVar24 = piVar15[1];
            *puVar14 = uVar3;
            piVar15 = piVar15 + 2;
            *(int *)(uVar12 + 4) = (int)((ulonglong)((longlong)iVar11 * (longlong)iVar23) >> 0x20);
            *(int *)(uVar6 - 4) = (int)((ulonglong)((longlong)iVar24 * (longlong)iVar23) >> 0x20);
            bVar26 = uVar6 < uVar12;
            uVar6 = uVar6 + 4;
            uVar12 = uVar12 - 4;
            piVar9 = piVar9 + -1;
            puVar14 = puVar14 + -iVar7;
            puVar13 = puVar13 + iVar7;
            piVar21 = piVar21 + 1;
          } while (bVar26);
        }
      }
      else {
        if (cVar1 == '\x01') {
          iVar7 = iVar17 + param_2 * 0x1000;
          iVar11 = iVar17 + param_3 * 0x1000;
          iVar23 = param_1[0x14];
          cVar1 = *(char *)(iVar2 + 0x87e);
          if (*(int *)(iVar17 + (param_3 + 0x2c12) * 4) == 1) {
            puVar22 = raac_kbdWindow;
          }
          else {
            puVar22 = raac_sinWindow;
          }
          piVar9 = (int *)(iVar11 + 0x6044);
          piVar21 = (int *)(puVar22 + 0x200);
          piVar8 = (int *)(iVar11 + 0x5048);
          puVar14 = puVar13 + iVar23 * 0x3ff;
          piVar15 = (int *)(iVar7 + 0x1844);
          piVar10 = (int *)(iVar7 + 0x1848);
          do {
            piVar25 = piVar10 + 1;
            iVar19 = *piVar10;
            iVar18 = *piVar21;
            iVar24 = piVar21[1];
            piVar21 = piVar21 + 2;
            iVar18 = (*piVar8 - (int)((ulonglong)((longlong)iVar18 * (longlong)iVar19) >> 0x20)) + 4
            ;
            uVar3 = (ushort)(iVar18 >> 3);
            iVar16 = *piVar9;
            if (iVar18 >> 0x1f != iVar18 >> 0x12) {
              uVar3 = (ushort)(iVar18 >> 0x1f) ^ 0x7fff;
            }
            *(ushort *)local_60 = uVar3;
            iVar24 = (int)((ulonglong)((longlong)iVar24 * (longlong)iVar19) >> 0x20) + iVar16 + 4;
            uVar3 = (ushort)(iVar24 >> 3);
            if (iVar24 >> 0x1f != iVar24 >> 0x12) {
              uVar3 = (ushort)(iVar24 >> 0x1f) ^ 0x7fff;
            }
            iVar24 = *piVar15;
            *puVar14 = uVar3;
            *piVar9 = 0;
            *piVar8 = iVar24 >> 1;
            piVar9 = piVar9 + -1;
            piVar8 = piVar8 + 1;
            puVar14 = puVar14 + -iVar23;
            piVar15 = piVar15 + -1;
            piVar10 = piVar25;
            local_60 = (int *)((int)local_60 + iVar23 * 2);
          } while (piVar25 != (int *)(iVar7 + 0x1f48));
          piVar9 = (int *)((int)(puVar22 + 0x200) + 0xe00);
          if (cVar1 == '\x01') {
            puVar22 = raac_kbdWindow;
          }
          else {
            puVar22 = raac_sinWindow;
          }
          uVar6 = iVar11 + 0x5940;
          uVar12 = iVar11 + 0x574c;
          local_60 = piVar25;
          local_54 = (int *)(puVar13 + iVar23 * 0x1c0);
          local_40 = puVar13 + iVar23 * 0x3ff + iVar23 * -0x1c0;
          local_3c = (int *)(iVar7 + 0x1144);
          do {
            iVar7 = *piVar9;
            iVar24 = piVar9[1];
            piVar9 = piVar9 + 2;
            iVar11 = *local_60;
            iVar7 = (*(int *)(uVar12 - 4) -
                    (int)((ulonglong)((longlong)iVar7 * (longlong)iVar11) >> 0x20)) + 4;
            uVar3 = (ushort)(iVar7 >> 3);
            iVar18 = *(int *)(uVar6 + 4);
            if (iVar7 >> 0x1f != iVar7 >> 0x12) {
              uVar3 = (ushort)(iVar7 >> 0x1f) ^ 0x7fff;
            }
            *(ushort *)local_54 = uVar3;
            iVar11 = (int)((ulonglong)((longlong)iVar24 * (longlong)iVar11) >> 0x20) + iVar18 + 4;
            uVar3 = (ushort)(iVar11 >> 3);
            if (iVar11 >> 0x1f != iVar11 >> 0x12) {
              uVar3 = (ushort)(iVar11 >> 0x1f) ^ 0x7fff;
            }
            iVar24 = *local_3c;
            iVar11 = *(int *)((int)puVar22 + 4);
            iVar7 = *(int *)puVar22;
            puVar22 = (undefined1 *)((int)puVar22 + 8);
            *local_40 = uVar3;
            *(int *)(uVar6 + 4) = (int)((ulonglong)((longlong)iVar7 * (longlong)iVar24) >> 0x20);
            bVar26 = uVar12 < uVar6;
            *(int *)(uVar12 - 4) = (int)((ulonglong)((longlong)iVar11 * (longlong)iVar24) >> 0x20);
            uVar6 = uVar6 - 4;
            uVar12 = uVar12 + 4;
            local_60 = local_60 + 1;
            local_54 = (int *)((int)local_54 + iVar23 * 2);
            local_40 = local_40 + -iVar23;
            local_3c = local_3c + -1;
          } while (bVar26);
        }
        else {
          if (cVar1 == '\x02') {
            iVar7 = iVar17 + param_3 * 0x1000;
            iVar23 = iVar17 + param_2 * 0x1000;
            iVar11 = param_1[0x14];
            piVar9 = (int *)(iVar7 + 0x5048);
            if (*(int *)(iVar17 + (param_3 + 0x2c12) * 4) == 1) {
              local_34 = raac_kbdWindow;
            }
            else {
              local_34 = raac_sinWindow;
            }
            if (*(char *)(iVar2 + 0x87e) == '\x01') {
              puVar22 = raac_kbdWindow;
            }
            else {
              puVar22 = raac_sinWindow;
            }
            puVar14 = puVar13;
            do {
              iVar24 = *piVar9;
              piVar21 = piVar9 + 1;
              piVar9 = piVar9 + 2;
              iVar24 = iVar24 + 4;
              iVar18 = *piVar21 + 4;
              uVar3 = (ushort)(iVar24 >> 3);
              if (iVar24 >> 0x1f != iVar24 >> 0x12) {
                uVar3 = (ushort)(iVar24 >> 0x1f) ^ 0x7fff;
              }
              uVar4 = (ushort)(iVar18 >> 3);
              if (iVar18 >> 0x1f != iVar18 >> 0x12) {
                uVar4 = (ushort)(iVar18 >> 0x1f) ^ 0x7fff;
              }
              *puVar14 = uVar3;
              puVar14[iVar11] = uVar4;
              puVar14 = puVar14 + iVar11 * 2;
            } while ((int *)(iVar7 + 0x5748) != piVar9);
            iVar24 = iVar23 + 0x114c;
            piVar21 = (int *)(iVar7 + 0x5940);
            puVar13 = puVar13 + iVar11 * 0x1c0;
            piVar9 = (int *)(iVar7 + 0x5748);
            local_60 = (int *)(puVar13 + iVar11 * 0x1c0 + iVar11 * 0x7f);
            local_54 = (int *)(iVar23 + 0x1144);
            do {
              local_5c = (ushort *)iVar24;
              piVar15 = piVar9 + 1;
              iVar7 = *(int *)local_34;
              piVar8 = (int *)((int)local_34 + 4);
              local_34 = (undefined1 *)((int)local_34 + 8);
              iVar7 = (*piVar9 -
                      (int)((ulonglong)((longlong)iVar7 * (longlong)*(int *)((int)local_5c + -4)) >>
                           0x20)) + 4;
              uVar3 = (ushort)(iVar7 >> 3);
              if (iVar7 >> 0x1f != iVar7 >> 0x12) {
                uVar3 = (ushort)(iVar7 >> 0x1f) ^ 0x7fff;
              }
              iVar7 = (int)((ulonglong)((longlong)*piVar8 * (longlong)*(int *)((int)local_5c + -4))
                           >> 0x20) + piVar21[1] + 4;
              puVar14 = puVar13 + iVar11;
              *puVar13 = uVar3;
              uVar3 = (ushort)(iVar7 >> 3);
              if (iVar7 >> 0x1f != iVar7 >> 0x12) {
                uVar3 = (ushort)(iVar7 >> 0x1f) ^ 0x7fff;
              }
              iVar24 = *local_54;
              iVar7 = *(int *)puVar22;
              iVar23 = *(int *)((int)puVar22 + 4);
              puVar22 = (undefined1 *)((int)puVar22 + 8);
              *(ushort *)local_60 = uVar3;
              piVar21[1] = (int)((ulonglong)((longlong)iVar7 * (longlong)iVar24) >> 0x20);
              *piVar9 = (int)((ulonglong)((longlong)iVar23 * (longlong)iVar24) >> 0x20);
              bVar26 = piVar15 < piVar21;
              iVar24 = (int)local_5c + 4;
              piVar21 = piVar21 + -1;
              puVar13 = puVar14;
              piVar9 = piVar15;
              local_60 = (int *)((int)local_60 + -iVar11 * 2);
              local_54 = local_54 + -1;
            } while (bVar26);
            local_54 = (int *)0x3;
            do {
              piVar9 = piVar15 + 0xbf;
              piVar15 = piVar15 + 0x40;
              puVar13 = puVar14 + iVar11 * 0x40;
              iVar7 = (int)local_5c + 0x104;
              puVar20 = puVar14 + iVar11 * 0x40 + iVar11 * 0x7f;
              puVar22 = (undefined1 *)((int)puVar22 + -0x200);
              local_60 = (int *)((int)local_5c + 0xfc);
              do {
                piVar8 = (int *)puVar22;
                local_5c = (ushort *)iVar7;
                piVar21 = piVar15;
                iVar19 = *(int *)((int)local_5c + -4);
                iVar7 = *piVar8;
                iVar23 = piVar8[1];
                puVar22 = (undefined1 *)(piVar8 + 2);
                iVar24 = ((piVar21[-0x80] + *piVar21) -
                         (int)((ulonglong)((longlong)iVar7 * (longlong)iVar19) >> 0x20)) + 4;
                uVar3 = (ushort)(iVar24 >> 3);
                iVar18 = *piVar9;
                if (iVar24 >> 0x1f != iVar24 >> 0x12) {
                  uVar3 = (ushort)(iVar24 >> 0x1f) ^ 0x7fff;
                }
                iVar24 = piVar9[-0x80];
                puVar14 = puVar13 + iVar11;
                *puVar13 = uVar3;
                iVar18 = (int)((ulonglong)((longlong)iVar23 * (longlong)iVar19) >> 0x20) +
                         iVar24 + iVar18 + 4;
                uVar3 = (ushort)(iVar18 >> 3);
                iVar24 = *local_60;
                if (iVar18 >> 0x1f != iVar18 >> 0x12) {
                  uVar3 = (ushort)(iVar18 >> 0x1f) ^ 0x7fff;
                }
                *puVar20 = uVar3;
                piVar10 = piVar9 + -1;
                *piVar9 = (int)((ulonglong)((longlong)iVar7 * (longlong)iVar24) >> 0x20);
                piVar15 = piVar21 + 1;
                *piVar21 = (int)((ulonglong)((longlong)iVar23 * (longlong)iVar24) >> 0x20);
                piVar9 = piVar10;
                puVar13 = puVar14;
                iVar7 = (int)local_5c + 4;
                puVar20 = puVar20 + -iVar11;
                local_60 = local_60 + -1;
              } while (piVar15 < piVar10);
              local_54 = (int *)((int)local_54 + -1);
            } while (local_54 != (int *)0x0);
            piVar8 = piVar8 + -0x7e;
            piVar9 = piVar21 + -0x2c0;
            piVar21 = piVar21 + -0x33f;
            piVar15 = (int *)((int)local_5c + 0xfc);
            iVar7 = (int)local_5c + 0x104;
            local_60 = (int *)(puVar14 + iVar11 * 0x40);
            do {
              iVar23 = iVar7;
              iVar18 = *(int *)(iVar23 + -4);
              iVar7 = *piVar8;
              iVar24 = piVar8[1];
              piVar8 = piVar8 + 2;
              iVar19 = ((piVar21[0x300] + piVar21[0x380]) -
                       (int)((ulonglong)((longlong)iVar7 * (longlong)iVar18) >> 0x20)) + 4;
              uVar3 = (ushort)(iVar19 >> 3);
              iVar16 = piVar9[0x300];
              if (iVar19 >> 0x1f != iVar19 >> 0x12) {
                uVar3 = (ushort)(iVar19 >> 0x1f) ^ 0x7fff;
              }
              *(ushort *)local_60 = uVar3;
              piVar9[-0x80] =
                   (int)((ulonglong)((longlong)iVar24 * (longlong)iVar18) >> 0x20) + iVar16;
              iVar18 = *piVar15;
              piVar25 = piVar9 + -1;
              *piVar9 = (int)((ulonglong)((longlong)iVar7 * (longlong)iVar18) >> 0x20);
              piVar10 = piVar21 + 1;
              *piVar21 = (int)((ulonglong)((longlong)iVar24 * (longlong)iVar18) >> 0x20);
              piVar9 = piVar25;
              piVar21 = piVar10;
              piVar15 = piVar15 + -1;
              iVar7 = iVar23 + 4;
              local_60 = (int *)((int)local_60 + iVar11 * 2);
            } while (piVar10 < piVar25);
            iVar11 = 3;
            do {
              piVar8 = piVar8 + -0x80;
              piVar9 = piVar10 + 0xbf;
              piVar10 = piVar10 + 0x40;
              iVar7 = iVar23 + 0x104;
              piVar21 = (int *)(iVar23 + 0xfc);
              do {
                iVar23 = iVar7;
                piVar25 = piVar10;
                iVar18 = *(int *)(iVar23 + -4);
                iVar24 = *piVar8;
                iVar7 = piVar8[1];
                piVar8 = piVar8 + 2;
                piVar25[-0x80] =
                     piVar25[-0x80] -
                     (int)((ulonglong)((longlong)iVar24 * (longlong)iVar18) >> 0x20);
                piVar9[-0x80] =
                     piVar9[-0x80] + (int)((ulonglong)((longlong)iVar7 * (longlong)iVar18) >> 0x20);
                iVar18 = *piVar21;
                piVar15 = piVar9 + -1;
                *piVar9 = (int)((ulonglong)((longlong)iVar24 * (longlong)iVar18) >> 0x20);
                piVar10 = piVar25 + 1;
                *piVar25 = (int)((ulonglong)((longlong)iVar7 * (longlong)iVar18) >> 0x20);
                piVar9 = piVar15;
                iVar7 = iVar23 + 4;
                piVar21 = piVar21 + -1;
              } while (piVar10 < piVar15);
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
            piVar9 = piVar25 + 0x41;
            do {
              *piVar9 = 0;
              piVar9[1] = 0;
              piVar9[2] = 0;
              piVar9[3] = 0;
              piVar9 = piVar9 + 4;
            } while (piVar25 + 0x201 != piVar9);
          }
          else {
            if (cVar1 == '\x03') {
              iVar11 = iVar17 + param_2 * 0x1000;
              iVar7 = iVar17 + param_3 * 0x1000;
              iVar23 = param_1[0x14];
              if (*(int *)(iVar17 + (param_3 + 0x2c12) * 4) == 1) {
                local_34 = raac_kbdWindow;
              }
              else {
                local_34 = raac_sinWindow;
              }
              if (*(char *)(iVar2 + 0x87e) == '\x01') {
                puVar22 = raac_kbdWindow;
              }
              else {
                puVar22 = raac_sinWindow;
              }
              local_3c = (int *)(puVar22 + 0x200);
              piVar9 = (int *)(iVar11 + 0x1848);
              piVar21 = (int *)(iVar7 + 0x6044);
              piVar8 = local_3c;
              puVar14 = puVar13 + iVar23 * 0x3ff;
              piVar15 = (int *)(iVar11 + 0x1844);
              piVar10 = (int *)(iVar7 + 0x5048);
              do {
                piVar25 = piVar9 + 1;
                iVar18 = *piVar9;
                iVar24 = *piVar10 + 4;
                iVar19 = *piVar21;
                uVar3 = (ushort)(iVar24 >> 3);
                if (iVar24 >> 0x1f != iVar24 >> 0x12) {
                  uVar3 = (ushort)(iVar24 >> 0x1f) ^ 0x7fff;
                }
                *(ushort *)local_60 = uVar3;
                iVar18 = (iVar18 >> 1) + iVar19 + 4;
                iVar24 = *piVar8;
                uVar3 = (ushort)(iVar18 >> 3);
                if (iVar18 >> 0x1f != iVar18 >> 0x12) {
                  uVar3 = (ushort)(iVar18 >> 0x1f) ^ 0x7fff;
                }
                iVar18 = *piVar15;
                iVar19 = piVar8[1];
                piVar8 = piVar8 + 2;
                *puVar14 = uVar3;
                *piVar21 = (int)((ulonglong)((longlong)iVar24 * (longlong)iVar18) >> 0x20);
                *piVar10 = (int)((ulonglong)((longlong)iVar19 * (longlong)iVar18) >> 0x20);
                piVar9 = piVar25;
                piVar21 = piVar21 + -1;
                puVar14 = puVar14 + -iVar23;
                piVar15 = piVar15 + -1;
                piVar10 = piVar10 + 1;
                local_60 = (int *)((int)local_60 + iVar23 * 2);
              } while (piVar25 != (int *)(iVar11 + 0x1f48));
              local_3c = local_3c + 0x380;
              uVar12 = iVar7 + 0x574c;
              uVar6 = iVar7 + 0x5940;
              puVar13 = puVar13 + iVar23 * 0x1c0;
              local_60 = piVar25;
              local_5c = puVar13 + iVar23 * 0x3ff + iVar23 * -0x1c0;
              local_54 = (int *)(iVar11 + 0x1144);
              do {
                iVar11 = *(int *)local_34;
                piVar9 = (int *)((int)local_34 + 4);
                local_34 = (undefined1 *)((int)local_34 + 8);
                iVar11 = (*(int *)(uVar12 - 4) -
                         (int)((ulonglong)((longlong)iVar11 * (longlong)*local_60) >> 0x20)) + 4;
                uVar3 = (ushort)(iVar11 >> 3);
                if (iVar11 >> 0x1f != iVar11 >> 0x12) {
                  uVar3 = (ushort)(iVar11 >> 0x1f) ^ 0x7fff;
                }
                iVar11 = (int)((ulonglong)((longlong)*piVar9 * (longlong)*local_60) >> 0x20) +
                         *(int *)(uVar6 + 4) + 4;
                *puVar13 = uVar3;
                iVar7 = *local_54;
                uVar3 = (ushort)(iVar11 >> 3);
                if (iVar11 >> 0x1f != iVar11 >> 0x12) {
                  uVar3 = (ushort)(iVar11 >> 0x1f) ^ 0x7fff;
                }
                iVar11 = *local_3c;
                iVar24 = local_3c[1];
                local_3c = local_3c + 2;
                *local_5c = uVar3;
                *(int *)(uVar6 + 4) = (int)((ulonglong)((longlong)iVar11 * (longlong)iVar7) >> 0x20)
                ;
                *(int *)(uVar12 - 4) =
                     (int)((ulonglong)((longlong)iVar24 * (longlong)iVar7) >> 0x20);
                bVar26 = uVar12 < uVar6;
                uVar12 = uVar12 + 4;
                uVar6 = uVar6 - 4;
                puVar13 = puVar13 + iVar23;
                local_60 = local_60 + 1;
                local_5c = local_5c + -iVar23;
                local_54 = local_54 + -1;
              } while (bVar26);
            }
          }
        }
      }
      param_1[param_2 + 2] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
    }
    else {
      cVar1 = *(char *)(iVar2 + 0x87d);
      if (cVar1 == '\0') {
        iVar11 = param_2 * 0x1000;
        raac_DecWindowOverlapNoClip
                  (iVar17 + iVar11 + 0x1048,iVar17 + param_3 * 0x1000 + 0x5048,
                   (int *)(iVar17 + iVar11 + 0x3048),(uint)*(byte *)(iVar2 + 0x87e),
                   *(int *)(iVar17 + (param_3 + 0x2c12) * 4));
      }
      else {
        if (cVar1 == '\x01') {
          iVar11 = param_2 * 0x1000;
          raac_DecWindowOverlapLongStartNoClip
                    (iVar17 + iVar11 + 0x1048,(int *)(iVar17 + param_3 * 0x1000 + 0x5048),
                     (int *)(iVar17 + iVar11 + 0x3048),(uint)*(byte *)(iVar2 + 0x87e),
                     *(int *)(iVar17 + (param_3 + 0x2c12) * 4));
        }
        else {
          if (cVar1 == '\x02') {
            iVar11 = param_2 * 0x1000;
            raac_DecWindowOverlapShortNoClip
                      (iVar17 + iVar11 + 0x1048,iVar17 + param_3 * 0x1000 + 0x5048,
                       iVar17 + iVar11 + 0x3048,(uint)*(byte *)(iVar2 + 0x87e),
                       *(int *)(iVar17 + (param_3 + 0x2c12) * 4));
          }
          else {
            if (cVar1 == '\x03') {
              iVar11 = param_2 * 0x1000;
              raac_DecWindowOverlapLongStopNoClip
                        (iVar17 + iVar11 + 0x1048,(undefined4 *)(iVar17 + param_3 * 0x1000 + 0x5048)
                         ,(undefined4 *)(iVar17 + iVar11 + 0x3048),(uint)*(byte *)(iVar2 + 0x87e),
                         *(int *)(iVar17 + (param_3 + 0x2c12) * 4));
            }
            else {
              iVar11 = param_2 << 0xc;
            }
          }
        }
      }
      iVar7 = param_1[0x18];
      if (iVar7 == 0) {
        iVar23 = param_1[0x14];
        do {
          iVar24 = iVar17 + iVar11 + iVar7;
          iVar7 = iVar7 + 4;
          iVar24 = *(int *)(iVar24 + 0x3048) + 4;
          uVar3 = (ushort)(iVar24 >> 3);
          if (iVar24 >> 0x1f != iVar24 >> 0x12) {
            uVar3 = (ushort)(iVar24 >> 0x1f) ^ 0x7fff;
          }
          *puVar13 = uVar3;
          puVar13 = puVar13 + iVar23;
        } while (iVar7 != 0x1000);
      }
      param_1[8] = 4;
      param_1[param_2 + 2] = iVar17 + iVar11 + 0x3048;
      param_1[9] = 3;
    }
    local_44 = param_3 + 0x2c12;
    uVar5 = 0;
    *(uint *)(iVar17 + local_44 * 4) = (uint)*(byte *)(iVar2 + 0x87e);
  }
  return uVar5;
}



void FUN_0001acc8(int param_1,byte **param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  uVar1 = raac_GetBits(param_2,4);
  *(uint *)(param_1 + 0xc14) = uVar1;
  uVar1 = raac_GetBits(param_2,2);
  *(uint *)(param_1 + 0xc18) = uVar1;
  uVar1 = raac_GetBits(param_2,4);
  *(uint *)(param_1 + 0xc1c) = uVar1;
  uVar1 = raac_GetBits(param_2,4);
  *(uint *)(param_1 + 0xc20) = uVar1;
  uVar1 = raac_GetBits(param_2,4);
  *(uint *)(param_1 + 0xc24) = uVar1;
  uVar1 = raac_GetBits(param_2,4);
  *(uint *)(param_1 + 0xc28) = uVar1;
  uVar1 = raac_GetBits(param_2,2);
  *(uint *)(param_1 + 0xc2c) = uVar1;
  uVar1 = raac_GetBits(param_2,3);
  *(uint *)(param_1 + 0xc30) = uVar1;
  uVar1 = raac_GetBits(param_2,4);
  *(uint *)(param_1 + 0xc34) = uVar1;
  uVar1 = raac_GetBits(param_2,1);
  *(uint *)(param_1 + 0xc38) = uVar1;
  if (*(int *)(param_1 + 0xc3c) == 1) {
    uVar1 = raac_GetBits(param_2,4);
    *(uint *)(param_1 + 0xc40) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0xc44) = uVar1;
  }
  else {
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0xc44) = uVar1;
  }
  if (uVar1 == 1) {
    uVar1 = raac_GetBits(param_2,4);
    *(uint *)(param_1 + 0xc48) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0xc4c) = uVar1;
  }
  else {
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0xc4c) = uVar1;
  }
  if (uVar1 == 1) {
    uVar1 = raac_GetBits(param_2,2);
    *(uint *)(param_1 + 0xc50) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0xc54) = uVar1;
  }
  if (0 < *(int *)(param_1 + 0xc20)) {
    iVar2 = 0;
    puVar3 = (uint *)(param_1 + 0xc54);
    do {
      uVar1 = raac_GetBits(param_2,1);
      iVar2 = iVar2 + 1;
      puVar3[1] = uVar1;
      uVar1 = raac_GetBits(param_2,4);
      puVar3[0x11] = uVar1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xc20));
  }
  if (0 < *(int *)(param_1 + 0xc24)) {
    iVar2 = 0;
    puVar3 = (uint *)(param_1 + 0xcd4);
    do {
      uVar1 = raac_GetBits(param_2,1);
      iVar2 = iVar2 + 1;
      puVar3[1] = uVar1;
      uVar1 = raac_GetBits(param_2,4);
      puVar3[0x11] = uVar1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xc24));
  }
  if (0 < *(int *)(param_1 + 0xc28)) {
    iVar2 = 0;
    puVar3 = (uint *)(param_1 + 0xd54);
    do {
      uVar1 = raac_GetBits(param_2,1);
      iVar2 = iVar2 + 1;
      puVar3[1] = uVar1;
      uVar1 = raac_GetBits(param_2,4);
      puVar3[0x11] = uVar1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xc28));
  }
  if (0 < *(int *)(param_1 + 0xc2c)) {
    iVar2 = 0;
    puVar3 = (uint *)(param_1 + 0xdd4);
    do {
      uVar1 = raac_GetBits(param_2,4);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = uVar1;
    } while (iVar2 < *(int *)(param_1 + 0xc2c));
  }
  if (0 < *(int *)(param_1 + 0xc30)) {
    iVar2 = 0;
    puVar3 = (uint *)(param_1 + 0xe14);
    do {
      uVar1 = raac_GetBits(param_2,4);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = uVar1;
    } while (iVar2 < *(int *)(param_1 + 0xc30));
  }
  if (0 < *(int *)(param_1 + 0xc34)) {
    iVar2 = 0;
    puVar3 = (uint *)(param_1 + 0xe54);
    do {
      uVar1 = raac_GetBits(param_2,1);
      iVar2 = iVar2 + 1;
      puVar3[1] = uVar1;
      uVar1 = raac_GetBits(param_2,4);
      puVar3[0x11] = uVar1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xc34));
  }
  raac_ByteAlignBitstream(param_2);
  uVar1 = raac_GetBits(param_2,8);
  *(uint *)(param_1 + 0xed8) = uVar1;
  if ((int)uVar1 < 1) {
    return;
  }
  iVar2 = 0;
  puVar3 = (uint *)(param_1 + 0xed8);
  do {
    uVar1 = raac_GetBits(param_2,8);
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = uVar1;
  } while (iVar2 < *(int *)(param_1 + 0xed8));
  return;
}



void FUN_0001b00c(int param_1,byte **param_2)

{
  uint uVar1;
  
  uVar1 = raac_GetBits(param_2,1);
  *(uint *)(param_1 + 0x924) = uVar1;
  uVar1 = raac_GetBits(param_2,2);
  *(uint *)(param_1 + 0x928) = uVar1;
  uVar1 = raac_GetBits(param_2,1);
  *(uint *)(param_1 + 0x92c) = uVar1;
  if (uVar1 == 0) {
    return;
  }
  uVar1 = raac_GetBits(param_2,1);
  *(uint *)(param_1 + 0xfd0) = uVar1;
  return;
}



void FUN_0001b064(byte **param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte local_12c [256];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  uVar1 = raac_GetBits(param_1,8);
  uVar2 = raac_GetBits(param_1,2);
  raac_GetBits(param_1,3);
  uVar3 = raac_GetBits(param_1,3);
  if (0 < (int)uVar1) {
    pbVar9 = local_12c;
    do {
      uVar4 = raac_GetBits(param_1,6);
      uVar4 = uVar4 & 0xff;
      pbVar10 = pbVar9 + 1;
      *pbVar9 = (byte)uVar4;
      if (uVar4 != 0) {
        iVar8 = 0;
        do {
          uVar4 = raac_GetBits(param_1,1);
          uVar5 = raac_GetBits(param_1,1);
          uVar6 = raac_GetBits(param_1,1);
          if (uVar3 != 1) {
            raac_GetBits(param_1,1);
          }
          uVar7 = raac_GetBits(param_1,2);
          if ((uVar7 & 0xff) == 0) {
            raac_GetBits(param_1,1);
          }
          if (uVar2 == 2) {
            raac_GetBits(param_1,2);
          }
          raac_GetBits(param_1,1);
          if ((uVar4 & 0xff) == 1) {
            uVar4 = 4;
          }
          else {
            uVar4 = 0x10;
          }
          raac_GetBits(param_1,uVar4);
          if ((uVar5 & 0xff) != 1) {
            if ((uVar7 & 0xff) == 0) {
              uVar4 = 5;
            }
            else {
              uVar4 = 7;
            }
            raac_GetBits(param_1,uVar4);
          }
          if ((uVar6 & 0xff) != 1) {
            raac_GetBits(param_1,5);
          }
          uVar4 = (uint)*pbVar9;
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)uVar4);
      }
      uVar5 = raac_GetBits(param_1,1);
      if ((uVar5 == 1) && (uVar4 != 0)) {
        uVar5 = 0;
        do {
          uVar5 = uVar5 + 1;
          raac_GetBits(param_1,6);
        } while (uVar5 != uVar4);
      }
      pbVar9 = pbVar10;
    } while (pbVar10 != local_12c + uVar1);
  }
  uVar1 = raac_GetBits(param_1,1);
  if (uVar1 == 1) {
    raac_GetBits(param_1,5);
    if (local_2c == __stack_chk_guard) {
      raac_GetBits(param_1,5);
      return;
    }
  }
  else {
    if (local_2c == __stack_chk_guard) {
      return;
    }
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



uint FUN_0001b298(byte **param_1)

{
  uint uVar1;
  
  uVar1 = raac_GetBits(param_1,5);
  if (uVar1 != 0x1f) {
    return uVar1;
  }
  uVar1 = raac_GetBits(param_1,6);
  return uVar1 + 0x20;
}



byte * FUN_0001b2c4(int param_1,byte **param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  bool bVar12;
  
  pbVar9 = param_2[3];
  pbVar3 = param_2[2];
  *(undefined4 *)(param_1 + 4) = 1;
  pbVar3 = pbVar3 + (int)pbVar9 * 8;
  uVar1 = FUN_0001b298(param_2);
  *(uint *)(param_1 + 0x30) = uVar1;
  uVar1 = raac_GetBits(param_2,4);
  *(uint *)(param_1 + 0x28) = uVar1;
  if (uVar1 == 0xf) {
    uVar1 = raac_GetBits(param_2,0x18);
    *(uint *)(param_1 + 0x8d8) = uVar1;
  }
  else {
    *(undefined4 *)(param_1 + 0x8d8) = *(undefined4 *)(&DAT_0003301c + uVar1 * 4);
  }
  uVar1 = raac_GetBits(param_2,4);
  uVar4 = *(uint *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x8e8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8ec) = 0xffffffff;
  bVar12 = uVar4 != 0x1d;
  if (uVar4 != 5 && bVar12) {
    *(undefined4 *)(param_1 + 0x8f0) = 0;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  if (uVar4 == 5 || !bVar12) {
    if (!bVar12) {
      *(undefined4 *)(param_1 + 0x8ec) = 1;
    }
    *(undefined4 *)(param_1 + 0x8f0) = 5;
    *(undefined4 *)(param_1 + 0x8e8) = 1;
    uVar1 = raac_GetBits(param_2,4);
    *(undefined *)(param_1 + 0x8e0) = 1;
    if (uVar1 == 0xf) {
      uVar1 = raac_GetBits(param_2,0x18);
      *(uint *)(param_1 + 0x8dc) = uVar1;
    }
    else {
      *(undefined4 *)(param_1 + 0x8dc) = *(undefined4 *)(&DAT_0003301c + uVar1 * 4);
    }
    uVar4 = FUN_0001b298(param_2);
    *(uint *)(param_1 + 0x30) = uVar4;
    if (uVar4 == 0x16) {
      uVar1 = raac_GetBits(param_2,4);
      uVar4 = *(uint *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x8f4) = uVar1;
    }
  }
  if (uVar4 == 2) {
    *(undefined4 *)(param_1 + 0x8e4) = 1;
    goto LAB_0001b4a0;
  }
  if (uVar4 == 1) {
    *(undefined4 *)(param_1 + 0x8e4) = 0;
    goto LAB_0001b4a0;
  }
  if (uVar4 == 3) {
    *(undefined4 *)(param_1 + 0x8e4) = 2;
    goto LAB_0001b4a0;
  }
  *(undefined4 *)(param_1 + 0x8e4) = 1;
  switch(uVar4) {
  case 1:
    goto LAB_0001b4a0;
  case 2:
    goto LAB_0001b4a0;
  case 3:
    goto LAB_0001b4a0;
  case 4:
    goto LAB_0001b4a0;
  case 5:
    break;
  case 6:
    goto LAB_0001b4a0;
  case 7:
    goto LAB_0001b4a0;
  case 8:
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x8f8) = uVar1;
    if (uVar1 != 0) {
      uVar1 = raac_GetBits(param_2,1);
      *(uint *)(param_1 + 0x904) = uVar1;
      uVar1 = raac_GetBits(param_2,1);
      *(uint *)(param_1 + 0x908) = uVar1;
      uVar1 = raac_GetBits(param_2,1);
      iVar5 = *(int *)(param_1 + 0x904);
      *(uint *)(param_1 + 0x90c) = uVar1;
      goto joined_r0x0001be80;
    }
LAB_0001b6ec:
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x8fc) = uVar1;
    if (uVar1 == 0) {
      uVar1 = raac_GetBits(param_2,2);
      uVar4 = *(uint *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x900) = uVar1;
    }
    else {
      uVar1 = raac_GetBits(param_2,2);
      uVar4 = *(uint *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x920) = uVar1;
    }
    break;
  case 9:
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x8f8) = uVar1;
    if (uVar1 == 0) goto LAB_0001b774;
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x924) = uVar1;
    uVar1 = raac_GetBits(param_2,2);
    *(uint *)(param_1 + 0x928) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    uVar4 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x92c) = uVar1;
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    uVar1 = raac_GetBits(param_2,5);
    *(uint *)(param_1 + 0x930) = uVar1;
    uVar1 = raac_GetBits(param_2,0x12);
    *(uint *)(param_1 + 0x934) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x938) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x93c) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x940) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x944) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x948) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x94c) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    uVar4 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x950) = uVar1;
    break;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
    break;
  case 0x10:
    break;
  case 0x11:
    goto LAB_0001b4a0;
  case 0x12:
    break;
  case 0x13:
    goto LAB_0001b4a0;
  case 0x14:
    goto LAB_0001b4a0;
  case 0x15:
    goto LAB_0001b4a0;
  case 0x16:
    goto LAB_0001b4a0;
  case 0x17:
LAB_0001b4a0:
    raac_GetBits(param_2,1);
    uVar1 = raac_GetBits(param_2,1);
    if (uVar1 != 0) {
      raac_GetBits(param_2,0xe);
    }
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x92c) = uVar1;
    if (*(int *)(param_1 + 0x2c) == 0) {
      FUN_0001acc8(param_1,param_2);
    }
    uVar4 = *(uint *)(param_1 + 0x30);
    if (uVar4 == 6 || uVar4 == 0x14) {
      raac_GetBits(param_2,3);
      uVar4 = *(uint *)(param_1 + 0x30);
    }
    if (*(int *)(param_1 + 0x92c) != 0) {
      if (uVar4 == 0x16) {
        raac_GetBits(param_2,5);
        raac_GetBits(param_2,0xb);
        uVar4 = *(uint *)(param_1 + 0x30);
      }
      if (((uVar4 == 0x11 || uVar4 == 0x13) || (uVar4 == 0x14)) || (uVar4 == 0x17)) {
        raac_GetBits(param_2,1);
        raac_GetBits(param_2,1);
        raac_GetBits(param_2,1);
      }
      raac_GetBits(param_2,1);
      uVar4 = *(uint *)(param_1 + 0x30);
    }
    break;
  case 0x18:
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x8f8) = uVar1;
    if (uVar1 == 0) goto LAB_0001b6ec;
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x904) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x908) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x90c) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    iVar5 = *(int *)(param_1 + 0x904);
    *(uint *)(param_1 + 0x954) = uVar1;
joined_r0x0001be80:
    if (iVar5 == 1) {
      uVar1 = raac_GetBits(param_2,3);
      iVar5 = *(int *)(param_1 + 0x904);
      *(uint *)(param_1 + 0x910) = uVar1;
    }
    if (iVar5 != 0) goto LAB_0001b774;
    uVar1 = raac_GetBits(param_2,5);
    *(uint *)(param_1 + 0x914) = uVar1;
    uVar1 = raac_GetBits(param_2,2);
    *(uint *)(param_1 + 0x918) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    uVar4 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x91c) = uVar1;
    break;
  case 0x19:
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x8f8) = uVar1;
    if (uVar1 == 0) goto LAB_0001b774;
    FUN_0001b00c(param_1,param_2);
    uVar4 = *(uint *)(param_1 + 0x30);
    break;
  case 0x1a:
    goto LAB_0001bc54;
  case 0x1b:
LAB_0001bc54:
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x8f8) = uVar1;
    if (uVar1 == 0) {
      uVar1 = raac_GetBits(param_2,1);
      *(uint *)(param_1 + 0x974) = uVar1;
      if (uVar1 == 0) goto LAB_0001b774;
      uVar1 = raac_GetBits(param_2,2);
      uVar4 = *(uint *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x978) = uVar1;
    }
    else {
      uVar1 = raac_GetBits(param_2,2);
      *(uint *)(param_1 + 0x95c) = uVar1;
      if ((uVar1 == 1) || (FUN_0001b00c(param_1,param_2), *(int *)(param_1 + 0x95c) != 0)) {
        uVar1 = raac_GetBits(param_2,1);
        *(uint *)(param_1 + 0x960) = uVar1;
        uVar1 = raac_GetBits(param_2,8);
        *(uint *)(param_1 + 0x964) = uVar1;
        uVar1 = raac_GetBits(param_2,4);
        *(uint *)(param_1 + 0x968) = uVar1;
        uVar1 = raac_GetBits(param_2,0xc);
        *(uint *)(param_1 + 0x96c) = uVar1;
        uVar1 = raac_GetBits(param_2,2);
        *(uint *)(param_1 + 0x970) = uVar1;
      }
      uVar1 = raac_GetBits(param_2,1);
      uVar4 = *(uint *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x958) = uVar1;
    }
    break;
  case 0x1c:
    uVar1 = raac_GetBits(param_2,2);
    *(uint *)(param_1 + 0x97c) = uVar1;
    uVar1 = raac_GetBits(param_2,4);
    *(uint *)(param_1 + 0x980) = uVar1;
    uVar1 = raac_GetBits(param_2,2);
    *(uint *)(param_1 + 0x984) = uVar1;
    if (*(int *)(param_1 + 0x2c) != 1) {
      uVar1 = raac_GetBits(param_2,2);
      uVar4 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x988) = uVar1;
      if (uVar4 == 2) {
        if (uVar1 == 1) goto LAB_0001bbac;
        uVar4 = *(uint *)(param_1 + 0x30);
        break;
      }
    }
    goto LAB_0001b774;
  case 0x1d:
    break;
  case 0x1e:
    uVar1 = raac_GetBits(param_2,1);
    uVar4 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x98c) = uVar1;
    break;
  case 0x1f:
    break;
  case 0x20:
    goto LAB_0001bbbc;
  case 0x21:
    goto LAB_0001bbbc;
  case 0x22:
LAB_0001bbbc:
    uVar1 = raac_GetBits(param_2,1);
    uVar4 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x990) = uVar1;
    break;
  case 0x23:
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x994) = uVar1;
    uVar1 = raac_GetBits(param_2,0xe);
    uVar4 = 1;
    *(uint *)(param_1 + 0x998) = uVar1;
LAB_0001bbac:
    raac_GetBits(param_2,uVar4);
    uVar4 = *(uint *)(param_1 + 0x30);
    break;
  case 0x24:
    uVar1 = raac_GetBits(param_2,5);
    *(uint *)(param_1 + 0xfd4) = uVar1;
    uVar1 = raac_GetBits(param_2,0x20);
    *(uint *)(param_1 + 0x99c) = uVar1;
    uVar1 = raac_GetBits(param_2,0x20);
    *(uint *)(param_1 + 0x9a0) = uVar1;
    uVar1 = raac_GetBits(param_2,0x20);
    *(uint *)(param_1 + 0x9a4) = uVar1;
    uVar1 = raac_GetBits(param_2,0x10);
    *(uint *)(param_1 + 0x9a8) = uVar1;
    uVar1 = raac_GetBits(param_2,3);
    *(uint *)(param_1 + 0x9ac) = uVar1;
    uVar1 = raac_GetBits(param_2,3);
    *(uint *)(param_1 + 0x9b0) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x9b4) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x9b8) = uVar1;
    uVar1 = raac_GetBits(param_2,0x10);
    *(uint *)(param_1 + 0x9bc) = uVar1;
    uVar1 = raac_GetBits(param_2,8);
    *(uint *)(param_1 + 0x9c0) = uVar1;
    uVar1 = raac_GetBits(param_2,2);
    *(uint *)(param_1 + 0x9c4) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x9c8) = uVar1;
    uVar1 = raac_GetBits(param_2,2);
    *(uint *)(param_1 + 0x9cc) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x9d0) = uVar1;
    uVar1 = raac_GetBits(param_2,10);
    *(uint *)(param_1 + 0x9d4) = uVar1;
    uVar1 = raac_GetBits(param_2,2);
    *(uint *)(param_1 + 0x9d8) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x9dc) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x9e0) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x9e4) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x9e8) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x9ec) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x9f0) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x9f4) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x9f8) = uVar1;
    raac_GetBits(param_2,1);
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x9fc) = uVar1;
    if (*(int *)(param_1 + 0x9ec) != 0) {
      uVar1 = raac_GetBits(param_2,0x10);
      *(uint *)(param_1 + 0xa00) = uVar1;
    }
    if (*(int *)(param_1 + 0x9f0) != 0) {
      uVar4 = *(int *)(param_1 + 0x9a8) + 1;
      uVar1 = uVar4 >> 1;
      if (uVar1 != 0) {
        iVar5 = 0;
        do {
          uVar1 = uVar1 >> 1;
          iVar5 = iVar5 + 1;
        } while (uVar1 != 0);
        uVar1 = iVar5 * uVar4;
      }
      if (-1 < *(int *)(param_1 + 0x9a8)) {
        puVar7 = (uint *)(param_1 + 0xa00);
        iVar5 = 0;
        do {
          uVar4 = raac_GetBits(param_2,uVar1);
          iVar5 = iVar5 + 1;
          puVar7 = puVar7 + 1;
          *puVar7 = uVar4;
        } while (iVar5 <= *(int *)(param_1 + 0x9a8));
      }
    }
    raac_ByteAlignBitstream(param_2);
    uVar1 = raac_GetBits(param_2,0x20);
    *(uint *)(param_1 + 0xa44) = uVar1;
    uVar1 = raac_GetBits(param_2,0x20);
    *(uint *)(param_1 + 0xa48) = uVar1;
    if (0 < *(int *)(param_1 + 0xa44)) {
      iVar5 = 0;
      puVar8 = (undefined *)(param_1 + 0xa4b);
      do {
        uVar1 = raac_GetBits(param_2,8);
        iVar5 = iVar5 + 1;
        puVar8 = puVar8 + 1;
        *puVar8 = (char)uVar1;
      } while (iVar5 < *(int *)(param_1 + 0xa44));
      uVar1 = *(uint *)(param_1 + 0xa48);
    }
    if (0 < (int)uVar1) {
      iVar5 = 0;
      puVar8 = (undefined *)(param_1 + 0xa8b);
      do {
        uVar1 = raac_GetBits(param_2,8);
        iVar5 = iVar5 + 1;
        puVar8 = puVar8 + 1;
        *puVar8 = (char)uVar1;
      } while (iVar5 < *(int *)(param_1 + 0xa48));
    }
    if (*(int *)(param_1 + 0x9f4) != 0) {
      uVar1 = raac_GetBits(param_2,0x20);
      *(uint *)(param_1 + 0xacc) = uVar1;
    }
    if (((*(int *)(param_1 + 0x9c4) == 2) && (0 < *(int *)(param_1 + 0x9c0))) &&
       (iVar5 = __aeabi_idiv(*(int *)(param_1 + 0x9a4) + -1,*(int *)(param_1 + 0x9bc) + 1),
       -1 < iVar5)) {
      iVar5 = 0;
      puVar7 = (uint *)(param_1 + 0xacc);
      do {
        uVar1 = raac_GetBits(param_2,0x20);
        iVar5 = iVar5 + 1;
        puVar7 = puVar7 + 1;
        *puVar7 = uVar1;
        iVar6 = __aeabi_idiv(*(int *)(param_1 + 0x9a4) + -1,*(int *)(param_1 + 0x9bc) + 1);
      } while (iVar5 <= iVar6);
    }
    if (*(int *)(param_1 + 0x9fc) != 0) {
      uVar1 = raac_GetBits(param_2,0x20);
      *(uint *)(param_1 + 0xbd0) = uVar1;
      if (0 < (int)uVar1) {
        iVar5 = 0;
        puVar8 = (undefined *)(param_1 + 0xbd3);
        do {
          uVar1 = raac_GetBits(param_2,8);
          iVar5 = iVar5 + 1;
          puVar8 = puVar8 + 1;
          *puVar8 = (char)uVar1;
        } while (iVar5 < *(int *)(param_1 + 0xbd0));
        uVar4 = *(uint *)(param_1 + 0x30);
        break;
      }
    }
    goto LAB_0001b774;
  case 0x25:
    goto LAB_0001b71c;
  case 0x26:
LAB_0001b71c:
    uVar1 = raac_GetBits(param_2,3);
    *(uint *)(param_1 + 0xf1c) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0xf20) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0xf24) = uVar1;
    raac_GetBits(param_2,1);
    uVar1 = raac_GetBits(param_2,3);
    *(uint *)(param_1 + 0xf28) = uVar1;
    if (*(int *)(param_1 + 0x2c) != 0) goto LAB_0001b774;
    FUN_0001acc8(param_1,param_2);
    uVar4 = *(uint *)(param_1 + 0x30);
    break;
  case 0x27:
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0xf64) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0xf68) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0xf6c) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0xf70) = uVar1;
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0xf74) = uVar1;
    if (uVar1 != 0) {
      uVar1 = raac_GetBits(param_2,1);
      *(uint *)(param_1 + 0xf78) = uVar1;
      uVar1 = raac_GetBits(param_2,1);
      uVar4 = *(int *)(param_1 + 0x2c) - 1;
      *(uint *)(param_1 + 0xf7c) = uVar1;
      if ((uVar4 < 7) && (iVar5 = *(int *)(&DAT_0003305c + uVar4 * 4), 0 < iVar5)) {
        iVar6 = 0;
        do {
          uVar1 = raac_GetBits(param_2,1);
          iVar6 = iVar6 + 1;
          *(uint *)(param_1 + 0xf2c) = uVar1;
          uVar1 = raac_GetBits(param_2,4);
          *(uint *)(param_1 + 0xf30) = uVar1;
          uVar1 = raac_GetBits(param_2,4);
          *(uint *)(param_1 + 0xf34) = uVar1;
          uVar1 = raac_GetBits(param_2,3);
          *(uint *)(param_1 + 0xf38) = uVar1;
          uVar1 = raac_GetBits(param_2,2);
          *(uint *)(param_1 + 0xf3c) = uVar1;
          uVar1 = raac_GetBits(param_2,1);
          *(uint *)(param_1 + 0xf40) = uVar1;
          uVar1 = raac_GetBits(param_2,1);
          *(uint *)(param_1 + 0xf44) = uVar1;
          if (*(int *)(param_1 + 0xf40) != 0) {
            uVar1 = raac_GetBits(param_2,2);
            *(uint *)(param_1 + 0xf48) = uVar1;
            uVar1 = raac_GetBits(param_2,1);
            *(uint *)(param_1 + 0xf4c) = uVar1;
            uVar4 = raac_GetBits(param_2,2);
            uVar1 = *(uint *)(param_1 + 0xf44);
            *(uint *)(param_1 + 0xf50) = uVar4;
          }
          if (uVar1 != 0) {
            uVar1 = raac_GetBits(param_2,2);
            *(uint *)(param_1 + 0xf54) = uVar1;
            uVar1 = raac_GetBits(param_2,2);
            *(uint *)(param_1 + 0xf58) = uVar1;
            uVar1 = raac_GetBits(param_2,1);
            *(uint *)(param_1 + 0xf5c) = uVar1;
            uVar1 = raac_GetBits(param_2,1);
            *(uint *)(param_1 + 0xf60) = uVar1;
          }
        } while (iVar6 != iVar5);
      }
    }
    while( true ) {
      uVar1 = raac_GetBits(param_2,4);
      *(uint *)(param_1 + 0xf80) = uVar1;
      if (uVar1 == 0) break;
      uVar1 = raac_GetBits(param_2,4);
      *(uint *)(param_1 + 0xf84) = uVar1;
      if (uVar1 == 0xf) {
        uVar4 = raac_GetBits(param_2,8);
        uVar1 = uVar4 + 0xf;
        *(uint *)(param_1 + 0xf88) = uVar4;
      }
      else {
        uVar4 = *(uint *)(param_1 + 0xf88);
      }
      if (uVar4 == 0xff) {
        uVar4 = raac_GetBits(param_2,0x10);
        uVar1 = uVar1 + uVar4;
        *(uint *)(param_1 + 0xf8c) = uVar4;
      }
      if (0 < (int)uVar1) {
        puVar8 = (undefined *)(param_1 + 0xf8f);
        uVar4 = 0;
        do {
          uVar2 = raac_GetBits(param_2,8);
          uVar4 = uVar4 + 1;
          puVar8 = puVar8 + 1;
          *puVar8 = (char)uVar2;
        } while (uVar4 != uVar1);
      }
    }
LAB_0001b774:
    uVar4 = *(uint *)(param_1 + 0x30);
  }
  if ((((uVar4 - 0x11 < 0x17) && ((1 << (uVar4 - 0x11 & 0xff) & 0x4007fdU) != 0)) &&
      (uVar1 = raac_GetBits(param_2,2), uVar1 - 2 < 2)) && (FUN_0001b064(param_2), uVar1 == 3)) {
    raac_GetBits(param_2,1);
  }
  iVar5 = *(int *)(param_1 + 0x8f0);
  bVar12 = iVar5 + -5 < 0;
  bVar11 = iVar5 == 5;
  if (!bVar11) {
    bVar12 = param_3 < 0;
  }
  pbVar9 = pbVar3 + -(int)(param_2[2] + (int)param_2[3] * 8);
  if ((bVar11 || param_3 == 0) || bVar12 != (bVar11 && SBORROW4(iVar5,5))) {
    return pbVar9;
  }
  if ((int)(pbVar9 + param_3) < 0x10) {
    return pbVar9;
  }
  uVar1 = raac_GetBits(param_2,0xb);
  if (uVar1 != 0x2b7) goto LAB_0001b5bc;
  raac_GetBits(param_2,0xb);
  uVar1 = FUN_0001b298(param_2);
  *(uint *)(param_1 + 0x8f0) = uVar1;
  if (uVar1 == 5) {
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x8e8) = uVar1;
    if (uVar1 == 1) {
      uVar1 = raac_GetBits(param_2,4);
      if (uVar1 == 0xf) {
        uVar1 = raac_GetBits(param_2,0x18);
        *(uint *)(param_1 + 0x8dc) = uVar1;
      }
      else {
        *(undefined4 *)(param_1 + 0x8dc) = *(undefined4 *)(&DAT_0003301c + uVar1 * 4);
      }
      if ((0xb < (int)(pbVar3 + (param_3 - (int)(param_2[2] + (int)param_2[3] * 8)))) &&
         (uVar1 = raac_GetBits(param_2,0xb), uVar1 == 0x548)) {
        uVar4 = raac_GetBits(param_2,1);
        uVar1 = *(uint *)(param_1 + 0x8f0);
        *(uint *)(param_1 + 0x8ec) = uVar4;
        goto LAB_0001b624;
      }
    }
    uVar1 = *(uint *)(param_1 + 0x8f0);
  }
LAB_0001b624:
  if (uVar1 == 0x16) {
    uVar1 = raac_GetBits(param_2,1);
    *(uint *)(param_1 + 0x8e8) = uVar1;
    if (uVar1 == 1) {
      uVar1 = raac_GetBits(param_2,4);
      if (uVar1 == 0xf) {
        uVar1 = raac_GetBits(param_2,0x18);
        *(uint *)(param_1 + 0x8dc) = uVar1;
      }
      else {
        *(undefined4 *)(param_1 + 0x8dc) = *(undefined4 *)(&DAT_0003301c + uVar1 * 4);
      }
    }
    uVar1 = raac_GetBits(param_2,4);
    pbVar10 = param_2[3];
    pbVar9 = param_2[2];
    *(uint *)(param_1 + 0x8f4) = uVar1;
    return pbVar3 + -(int)(pbVar9 + (int)pbVar10 * 8);
  }
LAB_0001b5bc:
  return pbVar3 + -(int)(param_2[2] + (int)param_2[3] * 8);
}



int FUN_0001c298(byte **param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = raac_GetBits(param_1,2);
  if ((int)uVar1 < 0) {
    iVar4 = 0;
  }
  else {
    iVar3 = 0;
    iVar4 = 0;
    do {
      iVar3 = iVar3 + 1;
      uVar2 = raac_GetBits(param_1,8);
      iVar4 = iVar4 * 10 + uVar2;
    } while (iVar3 <= (int)uVar1);
  }
  return iVar4;
}



void * latm_init(void)

{
  void *__s;
  
  __s = malloc(0xfdc);
  if (__s != (void *)0x0) {
    memset(__s,0,0xfdc);
  }
  return __s;
}



void * raac_latm_reset(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0xfdc);
  }
  return param_1;
}



undefined4 latm_exit(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return 0;
}



undefined4 latm_getinfo(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



void AudioAACaacframe_latm(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint *local_44;
  byte *apbStack60 [2];
  int local_34;
  int local_30;
  
  raac_SetBitstreamPointer(apbStack60,param_2,param_3);
  uVar1 = raac_GetBits(apbStack60,0xb);
  if (uVar1 == 0x2b7) {
    uVar1 = raac_GetBits(apbStack60,0xd);
    param_1[0x235] = uVar1;
    uVar1 = raac_GetBits(apbStack60,1);
    if (uVar1 == 0) {
      uVar1 = raac_GetBits(apbStack60,1);
      param_1[2] = uVar1;
      if (uVar1 == 1) {
        uVar1 = raac_GetBits(apbStack60,1);
        *param_1 = uVar1;
        if (uVar1 != 0) goto LAB_0001c37c;
        if (param_1[2] == 1) {
          FUN_0001c298(apbStack60);
        }
      }
      else {
        *param_1 = 0;
      }
      uVar1 = raac_GetBits(apbStack60,1);
      param_1[3] = uVar1;
      uVar1 = raac_GetBits(apbStack60,6);
      param_1[6] = uVar1;
      uVar1 = raac_GetBits(apbStack60,4);
      param_1[4] = uVar1;
      if (-1 < (int)uVar1) {
        uVar1 = 0;
        uVar3 = 0;
        do {
          uVar5 = raac_GetBits(apbStack60,3);
          param_1[5] = uVar5;
          if (-1 < (int)uVar5) {
            puVar7 = param_1 + uVar3 * 8 + 0x10d;
            local_44 = param_1 + uVar1 + 0x8c;
            puVar11 = param_1 + uVar1 + 0xc;
            uVar5 = 0;
            puVar8 = param_1;
            do {
              while( true ) {
                puVar11 = puVar11 + 1;
                *puVar11 = uVar3;
                local_44 = local_44 + 1;
                *local_44 = uVar5;
                *puVar7 = uVar1;
                uVar1 = uVar1 + 1;
                if (((uVar5 | uVar3) == 0) || (uVar4 = raac_GetBits(apbStack60,1), uVar4 == 0)) {
                  if (param_1[2] == 0) {
                    FUN_0001b2c4((int)param_1,apbStack60,0);
                  }
                  else {
                    iVar9 = FUN_0001c298(apbStack60);
                    pbVar2 = FUN_0001b2c4((int)param_1,apbStack60,iVar9);
                    raac_GetBits(apbStack60,iVar9 - (int)pbVar2);
                  }
                }
                uVar10 = *puVar7;
                uVar4 = raac_GetBits(apbStack60,3);
                param_1[uVar10 + 0x18d] = uVar4;
                uVar4 = param_1[*puVar7 + 0x18d];
                if (uVar4 == 0) break;
                if (uVar4 == 1) {
                  raac_GetBits(apbStack60,9);
                }
                else {
                  if (uVar4 - 3 < 3) goto LAB_0001c668;
                  if (uVar4 - 6 < 2) {
                    raac_GetBits(apbStack60,1);
                  }
                }
LAB_0001c5cc:
                uVar5 = uVar5 + 1;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
                if ((int)param_1[5] < (int)uVar5) goto LAB_0001c68c;
              }
              raac_GetBits(apbStack60,8);
              if (((param_1[3] != 0) || (puVar8[0x20d] != 6 && puVar8[0x20d] != 0x14)) ||
                 (puVar8[0x20c] != 8 && puVar8[0x20c] != 0x18)) goto LAB_0001c5cc;
LAB_0001c668:
              raac_GetBits(apbStack60,6);
              uVar5 = uVar5 + 1;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            } while ((int)uVar5 <= (int)param_1[5]);
          }
LAB_0001c68c:
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 <= (int)param_1[4]);
      }
      uVar1 = raac_GetBits(apbStack60,1);
      param_1[7] = uVar1;
      if (uVar1 != 0) {
        if (param_1[2] == 1) {
          uVar1 = FUN_0001c298(apbStack60);
          param_1[8] = uVar1;
        }
        else {
          uVar1 = 0;
          do {
            param_1[8] = uVar1 << 8;
            uVar3 = raac_GetBits(apbStack60,1);
            uVar1 = raac_GetBits(apbStack60,8);
            uVar1 = uVar1 + param_1[8];
            param_1[8] = uVar1;
          } while (uVar3 != 0);
        }
      }
      uVar1 = raac_GetBits(apbStack60,1);
      if (uVar1 != 0) {
        raac_GetBits(apbStack60,8);
      }
    }
    uVar1 = *param_1;
    if (uVar1 == 0) {
      uVar3 = param_1[6];
      if (-1 < (int)uVar3) {
        do {
          uVar5 = param_1[3];
          if (uVar5 == 0) {
            uVar3 = raac_GetBits(apbStack60,4);
            param_1[9] = uVar3;
            if (-1 < (int)uVar3) {
              puVar8 = param_1 + 0x214;
              do {
                uVar3 = raac_GetBits(apbStack60,4);
                uVar4 = (param_1 + uVar3)[0xd];
                puVar8[1] = uVar4;
                uVar3 = (param_1 + uVar3)[0x8d];
                puVar8[0x11] = uVar3;
                uVar3 = param_1[param_1[uVar3 + uVar4 * 8 + 0x10d] + 0x18d];
                if (uVar3 == 0) {
                  do {
                    uVar3 = raac_GetBits(apbStack60,8);
                  } while (uVar3 == 0xff);
                  raac_GetBits(apbStack60,1);
                }
                else {
                  if ((uVar3 == 5 || uVar3 == 7) || (uVar3 == 3)) {
                    raac_GetBits(apbStack60,2);
                  }
                }
                uVar5 = uVar5 + 1;
                puVar8 = puVar8 + 1;
              } while ((int)uVar5 <= (int)param_1[9]);
            }
LAB_0001c470:
            uVar3 = param_1[6];
          }
          else {
            uVar5 = param_1[4];
            if (-1 < (int)uVar5) {
              uVar3 = param_1[5];
              iVar9 = 0;
              do {
                if (-1 < (int)uVar3) {
                  iVar6 = 0;
                  puVar8 = param_1 + iVar9 * 8 + 0x10c;
                  do {
                    while( true ) {
                      puVar8 = puVar8 + 1;
                      uVar5 = param_1[*puVar8 + 0x18d];
                      if (uVar5 != 0) break;
                      do {
                        uVar3 = raac_GetBits(apbStack60,8);
                      } while (uVar3 == 0xff);
                      uVar3 = param_1[5];
LAB_0001c454:
                      iVar6 = iVar6 + 1;
                      if ((int)uVar3 < iVar6) goto LAB_0001c460;
                    }
                    if ((uVar5 == 5 || uVar5 == 7) || (uVar5 == 3)) {
                      raac_GetBits(apbStack60,2);
                      uVar3 = param_1[5];
                      goto LAB_0001c454;
                    }
                    iVar6 = iVar6 + 1;
                  } while (iVar6 <= (int)uVar3);
LAB_0001c460:
                  uVar5 = param_1[4];
                }
                iVar9 = iVar9 + 1;
              } while (iVar9 <= (int)uVar5);
              goto LAB_0001c470;
            }
          }
          uVar1 = uVar1 + 1;
        } while ((int)uVar1 <= (int)uVar3);
      }
      if (((param_1[7] != 0) && ((int)param_1[8] < 0x401)) && (0 < (int)param_1[8])) {
        iVar9 = 0;
        do {
          raac_GetBits(apbStack60,1);
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)param_1[8]);
      }
    }
  }
LAB_0001c37c:
  param_1[0x3f6] = local_34 + local_30 * 8;
  return;
}



int FUN_0001c85c(byte **param_1)

{
  uint uVar1;
  byte *pbVar2;
  int local_14;
  
  uVar1 = raac_GetBitsNoAdvance(param_1,0x13);
  pbVar2 = raac_DecodeHuffmanScalar
                     ((int)raac_huffTabScaleFact,(int)raac_huffTabScaleFactInfo,uVar1 << 0xd,
                      &local_14);
  raac_AdvanceBitstream(param_1,(uint)pbVar2);
  return local_14;
}



undefined4 raac_DecodeICSInfo(byte **param_1,undefined *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  bool bVar7;
  
  uVar1 = raac_GetBits(param_1,1);
  *param_2 = (char)uVar1;
  uVar1 = raac_GetBits(param_1,2);
  param_2[1] = (char)uVar1;
  uVar1 = raac_GetBits(param_1,1);
  param_2[2] = (char)uVar1;
  if (param_2[1] == '\x02') {
    uVar1 = raac_GetBits(param_1,4);
    param_2[3] = (char)uVar1;
    uVar6 = raac_GetBits(param_1,7);
    uVar2 = 1;
    iVar4 = 7;
    uVar1 = 0x40;
    param_2[0x31] = 1;
    param_2[0x32] = 1;
    uVar6 = uVar6 & 0xff;
    param_2[4] = (char)uVar6;
    while( true ) {
      bVar7 = (uVar6 & uVar1) == 0;
      uVar6 = uVar2 + 1 & 0xff;
      if (bVar7) {
        param_2[0x31] = (char)uVar6;
        uVar3 = uVar6;
      }
      else {
        uVar3 = (uint)(byte)(param_2 + (uVar2 - 1))[0x32];
      }
      uVar1 = (int)uVar1 >> 1;
      if (bVar7) {
        param_2[uVar6 + 0x31] = 1;
      }
      else {
        (param_2 + (uVar2 - 1))[0x32] = (char)uVar3 + '\x01';
      }
      iVar4 = iVar4 + -1;
      if (iVar4 == 0) break;
      uVar6 = (uint)(byte)param_2[4];
      uVar2 = (uint)(byte)param_2[0x31];
    }
    return 0;
  }
  uVar1 = raac_GetBits(param_1,6);
  param_2[3] = (char)(uVar1 & 0xff);
  if (0x34 < (uVar1 & 0xff)) {
    return 0xffffffe8;
  }
  uVar1 = raac_GetBits(param_1,1);
  param_2[5] = (char)(uVar1 & 0xff);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = raac_GetBits(param_1,1);
    param_2[6] = (char)(uVar1 & 0xff);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = raac_GetBits(param_1,5);
      param_2[7] = (char)uVar1;
    }
    uVar6 = *(uint *)(raac_predSFBMax + param_3 * 4);
    uVar1 = uVar6;
    if ((int)(uint)(byte)param_2[3] <= (int)uVar6) {
      uVar1 = (uint)(byte)param_2[3];
    }
    if (0 < (int)uVar1) {
      puVar5 = param_2 + 7;
      iVar4 = 0;
      do {
        uVar1 = raac_GetBits(param_1,1);
        iVar4 = iVar4 + 1;
        puVar5 = puVar5 + 1;
        *puVar5 = (char)uVar1;
        uVar1 = uVar6;
        if ((int)(uint)(byte)param_2[3] <= (int)uVar6) {
          uVar1 = (uint)(byte)param_2[3];
        }
      } while (iVar4 < (int)uVar1);
      param_2[0x31] = 1;
      param_2[0x32] = 1;
      return 0;
    }
  }
  param_2[0x31] = 1;
  param_2[0x32] = 1;
  return 0;
}



undefined4
raac_DecodeNoiselessData(int *param_1,int *param_2,uint *param_3,int *param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  undefined *puVar15;
  byte *pbVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  byte *pbVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  byte *pbVar25;
  undefined *puVar26;
  undefined *puVar27;
  int local_78;
  undefined *local_74;
  undefined *local_6c;
  int local_5c;
  undefined *local_54;
  byte local_46 [4];
  byte local_42 [6];
  byte *apbStack60 [4];
  int local_2c;
  
  if ((param_1 == (int *)0x0) || (iVar11 = *param_1, iVar11 == 0)) {
    return 0xfffffffe;
  }
  if (param_5 == 1) {
    if (*(int *)(iVar11 + 0x8f0) == 1) {
      local_5c = iVar11 + 0x87c;
    }
    else {
      local_5c = iVar11 + 0x8b6;
    }
    raac_SetBitstreamPointer(apbStack60,*param_4 + 7 >> 3,*param_2);
    raac_GetBits(apbStack60,*param_3);
    iVar9 = iVar11;
    if (*(int *)(iVar11 + 0x8f0) == 1) goto LAB_0001cb2c;
    iVar9 = 1;
  }
  else {
    raac_SetBitstreamPointer(apbStack60,*param_4 + 7 >> 3,*param_2);
    local_5c = param_5 * 0x3a + iVar11 + 0x87c;
    raac_GetBits(apbStack60,*param_3);
    iVar9 = param_5;
  }
  iVar9 = iVar9 * 0x3a + iVar11;
LAB_0001cb2c:
  local_74 = (undefined *)(iVar9 + 0x87c);
  uVar6 = raac_GetBits(apbStack60,8);
  if ((*(int *)(iVar11 + 0x8f0) != 0) ||
     (iVar13 = raac_DecodeICSInfo(apbStack60,local_74,*(int *)(iVar11 + 0x878)), iVar13 == 0)) {
    bVar1 = *(byte *)(iVar9 + 0x8ad);
    if (*(char *)(iVar9 + 0x87d) == '\x02') {
      uVar19 = 7;
      uVar17 = 3;
    }
    else {
      uVar19 = 0x1f;
      uVar17 = 5;
    }
    uVar23 = (uint)*(byte *)(iVar9 + 0x87f);
    puVar26 = (undefined *)(iVar11 + param_5 * 0x78 + 0xad4);
    if (bVar1 != 0) {
      local_78 = 0;
      puVar12 = puVar26;
      do {
        if (uVar23 != 0) {
          uVar21 = 0;
          do {
            uVar7 = raac_GetBits(apbStack60,4);
            iVar13 = local_2c;
            if (local_2c != 0) {
              return 0xffffffe9;
            }
            do {
              uVar8 = raac_GetBits(apbStack60,uVar17);
              iVar13 = iVar13 + uVar8;
            } while (uVar8 == uVar19);
            uVar21 = uVar21 + iVar13;
            if (iVar13 != 0) {
              puVar15 = puVar12 + iVar13;
              puVar27 = puVar12;
              do {
                puVar12 = puVar27 + 1;
                *puVar27 = (char)uVar7;
                puVar27 = puVar12;
              } while (puVar12 != puVar15);
            }
          } while ((int)uVar21 < (int)uVar23);
          if (uVar23 != uVar21) {
            return 0xffffffe9;
          }
        }
        local_78 = local_78 + 1;
      } while (local_78 < (int)(uint)bVar1);
      iVar13 = (uint)*(byte *)(iVar9 + 0x87f) * (uint)*(byte *)(iVar9 + 0x8ad);
      if (iVar13 != 0) {
        iVar14 = 0;
        bVar4 = true;
        iVar24 = 0;
        iVar22 = uVar6 - 0x15a;
        iVar18 = iVar11 + param_5 * 0xf0 + 0x8f6;
        do {
          while (uVar19 = (uint)(byte)puVar26[iVar14], uVar19 - 0xe < 2) {
            iVar10 = FUN_0001c85c(apbStack60);
            iVar24 = iVar24 + iVar10;
            *(short *)(iVar18 + -2) = (short)iVar24;
LAB_0001cc90:
            iVar14 = iVar14 + 1;
            iVar18 = iVar18 + 2;
            if (iVar14 == iVar13) goto LAB_0001ccf0;
          }
          if (uVar19 != 0xd) {
            if (uVar19 - 1 < 0xb) {
              iVar10 = FUN_0001c85c(apbStack60);
              uVar6 = uVar6 + iVar10;
              *(short *)(iVar18 + -2) = (short)uVar6;
            }
            else {
              *(undefined2 *)(iVar18 + -2) = 0;
            }
            goto LAB_0001cc90;
          }
          if (bVar4) {
            uVar19 = raac_GetBits(apbStack60,9);
          }
          else {
            uVar19 = FUN_0001c85c(apbStack60);
          }
          iVar14 = iVar14 + 1;
          iVar22 = iVar22 + uVar19;
          *(short *)(iVar18 + -2) = (short)iVar22;
          iVar18 = iVar18 + 2;
          bVar4 = false;
        } while (iVar14 != iVar13);
      }
    }
LAB_0001ccf0:
    uVar6 = raac_GetBits(apbStack60,1);
    iVar13 = iVar11 + param_5 * 0xb + 0xbe8;
    *(char *)(iVar13 + 4) = (char)(uVar6 & 0xff);
    if ((uVar6 & 0xff) != 0) {
      uVar6 = raac_GetBits(apbStack60,2);
      *(char *)(iVar13 + 5) = (char)uVar6 + '\x01';
      uVar6 = raac_GetBits(apbStack60,6);
      *(char *)(iVar13 + 6) = (char)uVar6;
      if (*(char *)(iVar13 + 5) != '\0') {
        iVar18 = 0;
        iVar14 = iVar13 + 4;
        do {
          uVar6 = raac_GetBits(apbStack60,5);
          iVar18 = iVar18 + 1;
          *(char *)(iVar14 + 3) = (char)uVar6;
          uVar6 = raac_GetBits(apbStack60,4);
          *(char *)(iVar14 + 7) = (char)uVar6;
          iVar14 = iVar14 + 1;
        } while (iVar18 < (int)(uint)*(byte *)(iVar13 + 5));
      }
    }
    iVar13 = param_5 * 0x65 + iVar11;
    uVar6 = raac_GetBits(apbStack60,1);
    *(char *)(iVar13 + 0xc02) = (char)(uVar6 & 0xff);
    if ((uVar6 & 0xff) != 0) {
      local_6c = (undefined *)(iVar13 + 0xc13);
      pbVar16 = (byte *)(iVar13 + 0xc2b);
      cVar3 = *(char *)(iVar9 + 0x87d);
      pbVar25 = (byte *)(iVar13 + 0xc1b);
      local_54 = (undefined *)(iVar13 + 0xc23);
      memcpy(local_46 + 2,&DAT_00033078,3);
      memcpy(local_46 + 6,&DAT_0003307c,3);
      if (cVar3 == '\x02') {
        iVar14 = 0;
        puVar26 = (undefined *)(iVar13 + 0xc02);
        do {
          uVar6 = raac_GetBits(apbStack60,1);
          puVar26[1] = (char)(uVar6 & 0xff);
          if ((uVar6 & 0xff) != 0) {
            uVar6 = raac_GetBits(apbStack60,1);
            puVar26[9] = (char)uVar6 + '\x03';
            uVar6 = raac_GetBits(apbStack60,4);
            *local_6c = (char)uVar6;
            uVar6 = raac_GetBits(apbStack60,3);
            *pbVar25 = (byte)(uVar6 & 0xff);
            if ((uVar6 & 0xff) != 0) {
              uVar6 = raac_GetBits(apbStack60,1);
              puVar12 = local_54 + 1;
              *local_54 = (char)uVar6;
              uVar6 = raac_GetBits(apbStack60,1);
              uVar6 = (byte)puVar26[9] - uVar6;
              bVar1 = *(byte *)((int)apbStack60 + (uVar6 - 6));
              bVar2 = local_46[uVar6];
              local_54 = puVar12;
              if (*pbVar25 != 0) {
                iVar13 = 0;
                pbVar20 = pbVar16;
                do {
                  uVar19 = raac_GetBits(apbStack60,uVar6);
                  iVar13 = iVar13 + 1;
                  bVar5 = (byte)(uVar19 & 0xff);
                  if ((uVar19 & 0xff & (uint)bVar2) != 0) {
                    bVar5 = bVar5 | bVar1;
                  }
                  pbVar16 = pbVar20 + 1;
                  *pbVar20 = bVar5;
                  pbVar20 = pbVar16;
                } while (iVar13 < (int)(uint)*pbVar25);
              }
            }
            pbVar25 = pbVar25 + 1;
            local_6c = local_6c + 1;
          }
          iVar14 = iVar14 + 1;
          puVar26 = puVar26 + 1;
        } while (iVar14 != 8);
      }
      else {
        uVar6 = raac_GetBits(apbStack60,2);
        *(char *)(iVar13 + 0xc03) = (char)(uVar6 & 0xff);
        if ((uVar6 & 0xff) != 0) {
          uVar6 = raac_GetBits(apbStack60,1);
          *(char *)(iVar13 + 0xc0b) = (char)uVar6 + '\x03';
          if (*(char *)(iVar13 + 0xc03) != '\0') {
            iVar14 = 0;
            do {
              uVar6 = raac_GetBits(apbStack60,6);
              local_6c[iVar14] = (char)uVar6;
              uVar6 = raac_GetBits(apbStack60,5);
              *pbVar25 = (byte)(uVar6 & 0xff);
              if ((uVar6 & 0xff) != 0) {
                uVar6 = raac_GetBits(apbStack60,1);
                puVar26 = local_54 + 1;
                *local_54 = (char)uVar6;
                uVar6 = raac_GetBits(apbStack60,1);
                uVar6 = *(byte *)(iVar13 + 0xc0b) - uVar6;
                bVar1 = local_46[uVar6];
                bVar2 = *(byte *)((int)apbStack60 + (uVar6 - 6));
                local_54 = puVar26;
                if (*pbVar25 != 0) {
                  iVar18 = 0;
                  pbVar20 = pbVar16;
                  do {
                    uVar19 = raac_GetBits(apbStack60,uVar6);
                    iVar18 = iVar18 + 1;
                    bVar5 = (byte)(uVar19 & 0xff);
                    if ((uVar19 & 0xff & (uint)bVar1) != 0) {
                      bVar5 = bVar5 | bVar2;
                    }
                    pbVar16 = pbVar20 + 1;
                    *pbVar20 = bVar5;
                    pbVar20 = pbVar16;
                  } while (iVar18 < (int)(uint)*pbVar25);
                }
              }
              iVar14 = iVar14 + 1;
              pbVar25 = pbVar25 + 1;
            } while (iVar14 < (int)(uint)*(byte *)(iVar13 + 0xc03));
          }
        }
      }
    }
    iVar13 = param_5 * 0x16a + iVar11;
    uVar6 = raac_GetBits(apbStack60,1);
    iVar14 = iVar13 + 0xd6c;
    *(char *)(iVar13 + 0xd6c) = (char)(uVar6 & 0xff);
    if ((uVar6 & 0xff) != 0) {
      bVar1 = *(byte *)(iVar9 + 0x87d);
      uVar6 = raac_GetBits(apbStack60,2);
      iVar9 = (uint)bVar1 * 3;
      bVar1 = (&DAT_00033080)[iVar9];
      bVar2 = (&DAT_00033081)[iVar9];
      bVar5 = (&DAT_00033082)[iVar9];
      *(char *)(iVar13 + 0xd6d) = (char)(uVar6 & 0xff);
      if ((uVar6 & 0xff) != 0) {
        local_78 = 1;
        do {
          if (bVar1 != 0) {
            iVar9 = 0;
            pbVar25 = (byte *)(iVar14 + local_78 * 8 + 2);
            do {
              uVar6 = raac_GetBits(apbStack60,3);
              *pbVar25 = (byte)(uVar6 & 0xff);
              if ((uVar6 & 0xff) != 0) {
                if (iVar9 == 0) {
                  puVar26 = (undefined *)(iVar14 + local_78 * 0x38 + 0x19);
                  iVar18 = iVar9;
                  do {
                    uVar6 = raac_GetBits(apbStack60,4);
                    iVar18 = iVar18 + 1;
                    puVar26[1] = (char)uVar6;
                    uVar6 = raac_GetBits(apbStack60,(uint)bVar2);
                    puVar26[0xa9] = (char)uVar6;
                    puVar26 = puVar26 + 1;
                  } while (iVar18 < (int)(uint)*pbVar25);
                }
                else {
                  iVar18 = 0;
                  puVar26 = (undefined *)(iVar14 + iVar9 * 7 + local_78 * 0x38 + 0x19);
                  do {
                    uVar6 = raac_GetBits(apbStack60,4);
                    iVar18 = iVar18 + 1;
                    puVar26[1] = (char)uVar6;
                    uVar6 = raac_GetBits(apbStack60,(uint)bVar5);
                    puVar26[0xa9] = (char)uVar6;
                    puVar26 = puVar26 + 1;
                  } while (iVar18 < (int)(uint)*pbVar25);
                }
              }
              iVar9 = iVar9 + 1;
              pbVar25 = pbVar25 + 1;
            } while (iVar9 < (int)(uint)bVar1);
          }
          local_78 = local_78 + 1;
        } while (local_78 <= (int)(uint)*(byte *)(iVar13 + 0xd6d));
      }
    }
    if (*(char *)(local_5c + 1) == '\x02') {
      uVar6 = raac_DecodeSpectrumShort(iVar11,apbStack60,param_5);
    }
    else {
      uVar6 = raac_DecodeSpectrumLong(iVar11,apbStack60,param_5);
    }
    if (uVar6 == 0) {
      iVar9 = raac_CalcBitsUsed((int *)apbStack60,*param_2,*param_3);
      uVar6 = *param_3;
      *param_2 = *param_2 + ((int)(iVar9 + uVar6) >> 3);
      *param_3 = iVar9 + uVar6 & 7;
      *param_4 = *param_4 - iVar9;
      param_1[param_5 + 0x10] = 0;
      param_1[0x19] = param_1[0x19] | (uint)*(byte *)(param_5 * 0x65 + iVar11 + 0xc02);
      return 0;
    }
  }
  return 0xffffffe9;
}



undefined4 raac_PNS(int *param_1,int param_2)

{
  short *psVar1;
  short *psVar2;
  ushort uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  short *psVar17;
  int iVar18;
  bool bVar19;
  uint local_68;
  uint local_64;
  int local_60;
  byte *local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  short *local_44;
  byte *local_2c;
  int local_28;
  int local_24;
  
  if ((param_1 == (int *)0x0) || (iVar6 = *param_1, iVar6 == 0)) {
    return 0xffffffff;
  }
  if ((param_2 != 1) || (iVar9 = iVar6, *(int *)(iVar6 + 0x8f0) != 1)) {
    iVar9 = param_2 * 0x3a + iVar6;
  }
  if (*(int *)(iVar6 + (param_2 + 0x2f6) * 4) == 0) {
    return 0;
  }
  if (*(char *)(iVar9 + 0x87d) == '\x02') {
    local_24 = 0x80;
    local_44 = (short *)(raac_sfBandTabShort +
                        *(int *)(raac_sfBandTabShortOffset + *(int *)(iVar6 + 0x878) * 4) * 2);
    if (param_1[0xe] == 1) goto LAB_0001dabc;
    bVar19 = false;
  }
  else {
    local_24 = 0x400;
    local_44 = (short *)(raac_sfBandTabLong +
                        *(int *)(raac_sfBandTabLongOffset + *(int *)(iVar6 + 0x878) * 4) * 2);
    if (param_1[0xe] == 1) {
LAB_0001dabc:
      bVar19 = *(int *)(iVar6 + 0x8f0) == 1;
    }
    else {
      bVar19 = false;
    }
  }
  uVar7 = (uint)*(byte *)(iVar9 + 0x8ad);
  if (uVar7 != 0) {
    local_48 = 0;
    puVar15 = (uint *)(iVar6 + param_2 * 0x1000 + 0x1048);
    local_60 = iVar6 + param_2 * 0x78 + 0xad4;
    local_68 = (uint)*(byte *)(iVar9 + 0x87f);
    local_4c = 0;
    local_2c = (byte *)(iVar9 + 0x8ae);
    do {
      if (*local_2c != 0) {
        local_28 = 0;
        do {
          iVar18 = (int)(local_48 * local_68) >> 3;
          if (local_68 != 0) {
            iVar8 = (int)local_44[1] - (int)*local_44;
            if (iVar8 < 1) {
              return 0xffffffe8;
            }
            uVar7 = local_48 * local_68 & 7;
            local_64 = (int)(uint)*(byte *)(iVar6 + iVar18 + 0xbc8) >> uVar7 & 0xff;
            local_54 = (byte *)(iVar6 + iVar18 + 0xbc9);
            iVar18 = 0;
            psVar17 = local_44;
            do {
              if (*(char *)(local_60 + iVar18) == '\r') {
                iVar4 = param_2;
                puVar5 = puVar15;
                if (param_2 == 0) {
                  do {
                    iVar4 = iVar4 + 1;
                    iVar16 = *(int *)(iVar6 + 0xbe0) * 0x19660d + 0x3c6ef35f;
                    *(int *)(iVar6 + 0xbe0) = iVar16;
                    *puVar5 = iVar16 >> 0x10;
                    puVar5 = puVar5 + 1;
                  } while (iVar4 < iVar8);
                  if (bVar19) {
                    local_68 = (uint)*(byte *)(iVar9 + 0x87f);
                    iVar4 = local_48 * local_68 + iVar18;
                    if (*(char *)(iVar6 + iVar4 + 0xb4c) == '\r') {
                      iVar16 = 0;
                      iVar4 = 0;
                      do {
                        iVar4 = iVar4 + 1;
                        *(undefined4 *)
                         (iVar6 + 0x1048 +
                          ((uint)((int)puVar15 - (iVar6 + 0x1048)) & 0xfffffffc) + 0x1000 + iVar16)
                             = *(undefined4 *)((int)puVar15 + iVar16);
                        iVar16 = iVar16 + 4;
                      } while (iVar4 < iVar8);
                      local_68 = (uint)*(byte *)(iVar9 + 0x87f);
                      iVar4 = local_68 * local_48 + iVar18;
                    }
                  }
                  else {
                    local_68 = (uint)*(byte *)(iVar9 + 0x87f);
                    iVar4 = local_68 * local_48 + iVar18;
                  }
                  goto LAB_0001d654;
                }
                if ((bVar19) && (*(char *)(local_68 * local_48 + iVar6 + iVar18 + 0xad4) == '\r')) {
                  if (*(int *)(iVar6 + 0xbc4) == 1) {
                    if ((local_64 & 1) == 0) goto LAB_0001d8b8;
                    iVar4 = local_68 * local_48 + iVar18;
                  }
                  else {
                    if (*(int *)(iVar6 + 0xbc4) != 2) goto LAB_0001d8b8;
                    iVar4 = local_68 * local_48 + iVar18;
                  }
                }
                else {
LAB_0001d8b8:
                  iVar4 = 0;
                  do {
                    iVar4 = iVar4 + 1;
                    iVar16 = *(int *)(iVar6 + 0xbe0) * 0x19660d + 0x3c6ef35f;
                    *(int *)(iVar6 + 0xbe0) = iVar16;
                    *puVar5 = iVar16 >> 0x10;
                    puVar5 = puVar5 + 1;
                  } while (iVar4 < iVar8);
                  local_68 = (uint)*(byte *)(iVar9 + 0x87f);
                  iVar4 = local_68 * local_48 + iVar18;
                }
LAB_0001d654:
                uVar10 = 0;
                iVar16 = 0;
                uVar3 = *(ushort *)(iVar6 + (param_2 * 0x78 + iVar4 + 0x478) * 2 + 4);
                local_50 = (uint)uVar3;
                puVar5 = puVar15;
                do {
                  iVar16 = iVar16 + 1;
                  uVar10 = uVar10 + ((int)(*puVar5 * *puVar5) >> 8);
                  puVar5 = puVar5 + 1;
                } while (iVar16 < iVar8);
                if (uVar10 != 0) {
                  uVar13 = uVar10;
                  if ((int)uVar10 < 0) {
                    local_50 = 0xffffffec;
                    uVar13 = local_50;
                  }
                  iVar4 = ((int)(short)uVar3 >> 2) + 5;
                  if ((int)uVar10 < 0) {
                    uVar13 = 0xfffffffe;
                  }
                  else {
                    iVar16 = 0;
                    do {
                      iVar11 = iVar16;
                      uVar13 = uVar13 << 1;
                      iVar16 = iVar11 + 1;
                    } while (-1 < (int)uVar13);
                    uVar14 = iVar11 - 1;
                    uVar13 = uVar14 & 0xfffffffe;
                    local_50 = ((int)uVar14 >> 1) - 0x13;
                  }
                  iVar16 = uVar10 << (uVar13 & 0xff);
                  iVar11 = 4;
                  uVar10 = (int)((ulonglong)((longlong)iVar16 * -0x40000000) >> 0x20) * 4 +
                           0x60000000;
                  do {
                    iVar11 = iVar11 + -1;
                    uVar10 = (int)((ulonglong)
                                   ((longlong)(int)uVar10 *
                                   (longlong)
                                   ((int)((ulonglong)
                                          ((longlong)iVar16 *
                                          (longlong)
                                          (int)((ulonglong)
                                                ((longlong)(int)uVar10 * (longlong)(int)uVar10) >>
                                               0x20)) >> 0x20) * -4 + 0xc000000)) >> 0x20) * 0x20;
                  } while (iVar11 != 0);
                  uVar13 = uVar10 >> 0x1e;
                  if (uVar13 == 0) {
                    if (uVar10 == 0) {
                      uVar13 = 0x1f;
                    }
                    if (uVar10 == 0) {
                      iVar16 = -0x1a;
                    }
                    else {
                      if (-1 < (int)uVar10) goto LAB_0001d918;
                      iVar16 = 6;
                      uVar13 = 0xffffffff;
                    }
                    uVar14 = iVar4 + local_50 + iVar16;
                    iVar4 = (int)((ulonglong)
                                  ((longlong)*(int *)(&DAT_0003308c + ((int)(short)uVar3 & 3U) * 4)
                                  * (longlong)(int)(uVar10 << (uVar13 & 0xff))) >> 0x20);
                  }
                  else {
                    uVar10 = 0x3fffffff;
LAB_0001d918:
                    uVar13 = uVar10;
                    uVar14 = 0;
                    do {
                      uVar12 = uVar14;
                      uVar13 = uVar13 << 1;
                      uVar14 = uVar12 + 1;
                    } while (-1 < (int)uVar13);
                    uVar14 = iVar4 + local_50 + (6 - uVar14);
                    iVar4 = (int)((ulonglong)
                                  ((longlong)*(int *)(&DAT_0003308c + ((int)(short)uVar3 & 3U) * 4)
                                  * (longlong)(int)(uVar10 << (uVar12 & 0xff))) >> 0x20);
                  }
                  if ((int)uVar14 < 0) {
                    uVar14 = -uVar14;
                    uVar10 = 0;
                    if (0x1e < (int)uVar14) {
                      uVar14 = 0x1f;
                    }
                    iVar16 = 0;
                    puVar5 = puVar15;
                    do {
                      uVar13 = (int)((ulonglong)((longlong)(int)*puVar5 * (longlong)iVar4) >> 0x20)
                               >> (uVar14 & 0xff);
                      iVar16 = iVar16 + 1;
                      *puVar5 = uVar13;
                      uVar10 = uVar10 | ((int)uVar13 >> 0x1f ^ uVar13) - ((int)uVar13 >> 0x1f);
                      puVar5 = puVar5 + 1;
                    } while (iVar16 < iVar8);
                    local_68 = (uint)*(byte *)(iVar9 + 0x87f);
                  }
                  else {
                    uVar10 = 0;
                    if (0xf < (int)uVar14) {
                      uVar14 = 0x10;
                    }
                    iVar16 = 0;
                    puVar5 = puVar15;
                    do {
                      uVar13 = (uint)((ulonglong)
                                      ((longlong)(int)(*puVar5 << (uVar14 & 0xff)) * (longlong)iVar4
                                      ) >> 0x20);
                      iVar16 = iVar16 + 1;
                      *puVar5 = uVar13;
                      uVar10 = uVar10 | ((int)uVar13 >> 0x1f ^ uVar13) - ((int)uVar13 >> 0x1f);
                      puVar5 = puVar5 + 1;
                    } while (iVar16 < iVar8);
                    local_68 = (uint)*(byte *)(iVar9 + 0x87f);
                  }
                }
                local_4c = local_4c | uVar10;
              }
              uVar7 = uVar7 + 1;
              puVar15 = puVar15 + iVar8;
              iVar18 = iVar18 + 1;
              if (uVar7 == 8) {
                uVar7 = 0;
                local_64 = (uint)*local_54;
                local_54 = local_54 + 1;
              }
              else {
                local_64 = local_64 >> 1;
              }
              if ((int)local_68 <= iVar18) break;
              psVar1 = psVar17 + 2;
              psVar2 = psVar17 + 1;
              psVar17 = psVar17 + 1;
              iVar8 = (int)*psVar1 - (int)*psVar2;
              if (iVar8 < 1) {
                return 0xffffffe8;
              }
            } while( true );
          }
          local_28 = local_28 + 1;
          puVar15 = puVar15 + (local_24 - local_44[local_68]);
        } while (local_28 < (int)(uint)*local_2c);
        uVar7 = (uint)*(byte *)(iVar9 + 0x8ad);
      }
      local_48 = local_48 + 1;
      local_60 = local_60 + local_68;
      local_2c = local_2c + 1;
    } while (local_48 < (int)uVar7);
    if (local_4c != 0) {
      if ((int)local_4c < 0) {
        iVar9 = -1;
      }
      else {
        iVar18 = 0;
        do {
          iVar9 = iVar18;
          local_4c = local_4c << 1;
          iVar18 = iVar9 + 1;
        } while (-1 < (int)local_4c);
      }
      goto LAB_0001d86c;
    }
  }
  iVar9 = 0x1f;
LAB_0001d86c:
  if (iVar9 < *(int *)(iVar6 + (param_2 + 0x410) * 4)) {
    *(int *)(iVar6 + (param_2 + 0x410) * 4) = iVar9;
  }
  return 0;
}



int raac_StereoProcess(int *param_1)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint *puVar20;
  short *local_88;
  uint *local_84;
  uint *local_80;
  uint local_7c;
  uint local_78;
  byte *local_68;
  int local_58;
  uint *local_54;
  uint *local_50;
  short *local_4c;
  uint local_44;
  byte *local_3c;
  int local_38;
  byte *local_2c;
  
  if ((param_1 == (int *)0x0) || (iVar5 = *param_1, iVar5 == 0)) {
    iVar3 = -1;
  }
  else {
    if ((*(int *)(iVar5 + 0x8f0) == 1) && (param_1[0xe] == 1)) {
      if ((*(int *)(iVar5 + 0xbc4) != 0) || (iVar3 = *(int *)(iVar5 + 0xbe8), iVar3 != 0)) {
        if (*(char *)(iVar5 + 0x87d) == '\x02') {
          iVar3 = 0x80;
          local_4c = (short *)(raac_sfBandTabShort +
                              *(int *)(raac_sfBandTabShortOffset + *(int *)(iVar5 + 0x878) * 4) * 2)
          ;
        }
        else {
          iVar3 = 0x400;
          local_4c = (short *)(raac_sfBandTabLong +
                              *(int *)(raac_sfBandTabLongOffset + *(int *)(iVar5 + 0x878) * 4) * 2);
        }
        uVar7 = (uint)*(byte *)(iVar5 + 0x8ad);
        puVar11 = (uint *)(iVar5 + 0x2048);
        local_54 = (uint *)(iVar5 + 0x1048);
        local_50 = puVar11;
        if (uVar7 != 0) {
          local_3c = (byte *)(iVar5 + 0xbc8);
          local_78 = (uint)*(byte *)(iVar5 + 0x87f);
          local_44 = 0;
          local_38 = 0;
          local_2c = (byte *)(iVar5 + 0x8ae);
          do {
            if (*local_2c != 0) {
              local_58 = 0;
              do {
                iVar8 = *(int *)(iVar5 + 0xbc4);
                iVar6 = local_38 * local_78 + 0x78;
                if (local_78 == 0) {
                  iVar6 = 0x1f;
                  uVar7 = local_78;
LAB_0001df5c:
                  if (iVar6 < *(int *)(iVar5 + 0x1040)) {
                    *(int *)(iVar5 + 0x1040) = iVar6;
                  }
                  if (uVar7 == 0) {
                    iVar6 = 0x1f;
                  }
                  else {
                    if ((int)uVar7 < 0) {
                      iVar6 = -1;
                    }
                    else {
                      iVar8 = 0;
                      do {
                        iVar6 = iVar8;
                        uVar7 = uVar7 << 1;
                        iVar8 = iVar6 + 1;
                      } while (-1 < (int)uVar7);
                    }
                  }
                  if (iVar6 < *(int *)(iVar5 + 0x1044)) {
                    *(int *)(iVar5 + 0x1044) = iVar6;
                  }
                }
                else {
                  uVar16 = (int)local_4c[1] - (int)*local_4c;
                  if (0 < (int)uVar16) {
                    local_88 = local_4c;
                    uVar7 = 0;
                    local_7c = (int)(uint)*local_3c >> local_44 & 0xff;
                    local_84 = local_54;
                    iVar4 = 0;
                    uVar15 = 0;
                    iVar19 = 0;
                    local_80 = local_50;
                    uVar17 = local_44;
                    local_68 = local_3c + 1;
                    do {
                      uVar9 = (uint)*(byte *)(iVar5 + 0xad4 + iVar6 + iVar19);
                      if (uVar9 - 0xe < 2) {
                        if ((iVar8 == 1) && ((local_7c & 1) != 0)) {
                          uVar9 = uVar9 ^ 1;
                        }
                        uVar10 = -(int)*(short *)(iVar5 + 0x8f4 + iVar6 * 2 + iVar4);
                        uVar18 = ((int)uVar10 >> 2) + 2;
                        iVar4 = *(int *)(&DAT_0003309c + ((uVar10 & 3) + (uVar9 & 1) * 4) * 4);
                        if ((int)uVar18 < 1) {
                          uVar18 = -uVar18;
                          uVar9 = uVar16;
                          puVar13 = local_84;
                          puVar14 = local_80;
                          if (0x1e < (int)uVar18) {
                            uVar18 = 0x1f;
                          }
                          do {
                            uVar10 = (int)((ulonglong)((longlong)(int)*puVar13 * (longlong)iVar4) >>
                                          0x20) >> (uVar18 & 0xff);
                            uVar9 = uVar9 - 1;
                            *puVar14 = uVar10;
                            uVar7 = uVar7 | ((int)uVar10 >> 0x1f ^ uVar10) - ((int)uVar10 >> 0x1f);
                            puVar13 = puVar13 + 1;
                            puVar14 = puVar14 + 1;
                          } while (uVar9 != 0);
                        }
                        else {
                          if (0x1d < (int)uVar18) {
                            uVar18 = 0x1e;
                          }
                          uVar9 = uVar16;
                          puVar13 = local_84;
                          puVar14 = local_80;
                          do {
                            uVar10 = (uint)((ulonglong)((longlong)(int)*puVar13 * (longlong)iVar4)
                                           >> 0x20);
                            if ((int)uVar10 >> 0x1f != (int)uVar10 >> (0x1f - uVar18 & 0xff)) {
                              uVar10 = (int)uVar10 >> 0x1f ^ (1 << (0x1f - uVar18 & 0xff)) - 1U;
                            }
                            uVar9 = uVar9 - 1;
                            uVar10 = uVar10 << (uVar18 & 0xff);
                            *puVar14 = uVar10;
                            uVar7 = uVar7 | ((int)uVar10 >> 0x1f ^ uVar10) - ((int)uVar10 >> 0x1f);
                            puVar13 = puVar13 + 1;
                            puVar14 = puVar14 + 1;
                          } while (uVar9 != 0);
                        }
                      }
                      else {
                        if (uVar9 != 0xd) {
                          uVar9 = uVar16;
                          if (iVar8 == 1) {
                            puVar13 = local_84;
                            puVar14 = local_80;
                            uVar10 = local_7c & 1;
                            goto joined_r0x0001dec0;
                          }
                          puVar12 = local_84;
                          puVar20 = local_80;
                          if (iVar8 == 2) {
                            do {
                              uVar9 = uVar9 - 1;
                              uVar18 = *puVar12 + *puVar20;
                              uVar10 = *puVar12 - *puVar20;
                              puVar13 = puVar12 + 1;
                              *puVar12 = uVar18;
                              uVar15 = uVar15 | ((int)uVar18 >> 0x1f ^ uVar18) -
                                                ((int)uVar18 >> 0x1f);
                              puVar14 = puVar20 + 1;
                              *puVar20 = uVar10;
                              uVar7 = uVar7 | ((int)uVar10 >> 0x1f ^ uVar10) - ((int)uVar10 >> 0x1f)
                              ;
                              uVar10 = uVar9;
joined_r0x0001dec0:
                              puVar12 = puVar13;
                              puVar20 = puVar14;
                            } while (uVar10 != 0);
                          }
                        }
                      }
                      local_80 = local_80 + uVar16;
                      local_84 = local_84 + uVar16;
                      uVar17 = uVar17 + 1;
                      iVar19 = iVar19 + 1;
                      if (uVar17 == 8) {
                        uVar17 = 0;
                        local_7c = (uint)*local_68;
                        local_68 = local_68 + 1;
                      }
                      else {
                        local_7c = local_7c >> 1;
                      }
                      if ((int)local_78 <= iVar19) {
                        if (uVar15 == 0) {
                          iVar6 = 0x1f;
                          local_78 = (uint)*(byte *)(iVar5 + 0x87f);
                        }
                        else {
                          if ((int)uVar15 < 0) {
                            iVar6 = -1;
                            local_78 = (uint)*(byte *)(iVar5 + 0x87f);
                          }
                          else {
                            iVar8 = 0;
                            do {
                              iVar6 = iVar8;
                              uVar15 = uVar15 << 1;
                              iVar8 = iVar6 + 1;
                            } while (-1 < (int)uVar15);
                            local_78 = (uint)*(byte *)(iVar5 + 0x87f);
                          }
                        }
                        goto LAB_0001df5c;
                      }
                      iVar4 = iVar19 * 2;
                      psVar1 = local_88 + 2;
                      psVar2 = local_88 + 1;
                      local_88 = local_88 + 1;
                      uVar16 = (int)*psVar1 - (int)*psVar2;
                    } while (0 < (int)uVar16);
                    local_78 = (uint)*(byte *)(iVar5 + 0x87f);
                  }
                }
                local_58 = local_58 + 1;
                local_54 = local_54 + iVar3;
                local_50 = local_50 + iVar3;
              } while (local_58 < (int)(uint)*local_2c);
              uVar7 = (uint)*(byte *)(iVar5 + 0x8ad);
            }
            local_38 = local_38 + 1;
            uVar16 = local_44 + local_78;
            local_44 = uVar16 & 7;
            local_3c = local_3c + ((int)uVar16 >> 3);
            local_2c = local_2c + 1;
          } while (local_38 < (int)uVar7);
        }
        if (local_54 == puVar11) {
          if (local_50 == (uint *)(iVar5 + 0x3048)) {
            iVar3 = 0;
          }
          else {
            iVar3 = -0x17;
          }
        }
        else {
          iVar3 = -0x17;
        }
      }
    }
    else {
      iVar3 = 0;
    }
  }
  return iVar3;
}



uint raac_TNSFilter(int *param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  byte *pbVar18;
  int *piVar19;
  uint *puVar20;
  int *piVar21;
  uint uVar22;
  uint *puVar23;
  int *piVar24;
  uint uVar25;
  undefined *puVar26;
  uint uVar27;
  int local_8c;
  int local_74;
  int local_70;
  uint local_68;
  undefined1 *local_64;
  uint local_5c;
  char *local_58;
  int local_50;
  byte *local_4c;
  int local_40;
  byte *local_3c;
  int local_34;
  uint local_30;
  int local_2c;
  
  if ((param_1 == (int *)0x0) || (iVar8 = *param_1, iVar8 == 0)) {
    uVar27 = 0xffffffff;
  }
  else {
    if ((param_2 != 1) || (iVar10 = iVar8, *(int *)(iVar8 + 0x8f0) != 1)) {
      iVar10 = param_2 * 0x3a + iVar8;
    }
    iVar17 = param_2 * 0x65 + iVar8;
    uVar27 = (uint)*(byte *)(iVar17 + 0xc02);
    if (uVar27 != 0) {
      if (*(char *)(iVar10 + 0x87d) == '\x02') {
        local_34 = 8;
        local_2c = 0x200;
        iVar7 = *(int *)(iVar8 + 0x878);
        bVar2 = raac_sfBandTotalShort[iVar7];
        bVar3 = *(byte *)((int)&raac_tnsMaxOrderShort + param_1[0x16]);
        local_64 = raac_sfBandTabShort + *(int *)(raac_sfBandTabShortOffset + iVar7 * 4) * 2;
        bVar4 = raac_tnsMaxBandsShort
                [iVar7 + *(int *)(raac_tnsMaxBandsShortOffset + param_1[0x16] * 4)];
      }
      else {
        local_34 = 1;
        local_2c = 0x1000;
        iVar7 = *(int *)(iVar8 + 0x878);
        bVar2 = raac_sfBandTotalLong[iVar7];
        bVar3 = *(byte *)((int)&raac_tnsMaxOrderLong + param_1[0x16]);
        local_64 = raac_sfBandTabLong + *(int *)(raac_sfBandTabLongOffset + iVar7 * 4) * 2;
        bVar4 = raac_tnsMaxBandsLong
                [iVar7 + *(int *)(raac_tnsMaxBandsLongOffset + param_1[0x16] * 4)];
      }
      local_30 = (uint)bVar2;
      local_68 = (uint)bVar3;
      uVar27 = (uint)bVar4;
      if ((uint)*(byte *)(iVar10 + 0x87f) <= (uint)bVar4) {
        uVar27 = (uint)*(byte *)(iVar10 + 0x87f);
      }
      local_70 = iVar17 + 0xc1b;
      local_5c = 0;
      local_74 = iVar17 + 0xc2b;
      puVar20 = (uint *)(iVar8 + 0xd1c);
      local_3c = (byte *)(iVar17 + 0xc13);
      local_58 = (char *)(iVar17 + 0xc23);
      local_50 = iVar8 + param_2 * 0x1000 + 0x1048;
      local_40 = 0;
      local_4c = (byte *)(iVar17 + 0xc02);
      do {
        uVar9 = (uint)local_4c[1];
        if (uVar9 != 0) {
          piVar21 = (int *)(iVar8 + 0xccc);
          iVar10 = -1;
          uVar25 = local_30;
          pbVar18 = local_3c;
          do {
            iVar10 = iVar10 + 1;
            uVar22 = (uint)*(byte *)(local_70 + iVar10);
            if (local_68 <= *(byte *)(local_70 + iVar10)) {
              uVar22 = local_68;
            }
            uVar12 = uVar25 - *pbVar18 & ~((int)(uVar25 - *pbVar18) >> 0x1f);
            if (uVar22 != 0) {
              uVar15 = uVar12;
              if ((int)uVar27 <= (int)uVar12) {
                uVar15 = uVar27;
              }
              if ((int)uVar27 <= (int)uVar25) {
                uVar25 = uVar27;
              }
              local_8c = (int)*(short *)(local_64 + uVar15 * 2);
              iVar17 = *(short *)(local_64 + uVar25 * 2) - local_8c;
              if (0 < iVar17) {
                cVar5 = *local_58;
                if (cVar5 != '\0') {
                  local_8c = *(short *)(local_64 + uVar25 * 2) + -1;
                }
                if (local_4c[9] == 3) {
                  puVar26 = &DAT_000330bc;
LAB_0001e4ec:
                  iVar7 = 0;
                  piVar24 = piVar21;
                  do {
                    iVar11 = *(int *)(puVar26 + (*(byte *)(local_74 + iVar7) & 0xf) * 4);
                    if (iVar7 != 0) {
                      iVar16 = 0;
                      iVar14 = 0;
                      piVar19 = piVar24;
                      do {
                        piVar19 = piVar19 + -1;
                        iVar14 = iVar14 + 1;
                        *(int *)((int)puVar20 + iVar16) =
                             *(int *)((int)piVar21 + iVar16) +
                             (int)((ulonglong)((longlong)iVar11 * (longlong)*piVar19) >> 0x20) * -2;
                        iVar16 = iVar16 + 4;
                      } while (iVar14 != iVar7);
                      iVar16 = 0;
                      iVar14 = 0;
                      do {
                        iVar14 = iVar14 + 1;
                        *(undefined4 *)((int)piVar21 + iVar16) =
                             *(undefined4 *)((int)puVar20 + iVar16);
                        iVar16 = iVar16 + 4;
                      } while (iVar14 != iVar7);
                    }
                    iVar7 = iVar7 + 1;
                    *piVar24 = iVar11 >> 0xb;
                    piVar24 = piVar24 + 1;
                  } while (iVar7 < (int)uVar22);
                }
                else {
                  puVar26 = &DAT_000330fc;
                  if (local_4c[9] == 4) goto LAB_0001e4ec;
                }
                iVar7 = 0;
                puVar23 = (uint *)(local_50 + local_8c * 4);
                puVar13 = puVar20;
                do {
                  iVar7 = iVar7 + 1;
                  *puVar13 = 0;
                  puVar13 = puVar13 + 1;
                } while (iVar7 < (int)uVar22);
                uVar25 = 0;
                if (cVar5 == '\0') {
                  iVar7 = 4;
                }
                else {
                  iVar7 = -4;
                }
                do {
                  iVar11 = *puVar23 << 0x14;
                  iVar14 = (int)*puVar23 >> 0xc;
                  puVar13 = puVar20 + uVar22;
                  piVar24 = piVar21 + uVar22;
                  uVar15 = uVar22;
                  while (uVar15 = uVar15 - 1, uVar15 != 0) {
                    piVar24 = piVar24 + -1;
                    lVar6 = (longlong)*piVar24 * (longlong)(int)puVar13[-1] +
                            CONCAT44(iVar14,iVar11);
                    iVar11 = (int)lVar6;
                    iVar14 = (int)((ulonglong)lVar6 >> 0x20);
                    puVar1 = puVar13 + -2;
                    puVar13 = puVar13 + -1;
                    *puVar13 = *puVar1;
                  }
                  lVar6 = (longlong)*piVar21 * (longlong)(int)*puVar20 + CONCAT44(iVar14,iVar11);
                  iVar11 = (int)((ulonglong)lVar6 >> 0x20);
                  if (iVar11 >> 0x1f == iVar11 >> 0x13) {
                    uVar15 = (uint)lVar6 >> 0x14 | iVar11 << 0xc;
                  }
                  else {
                    uVar15 = iVar11 >> 0x1f ^ 0x7fffffff;
                  }
                  iVar17 = iVar17 + -1;
                  *puVar20 = uVar15;
                  *puVar23 = uVar15;
                  uVar25 = uVar25 | ((int)uVar15 >> 0x1f ^ uVar15) - ((int)uVar15 >> 0x1f);
                  puVar23 = (uint *)((int)puVar23 + iVar7);
                } while (iVar17 != 0);
                local_5c = local_5c | uVar25;
                local_58 = local_58 + 1;
              }
              local_74 = local_74 + uVar22;
            }
            uVar25 = uVar12;
            pbVar18 = pbVar18 + 1;
          } while (iVar10 != uVar9 - 1);
          local_3c = local_3c + uVar9;
          local_70 = local_70 + uVar9;
        }
        local_50 = local_50 + local_2c;
        local_40 = local_40 + 1;
        local_4c = local_4c + 1;
      } while (local_40 < local_34);
      if (local_5c == 0) {
        iVar10 = 0x1f;
      }
      else {
        if ((int)local_5c < 0) {
          iVar10 = -1;
        }
        else {
          iVar17 = 0;
          do {
            iVar10 = iVar17;
            local_5c = local_5c << 1;
            iVar17 = iVar10 + 1;
          } while (-1 < (int)local_5c);
        }
      }
      if (iVar10 < *(int *)(iVar8 + (param_2 + 0x410) * 4)) {
        *(int *)(iVar8 + (param_2 + 0x410) * 4) = iVar10;
        uVar27 = 0;
      }
      else {
        uVar27 = 0;
      }
    }
  }
  return uVar27;
}



undefined4 raac_InitSBR(int param_1)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  pvVar1 = malloc(0x192c4);
  if (pvVar1 == (void *)0x0) {
    return 0xfffffff0;
  }
  iVar2 = (int)pvVar1 + 1;
  do {
    *(undefined *)(iVar2 + -1) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 != (int)pvVar1 + 0x192c5);
  iVar2 = 0;
  pvVar3 = pvVar1;
  do {
    iVar2 = iVar2 + 1;
    *(undefined4 *)((int)pvVar3 + 0x5fc) = 1;
    *(undefined *)((int)pvVar3 + 0x78c) = 0xff;
    pvVar3 = (void *)((int)pvVar3 + 0x920);
  } while (iVar2 != 6);
  *(void **)(param_1 + 4) = pvVar1;
  return 0;
}



undefined4 raac_ResetSBR(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    iVar2 = iVar1 + 1;
    do {
      *(undefined *)(iVar2 + -1) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 != iVar1 + 0x192c5);
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      *(undefined4 *)(iVar1 + 0x5fc) = 1;
      *(undefined *)(iVar1 + 0x78c) = 0xff;
      iVar1 = iVar1 + 0x920;
    } while (iVar2 != 6);
    return 0;
  }
  return 0xfffffff0;
}



void raac_FreeSBR(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(void **)(param_1 + 4) == (void *)0x0) {
    return;
  }
  free(*(void **)(param_1 + 4));
  return;
}



undefined4 raac_DecodeSBRBitstream(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  byte *apbStack44 [5];
  
  if ((param_1 == 0) || (iVar5 = *(int *)(param_1 + 4), iVar5 == 0)) {
    return 0xfffffffe;
  }
  if ((*(int *)(param_1 + 0x38) != 6) || (1 < *(int *)(param_1 + 0x30) - 0xdU)) {
    return 0;
  }
  raac_SetBitstreamPointer
            (apbStack44,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x28));
  uVar1 = raac_GetBits(apbStack44,4);
  if (uVar1 == *(uint *)(param_1 + 0x30)) {
    if (uVar1 == 0xe) {
      uVar1 = raac_GetBits(apbStack44,10);
      *(uint *)(iVar5 + 0x4594) = uVar1;
    }
    uVar1 = raac_GetBits(apbStack44,1);
    if (uVar1 == 0) {
      iVar6 = param_2 << 2;
    }
    else {
      uVar1 = raac_GetSampRateIdx(*(int *)(param_1 + 0x54) << 1);
      *(uint *)(iVar5 + 4) = uVar1;
      if (0xb < uVar1) goto LAB_0001e988;
      if (8 < (int)uVar1) {
        return 0xffffffeb;
      }
      iVar6 = param_2 * 4;
      piVar7 = (int *)(iVar5 + param_2 * 0x14 + 8);
      iVar3 = raac_UnpackSBRHeader(apbStack44,piVar7);
      iVar4 = param_2 * 0x920 + iVar5;
      if (iVar3 == 0) {
        if (*(int *)(iVar4 + 0x5fc) != 0) goto LAB_0001e938;
      }
      else {
        *(undefined4 *)(iVar4 + 0x5fc) = 1;
LAB_0001e938:
        iVar3 = raac_CalcFreqTables((int)piVar7,(uint *)(param_2 * 0xd4 + iVar5 + 0x104),
                                    *(int *)(iVar5 + 4));
        if (iVar3 == -0x17) {
          return 0xffffffe9;
        }
      }
      if (*(int *)(param_1 + 0x34) == 1) {
        *(undefined4 *)(iVar5 + param_2 * 0x920 + 0xf1c) =
             *(undefined4 *)(param_2 * 0x920 + iVar5 + 0x5fc);
      }
    }
    if (*(int *)(iVar5 + (iVar6 + param_2) * 4 + 8) == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x34) == 0) {
      iVar5 = raac_UnpackSBRSingleChannel(apbStack44,iVar5,param_2);
    }
    else {
      if (*(int *)(param_1 + 0x34) != 1) goto LAB_0001e988;
      iVar5 = raac_UnpackSBRChannelPair(apbStack44,iVar5,param_2);
    }
    if (iVar5 == 0) {
      raac_ByteAlignBitstream(apbStack44);
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffe9;
    }
  }
  else {
LAB_0001e988:
    uVar2 = 0xffffffef;
  }
  return uVar2;
}



undefined4 raac_DecodeSBRData(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint **ppuVar2;
  uint **ppuVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint **ppuVar9;
  uint **ppuVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  ushort *puVar14;
  uint **ppuVar15;
  uint **ppuVar16;
  uint **ppuVar17;
  uint **ppuVar18;
  undefined8 uVar19;
  int local_64;
  int local_50;
  int local_4c;
  int **local_44;
  int local_40;
  int local_38;
  ushort *local_30;
  
  if ((param_1 == 0) || (ppuVar15 = *(uint ***)(param_1 + 4), ppuVar15 == (uint **)0x0)) {
    return 0xfffffffe;
  }
  ppuVar2 = ppuVar15 + param_2 * 0x35;
  ppuVar16 = ppuVar15 + param_2 * 5 + 2;
  ppuVar17 = ppuVar2 + 0x41;
  if (*(int *)(param_1 + 0x38) == 3) {
    local_4c = 1;
    local_38 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x38) != 6) {
      return 0;
    }
    if (*(int *)(param_1 + 0x34) == 0) {
      local_38 = 1;
    }
    else {
      if (*(int *)(param_1 + 0x34) != 1) {
        return 0;
      }
      local_38 = 2;
    }
    if (1 < *(int *)(param_1 + 0x30) - 0xdU) {
      return 0;
    }
    local_4c = 1 - (int)ppuVar15[param_2 * 5 + 2];
    if ((uint *)0x1 < ppuVar15[param_2 * 5 + 2]) {
      local_4c = 0;
    }
  }
  local_44 = (int **)(param_1 + 4);
  local_50 = 0;
  local_40 = param_2 << 0xc;
  iVar12 = param_2 * -0x1000;
  local_30 = (ushort *)(param_3 + param_2 * 2);
  local_64 = param_2;
  do {
    ppuVar3 = ppuVar15 + local_64 * 0x248;
    local_44 = local_44 + 1;
    piVar13 = *local_44;
    ppuVar10 = ppuVar3 + 0x17f;
    if ((piVar13 == (int *)0x0) || (*(int *)(param_1 + 0x20) != 4)) {
      return 0xffffffed;
    }
    iVar11 = 0;
    ppuVar18 = ppuVar15;
    do {
      puVar6 = (uint *)0x0;
      ppuVar9 = ppuVar15 + (local_64 * 8 + iVar11) * 0x80 + 0x38b2;
      do {
        iVar5 = (int)ppuVar18 + (int)puVar6;
        puVar6 = puVar6 + 2;
        *(uint **)(iVar5 + 0x142c4) = ppuVar9[-1];
        *(uint **)((int)ppuVar9 + iVar12 + 0x6000) = *ppuVar9;
        ppuVar9 = ppuVar9 + 2;
      } while (puVar6 != (uint *)0x200);
      iVar11 = iVar11 + 1;
      ppuVar18 = ppuVar18 + 0x80;
    } while (iVar11 != 8);
    ppuVar18 = ppuVar17;
    if ((int)*ppuVar16 < 1) {
      puVar6 = (uint *)0x20;
      ppuVar18 = ppuVar16;
    }
    if (0 < (int)*ppuVar16) {
      puVar6 = *ppuVar18;
    }
    iVar11 = 8;
    do {
      uVar4 = raac_QMFAnalysis(piVar13,(int)(ppuVar15 + local_64 * 0x140 + 0x132b),
                               (uint *)(ppuVar15 + iVar11 * 0x80 + 0x50b1),*(int *)(param_1 + 0x24),
                               (int *)(ppuVar15 + local_64 + 0x1325),(uint)puVar6);
      iVar5 = iVar11 >> 5;
      iVar11 = iVar11 + 1;
      iVar5 = iVar5 + 0x62;
      ppuVar10[iVar5] = (uint *)((uint)ppuVar10[iVar5] | uVar4);
      piVar13 = piVar13 + 0x20;
    } while (iVar11 != 0x28);
    if (local_4c == 0) {
      ppuVar18 = (uint **)(local_64 * 0x16 + (int)ppuVar15);
      uVar19 = raac_GenerateHighFreq
                         ((int)ppuVar15,(int)(ppuVar18 + 0x20),(int *)ppuVar17,(int)ppuVar10);
      if (((int)uVar19 != 0) ||
         (iVar11 = raac_AdjustHighFreq(ppuVar15,ppuVar16,ppuVar18 + 0x20,ppuVar17,ppuVar10,local_50)
         , iVar11 != 0)) {
        return 0xffffffe9;
      }
      puVar6 = ppuVar2[0x48];
      puVar8 = ppuVar2[0x49];
      iVar11 = local_4c;
      puVar14 = local_30;
      if (*(char *)(ppuVar18 + 0x21) == '\0') {
        uVar4 = (int)*ppuVar17 + (int)ppuVar2[0x46];
        iVar5 = *(int *)(param_1 + 0x50);
      }
      else {
        iVar5 = *(int *)(param_1 + 0x50);
        do {
          iVar7 = iVar11 * 0x80;
          iVar11 = iVar11 + 1;
          raac_QMFSynthesis((int *)(ppuVar15 + iVar7 + 0x51b1),
                            (int)(ppuVar15 + local_64 * 0x500 + 0x1ab1),
                            (int *)(ppuVar15 + local_64 + 0x1aab),(int)puVar6 + (int)puVar8,puVar14,
                            iVar5);
          iVar5 = *(int *)(param_1 + 0x50);
          puVar14 = puVar14 + iVar5 * 0x40;
        } while (iVar11 < (int)(uint)*(byte *)(ppuVar18 + 0x21));
        if (0x1f < iVar11) goto LAB_0001ec84;
        uVar4 = (int)*ppuVar17 + (int)ppuVar2[0x46];
      }
      do {
        iVar7 = iVar11 * 0x80;
        iVar11 = iVar11 + 1;
        raac_QMFSynthesis((int *)(ppuVar15 + iVar7 + 0x51b1),
                          (int)(ppuVar15 + local_64 * 0x500 + 0x1ab1),
                          (int *)(ppuVar15 + local_64 + 0x1aab),uVar4,puVar14,iVar5);
        iVar5 = *(int *)(param_1 + 0x50);
        puVar14 = puVar14 + iVar5 * 0x40;
      } while (iVar11 < 0x20);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x50);
      iVar11 = 2;
      puVar14 = local_30;
      do {
        iVar7 = iVar11 * 0x80;
        iVar11 = iVar11 + 1;
        raac_QMFSynthesis((int *)(ppuVar15 + iVar7 + 0x50b1),
                          (int)(ppuVar15 + local_64 * 0x500 + 0x1ab1),
                          (int *)(ppuVar15 + local_64 + 0x1aab),0x20,puVar14,iVar5);
        iVar5 = *(int *)(param_1 + 0x50);
        puVar14 = puVar14 + iVar5 * 0x40;
      } while (iVar11 != 0x22);
    }
LAB_0001ec84:
    iVar11 = 0;
    iVar5 = 0x20;
    do {
      iVar7 = 0;
      ppuVar10 = ppuVar15 + iVar5 * 0x80 + 0x50b2;
      do {
        iVar1 = iVar7 + iVar11 + local_40;
        iVar7 = iVar7 + 8;
        *(uint **)((int)ppuVar15 + iVar1 + 0xe2c4) = ppuVar10[-1];
        *(uint **)((int)ppuVar10 + local_40 + -0xa000) = *ppuVar10;
        ppuVar10 = ppuVar10 + 2;
      } while (iVar7 != 0x200);
      iVar5 = iVar5 + 1;
      iVar11 = iVar11 + 0x200;
    } while (iVar5 != 0x28);
    puVar8 = *ppuVar16;
    puVar6 = ppuVar3[0x1e2];
    local_50 = local_50 + 1;
    ppuVar10 = ppuVar16;
    if (0 < (int)puVar8) {
      ppuVar10 = ppuVar3 + 0x17e;
    }
    ppuVar3[0x1e2] = (uint *)0x0;
    ppuVar3[0x1e1] = puVar6;
    local_64 = local_64 + 1;
    if (0 < (int)puVar8) {
      ppuVar10[1] = (uint *)0x0;
    }
    local_40 = local_40 + 0x1000;
    local_30 = local_30 + 1;
    iVar12 = iVar12 + -0x1000;
    if (local_38 <= local_50) {
      iVar12 = *(int *)(param_1 + 0x50);
      ppuVar2[0x49] = ppuVar2[0x46];
      ppuVar2[0x48] = ppuVar2[0x41];
      if ((0 < iVar12) && (iVar12 == param_2 + local_50)) {
        *ppuVar15 = (uint *)((int)*ppuVar15 + 1);
        return 0;
      }
      return 0;
    }
  } while( true );
}



undefined4 raac_FlushCodecSBR(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    return 0xfffffffe;
  }
  iVar2 = iVar1 + 1;
  do {
    *(undefined *)(iVar2 + -1) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 != iVar1 + 0x192c5);
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    *(undefined4 *)(iVar1 + 0x5fc) = 1;
    *(undefined *)(iVar1 + 0x78c) = 0xff;
    iVar1 = iVar1 + 0x920;
  } while (iVar2 != 6);
  return 0;
}



void FUN_0001f014(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (1 < param_2) {
    iVar2 = param_2 + -1;
    do {
      if (0 < iVar2) {
        pbVar4 = (byte *)(param_1 + 1);
        do {
          pbVar3 = pbVar4 + 1;
          bVar1 = pbVar4[-1];
          if (*pbVar4 < bVar1) {
            pbVar4[-1] = *pbVar4;
            *pbVar4 = bVar1;
          }
          pbVar4 = pbVar3;
        } while (pbVar3 != (byte *)(param_1 + 1) + iVar2);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}



int FUN_0001f064(char *param_1,char *param_2,char *param_3,int param_4,byte param_5,int param_6,
                int param_7)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  byte local_3c [4];
  int aiStack56 [5];
  
  aiStack56[3] = 300;
  aiStack56[2] = 200;
  aiStack56[1] = 0x78;
  if (param_6 == 0) {
    iVar4 = 1;
    *param_1 = *param_3 - param_5;
    param_1[1] = param_3[param_4] - param_5;
  }
  else {
    local_3c[0] = param_5;
    iVar11 = *(int *)(local_3c + param_6 * 4 + 4);
    if (0 < param_7) {
      pbVar3 = local_3c;
      pbVar9 = pbVar3 + param_7;
      pbVar5 = pbVar3;
      bVar2 = param_5;
      while( true ) {
        pbVar3 = pbVar3 + 1;
        *pbVar3 = *param_2 + bVar2;
        if (pbVar3 == pbVar9) break;
        pbVar5 = pbVar5 + 1;
        bVar2 = *pbVar5;
        param_2 = param_2 + 1;
      }
    }
    if (-1 < param_4) {
      iVar4 = 0;
      do {
        param_1[iVar4] = param_3[iVar4];
        iVar4 = iVar4 + 1;
      } while (iVar4 <= param_4);
    }
    if (1 < param_7) {
      pbVar3 = (byte *)(param_1 + param_4);
      pbVar5 = local_3c + 1;
      do {
        pbVar9 = pbVar5 + 1;
        pbVar3 = pbVar3 + 1;
        *pbVar3 = *pbVar5;
        pbVar5 = pbVar9;
      } while (pbVar9 != local_3c + param_7);
    }
    iVar4 = param_4 + param_7 + -1;
    FUN_0001f014((int)param_1,param_4 + param_7);
    if (0 < iVar4) {
      iVar13 = 1;
      do {
        pcVar12 = param_1 + iVar13;
        uVar1 = (uint)(byte)param_1[iVar13];
        uVar10 = (uint)(byte)pcVar12[-1];
        if (iVar11 * (*(int *)(raac_log2Tab + uVar1 * 4) - *(int *)(raac_log2Tab + uVar10 * 4) >> 9)
            < 0x1880000) {
          if ((uVar1 != uVar10) && (-1 < param_7)) {
            if (uVar1 != local_3c[0]) {
              iVar6 = 0;
              pbVar5 = local_3c;
              do {
                iVar6 = iVar6 + 1;
                if (param_7 < iVar6) goto LAB_0001f1d8;
                pbVar5 = pbVar5 + 1;
              } while (uVar1 != *pbVar5);
              if (uVar10 == local_3c[0]) goto LAB_0001f244;
            }
            iVar6 = 0;
            pbVar5 = local_3c;
            do {
              iVar6 = iVar6 + 1;
              if (param_7 < iVar6) {
                iVar7 = iVar13 + -1;
                iVar6 = iVar7 - iVar4;
                if (iVar7 <= iVar4) {
                  while (iVar6 < 0 != SBORROW4(iVar7,iVar4)) {
                    iVar7 = iVar7 + 1;
                    iVar6 = iVar7 - iVar4;
                    pcVar12[-1] = *pcVar12;
                    pcVar12 = pcVar12 + 1;
                  }
                }
                goto LAB_0001f1f8;
              }
              pbVar5 = pbVar5 + 1;
            } while (uVar10 != *pbVar5);
            goto LAB_0001f244;
          }
LAB_0001f1d8:
          iVar6 = iVar13;
          if (iVar13 < iVar4) {
            do {
              iVar6 = iVar6 + 1;
              *pcVar12 = pcVar12[1];
              pcVar12 = pcVar12 + 1;
            } while (iVar6 != iVar4);
          }
LAB_0001f1f8:
          iVar4 = iVar4 + -1;
        }
        else {
LAB_0001f244:
          iVar13 = iVar13 + 1;
        }
      } while (iVar13 <= iVar4);
    }
    if (-1 < iVar4) {
      pcVar12 = param_1;
      do {
        pcVar8 = pcVar12 + 1;
        *pcVar12 = *pcVar12 - param_5;
        pcVar12 = pcVar8;
      } while (pcVar8 != param_1 + iVar4 + 1);
    }
  }
  return iVar4;
}



undefined4 raac_CalcFreqTables(int param_1,uint *param_2,int param_3)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined *puVar9;
  uint *puVar10;
  int iVar11;
  undefined *puVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  int *piVar16;
  undefined4 uVar17;
  uint uVar18;
  byte bVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  byte *pbVar23;
  int iVar24;
  uint *puVar25;
  byte *pbVar26;
  uint unaff_r10;
  char *pcVar27;
  int iVar28;
  int *piVar29;
  uint uVar30;
  uint uVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  longlong lVar35;
  int local_13c;
  int local_12c [66];
  
  uVar15 = (uint)*(byte *)(param_1 + 6);
  bVar2 = raac_k0Tab[(uint)*(byte *)(param_1 + 5) + param_3 * 0x10];
  uVar20 = (uint)bVar2;
  if (uVar15 == 0xe) {
    uVar15 = uVar20 << 1;
  }
  else {
    if (uVar15 == 0xf) {
      uVar15 = uVar20 * 3;
    }
    else {
      uVar15 = (uint)(byte)raac_k2Tab[uVar15 + param_3 * 0xe];
    }
  }
  if (0x3f < uVar15) {
    uVar15 = 0x40;
  }
  if (*(byte *)(param_1 + 0xb) == 0) {
    puVar25 = param_2 + 9;
    if (*(char *)(param_1 + 0xc) == '\0') {
      uVar21 = uVar15 - uVar20 & 0xfffffffe;
      iVar4 = 1;
    }
    else {
      iVar4 = 2;
      uVar21 = ((int)((uVar15 - uVar20) + 2) >> 2) << 1;
    }
    if ((int)uVar21 < 1) {
      uVar21 = 0;
    }
    else {
      piVar16 = local_12c;
      piVar7 = piVar16 + uVar21;
      iVar28 = uVar15 - (iVar4 * uVar21 + uVar20);
      piVar14 = piVar16;
      do {
        piVar14 = piVar14 + 1;
        *piVar14 = iVar4;
      } while (piVar14 != piVar7);
      if (iVar28 < 1) {
        if (iVar28 != 0) {
          piVar14 = local_12c + 1;
          do {
            piVar29 = piVar14 + 1;
            *piVar14 = *piVar14 + -1;
            piVar14 = piVar29;
          } while (piVar29 != local_12c + 1 + -iVar28);
        }
      }
      else {
        piVar14 = local_12c + uVar21 + 1;
        piVar29 = piVar14 + -iVar28;
        do {
          piVar1 = piVar14 + -1;
          piVar14 = piVar14 + -1;
          *piVar14 = *piVar1 + 1;
        } while (piVar14 != piVar29);
      }
      *(byte *)(param_2 + 9) = bVar2;
      do {
        piVar16 = piVar16 + 1;
        cVar3 = *(char *)puVar25;
        puVar25 = (uint *)((int)puVar25 + 1);
        *(char *)puVar25 = (char)*piVar16 + cVar3;
      } while (piVar16 != piVar7);
    }
  }
  else {
    uVar8 = *(byte *)(param_1 + 0xb) - 1;
    if (uVar8 < 3) {
      iVar28 = *(int *)(&DAT_000387ac + uVar8 * 4);
      local_12c[0] = *(int *)(&DAT_000387b8 + (uint)*(byte *)(param_1 + 0xc) * 4);
      bVar34 = SBORROW4(uVar15 * 10000,uVar20 * 0x57b1);
      iVar4 = uVar15 * 10000 + uVar20 * -0x57b1;
      bVar32 = iVar4 < 0;
      bVar33 = iVar4 != 0;
      if (bVar33 && bVar32 == bVar34) {
        unaff_r10 = uVar20 << 1;
      }
      if (bVar33 && bVar32 == bVar34) {
        uVar8 = 1;
      }
      if (!bVar33 || bVar32 != bVar34) {
        uVar8 = 0;
      }
      if (!bVar33 || bVar32 != bVar34) {
        unaff_r10 = uVar15;
      }
      pbVar26 = (byte *)((int)param_2 + 0x25);
      iVar4 = *(int *)(raac_log2Tab + unaff_r10 * 4);
      uVar21 = ((iVar4 - *(int *)(raac_log2Tab + uVar20 * 4) >> 3) * iVar28 + 0x1000000 >> 0x19) * 2
      ;
      lVar35 = raac_RatioPowInv(unaff_r10,uVar20,uVar21,iVar28);
      if ((int)uVar21 < 1) {
        FUN_0001f014((int)pbVar26,uVar21);
        *(byte *)(param_2 + 9) = bVar2;
        uVar5 = (uint)*(byte *)((int)param_2 + 0x25);
      }
      else {
        iVar11 = uVar20 << 0x18;
        uVar22 = 0;
        uVar5 = uVar20;
        do {
          iVar11 = (int)((ulonglong)((longlong)iVar11 * (longlong)(int)lVar35) >> 0x20) * 0x100;
          pbVar26[uVar22] = (char)((uint)(iVar11 + 0x800000) >> 0x18) - (char)uVar5;
          uVar22 = uVar22 + 1;
          uVar5 = iVar11 + 0x800000 >> 0x18;
        } while (uVar22 != uVar21);
        FUN_0001f014((int)pbVar26,uVar21);
        uVar5 = (uint)*(byte *)((int)param_2 + 0x25);
        if (1 < (int)uVar21) {
          uVar22 = 1;
          do {
            pbVar26 = pbVar26 + 1;
            uVar22 = uVar22 + 1;
            if (uVar5 <= *pbVar26) {
              uVar5 = (uint)*pbVar26;
            }
          } while (uVar22 != uVar21);
        }
        puVar10 = param_2 + 9;
        iVar11 = 1;
        *(byte *)(param_2 + 9) = bVar2;
        puVar25 = puVar10;
        do {
          iVar11 = iVar11 + 1;
          puVar10 = (uint *)((int)puVar10 + 1);
          *(char *)puVar10 = *(char *)((int)puVar25 + 1) + *(char *)puVar25;
          puVar25 = (uint *)((int)puVar25 + 1);
        } while (iVar11 <= (int)uVar21);
      }
      if (uVar8 != 0) {
        iVar28 = (int)((ulonglong)
                       ((longlong)((*(int *)(raac_log2Tab + uVar15 * 4) - iVar4 >> 3) * iVar28) *
                       (longlong)local_12c[0]) >> 0x20) * 4 + 0x1000000;
        pbVar26 = (byte *)((int)param_2 + uVar21 + 0x25);
        iVar4 = (iVar28 >> 0x19) * 2;
        lVar35 = raac_RatioPowInv(uVar15,unaff_r10,iVar4,iVar28);
        if (iVar4 < 1) {
          uVar8 = (uint)*(byte *)((int)param_2 + uVar21 + 0x25);
        }
        else {
          iVar28 = unaff_r10 << 0x18;
          iVar11 = 0;
          do {
            iVar28 = (int)((ulonglong)((longlong)iVar28 * (longlong)(int)lVar35) >> 0x20) * 0x100;
            pbVar26[iVar11] = (char)((uint)(iVar28 + 0x800000) >> 0x18) - (char)unaff_r10;
            iVar11 = iVar11 + 1;
            unaff_r10 = iVar28 + 0x800000 >> 0x18;
          } while (iVar11 != iVar4);
          uVar8 = (uint)*(byte *)((int)param_2 + uVar21 + 0x25);
          if (1 < iVar4) {
            iVar28 = 1;
            pbVar23 = pbVar26;
            do {
              pbVar23 = pbVar23 + 1;
              iVar28 = iVar28 + 1;
              if (*pbVar23 < uVar8) {
                uVar8 = (uint)*pbVar23;
              }
            } while (iVar28 != iVar4);
          }
        }
        iVar28 = (int)param_2 + uVar21 + 1;
        if (uVar8 < uVar5) {
          FUN_0001f014((int)pbVar26,iVar4);
          iVar6 = iVar4 + -1;
          bVar19 = *(byte *)(iVar28 + 0x24);
          iVar24 = uVar5 - bVar19;
          iVar11 = (int)((uint)pbVar26[iVar6] - (uint)bVar19) >> 1;
          if (iVar24 <= iVar11) {
            iVar11 = iVar24;
          }
          *(byte *)(iVar28 + 0x24) = (char)iVar11 + bVar19;
          pbVar26[iVar6] = pbVar26[iVar6] - (char)iVar11;
        }
        FUN_0001f014((int)pbVar26,iVar4);
        if (0 < iVar4) {
          iVar28 = 1;
          pcVar27 = (char *)((int)param_2 + uVar21 + 0x24);
          do {
            iVar28 = iVar28 + 1;
            pcVar27[1] = pcVar27[1] + *pcVar27;
            pcVar27 = pcVar27 + 1;
          } while (iVar28 <= iVar4);
        }
        uVar21 = uVar21 + iVar4;
      }
    }
    else {
      uVar21 = 0xffffffff;
    }
  }
  param_2[1] = uVar21;
  bVar19 = *(byte *)(param_1 + 7);
  uVar8 = uVar21 - bVar19;
  if ((int)uVar8 < 0) {
    param_2[2] = uVar8;
    uVar17 = 0xffffffe9;
  }
  else {
    puVar25 = param_2 + 0x15;
    iVar4 = 0;
    do {
      iVar28 = iVar4 + (uint)bVar19;
      iVar4 = iVar4 + 1;
      puVar25 = (uint *)((int)puVar25 + 1);
      *(undefined *)puVar25 = *(undefined *)((int)param_2 + iVar28 + 0x24);
    } while (iVar4 != uVar8 + 1);
    bVar19 = *(byte *)((int)param_2 + 0x55);
    uVar30 = (uint)bVar19;
    uVar22 = uVar8 - ((int)uVar8 >> 1);
    param_2[2] = uVar8;
    uVar5 = (uint)*(byte *)((int)param_2 + uVar8 + 0x55);
    *param_2 = uVar30;
    *(byte *)((int)param_2 + 0x86) = bVar19;
    param_2[5] = uVar5 - uVar30;
    if (0 < (int)uVar22) {
      puVar9 = (undefined *)((int)param_2 + 0x86);
      puVar12 = (undefined *)((int)param_2 + (0x55 - (uVar8 & 1)));
      iVar4 = 1;
      do {
        puVar12 = puVar12 + 2;
        iVar4 = iVar4 + 1;
        puVar9 = puVar9 + 1;
        *puVar9 = *puVar12;
      } while (iVar4 != uVar22 + 1);
    }
    param_2[3] = uVar22;
    uVar15 = (int)((*(int *)(raac_log2Tab + uVar15 * 4) - *(int *)(raac_log2Tab + uVar30 * 4) >> 2)
                   * (uint)*(byte *)(param_1 + 0xd) + 0x2000000) >> 0x1a;
    if ((int)uVar15 < 1) {
      uVar15 = 1;
      local_13c = 2;
    }
    else {
      if (5 < (int)uVar15) {
        param_2[6] = 0xffffffe9;
        return 0xffffffe9;
      }
      local_13c = uVar15 + 1;
    }
    iVar28 = 1;
    iVar4 = 0;
    puVar9 = (undefined *)((int)param_2 + 0x9f);
    *puVar9 = *(undefined *)((int)param_2 + 0x86);
    do {
      iVar11 = local_13c - iVar28;
      iVar28 = iVar28 + 1;
      iVar11 = __aeabi_idiv(uVar22 - iVar4,iVar11);
      iVar4 = iVar4 + iVar11;
      puVar9 = puVar9 + 1;
      *puVar9 = *(undefined *)((int)param_2 + iVar4 + 0x86);
    } while (iVar28 <= (int)uVar15);
    param_2[6] = uVar15;
    pcVar27 = (char *)((int)param_2 + 0xc9);
    uVar15 = (uint)(byte)raac_goalSBTab[param_3];
    if (uVar21 == 0) {
      *(undefined *)((int)param_2 + 0xc9) = 0;
      *(undefined *)((int)param_2 + 0xce) = 0;
      *(undefined *)((int)param_2 + 0xc2) = 0;
    }
    else {
      uVar8 = uVar21;
      if (uVar15 < uVar5) {
        if (*(byte *)(param_2 + 9) < uVar15) {
          uVar8 = 0;
          puVar25 = param_2 + 9;
          do {
            puVar25 = (uint *)((int)puVar25 + 1);
            uVar8 = uVar8 + 1;
          } while (*(byte *)puVar25 < uVar15);
        }
        else {
          uVar8 = 0;
        }
      }
      uVar15 = 0;
      uVar22 = uVar30;
      uVar31 = uVar20;
      do {
        pbVar23 = (byte *)((int)(param_2 + 9) + uVar8);
        pbVar26 = pbVar23;
        do {
          uVar18 = (uint)*pbVar26;
          uVar13 = uVar20 + uVar18 & 1;
          pbVar26 = pbVar26 + -1;
        } while ((int)((uVar31 + (uVar20 - 1)) - uVar13) < (int)uVar18);
        bVar19 = (byte)(uVar18 - uVar22) & ~(byte)((int)(uVar18 - uVar22) >> 0x1f);
        pcVar27[uVar15] = bVar19;
        *(byte *)((int)param_2 + uVar15 + 0xce) = (bVar2 - (char)uVar13) - bVar19;
        uVar31 = uVar30;
        if (pcVar27[uVar15] != '\0') {
          uVar15 = uVar15 + 1;
          uVar31 = uVar18;
          uVar22 = uVar18;
        }
        if (*pbVar23 == uVar18) {
          uVar8 = uVar21;
        }
        if (5 < (int)uVar15) {
          *(undefined *)((int)param_2 + 0xc2) = 0xe9;
          return 0xffffffe9;
        }
      } while (uVar5 != uVar18);
      uVar22 = param_2[3];
      if (1 < (int)uVar15 && *(byte *)((int)param_2 + uVar15 + 200) < 3) {
        uVar15 = uVar15 - 1;
      }
      bVar19 = (byte)*param_2;
      uVar21 = uVar15 & 0xff;
      *(char *)((int)param_2 + 0xc2) = (char)uVar21;
    }
    uVar15 = FUN_0001f064((char *)((int)param_2 + 0xa5),pcVar27,(char *)((int)param_2 + 0x86),uVar22
                          ,bVar19,(uint)*(byte *)(param_1 + 0xe),uVar21);
    uVar17 = 0;
    param_2[4] = uVar15;
  }
  return uVar17;
}



undefined4
raac_AdjustHighFreq(uint **param_1,uint **param_2,uint **param_3,uint **param_4,uint **param_5,
                   int param_6)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint **ppuVar7;
  uint **ppuVar8;
  uint **extraout_r1;
  uint **extraout_r1_00;
  byte bVar9;
  uint uVar10;
  uint *puVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  uint **ppuVar15;
  int iVar16;
  uint *puVar17;
  int *piVar18;
  uint **ppuVar19;
  uint *puVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined *puVar26;
  uint **ppuVar27;
  uint *puVar28;
  int iVar29;
  char *pcVar30;
  uint *puVar31;
  byte *pbVar32;
  uint **ppuVar33;
  uint uVar34;
  uint **unaff_r11;
  uint uVar35;
  uint *puVar36;
  int iVar37;
  char *pcVar38;
  uint uVar39;
  uint **ppuVar40;
  uint **ppuVar41;
  bool bVar42;
  bool bVar43;
  bool bVar44;
  int *piVar45;
  uint local_c0;
  uint **local_bc;
  uint **local_b8;
  uint **local_a8;
  uint **local_a4;
  uint local_a0;
  uint *local_98;
  int local_94;
  uint **local_90;
  uint **local_8c;
  uint **local_7c;
  uint **local_74;
  uint **local_6c;
  uint *local_64;
  int local_58;
  uint *local_54;
  int local_50;
  uint *local_48;
  uint local_2c [2];
  
  cVar1 = *(char *)param_3;
  bVar9 = *(byte *)((int)param_3 + 2);
  if (cVar1 == '\x01' || cVar1 == '\x03') {
    local_a8 = param_2;
    if (bVar9 == 0) {
LAB_00021138:
      *(undefined *)((int)param_1 + 0x4591) = 0xff;
      local_48 = *param_5;
      cVar1 = *(char *)((int)param_3 + 3);
      goto joined_r0x00021158;
    }
    *(byte *)((int)param_1 + 0x4591) = (*(char *)((int)param_3 + 3) + '\x01') - bVar9;
  }
  else {
    local_a8 = (uint **)(uint)(1 < bVar9);
    if (cVar1 != '\x02') {
      local_a8 = (uint **)0x0;
    }
    if (local_a8 == (uint **)0x0) goto LAB_00021138;
    *(byte *)((int)param_1 + 0x4591) = bVar9 - 1;
  }
  local_48 = *param_5;
  cVar1 = *(char *)((int)param_3 + 3);
joined_r0x00021158:
  if (cVar1 == '\0') {
LAB_0002115c:
    iVar23 = 0;
    puVar26 = (undefined *)((int)param_5 + 0x155);
    do {
      iVar23 = iVar23 + 1;
      puVar26[-0x2f] = puVar26[1];
      puVar26 = puVar26 + 1;
    } while (iVar23 != 0x30);
    *(undefined *)(param_5 + 0x49) = *(undefined *)((int)param_5 + 0x125);
    if ((int)*(char *)((int)param_1 + 0x4591) == (uint)*(byte *)((int)param_3 + 3)) {
      *(undefined *)(param_5 + 100) = 0;
    }
    else {
      *(undefined *)(param_5 + 100) = 0xff;
    }
    return 0;
  }
  local_94 = 0;
  ppuVar27 = param_3;
  local_6c = param_3;
  do {
    ppuVar19 = (uint **)((int)param_3 + local_94);
    bVar42 = *(char *)((int)local_6c + 10) == '\0';
    if (!bVar42) {
      ppuVar27 = param_4;
    }
    uVar10 = *(byte *)(ppuVar19 + 1) + 2;
    ppuVar8 = ppuVar19;
    if (bVar42) {
      ppuVar8 = param_4;
    }
    if (!bVar42) {
      local_a8 = (uint **)((int)ppuVar27 + 0x55);
    }
    bVar9 = *(byte *)(param_2 + 4);
    if (bVar42) {
      local_a8 = (uint **)((int)ppuVar8 + 0x86);
    }
    uVar5 = *(byte *)((int)local_6c + 5) + 2;
    if (bVar42) {
      puVar11 = ppuVar8[3];
    }
    else {
      puVar11 = ppuVar27[2];
    }
    if (bVar9 == 0) {
      if (0 < (int)puVar11) {
        ppuVar27 = (uint **)((int)local_a8 + (int)puVar11);
        unaff_r11 = (uint **)*param_4;
        local_7c = param_1 + 0x50b1;
        do {
          uVar35 = 0;
          uVar34 = (uint)*(byte *)local_a8;
          local_a8 = (uint **)((int)local_a8 + 1);
          uVar13 = (uint)*(byte *)local_a8;
          uVar14 = 0;
          if (uVar10 < uVar5) {
            iVar23 = uVar13 - uVar34;
            iVar25 = (uVar34 + uVar10 * 0x40) * 8;
            uVar22 = uVar10;
            do {
              if (uVar34 < uVar13) {
                piVar18 = (int *)((int)local_7c + iVar25);
                iVar21 = 0;
                do {
                  iVar16 = *piVar18;
                  piVar45 = piVar18 + 1;
                  piVar18 = piVar18 + 2;
                  lVar3 = (longlong)(*piVar45 >> 5) * (longlong)(*piVar45 >> 5) +
                          (longlong)(iVar16 >> 5) * (longlong)(iVar16 >> 5) +
                          CONCAT44(uVar35,uVar14);
                  uVar14 = (uint)lVar3;
                  uVar35 = (uint)((ulonglong)lVar3 >> 0x20);
                  iVar21 = iVar21 + 1;
                } while (iVar21 != iVar23);
              }
              uVar22 = uVar22 + 1;
              iVar25 = iVar25 + 0x200;
              local_90 = param_1;
              local_8c = unaff_r11;
            } while ((int)uVar22 < (int)uVar5);
          }
          else {
            iVar23 = uVar13 - uVar34;
          }
          if (uVar35 == 0) {
            if ((int)uVar14 < 0) {
              uVar14 = uVar14 >> 1;
              uVar35 = 1;
            }
          }
          else {
            if ((int)uVar35 < 0) {
              uVar22 = 0xffffffff;
              uVar39 = 0x21;
            }
            else {
              uVar39 = uVar35;
              uVar4 = 0;
              do {
                uVar22 = uVar4;
                uVar39 = uVar39 << 1;
                uVar4 = uVar22 + 1;
              } while (-1 < (int)uVar39);
              uVar39 = 0x21 - (uVar22 + 1);
            }
            uVar14 = uVar35 << (uVar22 & 0xff) | uVar14 >> (uVar39 & 0xff);
            uVar35 = uVar39;
          }
          iVar23 = *(int *)(&DAT_000387e4 + (iVar23 + -1) * 4);
          iVar25 = *(int *)(&DAT_000387e4 + ((uVar5 - uVar10) + -1) * 4);
          if (uVar34 < uVar13) {
            iVar21 = uVar34 + 1;
            while( true ) {
              iVar16 = iVar21 + -1;
              iVar21 = iVar21 + 1;
              iVar16 = iVar16 - (int)unaff_r11;
              *(char *)((int)param_1 + iVar16 + 0x4560) = (char)uVar35 + '\x01';
              param_1[iVar16 + 0x1128] =
                   (uint *)((ulonglong)
                            ((longlong)(int)uVar14 *
                            (longlong)
                            ((int)((ulonglong)((longlong)iVar23 * (longlong)iVar25) >> 0x20) << 1))
                           >> 0x20);
              if (iVar21 == uVar13 + 1) break;
              unaff_r11 = (uint **)*param_4;
            }
            unaff_r11 = (uint **)*param_4;
          }
          bVar2 = *(byte *)((int)param_1 + (uVar34 - (int)unaff_r11) + 0x4560);
          if (bVar9 < bVar2) {
            bVar9 = bVar2;
          }
        } while (local_a8 != ppuVar27);
      }
    }
    else {
      if ((int)param_4[5] < 1) {
        bVar9 = 0;
      }
      else {
        unaff_r11 = (uint **)0x0;
        iVar25 = *(int *)(&DAT_000387e4 + ((uVar5 - uVar10) + -1) * 4);
        ppuVar27 = param_1 + 0x1127;
        iVar23 = 0;
        puVar26 = (undefined *)((int)param_1 + 0x455f);
        do {
          local_c0 = 0;
          local_bc = (uint **)0x0;
          if (uVar10 < uVar5) {
            local_c0 = 0;
            local_bc = (uint **)0x0;
            ppuVar8 = param_1 + ((int)*param_4 + uVar10 * 0x40 + iVar23) * 2 + 0x50b1;
            uVar14 = uVar10;
            do {
              puVar11 = *ppuVar8;
              ppuVar15 = ppuVar8 + 1;
              ppuVar8 = ppuVar8 + 0x80;
              lVar3 = (longlong)((int)*ppuVar15 >> 5) * (longlong)((int)*ppuVar15 >> 5) +
                      (longlong)((int)puVar11 >> 5) * (longlong)((int)puVar11 >> 5) +
                      CONCAT44(local_bc,local_c0);
              local_c0 = (uint)lVar3;
              local_bc = (uint **)((ulonglong)lVar3 >> 0x20);
              uVar14 = uVar14 + 1;
            } while ((int)uVar14 < (int)uVar5);
          }
          if (local_bc == (uint **)0x0) {
            if ((int)local_c0 < 0) {
              local_c0 = local_c0 >> 1;
              ppuVar8 = (uint **)0x2;
            }
            else {
              ppuVar8 = (uint **)0x1;
            }
          }
          else {
            if ((int)local_bc < 0) {
              ppuVar8 = (uint **)0x22;
              uVar14 = 0xffffffff;
              uVar35 = 0x21;
            }
            else {
              ppuVar8 = local_bc;
              uVar35 = 0;
              do {
                uVar14 = uVar35;
                ppuVar8 = (uint **)((int)ppuVar8 << 1);
                uVar35 = uVar14 + 1;
              } while (-1 < (int)ppuVar8);
              iVar21 = -(uVar14 + 1);
              uVar35 = iVar21 + 0x21;
              ppuVar8 = (uint **)(iVar21 + 0x22U & 0xff);
            }
            local_c0 = (int)local_bc << (uVar14 & 0xff) | local_c0 >> (uVar35 & 0xff);
          }
          local_8c = local_bc;
          ppuVar27 = ppuVar27 + 1;
          *ppuVar27 = (uint *)((ulonglong)((longlong)(int)local_c0 * (longlong)iVar25) >> 0x20);
          iVar23 = iVar23 + 1;
          puVar26 = puVar26 + 1;
          *puVar26 = (char)ppuVar8;
          if (unaff_r11 < ppuVar8) {
            unaff_r11 = ppuVar8;
          }
        } while (iVar23 < (int)param_4[5]);
        bVar9 = (byte)unaff_r11;
        local_90 = param_5;
      }
    }
    param_1[0x1167] = (uint *)0xffffffff;
    param_1[0x116f] = (uint *)0xffffffff;
    param_1[0x116b] = (uint *)0xffffffff;
    local_a8 = (uint **)0x4590;
    param_1[0x1170] = (uint *)0xffffffff;
    *(byte *)(param_1 + 0x1164) = bVar9;
    iVar23 = (int)*(char *)((int)param_1 + local_94 + param_6 * 5 + 0x3cc4);
    iVar25 = 0;
    puVar11 = (uint *)(0x1d - iVar23);
    ppuVar27 = param_4;
    local_74 = param_4;
    if (0 < (int)param_4[4]) {
LAB_0001fcc8:
      iVar25 = iVar25 + 1;
      uVar10 = (uint)*(byte *)((int)local_74 + 0xa5);
      bVar42 = *(char *)((int)local_6c + 10) == '\0';
      puVar20 = param_1[0x1167];
      ppuVar8 = param_4;
      if (bVar42) {
        unaff_r11 = (uint **)((int)param_4 + 0x86);
        ppuVar8 = ppuVar27;
      }
      uVar5 = (uint)*(byte *)(param_1 + 0x1164);
      if (!bVar42) {
        unaff_r11 = (uint **)((int)ppuVar8 + 0x55);
      }
      puVar31 = param_1[0x1168];
      if (uVar10 < *(byte *)((int)local_74 + 0xa6)) {
        uVar14 = 0;
        ppuVar27 = param_1 + uVar10 + 0x1127;
        local_98 = (uint *)(param_6 * 0xf0 + local_94 * 0x30);
        puVar17 = (uint *)0x0;
        pbVar32 = (byte *)((int)param_1 + uVar10 + 0x4560);
        do {
          if ((byte *)((uint)*(byte *)((int)unaff_r11 + (int)puVar20 + 1) - (int)*param_4) ==
              pbVar32 + (-0x4560 - (int)param_1)) {
            puVar20 = (uint *)((int)puVar20 + 1);
            puVar31 = (uint *)((int)param_1[(int)local_98 + (int)puVar20 + 0xf34] >> 6);
          }
          pbVar12 = pbVar32 + 1;
          puVar17 = (uint *)((int)puVar17 + (int)puVar31);
          ppuVar27 = ppuVar27 + 1;
          uVar14 = uVar14 + ((int)*ppuVar27 >> (uVar5 - *pbVar32 & 0xff));
          if (uVar14 >> 0x1e != 0) {
            uVar5 = uVar5 + 1 & 0xff;
            uVar14 = (int)uVar14 >> 1;
          }
          pbVar32 = pbVar12;
        } while (pbVar12 != (byte *)((int)param_1 + *(byte *)((int)local_74 + 0xa6) + 0x4560));
        param_1[0x1167] = puVar20;
        param_1[0x1168] = puVar31;
        param_1[0x116a] = (uint *)0x1e;
        if (uVar14 == 0) {
          if (puVar17 == (uint *)0x0) goto LAB_0001fe2c;
          local_98 = (uint *)0x1e;
          puVar20 = (uint *)0x80000000;
        }
        else {
          if (puVar17 == (uint *)0x0) {
            local_98 = (uint *)0x1e;
            puVar20 = puVar17;
          }
          else {
            uVar10 = (uint)*(byte *)((int)param_2 + 0xf);
            if (uVar10 == 3) {
              local_98 = (uint *)0x1e;
            }
            puVar20 = *(uint **)(&DAT_000387d4 + uVar10 * 4);
            if (uVar10 != 3) {
              if ((int)uVar14 < 0) {
                iVar21 = 0x1b;
                uVar10 = 0xffffffff;
              }
              else {
                uVar35 = uVar14;
                uVar13 = 0;
                do {
                  uVar10 = uVar13;
                  uVar35 = uVar35 << 1;
                  uVar13 = uVar10 + 1;
                } while (-1 < (int)uVar35);
                iVar21 = 0x1b - (uVar10 + 1);
              }
              iVar16 = raac_InvRNormalized(uVar14 << (uVar10 & 0xff));
              puVar20 = (uint *)((ulonglong)
                                 ((longlong)
                                  (int)((ulonglong)((longlong)(int)puVar17 * (longlong)(int)puVar20)
                                       >> 0x20) * (longlong)iVar16) >> 0x20);
              local_98 = (uint *)((int)puVar11 + uVar5 + iVar21 + -6);
              param_1[0x116a] = local_98;
            }
          }
        }
      }
      else {
        param_1[0x116a] = (uint *)0x1e;
LAB_0001fe2c:
        puVar17 = (uint *)0x0;
        local_98 = (uint *)0x1e;
        puVar20 = *(uint **)(&DAT_000387d4 + (uint)*(byte *)((int)param_2 + 0xf) * 4);
      }
      param_1[0x1171] = puVar17;
      bVar42 = local_94 == *(char *)((int)param_1 + 0x4591);
      param_1[0x1169] = puVar20;
      if (bVar42) {
        local_8c = (uint **)0x0;
      }
      uVar10 = (uint)*(byte *)((int)local_74 + 0xa5);
      bVar9 = *(byte *)((int)local_74 + 0xa6);
      if ((!bVar42) &&
         (local_8c = (uint **)(local_94 - *(char *)(param_5 + 100)), local_8c != (uint **)0x0)) {
        local_8c = (uint **)0x1;
      }
      bVar42 = *(char *)((int)local_6c + 10) == '\0';
      if (bVar42) {
        local_90 = (uint **)((int)param_4 + 0x86);
        ppuVar27 = local_74;
      }
      else {
        ppuVar27 = (uint **)((int)param_4 + 0x55);
      }
      if (!bVar42) {
        local_90 = ppuVar27;
      }
      if (*(char *)((int)param_3 + 0xf) == '\x02') {
        uVar5 = (uint)(*(byte *)((int)param_3 + 0x11) <= *(byte *)(ppuVar19 + 1));
      }
      else {
        uVar5 = 0;
      }
      local_a8 = (uint **)0x45d0;
      param_1[0x1172] = (uint *)0x0;
      param_1[0x1173] = (uint *)0x0;
      param_1[0x1174] = (uint *)0x0;
      if (uVar10 < bVar9) {
        local_a4 = (uint **)((int)param_1 + uVar10 + 0x4560);
        iVar21 = uVar10 + 1;
        ppuVar27 = param_1 + uVar10 + 0x1204;
LAB_000200d0:
        iVar16 = iVar21 + -1;
        puVar17 = (uint *)((int)param_1[0x116b] + 1);
        puVar31 = *param_4;
        if ((uint)*(byte *)((int)param_4 + (int)puVar17 + 0x9f) - (int)puVar31 == iVar16) {
          param_1[0x116b] = puVar17;
          puVar31 = param_1[(int)puVar17 + uVar5 * 5 + param_6 * 10 + 0x1114];
          iVar24 = ((int)puVar31 >> 1) + 0x800000;
          if (iVar24 == 0) {
            uVar35 = 0xffffffe8;
            uVar14 = 0x1f;
            uVar10 = 0x20;
          }
          else {
            if (iVar24 < 0) {
              uVar35 = 8;
              uVar14 = 0xffffffff;
              uVar10 = 0;
            }
            else {
              iVar29 = iVar24;
              uVar10 = 0;
              do {
                uVar14 = uVar10;
                iVar29 = iVar29 << 1;
                uVar10 = uVar14 + 1;
              } while (-1 < iVar29);
              uVar35 = 8 - uVar10;
            }
          }
          iVar24 = raac_InvRNormalized(iVar24 << (uVar14 & 0xff));
          param_1[0x116c] = (uint *)((iVar24 << 1) >> (uVar35 & 0xff));
          puVar17 = (uint *)((int)((ulonglong)((longlong)(iVar24 << 1) * (longlong)(int)puVar31) >>
                                  0x20) << (uVar10 & 0xff));
          param_1[0x116d] = puVar17;
          puVar31 = *param_4;
        }
        else {
          puVar17 = param_1[0x116d];
        }
        if ((uint)*(byte *)((int)param_4 + (int)(uint *)((int)param_1[0x1170] + 1) + 0x55) -
            (int)puVar31 == iVar16) {
          param_1[0x1170] = (uint *)((int)param_1[0x1170] + 1);
        }
        puVar28 = param_1[0x116f];
        if ((uint)*(byte *)((int)local_90 + (int)puVar28 + 1) - (int)puVar31 == iVar16) {
          puVar36 = (uint *)((int)puVar28 + 1);
          param_1[0x116f] = puVar36;
          puVar6 = (uint *)(uint)*(byte *)((int)local_6c + 10);
          iVar24 = (int)*(char *)((int)param_1 + 0x4591);
          if (puVar6 == (uint *)0x0) {
            local_7c = (uint **)((int)puVar28 + 2);
            iVar37 = (int)puVar36 * 2 - ((uint)param_4[2] & 1);
            iVar29 = (int)local_7c * 2 - ((uint)param_4[2] & 1);
            if (iVar37 < iVar29) {
              if (local_94 < iVar24) {
                pcVar38 = (char *)((int)param_5 + iVar37 + 0x156);
                pcVar30 = (char *)((int)param_5 + iVar29 + 0x156);
                if (*(char *)(param_5 + 0x49) == '\0') {
                  do {
                    if (pcVar38 + 1 == pcVar30) break;
                    pcVar38 = pcVar38 + 2;
                  } while (pcVar38 != pcVar30);
                }
                else {
                  do {
                    if ((pcVar38[-0x30] != '\0') && (*pcVar38 != '\0')) goto LAB_00020544;
                    pcVar38 = pcVar38 + 1;
                  } while (pcVar38 != pcVar30);
                }
                puVar6 = (uint *)0x0;
                param_1[0x116e] = (uint *)0x0;
                goto LAB_00020150;
              }
              pbVar32 = (byte *)((int)param_5 + iVar37 + 0x155);
              do {
                pbVar32 = pbVar32 + 1;
                puVar6 = (uint *)(uint)*pbVar32;
                iVar37 = iVar37 + 1;
                if (puVar6 != (uint *)0x0) goto LAB_00020544;
              } while (iVar37 != iVar29);
            }
          }
          else {
            if (local_94 < iVar24) {
              puVar6 = (uint *)(uint)*(byte *)(param_5 + 0x49);
              if (puVar6 != (uint *)0x0) {
                puVar6 = (uint *)(uint)*(byte *)((int)param_5 + (int)puVar36 + 0x126);
                if (puVar6 != (uint *)0x0) {
                  puVar6 = (uint *)(uint)*(byte *)((int)param_5 + (int)puVar36 + 0x156);
                }
              }
            }
            else {
              puVar6 = (uint *)(uint)*(byte *)((int)param_5 + (int)puVar36 + 0x156);
            }
          }
          param_1[0x116e] = puVar6;
        }
        else {
          iVar24 = (int)*(char *)((int)param_1 + 0x4591);
          puVar6 = param_1[0x116e];
          puVar36 = puVar28;
        }
        goto LAB_00020150;
      }
      uVar10 = (int)puVar17 >> 1;
      ppuVar8 = (uint **)(uint)*(byte *)((int)local_74 + 0xa5);
      ppuVar27 = (uint **)(uint)*(byte *)((int)local_74 + 0xa6);
      goto LAB_000205e0;
    }
LAB_00020778:
    local_54 = param_5[0x66];
    local_64 = param_5[0x67];
    puVar11 = param_5[0x65];
    if (*(char *)((int)param_2 + 0x11) == '\0') {
      local_8c = (uint **)0x4;
    }
    else {
      local_8c = (uint **)0x0;
    }
    if (local_48 != (uint *)0x0) {
      puVar11 = (uint *)0x2;
      if (local_8c != (uint **)0x0) {
        puVar20 = param_4[5];
        unaff_r11 = param_1 + 0x1140;
        ppuVar27 = (uint **)0x0;
        do {
          if (0 < (int)puVar20) {
            ppuVar8 = param_1 + 0x1174;
            ppuVar15 = param_1 + 0x11a4;
            iVar23 = 0;
            do {
              ppuVar8 = ppuVar8 + 1;
              iVar25 = (int)param_5 + iVar23 + (int)local_64 * 0xc0;
              iVar23 = iVar23 + 4;
              *(uint **)(iVar25 + 0x1a0) = *ppuVar8;
              ppuVar15 = ppuVar15 + 1;
              *(uint **)(iVar25 + 0x560) = *ppuVar15;
            } while (iVar23 != (int)puVar20 * 4);
          }
          ppuVar27 = (uint **)((int)ppuVar27 + 1);
          if (local_64 == (uint *)0x4) {
            local_64 = (uint *)0x0;
          }
          else {
            local_64 = (uint *)((int)local_64 + 1);
          }
          local_a8 = local_8c;
        } while (ppuVar27 != local_8c);
      }
      if (local_94 != 0) {
        return 0xffffffe9;
      }
    }
    uVar10 = (uint)*(byte *)(ppuVar19 + 1);
    bVar9 = *(byte *)((int)local_6c + 5);
    if (uVar10 < bVar9) {
      local_58 = uVar10 + 2;
      local_50 = local_58 * 0x40;
      local_74 = (uint **)0x0;
      do {
        unaff_r11 = (uint **)param_4[5];
        if ((int)local_74 < 5) {
          if ((int)unaff_r11 < 1) goto LAB_000210c8;
          iVar23 = (int)local_64 * 2;
          ppuVar27 = param_1 + 0x11a4;
          ppuVar19 = param_1 + 0x1174;
          iVar25 = 0;
          do {
            ppuVar19 = ppuVar19 + 1;
            iVar21 = (int)param_5 + iVar25 + (int)local_64 * 0xc0;
            iVar25 = iVar25 + 4;
            *(uint **)(iVar21 + 0x1a0) = *ppuVar19;
            ppuVar27 = ppuVar27 + 1;
            *(uint **)(iVar21 + 0x560) = *ppuVar27;
          } while (iVar25 != (int)unaff_r11 * 4);
          puVar20 = *param_4;
LAB_000208d4:
          local_a8 = (uint **)0x0;
          local_90 = (uint **)(((int)local_54 >> 1) << 0x1f);
          ppuVar27 = param_1 + 0x12c4;
          ppuVar19 = param_1 + 0x50b1 + (local_50 + (int)puVar20) * 2;
          local_7c = (uint **)((int)local_54 * -0x80000000 + -0x80000000 >> 0x1f);
          local_a4 = param_5 + (iVar23 + (int)local_64) * 0x10 + 0x158;
          iVar23 = 0;
          do {
            if ((local_94 == *(char *)((int)param_1 + 0x4591)) ||
               (local_94 == *(char *)(param_5 + 100))) {
              if (uVar10 == local_58 - 2U) {
                puVar20 = local_a4[-0xf0];
                ppuVar27[0x31] = (uint *)0x0;
                ppuVar27[1] = puVar20;
              }
            }
            else {
              if (local_8c == (uint **)0x0) {
                if (uVar10 == local_58 - 2U) {
                  ppuVar27[1] = local_a4[-0xf0];
                  ppuVar27[0x31] = *local_a4;
                }
              }
              else {
                if ((int)local_74 < 5) {
                  iVar21 = 0;
                  iVar25 = 0;
                  piVar18 = (int *)&UNK_000387bc;
                  puVar20 = local_64;
                  do {
                    piVar18 = piVar18 + 1;
                    iVar16 = iVar23 + (int)puVar20 * 0x30;
                    iVar25 = iVar25 + (int)((ulonglong)
                                            ((longlong)(int)param_5[iVar16 + 0x68] *
                                            (longlong)*piVar18) >> 0x20);
                    puVar31 = (uint *)((int)puVar20 + -1);
                    iVar21 = iVar21 + (int)((ulonglong)
                                            ((longlong)(int)param_5[iVar16 + 0x158] *
                                            (longlong)*piVar18) >> 0x20);
                    if ((int)puVar31 < 0) {
                      puVar31 = puVar20 + 1;
                    }
                    puVar20 = puVar31;
                  } while (piVar18 != (int *)&DAT_000387d0);
                  ppuVar27[1] = (uint *)(iVar25 * 2);
                  ppuVar27[0x31] = (uint *)(iVar21 * 2);
                }
              }
            }
            puVar20 = ppuVar27[-0xef];
            if (puVar20 == (uint *)0x0) {
              uVar14 = (uint)((longlong)*(int *)(raac_noiseTab + (int)puVar11 * 4) *
                              (longlong)(int)ppuVar27[0x31] >> 0x28);
              uVar5 = (uint)((longlong)*(int *)(raac_noiseTab + ((int)puVar11 + 1U) * 4) *
                             (longlong)(int)ppuVar27[0x31] >> 0x28);
            }
            else {
              uVar14 = ((uint)puVar20 ^ (int)local_90 >> 0x1f) - ((int)local_90 >> 0x1f) &
                       (uint)local_7c;
              uVar5 = (int)((uint)local_90 ^ (iVar23 + (int)*param_4) * -0x80000000) >> 0x1f;
              uVar5 = ((uint)puVar20 ^ uVar5) - uVar5 & (int)local_54 * -0x80000000 >> 0x1f;
            }
            ppuVar27 = ppuVar27 + 1;
            puVar11 = (uint *)((int)puVar11 + 2U & 0x3ff);
            iVar25 = (int)((ulonglong)((longlong)(int)*ppuVar27 * (longlong)(int)*ppuVar19) >> 0x20)
            ;
            iVar21 = (int)((ulonglong)((longlong)(int)*ppuVar27 * (longlong)(int)ppuVar19[1]) >>
                          0x20);
            uVar35 = iVar21 >> 0x1f;
            iVar23 = iVar23 + 1;
            if (iVar25 >> 0x1f == iVar25 >> 0x16) {
              uVar13 = iVar25 << 8;
            }
            else {
              uVar13 = iVar25 >> 0x1f ^ 0x3fffffff;
            }
            bVar42 = uVar35 == iVar21 >> 0x16;
            puVar20 = (uint *)(uVar13 + uVar14);
            if (bVar42) {
              uVar35 = iVar21 << 8;
            }
            *ppuVar19 = puVar20;
            if (!bVar42) {
              uVar35 = uVar35 ^ 0x3fffffff;
            }
            puVar31 = (uint *)(uVar35 + uVar5);
            ppuVar19[1] = puVar31;
            unaff_r11 = (uint **)param_4[5];
            ppuVar19 = ppuVar19 + 2;
            local_a8 = (uint **)((uint)local_a8 |
                                ((int)puVar20 >> 0x1f ^ (uint)puVar20) - ((int)puVar20 >> 0x1f) |
                                ((int)puVar31 >> 0x1f ^ (uint)puVar31) - ((int)puVar31 >> 0x1f));
            local_a4 = local_a4 + 1;
          } while (iVar23 < (int)unaff_r11);
          uVar5 = (int)local_a8 >> 0x1d;
        }
        else {
          puVar20 = *param_4;
          if (0 < (int)unaff_r11) {
            iVar23 = (int)local_64 << 1;
            goto LAB_000208d4;
          }
LAB_000210c8:
          uVar5 = 0;
          local_a8 = (uint **)0x0;
        }
        bVar42 = local_64 != (uint *)0x4;
        if (bVar42) {
          local_64 = (uint *)((int)local_64 + 1);
        }
        if (!bVar42) {
          local_64 = (uint *)0x0;
        }
        local_54 = (uint *)((int)local_54 + 1U & 3);
        if (uVar5 != 0) {
          if (0 < (int)unaff_r11) {
            iVar23 = 0;
            ppuVar27 = param_1 + 0x50b1 + (local_50 + (int)*param_4) * 2;
            do {
              puVar20 = *ppuVar27;
              iVar23 = iVar23 + 1;
              puVar31 = ppuVar27[1];
              if ((int)puVar20 >> 0x1f != (int)puVar20 >> 0x1d) {
                puVar20 = (uint *)((int)puVar20 >> 0x1f ^ 0x1fffffff);
              }
              if ((int)puVar31 >> 0x1f != (int)puVar31 >> 0x1d) {
                puVar31 = (uint *)((int)puVar31 >> 0x1f ^ 0x1fffffff);
              }
              *ppuVar27 = puVar20;
              ppuVar27[1] = puVar31;
              ppuVar27 = ppuVar27 + 2;
            } while (iVar23 < (int)param_4[5]);
          }
          if ((int)local_a8 >> 0x1f != uVar5) {
            local_a8 = (uint **)((int)local_a8 >> 0x1f ^ 0x1fffffff);
          }
        }
        iVar23 = 0x62 - ((local_58 << 0x1a) >> 0x1f);
        local_74 = (uint **)((int)local_74 + 1);
        local_58 = local_58 + 1;
        local_50 = local_50 + 0x40;
        local_a8 = (uint **)((uint)local_a8 | (uint)param_5[iVar23]);
        param_5[iVar23] = (uint *)local_a8;
      } while (local_74 != (uint **)(bVar9 - uVar10));
    }
    param_5[0x65] = puVar11;
    local_6c = (uint **)((int)local_6c + 1);
    param_5[0x66] = local_54;
    param_5[0x67] = local_64;
    if ((int)(uint)*(byte *)((int)param_3 + 3) <= local_94 + 1) goto LAB_0002115c;
    ppuVar27 = (uint **)0x0;
    local_48 = (uint *)0x0;
    local_94 = local_94 + 1;
  } while( true );
LAB_00020544:
  puVar6 = (uint *)0x1;
  param_1[0x116e] = (uint *)0x1;
LAB_00020150:
  if (local_94 < iVar24) {
    ppuVar8 = (uint **)(uint)*(byte *)(param_5 + 0x49);
    if (ppuVar8 != (uint **)0x0) {
      puVar28 = param_1[0x1170];
      ppuVar8 = (uint **)(uint)*(byte *)((int)param_5 + (int)puVar28 + 0x126);
      if (ppuVar8 != (uint **)0x0) goto LAB_0001ff68;
    }
  }
  else {
    puVar28 = param_1[0x1170];
LAB_0001ff68:
    if (((uint)*(byte *)((int)param_4 + (int)puVar28 + 0x56) +
         (uint)*(byte *)((int)param_4 + (int)puVar28 + 0x55) >> 1) - (int)puVar31 == iVar16) {
      ppuVar8 = (uint **)(uint)*(byte *)((int)param_5 + (int)puVar28 + 0x156);
    }
    else {
      ppuVar8 = (uint **)0x0;
    }
  }
  ppuVar15 = (uint **)param_1[(int)(puVar36 + local_94 * 0xc + param_6 * 0x3c + 0x3cd)];
  puVar31 = (uint *)((int)((ulonglong)((longlong)(int)ppuVar15 * (longlong)(int)puVar17) >> 0x20) <<
                    1);
  local_b8 = ppuVar8;
  if (ppuVar8 != (uint **)0x0) {
    ppuVar8 = (uint **)((int)((ulonglong)((longlong)(int)ppuVar15 * (longlong)(int)param_1[0x116c])
                             >> 0x20) << 1);
    local_b8 = (uint **)((int)ppuVar8 >> 6);
  }
  if (local_8c == (uint **)0x1) {
    if (puVar6 != (uint *)0x0) goto LAB_00020188;
    ppuVar15 = (uint **)((int)((ulonglong)((longlong)(int)param_1[0x116c] * (longlong)(int)ppuVar15)
                              >> 0x20) << 1);
LAB_0001ffec:
    puVar28 = ppuVar27[-0xdc];
  }
  else {
    if (puVar6 == (uint *)0x0) goto LAB_0001ffec;
LAB_00020188:
    puVar28 = ppuVar27[-0xdc];
    ppuVar15 = (uint **)((int)((ulonglong)((longlong)(int)puVar17 * (longlong)(int)ppuVar15) >> 0x20
                              ) << 1);
  }
  ppuVar33 = ppuVar15;
  puVar17 = puVar11;
  if (puVar28 != (uint *)0x0) {
    if ((int)puVar28 < 0) {
      uVar10 = 0xffffffff;
      local_a0 = 0x3d;
    }
    else {
      puVar17 = puVar28;
      uVar14 = 0;
      do {
        uVar10 = uVar14;
        puVar17 = (uint *)((int)puVar17 << 1);
        uVar14 = uVar10 + 1;
      } while (-1 < (int)puVar17);
      local_a0 = 0x3d - (uVar10 + 1);
    }
    iVar16 = raac_InvRNormalized((int)puVar28 << (uVar10 & 0xff));
    ppuVar33 = (uint **)((ulonglong)((longlong)(int)ppuVar15 * (longlong)iVar16) >> 0x20);
    puVar17 = (uint *)((int)puVar11 + *(byte *)local_a4 + local_a0 + -0x20);
  }
  if (puVar20 != (uint *)0x80000000) {
    if ((int)puVar17 < (int)local_98) {
      puVar36 = (uint *)((int)local_98 - (int)puVar17);
      if (0x1e < (int)puVar36) {
        puVar36 = (uint *)0x1f;
      }
      bVar42 = (int)ppuVar33 <= (int)puVar20 >> ((uint)puVar36 & 0xff);
    }
    else {
      puVar36 = (uint *)((int)puVar17 - (int)local_98);
      if (0x1e < (int)puVar36) {
        puVar36 = (uint *)0x1f;
      }
      bVar42 = (int)ppuVar33 >> ((uint)puVar36 & 0xff) <= (int)puVar20;
    }
    if (!bVar42) {
      ppuVar7 = ppuVar33;
      if (ppuVar33 != (uint **)0x0) {
        if ((int)ppuVar33 < 0) {
          local_7c = (uint **)0x10;
          ppuVar33 = (uint **)((int)ppuVar33 >> 0x10);
          ppuVar7 = local_7c;
        }
        else {
          ppuVar41 = (uint **)0x0;
          do {
            ppuVar40 = ppuVar41;
            ppuVar7 = (uint **)((int)ppuVar7 << 1);
            ppuVar41 = (uint **)((int)ppuVar40 + 1);
          } while (-1 < (int)ppuVar7);
          bVar44 = SBORROW4((int)ppuVar41,0xf);
          bVar42 = (int)((int)ppuVar40 - 0xeU) < 0;
          bVar43 = ppuVar41 != (uint **)0xf;
          if ((int)ppuVar41 < 0x10) {
            ppuVar41 = (uint **)(0x10 - (int)ppuVar41);
          }
          if (!bVar43 || bVar42 != bVar44) {
            local_7c = ppuVar41;
          }
          ppuVar7 = local_b8;
          if (!bVar43 || bVar42 != bVar44) {
            ppuVar7 = ppuVar41;
          }
          if (bVar43 && bVar42 == bVar44) {
            local_7c = (uint **)0x0;
            ppuVar7 = local_7c;
          }
          else {
            ppuVar33 = (uint **)((int)ppuVar33 >> ((uint)ppuVar7 & 0xff));
            ppuVar7 = local_7c;
          }
        }
      }
      local_7c = ppuVar7;
      if (puVar20 == (uint *)0x0) {
        local_a0 = 0x1f;
      }
      else {
        if ((int)puVar20 < 0) {
          local_a0 = 0xffffffff;
        }
        else {
          puVar36 = puVar20;
          uVar10 = 0;
          do {
            local_a0 = uVar10;
            puVar36 = (uint *)((int)puVar36 << 1);
            uVar10 = local_a0 + 1;
          } while (-1 < (int)puVar36);
        }
      }
      iVar16 = __aeabi_idiv((int)puVar20 << (local_a0 & 0xff),ppuVar33);
      local_7c = (uint **)((int)local_7c - (int)puVar17);
      iVar24 = (int)local_98 + local_a0 + (int)local_7c;
      if (iVar24 < 0x1f) {
        uVar10 = 0x1e - iVar24;
        if (0x1d < (int)uVar10) {
          uVar10 = 0x1e;
        }
        if (iVar16 >> 0x1f == iVar16 >> (0x1e - uVar10 & 0xff)) {
          uVar10 = iVar16 << (uVar10 & 0xff);
        }
        else {
          uVar10 = iVar16 >> 0x1f ^ 0x3fffffff;
        }
      }
      else {
        if (iVar24 < 0x3d) {
          uVar10 = iVar24 - 0x1e;
        }
        else {
          uVar10 = 0x1f;
        }
        uVar10 = iVar16 >> (uVar10 & 0xff);
      }
      puVar31 = (uint *)((int)((ulonglong)((longlong)(int)puVar31 * (longlong)(int)uVar10) >> 0x20)
                        << 2);
      ppuVar15 = (uint **)((int)((ulonglong)((longlong)(int)ppuVar15 * (longlong)(int)uVar10) >>
                                0x20) << 2);
      ppuVar27[0x61] = puVar20;
      ppuVar27[0x91] = local_98;
      goto LAB_00020044;
    }
  }
  ppuVar27[0x61] = (uint *)ppuVar33;
  ppuVar27[0x91] = puVar17;
LAB_00020044:
  ppuVar27[1] = (uint *)ppuVar8;
  param_1[0x1173] = (uint *)((int)param_1[0x1173] + (int)local_b8);
  ppuVar27[0x31] = puVar31;
  if (local_94 != *(char *)((int)param_1 + 0x4591)) {
    iVar16 = 1 - (int)ppuVar8;
    if ((uint **)0x1 < ppuVar8) {
      iVar16 = 0;
    }
    if (local_94 == *(char *)(param_5 + 100)) {
      iVar16 = 0;
    }
    if (iVar16 != 0) {
      param_1[0x1174] = (uint *)((int)param_1[0x1174] + ((int)puVar31 >> 6));
    }
  }
  iVar21 = iVar21 + 1;
  if (puVar28 != (uint *)0x0) {
    param_1[0x1172] = (uint *)((int)param_1[0x1172] + ((int)ppuVar15 >> 6));
  }
  local_a4 = (uint **)((int)local_a4 + 1);
  ppuVar27 = ppuVar27 + 1;
  if (iVar21 == bVar9 + 1) goto LAB_0002059c;
  goto LAB_000200d0;
LAB_0002059c:
  local_a8 = (uint **)0x45c4;
  iVar21 = ((int)param_1[0x1173] >> 1) + ((int)param_1[0x1172] >> 1) + ((int)param_1[0x1174] >> 1);
  ppuVar8 = (uint **)(uint)*(byte *)((int)local_74 + 0xa5);
  ppuVar27 = (uint **)(uint)*(byte *)((int)local_74 + 0xa6);
  uVar10 = (int)param_1[0x1171] >> 1;
  unaff_r11 = param_4;
  if (iVar21 < 8) {
LAB_000205e0:
    iVar21 = 0x2830afd3;
    if (uVar10 == 0) {
      iVar21 = 0x10000000;
    }
    local_2c[0] = 0;
  }
  else {
    local_2c[0] = uVar10;
    if (uVar10 == 0) goto LAB_000205fc;
    local_2c[0] = 0;
    iVar16 = iVar21 * 2;
    while (-1 < iVar16) {
      local_2c[0] = local_2c[0] + 1;
      iVar16 = iVar16 << 1;
    }
    iVar21 = raac_InvRNormalized(iVar21 << (local_2c[0] & 0xff));
    iVar21 = (int)((ulonglong)((longlong)(int)uVar10 * (longlong)iVar21) >> 0x20);
    uVar10 = 0x2830afd3;
    local_a8 = extraout_r1_00;
    if (0x2830afd3 >> (local_2c[0] & 0xff) < iVar21) {
      local_2c[0] = 0;
      goto LAB_000205fc;
    }
  }
  uVar10 = iVar21 << (local_2c[0] & 0xff);
LAB_000205fc:
  if (ppuVar8 < ppuVar27) {
    ppuVar33 = (uint **)((int)ppuVar27 - (int)ppuVar8);
    uVar5 = 0x1b - iVar23;
    ppuVar15 = (uint **)0x0;
    ppuVar27 = (uint **)0x3fffffff;
    ppuVar8 = param_1 + (int)(ppuVar8 + 0x499);
    do {
      while( true ) {
        ppuVar7 = ppuVar8 + 1;
        iVar21 = raac_SqrtFix((int)((ulonglong)((longlong)(int)*ppuVar7 * (longlong)(int)uVar10) >>
                                   0x20) << 2,(int)ppuVar8[0x31] - 2,local_2c);
        local_2c[0] = local_2c[0] - 0x18;
        if ((int)local_2c[0] < 0) {
          local_2c[0] = -local_2c[0];
          if (0x1d < (int)local_2c[0]) {
            local_2c[0] = 0x1e;
          }
          if (iVar21 >> 0x1f == iVar21 >> (0x1e - local_2c[0] & 0xff)) {
            puVar20 = (uint *)(iVar21 << (local_2c[0] & 0xff));
          }
          else {
            puVar20 = (uint *)(iVar21 >> 0x1f ^ 0x3fffffff);
          }
          ppuVar8[-0xef] = puVar20;
        }
        else {
          uVar14 = local_2c[0];
          if (0x1e < (int)local_2c[0]) {
            uVar14 = 0x1f;
          }
          ppuVar8[-0xef] = (uint *)(iVar21 >> (uVar14 & 0xff));
        }
        iVar21 = raac_SqrtFix((int)((ulonglong)
                                    ((longlong)(int)ppuVar8[-0x2f] * (longlong)(int)uVar10) >> 0x20)
                              << 2,uVar5,local_2c);
        local_2c[0] = local_2c[0] - 0xe;
        if ((int)local_2c[0] < 0) {
          local_2c[0] = -local_2c[0];
          if (0x1d < (int)local_2c[0]) {
            local_2c[0] = 0x1e;
          }
          if (iVar21 >> 0x1f == iVar21 >> (0x1e - local_2c[0] & 0xff)) {
            puVar20 = (uint *)(iVar21 << (local_2c[0] & 0xff));
          }
          else {
            puVar20 = (uint *)(iVar21 >> 0x1f ^ 0x3fffffff);
          }
          ppuVar8[-0xbf] = puVar20;
        }
        else {
          uVar14 = local_2c[0];
          if (0x1e < (int)local_2c[0]) {
            uVar14 = 0x1f;
          }
          ppuVar8[-0xbf] = (uint *)(iVar21 >> (uVar14 & 0xff));
        }
        iVar21 = raac_SqrtFix((int)((ulonglong)
                                    ((longlong)(int)ppuVar8[-0x5f] * (longlong)(int)uVar10) >> 0x20)
                              << 2,uVar5,local_2c);
        local_2c[0] = local_2c[0] - 5;
        if ((int)local_2c[0] < 0) break;
        ppuVar15 = (uint **)((int)ppuVar15 + 1);
        uVar14 = local_2c[0];
        if (0x1e < (int)local_2c[0]) {
          uVar14 = 0x1f;
        }
        ppuVar8[-0x8f] = (uint *)(iVar21 >> (uVar14 & 0xff));
        local_a8 = extraout_r1;
        ppuVar8 = ppuVar7;
        if (ppuVar15 == ppuVar33) goto LAB_00020758;
      }
      local_2c[0] = -local_2c[0];
      if (0x1d < (int)local_2c[0]) {
        local_2c[0] = 0x1e;
      }
      ppuVar15 = (uint **)((int)ppuVar15 + 1);
      local_a8 = (uint **)(0x1e - local_2c[0]);
      if (iVar21 >> 0x1f == iVar21 >> ((uint)local_a8 & 0xff)) {
        puVar20 = (uint *)(iVar21 << (local_2c[0] & 0xff));
      }
      else {
        puVar20 = (uint *)(iVar21 >> 0x1f ^ 0x3fffffff);
      }
      ppuVar8[-0x8f] = puVar20;
      ppuVar8 = ppuVar7;
    } while (ppuVar15 != ppuVar33);
  }
LAB_00020758:
  local_74 = (uint **)((int)local_74 + 1);
  if ((int)param_4[4] <= iVar25) goto LAB_00020778;
  goto LAB_0001fcc8;
}



undefined8 raac_GenerateHighFreq(int param_1,int param_2,int *param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  uint *puVar20;
  int *piVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  uint local_e0;
  uint local_dc;
  int local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  uint local_bc;
  byte *local_b4;
  int local_b0;
  int local_a8;
  int local_74;
  int local_6c;
  int local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  if (0 < param_3[6]) {
    iVar4 = 0;
    iVar9 = param_4;
    iVar12 = param_4;
    do {
      bVar3 = *(byte *)(iVar12 + 0x10a);
      iVar18 = *(int *)(iVar9 + 0x110);
      iVar6 = *(int *)(&DAT_000388e4 + ((uint)bVar3 + (uint)*(byte *)(iVar12 + 0x105) * 4) * 4);
      if (iVar6 < iVar18) {
        iVar6 = (int)((ulonglong)((longlong)iVar6 * 0x60000000) >> 0x20) +
                (int)((ulonglong)((longlong)iVar18 * 0x20000000) >> 0x20);
      }
      else {
        iVar6 = (int)((ulonglong)((longlong)iVar6 * 0x74000000) >> 0x20) +
                (int)((ulonglong)((longlong)iVar18 * 0xc000000) >> 0x20);
      }
      iVar6 = iVar6 * 2;
      if (iVar6 < 0x2000000) {
        iVar6 = 0;
      }
      else {
        if (0x7f7fffff < iVar6) {
          iVar6 = 0x7f800000;
        }
      }
      *(int *)(iVar9 + 0x110) = iVar6;
      iVar4 = iVar4 + 1;
      *(byte *)(iVar12 + 0x105) = bVar3;
      iVar9 = iVar9 + 4;
      iVar12 = iVar12 + 1;
    } while (iVar4 < param_3[6]);
  }
  local_c4 = *(int *)(param_4 + 0x110);
  local_c0 = *param_3;
  uVar10 = *(byte *)(param_2 + 4) + 2;
  uVar19 = *(byte *)(param_2 + (uint)*(byte *)(param_2 + 3) + 4) + 2;
  uVar7 = (uint)((ulonglong)((longlong)local_c4 * (longlong)local_c4) >> 0x20);
  uVar13 = *(uint *)(param_4 + 0x18c) | *(uint *)(param_4 + 0x188);
  if (uVar13 == 0) {
    local_74 = 0x1f;
    local_6c = 0x20;
  }
  else {
    if ((int)uVar13 < 0) {
      local_74 = -1;
      local_6c = 0;
    }
    else {
      local_6c = 0;
      do {
        local_74 = local_6c;
        uVar13 = uVar13 << 1;
        local_6c = local_74 + 1;
      } while (-1 < (int)uVar13);
    }
  }
  uVar13 = (uint)*(byte *)((int)param_3 + 0xc2);
  if (uVar13 != 0) {
    local_a8 = uVar7 << 1;
    local_60 = 0;
    uVar1 = (uint)*(byte *)(param_2 + 4) * 0x40;
    local_b0 = 0;
    local_b4 = (byte *)((int)param_3 + 0xc9);
    do {
      uVar7 = (uint)*local_b4;
      if (uVar7 != 0) {
        local_c8 = 0;
        local_bc = (local_c0 + uVar10 * 0x40) * 8;
        iVar9 = param_1 + 0x142c4;
        do {
          if ((int)(uint)*(byte *)((int)param_3 + local_b0 + 0xa0) <= local_c0) {
            local_c4 = *(int *)(param_4 + (local_b0 + 0x45) * 4);
            local_a8 = (int)((ulonglong)((longlong)local_c4 * (longlong)local_c4) >> 0x20) << 1;
            local_b0 = local_b0 + 1;
          }
          puVar17 = (uint *)(iVar9 + local_bc);
          iVar12 = (uint)local_b4[5] + local_c8;
          if (local_c4 == 0) {
            uVar7 = local_bc;
            if (uVar10 < uVar19) {
              puVar20 = (uint *)(iVar9 + (iVar12 + uVar10 * 0x40) * 8);
              uVar13 = uVar10;
              do {
                uVar7 = *puVar20;
                uVar13 = uVar13 + 1;
                *puVar17 = uVar7;
                puVar2 = puVar20 + 1;
                puVar20 = puVar20 + 0x80;
                puVar17[1] = *puVar2;
                puVar17 = puVar17 + 0x80;
              } while ((int)uVar13 < (int)uVar19);
            }
          }
          else {
            piVar21 = (int *)(iVar9 + iVar12 * 8);
            if (local_74 < 3) {
              piVar14 = piVar21;
              do {
                piVar14[1] = piVar14[1] >> (4U - local_6c & 0xff);
                *piVar14 = *piVar14 >> (4U - local_6c & 0xff);
                piVar14 = piVar14 + 0x80;
              } while (piVar14 != piVar21 + 0x1400);
            }
            raac_CVKernel1(piVar21,&local_58);
            uVar13 = (int)local_54 >> 0x1f;
            uVar7 = (int)local_4c >> 0x1f;
            uVar15 = (int)local_34 >> 0x1f;
            uVar8 = (int)local_3c >> 0x1f;
            uVar26 = (int)local_44 >> 0x1f;
            uVar24 = (int)local_2c >> 0x1f;
            uVar23 = uVar7 ^ local_4c | uVar13 ^ local_54 | uVar8 ^ local_3c | uVar15 ^ local_34 |
                     uVar26 ^ local_44 | uVar24 ^ local_2c;
            if (uVar23 == 0) {
              uVar13 = (uVar7 ^ local_50) - uVar7 | (uVar13 ^ local_58) - uVar13 |
                       (uVar8 ^ local_40) - uVar8 | (uVar15 ^ local_38) - uVar15 |
                       (uVar26 ^ local_48) - uVar26 | (uVar24 ^ local_30) - uVar24;
              if (uVar13 == 0) {
                local_d8 = 0x40;
              }
              else {
                if ((int)uVar13 < 0) goto LAB_00021bc4;
                do {
                  uVar7 = uVar23;
                  uVar13 = uVar13 << 1;
                  uVar23 = uVar7 + 1;
                } while (-1 < (int)uVar13);
                local_d8 = uVar7 + 0x21;
                iVar4 = 0x20 - uVar23;
LAB_00021c78:
                if (0x1e < iVar4) {
                  if (0x3d < iVar4) goto LAB_00021c88;
                  goto LAB_00021bc8;
                }
              }
              uVar7 = local_d8 - 0x22;
              local_d8 = 0x18 - local_d8;
              local_cc = local_58 << (uVar7 & 0xff);
              local_d4 = local_40 << (uVar7 & 0xff);
              local_d0 = local_50 << (uVar7 & 0xff);
              uVar15 = local_48 << (uVar7 & 0xff);
              uVar13 = local_30 << (uVar7 & 0xff);
              local_e0 = local_38 << (uVar7 & 0xff);
            }
            else {
              uVar13 = (uVar7 ^ local_4c) - uVar7 | (uVar13 ^ local_54) - uVar13 |
                       (uVar8 ^ local_3c) - uVar8 | (uVar15 ^ local_34) - uVar15 |
                       (uVar26 ^ local_44) - uVar26 | (uVar24 ^ local_2c) - uVar24;
              if (uVar13 == 0) {
LAB_00021bc4:
                local_d8 = 0x20;
LAB_00021bc8:
                uVar13 = 0x22 - local_d8;
                uVar7 = local_d8 - 2;
                local_cc = local_58 >> (uVar13 & 0xff) | local_54 << (uVar7 & 0xff);
                local_d0 = local_50 >> (uVar13 & 0xff) | local_4c << (uVar7 & 0xff);
                local_d4 = local_40 >> (uVar13 & 0xff) | local_3c << (uVar7 & 0xff);
                local_e0 = local_38 >> (uVar13 & 0xff) | local_34 << (uVar7 & 0xff);
                uVar15 = local_48 >> (uVar13 & 0xff) | local_44 << (uVar7 & 0xff);
                local_d8 = 0x18 - local_d8;
                uVar13 = local_30 >> (uVar13 & 0xff) | local_2c << (uVar7 & 0xff);
              }
              else {
                local_d8 = 0;
                if (-1 < (int)uVar13) {
                  do {
                    uVar13 = uVar13 << 1;
                    local_d8 = local_d8 + 1;
                  } while (-1 < (int)uVar13);
                  iVar4 = 0x40 - local_d8;
                  goto LAB_00021c78;
                }
LAB_00021c88:
                uVar13 = 2 - local_d8;
                local_d8 = local_d8 + 0x14;
                local_cc = (int)local_54 >> (uVar13 & 0xff);
                local_d0 = (int)local_4c >> (uVar13 & 0xff);
                local_d4 = (int)local_3c >> (uVar13 & 0xff);
                local_e0 = (int)local_34 >> (uVar13 & 0xff);
                uVar15 = (int)local_44 >> (uVar13 & 0xff);
                uVar13 = (int)local_2c >> (uVar13 & 0xff);
              }
            }
            raac_CVKernel2(piVar21,&local_58);
            uVar7 = (int)local_54 >> 0x1f;
            uVar8 = (int)local_4c >> 0x1f;
            uVar26 = uVar8 ^ local_4c | uVar7 ^ local_54;
            if (uVar26 == 0) {
              uVar7 = (uVar8 ^ local_50) - uVar8 | (uVar7 ^ local_58) - uVar7;
              if (uVar7 == 0) {
                iVar4 = 0x40;
              }
              else {
                if ((int)uVar7 < 0) goto LAB_00021afc;
                do {
                  uVar8 = uVar26;
                  uVar7 = uVar7 << 1;
                  uVar26 = uVar8 + 1;
                } while (-1 < (int)uVar7);
                iVar4 = uVar8 + 0x21;
                iVar6 = 0x20 - uVar26;
LAB_00021b44:
                if (0x1e < iVar6) {
                  if (0x3d < iVar6) goto LAB_00021b54;
                  goto LAB_00021b00;
                }
              }
              iVar6 = 0x18 - iVar4;
              uVar8 = local_58 << (iVar4 - 0x22U & 0xff);
              local_dc = local_50 << (iVar4 - 0x22U & 0xff);
            }
            else {
              uVar7 = (uVar8 ^ local_4c) - uVar8 | (uVar7 ^ local_54) - uVar7;
              if (uVar7 == 0) {
LAB_00021afc:
                iVar4 = 0x20;
LAB_00021b00:
                iVar6 = 0x18 - iVar4;
                uVar8 = local_58 >> (0x22U - iVar4 & 0xff) | local_54 << (iVar4 - 2U & 0xff);
                local_dc = local_50 >> (0x22U - iVar4 & 0xff) | local_4c << (iVar4 - 2U & 0xff);
              }
              else {
                iVar4 = 0;
                if (-1 < (int)uVar7) {
                  do {
                    uVar7 = uVar7 << 1;
                    iVar4 = iVar4 + 1;
                  } while (-1 < (int)uVar7);
                  iVar6 = 0x40 - iVar4;
                  goto LAB_00021b44;
                }
LAB_00021b54:
                iVar6 = iVar4 + 0x14;
                local_dc = (int)local_4c >> (2U - iVar4 & 0xff);
                uVar8 = (int)local_54 >> (2U - iVar4 & 0xff);
              }
            }
            if (local_d8 < iVar6) {
              uVar7 = iVar6 - local_d8;
              if (0x1e < (int)uVar7) {
                uVar7 = 0x1f;
              }
              uVar15 = (int)uVar15 >> (uVar7 & 0xff);
              uVar13 = (int)uVar13 >> (uVar7 & 0xff);
              local_cc = (int)local_cc >> (uVar7 & 0xff);
              local_d0 = (int)local_d0 >> (uVar7 & 0xff);
              local_d4 = (int)local_d4 >> (uVar7 & 0xff);
              local_e0 = (int)local_e0 >> (uVar7 & 0xff);
            }
            else {
              if (iVar6 < local_d8) {
                uVar7 = local_d8 - iVar6;
                if (0x1e < (int)uVar7) {
                  uVar7 = 0x1f;
                }
                local_dc = (int)local_dc >> (uVar7 & 0xff);
                uVar8 = (int)uVar8 >> (uVar7 & 0xff);
              }
            }
            uVar7 = (uint)((longlong)(int)local_e0 * (longlong)(int)local_e0);
            iVar4 = (int)((ulonglong)((longlong)(int)uVar15 * (longlong)(int)uVar13) >> 0x20) +
                    (int)((ulonglong)
                          ((longlong)
                           ((int)((ulonglong)((longlong)(int)local_d4 * (longlong)(int)local_d4) >>
                                 0x20) +
                           (int)((ulonglong)((longlong)(int)local_e0 * (longlong)(int)local_e0) >>
                                0x20)) * 0x7ffff79c) >> 0x20) * -2;
            if (iVar4 < 0) {
              uVar13 = 0xffffffe9;
              goto LAB_000214b0;
            }
            uVar13 = uVar15;
            if (iVar4 == 0) {
              iVar6 = iVar4;
              iVar18 = iVar4;
              if (uVar15 == 0) goto LAB_000218d0;
LAB_00021cd8:
              if ((int)uVar15 < 0) {
                uVar13 = 0;
                local_dc = 0xffffffff;
              }
              else {
                uVar7 = uVar15;
                uVar13 = 0;
                do {
                  local_dc = uVar13;
                  uVar7 = uVar7 << 1;
                  uVar13 = local_dc + 1;
                } while (-1 < (int)uVar7);
              }
              iVar5 = raac_InvRNormalized(uVar15 << (local_dc & 0xff));
              if ((int)local_dc < 0x1a) {
                uVar15 = -(int)((ulonglong)
                                ((longlong)
                                 ((int)((ulonglong)((longlong)(int)local_d4 * (longlong)iVar6) >>
                                       0x20) + ((int)local_cc >> 3) +
                                 (int)((ulonglong)((longlong)(int)local_e0 * (longlong)iVar18) >>
                                      0x20)) * (longlong)iVar5) >> 0x20);
                if (((int)(((int)uVar15 >> 0x1f ^ uVar15) - ((int)uVar15 >> 0x1f)) >>
                     (0x1a - uVar13 & 0xff) < 4) &&
                   (uVar7 = -(int)((ulonglong)
                                   ((longlong)
                                    ((((int)local_d0 >> 3) -
                                     (int)((ulonglong)((longlong)(int)local_e0 * (longlong)iVar6) >>
                                          0x20)) +
                                    (int)((ulonglong)((longlong)(int)local_d4 * (longlong)iVar18) >>
                                         0x20)) * (longlong)iVar5) >> 0x20),
                   (int)(((int)uVar7 >> 0x1f ^ uVar7) - ((int)uVar7 >> 0x1f)) >>
                   (0x1a - uVar13 & 0xff) < 4)) {
                  uVar15 = uVar15 << (uVar13 + 3 & 0xff);
                  uVar13 = uVar7 << (uVar13 + 3 & 0xff);
                  goto LAB_000218d0;
                }
              }
LAB_00021910:
              iVar18 = 0;
              iVar6 = 0;
              uVar13 = 0;
              uVar15 = 0;
            }
            else {
              iVar6 = iVar4;
              uVar7 = 0;
              do {
                uVar26 = uVar7;
                iVar6 = iVar6 << 1;
                uVar7 = uVar26 + 1;
              } while (-1 < iVar6);
              iVar4 = raac_InvRNormalized(iVar4 << (uVar26 & 0xff));
              uVar8 = (uint)((ulonglong)
                             ((longlong)
                              (((int)((ulonglong)((longlong)(int)local_cc * (longlong)(int)local_d4)
                                     >> 0x20) -
                               (int)((ulonglong)((longlong)(int)local_d0 * (longlong)(int)local_e0)
                                    >> 0x20)) -
                              (int)((ulonglong)((longlong)(int)uVar8 * (longlong)(int)uVar15) >>
                                   0x20)) * (longlong)iVar4) >> 0x20);
              uVar24 = (uint)((ulonglong)
                              ((longlong)
                               (((int)((ulonglong)
                                       ((longlong)(int)local_cc * (longlong)(int)local_e0) >> 0x20)
                                + (int)((ulonglong)
                                        ((longlong)(int)local_d0 * (longlong)(int)local_d4) >> 0x20)
                                ) - (int)((ulonglong)
                                          ((longlong)(int)local_dc * (longlong)(int)uVar15) >> 0x20)
                               ) * (longlong)iVar4) >> 0x20);
              if ((((int)uVar26 < 0x1d) &&
                  ((int)(((int)uVar8 >> 0x1f ^ uVar8) - ((int)uVar8 >> 0x1f)) >>
                   (0x1d - uVar7 & 0xff) < 4)) &&
                 ((int)(((int)uVar24 >> 0x1f ^ uVar24) - ((int)uVar24 >> 0x1f)) >>
                  (0x1d - uVar7 & 0xff) < 4)) {
                iVar6 = uVar8 << (uVar7 & 0xff);
                iVar18 = uVar24 << (uVar7 & 0xff);
                iVar4 = 0;
              }
              else {
                iVar18 = 0;
                iVar4 = 1;
                iVar6 = 0;
              }
              if (uVar15 != 0) goto LAB_00021cd8;
LAB_000218d0:
              if (((iVar4 != 0) ||
                  (iVar4 = (int)((ulonglong)((longlong)(int)uVar15 * (longlong)(int)uVar15) >> 0x20)
                           + (int)((ulonglong)((longlong)(int)uVar13 * (longlong)(int)uVar13) >>
                                  0x20),
                  iVar4 != 0x3fffffff && iVar4 + -0x3fffffff < 0 == SCARRY4(iVar4,-0x3fffffff))) ||
                 (iVar4 = (int)((ulonglong)((longlong)iVar6 * (longlong)iVar6) >> 0x20) +
                          (int)((ulonglong)((longlong)iVar18 * (longlong)iVar18) >> 0x20),
                 iVar4 != 0x3fffffff && iVar4 + -0x3fffffff < 0 == SCARRY4(iVar4,-0x3fffffff)))
              goto LAB_00021910;
            }
            if (local_74 < 3) {
              piVar14 = piVar21 + 0x1400;
              do {
                piVar21[1] = piVar21[1] << (4U - local_6c & 0xff);
                *piVar21 = *piVar21 << (4U - local_6c & 0xff);
                piVar21 = piVar21 + 0x80;
              } while (piVar21 != piVar14);
            }
            iVar5 = (int)((ulonglong)((longlong)local_c4 * (longlong)(int)uVar15) >> 0x20);
            iVar22 = (int)((ulonglong)((longlong)local_c4 * (longlong)(int)uVar13) >> 0x20);
            iVar6 = (int)((ulonglong)((longlong)local_a8 * (longlong)iVar6) >> 0x20);
            iVar18 = (int)((ulonglong)((longlong)local_a8 * (longlong)iVar18) >> 0x20);
            iVar12 = iVar12 + uVar1;
            iVar4 = iVar9 + iVar12 * 8;
            uVar7 = uVar1;
            if (uVar10 < uVar19) {
              piVar21 = (int *)(iVar4 + 0x400);
              uVar7 = uVar10;
              iVar25 = *(int *)(iVar4 + 0x204);
              iVar27 = *(int *)(iVar4 + 0x200);
              iVar4 = *(int *)(iVar4 + 4);
              iVar12 = *(int *)(iVar9 + iVar12 * 8);
              do {
                iVar16 = iVar27;
                iVar11 = iVar25;
                iVar25 = ((int)((ulonglong)((longlong)iVar16 * (longlong)iVar5) >> 0x20) -
                         (int)((ulonglong)((longlong)iVar11 * (longlong)iVar22) >> 0x20)) +
                         ((int)((ulonglong)((longlong)iVar12 * (longlong)iVar6) >> 0x20) -
                         (int)((ulonglong)((longlong)iVar4 * (longlong)iVar18) >> 0x20));
                uVar13 = iVar25 >> 0x1f ^ 0x3fffffff;
                iVar27 = *piVar21;
                iVar12 = (int)((ulonglong)((longlong)iVar16 * (longlong)iVar22) >> 0x20) +
                         (int)((ulonglong)((longlong)iVar11 * (longlong)iVar5) >> 0x20) +
                         (int)((ulonglong)((longlong)iVar12 * (longlong)iVar18) >> 0x20) +
                         (int)((ulonglong)((longlong)iVar4 * (longlong)iVar6) >> 0x20);
                if (iVar25 >> 0x1f == iVar25 >> 0x1a) {
                  uVar13 = iVar25 * 0x10;
                }
                uVar13 = uVar13 + iVar27;
                iVar25 = piVar21[1];
                iVar4 = 0x62 - ((int)(uVar7 << 0x1a) >> 0x1f);
                uVar15 = iVar12 >> 0x1f ^ 0x3fffffff;
                if (iVar12 >> 0x1f == iVar12 >> 0x1a) {
                  uVar15 = iVar12 * 0x10;
                }
                *puVar17 = uVar13;
                uVar15 = uVar15 + iVar25;
                puVar17[1] = uVar15;
                uVar7 = uVar7 + 1;
                piVar21 = piVar21 + 0x80;
                puVar17 = puVar17 + 0x80;
                *(uint *)(param_4 + iVar4 * 4) =
                     ((int)uVar13 >> 0x1f ^ uVar13) - ((int)uVar13 >> 0x1f) |
                     *(uint *)(param_4 + iVar4 * 4) |
                     ((int)uVar15 >> 0x1f ^ uVar15) - ((int)uVar15 >> 0x1f);
                iVar4 = iVar11;
                iVar12 = iVar16;
              } while ((int)uVar7 < (int)uVar19);
            }
          }
          local_c8 = local_c8 + 1;
          local_c0 = local_c0 + 1;
          local_bc = local_bc + 8;
        } while (local_c8 < (int)(uint)*local_b4);
        uVar13 = (uint)*(byte *)((int)param_3 + 0xc2);
      }
      local_60 = local_60 + 1;
      local_b4 = local_b4 + 1;
    } while (local_60 < (int)uVar13);
    uVar13 = 0;
  }
LAB_000214b0:
  return CONCAT44(uVar7,uVar13);
}



int * raac_DecWindowOverlapNoClip(int param_1,int param_2,int *param_3,int param_4,int param_5)

{
  longlong lVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  int *local_28;
  int *piVar5;
  
  if (param_5 == 1) {
    piVar9 = (int *)(raac_kbdWindow + 0x200);
    if (param_4 == 1) goto LAB_00021f7c;
  }
  else {
    piVar9 = (int *)(raac_sinWindow + 0x200);
    if (param_4 == param_5) {
LAB_00021f7c:
      uVar6 = param_2 + 4;
      uVar7 = param_2 + 0xff8;
      piVar4 = (int *)(param_1 + 0x800);
      piVar8 = param_3 + 0x3ff;
      piVar10 = (int *)(param_1 + 0x7fc);
      do {
        piVar5 = piVar4 + 1;
        iVar11 = *piVar4;
        iVar12 = *piVar9;
        iVar3 = piVar9[1];
        piVar9 = piVar9 + 2;
        *param_3 = *(int *)(uVar6 - 4) -
                   (int)((ulonglong)((longlong)iVar12 * (longlong)iVar11) >> 0x20);
        *piVar8 = *(int *)(uVar7 + 4) +
                  (int)((ulonglong)((longlong)iVar3 * (longlong)iVar11) >> 0x20);
        iVar11 = *piVar10;
        *(int *)(uVar7 + 4) = (int)((ulonglong)((longlong)iVar12 * (longlong)iVar11) >> 0x20);
        bVar13 = uVar6 < uVar7;
        *(int *)(uVar6 - 4) = (int)((ulonglong)((longlong)iVar3 * (longlong)iVar11) >> 0x20);
        uVar7 = uVar7 - 4;
        uVar6 = uVar6 + 4;
        piVar4 = piVar5;
        param_3 = param_3 + 1;
        piVar8 = piVar8 + -1;
        piVar10 = piVar10 + -1;
      } while (bVar13);
      return piVar5;
    }
  }
  if (param_4 == 1) {
    puVar2 = raac_kbdWindow;
  }
  else {
    puVar2 = raac_sinWindow;
  }
  piVar10 = (int *)(puVar2 + 0x200);
  uVar6 = param_2 + 4;
  uVar7 = param_2 + 0xff8;
  piVar4 = param_3 + 0x3ff;
  piVar8 = (int *)(param_1 + 0x7fc);
  local_28 = (int *)(param_1 + 0x800);
  do {
    iVar11 = *piVar9;
    iVar12 = piVar9[1];
    piVar9 = piVar9 + 2;
    iVar3 = *local_28;
    *param_3 = *(int *)(uVar6 - 4) - (int)((ulonglong)((longlong)iVar11 * (longlong)iVar3) >> 0x20);
    *piVar4 = *(int *)(uVar7 + 4) + (int)((ulonglong)((longlong)iVar12 * (longlong)iVar3) >> 0x20);
    iVar11 = *piVar8;
    iVar12 = *piVar10;
    iVar3 = piVar10[1];
    piVar10 = piVar10 + 2;
    *(int *)(uVar7 + 4) = (int)((ulonglong)((longlong)iVar12 * (longlong)iVar11) >> 0x20);
    lVar1 = (longlong)iVar3 * (longlong)iVar11;
    bVar13 = uVar6 < uVar7;
    *(int *)(uVar6 - 4) = (int)((ulonglong)lVar1 >> 0x20);
    uVar7 = uVar7 - 4;
    uVar6 = uVar6 + 4;
    param_3 = param_3 + 1;
    piVar4 = piVar4 + -1;
    piVar8 = piVar8 + -1;
    local_28 = local_28 + 1;
  } while (bVar13);
  return (int *)lVar1;
}



void raac_DecWindowOverlapLongStartNoClip
               (int param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined1 *puVar11;
  bool bVar12;
  int *local_34;
  
  if (param_5 == 1) {
    puVar11 = raac_kbdWindow;
  }
  else {
    puVar11 = raac_sinWindow;
  }
  piVar1 = param_3 + 0x3ff;
  piVar2 = (int *)(param_1 + 0x7fc);
  piVar3 = param_2 + 0x3ff;
  piVar6 = (int *)(param_1 + 0x800);
  piVar4 = param_2;
  piVar5 = param_3;
  piVar10 = (int *)(puVar11 + 0x200);
  do {
    local_34 = piVar6 + 1;
    iVar8 = *piVar6;
    iVar9 = *piVar10;
    iVar7 = piVar10[1];
    piVar10 = piVar10 + 2;
    *piVar5 = *piVar4 - (int)((ulonglong)((longlong)iVar9 * (longlong)iVar8) >> 0x20);
    *piVar1 = *piVar3 + (int)((ulonglong)((longlong)iVar7 * (longlong)iVar8) >> 0x20);
    iVar7 = *piVar2;
    *piVar3 = 0;
    *piVar4 = iVar7 >> 1;
    piVar1 = piVar1 + -1;
    piVar2 = piVar2 + -1;
    piVar3 = piVar3 + -1;
    piVar6 = local_34;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (local_34 != (int *)(param_1 + 0xf00));
  piVar1 = (int *)((int)(puVar11 + 0x200) + 0xe00);
  if (param_4 == 1) {
    puVar11 = raac_kbdWindow;
  }
  else {
    puVar11 = raac_sinWindow;
  }
  piVar4 = param_2 + 0x23e;
  piVar5 = param_2 + 0x1c1;
  piVar2 = param_3 + 0x23f;
  piVar3 = param_3 + 0x1c0;
  piVar6 = (int *)(param_1 + 0xfc);
  do {
    iVar8 = *piVar1;
    iVar9 = piVar1[1];
    piVar1 = piVar1 + 2;
    iVar7 = *local_34;
    *piVar3 = piVar5[-1] - (int)((ulonglong)((longlong)iVar8 * (longlong)iVar7) >> 0x20);
    *piVar2 = piVar4[1] + (int)((ulonglong)((longlong)iVar9 * (longlong)iVar7) >> 0x20);
    iVar8 = *piVar6;
    iVar9 = *(int *)puVar11;
    iVar7 = *(int *)((int)puVar11 + 4);
    puVar11 = (undefined1 *)((int)puVar11 + 8);
    piVar4[1] = (int)((ulonglong)((longlong)iVar9 * (longlong)iVar8) >> 0x20);
    bVar12 = piVar5 < piVar4;
    piVar5[-1] = (int)((ulonglong)((longlong)iVar7 * (longlong)iVar8) >> 0x20);
    piVar4 = piVar4 + -1;
    piVar5 = piVar5 + 1;
    piVar2 = piVar2 + -1;
    piVar3 = piVar3 + 1;
    piVar6 = piVar6 + -1;
    local_34 = local_34 + 1;
  } while (bVar12);
  return;
}



void raac_DecWindowOverlapLongStopNoClip
               (int param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  bool bVar15;
  int *local_34;
  
  if (param_5 == 1) {
    puVar10 = raac_kbdWindow;
  }
  else {
    puVar10 = raac_sinWindow;
  }
  if (param_4 == 1) {
    puVar9 = &raac_kbdWindowOffset;
    iVar5 = -0xc0;
  }
  else {
    iVar5 = -200;
    puVar9 = &raac_sinWindowOffset;
  }
  piVar13 = (int *)(*(int *)((int)&__DT_PLTGOT + iVar5) + *(int *)((int)puVar9 + 4) * 4);
  piVar1 = param_3 + 0x3ff;
  piVar2 = (int *)(param_1 + 0x7fc);
  piVar3 = param_2 + 0x3ff;
  piVar7 = (int *)(param_1 + 0x800);
  puVar4 = param_2;
  puVar6 = param_3;
  piVar14 = piVar13;
  do {
    piVar8 = piVar7 + 1;
    iVar5 = *piVar7;
    *puVar6 = *puVar4;
    *piVar1 = *piVar3 + (iVar5 >> 1);
    iVar11 = *piVar2;
    iVar12 = *piVar14;
    iVar5 = piVar14[1];
    piVar14 = piVar14 + 2;
    *piVar3 = (int)((ulonglong)((longlong)iVar12 * (longlong)iVar11) >> 0x20);
    *puVar4 = (int)((ulonglong)((longlong)iVar5 * (longlong)iVar11) >> 0x20);
    piVar1 = piVar1 + -1;
    piVar2 = piVar2 + -1;
    piVar3 = piVar3 + -1;
    piVar7 = piVar8;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  } while (piVar8 != (int *)(param_1 + 0xf00));
  piVar13 = piVar13 + 0x380;
  puVar4 = param_2 + 0x23e;
  puVar6 = param_2 + 0x1c1;
  piVar1 = param_3 + 0x23f;
  piVar2 = param_3 + 0x1c0;
  local_34 = (int *)(param_1 + 0xfc);
  do {
    iVar5 = *piVar8;
    iVar11 = *(int *)puVar10;
    iVar12 = *(int *)((int)puVar10 + 4);
    puVar10 = (undefined1 *)((int)puVar10 + 8);
    *piVar2 = puVar6[-1] - (int)((ulonglong)((longlong)iVar11 * (longlong)iVar5) >> 0x20);
    *piVar1 = puVar4[1] + (int)((ulonglong)((longlong)iVar12 * (longlong)iVar5) >> 0x20);
    iVar11 = *local_34;
    iVar12 = *piVar13;
    iVar5 = piVar13[1];
    piVar13 = piVar13 + 2;
    puVar4[1] = (int)((ulonglong)((longlong)iVar12 * (longlong)iVar11) >> 0x20);
    bVar15 = puVar6 < puVar4;
    puVar6[-1] = (int)((ulonglong)((longlong)iVar5 * (longlong)iVar11) >> 0x20);
    puVar4 = puVar4 + -1;
    puVar6 = puVar6 + 1;
    piVar8 = piVar8 + 1;
    piVar1 = piVar1 + -1;
    piVar2 = piVar2 + 1;
    local_34 = local_34 + -1;
  } while (bVar15);
  return;
}



void raac_DecWindowOverlapShortNoClip(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  int *local_2c;
  int local_28;
  int local_24;
  
  if (param_5 == 1) {
    puVar14 = raac_kbdWindow;
  }
  else {
    puVar14 = raac_sinWindow;
  }
  if (param_4 == 1) {
    puVar1 = raac_kbdWindow;
  }
  else {
    puVar1 = raac_sinWindow;
  }
  iVar10 = 0;
  do {
    uVar12 = ((undefined4 *)(param_2 + iVar10))[1];
    puVar11 = (undefined4 *)(param_3 + iVar10);
    *puVar11 = *(undefined4 *)(param_2 + iVar10);
    iVar10 = iVar10 + 8;
    puVar11[1] = uVar12;
  } while (iVar10 != 0x700);
  piVar5 = (int *)(param_2 + 0x8f8);
  iVar10 = param_1 + 0x104;
  piVar3 = (int *)(param_2 + 0x704);
  iVar7 = param_3 + 0x704;
  piVar6 = (int *)(param_3 + 0x8fc);
  local_2c = (int *)(param_1 + 0xfc);
  do {
    local_28 = iVar7;
    piVar8 = piVar3;
    iVar15 = iVar10;
    iVar10 = *(int *)(iVar15 + -4);
    iVar13 = *(int *)puVar14;
    iVar7 = *(int *)((int)puVar14 + 4);
    puVar14 = (undefined1 *)((int)puVar14 + 8);
    *(int *)(local_28 + -4) =
         piVar8[-1] - (int)((ulonglong)((longlong)iVar13 * (longlong)iVar10) >> 0x20);
    *piVar6 = piVar5[1] + (int)((ulonglong)((longlong)iVar7 * (longlong)iVar10) >> 0x20);
    iVar7 = *local_2c;
    iVar13 = *(int *)puVar1;
    iVar10 = *(int *)((int)puVar1 + 4);
    puVar1 = (undefined1 *)((int)puVar1 + 8);
    piVar5[1] = (int)((ulonglong)((longlong)iVar13 * (longlong)iVar7) >> 0x20);
    bVar17 = piVar8 < piVar5;
    piVar8[-1] = (int)((ulonglong)((longlong)iVar10 * (longlong)iVar7) >> 0x20);
    piVar5 = piVar5 + -1;
    iVar10 = iVar15 + 4;
    piVar3 = piVar8 + 1;
    iVar7 = local_28 + 4;
    piVar6 = piVar6 + -1;
    local_2c = local_2c + -1;
  } while (bVar17);
  local_24 = 3;
  local_2c = (int *)iVar15;
  do {
    puVar1 = (undefined1 *)((int)puVar1 + -0x200);
    piVar3 = piVar8 + 0xbf;
    piVar8 = piVar8 + 0x40;
    iVar10 = local_28 + 0x104;
    iVar7 = (int)local_2c + 0x104;
    piVar6 = (int *)(local_28 + 0x2fc);
    piVar5 = (int *)((int)local_2c + 0xfc);
    do {
      local_2c = (int *)iVar7;
      local_28 = iVar10;
      piVar9 = piVar8;
      piVar2 = (int *)puVar1;
      iVar7 = *(int *)((int)local_2c + -4);
      iVar15 = *piVar2;
      iVar10 = piVar2[1];
      puVar1 = (undefined1 *)(piVar2 + 2);
      *(int *)(local_28 + -4) =
           (piVar9[-0x80] + *piVar9) -
           (int)((ulonglong)((longlong)iVar15 * (longlong)iVar7) >> 0x20);
      *piVar6 = piVar3[-0x80] + *piVar3 +
                (int)((ulonglong)((longlong)iVar10 * (longlong)iVar7) >> 0x20);
      iVar7 = *piVar5;
      piVar4 = piVar3 + -1;
      *piVar3 = (int)((ulonglong)((longlong)iVar15 * (longlong)iVar7) >> 0x20);
      piVar8 = piVar9 + 1;
      *piVar9 = (int)((ulonglong)((longlong)iVar10 * (longlong)iVar7) >> 0x20);
      piVar3 = piVar4;
      iVar10 = local_28 + 4;
      iVar7 = (int)local_2c + 4;
      piVar6 = piVar6 + -1;
      piVar5 = piVar5 + -1;
    } while (piVar8 < piVar4);
    local_24 = local_24 + -1;
  } while (local_24 != 0);
  piVar2 = piVar2 + -0x7e;
  piVar3 = piVar9 + -0x33f;
  piVar6 = piVar9 + -0x2c0;
  piVar5 = (int *)((int)local_2c + 0xfc);
  iVar10 = (int)local_2c + 0x104;
  piVar8 = (int *)(local_28 + 0x100);
  do {
    iVar15 = iVar10;
    iVar10 = *(int *)(iVar15 + -4);
    iVar7 = *piVar2;
    iVar13 = piVar2[1];
    piVar2 = piVar2 + 2;
    *piVar8 = (piVar3[0x300] + piVar3[0x380]) -
              (int)((ulonglong)((longlong)iVar7 * (longlong)iVar10) >> 0x20);
    piVar6[-0x80] = piVar6[0x300] + (int)((ulonglong)((longlong)iVar13 * (longlong)iVar10) >> 0x20);
    iVar10 = *piVar5;
    piVar9 = piVar6 + -1;
    *piVar6 = (int)((ulonglong)((longlong)iVar7 * (longlong)iVar10) >> 0x20);
    piVar4 = piVar3 + 1;
    *piVar3 = (int)((ulonglong)((longlong)iVar13 * (longlong)iVar10) >> 0x20);
    piVar3 = piVar4;
    piVar6 = piVar9;
    piVar5 = piVar5 + -1;
    iVar10 = iVar15 + 4;
    piVar8 = piVar8 + 1;
  } while (piVar4 < piVar9);
  iVar10 = 3;
  do {
    piVar2 = piVar2 + -0x80;
    piVar3 = piVar4 + 0x40;
    piVar6 = piVar4 + 0xbf;
    iVar7 = iVar15 + 0x104;
    piVar5 = (int *)(iVar15 + 0xfc);
    do {
      iVar15 = iVar7;
      piVar8 = piVar3;
      iVar16 = *(int *)(iVar15 + -4);
      iVar13 = *piVar2;
      iVar7 = piVar2[1];
      piVar2 = piVar2 + 2;
      piVar8[-0x80] =
           piVar8[-0x80] - (int)((ulonglong)((longlong)iVar13 * (longlong)iVar16) >> 0x20);
      piVar6[-0x80] = piVar6[-0x80] + (int)((ulonglong)((longlong)iVar7 * (longlong)iVar16) >> 0x20)
      ;
      iVar16 = *piVar5;
      piVar9 = piVar6 + -1;
      *piVar6 = (int)((ulonglong)((longlong)iVar13 * (longlong)iVar16) >> 0x20);
      piVar4 = piVar8 + 1;
      *piVar8 = (int)((ulonglong)((longlong)iVar7 * (longlong)iVar16) >> 0x20);
      piVar3 = piVar4;
      piVar6 = piVar9;
      iVar7 = iVar15 + 4;
      piVar5 = piVar5 + -1;
    } while (piVar4 < piVar9);
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  piVar3 = piVar8 + 0x41;
  do {
    *piVar3 = 0;
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[3] = 0;
    piVar3 = piVar3 + 4;
  } while (piVar8 + 0x201 != piVar3);
  return;
}



int raac_InvRNormalized(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 5;
  iVar2 = 0x30000000;
  do {
    iVar1 = iVar1 + -1;
    iVar2 = (int)((ulonglong)
                  ((longlong)iVar2 *
                  (longlong)
                  (0x20000000 - (int)((ulonglong)((longlong)param_1 * (longlong)iVar2) >> 0x20))) >>
                 0x20) << 4;
  } while (iVar1 != 0);
  return iVar2;
}



longlong raac_RatioPowInv(uint param_1,uint param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  
  bVar8 = (int)param_1 < 0;
  bVar9 = param_1 == 0;
  if (0 < (int)param_1) {
    bVar8 = (int)param_2 < 0;
    bVar9 = param_2 == 0;
  }
  if (bVar9 || bVar8) {
    return (longlong)((ulonglong)param_2 << 0x20);
  }
  uVar6 = (uint)(0x40 < (int)param_1);
  if (param_3 < 1) {
    uVar6 = 1;
  }
  if (uVar6 == 0) {
    bVar9 = SBORROW4(param_2,0x40);
    iVar5 = param_2 - 0x40;
    bVar8 = param_2 == 0x40;
    if ((int)param_2 < 0x41) {
      bVar9 = SBORROW4(param_3,0x40);
      iVar5 = param_3 + -0x40;
      bVar8 = param_3 == 0x40;
    }
    bVar7 = iVar5 < 0;
    if (!bVar8 && bVar7 == bVar9) {
      param_1 = uVar6;
    }
    if (!bVar8 && bVar7 == bVar9) {
      return CONCAT44(param_2,param_1);
    }
    if ((int)param_2 <= (int)param_1) {
      iVar5 = (int)((ulonglong)((longlong)*(int *)(raac_log2Tab + param_1 * 4) * 0x58b90bfc) >> 0x20
                   );
      iVar2 = __aeabi_idiv(iVar5 * 2 +
                           (int)((ulonglong)
                                 ((longlong)*(int *)(raac_log2Tab + param_2 * 4) * 0x58b90bfc) >>
                                0x20) * -2,param_3,param_3,iVar5,param_4);
      piVar4 = (int *)&UNK_00038924;
      iVar5 = iVar2 >> 4;
      iVar3 = iVar5 + 0x1000000;
      do {
        piVar4 = piVar4 + 1;
        lVar1 = (longlong)iVar2 *
                (longlong)((int)((ulonglong)((longlong)*piVar4 * (longlong)iVar5) >> 0x20) << 2);
        iVar5 = (int)((ulonglong)lVar1 >> 0x20) * 0x10;
        iVar3 = iVar3 + iVar5;
      } while (piVar4 != (int *)&UNK_00038934);
      return CONCAT44((int)lVar1,iVar3);
    }
    return CONCAT44(param_2,(uint)(!bVar8 && bVar7 == bVar9));
  }
  return (longlong)((ulonglong)param_2 << 0x20);
}



int raac_SqrtFix(int param_1,uint param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  if (param_1 < 1) {
    *param_3 = param_2;
    iVar2 = 0;
  }
  else {
    iVar2 = param_1 >> (param_2 & 1);
    if (iVar2 == 0) {
      uVar5 = 0x1e;
      uVar6 = 1;
    }
    else {
      iVar3 = iVar2;
      uVar5 = 0;
      do {
        uVar6 = uVar5;
        iVar3 = iVar3 << 1;
        uVar5 = uVar6 + 1;
      } while (-1 < iVar3);
      uVar5 = uVar6 & 0xfffffffe;
      iVar2 = iVar2 << (uVar6 & 0xfe);
      bVar7 = iVar2 + -0xfffffff < 0;
      if (iVar2 != 0xfffffff && bVar7 == SCARRY4(iVar2,-0xfffffff)) {
        uVar6 = 0x4000;
      }
      if (iVar2 == 0xfffffff || bVar7 != SCARRY4(iVar2,-0xfffffff)) {
        uVar6 = 1;
      }
    }
    iVar3 = 0xb504;
    do {
      iVar1 = (int)(uVar6 + iVar3) >> 1;
      iVar4 = iVar1 * iVar1;
      bVar7 = iVar4 - iVar2 != 0;
      if (bVar7 && iVar2 <= iVar4) {
        iVar3 = iVar1 + -1;
      }
      if (!bVar7 || iVar4 < iVar2) {
        uVar6 = iVar1 + 1;
      }
    } while ((int)uVar6 <= iVar3);
    iVar2 = uVar6 - 1;
    *param_3 = (int)((param_2 - (param_2 & 1)) + uVar5) >> 1;
  }
  return iVar2;
}



void FUN_0002293c(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  piVar3 = param_1 + 0x3f;
  piVar4 = &DAT_000389c0;
  do {
    iVar10 = *piVar3;
    iVar7 = *piVar4;
    piVar1 = piVar4 + 1;
    iVar6 = piVar4[2];
    iVar5 = piVar4[3];
    piVar4 = piVar4 + 4;
    iVar8 = piVar3[-1];
    iVar9 = param_1[1];
    iVar2 = (int)((ulonglong)((longlong)*piVar1 * (longlong)(*param_1 + iVar10)) >> 0x20);
    *param_1 = iVar2 + (int)((ulonglong)((longlong)(iVar7 + *piVar1 * -2) * (longlong)*param_1) >>
                            0x20);
    param_1[1] = (int)((ulonglong)((longlong)iVar7 * (longlong)iVar10) >> 0x20) - iVar2;
    param_1 = param_1 + 2;
    iVar2 = (int)((ulonglong)((longlong)iVar5 * (longlong)(iVar8 + iVar9)) >> 0x20);
    *piVar3 = (int)((ulonglong)((longlong)iVar6 * (longlong)iVar9) >> 0x20) - iVar2;
    piVar3[-1] = iVar2 + (int)((ulonglong)((longlong)(iVar6 + iVar5 * -2) * (longlong)iVar8) >> 0x20
                              );
    piVar3 = piVar3 + -2;
  } while (piVar4 != (int *)&DAT_00038ac0);
  return;
}



void FUN_000229e8(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar6 = param_2 + 3 >> 2;
  if (iVar6 != 0) {
    iVar3 = 0x40000000;
    piVar1 = param_1 + 0x3f;
    iVar2 = 0;
    iVar4 = 0x40000000;
    piVar5 = &DAT_00038940;
    do {
      iVar9 = *param_1;
      iVar7 = piVar1[-1];
      iVar8 = *piVar1;
      iVar2 = (int)((ulonglong)((longlong)iVar2 * (longlong)(iVar9 + param_1[1])) >> 0x20);
      *piVar1 = iVar2 - (int)((ulonglong)((longlong)iVar3 * (longlong)param_1[1]) >> 0x20);
      *param_1 = iVar2 + (int)((ulonglong)((longlong)iVar4 * (longlong)iVar9) >> 0x20);
      iVar2 = piVar5[1];
      iVar3 = *piVar5;
      piVar5 = piVar5 + 2;
      iVar9 = (int)((ulonglong)((longlong)iVar2 * (longlong)(iVar7 - iVar8)) >> 0x20);
      iVar4 = iVar3 + iVar2 * -2;
      piVar1[-1] = iVar9 - (int)((ulonglong)((longlong)iVar3 * (longlong)-iVar8) >> 0x20);
      piVar1 = piVar1 + -2;
      iVar6 = iVar6 + -1;
      param_1[1] = iVar9 + (int)((ulonglong)((longlong)iVar4 * (longlong)iVar7) >> 0x20);
      param_1 = param_1 + 2;
    } while (iVar6 != 0);
  }
  return;
}



uint raac_QMFAnalysis(int *param_1,int param_2,uint *param_3,int param_4,int *param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  int *piVar4;
  
  puVar11 = param_3 + 0x40;
  puVar7 = (uint *)(param_2 + *param_5 * 0x80);
  if (param_4 < 0xf) {
    uVar9 = 0xe - param_4;
    if (0x1d < (int)uVar9) {
      uVar9 = 0x1e;
    }
    piVar3 = param_1;
    do {
      piVar4 = piVar3 + 1;
      iVar6 = *piVar3;
      uVar2 = iVar6 >> 0x1f ^ 0x3fffffff;
      if (iVar6 >> 0x1f == iVar6 >> (0x1e - uVar9 & 0xff)) {
        uVar2 = iVar6 << (uVar9 & 0xff);
      }
      *puVar7 = uVar2;
      piVar3 = piVar4;
      puVar7 = puVar7 + 1;
    } while (piVar4 != param_1 + 0x20);
  }
  else {
    if (param_4 < 0x2d) {
      uVar9 = param_4 - 0xe;
    }
    else {
      uVar9 = 0x1f;
    }
    do {
      puVar10 = puVar7 + 1;
      *puVar7 = *param_1 >> (uVar9 & 0xff);
      param_1 = param_1 + 1;
      puVar7 = puVar10;
    } while (puVar10 != puVar7 + 0x20);
  }
  raac_QMFAnalysisConv((int *)raac_cTabA,param_2,*param_5,param_3);
  puVar5 = param_3 + 1;
  param_3[0x40] = *param_3;
  param_3[0x41] = param_3[1];
  puVar7 = puVar11;
  puVar10 = param_3;
  do {
    puVar7 = puVar7 + -1;
    puVar10[0x42] = -*puVar7;
    puVar5 = puVar5 + 1;
    puVar10[0x43] = *puVar5;
    puVar10 = puVar10 + 2;
  } while (puVar10 != param_3 + 0x3c);
  param_3[0x7f] = param_3[0x20];
  param_3[0x7e] = -param_3[0x21];
  FUN_0002293c((int *)puVar11);
  raac_FFT32C((int *)puVar11);
  FUN_000229e8((int *)puVar11,param_6 << 1);
  uVar2 = 0;
  uVar9 = uVar2;
  if (0 < (int)param_6) {
    puVar10 = param_3 + 0x3f;
    puVar11 = param_3 + 0x80;
    uVar9 = 0;
    puVar7 = param_3;
    do {
      puVar10 = puVar10 + 1;
      uVar8 = *puVar10;
      uVar9 = uVar9 + 1;
      *puVar7 = uVar8;
      puVar11 = puVar11 + -1;
      uVar1 = -*puVar11;
      puVar7[1] = uVar1;
      puVar7 = puVar7 + 2;
      uVar2 = uVar2 | ((int)uVar8 >> 0x1f ^ uVar8) - ((int)uVar8 >> 0x1f) |
                      ((int)uVar1 >> 0x1f ^ uVar1) - ((int)uVar1 >> 0x1f);
    } while (uVar9 != param_6);
    if (0x3f < (int)uVar9) goto LAB_00022bec;
  }
  puVar7 = param_3 + uVar9 * 2;
  do {
    uVar9 = uVar9 + 1;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7 = puVar7 + 2;
  } while ((int)uVar9 < 0x40);
LAB_00022bec:
  if (*param_5 == 9) {
    iVar6 = 0;
  }
  else {
    iVar6 = *param_5 + 1;
  }
  *param_5 = iVar6;
  return uVar2;
}



void raac_QMFSynthesis(int *param_1,int param_2,int *param_3,uint param_4,ushort *param_5,
                      int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  
  iVar2 = *param_3;
  iVar1 = iVar2 * 0x200;
  piVar5 = (int *)(param_2 + iVar1);
  piVar12 = (int *)(param_2 + iVar1 + 0x1fc);
  if ((int)param_4 >> 1 < 1) {
    iVar3 = 0;
    piVar11 = piVar5;
  }
  else {
    iVar3 = 0;
    piVar11 = param_1;
    piVar4 = piVar12;
    piVar7 = piVar5;
    do {
      iVar9 = *piVar11;
      iVar3 = iVar3 + 1;
      iVar8 = piVar11[1];
      iVar10 = piVar11[2];
      iVar6 = piVar11[3];
      piVar11 = piVar11 + 4;
      *piVar7 = iVar9;
      piVar7[1] = iVar10;
      piVar7 = piVar7 + 2;
      *piVar4 = iVar8;
      piVar4[-1] = iVar6;
      piVar4 = piVar4 + -2;
    } while (iVar3 != (int)param_4 >> 1);
    param_1 = param_1 + iVar3 * 4;
    piVar11 = piVar5 + iVar3 * 2;
    piVar12 = piVar12 + iVar3 * -2;
  }
  if ((param_4 & 1) != 0) {
    iVar6 = param_1[1];
    iVar3 = iVar3 + 1;
    *piVar11 = *param_1;
    *piVar12 = iVar6;
    piVar11[1] = 0;
    piVar11 = piVar11 + 2;
    piVar12[-1] = 0;
    piVar12 = piVar12 + -2;
  }
  if (iVar3 < 0x20) {
    do {
      iVar3 = iVar3 + 1;
      *piVar11 = 0;
      *piVar12 = 0;
      piVar11[1] = 0;
      piVar11 = piVar11 + 2;
      piVar12[-1] = 0;
      piVar12 = piVar12 + -2;
    } while (iVar3 != 0x20);
  }
  piVar11 = (int *)(param_2 + iVar1 + 0x100);
  FUN_0002293c(piVar5);
  FUN_0002293c(piVar11);
  raac_FFT32C(piVar5);
  raac_FFT32C(piVar11);
  FUN_000229e8(piVar5,0x40);
  FUN_000229e8(piVar11,0x40);
  iVar1 = 0;
  piVar12 = (int *)(param_2 + iVar2 * 0x200 + 4);
  do {
    piVar7 = (int *)((int)piVar11 + iVar1);
    iVar9 = *piVar7;
    piVar4 = (int *)((int)piVar5 + iVar1);
    iVar8 = *piVar4;
    iVar1 = iVar1 + 8;
    iVar3 = piVar7[1];
    iVar6 = piVar4[1];
    piVar12[-1] = iVar9 - iVar8;
    piVar12[0x3f] = iVar9 + iVar8;
    *piVar12 = -iVar6 - iVar3;
    piVar12[0x40] = iVar6 - iVar3;
    piVar12 = piVar12 + 2;
  } while (iVar1 != 0x100);
  raac_QMFSynthesisConv((int *)raac_cTabS,param_2,iVar2,param_5,param_6);
  if (*param_3 == 9) {
    iVar1 = 0;
  }
  else {
    iVar1 = *param_3 + 1;
  }
  *param_3 = iVar1;
  return;
}



void FUN_00022e20(byte **param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  
  if (0 < param_2) {
    iVar2 = 0;
    do {
      uVar1 = raac_GetBits(param_1,1);
      *(char *)(param_3 + iVar2) = (char)uVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 != param_2);
  }
  if (param_4 < 1) {
    return;
  }
  iVar2 = 0;
  do {
    uVar1 = raac_GetBits(param_1,1);
    *(char *)(param_5 + iVar2) = (char)uVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 != param_4);
  return;
}



void FUN_00022e88(byte **param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 < 1) {
    return;
  }
  iVar2 = 0;
  do {
    uVar1 = raac_GetBits(param_1,2);
    *(char *)(param_3 + iVar2) = (char)uVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 != param_2);
  return;
}



void FUN_00022ec0(byte **param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  
  if (param_3 != 0) {
    if (param_2 < 1) {
      param_3 = 0;
    }
    else {
      param_3 = 0;
      do {
        uVar1 = raac_GetBits(param_1,1);
        *(char *)(param_4 + param_3) = (char)uVar1;
        param_3 = param_3 + 1;
      } while (param_3 != param_2);
      if (0x2f < param_3) {
        return;
      }
    }
  }
  do {
    *(undefined *)(param_4 + param_3) = 0;
    param_3 = param_3 + 1;
  } while (param_3 < 0x30);
  return;
}



undefined4 FUN_00022f28(byte **param_1,byte param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  byte bVar5;
  byte *extraout_r1;
  byte *extraout_r1_00;
  byte *extraout_r1_01;
  byte *extraout_r1_02;
  byte *extraout_r1_03;
  byte *extraout_r1_04;
  byte *extraout_r1_05;
  uint uVar6;
  byte *extraout_r1_06;
  byte *pbVar7;
  byte bVar8;
  byte *pbVar9;
  byte bVar10;
  uint unaff_r4;
  byte **ppbVar11;
  byte *pbVar12;
  uint unaff_r5;
  uint unaff_r6;
  byte **unaff_r7;
  int iVar13;
  bool bVar14;
  byte local_44 [4];
  byte local_40 [4];
  byte local_3c [12];
  byte local_30 [12];
  
  param_3[1] = param_2;
  uVar2 = raac_GetBits(param_1,2);
  *param_3 = (byte)(uVar2 & 0xff);
  switch(uVar2 & 0xff) {
  case 0:
    uVar2 = raac_GetBits(param_1,2);
    uVar2 = 1 << (uVar2 & 0xff) & 0xff;
    param_3[3] = (byte)uVar2;
    if (uVar2 == 1) {
      param_3[1] = 0;
    }
    else {
      uVar6 = uVar2 - 1 & 0xff;
      bVar14 = 3 < uVar2;
      if (uVar2 != 4) {
        bVar14 = uVar6 != 0;
      }
      if (bVar14 && (uVar2 != 4 && uVar6 != 1)) {
        return 0xffffffe9;
      }
    }
    uVar6 = raac_GetBits(param_1,1);
    bVar5 = param_3[3];
    uVar2 = (uint)bVar5;
    param_3[10] = (byte)uVar6;
    pbVar7 = extraout_r1_06;
    if (1 < uVar2) {
      pbVar7 = param_3 + uVar2 + 9;
      pbVar9 = param_3 + 0xb;
      *pbVar9 = (byte)uVar6;
      while (pbVar9 != pbVar7) {
        pbVar9 = pbVar9 + 1;
        *pbVar9 = param_3[10];
      }
    }
    param_1 = (byte **)(uVar2 - 1);
    unaff_r4 = (uint)param_1 & 0xff;
    if (uVar2 == 1) {
      bVar1 = 0x10;
    }
    else {
      if (uVar2 == 2) {
        bVar1 = 8;
      }
      else {
        bVar1 = 4;
      }
    }
    if (unaff_r4 != 0) {
      pbVar9 = local_3c + 3;
      pbVar7 = pbVar9 + unaff_r4;
      do {
        pbVar9 = pbVar9 + 1;
        *pbVar9 = bVar1;
      } while (pbVar9 != pbVar7);
    }
    unaff_r7 = (byte **)(uint)(bVar5 >> 1);
    unaff_r5 = 0x10;
    unaff_r6 = 0;
    break;
  case 1:
    uVar2 = raac_GetBits(param_1,2);
    uVar6 = raac_GetBits(param_1,2);
    unaff_r5 = uVar2 + 0x10 & 0xff;
    uVar6 = uVar6 & 0xff;
    uVar2 = uVar6 + 1 & 0xff;
    param_3[3] = (byte)uVar2;
    if (uVar6 != 0) {
      iVar13 = 0;
      do {
        uVar2 = raac_GetBits(param_1,2);
        local_3c[iVar13] = ((char)uVar2 + '\x01') * '\x02';
        iVar13 = iVar13 + 1;
      } while (iVar13 < (int)uVar6);
      uVar2 = (uint)param_3[3];
    }
    uVar3 = raac_GetBits(param_1,(uint)(byte)(&DAT_00038ac1)[uVar2]);
    uVar2 = (uint)param_3[3];
    ppbVar11 = (byte **)(uVar2 - 1);
    if (ppbVar11 == (byte **)0xffffffff) {
      param_1 = ppbVar11;
    }
    uVar3 = uVar3 & 0xff;
    param_3[2] = (byte)uVar3;
    pbVar7 = extraout_r1_04;
    if (ppbVar11 != (byte **)0xffffffff) {
      pbVar7 = param_3 + uVar2 + 10;
      do {
        uVar2 = raac_GetBits(param_1,1);
        ppbVar11 = (byte **)((int)ppbVar11 + -1);
        pbVar7 = pbVar7 + -1;
        *pbVar7 = (byte)uVar2;
      } while (ppbVar11 != (byte **)0xffffffff);
      uVar2 = (uint)param_3[3];
      uVar3 = (uint)param_3[2];
      param_1 = (byte **)(uVar2 - 1);
      pbVar7 = extraout_r1_05;
    }
    if (uVar6 != 0) {
      pbVar7 = local_30;
      iVar13 = 0;
      do {
        pbVar7[iVar13] = local_3c[iVar13];
        iVar13 = iVar13 + 1;
      } while (iVar13 < (int)uVar6);
    }
    unaff_r7 = param_1;
    if (1 < uVar3) {
      unaff_r7 = (byte **)((uVar2 + 1) - uVar3);
    }
    unaff_r4 = 0;
    param_3[4] = 0;
    goto LAB_00023318;
  case 2:
    uVar2 = raac_GetBits(param_1,2);
    unaff_r6 = uVar2 & 0xff;
    uVar2 = raac_GetBits(param_1,2);
    unaff_r4 = uVar2 & 0xff;
    uVar2 = unaff_r4 + 1 & 0xff;
    param_3[3] = (byte)uVar2;
    if (unaff_r4 != 0) {
      iVar13 = 0;
      do {
        uVar2 = raac_GetBits(param_1,2);
        local_3c[iVar13] = ((char)uVar2 + '\x01') * '\x02';
        iVar13 = iVar13 + 1;
      } while (iVar13 < (int)unaff_r4);
      uVar2 = (uint)param_3[3];
    }
    uVar6 = raac_GetBits(param_1,(uint)(byte)(&DAT_00038ac1)[uVar2]);
    uVar2 = (uint)param_3[3];
    uVar6 = uVar6 & 0xff;
    param_3[2] = (byte)uVar6;
    pbVar7 = extraout_r1_02;
    if (uVar2 != 0) {
      pbVar7 = param_3 + 9;
      iVar13 = 0;
      do {
        uVar2 = raac_GetBits(param_1,1);
        iVar13 = iVar13 + 1;
        pbVar7 = pbVar7 + 1;
        *pbVar7 = (byte)uVar2;
        uVar2 = (uint)param_3[3];
      } while (iVar13 < (int)uVar2);
      uVar6 = (uint)param_3[2];
      pbVar7 = extraout_r1_03;
    }
    if (unaff_r4 != 0) {
      pbVar7 = local_3c + 4;
      iVar13 = 0;
      do {
        pbVar7[iVar13] = local_3c[iVar13];
        iVar13 = iVar13 + 1;
      } while (iVar13 < (int)unaff_r4);
    }
    if (uVar6 == 0) {
      param_1 = (byte **)(uVar2 - 1);
      unaff_r5 = 0x10;
      unaff_r7 = (byte **)0x1;
    }
    else {
      uVar3 = uVar2;
      if (uVar6 != 1) {
        uVar3 = uVar6;
      }
      unaff_r7 = (byte **)(uVar3 - 1);
      unaff_r5 = 0x10;
      param_1 = (byte **)(uVar2 - 1);
    }
    break;
  case 3:
    uVar2 = raac_GetBits(param_1,2);
    unaff_r6 = uVar2 & 0xff;
    uVar2 = raac_GetBits(param_1,2);
    uVar6 = raac_GetBits(param_1,2);
    unaff_r5 = uVar2 + 0x10 & 0xff;
    unaff_r4 = uVar6 & 0xff;
    uVar6 = raac_GetBits(param_1,2);
    uVar6 = uVar6 & 0xff;
    uVar2 = unaff_r4 + uVar6 + 1 & 0xff;
    param_3[3] = (byte)uVar2;
    if (5 < uVar2) {
      return 0xffffffe9;
    }
    if (unaff_r4 != 0) {
      iVar13 = 0;
      do {
        uVar2 = raac_GetBits(param_1,2);
        local_44[iVar13] = ((char)uVar2 + '\x01') * '\x02';
        iVar13 = iVar13 + 1;
      } while (iVar13 < (int)unaff_r4);
    }
    if (uVar6 != 0) {
      iVar13 = 0;
      do {
        uVar2 = raac_GetBits(param_1,2);
        local_40[iVar13] = ((char)uVar2 + '\x01') * '\x02';
        iVar13 = iVar13 + 1;
      } while (iVar13 < (int)uVar6);
    }
    uVar3 = raac_GetBits(param_1,(uint)(byte)(&UNK_00038ac2)[uVar6 + unaff_r4]);
    uVar2 = (uint)param_3[3];
    uVar3 = uVar3 & 0xff;
    param_3[2] = (byte)uVar3;
    pbVar7 = extraout_r1_00;
    if (uVar2 != 0) {
      pbVar7 = param_3 + 9;
      iVar13 = 0;
      do {
        uVar2 = raac_GetBits(param_1,1);
        iVar13 = iVar13 + 1;
        pbVar7 = pbVar7 + 1;
        *pbVar7 = (byte)uVar2;
        uVar2 = (uint)param_3[3];
      } while (iVar13 < (int)uVar2);
      uVar3 = (uint)param_3[2];
      pbVar7 = extraout_r1_01;
    }
    if (unaff_r4 != 0) {
      pbVar7 = local_3c + 4;
      iVar13 = 0;
      do {
        pbVar7[iVar13] = local_44[iVar13];
        iVar13 = iVar13 + 1;
      } while (iVar13 < (int)unaff_r4);
    }
    if (uVar6 != 0) {
      pbVar7 = local_30;
      iVar13 = 0;
      do {
        pbVar7[iVar13] = local_40[iVar13];
        iVar13 = iVar13 + 1;
      } while (iVar13 < (int)uVar6);
    }
    if (uVar3 < 2) {
      unaff_r7 = (byte **)(uVar2 - 1);
    }
    else {
      unaff_r7 = (byte **)((uVar2 + 1) - uVar3);
    }
    param_1 = (byte **)(uVar2 - 1);
    break;
  default:
    uVar2 = (uint)param_3[3];
    param_1 = (byte **)(uVar2 - 1);
    pbVar7 = extraout_r1;
  }
  param_3[4] = (byte)(unaff_r6 << 1);
  if (unaff_r4 != 0) {
    pbVar9 = local_3c + 3;
    pbVar12 = pbVar9 + unaff_r4;
    pbVar7 = param_3;
    do {
      pbVar9 = pbVar9 + 1;
      unaff_r6 = unaff_r6 + *pbVar9;
      pbVar7[5] = (char)unaff_r6 * '\x02';
      pbVar7 = pbVar7 + 1;
    } while (pbVar9 != pbVar12);
  }
LAB_00023318:
  bVar5 = (byte)pbVar7;
  if ((int)unaff_r4 < (int)param_1) {
    pcVar4 = (char *)((int)param_3 + (int)param_1 + 5);
    uVar6 = unaff_r5;
    pbVar7 = local_30;
    do {
      pbVar9 = pbVar7 + 1;
      uVar6 = uVar6 - *pbVar7;
      bVar5 = (byte)uVar6;
      pcVar4 = pcVar4 + -1;
      *pcVar4 = bVar5 * '\x02';
      pbVar7 = pbVar9;
    } while (pbVar9 != (byte *)(((int)param_1 + (int)local_30) - unaff_r4));
  }
  pbVar7 = param_3 + uVar2;
  if (1 < uVar2) {
    unaff_r7 = (byte **)(param_3 + (int)unaff_r7);
  }
  bVar1 = (byte)(unaff_r5 << 1);
  pbVar7[4] = bVar1;
  if (1 < uVar2) {
    pbVar7 = (byte *)(uint)param_3[4];
  }
  bVar8 = (byte)pbVar7;
  uVar6 = uVar2;
  if (1 < uVar2) {
    bVar5 = 2;
    uVar6 = (uint)*(byte *)(unaff_r7 + 1);
  }
  bVar10 = (byte)uVar6;
  if (uVar2 < 2) {
    bVar5 = 1;
    bVar8 = param_3[4];
    bVar10 = param_3[5];
  }
  else {
    param_3[0x12] = bVar1;
  }
  param_3[0xf] = bVar5;
  param_3[0x10] = bVar8;
  param_3[0x11] = bVar10;
  return 0;
}



undefined4
_FINI_0(undefined param_1,undefined4 param_2,undefined *param_3,uint param_4,undefined param_5,
       undefined param_6,undefined param_7,undefined param_8,undefined1 param_9)

{
  char cVar1;
  undefined *puVar2;
  undefined uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined uVar6;
  uint uVar7;
  int unaff_r4;
  char *pcVar8;
  undefined *puVar9;
  undefined *unaff_r8;
  int unaff_r10;
  
  puVar2 = param_3 + unaff_r4;
  do {
    param_3 = param_3 + 1;
    *param_3 = param_1;
  } while (param_3 != puVar2);
  puVar9 = (undefined *)(param_4 >> 1);
  cVar1 = '\0';
  unaff_r8[4] = 0;
  if (unaff_r4 != 0) {
    pcVar5 = &stack0x0000000f;
    pcVar8 = pcVar5 + unaff_r4;
    puVar2 = unaff_r8;
    do {
      pcVar5 = pcVar5 + 1;
      cVar1 = cVar1 + *pcVar5;
      puVar2[5] = cVar1 * '\x02';
      puVar2 = puVar2 + 1;
    } while (pcVar5 != pcVar8);
  }
  cVar1 = (char)puVar2;
  if (unaff_r4 < unaff_r10) {
    pcVar8 = unaff_r8 + unaff_r10 + 5;
    cVar1 = '\x10';
    pcVar5 = &stack0x00000018;
    do {
      pcVar4 = pcVar5 + 1;
      cVar1 = cVar1 - *pcVar5;
      pcVar8 = pcVar8 + -1;
      *pcVar8 = cVar1 * '\x02';
      pcVar5 = pcVar4;
    } while (pcVar4 != &stack0x00000018 + (unaff_r10 - unaff_r4));
  }
  puVar2 = unaff_r8 + param_4;
  if (1 < param_4) {
    puVar9 = unaff_r8 + (int)puVar9;
  }
  puVar2[4] = 0x20;
  if (1 < param_4) {
    puVar2 = (undefined *)(uint)(byte)unaff_r8[4];
  }
  uVar3 = SUB41(puVar2,0);
  uVar7 = param_4;
  if (1 < param_4) {
    cVar1 = '\x02';
    uVar7 = (uint)(byte)puVar9[4];
  }
  uVar6 = (undefined)uVar7;
  if (param_4 < 2) {
    cVar1 = '\x01';
    uVar3 = unaff_r8[4];
    uVar6 = unaff_r8[5];
  }
  else {
    unaff_r8[0x12] = 0x20;
  }
  unaff_r8[0xf] = cVar1;
  unaff_r8[0x10] = uVar3;
  unaff_r8[0x11] = uVar6;
  return 0;
}



int raac_GetSampRateIdx(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(raac_sfBandTabLong + 0x288);
  do {
    piVar2 = piVar2 + 1;
    if (*piVar2 == param_1) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xc);
  return -1;
}



undefined4 raac_UnpackSBRHeader(byte **param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint local_38;
  
  uVar5 = *(ushort *)((int)param_2 + 5);
  cVar1 = *(char *)((int)param_2 + 0xb);
  cVar2 = *(char *)(param_2 + 3);
  cVar3 = *(char *)((int)param_2 + 7);
  cVar4 = *(char *)((int)param_2 + 0xd);
  uVar6 = raac_GetBits(param_1,1);
  *(char *)(param_2 + 1) = (char)uVar6;
  uVar6 = raac_GetBits(param_1,4);
  *(char *)((int)param_2 + 5) = (char)uVar6;
  uVar6 = raac_GetBits(param_1,4);
  *(char *)((int)param_2 + 6) = (char)uVar6;
  uVar6 = raac_GetBits(param_1,3);
  *(char *)((int)param_2 + 7) = (char)uVar6;
  uVar6 = raac_GetBits(param_1,2);
  *(char *)(param_2 + 2) = (char)uVar6;
  uVar6 = raac_GetBits(param_1,1);
  *(char *)((int)param_2 + 9) = (char)uVar6;
  uVar6 = raac_GetBits(param_1,1);
  uVar6 = uVar6 & 0xff;
  *(char *)((int)param_2 + 10) = (char)uVar6;
  if (*(char *)((int)param_2 + 9) == '\0') {
    *(undefined *)((int)param_2 + 0xb) = 2;
    *(undefined *)(param_2 + 3) = 1;
    *(undefined *)((int)param_2 + 0xd) = 2;
  }
  else {
    uVar6 = raac_GetBits(param_1,2);
    *(char *)((int)param_2 + 0xb) = (char)uVar6;
    uVar6 = raac_GetBits(param_1,1);
    *(char *)(param_2 + 3) = (char)uVar6;
    uVar8 = raac_GetBits(param_1,2);
    uVar6 = (uint)*(byte *)((int)param_2 + 10);
    *(char *)((int)param_2 + 0xd) = (char)uVar8;
  }
  if (uVar6 == 0) {
    *(undefined *)((int)param_2 + 0xe) = 2;
    *(undefined *)((int)param_2 + 0xf) = 2;
    *(undefined *)(param_2 + 4) = 1;
    *(undefined *)((int)param_2 + 0x11) = 1;
  }
  else {
    uVar6 = raac_GetBits(param_1,2);
    *(char *)((int)param_2 + 0xe) = (char)uVar6;
    uVar6 = raac_GetBits(param_1,2);
    *(char *)((int)param_2 + 0xf) = (char)uVar6;
    uVar6 = raac_GetBits(param_1,1);
    *(char *)(param_2 + 4) = (char)uVar6;
    uVar6 = raac_GetBits(param_1,1);
    *(char *)((int)param_2 + 0x11) = (char)uVar6;
  }
  local_38 = (uint)uVar5 << 8;
  *param_2 = *param_2 + 1;
  if (((((param_2[1] & 0xffff00U) == local_38) && (*(char *)((int)param_2 + 0xb) == cVar1)) &&
      (*(char *)(param_2 + 3) == cVar2)) && (*(char *)((int)param_2 + 7) == cVar3)) {
    if (*(char *)((int)param_2 + 0xd) == cVar4) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0xffffffff;
    }
  }
  else {
    uVar7 = 0xffffffff;
  }
  return uVar7;
}



undefined4 raac_UnpackSBRSingleChannel(byte **param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar3 = param_3 * 0x16 + param_2;
  uVar1 = raac_GetBits(param_1,1);
  pbVar4 = (byte *)(iVar3 + 0x80);
  *(char *)(param_2 + 0x3cbc) = (char)(uVar1 & 0xff);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = raac_GetBits(param_1,4);
    *(char *)(param_2 + 0x3cbd) = (char)uVar1;
  }
  iVar2 = FUN_00022f28(param_1,*(byte *)(param_2 + param_3 * 0x14 + 0xc),pbVar4);
  if (iVar2 == 0) {
    iVar2 = param_3 * 0x920 + param_2;
    iVar5 = param_3 * 0xd4 + param_2;
    FUN_00022e20(param_1,(uint)*(byte *)(iVar3 + 0x83),iVar2 + 0x600,(uint)*(byte *)(iVar3 + 0x8f),
                 iVar2 + 0x605);
    FUN_00022e88(param_1,*(int *)(iVar5 + 0x11c),iVar2 + 0x706);
    iVar3 = raac_DecodeSBREnvelope(param_1,param_2,(int)pbVar4,iVar5 + 0x104,iVar2 + 0x5fc,0);
    if ((iVar3 == 0) &&
       (iVar3 = raac_DecodeSBRNoise(param_1,param_2,(int)pbVar4,iVar5 + 0x104,iVar2 + 0x5fc,0),
       iVar3 == 0)) {
      uVar1 = raac_GetBits(param_1,1);
      *(char *)(iVar2 + 0x721) = (char)(uVar1 & 0xff);
      FUN_00022ec0(param_1,*(int *)(iVar5 + 0x10c),uVar1 & 0xff,iVar2 + 0x752);
      uVar1 = raac_GetBits(param_1,1);
      *(char *)(param_2 + 0x3cbe) = (char)(uVar1 & 0xff);
      if ((uVar1 & 0xff) == 0) {
        return 0;
      }
      uVar1 = raac_GetBits(param_1,4);
      *(uint *)(param_2 + 0x3cc0) = uVar1;
      if (uVar1 == 0xf) {
        uVar1 = raac_GetBits(param_1,8);
        uVar1 = uVar1 + 0xf;
        *(uint *)(param_2 + 0x3cc0) = uVar1;
      }
      iVar3 = uVar1 * 8;
      while (0 < iVar3) {
        iVar3 = iVar3 + -8;
        raac_GetBits(param_1,8);
      }
      return 0;
    }
  }
  return 0xffffffe9;
}



undefined4 raac_UnpackSBRChannelPair(byte **param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined uVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  iVar11 = param_2 + param_3 * 0x14;
  iVar16 = param_3 * 0xd4 + param_2;
  iVar8 = param_3 * 0x16 + 0x80;
  iVar14 = param_3 * 0x920 + param_2;
  iVar9 = (param_3 + 1) * 0x920 + param_2;
  iVar18 = (param_3 + 1) * 0x16 + 0x80;
  uVar5 = raac_GetBits(param_1,1);
  iVar17 = iVar16 + 0x104;
  pbVar10 = (byte *)(param_2 + iVar8);
  pbVar12 = (byte *)(param_2 + iVar18);
  iVar15 = iVar14 + 0x5fc;
  iVar13 = iVar9 + 0x5fc;
  *(char *)(param_2 + 0x3cbc) = (char)(uVar5 & 0xff);
  if ((uVar5 & 0xff) != 0) {
    uVar5 = raac_GetBits(param_1,4);
    *(char *)(param_2 + 0x3cbd) = (char)uVar5;
    uVar5 = raac_GetBits(param_1,4);
    *(char *)(param_2 + 0x3cbd) = (char)uVar5;
  }
  uVar5 = raac_GetBits(param_1,1);
  *(uint *)(param_2 + 0x4598) = uVar5;
  bVar2 = *(byte *)(iVar11 + 0xc);
  if (uVar5 == 0) {
    iVar8 = FUN_00022f28(param_1,bVar2,pbVar10);
    if ((iVar8 == 0) && (iVar8 = FUN_00022f28(param_1,*(byte *)(iVar11 + 0xc),pbVar12), iVar8 == 0))
    {
      FUN_00022e20(param_1,(uint)pbVar10[3],iVar14 + 0x600,(uint)pbVar10[0xf],iVar14 + 0x605);
      FUN_00022e20(param_1,(uint)pbVar12[3],iVar9 + 0x600,(uint)pbVar12[0xf],iVar9 + 0x605);
      FUN_00022e88(param_1,*(int *)(iVar16 + 0x11c),iVar14 + 0x706);
      FUN_00022e88(param_1,*(int *)(iVar16 + 0x11c),iVar9 + 0x706);
      iVar8 = raac_DecodeSBREnvelope(param_1,param_2,(int)pbVar10,iVar17,iVar15,0);
      if ((iVar8 == 0) &&
         (((iVar8 = raac_DecodeSBREnvelope(param_1,param_2,(int)pbVar12,iVar17,iVar13,1), iVar8 == 0
           && (iVar8 = raac_DecodeSBRNoise(param_1,param_2,(int)pbVar10,iVar17,iVar15,0), iVar8 == 0
              )) && (iVar8 = raac_DecodeSBRNoise(param_1,param_2,(int)pbVar12,iVar17,iVar13,1),
                    iVar8 == 0)))) goto LAB_00023c58;
    }
  }
  else {
    iVar11 = FUN_00022f28(param_1,bVar2,pbVar10);
    if (iVar11 == 0) {
      bVar2 = pbVar10[1];
      pbVar12[3] = pbVar10[3];
      uVar5 = (uint)pbVar10[3];
      uVar3 = *(undefined *)(param_2 + iVar8);
      bVar4 = pbVar10[2];
      pbVar12[1] = bVar2;
      pbVar12[2] = bVar4;
      *(undefined *)(param_2 + iVar18) = uVar3;
      if (uVar5 != 0) {
        pbVar6 = pbVar10 + 9;
        pbVar7 = pbVar12 + 9;
        do {
          iVar8 = iVar11 + 1;
          pbVar12[iVar11 + 4] = pbVar10[iVar11 + 4];
          pbVar6 = pbVar6 + 1;
          pbVar7 = pbVar7 + 1;
          *pbVar7 = *pbVar6;
          iVar11 = iVar8;
        } while (iVar8 < (int)uVar5);
      }
      bVar2 = pbVar10[uVar5 + 4];
      iVar8 = 0;
      pbVar12[0xf] = pbVar10[0xf];
      bVar4 = pbVar10[0xf];
      pbVar12[uVar5 + 4] = bVar2;
      pbVar6 = pbVar12;
      pbVar7 = pbVar10;
      do {
        pbVar1 = pbVar7 + 0x10;
        iVar8 = iVar8 + 1;
        pbVar7 = pbVar7 + 1;
        pbVar6[0x10] = *pbVar1;
        pbVar6 = pbVar6 + 1;
      } while (iVar8 <= (int)(uint)bVar4);
      FUN_00022e20(param_1,uVar5,iVar14 + 0x600,(uint)bVar4,iVar14 + 0x605);
      FUN_00022e20(param_1,(uint)pbVar12[3],iVar9 + 0x600,(uint)pbVar12[0xf],iVar9 + 0x605);
      FUN_00022e88(param_1,*(int *)(iVar16 + 0x11c),iVar14 + 0x706);
      iVar8 = *(int *)(iVar16 + 0x11c);
      if (0 < iVar8) {
        iVar11 = 0;
        do {
          *(undefined *)(iVar9 + 0x706 + iVar11) = *(undefined *)(iVar14 + 0x706 + iVar11);
          iVar11 = iVar11 + 1;
        } while (iVar11 != iVar8);
      }
      iVar8 = raac_DecodeSBREnvelope(param_1,param_2,(int)pbVar10,iVar17,iVar15,0);
      if (((iVar8 == 0) &&
          (iVar8 = raac_DecodeSBRNoise(param_1,param_2,(int)pbVar10,iVar17,iVar15,0), iVar8 == 0))
         && ((iVar8 = raac_DecodeSBREnvelope(param_1,param_2,(int)pbVar12,iVar17,iVar13,1),
             iVar8 == 0 &&
             (iVar8 = raac_DecodeSBRNoise(param_1,param_2,(int)pbVar12,iVar17,iVar13,1), iVar8 == 0)
             ))) {
        raac_UncoupleSBREnvelope(param_2,(int)pbVar10,iVar17,iVar13);
        raac_UncoupleSBRNoise(param_2,(int)pbVar10,iVar17,iVar13);
LAB_00023c58:
        uVar5 = raac_GetBits(param_1,1);
        *(char *)(iVar14 + 0x721) = (char)(uVar5 & 0xff);
        FUN_00022ec0(param_1,*(int *)(iVar16 + 0x10c),uVar5 & 0xff,iVar14 + 0x752);
        uVar5 = raac_GetBits(param_1,1);
        *(char *)(iVar9 + 0x721) = (char)(uVar5 & 0xff);
        FUN_00022ec0(param_1,*(int *)(iVar16 + 0x10c),uVar5 & 0xff,iVar9 + 0x752);
        uVar5 = raac_GetBits(param_1,1);
        *(char *)(param_2 + 0x3cbe) = (char)(uVar5 & 0xff);
        if ((uVar5 & 0xff) == 0) {
          return 0;
        }
        uVar5 = raac_GetBits(param_1,4);
        *(uint *)(param_2 + 0x3cc0) = uVar5;
        if (uVar5 == 0xf) {
          uVar5 = raac_GetBits(param_1,8);
          uVar5 = uVar5 + 0xf;
          *(uint *)(param_2 + 0x3cc0) = uVar5;
        }
        iVar8 = uVar5 * 8;
        while (0 < iVar8) {
          iVar8 = iVar8 + -8;
          raac_GetBits(param_1,8);
        }
        return 0;
      }
    }
  }
  return 0xffffffe9;
}



uint ga_config_get_data(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar1 = readBits((int)param_1,5);
  *param_2 = uVar1;
  uVar1 = readBits((int)param_1,4);
  if (uVar1 == 0xf) {
    uVar1 = readBits((int)param_1,0x18);
    param_2[1] = uVar1;
    uVar1 = readBits((int)param_1,4);
    uVar2 = *param_2;
    if (uVar2 == 5) goto LAB_00023f50;
LAB_00023dbc:
    param_2[0xf] = 0;
    param_2[2] = param_2[1];
  }
  else {
    param_2[1] = *(uint *)(aSampleRate + uVar1 * 4);
    uVar1 = readBits((int)param_1,4);
    uVar2 = *param_2;
    if (uVar2 != 5) goto LAB_00023dbc;
LAB_00023f50:
    param_2[0xf] = 1;
    readBits((int)param_1,4);
    uVar2 = readBits((int)param_1,0x18);
    param_2[2] = uVar2;
    uVar2 = readBits((int)param_1,5);
    *param_2 = uVar2;
  }
  bVar7 = 3 < uVar2;
  if (uVar2 != 4) {
    bVar7 = uVar2 != 1;
  }
  if (!bVar7 || (uVar2 == 4 || uVar2 == 2)) {
    uVar2 = readBits((int)param_1,1);
    if (uVar2 == 0) {
      uVar2 = 0x400;
    }
    else {
      uVar2 = 0x3c0;
    }
    param_2[3] = uVar2;
    uVar2 = readBits((int)param_1,1);
    if (uVar2 != 0) {
      uVar2 = readBits((int)param_1,0xe);
      param_2[4] = uVar2;
    }
    readBits((int)param_1,1);
    if (uVar1 == 0) {
      readBits((int)param_1,4);
      readBits((int)param_1,2);
      readBits((int)param_1,4);
      uVar1 = readBits((int)param_1,4);
      param_2[9] = uVar1;
      uVar1 = readBits((int)param_1,4);
      param_2[10] = uVar1;
      uVar1 = readBits((int)param_1,4);
      param_2[0xb] = uVar1;
      uVar1 = readBits((int)param_1,2);
      param_2[0xc] = uVar1;
      uVar1 = readBits((int)param_1,3);
      param_2[0xd] = uVar1;
      uVar1 = readBits((int)param_1,4);
      param_2[0xe] = uVar1;
      uVar1 = readBits((int)param_1,1);
      if (uVar1 != 0) {
        readBits((int)param_1,4);
      }
      uVar1 = readBits((int)param_1,1);
      if (uVar1 != 0) {
        readBits((int)param_1,4);
      }
      uVar1 = readBits((int)param_1,1);
      if (uVar1 != 0) {
        readBits((int)param_1,2);
        readBits((int)param_1,1);
      }
      if (param_2[9] != 0) {
        uVar1 = 0;
        do {
          uVar4 = param_2[6];
          uVar2 = readBits((int)param_1,1);
          uVar1 = uVar1 + 1;
          param_2[6] = uVar4 + 1 + uVar2;
          readBits((int)param_1,4);
        } while (uVar1 < param_2[9]);
      }
      if (param_2[10] != 0) {
        uVar1 = 0;
        do {
          uVar4 = param_2[7];
          uVar2 = readBits((int)param_1,1);
          uVar1 = uVar1 + 1;
          param_2[7] = uVar4 + 1 + uVar2;
          readBits((int)param_1,4);
        } while (uVar1 < param_2[10]);
      }
      if (param_2[0xb] != 0) {
        uVar1 = 0;
        do {
          uVar4 = param_2[8];
          uVar2 = readBits((int)param_1,1);
          uVar1 = uVar1 + 1;
          param_2[8] = uVar4 + 1 + uVar2;
          readBits((int)param_1,4);
        } while (uVar1 < param_2[0xb]);
      }
      if (param_2[0xc] != 0) {
        uVar1 = 0;
        do {
          readBits((int)param_1,4);
          uVar1 = uVar1 + 1;
        } while (uVar1 < param_2[0xc]);
      }
      if (param_2[0xd] != 0) {
        uVar1 = 0;
        do {
          readBits((int)param_1,4);
          uVar1 = uVar1 + 1;
        } while (uVar1 < param_2[0xd]);
      }
      if (param_2[0xe] != 0) {
        uVar1 = 0;
        do {
          readBits((int)param_1,1);
          uVar1 = uVar1 + 1;
          readBits((int)param_1,4);
        } while (uVar1 < param_2[0xe]);
      }
      byteAlign((int)param_1);
      uVar1 = readBits((int)param_1,8);
      if (uVar1 != 0) {
        uVar2 = 0;
        do {
          uVar2 = uVar2 + 1;
          readBits((int)param_1,8);
        } while (uVar2 != uVar1);
      }
      uVar4 = param_2[6];
      uVar2 = param_2[7];
      uVar5 = param_2[8];
      uVar1 = param_2[0xc];
    }
    else {
      if (7 < uVar1) goto LAB_00023ddc;
      iVar3 = uVar1 * 0x10;
      uVar4 = *(uint *)(channelMapping + uVar1 * 0x10);
      uVar2 = *(uint *)(channelMapping + iVar3 + 4);
      uVar5 = *(uint *)(channelMapping + iVar3 + 8);
      uVar1 = *(uint *)(channelMapping + iVar3 + 0xc);
      param_2[6] = uVar4;
      param_2[7] = uVar2;
      param_2[8] = uVar5;
      param_2[0xc] = uVar1;
      param_2[9] = uVar4 + 1 >> 1;
      param_2[10] = uVar2 + 1 >> 1;
      param_2[0xb] = uVar5 + 1 >> 1;
    }
    uVar6 = param_2[0xf];
    param_2[5] = uVar2 + uVar4 + uVar5 + uVar1;
    if (uVar6 == 0) {
      iVar3 = bitsLeftInBitstream(param_1);
      uVar1 = uVar6;
      if (((0xf < iVar3) && (uVar2 = readBits((int)param_1,0xb), uVar2 == 0x2b7)) &&
         (uVar2 = readBits((int)param_1,5), uVar2 == 5)) {
        uVar1 = readBits((int)param_1,1);
        param_2[0xf] = uVar1;
        if (uVar1 != 0) {
          uVar1 = readBits((int)param_1,4);
          if (uVar1 == 0xf) {
            uVar1 = readBits((int)param_1,0x18);
            param_2[2] = uVar1;
            uVar1 = uVar6;
          }
          else {
            param_2[2] = *(uint *)(aSampleRate + uVar1 * 4);
            uVar1 = uVar6;
          }
        }
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
LAB_00023ddc:
    uVar1 = 0x80004005;
  }
  return uVar1;
}



uint readBits(int param_1,uint param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  uint in_r12;
  uint uVar4;
  uint uVar5;
  
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 < (int)param_2) {
    iVar1 = -iVar3 + 0x20;
    if (iVar1 < 8) {
      in_r12 = 0;
    }
    if (iVar1 != 7 && -iVar3 + 0x19 < 0 == SBORROW4(iVar1,7)) {
      iVar1 = 0;
      pbVar2 = *(byte **)(param_1 + 4);
      uVar4 = 0x18 - iVar3;
      do {
        uVar5 = uVar4;
        iVar3 = iVar3 + 8;
        iVar1 = (uint)*pbVar2 + iVar1 * 0x100;
        *(int *)(param_1 + 0xc) = iVar3;
        *(byte **)(param_1 + 4) = pbVar2 + *(int *)(param_1 + 0x14);
        pbVar2 = pbVar2 + *(int *)(param_1 + 0x14);
        uVar4 = uVar5 - 8;
      } while (7 < (int)uVar5);
      in_r12 = iVar1 << (uVar5 & 0xff);
    }
    uVar4 = in_r12 | *(uint *)(param_1 + 8);
  }
  else {
    uVar4 = *(uint *)(param_1 + 8);
  }
  *(uint *)(param_1 + 8) = uVar4 << (param_2 & 0xff);
  *(uint *)(param_1 + 0xc) = iVar3 - param_2;
  return uVar4 >> (0x20 - param_2 & 0xff);
}



undefined4 unreadBits(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_3 + *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 < 0x21) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  *(uint *)(param_1 + 8) =
       *(uint *)(param_1 + 8) >> (param_3 & 0xff) | param_2 << (0x20 - param_3 & 0xff);
  return uVar2;
}



void byteAlign(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xc) & 7;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) - uVar1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) << uVar1;
  return;
}



void newBitstream(int *param_1,undefined4 param_2,undefined4 param_3,undefined *param_4)

{
  int iVar1;
  
  iVar1 = (*(code *)param_4)(param_3,0x18);
  if (param_1 != (int *)0x0 && iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *param_1 = iVar1;
  }
  return;
}



void deleteBitstream(int param_1,undefined4 param_2,undefined *param_3,undefined4 param_4)

{
  if (param_1 == 0) {
    return;
  }
  (*(code *)param_3)(param_2,param_1,param_3,param_1,param_4);
  return;
}



undefined4 feedBitstream(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[4] = param_3;
  return 0;
}



int bitsLeftInBitstream(int *param_1)

{
  return param_1[4] + (*param_1 - param_1[1]) * 8 + param_1[3];
}



undefined4 setAtBitstream(int *param_1,int param_2,int param_3)

{
  param_1[3] = 0;
  param_1[5] = param_3;
  param_1[1] = *param_1 + (param_2 >> 3);
  param_1[2] = 0;
  return 0;
}



void raac_CVKernel1(int *param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  iVar6 = *param_1;
  iVar7 = param_1[1];
  iVar8 = param_1[0x80];
  piVar4 = param_1 + 0x100;
  iVar9 = param_1[0x81];
  lVar1 = (longlong)iVar7 * (longlong)iVar9 + (longlong)iVar8 * (longlong)iVar6;
  lVar2 = (longlong)iVar8 * (longlong)-iVar7 + (longlong)iVar6 * (longlong)iVar9;
  lVar3 = (longlong)iVar7 * (longlong)iVar7 + (longlong)iVar6 * (longlong)iVar6;
  param_2[6] = (uint)lVar1;
  param_2[7] = (uint)((ulonglong)lVar1 >> 0x20);
  param_2[8] = (uint)lVar2;
  param_2[9] = (uint)((ulonglong)lVar2 >> 0x20);
  param_2[10] = (uint)lVar3;
  param_2[0xb] = (uint)((ulonglong)lVar3 >> 0x20);
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  iVar6 = 0x26;
  do {
    iVar10 = iVar9;
    iVar7 = iVar8;
    piVar5 = piVar4 + 1;
    iVar8 = *piVar4;
    piVar4 = piVar4 + 0x80;
    iVar9 = *piVar5;
    lVar1 = (longlong)iVar10 * (longlong)iVar9 +
            (longlong)iVar7 * (longlong)iVar8 + CONCAT44(uVar12,uVar11);
    uVar11 = (uint)lVar1;
    uVar12 = (uint)((ulonglong)lVar1 >> 0x20);
    lVar1 = (longlong)iVar8 * (longlong)-iVar10 +
            (longlong)iVar9 * (longlong)iVar7 + CONCAT44(uVar14,uVar13);
    uVar13 = (uint)lVar1;
    uVar14 = (uint)((ulonglong)lVar1 >> 0x20);
    lVar1 = (longlong)iVar10 * (longlong)iVar10 +
            (longlong)iVar7 * (longlong)iVar7 + CONCAT44(uVar16,uVar15);
    uVar15 = (uint)lVar1;
    uVar16 = (uint)((ulonglong)lVar1 >> 0x20);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  *param_2 = uVar11;
  param_2[1] = uVar12;
  param_2[2] = uVar13;
  param_2[3] = uVar14;
  param_2[4] = uVar15;
  param_2[5] = uVar16;
  iVar6 = -iVar7;
  lVar1 = (longlong)-iVar10 * (longlong)iVar9 +
          (longlong)iVar6 * (longlong)iVar8 +
          CONCAT44(param_2[7] + uVar12 + (uint)CARRY4(param_2[6],uVar11),param_2[6] + uVar11);
  lVar2 = (longlong)iVar8 * (longlong)iVar10 +
          (longlong)iVar9 * (longlong)iVar6 +
          CONCAT44(param_2[9] + uVar14 + (uint)CARRY4(param_2[8],uVar13),param_2[8] + uVar13);
  lVar3 = (longlong)-iVar10 * (longlong)iVar10 +
          (longlong)iVar7 * (longlong)iVar6 +
          CONCAT44(param_2[0xb] + uVar16 + (uint)CARRY4(param_2[10],uVar15),param_2[10] + uVar15);
  param_2[6] = (uint)lVar1;
  param_2[7] = (uint)((ulonglong)lVar1 >> 0x20);
  param_2[8] = (uint)lVar2;
  param_2[9] = (uint)((ulonglong)lVar2 >> 0x20);
  param_2[10] = (uint)lVar3;
  param_2[0xb] = (uint)((ulonglong)lVar3 >> 0x20);
  return;
}



void raac_CVKernel2(int *param_1,undefined4 *param_2)

{
  longlong lVar1;
  int *piVar2;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int *piVar3;
  
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  piVar2 = param_1 + 0x100;
  iVar4 = 0x26;
  iVar5 = *param_1;
  iVar6 = param_1[1];
  iVar7 = param_1[0x80];
  iVar8 = param_1[0x81];
  do {
    piVar3 = piVar2 + 1;
    iVar13 = *piVar2;
    piVar2 = piVar2 + 0x80;
    iVar14 = *piVar3;
    lVar1 = (longlong)iVar6 * (longlong)iVar14 +
            (longlong)iVar5 * (longlong)iVar13 + CONCAT44(uVar10,uVar9);
    uVar9 = (undefined4)lVar1;
    uVar10 = (undefined4)((ulonglong)lVar1 >> 0x20);
    lVar1 = (longlong)iVar13 * (longlong)-iVar6 +
            (longlong)iVar14 * (longlong)iVar5 + CONCAT44(uVar12,uVar11);
    uVar11 = (undefined4)lVar1;
    uVar12 = (undefined4)((ulonglong)lVar1 >> 0x20);
    iVar4 = iVar4 + -1;
    iVar5 = iVar7;
    iVar6 = iVar8;
    iVar7 = iVar13;
    iVar8 = iVar14;
  } while (iVar4 != 0);
  *param_2 = uVar9;
  param_2[1] = uVar10;
  param_2[2] = uVar11;
  param_2[3] = uVar12;
  return;
}



void raac_QMFAnalysisConv(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
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
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int *piVar2;
  
  iVar9 = param_3 * 0x20;
  iVar14 = *param_1;
  iVar20 = *(int *)(param_2 + (iVar9 + 0x1f) * 4);
  iVar8 = iVar9 + -1;
  if (iVar9 + 0x1f < 0x20) {
    iVar8 = iVar9 + 0x13f;
  }
  iVar9 = iVar8 + -0x20;
  if (iVar8 < 0x20) {
    iVar9 = iVar8 + 0x120;
  }
  iVar15 = param_1[2];
  iVar21 = *(int *)(param_2 + iVar9 * 4);
  iVar10 = iVar9 + -0x20;
  if (iVar9 < 0x20) {
    iVar10 = iVar9 + 0x120;
  }
  iVar9 = iVar10 + -0x20;
  if (iVar10 < 0x20) {
    iVar9 = iVar10 + 0x120;
  }
  piVar1 = param_1 + 5;
  iVar16 = param_1[4];
  iVar22 = *(int *)(param_2 + iVar9 * 4);
  iVar11 = iVar9 + -0x20;
  if (iVar9 < 0x20) {
    iVar11 = iVar9 + 0x120;
  }
  iVar9 = iVar11 + -0x20;
  if (iVar11 < 0x20) {
    iVar9 = iVar11 + 0x120;
  }
  iVar17 = param_1[0xa3];
  iVar23 = *(int *)(param_2 + iVar9 * 4);
  iVar12 = iVar9 + -0x20;
  if (iVar9 < 0x20) {
    iVar12 = iVar9 + 0x120;
  }
  iVar9 = iVar12 + -0x20;
  if (iVar12 < 0x20) {
    iVar9 = iVar12 + 0x120;
  }
  iVar18 = param_1[0xa1];
  piVar6 = param_1 + 0x9f;
  iVar24 = *(int *)(param_2 + iVar9 * 4);
  iVar13 = iVar9 + -0x20;
  if (iVar9 < 0x20) {
    iVar13 = iVar9 + 0x120;
  }
  iVar9 = iVar13 + -0x20;
  if (iVar13 < 0x20) {
    iVar9 = iVar13 + 0x120;
  }
  param_4[0x20] =
       (int)((ulonglong)
             ((longlong)*(int *)(param_2 + iVar13 * 4) * (longlong)param_1[0xa0] +
             (longlong)*(int *)(param_2 + iVar12 * 4) * (longlong)param_1[0xa2] +
             (longlong)*(int *)(param_2 + iVar11 * 4) * (longlong)param_1[0xa4] +
             (longlong)*(int *)(param_2 + iVar10 * 4) * (longlong)param_1[3] +
             (longlong)param_1[1] * (longlong)*(int *)(param_2 + iVar8 * 4)) >> 0x20);
  *param_4 = (int)((ulonglong)
                   ((longlong)iVar24 * (longlong)-iVar18 +
                   (longlong)iVar23 * (longlong)-iVar17 +
                   (longlong)iVar22 * (longlong)iVar16 +
                   (longlong)iVar21 * (longlong)iVar15 + (longlong)iVar14 * (longlong)iVar20) >>
                  0x20);
  iVar8 = 0x1f;
  puVar5 = param_4 + 1;
  do {
    piVar2 = piVar1 + 1;
    iVar20 = *piVar1;
    iVar10 = *(int *)(param_2 + (iVar9 + -1) * 4);
    iVar14 = iVar9 + -0x21;
    if (iVar9 + -1 < 0x20) {
      iVar14 = iVar9 + 0x11f;
    }
    iVar9 = iVar14 + -0x20;
    if (iVar14 < 0x20) {
      iVar9 = iVar14 + 0x120;
    }
    piVar3 = piVar1 + 3;
    iVar21 = piVar1[2];
    piVar4 = piVar1 + 4;
    iVar11 = *(int *)(param_2 + iVar9 * 4);
    iVar15 = iVar9 + -0x20;
    if (iVar9 < 0x20) {
      iVar15 = iVar9 + 0x120;
    }
    iVar9 = iVar15 + -0x20;
    if (iVar15 < 0x20) {
      iVar9 = iVar15 + 0x120;
    }
    piVar1 = piVar1 + 5;
    iVar22 = *piVar4;
    iVar17 = *piVar6;
    iVar12 = *(int *)(param_2 + iVar9 * 4);
    iVar16 = iVar9 + -0x20;
    if (iVar9 < 0x20) {
      iVar16 = iVar9 + 0x120;
    }
    iVar9 = iVar16 + -0x20;
    if (iVar16 < 0x20) {
      iVar9 = iVar16 + 0x120;
    }
    piVar4 = piVar6 + -2;
    iVar13 = piVar6[-1];
    iVar18 = *(int *)(param_2 + iVar9 * 4);
    iVar23 = iVar9 + -0x20;
    if (iVar9 < 0x20) {
      iVar23 = iVar9 + 0x120;
    }
    iVar9 = iVar23 + -0x20;
    if (iVar23 < 0x20) {
      iVar9 = iVar23 + 0x120;
    }
    piVar7 = piVar6 + -4;
    iVar19 = piVar6[-3];
    piVar6 = piVar6 + -5;
    iVar25 = *(int *)(param_2 + iVar9 * 4);
    iVar24 = iVar9 + -0x20;
    if (iVar9 < 0x20) {
      iVar24 = iVar9 + 0x120;
    }
    iVar9 = iVar24 + -0x20;
    if (iVar24 < 0x20) {
      iVar9 = iVar24 + 0x120;
    }
    puVar5[0x20] = (int)((ulonglong)
                         ((longlong)*(int *)(param_2 + iVar24 * 4) * (longlong)*piVar7 +
                         (longlong)*(int *)(param_2 + iVar23 * 4) * (longlong)*piVar4 +
                         (longlong)*(int *)(param_2 + iVar16 * 4) * (longlong)iVar17 +
                         (longlong)*(int *)(param_2 + iVar15 * 4) * (longlong)*piVar3 +
                         (longlong)*piVar2 * (longlong)*(int *)(param_2 + iVar14 * 4)) >> 0x20);
    *puVar5 = (int)((ulonglong)
                    ((longlong)iVar25 * (longlong)iVar19 +
                    (longlong)iVar18 * (longlong)iVar13 +
                    (longlong)iVar12 * (longlong)iVar22 +
                    (longlong)iVar11 * (longlong)iVar21 + (longlong)iVar20 * (longlong)iVar10) >>
                   0x20);
    iVar8 = iVar8 + -1;
    puVar5 = puVar5 + 1;
  } while (iVar8 != 0);
  return;
}



void raac_QMFSynthesisConv(int *param_1,int param_2,int param_3,ushort *param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  ushort uVar22;
  int iVar23;
  int iVar24;
  
  iVar16 = param_3 * 0x80;
  iVar17 = iVar16 + -1;
  if (iVar16 < 1) {
    iVar17 = iVar16 + 0x4ff;
  }
  iVar11 = 0x40;
  do {
    piVar2 = param_1 + 1;
    iVar24 = *param_1;
    piVar3 = param_1 + 2;
    iVar23 = iVar16 * 4;
    iVar1 = iVar17 * 4;
    iVar12 = iVar16 + -0x100;
    if (iVar16 < 0x100) {
      iVar12 = iVar16 + 0x400;
    }
    iVar18 = iVar17 + -0x100;
    if (iVar17 < 0x100) {
      iVar18 = iVar17 + 0x400;
    }
    piVar4 = param_1 + 3;
    piVar5 = param_1 + 4;
    iVar13 = iVar12 + -0x100;
    if (iVar12 < 0x100) {
      iVar13 = iVar12 + 0x400;
    }
    iVar19 = iVar18 + -0x100;
    if (iVar18 < 0x100) {
      iVar19 = iVar18 + 0x400;
    }
    piVar6 = param_1 + 5;
    piVar7 = param_1 + 6;
    iVar14 = iVar13 + -0x100;
    if (iVar13 < 0x100) {
      iVar14 = iVar13 + 0x400;
    }
    iVar20 = iVar19 + -0x100;
    if (iVar19 < 0x100) {
      iVar20 = iVar19 + 0x400;
    }
    piVar8 = param_1 + 7;
    piVar9 = param_1 + 8;
    iVar15 = iVar14 + -0x100;
    if (iVar14 < 0x100) {
      iVar15 = iVar14 + 0x400;
    }
    iVar21 = iVar20 + -0x100;
    if (iVar20 < 0x100) {
      iVar21 = iVar20 + 0x400;
    }
    piVar10 = param_1 + 9;
    param_1 = param_1 + 10;
    iVar16 = iVar15 + -0x100;
    if (iVar15 < 0x100) {
      iVar16 = iVar15 + 0x400;
    }
    iVar17 = iVar21 + -0x100;
    if (iVar21 < 0x100) {
      iVar17 = iVar21 + 0x400;
    }
    iVar16 = iVar16 + 1;
    iVar17 = iVar17 + -1;
    iVar23 = (int)((ulonglong)
                   ((longlong)*(int *)(param_2 + iVar21 * 4) * (longlong)*piVar10 +
                   (longlong)*(int *)(param_2 + iVar15 * 4) * (longlong)*piVar9 +
                   (longlong)*(int *)(param_2 + iVar20 * 4) * (longlong)*piVar8 +
                   (longlong)*(int *)(param_2 + iVar14 * 4) * (longlong)*piVar7 +
                   (longlong)*(int *)(param_2 + iVar19 * 4) * (longlong)*piVar6 +
                   (longlong)*(int *)(param_2 + iVar13 * 4) * (longlong)*piVar5 +
                   (longlong)*(int *)(param_2 + iVar18 * 4) * (longlong)*piVar4 +
                   (longlong)*(int *)(param_2 + iVar12 * 4) * (longlong)*piVar3 +
                   (longlong)*(int *)(param_2 + iVar1) * (longlong)*piVar2 +
                   (longlong)iVar24 * (longlong)*(int *)(param_2 + iVar23)) >> 0x20) + 4;
    uVar22 = (ushort)(iVar23 >> 3);
    if (iVar23 >> 0x1f != iVar23 >> 0x12) {
      uVar22 = (ushort)(iVar23 >> 0x1f) ^ 0x7fff;
    }
    *param_4 = uVar22;
    param_4 = param_4 + param_5;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  return;
}



void raac_DCT4(int param_1,uint *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  
  if (param_3 < 4) {
    uVar15 = 4 - param_3;
    iVar17 = *(int *)(&DAT_0003b00c + param_1 * 4) >> 2;
    if (iVar17 == 0) goto LAB_00024c08;
    puVar10 = param_2 + *(int *)(&DAT_0003b00c + param_1 * 4) + -1;
    piVar6 = (int *)(raac_cos4sin4tab + *(int *)((int)&raac_cos4sin4tabOffset + param_1 * 4) * 4);
    puVar3 = param_2;
    puVar5 = puVar10;
    iVar13 = iVar17;
    do {
      iVar2 = (int)*puVar3 >> (uVar15 & 0xff);
      iVar14 = *piVar6;
      iVar7 = (int)*puVar5 >> (uVar15 & 0xff);
      iVar12 = piVar6[1];
      iVar9 = piVar6[2];
      iVar8 = piVar6[3];
      iVar11 = (int)puVar3[1] >> (uVar15 & 0xff);
      piVar6 = piVar6 + 4;
      iVar19 = (int)((ulonglong)((longlong)iVar12 * (longlong)(iVar2 + iVar7)) >> 0x20);
      puVar3[1] = (int)((ulonglong)((longlong)iVar14 * (longlong)iVar7) >> 0x20) - iVar19;
      *puVar3 = iVar19 + (int)((ulonglong)((longlong)(iVar14 + iVar12 * -2) * (longlong)iVar2) >>
                              0x20);
      puVar3 = puVar3 + 2;
      iVar2 = (int)puVar5[-1] >> (uVar15 & 0xff);
      iVar7 = (int)((ulonglong)((longlong)iVar8 * (longlong)(iVar11 + iVar2)) >> 0x20);
      iVar13 = iVar13 + -1;
      *puVar5 = (int)((ulonglong)((longlong)iVar9 * (longlong)iVar11) >> 0x20) - iVar7;
      puVar5[-1] = iVar7 + (int)((ulonglong)((longlong)(iVar9 + iVar8 * -2) * (longlong)iVar2) >>
                                0x20);
      puVar5 = puVar5 + -2;
    } while (iVar13 != 0);
    raac_R4FFT(param_1,(int *)param_2);
    iVar2 = *(int *)(&DAT_0003b004 + param_1 * 4);
    uVar16 = param_3 + 0x1a;
    iVar7 = 0x40000000;
    iVar13 = 0;
    piVar6 = (int *)(raac_cos1sin1tab + iVar2 * 4 + 4);
    do {
      uVar20 = *param_2;
      uVar18 = *puVar10;
      iVar19 = (int)((ulonglong)((longlong)iVar13 * (longlong)(int)(uVar20 + param_2[1])) >> 0x20);
      iVar11 = iVar19 - (int)((ulonglong)((longlong)iVar7 * (longlong)(int)param_2[1]) >> 0x20);
      if (iVar11 >> 0x1f == iVar11 >> (uVar16 & 0xff)) {
        uVar4 = iVar11 << (uVar15 & 0xff);
      }
      else {
        uVar4 = iVar11 >> 0x1f ^ 0x3fffffff;
      }
      *puVar10 = uVar4;
      iVar19 = iVar19 + (int)((ulonglong)((longlong)(iVar7 + iVar13 * -2) * (longlong)(int)uVar20)
                             >> 0x20);
      if (iVar19 >> 0x1f == iVar19 >> (uVar16 & 0xff)) {
        uVar20 = iVar19 << (uVar15 & 0xff);
      }
      else {
        uVar20 = iVar19 >> 0x1f ^ 0x3fffffff;
      }
      *param_2 = uVar20;
      uVar20 = puVar10[-1];
      iVar7 = *piVar6;
      iVar13 = piVar6[1];
      piVar6 = piVar6 + iVar2 + 1;
      iVar11 = (int)((ulonglong)((longlong)iVar13 * (longlong)(int)(uVar20 - uVar18)) >> 0x20);
      iVar19 = iVar11 - (int)((ulonglong)((longlong)iVar7 * (longlong)(int)-uVar18) >> 0x20);
      iVar7 = iVar7 + iVar13 * -2;
      if (iVar19 >> 0x1f == iVar19 >> (uVar16 & 0xff)) {
        uVar18 = iVar19 << (uVar15 & 0xff);
      }
      else {
        uVar18 = iVar19 >> 0x1f ^ 0x3fffffff;
      }
      puVar10[-1] = uVar18;
      puVar10 = puVar10 + -2;
      iVar11 = iVar11 + (int)((ulonglong)((longlong)iVar7 * (longlong)(int)uVar20) >> 0x20);
      if (iVar11 >> 0x1f == iVar11 >> (uVar16 & 0xff)) {
        uVar18 = iVar11 << (uVar15 & 0xff);
      }
      else {
        uVar18 = iVar11 >> 0x1f ^ 0x3fffffff;
      }
      iVar17 = iVar17 + -1;
      param_2[1] = uVar18;
      iVar7 = iVar7 + iVar13 * 2;
      param_2 = param_2 + 2;
    } while (iVar17 != 0);
  }
  else {
    iVar17 = *(int *)(&DAT_0003b00c + param_1 * 4) >> 2;
    if (iVar17 == 0) {
LAB_00024c08:
      raac_R4FFT(param_1,(int *)param_2);
      return;
    }
    puVar10 = param_2 + *(int *)(&DAT_0003b00c + param_1 * 4) + -1;
    piVar6 = (int *)(raac_cos4sin4tab + *(int *)((int)&raac_cos4sin4tabOffset + param_1 * 4) * 4);
    puVar3 = param_2;
    puVar5 = puVar10;
    iVar13 = iVar17;
    do {
      uVar18 = *puVar5;
      iVar11 = *piVar6;
      piVar1 = piVar6 + 1;
      iVar7 = piVar6[2];
      iVar19 = piVar6[3];
      piVar6 = piVar6 + 4;
      uVar15 = puVar5[-1];
      uVar16 = puVar3[1];
      iVar2 = (int)((ulonglong)((longlong)*piVar1 * (longlong)(int)(*puVar3 + uVar18)) >> 0x20);
      *puVar3 = iVar2 + (int)((ulonglong)
                              ((longlong)(iVar11 + *piVar1 * -2) * (longlong)(int)*puVar3) >> 0x20);
      puVar3[1] = (int)((ulonglong)((longlong)iVar11 * (longlong)(int)uVar18) >> 0x20) - iVar2;
      puVar3 = puVar3 + 2;
      iVar2 = (int)((ulonglong)((longlong)iVar19 * (longlong)(int)(uVar16 + uVar15)) >> 0x20);
      iVar13 = iVar13 + -1;
      *puVar5 = (int)((ulonglong)((longlong)iVar7 * (longlong)(int)uVar16) >> 0x20) - iVar2;
      puVar5[-1] = iVar2 + (int)((ulonglong)
                                 ((longlong)(iVar7 + iVar19 * -2) * (longlong)(int)uVar15) >> 0x20);
      puVar5 = puVar5 + -2;
    } while (iVar13 != 0);
    raac_R4FFT(param_1,(int *)param_2);
    iVar11 = *(int *)(&DAT_0003b004 + param_1 * 4);
    iVar2 = 0x40000000;
    iVar7 = 0;
    piVar6 = (int *)(raac_cos1sin1tab + iVar11 * 4 + 4);
    iVar13 = 0x40000000;
    do {
      uVar16 = *param_2;
      uVar18 = puVar10[-1];
      uVar15 = *puVar10;
      iVar7 = (int)((ulonglong)((longlong)iVar7 * (longlong)(int)(uVar16 + param_2[1])) >> 0x20);
      *puVar10 = iVar7 - (int)((ulonglong)((longlong)iVar2 * (longlong)(int)param_2[1]) >> 0x20);
      *param_2 = iVar7 + (int)((ulonglong)((longlong)iVar13 * (longlong)(int)uVar16) >> 0x20);
      iVar2 = *piVar6;
      iVar7 = piVar6[1];
      piVar6 = piVar6 + iVar11 + 1;
      iVar19 = (int)((ulonglong)((longlong)iVar7 * (longlong)(int)(uVar18 - uVar15)) >> 0x20);
      iVar13 = iVar2 + iVar7 * -2;
      puVar10[-1] = iVar19 - (int)((ulonglong)((longlong)iVar2 * (longlong)(int)-uVar15) >> 0x20);
      puVar10 = puVar10 + -2;
      iVar17 = iVar17 + -1;
      param_2[1] = iVar19 + (int)((ulonglong)((longlong)iVar13 * (longlong)(int)uVar18) >> 0x20);
      param_2 = param_2 + 2;
    } while (iVar17 != 0);
  }
  return;
}



void raac_R4FFT(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  byte *unaff_r9;
  undefined4 uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined1 *puVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int local_5c;
  int *local_40;
  int local_3c;
  
  iVar7 = *(int *)((int)&raac_bitrevtabOffset + param_1 * 4);
  uVar10 = *(uint *)(&DAT_0003b014 + param_1 * 4);
  puVar26 = raac_bitrevtab + iVar7;
  uVar8 = (uint)(byte)raac_bitrevtab[iVar7];
  iVar11 = *(int *)(&DAT_0003b01c + param_1 * 4);
  if (uVar8 == 0) {
    unaff_r9 = raac_bitrevtab + iVar7 + 1;
  }
  iVar7 = (int)param_2 + (4 << (uVar10 & 0xff));
  if (uVar8 != 0) {
    do {
      uVar2 = (uint)(byte)puVar26[1];
      iVar4 = uVar8 * 0x10;
      iVar15 = param_2[uVar8 * 4];
      iVar12 = uVar2 * 0x10;
      iVar23 = param_2[uVar8 * 4 + 1];
      param_2[uVar8 * 4] = param_2[uVar2 * 4];
      unaff_r9 = puVar26 + 3;
      param_2[uVar8 * 4 + 1] = param_2[uVar2 * 4 + 1];
      param_2[uVar2 * 4] = iVar15;
      param_2[uVar2 * 4 + 1] = iVar23;
      iVar15 = param_2[uVar8 * 4 + 2];
      iVar23 = param_2[uVar8 * 4 + 3];
      param_2[uVar8 * 4 + 2] = *(int *)(iVar7 + uVar2 * 0x10);
      param_2[uVar8 * 4 + 3] = *(int *)(iVar7 + iVar12 + 4);
      *(int *)(iVar7 + uVar2 * 0x10) = iVar15;
      *(int *)(iVar7 + iVar12 + 4) = iVar23;
      iVar15 = *(int *)(iVar7 + iVar4 + 4);
      iVar23 = *(int *)(iVar7 + uVar8 * 0x10);
      *(int *)(iVar7 + uVar8 * 0x10) = param_2[uVar2 * 4 + 2];
      *(int *)(iVar7 + iVar4 + 4) = param_2[uVar2 * 4 + 3];
      param_2[uVar2 * 4 + 2] = iVar23;
      param_2[uVar2 * 4 + 3] = iVar15;
      uVar3 = *(undefined4 *)(iVar7 + iVar4 + 8);
      uVar20 = *(undefined4 *)(iVar7 + iVar4 + 0xc);
      *(undefined4 *)(iVar7 + iVar4 + 8) = *(undefined4 *)(iVar7 + iVar12 + 8);
      *(undefined4 *)(iVar7 + iVar4 + 0xc) = *(undefined4 *)(iVar7 + iVar12 + 0xc);
      *(undefined4 *)(iVar7 + iVar12 + 8) = uVar3;
      *(undefined4 *)(iVar7 + iVar12 + 0xc) = uVar20;
      uVar8 = (uint)(byte)puVar26[2];
      puVar26 = puVar26 + 2;
    } while (uVar8 != 0);
  }
  uVar8 = 0;
  do {
    iVar4 = uVar8 * 0x10 + 4;
    iVar15 = param_2[uVar8 * 4 + 2];
    iVar12 = param_2[uVar8 * 4 + 3];
    param_2[uVar8 * 4 + 2] = *(int *)(iVar7 + uVar8 * 0x10);
    param_2[uVar8 * 4 + 3] = *(int *)(iVar7 + iVar4);
    *(int *)(iVar7 + uVar8 * 0x10) = iVar15;
    *(int *)(iVar7 + iVar4) = iVar12;
    uVar8 = (uint)*unaff_r9;
    unaff_r9 = unaff_r9 + 1;
  } while (uVar8 != 0);
  if ((uVar10 & 1) == 0) {
    iVar7 = iVar11 >> 2;
    piVar5 = param_2;
    while (iVar7 != 0) {
      iVar7 = iVar7 + -1;
      iVar18 = *piVar5 + piVar5[2];
      iVar27 = *piVar5 - piVar5[2];
      iVar23 = piVar5[1] + piVar5[3];
      iVar4 = piVar5[1] - piVar5[3];
      iVar16 = piVar5[4] + piVar5[6];
      iVar15 = piVar5[5] + piVar5[7];
      iVar12 = piVar5[4] - piVar5[6];
      iVar19 = piVar5[5] - piVar5[7];
      *piVar5 = iVar18 + iVar16;
      piVar5[4] = iVar18 - iVar16;
      piVar5[1] = iVar23 + iVar15;
      piVar5[5] = iVar23 - iVar15;
      piVar5[2] = iVar27 + iVar19;
      piVar5[6] = iVar27 - iVar19;
      piVar5[3] = iVar4 - iVar12;
      piVar5[7] = iVar4 + iVar12;
      piVar5 = piVar5 + 8;
    }
    iVar7 = 4;
    iVar11 = iVar11 >> 4;
    puVar26 = raac_twidTabEven;
  }
  else {
    iVar7 = iVar11 >> 3;
    piVar5 = param_2;
    while (iVar7 != 0) {
      iVar18 = *piVar5 + piVar5[2];
      iVar13 = *piVar5 - piVar5[2];
      iVar28 = piVar5[1] - piVar5[3];
      iVar19 = piVar5[1] + piVar5[3];
      iVar21 = piVar5[8] - piVar5[10];
      iVar24 = piVar5[8] + piVar5[10];
      iVar4 = iVar19 - (piVar5[5] + piVar5[7]) >> 1;
      iVar12 = iVar18 - (piVar5[4] + piVar5[6]) >> 1;
      iVar25 = piVar5[9] + piVar5[0xb];
      iVar29 = piVar5[9] - piVar5[0xb];
      iVar27 = piVar5[0xc] + piVar5[0xe];
      iVar22 = piVar5[0xc] - piVar5[0xe];
      iVar16 = piVar5[0xd] + piVar5[0xf];
      iVar30 = piVar5[0xd] - piVar5[0xf];
      iVar14 = iVar29 + iVar22;
      iVar15 = iVar25 + iVar16 >> 1;
      iVar17 = iVar21 - iVar30;
      iVar23 = iVar24 + iVar27 >> 1;
      iVar16 = iVar25 - iVar16 >> 1;
      iVar18 = iVar18 + piVar5[4] + piVar5[6] >> 1;
      iVar19 = iVar19 + piVar5[5] + piVar5[7] >> 1;
      iVar27 = iVar24 - iVar27 >> 1;
      iVar24 = piVar5[4];
      piVar5[0xc] = iVar12 - iVar16;
      iVar25 = piVar5[5];
      *piVar5 = iVar23 + iVar18;
      iVar21 = iVar21 + iVar30;
      piVar5[8] = iVar18 - iVar23;
      piVar5[1] = iVar15 + iVar19;
      iVar29 = iVar29 - iVar22;
      piVar5[9] = iVar19 - iVar15;
      piVar5[4] = iVar16 + iVar12;
      piVar5[5] = iVar4 - iVar27;
      piVar5[0xd] = iVar27 + iVar4;
      iVar16 = (int)((ulonglong)((longlong)(iVar17 - iVar14) * 0x5a82799a) >> 0x20);
      iVar18 = (int)((ulonglong)((longlong)(iVar17 + iVar14) * 0x5a82799a) >> 0x20);
      iVar19 = (int)((ulonglong)((longlong)(iVar21 - iVar29) * 0x5a82799a) >> 0x20);
      iVar27 = (int)((ulonglong)((longlong)(iVar21 + iVar29) * 0x5a82799a) >> 0x20);
      iVar4 = iVar13 - (iVar25 - piVar5[7]) >> 1;
      iVar7 = iVar7 + -1;
      iVar12 = iVar28 + (iVar24 - piVar5[6]) >> 1;
      iVar15 = iVar28 - (iVar24 - piVar5[6]) >> 1;
      iVar23 = iVar13 + (iVar25 - piVar5[7]) >> 1;
      piVar5[6] = iVar4 - iVar16;
      piVar5[0xe] = iVar16 + iVar4;
      piVar5[7] = iVar12 - iVar18;
      piVar5[0xf] = iVar18 + iVar12;
      piVar5[2] = iVar27 + iVar23;
      piVar5[10] = iVar23 - iVar27;
      piVar5[3] = iVar15 - iVar19;
      piVar5[0xb] = iVar19 + iVar15;
      piVar5 = piVar5 + 0x10;
    }
    iVar7 = 8;
    iVar11 = iVar11 >> 5;
    puVar26 = raac_twidTabOdd;
  }
  while (iVar11 != 0) {
    local_40 = param_2;
    local_3c = iVar11;
    do {
      if (iVar7 != 0) {
        piVar5 = (int *)puVar26;
        piVar6 = local_40;
        piVar9 = local_40 + iVar7 * 4;
        local_5c = iVar7;
        do {
          iVar16 = (int)((ulonglong)
                         ((longlong)piVar5[1] *
                         (longlong)(piVar6[iVar7 * 2] + piVar6[iVar7 * 2 + 1])) >> 0x20);
          iVar25 = (int)((ulonglong)
                         ((longlong)(*piVar5 + piVar5[1] * 2) * (longlong)piVar6[iVar7 * 2]) >> 0x20
                        ) - iVar16;
          iVar16 = iVar16 + (int)((ulonglong)((longlong)*piVar5 * (longlong)piVar6[iVar7 * 2 + 1])
                                 >> 0x20);
          iVar12 = (int)((ulonglong)
                         ((longlong)piVar5[3] *
                         (longlong)(piVar6[iVar7 * 4] + piVar6[iVar7 * 4 + 1])) >> 0x20);
          iVar23 = (int)((ulonglong)
                         ((longlong)(piVar5[2] + piVar5[3] * 2) * (longlong)piVar6[iVar7 * 4]) >>
                        0x20) - iVar12;
          iVar12 = iVar12 + (int)((ulonglong)((longlong)piVar5[2] * (longlong)piVar6[iVar7 * 4 + 1])
                                 >> 0x20);
          iVar18 = (piVar9 + iVar7 * 2)[1];
          iVar4 = (int)((ulonglong)((longlong)piVar5[5] * (longlong)(piVar9[iVar7 * 2] + iVar18)) >>
                       0x20);
          iVar15 = (int)((ulonglong)
                         ((longlong)(piVar5[4] + piVar5[5] * 2) * (longlong)piVar9[iVar7 * 2]) >>
                        0x20) - iVar4;
          iVar4 = iVar4 + (int)((ulonglong)((longlong)piVar5[4] * (longlong)iVar18) >> 0x20);
          piVar1 = piVar6 + 1;
          iVar27 = *piVar6;
          piVar5 = piVar5 + 6;
          piVar6 = piVar6 + 2;
          local_5c = local_5c + -1;
          iVar18 = iVar23 + iVar15;
          iVar19 = (*piVar1 >> 2) - iVar16;
          iVar16 = iVar16 + (*piVar1 >> 2);
          iVar23 = iVar23 - iVar15;
          iVar22 = (iVar27 >> 2) - iVar25;
          iVar25 = iVar25 + (iVar27 >> 2);
          iVar15 = iVar4 - iVar12;
          iVar12 = iVar12 + iVar4;
          piVar9[iVar7 * 2] = iVar22 + iVar15;
          (piVar9 + iVar7 * 2)[1] = iVar19 + iVar23;
          *piVar9 = iVar25 - iVar18;
          piVar9[1] = iVar16 - iVar12;
          piVar9[iVar7 * -2] = iVar22 - iVar15;
          (piVar9 + iVar7 * -2)[1] = iVar19 - iVar23;
          piVar9[iVar7 * -4] = iVar25 + iVar18;
          piVar9[iVar7 * -4 + 1] = iVar16 + iVar12;
          piVar9 = piVar9 + 2;
        } while (local_5c != 0);
        local_40 = local_40 + iVar7 * 2;
      }
      local_3c = local_3c + -1;
      local_40 = local_40 + iVar7 * 6;
    } while (local_3c != 0);
    iVar11 = iVar11 >> 2;
    puVar26 = (undefined1 *)((int)puVar26 + iVar7 * 6 * 4);
    iVar7 = iVar7 * 4;
  }
  return;
}



byte * raac_DecodeHuffmanScalar(int param_1,int param_2,uint param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  
  iVar2 = 0;
  uVar5 = 0x20;
  iVar4 = param_1 + *(int *)(param_2 + 0x18) * 2;
  uVar1 = 0;
  pbVar6 = (byte *)(param_2 + 4);
  do {
    iVar3 = iVar2 + uVar1;
    iVar4 = iVar4 + uVar1 * 2;
    uVar5 = uVar5 - 1;
    pbVar7 = pbVar6 + 1;
    uVar1 = (uint)*pbVar6;
    iVar2 = iVar3 * 2;
    uVar8 = (param_3 >> (uVar5 & 0xff)) + iVar3 * -2;
    pbVar6 = pbVar7;
  } while (uVar1 <= uVar8);
  *param_4 = (int)*(short *)(iVar4 + uVar8 * 2);
  return pbVar7 + -(int)(byte *)(param_2 + 4);
}



void FUN_000253c0(byte **param_1,int param_2,int param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int local_2c [2];
  
  iVar1 = (param_2 + -1) * 0x1c;
  iVar4 = *(int *)(raac_huffTabSpecInfo + iVar1);
  if (0 < param_3) {
    do {
      param_3 = param_3 + -4;
      uVar2 = raac_GetBitsNoAdvance(param_1,iVar4 + 4);
      uVar2 = uVar2 << (0x1cU - iVar4 & 0xff);
      pbVar3 = raac_DecodeHuffmanScalar
                         ((int)raac_huffTabSpec,(int)(raac_huffTabSpecInfo + iVar1),uVar2,local_2c);
      uVar10 = (uint)(local_2c[0] << 0x11) >> 0x1d;
      uVar9 = (local_2c[0] << 0x14) >> 0x1d;
      uVar7 = (local_2c[0] << 0x17) >> 0x1d;
      uVar6 = (local_2c[0] << 0x1a) >> 0x1d;
      uVar5 = (local_2c[0] << 0x1d) >> 0x1d;
      raac_AdvanceBitstream(param_1,(uint)(pbVar3 + uVar10));
      iVar8 = uVar2 << ((uint)pbVar3 & 0xff);
      if (uVar10 != 0) {
        if (uVar9 != 0) {
          uVar9 = (uVar9 ^ iVar8 >> 0x1f) - (iVar8 >> 0x1f);
          iVar8 = iVar8 << 1;
        }
        if (uVar7 != 0) {
          uVar7 = (uVar7 ^ iVar8 >> 0x1f) - (iVar8 >> 0x1f);
          iVar8 = iVar8 << 1;
        }
        if (uVar6 != 0) {
          uVar6 = (uVar6 ^ iVar8 >> 0x1f) - (iVar8 >> 0x1f);
          iVar8 = iVar8 << 1;
        }
        if (uVar5 != 0) {
          uVar5 = (uVar5 ^ iVar8 >> 0x1f) - (iVar8 >> 0x1f);
        }
      }
      *param_4 = uVar9;
      param_4[1] = uVar7;
      param_4[2] = uVar6;
      param_4[3] = uVar5;
      param_4 = param_4 + 4;
    } while (0 < param_3);
  }
  return;
}



void FUN_000254e4(byte **param_1,int param_2,int param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int local_2c [2];
  
  iVar1 = (param_2 + -1) * 0x1c;
  iVar4 = *(int *)(raac_huffTabSpecInfo + iVar1);
  if (0 < param_3) {
    do {
      uVar2 = raac_GetBitsNoAdvance(param_1,iVar4 + 2);
      param_3 = param_3 + -2;
      uVar2 = uVar2 << (0x1eU - iVar4 & 0xff);
      pbVar3 = raac_DecodeHuffmanScalar
                         ((int)raac_huffTabSpec,(int)(raac_huffTabSpecInfo + iVar1),uVar2,local_2c);
      uVar8 = (uint)(local_2c[0] << 0x14) >> 0x1e;
      uVar7 = (local_2c[0] << 0x16) >> 0x1b;
      uVar6 = (local_2c[0] << 0x1b) >> 0x1b;
      iVar5 = uVar2 << ((uint)pbVar3 & 0xff);
      raac_AdvanceBitstream(param_1,(uint)(pbVar3 + uVar8));
      if (uVar8 != 0) {
        if (uVar7 != 0) {
          uVar7 = (uVar7 ^ iVar5 >> 0x1f) - (iVar5 >> 0x1f);
          iVar5 = iVar5 << 1;
        }
        if (uVar6 != 0) {
          uVar6 = (uVar6 ^ iVar5 >> 0x1f) - (iVar5 >> 0x1f);
        }
      }
      *param_4 = uVar7;
      param_4[1] = uVar6;
      param_4 = param_4 + 2;
    } while (0 < param_3);
  }
  return;
}



void FUN_000255d0(byte **param_1,int param_2,int param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int local_2c [2];
  
  iVar1 = (param_2 + -1) * 0x1c;
  iVar4 = *(int *)(raac_huffTabSpecInfo + iVar1);
  if (0 < param_3) {
    do {
      uVar2 = raac_GetBitsNoAdvance(param_1,iVar4 + 2);
      uVar2 = uVar2 << (0x1eU - iVar4 & 0xff);
      pbVar3 = raac_DecodeHuffmanScalar
                         ((int)raac_huffTabSpec,(int)(raac_huffTabSpecInfo + iVar1),uVar2,local_2c);
      uVar7 = (uint)(local_2c[0] << 0x12) >> 0x1e;
      uVar8 = (local_2c[0] << 0x14) >> 0x1a;
      uVar6 = (local_2c[0] << 0x1a) >> 0x1a;
      raac_AdvanceBitstream(param_1,(uint)(pbVar3 + uVar7));
      if (uVar8 == 0x10) {
        uVar9 = 4;
        while (uVar8 = raac_GetBits(param_1,1), uVar8 == 1) {
          uVar9 = uVar9 + 1;
        }
        uVar8 = raac_GetBits(param_1,uVar9);
        uVar8 = uVar8 + (1 << (uVar9 & 0xff));
      }
      if (uVar6 == 0x10) {
        uVar9 = 4;
        while (uVar6 = raac_GetBits(param_1,1), uVar6 == 1) {
          uVar9 = uVar9 + 1;
        }
        uVar6 = raac_GetBits(param_1,uVar9);
        uVar6 = uVar6 + (1 << (uVar9 & 0xff));
      }
      if (uVar7 != 0) {
        iVar5 = uVar2 << ((uint)pbVar3 & 0xff);
        if (uVar8 != 0) {
          uVar8 = (uVar8 ^ iVar5 >> 0x1f) - (iVar5 >> 0x1f);
          iVar5 = iVar5 << 1;
        }
        if (uVar6 != 0) {
          uVar6 = (uVar6 ^ iVar5 >> 0x1f) - (iVar5 >> 0x1f);
        }
      }
      param_3 = param_3 + -2;
      *param_4 = uVar8;
      param_4[1] = uVar6;
      param_4 = param_4 + 2;
    } while (0 < param_3);
  }
  return;
}



uint raac_DecodeSpectrumLong(int param_1,byte **param_2,int param_3)

{
  short *psVar1;
  short *psVar2;
  byte bVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  
  puVar14 = (uint *)(param_1 + param_3 * 0x1000 + 0x1048);
  if ((param_3 == 1) && (*(int *)(param_1 + 0x8f0) == 1)) {
    iVar13 = param_1 + 0x87c;
  }
  else {
    iVar13 = param_3 * 0x3a + param_1 + 0x87c;
  }
  uVar5 = (uint)*(byte *)(iVar13 + 3);
  iVar10 = *(int *)(raac_sfBandTabLongOffset + *(int *)(param_1 + 0x878) * 4) * 2;
  puVar4 = raac_sfBandTabLong + iVar10;
  puVar8 = puVar14;
  if (uVar5 == 0) {
LAB_000258c0:
    iVar13 = 0x400 - *(short *)(puVar4 + uVar5);
    while (0 < iVar13) {
      iVar13 = iVar13 + -4;
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8 = puVar8 + 4;
    }
    iVar13 = param_1 + param_3 * 0xb + 0xbe8;
    uVar5 = (uint)*(byte *)(iVar13 + 4);
    if (uVar5 != 0) {
      iVar10 = (int)*(short *)(puVar4 + (uint)*(byte *)(iVar13 + 6) * 2);
      if (*(char *)(iVar13 + 5) == '\0') {
        if (iVar10 < 0x400) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0xffffffe9;
        }
      }
      else {
        iVar9 = 0;
        iVar12 = iVar13 + 4;
        do {
          iVar9 = iVar9 + 1;
          iVar10 = iVar10 + (uint)*(byte *)(iVar12 + 3);
          uVar5 = (uint)*(byte *)(iVar12 + 7);
          if ((int)puVar14[iVar10] < 1) {
            uVar5 = -uVar5;
          }
          puVar14[iVar10] = puVar14[iVar10] + uVar5;
          if (0x3ff < iVar10) {
            return 0xffffffe9;
          }
          iVar12 = iVar12 + 1;
        } while (iVar9 < (int)(uint)*(byte *)(iVar13 + 5));
        uVar5 = 0;
      }
    }
  }
  else {
    iVar10 = (int)*(short *)(raac_sfBandTabLong + iVar10 + 2) -
             (int)*(short *)(raac_sfBandTabLong + iVar10);
    iVar12 = param_1 + param_3 * 0x78;
    bVar3 = *(byte *)(iVar12 + 0xad4);
    if (0 < iVar10) {
      iVar9 = 0;
      puVar11 = puVar4;
      do {
        uVar5 = (uint)bVar3;
        iVar6 = iVar10;
        puVar7 = puVar8;
        if (uVar5 == 0) {
          do {
            iVar6 = iVar6 + -4;
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar7[3] = 0;
            puVar7 = puVar7 + 4;
          } while (0 < iVar6);
LAB_00025824:
          if ((int)(uint)*(byte *)(iVar13 + 3) <= iVar9 + 1) {
LAB_000258b8:
            uVar5 = (iVar9 + 1) * 2;
            puVar8 = puVar8 + iVar10;
            goto LAB_000258c0;
          }
        }
        else {
          if (uVar5 < 5) {
            FUN_000253c0(param_2,uVar5,iVar10,puVar8);
            goto LAB_00025824;
          }
          if (uVar5 < 0xb) {
            FUN_000254e4(param_2,uVar5,iVar10,puVar8);
            goto LAB_00025824;
          }
          if (uVar5 == 0xb) {
            FUN_000255d0(param_2,0xb,iVar10,puVar8);
            goto LAB_00025824;
          }
          do {
            iVar6 = iVar6 + -4;
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar7[3] = 0;
            puVar7 = puVar7 + 4;
          } while (0 < iVar6);
          if ((int)(uint)*(byte *)(iVar13 + 3) <= iVar9 + 1) goto LAB_000258b8;
        }
        puVar8 = puVar8 + iVar10;
        iVar9 = iVar9 + 1;
        psVar1 = (short *)(puVar11 + 4);
        psVar2 = (short *)(puVar11 + 2);
        puVar11 = puVar11 + 2;
        bVar3 = *(byte *)(iVar12 + 0xad4 + iVar9);
        iVar10 = (int)*psVar1 - (int)*psVar2;
      } while (0 < iVar10);
    }
    uVar5 = 0xffffffe8;
  }
  return uVar5;
}



undefined4 raac_DecodeSpectrumShort(int param_1,byte **param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int unaff_r8;
  uint *puVar9;
  byte *pbVar10;
  uint uVar11;
  short *psVar12;
  byte *local_4c;
  short *local_48;
  int local_40;
  byte *local_3c;
  int local_2c;
  
  puVar9 = (uint *)(param_1 + param_3 * 0x1000 + 0x1048);
  if ((param_3 == 1) && (*(int *)(param_1 + 0x8f0) == 1)) {
    local_40 = param_1 + 0x87c;
  }
  else {
    local_40 = param_3 * 0x3a + param_1 + 0x87c;
  }
  iVar1 = *(int *)(raac_sfBandTabShortOffset + *(int *)(param_1 + 0x878) * 4);
  psVar12 = (short *)(raac_sfBandTabShort + iVar1 * 2);
  if (*(char *)(local_40 + 0x31) != '\0') {
    pbVar10 = (byte *)(local_40 + 0x31);
    local_2c = 0;
    local_3c = (byte *)(param_1 + param_3 * 0x78 + 0xad4);
    do {
      uVar4 = (uint)*(byte *)(local_40 + 3);
      uVar11 = uVar4;
      if (uVar4 != 0) {
        unaff_r8 = (int)*(short *)(raac_sfBandTabShort + iVar1 * 2 + 2) - (int)*psVar12;
        if (unaff_r8 < 1) {
          return 0xffffffe8;
        }
        uVar11 = 0;
        local_4c = local_3c;
        local_48 = psVar12;
        do {
          local_3c = local_4c + 1;
          uVar8 = (uint)*local_4c;
          if (pbVar10[1] != 0) {
            iVar6 = 0;
            puVar7 = puVar9;
            do {
              while( true ) {
                while (iVar3 = unaff_r8, puVar5 = puVar7, uVar8 == 0) {
                  do {
                    iVar3 = iVar3 + -4;
                    *puVar5 = 0;
                    puVar5[1] = 0;
                    puVar5[2] = 0;
                    puVar5[3] = 0;
                    puVar5 = puVar5 + 4;
                  } while (0 < iVar3);
                  iVar6 = iVar6 + 1;
                  puVar7 = puVar7 + 0x80;
                  if ((int)(uint)pbVar10[1] <= iVar6) goto LAB_00025b54;
                }
                if (uVar8 < 5) break;
                if (uVar8 < 0xb) {
                  FUN_000254e4(param_2,uVar8,unaff_r8,puVar7);
                  iVar6 = iVar6 + 1;
                  puVar7 = puVar7 + 0x80;
                  if ((int)(uint)pbVar10[1] <= iVar6) goto LAB_00025b54;
                }
                else {
                  if (uVar8 == 0xb) {
                    FUN_000255d0(param_2,0xb,unaff_r8,puVar7);
                    iVar6 = iVar6 + 1;
                    puVar7 = puVar7 + 0x80;
                    if ((int)(uint)pbVar10[1] <= iVar6) goto LAB_00025b54;
                  }
                  else {
                    do {
                      iVar3 = iVar3 + -4;
                      *puVar5 = 0;
                      puVar5[1] = 0;
                      puVar5[2] = 0;
                      puVar5[3] = 0;
                      puVar5 = puVar5 + 4;
                    } while (0 < iVar3);
                    iVar6 = iVar6 + 1;
                    puVar7 = puVar7 + 0x80;
                    if ((int)(uint)pbVar10[1] <= iVar6) goto LAB_00025b54;
                  }
                }
              }
              FUN_000253c0(param_2,uVar8,unaff_r8,puVar7);
              iVar6 = iVar6 + 1;
              puVar7 = puVar7 + 0x80;
            } while (iVar6 < (int)(uint)pbVar10[1]);
LAB_00025b54:
            uVar4 = (uint)*(byte *)(local_40 + 3);
          }
          uVar11 = uVar11 + 1;
          puVar9 = puVar9 + unaff_r8;
          if ((int)uVar4 <= (int)uVar11) break;
          unaff_r8 = (int)local_48[2] - (int)local_48[1];
          local_4c = local_3c;
          local_48 = local_48 + 1;
          if (unaff_r8 < 1) {
            return 0xffffffe8;
          }
        } while( true );
      }
      pbVar10 = pbVar10 + 1;
      uVar4 = (uint)*pbVar10;
      if (uVar4 != 0) {
        iVar3 = 0;
        unaff_r8 = 0x80 - psVar12[uVar11];
        iVar6 = unaff_r8;
        puVar7 = puVar9;
        puVar5 = puVar9;
        do {
          while (0 < iVar6) {
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar7[3] = 0;
            iVar6 = iVar6 + -4;
            puVar7 = puVar7 + 4;
          }
          uVar4 = (uint)*pbVar10;
          iVar3 = iVar3 + 1;
          puVar7 = puVar5 + 0x80;
          iVar6 = unaff_r8;
          puVar5 = puVar7;
        } while (iVar3 < (int)uVar4);
      }
      local_2c = local_2c + 1;
      puVar9 = puVar9 + unaff_r8 + (uVar4 - 1) * 0x80;
    } while (local_2c < (int)(uint)*(byte *)(local_40 + 0x31));
  }
  if (puVar9 == (uint *)(param_1 + param_3 * 0x1000 + 0x2048)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffe9;
  }
  return uVar2;
}



void raac_FFT32C(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_38;
  int local_34;
  
  local_4c = param_1[0x31];
  local_48 = param_1[0x20];
  iVar9 = param_1[0x18];
  param_1[0x18] = param_1[0xc];
  iVar5 = param_1[0xd];
  local_44 = param_1[0x21];
  iVar3 = param_1[2];
  local_38 = param_1[0x10];
  local_34 = param_1[0x11];
  local_50 = param_1[0x30];
  param_1[2] = local_48;
  iVar2 = param_1[3];
  iVar18 = param_1[7];
  iVar14 = param_1[5];
  iVar16 = param_1[6];
  iVar12 = param_1[0x28];
  iVar10 = param_1[0x29];
  param_1[3] = local_44;
  param_1[0x10] = param_1[4];
  param_1[4] = local_38;
  iVar6 = param_1[0x17];
  param_1[0x20] = iVar3;
  param_1[0x21] = iVar2;
  param_1[7] = local_4c;
  iVar21 = param_1[0x19];
  iVar7 = param_1[0x1b];
  param_1[5] = local_34;
  param_1[0x11] = iVar14;
  param_1[6] = local_50;
  param_1[0x30] = iVar16;
  param_1[0x31] = iVar18;
  iVar18 = param_1[0x12];
  param_1[0x28] = param_1[10];
  param_1[0x29] = param_1[0xb];
  iVar16 = param_1[0x13];
  iVar2 = param_1[0x38];
  iVar3 = param_1[0x39];
  param_1[10] = iVar12;
  param_1[0xb] = iVar10;
  param_1[0xc] = iVar9;
  param_1[0xd] = iVar21;
  param_1[0x39] = param_1[0xf];
  param_1[0x19] = iVar5;
  param_1[0x38] = param_1[0xe];
  param_1[0x12] = param_1[0x24];
  param_1[0x13] = param_1[0x25];
  iVar5 = param_1[0x2f];
  iVar14 = param_1[0x34];
  param_1[0x24] = iVar18;
  param_1[0x25] = iVar16;
  iVar16 = param_1[0x2c];
  param_1[0x34] = param_1[0x16];
  param_1[0x2c] = param_1[0x1a];
  param_1[0x16] = iVar14;
  param_1[0x17] = param_1[0x35];
  param_1[0x35] = iVar6;
  param_1[0x1a] = iVar16;
  param_1[0x1b] = param_1[0x2d];
  iVar16 = param_1[0x26];
  iVar14 = param_1[0x27];
  param_1[0xe] = iVar2;
  param_1[0xf] = iVar3;
  param_1[0x2d] = iVar7;
  iVar6 = param_1[0x3c];
  param_1[0x3c] = param_1[0x1e];
  iVar7 = param_1[0x3a];
  param_1[0x1e] = iVar6;
  iVar6 = param_1[0x3d];
  param_1[0x3a] = param_1[0x2e];
  param_1[0x3d] = param_1[0x1f];
  param_1[0x1f] = iVar6;
  param_1[0x26] = param_1[0x32];
  param_1[0x27] = param_1[0x33];
  param_1[0x32] = iVar16;
  param_1[0x2f] = param_1[0x3b];
  param_1[0x33] = iVar14;
  param_1[0x2e] = iVar7;
  param_1[0x3b] = iVar5;
  piVar8 = param_1;
  while( true ) {
    iVar14 = piVar8[8] - iVar12;
    iVar12 = piVar8[8] + iVar12;
    iVar7 = piVar8[9] - iVar10;
    iVar6 = iVar14 - (iVar21 - iVar3);
    iVar5 = iVar7 + (iVar9 - iVar2);
    iVar14 = iVar14 + (iVar21 - iVar3);
    iVar7 = iVar7 - (iVar9 - iVar2);
    iVar10 = piVar8[9] + iVar10;
    iVar11 = (int)((ulonglong)((longlong)(iVar6 - iVar5) * 0x5a82799a) >> 0x20);
    iVar1 = (int)((ulonglong)((longlong)(iVar6 + iVar5) * 0x5a82799a) >> 0x20);
    iVar13 = (int)((ulonglong)((longlong)(iVar14 - iVar7) * 0x5a82799a) >> 0x20);
    iVar15 = (int)((ulonglong)((longlong)(iVar14 + iVar7) * 0x5a82799a) >> 0x20);
    local_38 = local_38 + local_50;
    local_34 = local_34 + local_4c;
    iVar16 = piVar8[1] + local_44 + local_34;
    iVar6 = *piVar8 + local_48 + local_38;
    iVar20 = local_38 + local_50 * -2;
    iVar18 = iVar16 + local_34 * -2;
    iVar4 = local_34 + local_4c * -2;
    iVar7 = iVar6 + local_38 * -2;
    iVar5 = iVar7 >> 1;
    iVar19 = local_38 + iVar7 + local_48 * -2;
    iVar17 = local_34 + iVar18 + local_44 * -2;
    iVar6 = iVar6 >> 1;
    iVar7 = iVar12 + iVar9 + iVar2 >> 1;
    iVar14 = iVar10 - (iVar21 + iVar3) >> 1;
    iVar3 = iVar10 + iVar21 + iVar3 >> 1;
    iVar16 = iVar16 >> 1;
    iVar18 = iVar18 >> 1;
    iVar10 = iVar19 + iVar4 >> 1;
    iVar21 = iVar17 - iVar20 >> 1;
    iVar4 = iVar19 - iVar4 >> 1;
    iVar12 = iVar12 - (iVar9 + iVar2) >> 1;
    iVar2 = iVar20 + iVar17 >> 1;
    *piVar8 = iVar7 + iVar6;
    piVar8[8] = iVar6 - iVar7;
    piVar8[0xc] = iVar5 - iVar14;
    piVar8[9] = iVar16 - iVar3;
    piVar8[1] = iVar3 + iVar16;
    piVar8[5] = iVar18 - iVar12;
    piVar8[4] = iVar14 + iVar5;
    piVar8[0xd] = iVar12 + iVar18;
    piVar8[2] = iVar15 + iVar10;
    piVar8[3] = iVar21 - iVar13;
    piVar8[6] = iVar4 - iVar11;
    piVar8[7] = iVar2 - iVar1;
    piVar8[10] = iVar10 - iVar15;
    piVar8[0xb] = iVar13 + iVar21;
    piVar8[0xe] = iVar11 + iVar4;
    piVar8[0xf] = iVar1 + iVar2;
    if (piVar8 == param_1 + 0x30) break;
    local_48 = piVar8[0x12];
    local_38 = piVar8[0x14];
    local_50 = piVar8[0x16];
    local_44 = piVar8[0x13];
    local_34 = piVar8[0x15];
    local_4c = piVar8[0x17];
    iVar12 = piVar8[0x1a];
    iVar10 = piVar8[0x1b];
    iVar9 = piVar8[0x1c];
    iVar21 = piVar8[0x1d];
    iVar2 = piVar8[0x1e];
    iVar3 = piVar8[0x1f];
    piVar8 = piVar8 + 0x10;
  }
  piVar8 = &DAT_0003bc1c;
  do {
    iVar12 = (int)((ulonglong)((longlong)piVar8[1] * (longlong)(param_1[0x10] + param_1[0x11])) >>
                  0x20);
    iVar9 = iVar12 + (int)((ulonglong)((longlong)*piVar8 * (longlong)param_1[0x11]) >> 0x20);
    iVar12 = (int)((ulonglong)((longlong)(*piVar8 + piVar8[1] * 2) * (longlong)param_1[0x10]) >>
                  0x20) - iVar12;
    iVar6 = (int)((ulonglong)((longlong)piVar8[3] * (longlong)(param_1[0x20] + param_1[0x21])) >>
                 0x20);
    iVar3 = iVar6 + (int)((ulonglong)((longlong)piVar8[2] * (longlong)param_1[0x21]) >> 0x20);
    iVar6 = (int)((ulonglong)((longlong)(piVar8[2] + piVar8[3] * 2) * (longlong)param_1[0x20]) >>
                 0x20) - iVar6;
    iVar5 = (int)((ulonglong)((longlong)piVar8[5] * (longlong)(param_1[0x30] + param_1[0x31])) >>
                 0x20);
    iVar2 = iVar5 + (int)((ulonglong)((longlong)piVar8[4] * (longlong)param_1[0x31]) >> 0x20);
    iVar5 = (int)((ulonglong)((longlong)(piVar8[4] + piVar8[5] * 2) * (longlong)param_1[0x30]) >>
                 0x20) - iVar5;
    piVar8 = piVar8 + 6;
    iVar7 = iVar2 - iVar3;
    iVar3 = iVar3 + iVar2;
    iVar2 = iVar6 + iVar5;
    iVar6 = iVar6 - iVar5;
    iVar5 = (*param_1 >> 2) - iVar12;
    iVar10 = (param_1[1] >> 2) - iVar9;
    iVar12 = iVar12 + (*param_1 >> 2);
    iVar9 = iVar9 + (param_1[1] >> 2);
    *param_1 = iVar2 + iVar12;
    param_1[1] = iVar3 + iVar9;
    param_1[0x10] = iVar5 - iVar7;
    param_1[0x11] = iVar10 - iVar6;
    param_1[0x20] = iVar12 - iVar2;
    param_1[0x21] = iVar9 - iVar3;
    param_1[0x30] = iVar7 + iVar5;
    param_1[0x31] = iVar6 + iVar10;
    param_1 = param_1 + 2;
  } while (piVar8 != (int *)&DAT_0003bcdc);
  return;
}



int FUN_00026320(byte **param_1,int param_2)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  iVar1 = param_2 * 0x1c;
  uVar3 = raac_GetBitsNoAdvance(param_1,*(uint *)(raac_huffTabSBRInfo + iVar1));
  iVar11 = 0;
  uVar9 = 0x20;
  puVar8 = raac_huffTabSBR + *(int *)(raac_huffTabSBRInfo + iVar1 + 0x18) * 2;
  uVar10 = 0;
  pbVar4 = raac_huffTabSBRInfo + iVar1 + 4;
  do {
    iVar6 = uVar10 + iVar11;
    puVar8 = puVar8 + uVar10 * 2;
    uVar9 = uVar9 - 1;
    pbVar5 = pbVar4 + 1;
    uVar10 = (uint)*pbVar4;
    iVar11 = iVar6 * 2;
    uVar7 = ((uVar3 << (0x20U - *(int *)(raac_huffTabSBRInfo + iVar1) & 0xff)) >> (uVar9 & 0xff)) +
            iVar6 * -2;
    pbVar4 = pbVar5;
  } while (uVar10 <= uVar7);
  sVar2 = *(short *)(puVar8 + uVar7 * 2);
  raac_AdvanceBitstream(param_1,(uint)(pbVar5 + -(int)(raac_huffTabSBRInfo + iVar1 + 4)));
  return (int)sVar2;
}



undefined4
raac_DecodeSBREnvelope(byte **param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int local_58;
  char *local_50;
  int local_4c;
  int local_48;
  int local_38;
  uint local_34;
  
  if (param_6 == 0 || *(int *)(param_2 + 0x4598) == 0) {
    uVar11 = (uint)*(byte *)(param_3 + 1);
    if (uVar11 == 0) {
      local_34 = 7;
      local_38 = 1;
      uVar15 = uVar11;
    }
    else {
      local_34 = 6;
      local_38 = 5;
      uVar11 = 0;
      uVar15 = 4;
    }
  }
  else {
    uVar11 = 1;
    if (*(char *)(param_3 + 1) == '\0') {
      uVar15 = 2;
      local_34 = 6;
      local_38 = 3;
    }
    else {
      uVar15 = 6;
      local_34 = 5;
      local_38 = 7;
    }
  }
  uVar9 = (uint)*(byte *)(param_3 + 3);
  if (uVar9 != 0) {
    local_4c = param_6 * 0x3c0;
    local_48 = param_5;
    local_58 = 0;
    local_50 = (char *)(param_3 + 9);
    do {
      cVar4 = local_50[1];
      if (cVar4 == '\0') {
        iVar12 = *(int *)(param_4 + 0xc);
      }
      else {
        iVar12 = *(int *)(param_4 + 8);
      }
      if (local_58 == 0) {
        cVar1 = *(char *)(param_3 + 0x15);
        if (*(byte *)(param_3 + 0x13) == 0) {
          iVar14 = 0;
        }
        else {
          iVar14 = *(byte *)(param_3 + 0x13) - 1;
        }
      }
      else {
        cVar1 = *local_50;
        iVar14 = local_58 + -1;
      }
      if (0x30 < iVar12) {
        return 0xffffffe9;
      }
      if (*(char *)(param_5 + local_58 + 4) == '\0') {
        uVar9 = raac_GetBits(param_1,local_34);
        *(char *)(local_48 + 0xb) = (char)(uVar9 << uVar11);
        if (1 < iVar12) {
          iVar14 = 1;
          pcVar6 = (char *)(param_5 + local_58 * 0x30 + 10);
          do {
            iVar13 = FUN_00026320(param_1,local_38);
            iVar14 = iVar14 + 1;
            pcVar6[2] = pcVar6[1] + (char)(iVar13 << uVar11);
            pcVar6 = pcVar6 + 1;
          } while (iVar14 != iVar12);
        }
      }
      else {
        if (cVar1 == cVar4) {
          if (0 < iVar12) {
            iVar13 = 0;
            do {
              iVar2 = FUN_00026320(param_1,uVar15);
              iVar10 = param_5 + iVar14 * 0x30 + iVar13;
              iVar16 = local_48 + iVar13;
              iVar13 = iVar13 + 1;
              *(char *)(iVar16 + 0xb) = *(char *)(iVar10 + 0xb) + (char)(iVar2 << uVar11);
            } while (iVar13 != iVar12);
          }
        }
        else {
          if (cVar1 == '\x01' && cVar4 == '\0') {
            if (0 < iVar12) {
              iVar13 = param_4;
              pcVar6 = (char *)(param_5 + local_58 * 0x30 + 0xb);
              do {
                while( true ) {
                  iVar2 = FUN_00026320(param_1,uVar15);
                  cVar4 = (char)(iVar2 << uVar11);
                  *pcVar6 = cVar4;
                  if (*(int *)(param_4 + 8) < 1) break;
                  if (*(char *)(param_4 + 0x55) == *(char *)(iVar13 + 0x86)) {
                    iVar2 = 0;
                  }
                  else {
                    pcVar5 = (char *)(param_4 + 0x55);
                    iVar2 = 0;
                    do {
                      iVar2 = iVar2 + 1;
                      if (iVar2 == *(int *)(param_4 + 8)) goto LAB_00026570;
                      pcVar5 = pcVar5 + 1;
                    } while (*pcVar5 != *(char *)(iVar13 + 0x86));
                  }
                  iVar13 = iVar13 + 1;
                  *pcVar6 = *(char *)(param_5 + iVar14 * 0x30 + iVar2 + 0xb) + cVar4;
                  pcVar6 = pcVar6 + 1;
                  if (iVar13 == param_4 + iVar12) goto LAB_00026580;
                }
LAB_00026570:
                iVar13 = iVar13 + 1;
                pcVar6 = pcVar6 + 1;
              } while (iVar13 != param_4 + iVar12);
            }
          }
          else {
            if ((cVar1 == '\0' && cVar4 == '\x01') && (0 < iVar12)) {
              pcVar6 = (char *)(param_5 + local_58 * 0x30 + 0xb);
              iVar13 = param_4;
              do {
                iVar2 = FUN_00026320(param_1,uVar15);
                cVar4 = (char)(iVar2 << uVar11);
                *pcVar6 = cVar4;
                if (0 < *(int *)(param_4 + 0xc)) {
                  pbVar8 = (byte *)(param_4 + 0x85);
                  iVar2 = 0;
                  do {
                    iVar10 = iVar2 + 1;
                    if ((pbVar8[1] <= *(byte *)(iVar13 + 0x55)) &&
                       (*(byte *)(iVar13 + 0x55) < pbVar8[2])) {
                      *pcVar6 = *(char *)(param_5 + iVar14 * 0x30 + iVar2 + 0xb) + cVar4;
                      break;
                    }
                    pbVar8 = pbVar8 + 1;
                    iVar2 = iVar10;
                  } while (iVar10 < *(int *)(param_4 + 0xc));
                }
                iVar13 = iVar13 + 1;
                pcVar6 = pcVar6 + 1;
              } while (iVar13 != param_4 + iVar12);
            }
          }
        }
      }
LAB_00026580:
      if ((param_6 != 1) || (*(int *)(param_2 + 0x4598) != 1)) {
        pcVar6 = (char *)(param_5 + local_58 * 0x30 + 0xb);
        if (iVar12 < 1) {
          cVar4 = '\0';
        }
        else {
          iVar14 = 0;
          iVar13 = 0;
          do {
            pcVar5 = pcVar6 + iVar13;
            iVar13 = iVar13 + 1;
            if (iVar14 < *pcVar5) {
              iVar14 = (int)*pcVar5;
            }
          } while (iVar13 != iVar12);
          piVar3 = (int *)(param_2 + 0x3cd0 + local_4c);
          if (*(char *)(param_3 + 1) == '\0') {
            iVar14 = iVar14 >> 1;
            pcVar5 = pcVar6;
            do {
              pcVar7 = pcVar5 + 1;
              uVar9 = iVar14 - ((int)*pcVar5 >> 1);
              if (0x1e < (int)uVar9) {
                uVar9 = 0x1f;
              }
              *piVar3 = *(int *)(&DAT_0003bcdc + ((int)*pcVar5 & 1U) * 4) >> (uVar9 & 0xff);
              piVar3 = piVar3 + 1;
              pcVar5 = pcVar7;
            } while (pcVar7 != pcVar6 + iVar13);
          }
          else {
            pcVar5 = pcVar6;
            do {
              pcVar7 = pcVar5 + 1;
              uVar9 = iVar14 - *pcVar5;
              if (0x1e < (int)uVar9) {
                uVar9 = 0x1f;
              }
              *piVar3 = 0x20000000 >> (uVar9 & 0xff);
              piVar3 = piVar3 + 1;
              pcVar5 = pcVar7;
            } while (pcVar7 != pcVar6 + iVar13);
          }
          cVar4 = (char)iVar14 + '\x06';
        }
        *(char *)(param_2 + param_6 * 5 + local_58 + 0x3cc4) = cVar4;
      }
      uVar9 = (uint)*(byte *)(param_3 + 3);
      local_58 = local_58 + 1;
      local_4c = local_4c + 0xc0;
      local_48 = local_48 + 0x30;
      local_50 = local_50 + 1;
    } while (local_58 < (int)uVar9);
  }
  *(char *)(param_3 + 0x13) = (char)uVar9;
  *(undefined *)(param_3 + 0x15) = *(undefined *)(param_3 + uVar9 + 9);
  return 0;
}



undefined4
raac_DecodeSBRNoise(byte **param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int local_40;
  int local_3c;
  char *pcVar10;
  
  uVar15 = (uint)(param_6 != 0 && *(int *)(param_2 + 0x4598) != 0);
  bVar4 = *(byte *)(param_3 + 0xf);
  if (uVar15 == 0) {
    iVar6 = 5;
    iVar16 = 8;
  }
  else {
    iVar6 = 7;
    uVar15 = 1;
    iVar16 = 9;
  }
  if (bVar4 != 0) {
    local_3c = param_6 * 0x28;
    iVar12 = 0;
    local_40 = param_5;
    iVar13 = param_5;
    do {
      if (iVar12 == 0) {
        if (*(byte *)(param_3 + 0x14) == 0) {
          iVar14 = 0;
        }
        else {
          iVar14 = *(byte *)(param_3 + 0x14) - 1;
        }
      }
      else {
        iVar14 = iVar12 + -1;
      }
      iVar5 = *(int *)(param_4 + 0x18);
      if (0x30 < iVar5) {
        return 0xffffffe9;
      }
      if (*(char *)(local_40 + 9) == '\0') {
        uVar3 = raac_GetBits(param_1,5);
        *(char *)(iVar13 + 0xfb) = (char)(uVar3 << uVar15);
        iVar5 = *(int *)(param_4 + 0x18);
        if (iVar5 < 2) goto LAB_00026a0c;
        iVar14 = 1;
        pcVar10 = (char *)(param_5 + iVar12 * 5 + 0xfa);
        do {
          iVar5 = FUN_00026320(param_1,iVar6);
          iVar14 = iVar14 + 1;
          pcVar10[2] = pcVar10[1] + (char)(iVar5 << uVar15);
          iVar5 = *(int *)(param_4 + 0x18);
          pcVar10 = pcVar10 + 1;
        } while (iVar14 < iVar5);
        if (param_6 == 1) goto LAB_00026b28;
LAB_00026a18:
        if (0 < iVar5) {
          pcVar8 = (char *)(param_5 + iVar12 * 5 + 0xfb);
          pcVar10 = pcVar8;
          piVar2 = (int *)(param_2 + 0x4450 + local_3c);
          do {
            pcVar9 = pcVar10 + 1;
            cVar1 = *pcVar10;
            uVar3 = -(int)cVar1 + 0x1e;
            if ((int)uVar3 < 0) {
              *piVar2 = 0;
            }
            else {
              if (0x1d < (int)uVar3) {
                *piVar2 = 0x3fffffff;
              }
              if (uVar3 == 0x1d || -(int)cVar1 + 1 < 0 != SBORROW4(uVar3,0x1d)) {
                *piVar2 = 1 << (uVar3 & 0xff);
              }
            }
            pcVar10 = pcVar9;
            piVar2 = piVar2 + 1;
          } while (pcVar9 != pcVar8 + iVar5);
        }
      }
      else {
        if (0 < iVar5) {
          iVar11 = 0;
          do {
            iVar5 = FUN_00026320(param_1,iVar16);
            iVar7 = param_5 + iVar14 * 5 + iVar11;
            iVar17 = iVar13 + iVar11;
            iVar11 = iVar11 + 1;
            *(char *)(iVar17 + 0xfb) = *(char *)(iVar7 + 0xfb) + (char)(iVar5 << uVar15);
            iVar5 = *(int *)(param_4 + 0x18);
          } while (iVar11 < iVar5);
        }
LAB_00026a0c:
        if (param_6 != 1) goto LAB_00026a18;
LAB_00026b28:
        if (*(int *)(param_2 + 0x4598) != 1) goto LAB_00026a18;
      }
      iVar12 = iVar12 + 1;
      iVar13 = iVar13 + 5;
      bVar4 = *(byte *)(param_3 + 0xf);
      local_40 = local_40 + 1;
      local_3c = local_3c + 0x14;
    } while (iVar12 < (int)(uint)bVar4);
  }
  *(byte *)(param_3 + 0x14) = bVar4;
  return 0;
}



void raac_UncoupleSBREnvelope(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  
  bVar4 = 1 - *(byte *)(param_2 + 1);
  if (1 < *(byte *)(param_2 + 1)) {
    bVar4 = 0;
  }
  if (*(char *)(param_2 + 3) != '\0') {
    pcVar8 = (char *)(param_2 + 9);
    iVar7 = 0;
    puVar6 = (undefined *)(param_1 + 0x3cc3);
    do {
      pcVar8 = pcVar8 + 1;
      if (*pcVar8 == '\0') {
        iVar5 = *(int *)(param_3 + 0xc);
      }
      else {
        iVar5 = *(int *)(param_3 + 8);
      }
      puVar6[6] = puVar6[1];
      if (0 < iVar5) {
        iVar9 = 0;
        piVar1 = (int *)(param_1 + iVar7 * 0xc0 + 0x3cd0);
        do {
          iVar2 = 0;
          iVar3 = (int)*(char *)(param_4 + iVar9 + 0xb) >> (uint)bVar4;
          if (iVar3 < 0) {
            iVar2 = 0x18;
            iVar3 = 0;
          }
          else {
            if (iVar3 < 0x19) {
              iVar2 = 0x18 - iVar3;
            }
            else {
              iVar3 = 0x18;
            }
          }
          iVar3 = *(int *)(&DAT_0003bce4 + iVar3 * 4);
          piVar1[0xf0] = (int)((ulonglong)
                               ((longlong)*piVar1 * (longlong)*(int *)(&DAT_0003bce4 + iVar2 * 4))
                              >> 0x20) << 2;
          iVar9 = iVar9 + 1;
          *piVar1 = (int)((ulonglong)((longlong)*piVar1 * (longlong)iVar3) >> 0x20) << 2;
          piVar1 = piVar1 + 1;
        } while (iVar9 != iVar5);
      }
      iVar7 = iVar7 + 1;
      param_4 = param_4 + 0x30;
      puVar6 = puVar6 + 1;
    } while (iVar7 < (int)(uint)*(byte *)(param_2 + 3));
  }
  return;
}



void raac_UncoupleSBRNoise(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = (uint)*(byte *)(param_2 + 0xf);
  if (uVar6 != 0) {
    iVar4 = 0;
    iVar3 = *(int *)(param_3 + 0x18);
    do {
      if (0 < iVar3) {
        iVar5 = 0;
        piVar2 = (int *)(param_1 + iVar4 * 0x14 + 0x4450);
        do {
          iVar7 = 0;
          iVar1 = (int)*(char *)(param_4 + iVar5 + 0xfb);
          if (iVar1 < 0) {
            iVar7 = 0x18;
            iVar1 = 0;
          }
          else {
            if (iVar1 < 0x19) {
              iVar7 = 0x18 - iVar1;
            }
            else {
              iVar1 = 0x18;
            }
          }
          iVar1 = *(int *)(&DAT_0003bce4 + iVar1 * 4);
          piVar2[10] = (int)((ulonglong)
                             ((longlong)*piVar2 * (longlong)*(int *)(&DAT_0003bce4 + iVar7 * 4)) >>
                            0x20) << 2;
          iVar5 = iVar5 + 1;
          *piVar2 = (int)((ulonglong)((longlong)*piVar2 * (longlong)iVar1) >> 0x20) << 2;
          piVar2 = piVar2 + 1;
        } while (iVar5 != iVar3);
        uVar6 = (uint)*(byte *)(param_2 + 0xf);
      }
      iVar4 = iVar4 + 1;
      param_4 = param_4 + 5;
    } while (iVar4 < (int)uVar6);
  }
  return;
}



undefined4 AudioMP3mp3DecExit(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 8);
  AudioMP3MP3FreeDecoder(*(void ***)(iVar1 + 0x60));
  *(undefined4 *)(iVar1 + 0x60) = 0;
  if (*(void **)(iVar1 + 0x98) != (void *)0x0) {
    free(*(void **)(iVar1 + 0x98));
    *(undefined4 *)(iVar1 + 0x98) = 0;
  }
  if (**(void ***)(param_1 + 8) != (void *)0x0) {
    free(**(void ***)(param_1 + 8));
    **(undefined4 **)(param_1 + 8) = 0;
  }
  return 0;
}



undefined4 AudioMP3mp3DecInit(undefined4 *param_1)

{
  void *__s;
  void **ppvVar1;
  int iVar2;
  
  __s = malloc(0x9c);
  if (__s != (void *)0x0) {
    memset(__s,0,0x9c);
    *(void **)param_1[2] = __s;
    ppvVar1 = AudioMP3MP3InitDecoder();
    *(void ***)((int)__s + 0x60) = ppvVar1;
    if (ppvVar1 != (void **)0x0) {
      AudioMP3layerI_IIDecInit((int)ppvVar1);
      iVar2 = *(int *)((int)__s + 0x60);
      *(undefined4 *)(iVar2 + 0x7f4) = *param_1;
      *(undefined4 *)(iVar2 + 0x1040) = 0;
      *(undefined4 *)(iVar2 + 0x104c) = 0;
      *(int *)(iVar2 + 0x103c) = iVar2 + 0x834;
      *(undefined4 *)(iVar2 + 0x1044) = 0;
      *(undefined4 *)((int)__s + 0x38) = 0;
      *(undefined4 *)((int)__s + 0x3c) = 0;
      *(undefined4 *)((int)__s + 0x40) = 0;
      *(undefined4 *)((int)__s + 0x44) = 0;
      *(undefined4 *)((int)__s + 0x48) = 0;
      *(undefined4 *)((int)__s + 0x4c) = 0;
      *(undefined4 *)((int)__s + 0x50) = 0;
      *(undefined4 *)((int)__s + 0x54) = 0;
      *(undefined4 *)((int)__s + 0x58) = 0;
      *(undefined4 *)((int)__s + 0x5c) = 0;
      iVar2 = param_1[2];
      *(void **)(iVar2 + 4) = __s;
      *(undefined2 *)(iVar2 + 0x34) = 0x10;
      return 1;
    }
  }
  return 0xffffffff;
}



void FUN_00026e20(undefined4 *param_1)

{
  ss_xxxx(ss_ssss,param_1);
  return;
}



undefined4 * AudioMP3DecInit(void)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  undefined *apuStack40 [4];
  undefined *puStack24;
  undefined4 uStack20;
  
  puVar1 = (undefined4 *)malloc(0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    apuStack40[0] = PTR_AudioMP3DecInit_000420b0;
    apuStack40[1] = PTR_FUN_000420b4;
    apuStack40[2] = PTR_FREAD_AC320_000420b8;
    apuStack40[3] = (undefined *)DAT_000420bc;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puStack24 = PTR_AudioMP3mp3frameDec_000420c0;
    uStack20 = DAT_000420c4;
    puVar1[4] = AudioMP3mp3DecInit;
    FUN_00026e20(&local_38);
    puVar2 = apuStack40[((local_2c + local_38 + local_30) - local_34) - (local_2c ^ 0x72613c1e)];
    puVar1[6] = AudioMP3mp3DecExit;
    puVar1[5] = puVar2;
  }
  return puVar1;
}



undefined4 AudioMP3DecExit(void *param_1)

{
  free(param_1);
  return 0;
}



size_t AudioMP3FillReadBuffer
                 (int param_1,void *param_2,void *param_3,int param_4,size_t param_5,int param_6)

{
  size_t sVar1;
  size_t sVar2;
  
  if (param_5 != 0 && param_2 != param_3) {
    memcpy(param_2,param_3,param_5);
    *(size_t *)(param_1 + 0x1044) = param_5;
  }
  if (param_6 != 0) {
    FSeek_AC320(param_6,*(int *)(param_1 + 0x7f4));
  }
  sVar2 = param_4 - param_5;
  sVar1 = FREAD_AC320((ushort *)((int)param_2 + param_5),sVar2,*(int *)(param_1 + 0x7f4));
  if ((int)sVar1 < (int)sVar2) {
    memset((void *)((int)param_2 + sVar1 + param_5),0,sVar2 - sVar1);
  }
  return sVar1;
}



int AudioMP3BufferDataCheck(int param_1,int param_2)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  bool bVar4;
  
  if ((int)*(size_t *)(param_1 + 0x1040) < param_2) {
    iVar3 = *(int *)(param_1 + 0x104c);
    if (iVar3 == 0) {
      sVar2 = AudioMP3FillReadBuffer
                        (param_1,(void *)(param_1 + 0x834),*(void **)(param_1 + 0x103c),param_2,
                         *(size_t *)(param_1 + 0x1040),0);
      bVar4 = sVar2 != 0;
      *(void **)(param_1 + 0x103c) = (void *)(param_1 + 0x834);
      if (bVar4) {
        iVar3 = *(int *)(param_1 + 0x104c);
      }
      iVar1 = *(int *)(param_1 + 0x1040);
      if (!bVar4) {
        iVar3 = 1;
        iVar1 = iVar3;
      }
      *(size_t *)(param_1 + 0x1040) = *(int *)(param_1 + 0x1040) + sVar2;
      if (!bVar4) {
        *(int *)(param_1 + 0x104c) = iVar1;
      }
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x104c);
  }
  return iVar3;
}



undefined4 AudioMP3MP3FRAMEDEC(ushort *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  size_t sVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  
  iVar15 = *(int *)param_3[2];
  iVar14 = *(int *)(iVar15 + 0x60);
LAB_0002707c:
  do {
    sVar6 = ShowAbsBits(param_1,6,*param_3);
    if (sVar6 != 6) goto LAB_00027188;
    bVar4 = *(byte *)((int)param_1 + 1) >> 3;
    if ((bVar4 & 3) == 1) {
LAB_000270d4:
      iVar12 = 0x80;
    }
    else {
      bVar2 = *(byte *)(param_1 + 1);
      uVar16 = ((uint)*(byte *)((int)param_1 + 1) << 0x1d) >> 0x1e;
      if ((bVar4 & 3) == 0) {
        uVar7 = 2;
      }
      else {
        uVar7 = bVar4 & 1 ^ 1;
      }
      uVar11 = ((uint)bVar2 << 0x1c) >> 0x1e;
      if (((uVar11 == 3 || uVar16 == 0) || (uVar1 = (uint)(bVar2 >> 4), uVar1 == 0xf)) ||
         (uVar1 == 0)) goto LAB_000270d4;
      iVar13 = uVar7 * 3;
      iVar5 = uVar7 * 0x2d;
      iVar12 = -((int)((uint)bVar2 << 0x1e) >> 0x1f);
      if (uVar16 == 3) {
        iVar12 = (iVar12 + (uint)(*(short *)(AudioMP3bitrateTab +
                                            ((3 - uVar16) * 0xf + iVar5 + uVar1) * 2) * 12000) /
                           *(uint *)(AudioMP3samplerateTab + (iVar13 + uVar11) * 4)) * 4;
        if (0x7f < iVar12) {
          iVar12 = 0x80;
        }
      }
      else {
        if (uVar7 != 0) {
          uVar7 = 1;
        }
        if (uVar16 != 1) {
          uVar7 = 0;
        }
        if (uVar7 == 0) {
          iVar10 = 0x90;
        }
        else {
          iVar10 = 0x48;
        }
        iVar12 = (uint)(*(short *)(AudioMP3bitrateTab + ((3 - uVar16) * 0xf + iVar5 + uVar1) * 2) *
                        1000 * iVar10) / *(uint *)(AudioMP3samplerateTab + (iVar13 + uVar11) * 4) +
                 iVar12;
        if (0x7f < iVar12) {
          iVar12 = 0x80;
        }
      }
    }
    AudioMP3BufferDataCheck(iVar14,iVar12);
    iVar12 = *(int *)(iVar14 + 0x1040);
    if (iVar12 < 9) {
LAB_0002729c:
      cVar3 = *(char *)(param_3[2] + 0x48);
      goto joined_r0x000272a8;
    }
    pcVar8 = *(char **)(iVar14 + 0x103c);
    if (((*pcVar8 == 'T') && (pcVar8[1] == 'A')) && (pcVar8[2] == 'G')) {
      AudioMP3BufferDataCheck(iVar14,0x84);
      iVar12 = *(int *)(iVar14 + 0x1040);
      if (iVar12 < 0x81) goto LAB_0002729c;
      pcVar8 = *(char **)(iVar14 + 0x103c);
    }
    iVar12 = AudioMP3MP3FindSyncWord((int)pcVar8,iVar12 + -8);
    iVar13 = *(int *)(iVar14 + 0x1040);
    *(int *)(iVar14 + 0x1054) = iVar12;
    if (iVar12 < 0) {
      *(undefined4 *)(iVar14 + 0x1040) = 8;
      *(int *)(iVar14 + 0x103c) = *(int *)(iVar14 + 0x103c) + iVar13 + -8;
      goto LAB_0002707c;
    }
    iVar13 = iVar13 - iVar12;
    *(int *)(iVar14 + 0x1040) = iVar13;
    *(int *)(iVar14 + 0x103c) = *(int *)(iVar14 + 0x103c) + iVar12;
    if (iVar13 < 1) goto LAB_000272ac;
    iVar12 = AudioMP3MP3Decode(*(uint ***)(iVar15 + 0x60),(uint **)(iVar14 + 0x103c),
                               (uint **)(iVar14 + 0x1040),param_1,0);
    if (iVar12 == 0) {
      AudioMP3MP3GetLastFrameInfo(*(int *)(iVar15 + 0x60),(undefined4 *)(iVar15 + 0x44));
      iVar12 = *(int *)(iVar15 + 0x60);
      iVar14 = *(int *)(iVar12 + 0x7c8);
      iVar13 = *(int *)(iVar12 + 0x7c4);
      uVar16 = *(int *)(iVar15 + 0x10) + 1 + *(int *)(iVar15 + 0x18);
      iVar12 = *(int *)(iVar12 + 0x7c0);
      *(uint *)(iVar15 + 0x10) = uVar16;
      CalNowTime(iVar13 * iVar14,iVar12,(undefined4 *)(iVar15 + 0x28),uVar16);
      iVar14 = *(int *)(iVar15 + 0x60);
      *param_2 = *param_2 +
                 *(int *)(iVar14 + 0x7c4) * *(int *)(iVar14 + 0x7c8) * *(int *)(iVar14 + 0x7bc) * 2;
      return 0;
    }
    if (*(int *)(iVar15 + 0x14) != 0) {
      *(int *)(iVar15 + 0x18) = *(int *)(iVar15 + 0x18) + 1;
    }
    if (iVar12 == -0xd) {
LAB_00027188:
      cVar3 = *(char *)(param_3[2] + 0x48);
joined_r0x000272a8:
      if (cVar3 == '\x01') {
        uVar9 = 5;
      }
      else {
LAB_000272ac:
        uVar9 = 0xfffffffe;
      }
      return uVar9;
    }
  } while( true );
}



int AudioMP3mp3frameDec(uint param_1,int param_2,float param_3,float param_4,float param_5,
                       int *param_6,ushort *param_7,int *param_8)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint extraout_s0;
  int extraout_s1;
  float extraout_s2;
  float extraout_s3;
  float extraout_s4;
  char local_30;
  char local_2f;
  char local_2e;
  byte local_2a;
  byte local_29;
  byte local_28;
  byte local_27;
  int local_24;
  
  piVar5 = (int *)param_6[2];
  iVar9 = *piVar5;
  local_24 = __stack_chk_guard;
  *param_8 = 0;
  iVar8 = param_6[3];
  if (*(char *)(piVar5 + 0x12) == '\x01') {
    *(undefined4 *)(*(int *)(iVar9 + 0x60) + 0x104c) = 0;
  }
  if (iVar8 == 0) {
    while (sVar1 = ShowAbsBits((ushort *)&local_30,10,*param_6), sVar1 == 10) {
      if (((local_30 != 'I') || (local_2f != 'D')) || (local_2e != '3')) {
        memset((void *)(iVar9 + 100),0,0x38);
        *(int *)(iVar9 + 100) = iVar8;
        goto LAB_0002744c;
      }
      iVar3 = ((uint)local_27 | ((uint)local_28 | ((uint)local_29 | (uint)local_2a << 7) << 7) << 7)
              + 10;
      iVar8 = iVar8 + iVar3;
      FSeek_AC320(iVar3,*param_6);
    }
LAB_00027420:
    if (*(char *)(param_6[2] + 0x48) == '\x01') {
      iVar8 = 5;
    }
    else {
      iVar8 = -2;
    }
  }
  else {
LAB_000274fc:
    iVar8 = AudioMP3do_func(param_1,param_2,param_3,param_4,param_5,param_6);
    if (iVar8 == 1 || iVar8 == 4) {
      *(undefined4 *)(param_6[1] + 4) = *(undefined4 *)(iVar9 + 0x28);
    }
    else {
      if (-1 < iVar8) {
        iVar8 = AudioMP3MP3FRAMEDEC(param_7,param_8,param_6);
        if (iVar8 < 0) {
          iVar3 = *(int *)(iVar9 + 0x60);
          iVar8 = -2;
          *(undefined4 *)(iVar3 + 0x1040) = 0;
          *(undefined4 *)(iVar3 + 0x7d8) = 0;
          *(undefined4 *)(iVar3 + 0x7dc) = 0;
          memset(*(void **)(iVar3 + 0x14),0,0x1b20);
          *(undefined4 *)(*(int *)(iVar9 + 0x60) + 0x104c) = 0;
        }
        else {
          if (iVar8 != 5) {
            iVar6 = param_6[1];
            uVar11 = *(undefined4 *)(iVar9 + 0x4c);
            iVar2 = *(int *)(iVar9 + 0x38);
            iVar4 = *(int *)(iVar9 + 0x44);
            uVar7 = *(undefined4 *)(iVar9 + 0x48);
            uVar10 = *(undefined4 *)(iVar9 + 0x28);
            *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + 1 + *(int *)(iVar9 + 0x18);
            *(undefined4 *)(iVar9 + 0x14) = 0;
            *(undefined4 *)(iVar9 + 0x18) = 0;
            *(undefined4 *)(iVar6 + 8) = uVar11;
            *(undefined4 *)(iVar9 + 0x7c) = uVar11;
            *(int *)(iVar6 + 0xc) = iVar4;
            iVar3 = iVar2;
            if (iVar2 < 0x400) {
              iVar3 = iVar2 + 1;
            }
            *(undefined4 *)(iVar6 + 0x10) = uVar7;
            *(undefined4 *)(iVar6 + 4) = uVar10;
            *(undefined4 *)(iVar6 + 0x28) = 1;
            if (iVar2 < 0x400) {
              *(int *)(iVar9 + 0x38) = iVar3;
              *(int *)(iVar9 + 0x3c) = *(int *)(iVar9 + 0x3c) + iVar4;
            }
          }
        }
      }
    }
  }
LAB_000274bc:
  if (local_24 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return iVar8;
LAB_0002744c:
  sVar1 = ShowAbsBits((ushort *)(*(int *)(iVar9 + 0x60) + 0x834),0x400,*param_6);
  if ((int)sVar1 < 9) goto LAB_00027420;
  iVar3 = sVar1 - 8;
  iVar8 = AudioMP3MP3FindSyncWord(*(int *)(iVar9 + 0x60) + 0x834,iVar3);
  if (-1 < iVar8) {
    iVar3 = *param_6;
    *(int *)(iVar9 + 100) = *(int *)(iVar9 + 100) + iVar8;
    FSeek_AC320(iVar8,iVar3);
    *(undefined4 *)(iVar9 + 0x88) = *(undefined4 *)*param_6;
    iVar8 = AudioMP3VBRITagCheck(param_6);
    if (iVar8 != 0) goto LAB_000274bc;
    param_6[3] = 1;
    *(undefined4 *)(iVar9 + 0x14) = 0;
    *(undefined4 *)(iVar9 + 0x18) = 0;
    memset((void *)(iVar9 + 0x28),0,0x10);
    *(undefined4 *)(iVar9 + 0x10) = 0;
    param_1 = extraout_s0;
    param_2 = extraout_s1;
    param_3 = extraout_s2;
    param_4 = extraout_s3;
    param_5 = extraout_s4;
    goto LAB_000274fc;
  }
  iVar8 = *param_6;
  *(int *)(iVar9 + 100) = *(int *)(iVar9 + 100) + iVar3;
  FSeek_AC320(iVar3,iVar8);
  goto LAB_0002744c;
}



void AudioMP3GETTAG_XING(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  undefined *puVar4;
  int iVar5;
  uint *puVar6;
  byte *pbVar7;
  
  iVar5 = **(int **)(param_4 + 8);
  if (param_1 == 0) {
    if (param_2 != 1) {
      puVar4 = (undefined *)(param_3 + 0x24);
      goto LAB_00027640;
    }
  }
  else {
    if (param_2 == 1) {
      puVar4 = (undefined *)(param_3 + 0xd);
      goto LAB_00027640;
    }
  }
  puVar4 = (undefined *)(param_3 + 0x15);
LAB_00027640:
  iVar2 = CONCAT31(CONCAT21(CONCAT11(*puVar4,puVar4[1]),puVar4[2]),puVar4[3]);
  if (iVar2 == 0x58696e67) {
    *(undefined4 *)(iVar5 + 0x70) = 1;
    bVar1 = puVar4[7];
    if ((bVar1 & 1) != 0) {
      *(uint *)(iVar5 + 0x84) =
           CONCAT31(CONCAT21(CONCAT11(puVar4[8],puVar4[9]),puVar4[10]),puVar4[0xb]);
    }
    if ((bVar1 & 4) != 0) {
      pvVar3 = malloc(400);
      *(void **)(iVar5 + 0x98) = pvVar3;
      if (pvVar3 != (void *)0x0) {
        pbVar7 = puVar4 + 0xf;
        puVar6 = (uint *)((int)pvVar3 + -4);
        do {
          pbVar7 = pbVar7 + 1;
          puVar6 = puVar6 + 1;
          *puVar6 = (uint)*pbVar7;
        } while (pbVar7 != puVar4 + 0x73);
        return;
      }
      return;
    }
    *(uint *)(iVar5 + 0x70) = bVar1 & 4;
    return;
  }
  if (iVar2 != 0x496e666f) {
    return;
  }
  *(undefined4 *)(iVar5 + 0x70) = 2;
  if ((puVar4[7] & 1) != 0) {
    *(uint *)(iVar5 + 0x84) =
         CONCAT31(CONCAT21(CONCAT11(puVar4[8],puVar4[9]),puVar4[10]),puVar4[0xb]);
    return;
  }
  return;
}



undefined4 AudioMP3ExtractI4(undefined *param_1)

{
  return CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
}



uint AudioMP3ExtractIn(int param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 0;
  if (0 < param_2 + -1) {
    do {
      pbVar1 = (byte *)(param_1 + iVar3);
      iVar3 = iVar3 + 1;
      uVar2 = (uVar2 | *pbVar1) << 8;
    } while (iVar3 != param_2 + -1);
  }
  return *(byte *)(param_1 + iVar3) | uVar2;
}



ulonglong AudioMP3Time2Frame(uint param_1,int param_2,undefined4 param_3,float param_4,float param_5
                            ,undefined4 param_6,int param_7)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 extraout_s0;
  undefined4 extraout_s1;
  
  iVar6 = **(int **)(param_7 + 8);
  uVar5 = *(uint *)(**(int **)(iVar6 + 0x60) + 0x3c);
  if (uVar5 == 0) {
    uVar5 = *(uint *)(iVar6 + 0x78);
    if (uVar5 == 0) {
      iVar4 = *(int *)(iVar6 + 0x7c);
      if (iVar4 == 0) {
        return CONCAT44(param_2,param_1);
      }
      goto LAB_000277ec;
    }
  }
  else {
    *(uint *)(iVar6 + 0x78) = uVar5;
  }
  iVar4 = *(int *)(iVar6 + 0x7c);
  param_3 = 0x447a0000;
  coprocessor_function(10,6,0,in_cr1,in_cr6,in_cr1);
  coprocessor_function(10,2,5,in_cr2,in_cr7,in_cr6);
  *(float *)(iVar6 + 0x10) = ROUND(param_5 / param_4);
  param_1 = uVar5;
  param_2 = iVar4;
  if (iVar4 == 0) {
    return (ulonglong)uVar5;
  }
LAB_000277ec:
  uVar1 = (ulonglong)uVar5 * (ulonglong)*(uint *)(iVar6 + 0x10);
  lVar2 = (uVar1 & 0xffffffff) * 1000;
  uVar3 = __aeabi_ldivmod(param_1,param_2,param_3,(int)lVar2,
                          (*(uint *)(iVar6 + 0x10) * ((int)uVar5 >> 0x1f) + (int)(uVar1 >> 0x20)) *
                          1000 + (int)((ulonglong)lVar2 >> 0x20),iVar4,iVar4 >> 0x1f);
  *(undefined4 *)(iVar6 + 0x28) = uVar3;
  return CONCAT44(extraout_s1,extraout_s0);
}



float AudioMP3XING_SeekPosition
                (uint param_1,int param_2,float param_3,float param_4,float param_5,int param_6,
                int param_7,int param_8)

{
  int iVar1;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr8;
  float fVar2;
  float extraout_s5;
  undefined4 in_s8;
  undefined4 in_s9;
  float extraout_s12;
  
  iVar1 = **(int **)(param_8 + 8);
  if (*(int *)(iVar1 + 0x70) == 2) {
    AudioMP3Time2Frame(param_1,param_2,param_3,param_4,param_5,param_7 + param_6,param_8);
    fVar2 = *(float *)(iVar1 + 0x80);
    if (fVar2 != 0.0) {
      coprocessor_function(10,6,0,in_cr1,in_cr1,in_cr7);
      coprocessor_function(10,6,4,in_cr2,in_cr1,in_cr2);
      fVar2 = ROUND(extraout_s5);
    }
  }
  else {
    coprocessor_function(10,2,1,in_cr1,in_cr0,in_cr0);
    fVar2 = param_3 / (float)(ulonglong)*(uint *)(iVar1 + 0x8c);
    coprocessor_function(0xb,2,1,in_cr4,in_cr3,in_cr1);
    AudioMP3Time2Frame((uint)(float)(ulonglong)(uint)(param_6 + param_7),0x42c80000,param_3,fVar2,
                       ROUND(fVar2),SUB84(ROUND((double)CONCAT44(in_s9,in_s8)),0),param_8);
    coprocessor_function(10,2,1,in_cr8,in_cr8,in_cr4);
    coprocessor_function(10,2,1,in_cr6,in_cr8,in_cr5);
    fVar2 = ROUND(extraout_s12);
  }
  return (float)SUB41(fVar2,0);
}



void AudioMP3GETTAG_VBRI(int param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = **(int **)(param_2 + 8);
  if (CONCAT31(CONCAT21(CONCAT11(*(undefined *)(param_1 + 0x24),*(undefined *)(param_1 + 0x25)),
                        *(undefined *)(param_1 + 0x26)),*(undefined *)(param_1 + 0x27)) !=
      0x56425249) {
    return;
  }
  *(uint *)(iVar9 + 0x84) =
       CONCAT31(CONCAT21(CONCAT11(*(undefined *)(param_1 + 0x32),*(undefined *)(param_1 + 0x33)),
                         *(undefined *)(param_1 + 0x34)),*(undefined *)(param_1 + 0x35));
  uVar2 = (uint)CONCAT11(*(undefined *)(param_1 + 0x36),*(undefined *)(param_1 + 0x37));
  *(uint *)(iVar9 + 0x94) = uVar2;
  if (uVar2 == 0) {
    return;
  }
  *(undefined4 *)(iVar9 + 0x74) = 1;
  iVar7 = 0;
  pvVar3 = malloc(uVar2 << 2);
  *(void **)(iVar9 + 0x98) = pvVar3;
  iVar10 = param_1 + 0x3e;
  puVar8 = (uint *)((int)pvVar3 + -4);
  uVar6 = (uint)CONCAT11(*(undefined *)(param_1 + 0x3a),*(undefined *)(param_1 + 0x3b));
  uVar2 = uVar6 - 1;
  *(uint *)(iVar9 + 0x90) =
       (uint)CONCAT11(*(undefined *)(param_1 + 0x3c),*(undefined *)(param_1 + 0x3d));
  do {
    uVar4 = 0;
    if (0 < (int)uVar2) {
      uVar5 = 0;
      do {
        pbVar1 = (byte *)(iVar10 + uVar5);
        uVar5 = uVar5 + 1;
        uVar4 = (uVar4 | *pbVar1) << 8;
      } while (uVar2 != uVar5);
    }
    pbVar1 = (byte *)(iVar10 + (uVar2 & ~((int)uVar2 >> 0x1f)));
    iVar7 = iVar7 + 1;
    iVar10 = iVar10 + uVar6;
    puVar8 = puVar8 + 1;
    *puVar8 = uVar4 | *pbVar1;
  } while (iVar7 < *(int *)(iVar9 + 0x94));
  return;
}



undefined4 AudioMP3VBRITagCheck(int *param_1)

{
  uint uVar1;
  short sVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte bVar5;
  size_t sVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  ushort *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  iVar12 = *(int *)param_1[2];
  iVar11 = *(int *)(iVar12 + 0x60);
  puVar10 = (ushort *)(iVar11 + 0x834);
  sVar6 = ShowAbsBits(puVar10,0x400,*param_1);
  if (sVar6 != 0x400) {
    if (*(char *)(param_1[2] + 0x48) == '\x01') {
      uVar8 = 5;
    }
    else {
      uVar8 = 0xfffffffe;
    }
    return uVar8;
  }
  if ((*(char *)(iVar11 + 0x834) == -1) && ((*(byte *)(iVar11 + 0x835) & 0xe0) == 0xe0)) {
    bVar5 = *(byte *)(iVar11 + 0x835) >> 3;
    if ((bVar5 & 3) != 1) {
      if ((bVar5 & 3) == 0) {
        uVar7 = 2;
      }
      else {
        uVar7 = bVar5 & 1 ^ 1;
      }
      *(uint *)(iVar12 + 0x68) = uVar7;
      uVar1 = (uint)(*(byte *)(iVar11 + 0x837) >> 6);
      *(uint *)(iVar12 + 0x6c) = uVar1;
      if (uVar1 == 3) {
        uVar8 = 1;
      }
      else {
        uVar8 = 2;
      }
      *(undefined4 *)(iVar12 + 0x6c) = uVar8;
      uVar1 = (uint)(*(byte *)(iVar11 + 0x836) >> 4);
      uVar9 = ((uint)*(byte *)(iVar11 + 0x836) << 0x1c) >> 0x1e;
      if ((uVar9 != 3 && uVar1 != 0xf) &&
         (uVar13 = ((uint)*(byte *)(iVar11 + 0x835) << 0x1d) >> 0x1e, uVar13 != 0)) {
        iVar11 = 3 - uVar13;
        uVar8 = *(undefined4 *)(AudioMP3samplerateTabss + (uVar7 * 3 + uVar9) * 4);
        sVar2 = *(short *)(AudioMP3bitrateTabss + (iVar11 * 0xf + uVar7 * 0x2d + uVar1) * 2);
        *(int *)(iVar12 + 0x78) =
             (int)*(short *)(AudioMP3samplesPerFrameTabss + (uVar7 * 3 + iVar11) * 2);
        *(undefined4 *)(iVar12 + 0x7c) = uVar8;
        *(int *)(iVar12 + 0x80) = sVar2 * 1000;
        AudioMP3GETTAG_XING(uVar7,*(int *)(iVar12 + 0x6c),(int)puVar10,(int)param_1);
        if (*(int *)(iVar12 + 0x70) == 0) {
          AudioMP3GETTAG_VBRI((int)puVar10,(int)param_1);
        }
        uVar7 = *(uint *)(iVar12 + 0x84);
        if (uVar7 == 0) {
          iVar11 = *(int *)(iVar12 + 0x80);
          if (iVar11 != 0) {
            lVar4 = (ulonglong)(uint)(*(int *)(iVar12 + 0x88) - *(int *)(iVar12 + 100)) * 8000;
            uVar8 = __aeabi_ldivmod((int)lVar4,(int)((ulonglong)lVar4 >> 0x20),iVar11,iVar11 >> 0x1f
                                   );
            *(undefined4 *)(iVar12 + 0x8c) = uVar8;
            return 0;
          }
        }
        else {
          iVar11 = *(int *)(iVar12 + 0x7c);
          if (iVar11 != 0) {
            uVar3 = (ulonglong)*(uint *)(iVar12 + 0x78) * (ulonglong)uVar7;
            lVar4 = (uVar3 & 0xffffffff) * 1000;
            uVar8 = __aeabi_ldivmod((int)lVar4,
                                    (uVar7 * ((int)*(uint *)(iVar12 + 0x78) >> 0x1f) +
                                    (int)(uVar3 >> 0x20)) * 1000 + (int)((ulonglong)lVar4 >> 0x20),
                                    iVar11,iVar11 >> 0x1f);
            *(undefined4 *)(iVar12 + 0x8c) = uVar8;
          }
        }
      }
    }
  }
  return 0;
}



uint AudioMP3VBRI_SeekPosition
               (uint param_1,int param_2,undefined4 param_3,float param_4,float param_5,int param_6,
               int param_7,int param_8)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = **(int **)(param_8 + 8);
  AudioMP3Time2Frame(param_1,param_2,param_3,param_4,param_5,param_7 + param_6,param_8);
  if (*(int *)(iVar5 + 0x94) < 1) {
    uVar4 = 0;
    uVar3 = -*(int *)(iVar5 + 0x90);
  }
  else {
    uVar6 = *(uint *)(iVar5 + 0x90);
    if (*(uint *)(iVar5 + 0x10) < uVar6) {
      uVar3 = 0;
      uVar4 = uVar3;
    }
    else {
      iVar2 = 0;
      uVar4 = 0;
      piVar1 = (int *)(*(int *)(iVar5 + 0x98) + -4);
      uVar3 = uVar6;
      do {
        piVar1 = piVar1 + 1;
        iVar2 = iVar2 + 1;
        uVar4 = uVar4 + *piVar1;
        if (iVar2 == *(int *)(iVar5 + 0x94)) break;
        uVar3 = uVar3 + uVar6;
      } while (uVar3 <= *(uint *)(iVar5 + 0x10));
      uVar3 = uVar3 - uVar6;
    }
  }
  *(uint *)(iVar5 + 0x10) = uVar3;
  CalNowTime(*(uint *)(iVar5 + 0x78),*(int *)(iVar5 + 0x7c),(undefined4 *)(iVar5 + 0x28),uVar3);
  return uVar4;
}



undefined4
AudioMP3VBRFseek(uint param_1,int param_2,float param_3,float param_4,float param_5,uint param_6,
                int param_7,int *param_8)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = *(int *)param_8[2];
  if (*(int *)(iVar2 + 0x70) != 0) {
    fVar3 = AudioMP3XING_SeekPosition
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,(int)param_8);
    FSeek_AC320_Origin((param_6 & 0xffffff00 | (uint)(byte)(unkfloat1)fVar3) + *(int *)(iVar2 + 100)
                       ,*param_8,0);
    return 1;
  }
  if (*(int *)(iVar2 + 0x74) == 0) {
    return 0;
  }
  uVar1 = AudioMP3VBRI_SeekPosition
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,(int)param_8);
  FSeek_AC320_Origin(uVar1 + *(int *)(iVar2 + 100),*param_8,0);
  return 1;
}



void CalNowTime(uint param_1,int param_2,undefined4 *param_3,uint param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = ((ulonglong)param_1 * (ulonglong)param_4 & 0xffffffff) * 1000;
  uVar2 = __aeabi_ldivmod((int)lVar1,
                          (param_4 * ((int)param_1 >> 0x1f) +
                          (int)((ulonglong)param_1 * (ulonglong)param_4 >> 0x20)) * 1000 +
                          (int)((ulonglong)lVar1 >> 0x20),param_2,param_2 >> 0x1f);
  *param_3 = uVar2;
  return;
}



undefined4 MP3FrameHeaderSync(int param_1)

{
  int iVar1;
  uint **ppuVar2;
  uint *puVar3;
  uint *puVar4;
  
  ppuVar2 = *(uint ***)(**(int **)(param_1 + 8) + 0x60);
  puVar3 = *ppuVar2;
  while( true ) {
    while( true ) {
      AudioMP3BufferDataCheck((int)ppuVar2,0x800);
      if (ppuVar2[0x413] == (uint *)0x1) {
        return 0xffffffff;
      }
      iVar1 = AudioMP3MP3FindSyncWord((int)ppuVar2[0x40f],(int)(ppuVar2[0x410] + -2));
      if (-1 < iVar1) break;
      puVar4 = ppuVar2[0x410];
      ppuVar2[0x410] = (uint *)0x8;
      ppuVar2[0x40f] = (uint *)((int)ppuVar2[0x40f] + (int)((int)puVar4 + -8));
    }
    puVar4 = ppuVar2[0x40f];
    ppuVar2[0x40f] = (uint *)((int)puVar4 + iVar1);
    ppuVar2[0x410] = (uint *)((int)ppuVar2[0x410] - iVar1);
    iVar1 = AudioMP3UnpackFrameHeader2((int)ppuVar2,puVar3,(int)(uint *)((int)puVar4 + iVar1));
    if (0 < iVar1) break;
    ppuVar2[0x40f] = (uint *)((int)ppuVar2[0x40f] + 1);
    ppuVar2[0x410] = (uint *)((int)ppuVar2[0x410] + -1);
  }
  return 0;
}



undefined4 MP3FFSKIPframe(int param_1)

{
  undefined4 uVar1;
  size_t sVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  int *piVar7;
  
  piVar7 = *(int **)(**(int **)(param_1 + 8) + 0x60);
  iVar4 = piVar7[0x410];
  iVar6 = *(int *)(*piVar7 + 0x30);
  if (iVar6 < iVar4) {
    uVar1 = 0;
    piVar7[0x410] = iVar4 - iVar6;
    piVar7[0x40f] = piVar7[0x40f] + iVar6;
  }
  else {
    pvVar5 = (void *)piVar7[0x40f];
    sVar2 = AudioMP3FillReadBuffer((int)piVar7,piVar7 + 0x20d,pvVar5,0x800,0,iVar6 - iVar4);
    piVar7[0x410] = sVar2;
    uVar3 = extraout_r1;
    if (sVar2 != 0x800) {
      uVar3 = 1;
      pvVar5 = (void *)0x104c;
    }
    piVar7[0x40f] = (int)(piVar7 + 0x20d);
    if (sVar2 != 0x800) {
      uVar1 = 0xffffffff;
      *(undefined4 *)((int)piVar7 + (int)pvVar5) = uVar3;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



undefined4 MP3FFEndCheck(int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = **(int **)(param_1 + 8);
  uVar5 = *(uint *)(**(int **)(iVar6 + 0x60) + 0x3c);
  iVar4 = *(int *)(**(int **)(iVar6 + 0x60) + 0x34);
  uVar1 = (ulonglong)uVar5 * (ulonglong)*(uint *)(iVar6 + 0x10);
  lVar2 = (uVar1 & 0xffffffff) * 1000;
  uVar5 = __aeabi_ldivmod((int)lVar2,
                          (*(uint *)(iVar6 + 0x10) * ((int)uVar5 >> 0x1f) + (int)(uVar1 >> 0x20)) *
                          1000 + (int)((ulonglong)lVar2 >> 0x20),iVar4,iVar4 >> 0x1f);
  *(uint *)(iVar6 + 0x28) = uVar5;
  if (*(uint *)(iVar6 + 0x34) < uVar5) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



uint FameLengthcal(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x18) = 1;
  sVar1 = *(short *)(AudioMP3bitrateTab +
                    ((iVar3 + -1) * 0xf + iVar4 * 0x2d + *(int *)(param_1 + 0x10)) * 2);
  iVar5 = sVar1 * 1000;
  *(int *)(param_1 + 0x38) = iVar5;
  uVar2 = *(uint *)(AudioMP3samplerateTab + (iVar4 * 3 + *(int *)(param_1 + 0x14)) * 4);
  *(uint *)(param_1 + 0x34) = uVar2;
  *(int *)(param_1 + 0x3c) =
       (int)*(short *)(AudioMP3samplesPerFrameTab + (iVar4 * 3 + iVar3 + -1) * 2);
  if (iVar3 == 1) {
    if (uVar2 != 0) {
      iVar5 = ((uint)(sVar1 * 12000) / uVar2 + 1) * 4;
      uVar2 = iVar5 - *(int *)(param_1 + 0x30);
      *(int *)(param_1 + 0x30) = iVar5;
    }
  }
  else {
    if (iVar3 == 3) {
      if (iVar4 == 0) {
        iVar3 = 0x90;
      }
      else {
        iVar3 = 0x48;
      }
    }
    else {
      iVar3 = 0x90;
    }
    if (uVar2 != 0) {
      iVar5 = (uint)(iVar5 * iVar3) / uVar2 + 1;
      uVar2 = iVar5 - *(int *)(param_1 + 0x30);
      *(int *)(param_1 + 0x30) = iVar5;
    }
  }
  return uVar2;
}



undefined4 MP3RevSKIPframe(int param_1,int param_2)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = *(int *)(**(int **)(param_2 + 8) + 0x60);
  iVar1 = *(int *)(iVar4 + 0x103c);
  puVar5 = (undefined4 *)(iVar4 + 0x834);
  iVar3 = iVar1 - (int)puVar5;
  if (iVar3 < param_1) {
    do {
      param_1 = param_1 - iVar3;
      *(undefined4 *)(iVar4 + 0x1034) = *puVar5;
      *(undefined4 *)(iVar4 + 0x1038) = *(undefined4 *)(iVar4 + 0x838);
      sVar2 = AudioMP3FillReadBuffer(iVar4,puVar5,*(void **)(iVar4 + 0x103c),0x800,0,-0x1000);
      *(undefined4 *)(iVar4 + 0x1040) = 0;
      iVar1 = iVar4 + sVar2 + 0x834;
      iVar3 = iVar1 - (int)puVar5;
      *(int *)(iVar4 + 0x103c) = iVar1;
      if (sVar2 == 0) {
        *(undefined4 *)(iVar4 + 0x104c) = 1;
        return 0xffffffff;
      }
    } while (iVar3 < param_1);
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar4 + 0x1040);
  }
  *(int *)(iVar4 + 0x1040) = param_1 + iVar3;
  *(int *)(iVar4 + 0x103c) = iVar1 - param_1;
  return 0;
}



undefined4 checkheader(byte *param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint **ppuVar4;
  
  bVar1 = param_1[1];
  ppuVar4 = *(uint ***)(**(int **)(param_2 + 8) + 0x60);
  puVar3 = *ppuVar4;
  if ((((((uint)*param_1 << 3 | (uint)(bVar1 >> 5)) == 0x7ff) &&
       (*puVar3 == ((uint)bVar1 << 0x1b) >> 0x1e)) &&
      (puVar3[2] == 4 - (((uint)bVar1 << 0x1d) >> 0x1e))) &&
     (((puVar3[5] == ((uint)param_1[2] << 0x1c) >> 0x1e &&
       (puVar3[6] == ((uint)param_1[2] << 0x1e) >> 0x1f)) &&
      ((*(short *)(ppuVar4 + 0x200) == 0 || (puVar3[10] == (param_1[3] & 0xcf))))))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 Read4or5byteHeadAndCheck(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  
  piVar4 = *(int **)(**(int **)(param_1 + 8) + 0x60);
  pbVar6 = (byte *)piVar4[0x40f];
  iVar5 = *piVar4;
  iVar1 = checkheader(pbVar6,param_1);
  if (iVar1 != 0) {
    return 1;
  }
  *(undefined4 *)(iVar5 + 0x18) = 0;
  if (*(int *)(iVar5 + 8) == 1) {
    pbVar6 = pbVar6 + 4;
    iVar1 = *(int *)(iVar5 + 0x30) + -4;
    piVar4[0x40f] = (int)pbVar6;
    iVar3 = piVar4[0x410] + -4;
  }
  else {
    pbVar6 = pbVar6 + 1;
    iVar1 = *(int *)(iVar5 + 0x30) + -1;
    piVar4[0x40f] = (int)pbVar6;
    iVar3 = piVar4[0x410] + -1;
  }
  piVar4[0x410] = iVar3;
  *(int *)(iVar5 + 0x30) = iVar1;
  uVar2 = checkheader(pbVar6,param_1);
  return uVar2;
}



undefined4 Mp3RevFrameHeaderSync(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  piVar7 = *(int **)(**(int **)(param_1 + 8) + 0x60);
  sVar1 = *(short *)((int)piVar7 + 0x7fa);
  iVar6 = *piVar7;
  *(undefined4 *)(iVar6 + 0x30) = 0;
  if (sVar1 == 1) {
    *(int *)(iVar6 + 0x10) = piVar7[0x1ff];
    uVar2 = FameLengthcal(iVar6);
    iVar6 = MP3RevSKIPframe(uVar2,param_1);
    if (-1 < iVar6) {
      uVar4 = Read4or5byteHeadAndCheck(param_1);
      return uVar4;
    }
  }
  else {
    iVar5 = 1;
    while( true ) {
      *(int *)(iVar6 + 0x10) = iVar5;
      uVar2 = FameLengthcal(iVar6);
      iVar3 = MP3RevSKIPframe(uVar2,param_1);
      if (iVar3 < 0) break;
      while( true ) {
        iVar3 = Read4or5byteHeadAndCheck(param_1);
        if (iVar3 == 1) {
          return 1;
        }
        iVar5 = iVar5 + 1;
        if (iVar5 < 0xf) break;
        *(undefined4 *)(iVar6 + 0x30) = 0;
        while (iVar5 = AudioMP3MP3FindSyncWord
                                 ((int)(piVar7 + 0x20d),piVar7[0x40f] - (int)(piVar7 + 0x20d)),
              iVar5 < 1) {
          iVar5 = MP3RevSKIPframe(0x800,param_1);
          if (iVar5 < 0) {
            return 0xfffffffe;
          }
        }
        iVar3 = (int)piVar7 + iVar5 + 0x834;
        iVar5 = 1;
        piVar7[0x40f] = iVar3;
        piVar7[0x410] = (int)piVar7 + (0x1034 - iVar3);
      }
    }
  }
  return 0xfffffffe;
}



undefined4 MP3RevEndCheck(int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = **(int **)(param_1 + 8);
  uVar5 = *(uint *)(**(int **)(iVar6 + 0x60) + 0x3c);
  iVar4 = *(int *)(**(int **)(iVar6 + 0x60) + 0x34);
  uVar1 = (ulonglong)uVar5 * (ulonglong)*(uint *)(iVar6 + 0x10);
  lVar2 = (uVar1 & 0xffffffff) * 1000;
  uVar5 = __aeabi_ldivmod((int)lVar2,
                          (*(uint *)(iVar6 + 0x10) * ((int)uVar5 >> 0x1f) + (int)(uVar1 >> 0x20)) *
                          1000 + (int)((ulonglong)lVar2 >> 0x20),iVar4,iVar4 >> 0x1f);
  *(uint *)(iVar6 + 0x28) = uVar5;
  if (uVar5 < *(uint *)(iVar6 + 0x34)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// WARNING: Could not reconcile some variable overlaps

undefined4
AudioMP3do_func(uint param_1,int param_2,float param_3,float param_4,float param_5,int *param_6)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  ushort uVar5;
  void *__s;
  size_t sVar6;
  int **ppiVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 unaff_r7;
  undefined4 uVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  uint extraout_s0;
  uint extraout_s0_00;
  uint extraout_s0_01;
  uint extraout_s0_02;
  float fVar19;
  int extraout_s1;
  int extraout_s1_00;
  int extraout_s1_01;
  int extraout_s1_02;
  undefined4 extraout_s2;
  float extraout_s2_00;
  undefined4 extraout_s2_01;
  undefined4 extraout_s2_02;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s3_01;
  float extraout_s3_02;
  float extraout_s4;
  float extraout_s4_00;
  float extraout_s4_01;
  float extraout_s4_02;
  float extraout_s5;
  undefined8 uVar20;
  undefined8 local_38;
  
  ppiVar7 = (int **)param_6[2];
  piVar14 = *ppiVar7;
  piVar8 = (int *)piVar14[0x18];
  bVar18 = *(char *)((int)ppiVar7 + 0x37) == '\x02';
  if (!bVar18) {
    unaff_r7 = 0;
  }
  iVar10 = *piVar8;
  if (bVar18) {
    unaff_r7 = 3;
    iVar16 = piVar14[3];
    iVar17 = *param_6;
    iVar12 = piVar14[2];
    *(int *)(param_6[1] + 0x1c) = iVar16;
    piVar14[4] = iVar16;
    FSeek_AC320(iVar12,iVar17);
    *(undefined *)(param_6[2] + 0x37) = 0;
    ppiVar7 = (int **)param_6[2];
    param_1 = extraout_s0_00;
    param_2 = extraout_s1_00;
    param_3 = extraout_s2_00;
    param_4 = extraout_s3_00;
    param_5 = extraout_s4_00;
  }
  bVar1 = *(byte *)(ppiVar7 + 0x19);
  uVar5 = (ushort)bVar1;
  if (bVar1 == 0x22) {
    piVar15 = ppiVar7[0x18];
    iVar10 = *param_6;
    iVar12 = *(int *)(param_6[1] + 0xc);
    piVar8[0x40f] = (int)(piVar8 + 0x20d);
    piVar8[0x410] = 0;
    uVar9 = iVar12 / 1000;
    uVar3 = ZEXT48(piVar15) * (ulonglong)uVar9;
    uVar9 = (int)piVar15 * ((int)uVar9 >> 0x1f) + (int)(uVar3 >> 0x20);
    if ((int)uVar9 < 0) {
      uVar11 = 7;
    }
    else {
      uVar11 = 0;
    }
    local_38 = (ulonglong)uVar11;
    uVar20 = VectorAdd(uVar3 & 0xffffffff | (ulonglong)uVar9 << 0x20,local_38,8);
    local_38._0_4_ = (uint)uVar20;
    local_38._4_4_ = (int)((ulonglong)uVar20 >> 0x20);
    FSeek_AC320_Origin((uint)local_38 >> 3 | local_38._4_4_ << 0x1d,iVar10,0);
    AudioMP3Time2Frame(extraout_s0_02,extraout_s1_02,extraout_s2_02,extraout_s3_02,extraout_s4_02,
                       *(undefined4 *)(param_6[2] + 0x60),(int)param_6);
    iVar10 = piVar14[0x18];
    piVar14[5] = 1;
    piVar14[6] = 0;
    *(undefined4 *)(iVar10 + 0x7d8) = 0;
    *(undefined4 *)(iVar10 + 0x7dc) = 0;
    memset(*(void **)(iVar10 + 0x14),0,0x1b20);
    return 1;
  }
  piVar15 = ppiVar7[0x18];
  *(ushort *)(piVar14 + 7) = (ushort)bVar1;
  uVar9 = (int)piVar15 * 1000;
  piVar14[8] = uVar9;
  if (bVar1 == 0x66) {
    piVar8[0x413] = 0;
    if (2000 < (int)uVar9) {
      uVar9 = (int)piVar15 * -1000;
      goto LAB_0002855c;
    }
joined_r0x0002858c:
    if (uVar5 != 0x66) {
      if (uVar5 == 0x88) {
        iVar10 = piVar14[0x18];
        *(undefined4 *)(iVar10 + 0x7d8) = 0;
        __s = *(void **)(iVar10 + 0x14);
        piVar8[0x410] = 0;
        unaff_r7 = 4;
        *(undefined4 *)(iVar10 + 0x7dc) = 0;
        memset(__s,0,0x1b20);
        uVar5 = *(ushort *)(piVar14 + 7);
        piVar8[0x413] = 0;
        goto LAB_000284b4;
      }
      if (uVar5 != 0x44) goto LAB_000284b4;
      iVar17 = piVar14[10];
      iVar12 = piVar14[8];
LAB_00028810:
      piVar14[0xd] = iVar12 + iVar17;
      piVar14[5] = 1;
      piVar14[6] = 0;
      while( true ) {
        do {
          iVar12 = MP3FrameHeaderSync((int)param_6);
          if (iVar12 < 0) {
            return 0xfffffffe;
          }
          iVar12 = MP3FFSKIPframe((int)param_6);
          if (iVar12 < 0) {
            return 0xfffffffe;
          }
          iVar16 = piVar14[4];
          iVar17 = *(int *)param_6[2];
          piVar15 = *(int **)(iVar17 + 0x60);
          *(int *)(param_6[1] + 0x1c) = *(int *)(param_6[1] + 0x1c) + 1;
          iVar12 = *piVar15;
          piVar14[4] = iVar16 + 1;
          uVar9 = *(uint *)(iVar12 + 0x3c);
          iVar12 = *(int *)(iVar12 + 0x34);
          uVar3 = (ulonglong)uVar9 * (ulonglong)*(uint *)(iVar17 + 0x10);
          lVar4 = (uVar3 & 0xffffffff) * 1000;
          uVar9 = __aeabi_ldivmod((int)lVar4,
                                  (*(uint *)(iVar17 + 0x10) * ((int)uVar9 >> 0x1f) +
                                  (int)(uVar3 >> 0x20)) * 1000 + (int)((ulonglong)lVar4 >> 0x20),
                                  iVar12,iVar12 >> 0x1f);
          *(uint *)(iVar17 + 0x28) = uVar9;
          if (*(uint *)(iVar17 + 0x34) < uVar9) {
            iVar10 = piVar14[0x18];
            unaff_r7 = 1;
            *(undefined4 *)(iVar10 + 0x7d8) = 0;
            *(undefined4 *)(iVar10 + 0x7dc) = 0;
            memset(*(void **)(iVar10 + 0x14),0,0x1b20);
            uVar5 = *(ushort *)(piVar14 + 7);
            goto LAB_000284b4;
          }
        } while (piVar14[8] < 0x1389);
        if (0x3ff < piVar14[0xe]) break;
        iVar12 = *(int *)(iVar10 + 0x38);
        piVar14[0xe] = piVar14[0xe] + 1;
        piVar14[0xf] = piVar14[0xf] + iVar12;
      }
      piVar14[0x10] = piVar14[0xf] >> 10;
      fVar19 = (float)AudioMP3Time2Frame(extraout_s0_01,extraout_s1_01,extraout_s2_01,extraout_s3_01
                                         ,extraout_s4_01,piVar14[0xd],(int)param_6);
      coprocessor_function(10,2,0,in_cr7,in_cr6,in_cr5);
      coprocessor_function(10,2,1,in_cr0,in_cr7,in_cr6);
      if ((uint)piVar14[0x22] < (uint)((int)ROUND(fVar19) + piVar14[0x19])) {
        return 0xfffffffe;
      }
      unaff_r7 = 1;
      FSeek_AC320_Origin((int)ROUND(fVar19) + piVar14[0x19],*param_6,0);
      uVar5 = *(ushort *)(piVar14 + 7);
      goto LAB_000284b4;
    }
  }
  else {
    if ((bVar1 != 0x44) || ((int)uVar9 < 0x7d1)) goto joined_r0x0002858c;
LAB_0002855c:
    iVar12 = piVar14[10];
    if ((int)(iVar12 + uVar9) < 0) {
      uVar9 = -iVar12;
    }
    iVar17 = AudioMP3VBRFseek(param_1,param_2,param_3,param_4,param_5,uVar9,iVar12,param_6);
    if (iVar17 == 0) {
      uVar5 = *(ushort *)(piVar14 + 7);
      goto joined_r0x0002858c;
    }
    iVar17 = piVar14[10];
    iVar12 = (iVar12 - iVar17) + uVar9;
    if (999 < iVar12) {
      piVar14[8] = iVar12;
      *(undefined2 *)(piVar14 + 7) = 0x44;
      goto LAB_00028810;
    }
    if (iVar12 != -1000 && iVar12 + 1000 < 0 == SCARRY4(iVar12,1000)) {
      iVar12 = piVar14[0x18];
      unaff_r7 = 1;
      *(undefined2 *)(piVar14 + 7) = 0;
      *(undefined4 *)(iVar12 + 0x7d8) = 0;
      *(undefined4 *)(iVar12 + 0x7dc) = 0;
      memset(*(void **)(iVar12 + 0x14),0,0x1b20);
      uVar5 = *(ushort *)(piVar14 + 7);
      *(undefined4 *)(iVar10 + 0x30) = 0;
      goto joined_r0x0002858c;
    }
    MP3FrameHeaderSync((int)param_6);
    piVar14[8] = -iVar12;
    *(undefined2 *)(piVar14 + 7) = 0x66;
  }
  iVar12 = piVar14[10] - piVar14[8];
  if (iVar12 < 0) {
    iVar12 = 0;
  }
  piVar14[0xd] = iVar12;
  iVar12 = piVar8[0x411];
  piVar14[5] = 1;
  piVar14[6] = 0;
  if (0 < iVar12) {
    piVar15 = piVar8 + 0x20d;
    iVar17 = (int)(void *)piVar8[0x40f] + (-iVar12 - (int)piVar15);
    if (iVar17 < 0) {
      uVar13 = 0xfffff000;
      iVar16 = *(int *)((int)piVar8 + iVar12 + 0x838);
      piVar8[0x40d] = *(int *)((int)piVar8 + iVar12 + 0x834);
      piVar8[0x40e] = iVar16;
      sVar6 = AudioMP3FillReadBuffer((int)piVar8,piVar15,(void *)piVar8[0x40f],0x800,0,-0x1000);
      if (sVar6 == 0) {
        uVar13 = 0xfffffffe;
      }
      piVar8[0x410] = -iVar17;
      piVar8[0x40f] = (int)piVar8 + sVar6 + iVar17 + 0x834;
      if (sVar6 == 0) {
        piVar8[0x413] = 1;
        return uVar13;
      }
    }
    else {
      memcpy(piVar15,(void *)((int)piVar8 + iVar12 + 0x834),0x800);
      piVar8[0x40f] = piVar8[0x40f] - piVar8[0x411];
    }
  }
  iVar12 = *(int *)(iVar10 + 0x30);
  if (iVar12 != 0) {
    iVar16 = param_6[1];
    iVar17 = *(int *)(iVar16 + 0x1c);
    piVar14[4] = piVar14[4] + -1;
    *(int *)(iVar16 + 0x1c) = iVar17 + -1;
    iVar12 = MP3RevSKIPframe(iVar12,(int)param_6);
    if (iVar12 < 0) {
      return 0xfffffffe;
    }
  }
  do {
    iVar12 = Mp3RevFrameHeaderSync((int)param_6);
    if (iVar12 < 0) {
      return 0xfffffffe;
    }
    iVar12 = piVar14[4];
    *(int *)(param_6[1] + 0x1c) = *(int *)(param_6[1] + 0x1c) + -1;
    piVar14[4] = iVar12 + -1;
    if (iVar12 + -1 == 0) {
      return 0xfffffffe;
    }
    iVar17 = *(int *)param_6[2];
    uVar9 = *(uint *)(**(int **)(iVar17 + 0x60) + 0x3c);
    iVar12 = *(int *)(**(int **)(iVar17 + 0x60) + 0x34);
    uVar3 = (ulonglong)uVar9 * (ulonglong)*(uint *)(iVar17 + 0x10);
    lVar4 = (uVar3 & 0xffffffff) * 1000;
    uVar9 = __aeabi_ldivmod((int)lVar4,
                            (*(uint *)(iVar17 + 0x10) * ((int)uVar9 >> 0x1f) + (int)(uVar3 >> 0x20))
                            * 1000 + (int)((ulonglong)lVar4 >> 0x20),iVar12,iVar12 >> 0x1f);
    *(uint *)(iVar17 + 0x28) = uVar9;
    if (uVar9 < *(uint *)(iVar17 + 0x34)) {
      iVar12 = piVar14[0x18];
      *(undefined2 *)(piVar14 + 7) = 0;
      unaff_r7 = 1;
      *(undefined4 *)(iVar12 + 0x7d8) = 0;
      *(undefined4 *)(iVar12 + 0x7dc) = 0;
      memset(*(void **)(iVar12 + 0x14),0,0x1b20);
      uVar5 = *(ushort *)(piVar14 + 7);
      *(undefined4 *)(iVar10 + 0x30) = 0;
      goto LAB_000284b4;
    }
  } while ((piVar14[8] < 0x1389) || (piVar14[0xe] < 0x400));
  piVar14[0x10] = piVar14[0xf] >> 10;
  AudioMP3Time2Frame(extraout_s0,extraout_s1,extraout_s2,extraout_s3,extraout_s4,piVar14[0xd],
                     (int)param_6);
  coprocessor_function(10,6,1,in_cr1,in_cr1,in_cr7);
  coprocessor_function(10,6,4,in_cr2,in_cr1,in_cr2);
  if ((uint)piVar14[0x22] < (uint)((int)ROUND(extraout_s5) + piVar14[0x19])) {
    return 0xfffffffe;
  }
  unaff_r7 = 1;
  FSeek_AC320_Origin((int)ROUND(extraout_s5) + piVar14[0x19],*param_6,0);
  uVar5 = *(ushort *)(piVar14 + 7);
LAB_000284b4:
  if (uVar5 == 0x66) {
    piVar8[0x413] = 0;
  }
  iVar10 = param_6[2];
  cVar2 = *(char *)(iVar10 + 0x65);
  if (cVar2 == '\x12') {
    iVar12 = *(int *)(*param_6 + 4);
    piVar14[1] = piVar14[4];
    *piVar14 = iVar12;
    *(undefined *)(iVar10 + 0x65) = 0;
  }
  else {
    if (cVar2 == 'B') {
      iVar10 = piVar14[0x18];
      unaff_r7 = 2;
      iVar12 = *piVar14;
      iVar17 = *(int *)(*param_6 + 4);
      *(undefined4 *)(iVar10 + 0x7d8) = 0;
      *(undefined4 *)(iVar10 + 0x7dc) = 0;
      piVar8[0x410] = 0;
      memset(*(void **)(iVar10 + 0x14),0,0x1b20);
      FSeek_AC320(iVar12 - iVar17,*param_6);
      iVar12 = piVar14[1];
      iVar10 = param_6[2];
      *(int *)(param_6[1] + 0x1c) = iVar12;
      piVar14[4] = iVar12;
      *(undefined *)(iVar10 + 0x65) = 0;
    }
  }
  iVar10 = *(int *)(*param_6 + 4);
  piVar14[3] = piVar14[4];
  piVar14[2] = iVar10;
  return unaff_r7;
}



void FUN_00028be8(byte **param_1,ushort *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uStack48;
  uint local_2c [4];
  
  uVar6 = (uint)*(byte *)(param_2 + 1);
  puVar5 = &uStack48;
  if (uVar6 == 0) {
    uVar6 = (uint)*(byte *)((int)param_2 + 3);
    do {
      uVar1 = AudioMP3mad_bit_read(param_1,uVar6);
      puVar5 = puVar5 + 1;
      *puVar5 = uVar1;
    } while (puVar5 != local_2c + 2);
  }
  else {
    local_2c[0] = AudioMP3mad_bit_read(param_1,(uint)*(byte *)((int)param_2 + 3));
    uVar4 = (uint)*param_2;
    uVar1 = local_2c[0] / uVar4;
    uVar2 = uVar1 / uVar4;
    local_2c[0] = local_2c[0] - uVar4 * uVar1;
    local_2c[1] = uVar1 - uVar4 * uVar2;
    local_2c[2] = uVar2 - uVar4 * (uVar2 / uVar4);
  }
  uVar1 = 1 << (uVar6 - 1 & 0xff);
  iVar3 = 0;
  while( true ) {
    local_2c[0] = local_2c[0] ^ uVar1;
    *(int *)(param_3 + iVar3) =
         (*(int *)(param_2 + 2) + 0x8000 >> 0x10) *
         ((int)(*(int *)(param_2 + 4) +
                ((-(local_2c[0] & uVar1) | local_2c[0]) << (0x1d - uVar6 & 0xff)) + 0x800) >> 0xc);
    if (iVar3 + 4 == 0xc) break;
    local_2c[0] = *(uint *)((int)local_2c + iVar3 + 4);
    iVar3 = iVar3 + 4;
  }
  return;
}



int FUN_00028cc0(byte **param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = AudioMP3mad_bit_read(param_1,param_2);
  uVar1 = 1 << (param_2 - 1 & 0xff);
  uVar2 = uVar2 ^ uVar1;
  return (*(int *)(&DAT_0003bda4 + (param_2 - 2) * 4) + 0x8000 >> 0x10) *
         ((int)((0x10000000 >> (param_2 - 1 & 0xff)) +
                ((-(uVar2 & uVar1) | uVar2) << (0x1d - param_2 & 0xff)) + 0x800) >> 0xc);
}



undefined4 AudioMP3mad_layer_I(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int *piVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  byte **ppbVar11;
  uint local_c0;
  int local_b0;
  byte local_a8 [64];
  byte local_68 [68];
  
  iVar6 = *param_1;
  uVar10 = 3 - *(int *)(iVar6 + 0x20);
  *(uint *)(iVar6 + 0x20) = uVar10;
  if (uVar10 == 0) {
    uVar10 = 1;
LAB_00028dd4:
    local_c0 = 0x20;
LAB_00028ddc:
    uVar8 = 0;
    do {
      uVar2 = 0;
      do {
        uVar3 = AudioMP3mad_bit_read((byte **)(param_1 + 0x41a),4);
        bVar4 = (char)uVar3 + 1;
        if (uVar3 == 0xf) goto LAB_00028db8;
        if (uVar3 == 0) {
          bVar4 = 0;
        }
        local_a8[uVar2 * 0x20 + uVar8] = bVar4;
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar10);
      uVar8 = uVar8 + 1;
    } while (uVar8 < local_c0);
    if (0x1f < local_c0) goto LAB_00028e44;
  }
  else {
    if (uVar10 != 2) {
      uVar10 = 2;
      goto LAB_00028dd4;
    }
    local_c0 = (*(int *)(iVar6 + 0x24) + 1) * 4;
    if (local_c0 != 0) goto LAB_00028ddc;
  }
  pbVar7 = local_a8 + local_c0 + 0x1f;
  uVar8 = local_c0;
  do {
    uVar2 = AudioMP3mad_bit_read((byte **)(param_1 + 0x41a),4);
    if (uVar2 == 0xf) {
LAB_00028db8:
      param_1[0x41c] = 0x211;
      return 0xffffffff;
    }
    uVar8 = uVar8 + 1;
    if (uVar2 != 0) {
      uVar2 = uVar2 + 1 & 0xff;
    }
    pbVar7[1] = (byte)uVar2;
    pbVar7[-0x1f] = (byte)uVar2;
    pbVar7 = pbVar7 + 1;
  } while (uVar8 < 0x20);
LAB_00028e44:
  ppbVar11 = (byte **)(param_1 + 0x41a);
  iVar6 = 0;
  do {
    uVar8 = 0;
    do {
      if (local_a8[uVar8 * 0x20 + iVar6] != 0) {
        uVar2 = AudioMP3mad_bit_read(ppbVar11,6);
        local_68[uVar8 * 0x20 + iVar6] = (byte)uVar2;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar10);
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0x20);
  local_b0 = 0;
  do {
    if (local_c0 == 0) {
LAB_00028f74:
      uVar8 = local_c0;
      do {
        while (uVar2 = (uint)local_a8[uVar8], uVar2 != 0) {
          iVar6 = FUN_00028cc0(ppbVar11,uVar2);
          piVar5 = param_1 + local_b0 * 0x20 + uVar8 + 0x41d;
          uVar2 = 0;
          do {
            iVar1 = uVar2 * 0x20;
            uVar2 = uVar2 + 1;
            *piVar5 = (*(int *)(&DAT_0003bea8 + (uint)local_68[iVar1 + uVar8] * 4) + 0x8000 >> 0x10)
                      * (iVar6 + 0x800 >> 0xc);
            piVar5 = piVar5 + 0x480;
          } while (uVar2 < uVar10);
          uVar8 = uVar8 + 1;
          if (0x1f < uVar8) goto LAB_00029024;
        }
        piVar5 = param_1 + local_b0 * 0x20 + uVar8 + 0x41d;
        do {
          uVar2 = uVar2 + 1;
          *piVar5 = 0;
          piVar5 = piVar5 + 0x480;
        } while (uVar2 < uVar10);
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0x20);
    }
    else {
      uVar8 = 0;
      do {
        uVar2 = 0;
        puVar9 = (uint *)(param_1 + local_b0 * 0x20 + uVar8 + 0x41d);
        do {
          uVar3 = (uint)local_a8[uVar2 * 0x20 + uVar8];
          if (uVar3 != 0) {
            iVar6 = FUN_00028cc0(ppbVar11,uVar3);
            uVar3 = (*(int *)(&DAT_0003bea8 + (uint)local_68[uVar2 * 0x20 + uVar8] * 4) + 0x8000 >>
                    0x10) * (iVar6 + 0x800 >> 0xc);
          }
          uVar2 = uVar2 + 1;
          *puVar9 = uVar3;
          puVar9 = puVar9 + 0x480;
        } while (uVar2 < uVar10);
        uVar8 = uVar8 + 1;
      } while (uVar8 != local_c0);
      if (local_c0 < 0x20) goto LAB_00028f74;
    }
LAB_00029024:
    local_b0 = local_b0 + 1;
    if (local_b0 == 0xc) {
      return 0;
    }
  } while( true );
}



undefined4 AudioMP3mad_layer_II(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  byte *pbVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  uint uVar21;
  byte **ppbVar22;
  bool bVar23;
  int local_1b0;
  uint local_188;
  int local_174 [3];
  byte local_168 [31];
  undefined auStack329 [33];
  byte local_128 [64];
  byte abStack232 [192];
  undefined auStack40 [4];
  
  iVar12 = *param_1;
  iVar7 = 3 - *(int *)(iVar12 + 0x20);
  if (iVar7 == 0) {
    uVar18 = 1;
  }
  else {
    uVar18 = 2;
  }
  *(int *)(iVar12 + 0x20) = iVar7;
  if (*(int *)(iVar12 + 4) != 0) {
    local_1b0 = 4;
    goto LAB_000290ec;
  }
  if (*(int *)(iVar12 + 0x10) != 0) {
    uVar9 = param_1[0x1ee];
    if (uVar18 == 2) {
      uVar9 = uVar9 >> 1;
    }
    else {
      if (320000 < uVar9) {
        param_1[0x41c] = 0x222;
        return 0xffffffff;
      }
    }
    if (uVar9 < 0xbb81) {
      if (param_1[0x1f0] == 32000) {
        local_1b0 = 3;
      }
      else {
        local_1b0 = 2;
      }
      goto LAB_000290ec;
    }
    if (uVar9 < 0x13881) {
      local_1b0 = 0;
      goto LAB_000290ec;
    }
  }
  local_1b0 = param_1[0x1f0] + -48000;
  if (local_1b0 != 0) {
    local_1b0 = 1;
  }
LAB_000290ec:
  if (iVar7 == 2) {
    uVar9 = *(uint *)(iVar12 + 0x24);
  }
  else {
    uVar9 = 0x20;
  }
  uVar21 = *(uint *)(&DAT_0003bfc8 + local_1b0 * 0x24);
  if (iVar7 == 2) {
    uVar9 = (uVar9 + 1) * 4;
  }
  uVar8 = uVar21;
  if (uVar9 < uVar21) {
    uVar8 = uVar9;
  }
  if (uVar8 != 0) {
    uVar9 = 0;
    do {
      uVar19 = 0;
      uVar2 = *(ushort *)(&DAT_0003bfa8 + (uint)(byte)(&UNK_0003bfcc)[local_1b0 * 0x24 + uVar9] * 4)
      ;
      do {
        uVar4 = AudioMP3mad_bit_read((byte **)(param_1 + 0x41a),(uint)uVar2);
        local_168[uVar19 * 0x20 + uVar9] = (byte)uVar4;
        uVar19 = uVar19 + 1;
      } while (uVar19 < uVar18);
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar8);
  }
  if (uVar8 < uVar21) {
    uVar9 = uVar8;
    puVar6 = auStack329 + uVar8;
    do {
      iVar7 = local_1b0 * 0x24 + uVar9;
      uVar9 = uVar9 + 1;
      uVar19 = AudioMP3mad_bit_read
                         ((byte **)(param_1 + 0x41a),
                          (uint)*(ushort *)(&DAT_0003bfa8 + (uint)(byte)(&UNK_0003bfcc)[iVar7] * 4))
      ;
      puVar6[1] = (char)uVar19;
      puVar6[-0x1f] = (char)uVar19;
      puVar6 = puVar6 + 1;
    } while (uVar9 < uVar21);
  }
  if (uVar21 != 0) {
    uVar9 = 0;
    do {
      uVar19 = 0;
      do {
        if (local_168[uVar19 * 0x20 + uVar9] != 0) {
          uVar4 = AudioMP3mad_bit_read((byte **)(param_1 + 0x41a),2);
          local_128[uVar19 * 0x20 + uVar9] = (byte)uVar4;
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < uVar18);
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar21);
    uVar9 = 0;
    ppbVar22 = (byte **)(param_1 + 0x41a);
    do {
      uVar19 = 0;
      pbVar17 = abStack232 + uVar9 * 3;
      do {
        if (local_168[uVar19 * 0x20 + uVar9] != 0) {
          uVar4 = AudioMP3mad_bit_read(ppbVar22,6);
          bVar1 = local_128[uVar19 * 0x20 + uVar9];
          puVar6 = (undefined *)(uVar4 & 0xff);
          bVar3 = (byte)puVar6;
          *pbVar17 = bVar3;
          switch((uint)bVar1) {
          case 0:
            uVar4 = AudioMP3mad_bit_read(ppbVar22,6);
            pbVar17[1] = (byte)uVar4;
            break;
          case 1:
            break;
          case 2:
            pbVar17[1] = bVar3;
            pbVar17[2] = bVar3;
            goto LAB_00029720;
          case 3:
            break;
          default:
            goto switchD_000297a0_caseD_4;
          }
          puVar6 = (undefined *)AudioMP3mad_bit_read(ppbVar22,6);
          pbVar17[2] = (byte)puVar6;
switchD_000297a0_caseD_4:
          bVar23 = (bVar1 & 1) != 0;
          if (bVar23) {
            puVar6 = auStack40;
          }
          if (bVar23) {
            pbVar17[1] = puVar6[(uint)bVar1 + uVar9 * 3 + uVar19 * 0x60 + -0xc1];
          }
        }
LAB_00029720:
        uVar19 = uVar19 + 1;
        pbVar17 = pbVar17 + 0x60;
      } while (uVar19 < uVar18);
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar21);
  }
  iVar7 = 0;
  local_188 = 0;
  do {
    if (uVar8 != 0) {
      uVar9 = 0;
      piVar20 = (int *)((int)param_1 - iVar7);
      do {
        uVar19 = 0;
        pbVar17 = abStack232 + uVar9 * 3 + (local_188 >> 2);
        piVar11 = piVar20;
        do {
          if (local_168[uVar19 * 0x20 + uVar9] == 0) {
            piVar11[0x41d] = 0;
            piVar11[0x43d] = 0;
            piVar11[0x45d] = 0;
          }
          else {
            FUN_00028be8((byte **)(param_1 + 0x41a),
                         (ushort *)
                         (&DAT_0003bddc +
                         (uint)(byte)(&UNK_0003bd47)
                                     [(uint)*(ushort *)
                                             (&DAT_0003bfaa +
                                             (uint)(byte)(&DAT_0003bfc8 + local_1b0 * 0x24)
                                                         [uVar9 + 4] * 4) * 0xf +
                                      (uint)local_168[uVar19 * 0x20 + uVar9]] * 0xc),(int)local_174)
            ;
            iVar10 = *(int *)(&DAT_0003bea8 + (uint)*pbVar17 * 4);
            iVar12 = 0;
            do {
              iVar13 = iVar12 + 4;
              piVar11[iVar12 * 8 + 0x41d] =
                   (*(int *)((int)local_174 + iVar12) + 0x800 >> 0xc) * (iVar10 + 0x8000 >> 0x10);
              iVar12 = iVar13;
            } while (iVar13 != 0xc);
          }
          uVar19 = uVar19 + 1;
          piVar11 = piVar11 + 0x480;
          pbVar17 = pbVar17 + 0x60;
        } while (uVar19 < uVar18);
        uVar9 = uVar9 + 1;
        piVar20 = piVar20 + 1;
      } while (uVar9 != uVar8);
    }
    if (uVar8 < uVar21) {
      iVar12 = local_188 * 2;
      iVar10 = (int)param_1 + (uVar8 * 4 - iVar7);
      uVar9 = uVar8;
      do {
        uVar19 = (uint)local_168[uVar9];
        if (uVar19 == 0) {
          piVar20 = param_1 + uVar9 + local_188 * 0x60 + 0x41d;
          do {
            uVar19 = uVar19 + 1;
            piVar16 = piVar20 + 0x40;
            piVar11 = piVar20 + 0x20;
            *piVar20 = 0;
            piVar20 = piVar20 + 0x480;
            *piVar11 = 0;
            *piVar16 = 0;
          } while (uVar19 < uVar18);
        }
        else {
          uVar4 = 0;
          FUN_00028be8((byte **)(param_1 + 0x41a),
                       (ushort *)
                       (&DAT_0003bddc +
                       (uint)(byte)(&UNK_0003bd47)
                                   [(uint)*(ushort *)
                                           (&DAT_0003bfaa +
                                           (uint)(byte)(&DAT_0003bfc8 + local_1b0 * 0x24)[uVar9 + 4]
                                           * 4) * 0xf + uVar19] * 0xc),(int)local_174);
          pbVar17 = abStack232 + uVar9 * 3 + (local_188 >> 2);
          iVar13 = iVar10;
          do {
            iVar5 = *(int *)(&DAT_0003bea8 + (uint)*pbVar17 * 4);
            iVar14 = 0;
            do {
              iVar15 = iVar14 + 4;
              *(int *)(iVar13 + (iVar14 * 8 + 0x41d) * 4) =
                   (iVar5 + 0x8000 >> 0x10) * (*(int *)((int)local_174 + iVar14) + 0x800 >> 0xc);
              iVar14 = iVar15;
            } while (iVar15 != 0xc);
            uVar4 = uVar4 + 1;
            pbVar17 = pbVar17 + 0x60;
            iVar13 = iVar13 + 0x1200;
          } while (uVar4 < uVar18);
        }
        uVar9 = uVar9 + 1;
        iVar10 = iVar10 + 4;
      } while (uVar9 < uVar21);
    }
    else {
      iVar12 = local_188 << 1;
    }
    uVar9 = 0;
    piVar20 = (int *)((int)param_1 + (0x10f0 - iVar7));
    do {
      iVar10 = 0;
      piVar11 = piVar20;
      do {
        if (uVar21 < 0x20) {
          piVar16 = param_1 + uVar21 + (uVar9 * 0x24 + iVar10 + iVar12 + local_188) * 0x20 + 0x41c;
          do {
            piVar16 = piVar16 + 1;
            *piVar16 = 0;
          } while (piVar11 != piVar16);
        }
        iVar10 = iVar10 + 1;
        piVar11 = piVar11 + 0x20;
      } while (iVar10 != 3);
      uVar9 = uVar9 + 1;
      piVar20 = piVar20 + 0x480;
    } while (uVar9 < uVar18);
    iVar7 = iVar7 + -0x180;
    local_188 = local_188 + 1;
  } while (local_188 != 0xc);
  return 0;
}



undefined4 AudioMP3layerI_IIDec(int *param_1,undefined2 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = *(int *)(iVar2 + 8);
  if (iVar1 == 1) {
    iVar1 = AudioMP3mad_layer_I(param_1);
  }
  else {
    if (iVar1 != 2) {
      return 0xffffffff;
    }
    iVar1 = AudioMP3mad_layer_II(param_1);
  }
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  AudioMP3mad_synth_frame((int)param_1,iVar2);
  AudioMP3output((int)param_1,param_2);
  return 0;
}



void AudioMP3layerI_IIDecInit(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  do {
    iVar4 = 0;
    do {
      iVar1 = 8;
      puVar2 = (undefined4 *)(param_1 + (iVar3 * 0x40 + iVar4) * 0x20 + 0x3474);
      do {
        iVar1 = iVar1 + -1;
        puVar2[0x180] = 0;
        puVar2[0x100] = 0;
        puVar2[0x80] = 0;
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      } while (iVar1 != 0);
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x10);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 2);
  *(undefined4 *)(param_1 + 0x4474) = 0;
  *(undefined4 *)(param_1 + 0x4478) = 0;
  *(undefined2 *)(param_1 + 0x447c) = 0;
  *(undefined2 *)(param_1 + 0x447e) = 0;
  return;
}



void ** AudioMP3MP3InitDecoder(void)

{
  void **ppvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  int iVar9;
  
  ppvVar1 = (void **)malloc(0x6880);
  if (ppvVar1 != (void **)0x0) {
    iVar9 = 0;
    do {
      *(undefined *)((int)ppvVar1 + iVar9) = 0;
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0x6880);
    pvVar2 = malloc(0x44);
    pvVar3 = malloc(0x148);
    pvVar4 = malloc(0x11c);
    pvVar5 = malloc(0x1210);
    pvVar6 = malloc(0x348);
    pvVar7 = malloc(0x1b20);
    pvVar8 = malloc(0x2204);
    *ppvVar1 = pvVar2;
    ppvVar1[1] = pvVar3;
    ppvVar1[2] = pvVar4;
    ppvVar1[3] = pvVar5;
    ppvVar1[4] = pvVar6;
    ppvVar1[5] = pvVar7;
    ppvVar1[6] = pvVar8;
    if ((((pvVar2 == (void *)0x0 || pvVar3 == (void *)0x0) ||
         (pvVar4 == (void *)0x0 || pvVar5 == (void *)0x0)) ||
        (pvVar6 == (void *)0x0 || pvVar7 == (void *)0x0)) || (iVar9 = 0, pvVar8 == (void *)0x0)) {
      AudioMP3FreeBuffers(ppvVar1);
      return (void **)0x0;
    }
    do {
      *(undefined *)((int)pvVar2 + iVar9) = 0;
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0x44);
    iVar9 = 0;
    do {
      *(undefined *)((int)pvVar3 + iVar9) = 0;
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0x148);
    iVar9 = 0;
    do {
      *(undefined *)((int)pvVar4 + iVar9) = 0;
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0x11c);
    iVar9 = 0;
    do {
      *(undefined *)((int)pvVar5 + iVar9) = 0;
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0x1210);
    iVar9 = 0;
    do {
      *(undefined *)((int)pvVar6 + iVar9) = 0;
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0x348);
    iVar9 = 0;
    do {
      *(undefined *)((int)pvVar7 + iVar9) = 0;
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0x1b20);
    iVar9 = 0;
    do {
      *(undefined *)((int)pvVar8 + iVar9) = 0;
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0x2204);
  }
  return ppvVar1;
}



void AudioMP3MP3FreeDecoder(void **param_1)

{
  if (param_1 == (void **)0x0) {
    return;
  }
  AudioMP3FreeBuffers(param_1);
  return;
}



int AudioMP3MP3FindSyncWord(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = param_2 + -1;
  if (0 < iVar2) {
    iVar1 = 0;
    pcVar4 = (char *)(param_1 + -1);
    do {
      while (pcVar3 = pcVar4 + 1, *pcVar3 == -1) {
        if ((pcVar4[2] & 0xe0U) == 0xe0) {
          return iVar1;
        }
        iVar1 = iVar1 + 1;
        pcVar4 = pcVar3;
        if (iVar1 == iVar2) {
          return -1;
        }
      }
      iVar1 = iVar1 + 1;
      pcVar4 = pcVar3;
    } while (iVar1 != iVar2);
  }
  return -1;
}



void AudioMP3MP3GetLastFrameInfo(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x7c0);
    iVar5 = *(int *)(param_1 + 0x7bc);
    uVar4 = *(undefined4 *)(param_1 + 0x7b8);
    param_2[3] = 0x10;
    iVar2 = *(int *)(param_1 + 0x7d4);
    iVar1 = *(int *)(param_1 + 2000);
    param_2[2] = uVar3;
    param_2[1] = iVar5;
    *param_2 = uVar4;
    param_2[6] = iVar2;
    param_2[5] = iVar1;
    param_2[4] = *(short *)(AudioMP3sideBytesTab + (iVar2 * 3 + iVar1) * 2 + 10) * iVar5;
  }
  return;
}



undefined4 AudioMP3MP3GetNextFrameInfo(uint **param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  if (param_1 == (uint **)0x0) {
    return 0xfffffffb;
  }
  iVar1 = AudioMP3UnpackFrameHeader(param_1,param_3);
  if (iVar1 != -1) {
    AudioMP3MP3GetLastFrameInfo((int)param_1,param_2);
    return 0;
  }
  return 0xfffffffa;
}



undefined4
AudioMP3MP3Decode(uint **param_1,uint **param_2,uint **param_3,undefined2 *param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  size_t sVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  char *pcVar12;
  uint **__dest;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  uint **local_7c;
  uint local_70;
  uint auStack108 [2];
  uint local_64;
  uint local_58;
  
  iVar2 = AudioMP3UnpackFrameHeader(param_1,(int)*param_2);
  if ((iVar2 < 0) || (param_1[0x1ee] == (uint *)0x0)) goto LAB_00029d0c;
  AudioMP3BufferDataCheck((int)param_1,(int)param_1[0x1fc]);
  puVar3 = param_1[0x1fc];
  if (param_1[0x410] < puVar3) {
    return 0xfffffff3;
  }
  puVar10 = (uint *)((int)param_1[0x410] - (int)puVar3);
  if ((int)puVar10 < 4) {
    if ((int)puVar10 < 0) {
      return 0xffffd8f1;
    }
    pcVar12 = (char *)((int)*param_2 + (int)puVar3);
    sVar4 = ShowAbsBits((ushort *)(pcVar12 + (int)puVar10),4 - (int)puVar10,(int)param_1[0x1fd]);
    if (sVar4 + (int)puVar10 == 4) goto LAB_00029c8c;
  }
  else {
    pcVar12 = (char *)((int)*param_2 + (int)puVar3);
LAB_00029c8c:
    if ((*pcVar12 != -1) && ((pcVar12[1] & 0xe0U) != 0xe0)) {
LAB_00029d0c:
      puVar3 = *param_3;
      *param_2 = (uint *)((int)*param_2 + 1);
      *param_3 = (uint *)((int)puVar3 + -1);
      return 0xfffffffa;
    }
    puVar3 = *param_1;
    memset(auStack108,0,0x44);
    iVar5 = AudioMP3UnpackFrameHeader2((int)param_1,auStack108,(int)pcVar12);
    if (((iVar5 < 0) || (local_64 != puVar3[2])) || (local_58 != puVar3[5])) {
      puVar3 = *param_3;
      *param_2 = (uint *)((int)*param_2 + 1);
      *param_3 = (uint *)((int)puVar3 + -1);
      param_1[0x1f7] = (uint *)0x0;
      return 0xfffffffa;
    }
  }
  puVar3 = *param_3;
  puVar10 = (uint *)((int)*param_2 + iVar2);
  *param_2 = puVar10;
  puVar15 = *param_1;
  *param_3 = (uint *)((int)puVar3 - iVar2);
  if (puVar15[2] - 1 < 2) {
    AudioMP3mad_stream_buffer((int)param_1,(int)puVar10,(int)((int)param_1[0x1fc] - iVar2));
    AudioMP3layerI_IIDec((int *)param_1,param_4);
    puVar3 = *param_2;
    *param_3 = (uint *)((int)*param_3 + (iVar2 - (int)param_1[0x1fc]));
    *param_2 = (uint *)((int)puVar3 + (int)((int)param_1[0x1fc] - iVar2));
    return 0;
  }
  iVar5 = AudioMP3UnpackSideInfo((int *)param_1,(byte *)puVar10);
  if (iVar5 < 0) {
    return 0xfffffff9;
  }
  puVar3 = (uint *)((int)*param_2 + iVar5);
  puVar10 = (uint *)((int)*param_3 - iVar5);
  *param_2 = puVar3;
  *param_3 = puVar10;
  if (param_1[0x1ee] == (uint *)0x0) {
    if (param_1[0x1ec] == (uint *)0x0) {
      param_1[0x1ec] = (uint *)0x1;
      puVar15 = *param_3;
      puVar14 = (uint *)((int)puVar3 - (iVar5 + iVar2));
      puVar10 = puVar3;
      do {
        if ((int)puVar15 + -1 < 1) {
LAB_00029e48:
          param_1[0x1ed] = (uint *)0xffffffff;
          return 0xfffffffd;
        }
        iVar9 = 0;
        puVar11 = puVar10;
        while ((*(char *)((int)puVar10 + iVar9) != -1 ||
               ((*(byte *)((int)puVar11 + 1) & 0xe0) != 0xe0))) {
          iVar9 = iVar9 + 1;
          puVar11 = (uint *)((int)puVar11 + 1);
          if (iVar9 == (int)puVar15 + -1) goto LAB_00029e48;
        }
        if (((*(char *)puVar14 == -1) &&
            (*(byte *)((int)puVar11 + 1) == *(byte *)((int)puVar14 + 1))) &&
           (((*(byte *)((int)puVar14 + 2) ^ *(byte *)((int)puVar11 + 2)) & 0xfc) == 0)) {
          if ((*(byte *)((int)puVar14 + 2) & 2) != 0) {
            puVar11 = (uint *)((int)puVar11 + -1);
          }
          puVar11 = (uint *)((int)puVar11 - (int)puVar3);
          param_1[0x1ed] = puVar11;
          if ((int)puVar11 < 0) {
            return 0xfffffffd;
          }
          param_1[0x1ee] =
               (uint *)((uint)((int)param_1[0x1f0] * ((int)puVar11 + iVar5 + iVar2) * 8) /
                       (uint)((int)param_1[0x1f2] * (int)param_1[0x1f1]));
          goto LAB_00029e5c;
        }
        puVar10 = (uint *)((int)puVar11 + 3);
        puVar15 = (uint *)((int)puVar15 + (-3 - iVar9));
      } while( true );
    }
  }
  else {
    if (param_1[0x1ec] == (uint *)0x0) goto LAB_00029b58;
  }
  puVar11 = param_1[0x1ed];
LAB_00029e5c:
  iVar2 = AudioMP3CheckPadBit((int *)param_1);
  param_1[499] = (uint *)(iVar2 + (int)puVar11);
  puVar10 = *param_3;
LAB_00029b58:
  if (param_5 == 0) {
    if ((int)puVar10 < (int)param_1[499]) {
      return 0xffffffff;
    }
    puVar10 = param_1[0x1f7];
    puVar3 = param_1[0x1f6];
    if ((int)puVar10 < (int)puVar3) {
      memcpy((void *)((int)param_1 + (int)puVar10 + 0x1c),*param_2,(size_t)param_1[499]);
      puVar15 = param_1[499];
      puVar3 = *param_2;
      param_1[0x1f7] = (uint *)((int)param_1[0x1f7] + (int)puVar15);
      puVar10 = *param_3;
      *param_2 = (uint *)((int)puVar3 + (int)puVar15);
      *param_3 = (uint *)((int)puVar10 - (int)puVar15);
      return 0xfffffffe;
    }
    __dest = param_1 + 7;
    memcpy(__dest,(void *)((int)param_1 + (int)((int)puVar10 - (int)puVar3) + 0x1c),(size_t)puVar3);
    memcpy((void *)((int)param_1 + (int)param_1[0x1f6] + 0x1c),*param_2,(size_t)param_1[499]);
    puVar10 = param_1[499];
    puVar3 = *param_2;
    param_1[0x1f7] = (uint *)((int)param_1[0x1f6] + (int)puVar10);
    puVar15 = *param_3;
    *param_2 = (uint *)((int)puVar3 + (int)puVar10);
    *param_3 = (uint *)((int)puVar15 - (int)puVar10);
  }
  else {
    param_1[499] = puVar10;
    if ((param_1[0x1f6] != (uint *)0x0) || ((int)puVar10 < 1)) {
      return 0xfffffffa;
    }
    param_1[0x1f7] = puVar10;
    __dest = (uint **)*param_2;
    puVar3 = *param_3;
    *param_2 = (uint *)((int)__dest + (int)puVar10);
    *param_3 = (uint *)((int)puVar3 - (int)puVar10);
  }
  iVar5 = 0;
  local_70 = 0;
  iVar2 = (int)param_1[0x1f7] << 3;
  if (0 < (int)param_1[0x1f1]) {
    do {
      if (0 < (int)param_1[0x1ef]) {
        local_7c = param_1 + iVar5 * 2 + 0x1f7;
        iVar9 = 0;
        do {
          uVar8 = local_70;
          uVar7 = AudioMP3UnpackScaleFactors((int *)param_1,(int)__dest,&local_70,iVar2,iVar5,iVar9)
          ;
          uVar1 = local_70;
          local_7c = local_7c + 1;
          iVar13 = (uVar7 * 8 - uVar8) + local_70;
          puVar3 = (uint *)((int)*local_7c - iVar13);
          iVar2 = iVar2 - iVar13;
          if (((uint)(iVar2 < (int)puVar3) | uVar7 >> 0x1f) != 0) {
            return 0xfffffff8;
          }
          iVar13 = iVar9 + 1;
          pbVar6 = AudioMP3DecodeHuffman
                             ((int *)param_1,(byte *)((int)__dest + uVar7),&local_70,(int)puVar3,
                              iVar5,iVar9);
          __dest = (uint **)((byte *)((int)__dest + uVar7) + (int)pbVar6);
          if ((int)pbVar6 < 0) {
            return 0xfffffff7;
          }
          iVar2 = ((uVar1 + (int)pbVar6 * -8) - local_70) + iVar2;
          iVar9 = iVar13;
        } while (iVar13 < (int)param_1[0x1ef]);
      }
      uVar8 = AudioMP3Dequantize((int *)param_1,iVar5);
      if ((int)uVar8 < 0) {
        return 0xfffffff6;
      }
      puVar3 = param_1[0x1ef];
      if (0 < (int)puVar3) {
        iVar9 = 0;
        do {
          iVar13 = iVar9 + 1;
          iVar9 = AudioMP3IMDCT((int *)param_1,iVar5,iVar9);
          if (iVar9 < 0) {
            return 0xfffffff5;
          }
          puVar3 = param_1[0x1ef];
          iVar9 = iVar13;
        } while (iVar13 < (int)puVar3);
      }
      iVar9 = AudioMP3Subband((int)param_1,param_4 + (int)param_1[0x1f2] * iVar5 * (int)puVar3);
      if (iVar9 < 0) {
        return 0xfffffff4;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)param_1[0x1f1]);
  }
  return 0;
}



int AudioMP3UnpackScaleFactors
              (int *param_1,int param_2,uint *param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  undefined *puVar14;
  uint *puVar15;
  int iVar16;
  byte *apbStack88 [4];
  uint local_48 [4];
  uint local_38 [5];
  
  if ((((param_1 == (int *)0x0) || (iVar5 = *param_1, iVar5 == 0)) ||
      (iVar16 = param_1[1], iVar16 == 0)) || (iVar10 = param_1[2], iVar10 == 0)) {
    return -1;
  }
  iVar7 = param_4 + *param_3 + 7;
  if (iVar7 < 0) {
    iVar7 = param_4 + *param_3 + 0xe;
  }
  xmp3_SetBitstreamPointer(apbStack88,iVar7 >> 3,param_2);
  if (*param_3 != 0) {
    xmp3_GetBits(apbStack88,*param_3);
  }
  iVar7 = *(int *)(iVar5 + 4);
  if (iVar7 == 0) {
    iVar5 = iVar16 + param_5 * 0x90 + param_6 * 0x48 + 0x28;
    iVar6 = iVar10 + param_6 * 0x3e + param_5 * 0x7c;
    uVar11 = (uint)(byte)(&DAT_0003c584)[*(int *)(iVar5 + 0xc) * 2];
    uVar8 = (uint)(byte)(&DAT_0003c585)[*(int *)(iVar5 + 0xc) * 2];
    if (*(int *)(iVar5 + 0x14) == 2) {
      iVar5 = *(int *)(iVar5 + 0x18);
      if (iVar5 != 0) {
        do {
          uVar2 = xmp3_GetBits(apbStack88,uVar11);
          *(char *)(iVar6 + iVar7) = (char)uVar2;
          iVar7 = iVar7 + 1;
        } while (iVar7 != 8);
        iVar5 = 3;
      }
      puVar14 = (undefined *)(iVar6 + iVar5 * 3 + 0x17);
      do {
        uVar2 = xmp3_GetBits(apbStack88,uVar11);
        *puVar14 = (char)uVar2;
        uVar2 = xmp3_GetBits(apbStack88,uVar11);
        puVar14[1] = (char)uVar2;
        iVar5 = iVar5 + 1;
        uVar2 = xmp3_GetBits(apbStack88,uVar11);
        puVar14[2] = (char)uVar2;
        puVar14 = puVar14 + 3;
        iVar10 = iVar6;
      } while (iVar5 != 6);
      do {
        uVar11 = xmp3_GetBits(apbStack88,uVar8);
        *(char *)(iVar10 + 0x29) = (char)uVar11;
        uVar11 = xmp3_GetBits(apbStack88,uVar8);
        *(char *)(iVar10 + 0x2a) = (char)uVar11;
        iVar5 = iVar5 + 1;
        uVar11 = xmp3_GetBits(apbStack88,uVar8);
        *(char *)(iVar10 + 0x2b) = (char)uVar11;
        iVar10 = iVar10 + 3;
      } while (iVar5 != 0xc);
      *(undefined *)(iVar6 + 0x3d) = 0;
      *(undefined *)(iVar6 + 0x3c) = 0;
      *(undefined *)(iVar6 + 0x3b) = 0;
    }
    else {
      iVar5 = param_5;
      if (param_5 == 0) {
        do {
          uVar2 = xmp3_GetBits(apbStack88,uVar11);
          *(char *)(iVar6 + iVar5) = (char)uVar2;
          iVar5 = iVar5 + 1;
        } while (iVar5 != 0xb);
        do {
          uVar11 = xmp3_GetBits(apbStack88,uVar8);
          *(char *)(iVar6 + iVar5) = (char)uVar11;
          iVar5 = iVar5 + 1;
        } while (iVar5 != 0x15);
      }
      else {
        iVar10 = iVar10 + param_6 * 0x3e;
        iVar5 = param_6 * 0x10 + 8;
        iVar12 = *(int *)(iVar16 + iVar5);
        iVar5 = iVar16 + iVar5;
        if (iVar12 == 0) {
          do {
            uVar2 = xmp3_GetBits(apbStack88,uVar11);
            *(char *)(iVar6 + iVar12) = (char)uVar2;
            iVar12 = iVar12 + 1;
          } while (iVar12 != 6);
        }
        else {
          do {
            *(undefined *)(iVar6 + iVar7) = *(undefined *)(iVar10 + iVar7);
            iVar7 = iVar7 + 1;
          } while (iVar7 != 6);
        }
        if (*(int *)(iVar5 + 4) == 0) {
          iVar7 = 6;
          do {
            uVar2 = xmp3_GetBits(apbStack88,uVar11);
            *(char *)(iVar6 + iVar7) = (char)uVar2;
            iVar7 = iVar7 + 1;
          } while (iVar7 != 0xb);
        }
        else {
          *(undefined *)(iVar6 + 6) = *(undefined *)(iVar10 + 6);
          *(undefined *)(iVar6 + 7) = *(undefined *)(iVar10 + 7);
          *(undefined *)(iVar6 + 8) = *(undefined *)(iVar10 + 8);
          *(undefined *)(iVar6 + 9) = *(undefined *)(iVar10 + 9);
          *(undefined *)(iVar6 + 10) = *(undefined *)(iVar10 + 10);
        }
        if (*(int *)(iVar5 + 8) == 0) {
          iVar7 = 0xb;
          do {
            uVar11 = xmp3_GetBits(apbStack88,uVar8);
            *(char *)(iVar6 + iVar7) = (char)uVar11;
            iVar7 = iVar7 + 1;
          } while (iVar7 != 0x10);
        }
        else {
          *(undefined *)(iVar6 + 0xb) = *(undefined *)(iVar10 + 0xb);
          *(undefined *)(iVar6 + 0xc) = *(undefined *)(iVar10 + 0xc);
          *(undefined *)(iVar6 + 0xd) = *(undefined *)(iVar10 + 0xd);
          *(undefined *)(iVar6 + 0xe) = *(undefined *)(iVar10 + 0xe);
          *(undefined *)(iVar6 + 0xf) = *(undefined *)(iVar10 + 0xf);
        }
        if (*(int *)(iVar5 + 0xc) == 0) {
          iVar5 = 0x10;
          do {
            uVar11 = xmp3_GetBits(apbStack88,uVar8);
            *(char *)(iVar6 + iVar5) = (char)uVar11;
            iVar5 = iVar5 + 1;
          } while (iVar5 != 0x15);
        }
        else {
          *(undefined *)(iVar6 + 0x10) = *(undefined *)(iVar10 + 0x10);
          *(undefined *)(iVar6 + 0x11) = *(undefined *)(iVar10 + 0x11);
          *(undefined *)(iVar6 + 0x12) = *(undefined *)(iVar10 + 0x12);
          *(undefined *)(iVar6 + 0x13) = *(undefined *)(iVar10 + 0x13);
          *(undefined *)(iVar6 + 0x14) = *(undefined *)(iVar10 + 0x14);
        }
        *(undefined *)(iVar6 + 0x15) = 0;
        *(undefined *)(iVar6 + 0x16) = 0;
      }
    }
    goto LAB_0002a330;
  }
  uVar11 = *(uint *)(iVar5 + 0x24) & 1;
  iVar7 = iVar10 + param_5 * 0x7c + param_6 * 0x3e;
  iVar5 = iVar16 + param_5 * 0x90 + param_6 * 0x48 + 0x28;
  uVar8 = *(uint *)(iVar5 + 0xc);
  if ((uVar11 == 0) || (param_6 != 1)) {
    if ((int)uVar8 < 400) {
      local_48[2] = (uVar8 << 0x1c) >> 0x1e;
      local_48[3] = uVar8 & 3;
      uVar2 = 0;
      iVar6 = 0;
      local_48[0] = ((int)uVar8 >> 4) / 5;
      local_48[1] = ((int)uVar8 >> 4) % 5;
      uVar4 = 0;
      goto LAB_0002a254;
    }
    if (499 < (int)uVar8) {
      uVar4 = *(uint *)(iVar5 + 0x18);
      local_48[0] = (int)(uVar8 - 500) / 3;
      local_48[3] = 0;
      local_48[2] = 0;
      local_48[1] = (int)(uVar8 - 500) % 3;
      if (uVar4 == 0) {
        uVar2 = 1;
        iVar6 = 2;
      }
      else {
        local_48[2] = local_48[1];
        uVar2 = 1;
        local_48[1] = local_48[0];
        iVar6 = 2;
        uVar4 = 0;
      }
      goto LAB_0002a254;
    }
    iVar12 = (int)(uVar8 - 400) >> 2;
    iVar6 = 1;
    uVar4 = 0;
    uVar2 = 0;
    local_48[3] = 0;
    local_48[2] = uVar8 - 400 & 3;
    local_48[0] = iVar12 / 5;
    local_48[1] = iVar12 % 5;
    iVar12 = *(int *)(iVar5 + 0x14);
    if (iVar12 == 2) goto LAB_0002a55c;
    iVar3 = 0;
    uVar2 = 0;
    uVar4 = 0;
  }
  else {
    iVar12 = (int)uVar8 >> 1;
    uVar4 = uVar8 & 1;
    if (iVar12 < 0xb4) {
      uVar2 = 0;
      local_48[3] = 0;
      iVar6 = 3;
      local_48[0] = iVar12 / 0x24;
      local_48[1] = (iVar12 % 0x24) / 6;
      local_48[2] = (iVar12 % 0x24) % 6;
    }
    else {
      if (iVar12 < 0xf4) {
        uVar8 = iVar12 - 0xb4;
        uVar2 = 0;
        local_48[3] = 0;
        local_48[1] = uVar8 * 0x10000000 >> 0x1e;
        iVar6 = 4;
        local_48[0] = (int)uVar8 >> 4;
        local_48[2] = uVar8 & 3;
      }
      else {
        uVar2 = 0;
        iVar6 = 5;
        local_48[3] = 0;
        local_48[2] = 0;
        local_48[0] = (iVar12 + -0xf4) / 3;
        local_48[1] = (iVar12 + -0xf4) % 3;
      }
    }
LAB_0002a254:
    iVar12 = *(int *)(iVar5 + 0x14);
    if (iVar12 == 2) {
LAB_0002a55c:
      if (*(int *)(iVar5 + 0x18) == 0) {
        iVar3 = 1;
      }
      else {
        iVar3 = 2;
      }
    }
    else {
      iVar3 = 0;
    }
  }
  uVar8 = local_48[0];
  iVar3 = iVar6 * 3 + iVar3;
  iVar6 = iVar3 * 4;
  uVar9 = (uint)(byte)(&DAT_0003c5a4)[iVar3 * 4];
  bVar1 = (&DAT_0003c5a5)[iVar6];
  local_38[0] = uVar9;
  local_38[2] = (uint)(byte)(&DAT_0003c5a6)[iVar6];
  local_38[1] = (uint)bVar1;
  local_38[3] = (uint)(byte)(&DAT_0003c5a7)[iVar6];
  if ((uVar11 != 0) && (param_6 == 1)) {
    uVar11 = uVar9;
    iVar6 = iVar10 + 0xf8;
    iVar3 = 0;
    while( true ) {
      *(undefined4 *)(iVar10 + 0xf8 + iVar3 + 4) = *(undefined4 *)((int)local_48 + iVar3);
      *(uint *)(iVar6 + 0x14) = uVar11;
      iVar6 = iVar6 + 4;
      if (iVar3 + 4 == 0x10) break;
      uVar11 = *(uint *)((int)local_38 + iVar3 + 4);
      iVar3 = iVar3 + 4;
    }
    *(uint *)(iVar10 + 0xf8) = uVar4;
  }
  *(uint *)(iVar5 + 0x3c) = uVar2;
  if (iVar12 == 2) {
    iVar10 = *(int *)(iVar5 + 0x18);
    iVar5 = iVar10;
    if (iVar10 != 0) {
      iVar5 = 0;
      do {
        uVar11 = xmp3_GetBits(apbStack88,uVar8);
        *(char *)(iVar7 + iVar5) = (char)uVar11;
        iVar5 = iVar5 + 1;
      } while (iVar5 != 6);
      iVar10 = 3;
      uVar9 = (uint)bVar1;
      iVar5 = 1;
    }
    puVar15 = local_38 + iVar5;
    puVar13 = local_48 + iVar5;
    while( true ) {
      if (0 < (int)uVar9) {
        uVar8 = *puVar13;
        puVar14 = (undefined *)(iVar7 + iVar10 * 3 + 0x17);
        do {
          uVar11 = xmp3_GetBits(apbStack88,uVar8);
          *puVar14 = (char)uVar11;
          uVar11 = xmp3_GetBits(apbStack88,uVar8);
          puVar14[1] = (char)uVar11;
          uVar11 = xmp3_GetBits(apbStack88,uVar8);
          puVar14[2] = (char)uVar11;
          puVar14 = puVar14 + 3;
        } while (puVar14 != (undefined *)(iVar7 + 0x17 + (uVar9 + iVar10) * 3));
        iVar10 = uVar9 + iVar10;
      }
      iVar5 = iVar5 + 1;
      puVar13 = puVar13 + 1;
      if (iVar5 == 4) break;
      puVar15 = puVar15 + 1;
      uVar9 = *puVar15;
    }
    *(undefined *)(iVar7 + 0x3d) = 0;
    *(undefined *)(iVar7 + 0x3c) = 0;
    *(undefined *)(iVar7 + 0x3b) = 0;
  }
  else {
    iVar10 = 0;
    iVar5 = 0;
    while( true ) {
      if (0 < (int)uVar9) {
        uVar8 = *(uint *)((int)local_48 + iVar5);
        puVar14 = (undefined *)(iVar7 + iVar10 + -1);
        do {
          uVar11 = xmp3_GetBits(apbStack88,uVar8);
          puVar14 = puVar14 + 1;
          *puVar14 = (char)uVar11;
        } while (puVar14 != (undefined *)(iVar7 + -1 + iVar10 + uVar9));
        iVar10 = iVar10 + uVar9;
      }
      if (iVar5 + 4 == 0x10) break;
      uVar9 = *(uint *)((int)local_38 + iVar5 + 4);
      iVar5 = iVar5 + 4;
    }
    *(undefined *)(iVar7 + 0x16) = 0;
    *(undefined *)(iVar7 + 0x15) = 0;
  }
LAB_0002a330:
  param_1[param_6 + param_5 * 2 + 0x1f8] = *(int *)(iVar16 + param_5 * 0x90 + param_6 * 0x48 + 0x28)
  ;
  iVar5 = xmp3_CalcBitsUsed((int *)apbStack88,param_2,*param_3);
  uVar8 = *param_3;
  *param_3 = iVar5 + uVar8 & 7;
  return (int)(iVar5 + uVar8) >> 3;
}



void AudioMP3mad_stream_buffer(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x1058) = param_2;
  *(int *)(param_1 + 0x105c) = param_2 + param_3;
  AudioMP3mad_bit_init((undefined4 *)(param_1 + 0x1068),param_2);
  return;
}



undefined4 AudioMP3Subband(int param_1,ushort *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if ((((param_1 == 0) || (*(int *)(param_1 + 0xc) == 0)) ||
      (iVar5 = *(int *)(param_1 + 0x14), iVar5 == 0)) ||
     (iVar4 = *(int *)(param_1 + 0x18), iVar4 == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar6 = 0;
    uVar3 = *(uint *)(iVar4 + 0x2200);
    if (*(int *)(param_1 + 0x7bc) == 2) {
      do {
        uVar7 = uVar6 & 1;
        xmp3_FDCT32((int *)(iVar5 + uVar6 * 0x80),iVar4,uVar3,uVar7,*(int *)(iVar5 + 0x1b18));
        iVar2 = uVar6 + 0x12;
        uVar6 = uVar6 + 1;
        xmp3_FDCT32((int *)(iVar5 + iVar2 * 0x80),iVar4 + 0x80,*(int *)(iVar4 + 0x2200),uVar7,
                    *(int *)(iVar5 + 0x1b1c));
        xmp3_PolyphaseStereo
                  (param_2,(int *)(iVar4 + (*(int *)(iVar4 + 0x2200) + uVar7 * 0x440) * 4),
                   (int *)xmp3_polyCoef);
        uVar3 = *(int *)(iVar4 + 0x2200) - uVar7 & 7;
        *(uint *)(iVar4 + 0x2200) = uVar3;
        param_2 = param_2 + 0x40;
      } while (uVar6 != 0x12);
    }
    else {
      do {
        uVar7 = uVar6 & 1;
        iVar2 = uVar6 * 0x80;
        uVar6 = uVar6 + 1;
        xmp3_FDCT32((int *)(iVar5 + iVar2),iVar4,uVar3,uVar7,*(int *)(iVar5 + 0x1b18));
        xmp3_PolyphaseMono(param_2,(int *)(iVar4 + (*(int *)(iVar4 + 0x2200) + uVar7 * 0x440) * 4),
                           (int *)xmp3_polyCoef);
        uVar3 = *(int *)(iVar4 + 0x2200) - uVar7 & 7;
        *(uint *)(iVar4 + 0x2200) = uVar3;
        param_2 = param_2 + 0x20;
      } while (uVar6 != 0x12);
    }
    uVar1 = 0;
  }
  return uVar1;
}



void AudioMP3mad_synth_mute(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  do {
    iVar4 = 0;
    do {
      iVar1 = 8;
      puVar2 = (undefined4 *)(param_1 + (iVar3 * 0x40 + iVar4) * 0x20 + 0x3474);
      do {
        iVar1 = iVar1 + -1;
        puVar2[0x180] = 0;
        puVar2[0x100] = 0;
        puVar2[0x80] = 0;
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      } while (iVar1 != 0);
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x10);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 2);
  return;
}



void AudioMP3mad_synth_init(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  do {
    iVar4 = 0;
    do {
      iVar1 = 8;
      puVar2 = (undefined4 *)(param_1 + (iVar3 * 0x40 + iVar4) * 0x20 + 0x3474);
      do {
        iVar1 = iVar1 + -1;
        puVar2[0x180] = 0;
        puVar2[0x100] = 0;
        puVar2[0x80] = 0;
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      } while (iVar1 != 0);
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x10);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 2);
  *(undefined4 *)(param_1 + 0x4474) = 0;
  *(undefined4 *)(param_1 + 0x4478) = 0;
  *(undefined2 *)(param_1 + 0x447c) = 0;
  *(undefined2 *)(param_1 + 0x447e) = 0;
  return;
}



void AudioMP3mad_synth_frame(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  undefined *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined *puVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined *puVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int *piVar32;
  int *piVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  uint uVar43;
  int *piVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  undefined2 uVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  uint uVar53;
  int iVar54;
  undefined *puVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  uint uVar74;
  uint uVar75;
  int iVar76;
  int iVar77;
  int iVar78;
  int iVar79;
  int iVar80;
  int iVar81;
  int iVar82;
  int *local_fc;
  int *local_f8;
  int *local_78;
  uint local_74;
  uint local_50;
  uint local_2c;
  
  local_2c = 0;
  if (*(int *)(param_2 + 0x20) == 0) {
    uVar28 = 1;
  }
  else {
    uVar28 = 2;
  }
  if (*(int *)(param_2 + 8) == 1) {
    uVar48 = 0x180;
    uVar53 = 0xc;
  }
  else {
    uVar48 = 0x480;
    uVar53 = 0x24;
  }
  *(short *)(param_1 + 0x447c) = (short)uVar28;
  *(undefined2 *)(param_1 + 0x447e) = uVar48;
  do {
    local_74 = *(uint *)(param_1 + 0x4474);
    iVar34 = param_1 + local_2c * 0x1200;
    iVar39 = param_1 + local_2c * 0x800 + 0x3474;
    local_50 = 0;
    local_78 = (int *)(iVar34 + 0x44fc);
    do {
      puVar14 = &DAT_00001074 + iVar34 + local_50 * 0x80;
      iVar45 = *(int *)(&DAT_00001074 + iVar34 + local_50 * 0x80);
      iVar31 = (*(int *)(puVar14 + 0x3c) - *(int *)(puVar14 + 0x40)) + 0x800 >> 0xc;
      iVar47 = (*(int *)(puVar14 + 0x20) - *(int *)(puVar14 + 0x5c)) + 0x800 >> 0xc;
      iVar18 = ((*(int *)(puVar14 + 0x1c) - *(int *)(puVar14 + 0x60)) + 0x800 >> 0xc) * 0xbdb;
      iVar16 = (*(int *)(puVar14 + 0x30) - *(int *)(puVar14 + 0x4c)) + 0x800 >> 0xc;
      iVar76 = ((*(int *)(puVar14 + 0xc) - *(int *)(puVar14 + 0x70)) + 0x800 >> 0xc) * 0xf11;
      iVar2 = (*(int *)(puVar14 + 0x2c) - *(int *)(puVar14 + 0x50)) + 0x800 >> 0xc;
      iVar29 = ((*(int *)(puVar14 + 0x10) - *(int *)(puVar14 + 0x6c)) + 0x800 >> 0xc) * 0xe77;
      iVar40 = ((*(int *)(puVar14 + 4) - *(int *)(puVar14 + 0x78)) + 0x800 >> 0xc) * 0xfd4;
      iVar21 = (*(int *)(puVar14 + 0x38) - *(int *)(puVar14 + 0x44)) + 0x800 >> 0xc;
      iVar3 = (*(int *)(puVar14 + 0x24) - *(int *)(puVar14 + 0x58)) + 0x800 >> 0xc;
      iVar77 = ((*(int *)(puVar14 + 0x18) - *(int *)(puVar14 + 100)) + 0x800 >> 0xc) * 0xcda;
      iVar4 = (*(int *)(puVar14 + 0x34) - *(int *)(puVar14 + 0x48)) + 0x800 >> 0xc;
      iVar62 = ((*(int *)(puVar14 + 8) - *(int *)(puVar14 + 0x74)) + 0x800 >> 0xc) * 0xf85;
      iVar78 = ((*(int *)(puVar14 + 0x14) - *(int *)(puVar14 + 0x68)) + 0x800 >> 0xc) * 0xdb9;
      iVar15 = (*(int *)(puVar14 + 0x28) - *(int *)(puVar14 + 0x54)) + 0x800 >> 0xc;
      iVar35 = ((iVar45 - *(int *)(puVar14 + 0x7c)) + 0x800 >> 0xc) * 0xffb;
      iVar25 = iVar18 + iVar47 * -0xabf + 0x800 >> 0xc;
      iVar26 = iVar29 + iVar2 * -0x6d7 + 0x800 >> 0xc;
      iVar52 = iVar77 + iVar3 * -0x988 + 0x800 >> 0xc;
      iVar63 = iVar62 + iVar4 * 0x3e3;
      iVar70 = (iVar35 + iVar31 * -0xc9 + 0x800 >> 0xc) * 0xfec;
      iVar5 = iVar78 + iVar15 * -0x83a + 0x800 >> 0xc;
      iVar78 = iVar78 + iVar15 * 0x83a;
      iVar56 = (iVar76 + iVar16 * -0x564 + 0x800 >> 0xc) * 0xc5e;
      iVar19 = (iVar40 + iVar21 * -0x259 + 0x800 >> 0xc) * 0xf50;
      iVar57 = (iVar62 + iVar4 * -0x3e3 + 0x800 >> 0xc) * 0xe1c;
      iVar35 = iVar35 + iVar31 * 0xc9;
      iVar18 = iVar18 + iVar47 * 0xabf;
      iVar76 = iVar76 + iVar16 * 0x564;
      iVar29 = iVar29 + iVar2 * 0x6d7;
      iVar45 = iVar45 + *(int *)(puVar14 + 0x7c);
      iVar40 = iVar40 + iVar21 * 0x259;
      iVar77 = iVar77 + iVar3 * 0x988;
      iVar23 = *(int *)(puVar14 + 0x3c) + *(int *)(puVar14 + 0x40);
      iVar36 = *(int *)(puVar14 + 0x1c) + *(int *)(puVar14 + 0x60);
      iVar64 = *(int *)(puVar14 + 0x20) + *(int *)(puVar14 + 0x5c);
      iVar30 = *(int *)(puVar14 + 0xc) + *(int *)(puVar14 + 0x70);
      iVar71 = *(int *)(puVar14 + 0x30) + *(int *)(puVar14 + 0x4c);
      iVar62 = *(int *)(puVar14 + 0x10) + *(int *)(puVar14 + 0x6c);
      iVar46 = *(int *)(puVar14 + 0x2c) + *(int *)(puVar14 + 0x50);
      iVar79 = *(int *)(puVar14 + 4) + *(int *)(puVar14 + 0x78);
      iVar20 = *(int *)(puVar14 + 0x38) + *(int *)(puVar14 + 0x44);
      iVar54 = *(int *)(puVar14 + 0x18) + *(int *)(puVar14 + 100);
      iVar49 = *(int *)(puVar14 + 0x24) + *(int *)(puVar14 + 0x58);
      iVar41 = *(int *)(puVar14 + 8) + *(int *)(puVar14 + 0x74);
      iVar58 = *(int *)(puVar14 + 0x34) + *(int *)(puVar14 + 0x48);
      iVar24 = *(int *)(puVar14 + 0x14) + *(int *)(puVar14 + 0x68);
      iVar37 = *(int *)(puVar14 + 0x28) + *(int *)(puVar14 + 0x54);
      iVar31 = (iVar76 - iVar29) + 0x800 >> 0xc;
      iVar47 = (iVar63 - iVar78) + 0x800 >> 0xc;
      iVar16 = iVar56 + iVar26 * -0xa26 + 0x800 >> 0xc;
      iVar2 = iVar57 + iVar5 * -0x78b + 0x800 >> 0xc;
      iVar21 = (iVar36 - iVar64) + 0x800 >> 0xc;
      iVar3 = (iVar62 - iVar46) + 0x800 >> 0xc;
      iVar72 = ((iVar35 - iVar18) + 0x800 >> 0xc) * 0xfb1;
      iVar65 = ((iVar40 - iVar77) + 0x800 >> 0xc) * 0xd4e;
      iVar50 = (iVar70 + iVar25 * -0x191 + 0x800 >> 0xc) * 0xfb1;
      iVar42 = (iVar19 + iVar52 * -0x4a5 + 0x800 >> 0xc) * 0xd4e;
      iVar4 = (iVar54 - iVar49) + 0x800 >> 0xc;
      iVar15 = (iVar24 - iVar37) + 0x800 >> 0xc;
      iVar80 = ((iVar45 - iVar23) + 0x800 >> 0xc) * 0xfec;
      iVar35 = iVar35 + iVar18;
      iVar76 = iVar76 + iVar29;
      iVar40 = iVar40 + iVar77;
      iVar63 = iVar63 + iVar78;
      iVar70 = iVar70 + iVar25 * 0x191;
      iVar29 = ((iVar30 - iVar71) + 0x800 >> 0xc) * 0xc5e;
      iVar56 = iVar56 + iVar26 * 0xa26;
      iVar19 = iVar19 + iVar52 * 0x4a5;
      iVar57 = iVar57 + iVar5 * 0x78b;
      iVar78 = ((iVar79 - iVar20) + 0x800 >> 0xc) * 0xf50;
      iVar38 = iVar35 + iVar76;
      iVar77 = ((iVar41 - iVar58) + 0x800 >> 0xc) * 0xe1c;
      iVar81 = iVar40 + iVar63;
      iVar66 = iVar70 + iVar56;
      iVar18 = iVar19 + iVar57;
      iVar25 = (iVar19 - iVar57) + 0x800 >> 0xc;
      iVar51 = iVar38 + iVar81;
      iVar57 = iVar66 + iVar18;
      iVar26 = (iVar40 - iVar63) + 0x800 >> 0xc;
      iVar52 = iVar65 + iVar47 * -0x8e4 + 0x800 >> 0xc;
      iVar59 = iVar57 * 2 - iVar51;
      iVar73 = ((iVar35 - iVar76) + 0x800 >> 0xc) * 0xec8;
      iVar5 = iVar42 + iVar2 * -0x8e4 + 0x800 >> 0xc;
      iVar19 = ((iVar70 - iVar56) + 0x800 >> 0xc) * 0xec8;
      iVar60 = iVar72 + iVar31 * 799;
      iVar65 = iVar65 + iVar47 * 0x8e4;
      iVar67 = iVar50 + iVar16 * 799;
      iVar42 = iVar42 + iVar2 * 0x8e4;
      iVar47 = iVar29 + iVar3 * -0xa26 + 0x800 >> 0xc;
      iVar45 = iVar45 + iVar23;
      iVar2 = iVar77 + iVar15 * -0x78b + 0x800 >> 0xc;
      iVar36 = iVar36 + iVar64;
      iVar30 = iVar30 + iVar71;
      iVar62 = iVar62 + iVar46;
      iVar79 = iVar79 + iVar20;
      iVar54 = iVar54 + iVar49;
      iVar41 = iVar41 + iVar58;
      iVar24 = iVar24 + iVar37;
      iVar56 = iVar60 + iVar65;
      iVar58 = iVar67 + iVar42;
      iVar71 = (iVar72 + iVar31 * -799 + 0x800 >> 0xc) * 0xec8;
      iVar82 = iVar56 * 2 - iVar59;
      iVar57 = iVar58 * 2 - iVar57;
      iVar76 = (iVar50 + iVar16 * -799 + 0x800 >> 0xc) * 0xec8;
      iVar31 = (iVar30 - iVar62) + 0x800 >> 0xc;
      iVar16 = (iVar41 - iVar24) + 0x800 >> 0xc;
      iVar49 = (iVar80 + iVar21 * -0x191 + 0x800 >> 0xc) * 0xfb1;
      iVar23 = (iVar78 + iVar4 * -0x4a5 + 0x800 >> 0xc) * 0xd4e;
      iVar68 = iVar57 * 2 - iVar82;
      iVar70 = ((iVar45 - iVar36) + 0x800 >> 0xc) * 0xfb1;
      iVar64 = iVar73 + iVar26 * 0x61f;
      iVar20 = ((iVar79 - iVar54) + 0x800 >> 0xc) * 0xd4e;
      iVar37 = iVar19 + iVar25 * 0x61f;
      iVar63 = iVar64 * 2 - iVar68;
      iVar57 = iVar37 * 2 - iVar57;
      iVar29 = iVar29 + iVar3 * 0xa26;
      iVar80 = iVar80 + iVar21 * 0x191;
      iVar78 = iVar78 + iVar4 * 0x4a5;
      iVar77 = iVar77 + iVar15 * 0x78b;
      iVar72 = iVar71 + iVar52 * 0x61f;
      iVar56 = iVar72 * 2 - iVar56;
      iVar46 = iVar76 + iVar5 * 0x61f;
      iVar69 = iVar57 * 2 - iVar63;
      iVar58 = iVar46 * 2 - iVar58;
      iVar21 = (iVar78 - iVar77) + 0x800 >> 0xc;
      iVar61 = ((iVar80 - iVar29) + 0x800 >> 0xc) * 0xec8;
      iVar3 = iVar23 + iVar2 * -0x8e4 + 0x800 >> 0xc;
      iVar15 = iVar56 * 2 - iVar69;
      iVar57 = iVar58 * 2 - iVar57;
      iVar35 = (iVar49 + iVar47 * -799 + 0x800 >> 0xc) * 0xec8;
      iVar4 = iVar20 + iVar16 * -0x8e4 + 0x800 >> 0xc;
      iVar45 = iVar45 + iVar36;
      iVar30 = iVar30 + iVar62;
      iVar79 = iVar79 + iVar54;
      iVar41 = iVar41 + iVar24;
      iVar50 = iVar57 * 2 - iVar15;
      iVar40 = (iVar70 + iVar31 * -799 + 0x800 >> 0xc) * 0xec8;
      iVar36 = ((iVar45 - iVar30) + 0x800 >> 0xc) * 0xec8;
      iVar80 = iVar80 + iVar29;
      iVar78 = iVar78 + iVar77;
      iVar49 = iVar49 + iVar47 * 799;
      iVar23 = iVar23 + iVar2 * 0x8e4;
      iVar2 = (iVar79 - iVar41) + 0x800 >> 0xc;
      iVar57 = ((iVar66 - iVar18) + 0x800 >> 0xc) * 0x16a0 - iVar57;
      iVar62 = ((iVar38 - iVar81) + 0x800 >> 0xc) * 0x16a0 - iVar50;
      iVar47 = iVar80 + iVar78;
      iVar24 = iVar49 + iVar23;
      iVar66 = iVar57 * 2 - iVar62;
      iVar77 = iVar24 * 2 - iVar47;
      iVar56 = ((iVar60 - iVar65) + 0x800 >> 0xc) * 0x16a0 - iVar56;
      iVar58 = ((iVar67 - iVar42) + 0x800 >> 0xc) * 0x16a0 - iVar58;
      iVar70 = iVar70 + iVar31 * 799;
      iVar31 = iVar61 + iVar21 * 0x61f;
      iVar20 = iVar20 + iVar16 * 0x8e4;
      iVar42 = iVar35 + iVar3 * 0x61f;
      iVar54 = iVar56 * 2 - iVar66;
      iVar57 = iVar58 * 2 - iVar57;
      iVar60 = iVar31 * 2 - iVar77;
      iVar24 = iVar42 * 2 - iVar24;
      iVar38 = iVar57 * 2 - iVar54;
      iVar18 = iVar70 + iVar20;
      iVar45 = iVar45 + iVar30;
      iVar79 = iVar79 + iVar41;
      iVar41 = iVar24 * 2 - iVar60;
      iVar57 = ((iVar19 + iVar25 * -0x61f + 0x800 >> 0xc) * 0x16a0 - iVar37) * 2 - iVar57;
      iVar30 = ((iVar73 + iVar26 * -0x61f + 0x800 >> 0xc) * 0x16a0 - iVar64) * 2 - iVar38;
      iVar19 = ((iVar80 - iVar78) + 0x800 >> 0xc) * 0x16a0 - iVar41;
      iVar24 = ((iVar49 - iVar23) + 0x800 >> 0xc) * 0x16a0 - iVar24;
      iVar16 = iVar40 + iVar4 * 0x61f;
      iVar78 = iVar24 * 2 - iVar19;
      iVar25 = iVar16 * 2 - iVar18;
      iVar23 = iVar57 * 2 - iVar30;
      iVar29 = ((iVar61 + iVar21 * -0x61f + 0x800 >> 0xc) * 0x16a0 - iVar31) * 2 - iVar78;
      iVar37 = (((iVar71 + iVar52 * -0x61f + 0x800 >> 0xc) * 0x16a0 - iVar72) * 2 - iVar56) * 2 -
               iVar23;
      iVar70 = ((iVar70 - iVar20) + 0x800 >> 0xc) * 0x16a0 - iVar25;
      uVar74 = local_74 & 1;
      uVar1 = local_74 >> 1;
      iVar20 = iVar36 + iVar2 * 0x61f;
      iVar49 = iVar39 + (uVar74 + 2) * 0x200;
      iVar52 = iVar39 + uVar74 * 0x200;
      iVar21 = iVar49 + uVar1 * 4;
      iVar26 = iVar52 + uVar1 * 4;
      uVar17 = local_74 & 0xfffffffe;
      *(int *)(iVar21 + 0x1e0) = iVar45 + iVar79 + 0x800 >> 0xc;
      iVar31 = uVar17 * 4;
      *(int *)(iVar52 + uVar1 * 4) = ((iVar45 - iVar79) + 0x800 >> 0xc) * 0xb50 + 0x800 >> 0xc;
      uVar43 = local_74 - 1 & 0xe | 1;
      *(int *)(iVar21 + 0x1c0) = iVar51 + 0x800 >> 0xc;
      uVar75 = uVar74 ^ 1;
      *(int *)(iVar21 + 0x1a0) = iVar47 + 0x800 >> 0xc;
      iVar79 = iVar39 + uVar75 * 0x200;
      *(int *)(iVar21 + 0x180) = iVar59 + 0x800 >> 0xc;
      iVar47 = uVar43 * 4;
      *(int *)(iVar21 + 0x160) = iVar18 + 0x800 >> 0xc;
      *(int *)(iVar21 + 0x140) = iVar82 + 0x800 >> 0xc;
      *(int *)(iVar21 + 0x120) = iVar77 + 0x800 >> 0xc;
      piVar44 = (int *)(iVar39 + (uVar75 + 2) * 0x200);
      *(int *)(iVar21 + 0x100) = iVar68 + 0x800 >> 0xc;
      *(int *)(iVar21 + 0xe0) = iVar20 + 0x800 >> 0xc;
      *(int *)(iVar26 + 0x100) =
           ((iVar36 + iVar2 * -0x61f + 0x800 >> 0xc) * 0x16a0 - iVar20) + 0x800 >> 0xc;
      local_fc = local_78;
      *(int *)(iVar21 + 0xc0) = iVar63 + 0x800 >> 0xc;
      *(int *)(iVar21 + 0xa0) = iVar60 + 0x800 >> 0xc;
      *(int *)(iVar21 + 0x80) = iVar69 + 0x800 >> 0xc;
      *(int *)(iVar21 + 0x60) = iVar25 + 0x800 >> 0xc;
      *(int *)(iVar26 + 0x80) = iVar70 + 0x800 >> 0xc;
      *(int *)(iVar26 + 0x180) =
           (((iVar40 + iVar4 * -0x61f + 0x800 >> 0xc) * 0x16a0 - iVar16) * 2 - iVar70) + 0x800 >>
           0xc;
      *(int *)(iVar21 + 0x40) = iVar15 + 0x800 >> 0xc;
      *(int *)(iVar21 + 0x20) = iVar41 + 0x800 >> 0xc;
      *(int *)(iVar26 + 0xc0) = iVar78 + 0x800 >> 0xc;
      *(int *)(iVar26 + 0x1c0) =
           ((((iVar35 + iVar3 * -0x61f + 0x800 >> 0xc) * 0x16a0 - iVar42) * 2 - iVar24) * 2 - iVar29
           ) + 0x800 >> 0xc;
      *(int *)(iVar26 + 0x140) = iVar29 + 0x800 >> 0xc;
      *(int *)(iVar26 + 0x40) = iVar19 + 0x800 >> 0xc;
      *(int *)(iVar49 + uVar1 * 4) = iVar50 + 0x800 >> 0xc;
      *(int *)(iVar26 + 0x20) = iVar62 + 0x800 >> 0xc;
      *(int *)(iVar26 + 0x60) = iVar66 + 0x800 >> 0xc;
      *(int *)(iVar26 + 0xa0) = iVar54 + 0x800 >> 0xc;
      *(int *)(iVar26 + 0xe0) = iVar38 + 0x800 >> 0xc;
      *(int *)(iVar26 + 0x120) = iVar30 + 0x800 >> 0xc;
      *(int *)(iVar26 + 0x160) = iVar23 + 0x800 >> 0xc;
      *(int *)(iVar26 + 0x1a0) = iVar37 + 0x800 >> 0xc;
      *(int *)(iVar26 + 0x1e0) =
           (((((iVar76 + iVar5 * -0x61f + 0x800 >> 0xc) * 0x16a0 - iVar46) * 2 - iVar58) * 2 -
            iVar57) * 2 - iVar37) + 0x800 >> 0xc;
      local_f8 = local_78 + -0x1f;
      *local_f8 = ((((((((*(int *)(&DAT_0003c5f4 + iVar31) * *(int *)(iVar52 + 0x1c) +
                         *(int *)(&DAT_0003c5fc + iVar31) * *(int *)(iVar52 + 0x18) +
                         *(int *)(&DAT_0003c604 + iVar31) * *(int *)(iVar52 + 0x14) +
                         *(int *)(&DAT_0003c60c + iVar31) * *(int *)(iVar52 + 0x10) +
                         *(int *)(&DAT_0003c614 + iVar31) * *(int *)(iVar52 + 0xc) +
                         *(int *)(&DAT_0003c61c + iVar31) * *(int *)(iVar52 + 8) +
                         *(int *)(&DAT_0003c624 + iVar31) * *(int *)(iVar52 + 4) +
                         *(int *)(&DAT_0003c5ec + uVar17 * 4) * *(int *)(iVar39 + uVar74 * 0x200)) -
                        *(int *)(&DAT_0003c61c + iVar47) * *(int *)(iVar79 + 8)) -
                       *(int *)(&DAT_0003c5f4 + iVar47) * *(int *)(iVar79 + 0x1c)) -
                      *(int *)(&DAT_0003c604 + iVar47) * *(int *)(iVar79 + 0x14)) -
                     *(int *)(&DAT_0003c60c + iVar47) * *(int *)(iVar79 + 0x10)) -
                    *(int *)(&DAT_0003c5fc + iVar47) * *(int *)(iVar79 + 0x18)) -
                   *(int *)(&DAT_0003c624 + iVar47) * *(int *)(iVar79 + 4)) -
                  *(int *)(&DAT_0003c5ec + uVar43 * 4) * *(int *)(iVar39 + uVar75 * 0x200)) -
                  *(int *)(&DAT_0003c614 + iVar47) * *(int *)(iVar79 + 0xc) >> 2;
      puVar14 = &DAT_0003c5ec;
      piVar13 = piVar44;
      do {
        puVar14 = puVar14 + 0x80;
        puVar22 = puVar14 + iVar31;
        puVar27 = puVar14 + uVar43 * -4;
        puVar55 = puVar14 + uVar17 * -4;
        piVar32 = (int *)(puVar14 + iVar47);
        local_f8 = local_f8 + 1;
        *local_f8 = ((((((((*(int *)(puVar22 + 8) * *(int *)(iVar52 + 0x3c) +
                           *(int *)(puVar22 + 0x10) * *(int *)(iVar52 + 0x38) +
                           *(int *)(puVar22 + 0x18) * *(int *)(iVar52 + 0x34) +
                           *(int *)(puVar22 + 0x20) * *(int *)(iVar52 + 0x30) +
                           *(int *)(puVar22 + 0x28) * *(int *)(iVar52 + 0x2c) +
                           *(int *)(puVar22 + 0x30) * *(int *)(iVar52 + 0x28) +
                           *(int *)(puVar22 + 0x38) * *(int *)(iVar52 + 0x24) +
                           *(int *)(puVar14 + iVar31) * *(int *)(iVar52 + 0x20)) -
                          *piVar32 * *piVar13) - piVar32[0xe] * piVar13[1]) -
                        piVar32[2] * piVar13[7]) - piVar32[0xc] * piVar13[2]) -
                      piVar32[6] * piVar13[5]) - piVar32[8] * piVar13[4]) - piVar32[10] * piVar13[3]
                    ) - piVar32[4] * piVar13[6] >> 2;
        piVar32 = (int *)(iVar52 + 0x24);
        piVar6 = (int *)(iVar52 + 0x20);
        piVar7 = (int *)(iVar52 + 0x28);
        piVar8 = (int *)(iVar52 + 0x30);
        piVar9 = (int *)(iVar52 + 0x38);
        piVar10 = (int *)(iVar52 + 0x34);
        piVar11 = (int *)(iVar52 + 0x2c);
        piVar12 = (int *)(iVar52 + 0x3c);
        iVar52 = iVar52 + 0x20;
        piVar33 = local_fc + -1;
        *local_fc = *(int *)(puVar27 + 0x74) * piVar13[7] +
                    *(int *)(puVar27 + 0x6c) * piVar13[6] +
                    *(int *)(puVar27 + 100) * piVar13[5] +
                    *(int *)(puVar27 + 0x5c) * piVar13[4] +
                    *(int *)(puVar27 + 0x54) * piVar13[3] +
                    *(int *)(puVar27 + 0x4c) * piVar13[2] +
                    *(int *)(puVar27 + 0x44) * piVar13[1] +
                    *(int *)(puVar27 + 0x3c) * *piVar13 +
                    *(int *)(puVar55 + 0x74) * *piVar12 +
                    *(int *)(puVar55 + 0x6c) * *piVar9 +
                    *(int *)(puVar55 + 100) * *piVar10 +
                    *(int *)(puVar55 + 0x5c) * *piVar8 +
                    *(int *)(puVar55 + 0x54) * *piVar11 +
                    *(int *)(puVar55 + 0x4c) * *piVar7 +
                    *(int *)(puVar55 + 0x3c) * *piVar6 + *(int *)(puVar55 + 0x44) * *piVar32 >> 2;
        local_fc = piVar33;
        piVar13 = piVar13 + 8;
      } while (local_78 + -0xf != piVar33);
      local_50 = local_50 + 1;
      local_74 = local_74 + 1 & 0xf;
      local_78[-0xf] =
           -(*(int *)(&DAT_0003cdec + iVar47) * piVar44[0x78] +
            *(int *)(&DAT_0003cdf4 + iVar47) * piVar44[0x7f] +
            *(int *)(&DAT_0003cdfc + iVar47) * piVar44[0x7e] +
            *(int *)(&DAT_0003ce04 + iVar47) * piVar44[0x7d] +
            *(int *)(&DAT_0003ce0c + iVar47) * piVar44[0x7c] +
            *(int *)(&DAT_0003ce14 + iVar47) * piVar44[0x7b] +
            *(int *)(&DAT_0003ce1c + iVar47) * piVar44[0x7a] +
            *(int *)(&DAT_0003ce24 + iVar47) * piVar44[0x79]) >> 2;
      local_78 = local_78 + 0x20;
    } while (local_50 < uVar53);
    local_2c = local_2c + 1;
  } while (local_2c < uVar28);
  *(uint *)(param_1 + 0x4474) = uVar53 + *(int *)(param_1 + 0x4474) & 0xf;
  return;
}



int AudioMP3scale(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x1000;
  if (iVar1 < -0x10000000) {
    iVar1 = -0x10000000;
  }
  if (0xffffffe < iVar1) {
    iVar1 = 0xfffffff;
  }
  return iVar1 >> 0xd;
}



void AudioMP3output(int param_1,undefined2 *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  piVar2 = (int *)(param_1 + 0x4480);
  piVar1 = (int *)(param_1 + 0x5680);
  uVar3 = (uint)*(ushort *)(param_1 + 0x447e);
  if (*(short *)(param_1 + 0x447c) == 2) {
    while (bVar6 = uVar3 != 0, uVar3 = uVar3 - 1, bVar6) {
      iVar5 = *piVar2 + 0x1000;
      iVar4 = *piVar1 + 0x1000;
      if (iVar5 < -0x10000000) {
        iVar5 = -0x10000000;
      }
      if (iVar4 < -0x10000000) {
        iVar4 = -0x10000000;
      }
      if (0xffffffe < iVar5) {
        iVar5 = 0xfffffff;
      }
      if (0xffffffe < iVar4) {
        iVar4 = 0xfffffff;
      }
      *param_2 = (short)(iVar5 >> 0xd);
      param_2[1] = (short)(iVar4 >> 0xd);
      param_2 = param_2 + 2;
      piVar1 = piVar1 + 1;
      piVar2 = piVar2 + 1;
    }
  }
  else {
    while (bVar6 = uVar3 != 0, uVar3 = uVar3 - 1, bVar6) {
      iVar4 = *piVar2 + 0x1000;
      if (iVar4 < -0x10000000) {
        iVar4 = -0x10000000;
      }
      if (0xffffffe < iVar4) {
        iVar4 = 0xfffffff;
      }
      *param_2 = (short)(iVar4 >> 0xd);
      param_2 = param_2 + 1;
      piVar2 = piVar2 + 1;
    }
  }
  return;
}



void AudioMP3mad_bit_init(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = 8;
  return;
}



int AudioMP3mad_bit_length(int *param_1,int *param_2)

{
  return (uint)*(ushort *)((int)param_1 + 6) + (*param_2 - (*param_1 + 1)) * 8 +
         (8 - (uint)*(ushort *)((int)param_2 + 6));
}



int AudioMP3mad_bit_nextbyte(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (*(short *)((int)param_1 + 6) != 8) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



uint AudioMP3mad_bit_read(byte **param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  
  uVar3 = (uint)*(ushort *)((int)param_1 + 6);
  if (uVar3 == 8) {
    uVar7 = (uint)**param_1;
    *(ushort *)(param_1 + 1) = (ushort)**param_1;
  }
  else {
    uVar7 = (uint)*(ushort *)(param_1 + 1);
  }
  if (param_2 < uVar3) {
    *(short *)((int)param_1 + 6) = (short)(uVar3 - param_2);
    uVar7 = (int)(uVar7 & ~(-1 << (uVar3 & 0xff))) >> (uVar3 - param_2 & 0xff);
  }
  else {
    pbVar6 = *param_1;
    uVar2 = param_2 - uVar3;
    uVar7 = uVar7 & ~(-1 << (uVar3 & 0xff));
    *(undefined2 *)((int)param_1 + 6) = 8;
    pbVar4 = pbVar6 + 1;
    *param_1 = pbVar4;
    if (7 < uVar2) {
      do {
        pbVar5 = pbVar4 + 1;
        uVar7 = (uint)*pbVar4 | uVar7 << 8;
        *param_1 = pbVar5;
        pbVar4 = pbVar5;
      } while (pbVar5 != pbVar6 + (uVar2 - 8 >> 3) + 2);
      uVar2 = uVar2 & 7;
    }
    if (uVar2 != 0) {
      bVar1 = **param_1;
      *(short *)((int)param_1 + 6) = (short)(8 - uVar2);
      *(ushort *)(param_1 + 1) = (ushort)bVar1;
      uVar7 = (int)(uint)bVar1 >> (8 - uVar2 & 0xff) | uVar7 << (uVar2 & 0xff);
    }
  }
  return uVar7;
}



uint AudioMP3mad_bit_crc(byte *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  byte *local_20;
  undefined4 uStack28;
  
  uVar3 = param_3;
  local_20 = param_1;
  uStack28 = param_2;
  if (0x1f < param_3) {
    do {
      uVar1 = AudioMP3mad_bit_read(&local_20,0x20);
      uVar3 = uVar3 - 0x20;
      uVar2 = (uint)*(ushort *)(&DAT_0003d6d8 + ((param_4 << 0x10 ^ uVar1) >> 0x18) * 2) ^
              param_4 << 8;
      uVar2 = (uint)*(ushort *)(&DAT_0003d6d8 + ((uVar1 >> 0x10 ^ uVar2 >> 8) & 0xff) * 2) ^
              uVar2 << 8;
      uVar2 = (uint)*(ushort *)(&DAT_0003d6d8 + (((uVar2 ^ uVar1) << 0x10) >> 0x18) * 2) ^
              uVar2 << 8;
      param_4 = (uint)*(ushort *)(&DAT_0003d6d8 + ((uVar1 ^ uVar2 >> 8) & 0xff) * 2) ^ uVar2 << 8;
    } while (0x1f < uVar3);
    param_3 = param_3 & 0x1f;
  }
  uVar3 = param_3 >> 3;
  if (uVar3 == 2) {
LAB_0002c8d4:
    uVar3 = AudioMP3mad_bit_read(&local_20,8);
    param_4 = (uint)*(ushort *)(&DAT_0003d6d8 + ((uVar3 ^ param_4 >> 8) & 0xff) * 2) ^ param_4 << 8;
  }
  else {
    if (uVar3 == 3) {
      uVar3 = AudioMP3mad_bit_read(&local_20,8);
      param_4 = (uint)*(ushort *)(&DAT_0003d6d8 + ((uVar3 ^ param_4 >> 8) & 0xff) * 2) ^
                param_4 << 8;
      goto LAB_0002c8d4;
    }
    if (uVar3 != 1) goto LAB_0002c888;
  }
  uVar3 = AudioMP3mad_bit_read(&local_20,8);
  param_3 = param_3 & 7;
  param_4 = (uint)*(ushort *)(&DAT_0003d6d8 + ((uVar3 ^ param_4 >> 8) & 0xff) * 2) ^ param_4 << 8;
LAB_0002c888:
  while (bVar4 = param_3 != 0, param_3 = param_3 - 1, bVar4) {
    uVar1 = AudioMP3mad_bit_read(&local_20,1);
    uVar3 = param_4 >> 0xf;
    param_4 = param_4 << 1;
    if (((uVar1 ^ uVar3) & 1) != 0) {
      param_4 = param_4 ^ 0x8005;
    }
  }
  return param_4 & 0xffff;
}



void xmp3_SetBitstreamPointer(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[3] = param_2;
  *param_1 = param_3;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



uint xmp3_GetBits(byte **param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  uVar4 = param_2 & 0x1f;
  pbVar5 = param_1[2] + -uVar4;
  uVar3 = ((uint)param_1[1] >> (0x1f - uVar4 & 0xff)) >> 1;
  param_1[1] = (byte *)((int)param_1[1] << uVar4);
  param_1[2] = pbVar5;
  if ((int)pbVar5 < 0) {
    pbVar9 = param_1[3];
    if ((int)pbVar9 < 4) {
      pbVar10 = (byte *)0x0;
      param_1[1] = (byte *)0x0;
      pbVar6 = pbVar9;
      pbVar8 = pbVar9;
      if (pbVar9 != (byte *)0x0) {
        pbVar6 = *param_1;
        pbVar8 = pbVar6;
        do {
          pbVar7 = pbVar8 + 1;
          bVar1 = *pbVar8;
          *param_1 = pbVar7;
          pbVar10 = (byte *)(((uint)pbVar10 | (uint)bVar1) << 8);
          param_1[1] = pbVar10;
          pbVar8 = pbVar7;
        } while (pbVar7 != pbVar9 + (int)pbVar6);
        uVar4 = (int)pbVar10 << ((3 - (int)pbVar9) * 8 & 0xffU);
        pbVar6 = (byte *)(uVar4 >> ((uint)(pbVar5 + 0x20) & 0xff));
        pbVar8 = (byte *)(uVar4 << (-(int)pbVar5 & 0xffU));
      }
      pbVar10 = pbVar5 + (int)pbVar9 * 8;
      param_1[3] = (byte *)0x0;
    }
    else {
      pbVar8 = *param_1;
      pbVar10 = pbVar5 + 0x20;
      bVar1 = *pbVar8;
      *param_1 = pbVar8 + 1;
      param_1[1] = (byte *)((uint)bVar1 << 0x18);
      bVar2 = pbVar8[1];
      *param_1 = pbVar8 + 2;
      pbVar6 = (byte *)((uint)(byte *)((uint)bVar1 << 0x18) | (uint)bVar2 << 0x10);
      param_1[1] = pbVar6;
      bVar1 = pbVar8[2];
      *param_1 = pbVar8 + 3;
      pbVar6 = (byte *)((uint)pbVar6 | (uint)bVar1 << 8);
      param_1[1] = pbVar6;
      bVar1 = pbVar8[3];
      *param_1 = pbVar8 + 4;
      param_1[3] = pbVar9 + -4;
      uVar4 = (uint)pbVar6 | (uint)bVar1;
      pbVar6 = (byte *)(uVar4 >> ((uint)pbVar10 & 0xff));
      pbVar8 = (byte *)(uVar4 << (-(int)pbVar5 & 0xffU));
    }
    uVar3 = uVar3 | (uint)pbVar6;
    param_1[2] = pbVar10;
    param_1[1] = pbVar8;
  }
  return uVar3;
}



int xmp3_CalcBitsUsed(int *param_1,int param_2,int param_3)

{
  return ((*param_1 - param_2) * 8 - param_1[2]) - param_3;
}



int AudioMP3CheckPadBit(int *param_1)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    iVar1 = *(int *)(*param_1 + 0x18);
    if (iVar1 != 0) {
      iVar1 = 1;
    }
    return iVar1;
  }
  return -1;
}



undefined4 AudioMP3UnpackFrameHeader2(int param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  
  bVar4 = *(byte *)(param_3 + 1) >> 3;
  bVar13 = (bVar4 & 3) != 0;
  if (bVar13) {
    uVar7 = bVar4 & 1;
  }
  else {
    uVar7 = 2;
  }
  *param_2 = bVar4 & 3;
  if (bVar13) {
    uVar7 = uVar7 ^ 1;
  }
  param_2[1] = uVar7;
  uVar10 = ((uint)*(byte *)(param_3 + 1) << 0x1d) >> 0x1e;
  uVar8 = 4 - uVar10;
  param_2[2] = uVar8;
  param_2[3] = *(byte *)(param_3 + 1) & 1 ^ 1;
  uVar1 = (uint)(*(byte *)(param_3 + 2) >> 4);
  param_2[4] = uVar1;
  uVar12 = ((uint)*(byte *)(param_3 + 2) << 0x1c) >> 0x1e;
  param_2[5] = uVar12;
  uVar9 = -((int)((uint)*(byte *)(param_3 + 2) << 0x1e) >> 0x1f);
  param_2[6] = uVar9;
  param_2[7] = *(byte *)(param_3 + 2) & 1;
  uVar2 = (uint)(*(byte *)(param_3 + 3) >> 6);
  param_2[8] = uVar2;
  param_2[9] = ((uint)*(byte *)(param_3 + 3) << 0x1a) >> 0x1e;
  uVar6 = *(byte *)(param_3 + 3) & 0xcf;
  param_2[10] = uVar6;
  if (((uVar12 == 3) || (uVar8 == 4)) || (uVar1 == 0xf)) {
    uVar5 = 0xffffffff;
  }
  else {
    param_2[0x10] = (uint)(AudioMP3sfBandTable + uVar12 * 0x4a + uVar7 * 0xde);
    if (uVar2 != 1) {
      param_2[9] = 0;
    }
    if (uVar1 != 0) {
      iVar11 = 3 - uVar10;
      sVar3 = *(short *)(AudioMP3bitrateTab + (iVar11 * 0xf + uVar7 * 0x2d + uVar1) * 2);
      uVar2 = sVar3 * 1000;
      param_2[0xe] = uVar2;
      uVar10 = *(uint *)(AudioMP3samplerateTab + (uVar7 * 3 + uVar12) * 4);
      param_2[0xd] = uVar10;
      param_2[0xf] = (int)*(short *)(AudioMP3samplesPerFrameTab + (uVar7 * 3 + iVar11) * 2);
      if (uVar8 == 1) {
        param_2[0xc] = (uVar9 + (uint)(sVar3 * 12000) / uVar10) * 4;
      }
      else {
        if (uVar8 == 3) {
          if (uVar7 == 0) {
            iVar11 = 0x90;
          }
          else {
            iVar11 = 0x48;
          }
        }
        else {
          iVar11 = 0x90;
        }
        param_2[0xc] = (uVar2 * iVar11) / uVar10 + uVar9;
      }
    }
    if (*(short *)(param_1 + 0x7f8) == 0) {
      if (uVar1 != *(uint *)(param_1 + 0x7fc)) {
        *(undefined2 *)(param_1 + 0x7fa) = 0;
      }
      uVar5 = 1;
      if (uVar6 != *(uint *)(param_1 + 0x804)) {
        *(undefined2 *)(param_1 + 0x800) = 0;
      }
    }
    else {
      *(uint *)(param_1 + 0x7fc) = uVar1;
      uVar5 = 1;
      *(uint *)(param_1 + 0x804) = uVar6;
      *(undefined2 *)(param_1 + 0x7f8) = 0;
      *(undefined2 *)(param_1 + 0x800) = 1;
      *(undefined2 *)(param_1 + 0x7fa) = 1;
    }
  }
  return uVar5;
}



undefined4 AudioMP3UnpackFrameHeader(uint **param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  
  puVar8 = *param_1;
  iVar3 = AudioMP3UnpackFrameHeader2((int)param_1,puVar8,param_2);
  if (iVar3 < 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar10 = puVar8[8];
    puVar7 = (uint *)puVar8[1];
    uVar6 = puVar8[5];
    uVar13 = puVar8[2];
    uVar12 = puVar8[4];
    if (uVar10 == 3) {
      puVar4 = (uint *)0x1;
    }
    else {
      puVar4 = (uint *)0x2;
    }
    iVar3 = (int)puVar7 * 2;
    param_1[0x1ef] = puVar4;
    if (puVar7 == (uint *)0x0) {
      puVar4 = (uint *)0x2;
    }
    else {
      puVar4 = (uint *)0x1;
    }
    param_1[0x1f1] = puVar4;
    param_1[0x1f0] = *(uint **)(AudioMP3samplerateTab + ((int)puVar7 * 3 + uVar6) * 4);
    puVar11 = (uint *)puVar8[2];
    param_1[0x1f5] = puVar7;
    param_1[500] = puVar11;
    param_1[0x1f2] =
         (uint *)((uint)(int)*(short *)(AudioMP3sideBytesTab + ((int)puVar7 * 3 + uVar13) * 2 + 10)
                 / (uint)puVar4);
    if (uVar12 == 0) {
      uVar13 = puVar8[3];
    }
    else {
      uVar13 = puVar8[3];
      if (uVar10 != 3) {
        iVar3 = iVar3 + 1;
      }
      uVar10 = puVar8[6];
      param_1[0x1ee] = (uint *)puVar8[0xe];
      if (uVar13 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = 2;
      }
      sVar1 = *(short *)(AudioMP3sideBytesTab + iVar3 * 2);
      sVar2 = *(short *)(AudioMP3slotTab + (uVar6 * 0xf + (int)puVar7 * 0x2d + uVar12) * 2);
      param_1[0x1fc] = (uint *)puVar8[0xc];
      puVar7 = (uint *)((((int)sVar2 - (int)sVar1) + -4) - iVar9);
      if (uVar10 != 0) {
        puVar7 = (uint *)((int)puVar7 + 1);
      }
      param_1[499] = puVar7;
    }
    if (uVar13 == 0) {
      uVar5 = 4;
      puVar8[0xb] = 0;
    }
    else {
      uVar5 = 6;
      puVar8[0xb] = (uint)CONCAT11(*(undefined *)(param_2 + 4),*(undefined *)(param_2 + 5));
    }
  }
  return uVar5;
}



undefined4 AudioMP3UnpackSideInfo(int *param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int local_40;
  undefined4 local_3c;
  byte *local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  
  if (param_1 != (int *)0x0) {
    iVar7 = *param_1;
    if (iVar7 == 0) {
      return 0xffffffff;
    }
    puVar6 = (uint *)param_1[1];
    if (puVar6 != (uint *)0x0) {
      iVar5 = *(int *)(iVar7 + 4);
      local_38 = param_2;
      if (iVar5 == 0) {
        if (*(int *)(iVar7 + 0x20) == 3) {
          local_3c = 0x11;
        }
        else {
          local_3c = 0x20;
        }
        local_34 = iVar5;
        local_30 = iVar5;
        local_2c = local_3c;
        uVar1 = xmp3_GetBits(&local_38,9);
        iVar2 = *(int *)(iVar7 + 0x20);
        *puVar6 = uVar1;
        if (iVar2 == 3) {
          uVar1 = 5;
        }
        else {
          uVar1 = 3;
        }
        uVar1 = xmp3_GetBits(&local_38,uVar1);
        iVar2 = param_1[0x1ef];
        puVar6[1] = uVar1;
        if (0 < iVar2) {
          puVar4 = puVar6 + 5;
          do {
            puVar3 = puVar6 + iVar5 * 4 + 1;
            do {
              uVar1 = xmp3_GetBits(&local_38,1);
              puVar3 = puVar3 + 1;
              *puVar3 = uVar1;
            } while (puVar3 != puVar4);
            iVar5 = iVar5 + 1;
            puVar4 = puVar4 + 4;
          } while (iVar5 < param_1[0x1ef]);
        }
      }
      else {
        local_34 = 0;
        local_30 = 0;
        if (*(int *)(iVar7 + 0x20) == 3) {
          local_3c = 9;
        }
        else {
          local_3c = 0x11;
        }
        local_2c = local_3c;
        uVar1 = xmp3_GetBits(&local_38,8);
        iVar5 = *(int *)(iVar7 + 0x20);
        *puVar6 = uVar1;
        if (iVar5 == 3) {
          uVar1 = 1;
        }
        else {
          uVar1 = 2;
        }
        uVar1 = xmp3_GetBits(&local_38,uVar1);
        puVar6[1] = uVar1;
      }
      iVar5 = param_1[0x1f1];
      if (0 < iVar5) {
        iVar2 = param_1[0x1ef];
        local_40 = 0;
        do {
          if (0 < iVar2) {
            iVar5 = 0;
            do {
              uVar1 = xmp3_GetBits(&local_38,0xc);
              puVar4 = puVar6 + iVar5 * 0x12 + local_40 * 0x24 + 10;
              puVar6[iVar5 * 0x12 + local_40 * 0x24 + 10] = uVar1;
              uVar1 = xmp3_GetBits(&local_38,9);
              puVar4[1] = uVar1;
              uVar1 = xmp3_GetBits(&local_38,8);
              iVar2 = *(int *)(iVar7 + 4);
              puVar4[2] = uVar1;
              if (iVar2 == 0) {
                uVar1 = 4;
              }
              else {
                uVar1 = 9;
              }
              uVar1 = xmp3_GetBits(&local_38,uVar1);
              puVar4[3] = uVar1;
              uVar1 = xmp3_GetBits(&local_38,1);
              puVar4[4] = uVar1;
              if (uVar1 == 0) {
                puVar4[6] = 0;
                puVar4[5] = 0;
                uVar1 = xmp3_GetBits(&local_38,5);
                puVar4[7] = uVar1;
                uVar1 = xmp3_GetBits(&local_38,5);
                puVar4[8] = uVar1;
                uVar1 = xmp3_GetBits(&local_38,5);
                puVar4[9] = uVar1;
                uVar1 = xmp3_GetBits(&local_38,4);
                puVar4[0xd] = uVar1;
                uVar1 = xmp3_GetBits(&local_38,3);
                iVar2 = *(int *)(iVar7 + 4);
                puVar4[0xe] = uVar1;
                if (iVar2 == 0) {
LAB_0002d11c:
                  uVar1 = xmp3_GetBits(&local_38,1);
                }
                else {
                  uVar1 = 0;
                }
              }
              else {
                uVar1 = xmp3_GetBits(&local_38,2);
                puVar4[5] = uVar1;
                uVar1 = xmp3_GetBits(&local_38,1);
                puVar4[6] = uVar1;
                uVar1 = xmp3_GetBits(&local_38,5);
                puVar4[7] = uVar1;
                uVar1 = xmp3_GetBits(&local_38,5);
                puVar4[8] = uVar1;
                puVar4[9] = 0;
                uVar1 = xmp3_GetBits(&local_38,3);
                puVar4[10] = uVar1;
                uVar1 = xmp3_GetBits(&local_38,3);
                puVar4[0xb] = uVar1;
                uVar1 = xmp3_GetBits(&local_38,3);
                puVar4[0xc] = uVar1;
                if (puVar4[5] == 0) {
                  uVar1 = puVar4[0xd];
                  puVar4[1] = 0;
                  puVar6[iVar5 * 0x12 + local_40 * 0x24 + 10] = 0;
                  puVar4[3] = 0;
                  uVar1 = 0x14 - uVar1;
                }
                else {
                  if ((puVar4[5] == 2) && (puVar4[6] == 0)) {
                    uVar1 = 0xc;
                    puVar4[0xd] = 8;
                  }
                  else {
                    uVar1 = 0xd;
                    puVar4[0xd] = 7;
                  }
                }
                iVar2 = *(int *)(iVar7 + 4);
                puVar4[0xe] = uVar1;
                if (iVar2 == 0) goto LAB_0002d11c;
                uVar1 = 0;
              }
              puVar4[0xf] = uVar1;
              uVar1 = xmp3_GetBits(&local_38,1);
              puVar4[0x10] = uVar1;
              uVar1 = xmp3_GetBits(&local_38,1);
              iVar2 = param_1[0x1ef];
              iVar5 = iVar5 + 1;
              puVar4[0x11] = uVar1;
            } while (iVar5 < iVar2);
            iVar5 = param_1[0x1f1];
          }
          local_40 = local_40 + 1;
        } while (local_40 < iVar5);
      }
      param_1[0x1f6] = *puVar6;
      return local_3c;
    }
  }
  return 0xffffffff;
}



void AudioMP3FreeBuffers(void **param_1)

{
  if (param_1 == (void **)0x0) {
    return;
  }
  if (*param_1 != (void *)0x0) {
    free(*param_1);
  }
  *param_1 = (void *)0x0;
  if (param_1[1] != (void *)0x0) {
    free(param_1[1]);
  }
  param_1[1] = (void *)0x0;
  if (param_1[2] != (void *)0x0) {
    free(param_1[2]);
  }
  param_1[2] = (void *)0x0;
  if (param_1[3] != (void *)0x0) {
    free(param_1[3]);
  }
  param_1[3] = (void *)0x0;
  if (param_1[4] != (void *)0x0) {
    free(param_1[4]);
  }
  param_1[4] = (void *)0x0;
  if (param_1[5] != (void *)0x0) {
    free(param_1[5]);
  }
  param_1[5] = (void *)0x0;
  if (param_1[6] != (void *)0x0) {
    free(param_1[6]);
  }
  param_1[6] = (void *)0x0;
  free(param_1);
  return;
}



void ** AudioMP3AllocateBuffers(void)

{
  void **ppvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  int iVar9;
  
  ppvVar1 = (void **)malloc(0x6880);
  if (ppvVar1 != (void **)0x0) {
    iVar9 = 0;
    do {
      *(undefined *)((int)ppvVar1 + iVar9) = 0;
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0x6880);
    pvVar2 = malloc(0x44);
    pvVar3 = malloc(0x148);
    pvVar4 = malloc(0x11c);
    pvVar5 = malloc(0x1210);
    pvVar6 = malloc(0x348);
    pvVar7 = malloc(0x1b20);
    pvVar8 = malloc(0x2204);
    *ppvVar1 = pvVar2;
    ppvVar1[1] = pvVar3;
    ppvVar1[2] = pvVar4;
    ppvVar1[3] = pvVar5;
    ppvVar1[4] = pvVar6;
    ppvVar1[5] = pvVar7;
    ppvVar1[6] = pvVar8;
    if ((((pvVar2 == (void *)0x0 || pvVar3 == (void *)0x0) ||
         (pvVar4 == (void *)0x0 || pvVar5 == (void *)0x0)) ||
        (pvVar6 == (void *)0x0 || pvVar7 == (void *)0x0)) || (iVar9 = 0, pvVar8 == (void *)0x0)) {
      AudioMP3FreeBuffers(ppvVar1);
      return (void **)0x0;
    }
    do {
      *(undefined *)((int)pvVar2 + iVar9) = 0;
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0x44);
    iVar9 = 0;
    do {
      *(undefined *)((int)pvVar3 + iVar9) = 0;
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0x148);
    iVar9 = 0;
    do {
      *(undefined *)((int)pvVar4 + iVar9) = 0;
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0x11c);
    iVar9 = 0;
    do {
      *(undefined *)((int)pvVar5 + iVar9) = 0;
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0x1210);
    iVar9 = 0;
    do {
      *(undefined *)((int)pvVar6 + iVar9) = 0;
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0x348);
    iVar9 = 0;
    do {
      *(undefined *)((int)pvVar7 + iVar9) = 0;
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0x1b20);
    iVar9 = 0;
    do {
      *(undefined *)((int)pvVar8 + iVar9) = 0;
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0x2204);
  }
  return ppvVar1;
}



void xmp3_FDCT32(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int local_40;
  
  if (param_5 < 6) {
    uVar18 = 6 - param_5;
    piVar3 = param_1;
    do {
      piVar4 = piVar3 + 1;
      *piVar3 = *piVar3 >> (uVar18 & 0xff);
      piVar3 = piVar4;
    } while (piVar4 != param_1 + 0x20);
  }
  else {
    uVar18 = 0;
  }
  iVar2 = *param_1 + param_1[0x1f];
  iVar13 = (int)((ulonglong)((longlong)(*param_1 - param_1[0x1f]) * 0x4013c251) >> 0x20) * 2;
  iVar5 = param_1[0xf] + param_1[0x10];
  iVar19 = (int)((ulonglong)((longlong)(param_1[0xf] - param_1[0x10]) * 0x518522fb) >> 0x20);
  iVar11 = iVar2 + iVar5;
  *param_1 = iVar11;
  param_1[0x10] = iVar19 * 0x20 + iVar13;
  param_1[0xf] = (int)((ulonglong)((longlong)(iVar2 - iVar5) * 0x404f4672) >> 0x20) << 1;
  param_1[0x1f] = (int)((ulonglong)((longlong)(iVar13 + iVar19 * -0x20) * 0x404f4672) >> 0x20) << 1;
  iVar5 = param_1[1] + param_1[0x1e];
  iVar13 = (int)((ulonglong)((longlong)(param_1[1] - param_1[0x1e]) * 0x40b345bd) >> 0x20) * 2;
  iVar2 = param_1[0xe] + param_1[0x11];
  iVar19 = (int)((ulonglong)((longlong)(param_1[0xe] - param_1[0x11]) * 0x6d0b20cf) >> 0x20);
  local_40 = iVar5 + iVar2;
  param_1[1] = local_40;
  param_1[0x11] = iVar19 * 8 + iVar13;
  param_1[0xe] = (int)((ulonglong)((longlong)(iVar5 - iVar2) * 0x42e13c10) >> 0x20) << 1;
  param_1[0x1e] = (int)((ulonglong)((longlong)(iVar13 + iVar19 * -8) * 0x42e13c10) >> 0x20) << 1;
  iVar5 = param_1[2] + param_1[0x1d];
  iVar13 = (int)((ulonglong)((longlong)(param_1[2] - param_1[0x1d]) * 0x41fa2d6d) >> 0x20) * 2;
  iVar2 = param_1[0xd] + param_1[0x12];
  iVar19 = (int)((ulonglong)((longlong)(param_1[0xd] - param_1[0x12]) * 0x41d95790) >> 0x20);
  iVar14 = iVar5 + iVar2;
  param_1[2] = iVar14;
  param_1[0x12] = iVar19 * 8 + iVar13;
  param_1[0xd] = (int)((ulonglong)((longlong)(iVar5 - iVar2) * 0x48919f44) >> 0x20) << 1;
  param_1[0x1d] = (int)((ulonglong)((longlong)(iVar13 + iVar19 * -8) * 0x48919f44) >> 0x20) << 1;
  iVar5 = param_1[3] + param_1[0x1c];
  iVar13 = (int)((ulonglong)((longlong)(param_1[3] - param_1[0x1c]) * 0x43f93421) >> 0x20) * 2;
  iVar2 = param_1[0xc] + param_1[0x13];
  iVar19 = (int)((ulonglong)((longlong)(param_1[0xc] - param_1[0x13]) * 0x5efc8d96) >> 0x20);
  iVar9 = iVar5 + iVar2;
  param_1[3] = iVar9;
  param_1[0x13] = iVar19 * 4 + iVar13;
  param_1[0xc] = (int)((ulonglong)((longlong)(iVar5 - iVar2) * 0x52cb0e63) >> 0x20) << 1;
  param_1[0x1c] = (int)((ulonglong)((longlong)(iVar13 + iVar19 * -4) * 0x52cb0e63) >> 0x20) << 1;
  iVar5 = param_1[4] + param_1[0x1b];
  iVar13 = (int)((ulonglong)((longlong)(param_1[4] - param_1[0x1b]) * 0x46cc1bc4) >> 0x20) * 2;
  iVar15 = param_1[0xb] + param_1[0x14];
  iVar2 = (int)((ulonglong)((longlong)(param_1[0xb] - param_1[0x14]) * 0x4ad81a97) >> 0x20);
  iVar19 = iVar5 + iVar15;
  param_1[4] = iVar19;
  param_1[0x14] = iVar2 * 4 + iVar13;
  param_1[0xb] = (int)((ulonglong)((longlong)(iVar5 - iVar15) * 0x64e2402e) >> 0x20) << 1;
  param_1[0x1b] = (int)((ulonglong)((longlong)(iVar13 + iVar2 * -4) * 0x64e2402e) >> 0x20) << 1;
  iVar15 = param_1[5] + param_1[0x1a];
  iVar13 = (int)((ulonglong)((longlong)(param_1[5] - param_1[0x1a]) * 0x4a9d9cf0) >> 0x20) * 2;
  iVar5 = param_1[10] + param_1[0x15];
  iVar2 = (int)((ulonglong)((longlong)(param_1[10] - param_1[0x15]) * 0x7c7d1db3) >> 0x20);
  iVar10 = iVar15 + iVar5;
  param_1[5] = iVar10;
  param_1[0x15] = iVar2 * 2 + iVar13;
  param_1[10] = (int)((ulonglong)((longlong)(iVar15 - iVar5) * 0x43e224a9) >> 0x20) << 2;
  param_1[0x1a] = (int)((ulonglong)((longlong)(iVar13 + iVar2 * -2) * 0x43e224a9) >> 0x20) << 2;
  iVar17 = param_1[6] + param_1[0x19];
  iVar13 = (int)((ulonglong)((longlong)(param_1[6] - param_1[0x19]) * 0x4fae3711) >> 0x20) * 2;
  iVar15 = param_1[9] + param_1[0x16];
  iVar5 = (int)((ulonglong)((longlong)(param_1[9] - param_1[0x16]) * 0x6b6fcf26) >> 0x20);
  iVar2 = iVar17 + iVar15;
  param_1[6] = iVar2;
  param_1[0x16] = iVar5 * 2 + iVar13;
  param_1[9] = (int)((ulonglong)((longlong)(iVar17 - iVar15) * 0x6e3c92c1) >> 0x20) << 2;
  param_1[0x19] = (int)((ulonglong)((longlong)(iVar13 + iVar5 * -2) * 0x6e3c92c1) >> 0x20) << 2;
  iVar16 = param_1[7] + param_1[0x18];
  iVar13 = (int)((ulonglong)((longlong)(param_1[7] - param_1[0x18]) * 0x56601ea7) >> 0x20) * 2;
  iVar5 = param_1[8] + param_1[0x17];
  iVar17 = (int)((ulonglong)((longlong)(param_1[8] - param_1[0x17]) * 0x5f4cf6eb) >> 0x20);
  iVar15 = iVar16 + iVar5;
  param_1[7] = iVar15;
  param_1[0x17] = iVar17 * 2 + iVar13;
  param_1[8] = (int)((ulonglong)((longlong)(iVar16 - iVar5) * 0x519e4e04) >> 0x20) << 4;
  param_1[0x18] = (int)((ulonglong)((longlong)(iVar13 + iVar17 * -2) * 0x519e4e04) >> 0x20) << 4;
  puVar6 = &DAT_0003d950;
  piVar3 = param_1;
  while( true ) {
    iVar13 = (int)((ulonglong)((longlong)(int)puVar6[-6] * (longlong)(iVar11 - iVar15)) >> 0x20) * 2
    ;
    iVar17 = (int)((ulonglong)((longlong)(int)puVar6[-5] * (longlong)(iVar9 - iVar19)) >> 0x20);
    iVar12 = iVar11 + iVar15 + iVar9 + iVar19;
    iVar16 = iVar17 * 8 + iVar13;
    iVar5 = (int)((ulonglong)
                  ((longlong)(int)puVar6[-4] * (longlong)((iVar11 + iVar15) - (iVar9 + iVar19))) >>
                 0x20) * 2;
    iVar13 = (int)((ulonglong)((longlong)(int)puVar6[-4] * (longlong)(iVar13 + iVar17 * -8)) >> 0x20
                  ) * 2;
    iVar19 = (int)((ulonglong)((longlong)(int)puVar6[-3] * (longlong)(local_40 - iVar2)) >> 0x20) *
             2;
    iVar15 = (int)((ulonglong)((longlong)(int)puVar6[-2] * (longlong)(iVar14 - iVar10)) >> 0x20);
    iVar9 = local_40 + iVar2 + iVar14 + iVar10;
    iVar10 = (int)((ulonglong)
                   ((longlong)(int)puVar6[-1] * (longlong)((local_40 + iVar2) - (iVar14 + iVar10)))
                  >> 0x20);
    iVar17 = iVar15 * 2 + iVar19;
    iVar19 = (int)((ulonglong)((longlong)(int)puVar6[-1] * (longlong)(iVar19 + iVar15 * -2)) >> 0x20
                  );
    iVar2 = (int)((ulonglong)((longlong)(iVar5 + iVar10 * -4) * 0x5a82799a) >> 0x20) * 2;
    *piVar3 = iVar12 + iVar9;
    piVar3[3] = iVar2;
    piVar3[1] = (int)((ulonglong)((longlong)(iVar12 - iVar9) * 0x5a82799a) >> 0x20) << 1;
    piVar3[2] = iVar10 * 4 + iVar5 + iVar2;
    iVar2 = (int)((ulonglong)((longlong)(iVar16 - iVar17) * 0x5a82799a) >> 0x20) * 2;
    iVar5 = (int)((ulonglong)((longlong)(iVar13 + iVar19 * -4) * 0x5a82799a) >> 0x20) * 2;
    puVar6 = puVar6 + 6;
    iVar13 = iVar19 * 4 + iVar13 + iVar5;
    piVar3[7] = iVar5;
    piVar3[5] = iVar2 + iVar5;
    piVar3[4] = iVar16 + iVar17 + iVar13;
    piVar3[6] = iVar2 + iVar13;
    if (puVar6 == (undefined4 *)&DAT_0003d9b0) break;
    local_40 = piVar3[9];
    iVar11 = piVar3[8];
    iVar15 = piVar3[0xf];
    iVar9 = piVar3[0xb];
    iVar19 = piVar3[0xc];
    iVar2 = piVar3[0xe];
    iVar14 = piVar3[10];
    iVar10 = piVar3[0xd];
    piVar3 = piVar3 + 8;
  }
  uVar20 = param_3 - param_4 & 7;
  if (param_4 == 0) {
    iVar13 = *param_1;
    *(int *)(param_2 + (uVar20 + 0x840) * 4 + 0x20) = iVar13;
    *(int *)(param_2 + (uVar20 + 0x840) * 4) = iVar13;
    iVar13 = param_4;
  }
  else {
    iVar13 = *param_1;
    *(int *)(param_2 + (uVar20 + 0x400) * 4 + 0x20) = iVar13;
    *(int *)(param_2 + (uVar20 + 0x400) * 4) = iVar13;
    iVar13 = 0x440;
  }
  iVar2 = param_1[1];
  if (param_4 == 0) {
    iVar5 = 0x440;
  }
  else {
    iVar5 = 0;
  }
  iVar19 = param_2 + (iVar13 + param_3) * 4;
  iVar5 = iVar5 + uVar20 + 0x10;
  iVar15 = param_2 + iVar5 * 4;
  *(int *)(iVar19 + 0x20) = iVar2;
  *(int *)(param_2 + (iVar13 + param_3) * 4) = iVar2;
  iVar17 = param_1[0x19];
  iVar13 = param_1[0x1d];
  iVar2 = iVar17 + iVar13 + param_1[0x11];
  *(int *)(iVar19 + 0x120) = iVar2;
  *(int *)(iVar19 + 0x100) = iVar2;
  iVar2 = param_1[0xd];
  iVar9 = param_1[9];
  *(int *)(iVar19 + 0x220) = iVar9 + iVar2;
  *(int *)(iVar19 + 0x200) = iVar9 + iVar2;
  iVar13 = iVar17 + iVar13 + param_1[0x15];
  *(int *)(iVar19 + 800) = iVar13;
  *(int *)(iVar19 + 0x300) = iVar13;
  iVar2 = param_1[5];
  iVar17 = param_1[0x1d];
  iVar13 = param_1[0x1b];
  *(int *)(iVar19 + 0x420) = iVar2;
  *(int *)(iVar19 + 0x400) = iVar2;
  iVar2 = iVar17 + iVar13 + param_1[0x15];
  *(int *)(iVar19 + 0x520) = iVar2;
  *(int *)(iVar19 + 0x500) = iVar2;
  iVar2 = param_1[0xb];
  iVar9 = param_1[0xd];
  *(int *)(iVar19 + 0x620) = iVar9 + iVar2;
  *(int *)(iVar19 + 0x600) = iVar9 + iVar2;
  iVar13 = iVar17 + iVar13 + param_1[0x13];
  *(int *)(iVar19 + 0x720) = iVar13;
  *(int *)(iVar19 + 0x700) = iVar13;
  iVar2 = param_1[3];
  iVar17 = param_1[0x1b];
  iVar13 = param_1[0x1f];
  *(int *)(iVar19 + 0x820) = iVar2;
  *(int *)(iVar19 + 0x800) = iVar2;
  iVar2 = iVar17 + iVar13 + param_1[0x13];
  *(int *)(iVar19 + 0x920) = iVar2;
  *(int *)(iVar19 + 0x900) = iVar2;
  iVar9 = param_1[0xb];
  iVar2 = param_1[0xf];
  *(int *)(iVar19 + 0xa20) = iVar9 + iVar2;
  *(int *)(iVar19 + 0xa00) = iVar9 + iVar2;
  iVar13 = iVar17 + iVar13 + param_1[0x17];
  *(int *)(iVar19 + 0xb20) = iVar13;
  *(int *)(iVar19 + 0xb00) = iVar13;
  iVar2 = param_1[7];
  iVar13 = param_1[0x1f];
  *(int *)(iVar19 + 0xc20) = iVar2;
  *(int *)(iVar19 + 0xc00) = iVar2;
  iVar2 = param_1[0x17];
  *(int *)(iVar19 + 0xd20) = iVar13 + iVar2;
  *(int *)(iVar19 + 0xd00) = iVar13 + iVar2;
  iVar2 = param_1[0xf];
  *(int *)(iVar19 + 0xf20) = iVar13;
  *(int *)(iVar19 + 0xf00) = iVar13;
  *(int *)(iVar19 + 0xe20) = iVar2;
  *(int *)(iVar19 + 0xe00) = iVar2;
  iVar13 = param_1[1];
  *(int *)(iVar15 + 0x20) = iVar13;
  *(int *)(param_2 + iVar5 * 4) = iVar13;
  iVar5 = param_1[0x1e];
  iVar2 = param_1[0x19];
  iVar13 = iVar5 + iVar2 + param_1[0x11];
  *(int *)(iVar15 + 0x120) = iVar13;
  *(int *)(iVar15 + 0x100) = iVar13;
  iVar13 = param_1[9];
  iVar19 = param_1[0xe];
  *(int *)(iVar15 + 0x220) = iVar19 + iVar13;
  *(int *)(iVar15 + 0x200) = iVar19 + iVar13;
  iVar13 = iVar5 + iVar2 + param_1[0x16];
  *(int *)(iVar15 + 800) = iVar13;
  *(int *)(iVar15 + 0x300) = iVar13;
  iVar13 = param_1[6];
  *(int *)(iVar15 + 0x420) = iVar13;
  *(int *)(iVar15 + 0x400) = iVar13;
  iVar5 = param_1[0x1a];
  iVar2 = param_1[0x1e];
  iVar13 = iVar5 + iVar2 + param_1[0x16];
  *(int *)(iVar15 + 0x520) = iVar13;
  *(int *)(iVar15 + 0x500) = iVar13;
  iVar13 = param_1[0xe];
  iVar19 = param_1[10];
  *(int *)(iVar15 + 0x620) = iVar19 + iVar13;
  *(int *)(iVar15 + 0x600) = iVar19 + iVar13;
  iVar13 = iVar5 + iVar2 + param_1[0x12];
  *(int *)(iVar15 + 0x720) = iVar13;
  *(int *)(iVar15 + 0x700) = iVar13;
  iVar13 = param_1[2];
  *(int *)(iVar15 + 0x820) = iVar13;
  *(int *)(iVar15 + 0x800) = iVar13;
  iVar5 = param_1[0x1c];
  iVar2 = param_1[0x1a];
  iVar13 = iVar5 + iVar2 + param_1[0x12];
  *(int *)(iVar15 + 0x920) = iVar13;
  *(int *)(iVar15 + 0x900) = iVar13;
  iVar13 = param_1[10];
  iVar19 = param_1[0xc];
  *(int *)(iVar15 + 0xa20) = iVar19 + iVar13;
  *(int *)(iVar15 + 0xa00) = iVar19 + iVar13;
  iVar13 = iVar5 + iVar2 + param_1[0x14];
  *(int *)(iVar15 + 0xb20) = iVar13;
  *(int *)(iVar15 + 0xb00) = iVar13;
  iVar13 = param_1[4];
  *(int *)(iVar15 + 0xc20) = iVar13;
  *(int *)(iVar15 + 0xc00) = iVar13;
  iVar5 = param_1[0x18];
  iVar2 = param_1[0x1c];
  iVar13 = iVar5 + iVar2 + param_1[0x14];
  *(int *)(iVar15 + 0xd20) = iVar13;
  *(int *)(iVar15 + 0xd00) = iVar13;
  iVar19 = param_1[8];
  iVar13 = param_1[0xc];
  *(int *)(iVar15 + 0xe20) = iVar19 + iVar13;
  *(int *)(iVar15 + 0xe00) = iVar19 + iVar13;
  iVar13 = iVar5 + iVar2 + param_1[0x10];
  *(int *)(iVar15 + 0xf20) = iVar13;
  *(int *)(iVar15 + 0xf00) = iVar13;
  if (uVar18 != 0) {
    uVar1 = 0x1f - uVar18;
    if (param_4 == 0) {
      iVar13 = 0x440;
    }
    else {
      iVar13 = 0;
    }
    iVar13 = uVar20 + 0x400 + iVar13;
    uVar7 = *(uint *)(param_2 + iVar13 * 4);
    if ((int)uVar7 >> 0x1f != (int)uVar7 >> (uVar1 & 0xff)) {
      uVar7 = (int)uVar7 >> 0x1f ^ ~(-1 << (uVar1 & 0xff));
    }
    if (param_4 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = 0x440;
    }
    iVar5 = uVar7 << (uVar18 & 0xff);
    iVar15 = param_2 + (iVar2 + param_3) * 4;
    uVar7 = ~(-1 << (uVar1 & 0xff));
    *(int *)(param_2 + iVar13 * 4 + 0x20) = iVar5;
    iVar19 = iVar15 + 0x100;
    *(int *)(param_2 + iVar13 * 4) = iVar5;
    iVar13 = iVar19;
    iVar2 = iVar15;
    do {
      iVar5 = iVar13;
      uVar8 = *(uint *)(iVar19 + -0x100);
      if ((int)uVar8 >> 0x1f != (int)uVar8 >> (uVar1 & 0xff)) {
        uVar8 = (int)uVar8 >> 0x1f ^ uVar7;
      }
      iVar13 = uVar8 << (uVar18 & 0xff);
      *(int *)(iVar2 + 0x20) = iVar13;
      *(int *)(iVar19 + -0x100) = iVar13;
      iVar19 = iVar19 + 0x100;
      iVar13 = iVar5 + 0x100;
      iVar2 = iVar5;
    } while (iVar5 != iVar15 + 0x1000);
    if (param_4 == 0) {
      iVar13 = 0x440;
    }
    else {
      iVar13 = 0;
    }
    iVar19 = param_2 + (iVar13 + uVar20 + 0x10) * 4;
    iVar5 = iVar19 + 0x100;
    iVar13 = iVar5;
    iVar2 = iVar19;
    do {
      iVar15 = iVar13;
      uVar20 = *(uint *)(iVar5 + -0x100);
      if ((int)uVar20 >> 0x1f != (int)uVar20 >> (uVar1 & 0xff)) {
        uVar20 = uVar7 ^ (int)uVar20 >> 0x1f;
      }
      iVar13 = uVar20 << (uVar18 & 0xff);
      *(int *)(iVar2 + 0x20) = iVar13;
      *(int *)(iVar5 + -0x100) = iVar13;
      iVar5 = iVar5 + 0x100;
      iVar13 = iVar15 + 0x100;
      iVar2 = iVar15;
    } while (iVar15 != iVar19 + 0x1000);
  }
  return;
}



uint AudioMP3Dequantize(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint local_30;
  int local_2c;
  int *piVar5;
  
  if (((((param_1 == (int *)0x0) || (iVar8 = *param_1, iVar8 == 0)) ||
       (iVar10 = param_1[1], iVar10 == 0)) ||
      ((iVar11 = param_1[2], iVar11 == 0 || (piVar7 = (int *)param_1[3], piVar7 == (int *)0x0)))) ||
     (iVar9 = param_1[4], iVar9 == 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    local_2c = 0;
    local_30 = 0;
    if (0 < param_1[0x1ef]) {
      iVar3 = 0;
      do {
        iVar1 = xmp3_DequantChannel((int)(piVar7 + iVar3 * 0x240),iVar9,piVar7 + iVar3 + 0x480,iVar8
                                    ,(undefined *)(iVar10 + param_2 * 0x90 + iVar3 * 0x48 + 0x28),
                                    iVar11 + param_2 * 0x7c + iVar3 * 0x3e,
                                    (undefined4 *)(iVar9 + iVar3 * 0x18 + 0x318));
        iVar6 = iVar3 + 1;
        piVar7[iVar3 + 0x482] = iVar1;
        iVar3 = iVar6;
      } while (iVar6 < param_1[0x1ef]);
    }
    uVar2 = *(uint *)(iVar8 + 0x24);
    if (uVar2 != 0) {
      if ((piVar7[0x482] < 1) || (piVar7[0x483] < 1)) {
        iVar3 = piVar7[0x480];
        if (0 < iVar3) {
          piVar4 = piVar7;
          do {
            piVar5 = piVar4 + 1;
            iVar1 = *piVar4;
            if (iVar1 < -0x3fffffff) {
              *piVar4 = -0x3fffffff;
            }
            else {
              if (iVar1 != 0x3fffffff && iVar1 + -0x3fffffff < 0 == SCARRY4(iVar1,-0x3fffffff)) {
                *piVar4 = 0x3fffffff;
              }
            }
            piVar4 = piVar5;
          } while (piVar5 != piVar7 + iVar3);
        }
        iVar3 = piVar7[0x481];
        if (0 < iVar3) {
          piVar4 = piVar7 + 0x240;
          do {
            piVar5 = piVar4 + 1;
            iVar1 = *piVar4;
            if (iVar1 < -0x3fffffff) {
              *piVar4 = -0x3fffffff;
            }
            else {
              if (iVar1 != 0x3fffffff && iVar1 + -0x3fffffff < 0 == SCARRY4(iVar1,-0x3fffffff)) {
                *piVar4 = 0x3fffffff;
              }
            }
            piVar4 = piVar5;
          } while (piVar5 != piVar7 + 0x240 + iVar3);
        }
      }
      if (uVar2 >> 1 != 0) {
        if ((uVar2 & 1) == 0) {
          iVar3 = piVar7[0x480];
          if (piVar7[0x480] < piVar7[0x481]) {
            iVar3 = piVar7[0x481];
          }
        }
        else {
          if (*(int *)(iVar9 + 0x330) == 0) {
            iVar3 = (int)*(short *)(*(int *)(iVar8 + 0x40) + *(int *)(iVar9 + 0x344) * 2 + 2);
          }
          else {
            iVar3 = *(short *)(*(int *)(iVar8 + 0x40) + *(int *)(iVar9 + 0x340) * 2 + 0x30) * 3;
          }
        }
        xmp3_MidSideProc((int)piVar7,iVar3,&local_30);
        uVar2 = *(uint *)(iVar8 + 0x24);
      }
      if ((uVar2 & 1) != 0) {
        iVar10 = iVar10 + param_2 * 0x90;
        if (*(int *)(iVar8 + 4) == 0) {
          xmp3_IntensityProcMPEG1
                    ((int)piVar7,piVar7[0x480],iVar8,iVar11 + param_2 * 0x7c + 0x3e,
                     (int)(int *)(iVar9 + 0x318),(int)uVar2 >> 1,*(undefined4 *)(iVar10 + 0x88),
                     &local_30);
          uVar2 = *(uint *)(iVar8 + 0x24);
        }
        else {
          xmp3_IntensityProcMPEG2
                    ((int)piVar7,piVar7[0x480],iVar8,iVar11 + param_2 * 0x7c + 0x3e,
                     (int *)(iVar9 + 0x318),(int *)(iVar11 + 0xf8),(int)uVar2 >> 1,
                     *(undefined4 *)(iVar10 + 0x88),&local_30);
          uVar2 = *(uint *)(iVar8 + 0x24);
        }
      }
      if (uVar2 != 0) {
        if (local_30 == 0) {
          iVar8 = 0x1f;
        }
        else {
          if ((int)local_30 < 0) {
            iVar8 = -1;
          }
          else {
            iVar10 = 0;
            do {
              iVar8 = iVar10;
              local_30 = local_30 << 1;
              iVar10 = iVar8 + 1;
            } while (-1 < (int)local_30);
          }
        }
        piVar7[0x482] = iVar8;
        if (local_2c == 0) {
          iVar8 = 0x1f;
        }
        else {
          if (local_2c < 0) {
            iVar8 = -1;
          }
          else {
            iVar10 = 0;
            do {
              iVar8 = iVar10;
              local_2c = local_2c << 1;
              iVar10 = iVar8 + 1;
            } while (-1 < local_2c);
          }
        }
        iVar10 = piVar7[0x480];
        uVar2 = 0;
        piVar7[0x483] = iVar8;
        if (iVar10 < piVar7[0x481]) {
          iVar10 = piVar7[0x481];
        }
        piVar7[0x480] = iVar10;
        piVar7[0x481] = iVar10;
      }
    }
  }
  return uVar2;
}



uint FUN_0002e150(uint *param_1,uint *param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint local_30 [4];
  
  uVar4 = (int)param_4 >> 2;
  if (0x1e < (int)uVar4) {
    uVar4 = 0x1f;
  }
  iVar1 = (param_4 & 3) * 0x40;
  local_30[0] = 0;
  uVar2 = 0;
  iVar6 = *(int *)(&DAT_0003dbc4 + (param_4 & 3) * 4);
  if ((int)uVar4 < 0x1c) {
    uVar3 = uVar4 + 3 & ~((int)(uVar4 + 3) >> 0x1f);
  }
  else {
    uVar3 = 0x1f;
  }
  local_30[1] = *(int *)(&DAT_0003d9d0 + iVar1) >> (uVar3 & 0xff);
  local_30[2] = *(int *)(&DAT_0003d9d4 + iVar1) >> (uVar3 & 0xff);
  local_30[3] = *(int *)(&DAT_0003d9d8 + iVar1) >> (uVar3 & 0xff);
  puVar8 = &DAT_0003dacc;
  do {
    uVar3 = *param_1 & 0x7fffffff;
    if (uVar3 < 4) {
      uVar3 = local_30[uVar3];
    }
    else {
      if (uVar3 < 0x10) {
        if ((int)uVar4 < 0) {
          uVar3 = *(int *)(&UNK_0003d9cc + uVar3 * 4 + iVar1) << (-uVar4 & 0xff);
        }
        else {
          uVar3 = *(int *)(&UNK_0003d9cc + uVar3 * 4 + iVar1) >> (uVar4 & 0xff);
        }
      }
      else {
        if (uVar3 < 0x40) {
          iVar5 = (int)((ulonglong)
                        ((longlong)*(int *)(&DAT_0003dacc + (uVar3 - 0x10) * 4) * (longlong)iVar6)
                       >> 0x20);
          uVar3 = uVar4 - 3;
        }
        else {
          iVar5 = uVar3 * 0x20000;
          bVar12 = SCARRY4(iVar5,-0x7ffffff);
          bVar10 = iVar5 + -0x7ffffff < 0;
          bVar11 = iVar5 == 0x7ffffff;
          if (bVar11 || bVar10 != bVar12) {
            iVar5 = uVar3 << 0x15;
          }
          if (bVar11 || bVar10 != bVar12) {
            puVar8 = (undefined *)0x4;
          }
          if (!bVar11 && bVar10 == bVar12) {
            puVar8 = (undefined *)0x0;
          }
          bVar12 = SCARRY4(iVar5,-0x1fffffff);
          bVar10 = iVar5 + -0x1fffffff < 0;
          bVar11 = iVar5 == 0x1fffffff;
          if (bVar11 || bVar10 != bVar12) {
            iVar5 = iVar5 << 2;
          }
          if (bVar11 || bVar10 != bVar12) {
            puVar8 = puVar8 + 2;
          }
          bVar12 = SCARRY4(iVar5,-0x3fffffff);
          bVar10 = iVar5 + -0x3fffffff < 0;
          bVar11 = iVar5 == 0x3fffffff;
          if (bVar11 || bVar10 != bVar12) {
            iVar5 = iVar5 << 1;
          }
          if (bVar11 || bVar10 != bVar12) {
            puVar8 = puVar8 + 1;
          }
          if (iVar5 < 0x5a82799a) {
            puVar9 = &DAT_0003dbd4;
            iVar7 = 0x29a0bda9;
          }
          else {
            iVar7 = 0x10852163;
            puVar9 = &DAT_0003d998;
          }
          iVar5 = (int)((ulonglong)
                        ((longlong)
                         ((int)((ulonglong)
                                ((longlong)
                                 ((int)((ulonglong)
                                        ((longlong)
                                         ((int)((ulonglong)
                                                ((longlong)
                                                 ((int)((ulonglong)
                                                        ((longlong)
                                                         ((int)((ulonglong)
                                                                ((longlong)iVar7 * (longlong)iVar5)
                                                               >> 0x20) + *(int *)(puVar9 + 4)) *
                                                        (longlong)iVar5) >> 0x20) +
                                                 *(int *)(puVar9 + 8)) * (longlong)iVar5) >> 0x20) +
                                         *(int *)(puVar9 + 0xc)) * (longlong)iVar5) >> 0x20) +
                                 *(int *)(puVar9 + 0x10)) *
                                (longlong)*(int *)(&DAT_0003d9ac + (int)puVar8 * 4)) >> 0x20) << 3)
                        * (longlong)iVar6) >> 0x20);
          uVar3 = uVar4 - *(int *)(&DAT_0003dba4 + (int)puVar8 * 4);
        }
        if ((int)uVar3 < 0) {
          puVar8 = (undefined *)0x7fffffff;
          if (0x7fffffff >> (-uVar3 & 0xff) < iVar5) {
            uVar3 = 0x7fffffff;
          }
          else {
            uVar3 = iVar5 << (-uVar3 & 0xff);
          }
        }
        else {
          uVar3 = iVar5 >> (uVar3 & 0xff);
        }
      }
    }
    uVar2 = uVar2 | uVar3;
    if ((int)*param_1 < 0) {
      uVar3 = -uVar3;
    }
    param_3 = param_3 + -1;
    *param_2 = uVar3;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  } while (param_3 != 0);
  return uVar2;
}



int xmp3_DequantChannel(int param_1,int param_2,int *param_3,int param_4,undefined *param_5,
                       int param_6,undefined4 *param_7)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined *puVar12;
  undefined4 *puVar13;
  undefined *puVar14;
  int iVar15;
  undefined4 *puVar16;
  int local_60;
  undefined *local_5c;
  int local_54;
  undefined *local_34 [4];
  
  if (*(int *)(param_5 + 0x14) == 2) {
    puVar10 = *(undefined **)(param_5 + 0x18);
    local_34[1] = puVar10;
    if (puVar10 != (undefined *)0x0) {
      local_34[1] = (undefined *)0x3;
      if (*(int *)(param_4 + 4) == 0) {
        puVar10 = (undefined *)0x8;
      }
      else {
        puVar10 = (undefined *)0x6;
      }
    }
  }
  else {
    puVar10 = (undefined *)0x16;
    local_34[1] = (undefined *)0xd;
  }
  local_34[0] = (undefined *)0x0;
  local_54 = *(int *)(param_5 + 8);
  iVar4 = (*(int *)(param_5 + 0x40) + 1) * 2;
  if (*(uint *)(param_4 + 0x24) >> 1 != 0) {
    local_54 = local_54 + -2;
  }
  if (puVar10 == (undefined *)0x0) {
    *param_7 = 0;
    param_7[5] = 0;
    param_7[3] = 0;
    param_7[2] = 0;
    param_7[1] = 0;
    param_7[4] = 0;
    if ((int)local_34[1] < 0xc) {
      local_54 = 0xd0 - local_54;
      local_5c = puVar10;
      goto LAB_0002e4e0;
    }
LAB_0002e698:
    iVar5 = 0x1f;
  }
  else {
    local_54 = 0xd0 - local_54;
    local_5c = (undefined *)0x0;
    puVar12 = (undefined *)0x0;
    puVar14 = (undefined *)0x0;
    puVar3 = param_5;
    do {
      uVar8 = *(uint *)(param_5 + 0x3c);
      puVar9 = puVar14 + 1;
      if (uVar8 != 0) {
        puVar3 = &DAT_0003db8c;
      }
      if (uVar8 != 0) {
        uVar8 = (uint)(byte)puVar3[(int)puVar14];
      }
      iVar5 = (int)*(short *)(*(int *)(param_4 + 0x40) + (int)puVar9 * 2) -
              (int)*(short *)(*(int *)(param_4 + 0x40) + (int)puVar14 * 2);
      puVar2 = (uint *)(param_1 + (int)local_5c * 4);
      local_5c = local_5c + iVar5;
      uVar8 = FUN_0002e150(puVar2,puVar2,iVar5,iVar4 * ((byte)puVar14[param_6] + uVar8) + local_54);
      puVar12 = (undefined *)((uint)puVar12 | uVar8);
      if (uVar8 != 0) {
        local_34[0] = puVar14;
      }
    } while (((int)local_5c < *param_3) && (puVar14 = puVar9, puVar3 = puVar10, puVar9 != puVar10));
    iVar5 = 0;
    *param_7 = 0;
    param_7[3] = 0;
    param_7[5] = local_34[0];
    param_7[2] = 0;
    param_7[1] = 0;
    param_7[4] = 0;
    puVar10 = puVar12;
    if ((int)local_34[1] < 0xc) {
LAB_0002e4e0:
      local_60 = param_6 + (int)local_34[1] * 3;
      puVar12 = local_34[1];
      local_34[0] = local_34[1];
      local_34[2] = local_34[1];
      do {
        iVar11 = 0;
        puVar3 = puVar12 + 1;
        iVar5 = 0;
        puVar13 = (undefined4 *)(param_1 + (int)local_5c * 4);
        iVar15 = *(int *)(param_4 + 0x40) + (int)puVar12 * 2;
        iVar15 = (int)*(short *)(iVar15 + 0x30) - (int)*(short *)(iVar15 + 0x2e);
        puVar14 = param_5;
        do {
          puVar2 = (uint *)((int)puVar13 + iVar11);
          piVar1 = (int *)(puVar14 + 0x28);
          puVar14 = puVar14 + 4;
          puVar6 = (uint *)(param_2 + iVar11);
          iVar11 = iVar11 + iVar15 * 4;
          uVar8 = FUN_0002e150(puVar2,puVar6,iVar15,
                               iVar4 * (uint)*(byte *)(local_60 + iVar5 + 0x17) +
                               local_54 + *piVar1 * 8);
          puVar10 = (undefined *)((uint)puVar10 | uVar8);
          if (uVar8 != 0) {
            local_34[iVar5] = puVar12;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 != 3);
        local_5c = local_5c + iVar15 * 3;
        if (0 < iVar15) {
          puVar16 = (undefined4 *)(param_2 + -4);
          do {
            puVar16 = puVar16 + 1;
            *puVar13 = *puVar16;
            puVar13[1] = puVar16[iVar15];
            puVar13[2] = puVar16[iVar15 * 2];
            puVar13 = puVar13 + 3;
          } while (puVar16 != (undefined4 *)(param_2 + -4) + iVar15);
        }
      } while (((int)local_5c < *param_3) &&
              (local_60 = local_60 + 3, puVar12 = puVar3, (int)puVar3 < 0xd));
      *param_3 = (int)local_5c;
      iVar4 = *(int *)(param_5 + 0x18);
      param_7[1] = local_34[0];
      puVar12 = local_34[1];
      if ((int)local_34[1] < (int)local_34[0]) {
        puVar12 = local_34[0];
      }
      param_7[2] = local_34[1];
      if (iVar4 == 0) {
        uVar7 = 1;
      }
      else {
        uVar7 = 2;
      }
      if ((int)puVar12 < (int)local_34[2]) {
        param_7[4] = local_34[2];
      }
      else {
        param_7[4] = puVar12;
      }
      param_7[3] = local_34[2];
      *param_7 = uVar7;
      if (puVar10 == (undefined *)0x0) goto LAB_0002e698;
      if ((int)puVar10 < 0) {
        return -1;
      }
      iVar5 = 0;
      do {
        puVar10 = (undefined *)((int)puVar10 << 1);
        iVar5 = iVar5 + 1;
      } while (-1 < (int)puVar10);
    }
    else {
      if (puVar12 == (undefined *)0x0) goto LAB_0002e698;
      if ((int)puVar12 < 0) {
        return -1;
      }
      do {
        puVar12 = (undefined *)((int)puVar12 << 1);
        iVar5 = iVar5 + 1;
      } while (-1 < (int)puVar12);
    }
    iVar5 = iVar5 + -1;
  }
  return iVar5;
}



byte * AudioMP3DecodeHuffman
                 (int *param_1,byte *param_2,uint *param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  byte *pbVar20;
  ushort *puVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  byte *pbVar25;
  uint uVar26;
  bool bVar27;
  byte *local_88;
  int local_84;
  int local_80;
  byte *local_70;
  uint *local_5c;
  int local_2c [3];
  
  if (((((param_1 == (int *)0x0) || (iVar8 = *param_1, iVar8 == 0)) || (param_1[1] == 0)) ||
      ((param_1[2] == 0 || (iVar4 = param_1[3], iVar4 == 0)))) ||
     (pbVar25 = (byte *)(param_1[1] + param_5 * 0x90 + param_6 * 0x48 + 0x28), param_4 < 0)) {
    return (byte *)0xffffffff;
  }
  if ((*(int *)(pbVar25 + 0x10) == 0) || (*(int *)(pbVar25 + 0x14) != 2)) {
    iVar8 = (int)*(short *)(*(int *)(iVar8 + 0x40) + (*(int *)(pbVar25 + 0x34) + 1) * 2);
  }
  else {
    if (*(int *)(pbVar25 + 0x18) == 0) {
      iVar8 = *(short *)(*(int *)(iVar8 + 0x40) + ((*(int *)(pbVar25 + 0x34) + 1) / 3) * 2 + 0x2e) *
              3;
    }
    else {
      iVar14 = *(int *)(iVar8 + 0x40);
      if (*(int *)(iVar8 + 4) == 0) {
        iVar8 = (int)*(short *)(iVar14 + *(int *)(pbVar25 + 0x34) * 2 + 2);
      }
      else {
        iVar8 = (int)*(short *)(iVar14 + 0xc) +
                ((int)*(short *)(iVar14 + 0x36) - (int)*(short *)(iVar14 + 0x34)) * 2;
      }
    }
  }
  local_80 = 0;
  iVar11 = param_6 + 0x480;
  iVar14 = *(int *)(pbVar25 + 4) * 2;
  if (0x23f < iVar14) {
    iVar14 = 0x240;
  }
  if (iVar14 <= iVar8) {
    iVar8 = iVar14;
  }
  iVar18 = iVar4 + param_6 * 0x900;
  *(int *)(iVar4 + iVar11 * 4) = iVar14;
  iVar19 = 0;
  uVar12 = *param_3;
  local_88 = param_2;
  local_84 = param_4;
  local_70 = pbVar25;
  do {
    iVar8 = iVar8 - iVar19;
    iVar9 = *(int *)(local_70 + 0x1c);
    local_5c = (uint *)(iVar18 + iVar19 * 4);
    if (iVar8 < 1) {
      uVar12 = 0;
      uVar13 = 0;
LAB_0002ef40:
      if (local_84 < (int)uVar13) {
        uVar12 = 1;
      }
      if (uVar12 != 0) {
        return (byte *)0xffffffff;
      }
    }
    else {
      if (local_84 < 0) {
        return (byte *)0xffffffff;
      }
      uVar13 = -uVar12 & 7;
      uVar5 = *(uint *)(xmp3_huffTabLookup + iVar9 * 8);
      iVar19 = *(int *)(xmp3_huffTabLookup + iVar9 * 8 + 4);
      uVar12 = uVar13;
      pbVar20 = local_88;
      if (uVar13 != 0) {
        uVar12 = (uint)*local_88 << (0x20 - uVar13 & 0xff);
        pbVar20 = local_88 + 1;
      }
      if (iVar19 != 0) {
        iVar9 = *(int *)(xmp3_huffTabOffset + iVar9 * 4) * 2;
        iVar23 = local_84 - uVar13;
        if (iVar19 == 1) {
          uVar2 = *(ushort *)(xmp3_huffTable + iVar9);
          iVar19 = 0;
          if (iVar23 < 0x10) goto LAB_0002f0b4;
LAB_0002efe4:
          pbVar15 = pbVar20 + 1;
          uVar5 = 0x10 - uVar13;
          uVar17 = 0x18 - uVar13;
          bVar1 = *pbVar20;
          uVar13 = uVar13 + 0x10;
          pbVar20 = pbVar20 + 2;
          iVar23 = iVar23 + -0x10;
          uVar12 = uVar12 | (uint)*pbVar15 << (uVar5 & 0xff) | (uint)bVar1 << (uVar17 & 0xff);
          do {
            if (iVar8 < 1) {
LAB_0002f014:
              uVar13 = local_84 - ((uVar13 - iVar19) + iVar23);
              uVar12 = uVar13 >> 0x1f;
              goto LAB_0002ef40;
            }
            do {
              iVar8 = iVar8 + -2;
              uVar3 = *(ushort *)(iVar9 + 0x3ddca + (uVar12 >> (0x20 - (uVar2 & 0xf) & 0xff)) * 2);
              uVar17 = ((uint)uVar3 << 0x18) >> 0x1c;
              uVar12 = uVar12 << (uint)(uVar3 >> 0xc);
              uVar13 = uVar13 - (uVar3 >> 0xc);
              uVar5 = uVar17;
              if (uVar17 != 0) {
                uVar5 = uVar12 & 0x80000000;
              }
              uVar16 = ((uint)uVar3 << 0x14) >> 0x1c;
              if (uVar17 != 0) {
                uVar12 = uVar12 << 1;
                uVar13 = uVar13 - 1;
                uVar5 = uVar5 | uVar17;
              }
              uVar17 = uVar12 & 0x80000000;
              if (uVar16 != 0) {
                uVar13 = uVar13 - 1;
              }
              if (uVar16 != 0) {
                uVar12 = uVar12 << 1;
                uVar16 = uVar17 | uVar16;
              }
              if ((int)uVar13 < iVar19) {
                return (byte *)0xffffffff;
              }
              bVar27 = uVar13 == 10;
              iVar24 = uVar13 - 10;
              if ((int)uVar13 >= 0xb) {
                bVar27 = iVar8 == 0;
                iVar24 = iVar8;
              }
              *local_5c = uVar5;
              local_5c[1] = uVar16;
              local_5c = local_5c + 2;
            } while (!bVar27 && iVar24 < 0 == ((int)uVar13 < 0xb && SBORROW4(uVar13,10)));
            if (iVar8 < 1) goto LAB_0002f014;
            if (0xf < iVar23) goto LAB_0002efe4;
LAB_0002f0b4:
            iVar19 = iVar23 + uVar13;
            if (iVar19 < 1) {
              return (byte *)0xffffffff;
            }
            if (0 < iVar23) {
              bVar1 = *pbVar20;
              uVar5 = 0x18 - uVar13;
              if (iVar23 < 9) {
                pbVar20 = pbVar20 + 1;
              }
              else {
                uVar13 = 0x10 - uVar13;
              }
              uVar12 = uVar12 | (uint)bVar1 << (uVar5 & 0xff);
              if (8 < iVar23) {
                pbVar15 = pbVar20 + 1;
                pbVar20 = pbVar20 + 2;
                uVar12 = uVar12 | (uint)*pbVar15 << (uVar13 & 0xff);
              }
            }
            uVar12 = uVar12 & -0x80000000 >> (iVar19 - 1U & 0xff);
            uVar13 = iVar19 + 0xb;
            iVar19 = 0xb;
            iVar23 = 0;
          } while( true );
        }
        if (1 < iVar19 - 2U) {
          return (byte *)0xffffffff;
        }
        iVar10 = 0;
        iVar24 = uVar5 + 1;
        puVar21 = (ushort *)(xmp3_huffTable + iVar9);
        do {
          if (0xf < iVar23) {
            pbVar15 = pbVar20 + 1;
            uVar17 = 0x10 - uVar13;
            uVar16 = 0x18 - uVar13;
            bVar1 = *pbVar20;
            uVar13 = uVar13 + 0x10;
            pbVar20 = pbVar20 + 2;
            iVar23 = iVar23 + -0x10;
            uVar12 = uVar12 | (uint)*pbVar15 << (uVar17 & 0xff) | (uint)bVar1 << (uVar16 & 0xff);
            goto LAB_0002ea44;
          }
          iVar10 = iVar23 + uVar13;
          if (iVar10 < 1) {
            return (byte *)0xffffffff;
          }
          if (0 < iVar23) {
            bVar1 = *pbVar20;
            uVar17 = 0x18 - uVar13;
            if (iVar23 < 9) {
              pbVar20 = pbVar20 + 1;
            }
            else {
              uVar13 = 0x10 - uVar13;
            }
            uVar12 = uVar12 | (uint)bVar1 << (uVar17 & 0xff);
            if (8 < iVar23) {
              pbVar15 = pbVar20 + 1;
              pbVar20 = pbVar20 + 2;
              uVar12 = uVar12 | (uint)*pbVar15 << (uVar13 & 0xff);
            }
          }
          uVar13 = iVar10 + 0xb;
          bVar27 = uVar13 == 10;
          iVar22 = iVar10 + 1;
          if ((int)uVar13 >= 0xb) {
            bVar27 = iVar8 == 0;
            iVar22 = iVar8;
          }
          uVar12 = uVar12 & -0x80000000 >> (iVar10 - 1U & 0xff);
          iVar10 = 0xb;
          iVar23 = 0;
          if (!bVar27 && iVar22 < 0 == ((int)uVar13 < 0xb && SBORROW4(uVar13,10))) {
            do {
              uVar16 = *puVar21 & 0xf;
              uVar26 = (uint)puVar21[(uVar12 >> (0x20 - uVar16 & 0xff)) + 1];
              uVar17 = (uint)(puVar21[(uVar12 >> (0x20 - uVar16 & 0xff)) + 1] >> 0xc);
              if (uVar17 == 0) {
                uVar13 = uVar13 - uVar16;
                uVar12 = uVar12 << uVar16;
                puVar21 = puVar21 + uVar26;
              }
              else {
                uVar16 = (uVar26 << 0x18) >> 0x1c;
                uVar13 = uVar13 - uVar17;
                uVar12 = uVar12 << uVar17;
                uVar17 = (uVar26 << 0x14) >> 0x1c;
                if (uVar16 == 0xf && iVar19 == 3) {
                  iVar22 = iVar24;
                  if (uVar17 != 0) {
                    iVar22 = uVar5 + 2;
                  }
                  if ((int)(uVar13 + iVar23) < iVar22) {
                    return (byte *)0xffffffff;
                  }
                  if ((int)uVar13 < iVar22) {
                    pbVar15 = pbVar20 + -1;
                    uVar16 = 0x18 - uVar13;
                    do {
                      pbVar15 = pbVar15 + 1;
                      uVar12 = uVar12 | (uint)*pbVar15 << (uVar16 & 0xff);
                      uVar16 = uVar16 - 8;
                    } while (pbVar15 != pbVar20 + (~uVar13 + iVar22 >> 3));
                    uVar26 = ~uVar13 + iVar22;
                    uVar16 = uVar26 >> 3;
                    iVar23 = iVar23 + -8 + uVar16 * -8;
                    uVar13 = uVar13 + 8 + (uVar26 & 0xfffffff8);
                    if (iVar23 < 0) {
                      uVar13 = uVar13 + iVar23;
                    }
                    pbVar20 = pbVar20 + uVar16 + 1;
                    if (iVar23 < 0) {
                      iVar23 = 0;
                      uVar12 = uVar12 & -0x80000000 >> (uVar13 - 1 & 0xff);
                    }
                  }
                  uVar16 = uVar12 >> (0x20 - uVar5 & 0xff);
                  uVar12 = uVar12 << (uVar5 & 0xff);
                  uVar16 = uVar16 + 0xf;
                  uVar13 = uVar13 - uVar5;
                }
                if (uVar16 != 0) {
                  uVar13 = uVar13 - 1;
                  uVar16 = uVar16 | uVar12 & 0x80000000;
                  uVar12 = uVar12 << 1;
                }
                if (uVar17 == 0xf && iVar19 == 3) {
                  if ((int)(uVar13 + iVar23) < iVar24) {
                    return (byte *)0xffffffff;
                  }
                  if ((int)uVar13 < iVar24) {
                    pbVar15 = pbVar20 + -1;
                    uVar26 = 0x18 - uVar13;
                    uVar17 = uVar5 - uVar13 >> 3;
                    do {
                      pbVar15 = pbVar15 + 1;
                      uVar12 = uVar12 | (uint)*pbVar15 << (uVar26 & 0xff);
                      uVar26 = uVar26 - 8;
                    } while (pbVar15 != pbVar20 + uVar17);
                    iVar23 = iVar23 + -8 + uVar17 * -8;
                    uVar13 = uVar13 + 8 + (uVar5 - uVar13 & 0xfffffff8);
                    if (iVar23 < 0) {
                      uVar13 = uVar13 + iVar23;
                    }
                    pbVar20 = pbVar20 + uVar17 + 1;
                    if (iVar23 < 0) {
                      iVar23 = 0;
                      uVar12 = uVar12 & -0x80000000 >> (uVar13 - 1 & 0xff);
                    }
                  }
                  uVar17 = uVar12 >> (0x20 - uVar5 & 0xff);
                  uVar12 = uVar12 << (uVar5 & 0xff);
                  uVar17 = uVar17 + 0xf;
                  uVar13 = uVar13 - uVar5;
                }
                if (uVar17 != 0) {
                  uVar26 = uVar12 & 0x80000000;
                  uVar13 = uVar13 - 1;
                  uVar12 = uVar12 << 1;
                  uVar17 = uVar17 | uVar26;
                }
                if ((int)uVar13 < iVar10) {
                  return (byte *)0xffffffff;
                }
                iVar8 = iVar8 + -2;
                *local_5c = uVar16;
                local_5c[1] = uVar17;
                local_5c = local_5c + 2;
                puVar21 = (ushort *)(xmp3_huffTable + iVar9);
              }
LAB_0002ea44:
              bVar27 = uVar13 == 10;
              iVar22 = uVar13 - 10;
              if ((int)uVar13 >= 0xb) {
                bVar27 = iVar8 == 0;
                iVar22 = iVar8;
              }
            } while (!bVar27 && iVar22 < 0 == ((int)uVar13 < 0xb && SBORROW4(uVar13,10)));
          }
        } while (0 < iVar8);
        uVar13 = local_84 - (iVar23 + (uVar13 - iVar10));
        uVar12 = uVar13 >> 0x1f;
        goto LAB_0002ef40;
      }
      puVar6 = local_5c + (iVar8 - 1U & 0xfffffffe) + 2;
      do {
        *local_5c = 0;
        local_5c[1] = 0;
        local_5c = local_5c + 2;
      } while (local_5c != puVar6);
      uVar13 = 0;
    }
    uVar5 = *param_3;
    local_84 = local_84 - uVar13;
    uVar12 = uVar13 + uVar5 & 7;
    *param_3 = uVar12;
    pbVar20 = local_88 + ((int)(uVar13 + uVar5) >> 3);
    local_88 = pbVar20;
    if (local_80 + 4 == 0xc) break;
    iVar19 = *(int *)((int)local_2c + local_80);
    iVar8 = *(int *)((int)local_2c + local_80 + 4);
    local_80 = local_80 + 4;
    local_70 = local_70 + 4;
  } while( true );
  iVar8 = local_84;
  if (local_84 < 1) {
    iVar8 = 0;
  }
  iVar19 = *(int *)(iVar4 + iVar11 * 4);
  puVar6 = (uint *)(iVar18 + iVar14 * 4);
  uVar13 = *(uint *)(pbVar25 + 0x44);
  if (0 < local_84) {
    uVar12 = -uVar12 & 7;
    bVar27 = uVar12 != 0;
    if (bVar27) {
      pbVar25 = pbVar20;
    }
    iVar18 = 0;
    iVar9 = *(int *)((int)&xmp3_quadTabOffset + uVar13 * 4);
    iVar23 = *(int *)((int)&xmp3_quadTabMaxBits + uVar13 * 4);
    uVar5 = uVar12;
    if (bVar27) {
      uVar13 = (uint)*pbVar25;
      pbVar25 = pbVar25 + 1;
      uVar5 = 0x20 - uVar12;
    }
    iVar8 = 0;
    iVar24 = local_84 - uVar12;
    if (bVar27) {
      uVar5 = uVar13 << (uVar5 & 0xff);
      local_88 = pbVar25;
    }
    while (iVar8 < 0x23d - iVar14) {
      if (0xf < iVar24) {
        uVar13 = 0x18 - uVar12;
        iVar24 = iVar24 + -0x10;
        pbVar25 = (byte *)(uint)local_88[1];
        uVar17 = 0x10 - uVar12;
        uVar12 = uVar12 + 0x10;
        bVar1 = *local_88;
        local_88 = local_88 + 2;
        uVar5 = uVar5 | (int)pbVar25 << (uVar17 & 0xff) | (uint)bVar1 << (uVar13 & 0xff);
        goto joined_r0x0002ed9c;
      }
      iVar10 = iVar24 + uVar12;
      if (iVar10 < 1) break;
      if (0 < iVar24) {
        uVar13 = 0x18 - uVar12;
        if (8 < iVar24) {
          uVar12 = 0x10 - uVar12;
          pbVar25 = local_88;
        }
        uVar5 = uVar5 | (uint)*local_88 << (uVar13 & 0xff);
        if (iVar24 < 9) {
          local_88 = local_88 + 1;
        }
        else {
          local_88 = pbVar25 + 2;
          uVar5 = uVar5 | (uint)pbVar25[1] << (uVar12 & 0xff);
        }
      }
      uVar12 = iVar10 + 10;
      iVar18 = 10;
      uVar5 = uVar5 & -0x80000000 >> (iVar10 - 1U & 0xff);
      iVar24 = 0;
      do {
        bVar1 = xmp3_quadTable[(uVar5 >> (0x20U - iVar23 & 0xff)) + iVar9];
        uVar13 = (uint)bVar1;
        uVar17 = -((int)(uVar13 << 0x1c) >> 0x1f);
        bVar27 = uVar17 != 0;
        uVar5 = uVar5 << (uint)(bVar1 >> 4);
        uVar12 = uVar12 - (bVar1 >> 4);
        if (bVar27) {
          uVar17 = uVar5 & 0x80000000;
        }
        pbVar25 = (byte *)-((int)(uVar13 << 0x1d) >> 0x1f);
        if (bVar27) {
          uVar5 = uVar5 << 1;
          uVar12 = uVar12 - 1;
          uVar17 = uVar17 | 1;
        }
        bVar27 = pbVar25 != (byte *)0x0;
        if (bVar27) {
          pbVar25 = (byte *)(uVar5 & 0x80000000);
          uVar5 = uVar5 << 1;
        }
        uVar16 = -((int)(uVar13 << 0x1e) >> 0x1f);
        if (bVar27) {
          uVar12 = uVar12 - 1;
          pbVar25 = (byte *)((uint)pbVar25 | 1);
        }
        if (uVar16 != 0) {
          uVar16 = uVar5 & 0x80000000;
          uVar5 = uVar5 << 1;
          uVar12 = uVar12 - 1;
          uVar16 = uVar16 | 1;
        }
        uVar13 = uVar13 & 1;
        if ((bVar1 & 1) != 0) {
          uVar12 = uVar12 - 1;
          uVar13 = uVar5 & 0x80000000 | 1;
          uVar5 = uVar5 << 1;
        }
        if ((int)uVar12 < iVar18) goto LAB_0002ee48;
        iVar8 = iVar8 + 4;
        *puVar6 = uVar17;
        puVar6[1] = (uint)pbVar25;
        puVar6[2] = uVar16;
        puVar6[3] = uVar13;
        puVar6 = puVar6 + 4;
        if (0x23d - iVar14 <= iVar8) goto LAB_0002ee48;
joined_r0x0002ed9c:
      } while (9 < (int)uVar12);
    }
  }
LAB_0002ee48:
  iVar19 = iVar19 + iVar8;
  *(int *)(iVar4 + iVar11 * 4) = iVar19;
  if (iVar19 < 0x240) {
    puVar7 = (undefined4 *)(iVar4 + (iVar19 + param_6 * 0x240) * 4 + -4);
    do {
      puVar7 = puVar7 + 1;
      *puVar7 = 0;
    } while (puVar7 != (undefined4 *)(iVar4 + 0x8fc + param_6 * 0x900));
  }
  uVar12 = *param_3;
  *param_3 = local_84 + uVar12 & 7;
  return pbVar20 + (((int)(local_84 + uVar12) >> 3) - (int)param_2);
}



void FUN_0002f16c(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar2;
  
  if (param_3 == 2) {
    *param_2 = (int)((ulonglong)((longlong)param_1[2] * -0x47311c28) >> 0x20) +
               (int)((ulonglong)((longlong)param_1[6] * 0x7311c28) >> 0x20);
    param_2[1] = (int)((ulonglong)((longlong)param_1[1] * -0x4d413ccd) >> 0x20) +
                 (int)((ulonglong)((longlong)param_1[7] * 0xd413ccd) >> 0x20);
    param_2[2] = (int)((ulonglong)((longlong)*param_1 * -0x47311c28) >> 0x20) +
                 (int)((ulonglong)((longlong)param_1[8] * 0x7311c28) >> 0x20);
    param_2[3] = (int)((ulonglong)((longlong)*param_1 * -0x36a09e66) >> 0x20) +
                 (int)((ulonglong)((longlong)param_1[8] * -0x95f619a) >> 0x20);
    param_2[4] = (int)((ulonglong)((longlong)param_1[1] * -0x20000000) >> 0x20) +
                 (int)((ulonglong)((longlong)param_1[7] * -0x20000000) >> 0x20);
    param_2[5] = (int)((ulonglong)((longlong)param_1[2] * -0x95f619a) >> 0x20) +
                 (int)((ulonglong)((longlong)param_1[6] * -0x36a09e66) >> 0x20);
    param_2[6] = (int)((ulonglong)((longlong)param_1[5] * -0x47311c28) >> 0x20);
    param_2[7] = (int)((ulonglong)((longlong)param_1[4] * -0x4d413ccd) >> 0x20);
    param_2[8] = (int)((ulonglong)((longlong)param_1[3] * -0x47311c28) >> 0x20);
    param_2[9] = (int)((ulonglong)((longlong)param_1[3] * -0x36a09e66) >> 0x20);
    param_2[10] = (int)((ulonglong)((longlong)param_1[4] * -0x20000000) >> 0x20);
    param_2[0xb] = (int)((ulonglong)((longlong)param_1[5] * -0x95f619a) >> 0x20);
    param_2[0x11] = 0;
    param_2[0x10] = 0;
    param_2[0xf] = 0;
    param_2[0xe] = 0;
    param_2[0xd] = 0;
    param_2[0xc] = 0;
  }
  else {
    piVar1 = param_1;
    piVar4 = (int *)(xmp3_imdctWin + param_3 * 0x90 + 0x8c);
    piVar5 = (int *)(xmp3_imdctWin + param_3 * 0x90 + 0x48);
    piVar6 = param_2 + 0x11;
    do {
      piVar2 = piVar1 + 1;
      iVar3 = *piVar1;
      iVar7 = *piVar4;
      *param_2 = (int)((ulonglong)((longlong)*piVar5 * (longlong)iVar3) >> 0x20);
      *piVar6 = (int)((ulonglong)((longlong)iVar7 * (longlong)iVar3) >> 0x20);
      piVar1 = piVar2;
      param_2 = param_2 + 1;
      piVar4 = piVar4 + -1;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + -1;
    } while (piVar2 != param_1 + 9);
  }
  return;
}



uint FUN_0002f30c(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  if (param_4 == 0) {
    uVar2 = param_3 & 1;
    if ((param_3 & 1) != 0) {
      *(int *)(param_1 + 0x180) = -*(int *)(param_1 + 0x180);
      *(int *)(param_1 + 0x280) = -*(int *)(param_1 + 0x280);
      *(int *)(param_1 + 0x380) = -*(int *)(param_1 + 0x380);
      *(int *)(param_1 + 0x480) = -*(int *)(param_1 + 0x480);
      *(int *)(param_1 + 0x580) = -*(int *)(param_1 + 0x580);
      *(int *)(param_1 + 0x680) = -*(int *)(param_1 + 0x680);
      *(int *)(param_1 + 0x780) = -*(int *)(param_1 + 0x780);
      *(int *)(param_1 + 0x880) = -*(int *)(param_1 + 0x880);
      *(int *)(param_1 + 0x80) = -*(int *)(param_1 + 0x80);
      uVar2 = param_4;
    }
  }
  else {
    iVar6 = param_1 + 0x100;
    uVar2 = param_3 & 1;
    uVar8 = 0x1f - param_4;
    uVar9 = ~(-1 << (uVar8 & 0xff));
    piVar3 = (int *)(param_2 + -4);
    iVar1 = iVar6;
    iVar11 = param_1;
    if (uVar2 == 0) {
      do {
        iVar7 = iVar1;
        uVar10 = *(uint *)(iVar6 + -0x100);
        if ((int)uVar10 >> 0x1f != (int)uVar10 >> (uVar8 & 0xff)) {
          uVar10 = (int)uVar10 >> 0x1f ^ uVar9;
        }
        uVar10 = uVar10 << (param_4 & 0xff);
        *(uint *)(iVar6 + -0x100) = uVar10;
        uVar4 = *(uint *)(iVar11 + 0x80);
        iVar6 = iVar6 + 0x100;
        if ((int)uVar4 >> 0x1f != (int)uVar4 >> (uVar8 & 0xff)) {
          uVar4 = uVar9 ^ (int)uVar4 >> 0x1f;
        }
        uVar4 = uVar4 << (param_4 & 0xff);
        *(uint *)(iVar11 + 0x80) = uVar4;
        uVar5 = piVar3[1];
        uVar2 = uVar2 | ((int)uVar4 >> 0x1f ^ uVar4) - ((int)uVar4 >> 0x1f) |
                        ((int)uVar10 >> 0x1f ^ uVar10) - ((int)uVar10 >> 0x1f);
        if ((int)uVar5 >> 0x1f != (int)uVar5 >> (uVar8 & 0xff)) {
          uVar5 = uVar9 ^ (int)uVar5 >> 0x1f;
        }
        piVar3 = piVar3 + 1;
        *piVar3 = uVar5 << (param_4 & 0xff);
        iVar1 = iVar7 + 0x100;
        iVar11 = iVar7;
      } while (param_1 + 0x900 != iVar7);
    }
    else {
      uVar2 = 0;
      do {
        iVar7 = iVar1;
        uVar10 = *(uint *)(iVar6 + -0x100);
        if ((int)uVar10 >> 0x1f != (int)uVar10 >> (uVar8 & 0xff)) {
          uVar10 = (int)uVar10 >> 0x1f ^ uVar9;
        }
        uVar10 = uVar10 << (param_4 & 0xff);
        *(uint *)(iVar6 + -0x100) = uVar10;
        iVar6 = iVar6 + 0x100;
        uVar4 = -*(int *)(iVar11 + 0x80);
        if ((int)uVar4 >> 0x1f != (int)uVar4 >> (uVar8 & 0xff)) {
          uVar4 = uVar9 ^ (int)uVar4 >> 0x1f;
        }
        uVar4 = uVar4 << (param_4 & 0xff);
        *(uint *)(iVar11 + 0x80) = uVar4;
        uVar5 = piVar3[1];
        uVar2 = uVar2 | ((int)uVar4 >> 0x1f ^ uVar4) - ((int)uVar4 >> 0x1f) |
                        ((int)uVar10 >> 0x1f ^ uVar10) - ((int)uVar10 >> 0x1f);
        if ((int)uVar5 >> 0x1f != (int)uVar5 >> (uVar8 & 0xff)) {
          uVar5 = uVar9 ^ (int)uVar5 >> 0x1f;
        }
        piVar3 = piVar3 + 1;
        *piVar3 = uVar5 << (param_4 & 0xff);
        iVar1 = iVar7 + 0x100;
        iVar11 = iVar7;
      } while (param_1 + 0x900 != iVar7);
    }
  }
  return uVar2;
}



undefined4 AudioMP3IMDCT(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  int iVar21;
  uint uVar22;
  int *piVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  int *piVar41;
  int *local_164;
  uint local_160;
  int *local_158;
  int *local_154;
  int *local_150;
  uint local_14c;
  int *local_148;
  uint local_144;
  int local_13c;
  int local_134;
  int *local_120;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_fc;
  int *local_d0;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4 [34];
  int local_2c [2];
  
  if ((((param_1 == (int *)0x0) || (iVar13 = *param_1, iVar13 == 0)) ||
      (iVar17 = param_1[1], iVar17 == 0)) ||
     ((iVar21 = param_1[3], iVar21 == 0 || (iVar1 = param_1[5], iVar1 == 0)))) {
    uVar4 = 0xffffffff;
  }
  else {
    local_c0 = param_2 * 8;
    if (*(int *)(iVar13 + 4) == 0) {
      iVar5 = 0x10;
    }
    else {
      iVar5 = 0xc;
    }
    iVar18 = iVar17 + param_2 * 0x90 + param_3 * 0x48;
    uVar11 = SEXT24(*(short *)(*(int *)(iVar13 + 0x40) + iVar5) / 0x12);
    if (*(int *)(iVar18 + 0x3c) == 2) {
      uVar22 = *(uint *)(iVar18 + 0x40);
      if (uVar22 == 0) {
        local_134 = 8;
        local_fc = uVar22;
      }
      else {
        uVar22 = uVar11 - 1;
        local_134 = uVar22 * 0x12 + 8;
        local_fc = uVar11;
      }
    }
    else {
      iVar13 = *(int *)(iVar21 + (param_3 + 0x480) * 4);
      if (iVar13 < 0x227) {
        uVar22 = (iVar13 + 7) / 0x12;
        local_134 = uVar22 * 0x12 + 8;
        local_fc = uVar22 + 1;
      }
      else {
        local_134 = 0x236;
        uVar22 = 0x1f;
        local_fc = 0x20;
      }
    }
    local_13c = param_3 + 0x480;
    local_d0 = (int *)(iVar21 + param_3 * 0x900);
    if ((int)nBflymax < (int)uVar22) {
      nBflymax = uVar22;
    }
    piVar3 = local_d0;
    if (0 < (int)uVar22) {
      do {
        piVar9 = piVar3 + 0x12;
        iVar13 = piVar3[0x11];
        piVar3[0x11] = ((int)((ulonglong)((longlong)iVar13 * 0x6dc253f0) >> 0x20) -
                       (int)((ulonglong)((longlong)*piVar9 * -0x41daff56) >> 0x20)) * 2;
        iVar5 = piVar3[0x10];
        *piVar9 = ((int)((ulonglong)((longlong)*piVar9 * 0x6dc253f0) >> 0x20) +
                  (int)((ulonglong)((longlong)iVar13 * -0x41daff56) >> 0x20)) * 2;
        piVar3[0x10] = ((int)((ulonglong)((longlong)iVar5 * 0x70dcebe4) >> 0x20) -
                       (int)((ulonglong)((longlong)piVar3[0x13] * -0x3c61b6b7) >> 0x20)) * 2;
        iVar13 = piVar3[0xf];
        piVar3[0x13] = ((int)((ulonglong)((longlong)piVar3[0x13] * 0x70dcebe4) >> 0x20) +
                       (int)((ulonglong)((longlong)iVar5 * -0x3c61b6b7) >> 0x20)) * 2;
        piVar3[0xf] = ((int)((ulonglong)((longlong)iVar13 * 0x798d6e73) >> 0x20) -
                      (int)((ulonglong)((longlong)piVar3[0x14] * -0x281cc0b6) >> 0x20)) * 2;
        iVar5 = piVar3[0xe];
        piVar3[0x14] = ((int)((ulonglong)((longlong)piVar3[0x14] * 0x798d6e73) >> 0x20) +
                       (int)((ulonglong)((longlong)iVar13 * -0x281cc0b6) >> 0x20)) * 2;
        piVar3[0xe] = ((int)((ulonglong)((longlong)iVar5 * 0x7ddd40a7) >> 0x20) -
                      (int)((ulonglong)((longlong)piVar3[0x15] * -0x1748ee8a) >> 0x20)) * 2;
        iVar13 = piVar3[0xd];
        piVar3[0x15] = ((int)((ulonglong)((longlong)piVar3[0x15] * 0x7ddd40a7) >> 0x20) +
                       (int)((ulonglong)((longlong)iVar5 * -0x1748ee8a) >> 0x20)) * 2;
        piVar3[0xd] = ((int)((ulonglong)((longlong)iVar13 * 0x7f6d20b7) >> 0x20) -
                      (int)((ulonglong)((longlong)piVar3[0x16] * -0xc1b01d1) >> 0x20)) * 2;
        iVar5 = piVar3[0xc];
        piVar3[0x16] = ((int)((ulonglong)((longlong)piVar3[0x16] * 0x7f6d20b7) >> 0x20) +
                       (int)((ulonglong)((longlong)iVar13 * -0xc1b01d1) >> 0x20)) * 2;
        piVar3[0xc] = ((int)((ulonglong)((longlong)iVar5 * 0x7fe47e40) >> 0x20) -
                      (int)((ulonglong)((longlong)piVar3[0x17] * -0x53e5c39) >> 0x20)) * 2;
        iVar13 = piVar3[0xb];
        piVar3[0x17] = ((int)((ulonglong)((longlong)piVar3[0x17] * 0x7fe47e40) >> 0x20) +
                       (int)((ulonglong)((longlong)iVar5 * -0x53e5c39) >> 0x20)) * 2;
        piVar3[0xb] = ((int)((ulonglong)((longlong)iVar13 * 0x7ffcb263) >> 0x20) -
                      (int)((ulonglong)((longlong)piVar3[0x18] * -0x1d1423a) >> 0x20)) * 2;
        iVar5 = piVar3[10];
        piVar3[0x18] = ((int)((ulonglong)((longlong)piVar3[0x18] * 0x7ffcb263) >> 0x20) +
                       (int)((ulonglong)((longlong)iVar13 * -0x1d1423a) >> 0x20)) * 2;
        piVar3[10] = ((int)((ulonglong)((longlong)iVar5 * 0x7fffc694) >> 0x20) -
                     (int)((ulonglong)((longlong)piVar3[0x19] * -0x793da3) >> 0x20)) * 2;
        uVar22 = uVar22 - 1;
        piVar3[0x19] = ((int)((ulonglong)((longlong)piVar3[0x19] * 0x7fffc694) >> 0x20) +
                       (int)((ulonglong)((longlong)iVar5 * -0x793da3) >> 0x20)) * 2;
        piVar3 = piVar9;
      } while (uVar22 != 0);
    }
    iVar13 = *(int *)(iVar21 + local_13c * 4);
    if (iVar13 < local_134) {
      iVar13 = local_134;
    }
    uVar36 = *(uint *)(iVar1 + (param_3 + 0x6c0) * 4);
    iVar5 = param_2 * 0x90 + param_3 * 0x48;
    iVar18 = *(int *)(iVar17 + iVar5 + 0x40);
    uVar22 = (iVar13 + 0x11) / 0x12;
    *(int *)(iVar21 + local_13c * 4) = iVar13;
    local_148 = (int *)(iVar1 + param_3 * 0x480 + 0x1200);
    if (iVar18 == 0) {
      uVar11 = 0;
    }
    local_bc = param_3 + 0x6c2;
    uVar30 = *(uint *)(iVar1 + local_bc * 4);
    iVar24 = *(int *)(iVar1 + (param_3 + 0x6c4) * 4);
    iVar18 = iVar1 + param_3 * 0x900;
    iVar13 = *(int *)(iVar21 + (param_3 + 0x482) * 4);
    iVar21 = iVar17 + iVar5 + 0x28;
    if ((int)local_fc < 1) {
      local_110 = 0;
      local_fc = 0;
    }
    else {
      uVar38 = 7 - iVar13;
      uVar39 = uVar38;
      if (6 < iVar13) {
        uVar39 = 0;
      }
      local_154 = (int *)0x0;
      local_108 = 0;
      piVar3 = local_d0 + -1;
      local_150 = local_148;
      do {
        local_144 = *(uint *)(iVar21 + 0x14);
        if ((*(int *)(iVar21 + 0x18) != 0) && ((int)local_154 < (int)uVar11)) {
          local_144 = 0;
        }
        piVar9 = piVar3 + 0x12;
        iVar5 = iVar18 + (int)local_154 * 4;
        uVar31 = uVar30;
        if ((int)local_154 < iVar24) {
          uVar31 = 0;
        }
        if (iVar13 < 7) {
          iVar2 = 0;
          piVar23 = &local_b8;
          iVar37 = 0;
          piVar7 = piVar9;
          piVar12 = local_150;
          do {
            iVar32 = *piVar7;
            piVar41 = piVar7 + -1;
            piVar7 = piVar7 + -2;
            iVar32 = (iVar32 >> (uVar38 & 0xff)) - iVar37;
            iVar37 = (*piVar41 >> (uVar38 & 0xff)) - iVar32;
            iVar2 = iVar32 - iVar2;
            piVar12[8] = piVar12[8] >> (uVar38 & 0xff);
            piVar12 = piVar12 + -1;
            piVar23[0x11] = iVar2;
            piVar23[8] = iVar37;
            piVar23 = piVar23 + -1;
          } while (piVar7 != piVar3);
        }
        else {
          iVar2 = 0;
          iVar37 = 0;
          piVar7 = local_b4 + 0x11;
          piVar12 = piVar9;
          do {
            iVar32 = *piVar12;
            piVar23 = piVar12 + -1;
            piVar12 = piVar12 + -2;
            iVar2 = (iVar32 - iVar37) - iVar2;
            iVar37 = *piVar23 - (iVar32 - iVar37);
            piVar7[-1] = iVar2;
            piVar7[-10] = iVar37;
            piVar7 = piVar7 + -1;
          } while (piVar3 != piVar12);
        }
        iVar32 = local_b4[1] + local_b4[3];
        iVar29 = (local_b4[1] - local_b4[3]) - local_b4[7];
        iVar2 = (local_b4[0] + local_b4[4]) - (local_b4[0] + local_b4[6]);
        iVar34 = (local_b8 >> 1) - local_b4[5];
        iVar33 = (int)((ulonglong)((longlong)local_b4[2] * 0x6ed9eba1) >> 0x20);
        iVar27 = (int)((ulonglong)
                       ((longlong)((local_b4[0] - local_b4[4]) - local_b4[6]) * 0x6ed9eba1) >> 0x20)
        ;
        iVar37 = (int)((ulonglong)((longlong)(local_b4[0] + local_b4[4]) * 0x5246dd49) >> 0x20) * 2
                 + (int)((ulonglong)((longlong)iVar2 * 0x7e0e2e32) >> 0x20) * -2;
        iVar40 = (int)((ulonglong)((longlong)(local_b4[1] + local_b4[7]) * 0x163a1a7e) >> 0x20) * 2
                 + (int)((ulonglong)((longlong)iVar32 * 0x620dbe8b) >> 0x20) * 2;
        iVar19 = (int)((ulonglong)((longlong)((local_b4[1] + local_b4[7]) - iVar32) * 0x620dbe8b) >>
                      0x20) * 2 + (int)((ulonglong)((longlong)iVar32 * 0x163a1a7e) >> 0x20) * -2;
        iVar16 = (local_b8 >> 1) + (local_b4[5] >> 1);
        iVar14 = (int)((ulonglong)((longlong)(local_b4[0] + local_b4[6]) * 0x7e0e2e32) >> 0x20) * 2
                 + (int)((ulonglong)((longlong)iVar2 * 0x5246dd49) >> 0x20) * 2;
        iVar25 = iVar16 + iVar33 * 2;
        iVar16 = iVar16 + iVar33 * -2;
        iVar2 = iVar34 + (iVar29 >> 1);
        local_b8 = iVar14 + iVar25 + iVar40;
        local_b4[2] = (iVar16 - (iVar40 + iVar19)) - (iVar37 - iVar14);
        iVar32 = (iVar16 + iVar40) - iVar14;
        local_b4[0] = iVar2 + iVar27 * 2;
        iVar33 = (local_b4[8] >> 1) - local_b4[14];
        local_b4[1] = iVar37 + iVar16 + iVar19;
        local_b4[3] = iVar34 - iVar29;
        local_b4[4] = (iVar37 - iVar14) + (iVar25 - (iVar40 + iVar19));
        local_b4[5] = (iVar25 + iVar19) - iVar37;
        local_b4[6] = iVar2 + iVar27 * -2;
        local_b4[7] = iVar32;
        iVar14 = local_b4[10] + local_b4[12];
        iVar19 = (local_b4[10] - local_b4[12]) - local_b4[16];
        iVar2 = (local_b4[9] + local_b4[13]) - (local_b4[9] + local_b4[15]);
        iVar27 = (int)((ulonglong)((longlong)local_b4[11] * 0x6ed9eba1) >> 0x20);
        iVar29 = (int)((ulonglong)
                       ((longlong)((local_b4[9] - local_b4[13]) - local_b4[15]) * 0x6ed9eba1) >>
                      0x20);
        iVar37 = (int)((ulonglong)((longlong)(local_b4[10] + local_b4[16]) * 0x163a1a7e) >> 0x20) *
                 2 + (int)((ulonglong)((longlong)iVar14 * 0x620dbe8b) >> 0x20) * 2;
        iVar16 = (int)((ulonglong)((longlong)(local_b4[9] + local_b4[15]) * 0x7e0e2e32) >> 0x20) * 2
                 + (int)((ulonglong)((longlong)iVar2 * 0x5246dd49) >> 0x20) * 2;
        iVar25 = (local_b4[8] >> 1) + (local_b4[14] >> 1);
        iVar40 = (int)((ulonglong)((longlong)((local_b4[10] + local_b4[16]) - iVar14) * 0x620dbe8b)
                      >> 0x20) * 2 + (int)((ulonglong)((longlong)iVar14 * 0x163a1a7e) >> 0x20) * -2;
        iVar14 = (int)((ulonglong)((longlong)(local_b4[9] + local_b4[13]) * 0x5246dd49) >> 0x20) * 2
                 + (int)((ulonglong)((longlong)iVar2 * 0x7e0e2e32) >> 0x20) * -2;
        iVar2 = iVar25 + iVar27 * -2;
        iVar25 = iVar25 + iVar27 * 2;
        iVar27 = iVar33 + (iVar19 >> 1);
        local_b4[10] = iVar14 + iVar2 + iVar40;
        local_b4[8] = iVar16 + iVar25 + iVar37;
        iVar34 = (iVar2 + iVar37) - iVar16;
        local_b4[9] = iVar27 + iVar29 * 2;
        local_b4[11] = (iVar2 - (iVar37 + iVar40)) - (iVar14 - iVar16);
        local_b4[13] = (iVar14 - iVar16) + (iVar25 - (iVar37 + iVar40));
        local_b4[14] = (iVar25 + iVar40) - iVar14;
        uVar26 = uVar31 | local_144;
        local_b4[12] = iVar33 - iVar19;
        local_b4[15] = iVar27 + iVar29 * -2;
        local_b4[16] = iVar34;
        if (uVar26 == 0) {
          piVar23 = &DAT_0003feec;
          uVar31 = uVar26;
          iVar2 = iVar5;
          piVar7 = &DAT_0003ff54;
          piVar12 = local_b4 + 6;
          piVar3 = local_150;
          while( true ) {
            iVar37 = (int)((ulonglong)((longlong)*piVar7 * (longlong)iVar34) >> 0x20);
            iVar14 = *piVar3;
            iVar16 = iVar37 - (iVar32 >> 2);
            *piVar3 = iVar37 + (iVar32 >> 2);
            iVar37 = -iVar16 - iVar14;
            piVar41 = piVar23 + 1;
            uVar6 = iVar16 + (int)((ulonglong)((longlong)iVar37 * (longlong)*piVar23) >> 0x20) * 4;
            piVar23 = piVar23 + 2;
            uVar35 = (int)((ulonglong)((longlong)iVar37 * (longlong)*piVar41) >> 0x20) * 4 - iVar14;
            *(uint *)(iVar5 + uVar31) = uVar6;
            *(uint *)(iVar2 + 0x880) = uVar35;
            uVar26 = uVar26 | ((int)uVar35 >> 0x1f ^ uVar35) - ((int)uVar35 >> 0x1f) |
                              ((int)uVar6 >> 0x1f ^ uVar6) - ((int)uVar6 >> 0x1f);
            uVar31 = uVar31 + 0x80;
            iVar2 = iVar2 + -0x80;
            if (piVar12 + -1 == &local_c0) break;
            iVar34 = piVar12[9];
            iVar32 = *piVar12;
            piVar7 = piVar7 + -1;
            piVar12 = piVar12 + -1;
            piVar3 = piVar3 + 1;
          }
        }
        else {
          piVar23 = local_2c + 1;
          FUN_0002f16c(local_150,local_b4 + 0x11,uVar31);
          iVar37 = 0;
          uVar26 = 0;
          piVar41 = (int *)(xmp3_imdctWin + local_144 * 0x90 + 0x48);
          piVar3 = local_b4 + 6;
          piVar7 = &DAT_0003ff54;
          piVar12 = local_150;
          iVar2 = iVar5;
          while( true ) {
            iVar14 = (int)((ulonglong)((longlong)*piVar7 * (longlong)iVar34) >> 0x20);
            iVar16 = (iVar32 >> 2) - iVar14;
            *piVar12 = iVar14 + (iVar32 >> 2);
            piVar41 = piVar41 + -1;
            iVar32 = *piVar41;
            uVar31 = ((int)((ulonglong)
                            ((longlong)iVar16 *
                            (longlong)*(int *)(xmp3_imdctWin + iVar37 + local_144 * 0x90)) >> 0x20)
                     + *(int *)((int)(local_b4 + 0x11) + iVar37)) * 4;
            piVar23 = piVar23 + -1;
            iVar14 = *piVar23;
            *(uint *)(iVar5 + iVar37 * 0x20) = uVar31;
            iVar37 = iVar37 + 4;
            uVar6 = ((int)((ulonglong)((longlong)iVar16 * (longlong)iVar32) >> 0x20) + iVar14) * 4;
            *(uint *)(iVar2 + 0x880) = uVar6;
            iVar2 = iVar2 + -0x80;
            uVar26 = uVar26 | ((int)uVar31 >> 0x1f ^ uVar31) - ((int)uVar31 >> 0x1f) |
                              ((int)uVar6 >> 0x1f ^ uVar6) - ((int)uVar6 >> 0x1f);
            if (iVar37 == 0x24) break;
            iVar34 = piVar3[9];
            iVar32 = *piVar3;
            piVar3 = piVar3 + -1;
            piVar7 = piVar7 + -1;
            piVar12 = piVar12 + 1;
          }
        }
        uVar6 = (int)local_154 + 1;
        uVar31 = FUN_0002f30c(iVar5,(int)local_150,(uint)local_154,uVar39);
        local_110 = local_108 | uVar31 | uVar26;
        piVar3 = piVar9;
        local_154 = (int *)uVar6;
        local_150 = local_150 + 9;
        local_108 = local_110;
      } while (uVar6 != local_fc);
      local_d0 = local_d0 + local_fc * 0x12;
      local_148 = local_148 + local_fc * 9;
    }
    if ((int)local_fc < (int)uVar22) {
      piVar3 = local_b4 + 0x11;
      local_154 = local_148;
      uVar38 = 7 - iVar13;
      uVar39 = local_fc;
      do {
        local_144 = uVar39;
        puVar8 = (uint *)(iVar18 + local_144 * 4);
        uVar39 = uVar30;
        if ((int)local_144 < iVar24) {
          uVar39 = 0;
        }
        if (iVar13 < 7) {
          piVar12 = local_d0 + 1;
          piVar9 = local_d0;
          piVar7 = local_154;
          do {
            piVar12[-1] = piVar12[-1] >> (uVar38 & 0xff);
            piVar12 = piVar12 + 2;
            piVar9[1] = piVar9[1] >> (uVar38 & 0xff);
            piVar9 = piVar9 + 2;
            piVar23 = piVar7 + 1;
            *piVar7 = *piVar7 >> (uVar38 & 0xff);
            piVar7 = piVar23;
            local_10c = uVar38;
          } while (local_154 + 9 != piVar23);
        }
        else {
          local_10c = 0;
        }
        local_120 = local_154 + 9;
        iVar32 = local_d0[0xf];
        iVar14 = local_d0[0xc] - iVar32;
        iVar37 = local_d0[6] - (local_d0[9] - iVar14);
        iVar2 = (local_d0[9] - iVar14) - iVar32;
        iVar5 = local_d0[3] - iVar37;
        iVar21 = *local_d0 - iVar5 >> 1;
        iVar5 = iVar5 - iVar2 >> 1;
        iVar37 = (int)((ulonglong)((longlong)iVar37 * 0x6ed9eba1) >> 0x20);
        iVar29 = iVar21 + (iVar14 >> 1);
        iVar21 = iVar21 - iVar14;
        iVar27 = iVar37 * 2 + iVar29;
        iVar29 = iVar29 + iVar37 * -2;
        iVar2 = (int)((ulonglong)((longlong)iVar2 * 0x6ed9eba1) >> 0x20);
        iVar37 = iVar5 + (iVar32 >> 1);
        iVar14 = (int)((ulonglong)((longlong)(iVar2 * 2 + iVar37) * 0x7ba3751d) >> 0x20);
        iVar5 = (int)((ulonglong)((longlong)(iVar5 - iVar32) * 0x5a82799a) >> 0x20);
        iVar16 = (int)((ulonglong)((longlong)(iVar37 + iVar2 * -2) * 0x2120fb83) >> 0x20);
        iVar37 = local_d0[0x10];
        iVar2 = iVar27 + iVar14 * 4;
        local_b4[0] = iVar21 + iVar5 * 4;
        iVar32 = iVar29 + iVar16 * 4;
        iVar29 = iVar29 + iVar16 * -4;
        local_b4[3] = iVar21 + iVar5 * -4;
        iVar27 = iVar27 + iVar14 * -4;
        iVar25 = local_d0[0xd] - iVar37;
        iVar14 = local_d0[7] - (local_d0[10] - iVar25);
        iVar5 = local_d0[4] - iVar14;
        iVar19 = (local_d0[10] - iVar25) - iVar37;
        iVar21 = local_d0[1] - iVar5 >> 1;
        iVar5 = iVar5 - iVar19 >> 1;
        iVar16 = (int)((ulonglong)((longlong)iVar14 * 0x6ed9eba1) >> 0x20);
        iVar14 = iVar21 + (iVar25 >> 1);
        iVar21 = iVar21 - iVar25;
        iVar25 = iVar16 * 2 + iVar14;
        iVar14 = iVar14 + iVar16 * -2;
        iVar16 = (int)((ulonglong)((longlong)iVar19 * 0x6ed9eba1) >> 0x20);
        iVar33 = iVar5 + (iVar37 >> 1);
        iVar19 = (int)((ulonglong)((longlong)(iVar16 * 2 + iVar33) * 0x7ba3751d) >> 0x20);
        iVar5 = (int)((ulonglong)((longlong)(iVar5 - iVar37) * 0x5a82799a) >> 0x20);
        iVar16 = (int)((ulonglong)((longlong)(iVar33 + iVar16 * -2) * 0x2120fb83) >> 0x20);
        iVar33 = iVar25 + iVar19 * 4;
        iVar37 = local_d0[0x11];
        local_150 = (int *)(iVar25 + iVar19 * -4);
        local_b4[6] = iVar21 + iVar5 * 4;
        local_b4[9] = iVar21 + iVar5 * -4;
        local_b4[7] = iVar14 + iVar16 * 4;
        iVar14 = iVar14 + iVar16 * -4;
        iVar16 = local_d0[0xe] - iVar37;
        iVar19 = local_d0[8] - (local_d0[0xb] - iVar16);
        iVar25 = (local_d0[0xb] - iVar16) - iVar37;
        iVar5 = local_d0[5] - iVar19;
        iVar21 = local_d0[2] - iVar5 >> 1;
        iVar5 = iVar5 - iVar25 >> 1;
        iVar19 = (int)((ulonglong)((longlong)iVar19 * 0x6ed9eba1) >> 0x20);
        iVar34 = iVar21 + (iVar16 >> 1);
        iVar21 = iVar21 - iVar16;
        iVar16 = iVar19 * 2 + iVar34;
        iVar34 = iVar34 + iVar19 * -2;
        iVar40 = (int)((ulonglong)((longlong)iVar25 * 0x6ed9eba1) >> 0x20);
        iVar25 = iVar5 + (iVar37 >> 1);
        iVar19 = (int)((ulonglong)((longlong)(iVar40 * 2 + iVar25) * 0x7ba3751d) >> 0x20);
        iVar37 = (int)((ulonglong)((longlong)(iVar5 - iVar37) * 0x5a82799a) >> 0x20);
        iVar5 = (int)((ulonglong)((longlong)(iVar25 + iVar40 * -2) * 0x2120fb83) >> 0x20);
        local_b4[12] = iVar21 + iVar37 * 4;
        iVar25 = iVar16 + iVar19 * 4;
        local_b4[13] = iVar34 + iVar5 * 4;
        local_b4[16] = iVar16 + iVar19 * -4;
        local_b4[14] = iVar34 + iVar5 * -4;
        local_b4[15] = iVar21 + iVar37 * -4;
        local_158 = &local_b8;
        local_b8 = iVar2;
        local_b4[1] = iVar32;
        local_b4[2] = iVar29;
        local_b4[4] = iVar27;
        local_b4[5] = iVar33;
        local_b4[8] = iVar14;
        local_b4[10] = (int)local_150;
        local_b4[11] = iVar25;
        FUN_0002f16c(local_154,piVar3,uVar39);
        iVar21 = 0;
        local_14c = 0;
        puVar15 = xmp3_imdctWin;
        puVar20 = puVar8;
        piVar9 = piVar3;
        local_164 = local_158;
        while( true ) {
          uVar39 = *(int *)((int)piVar3 + iVar21) << 2;
          *puVar20 = uVar39;
          uVar31 = piVar9[3] << 2;
          puVar20[0x60] = uVar31;
          uVar35 = (int)((ulonglong)((longlong)*(int *)(puVar15 + 0x120) * (longlong)iVar29) >> 0x20
                        ) + piVar9[6] * 4;
          puVar20[0xc0] = uVar35;
          uVar6 = (int)((ulonglong)((longlong)*(int *)(puVar15 + 300) * (longlong)iVar27) >> 0x20) +
                  piVar9[9] * 4;
          puVar20[0x120] = uVar6;
          uVar28 = (int)((ulonglong)((longlong)*(int *)(puVar15 + 0x138) * (longlong)iVar32) >> 0x20
                        ) + (int)((ulonglong)
                                  ((longlong)*(int *)(puVar15 + 0x120) * (longlong)iVar14) >> 0x20)
                   + piVar9[0xc] * 4;
          puVar20[0x180] = uVar28;
          piVar7 = (int *)(puVar15 + 0x144);
          piVar12 = (int *)(puVar15 + 300);
          iVar21 = iVar21 + 4;
          puVar15 = puVar15 + 4;
          piVar23 = piVar9 + 0xf;
          piVar9 = piVar9 + 1;
          uVar26 = (int)((ulonglong)((longlong)*piVar7 * (longlong)iVar2) >> 0x20) +
                   (int)((ulonglong)((longlong)*piVar12 * (longlong)(int)local_150) >> 0x20) +
                   *piVar23 * 4;
          puVar20[0x1e0] = uVar26;
          puVar20 = puVar20 + 0x20;
          local_14c = local_14c |
                      ((int)uVar31 >> 0x1f ^ uVar31) - ((int)uVar31 >> 0x1f) |
                      ((int)uVar39 >> 0x1f ^ uVar39) - ((int)uVar39 >> 0x1f) |
                      ((int)uVar35 >> 0x1f ^ uVar35) - ((int)uVar35 >> 0x1f) |
                      ((int)uVar6 >> 0x1f ^ uVar6) - ((int)uVar6 >> 0x1f) |
                      ((int)uVar28 >> 0x1f ^ uVar28) - ((int)uVar28 >> 0x1f) |
                      ((int)uVar26 >> 0x1f ^ uVar26) - ((int)uVar26 >> 0x1f);
          if (iVar21 == 0xc) break;
          local_150 = (int *)local_164[10];
          iVar27 = local_164[4];
          iVar32 = local_164[1];
          iVar29 = local_158[4];
          iVar14 = local_158[10];
          local_158 = local_158 + 1;
          iVar2 = *local_158;
          local_164 = local_164 + -1;
        }
        piVar7 = local_b4 + 0xb;
        *local_154 = iVar33 >> 2;
        local_154[1] = local_b4[6] >> 2;
        local_154[2] = local_b4[7] >> 2;
        piVar9 = local_154 + 3;
        while( true ) {
          piVar12 = piVar9 + 1;
          *piVar9 = iVar25 >> 2;
          if (piVar12 == local_120) break;
          piVar7 = piVar7 + 1;
          iVar25 = *piVar7;
          piVar9 = piVar12;
        }
        local_d0 = local_d0 + 0x12;
        uVar39 = local_144 + 1;
        uVar31 = FUN_0002f30c((int)puVar8,(int)local_154,local_144,local_10c);
        local_110 = local_110 | local_14c | uVar31;
        local_154 = piVar12;
      } while (uVar39 != uVar22);
      uVar22 = ~local_fc;
      local_fc = local_fc + 1 + uVar22 + uVar39;
      local_148 = local_148 + (uVar22 + local_144 + 2) * 9;
    }
    if ((int)local_fc < (int)uVar36) {
      local_160 = local_fc;
      local_164 = (int *)local_fc;
      do {
        uVar39 = 0;
        uVar22 = uVar30;
        if ((int)local_164 < iVar24) {
          uVar22 = 0;
        }
        FUN_0002f16c(local_148,local_b4 + 0x11,uVar22);
        puVar8 = (uint *)(iVar18 + (int)local_164 * 4);
        piVar9 = local_148 + -1;
        piVar3 = local_b4 + 0x11;
        do {
          uVar22 = *piVar3 << 2;
          *puVar8 = uVar22;
          piVar7 = piVar3 + 1;
          piVar3 = piVar3 + 2;
          uVar38 = (((int)local_164 << 0x1f) >> 0x1f ^ *piVar7 << 2) + ((uint)local_164 & 1);
          puVar8[0x20] = uVar38;
          uVar39 = uVar39 | uVar38 | uVar22;
          piVar9 = piVar9 + 1;
          *piVar9 = 0;
          puVar8 = puVar8 + 0x40;
          local_110 = local_110 |
                      ((int)uVar38 >> 0x1f ^ uVar38) - ((int)uVar38 >> 0x1f) |
                      ((int)uVar22 >> 0x1f ^ uVar22) - ((int)uVar22 >> 0x1f);
        } while (piVar3 != local_2c + 1);
        uVar22 = (int)local_164 + 1;
        if (uVar39 != 0) {
          local_160 = (uint)local_164;
        }
        local_148 = local_148 + 9;
        local_164 = (int *)uVar22;
      } while (uVar22 != uVar36);
      local_fc = local_fc + 1 + ~local_fc + uVar22;
    }
    else {
      local_160 = local_fc;
    }
    if ((int)local_fc < 0x20) {
      iVar18 = iVar18 + local_fc * 4;
      do {
        iVar13 = 0;
        do {
          *(undefined4 *)(iVar18 + iVar13) = 0;
          iVar13 = iVar13 + 0x80;
        } while (iVar13 != 0x900);
        local_fc = local_fc + 1;
        iVar18 = iVar18 + 4;
      } while (local_fc != 0x20);
    }
    if (local_110 == 0) {
      iVar13 = 0x1f;
    }
    else {
      if ((int)local_110 < 0) {
        iVar13 = -1;
      }
      else {
        iVar21 = 0;
        do {
          iVar13 = iVar21;
          local_110 = local_110 << 1;
          iVar21 = iVar13 + 1;
        } while (-1 < (int)local_110);
      }
    }
    *(uint *)(iVar1 + (param_3 + 0x6c0) * 4) = local_160;
    uVar4 = 0;
    uVar10 = *(undefined4 *)(iVar17 + (local_c0 + param_2) * 0x10 + param_3 * 0x48 + 0x3c);
    *(int *)(iVar1 + (param_3 + 0x6c6) * 4) = iVar13;
    *(uint *)(iVar1 + (param_3 + 0x6c4) * 4) = uVar11;
    *(undefined4 *)(iVar1 + local_bc * 4) = uVar10;
  }
  return uVar4;
}



void xmp3_PolyphaseMono(ushort *param_1,int *param_2,int *param_3)

{
  uint uVar1;
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
  int *piVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  int *piVar22;
  int *piVar23;
  int *piVar24;
  int *piVar25;
  int *piVar26;
  int *piVar27;
  int *piVar28;
  int *piVar29;
  int *piVar30;
  int *piVar31;
  longlong lVar32;
  int iVar33;
  int *piVar34;
  uint uVar35;
  int iVar36;
  int *piVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  ushort uVar42;
  int iVar43;
  bool bVar44;
  ushort *local_2c;
  ushort *local_28;
  
  lVar32 = (longlong)-param_3[0xf] * (longlong)param_2[0x10] +
           (longlong)param_3[0xe] * (longlong)param_2[7] +
           (longlong)-param_3[0xd] * (longlong)param_2[0x11] +
           (longlong)param_3[0xc] * (longlong)param_2[6] +
           (longlong)-param_3[0xb] * (longlong)param_2[0x12] +
           (longlong)param_3[10] * (longlong)param_2[5] +
           (longlong)-param_3[9] * (longlong)param_2[0x13] +
           (longlong)param_3[8] * (longlong)param_2[4] +
           (longlong)-param_3[7] * (longlong)param_2[0x14] +
           (longlong)param_3[6] * (longlong)param_2[3] +
           (longlong)-param_3[5] * (longlong)param_2[0x15] +
           (longlong)param_3[4] * (longlong)param_2[2] +
           (longlong)-param_3[3] * (longlong)param_2[0x16] +
           (longlong)param_3[2] * (longlong)param_2[1] +
           (longlong)-param_3[1] * (longlong)param_2[0x17] +
           (longlong)*param_3 * (longlong)*param_2 + 0x2000000;
  iVar41 = param_3[0x100];
  iVar40 = param_2[0x400];
  uVar1 = (int)((ulonglong)lVar32 >> 0x20) << 0xc;
  uVar35 = (uint)lVar32 >> 0x14 | uVar1;
  iVar38 = param_2[0x401];
  iVar39 = param_3[0x101];
  uVar42 = (ushort)((int)uVar35 >> 6);
  iVar43 = param_2[0x402];
  iVar36 = param_3[0x103];
  if ((int)uVar35 >> 0x1f != (int)uVar35 >> 0x15) {
    uVar42 = (ushort)((int)uVar1 >> 0x1f) ^ 0x7fff;
  }
  iVar33 = param_2[0x403];
  *param_1 = uVar42;
  piVar34 = param_2 + 0x40;
  local_2c = param_1 + 0x20;
  lVar32 = (longlong)param_3[0x107] * (longlong)param_2[0x407] +
           (longlong)param_3[0x106] * (longlong)param_2[0x406] +
           (longlong)param_3[0x105] * (longlong)param_2[0x405] +
           (longlong)param_3[0x104] * (longlong)param_2[0x404] +
           (longlong)iVar36 * (longlong)iVar33 +
           (longlong)param_3[0x102] * (longlong)iVar43 +
           (longlong)iVar39 * (longlong)iVar38 + (longlong)iVar41 * (longlong)iVar40 + 0x2000000;
  piVar37 = param_3 + 0x10;
  uVar1 = (int)((ulonglong)lVar32 >> 0x20) << 0xc;
  uVar35 = (uint)lVar32 >> 0x14 | uVar1;
  uVar42 = (ushort)((int)uVar35 >> 6);
  if ((int)uVar35 >> 0x1f != (int)uVar35 >> 0x15) {
    uVar42 = (ushort)((int)uVar1 >> 0x1f) ^ 0x7fff;
  }
  param_1[0x10] = uVar42;
  local_28 = param_1;
  do {
    piVar2 = piVar37 + 1;
    piVar3 = piVar37 + 3;
    piVar4 = piVar37 + 7;
    piVar5 = piVar37 + 5;
    piVar6 = piVar37 + 9;
    piVar7 = piVar37 + 0xb;
    piVar8 = piVar37 + 0xd;
    piVar9 = piVar37 + 0xf;
    iVar38 = *piVar37;
    iVar36 = *piVar34;
    piVar10 = piVar34 + 0x17;
    piVar11 = piVar37 + 2;
    piVar12 = piVar34 + 0x16;
    piVar13 = piVar37 + 4;
    piVar14 = piVar34 + 2;
    piVar15 = piVar34 + 0x15;
    piVar16 = piVar37 + 6;
    piVar17 = piVar34 + 0x14;
    piVar18 = piVar37 + 8;
    piVar19 = piVar34 + 4;
    piVar20 = piVar34 + 3;
    piVar21 = piVar34 + 0x13;
    piVar22 = piVar37 + 10;
    piVar23 = piVar34 + 0x12;
    piVar24 = piVar37 + 0xc;
    piVar25 = piVar34 + 6;
    piVar26 = piVar34 + 5;
    piVar27 = piVar34 + 1;
    piVar28 = piVar34 + 0x11;
    piVar29 = piVar37 + 0xe;
    piVar37 = piVar37 + 0x10;
    piVar30 = piVar34 + 7;
    piVar31 = piVar34 + 0x10;
    piVar34 = piVar34 + 0x40;
    lVar32 = (longlong)-*piVar9 * (longlong)*piVar31 +
             (longlong)*piVar29 * (longlong)*piVar30 +
             (longlong)-*piVar8 * (longlong)*piVar28 +
             (longlong)*piVar24 * (longlong)*piVar25 +
             (longlong)-*piVar7 * (longlong)*piVar23 +
             (longlong)*piVar22 * (longlong)*piVar26 +
             (longlong)-*piVar6 * (longlong)*piVar21 +
             (longlong)*piVar18 * (longlong)*piVar19 +
             (longlong)-*piVar4 * (longlong)*piVar17 +
             (longlong)*piVar16 * (longlong)*piVar20 +
             (longlong)-*piVar5 * (longlong)*piVar15 +
             (longlong)*piVar13 * (longlong)*piVar14 +
             (longlong)-*piVar3 * (longlong)*piVar12 +
             (longlong)*piVar11 * (longlong)*piVar27 +
             (longlong)-*piVar2 * (longlong)*piVar10 +
             (longlong)iVar38 * (longlong)iVar36 + 0x2000000;
    uVar1 = (int)((ulonglong)lVar32 >> 0x20) << 0xc;
    uVar35 = (uint)lVar32 >> 0x14 | uVar1;
    uVar42 = (ushort)((int)uVar35 >> 6);
    bVar44 = (int)uVar35 >> 0x1f != (int)uVar35 >> 0x15;
    if (bVar44) {
      uVar42 = (ushort)((int)uVar1 >> 0x1f) ^ 0x7f00;
    }
    if (bVar44) {
      uVar42 = uVar42 ^ 0xff;
    }
    lVar32 = (longlong)*piVar29 * (longlong)*piVar31 +
             (longlong)*piVar9 * (longlong)*piVar30 +
             (longlong)*piVar24 * (longlong)*piVar28 +
             (longlong)*piVar8 * (longlong)*piVar25 +
             (longlong)*piVar22 * (longlong)*piVar23 +
             (longlong)*piVar7 * (longlong)*piVar26 +
             (longlong)*piVar18 * (longlong)*piVar21 +
             (longlong)*piVar6 * (longlong)*piVar19 +
             (longlong)*piVar16 * (longlong)*piVar17 +
             (longlong)*piVar4 * (longlong)*piVar20 +
             (longlong)*piVar13 * (longlong)*piVar15 +
             (longlong)*piVar5 * (longlong)*piVar14 +
             (longlong)*piVar11 * (longlong)*piVar12 +
             (longlong)*piVar3 * (longlong)*piVar27 +
             (longlong)iVar38 * (longlong)*piVar10 +
             (longlong)*piVar2 * (longlong)iVar36 + 0x2000000;
    uVar1 = (int)((ulonglong)lVar32 >> 0x20) << 0xc;
    uVar35 = (uint)lVar32 >> 0x14 | uVar1;
    local_28 = local_28 + 1;
    *local_28 = uVar42;
    uVar42 = (ushort)((int)uVar35 >> 6);
    if ((int)uVar35 >> 0x1f != (int)uVar35 >> 0x15) {
      uVar42 = (ushort)((int)uVar1 >> 0x1f) ^ 0x7fff;
    }
    local_2c = local_2c + -1;
    *local_2c = uVar42;
  } while (param_3 + 0x100 != piVar37);
  return;
}



void xmp3_PolyphaseStereo(ushort *param_1,int *param_2,int *param_3)

{
  uint uVar1;
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
  int *piVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  int *piVar22;
  int *piVar23;
  int *piVar24;
  int *piVar25;
  int *piVar26;
  int *piVar27;
  int *piVar28;
  int *piVar29;
  int *piVar30;
  int *piVar31;
  longlong lVar32;
  longlong lVar33;
  uint uVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  ushort uVar42;
  int iVar43;
  int *piVar44;
  ushort uVar45;
  int iVar46;
  int iVar47;
  uint uVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  uint uVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  uint uVar72;
  ushort *puVar73;
  int *piVar74;
  bool bVar75;
  ushort *local_28;
  
  iVar63 = param_3[7];
  iVar70 = param_3[1];
  iVar46 = param_3[9];
  iVar56 = param_3[3];
  iVar64 = param_3[0xb];
  iVar50 = param_3[5];
  iVar47 = param_3[0xd];
  iVar65 = param_3[0xf];
  lVar32 = (longlong)-iVar65 * (longlong)param_2[0x10] +
           (longlong)param_3[0xe] * (longlong)param_2[7] +
           (longlong)-iVar47 * (longlong)param_2[0x11] +
           (longlong)param_3[0xc] * (longlong)param_2[6] +
           (longlong)-iVar64 * (longlong)param_2[0x12] +
           (longlong)param_3[10] * (longlong)param_2[5] +
           (longlong)-iVar46 * (longlong)param_2[0x13] +
           (longlong)param_3[8] * (longlong)param_2[4] +
           (longlong)-iVar63 * (longlong)param_2[0x14] +
           (longlong)param_3[6] * (longlong)param_2[3] +
           (longlong)-iVar50 * (longlong)param_2[0x15] +
           (longlong)param_3[4] * (longlong)param_2[2] +
           (longlong)-iVar56 * (longlong)param_2[0x16] +
           (longlong)param_3[2] * (longlong)param_2[1] +
           (longlong)-iVar70 * (longlong)param_2[0x17] +
           (longlong)*param_3 * (longlong)*param_2 + 0x2000000;
  iVar66 = param_2[0x20];
  iVar49 = *param_3;
  uVar1 = (int)((ulonglong)lVar32 >> 0x20) << 0xc;
  uVar34 = (uint)lVar32 >> 0x14 | uVar1;
  uVar45 = (ushort)((int)uVar34 >> 6);
  iVar67 = param_2[0x37];
  bVar75 = (int)uVar34 >> 0x1f != (int)uVar34 >> 0x15;
  iVar43 = param_2[0x26];
  iVar35 = param_2[0x21];
  iVar71 = param_2[0x31];
  if (bVar75) {
    uVar45 = (ushort)((int)uVar1 >> 0x1f) ^ 0x7f00;
  }
  iVar68 = param_3[2];
  if (bVar75) {
    uVar45 = uVar45 ^ 0xff;
  }
  iVar69 = param_2[0x27];
  iVar36 = param_2[0x36];
  iVar57 = param_2[0x22];
  iVar37 = param_3[4];
  iVar58 = param_2[0x35];
  iVar38 = param_2[0x23];
  iVar59 = param_2[0x34];
  iVar51 = param_3[6];
  iVar52 = param_2[0x24];
  iVar39 = param_2[0x33];
  iVar60 = param_3[8];
  iVar61 = param_2[0x25];
  iVar53 = param_2[0x32];
  iVar40 = param_3[10];
  iVar41 = param_3[0xc];
  iVar62 = param_2[0x30];
  iVar54 = param_3[0xe];
  *param_1 = uVar45;
  lVar32 = (longlong)-iVar65 * (longlong)iVar62 +
           (longlong)iVar54 * (longlong)iVar69 +
           (longlong)-iVar47 * (longlong)iVar71 +
           (longlong)iVar41 * (longlong)iVar43 +
           (longlong)-iVar64 * (longlong)iVar53 +
           (longlong)iVar40 * (longlong)iVar61 +
           (longlong)-iVar46 * (longlong)iVar39 +
           (longlong)iVar60 * (longlong)iVar52 +
           (longlong)-iVar63 * (longlong)iVar59 +
           (longlong)iVar51 * (longlong)iVar38 +
           (longlong)-iVar50 * (longlong)iVar58 +
           (longlong)iVar37 * (longlong)iVar57 +
           (longlong)-iVar56 * (longlong)iVar36 +
           (longlong)iVar68 * (longlong)iVar35 +
           (longlong)-iVar70 * (longlong)iVar67 + (longlong)iVar49 * (longlong)iVar66 + 0x2000000;
  iVar46 = param_3[0x100];
  uVar1 = (int)((ulonglong)lVar32 >> 0x20) << 0xc;
  uVar34 = (uint)lVar32 >> 0x14 | uVar1;
  iVar43 = param_2[0x400];
  iVar35 = param_2[0x401];
  iVar47 = param_2[0x403];
  uVar45 = (ushort)((int)uVar34 >> 6);
  if ((int)uVar34 >> 0x1f != (int)uVar34 >> 0x15) {
    uVar45 = (ushort)((int)uVar1 >> 0x1f) ^ 0x7fff;
  }
  iVar63 = param_2[0x402];
  iVar49 = param_3[0x101];
  iVar67 = param_2[0x404];
  iVar56 = param_3[0x102];
  iVar65 = param_2[0x405];
  iVar64 = param_2[0x406];
  param_1[1] = uVar45;
  iVar50 = param_2[0x420];
  iVar70 = param_2[0x421];
  iVar66 = param_2[0x422];
  lVar32 = (longlong)param_3[0x107] * (longlong)param_2[0x407] +
           (longlong)param_3[0x106] * (longlong)iVar64 +
           (longlong)param_3[0x105] * (longlong)iVar65 +
           (longlong)param_3[0x104] * (longlong)iVar67 +
           (longlong)param_3[0x103] * (longlong)iVar47 +
           (longlong)iVar56 * (longlong)iVar63 +
           (longlong)iVar49 * (longlong)iVar35 + (longlong)iVar46 * (longlong)iVar43 + 0x2000000;
  iVar47 = param_2[0x423];
  iVar43 = param_3[0x100];
  uVar1 = (int)((ulonglong)lVar32 >> 0x20) << 0xc;
  uVar34 = (uint)lVar32 >> 0x14 | uVar1;
  iVar63 = param_2[0x425];
  bVar75 = (int)uVar34 >> 0x1f != (int)uVar34 >> 0x15;
  iVar46 = param_2[0x424];
  iVar49 = param_3[0x101];
  iVar35 = param_2[0x426];
  uVar45 = (ushort)((int)uVar34 >> 6);
  iVar56 = param_3[0x102];
  if (bVar75) {
    uVar45 = (ushort)((int)uVar1 >> 0x1f) ^ 0x7f00;
  }
  iVar64 = param_2[0x427];
  if (bVar75) {
    uVar45 = uVar45 ^ 0xff;
  }
  iVar68 = param_3[0x103];
  iVar67 = param_3[0x104];
  iVar36 = param_3[0x105];
  iVar65 = param_3[0x106];
  iVar71 = param_3[0x107];
  param_1[0x20] = uVar45;
  lVar32 = (longlong)iVar71 * (longlong)iVar64 +
           (longlong)iVar65 * (longlong)iVar35 +
           (longlong)iVar36 * (longlong)iVar63 +
           (longlong)iVar67 * (longlong)iVar46 +
           (longlong)iVar68 * (longlong)iVar47 +
           (longlong)iVar56 * (longlong)iVar66 +
           (longlong)iVar49 * (longlong)iVar70 + (longlong)iVar43 * (longlong)iVar50 + 0x2000000;
  piVar44 = param_3 + 0x10;
  uVar1 = (int)((ulonglong)lVar32 >> 0x20) << 0xc;
  uVar34 = (uint)lVar32 >> 0x14 | uVar1;
  uVar45 = (ushort)((int)uVar34 >> 6);
  bVar75 = (int)uVar34 >> 0x1f != (int)uVar34 >> 0x15;
  if (bVar75) {
    uVar45 = (ushort)((int)uVar1 >> 0x1f) ^ 0x7f00;
  }
  piVar74 = param_2 + 0x40;
  if (bVar75) {
    uVar45 = uVar45 ^ 0xff;
  }
  puVar73 = param_1 + 2;
  param_1[0x21] = uVar45;
  local_28 = param_1;
  do {
    iVar68 = piVar44[3];
    iVar36 = piVar44[5];
    iVar63 = piVar44[7];
    iVar67 = piVar44[9];
    iVar66 = piVar44[1];
    iVar64 = piVar44[0xd];
    iVar46 = piVar44[0xb];
    iVar47 = piVar44[0xf];
    iVar56 = *piVar44;
    iVar37 = piVar44[4];
    iVar65 = piVar44[2];
    iVar49 = piVar44[6];
    iVar43 = piVar44[8];
    iVar50 = piVar44[10];
    piVar2 = piVar74 + 0x17;
    iVar38 = piVar44[0xc];
    piVar3 = piVar74 + 1;
    piVar4 = piVar74 + 2;
    piVar5 = piVar74 + 0x16;
    iVar70 = piVar44[0xe];
    piVar44 = piVar44 + 0x10;
    piVar6 = piVar74 + 0x15;
    piVar7 = piVar74 + 0x14;
    piVar8 = piVar74 + 3;
    iVar71 = *piVar74;
    piVar9 = piVar74 + 4;
    piVar10 = piVar74 + 5;
    piVar11 = piVar74 + 0x13;
    piVar12 = piVar74 + 0x12;
    piVar13 = piVar74 + 6;
    piVar14 = piVar74 + 0x11;
    piVar15 = piVar74 + 7;
    piVar16 = piVar74 + 0x10;
    piVar17 = piVar74 + 0x20;
    piVar18 = piVar74 + 0x37;
    piVar19 = piVar74 + 0x21;
    piVar20 = piVar74 + 0x36;
    piVar21 = piVar74 + 0x22;
    piVar22 = piVar74 + 0x35;
    piVar23 = piVar74 + 0x23;
    piVar24 = piVar74 + 0x34;
    piVar25 = piVar74 + 0x24;
    piVar26 = piVar74 + 0x33;
    piVar27 = piVar74 + 0x25;
    piVar28 = piVar74 + 0x32;
    piVar29 = piVar74 + 0x26;
    piVar30 = piVar74 + 0x31;
    piVar31 = piVar74 + 0x27;
    lVar32 = (longlong)-iVar47 * (longlong)*piVar16 +
             (longlong)iVar70 * (longlong)*piVar15 +
             (longlong)-iVar64 * (longlong)*piVar14 +
             (longlong)iVar38 * (longlong)*piVar13 +
             (longlong)-iVar46 * (longlong)*piVar12 +
             (longlong)iVar50 * (longlong)*piVar10 +
             (longlong)-iVar67 * (longlong)*piVar11 +
             (longlong)iVar43 * (longlong)*piVar9 +
             (longlong)-iVar63 * (longlong)*piVar7 +
             (longlong)iVar49 * (longlong)*piVar8 +
             (longlong)-iVar36 * (longlong)*piVar6 +
             (longlong)iVar37 * (longlong)*piVar4 +
             (longlong)-iVar68 * (longlong)*piVar5 +
             (longlong)iVar65 * (longlong)*piVar3 +
             (longlong)-iVar66 * (longlong)*piVar2 + (longlong)iVar56 * (longlong)iVar71 + 0x2000000
    ;
    iVar35 = piVar74[0x30];
    uVar34 = (uint)lVar32 >> 0x14 | (int)((ulonglong)lVar32 >> 0x20) << 0xc;
    piVar74 = piVar74 + 0x40;
    bVar75 = (int)uVar34 >> 0x1f != (int)uVar34 >> 0x15;
    uVar45 = (ushort)((int)uVar34 >> 6);
    lVar32 = (longlong)iVar70 * (longlong)*piVar16 +
             (longlong)iVar47 * (longlong)*piVar15 +
             (longlong)iVar38 * (longlong)*piVar14 +
             (longlong)iVar64 * (longlong)*piVar13 +
             (longlong)iVar50 * (longlong)*piVar12 +
             (longlong)iVar46 * (longlong)*piVar10 +
             (longlong)iVar43 * (longlong)*piVar11 +
             (longlong)iVar67 * (longlong)*piVar9 +
             (longlong)iVar49 * (longlong)*piVar7 +
             (longlong)iVar63 * (longlong)*piVar8 +
             (longlong)iVar37 * (longlong)*piVar6 +
             (longlong)iVar36 * (longlong)*piVar4 +
             (longlong)iVar65 * (longlong)*piVar5 +
             (longlong)iVar68 * (longlong)*piVar3 +
             (longlong)iVar56 * (longlong)*piVar2 + (longlong)iVar66 * (longlong)iVar71 + 0x2000000;
    lVar33 = (longlong)-iVar47 * (longlong)iVar35 +
             (longlong)iVar70 * (longlong)*piVar31 +
             (longlong)-iVar64 * (longlong)*piVar30 +
             (longlong)iVar38 * (longlong)*piVar29 +
             (longlong)-iVar46 * (longlong)*piVar28 +
             (longlong)iVar50 * (longlong)*piVar27 +
             (longlong)-iVar67 * (longlong)*piVar26 +
             (longlong)iVar43 * (longlong)*piVar25 +
             (longlong)-iVar63 * (longlong)*piVar24 +
             (longlong)iVar49 * (longlong)*piVar23 +
             (longlong)-iVar36 * (longlong)*piVar22 +
             (longlong)iVar37 * (longlong)*piVar21 +
             (longlong)-iVar68 * (longlong)*piVar20 +
             (longlong)iVar65 * (longlong)*piVar19 +
             (longlong)-iVar66 * (longlong)*piVar18 +
             (longlong)iVar56 * (longlong)*piVar17 + 0x2000000;
    uVar1 = (int)((ulonglong)lVar32 >> 0x20) << 0xc;
    uVar55 = (uint)lVar32 >> 0x14 | uVar1;
    lVar32 = (longlong)iVar70 * (longlong)iVar35 +
             (longlong)iVar47 * (longlong)*piVar31 +
             (longlong)iVar38 * (longlong)*piVar30 +
             (longlong)iVar64 * (longlong)*piVar29 +
             (longlong)iVar50 * (longlong)*piVar28 +
             (longlong)iVar46 * (longlong)*piVar27 +
             (longlong)iVar43 * (longlong)*piVar26 +
             (longlong)iVar67 * (longlong)*piVar25 +
             (longlong)iVar49 * (longlong)*piVar24 +
             (longlong)iVar63 * (longlong)*piVar23 +
             (longlong)iVar37 * (longlong)*piVar22 +
             (longlong)iVar36 * (longlong)*piVar21 +
             (longlong)iVar65 * (longlong)*piVar20 +
             (longlong)iVar68 * (longlong)*piVar19 +
             (longlong)iVar56 * (longlong)*piVar18 +
             (longlong)iVar66 * (longlong)*piVar17 + 0x2000000;
    if (bVar75) {
      iVar35 = (int)uVar34 >> 0x1f;
    }
    uVar34 = (int)((ulonglong)lVar33 >> 0x20) << 0xc;
    uVar72 = (uint)lVar33 >> 0x14 | uVar34;
    if (bVar75) {
      uVar45 = (ushort)iVar35 ^ 0x7f00;
    }
    uVar42 = (ushort)((int)uVar72 >> 6);
    if (bVar75) {
      uVar45 = uVar45 ^ 0xff;
    }
    bVar75 = (int)uVar72 >> 0x1f != (int)uVar72 >> 0x15;
    uVar72 = (int)((ulonglong)lVar32 >> 0x20) << 0xc;
    uVar48 = (uint)lVar32 >> 0x14 | uVar72;
    *puVar73 = uVar45;
    if (bVar75) {
      uVar42 = (ushort)((int)uVar34 >> 0x1f) ^ 0x7f00;
    }
    uVar45 = (ushort)((int)uVar55 >> 6);
    if (bVar75) {
      uVar42 = uVar42 ^ 0xff;
    }
    puVar73[1] = uVar42;
    if ((int)uVar55 >> 0x1f != (int)uVar55 >> 0x15) {
      uVar45 = (ushort)((int)uVar1 >> 0x1f) ^ 0x7fff;
    }
    bVar75 = (int)uVar48 >> 0x1f != (int)uVar48 >> 0x15;
    uVar42 = (ushort)((int)uVar48 >> 6);
    local_28[0x3e] = uVar45;
    if (bVar75) {
      uVar42 = (ushort)((int)uVar72 >> 0x1f) ^ 0x7f00;
    }
    puVar73 = puVar73 + 2;
    if (bVar75) {
      uVar42 = uVar42 ^ 0xff;
    }
    local_28[0x3f] = uVar42;
    local_28 = local_28 + -2;
  } while (puVar73 != param_1 + 0x20);
  return;
}



void xmp3_MidSideProc(int param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_2 < 1) {
    uVar5 = 0;
    uVar6 = uVar5;
  }
  else {
    iVar2 = 0;
    uVar5 = 0;
    uVar6 = 0;
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      iVar4 = *(int *)(param_1 + 0x900 + iVar2);
      uVar7 = *(int *)(param_1 + iVar2) - iVar4;
      *(int *)(param_1 + iVar2) = *(int *)(param_1 + iVar2) + iVar4;
      *(uint *)(param_1 + 0x900 + iVar2) = uVar7;
      puVar1 = (uint *)(param_1 + iVar2);
      iVar2 = iVar2 + 4;
      uVar5 = uVar5 | ((int)uVar7 >> 0x1f ^ uVar7) - ((int)uVar7 >> 0x1f);
      uVar7 = (int)*puVar1 >> 0x1f;
      uVar6 = uVar6 | (uVar7 ^ *puVar1) - uVar7;
    } while (iVar3 != param_2);
  }
  *param_3 = *param_3 | uVar6;
  param_3[1] = param_3[1] | uVar5;
  return;
}



void xmp3_IntensityProcMPEG1
               (int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
               undefined4 param_7,uint *param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  byte *pbVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  bool bVar19;
  int local_88;
  int local_84;
  uint local_80;
  int local_78;
  uint local_64;
  int local_50;
  int local_38 [6];
  
  local_78 = *(int *)(param_5 + 0x18);
  if (local_78 == 0) {
    iVar12 = *(int *)(param_5 + 0x2c) + 1;
    iVar15 = (int)*(short *)(*(int *)(param_3 + 0x40) + iVar12 * 2);
    param_2 = param_2 - iVar15;
    iVar14 = *(int *)(param_5 + 0x14) + 1;
    local_50 = local_78;
  }
  else {
    if (local_78 - 1U < 2) {
      iVar14 = 0;
      iVar12 = 0;
      local_78 = *(int *)(param_5 + 0x28) + 1;
      local_50 = *(int *)(param_5 + 0x10) + 1;
      iVar11 = (int)*(short *)(*(int *)(param_3 + 0x40) + *(int *)(param_5 + 0x28) * 2 + 0x30);
      iVar15 = iVar11 * 3;
      param_2 = param_2 + iVar11 * -3;
    }
    else {
      iVar12 = 0;
      local_50 = 0;
      iVar15 = 0;
      local_78 = 0;
      iVar14 = iVar12;
    }
  }
  local_80 = 0;
  local_64 = 0;
  iVar11 = param_6 * 0x1c;
  while (local_84 = iVar15, iVar12 < iVar14 && 0 < param_2) {
    if (*(byte *)(param_4 + iVar12) == 7) {
      iVar17 = *(int *)(xmp3_ISFIIP + param_6 * 8);
      local_88 = *(int *)(xmp3_ISFIIP + param_6 * 8 + 4);
    }
    else {
      iVar17 = *(int *)(xmp3_ISFMpeg1 + iVar11 + (uint)*(byte *)(param_4 + iVar12) * 4);
      local_88 = *(int *)(xmp3_ISFMpeg1 + iVar11 + 0x18) - iVar17;
    }
    iVar15 = iVar12 + 1;
    iVar16 = (int)*(short *)(*(int *)(param_3 + 0x40) + iVar15 * 2) -
             (int)*(short *)(*(int *)(param_3 + 0x40) + iVar12 * 2);
    iVar12 = iVar15;
    iVar15 = local_84;
    if (0 < iVar16) {
      iVar8 = 0;
      puVar10 = (uint *)(param_1 + local_84 * 4);
      do {
        uVar1 = (int)((ulonglong)((longlong)local_88 * (longlong)(int)*puVar10) >> 0x20) << 2;
        puVar10[0x240] = uVar1;
        local_80 = local_80 | ((int)uVar1 >> 0x1f ^ uVar1) - ((int)uVar1 >> 0x1f);
        uVar1 = (int)((ulonglong)((longlong)iVar17 * (longlong)(int)*puVar10) >> 0x20) << 2;
        iVar8 = iVar8 + 1;
        param_2 = param_2 + -1;
        bVar18 = iVar16 == iVar8;
        iVar6 = iVar16 - iVar8;
        if (iVar16 > iVar8) {
          bVar18 = param_2 == 0;
          iVar6 = param_2;
        }
        *puVar10 = uVar1;
        local_64 = local_64 | ((int)uVar1 >> 0x1f ^ uVar1) - ((int)uVar1 >> 0x1f);
        puVar10 = puVar10 + 1;
        iVar15 = local_84 + iVar8;
      } while (!bVar18 && iVar6 < 0 == (iVar16 <= iVar8 && SBORROW4(iVar16,iVar8)));
    }
  }
  local_88 = param_2;
  while (local_78 < local_50 && 2 < local_88) {
    iVar15 = 0;
    pbVar9 = (byte *)(param_4 + local_78 * 3 + 0x16);
    do {
      pbVar9 = pbVar9 + 1;
      if (*pbVar9 == 7) {
        uVar7 = *(undefined4 *)(xmp3_ISFIIP + param_6 * 8 + 4);
        *(undefined4 *)((int)local_38 + iVar15) = *(undefined4 *)(xmp3_ISFIIP + param_6 * 8);
        *(undefined4 *)((int)(local_38 + 3) + iVar15) = uVar7;
      }
      else {
        iVar12 = *(int *)(xmp3_ISFMpeg1 + iVar11 + (uint)*pbVar9 * 4);
        iVar14 = *(int *)(xmp3_ISFMpeg1 + iVar11 + 0x18);
        *(int *)((int)local_38 + iVar15) = iVar12;
        *(int *)((int)(local_38 + 3) + iVar15) = iVar14 - iVar12;
      }
      iVar15 = iVar15 + 4;
    } while (iVar15 != 0xc);
    iVar12 = local_78 + 1;
    iVar15 = *(int *)(param_3 + 0x40) + local_78 * 2;
    iVar15 = (int)*(short *)(iVar15 + 0x30) - (int)*(short *)(iVar15 + 0x2e);
    local_78 = iVar12;
    if (0 < iVar15) {
      puVar10 = (uint *)(param_1 + 0x900 + local_84 * 4);
      puVar13 = (uint *)(param_1 + (local_84 + 1) * 4);
      iVar12 = 0;
      do {
        uVar1 = (int)((ulonglong)((longlong)local_38[3] * (longlong)(int)puVar13[-1]) >> 0x20) << 2;
        *puVar10 = uVar1;
        uVar2 = (int)((ulonglong)((longlong)local_38[0] * (longlong)(int)puVar13[-1]) >> 0x20) << 2;
        puVar13[-1] = uVar2;
        uVar3 = (int)((ulonglong)((longlong)local_38[4] * (longlong)(int)*puVar13) >> 0x20) << 2;
        puVar10[1] = uVar3;
        uVar4 = (int)((ulonglong)((longlong)local_38[1] * (longlong)(int)*puVar13) >> 0x20) << 2;
        *puVar13 = uVar4;
        uVar5 = (int)((ulonglong)((longlong)local_38[5] * (longlong)(int)puVar13[1]) >> 0x20) << 2;
        puVar10[2] = uVar5;
        local_80 = local_80 |
                   ((int)uVar3 >> 0x1f ^ uVar3) - ((int)uVar3 >> 0x1f) |
                   ((int)uVar1 >> 0x1f ^ uVar1) - ((int)uVar1 >> 0x1f) |
                   ((int)uVar5 >> 0x1f ^ uVar5) - ((int)uVar5 >> 0x1f);
        uVar1 = (int)((ulonglong)((longlong)local_38[2] * (longlong)(int)puVar13[1]) >> 0x20) << 2;
        iVar12 = iVar12 + 1;
        puVar10 = puVar10 + 3;
        puVar13[1] = uVar1;
        puVar13 = puVar13 + 3;
        iVar17 = local_88 + -3;
        bVar19 = SBORROW4(iVar15,iVar12);
        iVar14 = iVar15 - iVar12;
        bVar18 = iVar15 == iVar12;
        if (iVar12 < iVar15) {
          bVar19 = SBORROW4(iVar17,2);
          iVar14 = local_88 + -5;
          bVar18 = iVar17 == 2;
        }
        local_84 = local_84 + 3;
        local_64 = local_64 |
                   ((int)uVar4 >> 0x1f ^ uVar4) - ((int)uVar4 >> 0x1f) |
                   ((int)uVar2 >> 0x1f ^ uVar2) - ((int)uVar2 >> 0x1f) |
                   ((int)uVar1 >> 0x1f ^ uVar1) - ((int)uVar1 >> 0x1f);
        local_88 = iVar17;
      } while (!bVar18 && iVar14 < 0 == bVar19);
    }
  }
  *param_8 = local_64;
  param_8[1] = local_80;
  return;
}



void xmp3_IntensityProcMPEG2
               (int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6,
               int param_7,undefined4 param_8,uint *param_9)

{
  uint uVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  uint *local_b0;
  short *local_a8;
  int local_9c;
  int *local_94;
  uint auStack128 [24];
  
  iVar10 = 0;
  iVar11 = 0;
  piVar12 = (int *)(xmp3_ISFMpeg2 + (param_7 + *param_6 * 2) * 0x40);
  piVar16 = param_6 + -1;
  do {
    uVar7 = piVar16[2];
    iVar13 = piVar16[6];
    if (0 < iVar13) {
      puVar8 = auStack128 + iVar11;
      do {
        puVar8 = puVar8 + 1;
        *puVar8 = (1 << (uVar7 & 0xff)) - 1;
      } while (puVar8 != auStack128 + iVar11 + iVar13);
      iVar11 = iVar11 + iVar13;
    }
    iVar10 = iVar10 + 1;
    piVar16 = piVar16 + 1;
  } while (iVar10 != 4);
  uVar7 = param_5[6];
  if (uVar7 == 0) {
    iVar11 = param_5[5];
    local_c0 = param_5[0xb] + 1;
    iVar10 = (int)*(short *)(*(int *)(param_3 + 0x40) + local_c0 * 2);
    local_a8 = (short *)(*(int *)(param_3 + 0x40) + local_c0 * 2);
    local_c4 = param_2 - iVar10;
    uVar15 = uVar7;
    if (local_c0 <= iVar11) {
      local_b0 = auStack128 + param_5[0xb] + 1;
      local_bc = iVar10;
      while( true ) {
        bVar2 = *(byte *)(param_4 + local_c0);
        local_b0 = local_b0 + 1;
        if (*local_b0 == (uint)bVar2) {
          iVar17 = *(int *)(xmp3_ISFIIP + param_7 * 8);
          iVar13 = *(int *)(xmp3_ISFIIP + param_7 * 8 + 4);
        }
        else {
          iVar13 = (int)(bVar2 + 1) >> 1;
          if ((bVar2 & 1) == 0) {
            iVar6 = iVar13 << 2;
            iVar17 = *piVar12;
          }
          else {
            iVar6 = 0;
            iVar17 = piVar12[iVar13];
          }
          iVar13 = *(int *)((int)piVar12 + iVar6);
        }
        local_a8 = local_a8 + 1;
        sVar3 = *local_a8;
        local_c0 = local_c0 + 1;
        iVar10 = sVar3 - iVar10;
        iVar6 = local_c4;
        if (iVar10 <= local_c4) {
          iVar6 = iVar10;
        }
        if (0 < iVar6) {
          iVar10 = 0;
          puVar8 = (uint *)(param_1 + local_bc * 4);
          do {
            uVar1 = (int)((ulonglong)((longlong)iVar13 * (longlong)(int)*puVar8) >> 0x20) << 2;
            puVar8[0x240] = uVar1;
            uVar7 = uVar7 | ((int)uVar1 >> 0x1f ^ uVar1) - ((int)uVar1 >> 0x1f);
            uVar1 = (int)((ulonglong)((longlong)iVar17 * (longlong)(int)*puVar8) >> 0x20) << 2;
            iVar10 = iVar10 + 1;
            *puVar8 = uVar1;
            uVar15 = uVar15 | ((int)uVar1 >> 0x1f ^ uVar1) - ((int)uVar1 >> 0x1f);
            puVar8 = puVar8 + 1;
          } while (iVar10 != iVar6);
          local_bc = iVar6 + local_bc;
        }
        local_c4 = local_c4 - iVar6;
        if ((local_c4 == 0) || (iVar11 < local_c0)) break;
        iVar10 = (int)sVar3;
      }
    }
  }
  else {
    uVar7 = 0;
    local_94 = param_5;
    local_9c = 0;
    iVar10 = *(int *)(param_3 + 0x40);
    uVar15 = 0;
    do {
      iVar11 = local_94[1];
      iVar17 = local_94[7];
      local_bc = iVar17 + 1;
      iVar13 = *(short *)(iVar10 + iVar17 * 2 + 0x30) * 3 + local_9c;
      if (local_bc <= iVar11) {
        local_b0 = auStack128 + iVar17 + 1;
        local_c0 = iVar10 + iVar17 * 2 + 0x2e;
        local_b8 = param_4 + iVar17 * 3 + local_9c + 0x17;
        do {
          local_b0 = local_b0 + 1;
          bVar2 = *(byte *)(local_b8 + 3);
          if (*local_b0 == (uint)bVar2) {
            iVar17 = *(int *)(xmp3_ISFIIP + param_7 * 8);
            iVar6 = *(int *)(xmp3_ISFIIP + param_7 * 8 + 4);
          }
          else {
            iVar17 = (int)(bVar2 + 1) >> 1;
            if ((bVar2 & 1) == 0) {
              iVar6 = iVar17 << 2;
              iVar17 = *piVar12;
            }
            else {
              iVar6 = 0;
              iVar17 = piVar12[iVar17];
            }
            iVar6 = *(int *)((int)piVar12 + iVar6);
          }
          local_bc = local_bc + 1;
          iVar14 = (int)*(short *)(local_c0 + 4) - (int)*(short *)(local_c0 + 2);
          if (0 < iVar14) {
            iVar9 = 0;
            iVar4 = param_1 + iVar13 * 4;
            iVar5 = iVar13;
            do {
              uVar1 = (int)((ulonglong)((longlong)iVar6 * (longlong)*(int *)(iVar4 + iVar9)) >> 0x20
                           ) << 2;
              *(uint *)(param_1 + 0x900 + iVar13 * 4 + iVar9) = uVar1;
              uVar7 = uVar7 | ((int)uVar1 >> 0x1f ^ uVar1) - ((int)uVar1 >> 0x1f);
              uVar1 = (int)((ulonglong)((longlong)iVar17 * (longlong)*(int *)(iVar4 + iVar9)) >>
                           0x20) << 2;
              iVar5 = iVar5 + 3;
              *(uint *)(iVar4 + iVar9) = uVar1;
              iVar9 = iVar9 + 0xc;
              uVar15 = uVar15 | ((int)uVar1 >> 0x1f ^ uVar1) - ((int)uVar1 >> 0x1f);
            } while (iVar5 != iVar14 * 3 + iVar13);
            iVar13 = iVar13 + iVar14 * 3;
          }
          local_b8 = local_b8 + 3;
          local_c0 = local_c0 + 2;
        } while (local_bc != iVar11 + 1);
      }
      local_9c = local_9c + 1;
      local_94 = local_94 + 1;
    } while (local_9c != 3);
  }
  *param_9 = uVar15;
  param_9[1] = uVar7;
  return;
}



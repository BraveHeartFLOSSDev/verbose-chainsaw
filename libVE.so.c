#include "libVE.so.h"



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = ioctl(__fd,__request);
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

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = open(__file,__oflag);
  return iVar1;
}



void __android_log_print(void)

{
  __android_log_print();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int close(int __fd)

{
  int iVar1;
  
  iVar1 = close(__fd);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = strncmp(__s1,__s2,__n);
  return iVar1;
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



// WARNING: Unknown calling convention yet parameter storage is locked

int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = munmap(__addr,__len);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)

{
  void *pvVar1;
  
  pvVar1 = mmap(__addr,__len,__prot,__flags,__fd,__offset);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = read(__fd,__buf,__nbytes);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



undefined8 RegisterOperation(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 uStack8;
  
  local_10 = param_2;
  uStack8 = param_3;
  if (param_1 == 0) {
    local_c = param_2;
    iVar1 = ioctl(gVeDriverFd,0x300,&local_10);
  }
  else {
    local_c = param_3;
    ioctl(gVeDriverFd,0x301,&local_10);
    iVar1 = 0;
  }
  return CONCAT44(local_10,iVar1);
}



int VeChipId(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char acStack44 [16];
  int local_1c;
  
  local_1c = __stack_chk_guard;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00013008);
  memset(acStack44,0,0x10);
  iVar1 = open("/dev/sunxi_soc_info",0);
  if (-1 < iVar1) {
    iVar2 = ioctl(iVar1,3,acStack44);
    if (-1 < iVar2) {
      __android_log_print(3,"awplayer","<%s:%u>: %s\n","VeChipId",0x79,acStack44);
      close(iVar1);
      iVar1 = strncmp(acStack44,"00000000",8);
      if ((iVar1 == 0) || (iVar1 = strncmp(acStack44,"00000081",8), iVar1 == 0)) {
        iVar1 = 2;
      }
      else {
        iVar1 = strncmp(acStack44,"00000042",8);
        if ((iVar1 == 0) || (iVar1 = strncmp(acStack44,"00000083",8), iVar1 == 0)) {
          iVar1 = 4;
        }
        else {
          iVar1 = strcmp(acStack44,"H2");
          if (iVar1 == 0) {
            iVar1 = 3;
          }
          else {
            uVar3 = strcmp(acStack44,"H3s");
            iVar1 = 1 - uVar3;
            if (1 < uVar3) {
              iVar1 = 0;
            }
          }
        }
      }
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_00013008);
      goto LAB_00010c68;
    }
    __android_log_print(6,"awplayer",&DAT_000113dc,"VeChipId",0x74);
  }
  iVar1 = 0;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00013008);
LAB_00010c68:
  if (local_1c == __stack_chk_guard) {
    return iVar1;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void VeRelease(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00013008);
  if (DAT_00013018 < 1) {
    __android_log_print(6,"awplayer",&DAT_00011435,"VeRelease",0x129,DAT_00013018);
  }
  else {
    DAT_00013018 = DAT_00013018 + -1;
    if ((DAT_00013018 == 0) && (gVeDriverFd + 1 != 0)) {
      ioctl(gVeDriverFd,0x207,0,gVeDriverFd + 1,param_1,param_2,param_3);
      munmap(gVeEnvironmentInfo._8_4_,0x800);
      close(gVeDriverFd);
      gVeDriverFd = -1;
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00013008);
  return;
}



void VeLock(void)

{
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00013010);
  return;
}



void VeUnLock(void)

{
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00013010);
  return;
}



void VeEncoderLock(void)

{
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00013010);
  return;
}



void VeEncoderUnLock(void)

{
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00013010);
  return;
}



void VeSetDramType(void)

{
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00013014);
  *gVeEnvironmentInfo._8_4_ = *gVeEnvironmentInfo._8_4_ & 0xfffcffff | 0x20000;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00013014);
  return;
}



void VeReset(void)

{
  ioctl(gVeDriverFd,0x104,0);
  VeSetDramType();
  return;
}



undefined4 VeInitialize(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int __fd;
  uint uVar1;
  uint local_14;
  
  local_14 = param_4;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00013008);
  if (DAT_00013018 == 0) {
    gVeDriverFd = open("/dev/cedar_dev",2);
    if (gVeDriverFd < 0) {
      __android_log_print(6,"awplayer",&DAT_0001148a,"VeInitialize",199,param_2,param_3);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_00013008);
      return 0xffffffff;
    }
    ioctl(gVeDriverFd,0x20c,0);
    ioctl(gVeDriverFd,0x206,0);
    ioctl(gVeDriverFd,0x101,gVeEnvironmentInfo);
    gVeEnvironmentInfo._8_4_ =
         mmap((void *)0x0,0x800,3,1,gVeDriverFd,(__off_t)gVeEnvironmentInfo._8_4_);
    VeReset();
  }
  local_14 = 0xffffffff;
  DAT_00013018 = DAT_00013018 + 1;
  __fd = open("/dev/ifm",2);
  if (-1 < __fd) {
    read(__fd,&local_14,1);
    close(__fd);
    uVar1 = local_14;
    if (local_14 != 0) {
      uVar1 = 1;
    }
    if (local_14 == 3) {
      uVar1 = 0;
    }
    else {
      uVar1 = uVar1 & 1;
    }
    if ((uVar1 == 0) || (local_14 == 7)) {
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_00013008);
      return 0;
    }
  }
                    // WARNING: Subroutine does not return
  abort();
}



undefined8
VeWaitInterrupt(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ioctl(gVeDriverFd,0x102,1,param_4,param_1,param_2,param_3);
  if (iVar1 < 1) {
    param_1 = 0x1c6;
    __android_log_print(5,"awplayer","<%s:%u>: wait ve interrupt timeout.","VeWaitInterrupt");
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(param_1,uVar2);
}



undefined4 VeWaitEncoderInterrupt(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ioctl(gVeDriverFd,0x103,1);
  if (iVar1 < 1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 VeGetRegisterBaseAddress(void)

{
  return gVeEnvironmentInfo._8_4_;
}



uint VeGetIcVersion(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  if (DAT_00013018 < 1) {
    __android_log_print(6,"awplayer",&DAT_000114e6,"VeGetIcVersion",0x1e9,param_2,param_3,param_4);
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(gVeEnvironmentInfo._8_4_ + 0xf0) >> 0x10;
  }
  return uVar1;
}



undefined4 VeGetDramType(void)

{
  return 4;
}



void VeSetSpeed(undefined4 param_1)

{
  ioctl(gVeDriverFd,0x107,param_1);
  return;
}



void VeEnableEncoder(void)

{
  uint *puVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00013014);
  puVar1 = gVeEnvironmentInfo._8_4_;
  *gVeEnvironmentInfo._8_4_ = *gVeEnvironmentInfo._8_4_ | 0x80;
  *puVar1 = *puVar1 | 0x40;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00013014);
  return;
}



void VeDisableEncoder(void)

{
  uint *puVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00013014);
  puVar1 = gVeEnvironmentInfo._8_4_;
  *gVeEnvironmentInfo._8_4_ = *gVeEnvironmentInfo._8_4_ & 0xffffff7f;
  *puVar1 = *puVar1 & 0xffffffbf;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00013014);
  return;
}



void VeEnableDecoder(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00013014);
  if (param_1 == 0x114) {
    uVar1 = *gVeEnvironmentInfo._8_4_;
    uVar2 = 3;
  }
  else {
    if (param_1 < 0x115) {
      if (param_1 == 0x110) {
        uVar1 = *gVeEnvironmentInfo._8_4_;
        uVar2 = 2;
      }
      else {
        if (param_1 != 0x112) {
          if (param_1 == 0x101) {
            uVar2 = *gVeEnvironmentInfo._8_4_ | 0x20;
            goto LAB_000110a4;
          }
LAB_0001109e:
          uVar2 = *gVeEnvironmentInfo._8_4_ & 0xfffffff0;
          goto LAB_000110a4;
        }
LAB_0001107a:
        uVar1 = *gVeEnvironmentInfo._8_4_;
        uVar2 = 1;
      }
    }
    else {
      if (param_1 != 0x116) {
        if ((0x115 < param_1) && (param_1 != 0x117)) goto LAB_0001109e;
        goto LAB_0001107a;
      }
      uVar1 = *gVeEnvironmentInfo._8_4_;
      uVar2 = 4;
    }
  }
  uVar2 = uVar1 & 0xfffffff0 | uVar2;
LAB_000110a4:
  *gVeEnvironmentInfo._8_4_ = uVar2;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00013014);
  return;
}



void VeDisableDecoder(void)

{
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00013014);
  *gVeEnvironmentInfo._8_4_ = *gVeEnvironmentInfo._8_4_ & 0xfffffff0 | 7;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00013014);
  return;
}



void VeDecoderWidthMode(int param_1)

{
  uint *puVar1;
  uint uVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00013014);
  puVar1 = gVeEnvironmentInfo._8_4_;
  uVar2 = *gVeEnvironmentInfo._8_4_;
  if (param_1 < 0x1000) {
    if (param_1 < 0x800) {
      uVar2 = uVar2 & 0xffdfffff;
    }
    else {
      uVar2 = uVar2 | 0x200000;
    }
    *gVeEnvironmentInfo._8_4_ = uVar2;
    uVar2 = *puVar1 & 0xffbfffff;
  }
  else {
    *gVeEnvironmentInfo._8_4_ = uVar2 | 0x200000;
    uVar2 = *puVar1 | 0x400000;
  }
  *puVar1 = uVar2;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00013014);
  return;
}



void VeResetDecoder(void)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00013014);
  iVar1 = gVeEnvironmentInfo._8_4_;
  *(uint *)(gVeEnvironmentInfo._8_4_ + 4) = *(uint *)(gVeEnvironmentInfo._8_4_ + 4) | 0x10000;
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffeffff;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00013014);
  return;
}



void VeResetEncoder(void)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00013014);
  iVar1 = gVeEnvironmentInfo._8_4_;
  *(uint *)(gVeEnvironmentInfo._8_4_ + 4) = *(uint *)(gVeEnvironmentInfo._8_4_ + 4) | 0x1000000;
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfeffffff;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00013014);
  return;
}



void VeUninitEncoderPerformance(void)

{
  return;
}



undefined8
VeWaitJpegDecodeInterrupt
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ioctl(gVeDriverFd,0x500,1,param_4,param_1,param_2,param_3);
  if (iVar1 < 1) {
    param_1 = 0x2de;
    __android_log_print(5,"awplayer","<%s:%u>: wait jepg decoder interrupt timeout.",
                        "VeWaitJpegDecodeInterrupt");
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(param_1,uVar2);
}



void VeEnableJpegDecoder(void)

{
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00013014);
  *gVeEnvironmentInfo._8_4_ = *gVeEnvironmentInfo._8_4_ | 0x20;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00013014);
  return;
}



void VeDisableJpegDecoder(void)

{
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00013014);
  *gVeEnvironmentInfo._8_4_ = *gVeEnvironmentInfo._8_4_ & 0xffffffdf;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00013014);
  return;
}



void VeResetJpegDecoder(void)

{
  int iVar1;
  
  iVar1 = gVeEnvironmentInfo._8_4_;
  *(uint *)(gVeEnvironmentInfo._8_4_ + 0x2c) = *(uint *)(gVeEnvironmentInfo._8_4_ + 0x2c) | 1;
  *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) & 0xfffffffe;
  return;
}



void VeJpegDeLock(void)

{
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0001300c);
  return;
}



void VeJpegDeUnLock(void)

{
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0001300c);
  return;
}



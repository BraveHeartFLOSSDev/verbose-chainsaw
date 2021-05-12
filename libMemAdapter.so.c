#include "libMemAdapter.so.h"



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

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = open(__file,__oflag);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = read(__fd,__buf,__nbytes);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int close(int __fd)

{
  int iVar1;
  
  iVar1 = close(__fd);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = atoi(__nptr);
  return iVar1;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}



void __android_log_print(void)

{
  __android_log_print();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = ioctl(__fd,__request);
  return iVar1;
}



void __errno(void)

{
  __errno();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = strerror(__errnum);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)

{
  void *pvVar1;
  
  pvVar1 = mmap(__addr,__len,__prot,__flags,__fd,__offset);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = munmap(__addr,__len);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



undefined4 MemAdapterOpen(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *extraout_r1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00013004);
  if (DAT_00013008 == 0) {
    ion_alloc_open(iVar1,extraout_r1,param_3);
  }
  DAT_00013008 = DAT_00013008 + 1;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00013004);
  return 0;
}



void MemAdapterClose(void)

{
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00013004);
  if ((0 < DAT_00013008) && (DAT_00013008 = DAT_00013008 + -1, DAT_00013008 == 0)) {
    ion_alloc_close();
  }
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00013004);
  return;
}



undefined4 MemAdapterGetTotalMemory(void)

{
  return 0xffffffff;
}



int * SecureMemAdapterAlloc(int *param_1)

{
  int *__addr;
  int *piVar1;
  int iVar2;
  int **ppiVar3;
  int **ppiVar4;
  int *piStack76;
  undefined4 uStack72;
  int **ppiStack68;
  int *piStack64;
  int *piStack60;
  int *piStack56;
  int *piStack52;
  int *piStack44;
  undefined4 uStack40;
  undefined4 uStack36;
  undefined4 uStack32;
  int *piStack28;
  
  pthread_mutex_lock((pthread_mutex_t *)&g_mutex_alloc);
  __addr = g_alloc_context;
  if (g_alloc_context != (int *)0x0) {
    if (0 < (int)param_1) {
      uStack40 = 0x1000;
      uStack36 = 4;
      uStack32 = 3;
      piStack44 = param_1;
      __addr = (int *)ioctl(*g_alloc_context,0xc0144900,&piStack44);
      if (__addr == (int *)0x0) {
        ppiStack68 = &piStack56;
        uStack72 = 7;
        piStack56 = piStack28;
        piVar1 = (int *)ioctl(*g_alloc_context,0xc0084906,&uStack72);
        if (piVar1 == (int *)0x0) {
          piStack64 = piStack28;
          iVar2 = ioctl(*g_alloc_context,0xc0084902,&piStack64);
          __addr = piVar1;
          if (iVar2 == 0) {
            __addr = (int *)mmap((void *)0x0,(size_t)piStack44,3,1,(int)piStack60,0);
            if (__addr != (int *)0xffffffff) {
              ppiVar3 = (int **)malloc(0x1c);
              piVar1 = g_alloc_context;
              if (ppiVar3 != (int **)0x0) {
                ppiVar3[6] = piStack28;
                ppiVar3[4] = param_1;
                ppiVar3[2] = piStack52;
                ppiVar3[3] = __addr;
                ppiVar3[5] = piStack60;
                ppiVar4 = (int **)piVar1[2];
                piVar1[2] = (int)ppiVar3;
                *ppiVar3 = piVar1 + 1;
                ppiVar3[1] = (int *)ppiVar4;
                *ppiVar4 = (int *)ppiVar3;
                goto LAB_00011320;
              }
              iVar2 = munmap(__addr,(size_t)piStack44);
              if (iVar2 != 0) {
                printf("munmap err, ret %d\n",iVar2);
              }
              puts("munmap succes");
            }
            close((int)piStack60);
            puts("close dmabuf fd succes");
          }
        }
        piStack76 = piStack28;
        iVar2 = ioctl(*g_alloc_context,0xc0044901,&piStack76);
        if (iVar2 != 0) {
          printf("ION_IOC_FREE err, ret %d\n",iVar2);
        }
        puts("ION_IOC_FREE succes");
        goto LAB_00011320;
      }
    }
    __addr = (int *)0x0;
  }
LAB_00011320:
  pthread_mutex_unlock((pthread_mutex_t *)&g_mutex_alloc);
  return __addr;
}



int * MemAdapterPfree(int *param_1)

{
  int iVar1;
  int *piVar2;
  int **ppiVar3;
  int **__ptr;
  int *piVar4;
  int *apiStack20 [2];
  
  if (param_1 == (int *)0x0) {
    __android_log_print(6,"awplayer",&DAT_0001198c,"ion_alloc_free",0x204);
    piVar4 = param_1;
  }
  else {
    pthread_mutex_lock((pthread_mutex_t *)&g_mutex_alloc);
    piVar4 = g_alloc_context;
    if (g_alloc_context != (int *)0x0) {
      __ptr = (int **)g_alloc_context[1];
      while (__ptr != (int **)(g_alloc_context + 1)) {
        if (__ptr[3] == param_1) {
          iVar1 = munmap(param_1,(size_t)__ptr[4]);
          if (iVar1 < 0) {
            __android_log_print(6,"awplayer",&DAT_000119bc,"ion_alloc_free",0x218,param_1,__ptr[4]);
          }
          piVar4 = __ptr[4];
          close((int)__ptr[5]);
          apiStack20[0] = __ptr[6];
          ioctl(*g_alloc_context,0xc0044901,apiStack20);
          piVar2 = *__ptr;
          ppiVar3 = (int **)__ptr[1];
          piVar2[1] = (int)ppiVar3;
          *ppiVar3 = piVar2;
          *__ptr = (int *)0x100100;
          __ptr[1] = (int *)0x200200;
          free(__ptr);
          goto LAB_0001140c;
        }
        __ptr = (int **)*__ptr;
      }
      piVar4 = (int *)0x0;
LAB_0001140c:
      pthread_mutex_unlock((pthread_mutex_t *)&g_mutex_alloc);
    }
  }
  return piVar4;
}



void MemAdapterFlushCache(int param_1,int param_2)

{
  int iStack24;
  int iStack20;
  undefined4 uStack16;
  int *piStack12;
  
  piStack12 = &iStack24;
  iStack20 = param_1 + param_2;
  uStack16 = 5;
  iStack24 = param_1;
  ioctl(*g_alloc_context,0xc0084906,&uStack16);
  return;
}



int SecureMemAdapterGetPhysicAddress(uint param_1)

{
  uint uVar1;
  
  uVar1 = ion_alloc_vir2phy(param_1);
  return uVar1 + 0xc0000000;
}



void SecureMemAdapterGetVirtualAddress(int param_1,undefined4 param_2)

{
  ion_alloc_phy2vir(param_1 + 0x40000000,param_2);
  return;
}



uint SecureMemAdapterGetPhysicAddressCpu(uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    pthread_mutex_lock((pthread_mutex_t *)&g_mutex_alloc);
    puVar2 = *(undefined4 **)(undefined4 *)(g_alloc_context + 4);
    while (puVar2 != (undefined4 *)(g_alloc_context + 4)) {
      uVar1 = puVar2[3];
      if ((uVar1 <= param_1) && (param_1 < uVar1 + puVar2[4])) {
        param_1 = (param_1 + puVar2[2]) - uVar1;
        goto LAB_0001148c;
      }
      puVar2 = (undefined4 *)*puVar2;
    }
    param_1 = 0;
LAB_0001148c:
    pthread_mutex_unlock((pthread_mutex_t *)&g_mutex_alloc);
  }
  return param_1;
}



uint SecureMemAdapterGetVirtualAddressCpu(uint param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_1 == 0) {
    __android_log_print(6,"awplayer",&DAT_000119f0,"ion_alloc_phy2vir",0x286,param_2);
  }
  else {
    pthread_mutex_lock((pthread_mutex_t *)&g_mutex_alloc);
    puVar2 = *(undefined4 **)(undefined4 *)(g_alloc_context + 4);
    while (puVar2 != (undefined4 *)(g_alloc_context + 4)) {
      uVar1 = puVar2[2];
      if ((uVar1 <= param_1) && (param_1 < uVar1 + puVar2[4])) {
        param_1 = (param_1 + puVar2[3]) - uVar1;
        goto LAB_000114f8;
      }
      puVar2 = (undefined4 *)*puVar2;
    }
    param_1 = 0;
LAB_000114f8:
    pthread_mutex_unlock((pthread_mutex_t *)&g_mutex_alloc);
  }
  return param_1;
}



int MemAdapterGetDramFreq(void)

{
  int iVar1;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  
  local_1c = 0;
  local_18 = 0;
  local_14 = __stack_chk_guard;
  iVar1 = open("/sys/class/devfreq/sunxi-ddrfreq/cur_freq",0);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    read(iVar1,&local_1c,8);
    close(iVar1);
    iVar1 = atoi((char *)&local_1c);
  }
  if (local_14 == __stack_chk_guard) {
    return iVar1;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



undefined4 SecureMemAdapterFree(int *param_1)

{
  ion_alloc_free(param_1);
  return 0;
}



undefined4 SecureMemAdapterCopy(void *param_1,void *param_2,size_t param_3)

{
  memcpy(param_1,param_2,param_3);
  return 0;
}



undefined4 SecureMemAdapterFlushCache(int param_1,int param_2)

{
  ion_flush_cache(param_1,param_2);
  return 0;
}



size_t SecureMemAdapterWrite(void *param_1,void *param_2,size_t param_3)

{
  memcpy(param_2,param_1,param_3);
  return param_3;
}



undefined4 SecureMemAdapterSet(void *param_1,int param_2,size_t param_3)

{
  memset(param_1,param_2,param_3);
  return 0;
}



undefined4 SecureAdapterShutdownHW(void)

{
  return 0;
}



ulonglong SecureMemAdapterOpen(undefined4 param_1,char *param_2,undefined4 param_3)

{
  ulonglong uVar1;
  
  uVar1 = ion_alloc_open(param_1,param_2,param_3);
  return uVar1 & 0xffffffff00000000;
}



undefined4 SecureMemAdapterClose(void)

{
  ion_alloc_close();
  return 0;
}



uint get_ion_total_mem(void)

{
  int __fd;
  int *piVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 local_24;
  uint *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  __fd = open("/dev/ion",1);
  if (__fd < 0) {
    uVar3 = 0;
    __android_log_print(6,"awplayer",&DAT_0001180c,"get_ion_total_mem",0x37);
  }
  else {
    local_1c = 0;
    local_20 = &local_1c;
    local_18 = 0;
    local_14 = 0;
    local_24 = 10;
    uVar3 = ioctl(__fd,0xc0084906,&local_24);
    if ((int)uVar3 < 0) {
      piVar1 = (int *)__errno();
      pcVar2 = strerror(*piVar1);
      __android_log_print(6,"awplayer",&DAT_0001184a,"get_ion_total_mem",0x47,pcVar2);
    }
    else {
      __android_log_print(3,"awplayer","<%s:%u>:  ion dev get free pool [%d MB], total [%d MB]\n",
                          "get_ion_total_mem",0x4b,local_14,local_1c >> 10);
      uVar3 = local_1c;
    }
    if (__fd != 0) {
      close(__fd);
    }
  }
  return uVar3;
}



undefined8 ion_alloc_open(undefined4 param_1,char *param_2,undefined4 param_3)

{
  int *piVar1;
  int *__s;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  pthread_mutex_lock((pthread_mutex_t *)&g_mutex_alloc);
  if (g_alloc_context == (int *)0x0) {
    __s = (int *)malloc(0x10);
    g_alloc_context = __s;
    if (__s == (int *)0x0) {
      puVar4 = &DAT_000118bd;
      param_1 = 0x7b;
    }
    else {
      memset(__s,0,0x10);
      iVar2 = open("/dev/ion",2,0);
      piVar1 = g_alloc_context;
      *__s = iVar2;
      if (0 < *piVar1) {
        piVar1[1] = (int)(piVar1 + 1);
        piVar1[2] = (int)(piVar1 + 1);
        goto LAB_0001111e;
      }
      puVar4 = &DAT_000118ff;
      param_1 = 0x8b;
      param_2 = "/dev/ion";
    }
    __android_log_print(6,"awplayer",puVar4,"ion_alloc_open",param_1,param_2,param_3);
    if ((g_alloc_context != (int *)0x0) && (0 < *g_alloc_context)) {
      close(*g_alloc_context);
      *g_alloc_context = 0;
    }
    if (g_alloc_context != (int *)0x0) {
      free(g_alloc_context);
      g_alloc_context = (int *)0x0;
    }
    pthread_mutex_unlock((pthread_mutex_t *)&g_mutex_alloc);
    uVar3 = 0xffffffff;
  }
  else {
LAB_0001111e:
    g_alloc_context[3] = g_alloc_context[3] + 1;
    pthread_mutex_unlock((pthread_mutex_t *)&g_mutex_alloc);
    uVar3 = 0;
  }
  return CONCAT44(param_1,uVar3);
}



undefined4 ion_alloc_close(void)

{
  int iVar1;
  int **__ptr;
  int *piVar2;
  int **ppiVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)&g_mutex_alloc);
  piVar2 = g_alloc_context;
  iVar1 = g_alloc_context[3];
  g_alloc_context[3] = iVar1 + -1;
  if (iVar1 + -1 < 1) {
    __ptr = (int **)piVar2[1];
    ppiVar3 = *(int ***)(int **)piVar2[1];
    while (__ptr != (int **)(g_alloc_context + 1)) {
      iVar1 = (int)*__ptr;
      piVar2 = __ptr[1];
      *(int **)(iVar1 + 4) = piVar2;
      *piVar2 = iVar1;
      *__ptr = (int *)0x100100;
      __ptr[1] = (int *)0x200200;
      free(__ptr);
      __ptr = ppiVar3;
      ppiVar3 = (int **)*ppiVar3;
    }
    close(*g_alloc_context);
    *g_alloc_context = 0;
    free(g_alloc_context);
    g_alloc_context = (int *)0x0;
  }
  pthread_mutex_unlock((pthread_mutex_t *)&g_mutex_alloc);
  return 0;
}



int * ion_alloc_alloc(int *param_1)

{
  int *__addr;
  int *piVar1;
  int iVar2;
  int **ppiVar3;
  int **ppiVar4;
  int *local_4c;
  undefined4 local_48;
  int **local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  
  pthread_mutex_lock((pthread_mutex_t *)&g_mutex_alloc);
  __addr = g_alloc_context;
  if (g_alloc_context != (int *)0x0) {
    if (0 < (int)param_1) {
      local_28 = 0x1000;
      local_24 = 4;
      local_20 = 3;
      local_2c = param_1;
      __addr = (int *)ioctl(*g_alloc_context,0xc0144900,&local_2c);
      if (__addr == (int *)0x0) {
        local_44 = &local_38;
        local_48 = 7;
        local_38 = local_1c;
        piVar1 = (int *)ioctl(*g_alloc_context,0xc0084906,&local_48);
        if (piVar1 == (int *)0x0) {
          local_40 = local_1c;
          iVar2 = ioctl(*g_alloc_context,0xc0084902,&local_40);
          __addr = piVar1;
          if (iVar2 == 0) {
            __addr = (int *)mmap((void *)0x0,(size_t)local_2c,3,1,(int)local_3c,0);
            if (__addr != (int *)0xffffffff) {
              ppiVar3 = (int **)malloc(0x1c);
              piVar1 = g_alloc_context;
              if (ppiVar3 != (int **)0x0) {
                ppiVar3[6] = local_1c;
                ppiVar3[4] = param_1;
                ppiVar3[2] = local_34;
                ppiVar3[3] = __addr;
                ppiVar3[5] = local_3c;
                ppiVar4 = (int **)piVar1[2];
                piVar1[2] = (int)ppiVar3;
                *ppiVar3 = piVar1 + 1;
                ppiVar3[1] = (int *)ppiVar4;
                *ppiVar4 = (int *)ppiVar3;
                goto LAB_00011320;
              }
              iVar2 = munmap(__addr,(size_t)local_2c);
              if (iVar2 != 0) {
                printf("munmap err, ret %d\n",iVar2);
              }
              puts("munmap succes");
            }
            close((int)local_3c);
            puts("close dmabuf fd succes");
          }
        }
        local_4c = local_1c;
        iVar2 = ioctl(*g_alloc_context,0xc0044901,&local_4c);
        if (iVar2 != 0) {
          printf("ION_IOC_FREE err, ret %d\n",iVar2);
        }
        puts("ION_IOC_FREE succes");
        goto LAB_00011320;
      }
    }
    __addr = (int *)0x0;
  }
LAB_00011320:
  pthread_mutex_unlock((pthread_mutex_t *)&g_mutex_alloc);
  return __addr;
}



int * ion_alloc_free(int *param_1)

{
  int iVar1;
  int *piVar2;
  int **ppiVar3;
  int **__ptr;
  int *piVar4;
  int *local_14 [2];
  
  if (param_1 == (int *)0x0) {
    __android_log_print(6,"awplayer",&DAT_0001198c,"ion_alloc_free",0x204);
    piVar4 = param_1;
  }
  else {
    pthread_mutex_lock((pthread_mutex_t *)&g_mutex_alloc);
    piVar4 = g_alloc_context;
    if (g_alloc_context != (int *)0x0) {
      __ptr = (int **)g_alloc_context[1];
      while (__ptr != (int **)(g_alloc_context + 1)) {
        if (__ptr[3] == param_1) {
          iVar1 = munmap(param_1,(size_t)__ptr[4]);
          if (iVar1 < 0) {
            __android_log_print(6,"awplayer",&DAT_000119bc,"ion_alloc_free",0x218,param_1,__ptr[4]);
          }
          piVar4 = __ptr[4];
          close((int)__ptr[5]);
          local_14[0] = __ptr[6];
          ioctl(*g_alloc_context,0xc0044901,local_14);
          piVar2 = *__ptr;
          ppiVar3 = (int **)__ptr[1];
          piVar2[1] = (int)ppiVar3;
          *ppiVar3 = piVar2;
          *__ptr = (int *)0x100100;
          __ptr[1] = (int *)0x200200;
          free(__ptr);
          goto LAB_0001140c;
        }
        __ptr = (int **)*__ptr;
      }
      piVar4 = (int *)0x0;
LAB_0001140c:
      pthread_mutex_unlock((pthread_mutex_t *)&g_mutex_alloc);
    }
  }
  return piVar4;
}



uint ion_alloc_vir2phy(uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    pthread_mutex_lock((pthread_mutex_t *)&g_mutex_alloc);
    puVar2 = *(undefined4 **)(undefined4 *)(g_alloc_context + 4);
    while (puVar2 != (undefined4 *)(g_alloc_context + 4)) {
      uVar1 = puVar2[3];
      if ((uVar1 <= param_1) && (param_1 < uVar1 + puVar2[4])) {
        param_1 = (param_1 + puVar2[2]) - uVar1;
        goto LAB_0001148c;
      }
      puVar2 = (undefined4 *)*puVar2;
    }
    param_1 = 0;
LAB_0001148c:
    pthread_mutex_unlock((pthread_mutex_t *)&g_mutex_alloc);
  }
  return param_1;
}



uint ion_alloc_phy2vir(uint param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_1 == 0) {
    __android_log_print(6,"awplayer",&DAT_000119f0,"ion_alloc_phy2vir",0x286,param_2);
  }
  else {
    pthread_mutex_lock((pthread_mutex_t *)&g_mutex_alloc);
    puVar2 = *(undefined4 **)(undefined4 *)(g_alloc_context + 4);
    while (puVar2 != (undefined4 *)(g_alloc_context + 4)) {
      uVar1 = puVar2[2];
      if ((uVar1 <= param_1) && (param_1 < uVar1 + puVar2[4])) {
        param_1 = (param_1 + puVar2[3]) - uVar1;
        goto LAB_000114f8;
      }
      puVar2 = (undefined4 *)*puVar2;
    }
    param_1 = 0;
LAB_000114f8:
    pthread_mutex_unlock((pthread_mutex_t *)&g_mutex_alloc);
  }
  return param_1;
}



void ion_flush_cache(int param_1,int param_2)

{
  int local_18;
  int local_14;
  undefined4 local_10;
  int *local_c;
  
  local_c = &local_18;
  local_14 = param_1 + param_2;
  local_10 = 5;
  local_18 = param_1;
  ioctl(*g_alloc_context,0xc0084906,&local_10);
  return;
}



void ion_flush_cache_all(void)

{
  ioctl(*g_alloc_context,6,0);
  return;
}



int ** ion_alloc_alloc_drm(int *param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  int **__addr;
  int iVar3;
  int **ppiVar4;
  int *local_4c;
  int *local_48;
  int *local_44;
  undefined4 local_40;
  int **local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  
  pthread_mutex_lock((pthread_mutex_t *)&g_mutex_alloc);
  ppiVar1 = g_alloc_context;
  if (g_alloc_context != (int **)0x0) {
    if (0 < (int)param_1) {
      local_28 = 0x1000;
      local_24 = 0x20;
      local_20 = 3;
      local_2c = param_1;
      ppiVar1 = (int **)ioctl((int)*g_alloc_context,0xc0144900,&local_2c);
      if (ppiVar1 == (int **)0x0) {
        local_48 = local_1c;
        ppiVar2 = (int **)ioctl((int)*g_alloc_context,0xc0084902,&local_48);
        if ((ppiVar2 == (int **)0x0) &&
           (__addr = (int **)mmap((void *)0x0,(size_t)local_2c,3,1,(int)local_44,0),
           ppiVar1 = ppiVar2, __addr != (int **)0xffffffff)) {
          local_3c = &local_38;
          memset(local_3c,0,0xc);
          local_38 = local_1c;
          local_40 = 7;
          local_30 = param_1;
          iVar3 = ioctl((int)*g_alloc_context,0xc0084906,&local_40);
          if (iVar3 == 0) {
            ppiVar1 = (int **)malloc(0x1c);
            if (ppiVar1 == (int **)0x0) {
              munmap(__addr,(size_t)local_2c);
              close((int)local_44);
              local_4c = local_1c;
              ioctl((int)*g_alloc_context,0xc0044901,&local_4c);
            }
            else {
              ppiVar1[2] = local_34;
              ppiVar1[6] = local_1c;
              ppiVar1[4] = param_1;
              ppiVar1[3] = (int *)__addr;
              ppiVar1[5] = local_44;
              ppiVar4 = g_alloc_context + 1;
              ppiVar2 = (int **)g_alloc_context[2];
              g_alloc_context[2] = (int *)ppiVar1;
              *ppiVar1 = (int *)ppiVar4;
              ppiVar1[1] = (int *)ppiVar2;
              *ppiVar2 = (int *)ppiVar1;
              ppiVar1 = __addr;
            }
          }
        }
        goto LAB_0001164e;
      }
    }
    ppiVar1 = (int **)0x0;
  }
LAB_0001164e:
  pthread_mutex_unlock((pthread_mutex_t *)&g_mutex_alloc);
  return ppiVar1;
}



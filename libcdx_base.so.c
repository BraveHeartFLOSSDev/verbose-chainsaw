#include "libcdx_base.so.h"



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



void __errno(void)

{
  __errno();
  return;
}



void __android_log_print(void)

{
  __android_log_print();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_mutexattr_init(pthread_mutexattr_t *__attr)

{
  int iVar1;
  
  iVar1 = pthread_mutexattr_init(__attr);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_mutexattr_settype(pthread_mutexattr_t *__attr,int __kind)

{
  int iVar1;
  
  iVar1 = pthread_mutexattr_settype(__attr,__kind);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = pthread_mutex_init(__mutex,__mutexattr);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = strrchr(__s,__c);
  return pcVar1;
}



void __android_log_assert(void)

{
  __android_log_assert();
  return;
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



// WARNING: Unknown calling convention yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



void __aeabi_uidiv(void)

{
  __aeabi_uidiv();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}



void __aeabi_uidivmod(void)

{
  __aeabi_uidivmod();
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

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

long syscall(long __sysno,...)

{
  long lVar1;
  
  lVar1 = syscall(__sysno);
  return lVar1;
}



void unwind_backtrace_thread(void)

{
  unwind_backtrace_thread();
  return;
}



void get_backtrace_symbols(void)

{
  get_backtrace_symbols();
  return;
}



void format_backtrace_line(void)

{
  format_backtrace_line();
  return;
}



void free_backtrace_symbols(void)

{
  free_backtrace_symbols();
  return;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention yet parameter storage is locked

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = getpid();
  return _Var1;
}



void __sprintf_chk(void)

{
  __sprintf_chk();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int scandir(char *__dir,dirent ***__namelist,__selector *__selector,__cmp *__cmp)

{
  int iVar1;
  
  iVar1 = scandir(__dir,__namelist,__selector,__cmp);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

long atol(char *__nptr)

{
  long lVar1;
  
  lVar1 = atol(__nptr);
  return lVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = usleep(__useconds);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = pthread_create(__newthread,__attr,__start_routine,__arg);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_cond_signal(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = pthread_cond_signal(__cond);
  return iVar1;
}



void __aeabi_uldivmod(void)

{
  __aeabi_uldivmod();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_cond_init(pthread_cond_t *__cond,pthread_condattr_t *__cond_attr)

{
  int iVar1;
  
  iVar1 = pthread_cond_init(__cond,__cond_attr);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_cond_broadcast(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = pthread_cond_broadcast(__cond);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = pthread_join(__th,__thread_return);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_cond_destroy(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = pthread_cond_destroy(__cond);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = time(__timer);
  return tVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_cond_timedwait(pthread_cond_t *__cond,pthread_mutex_t *__mutex,timespec *__abstime)

{
  int iVar1;
  
  iVar1 = pthread_cond_timedwait(__cond,__mutex,__abstime);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void pthread_exit(void *__retval)

{
                    // WARNING: Subroutine does not return
  pthread_exit(__retval);
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = strcat(__dest,__src);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = strcpy(__dest,__src);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = strstr(__haystack,__needle);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = strchr(__s,__c);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = strdup(__s);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = atoi(__nptr);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int strcasecmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = strcasecmp(__s1,__s2);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = getenv(__name);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = sprintf(__s,__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fcntl(int __fd,int __cmd,...)

{
  int iVar1;
  
  iVar1 = fcntl(__fd,__cmd);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = socket(__domain,__type,__protocol);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
  int iVar1;
  
  iVar1 = setsockopt(__fd,__level,__optname,__optval,__optlen);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

long lrand48(void)

{
  long lVar1;
  
  lVar1 = lrand48();
  return lVar1;
}



void __aeabi_idiv(void)

{
  __aeabi_idiv();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = bind(__fd,__addr,__len);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

hostent * gethostbyname(char *__name)

{
  hostent *phVar1;
  
  phVar1 = gethostbyname(__name);
  return phVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int getsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t *__optlen)

{
  int iVar1;
  
  iVar1 = getsockopt(__fd,__level,__optname,__optval,__optlen);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = connect(__fd,__addr,__len);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = select(__nfds,__readfds,__writefds,__exceptfds,__timeout);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = send(__fd,__buf,__n,__flags);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = recv(__fd,__buf,__n,__flags);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int strncasecmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = strncasecmp(__s1,__s2,__n);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = gettimeofday(__tv,__tz);
  return iVar1;
}



void FUN_0001210c(void *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((int)param_1 + 0x18);
  DataMemoryBarrier(0x1f);
  do {
    ExclusiveAccess(piVar3);
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  DataMemoryBarrier(0x1f);
  if (iVar2 + -1 == 0) {
    CdxListDel((int *)((int)param_1 + 8));
    free(param_1);
    return;
  }
  return;
}



undefined4 * FUN_00012148(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = param_4;
  puVar1 = (undefined4 *)malloc(param_2 + 0x18);
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)__errno();
    __android_log_print(6,"awplayer",&DAT_00017505,"PallocLarge",0x7f,param_2,*puVar2,uVar3);
  }
  else {
    puVar1[5] = param_2;
    *puVar1 = 0;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    CdxListAddAfter(puVar1 + 3,(int **)(param_1 + 4));
    puVar1 = puVar1 + 6;
  }
  return puVar1;
}



void ** PoolNodeCreate(void *param_1,void *param_2)

{
  bool bVar1;
  void **__ptr;
  void **__ptr_00;
  undefined4 *puVar2;
  void **ppvVar3;
  int iVar4;
  void **ppvVar5;
  void **ppvVar6;
  pthread_mutexattr_t pStack36;
  
  __ptr = (void **)malloc(0x400);
  __ptr_00 = (void **)malloc(0x2000);
  ppvVar5 = (void **)(1 - (int)__ptr);
  if ((void **)0x1 < __ptr) {
    ppvVar5 = (void **)0x0;
  }
  if (__ptr_00 == (void **)0x0) {
    ppvVar5 = (void **)((uint)ppvVar5 | 1);
  }
  if (ppvVar5 == (void **)0x0) {
    *__ptr_00 = __ptr_00 + 8;
    __ptr_00[1] = __ptr_00 + 0x800;
    ppvVar6 = __ptr + 3;
    __ptr[2] = __ptr + 1;
    __ptr[1] = __ptr + 1;
    __ptr[4] = ppvVar6;
    __ptr[3] = ppvVar6;
    __ptr_00[7] = (void *)0x0;
    *__ptr = __ptr_00;
    __ptr_00[5] = __ptr_00 + 4;
    __ptr_00[4] = __ptr_00 + 4;
    __ptr[6] = __ptr + 5;
    __ptr[5] = __ptr + 5;
    ppvVar3 = (void **)pthread_mutexattr_init(&pStack36);
    if (ppvVar3 == (void **)0x0) {
      iVar4 = pthread_mutexattr_settype(&pStack36,2);
      if (iVar4 == 0) {
        pthread_mutex_init((pthread_mutex_t *)(__ptr + 9),&pStack36);
        ppvVar5 = __ptr_00 + 6;
        CdxListAddBefore((int *)(__ptr_00 + 2),(int)ppvVar6);
        do {
          ExclusiveAccess(ppvVar5);
          bVar1 = (bool)hasExclusiveAccess(ppvVar5);
        } while (!bVar1);
        *ppvVar5 = (void *)0x1;
        DataMemoryBarrier(0x1f);
        __ptr[10] = param_1;
        __ptr[0xb] = param_2;
      }
      else {
        __android_log_print(6,"awplayer",&DAT_000175ad,"PoolNodeCreate",0xb1);
        __ptr = ppvVar3;
      }
    }
    else {
      __android_log_print(6,"awplayer",&DAT_00017576,"PoolNodeCreate",0xac);
      __ptr = ppvVar5;
    }
  }
  else {
    puVar2 = (undefined4 *)__errno();
    __android_log_print(6,"awplayer",&DAT_0001753d,"PoolNodeCreate",0x97,0x2000,*puVar2);
    if (__ptr != (void **)0x0) {
      free(__ptr);
    }
    __ptr = __ptr_00;
    if (__ptr_00 != (void **)0x0) {
      free(__ptr_00);
      __ptr = (void **)0x0;
    }
  }
  return __ptr;
}



void ** __AwPoolCreate(void **param_1,void *param_2,void *param_3)

{
  void **ppvVar1;
  
  if ((param_1 == (void **)0x0) && (param_1 = DAT_0001b0c8, DAT_0001b0c8 == (void **)0x0)) {
    param_1 = PoolNodeCreate(
                             "/home/zhangjingzhou/sdk/v3-cdr-ips2.0-0104/CamCedarX/LIBRARY/DEMUX/BASE/AwPool.c"
                             ,(void *)0xc6);
    DAT_0001b0c8 = param_1;
  }
  ppvVar1 = PoolNodeCreate(param_2,param_3);
  CdxListAddAfter((int *)(ppvVar1 + 7),(int **)(param_1 + 5));
  return ppvVar1;
}



void AwPoolDestroy(void *param_1)

{
  bool bVar1;
  int **ppiVar2;
  int *piVar3;
  int *piVar4;
  int **ppiVar5;
  char *pcVar6;
  int **ppiVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  
  ppiVar7 = *(int ***)(int **)((int)param_1 + 0x14);
  ppiVar5 = (int **)*ppiVar7;
  while (ppiVar2 = ppiVar5, ppiVar7 != (int **)((int)param_1 + 0x14)) {
    CdxListDel((int *)ppiVar7);
    AwPoolDestroy(ppiVar7 + -7);
    ppiVar5 = (int **)*ppiVar2;
    ppiVar7 = ppiVar2;
  }
  if (param_1 != DAT_0001b0c8) {
    CdxListDel((int *)((int)param_1 + 0x1c));
  }
  ppiVar7 = *(int ***)(int **)((int)param_1 + 4);
  ppiVar5 = (int **)*ppiVar7;
  while (ppiVar2 = ppiVar5, ppiVar7 != (int **)((int)param_1 + 4)) {
    pcVar6 = strrchr((char *)ppiVar7[-2],0x2f);
    __android_log_print(5,"awplayer","<%s:%u>: memory leak @<%s:%d>","AwPoolDestroy",0xe6,pcVar6 + 1
                        ,ppiVar7[-1]);
    CdxListDel((int *)ppiVar7);
    free(ppiVar7 + -3);
    ppiVar5 = (int **)*ppiVar2;
    ppiVar7 = ppiVar2;
  }
  piVar8 = (int *)**(int **)((int)param_1 + 0xc);
  piVar4 = *(int **)((int)param_1 + 0xc);
  while (piVar3 = piVar8, piVar4 != (int *)((int)param_1 + 0xc)) {
    piVar8 = piVar4 + 4;
    if (5 < piVar4[5]) {
      DataMemoryBarrier(0x1f);
      do {
        ExclusiveAccess(piVar8);
        bVar1 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar1);
      *piVar8 = *piVar8 + 1;
      DataMemoryBarrier(0x1f);
    }
    DataMemoryBarrier(0x1f);
    do {
      ExclusiveAccess(piVar8);
      iVar10 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar10;
    DataMemoryBarrier(0x1f);
    if (iVar10 != 1) {
      puVar9 = (undefined4 *)piVar4[2];
      while (puVar9 != piVar4 + 2) {
        pcVar6 = strrchr((char *)puVar9[-2],0x2f);
        __android_log_print(5,"awplayer","<%s:%u>: memory leak @<%s:%d>","AwPoolDestroy",0xf7,
                            pcVar6 + 1,puVar9[-1]);
        FUN_0001210c(piVar4 + -2);
        puVar9 = (undefined4 *)*puVar9;
      }
    }
    piVar8 = piVar4 + 4;
    DataMemoryBarrier(0x1f);
    do {
      ExclusiveAccess(piVar8);
      iVar10 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar10;
    DataMemoryBarrier(0x1f);
    if (iVar10 != 1) {
      DataMemoryBarrier(0x1f);
      do {
        ExclusiveAccess(piVar8);
        iVar10 = *piVar8;
        bVar1 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar1);
      *piVar8 = iVar10;
      DataMemoryBarrier(0x1f);
      param_1 = (void *)piVar4[5];
      __android_log_assert
                ("!(CdxAtomicRead(&pd->ref) == 1)","awplayer",
                 "<%s:%d>check (%s) failed:ref(%d), failed(%d)","AwPoolDestroy",0xfd,
                 "CdxAtomicRead(&pd->ref) == 1",iVar10,param_1);
    }
    FUN_0001210c(piVar4 + -2);
    piVar8 = (int *)*piVar3;
    piVar4 = piVar3;
  }
  pthread_mutex_destroy((pthread_mutex_t *)((int)param_1 + 0x24));
  free(param_1);
  return;
}



void ** AwPalloc(void **param_1,void *param_2,undefined *param_3,void *param_4)

{
  bool bVar1;
  void **ppvVar2;
  undefined4 *puVar3;
  char *pcVar4;
  void *pvVar5;
  void **ppvVar6;
  void **ppvVar7;
  void **ppvVar8;
  void **ppvVar9;
  void **ppvVar10;
  uint uVar11;
  void **ppvVar12;
  
  pcVar4 = param_3;
  ppvVar8 = param_1;
  if ((int)param_2 < 1) {
    ppvVar8 = (void **)0x10d;
    pcVar4 = "<%s:%d>check (%s) failed:Kid, malloc a negative size (%d)";
    param_1 = (void **)__android_log_assert
                                 ("!(size > 0)","awplayer",
                                  "<%s:%d>check (%s) failed:Kid, malloc a negative size (%d)",
                                  "AwPalloc",0x10d,"size > 0",param_2);
  }
  if ((param_1 == (void **)0x0) && (ppvVar8 = DAT_0001b0c8, DAT_0001b0c8 == (void **)0x0)) {
    ppvVar8 = PoolNodeCreate(pcVar4,param_4);
    DAT_0001b0c8 = ppvVar8;
  }
  pthread_mutex_lock((pthread_mutex_t *)(ppvVar8 + 9));
  uVar11 = (int)param_2 + 0x1fU & 0xfffffff8;
  if ((int)uVar11 < 0x1000) {
    ppvVar9 = ppvVar8 + 3;
    ppvVar7 = (void **)((int)*ppvVar8 + 8);
    while (ppvVar7 != ppvVar9) {
      ppvVar2 = (void **)ppvVar7[-2];
      if ((int)uVar11 <= (int)((int)ppvVar7[-1] - (int)ppvVar2)) {
        ppvVar9 = ppvVar7 + 4;
        *ppvVar2 = ppvVar7 + -2;
        ppvVar2[1] = param_3;
        ppvVar2[2] = param_4;
        ppvVar2[5] = param_2;
        DataMemoryBarrier(0x1f);
        do {
          ExclusiveAccess(ppvVar9);
          bVar1 = (bool)hasExclusiveAccess(ppvVar9);
        } while (!bVar1);
        *ppvVar9 = (void *)((int)*ppvVar9 + 1);
        DataMemoryBarrier(0x1f);
        CdxListAddBefore((int *)(ppvVar2 + 3),(int)(ppvVar7 + 2));
        ppvVar7[-2] = (void *)((int)ppvVar7[-2] + uVar11);
        ppvVar2 = ppvVar2 + 6;
        goto LAB_00012720;
      }
      ppvVar7 = (void **)*ppvVar7;
    }
    ppvVar2 = (void **)malloc(0x2000);
    if (ppvVar2 == (void **)0x0) {
      puVar3 = (undefined4 *)__errno();
      __android_log_print(6,"awplayer",&DAT_0001753d,"PallocBlock",0x4b,0x2000,*puVar3);
    }
    else {
      ppvVar12 = ppvVar2 + 4;
      ppvVar2[1] = ppvVar2 + 0x800;
      ppvVar7 = ppvVar2 + 6;
      ppvVar2[7] = (void *)0x0;
      *ppvVar2 = ppvVar2 + 8;
      ppvVar2[5] = ppvVar12;
      ppvVar2[4] = ppvVar12;
      do {
        ExclusiveAccess(ppvVar7);
        bVar1 = (bool)hasExclusiveAccess(ppvVar7);
      } while (!bVar1);
      *ppvVar7 = (void *)0x1;
      DataMemoryBarrier(0x1f);
      ppvVar10 = (void **)0x0;
      ppvVar7 = (void **)((int)*ppvVar8 + 8);
      ppvVar6 = *(void ***)((int)*ppvVar8 + 8);
      while (ppvVar7 != ppvVar9) {
        pvVar5 = ppvVar7[5];
        ppvVar7[5] = (void *)((int)pvVar5 + 1);
        if (4 < (int)pvVar5) {
          ppvVar10 = ppvVar2;
          if ((void **)*ppvVar7 != ppvVar9) {
            ppvVar10 = (void **)((int)*ppvVar7 + -8);
          }
          FUN_0001210c(ppvVar7 + -2);
        }
        ppvVar7 = ppvVar6;
        ppvVar6 = (void **)*ppvVar6;
      }
      CdxListAddBefore((int *)(ppvVar2 + 2),(int)ppvVar7);
      if (ppvVar10 == (void **)0x0) {
        ppvVar10 = (void **)*ppvVar8;
      }
      *ppvVar8 = ppvVar10;
      ppvVar9 = (void **)*ppvVar2;
      *ppvVar9 = ppvVar2;
      ppvVar9[1] = param_3;
      ppvVar9[2] = param_4;
      ppvVar9[5] = param_2;
      ppvVar7 = ppvVar2 + 6;
      *ppvVar2 = (void *)((int)*ppvVar2 + ((int)param_2 + 0x1fU & 0xfffffff8));
      CdxListAddBefore((int *)(ppvVar9 + 3),(int)ppvVar12);
      DataMemoryBarrier(0x1f);
      do {
        ExclusiveAccess(ppvVar7);
        bVar1 = (bool)hasExclusiveAccess(ppvVar7);
      } while (!bVar1);
      *ppvVar7 = (void *)((int)*ppvVar7 + 1);
      DataMemoryBarrier(0x1f);
      ppvVar2 = ppvVar9 + 6;
    }
  }
  else {
    ppvVar2 = (void **)FUN_00012148((int)ppvVar8,(int)param_2,param_3,param_4);
  }
LAB_00012720:
  pthread_mutex_unlock((pthread_mutex_t *)(ppvVar8 + 9));
  return ppvVar2;
}



void AwPfree(int param_1,int param_2)

{
  if (param_1 == 0) {
    param_1 = DAT_0001b0c8;
  }
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x24));
  if (*(int *)(param_2 + -4) < 0x1000) {
    CdxListDel((int *)(param_2 + -0xc));
    FUN_0001210c(*(void **)(param_2 + -0x18));
  }
  else {
    CdxListDel((int *)(param_2 + -0xc));
    free((void *)(param_2 + -0x18));
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x24));
  return;
}



void ** AwRealloc(void **param_1,char *param_2,void *param_3,undefined *param_4,void *param_5)

{
  char *pcVar1;
  undefined *puVar2;
  void **__dest;
  int *piVar3;
  char *pcVar4;
  int *piVar5;
  int *piVar6;
  pthread_mutex_t *unaff_r8;
  undefined4 uVar7;
  char *pcVar8;
  void *pvVar9;
  
  if ((int)param_3 < 1) {
    param_5 = (void *)0x144;
    pcVar1 = "!(size > 0)";
    pcVar4 = "<%s:%d>check (%s) failed:Kid, malloc a negative size (%d)";
    uVar7 = 0x144;
    param_2 = "size > 0";
    pcVar8 = "size > 0";
    puVar2 = param_4;
LAB_0001281a:
    pvVar9 = param_3;
    puVar2 = (undefined *)
             __android_log_assert(pcVar1,"awplayer",pcVar4,"AwRealloc",uVar7,pcVar8,param_3,puVar2);
  }
  else {
    if (param_1 == (void **)0x0) {
      param_1 = DAT_0001b0c8;
    }
    unaff_r8 = (pthread_mutex_t *)(param_1 + 9);
    pcVar8 = param_2;
    pvVar9 = param_3;
    pthread_mutex_lock(unaff_r8);
    puVar2 = *(undefined **)(param_2 + -4);
    if ((int)param_3 <= (int)puVar2) {
      param_2 = (char *)0x14f;
      pcVar1 = "!(size > pm->size)";
      pcVar4 = "<%s:%d>check (%s) failed:invalid size, (%d, %d)";
      uVar7 = 0x14f;
      pcVar8 = "size > pm->size";
      param_1 = (void **)pcVar1;
      goto LAB_0001281a;
    }
  }
  if ((int)puVar2 < 0x1000) {
    if ((int)param_3 < 0x1000) {
      piVar6 = *(int **)((int)param_2 + -0x18);
      piVar5 = *(int **)((int)param_2 + -0xc);
      if (piVar5 == piVar6 + 4) {
        piVar3 = piVar6 + 0x800;
      }
      else {
        piVar3 = piVar5 + -3;
      }
      if ((int)param_3 <= (int)((int)piVar3 - (int)param_2)) {
        *(void **)((int)param_2 + -4) = param_3;
        *(undefined **)((int)param_2 + -0x14) = param_4;
        *(void **)((int)param_2 + -0x10) = param_5;
        if (piVar5 == piVar6 + 4) {
          *piVar6 = (int)(void **)((int)param_2 + -0x18) + ((int)param_3 + 0x1fU & 0xfffffff8);
        }
        goto LAB_000128f8;
      }
      __dest = AwPalloc(param_1,param_3,param_4,param_5);
    }
    else {
      __dest = (void **)FUN_00012148((int)param_1,(int)param_3,param_4,param_5);
      if (__dest == (void **)0x0) {
        uVar7 = 0x164;
        goto LAB_0001288c;
      }
    }
    memcpy(__dest,param_2,(size_t)*(void **)((int)param_2 + -4));
    AwPfree((int)param_1,(int)param_2);
    param_2 = (char *)__dest;
  }
  else {
    __dest = (void **)FUN_00012148((int)param_1,(int)param_3,param_4,param_5);
    if (__dest != (void **)0x0) {
      memcpy(__dest,param_2,(size_t)*(void **)((int)param_2 + -4));
      CdxListDel((int *)((int)param_2 + -0xc));
      free((void **)((int)param_2 + -0x18));
      param_2 = (char *)__dest;
      goto LAB_000128f8;
    }
    uVar7 = 0x156;
LAB_0001288c:
    __android_log_print(6,"awplayer",&DAT_00017762,"AwRealloc",uVar7,pcVar8,pvVar9);
    param_2 = (char *)__dest;
  }
LAB_000128f8:
  pthread_mutex_unlock(unaff_r8);
  return (void **)param_2;
}



void AwPoolReset(undefined4 param_1,undefined4 param_2)

{
  if (DAT_0001b0c8 == (void *)0x0) {
    __android_log_print(5,"awplayer","<%s:%u>: global pool not initinal...","AwPoolReset",0x1b1,
                        param_2);
  }
  else {
    AwPoolDestroy(DAT_0001b0c8);
    DAT_0001b0c8 = (void *)0x0;
  }
  return;
}



char FUN_0001298c(uint param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (char)param_1;
  if (param_1 < 0x1a) {
    cVar1 = cVar1 + 'A';
  }
  else {
    if (param_1 < 0x34) {
      cVar1 = cVar1 + 'G';
    }
    else {
      if (0x3d < param_1) {
        bVar2 = param_1 != 0x3e;
        if (bVar2) {
          param_1 = 0x2f;
        }
        cVar1 = (char)param_1;
        if (!bVar2) {
          cVar1 = '+';
        }
        return cVar1;
      }
      cVar1 = cVar1 + -4;
    }
  }
  return cVar1;
}



void ** CdxDecodeBase64(void **param_1,char *param_2)

{
  char *pcVar1;
  undefined *puVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  char *pcVar8;
  char *unaff_r5;
  undefined *unaff_r6;
  uint uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  
  if (param_2 == (char *)0x0) {
    pcVar1 = "!(s)";
    uVar12 = 0xf;
    pcVar4 = "CdxDecodeBase64";
    pcVar8 = "s";
  }
  else {
    pcVar8 = (char *)strlen(param_2);
    if ((char *)((uint)pcVar8 & 3) != (char *)0x0) {
      return (void **)0x0;
    }
    unaff_r5 = pcVar8;
    if (((pcVar8 != (char *)0x0) &&
        (unaff_r5 = (char *)((uint)pcVar8 & 3), (param_2 + (int)pcVar8)[-1] == '=')) &&
       (unaff_r5 = (char *)0x1, (char *)0x1 < pcVar8)) {
      if ((param_2 + (int)pcVar8)[-2] == '=') {
        unaff_r5 = (char *)0x2;
      }
      else {
        unaff_r5 = (char *)0x1;
      }
    }
    unaff_r6 = (undefined *)(((uint)((int)pcVar8 * 3) >> 2) - (int)unaff_r5);
    uVar11 = __CdxBufferCreate(param_1,unaff_r6,(void *)0x0,(undefined *)0x0,
                                                              
                               "/home/zhangjingzhou/sdk/v3-cdr-ips2.0-0104/CamCedarX/LIBRARY/DEMUX/BASE/CdxBase64.c"
                               ,(char *)0x23);
    param_1 = (void **)uVar11;
    if (param_1 != (void **)0x0) goto LAB_00012a46;
    param_2 = (char *)0x24;
    pcVar1 = "!(buffer)";
    pcVar4 = "CdxDecodeBase64";
    uVar12 = 0x24;
    pcVar8 = "buffer";
  }
  do {
    while( true ) {
      while( true ) {
        uVar11 = __android_log_assert
                           (pcVar1,"awplayer","<%s:%d>CDX_CHECK(%s) failed.",pcVar4,uVar12,pcVar8);
LAB_00012a46:
        iVar5 = *(int *)uVar11;
        if (iVar5 != 0) break;
        pcVar1 = "!(buf->ops)";
        uVar12 = 0x3a;
        pcVar4 = "CdxBufferGetData";
        pcVar8 = "buf->ops";
      }
      pcVar6 = *(code **)(iVar5 + 8);
      if (pcVar6 != (code *)0x0) break;
      unaff_r5 = (char *)0x3b;
      pcVar1 = "!(buf->ops->getData)";
      pcVar4 = "CdxBufferGetData";
      uVar12 = 0x3b;
      pcVar8 = "buf->ops->getData";
    }
    iVar5 = (*pcVar6)((int *)uVar11,(int)((ulonglong)uVar11 >> 0x20));
    unaff_r5 = pcVar8 + -(int)unaff_r5;
    pcVar1 = (char *)0x0;
    puVar10 = (undefined *)0x0;
    uVar7 = 0;
    while (puVar2 = puVar10, pcVar1 != pcVar8) {
      uVar3 = (uint)(byte)param_2[(int)pcVar1];
      uVar9 = uVar3 - 0x41;
      if (0x19 < (uVar9 & 0xff)) {
        if ((uVar3 - 0x61 & 0xff) < 0x1a) {
          uVar9 = uVar3 - 0x47;
        }
        else {
          if ((uVar3 - 0x30 & 0xff) < 10) {
            uVar9 = uVar3 + 4;
          }
          else {
            if (uVar3 == 0x2b) {
              uVar9 = 0x3e;
            }
            else {
              if (uVar3 == 0x2f) {
                uVar9 = 0x3f;
              }
              else {
                if (uVar3 != 0x3d) {
                  return (void **)0x0;
                }
                if (pcVar1 < unaff_r5) {
                  return (void **)0x0;
                }
                uVar9 = 0;
              }
            }
          }
        }
      }
      pcVar1 = pcVar1 + 1;
      uVar9 = uVar9 | uVar7 << 6;
      uVar3 = (uint)pcVar1 & 3;
      puVar10 = puVar2;
      uVar7 = uVar9;
      if (uVar3 == 0) {
        puVar2[iVar5] = (char)(uVar9 >> 0x10);
        puVar10 = puVar2 + 1;
        uVar7 = uVar3;
        if (puVar10 < unaff_r6) {
          puVar10[iVar5] = (char)(uVar9 >> 8);
          puVar10 = puVar2 + 2;
          if (puVar10 < unaff_r6) {
            puVar10[iVar5] = (char)uVar9;
            puVar10 = puVar2 + 3;
          }
        }
      }
    }
    if (*param_1 == (void *)0x0) {
      unaff_r6 = (undefined *)0x6d;
      pcVar1 = "!(buf->ops)";
      pcVar4 = "CdxBufferSetRange";
      uVar12 = 0x6d;
      pcVar8 = "buf->ops";
    }
    else {
      pcVar6 = *(code **)((int)*param_1 + 0x1c);
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(param_1,0,unaff_r6);
        return param_1;
      }
      param_2 = (char *)0x6e;
      pcVar1 = "!(buf->ops->setRange)";
      pcVar4 = "CdxBufferSetRange";
      uVar12 = 0x6e;
      pcVar8 = "buf->ops->setRange";
    }
  } while( true );
}



void ** CdxEncodeBase64(void **param_1,byte *param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  void **ppvVar7;
  void **ppvVar8;
  int extraout_r1;
  void *__n;
  uint uVar9;
  byte *pbVar10;
  
  iVar5 = __aeabi_uidiv(param_3,3);
  iVar6 = __aeabi_uidiv(iVar5 * 0xc);
  __n = (void *)(iVar6 + 8);
  ppvVar7 = AwPalloc(param_1,__n,
                                          
                     "/home/zhangjingzhou/sdk/v3-cdr-ips2.0-0104/CamCedarX/LIBRARY/DEMUX/BASE/CdxBase64.c"
                     ,(void *)0x6e);
  ppvVar8 = ppvVar7;
  if (ppvVar7 == (void **)0x0) {
    __n = (void *)0x6f;
    param_2 = &DAT_000178a4;
    ppvVar8 = (void **)__android_log_assert
                                 ("!(out)","awplayer","<%s:%d>CDX_CHECK(%s) failed.",
                                  "CdxEncodeBase64",0x6f,&DAT_000178a4);
  }
  iVar6 = 0;
  memset(ppvVar8,0,(size_t)__n);
  uVar9 = 0;
  ppvVar8 = ppvVar7;
  pbVar10 = param_2;
  while( true ) {
    if ((uint)(iVar5 * 3) <= uVar9) break;
    bVar1 = *pbVar10;
    iVar6 = iVar6 + 4;
    bVar3 = pbVar10[1];
    uVar9 = uVar9 + 3;
    bVar2 = pbVar10[2];
    cVar4 = FUN_0001298c((uint)(bVar1 >> 2));
    *(char *)ppvVar8 = cVar4;
    cVar4 = FUN_0001298c((bVar1 & 3) << 4 | (uint)(bVar3 >> 4));
    *(char *)((int)ppvVar8 + 1) = cVar4;
    cVar4 = FUN_0001298c((bVar3 & 0xf) << 2 | (uint)(bVar2 >> 6));
    *(char *)((int)ppvVar8 + 2) = cVar4;
    cVar4 = FUN_0001298c(bVar2 & 0x3f);
    *(char *)((int)ppvVar8 + 3) = cVar4;
    ppvVar8 = ppvVar8 + 1;
    pbVar10 = pbVar10 + 3;
  }
  __aeabi_uidivmod(param_3,3);
  if (extraout_r1 != 0) {
    if (extraout_r1 == 2) {
      bVar3 = param_2[uVar9];
      bVar1 = param_2[uVar9 + 1];
      cVar4 = FUN_0001298c((uint)(bVar3 >> 2));
      *(char *)((int)ppvVar7 + iVar6) = cVar4;
      cVar4 = FUN_0001298c((bVar3 & 3) << 4 | (uint)(bVar1 >> 4));
      *(char *)((int)ppvVar7 + iVar6 + 1) = cVar4;
      cVar4 = FUN_0001298c((bVar1 & 0xf) << 2);
      *(char *)((int)ppvVar7 + iVar6 + 2) = cVar4;
    }
    else {
      bVar1 = param_2[uVar9];
      cVar4 = FUN_0001298c((uint)(bVar1 >> 2));
      *(char *)((int)ppvVar7 + iVar6) = cVar4;
      cVar4 = FUN_0001298c((bVar1 & 3) << 4);
      *(char *)((int)ppvVar7 + iVar6 + 1) = cVar4;
      *(undefined *)((int)ppvVar7 + iVar6 + 2) = 0x3d;
    }
    *(undefined *)((int)ppvVar7 + iVar6 + 3) = 0x3d;
  }
  return ppvVar7;
}



int CdxBitReaderData(int param_1)

{
  if (param_1 == 0) {
    param_1 = __android_log_assert
                        ("!(br)","awplayer","<%s:%d>CDX_CHECK(%s) failed.","CdxBitReaderData",0x74,
                         &DAT_000178ae);
  }
  return *(int *)(param_1 + 4) - (*(int *)(param_1 + 0x10) + 7U >> 3);
}



int CdxBitReaderNumBitsLeft(int param_1)

{
  if (param_1 == 0) {
    param_1 = __android_log_assert
                        ("!(br)","awplayer","<%s:%d>CDX_CHECK(%s) failed.","CdxBitReaderNumBitsLeft"
                         ,0x6b,&DAT_000178ae);
  }
  return *(int *)(param_1 + 0x10) + *(int *)(param_1 + 8) * 8;
}



void CdxBitReaderPutBits(int param_1,undefined4 param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  uVar4 = CONCAT44(param_2,param_1);
  if (param_1 == 0) {
    pcVar1 = "!(br)";
    uVar5 = 0x59;
    pcVar3 = "br";
  }
  else {
    if (param_3 < (char *)0x20) goto LAB_00012e1c;
    pcVar1 = "!(n < 32u)";
    uVar5 = 0x5d;
    pcVar3 = "n < 32u";
  }
  param_3 = "<%s:%d>CDX_CHECK(%s) failed.";
  uVar4 = __android_log_assert
                    (pcVar1,"awplayer","<%s:%d>CDX_CHECK(%s) failed.","CdxBitReaderPutBits",uVar5,
                     pcVar3);
  do {
    iVar2 = (int)uVar4;
    *(char **)(iVar2 + 0x10) = pcVar3 + -8;
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
LAB_00012e1c:
    iVar2 = (int)uVar4;
    pcVar3 = *(char **)(iVar2 + 0x10);
  } while ((char *)0x20 < param_3 + (int)pcVar3);
  *(char **)(iVar2 + 0x10) = param_3 + (int)pcVar3;
  *(uint *)(iVar2 + 0xc) =
       *(uint *)(iVar2 + 0xc) >> ((uint)param_3 & 0xff) |
       (int)((ulonglong)uVar4 >> 0x20) << (0x20U - (int)param_3 & 0xff);
  return;
}



undefined8 CdxBitReaderGetBits(char *param_1,uint param_2,undefined4 param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  char *pcVar8;
  
  if (param_1 == (char *)0x0) {
    pcVar1 = "!(br)";
    pcVar8 = (char *)0x2c;
    param_1 = "CdxBitReaderGetBits";
    pcVar4 = "br";
  }
  else {
    uVar2 = 0;
    pcVar8 = param_1;
    if (param_2 < 0x21) goto LAB_00012f28;
    pcVar1 = "!(n <= 32u)";
    param_1 = "CdxBitReaderGetBits";
    pcVar8 = (char *)0x31;
    pcVar4 = "n <= 32u";
  }
LAB_00012e9e:
  uVar7 = __android_log_assert
                    (pcVar1,"awplayer","<%s:%d>CDX_CHECK(%s) failed.",param_1,pcVar8,pcVar4,param_3)
  ;
  do {
    uVar2 = (uint)((ulonglong)uVar7 >> 0x20);
    uVar3 = *(uint *)(param_1 + 0x10);
    if (uVar3 == 0) {
      if (*(int *)(param_1 + 8) == 0) break;
      *(undefined4 *)(param_1 + 0xc) = 0;
      while( true ) {
        uVar6 = *(uint *)(param_1 + 8);
        uVar5 = uVar6;
        if (uVar6 != 0) {
          uVar5 = 1;
        }
        if (uVar3 < 4) {
          uVar5 = uVar5 & 1;
        }
        else {
          uVar5 = 0;
        }
        if (uVar5 == 0) break;
        uVar3 = uVar3 + 1;
        *(uint *)(param_1 + 0xc) = (uint)**(byte **)(param_1 + 4) | *(int *)(param_1 + 0xc) << 8;
        *(byte **)(param_1 + 4) = *(byte **)(param_1 + 4) + 1;
        *(uint *)(param_1 + 8) = uVar6 - 1;
      }
      *(uint *)(param_1 + 0x10) = uVar3 * 8;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) << (uVar3 * -8 + 0x20 & 0xff);
    }
    uVar5 = *(uint *)(param_1 + 0x10);
    uVar3 = uVar2;
    if (uVar5 <= uVar2) {
      uVar3 = uVar5;
    }
    param_2 = uVar2 - uVar3;
    uVar2 = (int)uVar7 << (uVar3 & 0xff) | *(uint *)(param_1 + 0xc) >> (0x20 - uVar3 & 0xff);
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) << (uVar3 & 0xff);
    *(uint *)(param_1 + 0x10) = uVar5 - uVar3;
LAB_00012f28:
    uVar7 = CONCAT44(param_2,uVar2);
    if (param_2 == 0) {
      return CONCAT44(pcVar8,uVar2);
    }
  } while( true );
  pcVar1 = "!(impl->mSize > 0u)";
  param_1 = "onFillReservoir";
  pcVar8 = (char *)0x1b;
  pcVar4 = "impl->mSize > 0u";
  goto LAB_00012e9e;
}



undefined8 CdxBitReaderSkipBits(char *param_1,undefined *param_2,char *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  
  uVar2 = CONCAT44(param_2,param_1);
  if (param_1 != (char *)0x0) goto LAB_00012f9c;
  param_1 = (char *)0x4a;
  pcVar1 = "<%s:%d>CDX_CHECK(%s) failed.";
  param_2 = &DAT_000178ae;
  __android_log_assert
            ("!(br)","awplayer","<%s:%d>CDX_CHECK(%s) failed.","CdxBitReaderSkipBits",0x4a,
             &DAT_000178ae,param_3);
  param_3 = pcVar1;
  do {
    uVar2 = CdxBitReaderGetBits(param_1,0x20,param_3);
    param_2 = param_2 + -0x20;
LAB_00012f9c:
  } while ((undefined *)0x20 < param_2);
  if (param_2 != (undefined *)0x0) {
    uVar2 = CdxBitReaderGetBits(param_1,(uint)param_2,param_3);
    return uVar2;
  }
  return uVar2;
}



void CdxBitReaderDestroy(void *param_1)

{
  if (param_1 == (void *)0x0) {
    param_1 = (void *)__android_log_assert
                                ("!(br)","awplayer","<%s:%d>CDX_CHECK(%s) failed.",
                                 "CdxBitReaderDestroy",0x10,&DAT_000178ae);
  }
  free(param_1);
  return;
}



void CdxBitReaderCreate(undefined4 *param_1,undefined *param_2,undefined4 param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)malloc(0x14);
  if (ppuVar1 == (undefined **)0x0) {
    param_2 = (undefined *)0x89;
    param_1 = &DAT_00017906;
    ppuVar1 = (undefined **)
              __android_log_assert
                        ("!(impl)","awplayer","<%s:%d>CDX_CHECK(%s) failed.","CdxBitReaderCreate",
                         0x89,&DAT_00017906,param_3);
  }
  ppuVar1[1] = (undefined *)param_1;
  ppuVar1[2] = param_2;
  ppuVar1[3] = (undefined *)0x0;
  ppuVar1[4] = (undefined *)0x0;
  *ppuVar1 = (undefined *)&PTR_CdxBitReaderDestroy_1_0001b004;
  return;
}



undefined4 __CdxBufferGetMeta(int param_1)

{
  if (param_1 == 0) {
    param_1 = __android_log_assert
                        (0x1790b,"awplayer","<%s:%d>CDX_CHECK(%s) failed.","__CdxBufferGetMeta",199,
                         &DAT_00017912);
  }
  return *(undefined4 *)(param_1 + 0xc);
}



void __CdxBufferSeekRange(int param_1,int param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  if (param_1 == 0) {
    pcVar1 = (char *)0x1790b;
    uVar5 = 0x85;
    pcVar4 = (char *)&DAT_00017912;
  }
  else {
    iVar3 = param_2 + *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = iVar3;
    iVar2 = (param_3 - param_2) + *(int *)(param_1 + 0x1c);
    *(int *)(param_1 + 0x1c) = iVar2;
    if ((uint)(iVar2 + iVar3) <= *(uint *)(param_1 + 0x14)) {
      return;
    }
    pcVar1 = "!(impl->mRangeOffset + impl->mRangeLen <= impl->mCapacity)";
    uVar5 = 0x8a;
    pcVar4 = "impl->mRangeOffset + impl->mRangeLen <= impl->mCapacity";
  }
  __android_log_assert
            (pcVar1,"awplayer","<%s:%d>CDX_CHECK(%s) failed.","__CdxBufferSeekRange",uVar5,pcVar4);
  return;
}



void __CdxBufferSetRange(int param_1,int param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  uVar4 = CONCAT44(param_2,param_1);
  if (param_1 == 0) {
    pcVar1 = (char *)0x1790b;
    uVar5 = 0x7a;
    pcVar2 = "__CdxBufferSetRange";
    pcVar3 = (char *)&DAT_00017912;
  }
  else {
    if (param_3 + param_2 <= *(char **)(param_1 + 0x14)) goto LAB_00013310;
    pcVar1 = "!(offset + len <= impl->mCapacity)";
    uVar5 = 0x33;
    pcVar2 = "onSetRange";
    pcVar3 = "offset + len <= impl->mCapacity";
  }
  param_3 = "<%s:%d>CDX_CHECK(%s) failed.";
  uVar4 = __android_log_assert(pcVar1,"awplayer","<%s:%d>CDX_CHECK(%s) failed.",pcVar2,uVar5,pcVar3)
  ;
LAB_00013310:
  *(int *)((int)uVar4 + 0x18) = (int)((ulonglong)uVar4 >> 0x20);
  *(char **)((int)uVar4 + 0x1c) = param_3;
  return;
}



undefined8
__CdxBufferCreate(void **param_1,undefined *param_2,void *param_3,undefined *param_4,char *param_5,
                 char *param_6)

{
  bool bVar1;
  char *pcVar2;
  undefined **__s;
  void **ppvVar3;
  undefined *puVar4;
  void *pvVar5;
  uint uVar6;
  void **ppvVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  void **local_28;
  
  ppvVar7 = param_1;
  if (param_2 == (undefined *)0x0) {
    pcVar2 = "!(capacity != 0)";
    local_28 = (void **)0xdf;
  }
  else {
    local_28 = param_1;
    if (param_4 <= param_2) goto LAB_0001356a;
    ppvVar7 = (void **)0xe0;
    pcVar2 = "!(capacity >= len)";
    local_28 = (void **)0xe0;
  }
  while( true ) {
    param_6 = "__CdxBufferCreate";
    param_5 = "<%s:%d>CDX_CHECK(%s) failed.";
    param_1 = (void **)__android_log_assert(pcVar2,"awplayer");
LAB_0001356a:
    if (ppvVar7 == (void **)0x0) {
      ppvVar3 = __AwPoolCreate(param_1,param_5,param_6);
      __s = (undefined **)
            AwPalloc((void **)0x0,(void *)0x24,s__home_zhangjingzhou_sdk_v3_cdr_i_00017916,
                     (void *)0xf0);
      memset(__s,0,0x24);
      __s[1] = (undefined *)ppvVar3;
      __s[2] = (undefined *)0x1;
    }
    else {
      __s = (undefined **)AwPalloc(param_1,(void *)0x24,param_5,param_6);
      memset(__s,0,0x24);
      __s[1] = (undefined *)ppvVar7;
    }
    uVar9 = __CdxMetaCreate((void **)__s[1],s__home_zhangjingzhou_sdk_v3_cdr_i_00017916,(void *)0xf9
                           );
    puVar4 = (undefined *)0x400;
    __s[3] = (undefined *)uVar9;
    while (puVar4 < param_2) {
      puVar4 = (undefined *)((int)puVar4 << 2);
    }
    __s[5] = puVar4;
    ppvVar3 = AwPalloc((void **)__s[1],puVar4,s__home_zhangjingzhou_sdk_v3_cdr_i_00017916,
                       (void *)0xfc);
    __s[4] = (undefined *)ppvVar3;
    if (ppvVar3 != (void **)0x0) break;
    param_4 = (undefined *)0xfd;
    pcVar2 = "!(impl->mData)";
    local_28 = (void **)0xfd;
  }
  __s[6] = (undefined *)0x0;
  __s[7] = (undefined *)0x0;
  pvVar5 = param_3;
  if (param_3 != (void *)0x0) {
    pvVar5 = (void *)0x1;
  }
  if (param_4 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (uint)pvVar5 & 1;
  }
  if (uVar6 != 0) {
    memcpy(ppvVar3,param_3,(size_t)param_4);
    __s[7] = param_4;
  }
  ppuVar8 = __s + 8;
  *__s = (undefined *)&PTR_LAB_000134c4_1_0001b01c;
  do {
    ExclusiveAccess(ppuVar8);
    bVar1 = (bool)hasExclusiveAccess(ppuVar8);
  } while (!bVar1);
  *ppuVar8 = (undefined *)0x1;
  DataMemoryBarrier(0x1f);
  return CONCAT44(local_28,__s);
}



void CdxBufferDestroy(undefined4 *param_1,undefined4 param_2,char *param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 unaff_r4;
  void *pvVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    param_3 = "<%s:%d>CDX_CHECK(%s) failed.";
    param_1 = (undefined4 *)
              __android_log_assert
                        (0x1790b,"awplayer","<%s:%d>CDX_CHECK(%s) failed.","CdxBufferDestroy",0x10f,
                         &DAT_00017912);
  }
  puVar4 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    puVar4 = &DAT_00017912;
    param_1 = (undefined4 *)
              __android_log_assert
                        (0x1790b,"awplayer","<%s:%d>CDX_CHECK(%s) failed.","__CdxBufferDecRef",0x47,
                         &DAT_00017912,param_3,unaff_r4);
  }
  piVar3 = param_1 + 8;
  DataMemoryBarrier(0x1f);
  do {
    ExclusiveAccess(piVar3);
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  DataMemoryBarrier(0x1f);
  if (iVar2 + -1 != 0) {
    return;
  }
  CdxMetaDestroy((char *)puVar4[3]);
  AwPfree(puVar4[1],puVar4[4]);
  if (puVar4[2] == 0) {
    AwPfree(puVar4[1],(int)puVar4);
    return;
  }
  pvVar5 = (void *)puVar4[1];
  AwPfree((int)pvVar5,(int)puVar4);
  AwPoolDestroy(pvVar5);
  return;
}



void CdxDumpThreadStack(int param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined auStack2128 [640];
  undefined4 local_5d0;
  int iStack1484;
  undefined auStack1480 [392];
  int local_440;
  int local_43c;
  int *local_438;
  undefined *local_434;
  undefined auStack1068 [1024];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  lVar1 = syscall(0xe0);
  local_438 = &__stack_chk_guard;
  if (param_1 == -1) {
    param_1 = lVar1;
  }
  uVar2 = unwind_backtrace_thread(param_1,auStack1480,0,0x20);
  if ((int)uVar2 < 1) {
    local_5d0 = 0x33;
    iStack1484 = param_1;
    __android_log_print(3,"CdxDebug","<%s:%u>: (native backtrace unavailable), tid(%lu)",
                        "CdxDumpThreadStack");
  }
  else {
    if (param_1 == lVar1) {
      uVar3 = 2;
    }
    else {
      uVar3 = 0;
    }
    local_434 = (undefined *)&local_5d0;
    get_backtrace_symbols(auStack1480,uVar2,auStack2128);
    local_43c = 0x4306;
    iVar4 = 0xc;
    while (uVar3 < uVar2) {
      local_440 = iVar4;
      format_backtrace_line
                (uVar3,auStack1480 + iVar4 * uVar3,auStack2128 + uVar3 * 0x14,auStack1068,0x400);
      uVar3 = uVar3 + 1;
      __android_log_print(3,"CdxDebug",local_43c + 0x13798,"CdxDumpThreadStack",0x2d,auStack1068);
      iVar4 = local_440;
    }
    free_backtrace_symbols(auStack2128,uVar2);
  }
  if (local_2c == *local_438) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void CdxCallStack(void)

{
  dirent **ppdVar1;
  __pid_t _Var2;
  int iVar3;
  long lVar4;
  int iVar5;
  dirent **local_b0;
  char acStack172 [128];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  memset(acStack172,0,0x80);
  _Var2 = getpid();
  __sprintf_chk(acStack172,0,0x80,"/proc/%d/task",_Var2);
  iVar3 = scandir(acStack172,&local_b0,(__selector *)&LAB_000136c8_1,(__cmp *)0x0);
  if (iVar3 < 1) {
    __android_log_print(6,"CdxDebug",&DAT_00017aed,"CdxCallStack",0x4e);
  }
  else {
    iVar5 = 0;
    do {
      ppdVar1 = local_b0 + iVar5;
      iVar5 = iVar5 + 1;
      lVar4 = atol((*ppdVar1)->d_name + 8);
      __android_log_print(3,"CdxDebug","<%s:%u>: ------------tid(%lu)------------","CdxCallStack",
                          0x55,lVar4);
      CdxDumpThreadStack(lVar4);
      __android_log_print(3,"CdxDebug","<%s:%u>: ------------tid(%lu) end------------\n\n",
                          "CdxCallStack",0x57,lVar4);
    } while (iVar5 != iVar3);
    free(local_b0);
  }
  if (local_2c != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void __CdxListAdd(int *param_1,int **param_2,int param_3)

{
  *(int **)(param_3 + 4) = param_1;
  *param_1 = param_3;
  param_1[1] = (int)param_2;
  *param_2 = param_1;
  return;
}



void CdxListAddAfter(int *param_1,int **param_2)

{
  int *piVar1;
  
  piVar1 = *param_2;
  piVar1[1] = (int)param_1;
  *param_1 = (int)piVar1;
  param_1[1] = (int)param_2;
  *param_2 = param_1;
  return;
}



void CdxListAddBefore(int *param_1,int param_2)

{
  int **ppiVar1;
  
  ppiVar1 = *(int ***)(param_2 + 4);
  *(int **)(param_2 + 4) = param_1;
  *param_1 = param_2;
  param_1[1] = (int)ppiVar1;
  *ppiVar1 = param_1;
  return;
}



void __CdxListDel(int *param_1,int param_2)

{
  *(int **)(param_2 + 4) = param_1;
  *param_1 = param_2;
  return;
}



void __CdxListDelEntry(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = (int *)param_1[1];
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  return;
}



void CdxListDel(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = (int *)param_1[1];
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  *param_1 = 0x100100;
  param_1[1] = 0x200200;
  return;
}



void CdxListReplace(int *param_1,int *param_2)

{
  int iVar1;
  int **ppiVar2;
  
  iVar1 = *param_1;
  *param_2 = iVar1;
  *(int **)(iVar1 + 4) = param_2;
  ppiVar2 = (int **)param_1[1];
  param_2[1] = (int)ppiVar2;
  *ppiVar2 = param_2;
  return;
}



void CdxListReplaceInit(int *param_1,int *param_2)

{
  CdxListReplace(param_1,param_2);
  param_1[1] = (int)param_1;
  *param_1 = (int)param_1;
  return;
}



void CdxListDelInit(int *param_1)

{
  __CdxListDelEntry(param_1);
  param_1[1] = (int)param_1;
  *param_1 = (int)param_1;
  return;
}



void CdxListMove(int **param_1,int **param_2)

{
  int *piVar1;
  
  __CdxListDelEntry((int *)param_1);
  piVar1 = *param_2;
  piVar1[1] = (int)param_1;
  *param_1 = piVar1;
  param_1[1] = (int *)param_2;
  *param_2 = (int *)param_1;
  return;
}



void CdxListMoveTail(int *param_1,int param_2)

{
  int **ppiVar1;
  
  __CdxListDelEntry(param_1);
  ppiVar1 = *(int ***)(param_2 + 4);
  *(int **)(param_2 + 4) = param_1;
  *param_1 = param_2;
  param_1[1] = (int)ppiVar1;
  *ppiVar1 = param_1;
  return;
}



bool CdxListIsLast(int *param_1,int param_2)

{
  return *param_1 == param_2;
}



bool CdxListEmpty(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == param_1) {
    return (int *)piVar1[1] == piVar1;
  }
  return false;
}



void CdxListRotateLeft(int **param_1)

{
  bool bVar1;
  
  bVar1 = CdxListEmpty((int *)param_1);
  if (bVar1 == false) {
    CdxListMoveTail(*param_1,(int)param_1);
    return;
  }
  return;
}



bool CdxListIsSingular(int *param_1)

{
  bool bVar1;
  
  bVar1 = CdxListEmpty(param_1);
  if (bVar1 == false) {
    return *param_1 == param_1[1];
  }
  return false;
}



void __CdxHandlerMsgRecv(int param_1)

{
  (**(code **)**(code ***)(param_1 + 8))();
  return;
}



void FUN_00013d14(undefined **param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  if (param_1 == (undefined **)0x0) {
    pcVar1 = "!(deliver)";
    uVar3 = 0x1e;
    pcVar2 = "deliver";
  }
  else {
    pcVar2 = *param_1;
    if ((code **)pcVar2 != (code **)0x0) goto LAB_00013d54;
    pcVar1 = "!(deliver->ops)";
    uVar3 = 0x1f;
    pcVar2 = "deliver->ops";
  }
  while( true ) {
    __android_log_assert
              (pcVar1,"awplayer","<%s:%d>CDX_CHECK(%s) failed.","CdxDeliverPostUs",uVar3,pcVar2);
LAB_00013d54:
    if (*(code **)pcVar2 != (code *)0x0) break;
    pcVar1 = "!(deliver->ops->postUS)";
    uVar3 = 0x20;
    pcVar2 = "deliver->ops->postUS";
  }
  (**(code **)pcVar2)();
  return;
}



void __CdxHandlerPostUS(int param_1)

{
  FUN_00013d14(*(undefined ***)(param_1 + 4));
  return;
}



void FUN_00013e30(undefined4 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    pcVar1 = "!(queue)";
    uVar4 = 0x2a;
    pcVar3 = "queue";
  }
  else {
    pcVar2 = (char *)*param_1;
    if (pcVar2 != (char *)0x0) goto LAB_00013e70;
    pcVar1 = "!(queue->ops)";
    uVar4 = 0x2b;
    pcVar3 = "queue->ops";
  }
  while( true ) {
    pcVar2 = "CdxQueueEmpty";
    __android_log_assert
              (pcVar1,"awplayer","<%s:%d>CDX_CHECK(%s) failed.","CdxQueueEmpty",uVar4,pcVar3);
LAB_00013e70:
    if (*(code **)(pcVar2 + 8) != (code *)0x0) break;
    pcVar1 = "!(queue->ops->empty)";
    uVar4 = 0x2c;
    pcVar3 = "queue->ops->empty";
  }
  (**(code **)(pcVar2 + 8))();
  return;
}



void FUN_00013ed0(undefined **param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  if (param_1 == (undefined **)0x0) {
    pcVar1 = "!(queue)";
    uVar4 = 0x19;
    pcVar3 = "queue";
  }
  else {
    pcVar2 = *param_1;
    if ((code **)pcVar2 != (code **)0x0) goto LAB_00013f10;
    pcVar1 = "!(queue->ops)";
    uVar4 = 0x1a;
    pcVar3 = "queue->ops";
  }
  while( true ) {
    pcVar2 = "CdxQueuePop";
    __android_log_assert
              (pcVar1,"awplayer","<%s:%d>CDX_CHECK(%s) failed.","CdxQueuePop",uVar4,pcVar3);
LAB_00013f10:
    if (*(code **)pcVar2 != (code *)0x0) break;
    pcVar1 = "!(queue->ops->pop)";
    uVar4 = 0x1b;
    pcVar3 = "queue->ops->pop";
  }
  (**(code **)pcVar2)();
  return;
}



void DeliverTimerInit(void)

{
  void **ppvVar1;
  char *pcVar2;
  void **__newthread;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  gDeliverTimerHdr =
       AwPalloc((void **)0x0,(void *)0x14,
                                
                "/home/zhangjingzhou/sdk/v3-cdr-ips2.0-0104/CamCedarX/LIBRARY/DEMUX/BASE/CdxMessage.c"
                ,(void *)0x3d);
  if (gDeliverTimerHdr == (void **)0x0) {
    pcVar2 = "!(gDeliverTimerHdr)";
    uVar5 = 0x3e;
    pcVar4 = "gDeliverTimerHdr";
  }
  else {
    memset(gDeliverTimerHdr,0,0x14);
    pthread_mutex_init((pthread_mutex_t *)(gDeliverTimerHdr + 2),(pthread_mutexattr_t *)0x0);
    ppvVar1 = gDeliverTimerHdr;
    gDeliverTimerHdr[1] = gDeliverTimerHdr;
    *ppvVar1 = ppvVar1;
    ppvVar1 = gDeliverTimerHdr;
    __newthread = gDeliverTimerHdr + 3;
    gDeliverTimerHdr[4] = (void *)0x0;
    iVar3 = pthread_create((pthread_t *)__newthread,(pthread_attr_t *)0x0,
                           (__start_routine *)&LAB_00013dbc_1,ppvVar1);
    if (iVar3 == 0) {
      return;
    }
    pcVar2 = "!(ret == 0)";
    uVar5 = 0x49;
    pcVar4 = "ret == 0";
  }
  __android_log_assert
            (pcVar2,"awplayer","<%s:%d>CDX_CHECK(%s) failed.","DeliverTimerInit",uVar5,pcVar4);
  return;
}



longlong FUN_000140f0(void *param_1,void *param_2,uint param_3,uint param_4)

{
  char *pcVar1;
  void **ppvVar2;
  void *pvVar3;
  char *pcVar4;
  char *pcVar5;
  pthread_mutex_t *__mutex;
  void *pvVar6;
  uint uVar7;
  
  pvVar6 = param_1;
  if ((param_3 | param_4) == 0) {
    if (*(char ***)((int)param_1 + 4) == (char **)0x0) {
      pcVar1 = "!(queue)";
      pvVar6 = (void *)0x21;
      pcVar4 = "CdxQueuePush";
      pcVar5 = "queue";
    }
    else {
      pcVar4 = **(char ***)((int)param_1 + 4);
      if (pcVar4 != (char *)0x0) goto LAB_00014142;
      param_1 = (void *)0x22;
      pcVar1 = "!(queue->ops)";
      pcVar4 = "CdxQueuePush";
      pvVar6 = (void *)0x22;
      pcVar5 = "queue->ops";
    }
  }
  else {
    pvVar3 = param_2;
    uVar7 = param_3;
    if (gDeliverTimerHdr == 0) {
      DeliverTimerInit();
    }
    ppvVar2 = AwPalloc((void **)0x0,(void *)0x1c,
                                              
                       "/home/zhangjingzhou/sdk/v3-cdr-ips2.0-0104/CamCedarX/LIBRARY/DEMUX/BASE/CdxMessage.c"
                       ,(void *)0x89);
    if (ppvVar2 != (void **)0x0) {
      *ppvVar2 = param_2;
      pvVar3 = (void *)__aeabi_uldivmod(param_3,param_4,&DAT_000186a0,0,pvVar6,pvVar3,uVar7);
      ppvVar2[1] = param_1;
      ppvVar2[6] = pvVar3;
      CdxListAddAfter((int *)(ppvVar2 + 2),(int **)((int)param_1 + 8));
      pthread_mutex_lock((pthread_mutex_t *)(gDeliverTimerHdr + 8));
      CdxListAddBefore((int *)(ppvVar2 + 4),gDeliverTimerHdr);
      __mutex = (pthread_mutex_t *)(gDeliverTimerHdr + 8);
      goto LAB_000141e6;
    }
    pcVar1 = "!(event)";
    pcVar4 = "__CdxDeliverPostUS";
    pvVar6 = (void *)0x8a;
    pcVar5 = "event";
  }
  while( true ) {
    __android_log_assert(pcVar1,"awplayer","<%s:%d>CDX_CHECK(%s) failed.",pcVar4,pvVar6,pcVar5);
LAB_00014142:
    if (*(code **)(pcVar4 + 4) != (code *)0x0) break;
    pcVar1 = "!(queue->ops->push)";
    pcVar4 = "CdxQueuePush";
    pvVar6 = (void *)0x23;
    pcVar5 = "queue->ops->push";
  }
  __mutex = (pthread_mutex_t *)((int)param_1 + 0x14);
  (**(code **)(pcVar4 + 4))();
  pthread_mutex_lock(__mutex);
  pthread_cond_signal((pthread_cond_t *)((int)param_1 + 0x18));
LAB_000141e6:
  pthread_mutex_unlock(__mutex);
  return (longlong)(ZEXT48(pvVar6) << 0x20);
}



undefined8 CdxDeliverCreate(void **param_1,undefined4 param_2,undefined4 param_3)

{
  void **ppvVar1;
  undefined **__s;
  char *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  
  ppvVar1 = __AwPoolCreate(param_1,
                           "/home/zhangjingzhou/sdk/v3-cdr-ips2.0-0104/CamCedarX/LIBRARY/DEMUX/BASE/CdxMessage.c"
                           ,(void *)0xd7);
  __s = (undefined **)
        AwPalloc(ppvVar1,(void *)0x24,
                                  
                 "/home/zhangjingzhou/sdk/v3-cdr-ips2.0-0104/CamCedarX/LIBRARY/DEMUX/BASE/CdxMessage.c"
                 ,(void *)0xd8);
  if (__s == (undefined **)0x0) {
    pcVar2 = "!(impl)";
    uVar5 = 0xd9;
    pcVar6 = (char *)&DAT_00017906;
  }
  else {
    memset(__s,0,0x24);
    __s[8] = (undefined *)ppvVar1;
    *__s = (undefined *)&deliverOps;
    pthread_mutex_init((pthread_mutex_t *)(__s + 5),(pthread_mutexattr_t *)0x0);
    pthread_cond_init((pthread_cond_t *)(__s + 6),(pthread_condattr_t *)0x0);
    __s[3] = (undefined *)(__s + 2);
    __s[2] = (undefined *)(__s + 2);
    uVar4 = CdxQueueCreate((void **)__s[8]);
    __s[7] = (undefined *)0x0;
    __s[1] = (undefined *)uVar4;
    iVar3 = pthread_create((pthread_t *)(__s + 4),(pthread_attr_t *)0x0,
                           (__start_routine *)&LAB_000145b8_1,__s);
    uVar5 = 0xe8;
    __android_log_print(3,"awplayer","<%s:%u>: deliver process, pid(%ld)","CdxDeliverCreate",0xe8,
                        __s[4]);
    if (iVar3 == 0) goto LAB_00014308;
    pcVar2 = "!(ret == 0)";
    __s = (undefined **)0xe9;
    uVar5 = 0xe9;
    pcVar6 = "ret == 0";
  }
  __android_log_assert
            (pcVar2,"awplayer","<%s:%d>CDX_CHECK(%s) failed.","CdxDeliverCreate",uVar5,pcVar6,
             param_3);
LAB_00014308:
  return CONCAT44(uVar5,__s);
}



undefined8
__CdxMessageCreate(char *param_1,void *param_2,void *param_3,undefined *param_4,void *param_5)

{
  bool bVar1;
  void **__s;
  char *pcVar2;
  void **ppvVar3;
  undefined8 uVar4;
  char *pcVar5;
  void *pvVar6;
  
  pcVar5 = param_1;
  pvVar6 = param_3;
  __s = AwPalloc((void **)param_1,(void *)0x18,param_4,param_5);
  if (__s == (void **)0x0) {
    pcVar2 = "!(impl)";
    pcVar5 = (char *)0x1a6;
    param_1 = (char *)&DAT_00017906;
  }
  else {
    memset(__s,0,0x18);
    if (param_3 != (void *)0x0) goto LAB_000143a0;
    param_3 = (void *)0x1a8;
    pcVar2 = "!(handler)";
    pcVar5 = (char *)0x1a8;
    param_1 = "handler";
  }
  __android_log_assert
            (pcVar2,"awplayer","<%s:%d>CDX_CHECK(%s) failed.","__CdxMessageCreate",pcVar5,param_1,
             pvVar6);
LAB_000143a0:
  __s[2] = param_1;
  uVar4 = __CdxMetaCreate((void **)param_1,
                                                    
                          "/home/zhangjingzhou/sdk/v3-cdr-ips2.0-0104/CamCedarX/LIBRARY/DEMUX/BASE/CdxMessage.c"
                          ,(void *)0x1aa);
  ppvVar3 = __s + 5;
  __s[4] = param_2;
  __s[3] = param_3;
  __s[1] = (void *)uVar4;
  do {
    ExclusiveAccess(ppvVar3);
    bVar1 = (bool)hasExclusiveAccess(ppvVar3);
  } while (!bVar1);
  *ppvVar3 = (void *)0x1;
  DataMemoryBarrier(0x1f);
  *__s = messageOps;
  return CONCAT44(pcVar5,__s);
}



void CdxMessageDestroy(undefined *param_1)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined *puVar5;
  undefined4 unaff_r4;
  char *pcVar6;
  undefined4 in_lr;
  undefined4 uVar7;
  
  if (param_1 == (undefined *)0x0) {
    pcVar2 = "!(msg)";
    uVar7 = 0x1b6;
    pcVar6 = "msg";
  }
  else {
    piVar4 = (int *)(param_1 + 0x14);
    DataMemoryBarrier(0x1f);
    do {
      ExclusiveAccess(piVar4);
      iVar3 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar3;
    DataMemoryBarrier(0x1f);
    if (iVar3 == 1) goto LAB_00013f70;
    pcVar2 = "!(CdxAtomicRead(&impl->ref) == 1)";
    uVar7 = 0x1b8;
    pcVar6 = "CdxAtomicRead(&impl->ref) == 1";
  }
  param_1 = (undefined *)
            __android_log_assert
                      (pcVar2,"awplayer","<%s:%d>CDX_CHECK(%s) failed.","CdxMessageDestroy",uVar7,
                       pcVar6);
LAB_00013f70:
  puVar5 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar5 = &DAT_00017b6e;
    param_1 = (undefined *)
              __android_log_assert
                        ("!(msg)","awplayer","<%s:%d>CDX_CHECK(%s) failed.","__CdxMessageDecRef",
                         0x14a,&DAT_00017b6e,unaff_r4,in_lr);
  }
  piVar4 = (int *)(param_1 + 0x14);
  DataMemoryBarrier(0x1f);
  do {
    ExclusiveAccess(piVar4);
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar3 + -1;
  DataMemoryBarrier(0x1f);
  if (iVar3 + -1 != 0) {
    return;
  }
  CdxMetaDestroy(*(char **)(puVar5 + 4));
  AwPfree(*(int *)(puVar5 + 8),(int)puVar5);
  return;
}



void CdxDeliverClearMsg(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)*(int *)param_1[2];
  piVar2 = (int *)param_1[2];
  while (piVar1 = piVar5, piVar5 = piVar2 + -2, piVar5 != param_1) {
    CdxListDel(piVar2 + 2);
    CdxListDel(piVar2);
    CdxMessageDestroy((undefined *)*piVar5);
    AwPfree(0,(int)piVar5);
    piVar5 = (int *)*piVar1;
    piVar2 = piVar1;
  }
  while (iVar4 = FUN_00013e30((undefined4 *)param_1[1]), iVar4 == 0) {
    puVar3 = (undefined *)FUN_00013ed0((undefined **)param_1[1]);
    CdxMessageDestroy(puVar3);
  }
  return;
}



void CdxDeliverDestroy(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  pthread_cond_t *__cond;
  void *pvVar2;
  
  CdxDeliverClearMsg(param_1);
  __mutex = (pthread_mutex_t *)(param_1 + 5);
  __cond = (pthread_cond_t *)(param_1 + 6);
  param_1[7] = 1;
  pvVar2 = (void *)param_1[8];
  pthread_mutex_lock(__mutex);
  pthread_cond_broadcast(__cond);
  pthread_mutex_unlock(__mutex);
  __android_log_print(3,"awplayer","<%s:%u>: wait thread, pid(%ld)","CdxDeliverDestroy",0x114,
                      param_1[4],param_3);
  pthread_join(param_1[4],(void **)0x0);
  CdxDeliverClearMsg(param_1);
  iVar1 = FUN_00013e30((undefined4 *)param_1[1]);
  if (iVar1 == 0) {
    __mutex = (pthread_mutex_t *)0x118;
    __android_log_assert
              ("!(CdxQueueEmpty(impl->eventQueue))","awplayer","<%s:%d>CDX_CHECK(%s) failed.",
               "CdxDeliverDestroy",0x118,"CdxQueueEmpty(impl->eventQueue)");
    param_1 = (int *)"CdxQueueEmpty(impl->eventQueue)";
  }
  CdxDeliverClearMsg(param_1);
  CdxQueueDestroy((char *)param_1[1]);
  pthread_mutex_destroy(__mutex);
  pthread_cond_destroy(__cond);
  AwPfree(param_1[8],(int)param_1);
  AwPoolDestroy(pvVar2);
  return;
}



void DeliverTimerExit(void)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  
  ppiVar2 = gDeliverTimerHdr;
  gDeliverTimerHdr[4] = (int *)0x1;
  pthread_join((pthread_t)ppiVar2[3],(void **)0x0);
  ppiVar3 = (int **)**gDeliverTimerHdr;
  ppiVar2 = (int **)*gDeliverTimerHdr;
  while (ppiVar1 = ppiVar3, ppiVar2 != gDeliverTimerHdr) {
    CdxListDel((int *)ppiVar2);
    CdxMessageDestroy((undefined *)ppiVar2[-4]);
    AwPfree(0,(int)(ppiVar2 + -4));
    ppiVar3 = (int **)*ppiVar1;
    ppiVar2 = ppiVar1;
  }
  pthread_mutex_destroy((pthread_mutex_t *)(ppiVar2 + 2));
  AwPfree(0,(int)gDeliverTimerHdr);
  gDeliverTimerHdr = (int **)0x0;
  return;
}



void CdxDeliverReset(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (globalDeliver == (int *)0x0) {
    __android_log_print(5,"awplayer","<%s:%u>: global deliver not initinal...","CdxDeliverReset",300
                        ,param_2);
  }
  else {
    CdxDeliverDestroy(globalDeliver,param_2,param_3);
    globalDeliver = (int *)0x0;
  }
  DeliverTimerExit();
  return;
}



void ** CdxHandlerCreate(void **param_1,void *param_2,void *param_3)

{
  void **ppvVar1;
  undefined4 extraout_r1;
  char *pcVar2;
  undefined8 uVar3;
  
  pcVar2 = "/home/zhangjingzhou/sdk/v3-cdr-ips2.0-0104/CamCedarX/LIBRARY/DEMUX/BASE/CdxMessage.c";
  ppvVar1 = AwPalloc(param_1,(void *)0x10,
                                          
                     "/home/zhangjingzhou/sdk/v3-cdr-ips2.0-0104/CamCedarX/LIBRARY/DEMUX/BASE/CdxMessage.c"
                     ,(void *)0x1e1);
  ppvVar1[3] = param_1;
  *ppvVar1 = &handlerOps;
  ppvVar1[2] = param_2;
  if (param_3 == (void *)0x0) {
    if (globalDeliver == (void *)0x0) {
      uVar3 = CdxDeliverCreate((void **)0x0,extraout_r1,pcVar2);
      globalDeliver = (void *)uVar3;
    }
    ppvVar1[1] = globalDeliver;
  }
  else {
    ppvVar1[1] = param_3;
  }
  return ppvVar1;
}



void CdxHandlerDestroy(int param_1)

{
  AwPfree(*(int *)(param_1 + 0xc),param_1);
  return;
}



undefined8 __CdxMetaCreate(void **param_1,undefined *param_2,void *param_3)

{
  bool bVar1;
  void **ppvVar2;
  void **ppvVar3;
  void **ppvVar4;
  
  ppvVar4 = param_1;
  ppvVar2 = AwPalloc(param_1,(void *)0x34,param_2,param_3);
  ppvVar3 = ppvVar2;
  if (ppvVar2 == (void **)0x0) {
    ppvVar3 = (void **)&DAT_0000020d;
    ppvVar4 = (void **)&DAT_0000020d;
    param_1 = (void **)&DAT_00017906;
    ppvVar2 = (void **)__android_log_assert
                                 ("!(impl)","awplayer","<%s:%d>CDX_CHECK(%s) failed.",
                                  "__CdxMetaCreate",0x20d,&DAT_00017906,param_3);
  }
  memset(ppvVar2,0,0x34);
  ppvVar3[3] = ppvVar3 + 2;
  ppvVar2 = ppvVar3 + 0xc;
  ppvVar3[2] = ppvVar3 + 2;
  ppvVar3[5] = ppvVar3 + 4;
  ppvVar3[4] = ppvVar3 + 4;
  ppvVar3[1] = param_1;
  ppvVar3[7] = ppvVar3 + 6;
  ppvVar3[6] = ppvVar3 + 6;
  ppvVar3[9] = ppvVar3 + 8;
  ppvVar3[8] = ppvVar3 + 8;
  ppvVar3[0xb] = ppvVar3 + 10;
  ppvVar3[10] = ppvVar3 + 10;
  do {
    ExclusiveAccess(ppvVar2);
    bVar1 = (bool)hasExclusiveAccess(ppvVar2);
  } while (!bVar1);
  *ppvVar2 = (void *)0x1;
  DataMemoryBarrier(0x1f);
  *ppvVar3 = gMetaOps;
  return CONCAT44(ppvVar4,ppvVar3);
}



int * __CdxMetaDup(undefined4 *param_1,int *param_2)

{
  char *pcVar1;
  char *pcVar2;
  code *pcVar3;
  char *pcVar4;
  undefined4 *unaff_r5;
  undefined4 *puVar5;
  undefined4 *unaff_r7;
  undefined8 uVar6;
  undefined4 *puVar7;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar7 = param_1;
    uVar6 = __CdxMetaCreate((void **)param_1[1],
                                                        
                            "/home/zhangjingzhou/sdk/v3-cdr-ips2.0-0104/CamCedarX/LIBRARY/DEMUX/BASE/CdxMeta.c"
                            ,(void *)0x1c7);
    pcVar4 = (char *)(int *)uVar6;
    unaff_r7 = param_1 + 2;
    puVar5 = (undefined4 *)*unaff_r7;
    goto LAB_00015476;
  }
  pcVar1 = "!(meta)";
  puVar7 = (undefined4 *)0x1c4;
  pcVar2 = "__CdxMetaDup";
  pcVar4 = (char *)&DAT_00017be2;
LAB_0001542c:
  do {
    param_2 = (int *)pcVar4;
    __android_log_assert(pcVar1,"awplayer","<%s:%d>CDX_CHECK(%s) failed.",pcVar2,puVar7,pcVar4);
    do {
      if (*(int *)pcVar4 == 0) {
        param_1 = (undefined4 *)0x45;
        pcVar1 = "!(meta->ops)";
        pcVar2 = "CdxMetaSetInt32";
        puVar7 = (undefined4 *)0x45;
        pcVar4 = "meta->ops";
        goto LAB_0001542c;
      }
      pcVar3 = *(code **)(*(int *)pcVar4 + 8);
      if (pcVar3 == (code *)0x0) {
        unaff_r7 = (undefined4 *)&DAT_00000046;
        pcVar1 = "!(meta->ops->setInt32)";
        pcVar2 = "CdxMetaSetInt32";
        puVar7 = (undefined4 *)&DAT_00000046;
        pcVar4 = "meta->ops->setInt32";
        goto LAB_0001542c;
      }
      (*pcVar3)(pcVar4,unaff_r5);
      puVar5 = (undefined4 *)unaff_r5[8];
LAB_00015476:
      unaff_r5 = puVar5 + -8;
      if (puVar5 == unaff_r7) {
        puVar5 = (undefined4 *)param_1[4];
        goto LAB_000154ec;
      }
    } while ((int *)pcVar4 != (int *)0x0);
    unaff_r5 = (undefined4 *)0x44;
    pcVar1 = "!(meta)";
    pcVar2 = "CdxMetaSetInt32";
    puVar7 = (undefined4 *)0x44;
    pcVar4 = (char *)&DAT_00017be2;
  } while( true );
LAB_000154ec:
  unaff_r7 = puVar5 + -8;
  if (puVar5 == param_1 + 4) goto code_r0x000154f6;
  if ((int *)pcVar4 == (int *)0x0) {
    pcVar1 = "!(meta)";
    puVar7 = (undefined4 *)0x5e;
    pcVar2 = "CdxMetaSetInt64";
    pcVar4 = (char *)&DAT_00017be2;
    goto LAB_0001542c;
  }
  if (*(int *)pcVar4 == 0) {
    unaff_r5 = (undefined4 *)0x5f;
    pcVar1 = "!(meta->ops)";
    pcVar2 = "CdxMetaSetInt64";
    puVar7 = (undefined4 *)0x5f;
    pcVar4 = "meta->ops";
    goto LAB_0001542c;
  }
  unaff_r5 = *(undefined4 **)(*(int *)pcVar4 + 0x14);
  if (unaff_r5 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)0x60;
    pcVar1 = "!(meta->ops->setInt64)";
    pcVar2 = "CdxMetaSetInt64";
    puVar7 = (undefined4 *)0x60;
    pcVar4 = "meta->ops->setInt64";
    goto LAB_0001542c;
  }
  (*(code *)unaff_r5)(pcVar4,unaff_r7,puVar5[2],puVar5[3],puVar7,param_2);
  puVar5 = (undefined4 *)*puVar5;
  goto LAB_000154ec;
code_r0x000154f6:
  unaff_r7 = param_1 + 6;
  puVar7 = (undefined4 *)*unaff_r7;
  while (unaff_r5 = puVar7 + -8, puVar7 != unaff_r7) {
    if ((int *)pcVar4 == (int *)0x0) {
      unaff_r7 = (undefined4 *)0x70;
      pcVar1 = "!(meta)";
      pcVar2 = "CdxMetaSetString";
      puVar7 = (undefined4 *)0x70;
      pcVar4 = (char *)&DAT_00017be2;
      goto LAB_0001542c;
    }
    if (*(int *)pcVar4 == 0) {
      pcVar1 = "!(meta->ops)";
      puVar7 = (undefined4 *)0x71;
      pcVar2 = "CdxMetaSetString";
      pcVar4 = "meta->ops";
      goto LAB_0001542c;
    }
    pcVar3 = *(code **)(*(int *)pcVar4 + 0x20);
    if (pcVar3 == (code *)0x0) {
      unaff_r5 = (undefined4 *)0x72;
      pcVar1 = "!(meta->ops->setString)";
      pcVar2 = "CdxMetaSetString";
      puVar7 = (undefined4 *)0x72;
      pcVar4 = "meta->ops->setString";
      goto LAB_0001542c;
    }
    (*pcVar3)(pcVar4,unaff_r5,puVar7[2]);
    puVar7 = (undefined4 *)*puVar7;
  }
  puVar7 = (undefined4 *)param_1[8];
  while (unaff_r5 = puVar7 + -8, unaff_r5 != param_1) {
    if ((int *)pcVar4 == (int *)0x0) {
      param_1 = (undefined4 *)0x8f;
      pcVar1 = "!(meta)";
      pcVar2 = "CdxMetaSetData";
      puVar7 = (undefined4 *)0x8f;
      pcVar4 = (char *)&DAT_00017be2;
      goto LAB_0001542c;
    }
    if (*(int *)pcVar4 == 0) {
      unaff_r7 = (undefined4 *)0x90;
      pcVar1 = "!(meta->ops)";
      pcVar2 = "CdxMetaSetData";
      puVar7 = (undefined4 *)0x90;
      pcVar4 = "meta->ops";
      goto LAB_0001542c;
    }
    unaff_r7 = *(undefined4 **)(*(int *)pcVar4 + 0x30);
    if (unaff_r7 == (undefined4 *)0x0) {
      pcVar1 = "!(meta->ops->setData)";
      puVar7 = (undefined4 *)0x91;
      pcVar2 = "CdxMetaSetData";
      pcVar4 = "meta->ops->setData";
      goto LAB_0001542c;
    }
    (*(code *)unaff_r7)(pcVar4,unaff_r5,puVar7[2],puVar7[3]);
    puVar7 = (undefined4 *)*puVar7;
  }
  unaff_r5 = puVar7 + 2;
  puVar7 = (undefined4 *)*unaff_r5;
  while( true ) {
    param_1 = puVar7 + -8;
    if (puVar7 == unaff_r5) {
      return (int *)pcVar4;
    }
    if ((int *)pcVar4 == (int *)0x0) {
      unaff_r5 = (undefined4 *)0xa4;
      pcVar1 = "!(meta)";
      pcVar2 = "CdxMetaSetObject";
      puVar7 = (undefined4 *)0xa4;
      pcVar4 = (char *)&DAT_00017be2;
      goto LAB_0001542c;
    }
    if (*(int *)pcVar4 == 0) {
      param_1 = (undefined4 *)0xa5;
      pcVar1 = "!(meta->ops)";
      pcVar2 = "CdxMetaSetObject";
      puVar7 = (undefined4 *)0xa5;
      pcVar4 = "meta->ops";
      goto LAB_0001542c;
    }
    pcVar3 = *(code **)(*(int *)pcVar4 + 0x3c);
    if (pcVar3 == (code *)0x0) break;
    (*pcVar3)(pcVar4,param_1,puVar7[2]);
    puVar7 = (undefined4 *)*puVar7;
  }
  unaff_r7 = (undefined4 *)0xa6;
  pcVar1 = "!(meta->ops->setObject)";
  pcVar2 = "CdxMetaSetObject";
  puVar7 = (undefined4 *)0xa6;
  pcVar4 = "meta->ops->setObject";
  goto LAB_0001542c;
}



void CdxMetaDestroy(char *param_1)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  char **ppcVar4;
  int *piVar5;
  undefined4 unaff_r4;
  char *pcVar6;
  undefined4 in_lr;
  undefined4 uVar7;
  
  if (param_1 == (char *)0x0) {
    pcVar2 = "!(meta)";
    uVar7 = 0x21f;
    pcVar6 = (char *)&DAT_00017be2;
  }
  else {
    piVar5 = (int *)(param_1 + 0x30);
    DataMemoryBarrier(0x1f);
    do {
      ExclusiveAccess(piVar5);
      iVar3 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar3;
    DataMemoryBarrier(0x1f);
    if (iVar3 == 1) goto LAB_00015204;
    pcVar2 = "!(CdxAtomicRead(&impl->mRef) == 1)";
    uVar7 = 0x221;
    pcVar6 = "CdxAtomicRead(&impl->mRef) == 1";
  }
  param_1 = (char *)__android_log_assert
                              (pcVar2,"awplayer","<%s:%d>CDX_CHECK(%s) failed.","CdxMetaDestroy",
                               uVar7,pcVar6);
LAB_00015204:
  if ((char **)param_1 == (char **)0x0) {
    pcVar6 = "!(meta)";
    uVar7 = 0x78;
    pcVar2 = "__CdxMetaDecRef";
    param_1 = (char *)&DAT_00017be2;
  }
  else {
    ppcVar4 = (char **)((int)param_1 + 0x30);
    DataMemoryBarrier(0x1f);
    do {
      ExclusiveAccess(ppcVar4);
      pcVar2 = *ppcVar4;
      bVar1 = (bool)hasExclusiveAccess(ppcVar4);
    } while (!bVar1);
    *ppcVar4 = pcVar2 + -1;
    DataMemoryBarrier(0x1f);
    if (pcVar2 + -1 != (char *)0x0) {
      return;
    }
    pcVar2 = *(char **)param_1;
    if (pcVar2 != (char *)0x0) goto LAB_0001526a;
    pcVar6 = "!(meta->ops)";
    uVar7 = 0xcc;
    pcVar2 = "CdxMetaClear";
    param_1 = "meta->ops";
  }
  while( true ) {
    __android_log_assert
              (pcVar6,"awplayer","<%s:%d>CDX_CHECK(%s) failed.",pcVar2,uVar7,param_1,unaff_r4,in_lr)
    ;
LAB_0001526a:
    if (*(code **)(pcVar2 + 0x4c) != (code *)0x0) break;
    pcVar6 = "!(meta->ops->clear)";
    uVar7 = 0xcd;
    pcVar2 = "CdxMetaClear";
    param_1 = "meta->ops->clear";
  }
  (**(code **)(pcVar2 + 0x4c))(param_1);
  AwPfree((int)*(char **)((int)param_1 + 4),(int)param_1);
  return;
}



void CdxUrlPrintf(undefined4 *param_1,undefined4 param_2)

{
  __android_log_print(3,"awplayer","<%s:%u>: **********print the url container.","CdxUrlPrintf",0xf,
                      param_2);
  __android_log_print(3,"awplayer","<%s:%u>: **********ur->url=(%s)","CdxUrlPrintf",0x10,*param_1);
  __android_log_print(3,"awplayer","<%s:%u>: **********ur->protocol=%s","CdxUrlPrintf",0x11,
                      param_1[1]);
  __android_log_print(3,"awplayer","<%s:%u>: **********ur->hostname=%s","CdxUrlPrintf",0x12,
                      param_1[2]);
  __android_log_print(3,"awplayer","<%s:%u>: **********ur->file=%s","CdxUrlPrintf",0x13,param_1[3]);
  __android_log_print(3,"awplayer","<%s:%u>: **********ur->prot=%u","CdxUrlPrintf",0x14,param_1[4]);
  __android_log_print(3,"awplayer","<%s:%u>: **********ur->username=%s","CdxUrlPrintf",0x15,
                      param_1[5]);
  __android_log_print(3,"awplayer","<%s:%u>: **********ur->password=%s","CdxUrlPrintf",0x16,
                      param_1[6]);
  return;
}



void CdxUrlUnescapeString(char *param_1,char *param_2)

{
  char cVar1;
  size_t sVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  
  sVar2 = strlen(param_2);
  iVar5 = 0;
  while (iVar5 < (int)sVar2) {
    cVar4 = param_2[iVar5];
    if ((cVar4 == '%') && (iVar5 < (int)(sVar2 - 2))) {
      uVar6 = (int)*(short *)(_toupper_tab_ + ((byte)(param_2 + iVar5)[1] + 1) * 2) - 0x30U & 0xff;
      if (uVar6 < 8) {
        cVar1 = (char)*(undefined2 *)(_toupper_tab_ + ((byte)(param_2 + iVar5)[2] + 1) * 2);
        bVar3 = cVar1 - 0x30;
        if ((byte)(cVar1 + 0xbfU) < 6 || bVar3 < 10) {
          if (bVar3 >= 10) {
            bVar3 = cVar1 - 0x37;
          }
          cVar4 = bVar3 + (char)uVar6 * '\x10';
          iVar5 = iVar5 + 2;
        }
      }
    }
    iVar5 = iVar5 + 1;
    *param_1 = cVar4;
    param_1 = param_1 + 1;
  }
  *param_1 = '\0';
  return;
}



void CdxUrlEscapeStringPart(byte *param_1,byte *param_2)

{
  byte bVar1;
  size_t sVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  byte *pbVar6;
  char cVar7;
  
  sVar2 = strlen((char *)param_2);
  iVar3 = 0;
  while (iVar3 < (int)sVar2) {
    bVar1 = *param_2;
    if ((bVar1 == 0x25) && (iVar3 < (int)(sVar2 - 2))) {
      cVar7 = *(char *)(_toupper_tab_ + (param_2[1] + 1) * 2);
      cVar4 = *(char *)(_toupper_tab_ + (param_2[2] + 1) * 2);
    }
    else {
      cVar4 = -0x7f;
      cVar7 = -0x7f;
    }
    if ((((byte)(bVar1 + 0x9f) < 0x1a || (byte)(bVar1 + 0xbf) < 0x1a) || ((byte)(bVar1 - 0x30) < 10)
        ) || ((bVar1 == 0x25 &&
              (((byte)(cVar7 + 0xbfU) < 6 || (byte)(cVar7 - 0x30U) < 10 &&
               ((byte)(cVar4 + 0xbfU) < 6 || (byte)(cVar4 - 0x30U) < 10)))))) {
      pbVar6 = param_1 + 1;
      *param_1 = bVar1;
    }
    else {
      bVar5 = bVar1 & 0xf;
      if (bVar1 >> 4 < 10) {
        cVar7 = '0';
      }
      else {
        cVar7 = '7';
      }
      if (bVar5 < 10) {
        bVar5 = bVar5 + 0x30;
      }
      else {
        bVar5 = bVar5 + 0x37;
      }
      *param_1 = 0x25;
      param_1[1] = (bVar1 >> 4) + cVar7;
      param_1[2] = bVar5;
      pbVar6 = param_1 + 3;
    }
    iVar3 = iVar3 + 1;
    param_1 = pbVar6;
    param_2 = param_2 + 1;
  }
  *param_1 = 0;
  return;
}



void CdxUrlEscapeString(byte *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  char *__n;
  char *pcVar4;
  size_t sVar5;
  byte *__ptr;
  char *pcVar6;
  
  pcVar3 = (char *)strlen(param_2);
  __n = strstr(param_2,"://[");
  if ((__n != (char *)0x0) && (pcVar4 = strchr(__n + 4,0x5d), __n = pcVar4, pcVar4 != (char *)0x0))
  {
    cVar1 = pcVar4[1];
    __n = (char *)(uint)(cVar1 == '/');
    if (cVar1 == ':') {
      __n = (char *)0x1;
    }
    if ((__n != (char *)0x0) || (cVar1 == '\0')) {
      __n = pcVar4 + (1 - (int)param_2);
      strncpy((char *)param_1,param_2,(size_t)__n);
      param_1 = param_1 + (int)__n;
    }
  }
  __ptr = (byte *)0x0;
  pcVar4 = (char *)0x0;
  do {
    pcVar6 = __n;
    if ((int)pcVar3 <= (int)__n) {
      *param_1 = 0;
      if (pcVar4 != (char *)0x0) {
        free(pcVar4);
      }
      if (__ptr == (byte *)0x0) {
        return;
      }
      free(__ptr);
      return;
    }
    while ((((bVar2 = param_2[(int)pcVar6], bVar2 != 0x5f && bVar2 != 0x2d &&
             (bVar2 != 0x21 && bVar2 != 0x2e)) && (bVar2 != 0x2a && bVar2 != 0x7e)) &&
           ((((bVar2 != 0x28 && bVar2 != 0x27 && (bVar2 != 0x3b && bVar2 != 0x29)) &&
             ((bVar2 != 0x3f && bVar2 != 0x2f &&
              ((bVar2 != 0x40 && bVar2 != 0x3a && (bVar2 != 0x3d && bVar2 != 0x26)))))) &&
            (bVar2 != 0x24 && bVar2 != 0x2b))))) {
      if (((bVar2 == 0x5b || bVar2 == 0x2c) || (bVar2 == 0x5d)) ||
         (pcVar6 = pcVar6 + 1, pcVar6 == pcVar3)) break;
    }
    if (pcVar6 == __n) {
      *param_1 = bVar2;
      __n = __n + 1;
      param_1 = param_1 + 1;
    }
    else {
      if ((int)pcVar6 < (int)pcVar3) {
        if (pcVar4 == (char *)0x0) {
          pcVar4 = (char *)malloc((size_t)(pcVar3 + 1));
        }
        strncpy(pcVar4,param_2 + (int)__n,(size_t)(pcVar6 + -(int)__n));
        pcVar4[(int)(pcVar6 + -(int)__n)] = '\0';
        pcVar6 = pcVar4;
      }
      else {
        pcVar6 = param_2 + (int)__n;
      }
      if (__ptr == (byte *)0x0) {
        __ptr = (byte *)malloc((size_t)(pcVar3 + 1));
      }
      CdxUrlUnescapeString((char *)__ptr,pcVar6);
      CdxUrlEscapeStringPart(param_1,__ptr);
      sVar5 = strlen((char *)param_1);
      param_1 = param_1 + sVar5;
      sVar5 = strlen(pcVar6);
      __n = __n + sVar5;
    }
  } while( true );
}



void CdxUrlFree(void **param_1)

{
  if (param_1 == (void **)0x0) {
    return;
  }
  if (*param_1 != (void *)0x0) {
    free(*param_1);
  }
  if (param_1[1] != (void *)0x0) {
    free(param_1[1]);
  }
  if (param_1[2] != (void *)0x0) {
    free(param_1[2]);
  }
  if (param_1[3] != (void *)0x0) {
    free(param_1[3]);
  }
  if (param_1[5] != (void *)0x0) {
    free(param_1[5]);
  }
  if (param_1[6] != (void *)0x0) {
    free(param_1[6]);
  }
  if (param_1[7] != (void *)0x0) {
    free(param_1[7]);
  }
  free(param_1);
  return;
}



char ** CdxUrlNew(char *param_1,byte *param_2)

{
  size_t sVar1;
  undefined4 uVar2;
  byte *__s;
  char **__s_00;
  char *pcVar3;
  byte *pbVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined *puVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  
  if (param_1 == (char *)0x0) {
    __android_log_print(6,"awplayer",&DAT_000181b4,"CdxUrlNew",0x29,param_2);
    return (char **)0x0;
  }
  sVar1 = strlen(param_1);
  if (0x55555554 < sVar1) {
    uVar2 = 0x2e;
    puVar9 = &DAT_000181d2;
LAB_00015d30:
    __android_log_print(6,"awplayer",puVar9,"CdxUrlNew",uVar2,param_2);
    return (char **)0x0;
  }
  iVar11 = 3;
  __s = (byte *)malloc(sVar1 * 3 + 1);
  if (__s == (byte *)0x0) {
    uVar2 = 0x34;
    puVar9 = &DAT_0001820c;
    goto LAB_00015d30;
  }
  __s_00 = (char **)malloc(0x20);
  if (__s_00 == (char **)0x0) {
    uVar2 = 0x3c;
    puVar9 = &DAT_00018247;
    goto LAB_00015fbc;
  }
  memset(__s_00,0,0x20);
  CdxUrlEscapeString(__s,param_1);
  pcVar3 = strdup((char *)__s);
  *__s_00 = pcVar3;
  if (pcVar3 == (char *)0x0) {
    uVar2 = 0x47;
    puVar9 = &DAT_0001827d;
    goto LAB_00015fbc;
  }
  pcVar3 = strstr((char *)__s,"://");
  if (pcVar3 == (char *)0x0) {
    pbVar4 = (byte *)strstr((char *)__s,"sip:");
    if (pbVar4 != __s) {
      puVar9 = &DAT_000182b0;
      uVar2 = 0x58;
      param_2 = __s;
      goto LAB_00015fbc;
    }
    pcVar3 = param_1 + 3;
    iVar11 = 1;
  }
  pcVar10 = pcVar3 + -(int)__s;
  pcVar5 = (char *)malloc((size_t)(pcVar10 + 1));
  __s_00[1] = pcVar5;
  if (pcVar5 == (char *)0x0) {
    uVar2 = 0x61;
    puVar9 = &DAT_000182e0;
    goto LAB_00015fbc;
  }
  pcVar3 = pcVar3 + iVar11;
  strncpy(pcVar5,(char *)__s,(size_t)pcVar10);
  pcVar5[(int)pcVar10] = '\0';
  pcVar10 = pcVar10 + iVar11;
  pcVar6 = strchr(pcVar3,0x40);
  pcVar7 = strchr(pcVar3,0x2f);
  pcVar5 = pcVar7;
  if (pcVar7 != (char *)0x0) {
    pcVar5 = (char *)0x1;
  }
  if (pcVar7 < pcVar6) {
    uVar12 = (uint)pcVar5 & 1;
  }
  else {
    uVar12 = 0;
  }
  if ((uVar12 == 0) && (pcVar6 != (char *)0x0)) {
    pcVar10 = pcVar6 + -(int)pcVar3;
    pcVar5 = (char *)malloc((size_t)(pcVar10 + 1));
    __s_00[5] = pcVar5;
    if (pcVar5 == (char *)0x0) {
      uVar2 = 0x7c;
      puVar9 = &DAT_0001830f;
      goto LAB_00015fbc;
    }
    strncpy(pcVar5,pcVar3,(size_t)pcVar10);
    pcVar5[(int)pcVar10] = '\0';
    pcVar10 = strchr(pcVar3,0x3a);
    pcVar5 = pcVar10;
    if (pcVar10 != (char *)0x0) {
      pcVar5 = (char *)0x1;
    }
    if (pcVar10 < pcVar6) {
      uVar12 = (uint)pcVar5 & 1;
    }
    else {
      uVar12 = 0;
    }
    if (uVar12 != 0) {
      pcVar5 = pcVar6 + -(int)pcVar10;
      __s_00[5][(int)(pcVar10 + -(int)pcVar3)] = '\0';
      pcVar3 = (char *)malloc((size_t)pcVar5);
      __s_00[6] = pcVar3;
      if (pcVar3 == (char *)0x0) {
        uVar2 = 0x8b;
        puVar9 = &DAT_00018340;
        goto LAB_00015fbc;
      }
      strncpy(pcVar3,pcVar10 + 1,(size_t)(pcVar5 + -1));
      pcVar3[(int)(pcVar5 + -1)] = '\0';
    }
    pcVar3 = pcVar6 + 1;
    pcVar10 = pcVar3 + -(int)__s;
  }
  pcVar6 = strchr(pcVar3,0x5b);
  pcVar7 = strchr(pcVar3,0x5d);
  pcVar8 = strchr(pcVar3,0x2f);
  pcVar5 = pcVar6;
  if (pcVar6 != (char *)0x0) {
    pcVar5 = (char *)0x1;
  }
  if (pcVar7 == (char *)0x0) {
    uVar12 = 0;
  }
  else {
    uVar12 = (uint)pcVar5 & 1;
  }
  pcVar5 = pcVar3;
  if (uVar12 != 0) {
    if (pcVar6 < pcVar7) {
      uVar12 = 1 - (int)pcVar8;
      if ((char *)0x1 < pcVar8) {
        uVar12 = 0;
      }
      if (pcVar7 < pcVar8) {
        uVar12 = uVar12 | 1;
      }
      if (uVar12 != 0) {
        pcVar5 = pcVar3 + 1;
        pcVar10 = pcVar10 + 1;
        uVar12 = 1;
        pcVar3 = pcVar7;
      }
    }
    else {
      uVar12 = 0;
    }
  }
  pcVar3 = strchr(pcVar3,0x3a);
  pcVar6 = strchr(pcVar5,0x2f);
  if ((pcVar6 == (char *)0x0) || (-1 < (int)(pcVar6 + -(int)pcVar3))) {
    if (pcVar3 == (char *)0x0) {
      if (pcVar6 != (char *)0x0) goto LAB_00015f2a;
      pcVar6 = (char *)strlen((char *)__s);
    }
    else {
      pcVar6 = (char *)atoi(pcVar3 + 1);
      __s_00[4] = pcVar6;
      pcVar6 = pcVar3 + -(int)__s;
    }
  }
  else {
LAB_00015f2a:
    pcVar6 = pcVar6 + -(int)__s;
  }
  if (uVar12 != 0) {
    pcVar6 = pcVar6 + -1;
  }
  pcVar6 = pcVar6 + -(int)pcVar10;
  pcVar3 = (char *)malloc((size_t)(pcVar6 + 1));
  __s_00[2] = pcVar3;
  if (pcVar3 == (char *)0x0) {
    uVar2 = 0xcd;
    puVar9 = &DAT_00018371;
LAB_00015fbc:
    __android_log_print(6,"awplayer",puVar9,"CdxUrlNew",uVar2,param_2);
    free(__s);
    if (__s_00 != (char **)0x0) {
      CdxUrlFree(__s_00);
      return (char **)0x0;
    }
    return (char **)0x0;
  }
  strncpy(pcVar3,pcVar5,(size_t)pcVar6);
  pcVar3[(int)pcVar6] = '\0';
  pcVar3 = strchr(pcVar5,0x2f);
  if ((pcVar3 != (char *)0x0) && (sVar1 = strlen(pcVar3), 1 < sVar1)) {
    pcVar3 = strdup(pcVar3);
    __s_00[3] = pcVar3;
    if (pcVar3 == (char *)0x0) {
      uVar2 = 0xe0;
      puVar9 = &DAT_000183a0;
      goto LAB_00015fbc;
    }
  }
  if (__s_00[3] == (char *)0x0) {
    pcVar3 = (char *)malloc(2);
    __s_00[3] = pcVar3;
    if (pcVar3 == (char *)0x0) {
      uVar2 = 0xec;
      puVar9 = &DAT_000183c5;
      goto LAB_00015fbc;
    }
    strcpy(pcVar3,"/");
  }
  free(__s);
  return __s_00;
}



undefined8 CdxCheck4Proxies(char **param_1,byte *param_2)

{
  char **ppcVar1;
  int iVar2;
  char **ppcVar3;
  size_t sVar4;
  size_t sVar5;
  char **ppcVar6;
  byte *extraout_r1;
  byte *extraout_r1_00;
  char *pcVar7;
  char *__s;
  char **__s_00;
  char **local_28;
  
  ppcVar6 = param_1;
  local_28 = param_1;
  if (param_1 != (char **)0x0) {
    ppcVar1 = CdxUrlNew(*param_1,param_2);
    pcVar7 = param_1[1];
    iVar2 = strcasecmp(pcVar7,"http_proxy");
    ppcVar6 = ppcVar1;
    local_28 = param_1;
    if ((((iVar2 != 0) && (iVar2 = strcasecmp(pcVar7,"http"), local_28 = param_1, iVar2 == 0)) &&
        (pcVar7 = getenv("http_proxy"), local_28 = param_1, pcVar7 != (char *)0x0)) &&
       (ppcVar3 = CdxUrlNew(pcVar7,extraout_r1), local_28 = param_1, ppcVar3 != (char **)0x0)) {
      __s = ppcVar3[2];
      sVar4 = strlen(__s);
      __s_00 = (char **)*param_1;
      sVar5 = strlen((char *)__s_00);
      pcVar7 = (char *)malloc(sVar5 + sVar4 + 0x15);
      local_28 = param_1;
      if (pcVar7 != (char *)0x0) {
        sprintf(pcVar7,"http_proxy://%s:%d/%s",__s,ppcVar3[4]);
        ppcVar6 = CdxUrlNew(pcVar7,extraout_r1_00);
        local_28 = __s_00;
        if (ppcVar6 != (char **)0x0) {
          CdxUrlFree(ppcVar1);
          free(pcVar7);
          CdxUrlFree(ppcVar3);
          goto LAB_0001612a;
        }
        free(pcVar7);
      }
      CdxUrlFree(ppcVar3);
      ppcVar6 = ppcVar1;
    }
  }
LAB_0001612a:
  return CONCAT44(local_28,ppcVar6);
}



char ** CdxUrlRedirect(char **param_1,char *param_2)

{
  char *pcVar1;
  size_t sVar2;
  size_t sVar3;
  char **ppcVar4;
  byte *extraout_r1;
  byte *extraout_r1_00;
  char **ppcVar5;
  char *pcVar6;
  
  ppcVar5 = (char **)*param_1;
  pcVar1 = strchr(param_2,0x2f);
  if ((pcVar1 != (char *)0x0) && (*param_2 != '/')) {
    ppcVar4 = CdxUrlNew(param_2,extraout_r1);
    goto LAB_000161c8;
  }
  pcVar6 = *ppcVar5;
  sVar2 = strlen(pcVar6);
  sVar3 = strlen(param_2);
  pcVar1 = (char *)malloc(sVar2 + sVar3 + 1);
  strcpy(pcVar1,pcVar6);
  if (*param_2 == '/') {
    param_2 = param_2 + 1;
    pcVar6 = strstr(pcVar1,"://");
    if (pcVar6 != (char *)0x0) {
      pcVar6 = strchr(pcVar6 + 3,0x2f);
      goto LAB_000161a2;
    }
  }
  else {
    pcVar6 = strrchr(pcVar1,0x2f);
LAB_000161a2:
    if (pcVar6 != (char *)0x0) {
      pcVar6[1] = '\0';
    }
  }
  strcat(pcVar1,param_2);
  ppcVar4 = CdxUrlNew(pcVar1,extraout_r1_00);
  free(pcVar1);
LAB_000161c8:
  CdxUrlFree(ppcVar5);
  *param_1 = (char *)ppcVar4;
  return ppcVar4;
}



void FUN_000161dc(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_2 + 4);
  DataMemoryBarrier(0x1f);
  do {
    ExclusiveAccess(piVar2);
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  DataMemoryBarrier(0x1f);
  if (iVar3 + -1 != 0) {
    return;
  }
  AwPfree(param_1,param_2);
  return;
}



undefined4 FUN_00016208(int param_1)

{
  bool bVar1;
  int **ppiVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  iVar5 = param_1;
  if (param_1 == 0) {
    iVar5 = 0x32;
    param_1 = __android_log_assert
                        ("!(queue)","awplayer","<%s:%d>CDX_CHECK(%s) failed.","__CdxQueuePop",0x32,
                         "queue");
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0;
  }
  do {
    piVar4 = *(int **)(iVar5 + 4);
    piVar6 = piVar4 + 1;
    DataMemoryBarrier(0x1f);
    do {
      ExclusiveAccess(piVar6);
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = *piVar6 + 1;
    DataMemoryBarrier(0x1f);
    piVar6 = (int *)*piVar4;
    if (piVar6 == (int *)0x0) {
      FUN_000161dc(*(int *)(iVar5 + 0x14),(int)piVar4);
      return 0;
    }
    uVar7 = piVar6[2];
    ppiVar2 = (int **)(iVar5 + 4);
    DataMemoryBarrier(0x1f);
    do {
      ExclusiveAccess(ppiVar2);
      piVar3 = *ppiVar2;
      if (*ppiVar2 != piVar4) goto LAB_0001628a;
      bVar1 = (bool)hasExclusiveAccess(ppiVar2);
    } while (!bVar1);
    *ppiVar2 = piVar6;
    DataMemoryBarrier(0x1f);
    piVar3 = piVar4;
LAB_0001628a:
    if (piVar4 == piVar3) {
      FUN_000161dc(*(int *)(iVar5 + 0x14),(int)piVar4);
      FUN_000161dc(*(int *)(iVar5 + 0x14),(int)piVar4);
      return uVar7;
    }
    FUN_000161dc(*(int *)(iVar5 + 0x14),(int)piVar4);
  } while( true );
}



undefined8 CdxQueueCreate(void **param_1)

{
  bool bVar1;
  char *__s;
  char *pcVar2;
  void **ppvVar3;
  void *pvVar4;
  void **ppvVar5;
  undefined4 uVar6;
  
  __s = (char *)AwPalloc(param_1,(void *)0x18,
                                                  
                         "/home/zhangjingzhou/sdk/v3-cdr-ips2.0-0104/CamCedarX/LIBRARY/DEMUX/BASE/CdxQueue.c"
                         ,(void *)0x88);
  if ((undefined **)__s == (undefined **)0x0) {
    pcVar2 = "!(impl)";
    uVar6 = 0x89;
    __s = (char *)&DAT_00017906;
  }
  else {
    memset(__s,0,0x18);
    *(void ***)((int)__s + 0x14) = param_1;
    ppvVar3 = AwPalloc(param_1,(void *)0xc,
                                              
                       "/home/zhangjingzhou/sdk/v3-cdr-ips2.0-0104/CamCedarX/LIBRARY/DEMUX/BASE/CdxQueue.c"
                       ,(void *)0x8d);
    if (ppvVar3 != (void **)0x0) goto LAB_000164ae;
    pcVar2 = "!(dummy)";
    uVar6 = 0x8e;
    __s = "dummy";
  }
  ppvVar3 = (void **)__android_log_assert
                               (pcVar2,"awplayer","<%s:%d>CDX_CHECK(%s) failed.","CdxQueueCreate",
                                uVar6,__s);
LAB_000164ae:
  ppvVar5 = ppvVar3 + 1;
  *ppvVar3 = (void *)0x0;
  ppvVar3[2] = (void *)0x0;
  do {
    ExclusiveAccess(ppvVar5);
    pvVar4 = *ppvVar5;
    bVar1 = (bool)hasExclusiveAccess(ppvVar5);
  } while (!bVar1);
  *ppvVar5 = (void *)0x1;
  DataMemoryBarrier(0x1f);
  *(void ***)((int)__s + 4) = ppvVar3;
  *(void ***)((int)__s + 8) = ppvVar3;
  *(undefined **)((int)__s + 0xc) = (undefined *)0x1;
  *(undefined ***)__s = &PTR_FUN_00016208_1_0001b0bc;
  *(undefined **)((int)__s + 0x10) = (undefined *)0x1;
  return CONCAT44(pvVar4,__s);
}



void CdxQueueDestroy(char *param_1)

{
  char *pcVar1;
  int iVar2;
  int extraout_r1;
  char *pcVar3;
  undefined4 uVar4;
  
  if (param_1 == (char *)0x0) {
    pcVar1 = "!(queue)";
    uVar4 = 0xa0;
    pcVar3 = "<%s:%d>CDX_CHECK(%s) failed.";
    param_1 = "queue";
  }
  else {
    iVar2 = *(int *)(param_1 + 4);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (iVar2 == *(int *)(param_1 + 8)) goto LAB_00016558;
    pcVar1 = "!(impl->front == impl->rear)";
    uVar4 = 0xa6;
    pcVar3 = "<%s:%d>check (%s) failed:queue not empty";
    param_1 = "impl->front == impl->rear";
  }
  __android_log_assert(pcVar1,"awplayer",pcVar3,"CdxQueueDestroy",uVar4,param_1);
  iVar2 = extraout_r1;
LAB_00016558:
  FUN_000161dc(*(int *)(param_1 + 0x14),iVar2);
  AwPfree(*(int *)(param_1 + 0x14),(int)param_1);
  return;
}



undefined4 CdxMakeSocketBlocking(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar1 = fcntl(param_1,3,0,param_4,param_4);
  if (uVar1 + 1 != 0) {
    uVar4 = uVar1 & 0xfffff7ff;
    if (param_2 == 0) {
      uVar4 = uVar1 | 0x800;
    }
    iVar2 = fcntl(param_1,4,uVar4,uVar1 + 1,param_4);
    if (iVar2 != -1) {
      return 0;
    }
  }
  puVar3 = (undefined4 *)__errno();
  return *puVar3;
}



void CdxSocketMakePortPair(int *param_1,int *param_2,uint *param_3)

{
  int iVar1;
  char *pcVar2;
  char *__protocol;
  long lVar3;
  char *pcVar4;
  char *__optval;
  uint uVar5;
  socklen_t unaff_r6;
  undefined4 unaff_r7;
  uint uVar6;
  undefined4 uVar7;
  undefined4 local_40;
  undefined local_3c [4];
  socklen_t local_38;
  socklen_t local_34;
  socklen_t local_30;
  int local_2c;
  
  local_2c = __stack_chk_guard;
  iVar1 = socket(2,2,0);
  *param_1 = iVar1;
  if (iVar1 < 1) {
    pcVar2 = "!(*rtpSocket > 0)";
    uVar7 = 0x3b;
    pcVar4 = "CdxSocketMakePortPair";
    __optval = "*rtpSocket > 0";
  }
  else {
    unaff_r7 = 0x40000;
    __optval = (char *)&local_40;
    local_40 = 0x40000;
    unaff_r6 = 4;
    __protocol = (char *)setsockopt(iVar1,1,8,__optval,4);
    if (__protocol == (char *)0x0) goto LAB_0001664a;
    param_2 = (int *)0x30;
    pcVar2 = "!(ret == 0)";
    pcVar4 = "CdxSocketRecvBufSize";
    uVar7 = 0x30;
    __optval = "ret == 0";
  }
  while( true ) {
    while( true ) {
      __protocol = "<%s:%d>CDX_CHECK(%s) failed.";
      __android_log_assert(pcVar2,"awplayer","<%s:%d>CDX_CHECK(%s) failed.",pcVar4,uVar7,__optval);
LAB_0001664a:
      iVar1 = socket(2,2,(int)__protocol);
      *param_2 = iVar1;
      if (0 < iVar1) break;
      unaff_r6 = 0x40;
      pcVar2 = "!(*rtcpSocket > 0)";
      pcVar4 = "CdxSocketMakePortPair";
      uVar7 = 0x40;
      __optval = "*rtcpSocket > 0";
    }
    local_40 = unaff_r7;
    unaff_r6 = setsockopt(iVar1,1,8,__optval,unaff_r6);
    if (unaff_r6 == 0) break;
    unaff_r7 = 0x30;
    pcVar2 = "!(ret == 0)";
    pcVar4 = "CdxSocketRecvBufSize";
    uVar7 = 0x30;
    __optval = "ret == 0";
  }
  lVar3 = lrand48();
  iVar1 = __aeabi_idiv(lVar3 * 1000,0x7fffffff);
  uVar5 = iVar1 + 0x3cbeU & 0xfffffffe;
  do {
    local_3c._0_2_ = 2;
    local_3c._2_2_ = (ushort)((uVar5 & 0xff) << 8) | (ushort)((uVar5 & 0xffff) >> 8);
    local_38 = unaff_r6;
    local_34 = unaff_r6;
    local_30 = unaff_r6;
    iVar1 = bind(*param_1,(sockaddr *)local_3c,0x10);
    if (-1 < iVar1) {
      uVar6 = (uVar5 & 0xffff) + 1;
      local_3c._2_2_ = (ushort)((uVar6 & 0xff) << 8) | (ushort)(uVar6 >> 8) & 0xff;
      iVar1 = bind(*param_2,(sockaddr *)local_3c,0x10);
      if (iVar1 == 0) {
        *param_3 = uVar5;
        if (local_2c == __stack_chk_guard) {
          return;
        }
        goto LAB_0001671c;
      }
    }
    uVar5 = uVar5 + 2;
  } while (uVar5 < 0x10000);
  __android_log_assert(0,"awplayer","Should not be here.");
LAB_0001671c:
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



undefined4 CdxSockAddrConstruct(undefined2 *param_1,char *param_2,uint param_3)

{
  hostent *phVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = param_2;
  memset(param_1,0,0x10);
  *param_1 = 2;
  param_1[1] = (ushort)((param_3 & 0xff) << 8) | (ushort)(param_3 >> 8) & 0xff;
  phVar1 = gethostbyname(param_2);
  if (phVar1 == (hostent *)0x0) {
    __android_log_print(6,"awplayer",&DAT_0001856b,"CdxSockAddrConstruct",0x6c,pcVar3);
    uVar2 = 0xffffffff;
  }
  else {
    memcpy(param_1 + 2,*phVar1->h_addr_list,phVar1->h_length);
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 CdxSockSetBlocking(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar1 = fcntl(param_1,3,0,param_4,param_4);
  if (uVar1 != 0xffffffff) {
    uVar4 = uVar1 & 0xfffff7ff;
    if (param_2 == 0) {
      uVar4 = uVar1 | 0x800;
    }
    iVar2 = fcntl(param_1,4,uVar4);
    if (iVar2 != -1) {
      return 0;
    }
  }
  puVar3 = (undefined4 *)__errno();
  return *puVar3;
}



bool CdxSockIsBlocking(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = fcntl(param_1,3,0,param_4,param_4);
  bVar3 = (uVar2 & 0x800) != 0;
  if (bVar3) {
    uVar2 = 0;
  }
  uVar1 = (undefined)uVar2;
  if (!bVar3) {
    uVar1 = 1;
  }
  return (bool)uVar1;
}



char * CdxAsynSocket(int param_1,void *param_2)

{
  char *__fd;
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_2c [2];
  socklen_t sStack36;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar3 = 0;
  local_1c = 10;
  local_18 = 5;
  uVar4 = 3;
  local_20 = 1;
  local_14 = 3;
  local_2c[0] = param_1;
  __fd = (char *)socket(2,1,0);
  if ((int)__fd < 0) {
    puVar1 = (undefined4 *)__errno();
    __android_log_print(6,"awplayer",&DAT_0001858f,"CdxAsynSocket",0xa0,*puVar1);
    return (char *)0xffffffff;
  }
  iVar2 = CdxSockSetBlocking((int)__fd,0,uVar3,uVar4);
  if (iVar2 == 0) {
    if ((local_2c[0] < 1) || (iVar2 = setsockopt((int)__fd,1,8,local_2c,4), iVar2 == 0))
    goto LAB_000168d0;
    uVar3 = 0xaa;
  }
  else {
    param_2 = (void *)0xa5;
    uVar3 = 0xa5;
  }
  __fd = "ret == 0";
  __android_log_assert
            ("!(ret == 0)","awplayer","<%s:%d>CDX_CHECK(%s) failed.","CdxAsynSocket",uVar3,
             "ret == 0");
LAB_000168d0:
  getsockopt((int)__fd,1,8,param_2,&sStack36);
  setsockopt((int)__fd,1,9,&local_20,4);
  setsockopt((int)__fd,6,4,&local_1c,4);
  setsockopt((int)__fd,6,5,&local_18,4);
  setsockopt((int)__fd,6,6,&local_14,4);
  return __fd;
}



int CdxSockAsynConnect(uint param_1,sockaddr *param_2,undefined4 param_3,int param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int local_b0;
  socklen_t local_ac;
  timeval local_a8;
  int aiStack160 [32];
  
  iVar7 = 0x7fffffff;
  if (param_4 != 0) {
    iVar7 = __aeabi_idiv(param_4,&DAT_000186a0);
  }
  iVar1 = connect(param_1,param_2,0x10);
  if (iVar1 != 0) {
    piVar2 = (int *)__errno();
    if (*piVar2 == 0x73) {
      iVar1 = 0;
      while (iVar1 < iVar7) {
        if ((param_5 != (int *)0x0) && (*param_5 != 0)) {
          __android_log_print(6,"awplayer",&DAT_000185d9,"CdxSockAsynConnect",0xdc,
                              "CdxSockAsynConnect",0xdc);
          return -2;
        }
        memset(aiStack160,0,0x80);
        aiStack160[(int)param_1 >> 5] = 1 << (param_1 & 0x1f);
        local_a8.tv_usec = (__suseconds_t)&DAT_000186a0;
        local_a8.tv_sec = 0;
        iVar3 = select(param_1 + 1,(fd_set *)0x0,(fd_set *)aiStack160,(fd_set *)0x0,&local_a8);
        if (0 < iVar3) {
          local_b0 = 0;
          local_ac = 4;
          iVar7 = getsockopt(param_1,1,4,&local_b0,&local_ac);
          if ((-1 < iVar7) && (local_b0 == 0)) {
            return 0;
          }
          if (local_b0 != 0) {
            piVar2 = (int *)__errno();
            *piVar2 = local_b0;
          }
          puVar4 = (undefined4 *)__errno();
          __android_log_print(6,"awplayer",&DAT_00018600,"CdxSockAsynConnect",0xf1,*puVar4);
          break;
        }
        if ((iVar3 != 0) && (piVar2 = (int *)__errno(), *piVar2 != 4)) {
          puVar4 = (undefined4 *)__errno();
          uVar6 = *puVar4;
          uVar5 = 0x102;
          goto LAB_00016a74;
        }
        iVar1 = iVar1 + 1;
      }
    }
    else {
      puVar4 = (undefined4 *)__errno();
      uVar6 = *puVar4;
      uVar5 = 0xd4;
LAB_00016a74:
      __android_log_print(6,"awplayer",&DAT_000185ae,"CdxSockAsynConnect",uVar5,"CdxSockAsynConnect"
                          ,uVar5,uVar6);
    }
    iVar1 = -1;
  }
  return iVar1;
}



int CdxSockAsynSend(uint param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  ssize_t sVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  timeval local_130;
  uint auStack296 [32];
  uint auStack168 [33];
  
  iVar2 = 0x7fffffff;
  if (param_4 != 0) {
    iVar2 = __aeabi_idiv(param_4,&DAT_000186a0);
  }
  uVar11 = 1 << (param_1 & 0x1f);
  iVar1 = (int)param_1 >> 5;
  iVar12 = 0;
  iVar9 = 0;
  do {
    if (iVar2 <= iVar12) {
      return iVar9;
    }
    if ((param_5 != (int *)0x0) && (*param_5 != 0)) {
      uVar3 = 0x121;
LAB_00016ba0:
      __android_log_print(6,"awplayer",&DAT_000185d9,"CdxSockAsynSend",uVar3,"CdxSockAsynSend",uVar3
                         );
      if (iVar9 != 0) {
        return iVar9;
      }
      return -2;
    }
    memset((fd_set *)auStack296,0,0x80);
    ((fd_set *)auStack296)->fds_bits[iVar1] = uVar11;
    memset(auStack168,0,0x80);
    auStack168[iVar1] = uVar11;
    local_130.tv_usec = (__suseconds_t)&DAT_000186a0;
    local_130.tv_sec = 0;
    iVar4 = select(param_1 + 1,(fd_set *)0x0,(fd_set *)auStack296,(fd_set *)auStack168,&local_130);
    if (iVar4 < 0) {
      piVar5 = (int *)__errno();
      if (*piVar5 != 4) {
        puVar6 = (undefined4 *)__errno();
        puVar8 = &DAT_000185ae;
        uVar10 = *puVar6;
        uVar3 = 0x133;
LAB_00016c2e:
        __android_log_print(6,"awplayer",puVar8,"CdxSockAsynSend",uVar3,"CdxSockAsynSend",uVar3,
                            uVar10);
        return -1;
      }
    }
    else {
      if (iVar4 != 0) {
        while( true ) {
          if ((param_5 != (int *)0x0) && (*param_5 != 0)) {
            uVar3 = 0x140;
            goto LAB_00016ba0;
          }
          if ((auStack168[iVar1] & uVar11) != 0) break;
          if ((uVar11 & ((fd_set *)auStack296)->fds_bits[iVar1]) == 0) {
            __android_log_print(5,"awplayer","<%s:%u>: select > 0, but sockfd is not ready?",
                                "CdxSockAsynSend",0x14b);
            goto LAB_00016c4e;
          }
          sVar7 = send(param_1,(void *)(param_2 + iVar9),param_3 - iVar9,0);
          if (sVar7 < 0) {
            piVar5 = (int *)__errno();
            if (*piVar5 != 0xb) {
              puVar6 = (undefined4 *)__errno();
              puVar8 = &DAT_00018675;
              uVar10 = *puVar6;
              uVar3 = 0x159;
              goto LAB_00016c2e;
            }
            goto LAB_00016c4e;
          }
          if (sVar7 == 0) goto LAB_00016c4e;
          iVar9 = iVar9 + sVar7;
          if (iVar9 == param_3) {
            return iVar9;
          }
        }
        __android_log_print(6,"awplayer",&DAT_00018625,"CdxSockAsynSend",0x146,"CdxSockAsynSend",
                            0x146);
      }
    }
LAB_00016c4e:
    iVar12 = iVar12 + 1;
  } while( true );
}



int CdxSockAsynRecv(uint param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  ssize_t sVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  timeval local_130;
  uint auStack296 [32];
  uint auStack168 [33];
  
  bVar2 = CdxSockIsBlocking(param_1,param_2,param_3,param_4);
  if (bVar2 == false) {
    iVar3 = 0x7fffffff;
    if (param_4 != 0) {
      iVar3 = __aeabi_idiv(param_4,&DAT_000186a0);
    }
    uVar10 = 1 << (param_1 & 0x1f);
    iVar1 = (int)param_1 >> 5;
    iVar11 = 0;
    iVar9 = 0;
    while (iVar11 < iVar3) {
      if ((param_5 != (int *)0x0) && (*param_5 != 0)) {
        puVar8 = &DAT_000185d9;
        uVar13 = 400;
        uVar12 = 400;
LAB_00016db8:
        __android_log_print(6,"awplayer",puVar8,"CdxSockAsynRecv",uVar12,"CdxSockAsynRecv",uVar13);
        if (iVar9 != 0) {
          return iVar9;
        }
        return -2;
      }
      memset((fd_set *)auStack296,0,0x80);
      ((fd_set *)auStack296)->fds_bits[iVar1] = uVar10;
      memset(auStack168,0,0x80);
      auStack168[iVar1] = uVar10;
      local_130.tv_usec = (__suseconds_t)&DAT_000186a0;
      local_130.tv_sec = 0;
      iVar4 = select(param_1 + 1,(fd_set *)auStack296,(fd_set *)0x0,(fd_set *)auStack168,&local_130)
      ;
      if (iVar4 < 0) {
        piVar5 = (int *)__errno();
        if (*piVar5 != 4) {
          puVar8 = &DAT_000185ae;
          uVar12 = 0x1a2;
          uVar13 = 0x1a2;
          goto LAB_00016e30;
        }
      }
      else {
        if (iVar4 != 0) {
          while( true ) {
            if ((param_5 != (int *)0x0) && (*param_5 != 0)) {
              puVar8 = &DAT_000186cf;
              uVar13 = 0x1b0;
              uVar12 = 0x1b0;
              goto LAB_00016db8;
            }
            if ((uVar10 & auStack168[iVar1]) != 0) {
              __android_log_print(6,"awplayer",&DAT_00018625,"CdxSockAsynRecv",0x1b5,
                                  "CdxSockAsynRecv",0x1b5);
              goto LAB_00016e74;
            }
            if ((uVar10 & ((fd_set *)auStack296)->fds_bits[iVar1]) == 0) goto LAB_00016e74;
            sVar6 = recv(param_1,(void *)(param_2 + iVar9),param_3 - iVar9,0);
            if (sVar6 < 0) break;
            if (sVar6 == 0) {
              puVar7 = (undefined4 *)__errno();
              __android_log_print(3,"awplayer",
                                                                    
                                  "<%s:%u>: xxx recvSize(%ld),sockfd(%d), want to read(%lu), errno(%d), socket is closed by peer?"
                                  ,"CdxSockAsynRecv",0x1cf,iVar9,param_1,param_3,*puVar7);
              return iVar9;
            }
            iVar9 = iVar9 + sVar6;
            if (iVar9 == param_3) {
              return iVar9;
            }
          }
          piVar5 = (int *)__errno();
          if (*piVar5 != 0xb) {
            __errno();
            puVar8 = &DAT_00018704;
            uVar12 = 0x1c8;
            uVar13 = 0x1c8;
            goto LAB_00016e30;
          }
        }
      }
LAB_00016e74:
      iVar11 = iVar11 + 1;
    }
  }
  else {
    puVar8 = &DAT_0001869e;
    uVar13 = 0x17f;
    uVar12 = 0x17f;
LAB_00016e30:
    iVar9 = -1;
    __android_log_print(6,"awplayer",puVar8,"CdxSockAsynRecv",uVar12,"CdxSockAsynRecv",uVar13);
  }
  return iVar9;
}



void CdxSockNoblockRecv(int param_1,void *param_2,size_t param_3)

{
  recv(param_1,param_2,param_3,0);
  return;
}



void ** FUN_00016ee8(void **param_1,char *param_2,void *param_3)

{
  size_t sVar1;
  void **__dest;
  
  sVar1 = strlen(param_2);
  __dest = AwPalloc(param_1,(void *)(sVar1 + 1),
                                        
                    "/home/zhangjingzhou/sdk/v3-cdr-ips2.0-0104/CamCedarX/LIBRARY/DEMUX/BASE/CdxStrUtil.c"
                    ,param_3);
  strcpy((char *)__dest,param_2);
  *(undefined *)((int)__dest + sVar1) = 0;
  return __dest;
}



void CdxStrTrimTail(char *param_1)

{
  size_t sVar1;
  
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    while ((0 < (int)sVar1 &&
           (sVar1 = sVar1 - 1,
           (int)((uint)*(byte *)(_ctype_ + (uint)(byte)param_1[sVar1] + 1) << 0x1c) < 0))) {
      param_1[sVar1] = '\0';
    }
  }
  return;
}



void CdxStrTrimHead(char *param_1)

{
  size_t sVar1;
  int iVar2;
  
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    iVar2 = 0;
    while ((iVar2 < (int)sVar1 &&
           ((int)((uint)*(byte *)(_ctype_ + (uint)(byte)param_1[iVar2] + 1) << 0x1c) < 0))) {
      iVar2 = iVar2 + 1;
    }
    if (iVar2 != 0) {
      memmove(param_1,param_1 + iVar2,sVar1 - iVar2);
      param_1[sVar1 - iVar2] = '\0';
    }
  }
  return;
}



void CdxStrTrim(char *param_1)

{
  CdxStrTrimHead(param_1);
  CdxStrTrimTail(param_1);
  return;
}



void CdxStrTolower(char *param_1)

{
  size_t sVar1;
  int iVar2;
  
  sVar1 = strlen(param_1);
  iVar2 = 0;
  while (iVar2 < (int)sVar1) {
    param_1[iVar2] = (char)*(undefined2 *)(_tolower_tab_ + ((byte)param_1[iVar2] + 1) * 2);
    iVar2 = iVar2 + 1;
  }
  return;
}



void ** AttrbuteOfKeyInSingleParam(void **param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  size_t __n;
  int iVar2;
  void **ppvVar3;
  
  sVar1 = strlen(param_2);
  __n = strlen(param_3);
  if ((((int)(__n + 1) < (int)sVar1) && (param_2[__n] == '=')) &&
     (iVar2 = strncasecmp(param_2,param_3,__n), iVar2 == 0)) {
    ppvVar3 = FUN_00016ee8(param_1,param_2 + __n + 1,(void *)0x53);
    return ppvVar3;
  }
  return (void **)0x0;
}



void ** CdxStrAttributeOfKey(void **param_1,char *param_2,char *param_3,int param_4)

{
  void **ppvVar1;
  char *pcVar2;
  void **ppvVar3;
  uint uVar4;
  
  ppvVar1 = FUN_00016ee8(param_1,param_2,(void *)0x5b);
  ppvVar3 = ppvVar1;
  if (ppvVar1 == (void **)0x0) {
    param_3 = (char *)0x5c;
    param_1 = (void **)&DAT_000187e9;
    __android_log_assert
              ("!(_str)","awplayer","<%s:%d>CDX_CHECK(%s) failed.","CdxStrAttributeOfKey",0x5c,
               &DAT_000187e9);
  }
  while( true ) {
    pcVar2 = strchr((char *)ppvVar3,param_4);
    if (pcVar2 != (char *)0x0) {
      *pcVar2 = '\0';
    }
    CdxStrTrim((char *)ppvVar3);
    ppvVar3 = AttrbuteOfKeyInSingleParam(param_1,(char *)ppvVar3,param_3);
    uVar4 = 1 - (int)pcVar2;
    if ((char *)0x1 < pcVar2) {
      uVar4 = 0;
    }
    if (ppvVar3 != (void **)0x0) {
      uVar4 = uVar4 | 1;
    }
    if (uVar4 != 0) break;
    ppvVar3 = (void **)(pcVar2 + 1);
  }
  AwPfree((int)param_1,(int)ppvVar1);
  return ppvVar3;
}



undefined8 CdxStrSplit(void **param_1,char *param_2,int param_3,undefined *param_4)

{
  void **ppvVar1;
  char *pcVar2;
  void **ppvVar3;
  int iVar4;
  void **ppvVar5;
  int iVar6;
  
  iVar4 = 0;
  *(undefined **)(param_4 + 4) = param_4;
  *(undefined **)param_4 = param_4;
  ppvVar5 = param_1;
  iVar6 = param_3;
  while( true ) {
    ppvVar1 = AwPalloc(param_1,(void *)0xc,
                                              
                       "/home/zhangjingzhou/sdk/v3-cdr-ips2.0-0104/CamCedarX/LIBRARY/DEMUX/BASE/CdxStrUtil.c"
                       ,(void *)0x84);
    if (ppvVar1 == (void **)0x0) {
      param_2 = (char *)0x85;
      ppvVar5 = (void **)0x85;
      param_4 = &DAT_00017f13;
      __android_log_assert
                ("!(item)","awplayer","<%s:%d>CDX_CHECK(%s) failed.","CdxStrSplit",0x85,
                 &DAT_00017f13,iVar6);
    }
    pcVar2 = strchr(param_2,param_3);
    if (pcVar2 == (char *)0x0) break;
    *pcVar2 = '\0';
    ppvVar3 = FUN_00016ee8(param_1,param_2,(void *)0x90);
    iVar4 = iVar4 + 1;
    ppvVar1[2] = ppvVar3;
    param_2 = pcVar2 + 1;
    *pcVar2 = (char)param_3;
    CdxStrTrim((char *)ppvVar1[2]);
    CdxListAddBefore((int *)ppvVar1,(int)param_4);
  }
  ppvVar3 = FUN_00016ee8(param_1,param_2,(void *)0x89);
  ppvVar1[2] = ppvVar3;
  CdxStrTrim((char *)ppvVar3);
  CdxListAddBefore((int *)ppvVar1,(int)param_4);
  return CONCAT44(ppvVar5,iVar4 + 1);
}



longlong CdxGetNowUs(int param_1,int param_2,undefined4 param_3)

{
  timeval local_10;
  undefined4 uStack8;
  
  local_10.tv_sec = param_1;
  local_10.tv_usec = param_2;
  uStack8 = param_3;
  gettimeofday(&local_10,(__timezone_ptr_t)0x0);
  return (longlong)local_10.tv_sec * 1000000 + (longlong)local_10.tv_usec;
}



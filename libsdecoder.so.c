#include "libsdecoder.so.h"



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



void __android_log_print(void)

{
  __android_log_print();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
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



void __memset_chk(void)

{
  __memset_chk();
  return;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention yet parameter storage is locked

int strncasecmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = strncasecmp(__s1,__s2,__n);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = sscanf(__s,__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}



void __strlen_chk(void)

{
  __strlen_chk();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = open(__file,__oflag);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = strstr(__haystack,__needle);
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

int close(int __fd)

{
  int iVar1;
  
  iVar1 = close(__fd);
  return iVar1;
}



void __strncpy_chk(void)

{
  __strncpy_chk();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

__off_t lseek(int __fd,__off_t __offset,int __whence)

{
  __off_t _Var1;
  
  _Var1 = lseek(__fd,__offset,__whence);
  return _Var1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int dup(int __fd)

{
  int iVar1;
  
  iVar1 = dup(__fd);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = realloc(__ptr,__size);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = strcpy(__dest,__src);
  return pcVar1;
}



void __aeabi_uidiv(void)

{
  __aeabi_uidiv();
  return;
}



void __strcpy_chk(void)

{
  __strcpy_chk();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memchr(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memchr(__s,__c,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = strtol(__nptr,__endptr,__base);
  return lVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = strchr(__s,__c);
  return pcVar1;
}



void __memcpy_chk(void)

{
  __memcpy_chk();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = strncmp(__s1,__s2,__n);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = atoi(__nptr);
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

void abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = strrchr(__s,__c);
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

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = fputc(__c,__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = fopen(__filename,__modes);
  return pFVar1;
}



void FUN_000123d0(void)

{
  __cxa_finalize(&PTR_LOOP_00026000);
  return;
}



undefined4 FUN_000123f0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = __cxa_atexit(param_1,0,&PTR_LOOP_00026000);
  return uVar1;
}



undefined4 ProbeSubtitleStream(char *param_1,char **param_2,int *param_3)

{
  int __fd;
  byte *pbVar1;
  char *pcVar2;
  char **__s;
  undefined4 uVar3;
  size_t sVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 *__needle;
  char **ppcVar5;
  char *pcVar6;
  int iVar7;
  undefined2 *__src;
  int iStack3360;
  undefined4 uStack3356;
  undefined uStack3352;
  undefined uStack3351;
  undefined uStack3350;
  undefined uStack3349;
  undefined uStack3348;
  undefined uStack3347;
  undefined uStack3346;
  undefined uStack3345;
  undefined4 uStack3344;
  undefined uStack3340;
  undefined uStack3339;
  undefined uStack3338;
  undefined uStack3337;
  undefined uStack3336;
  undefined uStack3335;
  undefined uStack3334;
  undefined uStack3333;
  undefined4 uStack3332;
  undefined uStack3328;
  undefined uStack3327;
  undefined uStack3326;
  undefined uStack3325;
  undefined uStack3324;
  undefined uStack3323;
  undefined uStack3322;
  undefined uStack3321;
  undefined4 uStack3320;
  undefined uStack3316;
  undefined uStack3315;
  undefined uStack3314;
  undefined uStack3313;
  undefined uStack3312;
  undefined uStack3311;
  undefined uStack3310;
  undefined uStack3309;
  undefined4 uStack3308;
  undefined uStack3304;
  undefined uStack3303;
  undefined uStack3302;
  undefined uStack3301;
  undefined uStack3300;
  undefined uStack3299;
  undefined uStack3298;
  undefined uStack3297;
  undefined4 uStack3296;
  undefined uStack3292;
  undefined uStack3291;
  undefined uStack3290;
  undefined uStack3289;
  undefined uStack3288;
  undefined uStack3287;
  undefined uStack3286;
  undefined uStack3285;
  undefined4 uStack3284;
  undefined uStack3280;
  undefined uStack3279;
  undefined uStack3278;
  undefined uStack3277;
  undefined uStack3276;
  undefined uStack3275;
  undefined uStack3274;
  undefined uStack3273;
  undefined4 uStack3272;
  undefined uStack3268;
  undefined uStack3267;
  undefined uStack3266;
  undefined uStack3265;
  undefined uStack3264;
  undefined uStack3263;
  undefined uStack3262;
  undefined uStack3261;
  undefined4 uStack3260;
  undefined4 uStack3256;
  undefined uStack3252;
  undefined uStack3251;
  undefined uStack3250;
  undefined uStack3249;
  undefined4 uStack3248;
  undefined4 uStack3244;
  undefined uStack3240;
  undefined uStack3239;
  undefined uStack3238;
  undefined uStack3237;
  undefined4 uStack3236;
  undefined2 uStack3232;
  undefined2 uStack3230;
  undefined2 uStack3228;
  undefined2 uStack3226;
  undefined4 uStack3224;
  undefined2 uStack3220;
  undefined2 uStack3218;
  undefined2 uStack3216;
  undefined2 uStack3214;
  undefined4 uStack3212;
  undefined2 uStack3208;
  undefined2 uStack3206;
  undefined2 uStack3204;
  undefined2 uStack3202;
  undefined4 auStack3200 [21];
  undefined2 uStack3116;
  undefined uStack3114;
  byte abStack1068 [1024];
  int iStack44;
  
  iStack44 = __stack_chk_guard;
  memset(&uStack3116,0,0x800);
  memset(&uStack3356,0,0xf0);
  uStack3356 = 0x2e676e45;
  uStack3334 = 0;
  uStack3351 = 0;
  uStack3352 = 0;
  uStack3344 = 0x2e736843;
  uStack3333 = 0;
  uStack3350 = 0;
  uStack3340 = 0;
  uStack3332 = 0x2e746843;
  uStack3349 = 0;
  uStack3348 = 0;
  uStack3328 = 0;
  uStack3320 = 0x2e6e6843;
  uStack3347 = 0;
  uStack3346 = 0;
  uStack3345 = 0;
  uStack3339 = 0;
  uStack3338 = 0;
  uStack3337 = 0;
  uStack3336 = 0;
  uStack3335 = 0;
  uStack3327 = 0;
  uStack3326 = 0;
  uStack3325 = 0;
  uStack3324 = 0;
  uStack3323 = 0;
  uStack3322 = 0;
  uStack3321 = 0;
  uStack3316 = 0;
  uStack3308 = 0x2e676e65;
  uStack3286 = 0;
  uStack3315 = 0;
  uStack3304 = 0;
  uStack3296 = 0x2e736863;
  uStack3285 = 0;
  uStack3314 = 0;
  uStack3292 = 0;
  uStack3284 = 0x2e746863;
  uStack3313 = 0;
  uStack3312 = 0;
  uStack3311 = 0;
  uStack3310 = 0;
  uStack3309 = 0;
  uStack3303 = 0;
  uStack3302 = 0;
  uStack3301 = 0;
  uStack3300 = 0;
  uStack3299 = 0;
  uStack3298 = 0;
  uStack3297 = 0;
  uStack3291 = 0;
  uStack3290 = 0;
  uStack3289 = 0;
  uStack3288 = 0;
  uStack3287 = 0;
  uStack3280 = 0;
  uStack3272 = 0x2e6e6863;
  uStack3279 = 0;
  uStack3278 = 0;
  uStack3268 = 0;
  uStack3260 = 0x6c676e45;
  uStack3256 = 0x2e687369;
  uStack3277 = 0;
  uStack3276 = 0;
  uStack3275 = 0;
  uStack3252 = 0;
  uStack3248 = 0x6e696843;
  uStack3244 = 0x2e657365;
  uStack3274 = 0;
  uStack3273 = 0;
  uStack3267 = 0;
  uStack3266 = 0;
  uStack3240 = 0;
  uStack3265 = 0;
  uStack3264 = 0;
  uStack3263 = 0;
  uStack3262 = 0;
  uStack3261 = 0;
  uStack3251 = 0;
  uStack3250 = 0;
  uStack3249 = 0;
  uStack3239 = 0;
  uStack3236 = 0x62617241;
  uStack3238 = 0;
  uStack3237 = 0;
  uStack3232 = 0x2e;
  uStack3224 = 0x62617261;
  uStack3230 = 0;
  uStack3228 = 0;
  uStack3220 = 0x2e;
  uStack3212 = 0x74656976;
  uStack3226 = 0;
  uStack3218 = 0;
  uStack3208 = 0x2e;
  uStack3216 = 0;
  uStack3214 = 0;
  uStack3206 = 0;
  uStack3204 = 0;
  uStack3202 = 0;
  iStack3360 = 0;
  memset(abStack1068,0,0x400);
  if (param_1 == (char *)0x0) {
    __android_log_print(6,"subProbe",&DAT_0002271c,"ProbeSubtitleStreamImpl",0xe7);
    uVar3 = 0xffffffff;
  }
  else {
    __fd = open(param_1,0,0);
    if (__fd < 0) {
      __android_log_print(6,"subProbe",&DAT_000226e4,"ProbeSubtitleStreamImpl",0xe1);
      uVar3 = 0xffffffff;
    }
    else {
      iVar7 = 99;
      uVar3 = extraout_r1;
      do {
        pbVar1 = stream_read_line(__fd,uVar3,0,0,-1,-1,abStack1068,0x400,0);
        if (pbVar1 == (byte *)0x0) break;
        pcVar2 = FUN_00012708((char *)abStack1068);
        uVar3 = extraout_r1_00;
        if (pcVar2 != (char *)0x0) {
          pcVar6 = strstr(pcVar2,"<SAMI>");
          if (pcVar6 != (char *)0x0) {
            pcVar2 = (char *)0x1;
            probe_smi_language(__fd,0x10,0,0,-1,-1,(int)&uStack3116,&iStack3360,0x10,0);
            goto LAB_00012ff4;
          }
          pcVar2 = strstr(pcVar2,"langidx:");
          uVar3 = extraout_r1_01;
          if (pcVar2 != (char *)0x0) {
            pcVar2 = (char *)0x2;
            FUN_0001289c(__fd,extraout_r1_01,0,0,-1,-1,(int)&uStack3116,&iStack3360);
            goto LAB_00012ff4;
          }
        }
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      __needle = &uStack3356;
      do {
        pcVar2 = strstr(param_1,(char *)__needle);
        if (pcVar2 != (char *)0x0) {
          iStack3360 = 1;
          sVar4 = strlen((char *)__needle);
          pcVar2 = (char *)0x0;
          __strncpy_chk(&uStack3116,__needle,sVar4 - 1,0x800);
          break;
        }
        __needle = __needle + 3;
      } while (__needle != auStack3200);
LAB_00012ff4:
      if (iStack3360 == 0) {
        sVar4 = 0x104;
        iStack3360 = 1;
        uStack3116 = 0x6e75;
        uStack3114 = 100;
      }
      else {
        if (0xf < iStack3360) {
          iStack3360 = 0x10;
        }
        sVar4 = iStack3360 * 0x104;
      }
      __s = (char **)malloc(sVar4);
      iVar7 = iStack3360;
      if (__s == (char **)0x0) {
        __android_log_print(6,"subProbe",&DAT_00022768,"ProbeSubtitleStreamImpl",0x123);
        uVar3 = 0xffffffff;
      }
      else {
        memset(__s,0,iStack3360 * 0x104);
        if (0 < iVar7) {
          __src = &uStack3116;
          ppcVar5 = __s;
          if (pcVar2 == (char *)0x0) {
            do {
              ppcVar5[0x18] = (char *)0x201;
              *ppcVar5 = pcVar2;
              memcpy(ppcVar5 + 1,__src,0x40);
              ppcVar5[0x11] = (char *)0x1;
              pcVar6 = strdup(param_1);
              ppcVar5[0x17] = pcVar2;
              pcVar2 = pcVar2 + 1;
              ppcVar5[0x13] = (char *)0xffffffff;
              ppcVar5[0x16] = (char *)0xffffffff;
              ppcVar5[0x19] = (char *)0x1;
              ppcVar5[0x1a] = (char *)0x0;
              ppcVar5[0x1b] = (char *)0x0;
              ppcVar5[0x1c] = (char *)0x0;
              ppcVar5[0x3f] = (char *)0x0;
              ppcVar5[0x40] = (char *)0x0;
              ppcVar5[0x12] = pcVar6;
              ppcVar5 = ppcVar5 + 0x41;
              iVar7 = iStack3360;
              __src = __src + 0x20;
            } while ((int)pcVar2 < iStack3360);
          }
          else {
            pcVar6 = (char *)0x0;
            if (pcVar2 == (char *)0x1) {
              do {
                ppcVar5[0x18] = (char *)0x203;
                *ppcVar5 = pcVar6;
                memcpy(ppcVar5 + 1,__src,0x40);
                ppcVar5[0x11] = (char *)0x1;
                pcVar2 = strdup(param_1);
                ppcVar5[0x17] = pcVar6;
                pcVar6 = pcVar6 + 1;
                ppcVar5[0x13] = (char *)0xffffffff;
                ppcVar5[0x16] = (char *)0xffffffff;
                ppcVar5[0x19] = (char *)0x1;
                ppcVar5[0x1a] = (char *)0x0;
                ppcVar5[0x1b] = (char *)0x0;
                ppcVar5[0x1c] = (char *)0x0;
                ppcVar5[0x3f] = (char *)0x0;
                ppcVar5[0x40] = (char *)0x0;
                ppcVar5[0x12] = pcVar2;
                ppcVar5 = ppcVar5 + 0x41;
                iVar7 = iStack3360;
                __src = __src + 0x20;
              } while ((int)pcVar6 < iStack3360);
            }
            else {
              do {
                ppcVar5[0x18] = (char *)0x101;
                *ppcVar5 = pcVar6;
                memcpy(ppcVar5 + 1,__src,0x40);
                ppcVar5[0x11] = (char *)0x1;
                pcVar2 = strdup(param_1);
                ppcVar5[0x17] = pcVar6;
                pcVar6 = pcVar6 + 1;
                ppcVar5[0x13] = (char *)0xffffffff;
                ppcVar5[0x16] = (char *)0xffffffff;
                ppcVar5[0x19] = (char *)0x1;
                ppcVar5[0x1a] = (char *)0x0;
                ppcVar5[0x1b] = (char *)0x0;
                ppcVar5[0x1c] = (char *)0x0;
                ppcVar5[0x3f] = (char *)0x0;
                ppcVar5[0x40] = (char *)0x0;
                ppcVar5[0x12] = pcVar2;
                ppcVar5 = ppcVar5 + 0x41;
                iVar7 = iStack3360;
                __src = __src + 0x20;
              } while ((int)pcVar6 < iStack3360);
            }
          }
        }
        *param_3 = iVar7;
        *param_2 = (char *)__s;
        close(__fd);
        uVar3 = 0;
      }
    }
  }
  if (iStack44 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar3;
}



undefined4
ProbeSubtitleStreamFd(int param_1,byte *param_2,byte *param_3,byte **param_4,int *param_5)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  byte *pbVar4;
  byte **__s;
  size_t __size;
  undefined4 uVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  byte *pbVar6;
  byte **ppbVar7;
  int iVar8;
  undefined2 *puVar9;
  int iStack3120;
  undefined2 uStack3116;
  undefined uStack3114;
  byte abStack1068 [1024];
  int iStack44;
  
  iStack44 = __stack_chk_guard;
  memset(&uStack3116,0,0x800);
  if (-1 < (int)param_2) {
    lseek(param_1,(__off_t)param_2,0);
  }
  iStack3120 = 0;
  memset(abStack1068,0,0x400);
  uVar5 = 0xf308;
  iVar8 = (int)param_2 >> 0x1f;
  iVar1 = (int)param_3 >> 0x1f;
  pbVar6 = (byte *)0x63;
  do {
    pbVar4 = stream_read_line(param_1,uVar5,(int)param_2,iVar8,(int)param_3,iVar1,abStack1068,0x400,
                              0);
    if (pbVar4 == (byte *)0x0) break;
    pcVar2 = FUN_00012708((char *)abStack1068);
    uVar5 = extraout_r1;
    if (pcVar2 != (char *)0x0) {
      pcVar3 = strstr(pcVar2,"<SAMI>");
      if (pcVar3 != (char *)0x0) {
        probe_smi_language(param_1,&iStack3120,(int)param_2,iVar8,(int)param_3,iVar1,
                           (int)&uStack3116,&iStack3120,0x10,0);
        pbVar4 = (byte *)0x1;
        break;
      }
      pcVar3 = strstr(pcVar2,"langidx:");
      if ((pcVar3 != (char *)0x0) ||
         ((pcVar3 = strstr(pcVar2,"id:"), uVar5 = extraout_r1_00, pcVar3 != (char *)0x0 &&
          (pcVar2 = strstr(pcVar2,"index:"), uVar5 = extraout_r1_01, pcVar2 != (char *)0x0)))) {
        FUN_0001289c(param_1,&iStack3120,(int)param_2,iVar8,(int)param_3,iVar1,(int)&uStack3116,
                     &iStack3120);
        pbVar4 = (byte *)0x2;
        break;
      }
    }
    pbVar6 = pbVar6 + -1;
    pbVar4 = pbVar6;
  } while (pbVar6 != (byte *)0x0);
  if (iStack3120 == 0) {
    __size = 0x104;
    iStack3120 = 1;
    uStack3116 = 0x6e75;
    uStack3114 = 100;
  }
  else {
    if (0xf < iStack3120) {
      iStack3120 = 0x10;
    }
    __size = iStack3120 * 0x104;
  }
  __s = (byte **)malloc(__size);
  iVar8 = iStack3120;
  if (__s == (byte **)0x0) {
    __android_log_print(6,"subProbe",&DAT_00022768,"ProbeSubtitleStreamFdImpl",0x194);
    uVar5 = 0xffffffff;
  }
  else {
    memset(__s,0,iStack3120 * 0x104);
    if (0 < iVar8) {
      if (pbVar4 == (byte *)0x0) {
        ppbVar7 = __s;
        puVar9 = &uStack3116;
        do {
          ppbVar7[0x18] = (byte *)0x201;
          *ppbVar7 = pbVar4;
          memcpy(ppbVar7 + 1,puVar9,0x40);
          ppbVar7[0x11] = (byte *)0x1;
          ppbVar7[0x12] = (byte *)0x0;
          pbVar6 = (byte *)dup(param_1);
          ppbVar7[0x17] = pbVar4;
          pbVar4 = pbVar4 + 1;
          ppbVar7[0x15] = param_3;
          ppbVar7[0x19] = (byte *)0x1;
          ppbVar7[0x14] = param_2;
          ppbVar7[0x16] = (byte *)0xffffffff;
          ppbVar7[0x1a] = (byte *)0x0;
          ppbVar7[0x1b] = (byte *)0x0;
          ppbVar7[0x1c] = (byte *)0x0;
          ppbVar7[0x3f] = (byte *)0x0;
          ppbVar7[0x40] = (byte *)0x0;
          ppbVar7[0x13] = pbVar6;
          ppbVar7 = ppbVar7 + 0x41;
          iVar8 = iStack3120;
          puVar9 = puVar9 + 0x20;
        } while ((int)pbVar4 < iStack3120);
      }
      else {
        pbVar6 = (byte *)0x0;
        puVar9 = &uStack3116;
        ppbVar7 = __s;
        if (pbVar4 == (byte *)0x1) {
          do {
            ppbVar7[0x18] = (byte *)0x203;
            *ppbVar7 = pbVar6;
            memcpy(ppbVar7 + 1,puVar9,0x40);
            ppbVar7[0x11] = (byte *)0x1;
            ppbVar7[0x12] = (byte *)0x0;
            pbVar4 = (byte *)dup(param_1);
            ppbVar7[0x17] = pbVar6;
            pbVar6 = pbVar6 + 1;
            ppbVar7[0x15] = param_3;
            ppbVar7[0x19] = (byte *)0x1;
            ppbVar7[0x14] = param_2;
            ppbVar7[0x16] = (byte *)0xffffffff;
            ppbVar7[0x1a] = (byte *)0x0;
            ppbVar7[0x1b] = (byte *)0x0;
            ppbVar7[0x1c] = (byte *)0x0;
            ppbVar7[0x3f] = (byte *)0x0;
            ppbVar7[0x40] = (byte *)0x0;
            ppbVar7[0x13] = pbVar4;
            ppbVar7 = ppbVar7 + 0x41;
            iVar8 = iStack3120;
            puVar9 = puVar9 + 0x20;
          } while ((int)pbVar6 < iStack3120);
        }
        else {
          do {
            ppbVar7[0x18] = (byte *)0x101;
            *ppbVar7 = pbVar6;
            memcpy(ppbVar7 + 1,puVar9,0x40);
            ppbVar7[0x11] = (byte *)0x1;
            ppbVar7[0x12] = (byte *)0x0;
            pbVar4 = (byte *)dup(param_1);
            ppbVar7[0x17] = pbVar6;
            pbVar6 = pbVar6 + 1;
            ppbVar7[0x15] = param_3;
            ppbVar7[0x19] = (byte *)0x1;
            ppbVar7[0x14] = param_2;
            ppbVar7[0x16] = (byte *)0xffffffff;
            ppbVar7[0x1a] = (byte *)0x0;
            ppbVar7[0x1b] = (byte *)0x0;
            ppbVar7[0x1c] = (byte *)0x0;
            ppbVar7[0x3f] = (byte *)0x0;
            ppbVar7[0x40] = (byte *)0x0;
            ppbVar7[0x13] = pbVar4;
            ppbVar7 = ppbVar7 + 0x41;
            iVar8 = iStack3120;
            puVar9 = puVar9 + 0x20;
          } while ((int)pbVar6 < iStack3120);
        }
      }
    }
    *param_5 = iVar8;
    *param_4 = (byte *)__s;
    lseek(param_1,0,0);
    uVar5 = 0;
  }
  if (iStack44 == __stack_chk_guard) {
    return uVar5;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



int * CreateSubtitleDecoder(int *param_1)

{
  int **__ptr;
  int iVar1;
  int **ppiVar2;
  undefined1 *puVar3;
  
  if (param_1 == (int *)0x0) {
    __android_log_print(6,"awplayer",&DAT_00022468,"CreateSubtitleDecoder",0x26);
  }
  else {
    __ptr = (int **)malloc(0xc);
    if (__ptr == (int **)0x0) {
      __android_log_print(6,"awplayer",&DAT_000224a8,"CreateSubtitleDecoder",0x30);
      param_1 = (int *)__ptr;
    }
    else {
      iVar1 = param_1[0x18];
      *__ptr = param_1;
      if (iVar1 == 0x101) {
        puVar3 = SubDecoderIdxsub;
        __ptr[2] = (int *)SubDecoderIdxsub;
      }
      else {
        if (param_1[0x11] == 1) {
          puVar3 = SubDecoderExternal;
          __ptr[2] = (int *)SubDecoderExternal;
        }
        else {
          if (param_1[0x11] == 0) {
            puVar3 = SubDecoderInternal;
            __ptr[2] = (int *)SubDecoderInternal;
          }
          else {
            puVar3 = (undefined1 *)__ptr[2];
          }
        }
      }
      ppiVar2 = (int **)(**(code **)puVar3)(param_1);
      __ptr[1] = (int *)ppiVar2;
      if (ppiVar2 == (int **)0x0) {
        __android_log_print(6,"awplayer",&DAT_000224e4,"CreateSubtitleDecoder",0x48);
        free(__ptr);
        param_1 = (int *)ppiVar2;
      }
      else {
        param_1 = (int *)__ptr;
        if (((*__ptr)[0x11] == 1) && ((*__ptr)[0x18] != 0x101)) {
          (*(code *)__ptr[2][3])(ppiVar2,0);
        }
      }
    }
  }
  return (int *)(int **)param_1;
}



void DestroySubtitleDecoder(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  (**(code **)(*(int *)((int)param_1 + 8) + 4))(*(undefined4 *)((int)param_1 + 4));
  free(param_1);
  return;
}



void ResetSubtitleDecoder(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  (**(code **)(*(int *)(param_1 + 8) + 8))(*(undefined4 *)(param_1 + 4));
  return;
}



undefined4 DecodeSubtitleStream(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    if ((*(int *)(*param_1 + 0x44) == 1) && (*(int *)(*param_1 + 0x60) != 0x101)) {
      __android_log_print(5,"awplayer",
                                                    
                          "<%s:%u>: Warning: should call decode() when sub is external but not IDXSUB!"
                          ,"DecodeSubtitleStream",0x7d);
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = (**(code **)(param_1[2] + 0xc))(param_1[1]);
    }
  }
  return uVar1;
}



void NextSubtitleItem(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  (**(code **)(*(int *)(param_1 + 8) + 0x10))(*(undefined4 *)(param_1 + 4));
  return;
}



void RequestSubtitleItem(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  (**(code **)(*(int *)(param_1 + 8) + 0x14))(*(undefined4 *)(param_1 + 4));
  return;
}



void FlushSubtitleItem(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  (**(code **)(*(int *)(param_1 + 8) + 0x18))(*(undefined4 *)(param_1 + 4));
  return;
}



void EmptySubtitleItemNum(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  (**(code **)(*(int *)(param_1 + 8) + 0x1c))(*(undefined4 *)(param_1 + 4));
  return;
}



char * FUN_00012708(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = (char *)strlen(param_1);
  if ((int)pcVar2 < 1) {
    if (pcVar2 == (char *)0x0) {
      param_1 = pcVar2;
    }
  }
  else {
    if (*param_1 == ' ') {
      pcVar3 = (char *)0x0;
      pcVar1 = param_1 + 1;
      do {
        param_1 = pcVar1;
        pcVar3 = pcVar3 + 1;
        if (pcVar2 == pcVar3) {
          return (char *)0x0;
        }
        pcVar1 = param_1 + 1;
      } while (*param_1 == ' ');
    }
  }
  return param_1;
}



char * FUN_00012768(char *param_1)

{
  char *pcVar1;
  size_t __n;
  int iVar2;
  size_t sVar3;
  char acStack1052 [1024];
  int local_1c;
  
  local_1c = __stack_chk_guard;
  __n = strlen(param_1);
  if ((int)__n < 1) {
    __memset_chk(acStack1052,0,__n,0x400);
  }
  else {
    iVar2 = 0;
    sVar3 = 0;
    do {
      pcVar1 = param_1 + sVar3;
      sVar3 = sVar3 + 1;
      if (*pcVar1 != ' ') {
        acStack1052[iVar2] = *pcVar1;
        iVar2 = iVar2 + 1;
      }
    } while (__n != sVar3);
    memset(acStack1052 + iVar2,0,__n - iVar2);
  }
  memcpy(param_1,acStack1052,__n);
  if (local_1c != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return param_1;
}



byte * FUN_0001282c(byte *param_1,char *param_2)

{
  byte bVar1;
  size_t __n;
  int iVar2;
  byte *pbVar3;
  
  if (param_1 == (byte *)0x0 || param_2 == (char *)0x0) {
    pbVar3 = (byte *)0x0;
  }
  else {
    __n = strlen(param_2);
    bVar1 = *param_1;
    while (pbVar3 = (byte *)(uint)bVar1, pbVar3 != (byte *)0x0) {
      iVar2 = strncasecmp((char *)param_1,param_2,__n);
      if (iVar2 == 0) {
        return param_1;
      }
      bVar1 = param_1[1];
      param_1 = param_1 + 1;
    }
  }
  return pbVar3;
}



void FUN_0001289c(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 int param_6,int param_7,int *param_8)

{
  byte *pbVar1;
  char *__s;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_450;
  char acStack1100 [32];
  byte abStack1068 [1024];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  memset(abStack1068,0,0x400);
  local_450 = 0;
  iVar2 = 0;
  do {
    do {
      while( true ) {
        do {
          iVar4 = iVar2;
          pbVar1 = stream_read_line(param_1,0x400,param_3,param_4,param_5,param_6,abStack1068,0x400,
                                    0);
          if (pbVar1 == (byte *)0x0) goto LAB_000129b4;
          __s = FUN_00012768((char *)abStack1068);
          iVar2 = iVar4;
        } while (*__s == '#');
        iVar2 = sscanf(__s,"id:%32[^,],index:",acStack1100);
        if (iVar2 != 1) break;
        strncpy((char *)(param_7 + *param_8 * 0x40),acStack1100,2);
      }
      iVar2 = 0;
    } while (iVar4 != 1);
    iVar3 = sscanf(__s,"timestamp:%d:%d:%d:%d,filepos:%x",&local_450,&local_450,&local_450,
                   &local_450,&local_450);
    iVar2 = iVar4;
  } while ((iVar3 != 5) || (iVar4 = *param_8, *param_8 = iVar4 + 1, iVar2 = 0, iVar4 + 1 != 0x10));
LAB_000129b4:
  if (local_2c != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void probe_smi_language(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                       int param_6,int param_7,int *param_8,int param_9,int param_10)

{
  byte *pbVar1;
  int iVar2;
  size_t __n;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 local_84c;
  undefined4 local_848;
  undefined4 local_844;
  undefined4 uStack2112;
  undefined4 uStack2108;
  undefined4 uStack2104;
  undefined4 uStack2100;
  undefined4 local_830;
  byte abStack2092 [1024];
  undefined auStack1068 [1024];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  while (pbVar1 = stream_read_line(param_1,0x400,param_3,param_4,param_5,param_6,abStack2092,0x400,
                                   param_10), pbVar1 != (byte *)0x0) {
    pbVar1 = abStack2092;
    do {
      pbVar4 = pbVar1;
      pbVar1 = FUN_0001282c(pbVar4,"CC");
      pbVar3 = FUN_0001282c(pbVar4,".SUBTTL");
      if ((pbVar1 == (byte *)0x0) || (pbVar1 < pbVar4 + 3)) {
        if (pbVar3 == (byte *)0x0) {
          pbVar1 = FUN_0001282c(pbVar4,"</STYLE");
          goto joined_r0x00012c4c;
        }
LAB_00012ad4:
        local_830 = 0;
        uStack2100 = 0;
        uStack2104 = 0;
        uStack2108 = 0;
        uStack2112 = 0;
        local_844 = 0;
        local_848 = 0;
        local_84c = 0;
        pbVar1 = (byte *)FUN_00012768((char *)pbVar3);
        iVar2 = sscanf((char *)pbVar1,".%1024[^{]{Name:%1024[^;];%1024[lL]ang:%32[^;]",auStack1068,
                       auStack1068,auStack1068,&local_84c);
        if (0 < iVar2) goto LAB_00012afc;
LAB_00012bec:
        iVar2 = *param_8;
      }
      else {
        uStack2112 = 0;
        local_84c = 0;
        uStack2108 = 0;
        local_848 = 0;
        uStack2104 = 0;
        local_844 = 0;
        uStack2100 = 0;
        local_830 = 0;
        if (pbVar3 != (byte *)0x0) goto LAB_00012ad4;
        pbVar1 = (byte *)FUN_00012768((char *)(pbVar1 + -3));
        iVar2 = sscanf((char *)pbVar1,".%1024[^C]CC{Name:%1024[^;];%1024[lL]ang:%32[^;]",auStack1068
                       ,auStack1068,auStack1068,&local_84c);
        if (iVar2 < 4) goto LAB_00012bec;
LAB_00012afc:
        if (param_7 != 0) {
          iVar2 = *param_8;
          __n = __strlen_chk(&local_84c,0x20);
          strncpy((char *)(param_7 + iVar2 * 0x40),(char *)&local_84c,__n);
        }
        iVar2 = *param_8 + 1;
        *param_8 = iVar2;
      }
      if (param_9 <= iVar2) goto LAB_00012bfc;
      pbVar1 = FUN_0001282c(pbVar1,"}");
    } while (pbVar1 != (byte *)0x0);
    pbVar1 = FUN_0001282c(pbVar4,"</STYLE");
joined_r0x00012c4c:
    if (pbVar1 != (byte *)0x0) break;
  }
LAB_00012bfc:
  if (local_2c != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



undefined4 ProbeSubtitleStreamImpl(char *param_1,char **param_2,int *param_3)

{
  int __fd;
  byte *pbVar1;
  char *pcVar2;
  char **__s;
  undefined4 uVar3;
  size_t sVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 *__needle;
  char **ppcVar5;
  char *pcVar6;
  int iVar7;
  undefined2 *__src;
  int local_d20;
  undefined4 local_d1c;
  undefined local_d18;
  undefined local_d17;
  undefined local_d16;
  undefined local_d15;
  undefined local_d14;
  undefined local_d13;
  undefined local_d12;
  undefined local_d11;
  undefined4 local_d10;
  undefined local_d0c;
  undefined local_d0b;
  undefined local_d0a;
  undefined local_d09;
  undefined local_d08;
  undefined local_d07;
  undefined uStack3334;
  undefined local_d05;
  undefined4 local_d04;
  undefined local_d00;
  undefined local_cff;
  undefined local_cfe;
  undefined local_cfd;
  undefined local_cfc;
  undefined local_cfb;
  undefined local_cfa;
  undefined local_cf9;
  undefined4 local_cf8;
  undefined local_cf4;
  undefined local_cf3;
  undefined local_cf2;
  undefined local_cf1;
  undefined local_cf0;
  undefined local_cef;
  undefined local_cee;
  undefined local_ced;
  undefined4 local_cec;
  undefined local_ce8;
  undefined local_ce7;
  undefined local_ce6;
  undefined local_ce5;
  undefined local_ce4;
  undefined local_ce3;
  undefined local_ce2;
  undefined local_ce1;
  undefined4 local_ce0;
  undefined local_cdc;
  undefined local_cdb;
  undefined local_cda;
  undefined local_cd9;
  undefined local_cd8;
  undefined local_cd7;
  undefined uStack3286;
  undefined local_cd5;
  undefined4 local_cd4;
  undefined local_cd0;
  undefined local_ccf;
  undefined local_cce;
  undefined local_ccd;
  undefined local_ccc;
  undefined local_ccb;
  undefined local_cca;
  undefined local_cc9;
  undefined4 local_cc8;
  undefined local_cc4;
  undefined local_cc3;
  undefined local_cc2;
  undefined local_cc1;
  undefined local_cc0;
  undefined local_cbf;
  undefined local_cbe;
  undefined local_cbd;
  undefined4 local_cbc;
  undefined4 uStack3256;
  undefined local_cb4;
  undefined local_cb3;
  undefined local_cb2;
  undefined local_cb1;
  undefined4 local_cb0;
  undefined4 uStack3244;
  undefined local_ca8;
  undefined local_ca7;
  undefined local_ca6;
  undefined local_ca5;
  undefined4 local_ca4;
  undefined2 local_ca0;
  undefined2 local_c9e;
  undefined2 local_c9c;
  undefined2 local_c9a;
  undefined4 local_c98;
  undefined2 local_c94;
  undefined2 local_c92;
  undefined2 local_c90;
  undefined2 local_c8e;
  undefined4 local_c8c;
  undefined2 local_c88;
  undefined2 local_c86;
  undefined2 local_c84;
  undefined2 local_c82;
  undefined4 auStack3200 [21];
  undefined2 local_c2c;
  undefined local_c2a;
  byte abStack1068 [1024];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  memset(&local_c2c,0,0x800);
  memset(&local_d1c,0,0xf0);
  local_d1c = 0x2e676e45;
  uStack3334 = 0;
  local_d17 = 0;
  local_d18 = 0;
  local_d10 = 0x2e736843;
  local_d05 = 0;
  local_d16 = 0;
  local_d0c = 0;
  local_d04 = 0x2e746843;
  local_d15 = 0;
  local_d14 = 0;
  local_d00 = 0;
  local_cf8 = 0x2e6e6843;
  local_d13 = 0;
  local_d12 = 0;
  local_d11 = 0;
  local_d0b = 0;
  local_d0a = 0;
  local_d09 = 0;
  local_d08 = 0;
  local_d07 = 0;
  local_cff = 0;
  local_cfe = 0;
  local_cfd = 0;
  local_cfc = 0;
  local_cfb = 0;
  local_cfa = 0;
  local_cf9 = 0;
  local_cf4 = 0;
  local_cec = 0x2e676e65;
  uStack3286 = 0;
  local_cf3 = 0;
  local_ce8 = 0;
  local_ce0 = 0x2e736863;
  local_cd5 = 0;
  local_cf2 = 0;
  local_cdc = 0;
  local_cd4 = 0x2e746863;
  local_cf1 = 0;
  local_cf0 = 0;
  local_cef = 0;
  local_cee = 0;
  local_ced = 0;
  local_ce7 = 0;
  local_ce6 = 0;
  local_ce5 = 0;
  local_ce4 = 0;
  local_ce3 = 0;
  local_ce2 = 0;
  local_ce1 = 0;
  local_cdb = 0;
  local_cda = 0;
  local_cd9 = 0;
  local_cd8 = 0;
  local_cd7 = 0;
  local_cd0 = 0;
  local_cc8 = 0x2e6e6863;
  local_ccf = 0;
  local_cce = 0;
  local_cc4 = 0;
  local_cbc = 0x6c676e45;
  uStack3256 = 0x2e687369;
  local_ccd = 0;
  local_ccc = 0;
  local_ccb = 0;
  local_cb4 = 0;
  local_cb0 = 0x6e696843;
  uStack3244 = 0x2e657365;
  local_cca = 0;
  local_cc9 = 0;
  local_cc3 = 0;
  local_cc2 = 0;
  local_ca8 = 0;
  local_cc1 = 0;
  local_cc0 = 0;
  local_cbf = 0;
  local_cbe = 0;
  local_cbd = 0;
  local_cb3 = 0;
  local_cb2 = 0;
  local_cb1 = 0;
  local_ca7 = 0;
  local_ca4 = 0x62617241;
  local_ca6 = 0;
  local_ca5 = 0;
  local_ca0 = 0x2e;
  local_c98 = 0x62617261;
  local_c9e = 0;
  local_c9c = 0;
  local_c94 = 0x2e;
  local_c8c = 0x74656976;
  local_c9a = 0;
  local_c92 = 0;
  local_c88 = 0x2e;
  local_c90 = 0;
  local_c8e = 0;
  local_c86 = 0;
  local_c84 = 0;
  local_c82 = 0;
  local_d20 = 0;
  memset(abStack1068,0,0x400);
  if (param_1 == (char *)0x0) {
    __android_log_print(6,"subProbe",&DAT_0002271c,"ProbeSubtitleStreamImpl",0xe7);
    uVar3 = 0xffffffff;
  }
  else {
    __fd = open(param_1,0,0);
    if (__fd < 0) {
      __android_log_print(6,"subProbe",&DAT_000226e4,"ProbeSubtitleStreamImpl",0xe1);
      uVar3 = 0xffffffff;
    }
    else {
      iVar7 = 99;
      uVar3 = extraout_r1;
      do {
        pbVar1 = stream_read_line(__fd,uVar3,0,0,-1,-1,abStack1068,0x400,0);
        if (pbVar1 == (byte *)0x0) break;
        pcVar2 = FUN_00012708((char *)abStack1068);
        uVar3 = extraout_r1_00;
        if (pcVar2 != (char *)0x0) {
          pcVar6 = strstr(pcVar2,"<SAMI>");
          if (pcVar6 != (char *)0x0) {
            pcVar2 = (char *)0x1;
            probe_smi_language(__fd,0x10,0,0,-1,-1,(int)&local_c2c,&local_d20,0x10,0);
            goto LAB_00012ff4;
          }
          pcVar2 = strstr(pcVar2,"langidx:");
          uVar3 = extraout_r1_01;
          if (pcVar2 != (char *)0x0) {
            pcVar2 = (char *)0x2;
            FUN_0001289c(__fd,extraout_r1_01,0,0,-1,-1,(int)&local_c2c,&local_d20);
            goto LAB_00012ff4;
          }
        }
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      __needle = &local_d1c;
      do {
        pcVar2 = strstr(param_1,(char *)__needle);
        if (pcVar2 != (char *)0x0) {
          local_d20 = 1;
          sVar4 = strlen((char *)__needle);
          pcVar2 = (char *)0x0;
          __strncpy_chk(&local_c2c,__needle,sVar4 - 1,0x800);
          break;
        }
        __needle = __needle + 3;
      } while (__needle != auStack3200);
LAB_00012ff4:
      if (local_d20 == 0) {
        sVar4 = 0x104;
        local_d20 = 1;
        local_c2c = 0x6e75;
        local_c2a = 100;
      }
      else {
        if (0xf < local_d20) {
          local_d20 = 0x10;
        }
        sVar4 = local_d20 * 0x104;
      }
      __s = (char **)malloc(sVar4);
      iVar7 = local_d20;
      if (__s == (char **)0x0) {
        __android_log_print(6,"subProbe",&DAT_00022768,"ProbeSubtitleStreamImpl",0x123);
        uVar3 = 0xffffffff;
      }
      else {
        memset(__s,0,local_d20 * 0x104);
        if (0 < iVar7) {
          __src = &local_c2c;
          ppcVar5 = __s;
          if (pcVar2 == (char *)0x0) {
            do {
              ppcVar5[0x18] = (char *)0x201;
              *ppcVar5 = pcVar2;
              memcpy(ppcVar5 + 1,__src,0x40);
              ppcVar5[0x11] = (char *)0x1;
              pcVar6 = strdup(param_1);
              ppcVar5[0x17] = pcVar2;
              pcVar2 = pcVar2 + 1;
              ppcVar5[0x13] = (char *)0xffffffff;
              ppcVar5[0x16] = (char *)0xffffffff;
              ppcVar5[0x19] = (char *)0x1;
              ppcVar5[0x1a] = (char *)0x0;
              ppcVar5[0x1b] = (char *)0x0;
              ppcVar5[0x1c] = (char *)0x0;
              ppcVar5[0x3f] = (char *)0x0;
              ppcVar5[0x40] = (char *)0x0;
              ppcVar5[0x12] = pcVar6;
              ppcVar5 = ppcVar5 + 0x41;
              iVar7 = local_d20;
              __src = __src + 0x20;
            } while ((int)pcVar2 < local_d20);
          }
          else {
            pcVar6 = (char *)0x0;
            if (pcVar2 == (char *)0x1) {
              do {
                ppcVar5[0x18] = (char *)0x203;
                *ppcVar5 = pcVar6;
                memcpy(ppcVar5 + 1,__src,0x40);
                ppcVar5[0x11] = (char *)0x1;
                pcVar2 = strdup(param_1);
                ppcVar5[0x17] = pcVar6;
                pcVar6 = pcVar6 + 1;
                ppcVar5[0x13] = (char *)0xffffffff;
                ppcVar5[0x16] = (char *)0xffffffff;
                ppcVar5[0x19] = (char *)0x1;
                ppcVar5[0x1a] = (char *)0x0;
                ppcVar5[0x1b] = (char *)0x0;
                ppcVar5[0x1c] = (char *)0x0;
                ppcVar5[0x3f] = (char *)0x0;
                ppcVar5[0x40] = (char *)0x0;
                ppcVar5[0x12] = pcVar2;
                ppcVar5 = ppcVar5 + 0x41;
                iVar7 = local_d20;
                __src = __src + 0x20;
              } while ((int)pcVar6 < local_d20);
            }
            else {
              do {
                ppcVar5[0x18] = (char *)0x101;
                *ppcVar5 = pcVar6;
                memcpy(ppcVar5 + 1,__src,0x40);
                ppcVar5[0x11] = (char *)0x1;
                pcVar2 = strdup(param_1);
                ppcVar5[0x17] = pcVar6;
                pcVar6 = pcVar6 + 1;
                ppcVar5[0x13] = (char *)0xffffffff;
                ppcVar5[0x16] = (char *)0xffffffff;
                ppcVar5[0x19] = (char *)0x1;
                ppcVar5[0x1a] = (char *)0x0;
                ppcVar5[0x1b] = (char *)0x0;
                ppcVar5[0x1c] = (char *)0x0;
                ppcVar5[0x3f] = (char *)0x0;
                ppcVar5[0x40] = (char *)0x0;
                ppcVar5[0x12] = pcVar2;
                ppcVar5 = ppcVar5 + 0x41;
                iVar7 = local_d20;
                __src = __src + 0x20;
              } while ((int)pcVar6 < local_d20);
            }
          }
        }
        *param_3 = iVar7;
        *param_2 = (char *)__s;
        close(__fd);
        uVar3 = 0;
      }
    }
  }
  if (local_2c != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar3;
}



undefined4
ProbeSubtitleStreamFdImpl(int param_1,byte *param_2,byte *param_3,byte **param_4,int *param_5)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  byte *pbVar4;
  byte **__s;
  size_t __size;
  undefined4 uVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  byte *pbVar6;
  byte **ppbVar7;
  int iVar8;
  undefined2 *puVar9;
  int local_c30;
  undefined2 local_c2c;
  undefined local_c2a;
  byte abStack1068 [1024];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  memset(&local_c2c,0,0x800);
  if (-1 < (int)param_2) {
    lseek(param_1,(__off_t)param_2,0);
  }
  local_c30 = 0;
  memset(abStack1068,0,0x400);
  uVar5 = 0xf308;
  iVar8 = (int)param_2 >> 0x1f;
  iVar1 = (int)param_3 >> 0x1f;
  pbVar6 = (byte *)0x63;
  do {
    pbVar4 = stream_read_line(param_1,uVar5,(int)param_2,iVar8,(int)param_3,iVar1,abStack1068,0x400,
                              0);
    if (pbVar4 == (byte *)0x0) break;
    pcVar2 = FUN_00012708((char *)abStack1068);
    uVar5 = extraout_r1;
    if (pcVar2 != (char *)0x0) {
      pcVar3 = strstr(pcVar2,"<SAMI>");
      if (pcVar3 != (char *)0x0) {
        probe_smi_language(param_1,&local_c30,(int)param_2,iVar8,(int)param_3,iVar1,(int)&local_c2c,
                           &local_c30,0x10,0);
        pbVar4 = (byte *)0x1;
        break;
      }
      pcVar3 = strstr(pcVar2,"langidx:");
      if ((pcVar3 != (char *)0x0) ||
         ((pcVar3 = strstr(pcVar2,"id:"), uVar5 = extraout_r1_00, pcVar3 != (char *)0x0 &&
          (pcVar2 = strstr(pcVar2,"index:"), uVar5 = extraout_r1_01, pcVar2 != (char *)0x0)))) {
        FUN_0001289c(param_1,&local_c30,(int)param_2,iVar8,(int)param_3,iVar1,(int)&local_c2c,
                     &local_c30);
        pbVar4 = (byte *)0x2;
        break;
      }
    }
    pbVar6 = pbVar6 + -1;
    pbVar4 = pbVar6;
  } while (pbVar6 != (byte *)0x0);
  if (local_c30 == 0) {
    __size = 0x104;
    local_c30 = 1;
    local_c2c = 0x6e75;
    local_c2a = 100;
  }
  else {
    if (0xf < local_c30) {
      local_c30 = 0x10;
    }
    __size = local_c30 * 0x104;
  }
  __s = (byte **)malloc(__size);
  iVar8 = local_c30;
  if (__s == (byte **)0x0) {
    __android_log_print(6,"subProbe",&DAT_00022768,"ProbeSubtitleStreamFdImpl",0x194);
    uVar5 = 0xffffffff;
  }
  else {
    memset(__s,0,local_c30 * 0x104);
    if (0 < iVar8) {
      if (pbVar4 == (byte *)0x0) {
        ppbVar7 = __s;
        puVar9 = &local_c2c;
        do {
          ppbVar7[0x18] = (byte *)0x201;
          *ppbVar7 = pbVar4;
          memcpy(ppbVar7 + 1,puVar9,0x40);
          ppbVar7[0x11] = (byte *)0x1;
          ppbVar7[0x12] = (byte *)0x0;
          pbVar6 = (byte *)dup(param_1);
          ppbVar7[0x17] = pbVar4;
          pbVar4 = pbVar4 + 1;
          ppbVar7[0x15] = param_3;
          ppbVar7[0x19] = (byte *)0x1;
          ppbVar7[0x14] = param_2;
          ppbVar7[0x16] = (byte *)0xffffffff;
          ppbVar7[0x1a] = (byte *)0x0;
          ppbVar7[0x1b] = (byte *)0x0;
          ppbVar7[0x1c] = (byte *)0x0;
          ppbVar7[0x3f] = (byte *)0x0;
          ppbVar7[0x40] = (byte *)0x0;
          ppbVar7[0x13] = pbVar6;
          ppbVar7 = ppbVar7 + 0x41;
          iVar8 = local_c30;
          puVar9 = puVar9 + 0x20;
        } while ((int)pbVar4 < local_c30);
      }
      else {
        pbVar6 = (byte *)0x0;
        puVar9 = &local_c2c;
        ppbVar7 = __s;
        if (pbVar4 == (byte *)0x1) {
          do {
            ppbVar7[0x18] = (byte *)0x203;
            *ppbVar7 = pbVar6;
            memcpy(ppbVar7 + 1,puVar9,0x40);
            ppbVar7[0x11] = (byte *)0x1;
            ppbVar7[0x12] = (byte *)0x0;
            pbVar4 = (byte *)dup(param_1);
            ppbVar7[0x17] = pbVar6;
            pbVar6 = pbVar6 + 1;
            ppbVar7[0x15] = param_3;
            ppbVar7[0x19] = (byte *)0x1;
            ppbVar7[0x14] = param_2;
            ppbVar7[0x16] = (byte *)0xffffffff;
            ppbVar7[0x1a] = (byte *)0x0;
            ppbVar7[0x1b] = (byte *)0x0;
            ppbVar7[0x1c] = (byte *)0x0;
            ppbVar7[0x3f] = (byte *)0x0;
            ppbVar7[0x40] = (byte *)0x0;
            ppbVar7[0x13] = pbVar4;
            ppbVar7 = ppbVar7 + 0x41;
            iVar8 = local_c30;
            puVar9 = puVar9 + 0x20;
          } while ((int)pbVar6 < local_c30);
        }
        else {
          do {
            ppbVar7[0x18] = (byte *)0x101;
            *ppbVar7 = pbVar6;
            memcpy(ppbVar7 + 1,puVar9,0x40);
            ppbVar7[0x11] = (byte *)0x1;
            ppbVar7[0x12] = (byte *)0x0;
            pbVar4 = (byte *)dup(param_1);
            ppbVar7[0x17] = pbVar6;
            pbVar6 = pbVar6 + 1;
            ppbVar7[0x15] = param_3;
            ppbVar7[0x19] = (byte *)0x1;
            ppbVar7[0x14] = param_2;
            ppbVar7[0x16] = (byte *)0xffffffff;
            ppbVar7[0x1a] = (byte *)0x0;
            ppbVar7[0x1b] = (byte *)0x0;
            ppbVar7[0x1c] = (byte *)0x0;
            ppbVar7[0x3f] = (byte *)0x0;
            ppbVar7[0x40] = (byte *)0x0;
            ppbVar7[0x13] = pbVar4;
            ppbVar7 = ppbVar7 + 0x41;
            iVar8 = local_c30;
            puVar9 = puVar9 + 0x20;
          } while ((int)pbVar6 < local_c30);
        }
      }
    }
    *param_5 = iVar8;
    *param_4 = (byte *)__s;
    lseek(param_1,0,0);
    uVar5 = 0;
  }
  if (local_2c == __stack_chk_guard) {
    return uVar5;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



uint * SubExternalNextSubItemInfo(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  puVar1 = param_1;
  if ((param_1 != (uint *)0x0) &&
     (puVar1 = (uint *)param_1[param_1[0x18a] + 5], puVar1 != (uint *)0x0)) {
    uVar5 = puVar1[1];
    uVar3 = param_1[0x18b];
    if (uVar3 < uVar5) {
      uVar2 = *puVar1;
      puVar1 = (uint *)(uVar2 + uVar3 * 0xb8);
      uVar4 = puVar1[0x28];
      *(uint *)(uVar2 + uVar3 * 0xb8) = uVar3;
      if ((int)uVar4 < 1) {
        uVar3 = uVar3 + 1;
        puVar1 = (uint *)(uVar3 * 0xb8 + uVar2);
        while (uVar3 < uVar5) {
          *puVar1 = uVar3;
          if (0 < (int)puVar1[0x28]) {
            param_1[0x18b] = uVar3;
            return puVar1;
          }
          uVar3 = uVar3 + 1;
          puVar1 = puVar1 + 0x2e;
        }
        param_1[0x18b] = uVar3;
        puVar1 = (uint *)0x0;
      }
    }
    else {
      puVar1 = (uint *)0x0;
    }
  }
  return puVar1;
}



int * SubExternalReqeustSubItem(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = param_1;
  if ((param_1 != (int *)0x0) && (piVar1 = (int *)param_1[param_1[0x18a] + 5], piVar1 != (int *)0x0)
     ) {
    uVar2 = param_1[0x18b];
    if (uVar2 < (uint)piVar1[1]) {
      iVar3 = *piVar1;
      *(uint *)(iVar3 + uVar2 * 0xb8) = uVar2;
      param_1[0x18b] = uVar2 + 1;
      piVar1 = (int *)(iVar3 + uVar2 * 0xb8);
    }
    else {
      piVar1 = (int *)0x0;
    }
  }
  return piVar1;
}



void SubExternalFlushSubItem(void)

{
  return;
}



void SubExternalReset(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  if ((param_1 != 0) &&
     (piVar1 = *(int **)(param_1 + *(int *)(param_1 + 0x628) * 4 + 0x14), piVar1 != (int *)0x0)) {
    uVar4 = *(uint *)(param_1 + 0x62c);
    iVar2 = *piVar1;
    *(undefined4 *)(param_1 + 0xa30) = 0;
    iVar2 = uVar4 * 0xb8 + iVar2;
    iVar3 = *(int *)(iVar2 + 0xc);
    bVar5 = param_3 <= *(uint *)(iVar2 + 8);
    if ((int)(iVar3 - (param_4 + !bVar5)) < 0 ==
        (iVar3 < 0 == -1 < (int)param_4 && (int)(iVar3 + ~param_4 + (uint)bVar5) < 0 != iVar3 < 0))
    {
      uVar4 = uVar4 >> 1;
    }
    else {
      uVar4 = uVar4 + (piVar1[1] - uVar4 >> 1);
    }
    *(uint *)(param_1 + 0x62c) = uVar4;
    sub_select_update_idx(param_1,piVar1,param_3,param_4);
    return;
  }
  return;
}



undefined4 SubExternalDecode(int param_1)

{
  byte *__fd;
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  void *pvVar4;
  int *piVar5;
  uint *puVar6;
  void **ppvVar7;
  uint uVar8;
  void **ppvVar9;
  void **ppvVar10;
  uint uVar11;
  uint uVar12;
  code **ppcVar13;
  int iVar14;
  int iVar15;
  __off_t __offset;
  undefined4 uVar16;
  void **ppvVar17;
  bool bVar18;
  int local_218;
  int local_208;
  uint local_200;
  uint local_1fc;
  int local_1f8;
  void *local_1f4 [31];
  void *apvStack376 [33];
  code *apcStack244 [52];
  
  ppvVar10 = apvStack376 + 1;
  local_1fc = 0;
  local_1f8 = 0;
  memset(ppvVar10,0,0x80);
  memcpy(apcStack244,&PTR_sub_read_line_sami_00026004,0xcc);
  if (param_1 == 0) {
    return 0xffffffff;
  }
  __fd = (byte *)open_stream(*(int *)(param_1 + 0xa40));
  if ((int)__fd < 0) goto LAB_00013b78;
  __offset = *(__off_t *)(param_1 + 0xa48);
  uVar16 = *(undefined4 *)(param_1 + 0xa4c);
  iVar14 = *(int *)(param_1 + 0xa58);
  iVar15 = *(int *)(param_1 + 0xa5c);
  lseek(*(int *)(param_1 + 0xa40),__offset,0);
  local_208 = 0;
  do {
    local_1fc = 0;
    iVar1 = sub_format_autodetect(param_1,__fd,local_208,&local_1fc);
    *(int *)(param_1 + 8) = iVar1;
    if (iVar1 != -1) {
      if ((local_208 != 0) || (local_1fc == 0xefbbbf)) {
        *(undefined4 *)(param_1 + 4) = 1;
      }
      goto LAB_00013adc;
    }
    local_208 = local_208 + 1;
    lseek((int)__fd,*(__off_t *)(param_1 + 0xa48),0);
  } while (local_208 != 3);
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == -1) goto LAB_00013b78;
LAB_00013adc:
  if (iVar1 == 1) {
    lseek((int)__fd,*(__off_t *)(param_1 + 0xa48),0);
    sub_ssa_ass_parse_info(param_1,(int)__fd,local_208);
    iVar14 = *(int *)(param_1 + 0x10);
LAB_00013af0:
    iVar15 = *(int *)(param_1 + 8);
    ppcVar13 = apcStack244 + iVar15 * 3;
    if (iVar14 != 0) goto LAB_00013b10;
  }
  else {
    if (iVar1 != 0) {
      iVar14 = *(int *)(param_1 + 0x10);
      goto LAB_00013af0;
    }
    lseek((int)__fd,*(__off_t *)(param_1 + 0xa48),0);
    if (*(char *)(param_1 + 0xa39) == '\x01') {
      probe_smi_language((int)__fd,0x20,__offset,uVar16,iVar14,iVar15,0,&local_1f8,0x20,local_208);
      *(int *)(param_1 + 0x10) = local_1f8;
      iVar14 = local_1f8;
      goto LAB_00013af0;
    }
    *(undefined4 *)(param_1 + 0x10) = 1;
    ppcVar13 = apcStack244 + *(int *)(param_1 + 8) * 3;
LAB_00013b10:
    ppvVar9 = apvStack376;
    uVar12 = 0;
    do {
      uVar11 = uVar12 + 1;
      puVar2 = (undefined4 *)malloc(8);
      *(undefined4 **)(param_1 + uVar12 * 4 + 0x14) = puVar2;
      *puVar2 = 0;
      puVar2[1] = 0;
      pvVar3 = malloc(0x1700);
      ppvVar9 = ppvVar9 + 1;
      *ppvVar9 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_00013b78;
      memset(pvVar3,0,0x1700);
      uVar12 = uVar11;
    } while (uVar11 < *(uint *)(param_1 + 0x10));
    iVar15 = *(int *)(param_1 + 8);
  }
  pvVar3 = (void *)0x0;
  local_218 = 0x20;
  uVar12 = 0;
  if (iVar15 == 0) goto LAB_00013d14;
LAB_00013bb0:
  iVar14 = *(int *)(param_1 + 0x10);
  if (iVar14 != 0) {
    iVar15 = 0;
    do {
      *(uint *)((int)local_1f4 + iVar15) = *(int *)((int)ppvVar10 + iVar15) + uVar12 * 0xb8;
      iVar15 = iVar15 + 4;
    } while (iVar15 != iVar14 * 4);
  }
  iVar14 = (**ppcVar13)(param_1,__fd);
  if (iVar14 != 0) {
    uVar11 = *(uint *)(param_1 + 0x10);
    local_200 = 0;
    if (uVar11 != 0) {
      do {
        pvVar3 = sub_post_process(param_1,uVar12,apvStack376[local_200 + 1],local_1f4[local_200]);
        uVar11 = *(uint *)(param_1 + 0x10);
        local_200 = local_200 + 1;
      } while (local_200 < uVar11);
    }
    if (pvVar3 == (void *)0xffffffff) goto LAB_00013c70;
LAB_00013c6c:
    do {
      uVar12 = uVar12 + 1;
LAB_00013c70:
      while( true ) {
        do {
          if (local_218 <= (int)uVar12) {
            local_218 = local_218 + 0x10;
            local_200 = 0;
            if (uVar11 != 0) {
              do {
                pvVar4 = realloc(apvStack376[local_200 + 1],local_218 * 0xb8);
                apvStack376[local_200 + 1] = pvVar4;
                memset((void *)((int)apvStack376[local_200 + 1] + (local_218 * 0xb8 - 0xb80U)),0,
                       0xb80);
                local_200 = local_200 + 1;
              } while (local_200 < *(uint *)(param_1 + 0x10));
            }
          }
          if (*(int *)(param_1 + 8) != 0) goto LAB_00013bb0;
LAB_00013d14:
          iVar14 = (**ppcVar13)(param_1,__fd,ppvVar10,local_208);
          if (iVar14 == 0) {
            iVar15 = *(int *)(param_1 + 0x10);
            goto LAB_00013db4;
          }
          uVar11 = *(uint *)(param_1 + 0x10);
        } while (uVar11 == 0);
        if ((int)uVar12 < *(int *)(param_1 + 0x5a4)) break;
        uVar8 = 1;
        piVar5 = (int *)(param_1 + 0x5a4);
        while (bVar18 = uVar8 != uVar11, uVar8 = uVar8 + 1, bVar18) {
          piVar5 = piVar5 + 1;
          if ((int)uVar12 < *piVar5) goto LAB_00013c6c;
        }
      }
    } while( true );
  }
  iVar15 = *(int *)(param_1 + 0x10);
  if (iVar15 != 0) {
    puVar6 = (uint *)(param_1 + 0x5a0);
    do {
      iVar14 = iVar14 + 4;
      puVar6 = puVar6 + 1;
      *puVar6 = uVar12;
    } while (iVar14 != iVar15 * 4);
  }
LAB_00013db4:
  if (uVar12 != 0) {
    if (iVar15 != 0) {
      ppvVar9 = apvStack376;
      ppvVar17 = ppvVar9 + iVar15;
      ppvVar10 = (void **)(param_1 + 0x10);
      do {
        ppvVar7 = (void **)ppvVar10[1];
        ppvVar9 = ppvVar9 + 1;
        pvVar3 = ppvVar10[0x165];
        *ppvVar7 = *ppvVar9;
        ppvVar7[1] = pvVar3;
        ppvVar10 = ppvVar10 + 1;
      } while (ppvVar9 != ppvVar17);
    }
    free_stream((int)__fd);
    return 0;
  }
  if (iVar15 != 0) {
    do {
      free(apvStack376[uVar12 + 1]);
      uVar8 = *(uint *)(param_1 + 0x10);
      uVar11 = uVar12 + 1;
      puVar2 = *(undefined4 **)(param_1 + uVar12 * 4 + 0x14);
      *puVar2 = 0;
      puVar2[1] = 0;
      uVar12 = uVar11;
    } while (uVar11 < uVar8);
  }
LAB_00013b78:
  free_stream((int)__fd);
  return 0xffffffff;
}



void SubExternalExit(void *param_1)

{
  void **__ptr;
  void *__ptr_00;
  int iVar1;
  void *pvVar2;
  int **ppiVar3;
  uint uVar4;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  iVar1 = *(int *)((int)param_1 + 8);
  if (iVar1 != -1) {
    if (*(int *)((int)param_1 + 0x10) != 0) {
      uVar4 = 0;
      ppiVar3 = (int **)((int)param_1 + 0x14);
      do {
        __ptr = (void **)*ppiVar3;
        if (__ptr != (void **)0x0) {
          if (__ptr[1] != (void *)0x0) {
            pvVar2 = (void *)0x0;
            iVar1 = 0;
            do {
              pvVar2 = (void *)((int)pvVar2 + 1);
              if ((*__ptr != (void *)0x0) &&
                 (__ptr_00 = *(void **)((int)*__ptr + iVar1 + 0x9c), __ptr_00 != (void *)0x0)) {
                free(__ptr_00);
              }
              __ptr = (void **)*ppiVar3;
              iVar1 = iVar1 + 0xb8;
            } while (pvVar2 < __ptr[1]);
          }
          free(*__ptr);
          **ppiVar3 = 0;
          __ptr = (void **)*ppiVar3;
        }
        free(__ptr);
        uVar4 = uVar4 + 1;
        ppiVar3 = ppiVar3 + 1;
      } while (uVar4 < *(uint *)((int)param_1 + 0x10));
      iVar1 = *(int *)((int)param_1 + 8);
    }
    if (iVar1 == 1) {
      pvVar2 = *(void **)((int)param_1 + 0x624);
      free(*(void **)((int)pvVar2 + 0xc));
      *(undefined4 *)((int)pvVar2 + 0xc) = 0;
      free(pvVar2);
      *(undefined4 *)((int)param_1 + 0x624) = 0;
    }
  }
  if (-1 < *(int *)((int)param_1 + 0xa40)) {
    close(*(int *)((int)param_1 + 0xa40));
  }
  free(param_1);
  return;
}



undefined * SubExternalInit(int param_1)

{
  undefined *__s;
  char *__file;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if ((*(int *)(param_1 + 0x4c) != -1) ||
     (__s = *(undefined **)(param_1 + 0x48), __s != (undefined *)0x0)) {
    __s = (undefined *)malloc(0xa80);
    memset(__s,0,0xa80);
    __file = *(char **)(param_1 + 0x48);
    *(undefined4 *)(__s + 0xa40) = 0xffffffff;
    if (__file == (char *)0x0) {
      iVar1 = dup(*(int *)(param_1 + 0x4c));
      iVar4 = *(int *)(param_1 + 0x50);
      iVar3 = *(int *)(param_1 + 0x54);
      *(int *)(__s + 0xa48) = iVar4;
      *(int *)(__s + 0xa4c) = iVar4 >> 0x1f;
      *(int *)(__s + 0xa58) = iVar3;
      *(int *)(__s + 0xa5c) = iVar3 >> 0x1f;
      *(int *)(__s + 0xa40) = iVar1;
    }
    else {
      iVar1 = open(__file,0,0);
      *(int *)(__s + 0xa40) = iVar1;
      if (iVar1 < 0) {
        __android_log_print(6,"subExternal",&DAT_000227e0,"SubExternalInit",0x47);
        free(__s);
        return (undefined *)0x0;
      }
      *(undefined4 *)(__s + 0xa48) = 0;
      *(undefined4 *)(__s + 0xa4c) = 0;
      *(undefined4 *)(__s + 0xa58) = 0xffffffff;
      *(undefined4 *)(__s + 0xa5c) = 0xffffffff;
    }
    *__s = 0;
    uVar5 = *(undefined4 *)(param_1 + 0x70);
    uVar2 = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)(__s + 4) = 0;
    *(undefined4 *)(__s + 8) = 0xffffffff;
    *(undefined4 *)(__s + 0xc) = uVar5;
    *(undefined4 *)(__s + 0x10) = 1;
    *(undefined4 *)(__s + 0x628) = uVar2;
  }
  return __s;
}



void FUN_00014174(char *param_1)

{
  char cVar1;
  size_t sVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  
  if (*param_1 == ' ') {
    pcVar3 = param_1 + 1;
    do {
      pcVar5 = pcVar3;
      pcVar3 = pcVar5 + 1;
    } while (*pcVar5 == ' ');
    strcpy(param_1,pcVar5);
  }
  sVar2 = strlen(param_1);
  iVar4 = sVar2 - 1;
  if (iVar4 < 1) {
    return;
  }
  if (param_1[iVar4] != ' ') {
    return;
  }
  pcVar3 = param_1 + iVar4;
  pcVar5 = param_1 + (sVar2 - 2);
  do {
    iVar4 = iVar4 + -1;
    *pcVar3 = '\0';
    if (iVar4 < 1) {
      return;
    }
    cVar1 = *pcVar5;
    pcVar3 = pcVar5;
    pcVar5 = pcVar5 + -1;
  } while (cVar1 == ' ');
  return;
}



char * stristr(char *param_1,char *param_2)

{
  char cVar1;
  size_t __n;
  int iVar2;
  char *pcVar3;
  
  if (param_1 == (char *)0x0 || param_2 == (char *)0x0) {
    pcVar3 = (char *)0x0;
  }
  else {
    __n = strlen(param_2);
    cVar1 = *param_1;
    while (pcVar3 = (char *)(int)cVar1, pcVar3 != (char *)0x0) {
      iVar2 = strncasecmp(param_1,param_2,__n);
      if (iVar2 == 0) {
        return param_1;
      }
      cVar1 = param_1[1];
      param_1 = param_1 + 1;
    }
  }
  return pcVar3;
}



int sub_parse_smi_lang_index(int param_1,int param_2,int param_3)

{
  char cVar1;
  byte *pbVar2;
  char *pcVar3;
  int iVar4;
  byte *__s;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  byte abStack2092 [1024];
  undefined auStack1068 [1024];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  iVar10 = 0;
  iVar5 = *(int *)(param_1 + 0xa48);
  uVar7 = *(undefined4 *)(param_1 + 0xa4c);
  iVar6 = *(int *)(param_1 + 0xa58);
  iVar8 = *(int *)(param_1 + 0xa5c);
  memset(abStack2092,0,0x400);
  memset(auStack1068,0,0x400);
  do {
    pbVar2 = stream_read_line(param_2,0x400,iVar5,uVar7,iVar6,iVar8,abStack2092,0x400,param_3);
    if (pbVar2 == (byte *)0x0) break;
    pcVar3 = stristr((char *)abStack2092,"<HEAD>");
    pbVar2 = abStack2092;
    if (pcVar3 != (char *)0x0) {
      *(undefined *)(param_1 + 0xa39) = 1;
    }
    do {
      pbVar9 = pbVar2;
      pbVar2 = (byte *)stristr((char *)pbVar9,"CC");
      __s = (byte *)stristr((char *)pbVar9,".SUBTTL");
      if ((pbVar2 == (byte *)0x0) || (pbVar2 < pbVar9 + 3)) {
        if (__s == (byte *)0x0) {
          pcVar3 = stristr((char *)pbVar9,"</STYLE");
          goto joined_r0x00014410;
        }
LAB_00014370:
        remove_strim_blank((char *)__s);
        iVar4 = sscanf((char *)__s,".%32[^{]{Name:%1024[^;];%1024[lL]ang:%1024[^;]",
                       param_1 + iVar10 * 0x20 + 0x630,auStack1068,auStack1068,auStack1068);
        if (0 < iVar4) {
          iVar10 = iVar10 + 1;
          goto LAB_000143a8;
        }
        pbVar2 = (byte *)stristr((char *)__s,"}");
      }
      else {
        if (__s != (byte *)0x0) goto LAB_00014370;
        __s = pbVar2 + -3;
        remove_strim_blank((char *)__s);
        iVar4 = sscanf((char *)__s,".%32[^C]CC{Name:%1024[^;];%1024[lL]ang:%1024[^;]",
                       param_1 + iVar10 * 0x20 + 0x630,auStack1068,auStack1068,auStack1068);
        if (0 < iVar4) {
          iVar4 = param_1 + iVar10 * 0x20;
          iVar10 = iVar10 + 1;
          *(undefined *)(iVar4 + 0x632) = 0x43;
          *(undefined *)(iVar4 + 0x633) = 0x43;
        }
LAB_000143a8:
        pbVar2 = (byte *)stristr((char *)__s,"}");
      }
    } while (pbVar2 != (byte *)0x0);
    pcVar3 = stristr((char *)pbVar9,"</STYLE");
joined_r0x00014410:
  } while (pcVar3 == (char *)0x0);
  if (iVar10 == 0) {
    if (*(char *)(param_1 + 0xa39) == '\0') {
      cVar1 = '\0';
    }
    else {
      cVar1 = -1;
    }
  }
  else {
    cVar1 = '\0';
  }
  if (local_2c == __stack_chk_guard) {
    return (int)cVar1;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



int sub_format_autodetect(int param_1,byte *param_2,int param_3,uint *param_4)

{
  bool bVar1;
  byte *pbVar2;
  char *pcVar3;
  int iVar4;
  byte *extraout_r1;
  byte *extraout_r1_00;
  byte *extraout_r1_01;
  byte *pbVar5;
  size_t __n;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int *piVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  uint *puVar19;
  undefined4 *puVar20;
  undefined *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  undefined *puVar26;
  undefined local_839;
  undefined4 local_838;
  int local_834;
  uint local_830;
  byte local_82c [11];
  char local_821;
  char local_81e;
  char local_81b;
  char local_818;
  undefined auStack1068 [1024];
  int local_2c;
  
  iVar10 = *(int *)(param_1 + 0xa48);
  uVar11 = *(undefined4 *)(param_1 + 0xa4c);
  iVar8 = *(int *)(param_1 + 0xa58);
  iVar9 = *(int *)(param_1 + 0xa5c);
  local_2c = __stack_chk_guard;
  bVar1 = false;
  iVar12 = 0;
  local_838 = 0;
  local_839 = 0;
  local_834 = 0;
  local_830 = 0;
  pbVar2 = param_2;
LAB_00014588:
  do {
    pbVar2 = stream_read_line((int)param_2,pbVar2,iVar10,uVar11,iVar8,iVar9,local_82c,0x400,param_3)
    ;
    if (pbVar2 == (byte *)0x0) {
LAB_00014cc4:
      iVar8 = -1;
      goto LAB_000147b0;
    }
    if (bVar1) {
      bVar1 = true;
      pbVar2 = extraout_r1;
    }
    else {
      uVar13 = __strlen_chk(local_82c,0x400);
      pbVar2 = (byte *)((ulonglong)uVar13 >> 0x20);
      if (2 < (uint)uVar13) {
        bVar1 = true;
        pbVar2 = (byte *)((uint)local_82c[1] << 8 | (uint)local_82c[0] << 0x10);
        *param_4 = (uint)pbVar2 | (uint)local_82c[2];
      }
    }
    iVar12 = iVar12 + 1;
    if ((local_82c[0] == 0) || (local_82c[0] == 0xd || local_82c[0] == 10)) {
LAB_00014cbc:
      if (iVar12 == 100) goto LAB_00014cc4;
      goto LAB_00014588;
    }
    pbVar5 = local_82c;
    pbVar2 = local_82c;
    bVar6 = local_82c[0];
    do {
      pbVar5 = pbVar5 + 1;
      if (bVar6 < 0x20) {
        pbVar5[-1] = 0x20;
      }
      bVar6 = *pbVar5;
      pbVar2 = pbVar2 + 1;
    } while ((bVar6 != 0) && (bVar6 != 0xd && bVar6 != 10));
    if (pbVar2 == local_82c) goto LAB_00014cbc;
    pcVar3 = strstr((char *)local_82c,"<SAMI>");
    if (pcVar3 != (char *)0x0) {
      iVar8 = sub_parse_smi_lang_index(param_1,(int)param_2,param_3);
      if (iVar8 != -1) {
        iVar8 = 0;
      }
      goto LAB_000147b0;
    }
    strcpy((char *)(param_1 + 0x19c),(char *)local_82c);
    pcVar3 = strstr((char *)local_82c,"[V4+ Styles]");
    if ((((pcVar3 != (char *)0x0) ||
         (pcVar3 = strstr((char *)local_82c,"[V4 Styles]"), pcVar3 != (char *)0x0)) ||
        (pcVar3 = strstr((char *)local_82c,"[v4+ Styles]"), pcVar3 != (char *)0x0)) ||
       (pcVar3 = strstr((char *)local_82c,"[v4 Styles]"), pcVar3 != (char *)0x0)) {
      iVar8 = 1;
      goto LAB_000147b0;
    }
    pcVar3 = strstr((char *)local_82c,"BMPFILE:");
    if (pcVar3 != (char *)0x0) {
      iVar8 = 2;
      goto LAB_000147b0;
    }
    iVar4 = sscanf((char *)local_82c,"*T %d:%d:%d:%d",&local_838,&local_838,&local_838,&local_838);
    if (iVar4 == 4) {
      memcpy((void *)(param_1 + 0x94),"*T %d:%d:%d:%d",0xf);
      iVar8 = 7;
      goto LAB_000147b0;
    }
    iVar4 = sscanf((char *)local_82c,"%d:%d:%d,%d%4[=]",&local_838,&local_838,&local_838,&local_838,
                   &local_839);
    if (iVar4 == 5) {
      memcpy((void *)(param_1 + 0x94),"%d:%d:%d,%d=%[^\r\n]",0x13);
      iVar8 = 9;
      goto LAB_000147b0;
    }
    pcVar3 = strstr((char *)local_82c,"\\par");
    if ((pcVar3 != (char *)0x0) &&
       (iVar4 = sscanf((char *)local_82c,"%1024s %d:%d:%d:%d",auStack1068,&local_838,&local_838,
                       &local_838,&local_838), iVar4 == 5)) {
      iVar8 = 10;
      goto LAB_000147b0;
    }
    pcVar3 = strstr((char *)local_82c,";Set.Time.Start=");
    if (pcVar3 != (char *)0x0) {
      memcpy((void *)(param_1 + 0x94),";Set.Time.Start=%d",0x13);
      iVar8 = 0xb;
      goto LAB_000147b0;
    }
    pcVar3 = strstr((char *)local_82c,"\\ ~:");
    if (pcVar3 != (char *)0x0) {
      iVar8 = 0xc;
      goto LAB_000147b0;
    }
    pcVar3 = strstr((char *)local_82c,"@@9");
    if (pcVar3 == (char *)0x0) {
      pcVar3 = strstr((char *)local_82c,"TITLE=");
      if ((pcVar3 != (char *)0x0) && (iVar12 == 1)) {
        iVar8 = 0xe;
        goto LAB_000147b0;
      }
      pcVar3 = strstr((char *)local_82c,"NEN");
      if (pcVar3 != (char *)0x0) {
        iVar8 = 3;
        goto LAB_000147b0;
      }
      pcVar3 = strstr((char *)local_82c,"[LIST]");
      if (pcVar3 != (char *)0x0) {
        iVar8 = 0xf;
        *(undefined *)(param_1 + 0x194) = 1;
        goto LAB_000147b0;
      }
      puVar14 = &local_838;
      iVar4 = sscanf((char *)local_82c,"%d:%d:%d%4[,.:]%d%4[ ,&-]%d:%d:%d%4[,.:]%d",&local_838,
                     &local_838,&local_838,&local_839,&local_838,&local_839,&local_838,&local_838,
                     &local_838,&local_839,&local_838);
      if (iVar4 == 0xb) {
        memcpy((void *)(param_1 + 0x94),"%d:%d:%d%[,.:]%d%[ ,&-]%d:%d:%d%[,.:]%d%[^\r\n]",0x2e);
        iVar8 = 4;
        *(undefined *)(param_1 + 0x194) = 1;
        goto LAB_000147b0;
      }
      iVar4 = sscanf((char *)local_82c,"%d:%d:%d%4[,.:]%d --> %d:%d:%d%4[,.:]%d",&local_838,
                     &local_838,&local_838,&local_839,&local_838,&local_838,&local_838,&local_838,
                     &local_839,&local_838,puVar14);
      if (iVar4 == 10) {
        memcpy((void *)(param_1 + 0x94),"%d:%d:%d%[,.:]%d --> %d:%d:%d%[,.:]%d%[^\r\n]",0x2c);
        iVar8 = 4;
        *(undefined *)(param_1 + 0x194) = 2;
        goto LAB_000147b0;
      }
      iVar4 = sscanf((char *)local_82c,"E 1 %d:%d:%d%4[,.:]%d%4[ ,&-]%d:%d:%d%4[,.:]%d Default NTP",
                     &local_838,&local_838,&local_838,&local_839,&local_838,&local_839,&local_838,
                     &local_838,&local_838,&local_839,&local_838);
      if (iVar4 == 0xb) {
        memcpy((void *)(param_1 + 0x94),
               "E 1 %d:%d:%d%[,.:]%d%[ ,&-]%d:%d:%d%[,.:]%d Default NTP %[^\r\n]",0x3f);
        iVar8 = 4;
        *(undefined *)(param_1 + 0x194) = 1;
        goto LAB_000147b0;
      }
      puVar21 = &local_839;
      puVar14 = &local_838;
      puVar17 = &local_838;
      puVar23 = &local_838;
      puVar26 = &local_839;
      puVar25 = &local_838;
      iVar4 = sscanf((char *)local_82c,"%d %d:%d:%d%4[,.:]%d%4[ ,&-]%d:%d:%d%4[,.:]%d",&local_838,
                     &local_838,&local_838,&local_838,&local_839,&local_838,&local_839,&local_838,
                     &local_838,&local_838,&local_839,&local_838);
      if (iVar4 == 0xc) {
        memcpy((void *)(param_1 + 0x94),"%d %d:%d:%d%[,.:]%d%[ ,&-]%d:%d:%d%[,.:]%d%[^\r\n]",0x31);
        iVar8 = 4;
        *(undefined *)(param_1 + 0x194) = 3;
        goto LAB_000147b0;
      }
      iVar4 = sscanf((char *)local_82c,"{%d:%d:%d}{%d:%d:%d}",&local_838,&local_838,&local_838,
                     &local_838,&local_838,&local_838,puVar21,puVar14,puVar17,puVar23,puVar26,
                     puVar25);
      if (iVar4 == 6) {
        memcpy((void *)(param_1 + 0x94),"{%d:%d:%d}{%d:%d:%d}%[^\r\n]",0x1b);
        iVar8 = 4;
        *(undefined *)(param_1 + 0x194) = 4;
        goto LAB_000147b0;
      }
      puVar14 = &local_838;
      puVar17 = &local_838;
      puVar20 = &local_838;
      puVar18 = &local_838;
      puVar15 = &local_838;
      puVar22 = &local_838;
      puVar24 = &local_838;
      iVar4 = sscanf((char *)local_82c,"#%d %d;%d;%d;%d %d;%d;%d;%d",&local_838,&local_838,
                     &local_838,&local_838,&local_838,&local_838,&local_838,&local_838,&local_838,
                     puVar23,puVar26,puVar25);
      if (iVar4 == 9) {
        memcpy((void *)(param_1 + 0x94),"#%d %d;%d;%d;%d %d;%d;%d;%d%[^\r\n]",0x22);
        iVar8 = 4;
        *(undefined *)(param_1 + 0x194) = 5;
        goto LAB_000147b0;
      }
      iVar4 = sscanf((char *)local_82c,"[%d] [%d]",&local_838,&local_838,puVar14,puVar17,puVar20,
                     puVar18,puVar15,puVar22,puVar24,puVar23,puVar26,puVar25);
      if (iVar4 == 2) {
        memcpy((void *)(param_1 + 0x94),"[%d] [%d]%[^\r\n]",0x10);
        iVar8 = 4;
        *(undefined *)(param_1 + 0x194) = 6;
        goto LAB_000147b0;
      }
      puVar14 = &local_838;
      iVar4 = sscanf((char *)local_82c,"%d  Default %d:%d:%d.%d %d:%d:%d.%d",&local_838,&local_838,
                     &local_838,&local_838,&local_838,&local_838,&local_838,&local_838,&local_838,
                     puVar23,puVar26,puVar25);
      if (iVar4 == 9) {
        memcpy((void *)(param_1 + 0x94),"%d Default %d:%d:%d%[,.:]%d%[ ,&-]%d:%d:%d%[,.:]%d%[^\r\n]"
               ,0x39);
        iVar8 = 4;
        *(undefined *)(param_1 + 0x194) = 3;
        goto LAB_000147b0;
      }
      iVar4 = sscanf((char *)local_82c,
                     "<%*[tT]ime %*[bB]egin=\"%d:%d:%d.%d\" %*[Ee]nd=\"%d:%d:%d.%d\"%*[^<]<clear/>",
                     &local_838,&local_838,&local_838,&local_838,&local_838,&local_838,&local_838,
                     &local_838,puVar14);
      if (iVar4 == 8) {
        memcpy((void *)(param_1 + 0x94),
                              
               "<%*[tT]ime %*[bB]egin=\"%d:%d:%d.%d\" %*[Ee]nd=\"%d:%d:%d.%d\"%*[^<]<clear/>%[^\r\n]"
               ,0x4f);
        iVar8 = 4;
        *(undefined *)(param_1 + 0x194) = 7;
        goto LAB_000147b0;
      }
      puVar14 = &local_838;
      puVar17 = &local_838;
      puVar23 = &local_838;
      puVar25 = &local_838;
      iVar4 = sscanf((char *)local_82c,"%d:%d:%d.%d%1024[\\]%d:%d:%d.%d",&local_838,&local_838,
                     &local_838,&local_838,auStack1068,&local_838,&local_838,&local_838,&local_838);
      if (iVar4 == 9) {
        memcpy((void *)(param_1 + 0x94),"%d:%d:%d.%d%[\\]%d:%d:%d.%d",0x1b);
        lseek((int)param_2,*(__off_t *)(param_1 + 0xa48),0);
        iVar8 = 0x10;
        goto LAB_000147b0;
      }
      puVar20 = &local_838;
      iVar4 = sscanf((char *)local_82c,"%d:%d:%d%4[,.:]%d",&local_838,&local_838,&local_838,
                     &local_839,&local_838,puVar14,puVar17,puVar23,puVar25);
      if (iVar4 == 5) {
        if ((((local_821 == '\\') && (local_81e == ':')) && (local_81b == ':')) &&
           (local_818 == '.')) {
          iVar8 = 0xf;
          *(undefined *)(param_1 + 0x194) = 2;
        }
        else {
          memcpy((void *)(param_1 + 0x94),"%d:%d:%d%[,.:]%d%[^\r\n]",0x17);
          iVar8 = 5;
          *(undefined *)(param_1 + 0x194) = 1;
        }
      }
      else {
        puVar18 = &local_838;
        iVar4 = sscanf((char *)local_82c,"[%d:%d:%d.%d]",&local_838,&local_838,&local_838,&local_838
                       ,puVar20,puVar14,puVar17,puVar23,puVar25);
        if (iVar4 == 4) {
          memcpy((void *)(param_1 + 0x94),"[%d:%d:%d.%d]%[^\r\n]",0x14);
          iVar8 = 5;
          *(undefined *)(param_1 + 0x194) = 2;
          goto LAB_000147b0;
        }
        iVar4 = sscanf((char *)local_82c,"[%d:%d:%d]",&local_838,&local_838,&local_838,puVar18,
                       puVar20,puVar14,puVar17,puVar23,puVar25);
        if (iVar4 == 3) {
          memcpy((void *)(param_1 + 0x94),"[%d:%d:%d]%[^\r\n]",0x11);
          *(undefined *)(param_1 + 0x194) = 3;
          iVar8 = 5;
          goto LAB_000147b0;
        }
        puVar15 = &local_838;
        iVar4 = sscanf((char *)local_82c,"[%d:%d.%d]",&local_838,&local_838,&local_838,puVar18,
                       puVar20,puVar14,puVar17,puVar23,puVar25);
        if (iVar4 == 3) {
          memcpy((void *)(param_1 + 0x94),"[%d:%d.%d]%[^\r\n]",0x11);
          iVar8 = 5;
          *(undefined *)(param_1 + 0x194) = 4;
          goto LAB_000147b0;
        }
        iVar4 = sscanf((char *)local_82c,"/d %d %d",&local_838,&local_838,puVar15,puVar18,puVar20);
        if (iVar4 == 2) {
          memcpy((void *)(param_1 + 0x94),"/d %d %d%[^\r\n]",0xf);
          iVar8 = 5;
          *(undefined *)(param_1 + 0x194) = 5;
          goto LAB_000147b0;
        }
        iVar4 = sscanf((char *)local_82c,"%d:%d:%d",&local_838,&local_838,&local_838,puVar18);
        if (iVar4 == 3) {
          memcpy((void *)(param_1 + 0x94),"%d:%d:%d%[^\r\n]",0xf);
          iVar8 = 5;
          *(undefined *)(param_1 + 0x194) = 6;
          goto LAB_000147b0;
        }
        puVar14 = &local_838;
        iVar4 = sscanf((char *)local_82c,"%d:%d:%d",&local_838,&local_838,&local_838);
        if (iVar4 == 3) {
          memcpy((void *)(param_1 + 0x94),"%d:%d:%d%[^\r\n]",0xf);
          iVar8 = 5;
          *(undefined *)(param_1 + 0x194) = 6;
          goto LAB_000147b0;
        }
        iVar4 = sscanf((char *)local_82c,"{%d %1024[^}]}",&local_838,auStack1068,puVar14);
        if (iVar4 == 2) {
          memcpy((void *)(param_1 + 0x94),"{%d %[^}]}",0xb);
          iVar8 = 5;
          *(undefined *)(param_1 + 0x194) = 7;
          goto LAB_000147b0;
        }
        puVar14 = &local_838;
        puVar17 = &local_838;
        iVar4 = sscanf((char *)local_82c,"{T %d:%d:%d:%d",&local_838,&local_838,&local_838,
                       &local_838);
        if (iVar4 == 4) {
          memcpy((void *)(param_1 + 0x94),"{T %d:%d:%d:%d%[^\r\n]",0x15);
          iVar8 = 5;
          *(undefined *)(param_1 + 0x194) = 2;
          goto LAB_000147b0;
        }
        iVar4 = sscanf((char *)local_82c,"-->> %d",&local_838,0xe2a0,puVar14,puVar17);
        if (iVar4 == 1) {
          __n = 0xf;
          pcVar3 = "-->> %ld%[^\r\n]";
LAB_00014ce8:
          memcpy((void *)(param_1 + 0x94),pcVar3,__n);
          iVar8 = *(int *)(param_1 + 0xc);
          *(char *)(param_1 + 0x194) = (char)iVar4;
        }
        else {
          puVar14 = &local_838;
          iVar4 = sscanf((char *)local_82c,"%d,%d,%d",&local_838,&local_838,&local_838,puVar17);
          if (iVar4 == 3) {
            memcpy((void *)(param_1 + 0x94),"%d,%d,%d,%[^\r\n]",0x10);
            iVar8 = *(int *)(param_1 + 0xc);
            *(undefined *)(param_1 + 0x194) = 2;
          }
          else {
            iVar4 = sscanf((char *)local_82c,"%d, %d, ",&local_838,&local_838,puVar14,puVar17);
            if (iVar4 == 2) {
              pcVar3 = "%ld, %ld, %[^\r\n]";
            }
            else {
              piVar16 = &local_834;
              puVar19 = &local_830;
              iVar4 = sscanf((char *)local_82c,"{%d}{%d}%d.%d",&local_838,&local_838,piVar16,puVar19
                            );
              if (2 < iVar4) {
                memcpy((void *)(param_1 + 0x94),"{%ld}{%ld}%[^\r\n]",0x11);
                *(undefined *)(param_1 + 0x194) = 3;
                memset((char *)(param_1 + 0x19c),0,0x400);
                if (local_830 < 10) {
                  uVar7 = local_830 * 100;
                }
                else {
                  uVar7 = local_830;
                  if (local_830 < 100) {
                    uVar7 = local_830 * 10;
                  }
                }
                uVar11 = __aeabi_uidiv(1000000000,local_834 * 1000 + uVar7);
                iVar8 = 6;
                *(undefined4 *)(param_1 + 0x198) = uVar11;
                goto LAB_000147b0;
              }
              iVar4 = sscanf((char *)local_82c,"{%d}{%d}",&local_838,&local_838,piVar16,puVar19);
              if (iVar4 != 2) {
                iVar4 = sscanf((char *)local_82c,"/%d",&local_838);
                pbVar2 = extraout_r1_01;
                if (iVar4 != 1) goto LAB_00014cbc;
                __n = 0xb;
                pcVar3 = "/%ld%[^\r\n]";
                goto LAB_00014ce8;
              }
              pcVar3 = "{%ld}{%ld}%[^\r\n]";
            }
            memcpy((void *)(param_1 + 0x94),pcVar3,0x11);
            iVar8 = *(int *)(param_1 + 0xc);
            *(undefined *)(param_1 + 0x194) = 3;
          }
        }
        if (iVar8 == 0) {
          iVar8 = 6;
          *(undefined4 *)(param_1 + 0x198) = 40000;
        }
        else {
          uVar11 = __aeabi_uidiv(1000000000);
          iVar8 = 6;
          *(undefined4 *)(param_1 + 0x198) = uVar11;
        }
      }
      goto LAB_000147b0;
    }
    pbVar2 = extraout_r1_00;
    if (4 < iVar12) {
      iVar8 = 0xd;
LAB_000147b0:
      if (local_2c != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
        __stack_chk_fail();
      }
      return iVar8;
    }
  } while( true );
}



void add_newLine_tag(char *param_1)

{
  size_t sVar1;
  char *pcVar2;
  
  sVar1 = strlen(param_1);
  if (sVar1 == 0) {
    return;
  }
  pcVar2 = param_1 + sVar1;
  if (pcVar2[-2] == '\r') {
    if (pcVar2[-1] != '\n') {
      param_1[sVar1] = '\r';
      pcVar2[1] = '\n';
    }
    return;
  }
  param_1[sVar1] = '\r';
  pcVar2[1] = '\n';
  return;
}



void remove_control_data(byte *param_1)

{
  size_t sVar1;
  int iVar2;
  uint uVar3;
  
  sVar1 = strlen((char *)param_1);
  if (sVar1 != 0) {
    do {
      uVar3 = (uint)*param_1;
      iVar2 = uVar3 - 0xd;
      if (iVar2 != 0) {
        iVar2 = 1;
      }
      if (0x1f < uVar3) {
        iVar2 = 0;
      }
      if ((iVar2 != 0) && (uVar3 != 10)) {
        *param_1 = 0x20;
      }
      sVar1 = sVar1 - 1;
      param_1 = param_1 + 1;
    } while (sVar1 != 0);
    return;
  }
  return;
}



char * process_external_sub_control_symbols(char *param_1)

{
  byte bVar1;
  size_t __n;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  byte bVar6;
  char *pcVar7;
  bool bVar8;
  byte local_430 [1028];
  int local_2c;
  undefined auStack40 [4];
  
  local_2c = __stack_chk_guard;
  memset(local_430,0,0x401);
  __n = strlen(param_1);
  if (__n != 0) {
    __strncpy_chk(local_430,param_1,__n,0x401);
    memset(param_1,0,__n);
    uVar5 = 0;
    do {
      puVar4 = auStack40 + uVar5;
      bVar6 = local_430[uVar5];
      uVar2 = uVar5;
      if ((((((bVar6 != 0x20 && bVar6 != 0x2c) && (bVar6 != 0x23)) && (bVar6 != 0x7b)) &&
           (((bVar6 != 0x54 && (bVar6 != 0x22)) &&
            ((bVar6 != 0x3a && ((bVar6 != 0x7e && (bVar6 != 0x5c)))))))) && (bVar6 != 0x7d)) &&
         ((bVar6 != 0x3d &&
          (((bVar6 != 0x4e || (local_430[uVar5 + 1] != 0x54)) ||
           (uVar2 = uVar5 + 2, local_430[uVar5 + 2] != 0x50)))))) {
        if (uVar5 < __n) {
          iVar3 = 0;
          if (bVar6 == 0xd) goto LAB_000154e8;
          goto LAB_0001549c;
        }
        break;
      }
      uVar5 = uVar2 + 1;
    } while (uVar5 < __n);
  }
LAB_000153a0:
  if (local_2c != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return param_1;
LAB_0001549c:
  if (bVar6 == 10) {
    uVar2 = uVar5 + 1;
    pcVar7 = param_1 + iVar3;
    *pcVar7 = '\r';
    iVar3 = iVar3 + 3;
    pcVar7[1] = '\n';
    pcVar7[2] = '\0';
    goto LAB_000154c8;
  }
  bVar8 = 0x22 < bVar6;
  if (bVar6 != 0x23) {
    bVar8 = 0x1e < bVar6;
  }
  if (!bVar8 || (bVar6 == 0x23 || bVar6 == 0x1f)) {
LAB_000154c4:
    uVar2 = uVar5 + 1;
  }
  else {
    if (bVar6 == 0x20) {
      uVar2 = uVar5 + 1;
      if (local_430[uVar5 + 1] == 0x20) goto LAB_000154c8;
LAB_000155ec:
      uVar2 = uVar5 + 1;
      param_1[iVar3] = bVar6;
      iVar3 = iVar3 + 1;
    }
    else {
      if (bVar6 == 0x7d || bVar6 == 0x22) goto LAB_000154c4;
      if (bVar6 == 0x3c) {
        if (puVar4[-0x407] == 'P') {
          if (puVar4[-0x406] != '>') goto LAB_0001555c;
          uVar2 = uVar5 + 3;
          pcVar7 = param_1 + iVar3;
          *pcVar7 = '\r';
          iVar3 = iVar3 + 2;
          pcVar7[1] = '\n';
        }
        else {
          if (((puVar4[-0x407] != 'b') || (puVar4[-0x406] != 'r')) || (puVar4[-0x405] != '>'))
          goto LAB_00015550;
          uVar2 = uVar5 + 4;
          pcVar7 = param_1 + iVar3;
          *pcVar7 = '\r';
          iVar3 = iVar3 + 2;
          pcVar7[1] = '\n';
        }
      }
      else {
LAB_00015550:
        if (((bVar6 != 0x3c && bVar6 != 0x7e) && (bVar6 != 0x7c)) &&
           ((bVar6 != 0x5b && ((bVar6 != 0x5c && (bVar6 != 0x2f)))))) goto LAB_000155ec;
LAB_0001555c:
        if (uVar5 == 0) {
          param_1[iVar3] = bVar6;
          uVar2 = 1;
          iVar3 = iVar3 + 1;
        }
        else {
          uVar2 = uVar5 + 1;
          bVar1 = local_430[uVar5 + 1];
          if (bVar1 == 0x2f) {
LAB_0001562c:
            uVar2 = uVar5 + 2;
          }
          else {
            if (bVar6 == 0x5b) {
              if (((bVar1 == 0x62) && (puVar4[-0x406] == 'r')) && (puVar4[-0x405] == ']')) {
                uVar2 = uVar5 + 4;
              }
            }
            else {
              if ((bVar6 == 0x5c) && (bVar1 == 0x4e || bVar1 == 0x6e)) goto LAB_0001562c;
            }
          }
          pcVar7 = param_1 + iVar3;
          *pcVar7 = '\r';
          iVar3 = iVar3 + 2;
          pcVar7[1] = '\n';
        }
      }
    }
  }
LAB_000154c8:
  while( true ) {
    if (__n <= uVar2) goto LAB_000153a0;
    puVar4 = auStack40 + uVar2;
    bVar6 = local_430[uVar2];
    uVar5 = uVar2;
    if (bVar6 != 0xd) break;
LAB_000154e8:
    uVar2 = uVar5 + 1;
    bVar6 = local_430[uVar5 + 1];
    pcVar7 = param_1 + iVar3;
    *pcVar7 = '\r';
    iVar3 = iVar3 + 3;
    pcVar7[1] = '\n';
    if (bVar6 == 10) {
      uVar2 = uVar5 + 2;
    }
    pcVar7[2] = '\0';
  }
  goto LAB_0001549c;
}



byte * sub_read_line_timeAfter(int param_1,int param_2,byte **param_3,int param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  char *pcVar4;
  size_t sVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 extraout_r1;
  uint uVar10;
  byte bVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  int local_84c;
  int local_848;
  int local_844;
  int local_840;
  int local_83c;
  int local_838;
  int local_834;
  int local_830;
  byte local_82c;
  byte local_82b [1023];
  char acStack1068 [1024];
  int local_2c;
  
  pbVar13 = *param_3;
  local_2c = __stack_chk_guard;
  iVar1 = *(int *)(param_1 + 0xa48);
  uVar7 = *(undefined4 *)(param_1 + 0xa4c);
  iVar2 = *(int *)(param_1 + 0xa58);
  iVar8 = *(int *)(param_1 + 0xa5c);
  local_84c = 0;
  uVar9 = 0;
  local_848 = 0;
  local_844 = 0;
  local_840 = 0;
  local_83c = 0;
  local_838 = 0;
  local_834 = 0;
  local_830 = 0;
  *(undefined4 *)(pbVar13 + 8) = 0;
  *(undefined4 *)(pbVar13 + 0xc) = 0;
  *(undefined4 *)(pbVar13 + 0x10) = 0;
  *(undefined4 *)(pbVar13 + 0x14) = 0;
  *(undefined4 *)(pbVar13 + 0xa0) = 0;
  pcVar6 = acStack1068;
  do {
    pbVar3 = stream_read_line(param_2,uVar9,iVar1,uVar7,iVar2,iVar8,&local_82c,0x400,param_4);
    if (pbVar3 == (byte *)0x0) {
      iVar1 = *(int *)(pbVar13 + 0xa0);
      if (0 < iVar1) {
LAB_000158d8:
        acStack1068[iVar1] = '\0';
        pcVar6 = strdup(acStack1068);
        *(char **)(pbVar13 + 0x9c) = pcVar6;
        if (pcVar6 == (char *)0x0) {
          pbVar3 = (byte *)0xffffffff;
        }
        else {
          *(undefined4 *)(pbVar13 + 0xa8) = 0;
          *(undefined4 *)(pbVar13 + 0x98) = 1;
          pbVar3 = pbVar13;
        }
      }
      if (local_2c != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
        __stack_chk_fail();
      }
      return pbVar3;
    }
    pbVar3 = &local_82c;
    pbVar12 = &local_82c;
    bVar11 = local_82c;
    if (local_82c != 0 && local_82c != 0x3a) {
      do {
        bVar11 = pbVar3[1];
        pbVar12 = pbVar12 + 1;
        pbVar3 = pbVar3 + 1;
      } while (bVar11 != 0 && bVar11 != 0x3a);
    }
    if (bVar11 == 0x3a) {
      sscanf((char *)(pbVar12 + -2),"%d:%d:%d:%d %d:%d:%d:%d",&local_84c,&local_848,&local_844,
             &local_840,&local_83c,&local_838,&local_834,&local_830);
      uVar14 = local_844 * 1000 + local_84c * 3600000 + local_848 * 60000 + local_840;
      *(uint *)(pbVar13 + 8) = uVar14;
      *(int *)(pbVar13 + 0xc) = (int)uVar14 >> 0x1f;
      uVar10 = local_834 * 1000 + local_83c * 3600000 + local_838 * 60000 + local_830;
      *(uint *)(pbVar13 + 0x10) = uVar10 - uVar14;
      *(uint *)(pbVar13 + 0x14) =
           ((int)uVar10 >> 0x1f) - (((int)uVar14 >> 0x1f) + (uint)(uVar10 < uVar14));
      pbVar12[-2] = 0;
      pcVar4 = process_external_sub_control_symbols((char *)&local_82c);
      sVar5 = strlen(pcVar4);
      memcpy(pcVar6,pcVar4,sVar5);
      iVar1 = sVar5 + *(int *)(pbVar13 + 0xa0);
      *(int *)(pbVar13 + 0xa0) = iVar1;
      goto LAB_000158d8;
    }
    pcVar4 = process_external_sub_control_symbols((char *)&local_82c);
    sVar5 = strlen(pcVar4);
    memcpy(pcVar6,pcVar4,sVar5);
    *(size_t *)(pbVar13 + 0xa0) = *(int *)(pbVar13 + 0xa0) + sVar5;
    uVar9 = extraout_r1;
    pcVar6 = pcVar6 + sVar5;
  } while( true );
}



byte * sub_read_line_mpsub(int param_1,int param_2,byte **param_3,int param_4)

{
  int iVar1;
  byte *pbVar2;
  size_t __n;
  char *pcVar3;
  int extraout_r1;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  char *local_86c;
  int local_83c;
  int local_838;
  int local_834;
  int local_830;
  byte abStack2092 [1024];
  char acStack1068 [1024];
  int local_2c;
  
  pbVar4 = *param_3;
  local_2c = __stack_chk_guard;
  iVar5 = *(int *)(param_1 + 0xa48);
  uVar6 = *(undefined4 *)(param_1 + 0xa4c);
  iVar7 = *(int *)(param_1 + 0xa58);
  iVar8 = *(int *)(param_1 + 0xa5c);
  *(undefined4 *)(pbVar4 + 0xa0) = 0;
  *(undefined4 *)(pbVar4 + 8) = 0;
  *(undefined4 *)(pbVar4 + 0xc) = 0;
  *(undefined4 *)(pbVar4 + 0x10) = 0;
  *(undefined4 *)(pbVar4 + 0x14) = 0;
  local_83c = 0;
  local_838 = 0;
  local_834 = 0;
  local_830 = 0;
  __strcpy_chk(abStack2092,(void *)(param_1 + 0x19c),0x400);
  memset((void *)(param_1 + 0x19c),0,0x400);
  do {
    piVar12 = &local_830;
    iVar1 = sscanf((char *)abStack2092,"%d.%d %d.%d",&local_83c,&local_838,&local_834,&local_830);
    if ((((iVar1 == 4) ||
         (iVar1 = sscanf((char *)abStack2092,"%d.%d %d",&local_83c,&local_838,&local_834,piVar12),
         iVar1 == 3)) ||
        (piVar11 = &local_830,
        iVar1 = sscanf((char *)abStack2092,"%d %d.%d",&local_83c,&local_834,&local_830,piVar12),
        iVar1 == 3)) ||
       (iVar1 = sscanf((char *)abStack2092,"%d %d",&local_83c,&local_834,piVar11,piVar12),
       iVar1 == 2)) {
      iVar9 = local_834 * 1000 + local_830;
      iVar10 = local_83c * 1000 + *(int *)(param_1 + 0x5a0) + local_838;
      iVar1 = iVar10 >> 0x1f;
      *(int *)(pbVar4 + 8) = iVar10;
      *(int *)(pbVar4 + 0xc) = iVar1;
      *(int *)(pbVar4 + 0x10) = iVar9;
      *(int *)(pbVar4 + 0x14) = iVar9 >> 0x1f;
      *(int *)(param_1 + 0x5a0) = iVar10 + iVar9;
      local_86c = acStack1068;
      goto LAB_00015c1c;
    }
    pbVar2 = stream_read_line(param_2,0x400,iVar5,uVar6,iVar7,iVar8,abStack2092,0x400,param_4);
  } while (pbVar2 != (byte *)0x0);
LAB_00015c80:
  if (local_2c == __stack_chk_guard) {
    return pbVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
LAB_00015c1c:
  pbVar2 = stream_read_line(param_2,iVar1,iVar5,uVar6,iVar7,iVar8,abStack2092,0x400,param_4);
  if (pbVar2 == (byte *)0x0) goto LAB_00015c48;
  piVar12 = &local_830;
  iVar1 = sscanf((char *)abStack2092,"%d.%d %d.%d",&local_83c,&local_838,&local_834,&local_830);
  if (iVar1 == 4) {
    strcpy((char *)(param_1 + 0x19c),(char *)abStack2092);
    goto LAB_00015c48;
  }
  iVar1 = sscanf((char *)abStack2092,"%d.%d %d",&local_83c,&local_838,&local_834,piVar12);
  if (iVar1 == 3) {
    strcpy((char *)(param_1 + 0x19c),(char *)abStack2092);
    goto LAB_00015c48;
  }
  piVar11 = &local_830;
  iVar1 = sscanf((char *)abStack2092,"%d %d.%d",&local_83c,&local_834,&local_830,piVar12);
  if (iVar1 == 3) {
    strcpy((char *)(param_1 + 0x19c),(char *)abStack2092);
    goto LAB_00015c48;
  }
  iVar1 = sscanf((char *)abStack2092,"%d %d",&local_83c,&local_834,piVar11,piVar12);
  if (iVar1 == 2) {
    strcpy((char *)(param_1 + 0x19c),(char *)abStack2092);
    goto LAB_00015c48;
  }
  pcVar3 = process_external_sub_control_symbols((char *)abStack2092);
  __n = strlen(pcVar3);
  memcpy(local_86c,pcVar3,__n);
  *(size_t *)(pbVar4 + 0xa0) = *(int *)(pbVar4 + 0xa0) + __n;
  iVar1 = extraout_r1;
  local_86c = local_86c + __n;
  goto LAB_00015c1c;
LAB_00015c48:
  acStack1068[*(int *)(pbVar4 + 0xa0)] = '\0';
  pcVar3 = strdup(acStack1068);
  *(char **)(pbVar4 + 0x9c) = pcVar3;
  if (pcVar3 == (char *)0x0) {
    pbVar2 = (byte *)0xffffffff;
  }
  else {
    *(undefined4 *)(pbVar4 + 0xa8) = 0;
    *(undefined4 *)(pbVar4 + 0x98) = 1;
    pbVar2 = pbVar4;
  }
  goto LAB_00015c80;
}



byte * sub_read_line_inscribercg(int param_1,int param_2,byte **param_3,int param_4)

{
  int iVar1;
  char *__s;
  size_t __n;
  char *pcVar2;
  undefined4 extraout_r1;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  int local_c50;
  int local_c4c;
  int local_c48;
  int local_c44;
  int local_c40;
  int local_c3c;
  int local_c38;
  int local_c34;
  byte abStack3120 [1024];
  char acStack2096 [1024];
  char acStack1072 [1028];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  memset(acStack1072,0,0x401);
  pbVar9 = *param_3;
  iVar4 = *(int *)(param_1 + 0xa48);
  uVar6 = *(undefined4 *)(param_1 + 0xa4c);
  local_c50 = 0;
  local_c4c = 0;
  iVar5 = *(int *)(param_1 + 0xa58);
  iVar7 = *(int *)(param_1 + 0xa5c);
  *(undefined4 *)(pbVar9 + 0xa0) = 0;
  local_c48 = 0;
  *(undefined4 *)(pbVar9 + 8) = 0;
  *(undefined4 *)(pbVar9 + 0xc) = 0;
  *(undefined4 *)(pbVar9 + 0x10) = 0;
  *(undefined4 *)(pbVar9 + 0x14) = 0;
  local_c44 = 0;
  local_c40 = 0;
  local_c3c = 0;
  local_c38 = 0;
  local_c34 = 0;
  __strcpy_chk(abStack3120,param_1 + 0x19c,0x400);
  do {
    iVar1 = sscanf((char *)abStack3120,"@@9 %1025[^<]<%d:%d:%d:%d><%d:%d:%d:%d>",acStack1072,
                   &local_c50,&local_c4c,&local_c48,&local_c44,&local_c40,&local_c3c,&local_c38,
                   &local_c34);
    if (0 < iVar1) {
      pcVar2 = acStack2096;
      goto LAB_00015ec4;
    }
    pbVar10 = stream_read_line(param_2,0x400,iVar4,uVar6,iVar5,iVar7,abStack3120,0x400,param_4);
  } while (pbVar10 != (byte *)0x0);
  goto LAB_00015fa4;
LAB_00015ec4:
  add_newLine_tag(acStack1072);
  __s = process_external_sub_control_symbols(acStack1072);
  __n = strlen(__s);
  memcpy(pcVar2,__s,__n);
  iVar8 = __n + *(int *)(pbVar9 + 0xa0);
  *(int *)(pbVar9 + 0xa0) = iVar8;
  if (iVar1 == 9) goto code_r0x00015f08;
  pbVar10 = stream_read_line(param_2,extraout_r1,iVar4,uVar6,iVar5,iVar7,abStack3120,0x400,param_4);
  if (pbVar10 == (byte *)0x0) {
    iVar8 = *(int *)(pbVar9 + 0xa0);
    goto LAB_00015f70;
  }
  iVar1 = sscanf((char *)abStack3120,"@@9 %1025[^<]<%d:%d:%d:%d><%d:%d:%d:%d>",acStack1072,
                 &local_c50,&local_c4c,&local_c48,&local_c44,&local_c40,&local_c3c,&local_c38,
                 &local_c34);
  pcVar2 = pcVar2 + __n;
  goto LAB_00015ec4;
code_r0x00015f08:
  uVar3 = local_c48 * 1000 + local_c50 * 3600000 + local_c4c * 60000 + local_c44;
  uVar11 = local_c38 * 1000 + local_c40 * 3600000 + local_c3c * 60000 + local_c34;
  *(uint *)(pbVar9 + 8) = uVar3;
  *(int *)(pbVar9 + 0xc) = (int)uVar3 >> 0x1f;
  *(uint *)(pbVar9 + 0x10) = uVar11 - uVar3;
  *(uint *)(pbVar9 + 0x14) = ((int)uVar11 >> 0x1f) - (((int)uVar3 >> 0x1f) + (uint)(uVar11 < uVar3))
  ;
LAB_00015f70:
  acStack2096[iVar8] = '\0';
  pcVar2 = strdup(acStack2096);
  *(char **)(pbVar9 + 0x9c) = pcVar2;
  if (pcVar2 == (char *)0x0) {
    pbVar10 = (byte *)0xffffffff;
  }
  else {
    *(undefined4 *)(pbVar9 + 0xa8) = 0;
    *(undefined4 *)(pbVar9 + 0x98) = 1;
    pbVar10 = pbVar9;
  }
LAB_00015fa4:
  if (local_2c == __stack_chk_guard) {
    return pbVar10;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



byte * sub_read_line_sonic(int param_1,int param_2,byte **param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  byte *pbVar3;
  char *__s;
  size_t __n;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined uVar4;
  byte *pbVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  char *pcVar11;
  undefined *puVar12;
  char *pcVar13;
  byte *in_stack_fffff390;
  undefined4 in_stack_fffff394;
  int in_stack_fffff398;
  undefined in_stack_fffff39c;
  size_t sVar14;
  int iVar15;
  int iVar16;
  byte abStack3120 [1024];
  char acStack2096 [1024];
  char acStack1072 [1028];
  int local_2c;
  
  piVar6 = &__stack_chk_guard;
  local_2c = __stack_chk_guard;
  memset(acStack1072,0,0x401);
  pbVar5 = *param_3;
  iVar7 = *(int *)(param_1 + 0xa48);
  uVar9 = *(undefined4 *)(param_1 + 0xa4c);
  iVar8 = *(int *)(param_1 + 0xa58);
  iVar10 = *(int *)(param_1 + 0xa5c);
  *(undefined4 *)(pbVar5 + 0xa0) = 0;
  iVar15 = 0;
  *(undefined4 *)(pbVar5 + 8) = 0;
  *(undefined4 *)(pbVar5 + 0xc) = 0;
  *(undefined4 *)(pbVar5 + 0x10) = 0;
  *(undefined4 *)(pbVar5 + 0x14) = 0;
  iVar16 = 0;
  __strcpy_chk(abStack3120,(void *)(param_1 + 0x19c),0x400);
  memset((void *)(param_1 + 0x19c),0,0x400);
  do {
    pcVar1 = strstr((char *)abStack3120,"\\ ~:");
    if (pcVar1 != (char *)0x0) {
      pcVar1 = acStack2096;
      goto LAB_00016114;
    }
    in_stack_fffff394 = 0x400;
    in_stack_fffff390 = abStack3120;
    in_stack_fffff398 = param_4;
    pbVar3 = stream_read_line(param_2,extraout_r1,iVar7,uVar9,iVar8,iVar10,abStack3120,0x400,param_4
                             );
  } while (pbVar3 != (byte *)0x0);
  goto LAB_000161bc;
  while( true ) {
    if (iVar2 == 4) {
      iVar10 = iVar15 * 1000 + iVar16;
      *(int *)(pbVar5 + 8) = iVar10;
      *(int *)(pbVar5 + 0xc) = iVar10 >> 0x1f;
      add_newLine_tag(acStack1072);
      __s = process_external_sub_control_symbols(acStack1072);
      __n = strlen(__s);
      pcVar11 = pcVar1 + __n;
      sVar14 = __n;
      memcpy(pcVar1,__s,__n);
      iVar10 = *(int *)(pbVar5 + 0xa0);
      *(size_t *)(pbVar5 + 0xa0) = iVar10 + sVar14;
      pbVar5 = (byte *)_edata(iVar10 + sVar14,sVar14,(char)__n,uVar4,puVar12,pcVar13,
                              in_stack_fffff390,in_stack_fffff394,in_stack_fffff398,
                              in_stack_fffff39c,param_2,sVar14,iVar7,iVar8,piVar6,pcVar11,iVar15,
                              iVar16);
      return pbVar5;
    }
    in_stack_fffff394 = 0x400;
    in_stack_fffff390 = abStack3120;
    in_stack_fffff398 = param_4;
    pbVar3 = stream_read_line(param_2,extraout_r1_00,iVar7,uVar9,iVar8,iVar10,abStack3120,0x400,
                              param_4);
    if (pbVar3 == (byte *)0x0) break;
LAB_00016114:
    uVar4 = 200;
    puVar12 = &stack0xfffff3cc;
    pcVar13 = acStack1072;
    iVar2 = sscanf((char *)abStack3120,"%d %d.%d%1025[^\r\n]",&stack0xfffff3c4);
    if (iVar2 == 3) {
      pbVar3 = (byte *)(iVar15 * 1000 + iVar16);
      break;
    }
  }
  acStack2096[*(int *)(pbVar5 + 0xa0)] = '\0';
  pcVar1 = strdup(acStack2096);
  *(char **)(pbVar5 + 0x9c) = pcVar1;
  if (pcVar1 == (char *)0x0) {
    pbVar3 = (byte *)0xffffffff;
  }
  else {
    *(undefined4 *)(pbVar5 + 0xa8) = 0;
    *(undefined4 *)(pbVar5 + 0x98) = 1;
    *(byte **)(pbVar5 + 0x10) = pbVar3 + -(int)*(byte **)(pbVar5 + 8);
    *(uint *)(pbVar5 + 0x14) =
         ((int)pbVar3 >> 0x1f) - (*(int *)(pbVar5 + 0xc) + (uint)(pbVar3 < *(byte **)(pbVar5 + 8)));
    pbVar3 = pbVar5;
  }
LAB_000161bc:
  if (local_2c == *piVar6) {
    return pbVar3;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Variable defined which should be unmapped: param_7
// WARNING: Variable defined which should be unmapped: param_6
// WARNING: Variable defined which should be unmapped: param_5
// WARNING: Variable defined which should be unmapped: param_9

int _edata(undefined4 param_1,undefined4 param_2,undefined param_3,undefined param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9,undefined param_10,int param_11,undefined4 param_12,int param_13,
          int param_14,int *param_15,void *param_16,int param_17,int param_18)

{
  int iVar1;
  byte *pbVar2;
  char *pcVar3;
  size_t __n;
  undefined4 extraout_r1;
  size_t sVar4;
  undefined uVar5;
  byte *unaff_r4;
  int unaff_r5;
  char *unaff_r6;
  undefined4 unaff_r7;
  char *unaff_r8;
  int unaff_r9;
  undefined4 in_stack_00000024;
  int in_stack_0000002c;
  int in_stack_00000c4c;
  
  do {
    pbVar2 = stream_read_line(param_11,param_2,param_13,in_stack_00000024,param_14,in_stack_0000002c
                              ,unaff_r4,0x400,unaff_r9);
    if (pbVar2 == (byte *)0x0) {
LAB_00016170:
      (&stack0x00000448)[*(int *)(unaff_r5 + 0xa0)] = 0;
      pcVar3 = strdup(&stack0x00000448);
      *(char **)(unaff_r5 + 0x9c) = pcVar3;
      if (pcVar3 == (char *)0x0) {
        unaff_r5 = -1;
      }
      else {
        *(undefined4 *)(unaff_r5 + 0xa8) = 0;
        *(undefined4 *)(unaff_r5 + 0x98) = 1;
        *(byte **)(unaff_r5 + 0x10) = pbVar2 + -(int)*(byte **)(unaff_r5 + 8);
        *(uint *)(unaff_r5 + 0x14) =
             ((int)pbVar2 >> 0x1f) -
             (*(int *)(unaff_r5 + 0xc) + (uint)(pbVar2 < *(byte **)(unaff_r5 + 8)));
      }
      if (in_stack_00000c4c == *param_15) {
        return unaff_r5;
      }
                    // WARNING: Subroutine does not return
      __stack_chk_fail();
    }
    uVar5 = 0x40;
    iVar1 = sscanf((char *)unaff_r4,unaff_r8,&stack0x0000003c);
    if (iVar1 == 3) {
      pbVar2 = (byte *)(param_17 * 1000 + param_18);
      goto LAB_00016170;
    }
    param_2 = extraout_r1;
    if (iVar1 == 4) {
      iVar1 = param_17 * 1000 + param_18;
      *(int *)(unaff_r5 + 8) = iVar1;
      *(int *)(unaff_r5 + 0xc) = iVar1 >> 0x1f;
      add_newLine_tag(unaff_r6);
      pcVar3 = process_external_sub_control_symbols(unaff_r6);
      __n = strlen(pcVar3);
      sVar4 = __n;
      memcpy(param_16,pcVar3,__n);
      iVar1 = *(int *)(unaff_r5 + 0xa0) + __n;
      *(int *)(unaff_r5 + 0xa0) = iVar1;
      iVar1 = _edata(iVar1,__n,(char)sVar4,uVar5,unaff_r7,unaff_r6,unaff_r4,0x400,unaff_r9,param_10,
                     param_11,__n,param_13,param_14,param_15,(void *)((int)param_16 + __n),param_17,
                     param_18);
      return iVar1;
    }
  } while( true );
}



byte * sub_read_line_s2k(int param_1,int param_2,byte **param_3,int param_4)

{
  int iVar1;
  byte *pbVar2;
  char *__s;
  size_t __n;
  char *pcVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint local_830;
  byte local_82c [1024];
  char acStack1068 [1024];
  int local_2c;
  
  pbVar5 = *param_3;
  iVar8 = *(int *)(param_1 + 0xa48);
  uVar9 = *(undefined4 *)(param_1 + 0xa4c);
  iVar6 = *(int *)(param_1 + 0xa58);
  iVar7 = *(int *)(param_1 + 0xa5c);
  local_2c = __stack_chk_guard;
  *(undefined4 *)(pbVar5 + 8) = 0;
  *(undefined4 *)(pbVar5 + 0xc) = 0;
  *(undefined4 *)(pbVar5 + 0x10) = 0;
  *(undefined4 *)(pbVar5 + 0x14) = 0;
  *(undefined4 *)(pbVar5 + 0xa0) = 0;
  local_830 = 0;
  __strcpy_chk(local_82c,(void *)(param_1 + 0x19c),0x400);
  memset((void *)(param_1 + 0x19c),0,0x400);
  do {
    iVar1 = sscanf((char *)local_82c,(char *)(param_1 + 0x94),&local_830);
    if (iVar1 == 1) {
      *(uint *)(pbVar5 + 8) = local_830;
      *(int *)(pbVar5 + 0xc) = (int)local_830 >> 0x1f;
      uVar4 = extraout_r1;
      pcVar3 = acStack1068;
      goto LAB_0001639c;
    }
    pbVar2 = stream_read_line(param_2,extraout_r1,iVar8,uVar9,iVar6,iVar7,local_82c,0x400,param_4);
  } while (pbVar2 != (byte *)0x0);
  goto LAB_00016470;
  while (iVar1 = sscanf((char *)local_82c,(char *)(param_1 + 0x94),&local_830),
        uVar4 = extraout_r1_01, iVar1 != 1) {
LAB_0001639c:
    pbVar2 = stream_read_line(param_2,uVar4,iVar8,uVar9,iVar6,iVar7,local_82c,0x400,param_4);
    if (pbVar2 == (byte *)0x0) goto LAB_00016434;
    if (local_82c[0] != 0x3b) {
      __s = process_external_sub_control_symbols((char *)local_82c);
      __n = strlen(__s);
      memcpy(pcVar3,__s,__n);
      *(size_t *)(pbVar5 + 0xa0) = *(int *)(pbVar5 + 0xa0) + __n;
      uVar4 = extraout_r1_00;
      pcVar3 = pcVar3 + __n;
      goto LAB_0001639c;
    }
  }
  *(uint *)(pbVar5 + 0x10) = local_830 - *(uint *)(pbVar5 + 8);
  *(uint *)(pbVar5 + 0x14) =
       ((int)local_830 >> 0x1f) -
       (*(int *)(pbVar5 + 0xc) + (uint)(local_830 < *(uint *)(pbVar5 + 8)));
LAB_00016434:
  acStack1068[*(int *)(pbVar5 + 0xa0)] = '\0';
  pcVar3 = strdup(acStack1068);
  *(char **)(pbVar5 + 0x9c) = pcVar3;
  if (pcVar3 == (char *)0x0) {
    pbVar2 = (byte *)0xffffffff;
  }
  else {
    *(undefined4 *)(pbVar5 + 0xa8) = 0;
    *(undefined4 *)(pbVar5 + 0x98) = 1;
    pbVar2 = pbVar5;
  }
LAB_00016470:
  if (local_2c == __stack_chk_guard) {
    return pbVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



int sub_read_line_rtf(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  size_t __n;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int iVar8;
  byte *pbVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  uint uStack4208;
  char *pcStack4172;
  undefined4 uStack4168;
  int iStack4164;
  int iStack4160;
  int iStack4156;
  int iStack4152;
  byte abStack4148 [1024];
  char acStack3124 [1024];
  char acStack2100 [1028];
  undefined auStack1072 [1028];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  memset(acStack2100,0,0x401);
  memset(auStack1072,0,0x401);
  pbVar9 = (byte *)*param_3;
  iVar1 = *(int *)(param_1 + 0xa48);
  uVar6 = *(undefined4 *)(param_1 + 0xa4c);
  iVar2 = *(int *)(param_1 + 0xa58);
  iVar7 = *(int *)(param_1 + 0xa5c);
  *(undefined4 *)(pbVar9 + 8) = 0;
  *(undefined4 *)(pbVar9 + 0xc) = 0;
  *(undefined4 *)(pbVar9 + 0x10) = 0;
  *(undefined4 *)(pbVar9 + 0x14) = 0;
  *(undefined4 *)(pbVar9 + 0xa0) = 0;
  iStack4160 = 0;
  uStack4168 = 0;
  iStack4164 = 0;
  iStack4156 = 0;
  iStack4152 = 0;
  __strcpy_chk(abStack4148,param_1 + 0x19c,0x400);
  do {
    iVar3 = sscanf((char *)abStack4148,"%1025[^ ] [%d]",auStack1072,&uStack4168);
    if (1 < iVar3) {
      uStack4208 = 0;
      iVar3 = 0xca00;
      pcStack4172 = acStack3124;
      goto LAB_000165e8;
    }
    pbVar4 = stream_read_line(param_2,extraout_r1,iVar1,uVar6,iVar2,iVar7,abStack4148,0x400,param_4)
    ;
  } while (pbVar4 != (byte *)0x0);
  goto LAB_00016834;
LAB_000165e8:
  pbVar4 = stream_read_line(param_2,iVar3,iVar1,uVar6,iVar2,iVar7,abStack4148,0x400,param_4);
  if (pbVar4 != (byte *)0x0) {
    piVar10 = &iStack4160;
    piVar11 = &iStack4156;
    piVar12 = &iStack4152;
    iVar3 = sscanf((char *)abStack4148,"%1025[^ ] %d:%d:%d:%d",auStack1072,&iStack4164,piVar10,
                   piVar11,piVar12);
    if (iVar3 == 5) {
      if ((*(uint *)(pbVar9 + 8) | *(uint *)(pbVar9 + 0xc)) == 0) {
        iVar3 = iStack4156 * 1000 + iStack4164 * 3600000 + iStack4160 * 60000;
        iVar8 = iVar3 + iStack4152;
        *(int *)(pbVar9 + 8) = iVar8;
        *(int *)(pbVar9 + 0xc) = iVar8 >> 0x1f;
      }
      else {
        iVar3 = extraout_r1_00;
        if (uStack4208 == 0) {
          uStack4208 = iStack4156 * 1000 + iStack4164 * 3600000 + iStack4160 * 60000 + iStack4152;
          iVar3 = iStack4156;
        }
      }
    }
    else {
      iVar3 = sscanf((char *)abStack4148,"%1025[^ ] [%d]",auStack1072,&uStack4168,piVar10,piVar11,
                     piVar12);
      if (iVar3 == 2) {
        iVar3 = *(int *)(pbVar9 + 0xa0);
        if (0 < iVar3) goto LAB_000167e8;
        uStack4208 = 0;
        *(undefined4 *)(pbVar9 + 8) = 0;
        *(undefined4 *)(pbVar9 + 0xc) = 0;
        iVar3 = extraout_r1_01;
      }
      else {
        iVar8 = sscanf((char *)abStack4148,"%1025[^ ] %1025[^\r\n]",auStack1072,acStack2100,piVar10,
                       piVar11,piVar12);
        iVar3 = extraout_r1_02;
        if (iVar8 == 2) {
          add_newLine_tag(acStack2100);
          pcVar5 = process_external_sub_control_symbols(acStack2100);
          __n = strlen(pcVar5);
          memcpy(pcStack4172,pcVar5,__n);
          iVar3 = *(int *)(pbVar9 + 0xa0) + __n;
          *(int *)(pbVar9 + 0xa0) = iVar3;
          pcStack4172 = pcStack4172 + __n;
        }
      }
    }
    goto LAB_000165e8;
  }
  iVar3 = *(int *)(pbVar9 + 0xa0);
LAB_000167e8:
  acStack3124[iVar3] = '\0';
  pcVar5 = strdup(acStack3124);
  *(char **)(pbVar9 + 0x9c) = pcVar5;
  if (pcVar5 == (char *)0x0) {
    pbVar4 = (byte *)0xffffffff;
  }
  else {
    *(undefined4 *)(pbVar9 + 0xa8) = 0;
    *(uint *)(pbVar9 + 0x10) = uStack4208 - *(uint *)(pbVar9 + 8);
    *(uint *)(pbVar9 + 0x14) =
         ((int)uStack4208 >> 0x1f) -
         (*(int *)(pbVar9 + 0xc) + (uint)(uStack4208 < *(uint *)(pbVar9 + 8)));
    *(undefined4 *)(pbVar9 + 0x98) = 1;
    pbVar4 = pbVar9;
  }
LAB_00016834:
  if (local_2c == __stack_chk_guard) {
    return (int)pbVar4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Variable defined which should be unmapped: param_7
// WARNING: Variable defined which should be unmapped: param_9

byte * _end(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
           undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
           undefined param_10,uint param_11,undefined4 param_12,int param_13,undefined4 param_14,
           undefined4 param_15,int *param_16,undefined *param_17)

{
  int iVar1;
  byte *pbVar2;
  size_t __n;
  char *pcVar3;
  undefined4 extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int iVar4;
  byte *unaff_r4;
  byte *unaff_r5;
  int unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int in_r12;
  int in_lr;
  undefined4 in_stack_00000024;
  int iStack0000002c;
  int in_stack_00000044;
  int in_stack_00000048;
  int iStack0000004c;
  int iStack00000050;
  int in_stack_0000105c;
  
  *(undefined4 *)(unaff_r5 + 0x10) = param_3;
  *(undefined4 *)(unaff_r5 + 0x14) = param_4;
  *(undefined4 *)(unaff_r5 + 0xa0) = 0;
  *(undefined4 *)(&stack0x00001060 + unaff_r6) = 0;
  *(undefined4 *)(&stack0x00001060 + in_r12) = 0;
  *(undefined4 *)(&stack0x00001060 + in_lr) = 0;
  iStack0000004c = 0;
  iStack00000050 = 0;
  iStack0000002c = param_2;
  __strcpy_chk();
  do {
    iVar1 = sscanf((char *)unaff_r4,"%1025[^ ] [%d]",&stack0x00000c58,&stack0x00000040);
    if (1 < iVar1) {
      param_11 = 0;
      iVar1 = 0xca00;
      param_17 = &stack0x00000454;
      goto LAB_000165e8;
    }
    pbVar2 = stream_read_line(unaff_r8,extraout_r1,param_13,in_stack_00000024,param_1,iStack0000002c
                              ,unaff_r4,0x400,unaff_r7);
  } while (pbVar2 != (byte *)0x0);
  goto LAB_00016834;
LAB_000165e8:
  pbVar2 = stream_read_line(unaff_r8,iVar1,param_13,in_stack_00000024,param_1,iStack0000002c,
                            unaff_r4,0x400,unaff_r7);
  if (pbVar2 != (byte *)0x0) {
    iVar1 = sscanf((char *)unaff_r4,"%1025[^ ] %d:%d:%d:%d",&stack0x00000c58,&stack0x00000044);
    if (iVar1 == 5) {
      if ((*(uint *)(unaff_r5 + 8) | *(uint *)(unaff_r5 + 0xc)) == 0) {
        iVar1 = iStack0000004c * 1000 + in_stack_00000044 * 3600000 + in_stack_00000048 * 60000;
        iVar4 = iVar1 + iStack00000050;
        *(int *)(unaff_r5 + 8) = iVar4;
        *(int *)(unaff_r5 + 0xc) = iVar4 >> 0x1f;
      }
      else {
        iVar1 = extraout_r1_00;
        if (param_11 == 0) {
          param_11 = iStack0000004c * 1000 + in_stack_00000044 * 3600000 + in_stack_00000048 * 60000
                     + iStack00000050;
          iVar1 = iStack0000004c;
        }
      }
    }
    else {
      iVar1 = sscanf((char *)unaff_r4,"%1025[^ ] [%d]",&stack0x00000c58,&stack0x00000040);
      if (iVar1 == 2) {
        iVar1 = *(int *)(unaff_r5 + 0xa0);
        if (0 < iVar1) goto LAB_000167e8;
        param_11 = 0;
        *(undefined4 *)(unaff_r5 + 8) = 0;
        *(undefined4 *)(unaff_r5 + 0xc) = 0;
        iVar1 = extraout_r1_01;
      }
      else {
        iVar4 = sscanf((char *)unaff_r4,"%1025[^ ] %1025[^\r\n]",&stack0x00000c58,&stack0x00000854);
        iVar1 = extraout_r1_02;
        if (iVar4 == 2) {
          add_newLine_tag(&stack0x00000854);
          pcVar3 = process_external_sub_control_symbols(&stack0x00000854);
          __n = strlen(pcVar3);
          memcpy(param_17,pcVar3,__n);
          iVar1 = *(int *)(unaff_r5 + 0xa0) + __n;
          *(int *)(unaff_r5 + 0xa0) = iVar1;
          param_17 = param_17 + __n;
        }
      }
    }
    goto LAB_000165e8;
  }
  iVar1 = *(int *)(unaff_r5 + 0xa0);
LAB_000167e8:
  (&stack0x00000454)[iVar1] = 0;
  pcVar3 = strdup(&stack0x00000454);
  *(char **)(unaff_r5 + 0x9c) = pcVar3;
  if (pcVar3 == (char *)0x0) {
    pbVar2 = (byte *)0xffffffff;
  }
  else {
    *(undefined4 *)(unaff_r5 + 0xa8) = 0;
    *(uint *)(unaff_r5 + 0x10) = param_11 - *(uint *)(unaff_r5 + 8);
    *(uint *)(unaff_r5 + 0x14) =
         ((int)param_11 >> 0x1f) -
         (*(int *)(unaff_r5 + 0xc) + (uint)(param_11 < *(uint *)(unaff_r5 + 8)));
    *(undefined4 *)(unaff_r5 + 0x98) = 1;
    pbVar2 = unaff_r5;
  }
LAB_00016834:
  if (in_stack_0000105c == *param_16) {
    return pbVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



byte * sub_read_line_tmplayer(int param_1,int param_2,byte **param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  char *__s;
  size_t __n;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  byte *pbVar10;
  int local_c44;
  int local_c40;
  int local_c3c;
  int local_c38;
  int local_c34;
  byte abStack3120 [1024];
  char acStack2096 [1024];
  char local_430 [1028];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  memset(local_430,0,0x401);
  pbVar10 = *param_3;
  iVar1 = *(int *)(param_1 + 0xa48);
  uVar6 = *(undefined4 *)(param_1 + 0xa4c);
  local_c44 = 0;
  local_c40 = 0;
  iVar2 = *(int *)(param_1 + 0xa58);
  iVar7 = *(int *)(param_1 + 0xa5c);
  *(undefined4 *)(pbVar10 + 0xa0) = 0;
  local_c3c = 0;
  *(undefined4 *)(pbVar10 + 8) = 0;
  *(undefined4 *)(pbVar10 + 0xc) = 0;
  *(undefined4 *)(pbVar10 + 0x10) = 0;
  *(undefined4 *)(pbVar10 + 0x14) = 0;
  local_c38 = 0;
  local_c34 = 0;
  __strcpy_chk(abStack3120,(void *)(param_1 + 0x19c),0x400);
  memset((void *)(param_1 + 0x19c),0,0x400);
  do {
    iVar3 = sscanf((char *)abStack3120,(char *)(param_1 + 0x94),&local_c40,&local_c3c,&local_c38,
                   &local_c44,local_430);
    if (4 < iVar3) {
      iVar3 = local_c38 * 1000 + local_c40 * 3600000 + local_c3c * 60000;
      *(int *)(pbVar10 + 8) = iVar3;
      *(int *)(pbVar10 + 0xc) = iVar3 >> 0x1f;
      add_newLine_tag(local_430);
      pcVar5 = acStack2096;
      goto LAB_00016a24;
    }
    pbVar4 = stream_read_line(param_2,0x400,iVar1,uVar6,iVar2,iVar7,abStack3120,0x400,param_4);
  } while (pbVar4 != (byte *)0x0);
  goto LAB_00016b50;
LAB_00016a24:
  __s = process_external_sub_control_symbols(local_430);
  __n = strlen(__s);
  pcVar9 = pcVar5 + __n;
  memcpy(pcVar5,__s,__n);
  iVar3 = *(int *)(pbVar10 + 0xa0);
  *(size_t *)(pbVar10 + 0xa0) = iVar3 + __n;
  pbVar4 = stream_read_line(param_2,iVar3 + __n,iVar1,uVar6,iVar2,iVar7,abStack3120,0x400,param_4);
  if (pbVar4 != (byte *)0x0) {
    iVar3 = sscanf((char *)abStack3120,(char *)(param_1 + 0x94),&local_c40,&local_c3c,&local_c38,
                   &local_c34,local_430);
    pcVar5 = pcVar9;
    if (iVar3 != 5) {
      if ((iVar3 == 4) && (local_c44 == local_c34)) {
        uVar8 = local_c38 * 1000 + local_c40 * 3600000 + local_c3c * 60000;
        *(uint *)(pbVar10 + 0x10) = uVar8 - *(uint *)(pbVar10 + 8);
        *(uint *)(pbVar10 + 0x14) =
             ((int)uVar8 >> 0x1f) -
             (*(int *)(pbVar10 + 0xc) + (uint)(uVar8 < *(uint *)(pbVar10 + 8)));
        goto LAB_00016b18;
      }
      local_430[0] = '\0';
      add_newLine_tag(local_430);
    }
    goto LAB_00016a24;
  }
LAB_00016b18:
  acStack2096[*(int *)(pbVar10 + 0xa0)] = '\0';
  pcVar5 = strdup(acStack2096);
  *(char **)(pbVar10 + 0x9c) = pcVar5;
  if (pcVar5 == (char *)0x0) {
    pbVar4 = (byte *)0xffffffff;
  }
  else {
    *(undefined4 *)(pbVar10 + 0xa8) = 0;
    *(undefined4 *)(pbVar10 + 0x98) = 1;
    pbVar4 = pbVar10;
  }
LAB_00016b50:
  if (local_2c == __stack_chk_guard) {
    return pbVar4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



undefined4 sub_read_line_dat(void)

{
  return 0;
}



byte * sub_read_line_asc(int param_1,int param_2,byte **param_3,int param_4)

{
  int iVar1;
  byte *pbVar2;
  size_t __n;
  char *pcVar3;
  uint uVar4;
  uint extraout_r1;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iVar10;
  uint local_c48;
  int local_c3c;
  int local_c38;
  int local_c34;
  int local_c30;
  byte local_c2c [1024];
  char acStack2092 [1024];
  byte abStack1068 [1024];
  int local_2c;
  
  iVar6 = *(int *)(param_1 + 0xa48);
  uVar9 = *(undefined4 *)(param_1 + 0xa4c);
  iVar7 = *(int *)(param_1 + 0xa58);
  iVar10 = *(int *)(param_1 + 0xa5c);
  local_2c = __stack_chk_guard;
  local_c3c = 0;
  local_c38 = 0;
  local_c34 = 0;
  local_c30 = 0;
  memset(local_c2c,0,0x400);
  memset(acStack2092,0,0x400);
  memset(abStack1068,0,0x400);
  pbVar5 = *param_3;
  *(undefined4 *)(pbVar5 + 0xa0) = 0;
  *(undefined4 *)(pbVar5 + 8) = 0;
  *(undefined4 *)(pbVar5 + 0xc) = 0;
  *(undefined4 *)(pbVar5 + 0x10) = 0;
  *(undefined4 *)(pbVar5 + 0x14) = 0;
  __strcpy_chk(local_c2c,(void *)(param_1 + 0x19c),0x400);
  memset((void *)(param_1 + 0x19c),0,0x400);
  do {
    iVar1 = sscanf((char *)local_c2c,(char *)(param_1 + 0x94),&local_c3c,&local_c38,&local_c34,
                   &local_c30,abStack1068);
    if (3 < iVar1) {
      local_c48 = 0;
      iVar1 = local_c34 * 1000 + local_c3c * 3600000 + local_c38 * 60000 + local_c30;
      *(int *)(pbVar5 + 8) = iVar1;
      *(int *)(pbVar5 + 0xc) = iVar1 >> 0x1f;
      add_newLine_tag((char *)abStack1068);
      pbVar2 = abStack1068;
      pcVar3 = acStack2092;
      goto LAB_00016d40;
    }
    pbVar2 = stream_read_line(param_2,0x400,iVar6,uVar9,iVar7,iVar10,local_c2c,0x400,param_4);
  } while (pbVar2 != (byte *)0x0);
  goto LAB_00016ea4;
  while( true ) {
    if (local_c48 == 0) {
      local_c48 = local_c34 * 1000 + local_c3c * 3600000 + local_c38 * 60000 + local_c30;
    }
    iVar1 = *(int *)(pbVar5 + 0xa0);
    if (iVar1 != 0) break;
LAB_00016d40:
    pbVar2 = (byte *)process_external_sub_control_symbols((char *)pbVar2);
    __n = strlen((char *)pbVar2);
    uVar4 = (uint)*pbVar2;
    pcVar8 = pcVar3;
    if (uVar4 != 10 && uVar4 != 0xd) {
      pcVar8 = pcVar3 + __n;
      memcpy(pcVar3,pbVar2,__n);
      *(size_t *)(pbVar5 + 0xa0) = *(int *)(pbVar5 + 0xa0) + __n;
      uVar4 = extraout_r1;
    }
    pbVar2 = stream_read_line(param_2,uVar4,iVar6,uVar9,iVar7,iVar10,local_c2c,0x400,param_4);
    if (pbVar2 == (byte *)0x0) {
      iVar1 = *(int *)(pbVar5 + 0xa0);
      break;
    }
    iVar1 = sscanf((char *)local_c2c,(char *)(param_1 + 0x94),&local_c3c,&local_c38,&local_c34,
                   &local_c30,abStack1068);
    pbVar2 = local_c2c;
    pcVar3 = pcVar8;
    if (iVar1 < 4) {
      if (local_c2c[0] == 0x2a) {
        memset(local_c2c,0,0x400);
      }
      goto LAB_00016d40;
    }
  }
  acStack2092[iVar1] = '\0';
  pcVar3 = strdup(acStack2092);
  *(char **)(pbVar5 + 0x9c) = pcVar3;
  if (pcVar3 == (char *)0x0) {
    pbVar2 = (byte *)0xffffffff;
  }
  else {
    *(undefined4 *)(pbVar5 + 0xa8) = 0;
    *(undefined4 *)(pbVar5 + 0x98) = 1;
    *(uint *)(pbVar5 + 0x10) = local_c48 - *(uint *)(pbVar5 + 8);
    *(uint *)(pbVar5 + 0x14) = -(*(int *)(pbVar5 + 0xc) + (uint)(local_c48 < *(uint *)(pbVar5 + 8)))
    ;
    pbVar2 = pbVar5;
  }
LAB_00016ea4:
  if (local_2c != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return pbVar2;
}



byte * sub_read_line_time_useFrame(int param_1,int param_2,byte **param_3,int param_4)

{
  char cVar1;
  byte *pbVar2;
  char *__s;
  size_t __n;
  int iVar3;
  char *pcVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  char *__format;
  bool bVar13;
  uint local_c44;
  int local_c38;
  int local_c34;
  undefined4 local_c30;
  byte abStack3116 [1024];
  char acStack2092 [1024];
  byte abStack1068 [1024];
  int local_2c;
  
  iVar9 = *(int *)(param_1 + 0xa48);
  uVar11 = *(undefined4 *)(param_1 + 0xa4c);
  pbVar6 = *param_3;
  local_2c = __stack_chk_guard;
  iVar10 = *(int *)(param_1 + 0xa58);
  iVar12 = *(int *)(param_1 + 0xa5c);
  iVar8 = 0;
  pcVar4 = (char *)(param_1 + 0x94);
  local_c38 = 0;
  local_c34 = 0;
  local_c30 = 0;
  memset(abStack1068,0,0x400);
  *(undefined4 *)(pbVar6 + 0xa0) = 0;
  *(undefined4 *)(pbVar6 + 8) = 0;
  *(undefined4 *)(pbVar6 + 0xc) = 0;
  *(undefined4 *)(pbVar6 + 0x10) = 0;
  *(undefined4 *)(pbVar6 + 0x14) = 0;
  __strcpy_chk(abStack3116,param_1 + 0x19c,0x400);
  iVar3 = 0;
  do {
    iVar5 = (int)*(char *)(param_1 + 0x194);
    if (iVar5 == 1) {
      iVar8 = sscanf((char *)abStack3116,pcVar4,&local_c38,abStack1068);
    }
    else {
      if (iVar5 == 2) {
        iVar8 = sscanf((char *)abStack3116,pcVar4,&local_c38,&local_c34,&local_c30,abStack1068);
        iVar5 = 3;
      }
      else {
        bVar13 = iVar5 == 3;
        iVar5 = iVar3;
        if (bVar13) {
          iVar8 = sscanf((char *)abStack3116,pcVar4,&local_c38,&local_c34,abStack1068);
          iVar5 = 2;
        }
      }
    }
    if (iVar5 <= iVar8) {
      iVar3 = *(int *)(param_1 + 0x198);
      __format = (char *)(param_1 + 0x94);
      *(undefined4 *)(pbVar6 + 0xc) = 0;
      *(uint *)(pbVar6 + 8) = (uint)(local_c38 * iVar3) / 1000;
      local_c44 = (uint)(local_c34 * iVar3) / 1000;
      add_newLine_tag((char *)abStack1068);
      pbVar2 = abStack1068;
      pcVar4 = acStack2092;
      goto LAB_00017058;
    }
    pbVar2 = stream_read_line(param_2,0x400,iVar9,uVar11,iVar10,iVar12,abStack3116,0x400,param_4);
    iVar3 = iVar5;
  } while (pbVar2 != (byte *)0x0);
  goto LAB_00017170;
  while( true ) {
    if (local_c44 == 0) {
      local_c44 = (uint)(*(int *)(param_1 + 0x198) * local_c38) / 1000;
      memset(abStack3116,0,0x400);
    }
    if (*(int *)(pbVar6 + 0xa0) != 0) break;
LAB_00017058:
    do {
      __s = process_external_sub_control_symbols((char *)pbVar2);
      __n = strlen(__s);
      pcVar7 = pcVar4 + __n;
      memcpy(pcVar4,__s,__n);
      iVar3 = *(int *)(pbVar6 + 0xa0);
      *(size_t *)(pbVar6 + 0xa0) = iVar3 + __n;
      pbVar2 = stream_read_line(param_2,iVar3,iVar9,uVar11,iVar10,iVar12,abStack3116,0x400,param_4);
      if (pbVar2 == (byte *)0x0) {
        memset(abStack3116,0,0x400);
        goto LAB_00017114;
      }
      cVar1 = *(char *)(param_1 + 0x194);
      if (cVar1 == '\x01') {
        iVar8 = sscanf((char *)abStack3116,__format,&local_c38,abStack1068);
      }
      else {
        if (cVar1 == '\x02') {
          iVar8 = sscanf((char *)abStack3116,__format,&local_c38,&local_c34,&local_c30,abStack1068);
        }
        else {
          if (cVar1 == '\x03') {
            iVar8 = sscanf((char *)abStack3116,__format,&local_c38,&local_c34,abStack1068);
          }
        }
      }
      pbVar2 = abStack3116;
      pcVar4 = pcVar7;
    } while (iVar8 < iVar5);
  }
LAB_00017114:
  strcpy((char *)(param_1 + 0x19c),(char *)abStack3116);
  acStack2092[*(int *)(pbVar6 + 0xa0)] = '\0';
  pcVar4 = strdup(acStack2092);
  *(char **)(pbVar6 + 0x9c) = pcVar4;
  if (pcVar4 == (char *)0x0) {
    pbVar2 = (byte *)0xffffffff;
  }
  else {
    *(undefined4 *)(pbVar6 + 0xa8) = 0;
    *(undefined4 *)(pbVar6 + 0x98) = 1;
    *(uint *)(pbVar6 + 0x10) = local_c44 - *(uint *)(pbVar6 + 8);
    *(uint *)(pbVar6 + 0x14) = -(*(int *)(pbVar6 + 0xc) + (uint)(local_c44 < *(uint *)(pbVar6 + 8)))
    ;
    pbVar2 = pbVar6;
  }
LAB_00017170:
  if (local_2c == __stack_chk_guard) {
    return pbVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



byte * sub_read_line_time_diffLine(int param_1,int param_2,byte **param_3,int param_4)

{
  char cVar1;
  char *__s;
  size_t __n;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  bool bVar12;
  int local_c74;
  int local_c60;
  undefined4 local_c44;
  int local_c40;
  int local_c3c;
  int local_c38;
  int local_c34;
  uint local_c30;
  byte abStack3116 [1024];
  char acStack2092 [1024];
  byte abStack1068 [1024];
  int local_2c;
  
  iVar8 = *(int *)(param_1 + 0xa48);
  uVar10 = *(undefined4 *)(param_1 + 0xa4c);
  pbVar6 = *param_3;
  iVar9 = *(int *)(param_1 + 0xa58);
  iVar11 = *(int *)(param_1 + 0xa5c);
  local_2c = __stack_chk_guard;
  pcVar7 = (char *)(param_1 + 0x94);
  local_c44 = 0;
  local_c40 = 0;
  local_c3c = 0;
  local_c38 = 0;
  local_c34 = 0;
  local_c30 = 0;
  memset(abStack3116,0,0x400);
  memset(abStack1068,0,0x400);
  *(undefined4 *)(pbVar6 + 0xa0) = 0;
  *(undefined4 *)(pbVar6 + 8) = 0;
  *(undefined4 *)(pbVar6 + 0xc) = 0;
  *(undefined4 *)(pbVar6 + 0x10) = 0;
  *(undefined4 *)(pbVar6 + 0x14) = 0;
  __strcpy_chk(abStack3116,param_1 + 0x19c,0x400);
  local_c74 = 0;
  iVar4 = 0;
  do {
    local_c60 = (int)*(char *)(param_1 + 0x194);
    if (local_c60 == 1) {
      local_c60 = 5;
      local_c74 = sscanf((char *)abStack3116,pcVar7,&local_c40,&local_c3c,&local_c38,&local_c44,
                         &local_c34,abStack1068);
    }
    else {
      if (local_c60 == 2) {
        local_c60 = 4;
        local_c74 = sscanf((char *)abStack3116,pcVar7,&local_c40,&local_c3c,&local_c38,&local_c34,
                           abStack1068);
      }
      else {
        if (local_c60 == 3) {
          local_c74 = sscanf((char *)abStack3116,pcVar7,&local_c40,&local_c3c,&local_c38,abStack1068
                            );
        }
        else {
          if (local_c60 == 4) {
            local_c74 = sscanf((char *)abStack3116,pcVar7,&local_c3c,&local_c38,&local_c34,
                               abStack1068);
            local_c60 = 3;
          }
          else {
            if (local_c60 == 5) {
              local_c60 = 2;
              local_c74 = sscanf((char *)abStack3116,pcVar7,&local_c38,&local_c34,abStack1068);
            }
            else {
              if (local_c60 == 6) {
                local_c74 = sscanf((char *)abStack3116,pcVar7,&local_c40,&local_c3c,&local_c38,
                                   abStack1068);
                local_c60 = 3;
              }
              else {
                bVar12 = local_c60 == 7;
                local_c60 = iVar4;
                if (bVar12) {
                  local_c74 = sscanf((char *)abStack3116,pcVar7,pbVar6 + 8,abStack1068);
                  local_c60 = 2;
                }
              }
            }
          }
        }
      }
    }
    if (local_c60 <= local_c74) {
      if (*(char *)(param_1 + 0x194) == '\a') {
        uVar3 = *(uint *)(pbVar6 + 8);
        *(int *)(pbVar6 + 8) = (int)((ulonglong)uVar3 * 10);
        *(int *)(pbVar6 + 0xc) = *(int *)(pbVar6 + 0xc) * 10 + (int)((ulonglong)uVar3 * 10 >> 0x20);
      }
      else {
        iVar4 = local_c38 * 1000 + local_c40 * 3600000 + local_c3c * 60000 + local_c34;
        *(int *)(pbVar6 + 8) = iVar4;
        *(int *)(pbVar6 + 0xc) = iVar4 >> 0x1f;
      }
      add_newLine_tag((char *)abStack1068);
      pbVar2 = abStack1068;
      pcVar7 = acStack2092;
      goto LAB_0001746c;
    }
    pbVar2 = stream_read_line(param_2,0x400,iVar8,uVar10,iVar9,iVar11,abStack3116,0x400,param_4);
    iVar4 = local_c60;
  } while (pbVar2 != (byte *)0x0);
  goto LAB_000175c0;
  while( true ) {
    if (local_c30 == 0) {
      local_c30 = local_c38 * 1000 + local_c40 * 3600000 + local_c3c * 60000 + local_c34;
      memset(abStack3116,0,0x400);
    }
    else {
      if (*(char *)(param_1 + 0x194) == '\a') {
        local_c30 = local_c30 * 10;
      }
    }
    if (*(int *)(pbVar6 + 0xa0) != 0) break;
LAB_0001746c:
    do {
      __s = process_external_sub_control_symbols((char *)pbVar2);
      __n = strlen(__s);
      pcVar5 = pcVar7 + __n;
      memcpy(pcVar7,__s,__n);
      iVar4 = *(int *)(pbVar6 + 0xa0);
      *(size_t *)(pbVar6 + 0xa0) = iVar4 + __n;
      pbVar2 = stream_read_line(param_2,iVar4,iVar8,uVar10,iVar9,iVar11,abStack3116,0x400,param_4);
      if (pbVar2 == (byte *)0x0) {
        memset(abStack3116,0,0x400);
        goto LAB_00017560;
      }
      cVar1 = *(char *)(param_1 + 0x194);
      if (cVar1 == '\x01') {
        local_c74 = sscanf((char *)abStack3116,(char *)(param_1 + 0x94),&local_c40,&local_c3c,
                           &local_c38,&local_c44,&local_c34,abStack1068);
      }
      else {
        if (cVar1 == '\x02') {
          local_c74 = sscanf((char *)abStack3116,(char *)(param_1 + 0x94),&local_c40,&local_c3c,
                             &local_c38,&local_c34,abStack1068);
        }
        else {
          if (cVar1 == '\x03') {
            local_c74 = sscanf((char *)abStack3116,(char *)(param_1 + 0x94),&local_c40,&local_c3c,
                               &local_c38,abStack1068);
          }
          else {
            if (cVar1 == '\x04') {
              local_c74 = sscanf((char *)abStack3116,(char *)(param_1 + 0x94),&local_c3c,&local_c38,
                                 &local_c34,abStack1068);
            }
            else {
              if (cVar1 == '\x05') {
                local_c74 = sscanf((char *)abStack3116,(char *)(param_1 + 0x94),&local_c38,
                                   &local_c34,abStack1068);
              }
              else {
                if (cVar1 == '\x06') {
                  local_c74 = sscanf((char *)abStack3116,(char *)(param_1 + 0x94),&local_c40,
                                     &local_c3c,&local_c38,abStack1068);
                }
                else {
                  if (cVar1 == '\a') {
                    local_c74 = sscanf((char *)abStack3116,(char *)(param_1 + 0x94),&local_c30,
                                       abStack1068);
                    local_c60 = 1;
                  }
                }
              }
            }
          }
        }
      }
      pbVar2 = abStack3116;
      pcVar7 = pcVar5;
    } while (local_c74 < local_c60);
  }
LAB_00017560:
  strcpy((char *)(param_1 + 0x19c),(char *)abStack3116);
  acStack2092[*(int *)(pbVar6 + 0xa0)] = '\0';
  pcVar7 = strdup(acStack2092);
  *(char **)(pbVar6 + 0x9c) = pcVar7;
  if (pcVar7 == (char *)0x0) {
    pbVar2 = (byte *)0xffffffff;
  }
  else {
    *(undefined4 *)(pbVar6 + 0x98) = 1;
    *(undefined4 *)(pbVar6 + 0xa8) = 0;
    *(uint *)(pbVar6 + 0x10) = local_c30 - *(uint *)(pbVar6 + 8);
    *(uint *)(pbVar6 + 0x14) = -(*(int *)(pbVar6 + 0xc) + (uint)(local_c30 < *(uint *)(pbVar6 + 8)))
    ;
    pbVar2 = pbVar6;
  }
LAB_000175c0:
  if (local_2c == __stack_chk_guard) {
    return pbVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



byte * sub_read_line_time_sameLine(int param_1,int param_2,byte **param_3,int param_4)

{
  char cVar1;
  byte *pbVar2;
  char *pcVar3;
  size_t sVar4;
  void *__s;
  void *pvVar5;
  int iVar6;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  char *pcVar13;
  byte *pbVar14;
  uint uVar15;
  char *local_c94;
  int local_c80;
  int local_c68;
  int local_c64;
  int local_c60;
  int local_c5c;
  int local_c58;
  int local_c54;
  int local_c50;
  int local_c4c;
  int local_c48;
  int local_c44;
  undefined4 local_c40;
  undefined4 local_c3c;
  undefined4 local_c38;
  undefined2 local_c34;
  undefined local_c32;
  undefined local_c31;
  undefined local_c30;
  undefined local_c2f;
  undefined local_c2e;
  undefined local_c2d;
  byte local_c2c;
  char local_c2b;
  char local_c2a;
  char acStack2092 [1024];
  byte abStack1068 [1024];
  int local_2c;
  
  pbVar14 = *param_3;
  local_2c = __stack_chk_guard;
  iVar11 = *(int *)(param_1 + 0xa48);
  uVar12 = *(undefined4 *)(param_1 + 0xa4c);
  local_c38 = 0x52627553;
  iVar8 = *(int *)(param_1 + 0xa58);
  iVar10 = *(int *)(param_1 + 0xa5c);
  local_c80 = 0;
  local_c31 = 0;
  local_c30 = 0;
  local_c32 = 0;
  local_c2f = 0;
  local_c2e = 0;
  local_c2d = 0;
  local_c34 = 0x7069;
  local_c68 = 0;
  local_c64 = 0;
  local_c60 = 0;
  local_c5c = 0;
  local_c58 = 0;
  local_c54 = 0;
  local_c50 = 0;
  local_c4c = 0;
  *(undefined4 *)(pbVar14 + 8) = 0;
  *(undefined4 *)(pbVar14 + 0xc) = 0;
  *(undefined4 *)(pbVar14 + 0x10) = 0;
  *(undefined4 *)(pbVar14 + 0x14) = 0;
  local_c48 = 0;
  local_c44 = 0;
  local_c40 = 0;
  local_c3c = 0;
  *(undefined4 *)(pbVar14 + 0xa0) = 0;
  memset(abStack1068,0,0x400);
  iVar6 = 0;
  __strcpy_chk(&local_c2c,(void *)(param_1 + 0x19c),0x400);
  memset((void *)(param_1 + 0x19c),0,0x400);
  do {
    remove_control_data(&local_c2c);
    pcVar3 = strstr((char *)&local_c2c,(char *)&local_c38);
    if (pcVar3 != (char *)0x0) {
      memset(pcVar3,0x20,7);
    }
    cVar1 = *(char *)(param_1 + 0x194);
    if (cVar1 == '\x01') {
      local_c80 = 0xb;
      iVar6 = sscanf((char *)&local_c2c,(char *)(param_1 + 0x94),&local_c64,&local_c60,&local_c5c,
                     &local_c68,&local_c58,&local_c40,&local_c50,&local_c4c,&local_c48,&local_c54,
                     &local_c44,abStack1068);
    }
    else {
      if (cVar1 == '\x02') {
        local_c80 = 10;
        iVar6 = sscanf((char *)&local_c2c,(char *)(param_1 + 0x94),&local_c64,&local_c60,&local_c5c,
                       &local_c68,&local_c58,&local_c50,&local_c4c,&local_c48,&local_c54,&local_c44,
                       abStack1068);
      }
      else {
        if (cVar1 == '\x03') {
          local_c80 = 0xc;
          iVar6 = sscanf((char *)&local_c2c,(char *)(param_1 + 0x94),&local_c3c,&local_c64,
                         &local_c60,&local_c5c,&local_c68,&local_c58,&local_c40,&local_c50,
                         &local_c4c,&local_c48,&local_c54,&local_c44,abStack1068);
        }
        else {
          if (cVar1 == '\x04') {
            local_c80 = 6;
            iVar6 = sscanf((char *)&local_c2c,(char *)(param_1 + 0x94),&local_c64,&local_c60,
                           &local_c5c,&local_c50,&local_c4c,&local_c48,abStack1068);
          }
          else {
            if (cVar1 == '\x05') {
              local_c80 = 9;
              iVar6 = sscanf((char *)&local_c2c,(char *)(param_1 + 0x94),&local_c68,&local_c64,
                             &local_c60,&local_c5c,&local_c58,&local_c50,&local_c4c,&local_c48,
                             &local_c44,abStack1068);
            }
            else {
              if (cVar1 == '\x06') {
                iVar6 = sscanf((char *)&local_c2c,(char *)(param_1 + 0x94),&local_c68,&local_c54,
                               abStack1068);
                local_c80 = 2;
                local_c5c = local_c68 / 10;
                local_c58 = local_c68 % 10;
                local_c48 = local_c54 / 10;
                local_c44 = local_c54 % 10;
              }
              else {
                if (cVar1 == '\a') {
                  local_c80 = 8;
                  iVar6 = sscanf((char *)&local_c2c,(char *)(param_1 + 0x94),&local_c64,&local_c60,
                                 &local_c5c,&local_c58,&local_c50,&local_c4c,&local_c48,&local_c44,
                                 abStack1068);
                }
              }
            }
          }
        }
      }
    }
    if (local_c80 <= iVar6) {
      uVar7 = local_c5c * 1000 + local_c64 * 3600000 + local_c60 * 60000 + local_c58;
      *(uint *)(pbVar14 + 8) = uVar7;
      *(int *)(pbVar14 + 0xc) = (int)uVar7 >> 0x1f;
      uVar15 = local_c48 * 1000 + local_c50 * 3600000 + local_c4c * 60000 + local_c44;
      *(uint *)(pbVar14 + 0x10) = uVar15 - uVar7;
      *(uint *)(pbVar14 + 0x14) =
           ((int)uVar15 >> 0x1f) - (((int)uVar7 >> 0x1f) + (uint)(uVar15 < uVar7));
      add_newLine_tag((char *)abStack1068);
      pbVar2 = abStack1068;
      local_c94 = acStack2092;
      goto LAB_00017bd4;
    }
    memset(abStack1068,0,0x400);
    pbVar2 = stream_read_line(param_2,extraout_r1,iVar11,uVar12,iVar8,iVar10,&local_c2c,0x400,
                              param_4);
  } while (pbVar2 != (byte *)0x0);
  goto LAB_00017df0;
  while (((local_c2c != 0x20 || (local_c2b != '\r')) || (local_c2a != '\n'))) {
LAB_00017bd4:
    pcVar3 = strstr((char *)pbVar2,"<font");
    if (pcVar3 != (char *)0x0) {
      while( true ) {
        sVar4 = __strlen_chk(pbVar2,0x400);
        __s = memchr(pbVar2,0x3c,sVar4);
        pvVar5 = memchr(pbVar2,0x3e,sVar4);
        if ((__s == (void *)0x0 || pvVar5 == (void *)0x0) ||
           ((int)(void *)((int)pvVar5 - (int)__s) < 1)) break;
        memset(__s,0,(size_t)(void *)((int)pvVar5 - (int)__s));
        memcpy(__s,(void *)((int)pvVar5 + 1),(size_t)(acStack2092 + (sVar4 - (int)pvVar5)));
      }
    }
    pcVar3 = process_external_sub_control_symbols((char *)pbVar2);
    sVar4 = strlen(pcVar3);
    pcVar13 = local_c94 + sVar4;
    memcpy(local_c94,pcVar3,sVar4);
    iVar9 = sVar4 + *(int *)(pbVar14 + 0xa0);
    *(int *)(pbVar14 + 0xa0) = iVar9;
    if (*(char *)(param_1 + 0x194) == '\a') goto LAB_00017dc0;
    memset(&local_c2c,0,0x400);
    pbVar2 = stream_read_line(param_2,extraout_r1_00,iVar11,uVar12,iVar8,iVar10,&local_c2c,0x400,
                              param_4);
    if (pbVar2 == (byte *)0x0) break;
    pcVar3 = strstr((char *)&local_c2c,(char *)&local_c38);
    if (pcVar3 != (char *)0x0) {
      *pcVar3 = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3[4] = '\0';
      pcVar3[5] = '\0';
      pcVar3[6] = '\0';
    }
    remove_control_data(&local_c2c);
    cVar1 = *(char *)(param_1 + 0x194);
    if (cVar1 == '\x01') {
      iVar6 = sscanf((char *)&local_c2c,(char *)(param_1 + 0x94),&local_c64,&local_c60,&local_c5c,
                     &local_c68,&local_c58,&local_c40,&local_c50,&local_c4c,&local_c48,&local_c54,
                     &local_c44,abStack1068);
    }
    else {
      if (cVar1 == '\x02') {
        iVar6 = sscanf((char *)&local_c2c,(char *)(param_1 + 0x94),&local_c64,&local_c60,&local_c5c,
                       &local_c68,&local_c58,&local_c50,&local_c4c,&local_c48,&local_c54,&local_c44,
                       abStack1068);
      }
      else {
        if (cVar1 == '\x03') {
          iVar6 = sscanf((char *)&local_c2c,(char *)(param_1 + 0x94),&local_c3c,&local_c64,
                         &local_c60,&local_c5c,&local_c68,&local_c58,&local_c40,&local_c50,
                         &local_c4c,&local_c48,&local_c54,&local_c44,abStack1068);
        }
        else {
          if (cVar1 == '\x04') {
            iVar6 = sscanf((char *)&local_c2c,(char *)(param_1 + 0x94),&local_c64,&local_c60,
                           &local_c5c,&local_c50,&local_c4c,&local_c48,abStack1068);
          }
          else {
            if (cVar1 == '\x05') {
              iVar6 = sscanf((char *)&local_c2c,(char *)(param_1 + 0x94),&local_c68,&local_c64,
                             &local_c60,&local_c5c,&local_c58,&local_c50,&local_c4c,&local_c48,
                             &local_c44,abStack1068);
              if ((iVar6 == 0) && (local_c2c == 0x23)) break;
            }
            else {
              if (cVar1 == '\x06') {
                iVar6 = sscanf((char *)&local_c2c,(char *)(param_1 + 0x94),&local_c68,&local_c54,
                               abStack1068);
              }
            }
          }
        }
      }
    }
    if (local_c80 <= iVar6) {
      strcpy((char *)(param_1 + 0x19c),(char *)&local_c2c);
      iVar9 = *(int *)(pbVar14 + 0xa0);
      goto LAB_00017dc0;
    }
    iVar6 = __strlen_chk(&local_c2c,0x400);
    if (iVar6 == 0) break;
    pbVar2 = &local_c2c;
    local_c94 = pcVar13;
    if (iVar6 == 2) {
      if ((local_c2c == 0xd) && (local_c2b == '\n')) break;
      goto LAB_00017bd4;
    }
    if (iVar6 != 3) {
      if ((iVar6 == 1) && (local_c2c == 0xd || local_c2c == 10)) break;
      goto LAB_00017bd4;
    }
  }
  iVar9 = *(int *)(pbVar14 + 0xa0);
LAB_00017dc0:
  acStack2092[iVar9] = '\0';
  pcVar3 = strdup(acStack2092);
  *(char **)(pbVar14 + 0x9c) = pcVar3;
  if (pcVar3 == (char *)0x0) {
    pbVar2 = (byte *)0xffffffff;
  }
  else {
    *(undefined4 *)(pbVar14 + 0xa8) = 0;
    *(undefined4 *)(pbVar14 + 0x98) = 1;
    pbVar2 = pbVar14;
  }
LAB_00017df0:
  if (local_2c != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return pbVar2;
}



byte * sub_read_line_sofni(int param_1,int param_2,byte **param_3,undefined4 param_4)

{
  int iVar1;
  size_t __n;
  byte *pbVar2;
  char *pcVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int local_86c;
  int local_868;
  int local_864;
  int local_860;
  int local_85c;
  int local_858;
  int local_854;
  int local_850;
  undefined auStack2124 [32];
  byte abStack2092 [1024];
  char acStack1068 [1024];
  int local_2c;
  
  pbVar5 = *param_3;
  iVar6 = *(int *)(param_1 + 0xa48);
  uVar8 = *(undefined4 *)(param_1 + 0xa4c);
  local_2c = __stack_chk_guard;
  iVar7 = *(int *)(param_1 + 0xa58);
  iVar9 = *(int *)(param_1 + 0xa5c);
  local_86c = 0;
  local_868 = 0;
  local_864 = 0;
  local_860 = 0;
  local_85c = 0;
  local_858 = 0;
  local_854 = 0;
  local_850 = 0;
  *(undefined4 *)(pbVar5 + 8) = 0;
  *(undefined4 *)(pbVar5 + 0xc) = 0;
  *(undefined4 *)(pbVar5 + 0x10) = 0;
  *(undefined4 *)(pbVar5 + 0x14) = 0;
  *(undefined4 *)(pbVar5 + 0xa0) = 0;
  pcVar3 = acStack1068;
  do {
    pbVar2 = stream_read_line(param_2,param_4,iVar6,uVar8,iVar7,iVar9,abStack2092,0x400,param_4);
    if (pbVar2 == (byte *)0x0) {
LAB_0001851c:
      if (local_2c == __stack_chk_guard) {
        return pbVar2;
      }
                    // WARNING: Subroutine does not return
      __stack_chk_fail();
    }
    iVar1 = sscanf((char *)abStack2092,(char *)(param_1 + 0x94),&local_86c,&local_868,&local_864,
                   &local_860,auStack2124,&local_85c,&local_858,&local_854,&local_850);
    if (iVar1 == 9) {
      uVar4 = local_86c * 3600000 + local_868 * 60000 + local_864 * 1000 + local_860 * 10;
      *(uint *)(pbVar5 + 8) = uVar4;
      *(int *)(pbVar5 + 0xc) = (int)uVar4 >> 0x1f;
      uVar10 = local_85c * 3600000 + local_858 * 60000 + local_854 * 1000 + local_850 * 10;
      *(uint *)(pbVar5 + 0x10) = uVar10 - uVar4;
      *(uint *)(pbVar5 + 0x14) =
           ((int)uVar10 >> 0x1f) - (((int)uVar4 >> 0x1f) + (uint)(uVar10 < uVar4));
      acStack1068[*(int *)(pbVar5 + 0xa0)] = '\0';
      pcVar3 = strdup(acStack1068);
      *(char **)(pbVar5 + 0x9c) = pcVar3;
      if (pcVar3 == (char *)0x0) {
        pbVar2 = (byte *)0xffffffff;
      }
      else {
        *(undefined4 *)(pbVar5 + 0xa8) = 0;
        *(undefined4 *)(pbVar5 + 0x98) = 1;
        pbVar2 = pbVar5;
      }
      goto LAB_0001851c;
    }
    __n = __strlen_chk(abStack2092,0x400);
    memcpy(pcVar3,abStack2092,__n);
    *(size_t *)(pbVar5 + 0xa0) = *(int *)(pbVar5 + 0xa0) + __n;
    pcVar3 = pcVar3 + __n;
  } while( true );
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Restarted to delay deadcode elimination for space: stack

byte * sub_read_line_sami(int param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  byte *pbVar5;
  byte *pbVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 uVar11;
  byte *pbVar12;
  int iVar13;
  byte *extraout_r1;
  byte *extraout_r1_00;
  byte *extraout_r1_01;
  byte *extraout_r1_02;
  byte *extraout_r1_03;
  byte *extraout_r1_04;
  byte *extraout_r1_05;
  byte *extraout_r1_06;
  byte *extraout_r1_07;
  byte *extraout_r1_08;
  byte *extraout_r1_09;
  byte *extraout_r1_10;
  byte *extraout_r1_11;
  byte *extraout_r1_12;
  byte *extraout_r1_13;
  int iVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  char *pcVar19;
  char *pcVar20;
  uint uVar21;
  undefined8 uVar22;
  uint local_8580;
  uint uStack34172;
  uint local_8558;
  char *pcStack34128;
  char *local_854c [32];
  byte *local_84cc [32];
  char acStack33868 [32768];
  undefined4 local_44c;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 uStack1088;
  undefined4 uStack1084;
  undefined4 uStack1080;
  undefined4 uStack1076;
  undefined4 local_430;
  char acStack1068 [908];
  byte abStack160 [116];
  int local_2c;
  byte abStack40 [4];
  
  local_2c = __stack_chk_guard;
  uVar18 = 0;
  memset(local_854c,0,0x80);
  uStack1088 = 0;
  uStack1084 = 0;
  uStack1080 = 0;
  uStack1076 = 0;
  pcStack34128 = (char *)0x0;
  local_430 = 0;
  local_44c = 0;
  local_448 = 0;
  local_444 = 0;
  memset(local_84cc,0,0x80);
  uVar21 = *(uint *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xa48);
  uVar11 = *(undefined4 *)(param_1 + 0xa4c);
  iVar3 = *(int *)(param_1 + 0xa58);
  pbVar12 = *(byte **)(param_1 + 0xa5c);
  pbVar5 = pbVar12;
  if (uVar21 != 0) {
    do {
      iVar14 = *(int *)(param_3 + uVar18 * 4);
      iVar13 = *(int *)(param_1 + uVar18 * 4 + 0x5a4);
      local_854c[uVar18] = acStack33868 + uVar18 * 0x400;
      local_84cc[uVar18] = (byte *)(iVar13 * 0xb8 + iVar14);
      memset(acStack33868 + uVar18 * 0x400,0,0x400);
      uVar18 = uVar18 + 1 & 0xff;
      pbVar5 = extraout_r1;
    } while (uVar18 < uVar21);
  }
  pcVar19 = (char *)(param_1 + 0x19c);
  if (*(char *)(param_1 + 0xa39) == '\x01') {
    local_8580 = 0;
    uStack34172 = 0;
    iVar13 = 0;
    local_8558 = 0;
    pcVar10 = pcVar19;
LAB_00018b78:
    do {
      pcStack34128 = pcVar10;
      iVar14 = iVar13;
      switch(iVar13) {
      case 0:
        pcStack34128 = stristr(pcStack34128,"Start=");
        pbVar5 = extraout_r1_09;
        if (pcStack34128 != (char *)0x0) {
          iVar13 = 1;
          local_8580 = strtol(pcStack34128 + 6,&pcStack34128,0);
          uStack34172 = (int)local_8580 >> 0x1f;
          pbVar5 = extraout_r1_10;
          pcVar10 = pcStack34128;
          goto LAB_00018b78;
        }
        break;
      case 1:
        pcStack34128 = stristr(pcStack34128,"P Class=");
        pbVar5 = extraout_r1_07;
        if (pcStack34128 != (char *)0x0) {
          pcVar10 = strchr(pcStack34128,0x3d);
          uVar18 = *(uint *)(param_1 + 0x10);
          pbVar5 = abStack160;
          pcVar10 = pcVar10 + 1;
          pcStack34128 = pcVar10;
          if (uVar18 != 0) {
            uVar21 = 0;
            do {
              pcVar9 = (char *)(param_1 + uVar21 * 0x20 + 0x630);
              sVar4 = strlen(pcVar9);
              iVar13 = strncmp(pcVar10,pcVar9,sVar4);
              if (iVar13 == 0) {
                *(undefined *)((int)&local_44c + uVar21) = 1;
                local_8558 = uVar21;
                break;
              }
              uVar21 = uVar21 + 1 & 0xff;
            } while (uVar21 < uVar18);
            pbVar5 = extraout_r1_08;
            if (uVar21 == uVar18) {
              if (uVar21 == 1) {
                local_8558 = 0;
                    // WARNING: Ignoring partial resolution of indirect
                local_44c._0_1_ = 1;
              }
              iVar13 = 2;
              pcVar10 = pcStack34128;
              goto LAB_00018b78;
            }
          }
          iVar13 = 2;
          pcVar10 = pcStack34128;
          goto LAB_00018b78;
        }
        break;
      case 2:
        pcStack34128 = strchr(pcStack34128,0x3e);
        pbVar5 = extraout_r1_11;
        if (pcStack34128 != (char *)0x0) {
          pcStack34128 = pcStack34128 + 1;
          FUN_00014174(pcStack34128);
          pcVar10 = pcStack34128;
          sVar4 = strlen(pcStack34128);
          pbVar5 = extraout_r1_12;
          if (2 < sVar4) {
            pcVar7 = stristr(pcVar10,"<SYNC");
            pcVar8 = stristr(pcVar10,"<P Class=");
            pcVar9 = pcVar8;
            if (pcVar8 != (char *)0x0) {
              pcVar9 = (char *)0x1;
            }
            pcVar20 = pcVar10;
            if (pcVar7 == (char *)0x0 || pcVar8 == (char *)0x0) {
              if (pcVar9 == (char *)0x0) goto LAB_00019000;
LAB_00019008:
              if (pcVar8 < pcVar10 + sVar4) {
                pcVar20 = acStack1068;
                __memcpy_chk(pcVar20,pcVar10,pcVar8 + -(int)pcVar10,0x400);
                acStack1068[(int)(pcVar8 + -(int)pcStack34128)] = '\0';
                pcStack34128 = pcVar20;
              }
            }
            else {
              if (pcVar8 <= pcVar7) {
                pcVar7 = pcVar8;
              }
LAB_00019000:
              pcVar8 = pcVar7;
              if (pcVar8 != (char *)0x0) goto LAB_00019008;
            }
            pcVar10 = process_external_sub_control_symbols(pcVar20);
            pcStack34128 = pcVar10;
            iVar14 = strncmp(pcVar10,"&nbsp",5);
            pbVar5 = extraout_r1_13;
            if (iVar14 != 0) {
              while (pcVar9 = strchr(pcVar10,0x3e), pcVar9 != (char *)0x0) {
                pcVar10 = pcVar9 + 1;
                pcStack34128 = pcVar10;
              }
              iVar13 = 3;
              pbVar6 = abStack40 + local_8558 * 4;
              sVar4 = strlen(pcVar10);
              pcVar9 = local_854c[local_8558];
              goto LAB_000190f8;
            }
            break;
          }
        }
        iVar13 = 3;
        pcVar10 = pcStack34128;
        goto LAB_00018b78;
      case 3:
        pbVar5 = stream_read_line(param_2,pbVar5,iVar2,uVar11,iVar3,(int)pbVar12,&DAT_00026140,0x400
                                  ,param_4);
        if (pbVar5 == (byte *)0x0) goto LAB_00018b04;
        pcStack34128 = &DAT_00026140;
        pcStack34128 = stristr(&DAT_00026140,"Start=");
        if (pcStack34128 != (char *)0x0) {
          uVar21 = strtol(pcStack34128 + 6,&pcStack34128,0);
          sVar4 = __strlen_chk(&DAT_00026140,0x400);
          uVar18 = (int)uVar21 >> 0x1f;
          strncpy(pcVar19,&DAT_00026140,sVar4);
          *(undefined *)(param_1 + sVar4 + 0x19c) = 0;
          goto LAB_0001891c;
        }
        pcVar10 = stristr(&DAT_00026140,"P Class=");
        if (pcVar10 != (char *)0x0) {
          iVar13 = 1;
          pbVar5 = extraout_r1_04;
          goto LAB_00018b78;
        }
        pcStack34128 = &DAT_00026140;
        FUN_00014174(&DAT_00026140);
        pcVar9 = pcStack34128;
        sVar4 = strlen(pcStack34128);
        pbVar5 = extraout_r1_05;
        pcVar10 = pcStack34128;
        if (sVar4 < 3) goto LAB_00018b78;
        pcVar7 = stristr(pcVar9,"<SYNC");
        pcVar8 = stristr(pcVar9,"<P Class=");
        pcVar10 = pcVar8;
        if (pcVar8 != (char *)0x0) {
          pcVar10 = (char *)0x1;
        }
        if (pcVar7 == (char *)0x0 || pcVar8 == (char *)0x0) {
          if (pcVar10 == (char *)0x0) goto LAB_0001920c;
LAB_00018ce4:
          if (pcVar8 < pcVar9 + sVar4) {
            __memcpy_chk(acStack1068,pcVar9,pcVar8 + -(int)pcVar9,0x400);
            acStack1068[(int)(pcVar8 + -(int)pcStack34128)] = '\0';
            pcVar9 = acStack1068;
            pcStack34128 = acStack1068;
          }
        }
        else {
          if (pcVar8 <= pcVar7) {
            pcVar7 = pcVar8;
          }
LAB_0001920c:
          pcVar8 = pcVar7;
          if (pcVar7 != (char *)0x0) goto LAB_00018ce4;
        }
        pcVar10 = process_external_sub_control_symbols(pcVar9);
        pcStack34128 = pcVar10;
        iVar14 = strncmp(pcVar10,"&nbsp",5);
        pbVar5 = extraout_r1_06;
        if (iVar14 != 0) {
          while (pcVar9 = strchr(pcVar10,0x3e), pcVar9 != (char *)0x0) {
            pcVar10 = pcVar9 + 1;
            pcStack34128 = pcVar10;
          }
          pbVar6 = abStack40 + local_8558 * 4;
          sVar4 = strlen(pcVar10);
          pcVar9 = local_854c[local_8558];
LAB_000190f8:
          memcpy(pcVar9,pcVar10,sVar4);
          pbVar5 = pbVar6 + -0x8400;
          *(char **)(pbVar6 + -0x8524) = pcVar9 + sVar4;
          *(size_t *)(*(int *)(pbVar6 + -0x84a4) + 0xa0) =
               *(int *)(*(int *)(pbVar6 + -0x84a4) + 0xa0) + sVar4;
          pcVar10 = pcStack34128;
          goto LAB_00018b78;
        }
      }
      iVar13 = iVar14;
      pbVar6 = stream_read_line(param_2,pbVar5,iVar2,uVar11,iVar3,(int)pbVar12,&DAT_00026140,0x400,
                                param_4);
      pbVar5 = extraout_r1_03;
      pcVar10 = &DAT_00026140;
    } while (pbVar6 != (byte *)0x0);
LAB_00018b04:
    pbVar5 = *(byte **)(local_84cc[local_8558] + 0xa0);
    if (*(byte **)(local_84cc[local_8558] + 0xa0) == (byte *)0x0) goto LAB_00018a90;
LAB_00018b2c:
    uVar21 = 0;
    uVar18 = 0;
  }
  else {
    pcStack34128 = pcVar19;
    __android_log_print(3,"subExternalDec","<%s:%u>: ***tmp = %s","sub_read_line_sami",0x90e,pcVar19
                       );
    pcStack34128 = stristr(pcStack34128,"Start=");
    if (pcStack34128 == (char *)0x0) {
      local_8580 = 0;
      uStack34172 = 0;
      pbVar5 = extraout_r1_00;
    }
    else {
      local_8580 = strtol(pcStack34128 + 6,&pcStack34128,0);
      uStack34172 = (int)local_8580 >> 0x1f;
      pbVar5 = extraout_r1_01;
      if (pcStack34128 != (char *)0x0) {
        pcStack34128 = strchr(pcStack34128,0x3e);
        pbVar5 = abStack40;
        if (pcStack34128 != (char *)0x0) {
          pcStack34128 = pcStack34128 + 1;
          FUN_00014174(pcStack34128);
          pcVar10 = pcStack34128;
          sVar4 = strlen(pcStack34128);
          pbVar5 = extraout_r1_02;
          if (2 < sVar4) {
            pcVar10 = process_external_sub_control_symbols(pcVar10);
            pcStack34128 = pcVar10;
            sVar4 = strlen(pcVar10);
            memcpy(local_854c[0],pcVar10,sVar4);
            *(size_t *)(local_84cc[0] + 0xa0) = sVar4;
            pbVar5 = local_84cc[0];
          }
        }
      }
    }
    pbVar5 = stream_read_line(param_2,pbVar5,iVar2,uVar11,iVar3,(int)pbVar12,&DAT_00026140,0x400,
                              param_4);
    if (pbVar5 == (byte *)0x0) {
      __android_log_print(3,"subExternalDec","<%s:%u>: ***return null","sub_read_line_sami",0x926);
      goto LAB_00018a90;
    }
    pcStack34128 = &DAT_00026140;
    pcStack34128 = stristr(&DAT_00026140,"start=");
    if (pcStack34128 == (char *)0x0) {
      uVar21 = 0;
      uVar18 = 0;
      bVar15 = true;
    }
    else {
      local_44c = CONCAT31(local_44c._1_3_,1);
      uVar21 = strtol(pcStack34128 + 6,&pcStack34128,0);
      sVar4 = __strlen_chk(&DAT_00026140,0x400);
      uVar18 = (int)uVar21 >> 0x1f;
      strncpy(pcVar19,&DAT_00026140,sVar4);
      *(undefined *)(param_1 + sVar4 + 0x19c) = 0;
      if ((uVar21 | uVar18) == 0) {
        bVar15 = true;
      }
      else {
        bVar15 = false;
      }
    }
    if ((local_8580 | uStack34172) == 0) {
      bVar15 = false;
    }
    if (bVar15) {
      if (*(int *)(local_84cc[0] + 0xa0) < 1) goto LAB_00018b2c;
      local_44c = CONCAT31(local_44c._1_3_,1);
      uVar22 = VectorAdd(CONCAT44(uStack34172,local_8580),2000,8);
      uVar18 = (uint)((ulonglong)uVar22 >> 0x20);
      uVar21 = (uint)uVar22;
      memset(pcVar19,0,0x400);
    }
  }
LAB_0001891c:
  uVar16 = *(uint *)(param_1 + 0x10);
  pbVar5 = local_84cc[0];
  if (uVar16 != 0) {
    lVar1 = (ulonglong)(uVar21 - local_8580) * 1000;
    uVar17 = 0;
LAB_00018994:
    do {
      if (*(char *)((int)&local_44c + uVar17) == '\x01') {
        pbVar5 = local_84cc[uVar17];
        if (0 < *(int *)(pbVar5 + 0xa0)) {
          iVar3 = param_1 + (uVar17 + 0x168) * 4;
          iVar2 = *(int *)(iVar3 + 4);
          acStack33868[*(int *)(pbVar5 + 0xa0) + uVar17 * 0x400] = '\0';
          *(int *)(iVar3 + 4) = iVar2 + 1;
          pcVar19 = strdup(acStack33868 + uVar17 * 0x400);
          *(char **)(pbVar5 + 0x9c) = pcVar19;
          if (pcVar19 == (char *)0x0) {
            pbVar5 = (byte *)0xffffffff;
            break;
          }
          uVar11 = *(undefined4 *)(param_1 + 4);
          *(undefined4 *)(pbVar5 + 0x30) = 0xffffffff;
          *(int *)(pbVar5 + 8) = (int)((ulonglong)local_8580 * 1000);
          *(uint *)(pbVar5 + 0xc) = uStack34172 * 1000 + (int)((ulonglong)local_8580 * 1000 >> 0x20)
          ;
          *(undefined4 *)(pbVar5 + 0x34) = 0xffffffff;
          *(undefined4 *)(pbVar5 + 0x38) = 0xffffffff;
          *(undefined4 *)(pbVar5 + 0x3c) = 0xffffffff;
          *(undefined4 *)(pbVar5 + 0x44) = 0xffffffff;
          *(undefined4 *)(pbVar5 + 0x48) = 0xffffffff;
          *(undefined4 *)(pbVar5 + 0x4c) = 0xffffffff;
          *(undefined4 *)(pbVar5 + 0x98) = 1;
          *(undefined4 *)(pbVar5 + 0xa8) = 0;
          *(int *)(pbVar5 + 0x10) = (int)lVar1;
          *(uint *)(pbVar5 + 0x14) =
               (uVar18 - (uStack34172 + (uVar21 < local_8580))) * 1000 +
               (int)((ulonglong)lVar1 >> 0x20);
          *(undefined4 *)(pbVar5 + 0x40) = 0;
          *(undefined4 *)(pbVar5 + 0x20) = 0;
          *(undefined4 *)(pbVar5 + 0xa4) = uVar11;
          *(undefined4 *)(pbVar5 + 0x50) = 0;
          memcpy(pbVar5 + 0x58,"unknown",8);
          uVar16 = *(uint *)(param_1 + 0x10);
          uVar17 = uVar17 + 1 & 0xff;
          pbVar5 = local_84cc[0];
          if (uVar16 <= uVar17) break;
          goto LAB_00018994;
        }
      }
      uVar17 = uVar17 + 1 & 0xff;
      pbVar5 = local_84cc[0];
    } while (uVar17 < uVar16);
  }
LAB_00018a90:
  if (local_2c == __stack_chk_guard) {
    return pbVar5;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



int sub_read_line_cpc600(int param_1,int param_2,int *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  char *__s;
  size_t __n;
  char *pcVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int local_c4c;
  int local_c48;
  int local_c44;
  int local_c40;
  int local_c3c;
  int local_c38;
  int local_c34;
  int local_c30;
  byte abStack3116 [1024];
  char acStack2092 [1024];
  char local_42c;
  char local_42b;
  char local_42a;
  char local_429;
  char local_428;
  int local_2c;
  
  iVar6 = *param_3;
  local_2c = __stack_chk_guard;
  iVar7 = *(int *)(param_1 + 0xa48);
  uVar9 = *(undefined4 *)(param_1 + 0xa4c);
  iVar8 = *(int *)(param_1 + 0xa58);
  iVar10 = *(int *)(param_1 + 0xa5c);
  memset(&local_42c,0,0x400);
  *(undefined4 *)(iVar6 + 0xa0) = 0;
  *(undefined4 *)(iVar6 + 8) = 0;
  *(undefined4 *)(iVar6 + 0xc) = 0;
  *(undefined4 *)(iVar6 + 0x10) = 0;
  *(undefined4 *)(iVar6 + 0x14) = 0;
  __strcpy_chk(abStack3116,(void *)(param_1 + 0x19c),0x400);
  memset((void *)(param_1 + 0x19c),0,0x400);
  do {
    iVar2 = sscanf((char *)abStack3116,"%d:%d:%d:%d%1024[^\r\n]",&local_c4c,&local_c48,&local_c44,
                   &local_c40,&local_42c);
    if (4 < iVar2) {
      *(undefined4 *)(iVar6 + 0xc) = 0;
      *(int *)(iVar6 + 8) = local_c44 * 1000 + local_c4c * 3600000 + local_c48 * 60000 + local_c40;
      add_newLine_tag(&local_42c);
      pcVar4 = &local_42c;
      goto joined_r0x000193dc;
    }
    pbVar3 = stream_read_line(param_2,0x400,iVar7,uVar9,iVar8,iVar10,abStack3116,0x400,param_4);
  } while (pbVar3 != (byte *)0x0);
  if (local_2c == __stack_chk_guard) {
    return 0;
  }
  goto LAB_0001936c;
joined_r0x000193dc:
  cVar1 = local_42b;
  if ((((local_42c == -0x4d) && (cVar1 == '0')) && (local_42a == 'N')) && (local_429 == 'E')) {
    cVar5 = pcVar4[5];
    if ((local_428 == 'N') && (cVar5 == -0x4d)) goto code_r0x00019430;
  }
  else {
    cVar5 = pcVar4[5];
  }
  pcVar4 = pcVar4 + 1;
  local_42b = local_42a;
  local_42a = local_429;
  local_429 = local_428;
  local_428 = cVar5;
  local_42c = cVar1;
  goto joined_r0x000193dc;
code_r0x00019430:
  pbVar3 = (byte *)(pcVar4 + 6);
  pcVar4 = acStack2092;
  while( true ) {
    __s = process_external_sub_control_symbols((char *)pbVar3);
    __n = strlen(__s);
    memcpy(pcVar4,__s,__n);
    iVar2 = *(int *)(iVar6 + 0xa0) + __n;
    *(int *)(iVar6 + 0xa0) = iVar2;
    pbVar3 = stream_read_line(param_2,iVar2,iVar7,uVar9,iVar8,iVar10,abStack3116,0x400,param_4);
    if (pbVar3 == (byte *)0x0) break;
    iVar2 = sscanf((char *)abStack3116,"%d:%d:%d:%d%1024[^\r\n]",&local_c3c,&local_c38,&local_c34,
                   &local_c30,&local_42c);
    if (iVar2 == 5) {
      uVar11 = local_c34 * 1000 + local_c3c * 3600000 + local_c38 * 60000 + local_c30;
      *(uint *)(iVar6 + 0x10) = uVar11 - *(uint *)(iVar6 + 8);
      *(uint *)(iVar6 + 0x14) = -(*(int *)(iVar6 + 0xc) + (uint)(uVar11 < *(uint *)(iVar6 + 8)));
      acStack2092[*(int *)(iVar6 + 0xa0)] = '\0';
      pcVar4 = strdup(acStack2092);
      *(char **)(iVar6 + 0x9c) = pcVar4;
      if (pcVar4 == (char *)0x0) {
        iVar6 = -1;
      }
      else {
        *(undefined4 *)(iVar6 + 0xa8) = 0;
        *(undefined4 *)(iVar6 + 0x98) = 1;
      }
      goto LAB_0001956c;
    }
    pbVar3 = abStack3116;
    pcVar4 = pcVar4 + __n;
  }
  iVar6 = -1;
LAB_0001956c:
  if (local_2c == __stack_chk_guard) {
    return iVar6;
  }
LAB_0001936c:
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void sub_ssa_ass_parse_info(int param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  void *pvVar3;
  byte *pbVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  char *local_68c;
  uint local_65c;
  int local_654;
  undefined4 local_650;
  undefined4 local_64c;
  undefined4 local_648;
  undefined4 local_644;
  undefined4 local_640;
  undefined4 local_63c;
  undefined4 local_638;
  undefined4 local_634;
  undefined4 local_630;
  undefined auStack1580 [64];
  char acStack1516 [64];
  char acStack1452 [64];
  char acStack1388 [64];
  char acStack1324 [64];
  char acStack1260 [64];
  char acStack1196 [64];
  char acStack1132 [64];
  byte abStack1068 [1024];
  int local_2c;
  
  local_654 = 0;
  local_650 = 0;
  local_2c = __stack_chk_guard;
  local_64c = 0;
  local_648 = 0;
  local_644 = 0;
  local_640 = 0;
  memset(auStack1580,0,0x40);
  memset(acStack1516,0,0x40);
  memset(acStack1452,0,0x40);
  memset(acStack1388,0,0x40);
  memset(acStack1324,0,0x40);
  local_63c = 0;
  local_638 = 0;
  local_634 = 0;
  local_630 = 0;
  memset(acStack1260,0,0x40);
  memset(acStack1196,0,0x40);
  memset(acStack1132,0,0x40);
  iVar9 = *(int *)(param_1 + 0xa58);
  iVar10 = *(int *)(param_1 + 0xa5c);
  iVar11 = *(int *)(param_1 + 0xa48);
  uVar12 = *(undefined4 *)(param_1 + 0xa4c);
  memset(abStack1068,0,0x400);
  puVar2 = (undefined4 *)malloc(0x10);
  *(undefined4 **)(param_1 + 0x624) = puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  pvVar3 = malloc(0x450);
  puVar2[3] = pvVar3;
  memset(pvVar3,0,0x450);
  while (((pbVar4 = stream_read_line(param_2,0x400,iVar11,uVar12,iVar9,iVar10,abStack1068,0x400,
                                     param_3), pbVar4 != (byte *)0x0 &&
          (pcVar5 = strstr((char *)abStack1068,"[V4"), pcVar5 == (char *)0x0)) &&
         (pcVar5 = strstr((char *)abStack1068,"Format:"), pcVar5 == (char *)0x0))) {
    pcVar5 = strstr((char *)abStack1068,"PlayResX");
    if (pcVar5 == (char *)0x0) {
      pcVar5 = strstr((char *)abStack1068,"PlayResY");
      if (pcVar5 != (char *)0x0) {
        remove_strim_blank((char *)abStack1068);
        sscanf((char *)abStack1068,"PlayResY:%d",puVar2 + 2);
      }
    }
    else {
      remove_strim_blank((char *)abStack1068);
      sscanf((char *)abStack1068,"PlayResX:%d",puVar2 + 1);
    }
  }
  local_65c = 6;
  sub_set_playResx_playResy((int)puVar2);
  local_68c = (char *)puVar2[3];
  *(undefined *)((int)puVar2 + 1) = 0;
  memset(local_68c,0,0xb8);
  while ((pbVar4 = stream_read_line(param_2,0x400,iVar11,uVar12,iVar9,iVar10,abStack1068,0x400,
                                    param_3), pbVar4 != (byte *)0x0 &&
         (pcVar5 = strstr((char *)abStack1068,"[Events]"), pcVar5 == (char *)0x0))) {
    uVar6 = sscanf((char *)abStack1068,
                                      
                   "Style:%64[^,],%64[^,],%d,%64[^,],%64[^,],%64[^,],%64[^,],%4[^,],%4[^,],%64[^,],%64[^,],%64[^,],%d,%d,%d,%d,%64[^,],%d"
                   ,local_68c,local_68c + 0x40,&local_640,acStack1516,acStack1452,acStack1388,
                   acStack1324,&local_63c,&local_638,auStack1580,auStack1580,auStack1580,&local_654,
                   &local_650,&local_64c,&local_648,auStack1580,&local_644);
    uVar7 = sscanf((char *)abStack1068,
                                      
                   "Style:%64[^,],%64[^,],%d,%64[^,],%64[^,],%64[^,],%64[^,],%4[^,],%4[^,],%4[^,],%4[^,],%64[^,],%64[^,],%64[^,],%64[^,],%64[^,],%64[^,],%64[^,],%d,%d,%d,%d,%d"
                   ,local_68c,local_68c + 0x40,&local_640,acStack1516,acStack1452,acStack1388,
                   acStack1324,&local_63c,&local_638,&local_634,&local_630,acStack1260,acStack1196,
                   auStack1580,acStack1132,auStack1580,auStack1580,auStack1580,&local_654,&local_650
                   ,&local_64c,&local_648,&local_644);
    if ((uVar6 & 0xff) == 0x12 || (uVar7 & 0xff) == 0x17) {
      iVar8 = (uVar6 & 0xff) - 0x12;
      if (iVar8 != 0) {
        iVar8 = 1;
      }
      *(char *)puVar2 = (char)iVar8;
      *(undefined4 *)(local_68c + 0x8c) = local_64c;
      local_68c[0x81] = (char)local_640;
      *(undefined4 *)(local_68c + 0x88) = local_650;
      *(undefined4 *)(local_68c + 0x90) = local_648;
      *(undefined4 *)(local_68c + 0x94) = local_644;
      iVar8 = atoi(acStack1260);
      *(int *)(local_68c + 0xac) = iVar8;
      iVar8 = atoi(acStack1196);
      *(int *)(local_68c + 0xb0) = iVar8;
      iVar8 = atoi(acStack1132);
      *(int *)(local_68c + 0xb4) = iVar8;
      bVar1 = sub_ssa_ass_convert_style
                        ((char *)&local_63c,(char *)&local_638,(char *)&local_634,(char *)&local_630
                        );
      *(uint *)(local_68c + 0xa8) = (uint)bVar1;
      uVar6 = sub_ssa_ass_convert_colorValue(acStack1516);
      *(uint *)(local_68c + 0x98) = uVar6;
      uVar6 = sub_ssa_ass_convert_colorValue(acStack1452);
      *(uint *)(local_68c + 0x9c) = uVar6;
      uVar6 = sub_ssa_ass_convert_colorValue(acStack1388);
      *(uint *)(local_68c + 0xa0) = uVar6;
      uVar6 = sub_ssa_ass_convert_colorValue(acStack1324);
      *(uint *)(local_68c + 0xa4) = uVar6;
      sub_ssa_ass_process_styles_info((byte *)puVar2,local_68c,local_654);
      uVar6 = *(byte *)((int)puVar2 + 1) + 1 & 0xff;
      *(char *)((int)puVar2 + 1) = (char)uVar6;
      if (local_65c == uVar6) {
        local_65c = local_65c + 1 & 0xff;
        pvVar3 = realloc((void *)puVar2[3],local_65c * 0xb8);
        uVar6 = (uint)*(byte *)((int)puVar2 + 1);
        puVar2[3] = pvVar3;
      }
      else {
        pvVar3 = (void *)puVar2[3];
      }
      local_68c = (char *)(uVar6 * 0xb8 + (int)pvVar3);
      memset(local_68c,0,0xb8);
    }
  }
  if (local_2c != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



byte * sub_read_line_ssa(int param_1,int param_2,byte **param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined *puVar14;
  undefined4 uVar15;
  bool bVar16;
  uint local_8e8;
  int local_8e4;
  int local_8e0;
  int local_8dc;
  int local_8d8;
  int local_8d4;
  int local_8d0;
  int local_8cc;
  int local_8c8;
  undefined4 local_8c4;
  int local_8c0;
  int local_8bc;
  int local_8b8;
  int local_8b4;
  int local_8b0;
  undefined auStack2220 [128];
  byte abStack2092 [1024];
  char acStack1068 [1024];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  local_8e8 = 0;
  local_8e4 = 0;
  local_8e0 = 0;
  local_8dc = 0;
  local_8d8 = 0;
  local_8d4 = 0;
  local_8d0 = 0;
  local_8cc = 0;
  local_8c8 = 0;
  local_8c4 = 0;
  memset(auStack2220,0,0x80);
  pbVar5 = *param_3;
  iVar7 = *(int *)(param_1 + 0xa48);
  uVar10 = *(undefined4 *)(param_1 + 0xa4c);
  local_8c0 = 0;
  local_8bc = 0;
  iVar8 = *(int *)(param_1 + 0xa58);
  iVar11 = *(int *)(param_1 + 0xa5c);
  local_8b8 = 0;
  local_8b4 = -1;
  local_8b0 = -1;
  memset(acStack1068,0,0x400);
  pbVar6 = *(byte **)(param_1 + 0x624);
  *(undefined4 *)(pbVar5 + 0xa0) = 0;
  *(undefined4 *)(pbVar5 + 8) = 0;
  *(undefined4 *)(pbVar5 + 0xc) = 0;
  *(undefined4 *)(pbVar5 + 0x10) = 0;
  *(undefined4 *)(pbVar5 + 0x14) = 0;
  do {
    pbVar1 = stream_read_line(param_2,0x400,iVar7,uVar10,iVar8,iVar11,abStack2092,0x400,param_4);
    if (pbVar1 == (byte *)0x0) goto LAB_00019f6c;
    iVar2 = sscanf((char *)abStack2092,"Dialogue: Marked=%d,%d:%d:%d.%d,%d:%d:%d.%d,%1024[^\n\r]",
                   &local_8c4,&local_8e4,&local_8dc,&local_8d4,&local_8cc,&local_8e0,&local_8d8,
                   &local_8d0,&local_8c8,acStack1068);
  } while ((iVar2 < 9) &&
          (iVar2 = sscanf((char *)abStack2092,"Dialogue: %d,%d:%d:%d.%d,%d:%d:%d.%d,%1024[^\n\r]",
                          &local_8c4,&local_8e4,&local_8dc,&local_8d4,&local_8cc,&local_8e0,
                          &local_8d8,&local_8d0,&local_8c8,acStack1068), iVar2 < 9));
  add_newLine_tag(acStack1068);
  uVar12 = local_8d4 * 1000 + local_8e4 * 3600000 + local_8dc * 60000 + local_8cc;
  *(uint *)(pbVar5 + 8) = uVar12;
  *(int *)(pbVar5 + 0xc) = (int)uVar12 >> 0x1f;
  uVar13 = local_8d0 * 1000 + local_8e0 * 3600000 + local_8d8 * 60000 + local_8c8;
  *(uint *)(pbVar5 + 0x10) = uVar13 - uVar12;
  *(uint *)(pbVar5 + 0x14) =
       ((int)uVar13 >> 0x1f) - (((int)uVar12 >> 0x1f) + (uint)(uVar13 < uVar12));
  pcVar3 = sub_ssa_ass_parse_style_info
                     ((int)pbVar6,pbVar5,acStack1068,auStack2220,&local_8c0,&local_8bc,&local_8b8,
                      &local_8e8);
  pcVar4 = (char *)strlen(pcVar3);
  pcVar3[(int)pcVar4] = '\0';
  sub_ssa_ass_convert_control_tags(pcVar3,(int)pcVar4);
  *(undefined4 *)(pbVar5 + 0x98) = 1;
  if (pbVar6 != (byte *)0x0) {
    iVar7 = local_8e8 * 0xb8 + *(int *)(pbVar6 + 0xc);
    uVar12 = *(uint *)(iVar7 + 0xa8);
    uVar15 = *(undefined4 *)(iVar7 + 0x84);
    uVar10 = *(undefined4 *)(iVar7 + 0x98);
    bVar16 = uVar12 == 0;
    uVar13 = *(uint *)(iVar7 + 0x9c);
    *(undefined4 *)(pbVar5 + 0xa4) = *(undefined4 *)(iVar7 + 0x94);
    if (bVar16) {
      uVar12 = 0xffffffff;
    }
    uVar9 = (uint)*(byte *)(iVar7 + 0x81);
    *(uint *)(pbVar5 + 0x54) = uVar13;
    if (!bVar16) {
      uVar13 = (uVar12 << 0x1e) >> 0x1f;
    }
    *(undefined4 *)(pbVar5 + 0x20) = uVar15;
    *(uint *)(pbVar5 + 0x40) = uVar9;
    if (!bVar16) {
      uVar9 = uVar12 & 1;
    }
    *(undefined4 *)(pbVar5 + 0x50) = uVar10;
    if (bVar16) {
      *(uint *)(pbVar5 + 0x44) = uVar12;
      *(uint *)(pbVar5 + 0x48) = uVar12;
    }
    else {
      uVar12 = (uVar12 << 0x1d) >> 0x1f;
      *(uint *)(pbVar5 + 0x44) = uVar9;
      *(uint *)(pbVar5 + 0x48) = uVar13;
    }
    *(uint *)(pbVar5 + 0x4c) = uVar12;
    pbVar1 = pbVar5 + 0x58;
    switch(*(undefined *)(iVar7 + 0x80)) {
    case 0:
      memcpy(pbVar1,"epilog",7);
      break;
    case 1:
      memcpy(pbVar1,"verdana",8);
      break;
    case 2:
      memcpy(pbVar1,"georgia",8);
      break;
    case 3:
      memcpy(pbVar1,"arial",6);
      break;
    case 4:
      memcpy(pbVar1,"times new roman",0x10);
      break;
    case 0xff:
      memcpy(pbVar1,"unknown",8);
      break;
    default:
      memcpy(pbVar1,"unknown",8);
    }
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(int *)(pbVar5 + 0xa4) = *(int *)(param_1 + 4);
  }
  sub_post_process_ssa_ass(pbVar6,(int)pbVar5,pcVar3,pcVar4,&local_8b4,&local_8b0);
  sub_ssa_ass_get_disply_pos
            ((int)pbVar5,(int)pbVar6,local_8e8 & 0xff,local_8c0,local_8bc,local_8b8,local_8b4,
             local_8b0);
  iVar7 = *(int *)(pbVar5 + 0x9c);
  pbVar1 = pbVar5;
  if ((iVar7 != 0) && (iVar8 = *(int *)(pbVar5 + 0xa0), 1 < iVar8)) {
    iVar11 = 0;
    while( true ) {
      pcVar3 = (char *)(iVar7 + iVar11);
      puVar14 = (undefined *)(iVar7 + iVar11);
      iVar11 = iVar11 + 1;
      if ((*pcVar3 == '\\') && (*(char *)(iVar7 + iVar11) == 'n')) {
        *puVar14 = 10;
        *(undefined *)(*(int *)(pbVar5 + 0x9c) + iVar11) = 0xd;
        iVar8 = *(int *)(pbVar5 + 0xa0);
      }
      if (iVar8 + -1 <= iVar11) break;
      iVar7 = *(int *)(pbVar5 + 0x9c);
    }
  }
LAB_00019f6c:
  if (local_2c == __stack_chk_guard) {
    return pbVar1;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



byte * sub_read_line_IAuthorScript(int param_1,int param_2,byte **param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  byte *pbVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 uVar5;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int local_c3c;
  int local_c38;
  int local_c34;
  int local_c30;
  byte abStack3116 [1024];
  char acStack2092 [1024];
  char acStack1068 [1024];
  int local_2c;
  
  pbVar8 = *param_3;
  local_2c = __stack_chk_guard;
  iVar9 = *(int *)(param_1 + 0xa48);
  uVar11 = *(undefined4 *)(param_1 + 0xa4c);
  iVar10 = *(int *)(param_1 + 0xa58);
  iVar12 = *(int *)(param_1 + 0xa5c);
  memset(acStack1068,0,0x400);
  *(undefined4 *)(pbVar8 + 8) = 0;
  *(undefined4 *)(pbVar8 + 0xc) = 0;
  *(undefined4 *)(pbVar8 + 0x10) = 0;
  *(undefined4 *)(pbVar8 + 0x14) = 0;
  *(undefined4 *)(pbVar8 + 0xa0) = 0;
  __strcpy_chk(abStack3116,(void *)(param_1 + 0x19c),0x400);
  memset((void *)(param_1 + 0x19c),0,0x400);
  do {
    iVar1 = sscanf((char *)abStack3116,"BMPFILE:%1024[^\n\r]",acStack1068);
    if (iVar1 == 1) {
      add_newLine_tag(acStack1068);
      pcVar2 = process_external_sub_control_symbols(acStack1068);
      sVar3 = strlen(pcVar2);
      __memcpy_chk(acStack2092,pcVar2,sVar3,0x400);
      *(size_t *)(pbVar8 + 0xa0) = *(int *)(pbVar8 + 0xa0) + sVar3;
      uVar5 = extraout_r1_00;
      goto LAB_0001a190;
    }
    pbVar4 = stream_read_line(param_2,extraout_r1,iVar9,uVar11,iVar10,iVar12,abStack3116,0x400,
                              param_4);
  } while (pbVar4 != (byte *)0x0);
  goto LAB_0001a2fc;
  while ((pcVar2 = strstr((char *)abStack3116,"STARTTIME:"), uVar5 = extraout_r1_01,
         pcVar2 == (char *)0x0 ||
         (iVar1 = sscanf((char *)abStack3116,"STARTTIME:%d.%d",&local_c3c,&local_c38),
         uVar5 = extraout_r1_02, iVar1 != 2))) {
LAB_0001a190:
    pbVar4 = stream_read_line(param_2,uVar5,iVar9,uVar11,iVar10,iVar12,abStack3116,0x400,param_4);
    if (pbVar4 == (byte *)0x0) goto LAB_0001a34c;
  }
  do {
    pbVar4 = stream_read_line(param_2,uVar5,iVar9,uVar11,iVar10,iVar12,abStack3116,0x400,param_4);
    if (pbVar4 == (byte *)0x0) goto LAB_0001a34c;
    pcVar2 = strstr((char *)abStack3116,"DISABLE_OGT");
    uVar5 = extraout_r1_03;
  } while ((pcVar2 == (char *)0x0) ||
          (iVar1 = sscanf((char *)abStack3116,"TIME:%d.%d",&local_c34,&local_c30),
          uVar5 = extraout_r1_04, iVar1 != 2));
  if (local_c38 < 10) {
    local_c38 = local_c38 * 100;
    if (9 < local_c30) goto LAB_0001a338;
LAB_0001a28c:
    local_c30 = local_c30 * 100;
  }
  else {
    if (local_c38 < 100) {
      local_c38 = local_c38 * 10;
    }
    if (local_c30 < 10) goto LAB_0001a28c;
LAB_0001a338:
    if (local_c30 < 100) {
      local_c30 = local_c30 * 10;
    }
  }
  uVar7 = local_c3c * 1000 + local_c38;
  uVar6 = local_c34 * 1000 + local_c30;
  *(uint *)(pbVar8 + 8) = uVar7;
  *(int *)(pbVar8 + 0xc) = (int)uVar7 >> 0x1f;
  *(uint *)(pbVar8 + 0x10) = uVar6 - uVar7;
  *(uint *)(pbVar8 + 0x14) = ((int)uVar6 >> 0x1f) - (((int)uVar7 >> 0x1f) + (uint)(uVar6 < uVar7));
  acStack2092[*(int *)(pbVar8 + 0xa0)] = '\0';
  pcVar2 = strdup(acStack2092);
  *(char **)(pbVar8 + 0x9c) = pcVar2;
  if (pcVar2 == (char *)0x0) {
LAB_0001a34c:
    pbVar4 = (byte *)0xffffffff;
  }
  else {
    *(undefined4 *)(pbVar8 + 0xa8) = 0;
    *(undefined4 *)(pbVar8 + 0x98) = 1;
    pbVar4 = pbVar8;
  }
LAB_0001a2fc:
  if (local_2c == __stack_chk_guard) {
    return pbVar4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void sub_sort_accorind_time(int param_1,void *param_2,void *param_3)

{
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  undefined auStack232 [188];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  if (param_1 != 0) {
    iVar5 = param_1 + -1;
    uVar6 = *(uint *)((int)param_3 + 8);
    iVar7 = *(int *)((int)param_3 + 0xc);
    pvVar2 = (void *)(iVar5 * 0xb8 + (int)param_2);
    uVar3 = *(uint *)((int)pvVar2 + 0xc);
    bVar8 = *(uint *)((int)pvVar2 + 8) <= uVar6;
    if ((int)(iVar7 - (uVar3 + !bVar8)) < 0 !=
        (iVar7 < 0 == -1 < (int)uVar3 && (int)(iVar7 + ~uVar3 + (uint)bVar8) < 0 != iVar7 < 0)) {
      iVar4 = iVar5;
      if (iVar5 < 1) {
        pvVar2 = param_2;
        if (iVar5 != 0) goto LAB_0001a45c;
      }
      else {
        pvVar1 = (void *)(param_1 * 0xb8 + (int)param_2);
        do {
          uVar3 = *(uint *)((int)pvVar1 + -0xac);
          bVar8 = *(uint *)((int)pvVar1 + -0xb0) <= uVar6;
          if (((int)(iVar7 - (uVar3 + !bVar8)) < 0 !=
               (iVar7 < 0 == -1 < (int)uVar3 && (int)(iVar7 + ~uVar3 + (uint)bVar8) < 0 != iVar7 < 0
               )) && (uVar3 = *(uint *)((int)pvVar1 + -0x164),
                     bVar8 = *(uint *)((int)pvVar1 + -0x168) <= uVar6,
                     pvVar2 = (void *)((int)pvVar1 + -0xb8),
                     (int)(iVar7 - (uVar3 + !bVar8)) < 0 ==
                     (iVar7 < 0 == -1 < (int)uVar3 &&
                     (int)(iVar7 + ~uVar3 + (uint)bVar8) < 0 != iVar7 < 0))) break;
          iVar4 = iVar4 + -1;
          pvVar1 = (void *)((int)pvVar1 + -0xb8);
          pvVar2 = param_2;
        } while (iVar4 != 0);
      }
      memcpy(auStack232,param_3,0xb8);
      if (iVar4 <= iVar5) {
        pvVar1 = (void *)(param_1 * 0xb8 + (int)param_2);
        do {
          iVar5 = iVar5 + -1;
          memcpy(pvVar1,(void *)((int)pvVar1 + -0xb8),0xb8);
          pvVar1 = (void *)((int)pvVar1 + -0xb8);
        } while (iVar4 <= iVar5);
      }
      memcpy(pvVar2,auStack232,0xb8);
    }
  }
LAB_0001a45c:
  if (local_2c != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void * sub_post_process(int param_1,int param_2,void *param_3,void *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  if (param_4 != (void *)0xffffffff) {
    if (*(int *)(param_1 + 8) != 1) {
      uVar3 = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)((int)param_4 + 0x30) = 0xffffffff;
      *(undefined4 *)((int)param_4 + 0x34) = 0xffffffff;
      *(undefined4 *)((int)param_4 + 0x38) = 0xffffffff;
      *(undefined4 *)((int)param_4 + 0x3c) = 0xffffffff;
      *(undefined4 *)((int)param_4 + 0x40) = 0;
      *(undefined4 *)((int)param_4 + 0x20) = 0;
      *(undefined4 *)((int)param_4 + 0xa4) = uVar3;
      *(undefined4 *)((int)param_4 + 0x50) = 0;
      *(undefined4 *)((int)param_4 + 0x44) = 0xffffffff;
      *(undefined4 *)((int)param_4 + 0x48) = 0xffffffff;
      *(undefined4 *)((int)param_4 + 0x4c) = 0xffffffff;
      memcpy((void *)((int)param_4 + 0x58),"unknown",8);
    }
    lVar1 = (ulonglong)*(uint *)((int)param_4 + 8) * 1000;
    lVar2 = (ulonglong)*(uint *)((int)param_4 + 0x10) * 1000;
    *(undefined4 *)((int)param_4 + 0xac) = 0;
    *(undefined4 *)((int)param_4 + 0xb0) = 0;
    *(undefined4 *)((int)param_4 + 0x98) = 1;
    *(int *)((int)param_4 + 8) = (int)lVar1;
    *(int *)((int)param_4 + 0xc) =
         *(int *)((int)param_4 + 0xc) * 1000 + (int)((ulonglong)lVar1 >> 0x20);
    *(int *)((int)param_4 + 0x10) = (int)lVar2;
    *(int *)((int)param_4 + 0x14) =
         *(int *)((int)param_4 + 0x14) * 1000 + (int)((ulonglong)lVar2 >> 0x20);
    sub_sort_accorind_time(param_2,param_3,param_4);
    return param_4;
  }
  return (void *)0x0;
}



void sub_select_update_idx(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  
  uVar1 = *(uint *)(param_1 + 0x62c);
  piVar4 = *(int **)(param_1 + *(int *)(param_1 + 0x628) * 4 + 0x14);
  uVar9 = piVar4[1];
  if (uVar9 <= uVar1) {
    uVar1 = uVar9 - 1;
  }
  if (uVar1 != 0) {
    iVar8 = *piVar4;
    iVar2 = uVar1 * 0xb8 + iVar8;
    uVar5 = *(uint *)(iVar2 + 0xc);
    bVar10 = *(uint *)(iVar2 + 8) <= param_3;
    if ((int)(param_4 - (uVar5 + !bVar10)) < 0 ==
        ((int)param_4 < 0 == -1 < (int)uVar5 &&
        (int)(param_4 + ~uVar5 + (uint)bVar10) < 0 != (int)param_4 < 0)) {
      iVar2 = uVar1 + 1;
      *(uint *)(param_1 + 0x62c) = uVar9;
      if (iVar2 < (int)uVar9) {
        iVar3 = iVar2 * 0xb8 + iVar8;
        iVar6 = *(int *)(iVar3 + 0xc);
        bVar10 = param_3 <= *(uint *)(iVar3 + 8);
        if ((int)(iVar6 - (param_4 + !bVar10)) < 0 !=
            (iVar6 < 0 == -1 < (int)param_4 &&
            (int)(iVar6 + ~param_4 + (uint)bVar10) < 0 != iVar6 < 0)) {
          puVar7 = (uint *)((uVar1 + 2) * 0xb8 + iVar8 + 8);
          do {
            iVar2 = iVar2 + 1;
            if ((int)uVar9 <= iVar2) {
              return;
            }
            uVar1 = *puVar7;
            uVar5 = puVar7[1];
            puVar7 = puVar7 + 0x2e;
          } while ((int)(uVar5 - (param_4 + (param_3 > uVar1))) < 0 !=
                   ((int)uVar5 < 0 == -1 < (int)param_4 &&
                   (int)(uVar5 + ~param_4 + (uint)(param_3 <= uVar1)) < 0 != (int)uVar5 < 0));
        }
        *(int *)(param_1 + 0x62c) = iVar2 + -1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x62c) = 0;
      if (0 < (int)uVar1) {
        do {
          uVar9 = uVar1;
          uVar1 = uVar9 - 1;
          if (uVar1 == 0) {
            return;
          }
          uVar5 = *(uint *)(iVar2 + -0xac);
          bVar10 = *(uint *)(iVar2 + -0xb0) <= param_3;
          iVar2 = iVar2 + -0xb8;
        } while ((int)(param_4 - (uVar5 + !bVar10)) < 0 !=
                 ((int)param_4 < 0 == -1 < (int)uVar5 &&
                 (int)(param_4 + ~uVar5 + (uint)bVar10) < 0 != (int)param_4 < 0));
        *(uint *)(param_1 + 0x62c) = uVar9 - 2;
      }
    }
  }
  return;
}



void strcpy_trim(undefined *param_1,byte *param_2)

{
  byte bVar1;
  size_t sVar2;
  byte *pbVar3;
  size_t sVar4;
  
  sVar2 = strlen((char *)param_2);
  if (sVar2 != 0) {
    bVar1 = *(byte *)(_ctype_ + (uint)*param_2 + 1);
    sVar4 = bVar1 & 8;
    if ((bVar1 & 8) != 0) {
      sVar4 = 0;
      pbVar3 = param_2;
      do {
        sVar4 = sVar4 + 1;
        if (sVar4 == sVar2) goto LAB_0001a6bc;
        pbVar3 = pbVar3 + 1;
      } while ((*(byte *)(_ctype_ + (uint)*pbVar3 + 1) & 8) != 0);
    }
    memcpy(param_1,param_2 + sVar4,sVar2 - sVar4);
    param_1[sVar2 - sVar4] = 0;
    return;
  }
LAB_0001a6bc:
  *param_1 = 0;
  return;
}



void sub_set_playResx_playResy(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 8) == 0) {
      if (iVar1 == 0x500) {
        uVar2 = 0x400;
      }
      else {
        uVar2 = (uint)(iVar1 * 3) >> 2;
      }
      *(uint *)(param_1 + 8) = uVar2;
      return;
    }
    return;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    if (iVar1 == 0x400) {
      *(undefined4 *)(param_1 + 4) = 0x438;
      return;
    }
    *(uint *)(param_1 + 4) = (uint)(iVar1 << 2) / 3;
    return;
  }
  return;
}



byte sub_ssa_ass_convert_style(char *param_1,char *param_2,char *param_3,char *param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = atoi(param_1);
  bVar2 = iVar1 == -1;
  iVar1 = atoi(param_2);
  if (iVar1 == -1) {
    bVar2 = bVar2 | 2;
  }
  iVar1 = atoi(param_3);
  if (iVar1 == -1) {
    bVar2 = bVar2 | 4;
  }
  iVar1 = atoi(param_4);
  if (iVar1 == -1) {
    bVar2 = bVar2 | 8;
  }
  return bVar2;
}



uint sub_ssa_ass_convert_colorValue(char *param_1)

{
  char *pcVar1;
  uint local_c;
  
  local_c = 0;
  pcVar1 = strchr(param_1,0x26);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_1;
    if (*param_1 == ' ') {
      do {
        pcVar1 = pcVar1 + 1;
        param_1 = param_1 + 1;
      } while (*pcVar1 == ' ');
      local_c = atoi(param_1);
    }
    else {
      local_c = atoi(param_1);
    }
  }
  else {
    sscanf(param_1,"&H%x",&local_c);
  }
  return (local_c & 0xff) << 0x10 | 0xff000000 | (local_c << 8) >> 0x18 | local_c & 0xff00;
}



void sub_ssa_ass_process_styles_info(byte *param_1,char *param_2,int param_3)

{
  size_t sVar1;
  int iVar2;
  char *__s;
  undefined4 auStack188 [24];
  byte abStack92 [64];
  int local_1c;
  
  local_1c = __stack_chk_guard;
  __s = param_2 + 0x40;
  memset(abStack92,0,0x40);
  memcpy(auStack188,&DAT_000232d4,0x60);
  *(undefined4 *)(param_2 + 0x84) = auStack188[param_3 + (uint)*param_1 * 0xc];
  sVar1 = strlen(param_2);
  __memcpy_chk(abStack92,param_2,sVar1,0x40);
  memset(param_2,0,0x40);
  strcpy_trim(param_2,abStack92);
  sVar1 = strlen(__s);
  __memcpy_chk(abStack92,__s,sVar1,0x40);
  memset(__s,0,0x40);
  strcpy_trim(__s,abStack92);
  param_2[0x80] = -1;
  sVar1 = strlen(__s);
  iVar2 = strncmp(__s,"Epilog",sVar1);
  if (iVar2 == 0) {
    param_2[0x80] = '\0';
  }
  else {
    iVar2 = strncmp(__s,"Arial",sVar1);
    if ((iVar2 == 0) || (iVar2 = strncmp(__s,"MS PGothic",sVar1), iVar2 == 0)) {
      param_2[0x80] = '\x03';
    }
    else {
      iVar2 = strncmp(__s,"Verdana",sVar1);
      if (iVar2 == 0) {
        param_2[0x80] = '\x01';
      }
      else {
        iVar2 = strncmp(__s,"Georgia",sVar1);
        if (iVar2 == 0) {
          param_2[0x80] = '\x02';
        }
        else {
          iVar2 = strncmp(__s,"Times New Roman",sVar1);
          if (iVar2 == 0) {
            param_2[0x80] = '\x04';
          }
        }
      }
    }
  }
  if (*(int *)(param_2 + 0x94) == 0x86) {
    *(undefined4 *)(param_2 + 0x94) = 8;
  }
  else {
    if (*(int *)(param_2 + 0x94) == 0x88) {
      *(undefined4 *)(param_2 + 0x94) = 7;
    }
    else {
      *(undefined4 *)(param_2 + 0x94) = 0;
    }
  }
  if (local_1c == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void remove_strim_blank(char *param_1)

{
  char *pcVar1;
  size_t sVar2;
  size_t sVar3;
  size_t __n;
  char acStack1044 [1024];
  int local_14;
  
  local_14 = __stack_chk_guard;
  sVar2 = strlen(param_1);
  __n = sVar2;
  if (sVar2 != 0) {
    __n = 0;
    sVar3 = 0;
    do {
      pcVar1 = param_1 + sVar3;
      sVar3 = sVar3 + 1;
      if (*pcVar1 != ' ') {
        acStack1044[__n] = *pcVar1;
        __n = __n + 1;
      }
    } while (sVar3 != sVar2);
  }
  memcpy(param_1,acStack1044,__n);
  param_1[__n] = '\0';
  if (local_14 == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void sub_post_ssa_ass_ctrl_inf
               (byte *param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int local_4f0;
  undefined4 auStack1260 [24];
  undefined4 local_48c;
  undefined4 local_488;
  undefined4 local_484;
  undefined4 local_480;
  undefined4 local_47c;
  undefined4 local_478;
  undefined4 local_474;
  undefined4 local_470;
  char acStack1132 [64];
  char acStack1068 [1024];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  iVar3 = param_4 - param_3;
  local_4f0 = 0;
  memset(acStack1132,0,0x40);
  local_48c = 0;
  local_488 = 0;
  local_484 = 0;
  local_480 = 0;
  local_47c = 0;
  local_478 = 0;
  local_474 = 0;
  local_470 = 0;
  memcpy(auStack1260,&DAT_000232d4,0x60);
  pcVar1 = acStack1068;
  __memcpy_chk(pcVar1,param_3,iVar3,0x400);
  acStack1068[iVar3] = '\r';
  acStack1068[iVar3 + 1] = '\n';
  acStack1068[iVar3 + 2] = '\0';
  remove_strim_blank(acStack1068);
  __strlen_chk(acStack1068,0x400);
  while (pcVar1 = strchr(pcVar1,0x5c), pcVar1 != (char *)0x0) {
    while( true ) {
      pcVar1 = pcVar1 + 1;
      iVar3 = sscanf(pcVar1,"a%d",&local_4f0);
      if (iVar3 != 1) break;
      *(undefined4 *)(param_2 + 0x20) = auStack1260[local_4f0 + (uint)*param_1 * 0xc];
      pcVar1 = strchr(pcVar1,0x5c);
      if (pcVar1 == (char *)0x0) goto LAB_0001ac50;
    }
    iVar3 = sscanf(pcVar1,"an%d",&local_4f0);
    if (iVar3 == 1) {
      *(undefined4 *)(param_2 + 0x20) = auStack1260[local_4f0 + (uint)*param_1 * 0xc];
    }
    else {
      iVar3 = sscanf(pcVar1,"1c%64[^,]",acStack1132);
      if ((iVar3 == 1) || (iVar3 = sscanf(pcVar1,"c%64[^,]",acStack1132), iVar3 == 1)) {
        uVar2 = sub_ssa_ass_convert_colorValue(acStack1132);
        *(uint *)(param_2 + 0x50) = uVar2;
      }
      else {
        iVar3 = sscanf(pcVar1,"2c%64[^,]",acStack1132);
        if ((iVar3 != 1) && (iVar3 = sscanf(pcVar1,"3c%64[^,]",acStack1132), iVar3 != 1)) {
          iVar3 = sscanf(pcVar1,"b%d",&local_4f0);
          if (iVar3 == 1) {
            iVar3 = local_4f0;
            if (local_4f0 != 1) {
              iVar3 = 0;
            }
            *(int *)(param_2 + 0x44) = iVar3;
          }
          else {
            iVar3 = sscanf(pcVar1,"i%d",&local_4f0);
            if (iVar3 == 1) {
              iVar3 = local_4f0;
              if (local_4f0 != 1) {
                iVar3 = 0;
              }
              *(int *)(param_2 + 0x48) = iVar3;
            }
            else {
              iVar3 = sscanf(pcVar1,"u%d",&local_4f0);
              if (iVar3 == 1) {
                iVar3 = local_4f0;
                if (local_4f0 != 1) {
                  iVar3 = 0;
                }
                *(int *)(param_2 + 0x4c) = iVar3;
              }
              else {
                iVar3 = sscanf(pcVar1,"s%d",&local_4f0);
                if (iVar3 != 1) {
                  iVar3 = sscanf(pcVar1,"pos(%16[^,],%16[^)])",&local_48c,&local_47c);
                  if (iVar3 == 2) {
                    if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 8) != 0)) {
                      iVar3 = atoi((char *)&local_48c);
                      *param_5 = iVar3;
                      iVar3 = atoi((char *)&local_47c);
                      *param_6 = iVar3;
                    }
                  }
                  else {
                    iVar3 = sscanf(pcVar1,"be%d",&local_4f0);
                    if (((iVar3 != 1) && (iVar3 = sscanf(pcVar1,"bord%d",&local_4f0), iVar3 != 1))
                       && (iVar3 = sscanf(pcVar1,"shad%d",&local_4f0), iVar3 != 1)) {
                      iVar3 = sscanf(pcVar1,"fs%d",&local_4f0);
                      if (iVar3 == 1) {
                        if (*(int *)(param_2 + 0x40) < (int)(char)local_4f0) {
                          *(int *)(param_2 + 0x40) = (int)(char)local_4f0;
                        }
                        else {
                          *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40);
                        }
                      }
                      else {
                        iVar3 = sscanf(pcVar1,"fscx%d",&local_4f0);
                        if (((((iVar3 != 1) &&
                              (iVar3 = sscanf(pcVar1,"fscy%d",&local_4f0), iVar3 != 1)) &&
                             ((iVar3 = sscanf(pcVar1,"fsp%d",&local_4f0), iVar3 != 1 &&
                              ((iVar3 = sscanf(pcVar1,"frx-%d",&local_4f0), iVar3 != 1 &&
                               (iVar3 = sscanf(pcVar1,"frx%d",&local_4f0), iVar3 != 1)))))) &&
                            (iVar3 = sscanf(pcVar1,"fry-%d",&local_4f0), iVar3 != 1)) &&
                           (((iVar3 = sscanf(pcVar1,"fry%d",&local_4f0), iVar3 != 1 &&
                             (iVar3 = sscanf(pcVar1,"fr-z%d",&local_4f0), iVar3 != 1)) &&
                            (iVar3 = sscanf(pcVar1,"frz%d",&local_4f0), iVar3 != 1)))) {
                          sscanf(pcVar1,"fe%d",&local_4f0);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0001ac50:
  if (local_2c == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



char * sub_ssa_ass_parse_style_info
                 (int param_1,undefined4 param_2,char *param_3,void *param_4,int *param_5,
                 int *param_6,int *param_7,uint *param_8)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  size_t sVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  char acStack172 [64];
  byte local_6c [64];
  int local_2c;
  
  uVar6 = 0;
  local_2c = __stack_chk_guard;
  do {
    if (*param_3 == ' ') {
      param_3 = param_3 + 1;
    }
    else {
      pcVar2 = strchr(param_3,0x2c);
      if (pcVar2 != (char *)0x0) {
        switch(uVar6) {
        case 0:
          __memcpy_chk(local_6c,param_3,pcVar2 + -(int)param_3,0x40);
          local_6c[(int)(pcVar2 + -(int)param_3)] = 0;
          break;
        case 1:
          memcpy(param_4,param_3,(size_t)(pcVar2 + -(int)param_3));
          *(undefined *)((int)param_4 + (int)(pcVar2 + -(int)param_3)) = 0;
          break;
        case 2:
          __memcpy_chk(acStack172,param_3,pcVar2 + -(int)param_3,0x40);
          acStack172[(int)(pcVar2 + -(int)param_3)] = '\0';
          iVar5 = atoi(acStack172);
          *param_5 = iVar5;
          break;
        case 3:
          __memcpy_chk(acStack172,param_3,pcVar2 + -(int)param_3,0x40);
          acStack172[(int)(pcVar2 + -(int)param_3)] = '\0';
          iVar5 = atoi(acStack172);
          *param_6 = iVar5;
          break;
        case 4:
          __memcpy_chk(acStack172,param_3,pcVar2 + -(int)param_3,0x40);
          acStack172[(int)(pcVar2 + -(int)param_3)] = '\0';
          iVar5 = atoi(acStack172);
          *param_7 = iVar5;
        }
        param_3 = pcVar2 + 1;
        uVar6 = uVar6 + 1;
      }
    }
  } while (uVar6 < 6);
  if (param_1 != 0) {
    uVar3 = __strlen_chk(local_6c,0x40);
    uVar8 = uVar3;
    if (uVar3 != 0) {
      bVar1 = *(byte *)(_ctype_ + (uint)local_6c[0] + 1);
      uVar8 = bVar1 & 3;
      if ((bVar1 & 3) == 0) {
        do {
          uVar8 = uVar8 + 1;
          if (uVar8 == uVar3) break;
        } while ((*(byte *)(_ctype_ + (uint)local_6c[uVar8] + 1) & 3) == 0);
      }
      else {
        uVar8 = 0;
      }
    }
    uVar7 = (uint)*(byte *)(param_1 + 1);
    uVar6 = uVar7;
    if (uVar7 != 0) {
      pcVar2 = *(char **)(param_1 + 0xc);
      uVar6 = 0;
      do {
        sVar4 = strlen(pcVar2);
        if ((sVar4 == uVar3 - uVar8) &&
           (iVar5 = strncmp(pcVar2,(char *)(local_6c + uVar8),uVar3 - uVar8), iVar5 == 0)) break;
        uVar6 = uVar6 + 1;
        pcVar2 = pcVar2 + 0xb8;
      } while (uVar6 < uVar7);
    }
    if (*param_7 == 0) {
      *param_7 = *(int *)(uVar6 * 0xb8 + *(int *)(param_1 + 0xc) + 0x90);
    }
    if (*param_6 == 0) {
      *param_6 = *(int *)(uVar6 * 0xb8 + *(int *)(param_1 + 0xc) + 0x8c);
    }
    if (*param_5 == 0) {
      *param_5 = *(int *)(uVar6 * 0xb8 + *(int *)(param_1 + 0xc) + 0x88);
    }
  }
  bVar9 = local_2c == __stack_chk_guard;
  *param_8 = uVar6;
  if (bVar9) {
    return param_3;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void sub_ssa_ass_convert_control_tags(char *param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  while( true ) {
    pcVar1 = strstr(pcVar2,"\\N");
    pcVar2 = pcVar1 + 2;
    if ((pcVar1 == (char *)0x0) || (param_1 + param_2 <= pcVar1)) break;
    *pcVar1 = '\r';
    pcVar1[1] = '\n';
  }
  pcVar2 = strstr(param_1,"\\h");
  if (pcVar2 == (char *)0x0) {
    return;
  }
  do {
    if (param_1 + param_2 <= pcVar2) {
      return;
    }
    *pcVar2 = ' ';
    pcVar2[1] = ' ';
    pcVar2 = strstr(pcVar2 + 2,"\\h");
  } while (pcVar2 != (char *)0x0);
  return;
}



void sub_post_process_ssa_ass
               (byte *param_1,int param_2,char *param_3,char *param_4,int *param_5,int *param_6)

{
  char *__src;
  char *pcVar1;
  char *__s;
  char *pcVar2;
  char *pcVar3;
  int __c;
  bool bVar4;
  char *pcVar5;
  char *local_450;
  int local_448;
  char acStack1068 [1024];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  __c = 0x7b;
  memset(acStack1068,0,0x400);
  bVar4 = false;
  *(undefined4 *)(param_2 + 0xa0) = 0;
  local_448 = 0x7d;
  __s = param_3;
  pcVar2 = acStack1068;
  pcVar5 = param_3;
  local_450 = param_4;
LAB_0001b434:
  do {
    pcVar1 = strchr(__s,__c);
    __src = __s;
    while ((pcVar1 != (char *)0x0 && (pcVar1 < pcVar5 + (int)local_450))) {
      pcVar3 = pcVar1 + -(int)__src;
      __s = pcVar1 + 1;
      memcpy(pcVar2,__src,(size_t)pcVar3);
      *(char **)(param_2 + 0xa0) = pcVar3 + *(int *)(param_2 + 0xa0);
      pcVar1 = strchr(__s,local_448);
      pcVar2 = pcVar2 + (int)pcVar3;
      if (pcVar1 == (char *)0x0 || param_1 == (byte *)0x0) goto LAB_0001b434;
      pcVar3 = pcVar1 + 1;
      sub_post_ssa_ass_ctrl_inf(param_1,param_2,(int)__s,(int)pcVar1,param_5,param_6);
      param_4 = param_4 + (int)(__src + -(int)pcVar3);
      pcVar1 = strchr(pcVar3,__c);
      __src = pcVar3;
    }
    if ((char *)0x400 < param_4 + *(int *)(param_2 + 0xa0)) {
      param_4 = (char *)(0x400 - *(int *)(param_2 + 0xa0));
    }
    memcpy(pcVar2,__src,(size_t)param_4);
    param_4 = param_4 + *(int *)(param_2 + 0xa0);
    *(char **)(param_2 + 0xa0) = param_4;
    if (bVar4) {
      if (*(void **)(param_2 + 0x9c) == (void *)0x0) {
        param_3[(int)param_4] = '\0';
        pcVar2 = strdup(param_3);
        *(char **)(param_2 + 0x9c) = pcVar2;
      }
      else {
        memcpy(*(void **)(param_2 + 0x9c),param_3,(size_t)param_4);
      }
      *(undefined4 *)(param_2 + 0x98) = 1;
      if (local_2c != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
        __stack_chk_fail();
      }
      return;
    }
    *(undefined4 *)(param_2 + 0xa0) = 0;
    __c = 0x3c;
    acStack1068[(int)param_4] = '\0';
    __s = acStack1068;
    local_448 = 0x3e;
    bVar4 = true;
    pcVar2 = param_3;
    pcVar5 = __s;
    local_450 = param_4;
  } while( true );
}



void sub_ssa_ass_get_disply_pos
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
               int param_6,int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 4);
  if ((iVar2 == 0) || (iVar1 = *(int *)(param_2 + 8), iVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    goto LAB_0001b604;
  }
  *(int *)(param_1 + 0x18) = iVar2;
  *(int *)(param_1 + 0x1c) = iVar1;
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 0x11:
    *(undefined4 *)(param_1 + 0x30) = param_4;
    *(int *)(param_1 + 0x34) = param_6;
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
    goto LAB_0001b604;
  case 0x12:
    *(int *)(param_1 + 0x34) = param_6;
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
    goto LAB_0001b604;
  case 0x13:
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
    *(int *)(param_1 + 0x34) = param_6;
    *(int *)(param_1 + 0x38) = iVar2 - param_5;
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
    goto LAB_0001b604;
  case 0x14:
    break;
  case 0x15:
    break;
  case 0x16:
    break;
  case 0x17:
    break;
  case 0x18:
    break;
  case 0x19:
    break;
  case 0x1a:
    break;
  case 0x1b:
    break;
  case 0x1c:
    break;
  case 0x1d:
    break;
  case 0x1e:
    break;
  case 0x1f:
    break;
  case 0x20:
    break;
  case 0x21:
    *(undefined4 *)(param_1 + 0x30) = param_4;
    *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
    goto LAB_0001b604;
  case 0x22:
    break;
  case 0x23:
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
    *(int *)(param_1 + 0x38) = iVar2 - param_5;
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
    goto LAB_0001b604;
  case 0x24:
    break;
  case 0x25:
    break;
  case 0x26:
    break;
  case 0x27:
    break;
  case 0x28:
    break;
  case 0x29:
    break;
  case 0x2a:
    break;
  case 0x2b:
    break;
  case 0x2c:
    break;
  case 0x2d:
    break;
  case 0x2e:
    break;
  case 0x2f:
    break;
  case 0x30:
    break;
  case 0x31:
    *(undefined4 *)(param_1 + 0x30) = param_4;
    *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    *(int *)(param_1 + 0x3c) = iVar1 - param_6;
    goto LAB_0001b604;
  case 0x32:
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    *(int *)(param_1 + 0x3c) = iVar1 - param_6;
    goto LAB_0001b604;
  case 0x33:
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
    *(int *)(param_1 + 0x38) = iVar2 - param_5;
    *(int *)(param_1 + 0x3c) = iVar1 - param_6;
    goto LAB_0001b604;
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
LAB_0001b604:
  if (param_7 != -1 && param_8 != -1) {
    *(int *)(param_1 + 0x30) = param_7;
    *(int *)(param_1 + 0x34) = param_8;
    *(undefined4 *)(param_1 + 0x20) = 0x11;
  }
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int open_stream(int __fd)

{
  int iVar1;
  
  iVar1 = dup(__fd);
  return iVar1;
}



void free_stream(int param_1)

{
  if (param_1 < 0) {
    return;
  }
  close(param_1);
  return;
}



byte * stream_read_line(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                       int param_6,byte *param_7,int param_8,int param_9)

{
  ushort *__buf;
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  __off_t _Var4;
  int iVar5;
  byte *pbVar6;
  ushort *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *__dest;
  void *pvVar10;
  ushort *puVar11;
  ushort *puVar12;
  uint uVar13;
  byte *pbVar14;
  bool bVar15;
  byte *local_44;
  byte *local_3c;
  
  if (1 < param_8) {
    local_44 = (byte *)lseek(param_1,0,1);
    if ((int)(param_6 - (uint)(param_5 == 0)) < 0 ==
        (param_6 < 0 && (int)(param_6 + -1 + (uint)(param_5 != 0)) < 0 != param_6 < 0)) {
      _Var4 = param_3 + param_5;
      iVar5 = 0;
    }
    else {
      _Var4 = 0;
      iVar5 = 2;
    }
    _Var4 = lseek(param_1,_Var4,iVar5);
    lseek(param_1,(__off_t)local_44,0);
    __buf = (ushort *)malloc(0x400);
    if (__buf == (ushort *)0x0) {
      __android_log_print(5,"subBase","<%s:%u>: failed to malloc memory!","stream_read_line",0x107);
      return (byte *)0x0;
    }
    pbVar9 = (byte *)(param_8 + -2);
    __dest = param_7;
    pbVar1 = local_44;
    do {
      local_3c = (byte *)(_Var4 - (int)pbVar1);
      if (0x3ff < (int)local_3c) {
        local_3c = (byte *)0x400;
      }
      if ((int)local_3c < 1) break;
      read(param_1,__buf,(size_t)local_3c);
      pbVar1 = (byte *)lseek(param_1,0,1);
      puVar7 = (ushort *)((int)__buf + (int)local_3c);
      if (param_9 == 1) {
        puVar12 = __buf;
        do {
          bVar15 = true;
          uVar2 = 0xffff2400;
          if ((ushort *)((int)puVar7 + -1) <= puVar12) goto LAB_0001b960;
          puVar11 = puVar12 + 1;
          uVar13 = (uint)*puVar12;
          uVar3 = uVar13 - 0xd800;
          if (uVar3 < 0x800) {
            if (puVar11 < (ushort *)((int)puVar7 + -1)) {
              puVar11 = puVar12 + 2;
              uVar2 = (uint)puVar12[1];
              bVar15 = 0x3ff < uVar2;
              if (bVar15) {
                bVar15 = true;
              }
            }
            if (0x3ff < uVar3) {
              bVar15 = true;
            }
            uVar13 = uVar2 + uVar3 * 0x400 + 0x10000;
            if (bVar15) goto LAB_0001b960;
          }
          puVar12 = puVar11;
          bVar15 = puVar7 == puVar12;
          if (puVar12 <= puVar7) {
            bVar15 = uVar13 == 10;
          }
        } while (!bVar15);
        pvVar10 = (void *)((int)puVar12 + -1);
LAB_0001b888:
        if (pvVar10 != (void *)0x0) {
          local_3c = (byte *)((int)pvVar10 + (1 - (int)__buf));
        }
        pbVar8 = local_3c;
        if (0 < (int)local_3c) {
          pbVar8 = pbVar9;
        }
      }
      else {
        if (param_9 == 0) {
          pvVar10 = memchr(__buf,10,(size_t)local_3c);
          goto LAB_0001b888;
        }
        if (param_9 == 2) {
          puVar12 = __buf;
          do {
            bVar15 = true;
            uVar2 = 0xffff2400;
            if ((ushort *)((int)puVar7 + -1) <= puVar12) goto LAB_0001b960;
            puVar11 = puVar12 + 1;
            uVar13 = (uint)CONCAT11(*(undefined *)puVar12,*(undefined *)((int)puVar12 + 1));
            uVar3 = uVar13 - 0xd800;
            if (uVar3 < 0x800) {
              if (puVar11 < (ushort *)((int)puVar7 + -1)) {
                puVar11 = puVar12 + 2;
                uVar2 = (uint)CONCAT11(*(undefined *)(puVar12 + 1),*(undefined *)((int)puVar12 + 3))
                ;
                bVar15 = 0x3ff < uVar2;
                if (bVar15) {
                  bVar15 = true;
                }
              }
              if (0x3ff < uVar3) {
                bVar15 = true;
              }
              uVar13 = uVar2 + uVar3 * 0x400 + 0x10000;
              if (bVar15) goto LAB_0001b960;
            }
            puVar12 = puVar11;
            bVar15 = puVar7 == puVar12;
            if (puVar12 <= puVar7) {
              bVar15 = uVar13 == 10;
            }
          } while (!bVar15);
          pvVar10 = (void *)((int)puVar12 + -1);
          goto LAB_0001b888;
        }
LAB_0001b960:
        pbVar8 = local_3c;
        if (0 < (int)local_3c) {
          pbVar8 = pbVar9;
        }
        pvVar10 = (void *)0x0;
      }
      local_44 = local_3c + (int)local_44;
      if ((int)pbVar8 < 1) break;
      iVar5 = (int)__buf + (int)local_3c;
      pbVar14 = __dest + (int)pbVar9;
      pbVar8 = __dest;
      puVar7 = __buf;
      if (param_9 == 1) {
        while ((puVar7 < (ushort *)(iVar5 + -1) && (8 < (int)(pbVar14 + -(int)pbVar8)))) {
          puVar12 = puVar7 + 1;
          uVar2 = (uint)*puVar7;
          if (uVar2 - 0xd800 < 0x800) {
            if (puVar12 < (ushort *)(iVar5 + -1)) {
              puVar12 = puVar7 + 2;
              uVar3 = (uint)puVar7[1];
            }
            else {
              uVar3 = 0xffff2400;
            }
            uVar2 = uVar3 + (uVar2 - 0xd800) * 0x400 + 0x10000;
          }
          puVar7 = puVar12;
          if (uVar2 < 0x80) {
            *pbVar8 = (byte)uVar2;
            pbVar8 = pbVar8 + 1;
          }
          else {
            uVar3 = uVar2 & 0xffff0000;
            uVar13 = uVar2;
            if (uVar3 != 0) {
              uVar13 = (int)uVar2 >> 0x10;
              uVar3 = 0x10;
            }
            if ((uVar13 & 0xff00) != 0) {
              uVar13 = (int)uVar13 >> 8;
              uVar3 = uVar3 + 8;
            }
            uVar13 = (int)((byte)(&DAT_00023494)[uVar13] + uVar3 + 4) / 5;
            uVar3 = (uVar13 - 1) * 6;
            *pbVar8 = -(char)(0x100 >> (uVar13 & 0xff)) | (byte)(uVar2 >> (uVar3 & 0xff));
            while (pbVar8 = pbVar8 + 1, 5 < (int)uVar3) {
              uVar3 = uVar3 - 6;
              *pbVar8 = ~((byte)~(byte)(((uVar2 >> (uVar3 & 0xff) & 0x3f) << 0x19) >> 0x18) >> 1);
            }
          }
        }
LAB_0001bc0c:
        pbVar8 = pbVar8 + (int)(pbVar9 + -(int)pbVar14);
        __dest = __dest + (int)pbVar8;
        if ((int)puVar7 + (int)((int)local_3c - iVar5) == 0) break;
      }
      else {
        if (param_9 == 2) {
          puVar12 = (ushort *)(iVar5 + -1);
LAB_0001bb0c:
          puVar11 = puVar7;
          if (puVar7 < puVar12) {
            while( true ) {
              puVar7 = puVar11;
              if ((int)(pbVar14 + -(int)pbVar8) < 9) goto LAB_0001bc0c;
              puVar7 = puVar11 + 1;
              uVar2 = (uint)CONCAT11(*(undefined *)puVar11,*(undefined *)((int)puVar11 + 1));
              if (uVar2 - 0xd800 < 0x800) {
                if (puVar7 < puVar12) {
                  puVar7 = puVar11 + 2;
                  uVar3 = (uint)CONCAT11(*(undefined *)(puVar11 + 1),
                                         *(undefined *)((int)puVar11 + 3));
                }
                else {
                  uVar3 = 0xffff2400;
                }
                uVar2 = uVar3 + (uVar2 - 0xd800) * 0x400 + 0x10000;
              }
              if (uVar2 < 0x80) break;
              uVar3 = uVar2 & 0xffff0000;
              uVar13 = uVar2;
              if (uVar3 != 0) {
                uVar13 = (int)uVar2 >> 0x10;
                uVar3 = 0x10;
              }
              if ((uVar13 & 0xff00) != 0) {
                uVar13 = (int)uVar13 >> 8;
                uVar3 = uVar3 + 8;
              }
              uVar13 = (int)((byte)(&DAT_00023494)[uVar13] + uVar3 + 4) / 5;
              uVar3 = (uVar13 - 1) * 6;
              pbVar6 = pbVar8 + 1;
              *pbVar8 = -(char)(0x100 >> (uVar13 & 0xff)) | (byte)(uVar2 >> (uVar3 & 0xff));
              pbVar8 = pbVar6;
              if ((int)uVar3 < 6) goto LAB_0001bb0c;
              do {
                uVar3 = uVar3 - 6;
                pbVar8 = pbVar6 + 1;
                *pbVar6 = ~((byte)~(byte)(((uVar2 >> (uVar3 & 0xff) & 0x3f) << 0x19) >> 0x18) >> 1);
                pbVar6 = pbVar8;
              } while (5 < (int)uVar3);
              puVar11 = puVar7;
              if (puVar12 <= puVar7) goto LAB_0001bc0c;
            }
            *pbVar8 = (byte)uVar2;
            pbVar8 = pbVar8 + 1;
            goto LAB_0001bb0c;
          }
          goto LAB_0001bc0c;
        }
        if (param_9 == 0) {
          pbVar8 = local_3c;
          if ((int)pbVar9 <= (int)local_3c) {
            pbVar8 = pbVar9;
          }
          memcpy(__dest,__buf,(size_t)pbVar8);
        }
        else {
          pbVar8 = (byte *)0x0;
        }
        __dest = __dest + (int)pbVar8;
      }
      pbVar9 = pbVar9 + -(int)pbVar8;
    } while (pvVar10 == (void *)0x0);
    free(__buf);
    lseek(param_1,(__off_t)local_44,0);
    if (__dest != param_7) {
      pbVar1 = __dest;
      if (((2 < (int)(__dest + -(int)param_7)) && (__dest[-1] == 10)) && (__dest[-2] != 0xd)) {
        __dest[-1] = 0xd;
        pbVar1 = __dest + 1;
        *__dest = 10;
      }
      *pbVar1 = 0;
      return param_7;
    }
  }
  return (byte *)0x0;
}



uint SubInternalReqeustSubItem(int param_1)

{
  byte bVar1;
  uint uVar2;
  pthread_mutex_t *__mutex;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar2 = *(uint *)(param_1 + 0x3c);
  if (uVar2 == 0) {
    __android_log_print(6,"subInternal",&DAT_00023660,"SubInternalReqeustSubItem",0x20c);
  }
  else {
    __mutex = (pthread_mutex_t *)(uVar2 + 0x458);
    pthread_mutex_lock(__mutex);
    uVar4 = (uint)*(byte *)(uVar2 + 0x452);
    if (uVar4 == 0) {
      pthread_mutex_unlock(__mutex);
      uVar2 = uVar4;
    }
    else {
      uVar3 = (uint)*(byte *)(uVar2 + 0x451) * 0xb8 + uVar2;
      uVar5 = *(byte *)(uVar2 + 0x451) + 1 & 0xff;
      *(char *)(uVar2 + 0x451) = (char)uVar5;
      uVar4 = uVar4 - 1 & 0xff;
      *(char *)(uVar2 + 0x452) = (char)uVar4;
      if (5 < uVar5) {
        *(undefined *)(uVar2 + 0x451) = 0;
      }
      if ((((*(int *)(uVar3 + 0x98) == 1) && (uVar4 != 0)) &&
          (uVar4 = (uint)*(byte *)(uVar2 + 0x451) * 0xb8 + uVar2,
          *(int *)(uVar3 + 0xc) == *(int *)(uVar4 + 0xc) &&
          *(int *)(uVar3 + 8) == *(int *)(uVar4 + 8))) &&
         (*(int *)(uVar3 + 0x14) == *(int *)(uVar4 + 0x14) &&
          *(int *)(uVar3 + 0x10) == *(int *)(uVar4 + 0x10))) {
        iVar6 = *(int *)(uVar4 + 0xa0) + *(int *)(uVar3 + 0xa0);
        if (iVar6 < 0x100) {
          *(undefined *)(*(int *)(uVar4 + 0x9c) + *(int *)(uVar4 + 0xa0)) = 10;
          memcpy((void *)(*(int *)(uVar4 + 0x9c) + *(int *)(uVar4 + 0xa0) + 1),
                 *(void **)(uVar3 + 0x9c),*(size_t *)(uVar3 + 0xa0));
          bVar1 = *(char *)(uVar2 + 0x451) + 1;
          *(char *)(uVar2 + 0x452) = *(char *)(uVar2 + 0x452) + -1;
          *(byte *)(uVar2 + 0x451) = bVar1;
          *(char *)(uVar2 + 0x453) = *(char *)(uVar2 + 0x453) + '\x01';
          if (5 < bVar1) {
            *(undefined *)(uVar2 + 0x451) = 0;
          }
          pthread_mutex_unlock(__mutex);
          return uVar4;
        }
        __android_log_print(6,"subInternal",&DAT_000236b4,"SubInternalReqeustSubItem",0x23a,0x100,
                            iVar6);
      }
      pthread_mutex_unlock(__mutex);
      uVar2 = uVar3;
    }
  }
  return uVar2;
}



void SubInternalExit(void *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  pthread_mutex_destroy((pthread_mutex_t *)(*(int *)((int)param_1 + 0x3c) + 0x458));
  pvVar2 = *(void **)((int)param_1 + 0x3c);
  if (pvVar2 != (void *)0x0) {
    iVar3 = 0;
    do {
      iVar4 = iVar3 * 0xb8;
      iVar3 = iVar3 + 1;
      pvVar1 = *(void **)((int)pvVar2 + iVar4 + 0x9c);
      if (pvVar1 != (void *)0x0) {
        free(pvVar1);
        pvVar2 = *(void **)((int)param_1 + 0x3c);
        *(undefined4 *)((int)pvVar2 + iVar4 + 0x9c) = 0;
      }
      pvVar1 = *(void **)((int)pvVar2 + iVar4 + 0xa8);
      if (pvVar1 != (void *)0x0) {
        free(pvVar1);
        pvVar2 = *(void **)((int)param_1 + 0x3c);
        *(undefined4 *)((int)pvVar2 + iVar4 + 0xa8) = 0;
      }
    } while (iVar3 != 6);
    free(pvVar2);
    *(undefined4 *)((int)param_1 + 0x3c) = 0;
  }
  pvVar2 = *(void **)((int)param_1 + 0x34);
  if (pvVar2 != (void *)0x0) {
    if (*(int *)((int)param_1 + 0x18) == 0x202) {
      free(*(void **)((int)pvVar2 + 0xc));
      *(undefined4 *)((int)pvVar2 + 0xc) = 0;
      pvVar2 = *(void **)((int)param_1 + 0x34);
    }
    free(pvVar2);
    *(undefined4 *)((int)param_1 + 0x34) = 0;
  }
  if (*(void **)((int)param_1 + 0x38) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x38));
    *(undefined4 *)((int)param_1 + 0x38) = 0;
  }
  if (*(void **)((int)param_1 + 0xd8) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0xd8));
    *(undefined4 *)((int)param_1 + 0xd8) = 0;
  }
  if (*(void **)((int)param_1 + 0x100) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x100));
    *(undefined4 *)((int)param_1 + 0x100) = 0;
  }
  free(param_1);
  return;
}



void SubInternalFlushSubItem(void *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  
  iVar3 = *(int *)((int)param_1 + 0x3c);
  if (iVar3 == 0) {
    __android_log_print(6,"subInternal",&DAT_00023660,"SubInternalFlushSubItem",0x254);
    return;
  }
  pthread_mutex_lock((pthread_mutex_t *)(iVar3 + 0x458));
  iVar2 = 0;
  do {
    piVar1 = (int *)(iVar3 + iVar2);
    iVar2 = iVar2 + 0xb8;
    if (*param_2 == *piVar1) {
      bVar4 = *(char *)(iVar3 + 0x453) + 1;
      *(byte *)(iVar3 + 0x453) = bVar4;
      if (6 < bVar4) {
        __android_log_print(6,"subInternal",&DAT_000236f0,"SubInternalFlushSubItem",0x26a);
        SubInternalExit(param_1);
      }
      goto LAB_0001c138;
    }
  } while (iVar2 != 0x450);
  __android_log_print(6,"subInternal",&DAT_00023750,"SubInternalFlushSubItem",0x262);
LAB_0001c138:
  pthread_mutex_unlock((pthread_mutex_t *)(iVar3 + 0x458));
  return;
}



void SubInternalReset(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x3c);
    cVar1 = *(char *)(iVar2 + 0x450);
    cVar4 = *(char *)(iVar2 + 0x451);
    if (((*(char *)(iVar2 + 0x452) != '\0') || (cVar1 != cVar4)) ||
       (cVar4 = cVar1, *(char *)(iVar2 + 0x453) != '\x06')) {
      __android_log_print(6,"subInternal",&DAT_00023794,"SubInternalReset",0x19d,"SubInternalReset",
                          0x19d,*(char *)(iVar2 + 0x452),cVar1,cVar4,*(char *)(iVar2 + 0x453));
      iVar2 = *(int *)(param_1 + 0x3c);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined *)(iVar2 + 0x452) = 0;
    *(undefined *)(*(int *)(param_1 + 0x3c) + 0x450) = 0;
    *(undefined *)(*(int *)(param_1 + 0x3c) + 0x451) = 0;
    *(undefined *)(*(int *)(param_1 + 0x3c) + 0x453) = 6;
    iVar2 = *(int *)(param_1 + 0x18);
    uVar3 = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x454) = 0;
    sub_internal_init_disp_parameters(param_1,iVar2,uVar3);
    return;
  }
  return;
}



int SubInternalDecode(int param_1,void **param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  void *pvVar7;
  void *pvVar8;
  int iVar9;
  undefined4 uVar10;
  void *pvVar11;
  void *pvVar12;
  undefined4 uVar13;
  void *pvVar14;
  int iVar15;
  void *pvVar16;
  int iVar17;
  
  if (param_1 == 0) {
    return -1;
  }
  if (param_2 == (void **)0x0) {
    __android_log_print(6,"subInternal",&DAT_000237d8,"SubInternalDecode",0x106);
    return -1;
  }
  iVar9 = *(int *)(param_1 + 0x3c);
  if ((*(char *)(param_1 + 0xf9) == '\x01') &&
     (pvVar16 = *(void **)(param_1 + 0x100), pvVar16 != (void *)0x0)) {
    pvVar7 = param_2[1];
    if (0x1fff < (int)pvVar7) {
      __android_log_print(3,"subInternal",
                                                    
                          "<%s:%u>: the size is not enought!, size = %d, needSize = %d, pData = %p, flag = %d"
                          ,"SubInternalDecode",0x121,0x2000,pvVar7,pvVar16,1);
      *(void ***)(param_1 + 0xd0) = param_2;
      goto LAB_0001c304;
    }
    pvVar8 = param_2[2];
    pvVar11 = param_2[3];
    pvVar14 = param_2[4];
    pvVar12 = param_2[5];
    *(void **)(param_1 + 0x104) = pvVar7;
    *(void **)(param_1 + 0x108) = pvVar8;
    *(void **)(param_1 + 0x10c) = pvVar11;
    pvVar7 = param_2[6];
    pvVar8 = param_2[7];
    *(void **)(param_1 + 0x110) = pvVar14;
    *(void **)(param_1 + 0x114) = pvVar12;
    *(void **)(param_1 + 0x118) = pvVar7;
    *(void **)(param_1 + 0x11c) = pvVar8;
    memset(pvVar16,0,0x2000);
    memcpy(*(void **)(param_1 + 0x100),*param_2,(size_t)param_2[1]);
    *(undefined *)(*(int *)(param_1 + 0x100) + (int)param_2[1]) = 0;
    *(int **)(param_1 + 0xd0) = (int *)(param_1 + 0x100);
    pthread_mutex_lock((pthread_mutex_t *)(iVar9 + 0x458));
    cVar1 = *(char *)(iVar9 + 0x453);
  }
  else {
    *(void ***)(param_1 + 0xd0) = param_2;
LAB_0001c304:
    pthread_mutex_lock((pthread_mutex_t *)(iVar9 + 0x458));
    cVar1 = *(char *)(iVar9 + 0x453);
  }
  if (cVar1 == '\0') {
    pthread_mutex_unlock((pthread_mutex_t *)(iVar9 + 0x458));
    return 4;
  }
  iVar5 = *(int *)(param_1 + 0xdc);
  if ((iVar5 != 0) && (*(int *)(param_1 + 0x18) == 0x100)) {
    iVar2 = iVar5 + (int)param_2[1];
    if (iVar2 < 0x4000) {
      memcpy((void *)(*(int *)(param_1 + 0xd8) + iVar5),*param_2,(size_t)param_2[1]);
      *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + (int)param_2[1];
      if (*(int *)(param_1 + 0xe4) == -1 && *(int *)(param_1 + 0xe0) == -1) {
        pvVar16 = param_2[3];
        *(void **)(param_1 + 0xe0) = param_2[2];
        *(void **)(param_1 + 0xe4) = pvVar16;
      }
      *(int *)(param_1 + 0xd0) = param_1 + 0xd8;
    }
    else {
      __android_log_print(6,"subInternal",&DAT_00023874,"SubInternalDecode",0x146,iVar2,0x4000);
      *(undefined4 *)(param_1 + 0xdc) = 0;
      *(undefined4 *)(param_1 + 0xe0) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xe4) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xec) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xf0) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xf4) = 0xffffffff;
    }
  }
  iVar5 = (**(code **)(param_1 + 0x120))(param_1);
  if (*(int *)(param_1 + 0x18) == 0x100) {
    if (iVar5 == 3) {
      if (*(int *)(param_1 + 0xdc) == 0) {
        pvVar16 = param_2[1];
        if ((int)pvVar16 < 0x4000) {
          memcpy(*(void **)(param_1 + 0xd8),*param_2,(size_t)pvVar16);
          pvVar7 = param_2[3];
          pvVar16 = param_2[1];
          pvVar11 = param_2[4];
          pvVar14 = param_2[5];
          *(void **)(param_1 + 0xe0) = param_2[2];
          *(void **)(param_1 + 0xe4) = pvVar7;
          pvVar7 = param_2[6];
          pvVar8 = param_2[7];
          *(void **)(param_1 + 0xdc) = pvVar16;
          *(void **)(param_1 + 0xe8) = pvVar11;
          *(void **)(param_1 + 0xec) = pvVar14;
          *(void **)(param_1 + 0xf0) = pvVar7;
          *(void **)(param_1 + 0xf4) = pvVar8;
        }
        else {
          __android_log_print(6,"subInternal",&DAT_00023874,"SubInternalDecode",0x163,pvVar16,0x4000
                             );
        }
      }
      goto LAB_0001c35c;
    }
    *(undefined4 *)(param_1 + 0xe0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xe4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xec) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xf0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xf4) = 0xffffffff;
  }
  if (iVar5 == 1) {
    uVar4 = *(undefined4 *)(param_1 + 0x20);
    uVar6 = *(undefined4 *)(param_1 + 0x24);
    iVar17 = *(int *)(iVar9 + 0x454) + 1;
    *(int *)(iVar9 + 0x454) = iVar17;
    uVar10 = *(undefined4 *)(param_1 + 0x28);
    uVar13 = *(undefined4 *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0xcc) = (uint)*(byte *)(iVar9 + 0x450) * 0xb8 + iVar9;
    iVar15 = (uint)*(byte *)(iVar9 + 0x450) * 0xb8;
    uVar3 = *(byte *)(iVar9 + 0x450) + 1 & 0xff;
    iVar2 = iVar9 + iVar15;
    *(int *)(iVar9 + iVar15) = iVar17;
    *(undefined4 *)(iVar2 + 8) = uVar4;
    *(undefined4 *)(iVar2 + 0xc) = uVar6;
    if (uVar3 == 6) {
      uVar6 = 0;
    }
    *(undefined4 *)(iVar2 + 0x10) = uVar10;
    *(undefined4 *)(iVar2 + 0x14) = uVar13;
    *(char *)(iVar9 + 0x450) = (char)uVar3;
    if (uVar3 == 6) {
      *(char *)(iVar9 + 0x450) = (char)uVar6;
    }
    *(char *)(iVar9 + 0x452) = *(char *)(iVar9 + 0x452) + '\x01';
    *(char *)(iVar9 + 0x453) = *(char *)(iVar9 + 0x453) + -1;
  }
LAB_0001c35c:
  pthread_mutex_unlock((pthread_mutex_t *)(iVar9 + 0x458));
  return iVar5;
}



undefined * SubInternalInit(int param_1)

{
  char cVar1;
  undefined *__s;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char *__s1;
  int iVar6;
  undefined4 uVar7;
  
  uVar5 = *(undefined4 *)(param_1 + 0x60);
  uVar7 = *(undefined4 *)(param_1 + 0xfc);
  __android_log_print(3,"subInternal",
                      "<%s:%u>: ***internal sub_type = 0x%x, nCodecSpecificDataLen = %d",
                      "SubInternalInit",0x73,uVar5,uVar7);
  iVar6 = *(int *)(param_1 + 0x60);
  if (iVar6 == 0) {
    __android_log_print(6,"subInternal",&DAT_0002390c,"SubInternalInit",0x78,0,uVar7);
    return (undefined *)0x0;
  }
  __s = (undefined *)malloc(0x128);
  if (__s == (undefined *)0x0) {
    __android_log_print(6,"subInternal",&DAT_00023958,"SubInternalInit",0x7f,uVar5,uVar7);
  }
  else {
    memset(__s,0,0x128);
    if (iVar6 - 0x200U < 5) {
      __s[0xf9] = 1;
      pvVar2 = malloc(0x2000);
      *(void **)(__s + 0x100) = pvVar2;
      if (pvVar2 == (void *)0x0) {
        __android_log_print(6,"subInternal",&DAT_00023994,"SubInternalInit",0x8f,uVar5,uVar7);
        goto LAB_0001c9e8;
      }
    }
    *(undefined4 *)(__s + 0xd8) = 0;
    if (iVar6 == 0x100) {
      pvVar2 = malloc(0x4000);
      *(void **)(__s + 0xd8) = pvVar2;
      if (pvVar2 == (void *)0x0) {
        __android_log_print(6,"subInternal",&DAT_000239e4,"SubInternalInit",0x9a);
        goto LAB_0001c9e8;
      }
      *(undefined4 *)(__s + 0xdc) = 0;
      *(undefined4 *)(__s + 0xe8) = 0xffffffff;
      *(undefined4 *)(__s + 0xec) = 0xffffffff;
      *(undefined4 *)(__s + 0xe0) = 0xffffffff;
      *(undefined4 *)(__s + 0xe4) = 0xffffffff;
      *(undefined4 *)(__s + 0xf0) = 0xffffffff;
      *(undefined4 *)(__s + 0xf4) = 0xffffffff;
    }
    pvVar2 = malloc(0x460);
    *(void **)(__s + 0x3c) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      __android_log_print(6,"subInternal",&DAT_00023a2c,"SubInternalInit",0xa6);
    }
    else {
      memset(pvVar2,0,0x460);
      *(undefined *)((int)pvVar2 + 0x452) = 0;
      *(undefined *)((int)pvVar2 + 0x450) = 0;
      *(undefined *)((int)pvVar2 + 0x451) = 0;
      *(undefined *)((int)pvVar2 + 0x453) = 6;
      iVar3 = pthread_mutex_init((pthread_mutex_t *)((int)pvVar2 + 0x458),(pthread_mutexattr_t *)0x0
                                );
      if (iVar3 == 0) {
        cVar1 = *(char *)(param_1 + 0x74);
        uVar5 = *(undefined4 *)(param_1 + 0x68);
        uVar7 = *(undefined4 *)(param_1 + 0x6c);
        iVar3 = *(int *)(param_1 + 0x70);
        __s[0x44] = cVar1;
        *(int *)(__s + 0x14) = iVar3;
        if (iVar3 == 0) {
          *(undefined4 *)(__s + 0x14) = 0x1e;
        }
        *(undefined4 *)(__s + 0xc) = uVar5;
        *(undefined4 *)(__s + 0x10) = uVar7;
        if (cVar1 == '\x01') {
          memcpy(__s + 0x48,(void *)(param_1 + 0x7c),0x80);
        }
        else {
          __s[0x44] = 1;
          *(undefined4 *)(__s + 0x48) = 0xe1;
          *(undefined4 *)(__s + 0x4c) = 0xe83f07;
          *(undefined4 *)(__s + 0x50) = 0;
          *(undefined4 *)(__s + 0x54) = 0xfdfdfd;
          *(undefined4 *)(__s + 0x58) = 0x11eb10;
          *(undefined4 *)(__s + 0x5c) = 0xea12eb;
          *(undefined4 *)(__s + 0x60) = 0xfaff1a;
          *(undefined4 *)(__s + 100) = 0x95d76;
          *(undefined4 *)(__s + 0x68) = 0x7c7c7c;
          *(undefined4 *)(__s + 0x6c) = 0xe0e0e0;
          *(undefined4 *)(__s + 0x70) = 0x701f03;
          *(undefined4 *)(__s + 0x74) = 0x77307;
          *(undefined4 *)(__s + 0x78) = 0x6c;
          *(undefined4 *)(__s + 0x7c) = 0xcc0ae9;
          *(undefined4 *)(__s + 0x80) = 0xd2ab0f;
          *(undefined4 *)(__s + 0x84) = 0x730972;
        }
        sub_internal_malloc_memory(__s,iVar6,*(undefined4 *)(param_1 + 100));
        uVar4 = *(uint *)(param_1 + 0xfc);
        *(undefined4 *)(__s + 200) = 0;
        if ((int)uVar4 < 1) {
          return __s;
        }
        if (iVar6 == 0x201) {
          iVar6 = ittxt_get_disp_control_inf((int)__s,*(byte **)(param_1 + 0x100),uVar4);
          if (iVar6 == 0) {
            return __s;
          }
          __android_log_print(3,"subInternal",
                              "<%s:%u>: error: parse init data faild! sub type is TIMEDTEXT",
                              "SubInternalInit",0xd5);
        }
        else {
          if (iVar6 != 0x202) {
            if (iVar6 != 0x103) {
              return __s;
            }
            __s1 = *(char **)(param_1 + 0x100);
            iVar6 = strncmp(__s1,"DXSA",4);
            if (iVar6 != 0) {
              iVar6 = strncmp(__s1,"DXSB",4);
              if (iVar6 != 0) {
                __s[0xf8] = 0;
                __android_log_print(6,"subInternal",&DAT_00023b4c,"SubInternalInit",0xee);
                return __s;
              }
              __s[0xf8] = 0;
              return __s;
            }
            __s[0xf8] = 1;
            return __s;
          }
          uVar4 = get_ssa_sub_info((int)__s,*(byte **)(param_1 + 0x100),uVar4);
          if (uVar4 == 0) {
            return __s;
          }
          __android_log_print(3,"subInternal",
                              "<%s:%u>: error: parse init data faild! sub type is SSA",
                              "SubInternalInit",0xdd);
        }
      }
      else {
        __android_log_print(6,"subInternal",&DAT_00023a88,"SubInternalInit",0xb3,"SubInternalInit",
                            0xb3);
      }
    }
  }
LAB_0001c9e8:
  SubInternalExit(__s);
  return (undefined *)0x0;
}



uint SubInternalEmptySubItemNum(int param_1)

{
  uint uVar1;
  pthread_mutex_t *__mutex;
  
  uVar1 = *(uint *)(param_1 + 0x3c);
  if (uVar1 == 0) {
    __android_log_print(6,"subInternal",&DAT_00023660,"SubInternalEmptySubItemNum",0x279);
  }
  else {
    __mutex = (pthread_mutex_t *)(uVar1 + 0x458);
    pthread_mutex_lock(__mutex);
    uVar1 = (uint)*(byte *)(uVar1 + 0x453);
    pthread_mutex_unlock(__mutex);
  }
  return uVar1;
}



uint SubInternalNextSubItemInfo(int param_1)

{
  byte bVar1;
  uint uVar2;
  pthread_mutex_t *__mutex;
  
  uVar2 = *(uint *)(param_1 + 0x3c);
  if (uVar2 == 0) {
    __android_log_print(6,"subInternal",&DAT_00023660,"SubInternalNextSubItemInfo",0x1f0);
  }
  else {
    __mutex = (pthread_mutex_t *)(uVar2 + 0x458);
    pthread_mutex_lock(__mutex);
    bVar1 = *(byte *)(uVar2 + 0x452);
    if (bVar1 == 0) {
      pthread_mutex_unlock(__mutex);
      uVar2 = (uint)bVar1;
    }
    else {
      pthread_mutex_unlock(__mutex);
      uVar2 = (uint)*(byte *)(uVar2 + 0x451) * 0xb8 + uVar2;
    }
  }
  return uVar2;
}



undefined4 sub_internal_check_valid_buf(int param_1)

{
  undefined4 uVar1;
  pthread_mutex_t *__mutex;
  int iVar2;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x3c);
    if (iVar2 == 0) {
      __android_log_print(6,"subInternal",&DAT_00023660,"sub_internal_check_valid_buf",0x55);
      uVar1 = 0xffffffff;
    }
    else {
      __mutex = (pthread_mutex_t *)(iVar2 + 0x458);
      pthread_mutex_lock(__mutex);
      if (*(char *)(iVar2 + 0x453) == '\0') {
        pthread_mutex_unlock(__mutex);
        uVar1 = 4;
      }
      else {
        pthread_mutex_unlock(__mutex);
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}



int sub_internal_itxt_dec(int param_1)

{
  char cVar1;
  void *pvVar2;
  void *pvVar3;
  void **ppvVar4;
  int iVar5;
  void *pvVar6;
  void *__n;
  void *pvVar7;
  void *pvVar8;
  undefined *__dest;
  int iVar9;
  undefined auStack1068 [1024];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  pvVar2 = memset(auStack1068,0,0x400);
  cVar1 = (char)pvVar2;
  ppvVar4 = *(void ***)(param_1 + 0xd0);
  iVar5 = *(int *)(param_1 + 0x3c);
  pvVar7 = ppvVar4[1];
  pvVar8 = ppvVar4[7];
  pvVar2 = ppvVar4[2];
  pvVar6 = ppvVar4[3];
  if ((void *)0x100 < pvVar7) {
    cVar1 = -1;
  }
  *(void **)(param_1 + 0x28) = ppvVar4[6];
  *(void **)(param_1 + 0x2c) = pvVar8;
  *(void **)(param_1 + 0x20) = pvVar2;
  *(void **)(param_1 + 0x24) = pvVar6;
  if (pvVar7 < (void *)0x101) {
    pvVar6 = *ppvVar4;
    pvVar2 = pvVar7;
    if (pvVar7 != (void *)0x0) {
      pvVar2 = (void *)0x0;
      __dest = auStack1068;
      do {
        while( true ) {
          pvVar8 = memchr(pvVar6,0x3c,(size_t)pvVar7);
          pvVar3 = memchr(pvVar6,0x3e,(size_t)pvVar7);
          if (pvVar3 == (void *)0x0 || pvVar8 == (void *)0x0) {
            memcpy(__dest,pvVar6,(size_t)pvVar7);
            pvVar2 = (void *)((int)pvVar2 + (int)pvVar7);
            goto LAB_0001cda4;
          }
          if (*(char *)((int)pvVar8 + 1) == 'b') break;
          __n = (void *)((int)pvVar8 - (int)pvVar6);
LAB_0001cd70:
          memcpy(__dest,pvVar6,(size_t)__n);
          pvVar7 = (void *)((int)pvVar7 + ~(uint)(void *)((int)pvVar3 - (int)pvVar6));
          __dest = __dest + (int)__n;
          pvVar2 = (void *)((int)pvVar2 + (int)__n);
          pvVar6 = (void *)((int)pvVar6 + (int)(void *)((int)pvVar3 - (int)pvVar6) + 1);
          if (pvVar7 == (void *)0x0) goto LAB_0001cda4;
        }
        __n = (void *)((int)pvVar8 - (int)pvVar6);
        if (*(char *)((int)pvVar8 + 2) != 'r') goto LAB_0001cd70;
        memcpy(__dest,pvVar6,(size_t)__n);
        pvVar7 = (void *)((int)pvVar7 + ~(uint)((int)pvVar3 - (int)pvVar6));
        __dest[(int)__n] = 10;
        pvVar2 = (void *)((int)pvVar2 + 1 + (int)__n);
        __dest = __dest + (int)__n + 1;
        pvVar6 = (void *)((int)pvVar3 + 1);
      } while (pvVar7 != (void *)0x0);
    }
LAB_0001cda4:
    pvVar6 = memchr(auStack1068,0x7b,(size_t)pvVar2);
    pvVar7 = memchr(auStack1068,0x7d,(size_t)pvVar2);
    if ((pvVar7 != (void *)0x0 && pvVar6 != (void *)0x0) &&
       (0 < (int)(void *)((int)pvVar7 - (int)pvVar6))) {
      memset(pvVar6,0,(size_t)(void *)((int)pvVar7 - (int)pvVar6));
      memcpy(pvVar6,(void *)((int)pvVar7 + 1),(size_t)(auStack1068 + -(int)pvVar7 + (int)pvVar2));
      pvVar2 = (void *)((int)pvVar2 + (int)((int)pvVar6 - (int)pvVar7));
    }
    iVar9 = (uint)*(byte *)(iVar5 + 0x450) * 0xb8 + iVar5;
    *(void **)(iVar9 + 0xa0) = pvVar2;
    memset(*(void **)(iVar9 + 0x9c),0,0x100);
    memcpy(*(void **)((uint)*(byte *)(iVar5 + 0x450) * 0xb8 + iVar5 + 0x9c),auStack1068,
           (size_t)pvVar2);
    cVar1 = '\x01';
  }
  if (local_2c != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return (int)cVar1;
}



void sub_internal_init_disp_parameters(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0x3c);
    iVar3 = iVar2 * 0xb8;
    iVar4 = iVar1 + iVar3;
    *(undefined4 *)(iVar4 + 0x20) = 0;
    *(undefined4 *)(iVar4 + 0x50) = 0;
    *(undefined4 *)(iVar4 + 0x30) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x34) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x38) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x3c) = 0xffffffff;
    *(undefined4 *)(iVar4 + 8) = 0;
    *(undefined4 *)(iVar4 + 0xc) = 0;
    *(undefined4 *)(iVar4 + 0x10) = 0;
    *(undefined4 *)(iVar4 + 0x14) = 0;
    *(undefined4 *)(iVar4 + 0xa0) = 0;
    *(undefined4 *)(iVar4 + 0xac) = 0;
    *(undefined4 *)(iVar4 + 0xb0) = 0;
    *(undefined4 *)(iVar4 + 0x40) = 0;
    *(undefined4 *)(iVar4 + 0x44) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x48) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x4c) = 0xffffffff;
    memcpy((void *)(iVar1 + iVar3 + 0x58),"unknown",8);
    if (param_2 - 0x100U < 2) {
      iVar1 = *(int *)(param_1 + 0x3c);
LAB_0001cffc:
      *(undefined4 *)(iVar1 + iVar3 + 0x98) = 0;
      memset(*(void **)(iVar1 + iVar3 + 0xa8),0,0x100000);
    }
    else {
      if (param_2 == 0x102) {
        iVar1 = *(int *)(param_1 + 0x3c);
        goto LAB_0001cffc;
      }
      iVar1 = *(int *)(param_1 + 0x3c);
      if (param_2 == 0x103) goto LAB_0001cffc;
      iVar1 = iVar1 + iVar3;
      *(undefined4 *)(iVar1 + 0x98) = 1;
      *(undefined4 *)(iVar1 + 0xa4) = param_3;
      memset(*(void **)(iVar1 + 0x9c),0,0x100);
    }
    iVar2 = iVar2 + 1;
    if (iVar2 == 6) {
      if (param_2 == 0x200) {
        *(code **)(param_1 + 0x120) = sub_internal_itxt_dec;
      }
      else {
        if (param_2 == 0x201) {
          *(code **)(param_1 + 0x120) = sub_internal_ittxt_dec;
        }
        else {
          if (param_2 == 0x202) {
            *(code **)(param_1 + 0x120) = sub_internal_issa_dec;
          }
          else {
            if (param_2 - 0x100U < 2) {
              *(code **)(param_1 + 0x120) = sub_internal_dvdsub_dec;
            }
            else {
              if (param_2 == 0x102) {
                *(code **)(param_1 + 0x120) = sub_internal_pgs_dec;
              }
              else {
                if (param_2 == 0x103) {
                  *(code **)(param_1 + 0x120) = subInternalDivxDecode;
                }
              }
            }
          }
        }
      }
      *(undefined4 *)(param_1 + 0xcc) = 0;
      *(undefined4 *)(param_1 + 8) = param_3;
      return;
    }
  } while( true );
}



void sub_internal_set_bitmap_format(undefined *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    break;
  case 1:
    *param_1 = 1;
    param_1[1] = 3;
    param_1[2] = 0;
    param_1[3] = 1;
    param_1[4] = 2;
    return;
  case 2:
    *param_1 = 2;
    param_1[1] = 3;
    param_1[2] = 2;
    param_1[3] = 1;
    param_1[4] = 0;
    return;
  case 3:
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = 3;
    param_1[3] = 2;
    param_1[4] = 1;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 1;
  param_1[3] = 2;
  param_1[4] = 3;
  return;
}



void sub_internal_malloc_memory(undefined *param_1,int param_2,undefined4 param_3)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = (uint)(param_2 == 0x202 || param_2 == 0x200);
  *(int *)(param_1 + 0x18) = param_2;
  if (uVar7 == 0) {
    if (param_2 != 0x201) {
      sub_internal_set_bitmap_format(param_1,1);
      pvVar1 = malloc(0x80000);
      *(void **)(param_1 + 0x38) = pvVar1;
      memset(pvVar1,0,0x80000);
      if (param_2 - 0x100U < 2) {
        puVar2 = (undefined4 *)malloc(0x14);
        iVar5 = *(int *)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined4 **)(param_1 + 0x34) = puVar2;
        puVar2[2] = 0;
        puVar3 = puVar2 + 4;
        puVar2[3] = 0;
        *puVar3 = 0;
        if (iVar5 == 0x240 || iVar5 == 0x120) {
          puVar3 = (undefined4 *)0x1;
        }
        *(undefined *)(puVar2 + 2) = 0;
        if (iVar5 == 0x240 || iVar5 == 0x120) {
          *(char *)(puVar2 + 2) = (char)puVar3;
        }
      }
      else {
        if (param_2 == 0x102) {
          pvVar1 = malloc(0x20d40);
          *(void **)(param_1 + 0x34) = pvVar1;
          memset(pvVar1,0,0x20d40);
          iVar5 = *(int *)(param_1 + 0x34);
          puVar4 = (undefined *)(iVar5 + 0x2083b);
          do {
            puVar4 = puVar4 + 1;
            *puVar4 = (char)uVar7;
            uVar7 = uVar7 + 1;
          } while (uVar7 != 0x100);
          iVar6 = 0;
          puVar4 = (undefined *)(iVar5 + 0x2043b);
          do {
            iVar6 = iVar6 + 1;
            puVar4[1] = 0;
            puVar4[0x501] = 0xff;
            puVar4 = puVar4 + 1;
          } while (iVar6 != 0x400);
        }
        else {
          if (param_2 == 0x103) {
            pvVar1 = malloc(0x5c);
            *(void **)(param_1 + 0x34) = pvVar1;
            memset(pvVar1,0,0x5c);
          }
        }
      }
      iVar5 = *(int *)(param_1 + 0x3c);
      iVar6 = 0;
      do {
        pvVar1 = malloc(0x100000);
        iVar8 = iVar6 * 0xb8;
        iVar6 = iVar6 + 1;
        *(void **)(iVar5 + iVar8 + 0xa8) = pvVar1;
        memset(pvVar1,0,0x100000);
        iVar5 = *(int *)(param_1 + 0x3c);
        *(undefined4 *)(iVar5 + iVar8 + 0x9c) = 0;
      } while (iVar6 != 6);
      goto LAB_0001d298;
    }
    iVar5 = *(int *)(param_1 + 0x3c);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x3c);
    uVar7 = 0;
  }
  do {
    pvVar1 = malloc(0x100);
    iVar8 = uVar7 * 0xb8;
    iVar6 = *(int *)(param_1 + 0x3c);
    uVar7 = uVar7 + 1;
    *(void **)(iVar5 + iVar8 + 0x9c) = pvVar1;
    memset(*(void **)(iVar6 + iVar8 + 0x9c),0,0x100);
    iVar5 = *(int *)(param_1 + 0x3c);
    *(undefined4 *)(iVar5 + iVar8 + 0xa8) = 0;
  } while (uVar7 != 6);
LAB_0001d298:
  sub_internal_init_disp_parameters((int)param_1,param_2,param_3);
  return;
}



// WARNING: Could not reconcile some variable overlaps

void sub_process_disp_pos(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined4 local_54;
  int local_50 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar10 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_54 = 0;
  local_50[0] = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  if (param_3 != 1) {
    if (param_3 < 1) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      local_54 = 0;
      uVar11 = 0;
      local_68 = 0;
      local_64 = 0;
      iVar4 = 0;
      local_60 = 0;
      uVar12 = 0;
      local_5c = 0;
      do {
        while( true ) {
          iVar6 = *(char *)(param_2 + iVar4) * 0xb8 + param_1;
          if ((*(uint *)(iVar6 + 0x20) & 0xf0) == 0x30) break;
LAB_0001d44c:
          iVar4 = iVar4 + 1;
          if (iVar4 == param_3) goto LAB_0001d4c4;
        }
        uVar13 = *(uint *)(iVar6 + 0x20) & 0xf;
        uVar3 = (undefined)iVar4;
        if (uVar13 == 2) {
          iVar6 = *(int *)(iVar6 + 0x3c);
          *(undefined *)((int)&local_28 + uVar12) = uVar3;
          if (local_64 < iVar6) {
            local_64 = iVar6;
          }
          uVar12 = uVar12 + 1 & 0xff;
          goto LAB_0001d44c;
        }
        if (uVar13 == 3) {
          iVar6 = *(int *)(iVar6 + 0x3c);
          *(undefined *)((int)&local_30 + uVar11) = uVar3;
          if (local_60 < iVar6) {
            local_60 = iVar6;
          }
          uVar11 = uVar11 + 1 & 0xff;
          goto LAB_0001d44c;
        }
        if (uVar13 == 1) {
          iVar6 = *(int *)(iVar6 + 0x3c);
          *(undefined *)((int)&local_38 + local_54) = uVar3;
          local_54 = local_54 + 1 & 0xff;
          if (iVar10 < iVar6) {
            iVar10 = iVar6;
          }
          goto LAB_0001d44c;
        }
        iVar6 = *(int *)(iVar6 + 0x3c);
        *(undefined *)((int)&local_40 + uVar9) = uVar3;
        iVar4 = iVar4 + 1;
        if (local_5c <= iVar6) {
          local_5c = iVar6;
        }
        uVar9 = local_68 + 1 & 0xff;
        local_68 = uVar9;
      } while (iVar4 != param_3);
LAB_0001d4c4:
      local_54 = local_54 << 8;
      local_50[1] = iVar10;
      local_50[2] = local_60;
      local_54 = CONCAT13((char)uVar12,CONCAT12((char)uVar11,(undefined2)local_54));
      local_50[3] = local_64;
      local_54 = local_54 | local_68;
      local_50[0] = local_5c;
    }
    iVar10 = 0;
    puVar8 = &local_40;
    iVar4 = 0;
    if (uVar9 == 2) goto LAB_0001d530;
    while (iVar4 = iVar4 + 1, iVar4 != 4) {
      while( true ) {
        puVar8 = puVar8 + 2;
        iVar10 = iVar10 + 4;
        if (*(char *)((int)&local_54 + iVar4) != '\x02') break;
LAB_0001d530:
        iVar6 = 0;
        bVar2 = *(byte *)((int)&local_54 + iVar4);
        do {
          pbVar1 = (byte *)((int)puVar8 + iVar6);
          iVar6 = iVar6 + 1;
          iVar5 = *(int *)((int)local_50 + iVar10);
          iVar7 = (int)*(char *)(param_2 + (uint)*pbVar1);
          iVar14 = *(int *)(iVar7 * 0xb8 + param_1 + 0x3c);
          if (iVar14 != iVar5) {
            if (0x1d < iVar5) {
              iVar5 = iVar5 + -0x1e;
              *(int *)((int)local_50 + iVar10) = iVar5;
            }
            if (iVar5 < iVar14) {
              *(int *)(iVar7 * 0xb8 + param_1 + 0x3c) = iVar5;
            }
          }
        } while (iVar6 < (int)(uint)bVar2);
        iVar4 = iVar4 + 1;
        if (iVar4 == 4) {
          return;
        }
      }
    }
  }
  return;
}



uint conver_data_format(int param_1,undefined param_2,undefined param_3,undefined param_4,
                       byte param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint local_14;
  
  uVar4 = (uint)param_5;
  local_14 = 0;
  if (uVar4 != 0) {
    bVar1 = *(byte *)(param_1 + 2);
    bVar2 = *(byte *)(param_1 + 3);
    bVar3 = *(byte *)(param_1 + 4);
    (&stack0xfffffff0)[~(uint)*(byte *)(param_1 + 1)] = param_5;
    (&stack0xfffffff0)[~(uint)bVar1] = param_2;
    (&stack0xfffffff0)[~(uint)bVar2] = param_3;
    (&stack0xfffffff0)[~(uint)bVar3] = param_4;
    uVar4 = (local_14 >> 8 & 0xff) << 0x10 | local_14 << 0x18 | local_14 >> 0x18 |
            (local_14 >> 0x10 & 0xff) << 8;
  }
  return uVar4;
}



void convert_to_rgb(int param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                   byte param_5,byte param_6,byte param_7)

{
  int iVar1;
  
  iVar1 = (uint)param_5 * 0x400;
  *param_2 = *(undefined *)(param_1 + ((int)((param_7 - 0x80) * 0x59c + iVar1 + 0x200) >> 10));
  *param_3 = *(undefined *)
              (param_1 +
              ((int)(iVar1 + (param_6 - 0x80) * -0x160 + (param_7 - 0x80) * -0x2dc + 0x200) >> 10));
  *param_4 = *(undefined *)(param_1 + ((int)((param_6 - 0x80) * 0x717 + iVar1 + 0x200) >> 10));
  return;
}



int sub_internal_pgs_dec(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  byte **ppbVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  byte *__n;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  uint uVar20;
  int *piVar21;
  uint uVar22;
  int iVar23;
  int *piVar24;
  byte *pbVar25;
  uint uVar26;
  byte *pbVar27;
  int iVar28;
  uint uVar29;
  bool bVar30;
  bool bVar31;
  undefined8 uVar32;
  undefined local_2b;
  undefined local_2a;
  undefined local_29 [5];
  
  ppbVar9 = *(byte ***)(param_1 + 0xd0);
  iVar19 = *(int *)(param_1 + 0x3c);
  piVar24 = *(int **)(param_1 + 0x34);
  pbVar6 = ppbVar9[1];
  pbVar13 = ppbVar9[3];
  piVar24[2] = (int)ppbVar9[2];
  piVar24[3] = (int)pbVar13;
  if (pbVar6 < (byte *)0x3) {
LAB_0001d7b8:
    cVar5 = -1;
  }
  else {
    pbVar13 = *ppbVar9;
    pbVar6 = pbVar13 + (int)pbVar6;
    while (pbVar13 < pbVar6) {
      bVar1 = *pbVar13;
      bVar2 = pbVar13[1];
      bVar3 = pbVar13[2];
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
      if (bVar1 == 0x80) {
LAB_0001d7d8:
        if (*piVar24 != 4) goto LAB_0001d94c;
        if (piVar24[1] != 0x80 && piVar24[1] != 0x40) {
          cVar5 = '\x05';
          *(int *)(param_1 + 0x30) = piVar24[4];
          *piVar24 = 0;
          goto LAB_0001d7bc;
        }
        iVar23 = piVar24[0xb];
        uVar7 = piVar24[0xc];
        iVar28 = piVar24[8];
        iVar14 = (uint)*(byte *)(*(int *)(param_1 + 0x3c) + 0x450) * 0xb8 + *(int *)(param_1 + 0x3c)
        ;
        iVar19 = piVar24[9];
        uVar26 = iVar23 * uVar7;
        iVar17 = piVar24[0xe];
        *(undefined4 *)(param_1 + 0x28) = 4999999;
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(undefined4 *)(iVar14 + 0x30) = 0xffffffff;
        *(undefined4 *)(iVar14 + 0x34) = 0xffffffff;
        piVar21 = (int *)((int)piVar24 + iVar17 + 0x3c);
        *(int *)(iVar14 + 0xac) = iVar23;
        *(uint *)(iVar14 + 0xb0) = uVar7;
        *(int *)(iVar14 + 0x18) = iVar28;
        *(int *)(iVar14 + 0x1c) = iVar19;
        iVar19 = *(int *)(iVar14 + 0xa8);
        if (0x4b000 < uVar26) goto LAB_0001d94c;
        uVar29 = 0;
        piVar10 = piVar24 + 0xf;
        piVar18 = (int *)(iVar19 + 0x100000);
        uVar20 = 0;
        goto LAB_0001daec;
      }
      pbVar27 = pbVar13 + 3;
      pbVar25 = (byte *)(uint)CONCAT11(bVar2,bVar3);
      if (pbVar6 + -(int)pbVar27 < pbVar25) goto LAB_0001d94c;
      if (bVar1 == 0x16) {
        iVar23 = *(int *)(param_1 + 0xcc);
        uVar7 = piVar24[2];
        uVar26 = piVar24[3];
        piVar24[4] = uVar7;
        piVar24[5] = uVar26;
        if (((iVar23 != 0) && (*(char *)(iVar19 + 0x452) != '\0')) && ((uVar7 | uVar26) != 0)) {
          iVar14 = *(int *)(iVar23 + 0xc);
          bVar30 = uVar7 <= *(uint *)(undefined8 *)(iVar23 + 8);
          if ((int)(iVar14 - (uVar26 + !bVar30)) < 0 !=
              (iVar14 < 0 == -1 < (int)uVar26 &&
              (int)(iVar14 + ~uVar26 + (uint)bVar30) < 0 != iVar14 < 0)) {
            if (*(int *)(param_1 + 0x2c) == 0 && *(int *)(param_1 + 0x28) == 4999999) {
              uVar32 = VectorSub(*(undefined8 *)(piVar24 + 2),*(undefined8 *)(iVar23 + 8),8);
              *(undefined8 *)(iVar23 + 0x10) = uVar32;
            }
            *(undefined4 *)(param_1 + 0xcc) = 0;
          }
        }
        bVar1 = pbVar13[3];
        bVar2 = pbVar13[4];
        piVar24[8] = (uint)CONCAT11(bVar1,bVar2);
        bVar3 = pbVar13[5];
        bVar4 = pbVar13[6];
        piVar24[9] = (uint)CONCAT11(bVar3,bVar4);
        piVar24[10] = (uint)CONCAT11(pbVar13[8],pbVar13[9]);
        uVar7 = (uint)pbVar13[10];
        if (uVar7 == 0x80 || uVar7 == 0x40) {
          uVar26 = (uint)CONCAT11(pbVar13[0x12],pbVar13[0x13]);
          if ((CONCAT11(bVar1,bVar2) < uVar26) ||
             (uVar20 = (uint)CONCAT11(pbVar13[0x14],pbVar13[0x15]), CONCAT11(bVar3,bVar4) < uVar20))
          {
            uVar20 = 0;
            uVar26 = 0;
          }
          piVar24[6] = uVar26;
          piVar24[7] = uVar20;
          piVar24[1] = uVar7;
        }
        else {
          if (uVar7 == 0) {
            piVar24[1] = 0;
          }
        }
        *piVar24 = 1;
      }
      else {
        if (bVar1 < 0x17) {
          if (bVar1 == 0x14) {
            if (*piVar24 != 2) goto LAB_0001d94c;
            iVar23 = *(int *)(param_1 + 0x34);
            local_2b = 0;
            local_2a = 0;
            local_29[0] = 0;
            memset((void *)(iVar23 + 0x2003c),0,0x400);
            memset((void *)(iVar23 + 0x2003c),0,0x400);
            while (pbVar13 = pbVar13 + 5, pbVar13 < pbVar27 + (int)pbVar25) {
              bVar1 = pbVar13[4];
              bVar2 = *pbVar13;
              convert_to_rgb(iVar23 + 0x2083c,&local_2b,&local_2a,local_29,pbVar13[1],pbVar13[2],
                             pbVar13[3]);
              uVar7 = conver_data_format(param_1,local_2b,local_2a,local_29[0],bVar1);
              *(uint *)(iVar23 + (bVar2 + 0x800e) * 4 + 4) = uVar7;
            }
            *piVar24 = 3;
          }
          else {
            if (bVar1 != 0x15) goto LAB_0001d7b8;
            if (((*piVar24 != 3) || (-1 < (char)pbVar13[6])) ||
               (__n = (byte *)((uint)pbVar13[8] << 8 | (uint)pbVar13[7] << 0x10 | (uint)pbVar13[9]),
               pbVar25 + -7 < __n)) goto LAB_0001d94c;
            piVar24[0xe] = (int)__n;
            bVar1 = pbVar13[0xc];
            bVar2 = pbVar13[0xd];
            if (((uint)piVar24[8] < (uint)CONCAT11(pbVar13[10],pbVar13[0xb])) ||
               ((uint)piVar24[9] < (uint)CONCAT11(bVar1,bVar2))) goto LAB_0001d94c;
            piVar24[0xb] = (uint)CONCAT11(pbVar13[10],pbVar13[0xb]);
            piVar24[0xc] = (uint)CONCAT11(bVar1,bVar2);
            if ((byte *)0x20000 < __n) goto LAB_0001d94c;
            memcpy(piVar24 + 0xf,pbVar13 + 0xe,(size_t)__n);
LAB_0001d838:
            *piVar24 = 4;
          }
        }
        else {
          if (bVar1 != 0x17) {
            if (bVar1 == 0x80) goto LAB_0001d7d8;
            goto LAB_0001d7b8;
          }
          if (*piVar24 != 1) goto LAB_0001d94c;
          if (piVar24[1] != 0x80 && piVar24[1] != 0x40) goto LAB_0001d838;
          *piVar24 = 2;
        }
      }
      pbVar13 = pbVar27 + (int)pbVar25;
    }
    cVar5 = '\0';
  }
  goto LAB_0001d7bc;
LAB_0001daec:
  uVar15 = uVar20;
  bVar31 = uVar29 <= uVar7;
  bVar30 = uVar7 == uVar29;
  if (bVar31 && !bVar30) {
    bVar31 = piVar10 <= piVar21;
    bVar30 = piVar21 == piVar10;
  }
  if (!bVar31 || bVar30) {
    iVar19 = piVar24[5];
    piVar24[0xe] = 0;
    cVar5 = '\x01';
    *(int *)(param_1 + 0x20) = piVar24[4];
    *(int *)(param_1 + 0x24) = iVar19;
    *piVar24 = 0;
    goto LAB_0001d7bc;
  }
  uVar8 = (uint)*(byte *)piVar10;
  uVar20 = uVar15;
  if (uVar8 == 0) {
    bVar1 = *(byte *)((int)piVar10 + 1);
    uVar12 = bVar1 & 0x3f;
    if ((bVar1 & 0x40) == 0) {
      piVar11 = (int *)((int)piVar10 + 2);
    }
    else {
      piVar11 = (int *)((int)piVar10 + 3);
      uVar12 = (uint)*(byte *)((int)piVar10 + 2) + uVar12 * 0x100;
    }
    piVar10 = piVar11;
    if ((bVar1 & 0x80) != 0) {
      piVar10 = (int *)((int)piVar11 + 1);
      uVar8 = (uint)*(byte *)piVar11;
    }
    if (uVar12 != 0) goto LAB_0001db44;
    uVar29 = uVar29 + 1;
    goto LAB_0001daec;
  }
  piVar10 = (int *)((int)piVar10 + 1);
  uVar12 = 1;
LAB_0001db44:
  uVar22 = uVar12 + uVar15;
  if ((uVar26 < uVar22) || (iVar23 = uVar12 - 1, uVar20 = uVar22, iVar23 < 0)) goto LAB_0001daec;
  piVar11 = (int *)(iVar19 + uVar15 * 4);
  if (piVar11 <= piVar18) {
    while( true ) {
      iVar23 = iVar23 + -1;
      piVar16 = piVar11 + 1;
      *piVar11 = piVar24[uVar8 + 0x800f];
      if (iVar23 == -1) break;
      piVar11 = piVar16;
      if (piVar18 < piVar16) goto LAB_0001dc1c;
    }
    goto LAB_0001daec;
  }
LAB_0001dc1c:
  __android_log_print(3,"subInternalDecPgs",
                      "<%s:%u>: *****************the size of the bitmap is error.\n","decode_rle",
                      0x149);
LAB_0001d94c:
  cVar5 = -1;
  *piVar24 = 0;
LAB_0001d7bc:
  return (int)cVar5;
}



int convert_data_to_bmp(int param_1,int param_2,byte *param_3,byte *param_4,char param_5)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  char *pcVar10;
  byte *pbVar11;
  int iVar12;
  undefined4 uVar13;
  byte *pbVar14;
  int iVar15;
  char *pcVar16;
  byte *pbVar17;
  char *pcVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  uint uVar24;
  bool bVar25;
  int local_50;
  int local_4c;
  int local_48;
  char local_38 [20];
  
  pbVar7 = *(byte **)(param_2 + 0xb0);
  pcVar18 = *(char **)(param_1 + 0x34);
  pbVar17 = *(byte **)(param_2 + 0xac);
  pbVar11 = pbVar7;
  pbVar22 = pbVar17;
  if ((int)pbVar7 < 1) {
    pbVar19 = (byte *)0x0;
    pbVar21 = pbVar19;
  }
  else {
    pbVar23 = (byte *)0x0;
    pbVar6 = pbVar17 + -1;
    pbVar19 = (byte *)0x0;
    pbVar21 = (byte *)0x0;
    pbVar8 = pbVar7;
    pbVar14 = param_4;
    pbVar20 = param_3;
    do {
      if (1 < (int)pbVar6) {
        pbVar8 = pbVar20;
      }
      if (pbVar6 != (byte *)0x1 && (int)(pbVar17 + -2) < 0 == SBORROW4((int)pbVar6,1)) {
        pbVar14 = (byte *)0x1;
      }
      if (pbVar6 != (byte *)0x1 && (int)(pbVar17 + -2) < 0 == SBORROW4((int)pbVar6,1)) {
        do {
          pbVar8 = pbVar8 + 1;
          if ((*pbVar8 != 0) && (pcVar18[*pbVar8] != '\0')) {
            if ((int)pbVar14 <= (int)pbVar22) {
              pbVar22 = pbVar14;
            }
            if ((int)pbVar21 < (int)pbVar14) {
              pbVar21 = pbVar14;
            }
            if ((int)pbVar23 <= (int)pbVar11) {
              pbVar11 = pbVar23;
            }
            if ((int)pbVar19 < (int)pbVar23) {
              pbVar19 = pbVar23;
            }
          }
          pbVar14 = pbVar14 + 1;
        } while ((int)pbVar14 < (int)pbVar6);
      }
      pbVar23 = pbVar23 + 1;
      pbVar20 = pbVar20 + (int)pbVar17;
    } while (pbVar23 != pbVar7);
  }
  bVar25 = SBORROW4((int)pbVar22,(int)pbVar21);
  pbVar7 = pbVar22 + -(int)pbVar21;
  if ((int)pbVar22 < (int)pbVar21) {
    bVar25 = SBORROW4((int)pbVar11,(int)pbVar19);
    pbVar7 = pbVar11 + -(int)pbVar19;
  }
  if ((int)pbVar7 < 0 != bVar25) {
    pbVar21 = pbVar21 + (1 - (int)pbVar22);
    pbVar19 = pbVar19 + (1 - (int)pbVar11);
    if (0x100000 < (uint)((int)pbVar19 * (int)pbVar21 * 4)) {
      pbVar21 = (byte *)__aeabi_idiv(0x100000,(int)pbVar19 * 4);
    }
    pbVar7 = pbVar19;
    if (10 < (int)pbVar19) {
      pbVar7 = pbVar21;
    }
    if (10 < (int)pbVar7) {
      if (param_5 == '\x01') {
        pcVar16 = local_38;
        pcVar10 = pcVar18;
        do {
          bVar2 = pcVar10[4];
          *pcVar16 = *pcVar10 << 4;
          uVar13 = *(undefined4 *)(param_4 + (uint)bVar2 * 4);
          pcVar16[1] = (char)((uint)uVar13 >> 0x10);
          pcVar16[2] = (char)((uint)uVar13 >> 8);
          pcVar16[3] = (char)uVar13;
          pcVar16 = pcVar16 + 4;
          pcVar10 = pcVar10 + 1;
        } while (pcVar16 != local_38 + 0x10);
        local_4c = 0;
        local_48 = 0;
        while( true ) {
          iVar15 = 0;
          iVar9 = local_4c;
          iVar12 = local_4c;
          while( true ) {
            uVar24 = (uint)*(byte *)((int)(pbVar11 + local_48) * (int)pbVar17 + iVar15 +
                                    (int)param_3 + (int)pbVar22);
            iVar1 = uVar24 * 4;
            if (pcVar18[uVar24] == '\0') {
              *(undefined *)(*(int *)(param_2 + 0xa8) + iVar12 + (uint)*(byte *)(param_1 + 1)) = 0;
              *(undefined *)(*(int *)(param_2 + 0xa8) + iVar12 + (uint)*(byte *)(param_1 + 2)) = 0;
              *(undefined *)(*(int *)(param_2 + 0xa8) + iVar12 + (uint)*(byte *)(param_1 + 3)) = 0;
              *(undefined *)(*(int *)(param_2 + 0xa8) + iVar12 + (uint)*(byte *)(param_1 + 4)) = 0;
            }
            else {
              cVar5 = local_38[iVar1 + 1];
              *(char *)(*(int *)(param_2 + 0xa8) + iVar9 + (uint)*(byte *)(param_1 + 1)) =
                   local_38[iVar1];
              cVar3 = local_38[iVar1 + 2];
              cVar4 = local_38[iVar1 + 3];
              *(char *)(*(int *)(param_2 + 0xa8) + iVar9 + (uint)*(byte *)(param_1 + 2)) = cVar5;
              *(char *)(*(int *)(param_2 + 0xa8) + iVar9 + (uint)*(byte *)(param_1 + 3)) = cVar3;
              *(char *)(*(int *)(param_2 + 0xa8) + iVar9 + (uint)*(byte *)(param_1 + 4)) = cVar4;
            }
            if ((int)pbVar21 <= iVar15 + 1) break;
            iVar15 = iVar15 + 1;
            iVar12 = iVar12 + 4;
            iVar9 = iVar9 + 4;
            pbVar17 = *(byte **)(param_2 + 0xac);
          }
          local_48 = local_48 + 1;
          local_4c = local_4c + (int)pbVar21 * 4;
          if ((int)pbVar19 <= local_48) break;
          pbVar17 = *(byte **)(param_2 + 0xac);
        }
      }
      else {
        local_50 = 0;
        local_4c = 0;
        while( true ) {
          iVar15 = 0;
          iVar9 = local_50;
          iVar12 = local_50;
          while( true ) {
            uVar24 = (uint)*(byte *)((int)(pbVar11 + local_4c) * (int)pbVar17 + iVar15 +
                                    (int)param_3 + (int)pbVar22);
            if (pcVar18[uVar24] == '\0') {
              *(undefined *)(*(int *)(param_2 + 0xa8) + iVar12 + (uint)*(byte *)(param_1 + 1)) = 0;
              *(undefined *)(*(int *)(param_2 + 0xa8) + iVar12 + (uint)*(byte *)(param_1 + 2)) = 0;
              *(undefined *)(*(int *)(param_2 + 0xa8) + iVar12 + (uint)*(byte *)(param_1 + 3)) = 0;
              *(undefined *)(*(int *)(param_2 + 0xa8) + iVar12 + (uint)*(byte *)(param_1 + 4)) = 0;
            }
            else {
              *(char *)(*(int *)(param_2 + 0xa8) + iVar9 + (uint)*(byte *)(param_1 + 1)) =
                   pcVar18[uVar24] << 4;
              *(char *)(*(int *)(param_2 + 0xa8) + iVar9 + (uint)*(byte *)(param_1 + 2)) =
                   (char)((uint)*(undefined4 *)(default_palette_arry + uVar24 * 4) >> 0x10);
              *(char *)(*(int *)(param_2 + 0xa8) + iVar9 + (uint)*(byte *)(param_1 + 3)) =
                   (char)((uint)*(undefined4 *)(default_palette_arry + uVar24 * 4) >> 8);
              *(char *)(*(int *)(param_2 + 0xa8) + iVar9 + (uint)*(byte *)(param_1 + 4)) =
                   (char)*(undefined4 *)(default_palette_arry + uVar24 * 4);
            }
            if ((int)pbVar21 <= iVar15 + 1) break;
            iVar15 = iVar15 + 1;
            iVar12 = iVar12 + 4;
            iVar9 = iVar9 + 4;
            pbVar17 = *(byte **)(param_2 + 0xac);
          }
          local_4c = local_4c + 1;
          local_50 = local_50 + (int)pbVar21 * 4;
          if ((int)pbVar19 <= local_4c) break;
          pbVar17 = *(byte **)(param_2 + 0xac);
        }
      }
      *(byte **)(param_2 + 0xac) = pbVar21;
      cVar5 = '\0';
      *(undefined4 *)(param_2 + 0xa0) = 0;
      *(byte **)(param_2 + 0xb0) = pbVar19;
      goto LAB_0001df1c;
    }
  }
  cVar5 = -1;
LAB_0001df1c:
  return (int)cVar5;
}



void * run_len_decode_process
                 (int param_1,int param_2,void *param_3,int param_4,ushort param_5,uint param_6,
                 byte param_7,int param_8,byte param_9,undefined4 *param_10)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  size_t __n;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint __c;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  
  cVar3 = *(char *)(param_2 + 0x12);
  uVar8 = (uint)param_9;
  iVar7 = uVar8 + 4;
  iVar5 = param_2 + iVar7 * 2;
  __c = (uint)param_7;
  uVar1 = *(ushort *)(iVar5 + 2);
  uVar2 = (uint)uVar1;
  if (cVar3 == '\x01') {
    if (uVar2 - *(ushort *)(iVar5 + 6) == (uint)param_5) {
      return (void *)0x0;
    }
  }
  else {
    if (cVar3 == '\0') {
      if (uVar2 == *(int *)(param_1 + 0xb0) / 2 - 1U) {
        return (void *)0x0;
      }
      if (__c == 0 || *(char *)(param_8 + __c) == '\0') {
        uVar6 = param_6;
        if (param_6 == 0) {
LAB_0001e1d4:
          *(byte *)(param_2 + 0x14) = param_7;
          param_6 = uVar6;
        }
        else {
          uVar9 = (uint)*(ushort *)(param_2 + 8);
          uVar6 = param_6 + uVar9;
          if (*(uint *)(param_1 + 0xac) <= uVar6) {
            do {
              *param_10 = 0;
              uVar2 = uVar2 + 1 & 0xffff;
              iVar5 = uVar9 - *(uint *)(param_1 + 0xac);
              uVar9 = 0;
              uVar6 = param_6 + iVar5;
              if (uVar6 == 0) {
                cVar3 = *(char *)(param_2 + 0x12);
                *(undefined2 *)(param_2 + 8) = 0;
                *(short *)(param_2 + iVar7 * 2 + 2) = (short)uVar2;
                goto LAB_0001e1d4;
              }
              param_6 = uVar6;
            } while (*(uint *)(param_1 + 0xac) <= uVar6);
            cVar3 = *(char *)(param_2 + 0x12);
            *(short *)(param_2 + iVar7 * 2 + 2) = (short)uVar2;
          }
          *(short *)(param_2 + 8) = (short)uVar6;
          *(byte *)(param_2 + 0x14) = param_7;
        }
      }
      else {
        if (uVar8 == 1) {
          uVar2 = *(ushort *)(param_2 + 0xe) - 1;
          if ((int)(uint)*(ushort *)(param_2 + 0xc) < (int)uVar2) {
            *(ushort *)(iVar5 + 2) = uVar1 + 1;
            return param_3;
          }
          if (*(ushort *)(param_2 + 0xc) == uVar2) {
            param_3 = (void *)((int)param_3 + *(int *)(param_1 + 0xac) * -2);
            *(void **)(param_2 + 0x18) = (void *)((int)param_3 - *(int *)(param_1 + 0xac));
          }
        }
        __n = (size_t)*(ushort *)(param_2 + 8);
        *(undefined *)(param_2 + 0x12) = 1;
        *(undefined *)(param_2 + 0x13) = 1;
        iVar5 = *(int *)(param_1 + 0xac);
        *(ushort *)(param_2 + iVar7 * 2 + 6) = uVar1;
        if (iVar5 <= (int)__n) {
          __n = __n - iVar5 & 0xffff;
          *(short *)(param_2 + 8) = (short)__n;
        }
        iVar5 = (int)param_3 + (__n - param_4);
        if (0x80000 < iVar5) {
          uVar10 = 0x104;
          goto LAB_0001e3d0;
        }
        memset(param_3,(uint)*(byte *)(param_2 + 0x14),__n);
        cVar3 = *(char *)(param_2 + 0x12);
        param_3 = (void *)((int)param_3 + (uint)*(ushort *)(param_2 + 8));
        *(byte *)(param_2 + 0x14) = param_7;
      }
    }
    if (cVar3 != '\x01') {
      return param_3;
    }
  }
  uVar9 = (uint)*(ushort *)(param_2 + 8);
  uVar6 = *(uint *)(param_1 + 0xac);
  uVar2 = param_6 + uVar9;
  if (uVar6 << 1 <= uVar2) {
    return (void *)0x0;
  }
  if (param_6 == 0) {
    return param_3;
  }
  iVar7 = param_2 + iVar7 * 2;
  while( true ) {
    if (uVar2 < uVar6) {
      uVar2 = (int)(void *)((int)param_3 - param_4) + param_6;
      if (0x80000 < uVar2) {
        __android_log_print(5,"subInternalDecDvdSub","<%s:%u>: buffer overflow, %d, %d",
                            "run_len_decode_process",0x11b,0x80000,uVar2);
        return (void *)0x0;
      }
      memset(param_3,__c,param_6);
      *(short *)(param_2 + 8) = (short)param_6 + *(short *)(param_2 + 8);
      return (void *)((int)param_3 + param_6);
    }
    *param_10 = 0;
    iVar5 = (int)(void *)((int)param_3 - param_4) + (*(int *)(param_1 + 0xac) - uVar9);
    if (0x80000 < iVar5) break;
    memset(param_3,__c,*(int *)(param_1 + 0xac) - uVar9);
    iVar5 = *(int *)(param_1 + 0xb0);
    uVar9 = 0;
    uVar1 = *(ushort *)(param_2 + 8);
    uVar6 = *(uint *)(param_1 + 0xac);
    uVar4 = *(ushort *)(iVar7 + 2) + 1 & 0xffff;
    *(undefined2 *)(param_2 + 8) = 0;
    *(short *)(iVar7 + 2) = (short)uVar4;
    if (iVar5 / 2 <= (int)uVar4) {
      return (void *)0x0;
    }
    uVar2 = param_6 + (uVar1 - uVar6);
    param_3 = (void *)((uVar8 + (uVar4 - *(ushort *)(iVar7 + 6)) * 2) * uVar6 +
                      *(int *)(param_2 + 0x18));
    param_6 = uVar2;
    if (uVar2 == 0) {
      return param_3;
    }
  }
  uVar10 = 0x129;
LAB_0001e3d0:
  __android_log_print(5,"subInternalDecDvdSub","<%s:%u>: buffer overflow, %d, %d",
                      "run_len_decode_process",uVar10,0x80000,iVar5);
  return (void *)0x0;
}



uint get_next_bits(uint param_1,byte *param_2,int *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0;
  *param_3 = 0;
  if (param_1 != 0) {
    uVar2 = *param_5;
    uVar3 = param_1 - uVar2;
    if (uVar2 < param_1) {
      do {
        param_1 = uVar3 & 0xff;
        uVar1 = uVar1 | *param_4 << (uVar3 & 0xff);
        *param_4 = (uint)*param_2;
        *param_5 = 8;
        *param_3 = *param_3 + 1;
        if (param_1 == 0) {
          return uVar1;
        }
        uVar2 = *param_5;
        uVar3 = param_1 - uVar2;
        param_2 = param_2 + 1;
      } while (uVar2 < param_1);
    }
    uVar2 = uVar2 - param_1;
    *param_5 = uVar2;
    uVar3 = *param_4;
    *param_4 = uVar3 & ~(-1 << (uVar2 & 0xff));
    param_1 = uVar1 | uVar3 >> (uVar2 & 0xff);
  }
  return param_1;
}



int run_length_decode(int param_1,int param_2,int param_3,ushort *param_4,int param_5,byte param_6)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  int iVar10;
  byte bVar11;
  uint local_34;
  uint local_30;
  int local_2c [2];
  
  iVar6 = *(int *)(param_1 + 0x34);
  uVar8 = (uint)param_6;
  pvVar9 = (void *)0x0;
  *(undefined *)(param_4 + 9) = 0;
  *(undefined *)((int)param_4 + 0x13) = 0;
  *(undefined *)(param_4 + 10) = 0;
  iVar7 = *(int *)(param_2 + 0xac);
  param_4[4] = 0;
  (param_4 + uVar8 + 4)[1] = 0;
  iVar10 = iVar7 * 2;
  (param_4 + uVar8 + 4)[3] = 0;
  local_2c[0] = 0;
  sVar2 = __aeabi_idiv(0x100000,iVar10);
  if (uVar8 == 0) {
    pbVar5 = (byte *)(param_3 + (uint)*param_4);
    pvVar9 = (void *)(param_5 + iVar7);
    *(void **)(param_4 + 0xc) = pvVar9;
  }
  else {
    if (uVar8 == 1) {
      pbVar5 = (byte *)(param_3 + (uint)param_4[1]);
      pvVar9 = (void *)(param_5 + iVar10);
    }
    else {
      pbVar5 = (byte *)0x0;
    }
  }
  local_34 = 0;
  local_30 = 0;
  do {
    if (*(int *)(param_2 + 0xb0) / 2 <= (int)(uint)param_4[uVar8 + 5]) break;
    uVar3 = get_next_bits(4,pbVar5,local_2c,&local_34,&local_30);
    pbVar5 = pbVar5 + local_2c[0];
    if (uVar3 < 4) {
      uVar4 = get_next_bits(4,pbVar5,local_2c,&local_34,&local_30);
      pbVar5 = pbVar5 + local_2c[0];
      uVar3 = uVar4 | uVar3 << 4;
      if (0xf < uVar3) goto LAB_0001e598;
      uVar4 = get_next_bits(4,pbVar5,local_2c,&local_34,&local_30);
      pbVar5 = pbVar5 + local_2c[0];
      uVar3 = uVar4 | uVar3 << 4;
      if (0x3f < uVar3) goto LAB_0001e598;
      uVar4 = get_next_bits(4,pbVar5,local_2c,&local_34,&local_30);
      pbVar5 = pbVar5 + local_2c[0];
      uVar3 = uVar4 | uVar3 << 4;
      if (uVar3 != 0) goto LAB_0001e598;
LAB_0001e5a4:
      bVar11 = (byte)uVar3;
      uVar4 = *(int *)(param_2 + 0xac) - (uint)param_4[4];
    }
    else {
LAB_0001e598:
      uVar4 = uVar3 >> 2;
      uVar3 = uVar3 & 3;
      bVar11 = (byte)uVar3;
      if (uVar4 == 0) goto LAB_0001e5a4;
    }
    pvVar9 = run_len_decode_process
                       (param_2,(int)param_4,pvVar9,param_5,sVar2 - 2,uVar4,bVar11,iVar6,param_6,
                        &local_30);
  } while (pvVar9 != (void *)0x0);
  if (*(char *)((int)param_4 + 0x13) == '\0') {
    cVar1 = -1;
  }
  else {
    if (uVar8 == 1) {
      cVar1 = '\0';
      uVar8 = (uint)param_4[7];
      if ((uint)param_4[8] < (uint)param_4[7]) {
        uVar8 = (uint)param_4[8];
      }
      if ((uint)param_4[6] < (uint)param_4[5]) {
        iVar10 = param_4[5] - uVar8;
      }
      else {
        iVar10 = param_4[6] - uVar8;
      }
      *(int *)(param_2 + 0xb0) = iVar10 << 1;
    }
    else {
      cVar1 = '\0';
    }
  }
  return (int)cVar1;
}



int process_sp_dcsqt(int param_1,int param_2,int param_3,undefined2 *param_4)

{
  char *pcVar1;
  undefined uVar2;
  undefined uVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  bool bVar20;
  uint local_44;
  uint local_38;
  
  iVar13 = param_3 + (uint)(ushort)param_4[3];
  pcVar10 = (char *)(iVar13 + 4);
  uVar2 = *(undefined *)(param_3 + (uint)(ushort)param_4[3]);
  pcVar7 = (char *)(param_3 + (uint)(ushort)param_4[2]);
  uVar3 = *(undefined *)(iVar13 + 1);
  piVar9 = *(int **)(param_1 + 0x34);
  if (pcVar7 < pcVar10) {
    local_38 = 0;
  }
  else {
    local_44 = (uint)CONCAT11(*(undefined *)(iVar13 + 2),*(undefined *)(iVar13 + 3));
    bVar5 = false;
    local_38 = 0;
    do {
      while (cVar6 = *pcVar10, cVar6 != '\x03') {
        if (cVar6 == '\x04') {
          if ((pcVar10[1] == 0) && (pcVar10[2] == '\0')) {
            pcVar10 = pcVar10 + 2;
          }
          else {
            *(byte *)((int)piVar9 + 3) = (byte)pcVar10[1] >> 4;
            *(byte *)((int)piVar9 + 2) = pcVar10[1] & 0xf;
            *(byte *)((int)piVar9 + 1) = (byte)pcVar10[2] >> 4;
            pbVar11 = (byte *)(pcVar10 + 2);
            pcVar10 = pcVar10 + 2;
            *(byte *)piVar9 = *pbVar11 & 0xf;
          }
        }
        else {
          if (cVar6 == '\x05') {
            uVar17 = (uint)(byte)pcVar10[3] | ((byte)pcVar10[2] & 0xf) << 8;
            uVar16 = (uint)(byte)pcVar10[6] | ((byte)pcVar10[5] & 0xf) << 8;
            uVar12 = (uint)((byte)pcVar10[2] >> 4) | ((byte)pcVar10[1] & 0x3f) << 4;
            uVar18 = (uint)((byte)pcVar10[5] >> 4) | ((byte)pcVar10[4] & 0x3f) << 4;
            bVar20 = uVar12 <= uVar17;
            bVar19 = uVar17 == uVar12;
            if (bVar20 && !bVar19) {
              bVar20 = uVar18 <= uVar16;
              bVar19 = uVar16 == uVar18;
            }
            piVar9[3] = uVar17;
            piVar9[4] = uVar16;
            *(uint *)(param_2 + 0x18) = uVar17 + 1;
            *(uint *)(param_2 + 0x1c) = uVar16 + 1;
            if (!bVar20 || bVar19) goto LAB_0001ea9c;
            *(uint *)(param_2 + 0xac) = (uVar17 - uVar12) + 1;
            pcVar10 = pcVar10 + 6;
            *(uint *)(param_2 + 0xb0) = (uVar16 - uVar18) + 1;
          }
          else {
            if (cVar6 == '\x06') {
              *param_4 = CONCAT11(pcVar10[1],pcVar10[2]);
              pcVar1 = pcVar10 + 3;
              pcVar10 = pcVar10 + 4;
              param_4[1] = CONCAT11(*pcVar1,*pcVar10);
            }
            else {
              if (cVar6 == -1) {
                if (bVar5) {
                  pcVar10 = pcVar10 + 1;
                  goto LAB_0001e814;
                }
                iVar13 = param_3 + local_44;
                if (pcVar7 < (char *)(iVar13 + 4)) {
                  __android_log_print(3,"subInternalDecDvdSub",
                                                                            
                                      "<%s:%u>: ***Warning: dvdSub data error, the spaddr overflow! fstSqsa= %d "
                                      ,"process_sp_dcsqt",0x226,local_44);
                  goto LAB_0001e85c;
                }
                pcVar10 = (char *)(iVar13 + 3);
                local_38 = (uint)CONCAT11(*(undefined *)(param_3 + local_44),
                                          *(undefined *)(iVar13 + 1));
                uVar12 = (uint)CONCAT11(*(undefined *)(iVar13 + 2),*pcVar10);
                bVar19 = uVar12 == local_44;
                local_44 = uVar12;
                if (bVar19) {
                  bVar5 = true;
                }
              }
            }
          }
        }
        pcVar10 = pcVar10 + 1;
        if (pcVar7 < pcVar10) goto LAB_0001e814;
      }
      *(byte *)((int)piVar9 + 7) = (byte)pcVar10[1] >> 4;
      *(byte *)((int)piVar9 + 6) = pcVar10[1] & 0xf;
      *(byte *)((int)piVar9 + 5) = (byte)pcVar10[2] >> 4;
      pbVar11 = (byte *)(pcVar10 + 2);
      pcVar10 = pcVar10 + 3;
      *(byte *)(piVar9 + 1) = *pbVar11 & 0xf;
    } while (pcVar10 <= pcVar7);
  }
LAB_0001e814:
  if ((*piVar9 == 0) || (pcVar7 + 1 <= pcVar10)) {
LAB_0001ea9c:
    cVar6 = -1;
    goto LAB_0001e85c;
  }
  uVar12 = (uint)CONCAT11(uVar2,uVar3);
  if (uVar12 < local_38) {
    local_38 = local_38 - uVar12;
    iVar13 = (int)local_38 >> 0x1f;
    *(uint *)(param_1 + 0x28) = local_38;
    *(int *)(param_1 + 0x2c) = iVar13;
    if (*(byte *)(piVar9 + 2) == 0) {
      iVar13 = __aeabi_ldivmod(local_38 * 0x400,iVar13 << 10 | local_38 >> 0x16,0xbbb,0);
    }
    else {
      if (*(byte *)(piVar9 + 2) != 1) {
        uVar14 = 0;
        uVar15 = 0;
        goto LAB_0001e850;
      }
      iVar13 = __aeabi_ldivmod(local_38 * 0x40,iVar13 << 6 | local_38 >> 0x1a,0xe1,0);
    }
    iVar8 = __aeabi_uidiv(1000000,*(undefined4 *)(param_1 + 0x14));
    uVar12 = iVar8 * (iVar13 + 1U & 0xffff);
    uVar14 = *(undefined4 *)(*(int *)(param_1 + 0xd0) + 0x18);
    uVar15 = *(undefined4 *)(*(int *)(param_1 + 0xd0) + 0x1c);
    *(uint *)(param_1 + 0x28) = uVar12;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    iVar13 = __aeabi_ldivmod(uVar14,uVar15,1000,0);
    if (iVar13 - 100U < uVar12) {
      lVar4 = (ulonglong)(iVar13 - 100U) * 1000;
      uVar14 = (undefined4)lVar4;
      uVar15 = (undefined4)((ulonglong)lVar4 >> 0x20);
    }
    else {
      uVar14 = (undefined4)((ulonglong)uVar12 * 1000);
      uVar15 = (undefined4)((ulonglong)uVar12 * 1000 >> 0x20);
    }
  }
  else {
    uVar15 = 0;
    uVar14 = 2000000;
  }
LAB_0001e850:
  cVar6 = '\0';
  *(undefined4 *)(param_1 + 0x28) = uVar14;
  *(undefined4 *)(param_1 + 0x2c) = uVar15;
LAB_0001e85c:
  return (int)cVar6;
}



int sub_internal_dvdsub_dec(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;
  ushort auStack52 [2];
  ushort local_30;
  ushort local_2e;
  
  puVar7 = *(undefined4 **)(param_1 + 0xd0);
  uVar5 = puVar7[1];
  uVar3 = puVar7[3];
  puVar4 = (undefined *)*puVar7;
  *(undefined4 *)(param_1 + 0x20) = puVar7[2];
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  if (3 < (int)uVar5) {
    local_2e = CONCAT11(puVar4[2],puVar4[3]);
    local_30 = CONCAT11(*puVar4,puVar4[1]);
    if ((uint)local_30 < local_2e + 4) {
      __android_log_print(5,"subInternalDecDvdSub",
                          "<%s:%u>: ***data error when call sub_internal_dvdsub_dec()!",
                          "sub_internal_dvdsub_dec",0x282);
      cVar1 = -1;
      goto LAB_0001eb28;
    }
    if (local_30 <= uVar5) {
      iVar6 = (uint)*(byte *)(*(int *)(param_1 + 0x3c) + 0x450) * 0xb8 + *(int *)(param_1 + 0x3c);
      iVar2 = process_sp_dcsqt(param_1,iVar6,(int)puVar4,auStack52);
      if (-1 < iVar2) {
        memset(*(void **)(param_1 + 0x38),0,0x80000);
        iVar2 = run_length_decode(param_1,iVar6,(int)puVar4,auStack52,*(int *)(param_1 + 0x38),0);
        if ((-1 < iVar2) &&
           (iVar2 = run_length_decode(param_1,iVar6,(int)puVar4,auStack52,*(int *)(param_1 + 0x38),1
                                     ), -1 < iVar2)) {
          iVar2 = convert_data_to_bmp(param_1,iVar6,*(byte **)(param_1 + 0x38),
                                      (byte *)(param_1 + 0x48),*(char *)(param_1 + 0x44));
          bVar8 = -1 < iVar2;
          if (bVar8) {
            iVar2 = 1;
          }
          cVar1 = (char)iVar2;
          if (!bVar8) {
            cVar1 = -1;
          }
          goto LAB_0001eb28;
        }
      }
      cVar1 = -1;
      goto LAB_0001eb28;
    }
  }
  cVar1 = '\x03';
LAB_0001eb28:
  return (int)cVar1;
}



undefined4 subDivxConvertIndexToBmp(int param_1,uint *param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  int local_34;
  
  uVar7 = param_2[1];
  pcVar1 = *(char **)(param_1 + 0x38);
  uVar15 = *param_2;
  iVar5 = *(int *)(param_3 + 0xa8);
  if (uVar7 != 0) {
    uVar2 = 0;
    uVar14 = 0;
    uVar12 = 0;
    uVar10 = uVar7;
    uVar11 = uVar15;
    pcVar13 = pcVar1;
    do {
      if (1 < uVar15 - 1) {
        uVar8 = 1;
        pcVar6 = pcVar13;
        do {
          pcVar6 = pcVar6 + 1;
          if (*pcVar6 != '\0') {
            if (uVar8 <= uVar11) {
              uVar11 = uVar8;
            }
            if (uVar12 < uVar8) {
              uVar12 = uVar8;
            }
            if (uVar2 <= uVar10) {
              uVar10 = uVar2;
            }
            if (uVar14 < uVar2) {
              uVar14 = uVar2;
            }
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar15 - 1);
      }
      uVar2 = uVar2 + 1;
      pcVar13 = pcVar13 + uVar15;
    } while (uVar2 != uVar7);
    if (uVar10 < uVar14 && uVar11 < uVar12) {
      uVar15 = (uVar14 + 1) - uVar10;
      uVar7 = (uVar12 + 1) - uVar11;
      if (0x100000 < uVar15 * uVar7 * 4) {
        uVar7 = __aeabi_uidiv(0x100000,uVar15 * 4);
        __android_log_print(5,"subInternalDecDivx",
                                                        
                            "<%s:%u>: warning: the sub buffer is too smalle, we decrease the sub picture"
                            ,"subDivxConvertIndexToBmp",0x4d);
      }
      uVar12 = uVar15;
      if (10 < uVar15) {
        uVar12 = uVar7;
      }
      if (10 < uVar12) {
        uVar12 = 0;
        if (uVar7 == 0) {
          local_34 = 4;
        }
        else {
          local_34 = uVar7 << 2;
        }
        do {
          uVar14 = 0;
          iVar9 = iVar5;
          do {
            iVar3 = *param_2 * (uVar12 + uVar10) + uVar14;
            uVar14 = uVar14 + 1;
            puVar4 = param_2 + (uint)(byte)pcVar1[iVar3 + uVar11] * 4;
            *(char *)(iVar9 + (uint)*(byte *)(param_1 + 1)) = (char)puVar4[7];
            *(char *)(iVar9 + (uint)*(byte *)(param_1 + 2)) = (char)puVar4[8];
            *(char *)(iVar9 + (uint)*(byte *)(param_1 + 3)) = (char)puVar4[9];
            *(char *)(iVar9 + (uint)*(byte *)(param_1 + 4)) = (char)puVar4[10];
            iVar9 = iVar9 + 4;
          } while (uVar14 < uVar7);
          uVar12 = uVar12 + 1;
          iVar5 = iVar5 + local_34;
        } while (uVar12 < uVar15);
        *(uint *)(param_3 + 0xac) = uVar7;
        *(uint *)(param_3 + 0xb0) = uVar15;
        return 0;
      }
    }
  }
  return 0xffffffff;
}



ushort * subDivxParsePicInf(uint *param_1,ushort *param_2,int param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  uint *puVar4;
  
  puVar3 = param_2 + 7;
  puVar2 = param_2 + 0xd;
  *param_1 = (uint)*param_2;
  param_1[1] = (uint)param_2[1];
  param_1[4] = (uint)param_2[2];
  param_1[2] = (uint)param_2[3];
  param_1[5] = (uint)param_2[4];
  param_1[3] = (uint)param_2[5];
  param_1[6] = (uint)param_2[6];
  puVar4 = param_1;
  do {
    puVar4[8] = (uint)*(byte *)puVar3;
    puVar4[9] = (uint)*(byte *)((int)puVar3 + 1);
    puVar1 = puVar3 + 1;
    puVar3 = (ushort *)((int)puVar3 + 3);
    puVar4[10] = (uint)*(byte *)puVar1;
    puVar4 = puVar4 + 4;
  } while (puVar2 != puVar3);
  if (param_3 == 1) {
    puVar2 = param_2 + 0xf;
    param_1[7] = (uint)*(byte *)(param_2 + 0xd);
    param_1[0xb] = (uint)*(byte *)((int)param_2 + 0x1b);
    param_1[0xf] = (uint)*(byte *)(param_2 + 0xe);
    param_1[0x13] = (uint)*(byte *)((int)param_2 + 0x1d);
  }
  else {
    if (param_3 == 0) {
      param_1[7] = 0;
      param_1[0xb] = 0xff;
      param_1[0xf] = 0xff;
      param_1[0x13] = 0xff;
    }
    else {
      __android_log_print(6,"subInternalDecDivx",&DAT_00023dd0,"subDivxParsePicInf",0x9c);
      puVar2 = (ushort *)0x0;
    }
  }
  return puVar2;
}



uint subDivxRunLengthDecode(uint param_1,uint param_2,uint param_3,int param_4,void *param_5)

{
  uint uVar1;
  uint uVar2;
  uint __c;
  uint uVar3;
  void *pvVar4;
  void *__s;
  uint uVar5;
  uint uVar6;
  uint auStack56 [5];
  
  subInitGetBits(auStack56,param_3,param_4 << 3);
  if (param_2 != 0) {
    uVar6 = 0;
    pvVar4 = param_5;
    do {
      if (param_2 + 1 >> 1 == uVar6) {
        pvVar4 = (void *)((int)param_5 + param_1);
      }
      if (param_1 != 0) {
        uVar5 = 0;
        __s = pvVar4;
        do {
          uVar1 = subShowBits((int *)auStack56,8);
          uVar2 = subGetBits((int *)auStack56,
                             ((int)(uint)(byte)RunIndexTabArry[uVar1] >> 1) * -4 + 0xe);
          __c = subGetBits((int *)auStack56,2);
          uVar3 = param_1 - uVar5;
          uVar1 = uVar3;
          if (uVar2 <= uVar3) {
            uVar1 = uVar2;
          }
          if (uVar1 == 0) {
            uVar1 = uVar3;
          }
          uVar5 = uVar5 + uVar1;
          pvVar4 = (void *)((int)__s + uVar1);
          if (0x80000 < (int)__s + (uVar1 - (int)param_5)) {
            __android_log_print(6,"subInternalDecDivx",&DAT_00023e0c,"subDivxRunLengthDecode",0xd1,
                                0x80000);
            return 0xffffffff;
          }
          memset(__s,__c,uVar1);
          __s = pvVar4;
        } while (uVar5 < param_1);
      }
      uVar6 = uVar6 + 1;
      subAlignGetBits((int)auStack56);
      pvVar4 = (void *)((int)pvVar4 + param_1);
    } while (uVar6 != param_2);
    param_2 = 0;
  }
  return param_2;
}



int subInternalDivxDecode(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort *puVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  uint uVar9;
  uint *puVar10;
  ushort *puVar11;
  uint uVar12;
  int iVar13;
  ushort *puVar14;
  int iVar15;
  ushort **ppuVar16;
  uint uVar17;
  
  puVar10 = *(uint **)(param_1 + 0x34);
  ppuVar16 = *(ushort ***)(param_1 + 0xd0);
  iVar13 = *(int *)(param_1 + 0x3c);
  if ((puVar10 == (uint *)0x0 || ppuVar16 == (ushort **)0x0) || (iVar13 == 0)) {
    __android_log_print(6,"subInternalDecDivx",&DAT_00023e5c,"subInternalDivxDecode",0xf1);
    cVar2 = -1;
  }
  else {
    puVar14 = ppuVar16[1];
    puVar8 = ppuVar16[3];
    puVar3 = ppuVar16[6];
    puVar5 = ppuVar16[7];
    bVar1 = *(byte *)(iVar13 + 0x450);
    puVar11 = *ppuVar16;
    *(ushort **)(param_1 + 0x20) = ppuVar16[2];
    *(ushort **)(param_1 + 0x24) = puVar8;
    *(ushort **)(param_1 + 0x28) = puVar3;
    *(ushort **)(param_1 + 0x2c) = puVar5;
    if (puVar14 < (ushort *)0x1a) {
      __android_log_print(6,"subInternalDecDivx",&DAT_00023eb4,"subInternalDivxDecode",0x106,puVar14
                         );
      cVar2 = -1;
    }
    else {
      puVar3 = subDivxParsePicInf(puVar10,puVar11,(uint)*(byte *)(param_1 + 0xf8));
      iVar15 = (int)((int)puVar11 - (int)puVar3) + (int)puVar14;
      if (puVar3 == (ushort *)0x0 || iVar15 == 0) {
        __android_log_print(6,"subInternalDecDivx",&DAT_00023efc,"subInternalDivxDecode",0x111,
                            puVar3,iVar15);
        cVar2 = -1;
      }
      else {
        uVar4 = subDivxRunLengthDecode
                          (*puVar10,puVar10[1],(uint)puVar3,iVar15,*(void **)(param_1 + 0x38));
        if (uVar4 == 0) {
          iVar13 = (uint)bVar1 * 0xb8 + iVar13;
          subDivxConvertIndexToBmp(param_1,puVar10,iVar13);
          uVar4 = puVar10[4];
          uVar7 = *puVar10;
          cVar2 = '\x01';
          uVar9 = puVar10[1];
          uVar12 = puVar10[2];
          uVar17 = puVar10[5];
          uVar6 = puVar10[3];
          *(undefined4 *)(iVar13 + 0xb4) = 0;
          *(uint *)(iVar13 + 0x18) = uVar4 + uVar7 + uVar17;
          *(uint *)(iVar13 + 0x1c) = uVar12 + uVar9 + uVar6;
        }
        else {
          __android_log_print(5,"subInternalDecDivx",
                              "<%s:%u>: warning: call subDivxRunLengthDecode() failed!",
                              "subInternalDivxDecode",0x119);
          cVar2 = -1;
        }
      }
    }
  }
  return (int)cVar2;
}



uint getNext32Bits(byte *param_1)

{
  return (uint)param_1[1] << 0x10 | (uint)*param_1 << 0x18 | (uint)param_1[3] |
         (uint)param_1[2] << 8;
}



undefined2 getNext16Bits(undefined *param_1)

{
  return CONCAT11(*param_1,param_1[1]);
}



undefined4 ittxt_get_dispPos(char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = param_1[1];
  if (cVar1 == '\0') {
    cVar1 = *param_1;
    if (cVar1 == '\0') {
      return 0x11;
    }
    if (cVar1 != '\x01') {
      if (cVar1 == -1) {
        uVar2 = 0x13;
      }
      else {
        uVar2 = 0;
      }
      return uVar2;
    }
    return 0x12;
  }
  if (cVar1 != '\x01') {
    if (cVar1 != -1) {
      return 0;
    }
    cVar1 = *param_1;
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        return 0x32;
      }
      if (cVar1 == -1) {
        uVar2 = 0x33;
      }
      else {
        uVar2 = 0;
      }
      return uVar2;
    }
    return 0x31;
  }
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    return 0x21;
  }
  if (cVar1 != '\x01') {
    if (cVar1 == -1) {
      uVar2 = 0x23;
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0x22;
}



undefined4 ittxt_get_disp_control_inf(int param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  
  puVar12 = (uint *)malloc(100);
  *(uint **)(param_1 + 0x34) = puVar12;
  if (puVar12 != (uint *)0x0) {
    *(undefined *)(puVar12 + 0x18) = 1;
    if (0x1d >= param_3) {
      *(bool *)(puVar12 + 0x18) = 0x1d < param_3;
    }
    *puVar12 = (uint)param_2[1] << 0x10 | (uint)*param_2 << 0x18 | (uint)param_2[3] |
               (uint)param_2[2] << 8;
    uVar13 = ittxt_get_dispPos((char *)(param_2 + 4));
    bVar1 = param_2[6];
    bVar2 = param_2[9];
    bVar3 = param_2[0x18];
    bVar4 = param_2[8];
    bVar5 = param_2[7];
    bVar15 = (bVar3 & 1) != 0;
    bVar6 = param_2[0xc];
    bVar7 = param_2[0xe];
    bVar8 = param_2[0x10];
    bVar9 = param_2[0x11];
    bVar10 = param_2[0xd];
    bVar11 = param_2[0xf];
    *(ushort *)(puVar12 + 3) = CONCAT11(param_2[10],param_2[0xb]);
    puVar12[0x15] = 0;
    uVar14 = (uint)bVar15;
    if (bVar15) {
      puVar12[0x15] = uVar14;
    }
    bVar15 = (bVar3 & 2) != 0;
    puVar12[2] = (uint)bVar1 << 0x10 | (uint)bVar2 << 0x18 | (uint)bVar4 | (uint)bVar5 << 8;
    if (bVar15) {
      uVar14 = puVar12[0x15];
    }
    *(ushort *)((int)puVar12 + 0xe) = CONCAT11(bVar6,bVar10);
    if (bVar15) {
      uVar14 = uVar14 | 2;
    }
    *(ushort *)(puVar12 + 4) = CONCAT11(bVar7,bVar11);
    if (bVar15) {
      puVar12[0x15] = uVar14;
    }
    *(ushort *)((int)puVar12 + 0x12) = CONCAT11(bVar8,bVar9);
    if ((bVar3 & 4) != 0) {
      puVar12[0x15] = puVar12[0x15] | 4;
    }
    puVar12[1] = uVar13;
    bVar1 = param_2[0x1a];
    bVar2 = param_2[0x1d];
    bVar3 = param_2[0x19];
    bVar4 = param_2[0x1c];
    bVar5 = param_2[0x1b];
    *(byte *)(puVar12 + 0x16) = bVar3;
    if (bVar3 == 0) {
      *(undefined *)(puVar12 + 0x18) = 0;
    }
    puVar12[0x17] = (uint)bVar1 << 0x10 | (uint)bVar2 << 0x18 | (uint)bVar4 | (uint)bVar5 << 8;
  }
  return 0;
}



void ittxt_sub_convert_control_data(byte *param_1,int param_2,byte *param_3)

{
  byte bVar1;
  bool bVar2;
  void *pvVar3;
  void *pvVar4;
  byte *__dest;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  byte local_42c [1024];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  memset(local_42c,0,0x400);
  pbVar5 = *(byte **)(param_2 + 0x9c);
  __dest = local_42c;
  pbVar6 = pbVar5;
  if (param_3 == (byte *)0x0) {
LAB_0001f690:
    bVar8 = local_2c != __stack_chk_guard;
    *(byte **)(param_2 + 0xa0) = pbVar6 + -(int)pbVar5;
    if (bVar8) {
                    // WARNING: Subroutine does not return
      __stack_chk_fail();
    }
    return;
  }
  do {
    pvVar3 = memchr(param_1,0x3c,(size_t)param_3);
    pvVar4 = memchr(param_1,0x3e,(size_t)param_3);
    pbVar5 = __dest;
    if ((pvVar4 == (void *)0x0 || pvVar3 == (void *)0x0) || (pvVar4 <= pvVar3)) break;
    pvVar3 = (void *)((int)pvVar3 - (int)param_1);
    if ((byte *)0x400 < __dest + -(int)local_42c + (int)pvVar3) {
      __android_log_print(6,"subInternalDecIttxt",&DAT_00024100,"ittxt_sub_convert_control_data",
                          0xa9,__dest + -(int)local_42c + (int)pvVar3);
                    // WARNING: Subroutine does not return
      abort();
    }
    pbVar5 = __dest + (int)pvVar3;
    memcpy(__dest,param_1,(size_t)pvVar3);
    param_3 = param_3 + (int)(param_1 + -(int)pvVar4);
    param_1 = (byte *)((int)pvVar4 + 1);
    __dest = pbVar5;
  } while (param_3 != (byte *)0x0);
  if (pbVar5 != local_42c) {
    param_3 = pbVar5 + -(int)local_42c;
    param_1 = local_42c;
  }
  local_42c[(int)(pbVar5 + -(int)local_42c)] = 0;
joined_r0x0001f614:
  if (param_3 != (byte *)0x0) {
    do {
      bVar1 = *param_1;
      bVar8 = 0x3b < bVar1;
      bVar7 = bVar1 != 0x3c;
      if (bVar7) {
        bVar8 = 0x1e < bVar1;
      }
      bVar2 = bVar1 != 0x1f;
      if (bVar8 && (bVar7 && bVar2)) {
        param_1 = param_1 + 1;
      }
      if (bVar8 && (bVar7 && bVar2)) {
        *pbVar6 = bVar1;
        pbVar6 = pbVar6 + 1;
      }
      if (bVar8 && (bVar7 && bVar2)) {
        param_3 = param_3 + -1;
      }
      if (!bVar8 || (!bVar7 || !bVar2)) {
        if (bVar1 == 0xd) {
          *pbVar6 = 0xd;
          pbVar6[1] = 10;
          pbVar6 = pbVar6 + 2;
          if (param_1[1] == 10) goto code_r0x0001f674;
        }
        else {
          if (bVar1 == 10) {
            *pbVar6 = 0xd;
            param_1 = param_1 + 1;
            pbVar6[1] = 10;
            param_3 = param_3 + -1;
            pbVar6 = pbVar6 + 2;
            goto LAB_0001f634;
          }
        }
        param_1 = param_1 + 1;
        param_3 = param_3 + -1;
      }
LAB_0001f634:
      if (param_3 == (byte *)0x0) break;
    } while( true );
  }
  pbVar5 = *(byte **)(param_2 + 0x9c);
  goto LAB_0001f690;
code_r0x0001f674:
  param_1 = param_1 + 2;
  param_3 = param_3 + -2;
  goto joined_r0x0001f614;
}



int sub_internal_ittxt_dec(int param_1)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte **ppbVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  
  ppbVar5 = *(byte ***)(param_1 + 0xd0);
  pbVar9 = ppbVar5[1];
  if (pbVar9 == (byte *)0x2) {
    cVar1 = -1;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x34);
    if (iVar6 == 0) {
      __android_log_print(3,"subInternalDecIttxt",
                          "<%s:%u>: decode ittxt error: the ittxtSubInf is NULL!",
                          "sub_internal_ittxt_dec",0x102);
      cVar1 = -1;
    }
    else {
      iVar4 = (uint)*(byte *)(*(int *)(param_1 + 0x3c) + 0x450) * 0xb8 + *(int *)(param_1 + 0x3c);
      memset(*(void **)(iVar4 + 0x9c),0,0x100);
      pbVar2 = *ppbVar5;
      *(undefined4 *)(iVar4 + 0xa0) = 0;
      ittxt_sub_convert_control_data(pbVar2,iVar4,pbVar9);
      *(undefined *)(*(int *)(iVar4 + 0x9c) + *(int *)(iVar4 + 0xa0)) = 0;
      uVar3 = (uint)*(byte *)(iVar6 + 0x60);
      pbVar9 = ppbVar5[6];
      pbVar2 = ppbVar5[7];
      bVar10 = uVar3 != 1;
      if (bVar10) {
        *(undefined4 *)(iVar4 + 0x50) = 0;
        *(undefined4 *)(iVar4 + 0x40) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 0x50) = *(undefined4 *)(iVar6 + 0x5c);
        uVar3 = (uint)*(byte *)(iVar6 + 0x58);
      }
      pbVar7 = ppbVar5[2];
      pbVar8 = ppbVar5[3];
      *(undefined4 *)(iVar4 + 0x20) = 0x32;
      if (!bVar10) {
        *(uint *)(iVar4 + 0x40) = uVar3;
      }
      cVar1 = '\x01';
      *(undefined4 *)(iVar4 + 0x98) = 1;
      *(byte **)(param_1 + 0x20) = pbVar7;
      *(byte **)(param_1 + 0x24) = pbVar8;
      *(byte **)(param_1 + 0x28) = pbVar9;
      *(byte **)(param_1 + 0x2c) = pbVar2;
    }
  }
  return (int)cVar1;
}



uint get_ssa_sub_info(int param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  void *__s;
  uint uVar6;
  byte *__haystack;
  uint uVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  char **local_67c;
  char *local_678;
  undefined4 local_65c;
  int local_658;
  undefined4 local_654;
  undefined4 local_650;
  undefined4 local_64c;
  undefined4 local_648;
  undefined4 local_644;
  undefined4 local_640;
  undefined4 local_63c;
  undefined4 local_638;
  undefined4 local_634;
  char *local_630;
  char *local_62c [256];
  undefined auStack556 [64];
  char acStack492 [64];
  char acStack428 [64];
  char acStack364 [64];
  char acStack300 [64];
  char acStack236 [64];
  char acStack172 [64];
  char acStack108 [64];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  uVar7 = 0;
  memset(local_62c,0,0x400);
  memset(auStack556,0,0x40);
  local_65c = 0;
  local_658 = 0;
  local_654 = 0;
  local_650 = 0;
  local_64c = 0;
  local_648 = 0;
  local_644 = 0;
  local_640 = 0;
  memset(acStack492,0,0x40);
  memset(acStack428,0,0x40);
  memset(acStack364,0,0x40);
  memset(acStack300,0,0x40);
  local_63c = 0;
  local_638 = 0;
  local_634 = 0;
  local_630 = (char *)0x0;
  memset(acStack236,0,0x40);
  memset(acStack172,0,0x40);
  memset(acStack108,0,0x40);
  __haystack = param_2;
  if (*param_2 < 0x21) {
    do {
      __haystack = __haystack + 1;
      uVar7 = uVar7 + 2 & 0xff;
      if (param_3 < uVar7) goto LAB_0001f960;
      param_2 = param_2 + 1;
    } while (*param_2 < 0x21);
  }
  else {
    uVar7 = 0;
  }
  if (param_3 == uVar7) {
    uVar7 = 0xffffffff;
  }
  else {
LAB_0001f960:
    pcVar2 = strstr((char *)__haystack,"PlayResX:");
    if ((pcVar2 != (char *)0x0) && (iVar3 = sscanf(pcVar2,"PlayResX: %d",&local_644), iVar3 == 0)) {
      sscanf(pcVar2,"PlayResX:%d",&local_644);
    }
    pcVar2 = strstr((char *)__haystack,"PlayResY:");
    if ((pcVar2 != (char *)0x0) && (iVar3 = sscanf(pcVar2,"PlayResY: %d",&local_640), iVar3 == 0)) {
      sscanf(pcVar2,"PlayResY:%d",&local_640);
    }
    pcVar2 = strstr((char *)__haystack,"[V4+ Styles]");
    if ((((pcVar2 == (char *)0x0) &&
         (pcVar2 = strstr((char *)__haystack,"[v4+ Styles]"), pcVar2 == (char *)0x0)) &&
        (pcVar2 = strstr((char *)__haystack,"[V4 Styles]"), pcVar2 == (char *)0x0)) &&
       (pcVar2 = strstr((char *)__haystack,"[v4 Styles]"), pcVar2 == (char *)0x0)) {
      __android_log_print(6,"subInternalDecIssa",&DAT_00024270,"get_ssa_sub_info",0x83);
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = 0;
      while (pcVar4 = strstr(pcVar2,"Style:"), pcVar4 != (char *)0x0) {
        pcVar2 = pcVar4 + 1;
        local_62c[uVar7] = pcVar4;
        uVar7 = uVar7 + 1 & 0xff;
      }
      if (uVar7 != 0) {
        puVar5 = (undefined4 *)malloc(0x10);
        local_67c = &local_630;
        *(undefined4 **)(param_1 + 0x34) = puVar5;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        __s = malloc(uVar7 * 0xb8);
        puVar5[3] = __s;
        memset(__s,0,uVar7 * 0xb8);
        *(char *)((int)puVar5 + 1) = (char)uVar7;
        puVar5[1] = local_644;
        puVar5[2] = local_640;
        sub_set_playResx_playResy((int)puVar5);
        local_678 = pcVar4;
        do {
          pcVar2 = pcVar4 + puVar5[3];
          memset(pcVar2,0,0xb8);
          local_67c = local_67c + 1;
          pcVar8 = *local_67c;
          piVar9 = &local_658;
          puVar10 = &local_654;
          puVar11 = &local_650;
          puVar12 = &local_64c;
          puVar13 = &local_648;
          iVar3 = sscanf(pcVar8,
                         "Style:%64[^,],%64[^,],%d,%64[^,],%64[^,],%64[^,],%64[^,],%4[^,],%4[^,],%4[^,],%4[^,],%64[^,],%64[^,],%64[^,],%64[^,],%64[^,],%64[^,],%64[^,],%d,%d,%d,%d,%d"
                         ,pcVar2,pcVar2 + 0x40,&local_65c,acStack492,acStack428,acStack364,
                         acStack300,&local_63c,&local_638,&local_634,&local_630,acStack236,
                         acStack172,auStack556,acStack108,auStack556,auStack556,auStack556,piVar9,
                         puVar10,puVar11,puVar12,puVar13);
          if (iVar3 != 0x17) {
            local_678 = (char *)sscanf(pcVar8,
                                       "Style:%64[^,],%64[^,],%d,%64[^,],%64[^,],%64[^,],%64[^,],%4[^,],%4[^,],%64[^,],%64[^,],%64[^,],%d,%d,%d,%d,%64[^,],%d"
                                       ,pcVar2,pcVar2 + 0x40,&local_65c,acStack492,acStack428,
                                       acStack364,acStack300,&local_63c,&local_638,auStack556,
                                       auStack556,auStack556,&local_658,&local_654,&local_650,
                                       &local_64c,auStack556,&local_648,piVar9,puVar10,puVar11,
                                       puVar12,puVar13);
          }
          pcVar8 = local_678 + -0x12;
          pcVar4 = pcVar4 + 0xb8;
          if (pcVar8 != (char *)0x0) {
            pcVar8 = (char *)0x1;
          }
          pcVar2[0x81] = (char)local_65c;
          *(char *)puVar5 = (char)pcVar8;
          *(undefined4 *)(pcVar2 + 0x8c) = local_650;
          *(undefined4 *)(pcVar2 + 0x90) = local_64c;
          *(undefined4 *)(pcVar2 + 0x94) = local_648;
          *(undefined4 *)(pcVar2 + 0x88) = local_654;
          iVar3 = atoi(acStack236);
          *(int *)(pcVar2 + 0xac) = iVar3;
          iVar3 = atoi(acStack172);
          *(int *)(pcVar2 + 0xb0) = iVar3;
          iVar3 = atoi(acStack108);
          *(int *)(pcVar2 + 0xb4) = iVar3;
          bVar1 = sub_ssa_ass_convert_style
                            ((char *)&local_63c,(char *)&local_638,(char *)&local_634,
                             (char *)&local_630);
          *(uint *)(pcVar2 + 0xa8) = (uint)bVar1;
          uVar6 = sub_ssa_ass_convert_colorValue(acStack492);
          *(uint *)(pcVar2 + 0x98) = uVar6;
          uVar6 = sub_ssa_ass_convert_colorValue(acStack428);
          *(uint *)(pcVar2 + 0x9c) = uVar6;
          uVar6 = sub_ssa_ass_convert_colorValue(acStack364);
          *(uint *)(pcVar2 + 0xa0) = uVar6;
          uVar6 = sub_ssa_ass_convert_colorValue(acStack300);
          *(uint *)(pcVar2 + 0xa4) = uVar6;
          sub_ssa_ass_process_styles_info((byte *)puVar5,pcVar2,local_658);
          if (*(int *)(param_1 + 8) != 0) {
            *(int *)(pcVar2 + 0x94) = *(int *)(param_1 + 8);
          }
        } while (pcVar4 != (char *)((uVar7 - 1 & 0xff) * 0xb8 + 0xb8));
        uVar7 = 0;
      }
    }
  }
  if (local_2c == __stack_chk_guard) {
    return uVar7;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



int sub_internal_issa_dec(int param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  char *pcVar4;
  undefined4 uVar5;
  void *__dest;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  uint uVar9;
  byte **ppbVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  uint local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined auStack108 [64];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  memset(auStack108,0,0x40);
  ppbVar10 = *(byte ***)(param_1 + 0xd0);
  iVar6 = *(int *)(param_1 + 0x3c);
  local_84 = 0;
  pbVar3 = *ppbVar10;
  pbVar13 = ppbVar10[1];
  local_74 = -1;
  local_70 = -1;
  pbVar8 = pbVar3 + (int)pbVar13;
  pbVar11 = ppbVar10[3];
  local_80 = 0;
  local_7c = 0;
  *(byte **)(param_1 + 0x20) = ppbVar10[2];
  *(byte **)(param_1 + 0x24) = pbVar11;
  pbVar11 = ppbVar10[7];
  local_78 = 0;
  *(byte **)(param_1 + 0x28) = ppbVar10[6];
  *(byte **)(param_1 + 0x2c) = pbVar11;
  if ((pbVar3 < pbVar8) && (pbVar11 = pbVar3, *pbVar3 < 0x21)) {
    do {
      pbVar3 = pbVar3 + 1;
      if (pbVar3 == pbVar8) goto LAB_0001fef4;
      pbVar11 = pbVar11 + 1;
    } while (*pbVar11 < 0x21);
LAB_0001ff1c:
    pcVar4 = strchr((char *)pbVar3,0x2c);
    if ((pcVar4 != (char *)0x0) && (pcVar4 = strchr(pcVar4 + 1,0x2c), pcVar4 != (char *)0x0)) {
      cVar2 = pcVar4[1];
      while (pcVar4 = pcVar4 + 1, cVar2 == ' ') {
        cVar2 = pcVar4[1];
      }
      pbVar3 = *(byte **)(param_1 + 0x34);
      if (cVar2 == '*') {
        pcVar4 = pcVar4 + 1;
      }
      if (pbVar3 == (byte *)0x0) {
        __android_log_print(3,"subInternalDecIssa",
                            "<%s:%u>: decode issa error: the ssaAssSubInf is NULL!",
                            "sub_internal_issa_dec",0x131);
        cVar2 = -1;
      }
      else {
        iVar6 = (uint)*(byte *)(iVar6 + 0x450) * 0xb8 + iVar6;
        memset(*(void **)(iVar6 + 0x9c),0,0x100);
        *(undefined4 *)(iVar6 + 0x98) = 1;
        pcVar4 = sub_ssa_ass_parse_style_info
                           ((int)pbVar3,iVar6,pcVar4,auStack108,&local_80,&local_7c,&local_78,
                            &local_84);
        pbVar8 = *ppbVar10;
        sub_ssa_ass_convert_control_tags(pcVar4,(int)(pbVar8 + -(int)pcVar4 + (int)pbVar13));
        iVar12 = local_84 * 0xb8 + *(int *)(pbVar3 + 0xc);
        uVar7 = *(undefined4 *)(iVar12 + 0x94);
        uVar9 = *(uint *)(iVar12 + 0xa8);
        uVar5 = *(undefined4 *)(iVar12 + 0x98);
        *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(iVar12 + 0x84);
        *(undefined4 *)(iVar6 + 0xa4) = uVar7;
        bVar1 = *(byte *)(iVar12 + 0x81);
        *(undefined4 *)(iVar6 + 0x50) = uVar5;
        *(uint *)(iVar6 + 0x40) = (uint)bVar1;
        if (uVar9 == 0) {
          *(undefined4 *)(iVar6 + 0x44) = 0xffffffff;
          *(undefined4 *)(iVar6 + 0x48) = 0xffffffff;
          *(undefined4 *)(iVar6 + 0x4c) = 0xffffffff;
        }
        else {
          *(uint *)(iVar6 + 0x48) = (uVar9 << 0x1e) >> 0x1f;
          *(uint *)(iVar6 + 0x44) = uVar9 & 1;
          if ((int)(uVar9 << 0x1d) < 0) {
            *(undefined4 *)(iVar6 + 0x4c) = 1;
          }
          else {
            *(undefined4 *)(iVar6 + 0x4c) = 0;
          }
        }
        __dest = (void *)(iVar6 + 0x58);
        switch(*(undefined *)(iVar12 + 0x80)) {
        case 0:
          memcpy(__dest,"epilog",7);
          break;
        case 1:
          memcpy(__dest,"verdana",8);
          break;
        case 2:
          memcpy(__dest,"georgia",8);
          break;
        case 3:
          memcpy(__dest,"arial",6);
          break;
        case 4:
          memcpy(__dest,"times new roman",0x10);
          break;
        case 0xff:
          memcpy(__dest,"unknown",8);
          break;
        default:
          memcpy(__dest,"unknown",8);
        }
        sub_post_process_ssa_ass
                  (pbVar3,iVar6,pcVar4,(char *)(pbVar8 + -(int)pcVar4 + (int)pbVar13),&local_74,
                   &local_70);
        sub_ssa_ass_get_disply_pos
                  (iVar6,(int)pbVar3,local_84 & 0xff,local_80,local_7c,local_78,local_74,local_70);
        cVar2 = '\x01';
      }
      goto LAB_0001fef8;
    }
  }
  else {
    if (pbVar3 != pbVar8) goto LAB_0001ff1c;
  }
LAB_0001fef4:
  cVar2 = -1;
LAB_0001fef8:
  if (local_2c == __stack_chk_guard) {
    return (int)cVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void SubIdxsubExit(void **param_1)

{
  void **__ptr;
  void **ppvVar1;
  void *pvVar2;
  
  if (param_1 == (void **)0x0) {
    return;
  }
  SubInternalExit(*param_1);
  if (-1 < (int)param_1[0x42]) {
    close((int)param_1[0x42]);
  }
  if (-1 < (int)param_1[0x3a]) {
    close((int)param_1[0x3a]);
  }
  if (param_1[6] != (void *)0x0) {
    pvVar2 = (void *)0x0;
    ppvVar1 = param_1 + 0x1a;
    do {
      __ptr = (void **)*ppvVar1;
      pvVar2 = (void *)((int)pvVar2 + 1);
      if ((__ptr != (void **)0x0) && (*__ptr != (void *)0x0)) {
        free(*__ptr);
        *(undefined4 *)*ppvVar1 = 0;
        __ptr = (void **)*ppvVar1;
      }
      free(__ptr);
      *ppvVar1 = (void *)0x0;
      ppvVar1 = ppvVar1 + 1;
    } while (pvVar2 < param_1[6]);
  }
  free(param_1);
  return;
}



uint SubIdxsubEmptySubItemNum(int *param_1)

{
  uint uVar1;
  
  if (param_1 != (int *)0x0) {
    uVar1 = SubInternalEmptySubItemNum(*param_1);
    return uVar1;
  }
  __android_log_print(6,"subIdxsub",&DAT_000244b4,"SubIdxsubEmptySubItemNum",0x2ef);
  return 0;
}



void SubIdxsubFlushSubItem(void **param_1,int *param_2)

{
  if (param_1 != (void **)0x0) {
    SubInternalFlushSubItem(*param_1,param_2);
    return;
  }
  __android_log_print(6,"subIdxsub",&DAT_000244b4,"SubIdxsubFlushSubItem",0x2e1);
  return;
}



uint SubIdxsubReqeustSubItem(int *param_1)

{
  uint uVar1;
  
  if (param_1 != (int *)0x0) {
    uVar1 = SubInternalReqeustSubItem(*param_1);
    return uVar1;
  }
  __android_log_print(6,"subIdxsub",&DAT_0002450c,"SubIdxsubReqeustSubItem",0x2d4);
  return 0;
}



uint SubIdxsubNextSubItemInfo(int *param_1)

{
  uint uVar1;
  
  if (param_1 != (int *)0x0) {
    uVar1 = SubInternalNextSubItemInfo(*param_1);
    return uVar1;
  }
  __android_log_print(6,"subIdxsub",&DAT_00024564,"SubIdxsubNextSubItemInfo",0x2c7);
  return 0;
}



void IdxsubRemoveStrimBlank(char *param_1)

{
  size_t sVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  bool bVar7;
  
  sVar1 = strlen(param_1);
  cVar2 = *param_1;
  if (cVar2 == '\r' || cVar2 == '\n') {
    iVar4 = 2;
    iVar6 = 1;
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    pcVar5 = param_1;
    do {
      bVar7 = cVar2 != ' ';
      if (bVar7) {
        param_1[iVar3] = cVar2;
      }
      pcVar5 = pcVar5 + 1;
      cVar2 = *pcVar5;
      if (bVar7) {
        iVar3 = iVar3 + 1;
      }
    } while (cVar2 != '\r' && cVar2 != '\n');
    iVar6 = iVar3 + 1;
    iVar4 = iVar3 + 2;
  }
  param_1[iVar3] = '\r';
  param_1[iVar6] = '\n';
  memset(param_1 + iVar4,0,(sVar1 - 1) - iVar3);
  return;
}



undefined4
IdxsubParseIdxFile(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
                  int param_7)

{
  undefined uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  undefined4 extraout_r1_05;
  undefined4 extraout_r1_06;
  int iVar8;
  void **ppvVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  char *pcVar15;
  undefined8 uVar16;
  undefined8 *local_4e8;
  void *local_4e4;
  uint local_4e0;
  void *local_4d0;
  int local_4c8;
  int local_4c4;
  int local_4c0;
  int local_4bc;
  undefined4 local_4b8;
  void *apvStack1204 [32];
  undefined4 local_434;
  undefined4 local_430;
  byte local_42c [1024];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  uVar11 = 0;
  uVar12 = 0;
  local_434 = 0;
  local_430 = 0;
  local_4c8 = 0;
  local_4c4 = 0;
  local_4c0 = 0;
  local_4bc = 0;
  local_4b8 = 0;
  memset(apvStack1204,0,0x80);
  do {
    pbVar2 = stream_read_line(param_2,param_7,param_3,param_4,param_5,param_6,local_42c,0x400,
                              param_7);
    uVar7 = extraout_r1;
    if (pbVar2 == (byte *)0x0) break;
    if (local_42c[0] != 0x23) {
      pcVar15 = (char *)IdxsubRemoveStrimBlank((char *)local_42c);
      uVar11 = sscanf(pcVar15,(char *)local_42c,"size:%dx%d",param_1 + 8,param_1 + 0xc);
      uVar7 = extraout_r1_00;
    }
    uVar12 = uVar12 + 1;
    bVar14 = uVar11 != 0;
    bVar13 = uVar11 == 1;
    if (uVar11 < 2) {
      bVar14 = 0x62 < uVar12;
      bVar13 = uVar12 == 99;
    }
  } while (!bVar14 || bVar13);
  if (uVar11 == 0) {
    lseek(param_2,*(__off_t *)(param_1 + 0x110),0);
    uVar7 = extraout_r1_06;
  }
  uVar12 = 0;
  do {
    pbVar2 = stream_read_line(param_2,uVar7,param_3,param_4,param_5,param_6,local_42c,0x400,param_7)
    ;
    if (pbVar2 == (byte *)0x0) break;
    uVar7 = extraout_r1_01;
    if (local_42c[0] != 0x23) {
      pcVar15 = (char *)IdxsubRemoveStrimBlank((char *)local_42c);
      uVar11 = sscanf(pcVar15,(char *)local_42c,
                      "palette:%x,%x,%x,%x,%x,%x,%x,%x,%x,%x,%x,%x,%x,%x,%x,%x",param_1 + 0x1c,
                      param_1 + 0x20,param_1 + 0x24,param_1 + 0x28,param_1 + 0x2c,param_1 + 0x30,
                      param_1 + 0x34,param_1 + 0x38,param_1 + 0x3c,param_1 + 0x40,param_1 + 0x44,
                      param_1 + 0x48,param_1 + 0x4c,param_1 + 0x50,param_1 + 0x54,param_1 + 0x58);
      uVar7 = extraout_r1_02;
    }
    uVar12 = uVar12 + 1;
    bVar14 = 0xe < uVar11;
    bVar13 = uVar11 == 0xf;
    if (uVar11 < 0x10) {
      bVar14 = 0x62 < uVar12;
      bVar13 = uVar12 == 99;
    }
  } while (!bVar14 || bVar13);
  if (uVar11 == 0) {
    lseek(param_2,*(__off_t *)(param_1 + 0x110),0);
  }
  else {
    *(undefined *)(param_1 + 5) = 1;
  }
  local_4e4 = (void *)0x0;
  local_4d0 = (void *)0x0;
  local_4e0 = 0;
  local_4e8 = (undefined8 *)0x0;
  uVar7 = 0;
  iVar3 = 0;
  do {
    do {
      do {
        iVar8 = iVar3;
        pbVar2 = stream_read_line(param_2,uVar7,param_3,param_4,param_5,param_6,local_42c,0x400,
                                  param_7);
        uVar1 = (undefined)local_4e0;
        if (pbVar2 == (byte *)0x0) {
          if (local_4e8 != (undefined8 *)0x0) {
            iVar3 = *(int *)(param_1 + 0x18);
            ppvVar9 = *(void ***)(param_1 + (local_4e0 + 0x1a) * 4);
            *(int *)((int)local_4e8 + 0x14) = *(int *)(local_4e8 + 2) + 0x2000;
            uVar16 = VectorAdd(*local_4e8,2000,8);
            pvVar5 = apvStack1204[local_4e0];
            local_4e8[1] = uVar16;
            *(int *)(param_1 + 0x18) = iVar3 + 1;
            *(undefined *)(ppvVar9 + 2) = uVar1;
            uVar7 = *(undefined4 *)(local_4e8 + 1);
            uVar10 = *(undefined4 *)((int)local_4e8 + 0xc);
            *ppvVar9 = pvVar5;
            ppvVar9[1] = local_4e4;
            *(undefined4 *)(param_1 + 0x10) = uVar7;
            *(undefined4 *)(param_1 + 0x14) = uVar10;
          }
LAB_00020a00:
          uVar7 = 0;
          *(uint *)(param_1 + 0x14c) = local_4e0 + 1;
LAB_00020a10:
          if (local_2c == __stack_chk_guard) {
            return uVar7;
          }
                    // WARNING: Subroutine does not return
          __stack_chk_fail();
        }
        if (local_42c[0] == 0) {
          if (local_4e8 != (undefined8 *)0x0) {
            iVar3 = *(int *)(param_1 + 0x18);
            ppvVar9 = *(void ***)(param_1 + (local_4e0 + 0x1a) * 4);
            *(int *)((int)local_4e8 + 0x14) = *(int *)(local_4e8 + 2) + 0x2000;
            uVar16 = VectorAdd(*local_4e8,2000,8);
            pvVar5 = apvStack1204[local_4e0];
            local_4e8[1] = uVar16;
            *(int *)(param_1 + 0x18) = iVar3 + 1;
            *(undefined *)(ppvVar9 + 2) = uVar1;
            uVar7 = *(undefined4 *)(local_4e8 + 1);
            uVar10 = *(undefined4 *)((int)local_4e8 + 0xc);
            *ppvVar9 = pvVar5;
            ppvVar9[1] = local_4e4;
            *(undefined4 *)(param_1 + 0x10) = uVar7;
            *(undefined4 *)(param_1 + 0x14) = uVar10;
          }
          goto LAB_00020a00;
        }
        uVar7 = extraout_r1_03;
        iVar3 = iVar8;
      } while (local_42c[0] == 0x23);
      pcVar15 = (char *)IdxsubRemoveStrimBlank((char *)local_42c);
      iVar3 = sscanf(pcVar15,(char *)local_42c,"id:%8[^,],index:",&local_434);
      uVar7 = extraout_r1_04;
    } while ((iVar3 == 1) ||
            (iVar4 = sscanf((char *)local_42c,"timestamp:%d:%d:%d:%d,filepos:%x",&local_4c8,
                            &local_4c4,&local_4c0,&local_4bc,&local_4b8), uVar7 = extraout_r1_05,
            iVar3 = iVar8, iVar4 != 5));
    if (local_4e4 == (void *)0x0) {
LAB_00020840:
      puVar6 = (undefined4 *)malloc(0x2c);
      *(undefined4 **)(param_1 + (local_4e0 + 0x1a) * 4) = puVar6;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[6] = 0;
        puVar6[7] = 0;
        puVar6[8] = 0;
        puVar6[9] = 0;
        puVar6[10] = 0;
        memcpy((void *)((int)puVar6 + 9),&local_434,2);
        pvVar5 = malloc(0x180);
        apvStack1204[local_4e0] = pvVar5;
        if (pvVar5 != (void *)0x0) {
          iVar3 = 0;
          local_4e4 = (void *)0x1;
          local_4d0 = (void *)0x10;
          iVar8 = local_4c8 * 3600000 + local_4c4 * 60000 + local_4c0 * 1000 + local_4bc;
          goto LAB_00020914;
        }
      }
      uVar7 = 0xffffffff;
      goto LAB_00020a10;
    }
    if (iVar8 == 1) {
      iVar3 = *(int *)(param_1 + 0x18);
      ppvVar9 = *(void ***)(param_1 + (local_4e0 + 0x1a) * 4);
      *(undefined4 *)((int)local_4e8 + 0x14) = local_4b8;
      uVar16 = VectorAdd(*local_4e8,2000,8);
      pvVar5 = apvStack1204[local_4e0];
      local_4e8[1] = uVar16;
      *(int *)(param_1 + 0x18) = iVar3 + 1;
      *(undefined *)(ppvVar9 + 2) = uVar1;
      *ppvVar9 = pvVar5;
      ppvVar9[1] = local_4e4;
      local_4e0 = local_4e0 + 1 & 0xff;
      goto LAB_00020840;
    }
    iVar8 = local_4c0 * 1000 + local_4c8 * 3600000 + local_4c4 * 60000 + local_4bc;
    *(undefined4 *)((int)local_4e8 + 0x14) = local_4b8;
    *(undefined4 *)((int)local_4e8 + 0xc) = 0;
    *(int *)(local_4e8 + 1) = iVar8;
    if (local_4e4 < local_4d0) {
      iVar3 = (int)local_4e4 * 0x18;
      pvVar5 = apvStack1204[local_4e0];
      local_4e4 = (void *)((int)local_4e4 + 1);
    }
    else {
      local_4d0 = (void *)((int)local_4d0 + 0x10);
      pvVar5 = realloc(apvStack1204[local_4e0],(int)local_4d0 * 0x18);
      iVar3 = (int)local_4e4 * 0x18;
      apvStack1204[local_4e0] = pvVar5;
      iVar8 = local_4c4 * 60000 + local_4c8 * 3600000 + local_4c0 * 1000 + local_4bc;
      local_4e4 = (void *)((int)local_4e4 + 1);
    }
LAB_00020914:
    local_4e8 = (undefined8 *)((int)pvVar5 + iVar3);
    *(int *)((int)pvVar5 + iVar3) = iVar8;
    *(undefined4 *)((int)local_4e8 + 4) = 0;
    *(undefined4 *)(local_4e8 + 2) = local_4b8;
    uVar7 = local_4b8;
    iVar3 = 0;
  } while( true );
}



void IdxsubSearchSub(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint **ppuVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  bool bVar10;
  
  ppuVar5 = *(uint ***)(param_1 + (*(byte *)(param_1 + 4) + 0x1a) * 4);
  puVar8 = *ppuVar5;
  uVar2 = puVar8[1];
  uVar4 = puVar8[3];
  if (((int)(uVar2 - (param_4 + (param_3 > *puVar8))) < 0 ==
       ((int)uVar2 < 0 == -1 < (int)param_4 &&
       (int)(uVar2 + ~param_4 + (uint)(param_3 <= *puVar8)) < 0 != (int)uVar2 < 0)) ||
     ((int)(param_4 - (uVar4 + (puVar8[2] > param_3))) < 0 !=
      ((int)param_4 < 0 == -1 < (int)uVar4 &&
      (int)(param_4 + ~uVar4 + (uint)(puVar8[2] <= param_3)) < 0 != (int)param_4 < 0))) {
    lseek(*(int *)(param_1 + 0xe8),*(int *)(param_1 + 0xf0) + puVar8[4],0);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    return;
  }
  puVar6 = ppuVar5[1];
  puVar3 = puVar8 + ((int)puVar6 + -1) * 6;
  uVar2 = puVar3[3];
  uVar4 = puVar3[1];
  puVar7 = (uint *)(uint)((int)(param_4 - (uVar2 + (puVar3[2] > param_3))) < 0 !=
                         ((int)param_4 < 0 == -1 < (int)uVar2 &&
                         (int)(param_4 + ~uVar2 + (uint)(puVar3[2] <= param_3)) < 0 !=
                         (int)param_4 < 0));
  if ((int)(param_4 - (uVar4 + (*puVar3 > param_3))) < 0 !=
      ((int)param_4 < 0 == -1 < (int)uVar4 &&
      (int)(param_4 + ~uVar4 + (uint)(*puVar3 <= param_3)) < 0 != (int)param_4 < 0)) {
    puVar7 = (uint *)0x0;
  }
  if (puVar7 != (uint *)0x0) {
    lseek(*(int *)(param_1 + 0xe8),*(int *)(param_1 + 0xf0) + puVar3[4],0);
    *(int *)(param_1 + 0x5c) = (int)puVar6 + -1;
    return;
  }
  puVar3 = (uint *)((uint)puVar6 >> 1);
  uVar2 = (puVar8 + ((uint)puVar6 & 0xfffffffe) * 2 + ((uint)puVar6 & 0xfffffffe))[1];
  bVar10 = param_3 <= puVar8[((uint)puVar6 & 0xfffffffe) * 2 + ((uint)puVar6 & 0xfffffffe)];
  if ((int)(uVar2 - (param_4 + !bVar10)) < 0 ==
      ((int)uVar2 < 0 == -1 < (int)param_4 &&
      (int)(uVar2 + ~param_4 + (uint)bVar10) < 0 != (int)uVar2 < 0)) {
    if (puVar3 == (uint *)0x0) {
      return;
    }
    uVar2 = puVar8[7];
    if ((int)(param_4 - (uVar2 + (puVar8[6] > param_3))) < 0 ==
        ((int)param_4 < 0 == -1 < (int)uVar2 &&
        (int)(param_4 + ~uVar2 + (uint)(puVar8[6] <= param_3)) < 0 != (int)param_4 < 0)) {
      puVar9 = (uint *)0x1;
      puVar6 = puVar8;
      do {
        puVar7 = puVar9;
        puVar8 = puVar6 + 6;
        if (puVar3 < (uint *)((int)puVar7 + 1)) {
          return;
        }
        puVar1 = puVar6 + 0xc;
        uVar2 = puVar6[0xd];
        uVar4 = puVar6[7];
        puVar9 = (uint *)((int)puVar7 + 1);
        puVar6 = puVar8;
      } while ((int)(param_4 - (uVar4 + (*puVar8 > param_3))) < 0 !=
               ((int)param_4 < 0 == -1 < (int)uVar4 &&
               (int)(param_4 + ~uVar4 + (uint)(*puVar8 <= param_3)) < 0 != (int)param_4 < 0) ||
               (int)(param_4 - (uVar2 + (*puVar1 > param_3))) < 0 ==
               ((int)param_4 < 0 == -1 < (int)uVar2 &&
               (int)(param_4 + ~uVar2 + (uint)(*puVar1 <= param_3)) < 0 != (int)param_4 < 0));
    }
    uVar2 = puVar8[4];
    *(uint **)(param_1 + 0x5c) = puVar7;
    lseek(*(int *)(param_1 + 0xe8),*(int *)(param_1 + 0xf0) + uVar2,0);
    return;
  }
  if (puVar6 <= puVar3) {
    return;
  }
  puVar8 = puVar8 + ((int)puVar3 + 1U) * 6;
  do {
    puVar9 = puVar8;
    puVar7 = puVar3;
    puVar3 = (uint *)((int)puVar7 + 1);
    if (puVar6 <= puVar3) {
      return;
    }
    uVar2 = puVar9[1];
    uVar4 = puVar9[-5];
    puVar8 = puVar9 + 6;
  } while ((int)(param_4 - (uVar4 + (puVar9[-6] > param_3))) < 0 !=
           ((int)param_4 < 0 == -1 < (int)uVar4 &&
           (int)(param_4 + ~uVar4 + (uint)(puVar9[-6] <= param_3)) < 0 != (int)param_4 < 0) ||
           (int)(param_4 - (uVar2 + (*puVar9 > param_3))) < 0 ==
           ((int)param_4 < 0 == -1 < (int)uVar2 &&
           (int)(param_4 + ~uVar2 + (uint)(*puVar9 <= param_3)) < 0 != (int)param_4 < 0));
  uVar2 = puVar9[-2];
  *(uint **)(param_1 + 0x5c) = puVar7;
  lseek(*(int *)(param_1 + 0xe8),*(int *)(param_1 + 0xf0) + uVar2,0);
  return;
}



void SubIdxsubReset(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 extraout_r1;
  uint uVar3;
  longlong lVar4;
  
  if (param_4 < 0) {
    __android_log_print(5,"subIdxsub","<%s:%u>: (nSeekTime < 0) when call SubIdxsubReset()",
                        "SubIdxsubReset",0x2af);
  }
  else {
    lVar4 = __aeabi_ldivmod(param_3,param_4,1000,0);
    uVar2 = (uint)((ulonglong)lVar4 >> 0x20);
    uVar1 = (uint)lVar4;
    uVar3 = param_1[5];
    if ((int)(uVar2 - (uVar3 + ((uint)param_1[4] > uVar1))) < 0 !=
        (lVar4 < 0 == -1 < (int)uVar3 &&
        (int)(uVar2 + ~uVar3 + (uint)((uint)param_1[4] <= uVar1)) < 0 != lVar4 < 0)) {
      SubInternalReset(*param_1);
      param_1[0x19] = -1;
      param_1[0x18] = 0;
      IdxsubSearchSub((int)param_1,extraout_r1,uVar1,uVar2);
      return;
    }
    param_1[0x17] = *(int *)(param_1[*(byte *)(param_1 + 1) + 0x1a] + 4);
    __android_log_print(5,"subIdxsub",
                                                
                        "<%s:%u>: (nSeekTime >= (OMX_S32)idxsubInf->subTimeLen) when call SubIdxsubReset()"
                        ,"SubIdxsubReset",0x2b6);
  }
  return;
}



undefined4 IdxsubReadData(int param_1)

{
  longlong lVar1;
  undefined uVar2;
  undefined uVar3;
  undefined4 uVar4;
  ssize_t sVar5;
  int iVar6;
  int *piVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  size_t sVar11;
  void *pvVar12;
  void *__buf;
  void *pvVar13;
  ulonglong uVar14;
  int iStack124;
  undefined auStack108 [18];
  undefined local_5a;
  undefined local_59;
  byte local_56;
  int local_2c;
  
  local_2c = __stack_chk_guard;
  iVar9 = *(int *)(param_1 + 0x5c);
  piVar7 = *(int **)(param_1 + (*(byte *)(param_1 + 4) + 0x1a) * 4);
  iVar6 = piVar7[1];
  if (iVar9 != *(int *)(param_1 + 100)) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (iVar9 == iVar6) {
    uVar4 = 0xffffffff;
  }
  else {
    puVar8 = (undefined8 *)(*piVar7 + iVar9 * 0x18);
    if (iVar9 == iVar6 + -1) {
      iVar6 = 0x1000;
    }
    else {
      iVar9 = *(int *)(param_1 + 0x60);
      if (iVar9 == 0) {
        iVar6 = *(int *)((int)puVar8 + 0x14);
        iVar9 = *(int *)(puVar8 + 2);
      }
      else {
        iVar6 = *(int *)((int)puVar8 + 0x14);
      }
      iVar6 = iVar6 - iVar9;
    }
    if (*(int *)(param_1 + 0x148) < iVar6) {
      __android_log_print(6,"subIdxsub",&DAT_000246c0,"IdxsubReadData",0x160,iVar6,
                          *(int *)(param_1 + 0x148));
      uVar4 = 0xffffffff;
    }
    else {
      if (iVar6 < 0) {
        __android_log_print(6,"subIdxsub",&DAT_00024718,"IdxsubReadData",0x165,iVar6);
        uVar4 = 0xffffffff;
      }
      else {
        pvVar12 = *(void **)(param_1 + 0x128);
        iVar9 = 0;
        pvVar13 = (void *)0x0;
        __buf = pvVar12;
        do {
          sVar5 = read(*(int *)(param_1 + 0xe8),auStack108,0x18);
          uVar3 = local_59;
          uVar2 = local_5a;
          if (sVar5 == 0) break;
          uVar10 = (uint)local_56;
          iVar9 = iVar9 + sVar5;
          if (uVar10 != 0) {
            sVar5 = read(*(int *)(param_1 + 0xe8),auStack108,uVar10);
            if (sVar5 == 0) break;
            iVar9 = iVar9 + sVar5;
          }
          sVar11 = (CONCAT11(uVar2,uVar3) - 4) - uVar10;
          if (0 < (int)sVar11) {
            if (*(int *)(param_1 + 0x148) < (int)((int)pvVar13 + sVar11)) {
              __android_log_print(6,"subIdxsub",&DAT_00024764,"IdxsubReadData",0x189,
                                  (int)pvVar13 + sVar11,*(int *)(param_1 + 0x148));
              uVar4 = 0xffffffff;
              goto LAB_00020fac;
            }
            sVar5 = read(*(int *)(param_1 + 0xe8),__buf,sVar11);
            if (sVar5 == 0) break;
            __buf = (void *)((int)__buf + sVar5);
            iVar9 = iVar9 + sVar5;
            pvVar13 = (void *)((int)__buf - (int)pvVar12);
          }
          sVar11 = (0x7e8 - sVar11) - uVar10;
          if (0 < (int)sVar11) {
            if (*(int *)(param_1 + 0x148) < (int)(sVar11 + (int)pvVar13)) {
              __android_log_print(6,"subIdxsub",&DAT_00024764,"IdxsubReadData",0x19c,
                                  sVar11 + (int)pvVar13,*(int *)(param_1 + 0x148));
              uVar4 = 0xffffffff;
              goto LAB_00020fac;
            }
            sVar5 = read(*(int *)(param_1 + 0xe8),__buf,sVar11);
            iVar9 = iVar9 + sVar5;
          }
        } while (iVar9 != iVar6);
        uVar4 = 0;
        uVar10 = *(uint *)puVar8;
        iVar6 = *(int *)((int)puVar8 + 4);
        uVar14 = VectorSub(puVar8[1],*puVar8,8);
        *(int *)(param_1 + 100) = *(int *)(param_1 + 0x5c);
        lVar1 = (uVar14 & 0xffffffff) * 1000;
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
        iStack124 = (int)(uVar14 >> 0x20);
        *(void **)(param_1 + 300) = pvVar13;
        *(int *)(param_1 + 0x130) = (int)((ulonglong)uVar10 * 1000);
        *(int *)(param_1 + 0x134) = iVar6 * 1000 + (int)((ulonglong)uVar10 * 1000 >> 0x20);
        *(int *)(param_1 + 0x140) = (int)lVar1;
        *(int *)(param_1 + 0x144) = iStack124 * 1000 + (int)((ulonglong)lVar1 >> 0x20);
      }
    }
  }
LAB_00020fac:
  if (local_2c == __stack_chk_guard) {
    return uVar4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void SubIdxsubDecode(int *param_1)

{
  int iVar1;
  
  iVar1 = sub_internal_check_valid_buf(*param_1);
  if (iVar1 == 4) {
    return;
  }
  iVar1 = IdxsubReadData((int)param_1);
  if (iVar1 < 0) {
    return;
  }
  SubInternalDecode(*param_1,(void **)(param_1 + 0x4a));
  return;
}



void SubIdxsubOpenFilePath(int param_1,char *param_2)

{
  size_t __size;
  char *__dest;
  char *__s;
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  __size = strlen(param_2);
  __dest = (char *)malloc(__size);
  __s = (char *)malloc(__size);
  if (__s == (char *)0x0 || __dest == (char *)0x0) {
    __android_log_print(6,"subIdxsub",&DAT_000247c8,"SubIdxsubOpenFilePath",0x1c0);
  }
  else {
    pcVar1 = strrchr(param_2,0x2e);
    if (pcVar1 == (char *)0x0) {
      __android_log_print(6,"subIdxsub",&DAT_0002480c,"SubIdxsubOpenFilePath",0x1cd);
    }
    else {
      strncpy(__dest,param_2,(size_t)(pcVar1 + -(int)param_2));
      __dest[(int)(pcVar1 + -(int)param_2)] = '\0';
      sprintf(__s,"%s%s",__dest,&DAT_00024804);
      iVar2 = open(__s,0,0);
      if (iVar2 < 0) {
        __android_log_print(6,"subIdxsub",&DAT_00024838,"SubIdxsubOpenFilePath",0x1d6);
      }
      else {
        sprintf(__s,"%s%s",__dest,&DAT_00024860);
        iVar3 = open(__s,0,0);
        if (-1 < iVar3) {
          *(undefined4 *)(param_1 + 0x110) = 0;
          *(undefined4 *)(param_1 + 0x114) = 0;
          *(int *)(param_1 + 0xe8) = iVar3;
          *(undefined4 *)(param_1 + 0xf0) = 0;
          *(undefined4 *)(param_1 + 0xf4) = 0;
          *(int *)(param_1 + 0x108) = iVar2;
          free(__dest);
          free(__s);
          return;
        }
        __android_log_print(6,"subIdxsub",&DAT_00024868,"SubIdxsubOpenFilePath",0x1df);
      }
    }
  }
  if (__dest != (char *)0x0) {
    free(__dest);
  }
  if (__s != (char *)0x0) {
    free(__s);
  }
  return;
}



void ** SubIdxsubInit(int param_1)

{
  void **__s;
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined *puVar4;
  char *pcVar5;
  uint uVar6;
  void *pvVar7;
  void *pvVar8;
  uint uVar9;
  
  __s = (void **)malloc(0x150);
  if (__s != (void **)0x0) {
    memset(__s,0,0x150);
    pcVar5 = *(char **)(param_1 + 0x48);
    __s[0x42] = (void *)0xffffffff;
    __s[0x3a] = (void *)0xffffffff;
    if (pcVar5 == (char *)0x0) {
      if ((*(int *)(param_1 + 0x4c) == -1) || (*(int *)(param_1 + 0x58) == -1)) goto LAB_00021548;
      pvVar2 = (void *)dup(*(int *)(param_1 + 0x58));
      pvVar8 = *(void **)(param_1 + 0x50);
      pvVar7 = *(void **)(param_1 + 0x54);
      __s[0x3c] = pvVar8;
      __s[0x3d] = (void *)((int)pvVar8 >> 0x1f);
      __s[0x40] = pvVar7;
      __s[0x41] = (void *)((int)pvVar7 >> 0x1f);
      __s[0x3a] = pvVar2;
      pvVar2 = (void *)dup(*(int *)(param_1 + 0x4c));
      __s[0x44] = (void *)0x0;
      __s[0x45] = (void *)0x0;
      __s[0x42] = pvVar2;
      lseek((int)__s[0x3a],(__off_t)__s[0x3c],0);
      lseek((int)__s[0x42],(__off_t)__s[0x44],0);
    }
    else {
      iVar1 = SubIdxsubOpenFilePath((int)__s,pcVar5);
      if (iVar1 < 0) {
        __android_log_print(6,"subIdxsub",&DAT_00024890,"SubIdxsubInit",0x222);
        goto LAB_00021548;
      }
    }
    pvVar2 = malloc(0x8000);
    __s[0x4a] = pvVar2;
    if (pvVar2 == (void *)0x0) {
      __android_log_print(6,"subIdxsub",&DAT_000248c8,"SubIdxsubInit",0x22a);
      return (void **)0x0;
    }
    memset(pvVar2,0,0x8000);
    __s[0x52] = (void *)0x8000;
    iVar1 = open_stream((int)__s[0x42]);
    if (-1 < iVar1) {
      uVar6 = 0;
      iVar3 = IdxsubParseIdxFile((int)__s,iVar1,(int)__s[0x44],__s[0x45],(int)__s[0x48],
                                 (int)__s[0x49],0);
      uVar9 = *(uint *)(param_1 + 0x5c);
      if ((int)uVar9 < (int)__s[0x53]) {
        uVar6 = uVar9 & 0xff;
        *(char *)(__s + 1) = (char)uVar6;
      }
      else {
        __android_log_print(6,"subIdxsub",&DAT_00024914,"SubIdxsubInit",0x243,uVar9,__s[0x53]);
        *(undefined *)(__s + 1) = 0;
      }
                    // WARNING: Load size is inaccurate
      lseek((int)__s[0x3a],(int)__s[0x3c] + *(int *)(*__s[uVar6 + 0x1a] + 0x10),0);
      if (*(char *)((int)__s + 5) == '\x01') {
        *(undefined4 *)(param_1 + 0x74) = 1;
        *(undefined4 *)(param_1 + 0x78) = 0x10;
        memcpy((void *)(param_1 + 0x7c),__s + 7,0x40);
      }
      free_stream(iVar1);
      if (-1 < iVar3) {
        puVar4 = SubInternalInit(param_1);
        *__s = puVar4;
        if (puVar4 != (undefined *)0x0) {
          return __s;
        }
      }
    }
  }
LAB_00021548:
  SubIdxsubExit(__s);
  return (void **)0x0;
}



undefined4 write_u_short_int(uint param_1,FILE *param_2)

{
  fputc(param_1 & 0xff,param_2);
  fputc(param_1 >> 8,param_2);
  return 2;
}



undefined4 write_u_long_int(uint param_1,FILE *param_2)

{
  write_u_short_int(param_1 & 0xffff,param_2);
  write_u_short_int(param_1 >> 0x10,param_2);
  return 4;
}



void bmp_write_header(FILE *param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2 & 3;
  if (uVar1 == 0) {
    fputc(0x42,param_1);
    fputc(0x4d,param_1);
    if (param_4 != 0) goto LAB_000217a0;
  }
  else {
    if (param_4 != 0) {
      fputc(0x42,param_1);
      uVar1 = 4 - (param_2 * 3 & 3);
      fputc(0x4d,param_1);
LAB_000217a0:
      uVar1 = param_3 * (param_2 * 3 + uVar1);
      write_u_long_int(uVar1 + 0x36,param_1);
      write_u_short_int(0,param_1);
      write_u_short_int(0,param_1);
      write_u_long_int(0x36,param_1);
      write_u_long_int(0x28,param_1);
      write_u_long_int(param_2,param_1);
      write_u_long_int(param_3,param_1);
      write_u_short_int(1,param_1);
      write_u_short_int(0x18,param_1);
      write_u_long_int(0,param_1);
      write_u_long_int(uVar1,param_1);
      write_u_long_int(0,param_1);
      write_u_long_int(0,param_1);
      write_u_long_int(0,param_1);
      write_u_long_int(0,param_1);
      return;
    }
    fputc(0x42,param_1);
    param_4 = 4 - uVar1;
    fputc(0x4d,param_1);
  }
  uVar1 = 0;
  uVar2 = param_3 * (param_2 + param_4);
  write_u_long_int(uVar2 + 0x436,param_1);
  write_u_short_int(0,param_1);
  write_u_short_int(0,param_1);
  write_u_long_int(0x436,param_1);
  write_u_long_int(0x28,param_1);
  write_u_long_int(param_2,param_1);
  write_u_long_int(param_3,param_1);
  write_u_short_int(1,param_1);
  write_u_short_int(8,param_1);
  write_u_long_int(0,param_1);
  write_u_long_int(uVar2,param_1);
  write_u_long_int(0,param_1);
  write_u_long_int(0,param_1);
  write_u_long_int(0x100,param_1);
  write_u_long_int(0,param_1);
  do {
    uVar2 = uVar1 << 0x10 | uVar1 << 8 | uVar1;
    uVar1 = uVar1 + 1;
    write_u_long_int(uVar2,param_1);
  } while (uVar1 != 0x100);
  return;
}



void bmp_write_data(FILE *param_1,uint param_2,int param_3,int param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = param_2 & 3;
  if (uVar2 != 0) {
    uVar2 = 4 - uVar2;
  }
  iVar5 = param_3 + -1;
  if (-1 < iVar5) {
    iVar4 = iVar5 * param_2 + param_4;
    do {
      if (0 < (int)param_2) {
        uVar3 = 0;
        do {
          pbVar1 = (byte *)(iVar4 + uVar3);
          uVar3 = uVar3 + 1;
          fputc((uint)*pbVar1,param_1);
        } while (uVar3 != param_2);
      }
      if (uVar2 != 0) {
        uVar3 = 0;
        do {
          uVar3 = uVar3 + 1;
          fputc(0,param_1);
        } while (uVar3 != uVar2);
      }
      iVar5 = iVar5 + -1;
      iVar4 = iVar4 - param_2;
    } while (iVar5 != -1);
    return;
  }
  return;
}



void bmp_write_data_color
               (FILE *param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = param_2 & 3;
  if (uVar4 != 0) {
    uVar4 = 4 - (param_2 * 3 & 3);
  }
  iVar5 = param_3 + -1;
  if (-1 < iVar5) {
    iVar3 = iVar5 * param_2 + param_6;
    do {
      if (0 < (int)param_2) {
        uVar2 = 0;
        do {
          fputc((uint)*(byte *)(iVar3 + uVar2),param_1);
          fputc((uint)*(byte *)((param_5 - param_6) + iVar3 + uVar2),param_1);
          pbVar1 = (byte *)((param_4 - param_6) + iVar3 + uVar2);
          uVar2 = uVar2 + 1;
          fputc((uint)*pbVar1,param_1);
        } while (uVar2 != param_2);
      }
      if (uVar4 != 0) {
        uVar2 = 0;
        do {
          uVar2 = uVar2 + 1;
          fputc(0,param_1);
        } while (uVar2 != uVar4);
      }
      iVar5 = iVar5 + -1;
      iVar3 = iVar3 - param_2;
    } while (iVar5 != -1);
  }
  return;
}



void writebmp(char *param_1,uint param_2,uint param_3,int param_4)

{
  FILE *__stream;
  
  __stream = fopen(param_1,"wb");
  if (__stream != (FILE *)0x0) {
    bmp_write_header(__stream,param_3,param_2,0);
    bmp_write_data(__stream,param_3,param_2,param_4);
    fclose(__stream);
    return;
  }
  puts("Can not open output bmp file!");
  return;
}



void writebmpcolor(char *param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6)

{
  FILE *__stream;
  
  __stream = fopen(param_1,"wb");
  if (__stream != (FILE *)0x0) {
    bmp_write_header(__stream,param_3,param_2,1);
    bmp_write_data_color(__stream,param_3,param_2,param_4,param_5,param_6);
    fclose(__stream);
    return;
  }
  puts("Can not open output bmp file!");
  return;
}



void YUV420toRGB(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
                )

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_cr0;
  undefined4 in_cr5;
  undefined4 in_cr11;
  uint uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int local_28;
  int local_24;
  
  iVar3 = param_5 * param_6;
  if (param_7 == 0) {
    iVar4 = iVar3 + 3;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    local_28 = iVar3 + (iVar4 >> 2);
  }
  else {
    if (param_7 == 1) {
      local_28 = iVar3 + iVar3 / 2;
    }
    else {
      if (param_7 == 2) {
        local_24 = param_5;
        local_28 = iVar3 * 2;
        goto LAB_00021b1c;
      }
      local_28 = 0;
    }
  }
  local_24 = param_5 / 2;
LAB_00021b1c:
  if (0 < param_6) {
    iVar6 = 0;
    iVar4 = param_1;
    do {
      iVar5 = iVar6;
      if (param_7 == 0) {
        iVar5 = iVar6 >> 1;
      }
      if (0 < param_5) {
        iVar7 = iVar3 + local_24 * iVar5;
        iVar5 = local_28 + local_24 * iVar5;
        if (param_7 == 2) {
          iVar1 = 0;
          do {
            dVar11 = (double)(longlong)(int)(*(byte *)(iVar4 + iVar1) - 0x10);
            coprocessor_function(0xb,6,5,in_cr11,in_cr11,in_cr5);
            dVar12 = (double)(longlong)(int)(*(byte *)(param_1 + iVar7 + iVar1) - 0x80);
            dVar10 = (double)(longlong)(int)(*(byte *)(param_1 + iVar5 + iVar1) - 0x80);
            uVar9 = SUB84(ROUND(dVar11 + dVar10 * 1.59602715 + 0.5),0);
            uVar8 = SUB84(ROUND(((dVar11 - dVar12 * 0.3917616) - dVar10 * 0.8129680500000001) + 0.5)
                          ,0);
            uVar9 = uVar9 & ~((int)uVar9 >> 0x1f);
            if (0xfe < (int)uVar9) {
              uVar9 = 0xff;
            }
            *(char *)(param_2 + iVar1) = (char)uVar9;
            uVar9 = SUB84(ROUND(dVar11 + dVar12 * 2.01723105 + 0.5),0);
            uVar8 = uVar8 & ~((int)uVar8 >> 0x1f);
            if (0xfe < (int)uVar8) {
              uVar8 = 0xff;
            }
            *(char *)(param_3 + iVar1) = (char)uVar8;
            uVar9 = uVar9 & ~((int)uVar9 >> 0x1f);
            if (0xfe < (int)uVar9) {
              uVar9 = 0xff;
            }
            *(char *)(param_4 + iVar1) = (char)uVar9;
            iVar1 = iVar1 + 1;
          } while (iVar1 != param_5);
        }
        else {
          iVar1 = 0;
          do {
            iVar2 = param_1 + (iVar1 >> 1);
            dVar11 = (double)(longlong)(int)(*(byte *)(iVar4 + iVar1) - 0x10);
            coprocessor_function(0xb,6,5,in_cr0,in_cr0,in_cr5);
            dVar10 = (double)(longlong)(int)(*(byte *)(iVar2 + iVar7) - 0x80);
            dVar12 = (double)(longlong)(int)(*(byte *)(iVar2 + iVar5) - 0x80);
            uVar9 = SUB84(ROUND(dVar11 + dVar12 * 1.59602715 + 0.5),0);
            uVar8 = SUB84(ROUND(((dVar11 - dVar10 * 0.3917616) - dVar12 * 0.8129680500000001) + 0.5)
                          ,0);
            uVar9 = uVar9 & ~((int)uVar9 >> 0x1f);
            if (0xfe < (int)uVar9) {
              uVar9 = 0xff;
            }
            *(char *)(param_2 + iVar1) = (char)uVar9;
            uVar9 = SUB84(ROUND(dVar11 + dVar10 * 2.01723105 + 0.5),0);
            uVar8 = uVar8 & ~((int)uVar8 >> 0x1f);
            if (0xfe < (int)uVar8) {
              uVar8 = 0xff;
            }
            *(char *)(param_3 + iVar1) = (char)uVar8;
            uVar9 = uVar9 & ~((int)uVar9 >> 0x1f);
            if (0xfe < (int)uVar9) {
              uVar9 = 0xff;
            }
            *(char *)(param_4 + iVar1) = (char)uVar9;
            iVar1 = iVar1 + 1;
          } while (iVar1 != param_5);
        }
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + param_5;
      param_2 = param_2 + param_5;
      param_3 = param_3 + param_5;
      param_4 = param_4 + param_5;
    } while (iVar6 != param_6);
  }
  return;
}



uint subGetBits(int *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = param_1[2];
  iVar5 = *param_1 + ((int)uVar6 >> 3);
  bVar1 = *(byte *)(*param_1 + ((int)uVar6 >> 3));
  bVar2 = *(byte *)(iVar5 + 1);
  bVar3 = *(byte *)(iVar5 + 3);
  bVar4 = *(byte *)(iVar5 + 2);
  param_1[2] = uVar6 + param_2;
  return (((uint)bVar3 | (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar4 << 8) <<
         (uVar6 & 7)) >> (0x20U - param_2 & 0xff);
}



void subInitGetBits(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = (int)(param_3 + 7) >> 3;
  bVar2 = -1 < (int)(uVar1 | param_3);
  if (bVar2) {
    uVar1 = param_2 + uVar1;
  }
  else {
    uVar1 = 0;
  }
  param_1[1] = uVar1;
  if (!bVar2) {
    param_2 = uVar1;
    param_3 = uVar1;
  }
  param_1[3] = param_3;
  *param_1 = param_2;
  param_1[2] = 0;
  return;
}



undefined4 subGetBitsCount(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



uint subShowBits(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[2] >> 3;
  iVar2 = *param_1 + iVar1;
  return (((uint)*(byte *)(iVar2 + 3) | (uint)*(byte *)(*param_1 + iVar1) << 0x18 |
           (uint)*(byte *)(iVar2 + 1) << 0x10 | (uint)*(byte *)(iVar2 + 2) << 8) <<
         (param_1[2] & 7U)) >> (0x20U - param_2 & 0xff);
}



void subSkipBits(int param_1,int param_2)

{
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_2;
  return;
}



void subAlignGetBits(int param_1)

{
  uint uVar1;
  
  uVar1 = -*(int *)(param_1 + 8) & 7;
  if (uVar1 != 0) {
    *(uint *)(param_1 + 8) = uVar1 + *(int *)(param_1 + 8);
  }
  return;
}



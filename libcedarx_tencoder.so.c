#include "libcedarx_tencoder.so.h"



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



// WARNING: Unknown calling convention yet parameter storage is locked

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = time(__timer);
  return tVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

tm * localtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = localtime(__timer);
  return ptVar1;
}



void __sprintf_chk(void)

{
  __sprintf_chk();
  return;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
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



undefined4
ReleaseTextEncBuf(int *param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
                 int param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  pthread_mutex_t *__mutex;
  int iVar4;
  
  iVar3 = *param_1;
  __mutex = (pthread_mutex_t *)(iVar3 + 0x308);
  pthread_mutex_lock(__mutex);
  iVar2 = *(int *)(iVar3 + 0xe10);
  if (iVar2 == 0) {
    pthread_mutex_unlock(__mutex);
    __android_log_print(6,"TextEncApi","(f:%s, l:%d) fatal error! no valid fifo to release!",
                        "ReleaseTextEncBuf",0x1e6);
    uVar1 = 0xffffffff;
  }
  else {
    iVar4 = (((uint)(param_2 - (iVar3 + 0x318)) >> 3) / 0x23) * 0x118 + iVar3;
    if ((*(int *)(iVar4 + 0x420) != param_7) ||
       (param_3 != 0x105 ||
        (*(int *)(iVar4 + 0x42c) != param_6 || *(int *)(iVar4 + 0x428) != param_5))) {
      __android_log_print(6,"TextEncApi",
                                                    
                          "(f:%s, l:%d) release pkt verify failed! OutBuf_info(pts:%lld, bufid:%d), Release_info(size:%d, pts:%lld, bufid:%d)"
                          ,"ReleaseTextEncBuf",0x1ed);
      iVar2 = *(int *)(iVar3 + 0xe10);
    }
    *(int *)(iVar3 + 0xe10) = iVar2 + -1;
    pthread_mutex_unlock(__mutex);
    uVar1 = 0;
  }
  return uVar1;
}



undefined4
ReturnTextEncBuf(int *param_1,undefined param_2,undefined param_3,undefined param_4,int param_5,
                undefined param_6,int param_7)

{
  undefined4 uVar1;
  pthread_mutex_t *__mutex;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined3 in_stack_00000005;
  
  iVar2 = *param_1;
  __mutex = (pthread_mutex_t *)(iVar2 + 0x308);
  pthread_mutex_lock(__mutex);
  iVar3 = (*(int *)(iVar2 + 0xe0c) + 9) % 10;
  if ((*(int *)(iVar3 * 0x118 + iVar2 + 0x420) == param_7) &&
     (iVar4 = iVar2 + iVar3 * 0x118,
     *(int *)(iVar4 + 0x42c) == _param_6 && *(int *)(iVar4 + 0x428) == param_5)) {
    *(int *)(iVar2 + 0xe0c) = iVar3;
    pthread_mutex_unlock(__mutex);
    uVar1 = 0;
  }
  else {
    __android_log_print(6,"TextEncApi",
                                                
                        "(f:%s, l:%d) return param error! OutBuf_info(pts:%lld, BufId:%d), Return_info(size:%d, pts:%lld, BufId:%d)!\n"
                        ,"ReturnTextEncBuf",0x1d3);
    pthread_mutex_unlock(__mutex);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



undefined4
RequestTextEncBuf(int *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  pthread_mutex_t *__mutex;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar3 = *param_1;
  __mutex = (pthread_mutex_t *)(iVar3 + 0x308);
  pthread_mutex_lock(__mutex);
  if (*(int *)(iVar3 + 0xe14) < 1) {
    __android_log_print(6,"TextEncApi","(f:%s, l:%d) get EncBuf failed! prefetch_cnt = %d!\n",
                        "RequestTextEncBuf",0x1b6,*(int *)(iVar3 + 0xe14));
    pthread_mutex_unlock(__mutex);
    uVar4 = 0xffffffff;
  }
  else {
    iVar2 = *(int *)(iVar3 + 0xe0c) + 1;
    iVar1 = iVar3 + *(int *)(iVar3 + 0xe0c) * 0x118;
    iVar6 = iVar2 * 0x118 + iVar3;
    uVar4 = *(undefined4 *)(iVar6 + 0x310);
    uVar5 = *(undefined4 *)(iVar6 + 0x314);
    *(int *)(iVar3 + 0xe0c) = iVar2 % 10;
    *param_2 = iVar1 + 0x318;
    *param_3 = 0x105;
    uVar7 = *(undefined4 *)(iVar1 + 0x420);
    *param_4 = uVar4;
    param_4[1] = uVar5;
    *param_5 = uVar7;
    *(int *)(iVar3 + 0xe14) = *(int *)(iVar3 + 0xe14) + -1;
    pthread_mutex_unlock(__mutex);
    uVar4 = 0;
  }
  return uVar4;
}



int GetEmptyOutFrameCnt(int *param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  
  iVar1 = *param_1;
  __mutex = (pthread_mutex_t *)(iVar1 + 0x308);
  pthread_mutex_lock(__mutex);
  iVar1 = *(int *)(iVar1 + 0xe10);
  pthread_mutex_unlock(__mutex);
  return 10 - iVar1;
}



undefined4 GetValidInputPktCnt(int *param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *param_1;
  __mutex = (pthread_mutex_t *)(iVar1 + 0xc);
  pthread_mutex_lock(__mutex);
  uVar2 = *(undefined4 *)(iVar1 + 0x2e8);
  pthread_mutex_unlock(__mutex);
  return uVar2;
}



int GetValidEncPktCnt(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  pthread_mutex_lock((pthread_mutex_t *)(iVar1 + 0x308));
  iVar2 = *(int *)(iVar1 + 0xe14);
  if (iVar2 != 0) {
    __android_log_print(5,"TextEncApi",
                                                
                        "(f:%s, l:%d) Be careful! InBuf_info(rid:%d, wid:%d, used:%d, prefetch_cnt:%d)"
                        ,"GetValidEncPktCnt",0x16e,*(undefined4 *)(iVar1 + 0xe0c),
                        *(undefined4 *)(iVar1 + 0xe08),*(undefined4 *)(iVar1 + 0xe10),iVar2);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(iVar1 + 0x308));
  return iVar2;
}



undefined4 RequestWriteBuf(int *param_1,void *param_2)

{
  undefined4 uVar1;
  pthread_mutex_t *__mutex;
  int iVar2;
  
  iVar2 = *param_1;
  __mutex = (pthread_mutex_t *)(iVar2 + 0xc);
  pthread_mutex_lock(__mutex);
  if (*(int *)(iVar2 + 0x2e8) < 10) {
    memcpy((void *)(iVar2 + 0x10 + *(int *)(iVar2 + 0x2e0) * 0x48),param_2,0x48);
    *(int *)(iVar2 + 0x2e8) = *(int *)(iVar2 + 0x2e8) + 1;
    *(int *)(iVar2 + 0x2e0) = *(int *)(iVar2 + 0x2e0) + 1;
    *(int *)(iVar2 + 0x2e0) = *(int *)(iVar2 + 0x2e0) % 10;
    pthread_mutex_unlock(__mutex);
    uVar1 = 0;
  }
  else {
    __android_log_print(6,"TextEncApi",
                                                
                        "(f:%s, l:%d) Low speed card! InBuf fifo full, discard this frame! InBuf_info(rid:%d, wid:%d, used_cnt:%d)"
                        ,"RequestWriteBuf",0x66,*(undefined4 *)(iVar2 + 0x2e4),
                        *(undefined4 *)(iVar2 + 0x2e0),*(undefined4 *)(iVar2 + 0x2e8));
    pthread_mutex_unlock(__mutex);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// WARNING: Could not reconcile some variable overlaps

undefined4 TextEncodePro(uint **param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  tm *ptVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  pthread_mutex_t *__mutex;
  uint *__s;
  pthread_mutex_t *__mutex_00;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  uint *puVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined4 *local_5c;
  time_t tStack68;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  
  puVar8 = *param_1;
  __mutex = (pthread_mutex_t *)(puVar8 + 3);
  local_2c = __stack_chk_guard;
  pthread_mutex_lock(__mutex);
  if (puVar8[0xba] == 0) {
    pthread_mutex_unlock(__mutex);
    uVar3 = 2;
  }
  else {
    __mutex_00 = (pthread_mutex_t *)(puVar8 + 0xc2);
    pthread_mutex_unlock(__mutex);
    pthread_mutex_lock(__mutex_00);
    if ((int)puVar8[900] < 10) {
      pthread_mutex_unlock(__mutex_00);
      uVar10 = puVar8[0x382];
      puVar12 = puVar8 + 0xc4;
      __s = puVar12 + uVar10 * 0x46 + 2;
      memset(__s,0,0x105);
      uVar9 = *puVar8;
      pthread_mutex_lock(__mutex);
      uVar11 = puVar8[0xb9];
      uVar4 = puVar8[0xbc];
      uVar6 = puVar8[0xbd];
      bVar15 = (uVar4 | uVar6) == 0;
      if (bVar15) {
        uVar4 = (puVar8 + uVar11 * 0x12)[0x14];
        uVar6 = (puVar8 + uVar11 * 0x12)[0x15];
      }
      if (bVar15) {
        puVar8[0xbc] = uVar4;
        puVar8[0xbd] = uVar6;
      }
      uVar16 = VectorSub(*(undefined8 *)(puVar8 + uVar11 * 0x12 + 0x14),CONCAT44(uVar6,uVar4),8);
      *(undefined8 *)(puVar8 + 0xc0) = uVar16;
      if ((uVar9 & 1) != 0) {
        puVar14 = puVar8 + 4 + uVar11 * 0x12;
        local_40 = 0;
        local_3c = 0;
        local_38 = 0;
        local_34 = 0;
        local_30 = 0;
        bVar1 = *(byte *)(puVar8 + 4 + uVar11 * 0x12);
        if ((bVar1 != 0) && (cVar2 = *(char *)((int)puVar14 + 10), cVar2 != '\0')) {
          local_40 = (uint)bVar1;
          memcpy((void *)((int)&local_40 + 1),(void *)((int)puVar14 + 1),8);
          local_38._0_2_ = CONCAT11(cVar2,(undefined)local_38);
          local_38 = local_38 & 0xffff0000 | (uint)(ushort)local_38;
          memcpy((void *)((int)&local_38 + 2),(void *)((int)puVar14 + 0xb),9);
          *(undefined *)((int)__s + 0x27) = 3;
          memcpy(__s + 10,&local_40,0x13);
          memcpy(__s + 0x10,(void *)((int)puVar14 + 0x15),3);
        }
      }
      local_5c = &local_40;
      if ((uVar9 & 2) != 0) {
        puVar14 = puVar8 + uVar11 * 0x12;
        __sprintf_chk(local_5c,0,8,"%+0.2f",(double)(float)puVar14[0xb]);
        *(undefined *)((int)__s + 0xaf) = (undefined)local_40;
        *(undefined *)(__s + 0x2c) = local_40._1_1_;
        *(undefined *)((int)__s + 0xb1) = local_40._3_1_;
        *(undefined *)((int)__s + 0xb2) = (undefined)local_3c;
        __sprintf_chk(local_5c,0,8,"%+0.2f",(double)(float)puVar14[0xc]);
        *(undefined *)((int)__s + 0xb3) = (undefined)local_40;
        *(undefined *)(__s + 0x2d) = local_40._1_1_;
        *(undefined *)((int)__s + 0xb5) = local_40._3_1_;
        *(undefined *)((int)__s + 0xb6) = (undefined)local_3c;
        __sprintf_chk(local_5c,0,8,"%+0.2f",(double)(float)puVar14[0xd]);
        *(undefined *)((int)__s + 0xb7) = (undefined)local_40;
        *(undefined *)(__s + 0x2e) = local_40._1_1_;
        *(undefined *)((int)__s + 0xb9) = local_40._3_1_;
        *(undefined *)((int)__s + 0xba) = (undefined)local_3c;
      }
      if (((uVar9 & 8) != 0) && (*(char *)(puVar8 + 4 + uVar11 * 0x12 + 0xc) != '\0')) {
        *(undefined *)(__s + 6) = 0xc;
        memcpy((void *)((int)__s + 0x19),puVar8 + 4 + uVar11 * 0x12 + 0xc,0xe);
      }
      puVar8[0xba] = puVar8[0xba] - 1;
      puVar8[0xb9] = puVar8[0xb9] + 1;
      puVar8[0xb9] = (int)puVar8[0xb9] % 10;
      pthread_mutex_unlock(__mutex);
      time(&tStack68);
      ptVar5 = localtime(&tStack68);
      __sprintf_chk(local_5c,0,0xf,"%04d%02d%02d%02d%02d%02d",ptVar5->tm_year + 0x76c,
                    ptVar5->tm_mon + 1,ptVar5->tm_mday,ptVar5->tm_hour,ptVar5->tm_min,ptVar5->tm_sec
                   );
      *(undefined *)(__s + 2) = 0xfe;
      *(undefined *)((int)__s + 9) = 0xfe;
      memcpy((void *)((int)__s + 10),local_5c,0xe);
      iVar7 = 2;
      *(undefined *)(puVar12 + uVar10 * 0x46 + 2) = 1;
      *(undefined *)((int)__s + 1) = 3;
      *(undefined *)((int)__s + 0x103) = 0xff;
      *(undefined *)(__s + 0x41) = 0xfd;
      do {
        iVar13 = (int)puVar12 + iVar7 + uVar10 * 0x118;
        iVar7 = iVar7 + 1;
        *(byte *)(iVar13 + 8) = *(byte *)(iVar13 + 8) ^ 0xaa;
      } while (iVar7 != 0x103);
      uVar3 = 0;
      *(undefined *)((int)__s + 2) = 0;
      *(undefined *)((int)__s + 3) = 0;
      pthread_mutex_lock(__mutex_00);
      uVar9 = puVar8[0x382];
      uVar6 = puVar8[0xc4];
      uVar4 = puVar8[900];
      uVar11 = puVar8[0x385];
      puVar8[uVar10 * 0x46 + 0x108] = uVar6;
      puVar8[0xc4] = uVar6 + 1;
      uVar6 = puVar8[0xc1];
      (puVar8 + uVar10 * 0x46 + 0x46)[0xc4] = puVar8[0xc0];
      (puVar8 + uVar10 * 0x46 + 0x46)[0xc5] = uVar6;
      puVar8[900] = uVar4 + 1;
      puVar8[0x385] = uVar11 + 1;
      puVar8[0x382] = (int)(uVar9 + 1) % 10;
      pthread_mutex_unlock(__mutex_00);
    }
    else {
      pthread_mutex_unlock(__mutex_00);
      uVar3 = 3;
    }
  }
  if (local_2c != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar3;
}



undefined4 ClearDataMgr(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  pthread_mutex_lock((pthread_mutex_t *)(iVar1 + 0xc));
  memset((void *)(iVar1 + 0x10),0,0x2e0);
  pthread_mutex_unlock((pthread_mutex_t *)(iVar1 + 0xc));
  pthread_mutex_lock((pthread_mutex_t *)(iVar1 + 0x308));
  memset((void *)(iVar1 + 0x310),0,0xb08);
  pthread_mutex_unlock((pthread_mutex_t *)(iVar1 + 0x308));
  return 0;
}



undefined4 ShowOutFrameData(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  
  iVar2 = *param_1;
  __android_log_print(3,"TextEncApi","============[show OutFrame]============\n");
  iVar5 = *(int *)(iVar2 + 0xe0c);
  iVar6 = *(int *)(iVar2 + 0xe08);
  uVar7 = *(undefined4 *)(iVar2 + 0x310);
  __android_log_print(3,"TextEncApi",
                      "PacketInfo -> (cnt, rid, wid): (%d, %d, %d), enced_pkt_cnt: %d\n",
                      *(undefined4 *)(iVar2 + 0xe10),iVar5,iVar6,uVar7);
  if (param_2 == 1) {
    iVar1 = *(int *)(iVar2 + 0xe0c);
    uVar3 = 0;
    param_2 = iVar5;
    param_3 = iVar6;
    do {
      uVar4 = uVar3 & 0xf;
      if (uVar4 == 0) {
        __android_log_print(3,"TextEncApi","%#5x: ",uVar3,param_2,param_3,uVar7);
      }
      iVar5 = iVar1 * 0x118 + iVar2 + uVar3;
      uVar3 = uVar3 + 1;
      if (uVar4 == 0xf) {
        param_2 = 10;
      }
      else {
        param_2 = 0x20;
      }
      __android_log_print(3,"TextEncApi","%2x%c",*(undefined *)(iVar5 + 0x318),param_2,param_3,uVar7
                         );
    } while (uVar3 != 0x105);
  }
  else {
    bVar8 = param_3 == 9;
    if (param_3 < 10) {
      bVar8 = param_2 == 0;
    }
    if (bVar8) {
      uVar3 = 0;
      iVar1 = param_3 * 0x118;
      param_2 = iVar5;
      param_3 = iVar6;
      do {
        uVar4 = uVar3 & 0xf;
        if (uVar4 == 0) {
          __android_log_print(3,"TextEncApi","%#5x: ",uVar3,param_2,param_3,uVar7);
        }
        iVar5 = iVar1 + iVar2 + uVar3;
        uVar3 = uVar3 + 1;
        if (uVar4 == 0xf) {
          param_2 = 10;
        }
        else {
          param_2 = 0x20;
        }
        __android_log_print(3,"TextEncApi","%2x%c",*(undefined *)(iVar5 + 0x318),param_2,param_3,
                            uVar7);
      } while (uVar3 != 0x105);
    }
    else {
      __android_log_print(6,"TextEncApi","(%s) param error! cur_rid: [%d], pkt_id: [%d]\n",
                          "ShowOutFrameData",param_2,param_3,uVar7);
    }
  }
  __android_log_print(3,"TextEncApi","\n=======================================\n",0x640,param_2,
                      param_3,uVar7);
  return 0;
}



undefined4 * TextEncInit(void *param_1)

{
  undefined4 *__ptr;
  undefined4 *__s;
  
  __ptr = (undefined4 *)malloc(0x34);
  if (__ptr == (undefined4 *)0x0) {
    __android_log_print(6,"TextEncApi","malloc TEXTENCCONTENT_t failed!");
  }
  else {
    *__ptr = 0;
    __ptr[1] = 0;
    __ptr[2] = 0;
    __ptr[3] = 0;
    __ptr[4] = 0;
    __ptr[5] = 0;
    __ptr[6] = 0;
    __ptr[7] = 0;
    __ptr[8] = 0;
    __ptr[9] = 0;
    __ptr[10] = 0;
    __ptr[0xb] = 0;
    __ptr[0xc] = 0;
    __s = (undefined4 *)malloc(0xe20);
    if (__s == (undefined4 *)0x0) {
      __android_log_print(6,"TextEncApi","malloc TextEncDataManager failed!");
      free(__ptr);
      __ptr = __s;
    }
    else {
      *__ptr = __s;
      memset(__s,0,0xe20);
      memcpy(__s,param_1,0xc);
      pthread_mutex_init((pthread_mutex_t *)(__s + 3),(pthread_mutexattr_t *)0x0);
      pthread_mutex_init((pthread_mutex_t *)(__s + 0xc2),(pthread_mutexattr_t *)0x0);
      __ptr[5] = RequestWriteBuf;
      __ptr[6] = TextEncodePro;
      __ptr[7] = GetValidEncPktCnt;
      __ptr[9] = GetValidInputPktCnt;
      __ptr[8] = GetEmptyOutFrameCnt;
      __ptr[10] = RequestTextEncBuf;
      __ptr[0xb] = ReturnTextEncBuf;
      __ptr[0xc] = ReleaseTextEncBuf;
    }
  }
  return __ptr;
}



void TextEncExit(void **param_1)

{
  void *__ptr;
  
  __android_log_print(2,"TextEncApi","(f:%s, l:%d) free TextEncoder!\n","TextEncExit",0x220);
  __ptr = *param_1;
  if (__ptr != (void *)0x0) {
    pthread_mutex_destroy((pthread_mutex_t *)((int)__ptr + 0xc));
    pthread_mutex_destroy((pthread_mutex_t *)((int)__ptr + 0x308));
    free(__ptr);
  }
  free(param_1);
  return;
}



#include "libawmjpegplus.so.h"



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}



void FbmCreate(void)

{
  FbmCreate();
  return;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FbmRequestBuffer(void)

{
  FbmRequestBuffer();
  return;
}



void FbmGetBufferOffset(void)

{
  FbmGetBufferOffset();
  return;
}



void FbmReturnBuffer(void)

{
  FbmReturnBuffer();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



void AdapterMemFlushCache(void)

{
  AdapterMemFlushCache();
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

void free(void *__ptr)

{
  free(__ptr);
  return;
}



void AdapterVeGetBaseAddress(void)

{
  AdapterVeGetBaseAddress();
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



void AdapterMemGetPhysicAddress(void)

{
  AdapterMemGetPhysicAddress();
  return;
}



void VeWaitJpegDecodeInterrupt(void)

{
  VeWaitJpegDecodeInterrupt();
  return;
}



void AdapterMemPfree(void)

{
  AdapterMemPfree();
  return;
}



void __aeabi_uidiv(void)

{
  __aeabi_uidiv();
  return;
}



void __aeabi_idivmod(void)

{
  __aeabi_idivmod();
  return;
}



void ResetJpegVeInternal(void)

{
  ResetJpegVeInternal();
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



void AdapterMemPalloc(void)

{
  AdapterMemPalloc();
  return;
}



void FbmEmptyBufferNum(void)

{
  FbmEmptyBufferNum();
  return;
}



void SbmRequestStream(void)

{
  SbmRequestStream();
  return;
}



void __memcpy_chk(void)

{
  __memcpy_chk();
  return;
}



void SbmReturnStream(void)

{
  SbmReturnStream();
  return;
}



void SbmFlushStream(void)

{
  SbmFlushStream();
  return;
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



void VDecoderRegister(void)

{
  VDecoderRegister();
  return;
}



uint GetBytePlus(int param_1,uint param_2)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  
  uVar1 = 0;
  uVar3 = 0;
  while (uVar3 < param_2) {
    pbVar2 = *(byte **)(param_1 + 0x18) + 1;
    uVar1 = (uint)**(byte **)(param_1 + 0x18) | uVar1 << 8;
    *(byte **)(param_1 + 0x18) = pbVar2;
    if ((byte *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc)) <= pbVar2) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 8);
    }
    uVar3 = uVar3 + 8;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
  }
  return uVar1;
}



void JpegSkipVariablePlus(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = GetBytePlus(param_1,0x10);
  uVar1 = uVar1 - 2;
  if (0 < (int)uVar1) {
    iVar2 = 0;
    while (iVar2 < (int)uVar1 >> 2) {
      GetBytePlus(param_1,0x20);
      iVar2 = iVar2 + 1;
    }
    iVar2 = 0;
    while (iVar2 < (int)(uVar1 & 3)) {
      GetBytePlus(param_1,8);
      iVar2 = iVar2 + 1;
    }
  }
  return;
}



undefined4 JpegFirstMarkerPlus(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = GetBytePlus(param_1,8);
  uVar2 = GetBytePlus(param_1,8);
  uVar1 = (uVar1 & 0xff) - 0xff;
  if (uVar1 != 0) {
    uVar1 = 1;
  }
  if ((uVar2 & 0xff) != 0xd8) {
    uVar1 = uVar1 | 1;
  }
  if (uVar1 == 0) {
    *(undefined *)(param_1 + 0x10f4) = 0xd8;
    return 1;
  }
  return 0;
}



undefined4 JpegNextMarkerPlus(int param_1)

{
  uint uVar1;
  
  do {
    do {
      uVar1 = GetBytePlus(param_1,8);
    } while ((uVar1 & 0xff) != 0xff);
    do {
      uVar1 = GetBytePlus(param_1,8);
      uVar1 = uVar1 & 0xff;
    } while (uVar1 == 0xff);
  } while (uVar1 == 0);
  *(char *)(param_1 + 0x10f4) = (char)uVar1;
  return 1;
}



undefined4 JpegGetSoiPlus(int param_1)

{
  if (*(char *)(param_1 + 0x10f5) == '\0') {
    *(undefined *)(param_1 + 0x10f5) = 1;
    return 1;
  }
  return 0;
}



uint JpegMallocFrmBufferPlus(int param_1,byte *param_2)

{
  sbyte sVar1;
  sbyte sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  byte *local_54;
  undefined4 local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_30;
  undefined4 local_2c;
  
  iVar5 = *(int *)(param_2 + 0x1188);
  iVar13 = *(int *)(param_1 + 0xf8);
  if (iVar5 == 2) {
    uVar12 = *(uint *)(param_2 + 0x1218);
    uVar4 = uVar12;
  }
  else {
    uVar12 = *(uint *)(param_2 + 0x28);
    uVar4 = *(uint *)(param_2 + 0x24);
  }
  if (*(int *)(param_1 + 0x24) == 1) {
    *(undefined4 *)(param_2 + 0x1114) = 1;
    *(undefined4 *)(param_2 + 0x1118) = *(undefined4 *)(param_1 + 0x34);
    uVar8 = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_2 + 0x111c) = uVar8;
    *(undefined4 *)(param_2 + 0x1194) = uVar8;
LAB_00011022:
    iVar9 = *(int *)(param_1 + 0x38);
  }
  else {
    *(undefined4 *)(param_2 + 0x1114) = 0;
    *(undefined4 *)(param_2 + 0x1118) = 0;
    *(undefined4 *)(param_2 + 0x111c) = 0;
    iVar9 = *(int *)(param_2 + 0x1198);
    *(undefined4 *)(param_2 + 0x1194) = 0;
    if (iVar9 != 0) goto LAB_00011022;
  }
  *(int *)(param_2 + 0x11a0) = iVar9;
  pbVar11 = *(byte **)(param_1 + 100);
  pbVar15 = pbVar11;
  if (pbVar11 == (byte *)0x0) {
    pbVar11 = *(byte **)(iVar13 + 0x40);
    pbVar15 = pbVar11 + *(int *)(iVar13 + 0x44);
  }
  sVar1 = *(sbyte *)(param_1 + 0x34);
  if (iVar5 == 2) {
    pbVar11 = param_2 + 0x1200;
  }
  sVar2 = *(sbyte *)(param_1 + 0x30);
  if (iVar5 == 2) {
    uVar6 = *(uint *)(pbVar11 + 0x18);
    uVar3 = uVar6;
  }
  else {
    uVar6 = *(uint *)(param_2 + 0x28);
    uVar3 = *(uint *)(param_2 + 0x24);
  }
  uVar16 = (uVar6 >> sVar1) - 1;
  uVar7 = *(uint *)(param_2 + 0x1190);
  uVar14 = (uVar3 >> sVar2) - 1;
  if (uVar7 - 4 < 4) {
    if ((uVar14 & 1) == 0) {
      uVar14 = (uVar3 >> sVar2) - 2;
    }
    if ((uVar16 & 1) == 0) {
      uVar16 = (uVar6 >> sVar1) - 2;
    }
  }
  if ((uVar7 - 8 < 6) && ((uVar14 & 1) == 0)) {
    uVar14 = uVar14 - 1;
  }
  uVar14 = uVar14 + 1 << sVar2;
  uVar16 = uVar16 + 1 << sVar1;
  uVar6 = uVar14 >> sVar2;
  uVar3 = uVar16 >> sVar1;
  if (uVar7 < 4) {
    uVar6 = uVar6 << 2;
LAB_000110c6:
    *(uint *)(param_2 + 0x11f0) = uVar6;
    uVar6 = uVar3;
  }
  else {
    if (uVar7 - 8 < 4) {
      uVar6 = uVar6 * 2 + 0xf & 0xfffffff0;
      goto LAB_000110c6;
    }
    uVar10 = uVar6 + 0xf & 0xfffffff0;
    uVar6 = uVar3 & 0xfffffffe;
    if (uVar7 - 0xc < 2) {
      *(uint *)(param_2 + 0x11f0) = uVar10;
      uVar10 = uVar10 >> 1;
LAB_000110f0:
      *(uint *)(param_2 + 0x11f4) = uVar10;
    }
    else {
      *(uint *)(param_2 + 0x11f0) = uVar10;
      if (uVar7 - 0xe < 2) goto LAB_000110f0;
      if (uVar7 - 4 < 2) {
        *(uint *)(param_2 + 0x11f4) = uVar10 >> 1;
      }
      else {
        if (uVar7 - 6 < 2) {
          *(uint *)(param_2 + 0x11f4) = uVar10;
        }
      }
      *(uint *)(param_2 + 0x1204) = (uVar3 >> 1) * (uVar10 >> 1);
    }
  }
  *(uint *)(param_2 + 0x1200) = *(int *)(param_2 + 0x11f0) * uVar6;
  *(uint *)(param_2 + 0x11e0) = uVar14 - 1;
  *(uint *)(param_2 + 0x11e4) = uVar16 - 1;
  if (*(int *)(param_2 + 0x1198) == 1) {
    sVar1 = *(sbyte *)(param_1 + 0x38);
    sVar2 = *(sbyte *)(param_1 + 0x3c);
    uVar6 = (*(uint *)(param_2 + 0x24) >> sVar1) - 1;
    uVar3 = (*(uint *)(param_2 + 0x28) >> sVar2) - 1;
    if ((uVar6 & 1) == 0) {
      uVar6 = (*(uint *)(param_2 + 0x24) >> sVar1) - 2;
    }
    if ((uVar3 & 1) == 0) {
      uVar3 = (*(uint *)(param_2 + 0x28) >> sVar2) - 2;
    }
    uVar6 = ((uVar6 + 1 << sVar1) >> sVar1) + 0xf & 0xfffffff0;
    *(uint *)(param_2 + 0x11f8) = uVar6;
    if (*(uint *)(param_2 + 0x119c) < 2) {
      *(uint *)(param_2 + 0x11fc) = uVar6 >> 1;
    }
    else {
      if (*(uint *)(param_2 + 0x119c) - 2 < 2) {
        *(uint *)(param_2 + 0x11fc) = uVar6;
      }
    }
    uVar3 = (uVar3 + 1 << sVar2) >> sVar2;
    *(uint *)(param_2 + 0x1214) = (uVar6 >> 1) * (uVar3 >> 1);
    *(uint *)(param_2 + 0x1210) = uVar6 * uVar3;
  }
  pbVar11 = param_2 + 0x1180;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  local_54 = pbVar15;
  if (*(uint *)(param_2 + 0x1190) < 4) {
    local_4c = uVar4 >> (*(uint *)(param_1 + 0x30) & 0xff);
    local_48 = uVar12 >> (*(uint *)(param_1 + 0x34) & 0xff);
    memset(&local_54,0,0x2c);
    if (*(int *)(param_1 + 0x100) != 0) {
      local_54 = (byte *)0x1;
    }
    local_50 = *(undefined4 *)(iVar13 + 0x44);
    local_40 = *(undefined4 *)(param_1 + 0x44);
    local_3c = *(undefined4 *)(param_1 + 0x6c);
    local_44 = *(undefined4 *)(param_1 + 0x48);
    local_38 = *(undefined4 *)(param_1 + 0x70);
    local_2c = *(undefined4 *)(param_1 + 0x74);
    local_30 = 1;
    if (*(int *)(param_2 + 0x1188) != 0) goto LAB_000112e4;
    iVar5 = FbmCreate(&local_54,*(undefined4 *)(param_1 + 0xf8));
    *(int *)(param_2 + 0x10) = iVar5;
  }
  else {
    uVar3 = uVar4 >> (*(uint *)(param_1 + 0x30) & 0xff);
    local_48 = uVar12 >> (*(uint *)(param_1 + 0x34) & 0xff);
    memset(&local_54,0,0x2c);
    local_40 = *(undefined4 *)(param_1 + 0x44);
    local_50 = *(undefined4 *)(iVar13 + 0x44);
    local_44 = *(undefined4 *)(param_1 + 0x48);
    local_2c = *(undefined4 *)(param_1 + 0x74);
    local_3c = *(undefined4 *)(param_1 + 0x6c);
    local_38 = *(undefined4 *)(param_1 + 0x70);
    local_30 = 1;
    local_4c = uVar3;
    iVar5 = FbmCreate(&local_54,*(undefined4 *)(param_1 + 0xf8));
    *(int *)(param_2 + 0x10) = iVar5;
    if (iVar5 == 0) {
      return 0xffffffff;
    }
    iVar5 = *(int *)(pbVar11 + 0x18);
    if (iVar5 != 1) goto LAB_000112e4;
    uVar4 = uVar4 >> (*(uint *)(param_1 + 0x38) & 0xff);
    uVar6 = *(uint *)(param_1 + 0x3c);
    memset(&local_54,0,0x2c);
    local_44 = *(undefined4 *)(param_1 + 0x4c);
    local_48 = uVar12 >> (uVar6 & 0xff);
    local_50 = *(undefined4 *)(iVar13 + 0x44);
    local_40 = *(undefined4 *)(param_1 + 0x44);
    local_2c = *(undefined4 *)(param_1 + 0x74);
    local_3c = *(undefined4 *)(param_1 + 0x6c);
    local_38 = *(undefined4 *)(param_1 + 0x70);
    local_54 = pbVar15;
    local_4c = uVar4;
    local_30 = iVar5;
    iVar5 = FbmCreate(&local_54,*(undefined4 *)(param_1 + 0xf8),local_3c,local_38,uVar4,uVar3);
    *(int *)(param_2 + 0x14) = iVar5;
  }
  if (iVar5 == 0) {
    return 0xffffffff;
  }
LAB_000112e4:
  uVar4 = (uint)*param_2;
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0x14);
  }
  else {
    if (uVar4 == 1) {
      *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0x10);
      *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0x14);
    }
    uVar4 = 0;
  }
  return uVar4;
}



undefined4 JpegGetSofPlus(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = GetBytePlus(param_1,0x10);
  uVar2 = GetBytePlus(param_1,8);
  uVar3 = GetBytePlus(param_1,0x10);
  *(uint *)(param_1 + 0x28) = uVar3;
  uVar3 = GetBytePlus(param_1,0x10);
  *(uint *)(param_1 + 0x24) = uVar3;
  uVar3 = GetBytePlus(param_1,8);
  *(uint *)(param_1 + 0x2c) = uVar3;
  uVar4 = (uint)*(byte *)(param_1 + 0x10f6);
  if (uVar4 != 0) {
    return 0;
  }
  if (((uVar2 & 0xff) == 8) && ((int)uVar3 < 4)) {
    if (uVar1 - 8 == uVar3 * 3) {
      while ((int)uVar4 < *(int *)(param_1 + 0x2c)) {
        iVar6 = uVar4 * 0x18 + 0x40;
        iVar5 = param_1 + iVar6;
        *(uint *)(iVar5 + 4) = uVar4;
        uVar4 = uVar4 + 1;
        uVar1 = GetBytePlus(param_1,8);
        *(uint *)(param_1 + iVar6) = uVar1;
        uVar1 = GetBytePlus(param_1,8);
        *(ushort *)(iVar5 + 8) = (ushort)((uVar1 << 0x18) >> 0x1c);
        *(ushort *)(iVar5 + 10) = (ushort)uVar1 & 0xf;
        uVar1 = GetBytePlus(param_1,8);
        *(uint *)(iVar5 + 0xc) = uVar1;
      }
      *(uint *)(param_1 + 0x30) = (uint)(*(int *)(param_1 + 0x2c) == 1);
      *(undefined *)(param_1 + 0x10f6) = 1;
      return 1;
    }
    return 0;
  }
  return 0;
}



bool JpegGetDqtPlus(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = GetBytePlus(param_1,0x10);
  iVar3 = uVar1 - 2;
  while( true ) {
    if (iVar3 < 1) {
      return iVar3 == 0;
    }
    uVar1 = GetBytePlus(param_1,8);
    if (3 < (uVar1 & 0xf)) break;
    iVar4 = 0;
    do {
      uVar2 = 0x10;
      if ((int)uVar1 >> 4 == 0) {
        uVar2 = 8;
      }
      uVar2 = GetBytePlus(param_1,uVar2);
      *(short *)(param_1 + (uVar1 & 0xf) * 0x80 + 0xb4 + iVar4) = (short)uVar2;
      iVar4 = iVar4 + 2;
    } while (iVar4 != 0x80);
    if ((int)uVar1 >> 4 == 0) {
      iVar3 = iVar3 + -0x41;
    }
    else {
      iVar3 = iVar3 + -0x81;
    }
  }
  return false;
}



int JpegGetDhtPlus(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  short sVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  byte local_38 [20];
  int local_24;
  
  local_24 = __stack_chk_guard;
  uVar2 = GetBytePlus(param_1,0x10);
  *(undefined2 *)(param_1 + 0x1108) = 1;
  uVar2 = uVar2 - 2;
  do {
    if ((int)uVar2 < 0x11) {
      iVar5 = 1 - uVar2;
      if (1 < uVar2) {
        iVar5 = 0;
      }
LAB_00011532:
      if (local_24 == __stack_chk_guard) {
        return iVar5;
      }
                    // WARNING: Subroutine does not return
      __stack_chk_fail();
    }
    uVar3 = GetBytePlus(param_1,8);
    if ((uVar3 & 0x10) == 0) {
      iVar5 = uVar3 * 0x130 + param_1 + 0x2b4;
    }
    else {
      uVar3 = uVar3 - 0x10;
      iVar5 = uVar3 * 0x130 + param_1 + 0x9d4;
    }
    iVar9 = 0;
    if (5 < uVar3) {
      iVar5 = 0;
      goto LAB_00011532;
    }
    iVar10 = 1;
    local_38[0] = 0;
    do {
      *(char *)(iVar5 + iVar10 + 0x1f) = (char)iVar9;
      uVar3 = GetBytePlus(param_1,8);
      local_38[iVar10] = (byte)(uVar3 & 0xff);
      iVar10 = iVar10 + 1;
      iVar9 = iVar9 + (uVar3 & 0xff);
    } while (iVar10 != 0x11);
    uVar3 = (uint)(0x100 < iVar9);
    if ((int)(uVar2 - 0x11) < iVar9) {
      uVar3 = 1;
    }
    if (uVar3 != 0) {
      iVar5 = 0;
      goto LAB_00011532;
    }
    while ((int)uVar3 < iVar9) {
      uVar4 = GetBytePlus(param_1,8);
      iVar10 = iVar5 + uVar3;
      uVar3 = uVar3 + 1;
      *(char *)(iVar10 + 0x30) = (char)uVar4;
    }
    iVar10 = 0;
    uVar2 = (uVar2 - 0x11) - iVar9;
    sVar7 = 0;
    pbVar6 = local_38;
    do {
      pbVar6 = pbVar6 + 1;
      bVar1 = *pbVar6;
      *(short *)(iVar5 + iVar10) = sVar7;
      iVar10 = iVar10 + 2;
      sVar7 = (sVar7 + (ushort)bVar1) * 2;
    } while (iVar10 != 0x20);
    pbVar6 = local_38 + 0x10;
    do {
      pbVar8 = pbVar6 + -1;
      if (*pbVar6 != 0) break;
      *(undefined2 *)(iVar5 + 0x1e) = 0xffff;
      iVar5 = iVar5 + -2;
      pbVar6 = pbVar8;
    } while (pbVar8 != local_38);
  } while( true );
}



undefined4 JpegGetSosPlus(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  
  if (*(char *)(param_1 + 0x10f6) == '\0') {
    return 0;
  }
  uVar1 = GetBytePlus(param_1,0x10);
  uVar2 = GetBytePlus(param_1,8);
  uVar1 = (uint)(uVar1 != (uVar2 + 3) * 2);
  if ((int)uVar2 < 1) {
    uVar1 = 1;
  }
  if (uVar1 == 0) {
    if (4 < (int)uVar2) {
      return 0;
    }
    *(uint *)(param_1 + 0x34) = uVar2;
    iVar8 = param_1;
    do {
      uVar3 = GetBytePlus(param_1,8);
      uVar4 = GetBytePlus(param_1,8);
      iVar6 = 0;
      while( true ) {
        if (*(int *)(param_1 + 0x2c) <= iVar6) {
          return 0;
        }
        iVar5 = iVar6 * 0x18 + 0x40;
        puVar7 = (undefined4 *)(param_1 + iVar5);
        if (uVar3 == *(uint *)(param_1 + iVar5)) break;
        iVar6 = iVar6 + 1;
      }
      uVar1 = uVar1 + 1;
      *(char *)(iVar8 + 0x88) = *(char *)(puVar7 + 2) * *(char *)((int)puVar7 + 10);
      *(char *)(iVar8 + 0x94) = (char)*puVar7;
      *(char *)(iVar8 + 0x8c) = (char)*(undefined2 *)(puVar7 + 2);
      *(char *)(iVar8 + 0x90) = (char)*(undefined2 *)((int)puVar7 + 10);
      iVar8 = iVar8 + 1;
      puVar7[4] = (uVar4 << 0x18) >> 0x1c;
      puVar7[5] = uVar4 & 0xf;
    } while ((int)uVar1 < (int)uVar2);
    if (*(int *)(param_1 + 0x68) == *(int *)(param_1 + 0x80)) {
      iVar8 = *(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x84);
      if (iVar8 != 0) {
        iVar8 = 1;
      }
    }
    else {
      iVar8 = 1;
    }
    *(int *)(param_1 + 0x11a4) = iVar8;
    uVar1 = GetBytePlus(param_1,8);
    uVar2 = GetBytePlus(param_1,8);
    uVar3 = GetBytePlus(param_1,8);
    if (uVar1 != 0) {
      uVar1 = 1;
    }
    if (uVar2 != 0x3f) {
      uVar1 = uVar1 | 1;
    }
    if (uVar1 == 0) {
      if (uVar3 != 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x38) = 0;
      return 1;
    }
  }
  return 0;
}



undefined4 JpegGetDriPlus(int param_1)

{
  uint uVar1;
  
  uVar1 = GetBytePlus(param_1,0x10);
  if (uVar1 == 4) {
    uVar1 = GetBytePlus(param_1,0x10);
    *(uint *)(param_1 + 0x3c) = uVar1;
    return 1;
  }
  return 0;
}



undefined JpegReadMarkersPlus(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)(param_1 + 0x10f4);
  *(undefined2 *)(param_1 + 0x1108) = 0;
  do {
    if (*pbVar4 == 0) {
      if (*(char *)(param_1 + 0x10f5) == '\0') {
        iVar3 = JpegFirstMarkerPlus(param_1);
        if (iVar3 == 0) {
          return 0;
        }
      }
      else {
        iVar3 = JpegNextMarkerPlus(param_1);
        if (iVar3 == 0) {
          return 0;
        }
      }
    }
    bVar1 = *pbVar4;
    if (bVar1 < 0xd0) {
      if (0xcc < bVar1) {
        return 1;
      }
      if (bVar1 < 0xc4) {
        if (0xc1 < bVar1) {
          return 1;
        }
        if (bVar1 != 1) {
          if (bVar1 == 0) {
            return 0;
          }
          if (bVar1 < 0xc0) {
            return 0;
          }
          iVar3 = JpegGetSofPlus(param_1);
          if (iVar3 == 0) {
            return 0;
          }
        }
      }
      else {
        if (0xcb < bVar1) goto LAB_00011760;
        if (0xc4 < bVar1) {
          return 1;
        }
        iVar3 = JpegGetDhtPlus(param_1);
        if (iVar3 == 0) {
          return 0;
        }
      }
    }
    else {
      if (bVar1 == 0xdb) {
        bVar2 = JpegGetDqtPlus(param_1);
        if (bVar2 == false) {
          return bVar2;
        }
      }
      else {
        if (bVar1 < 0xdc) {
          if (bVar1 == 0xd8) {
            if (*(char *)(param_1 + 0x10f5) != '\0') {
              return 0;
            }
            *(undefined *)(param_1 + 0x10f5) = 1;
          }
          else {
            if (0xd7 < bVar1) {
              if (bVar1 != 0xd9) {
                if (bVar1 != 0xda) {
                  return 0;
                }
                iVar3 = JpegGetSosPlus(param_1);
                if (iVar3 == 0) {
                  return 0;
                }
              }
              *(undefined *)(param_1 + 0x10f4) = 0;
              return 2;
            }
          }
        }
        else {
          if (bVar1 < 0xf0) {
            if ((bVar1 < 0xe0) && (bVar1 != 0xdc)) {
              if (bVar1 != 0xdd) {
                return 0;
              }
              iVar3 = JpegGetDriPlus(param_1);
              if (iVar3 == 0) {
                return 0;
              }
              goto LAB_00011766;
            }
          }
          else {
            if (bVar1 != 0xfe) {
              return 0;
            }
          }
LAB_00011760:
          JpegSkipVariablePlus(param_1);
        }
      }
    }
LAB_00011766:
    *pbVar4 = 0;
  } while( true );
}



uint JpegDecoderMainPlus(int param_1,byte *param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  
  iVar4 = 0;
  param_2[0x10f5] = 0;
  param_2[0x10f6] = 0;
  param_2[0x10f4] = 0;
  if (*(int *)(param_2 + 0x121c) == 0) {
    iVar1 = JpegReadMarkersPlus((int)param_2);
    if (iVar1 != 2) {
      return 0xffffffff;
    }
    *(int *)(param_2 + 0x121c) = *(int *)(param_2 + 0x18) - (int)*(byte **)(param_2 + 8);
    pbVar2 = *(byte **)(param_2 + 8);
  }
  else {
    iVar4 = *(int *)(param_2 + 0x18) + *(int *)(param_2 + 0x121c);
    *(int *)(param_2 + 0x18) = iVar4;
    pbVar2 = param_2;
  }
  uVar7 = SetJpegFormatPlus((int)param_2,pbVar2,iVar4);
  if ((int)uVar7 == 0) {
    return 0xffffffff;
  }
  uVar3 = *(uint *)(param_2 + 0x1188);
  uVar5 = 1 - uVar3;
  if (1 < uVar3) {
    uVar5 = 0;
  }
  if (uVar3 == 2) {
    uVar5 = uVar5 | 1;
  }
  if (uVar5 == 0) {
    uVar3 = 2;
    goto LAB_00011944;
  }
  uVar3 = 2;
  if ((*(int *)(param_2 + 0x10) == 0) &&
     (uVar3 = JpegMallocFrmBufferPlus(param_1,param_2), uVar3 != 0)) {
    return uVar3;
  }
  if (*(int *)(param_2 + 0x1188) != 0) goto LAB_00011944;
  iVar4 = FbmRequestBuffer(*(undefined4 *)(param_2 + 0x10));
  *(int *)(param_2 + 0x1134) = iVar4;
  if (iVar4 == 0) {
    return 4;
  }
  iVar1 = *(int *)(iVar4 + 0x74);
  iVar4 = FbmGetBufferOffset(*(undefined4 *)(param_2 + 0x10),1);
  *(int *)(param_2 + 0x1140) = iVar4 + iVar1;
  iVar6 = *(int *)(*(int *)(param_2 + 0x1134) + 0x78);
  iVar4 = FbmGetBufferOffset(*(undefined4 *)(param_2 + 0x10),0);
  iVar1 = *(int *)(param_2 + 0x1190);
  iVar4 = iVar4 + iVar6;
  if (iVar1 == 4) {
    *(int *)(param_2 + 0x1144) = iVar4;
    iVar4 = iVar4 + (*(int *)(*(int *)(param_2 + 0x1134) + 0x10) *
                     *(int *)(*(int *)(param_2 + 0x1134) + 0xc) >> 2);
    goto LAB_00011886;
  }
  if (iVar1 == 5) {
    *(int *)(param_2 + 0x1148) = iVar4;
    iVar4 = iVar4 + (*(int *)(*(int *)(param_2 + 0x1134) + 0x10) *
                     *(int *)(*(int *)(param_2 + 0x1134) + 0xc) >> 2);
LAB_000118c2:
    *(int *)(param_2 + 0x1144) = iVar4;
  }
  else {
    if (iVar1 - 6U < 2) goto LAB_000118c2;
    if (iVar1 == 0xc) {
      *(int *)(param_2 + 0x1144) = iVar4;
      iVar4 = iVar4 + (*(int *)(*(int *)(param_2 + 0x1134) + 0x10) *
                       *(int *)(*(int *)(param_2 + 0x1134) + 0xc) >> 1);
LAB_00011886:
      *(int *)(param_2 + 0x1148) = iVar4;
    }
    else {
      if (iVar1 == 0xd) {
        *(int *)(param_2 + 0x1148) = iVar4;
        iVar4 = iVar4 + (*(int *)(*(int *)(param_2 + 0x1134) + 0x10) *
                         *(int *)(*(int *)(param_2 + 0x1134) + 0xc) >> 1);
        goto LAB_000118c2;
      }
      if (iVar1 == 0xe) {
        *(int *)(param_2 + 0x1144) = iVar4;
        iVar4 = *(int *)(*(int *)(param_2 + 0x1134) + 0x10) *
                *(int *)(*(int *)(param_2 + 0x1134) + 0xc) + iVar4;
        goto LAB_00011886;
      }
      if (iVar1 == 0xf) {
        *(int *)(param_2 + 0x1148) = iVar4;
        iVar4 = *(int *)(*(int *)(param_2 + 0x1134) + 0x10) *
                *(int *)(*(int *)(param_2 + 0x1134) + 0xc) + iVar4;
        goto LAB_000118c2;
      }
    }
  }
  if (*(int *)(param_2 + 0x1198) == 1) {
    iVar4 = FbmRequestBuffer(*(undefined4 *)(param_2 + 0x14));
    *(int *)(param_2 + 0x1138) = iVar4;
    if (iVar4 == 0) {
      FbmReturnBuffer(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x1134));
      return 4;
    }
    iVar1 = *(int *)(iVar4 + 0x74);
    iVar4 = FbmGetBufferOffset(*(undefined4 *)(param_2 + 0x14),1,iVar4);
    *(int *)(param_2 + 0x114c) = iVar4 + iVar1;
    iVar1 = *(int *)(*(int *)(param_2 + 0x1138) + 0x78);
    iVar4 = FbmGetBufferOffset(*(undefined4 *)(param_2 + 0x14),0);
    iVar4 = iVar4 + iVar1;
    if (*(int *)(param_2 + 0x119c) == 0) {
      *(int *)(param_2 + 0x1150) = iVar4;
      *(int *)(param_2 + 0x1154) =
           iVar4 + (*(int *)(*(int *)(param_2 + 0x1138) + 0x10) *
                    *(int *)(*(int *)(param_2 + 0x1138) + 0xc) >> 2);
    }
    else {
      if (*(int *)(param_2 + 0x119c) == 1) {
        *(int *)(param_2 + 0x1154) = iVar4;
        iVar4 = iVar4 + (*(int *)(*(int *)(param_2 + 0x1138) + 0x10) *
                         *(int *)(*(int *)(param_2 + 0x1138) + 0xc) >> 2);
      }
      *(int *)(param_2 + 0x1150) = iVar4;
    }
  }
LAB_00011944:
  iVar4 = InitJpegHwPlus((int)param_2);
  if (iVar4 == 0) {
    return 0xffffffff;
  }
  iVar4 = JpegHwDecPlus(param_1,(int)param_2);
  if (iVar4 == 0) {
    return 0xffffffff;
  }
  return uVar3;
}



void MjpegSetSecDispParamsPlus(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(param_3 + 0x2c) = 1000;
  uVar1 = *(undefined4 *)(param_2 + 0x1128);
  uVar2 = *(undefined4 *)(param_2 + 0x112c);
  *(undefined4 *)(param_3 + 0x30) = 1;
  *(undefined4 *)(param_3 + 0x40) = uVar1;
  *(undefined4 *)(param_3 + 0x44) = uVar2;
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 0x48);
  return;
}



void MjpegTransformPlanner422To420_Plus(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  void *__src;
  void *__dest;
  uint uVar3;
  size_t __n;
  void *pvVar4;
  int iVar5;
  
  uVar3 = (*(int *)(param_1 + 0x24) >> (*(uint *)(param_1 + 0x111c) & 0xff)) + 0xfU & 0xfffffff0;
  uVar1 = (*(int *)(param_1 + 0x28) >> (*(uint *)(param_1 + 0x1118) & 0xff)) + 0xfU & 0xfffffff0;
  iVar2 = 0;
  iVar5 = uVar1 * uVar3;
  __n = (int)uVar3 >> 1;
  pvVar4 = (void *)(param_2 + iVar5);
  __src = pvVar4;
  __dest = pvVar4;
  while ((int)(iVar2 + uVar1 * -2) < 0 != SBORROW4(iVar2,uVar1 * 2)) {
    memcpy(__dest,__src,__n);
    __src = (void *)((int)__src + __n * 2);
    iVar2 = iVar2 + 2;
    __dest = (void *)((int)__dest + __n);
  }
  AdapterMemFlushCache(pvVar4,iVar5 * 2);
  return;
}



longlong RotateMjpegBySoftPlus(void *param_1,void *param_2,int param_3,int param_4,int param_5)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  void *pvVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  void *local_30;
  
  uVar5 = param_4 + 0xfU & 0xfffffff0;
  uVar2 = param_5 + 0xfU & 0xfffffff0;
  uVar7 = uVar2 * uVar5;
  uVar8 = uVar7 >> 2;
  iVar6 = (int)uVar5 >> 1;
  iVar3 = (int)uVar2 >> 1;
  local_30 = param_1;
  if (param_3 == 1) {
    iVar4 = 0;
    pvVar9 = param_1;
    while (iVar4 < (int)uVar2) {
      iVar10 = 0;
      iVar11 = 0;
      while (iVar10 = iVar10 + uVar2, iVar11 < (int)uVar5) {
        puVar1 = (undefined *)((int)pvVar9 + iVar11);
        iVar11 = iVar11 + 1;
        *(undefined *)((int)param_2 + (iVar10 - iVar4)) = *puVar1;
      }
      iVar4 = iVar4 + 1;
      pvVar9 = (void *)((int)pvVar9 + uVar5);
    }
    iVar4 = 0;
    pvVar9 = (void *)((int)param_1 + uVar7);
    while (iVar4 < iVar3) {
      iVar10 = 0;
      iVar11 = 0;
      while (iVar10 = iVar10 + iVar3, iVar11 < iVar6) {
        puVar1 = (undefined *)((int)pvVar9 + iVar11);
        iVar11 = iVar11 + 1;
        *(undefined *)((int)(void *)((int)param_2 + uVar7) + (iVar10 - iVar4)) = *puVar1;
      }
      iVar4 = iVar4 + 1;
      pvVar9 = (void *)((int)pvVar9 + iVar6);
    }
    iVar10 = (int)(void *)((int)param_1 + uVar7) + uVar8;
    iVar4 = 0;
    while (iVar4 < iVar3) {
      iVar11 = 0;
      iVar12 = 0;
      while (iVar11 = iVar11 + iVar3, iVar12 < iVar6) {
        puVar1 = (undefined *)(iVar10 + iVar12);
        iVar12 = iVar12 + 1;
        *(undefined *)((int)(void *)((int)param_2 + uVar7) + iVar11 + (uVar8 - iVar4)) = *puVar1;
      }
      iVar4 = iVar4 + 1;
      iVar10 = iVar10 + iVar6;
    }
  }
  else {
    if (param_3 == 2) {
      iVar4 = 0;
      iVar10 = 0;
      pvVar9 = param_1;
      while (iVar10 < (int)uVar2) {
        iVar11 = 0;
        while (iVar11 < (int)uVar5) {
          *(undefined *)((int)param_2 + ((iVar4 + uVar5 * (uVar2 + 1)) - iVar11)) =
               *(undefined *)((int)pvVar9 + iVar11);
          iVar11 = iVar11 + 1;
        }
        iVar10 = iVar10 + 1;
        pvVar9 = (void *)((int)pvVar9 + uVar5);
        iVar4 = iVar4 - uVar5;
      }
      local_30 = (void *)((int)param_1 + uVar7);
      iVar4 = 0;
      iVar10 = 0;
      pvVar9 = local_30;
      while (iVar10 < iVar3) {
        iVar11 = 0;
        while (iVar11 < iVar6) {
          *(undefined *)
           ((int)(void *)((int)param_2 + uVar7) + ((iVar4 + iVar6 * (iVar3 + 1)) - iVar11)) =
               *(undefined *)((int)pvVar9 + iVar11);
          iVar11 = iVar11 + 1;
        }
        iVar10 = iVar10 + 1;
        pvVar9 = (void *)((int)pvVar9 + iVar6);
        iVar4 = iVar4 + -iVar6;
      }
      iVar11 = (int)local_30 + uVar8;
      iVar4 = 0;
      iVar10 = 0;
      while (iVar10 < iVar3) {
        iVar12 = 0;
        while (iVar12 < iVar6) {
          *(undefined *)
           ((int)(void *)((int)param_2 + uVar7) + ((iVar4 + iVar6 * (iVar3 + 1) + uVar8) - iVar12))
               = *(undefined *)(iVar11 + iVar12);
          iVar12 = iVar12 + 1;
        }
        iVar10 = iVar10 + 1;
        iVar11 = iVar11 + iVar6;
        iVar4 = iVar4 + -iVar6;
      }
    }
    else {
      if (param_3 == 3) {
        iVar4 = 0;
        pvVar9 = param_1;
        while (iVar4 < (int)uVar2) {
          iVar10 = 0;
          iVar11 = 0;
          while (iVar10 = iVar10 - uVar2, iVar11 < (int)uVar5) {
            puVar1 = (undefined *)((int)pvVar9 + iVar11);
            iVar11 = iVar11 + 1;
            *(undefined *)((int)param_2 + iVar10 + iVar4 + uVar2 * (uVar5 + 1)) = *puVar1;
          }
          iVar4 = iVar4 + 1;
          pvVar9 = (void *)((int)pvVar9 + uVar5);
        }
        iVar4 = 0;
        pvVar9 = (void *)((int)param_1 + uVar7);
        while (iVar4 < iVar3) {
          iVar10 = 0;
          iVar11 = 0;
          while (iVar10 = iVar10 - iVar3, iVar11 < iVar6) {
            puVar1 = (undefined *)((int)pvVar9 + iVar11);
            iVar11 = iVar11 + 1;
            *(undefined *)
             ((int)(void *)((int)param_2 + uVar7) + iVar10 + iVar4 + iVar3 * (iVar6 + 1)) = *puVar1;
          }
          iVar4 = iVar4 + 1;
          pvVar9 = (void *)((int)pvVar9 + iVar6);
        }
        iVar10 = (int)(void *)((int)param_1 + uVar7) + uVar8;
        iVar4 = 0;
        while (iVar4 < iVar3) {
          iVar11 = 0;
          iVar12 = 0;
          while (iVar11 = iVar11 - iVar3, iVar12 < iVar6) {
            puVar1 = (undefined *)(iVar10 + iVar12);
            iVar12 = iVar12 + 1;
            *(undefined *)
             ((int)(void *)((int)param_2 + uVar7) + iVar11 + iVar4 + iVar3 * (iVar6 + 1) + uVar8) =
                 *puVar1;
          }
          iVar4 = iVar4 + 1;
          iVar10 = iVar10 + iVar6;
        }
      }
      else {
        memcpy(param_2,param_1,uVar7 + uVar8 * 2);
      }
    }
  }
  AdapterMemFlushCache(param_2,uVar7 + uVar8 * 2);
  return (longlong)(ZEXT48(local_30) << 0x20);
}



undefined4
getJpegInfoSize(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  void *__s;
  int iVar1;
  undefined4 uVar2;
  
  __s = malloc(0x1220);
  if (__s == (void *)0x0) {
    return 0xffffffff;
  }
  memset(__s,0,0x1220);
  *(undefined4 *)((int)__s + 8) = param_1;
  *(undefined4 *)((int)__s + 0x18) = param_1;
  *(undefined4 *)((int)__s + 0xc) = param_2;
  *(undefined4 *)((int)__s + 0x1c) = param_2;
  *(undefined *)((int)__s + 0x10f5) = 0;
  *(undefined *)((int)__s + 0x10f6) = 0;
  *(undefined *)((int)__s + 0x10f4) = 0;
  iVar1 = JpegReadMarkersPlus((int)__s);
  if (iVar1 != 2) {
    free(__s);
    return 0xfffffffe;
  }
  uVar2 = *(undefined4 *)((int)__s + 0x28);
  *param_3 = *(undefined4 *)((int)__s + 0x24);
  *param_4 = uVar2;
  free(__s);
  return 0;
}



int FUN_00011c9a(void)

{
  int iVar1;
  
  iVar1 = AdapterVeGetBaseAddress();
  return iVar1 + 0xe00;
}



undefined8 SetJpegFormatPlus(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar2 = (int)*(short *)(param_1 + 0x4a);
  iVar5 = (int)*(short *)(param_1 + 0x48);
  uVar7 = SEXT24(*(short *)(param_1 + 0x7a));
  iVar1 = (int)*(short *)(param_1 + 0x62);
  iVar6 = (int)*(short *)(param_1 + 0x60);
  iVar8 = iVar2;
  if (iVar2 <= iVar1) {
    iVar8 = iVar1;
  }
  if ((int)uVar7 <= iVar8) {
    *(int *)(param_1 + 0x9c) = iVar8;
  }
  if (iVar8 < (int)uVar7) {
    *(uint *)(param_1 + 0x9c) = uVar7;
  }
  iVar8 = iVar5;
  if (iVar5 <= iVar6) {
    iVar8 = iVar6;
  }
  iVar4 = (int)*(short *)(param_1 + 0x78);
  uVar7 = iVar2 << 0x10 | iVar5 << 0x14 | uVar7 | iVar6 << 0xc | iVar1 << 8 | iVar4 << 4;
  if (iVar4 <= iVar8) {
    *(int *)(param_1 + 0x98) = iVar8;
  }
  if (iVar8 < iVar4) {
    *(int *)(param_1 + 0x98) = iVar4;
  }
  iVar8 = param_1;
  if (uVar7 == 0x211111) {
    uVar3 = 2;
LAB_00011d1a:
    *(undefined4 *)(param_1 + 0xa4) = uVar3;
  }
  else {
    if (uVar7 == 0x221111) {
      uVar3 = 0;
      goto LAB_00011d1a;
    }
    if (uVar7 == 0x121111) {
      uVar3 = 4;
      goto LAB_00011d1a;
    }
    if (uVar7 == 0x411111) {
      uVar3 = 1;
      *(undefined4 *)(param_1 + 0xa4) = 1;
      goto LAB_00011daa;
    }
    if (uVar7 == 0x111111) {
      uVar3 = 3;
      goto LAB_00011d1a;
    }
    if ((uVar7 & 0xffff) != 0) {
      iVar8 = 0xcc;
      __android_log_print(6,"awplayer",&DAT_0001374b,"SetJpegFormatPlus",0xcc,uVar7,param_3);
      uVar3 = 0;
      *(undefined4 *)(param_1 + 0xa4) = 6;
      goto LAB_00011daa;
    }
    iVar1 = *(int *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0xa4) = 5;
    uVar3 = 1;
    if (iVar1 == 0x20002) {
      *(undefined4 *)(param_1 + 0xa8) = 0;
      goto LAB_00011daa;
    }
    if (iVar1 == 0x10004) {
      *(undefined4 *)(param_1 + 0xa8) = 1;
      goto LAB_00011daa;
    }
    if (iVar1 == 0x10002) {
      *(undefined4 *)(param_1 + 0xa8) = 2;
      goto LAB_00011daa;
    }
    if (iVar1 == 0x10001) {
      uVar3 = 3;
LAB_00011d80:
      *(undefined4 *)(param_1 + 0xa8) = uVar3;
    }
    else {
      if (iVar1 == 0x20001) {
        uVar3 = 4;
        goto LAB_00011d80;
      }
    }
  }
  uVar3 = 1;
LAB_00011daa:
  return CONCAT44(iVar8,uVar3);
}



undefined4 FillJpegHuffmanTablePlus(int param_1)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 local_818 [8];
  undefined2 auStack2040 [8];
  undefined2 local_7e8;
  undefined2 local_7e6;
  undefined2 local_7e4;
  undefined2 local_7e2;
  undefined2 local_7e0;
  undefined2 local_7de;
  undefined2 local_7dc;
  undefined2 local_7da;
  undefined2 local_7d8 [16];
  undefined2 auStack1976 [8];
  undefined2 local_7a8;
  undefined2 local_7a6;
  undefined2 local_7a4;
  undefined2 local_7a2;
  undefined2 local_7a0;
  undefined2 local_79e;
  undefined2 local_79c;
  undefined2 local_79a;
  undefined2 local_798 [16];
  undefined2 auStack1912 [8];
  undefined2 local_768;
  undefined2 local_766;
  undefined2 local_764;
  undefined2 local_762;
  undefined2 local_760;
  undefined2 local_75e;
  undefined2 local_75c;
  undefined2 local_75a;
  undefined2 local_758 [16];
  undefined2 auStack1848 [8];
  undefined2 local_728;
  undefined2 local_726;
  undefined2 local_724;
  undefined2 local_722;
  undefined2 local_720;
  undefined2 local_71e;
  undefined2 local_71c;
  undefined2 local_71a;
  undefined2 local_718 [384];
  undefined2 auStack1048 [128];
  undefined2 auStack792 [128];
  undefined2 auStack536 [128];
  undefined2 auStack280 [130];
  
  if (*(short *)(param_1 + 0x1108) == 0) {
    uVar8 = (uint)*(ushort *)(param_1 + 0x110a);
    if (uVar8 == 0) {
      iVar4 = FUN_00011c9a();
      *(undefined4 *)(iVar4 + 0xe0) = 0;
      do {
        iVar4 = FUN_00011c9a();
        puVar1 = (undefined4 *)(&DAT_00015004 + uVar8);
        uVar8 = uVar8 + 4;
        *(undefined4 *)(iVar4 + 0xe4) = *puVar1;
      } while (uVar8 != 0x800);
    }
  }
  else {
    iVar7 = 0;
    iVar9 = *(int *)(param_1 + 0x2c);
    iVar4 = 0;
    while ((iVar4 < iVar9 &&
           (iVar5 = iVar4 * 0x18 + 0x40, iVar7 = param_1 + iVar5,
           *(uint *)(param_1 + iVar5) != (uint)*(byte *)(param_1 + 0x94)))) {
      iVar4 = iVar4 + 1;
    }
    iVar4 = 0;
    iVar5 = *(int *)(iVar7 + 0x10) * 0x130 + param_1 + 0x2b4;
    do {
      *(undefined2 *)((int)local_818 + iVar4) = *(undefined2 *)(iVar5 + iVar4);
      iVar4 = iVar4 + 2;
    } while (iVar4 != 0x20);
    iVar3 = 0;
    iVar4 = iVar5;
    do {
      iVar10 = iVar3 >> 1;
      iVar3 = iVar3 + 2;
      puVar6 = (undefined2 *)(iVar4 + 0x20);
      iVar4 = iVar4 + 2;
      *(undefined2 *)((int)local_818 + (iVar10 + 0x10) * 2) = *puVar6;
    } while (iVar3 != 0x10);
    local_7e8 = 0;
    local_7e6 = 0;
    local_7e4 = 0;
    local_7e2 = 0;
    local_7e0 = 0;
    local_7de = 0;
    local_7dc = 0;
    local_7da = 0;
    iVar4 = 0;
    do {
      iVar3 = iVar4 >> 1;
      iVar4 = iVar4 + 2;
      puVar6 = (undefined2 *)(iVar5 + 0x30);
      iVar5 = iVar5 + 2;
      *(undefined2 *)((int)local_818 + (iVar3 + 0x200) * 2) = *puVar6;
    } while (iVar4 != 0x100);
    puVar6 = &local_7da;
    iVar4 = 0;
    iVar5 = *(int *)(iVar7 + 0x14) * 0x130 + param_1 + 0x9d4;
    do {
      puVar2 = (undefined2 *)(iVar5 + iVar4);
      iVar4 = iVar4 + 2;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar2;
    } while (iVar4 != 0x20);
    iVar3 = 0;
    iVar4 = iVar5;
    do {
      iVar10 = iVar3 >> 1;
      iVar3 = iVar3 + 2;
      puVar6 = (undefined2 *)(iVar4 + 0x20);
      iVar4 = iVar4 + 2;
      *(undefined2 *)((int)local_818 + (iVar10 + 0x30) * 2) = *puVar6;
    } while (iVar3 != 0x10);
    iVar4 = 0;
    local_7a8 = 0;
    local_7a6 = 0;
    local_7a4 = 0;
    local_7a2 = 0;
    local_7a0 = 0;
    local_79e = 0;
    local_79c = 0;
    local_79a = 0;
    do {
      iVar3 = iVar4 >> 1;
      iVar4 = iVar4 + 2;
      puVar6 = (undefined2 *)(iVar5 + 0x30);
      iVar5 = iVar5 + 2;
      *(undefined2 *)((int)local_818 + (iVar3 + 0x280) * 2) = *puVar6;
    } while (iVar4 != 0x100);
    iVar4 = 0;
    while ((iVar4 < iVar9 &&
           (iVar5 = iVar4 * 0x18 + 0x40, iVar7 = param_1 + iVar5,
           *(uint *)(param_1 + iVar5) != (uint)*(byte *)(param_1 + 0x95)))) {
      iVar4 = iVar4 + 1;
    }
    iVar4 = 0;
    puVar6 = &local_79a;
    iVar5 = *(int *)(iVar7 + 0x10) * 0x130 + param_1 + 0x2b4;
    do {
      puVar2 = (undefined2 *)(iVar5 + iVar4);
      iVar4 = iVar4 + 2;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar2;
    } while (iVar4 != 0x20);
    iVar3 = 0;
    iVar4 = iVar5;
    do {
      iVar10 = iVar3 >> 1;
      iVar3 = iVar3 + 2;
      puVar6 = (undefined2 *)(iVar4 + 0x20);
      iVar4 = iVar4 + 2;
      *(undefined2 *)((int)local_818 + (iVar10 + 0x50) * 2) = *puVar6;
    } while (iVar3 != 0x10);
    local_768 = 0;
    local_766 = 0;
    local_764 = 0;
    local_762 = 0;
    local_760 = 0;
    local_75e = 0;
    local_75c = 0;
    local_75a = 0;
    iVar4 = 0;
    do {
      iVar3 = iVar4 >> 1;
      iVar4 = iVar4 + 2;
      puVar6 = (undefined2 *)(iVar5 + 0x30);
      iVar5 = iVar5 + 2;
      *(undefined2 *)((int)local_818 + (iVar3 + 0x300) * 2) = *puVar6;
    } while (iVar4 != 0x100);
    puVar6 = &local_75a;
    iVar4 = 0;
    iVar5 = *(int *)(iVar7 + 0x14) * 0x130 + param_1 + 0x9d4;
    do {
      puVar2 = (undefined2 *)(iVar5 + iVar4);
      iVar4 = iVar4 + 2;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar2;
    } while (iVar4 != 0x20);
    iVar3 = 0;
    iVar4 = iVar5;
    do {
      iVar10 = iVar3 >> 1;
      iVar3 = iVar3 + 2;
      puVar6 = (undefined2 *)(iVar4 + 0x20);
      iVar4 = iVar4 + 2;
      *(undefined2 *)((int)local_818 + (iVar10 + 0x70) * 2) = *puVar6;
    } while (iVar3 != 0x10);
    iVar4 = 0;
    local_728 = 0;
    local_726 = 0;
    local_724 = 0;
    local_722 = 0;
    local_720 = 0;
    local_71e = 0;
    local_71c = 0;
    local_71a = 0;
    do {
      iVar3 = iVar4 >> 1;
      iVar4 = iVar4 + 2;
      puVar6 = (undefined2 *)(iVar5 + 0x30);
      iVar5 = iVar5 + 2;
      *(undefined2 *)((int)local_818 + (iVar3 + 0x380) * 2) = *puVar6;
    } while (iVar4 != 0x100);
    if (*(int *)(param_1 + 0x11a4) == 1) {
      iVar4 = 0;
      while ((iVar4 < iVar9 &&
             (iVar5 = iVar4 * 0x18 + 0x40, iVar7 = param_1 + iVar5,
             *(uint *)(param_1 + iVar5) != (uint)*(byte *)(param_1 + 0x96)))) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = 0;
      puVar6 = &local_71a;
      iVar9 = *(int *)(iVar7 + 0x10) * 0x130 + param_1 + 0x2b4;
      do {
        puVar2 = (undefined2 *)(iVar9 + iVar4);
        iVar4 = iVar4 + 2;
        puVar6 = puVar6 + 1;
        *puVar6 = *puVar2;
      } while (iVar4 != 0x20);
      iVar5 = 0;
      iVar4 = iVar9;
      do {
        iVar3 = iVar5 >> 1;
        iVar5 = iVar5 + 2;
        puVar6 = (undefined2 *)(iVar4 + 0x20);
        iVar4 = iVar4 + 2;
        *(undefined2 *)((int)local_818 + (iVar3 + 0x90) * 2) = *puVar6;
      } while (iVar5 != 0x10);
      local_718[24] = 0;
      local_718[25] = 0;
      local_718[26] = 0;
      local_718[27] = 0;
      local_718[28] = 0;
      local_718[29] = 0;
      local_718[30] = 0;
      local_718[31] = 0;
      iVar4 = 0;
      do {
        iVar5 = iVar4 >> 1;
        iVar4 = iVar4 + 2;
        puVar6 = (undefined2 *)(iVar9 + 0x30);
        iVar9 = iVar9 + 2;
        *(undefined2 *)((int)local_818 + (iVar5 + 0x100) * 2) = *puVar6;
      } while (iVar4 != 0x100);
      puVar6 = local_718 + 0x1f;
      iVar9 = 0;
      iVar4 = *(int *)(iVar7 + 0x14) * 0x130 + param_1 + 0x9d4;
      do {
        puVar2 = (undefined2 *)(iVar4 + iVar9);
        iVar9 = iVar9 + 2;
        puVar6 = puVar6 + 1;
        *puVar6 = *puVar2;
      } while (iVar9 != 0x20);
      iVar9 = 0;
      iVar7 = iVar4;
      do {
        iVar5 = iVar9 >> 1;
        iVar9 = iVar9 + 2;
        puVar6 = (undefined2 *)(iVar7 + 0x20);
        iVar7 = iVar7 + 2;
        *(undefined2 *)((int)local_818 + (iVar5 + 0xb0) * 2) = *puVar6;
      } while (iVar9 != 0x10);
      iVar7 = 0;
      local_718[56] = 0;
      local_718[57] = 0;
      local_718[58] = 0;
      local_718[59] = 0;
      local_718[60] = 0;
      local_718[61] = 0;
      local_718[62] = 0;
      local_718[63] = 0;
      do {
        iVar9 = iVar7 >> 1;
        iVar7 = iVar7 + 2;
        puVar6 = (undefined2 *)(iVar4 + 0x30);
        iVar4 = iVar4 + 2;
        *(undefined2 *)((int)local_818 + (iVar9 + 0x180) * 2) = *puVar6;
      } while (iVar7 != 0x100);
      puVar6 = local_718 + 0x3f;
      do {
        puVar6 = puVar6 + 1;
        *puVar6 = 0;
      } while (puVar6 != local_718 + 0x7f);
    }
    else {
      puVar6 = &local_71a;
      do {
        puVar6 = puVar6 + 1;
        *puVar6 = 0;
      } while (puVar6 != local_718 + 0x17f);
    }
    iVar4 = FUN_00011c9a();
    iVar7 = 0;
    *(undefined4 *)(iVar4 + 0xe0) = 0;
    do {
      iVar4 = FUN_00011c9a();
      puVar1 = (undefined4 *)((int)local_818 + iVar7);
      iVar7 = iVar7 + 4;
      *(undefined4 *)(iVar4 + 0xe4) = *puVar1;
    } while (iVar7 != 0x800);
  }
  return 0;
}



undefined4 InitJpegHwPlus(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  
  if (*(int *)(param_1 + 0x30) == 1) {
    iVar4 = FUN_00011c9a();
    uVar8 = *(int *)(param_1 + 0x30) << 3 | *(int *)(param_1 + 0x3c) << 0x10 | 3;
  }
  else {
    iVar4 = FUN_00011c9a();
    uVar8 = *(uint *)(param_1 + 0xa4) |
            *(int *)(param_1 + 0x30) << 3 | *(int *)(param_1 + 0x3c) << 0x10;
  }
  *(uint *)(iVar4 + 0xc) = uVar8;
  iVar4 = *(int *)(param_1 + 0x1188);
  if (iVar4 == 0) {
    uVar8 = *(int *)(param_1 + 0x1194) << 0x11 | *(int *)(param_1 + 0x1190) << 0x14 |
            *(uint *)(param_1 + 0x11d4);
LAB_0001226a:
    uVar8 = uVar8 | *(int *)(param_1 + 0x1198) << 0x10 | *(int *)(param_1 + 0x119c) << 0xe |
            *(int *)(param_1 + 0x11a0) << 0xc | *(int *)(param_1 + 0x11a4) << 0xb;
  }
  else {
    uVar8 = 0;
    if (iVar4 - 1U < 2) {
      uVar8 = *(int *)(param_1 + 0x118c) << 0x18 | iVar4 << 0x1e | *(uint *)(param_1 + 0x11d4) |
              *(int *)(param_1 + 0x1190) << 0x14 | *(int *)(param_1 + 0x1194) << 0x11;
      goto LAB_0001226a;
    }
  }
  iVar4 = FUN_00011c9a();
  *(uint *)(iVar4 + 0x10) = uVar8;
  iVar9 = 0;
  iVar4 = *(int *)(param_1 + 0x4c);
  iVar11 = *(int *)(param_1 + 100);
  do {
    iVar5 = iVar9 * 2;
    uVar8 = iVar9 << 8;
    iVar9 = iVar9 + 1;
    uVar1 = *(ushort *)(param_1 + iVar4 * 0x80 + iVar5 + 0xb4);
    iVar5 = FUN_00011c9a();
    *(uint *)(iVar5 + 0x80) = uVar8 | 0x4000 | (uint)uVar1;
  } while (iVar9 != 0x40);
  iVar4 = 0;
  do {
    uVar1 = *(ushort *)(param_1 + iVar11 * 0x80 + iVar4 * 2 + 0xb4);
    uVar8 = iVar4 << 8;
    iVar9 = FUN_00011c9a();
    iVar4 = iVar4 + 1;
    *(uint *)(iVar9 + 0x80) = uVar1 | uVar8;
  } while (iVar4 != 0x40);
  if (*(uint *)(param_1 + 0x1190) < 4) {
    iVar4 = *(int *)(param_1 + 0x11f0) + -1;
LAB_000122f8:
    uVar8 = iVar4 << 0x10;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x11f0) + -1;
    if (*(uint *)(param_1 + 0x1190) - 8 < 4) goto LAB_000122f8;
    uVar8 = *(int *)(param_1 + 0x11f4) - 1U | iVar4 * 0x10000;
  }
  iVar4 = FUN_00011c9a();
  *(uint *)(iVar4 + 200) = uVar8;
  uVar8 = *(uint *)(param_1 + 0x1188);
  uVar13 = 1 - uVar8;
  if (1 < uVar8) {
    uVar13 = 0;
  }
  if (uVar8 == 2) {
    uVar13 = uVar13 | 1;
  }
  if (uVar13 == 0) goto LAB_0001255e;
  piVar10 = (int *)(param_1 + 0x1140);
  if (*(int *)(param_1 + 0x115c) != 0x1689) {
    iVar4 = FUN_00011c9a();
    *(int *)(iVar4 + 0xcc) = *piVar10;
    iVar4 = FUN_00011c9a();
    *(undefined4 *)(iVar4 + 0xd0) = *(undefined4 *)(param_1 + 0x1144);
    iVar4 = FUN_00011c9a();
    *(undefined4 *)(iVar4 + 0xd4) = *(undefined4 *)(param_1 + 0x1148);
    if (*(int *)(param_1 + 0x1198) == 1) {
      iVar11 = *(int *)(param_1 + 0x11f8);
      iVar9 = *(int *)(param_1 + 0x11fc);
      iVar4 = FUN_00011c9a();
      *(uint *)(iVar4 + 0xb4) = iVar9 - 1U | (iVar11 + -1) * 0x10000;
      iVar4 = FUN_00011c9a();
      *(undefined4 *)(iVar4 + 0xb8) = *(undefined4 *)(param_1 + 0x114c);
      iVar4 = FUN_00011c9a();
      *(undefined4 *)(iVar4 + 0xbc) = *(undefined4 *)(param_1 + 0x1150);
      iVar4 = FUN_00011c9a();
      *(undefined4 *)(iVar4 + 0xc0) = *(undefined4 *)(param_1 + 0x1154);
    }
    goto LAB_0001255e;
  }
  uVar8 = *(uint *)(param_1 + 0x1190);
  if ((uVar8 < 4) || (uVar8 - 8 < 4)) {
    iVar9 = *piVar10;
    iVar4 = FUN_00011c9a();
    *(undefined4 *)(iVar4 + 0x40) = 0;
    iVar4 = FUN_00011c9a();
    *(uint *)(iVar4 + 0x44) = iVar9 + 0x1fU & 0xffffffe0;
  }
  else {
    if (uVar8 - 4 < 2) {
LAB_000123c2:
      iVar9 = *piVar10;
      uVar13 = 0;
      iVar4 = FUN_00011c9a();
    }
    else {
      if (uVar8 - 6 < 2) {
        iVar4 = *piVar10;
        iVar9 = FUN_00011c9a();
        *(undefined4 *)(iVar9 + 0x40) = 0;
        iVar9 = FUN_00011c9a();
        *(uint *)(iVar9 + 0x44) = iVar4 + 0x1fU & 0xffffffe0;
        iVar9 = *(int *)(param_1 + 0x1144);
        iVar4 = FUN_00011c9a();
        *(undefined4 *)(iVar4 + 0x48) = 0;
        iVar4 = FUN_00011c9a();
        *(uint *)(iVar4 + 0x4c) = iVar9 + 0x1fU & 0xffffffe0;
        goto LAB_0001243a;
      }
      uVar13 = (uint)(uVar8 == 0xc);
      if (uVar8 == 0xe) {
        uVar13 = 1;
      }
      if (uVar13 != 0) goto LAB_000123c2;
      if (uVar8 != 0xf && uVar8 != 0xd) goto LAB_0001243a;
      iVar9 = *piVar10;
      iVar4 = FUN_00011c9a();
    }
    *(uint *)(iVar4 + 0x40) = uVar13;
    iVar4 = FUN_00011c9a();
    *(uint *)(iVar4 + 0x44) = iVar9 + 0x1fU & 0xffffffe0;
    iVar9 = *(int *)(param_1 + 0x1144);
    iVar4 = FUN_00011c9a();
    *(uint *)(iVar4 + 0x48) = uVar13;
    iVar4 = FUN_00011c9a();
    *(uint *)(iVar4 + 0x4c) = iVar9 + 0x1fU & 0xffffffe0;
    iVar9 = *(int *)(param_1 + 0x1148);
    iVar4 = FUN_00011c9a();
    *(uint *)(iVar4 + 0x50) = uVar13;
    iVar4 = FUN_00011c9a();
    *(uint *)(iVar4 + 0x54) = iVar9 + 0x1fU & 0xffffffe0;
  }
LAB_0001243a:
  if (*(int *)(param_1 + 0x1198) == 1) {
    iVar11 = *(int *)(param_1 + 0x11f8);
    iVar9 = *(int *)(param_1 + 0x11fc);
    iVar4 = FUN_00011c9a();
    *(uint *)(iVar4 + 0xb4) = iVar9 - 1U | (iVar11 + -1) * 0x10000;
    if (*(uint *)(param_1 + 0x119c) < 2) {
      iVar4 = *(int *)(param_1 + 0x114c);
      iVar9 = FUN_00011c9a();
      *(undefined4 *)(iVar9 + 0x58) = 0;
      iVar9 = FUN_00011c9a();
      *(uint *)(iVar9 + 0x5c) = iVar4 + 0x1fU & 0xffffffe0;
      iVar9 = *(int *)(param_1 + 0x1150);
      iVar4 = FUN_00011c9a();
      *(undefined4 *)(iVar4 + 0x60) = 0;
      iVar4 = FUN_00011c9a();
      *(uint *)(iVar4 + 100) = iVar9 + 0x1fU & 0xffffffe0;
      iVar9 = *(int *)(param_1 + 0x1154);
      iVar4 = FUN_00011c9a();
      *(undefined4 *)(iVar4 + 0x68) = 0;
      iVar4 = FUN_00011c9a();
      *(uint *)(iVar4 + 0x6c) = iVar9 + 0x1fU & 0xffffffe0;
    }
    else {
      if (*(uint *)(param_1 + 0x119c) - 2 < 2) {
        iVar9 = *(int *)(param_1 + 0x114c);
        iVar4 = FUN_00011c9a();
        *(undefined4 *)(iVar4 + 0x58) = 0;
        iVar4 = FUN_00011c9a();
        *(uint *)(iVar4 + 0x5c) = iVar9 + 0x1fU & 0xffffffe0;
        iVar9 = *(int *)(param_1 + 0x1150);
        iVar4 = FUN_00011c9a();
        *(undefined4 *)(iVar4 + 0x60) = 0;
        iVar4 = FUN_00011c9a();
        *(uint *)(iVar4 + 100) = iVar9 + 0x1fU & 0xffffffe0;
      }
    }
  }
LAB_0001255e:
  iVar9 = *(int *)(param_1 + 0x9c);
  iVar11 = *(int *)(param_1 + 0x98) * 8;
  iVar4 = __aeabi_idiv(iVar11 + *(int *)(param_1 + 0x24) + -1,iVar11);
  iVar9 = iVar9 * 8;
  uVar13 = iVar11 * iVar4;
  iVar4 = __aeabi_idiv(iVar9 + *(int *)(param_1 + 0x28) + -1,iVar9);
  uVar8 = iVar9 * iVar4;
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar3 = __aeabi_idiv(uVar13,iVar11);
    *(undefined2 *)(param_1 + 0xac) = uVar3;
    uVar3 = __aeabi_idiv(uVar8,iVar9);
    *(undefined2 *)(param_1 + 0xae) = uVar3;
  }
  else {
    if (*(int *)(param_1 + 0x30) == 1) {
      uVar12 = uVar13 & ~((int)uVar13 >> 0x20);
      if ((int)uVar13 < 0) {
        uVar12 = uVar13 + 7;
      }
      uVar13 = uVar8 & ~((int)uVar8 >> 0x20);
      if ((int)uVar8 < 0) {
        uVar13 = uVar8 + 7;
      }
      *(short *)(param_1 + 0xac) = (short)((int)uVar12 >> 3);
      *(short *)(param_1 + 0xae) = (short)((int)uVar13 >> 3);
    }
  }
  uVar1 = *(ushort *)(param_1 + 0xac);
  uVar2 = *(ushort *)(param_1 + 0xae);
  puVar6 = (uint *)FUN_00011c9a();
  *puVar6 = uVar2 - 1 | (uVar1 - 1) * 0x10000;
  iVar9 = *(int *)(param_1 + 0x11d8);
  uVar8 = *(uint *)(param_1 + 0x11dc);
  iVar4 = FUN_00011c9a();
  *(uint *)(iVar4 + 4) = uVar8 | iVar9 << 0x10;
  iVar9 = *(int *)(param_1 + 0x11e0);
  uVar8 = *(uint *)(param_1 + 0x11e4);
  iVar4 = FUN_00011c9a();
  *(uint *)(iVar4 + 8) = uVar8 | iVar9 << 0x10;
  FillJpegHuffmanTablePlus(param_1);
  if (*(int *)(param_1 + 0x115c) == 0x1689) {
    uVar7 = AdapterMemGetPhysicAddress(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) + -1);
    iVar4 = FUN_00011c9a();
    *(undefined4 *)(iVar4 + 0x34) = 0;
    iVar4 = FUN_00011c9a();
    *(undefined4 *)(iVar4 + 0x38) = uVar7;
    if (*(int *)(param_1 + 0x1188) == 1) {
      uVar7 = AdapterMemGetPhysicAddress(*(undefined4 *)(param_1 + 0x11bc));
      iVar4 = FUN_00011c9a();
      *(undefined4 *)(iVar4 + 0xd0) = 0;
      iVar4 = FUN_00011c9a();
      *(undefined4 *)(iVar4 + 0xd4) = uVar7;
    }
  }
  else {
    iVar4 = FUN_00011c9a();
    uVar7 = AdapterMemGetPhysicAddress(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) + -1);
    *(undefined4 *)(iVar4 + 0x34) = uVar7;
  }
  return 1;
}



undefined4 JpegHwDecPlus(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = FUN_00011c9a();
  *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) | 0x38;
  iVar1 = FUN_00011c9a();
  *(int *)(iVar1 + 0x2c) = (*(int *)(param_2 + 0x18) - *(int *)(param_2 + 8)) * 8;
  iVar1 = FUN_00011c9a();
  *(int *)(iVar1 + 0x30) = *(int *)(param_2 + 0x1c) << 3;
  if (*(int *)(param_2 + 0x115c) == 0x1689) {
    uVar2 = AdapterMemGetPhysicAddress(*(undefined4 *)(param_2 + 8));
    iVar1 = FUN_00011c9a();
    *(undefined4 *)(iVar1 + 0x20) = 0;
    iVar1 = FUN_00011c9a();
    *(undefined4 *)(iVar1 + 0x24) = uVar2;
    iVar1 = FUN_00011c9a();
    *(undefined4 *)(iVar1 + 0x28) = 0x70000000;
  }
  else {
    uVar3 = AdapterMemGetPhysicAddress(*(undefined4 *)(param_2 + 8));
    iVar1 = FUN_00011c9a();
    *(uint *)(iVar1 + 0x28) = uVar3 & 0xffffff0 | uVar3 >> 0x1c | 0x70000000;
  }
  if (*(uint *)(param_2 + 0x1188) < 2) {
    iVar1 = FUN_00011c9a();
    *(undefined *)(iVar1 + 0x18) = 0xe;
    VeWaitJpegDecodeInterrupt();
    iVar1 = FUN_00011c9a();
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0xf;
    if (*(int *)(param_2 + 0x11bc) != 0) {
      AdapterMemFlushCache(*(int *)(param_2 + 0x11bc),0x100000);
      memcpy(*(void **)(param_2 + 0x11c0),*(void **)(param_2 + 0x11bc),0x100000);
      AdapterMemPfree(*(undefined4 *)(param_2 + 0x11bc));
      *(undefined4 *)(param_2 + 0x11bc) = 0;
    }
  }
  else {
    Tile_Mode_Decode(param_1,param_2);
  }
  return 1;
}



undefined4 Tile_Mode_Decode(undefined4 param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  uint *puVar16;
  uint uVar17;
  int iVar18;
  int extraout_r1;
  int extraout_r1_00;
  int iVar19;
  uint uVar20;
  undefined *puVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint *puVar27;
  int iVar28;
  undefined *__dest;
  undefined *puVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  
  iVar26 = *(int *)(param_2 + 0x11b0);
  uVar17 = *(uint *)(param_2 + 0x1194);
  iVar19 = *(int *)(param_2 + 0x11c0);
  uVar33 = (uint)(*(int *)(param_2 + 0x11b4) - iVar26) >> (uVar17 & 0xff);
  iVar28 = *(int *)(param_2 + 0x11a8);
  puVar21 = *(undefined **)(param_2 + 0x11c4);
  uVar30 = (uint)(*(int *)(param_2 + 0x11ac) - iVar28) >> (uVar17 & 0xff);
  iVar22 = *(int *)(param_2 + 0x118c);
  iVar10 = __aeabi_uidiv((uint)*(ushort *)(param_2 + 0xac) + iVar22,iVar22 + 1);
  iVar31 = *(int *)(param_2 + 0x98) * 8;
  uVar20 = iVar10 * (uint)*(ushort *)(param_2 + 0xae);
  iVar11 = __aeabi_idiv(iVar31 + *(int *)(param_2 + 0x24) + -1,iVar31);
  iVar34 = *(int *)(param_2 + 0x9c) * 8;
  iVar11 = iVar31 * iVar11;
  iVar12 = __aeabi_idiv(iVar34 + *(int *)(param_2 + 0x28) + -1,iVar34);
  iVar10 = __aeabi_idiv(iVar11,iVar31);
  iVar22 = __aeabi_uidiv(iVar10 + iVar22,iVar22 + 1);
  iVar10 = FUN_00011c9a();
  *(undefined *)(iVar10 + 0x18) = 0;
  iVar10 = FUN_00011c9a();
  *(undefined *)(iVar10 + 0x28) = 0;
  iVar35 = *(int *)(param_2 + 0x9c) * 8;
  iVar10 = __aeabi_idiv(iVar28,iVar35);
  iVar31 = __aeabi_idiv(iVar28 + (uVar30 << (uVar17 & 0xff)) + iVar35 + -1,iVar35);
  iVar23 = *(int *)(param_2 + 0x118c);
  iVar32 = *(int *)(param_2 + 0x98) * 8;
  iVar13 = iVar23 + 1;
  iVar18 = iVar13 * *(int *)(param_2 + 0x98) * 8;
  iVar14 = __aeabi_idiv(iVar26 + (uVar33 << (uVar17 & 0xff)) + iVar32 + -1,iVar32);
  iVar23 = __aeabi_uidiv(iVar14 + iVar23,iVar13);
  uVar17 = iVar35 * iVar10 & ~(iVar35 * iVar10 >> 0x1f);
  iVar10 = iVar34 * iVar12;
  if (iVar35 * iVar31 < iVar34 * iVar12) {
    iVar10 = iVar35 * iVar31;
  }
  iVar23 = iVar18 * iVar23;
  iVar12 = iVar11;
  if (iVar23 < iVar11) {
    iVar12 = iVar23;
  }
  iVar23 = __aeabi_idiv(iVar10 - uVar17,iVar35);
  iVar31 = iVar32 * iVar14;
  if (iVar11 <= iVar32 * iVar14) {
    iVar31 = iVar11;
  }
  if ((iVar31 < *(int *)(param_2 + 0x24)) ||
     (uVar24 = *(int *)(param_2 + 0x24) - iVar26 >> (*(uint *)(param_2 + 0x1194) & 0xff),
     (int)uVar33 <= (int)uVar24)) {
    uVar24 = uVar33;
  }
  uVar33 = uVar24 - 1;
  if ((*(int *)(param_2 + 0x28) <= iVar10) &&
     (uVar25 = *(int *)(param_2 + 0x28) - iVar28 >> (*(uint *)(param_2 + 0x1194) & 0xff),
     (int)uVar25 < (int)uVar30)) {
    uVar30 = uVar25;
  }
  uVar25 = uVar30 - 1;
  if (*(int *)(param_2 + 0x1190) - 4U < 4) {
    if ((uVar33 & 1) == 0) {
      uVar33 = uVar24 - 2;
    }
    if (-1 < (int)(uVar25 * -0x80000000)) {
      uVar25 = uVar30 - 2;
    }
  }
  if ((*(int *)(param_2 + 0x1190) - 8U < 6) && ((uVar33 & 1) == 0)) {
    uVar33 = uVar33 - 1;
  }
  if ((int)(uVar33 | uVar25) < 0) {
    uVar15 = 0xd5;
    puVar21 = &DAT_0001377d;
  }
  else {
    uVar15 = __aeabi_idiv(iVar26,iVar32);
    iVar11 = __aeabi_uidiv(uVar15,iVar13);
    uVar30 = iVar18 * iVar11;
    uVar30 = uVar30 & ~((int)uVar30 >> 0x1f);
    iVar14 = (uVar33 + 1 << (*(uint *)(param_2 + 0x1194) & 0xff)) + -1;
    *(int *)(param_2 + 0x11e0) = iVar14;
    iVar18 = (uVar25 + 1 << (*(uint *)(param_2 + 0x1194) & 0xff)) + -1;
    iVar13 = iVar26 - uVar30;
    *(int *)(param_2 + 0x11d8) = iVar13;
    *(uint *)(param_2 + 0x11dc) = iVar28 - uVar17;
    *(int *)(param_2 + 0x11e4) = iVar18;
    __aeabi_idivmod(iVar26,iVar32);
    iVar11 = __aeabi_uidiv(extraout_r1 + iVar32 + iVar14,iVar32);
    *(int *)(param_2 + 0x11e8) = iVar11 + -1;
    __aeabi_idivmod(iVar28,iVar35);
    iVar31 = __aeabi_uidiv(extraout_r1_00 + iVar35 + iVar18,iVar35);
    *(int *)(param_2 + 0x11ec) = iVar31 + -1;
    if (((((-1 < iVar11 + -1) && (-1 < iVar31 + -1)) && (-1 < iVar14)) &&
        ((-1 < iVar18 && (-1 < iVar13)))) && (-1 < (int)(iVar28 - uVar17))) {
      puVar16 = (uint *)FUN_00011c9a();
      *puVar16 = *(uint *)(param_2 + 0x11ec) | *(int *)(param_2 + 0x11e8) << 0x10;
      iVar11 = FUN_00011c9a();
      *(uint *)(iVar11 + 4) = *(uint *)(param_2 + 0x11dc) | *(int *)(param_2 + 0x11d8) << 0x10;
      iVar11 = FUN_00011c9a();
      *(uint *)(iVar11 + 8) = *(uint *)(param_2 + 0x11e4) | *(int *)(param_2 + 0x11e0) << 0x10;
      iVar32 = *(int *)(param_2 + 0x118c);
      iVar14 = *(int *)(param_2 + 0x1188);
      uVar33 = *(uint *)(param_2 + 0x11d4);
      iVar31 = *(int *)(param_2 + 0x1190);
      iVar26 = *(int *)(param_2 + 0x1194);
      iVar34 = *(int *)(param_2 + 0x1198);
      iVar18 = *(int *)(param_2 + 0x119c);
      iVar13 = *(int *)(param_2 + 0x11a0);
      iVar28 = *(int *)(param_2 + 0x11a4);
      iVar11 = FUN_00011c9a();
      *(uint *)(iVar11 + 0x10) =
           iVar32 << 0x18 | iVar14 << 0x1e | uVar33 | iVar31 << 0x14 | iVar26 << 0x11 |
           iVar34 << 0x10 | iVar18 << 0xe | iVar13 << 0xc | iVar28 << 0xb;
      puVar16 = (uint *)malloc(0x80000);
      if (puVar16 == (uint *)0x0) {
        __android_log_print(6,"awplayer",&DAT_000137d3,"Tile_Mode_Decode",0xfc);
      }
      memset(puVar16,0,0x80000);
      __dest = *(undefined **)(param_2 + 0x11cc);
      iVar11 = 0;
      puVar27 = puVar16;
      do {
        if (iVar10 <= (int)uVar17) {
LAB_00012c52:
          iVar10 = 0;
          puVar27 = puVar16;
          while (iVar10 != iVar23) {
            iVar10 = iVar10 + 1;
            *puVar21 = (char)puVar27[5];
            puVar21[1] = (char)(puVar27[5] >> 8);
            puVar21[2] = (char)*(undefined2 *)((int)puVar27 + 0x16);
            puVar21[3] = *(undefined *)((int)puVar27 + 0x17);
            puVar21[4] = (char)puVar27[4];
            puVar21[5] = (char)(puVar27[4] >> 8);
            puVar21[6] = (char)*(undefined2 *)((int)puVar27 + 0x12);
            puVar21[7] = *(undefined *)((int)puVar27 + 0x13);
            puVar21[8] = (char)puVar27[3];
            puVar21[9] = (char)(puVar27[3] >> 8);
            puVar21[10] = (char)puVar27[2];
            puVar21[0xb] = (byte)((puVar27[2] << 0x14) >> 0x1c) | (byte)(puVar27[1] << 4);
            puVar21[0xc] = (char)(puVar27[1] >> 4);
            puVar21[0xd] = (char)*puVar27;
            puVar21[0xe] = (byte)((*puVar27 << 0x14) >> 0x1c);
            puVar21 = puVar21 + 0x10;
            puVar27 = puVar27 + 6;
          }
          AdapterMemFlushCache(*(undefined4 *)(param_2 + 0x11c4),*(undefined4 *)(param_2 + 0x11c8));
          uVar15 = AdapterMemGetPhysicAddress(*(undefined4 *)(param_2 + 0x11c4));
          *(undefined4 *)(param_2 + 0x1158) = uVar15;
          iVar10 = FUN_00011c9a();
          *(undefined4 *)(iVar10 + 0xd8) = 0;
          iVar10 = FUN_00011c9a();
          *(undefined4 *)(iVar10 + 0xdc) = uVar15;
          if (puVar16 != (uint *)0x0) {
            free(puVar16);
          }
          AdapterMemFlushCache(*(undefined4 *)(param_2 + 0x11cc),*(undefined4 *)(param_2 + 0x11d0));
          uVar15 = AdapterMemGetPhysicAddress(*(undefined4 *)(param_2 + 0x11cc));
          iVar10 = FUN_00011c9a();
          *(undefined4 *)(iVar10 + 0x20) = 0;
          iVar10 = FUN_00011c9a();
          *(undefined4 *)(iVar10 + 0x24) = uVar15;
          uVar15 = AdapterMemGetPhysicAddress
                             (*(int *)(param_2 + 0x11cc) + *(int *)(param_2 + 0x11d0) + -1);
          iVar10 = FUN_00011c9a();
          *(undefined4 *)(iVar10 + 0x34) = 0;
          iVar10 = FUN_00011c9a();
          *(undefined4 *)(iVar10 + 0x38) = uVar15;
          iVar10 = FUN_00011c9a();
          *(undefined4 *)(iVar10 + 0x28) = 0;
          iVar10 = FUN_00011c9a();
          *(uint *)(iVar10 + 0x14) = *(uint *)(iVar10 + 0x14) | 0x38;
          iVar10 = FUN_00011c9a();
          *(undefined4 *)(iVar10 + 0x18) = 0xe;
          VeWaitJpegDecodeInterrupt();
          iVar10 = FUN_00011c9a();
          *(uint *)(iVar10 + 0x1c) = *(uint *)(iVar10 + 0x1c) | 0xf;
          return 0;
        }
        iVar18 = *(int *)(param_2 + 0x118c);
        iVar26 = *(int *)(param_2 + 0x98) << 3;
        iVar31 = __aeabi_idiv(uVar17,*(int *)(param_2 + 0x9c) << 3);
        iVar18 = iVar18 + 1;
        uVar15 = __aeabi_idiv(uVar30,iVar26);
        iVar13 = __aeabi_uidiv(uVar15,iVar18);
        iVar13 = (iVar22 * iVar31 + iVar13) * 0xc;
        iVar14 = iVar19 + iVar13;
        bVar1 = *(byte *)(iVar14 + 1);
        bVar8 = *(byte *)(iVar14 + 3);
        bVar2 = *(byte *)(iVar14 + 2);
        uVar33 = (uint)*(byte *)(iVar19 + iVar13);
        bVar3 = *(byte *)(iVar14 + 6);
        uVar9 = *(ushort *)(iVar14 + 4);
        bVar4 = *(byte *)(iVar14 + 8);
        bVar5 = *(byte *)(iVar14 + 7);
        bVar6 = *(byte *)(iVar14 + 10);
        bVar7 = *(byte *)(iVar14 + 9);
        uVar15 = __aeabi_idiv(iVar12,iVar26);
        iVar13 = __aeabi_uidiv(uVar15,iVar18);
        uVar24 = iVar13 + 1 + iVar22 * iVar31;
        if (uVar20 <= uVar24) {
          uVar24 = uVar20;
        }
        iVar31 = iVar19 + uVar24 * 0xc;
        uVar24 = (uint)*(byte *)(iVar31 + 2) << 0x10 | (uint)*(byte *)(iVar31 + 3) << 0x18 |
                 (uint)*(byte *)(iVar19 + uVar24 * 0xc) | (uint)*(byte *)(iVar31 + 1) << 8;
        if (uVar24 == 0) {
          __android_log_print(6,"awplayer",&DAT_00013804,"Tile_Mode_Decode",0x11e);
          goto LAB_00012c52;
        }
        uVar25 = (uint)bVar2 << 0x10 | (uint)bVar8 << 0x18 | uVar33 | (uint)bVar1 << 8;
        *puVar27 = (uint)bVar7 | (bVar6 & 0xf) << 8;
        uVar24 = (uVar24 + 7 & 0xfffffff8) - uVar25;
        puVar27[1] = (uint)bVar4 << 4 | (uint)(bVar5 >> 4);
        uVar33 = uVar33 & 7;
        puVar27[2] = (uint)bVar3 | (bVar5 & 0xf) << 8;
        puVar27[4] = uVar33 + iVar11;
        uVar33 = uVar24 + uVar33 >> 3;
        puVar27[5] = uVar24;
        puVar27[3] = (uint)uVar9;
        memcpy(__dest,(void *)(*(int *)(param_2 + 0x18) + (uVar25 >> 3)),uVar33);
        puVar29 = __dest + uVar33;
        __dest = puVar29;
        if ((puVar29 != *(undefined **)(param_2 + 0x11cc)) && (puVar29[-1] == -1)) {
          uVar33 = uVar33 + 1;
          __dest = puVar29 + 1;
          *puVar29 = 0;
          puVar27[5] = puVar27[5] + 1;
        }
        iVar11 = iVar11 + uVar33 * 8;
        puVar27 = puVar27 + 6;
        uVar17 = uVar17 + *(int *)(param_2 + 0x9c) * 8;
      } while( true );
    }
    uVar15 = 0xe7;
    puVar21 = &DAT_000137b0;
  }
  __android_log_print(6,"awplayer",puVar21,"Tile_Mode_Decode",uVar15);
  return 0xffffffff;
}



void MjpegDecoderResetPlus(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0xcc);
    iVar1 = *(int *)(iVar2 + 0x115c);
    if (iVar1 == 0x1689 || iVar1 == 0x1681) {
      ResetJpegVeInternal();
    }
    else {
      ResetVeInternal(*(undefined4 *)(param_1 + 0x20));
    }
    *(undefined *)(iVar2 + 1) = 0;
  }
  return;
}



undefined4 * CreateMjpegPlusDecoder(undefined4 param_1)

{
  undefined4 *__s;
  
  __s = (undefined4 *)malloc(0x104);
  if (__s != (undefined4 *)0x0) {
    memset(__s,0,0x104);
    *__s = &LAB_00012f48_1;
    __s[1] = 0x12dd7;
    __s[2] = 0x13549;
    __s[3] = &LAB_00012db4_1;
    __s[8] = param_1;
    __s[4] = &LAB_00013530_1;
    __s[5] = 0x13185;
    __s[6] = 0x13105;
    __s[7] = &LAB_00012e88_1;
  }
  return __s;
}



void FUN_00013104(void *param_1)

{
  void *__ptr;
  int iVar1;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  if (*(int *)((int)param_1 + 0xdc) != 0) {
    FbmDestroy();
    *(undefined4 *)((int)param_1 + 0xdc) = 0;
  }
  if (*(int *)((int)param_1 + 0xe0) != 0) {
    FbmDestroy();
    *(undefined4 *)((int)param_1 + 0xe0) = 0;
  }
  if (*(void **)((int)param_1 + 0xfc) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0xfc));
    *(undefined4 *)((int)param_1 + 0xfc) = 0;
  }
  iVar1 = *(int *)((int)param_1 + 0xcc);
  if (*(int *)(iVar1 + 0x1188) - 1U < 2) {
    if (*(int *)(iVar1 + 0x11bc) != 0) {
      AdapterMemPfree();
      *(undefined4 *)(iVar1 + 0x11bc) = 0;
    }
    __ptr = *(void **)(iVar1 + 0x11c0);
    if (__ptr != (void *)0x0) {
      free(__ptr);
      *(void **)(iVar1 + 0x11c0) = (void *)0x0;
    }
  }
  free(*(void **)((int)param_1 + 0xcc));
  *(undefined4 *)((int)param_1 + 0xcc) = 0;
  free(param_1);
  return;
}



undefined4 FUN_00013184(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  byte **ppbVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 local_24;
  
  pbVar9 = *(byte **)(param_1 + 0xcc);
  iVar2 = param_1;
  local_24 = param_4;
  if (((*(int *)(param_1 + 0x100) == 1) && (*(int *)(pbVar9 + 0x1188) != 0)) &&
     (*(void **)(pbVar9 + 0x11c0) == (void *)0x0)) {
    pvVar1 = (void *)AdapterMemPalloc(0x100000);
    *(void **)(pbVar9 + 0x11bc) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      iVar2 = 0x208;
    }
    else {
      memset(pvVar1,0,0x100000);
      pvVar1 = malloc(0x100000);
      *(void **)(pbVar9 + 0x11c0) = pvVar1;
      if (pvVar1 != (void *)0x0) {
        memset(pvVar1,0,0x100000);
        goto LAB_00013228;
      }
      iVar2 = 0x211;
    }
    __android_log_print(6,"awplayer",&DAT_00013848,"ProcessSkiaConfig",iVar2,param_2,param_3);
    if (*(int *)(pbVar9 + 0x11bc) != 0) {
      AdapterMemPfree();
      *(undefined4 *)(pbVar9 + 0x11bc) = 0;
    }
    pvVar1 = *(void **)(pbVar9 + 0x11c0);
    if (pvVar1 != (void *)0x0) {
      free(pvVar1);
      *(void **)(pbVar9 + 0x11c0) = (void *)0x0;
    }
  }
LAB_00013228:
  if (pbVar9[1] == 0) {
    if (*pbVar9 == 0) {
      *(undefined4 *)(pbVar9 + 4) = *(undefined4 *)(param_1 + 0xd8);
      *(undefined4 *)(pbVar9 + 0x10) = *(undefined4 *)(param_1 + 0xdc);
      *(undefined4 *)(pbVar9 + 0x14) = *(undefined4 *)(param_1 + 0xe0);
      *(undefined4 *)(pbVar9 + 8) = *(undefined4 *)(param_1 + 0xd0);
      *(undefined4 *)(pbVar9 + 0xc) = *(undefined4 *)(param_1 + 0xd4);
    }
    else {
      if (*pbVar9 == 1) {
        *(undefined4 *)(pbVar9 + 4) = *(undefined4 *)(param_1 + 0xec);
        *(undefined4 *)(pbVar9 + 8) = *(undefined4 *)(param_1 + 0xe4);
        *(undefined4 *)(pbVar9 + 0xc) = *(undefined4 *)(param_1 + 0xe8);
        *(undefined4 *)(pbVar9 + 0x10) = *(undefined4 *)(param_1 + 0xf0);
        *(undefined4 *)(pbVar9 + 0x14) = *(undefined4 *)(param_1 + 0xf4);
      }
    }
    pbVar9[1] = 1;
  }
  if (pbVar9[1] == 1) {
    if (((*(int *)(pbVar9 + 0x10) != 0) && (iVar3 = FbmEmptyBufferNum(), iVar3 == 0)) ||
       ((*(int *)(pbVar9 + 0x14) != 0 && (iVar3 = FbmEmptyBufferNum(), iVar3 == 0)))) {
      return 4;
    }
    pbVar9[1] = 2;
  }
  ppbVar10 = (byte **)0x0;
  if (pbVar9[1] == 2) {
    ppbVar10 = (byte **)SbmRequestStream(*(undefined4 *)(pbVar9 + 4));
    if (ppbVar10 == (byte **)0x0) {
      return 5;
    }
    pbVar5 = ppbVar10[3];
    *(byte **)(pbVar9 + 0x1128) = ppbVar10[2];
    *(byte **)(pbVar9 + 0x112c) = pbVar5;
    puVar6 = (undefined4 *)*ppbVar10;
    if ((undefined4 *)(*(int *)(pbVar9 + 8) + *(int *)(pbVar9 + 0xc)) < puVar6 + 1) {
      puVar11 = (undefined4 *)
                ((int)(undefined4 *)(*(int *)(pbVar9 + 8) + *(int *)(pbVar9 + 0xc)) - (int)puVar6);
      __memcpy_chk(&local_24,puVar6,puVar11,4,iVar2);
      memcpy((void *)((int)((int)register0x00000054 + -0x24) + (int)puVar11),*(void **)(pbVar9 + 8),
             4 - (int)puVar11);
      puVar6 = &local_24;
    }
    uVar8 = (uint)*(byte *)((int)puVar6 + 1) << 0x10 | (uint)*(byte *)puVar6 << 0x18 |
            (uint)*(byte *)((int)puVar6 + 3) | (uint)*(byte *)((int)puVar6 + 2) << 8;
    if ((byte *)(uVar8 + 4) == ppbVar10[1]) {
      *(uint *)(pbVar9 + 0x1c) = uVar8;
      pbVar5 = *ppbVar10 + 4;
      *(byte **)(pbVar9 + 0x18) = pbVar5;
      if ((byte *)(*(int *)(pbVar9 + 8) + *(int *)(pbVar9 + 0xc)) < pbVar5) {
        pbVar5 = pbVar5 + -*(int *)(pbVar9 + 0xc);
        goto LAB_0001332a;
      }
    }
    else {
      *(byte **)(pbVar9 + 0x1c) = ppbVar10[1];
      pbVar5 = *ppbVar10;
LAB_0001332a:
      *(byte **)(pbVar9 + 0x18) = pbVar5;
    }
    if ((*(uint *)(pbVar9 + 0x1188) < 2) &&
       (*(undefined4 *)(pbVar9 + 0x121c) = 0, *(uint *)(pbVar9 + 0x1188) == 1)) {
      pvVar1 = (void *)AdapterMemPalloc(*(undefined4 *)(pbVar9 + 0xc));
      *(void **)(pbVar9 + 0x20) = pvVar1;
      if (pvVar1 == (void *)0x0) {
        __android_log_print(6,"awplayer",&DAT_00013880,"MjpegDecoderDecode",0x2c0);
        return 5;
      }
      memcpy(pvVar1,*(void **)(pbVar9 + 8),*(size_t *)(pbVar9 + 0xc));
      AdapterMemFlushCache(*(undefined4 *)(pbVar9 + 0x20),*(undefined4 *)(pbVar9 + 0xc));
      *(undefined4 *)(pbVar9 + 0x18) = *(undefined4 *)(pbVar9 + 0x20);
      *(undefined4 *)(pbVar9 + 8) = *(undefined4 *)(pbVar9 + 0x20);
    }
    pbVar9[1] = 3;
  }
  if (pbVar9[1] == 3) {
    if (*(int *)(pbVar9 + 0x115c) == 0x1689 || *(int *)(pbVar9 + 0x115c) == 0x1681) {
      ResetJpegVeInternal();
    }
    else {
      ResetVeInternal(*(undefined4 *)(param_1 + 0x20));
    }
    uVar8 = JpegDecoderMainPlus(param_1,pbVar9);
    if (uVar8 == 4) {
      SbmReturnStream(*(undefined4 *)(pbVar9 + 4),ppbVar10);
      pbVar9[1] = 2;
      return 4;
    }
    if ((int)uVar8 < 0) {
      pbVar9[1] = 5;
      goto LAB_000133fc;
    }
    iVar2 = *(int *)(pbVar9 + 0x1110);
    if (iVar2 == 1) {
      pbVar9[1] = 4;
    }
    else {
      iVar2 = 1;
      pbVar9[1] = 5;
    }
  }
  else {
LAB_000133fc:
    iVar2 = 0;
  }
  if (pbVar9[1] != 5) goto LAB_000134e0;
  if (*(int *)(pbVar9 + 0x1188) == 0) {
    SbmFlushStream();
  }
  else {
    SbmReturnStream(*(undefined4 *)(pbVar9 + 4),ppbVar10);
  }
  iVar3 = *(int *)(pbVar9 + 0x1188);
  if (iVar3 == 0) {
    iVar12 = *(int *)(pbVar9 + 0x113c);
    if (iVar12 == 0) {
      if (*(int *)(pbVar9 + 0x1138) == 0) {
        if (*(int *)(pbVar9 + 0x1134) == 0) goto LAB_000134bc;
        MjpegSetSecDispParamsPlus(param_1,(int)pbVar9,*(int *)(pbVar9 + 0x1134));
        uVar4 = *(undefined4 *)(pbVar9 + 0x10);
        iVar7 = *(int *)(pbVar9 + 0x1134);
        iVar12 = iVar2;
      }
      else {
        if (*(int *)(pbVar9 + 0x1198) == 1) {
          MjpegSetSecDispParamsPlus(param_1,(int)pbVar9,*(int *)(pbVar9 + 0x1134));
          FbmReturnBuffer(*(undefined4 *)(pbVar9 + 0x10),*(undefined4 *)(pbVar9 + 0x1134),1);
          MjpegSetSecDispParamsPlus(param_1,(int)pbVar9,*(int *)(pbVar9 + 0x1138));
          uVar4 = *(undefined4 *)(pbVar9 + 0x14);
          iVar7 = *(int *)(pbVar9 + 0x1138);
          iVar12 = iVar2;
        }
        else {
          MjpegSetSecDispParamsPlus(param_1,(int)pbVar9,*(int *)(pbVar9 + 0x1138));
          FbmReturnBuffer(*(undefined4 *)(pbVar9 + 0x14),*(undefined4 *)(pbVar9 + 0x1138),iVar2);
          uVar4 = *(undefined4 *)(pbVar9 + 0x10);
          iVar7 = *(int *)(pbVar9 + 0x1134);
        }
      }
    }
    else {
      MjpegSetSecDispParamsPlus(param_1,(int)pbVar9,iVar12);
      FbmReturnBuffer(*(undefined4 *)(pbVar9 + 0x14),*(undefined4 *)(pbVar9 + 0x113c),iVar2);
      FbmReturnBuffer(*(undefined4 *)(pbVar9 + 0x10),*(undefined4 *)(pbVar9 + 0x1134),0);
      iVar7 = *(int *)(pbVar9 + 0x1138);
      if (iVar7 == 0) goto LAB_000134bc;
      uVar4 = *(undefined4 *)(pbVar9 + 0x14);
      iVar12 = iVar3;
    }
    FbmReturnBuffer(uVar4,iVar7,iVar12);
  }
LAB_000134bc:
  *(undefined4 *)(pbVar9 + 0x113c) = 0;
  *(undefined4 *)(pbVar9 + 0x1138) = 0;
  *(undefined4 *)(pbVar9 + 0x1134) = 0;
  pbVar9[1] = 0;
  if (*(int *)(param_1 + 0xa8) == 1) {
    *pbVar9 = 1 - *pbVar9;
  }
LAB_000134e0:
  if ((*(int *)(pbVar9 + 0x1188) == 1) && (*(int *)(pbVar9 + 0x20) != 0)) {
    AdapterMemPfree();
  }
  if (iVar2 == 1) {
    uVar4 = 3;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



undefined4 FUN_00013548(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0xd8) = param_2;
    uVar1 = SbmBufferAddress(param_2);
    *(undefined4 *)(param_1 + 0xd0) = uVar1;
    uVar1 = SbmBufferSize(param_2);
    *(undefined4 *)(param_1 + 0xd4) = uVar1;
    return 0;
  }
  if (param_3 == 1) {
    *(undefined4 *)(param_1 + 0xec) = param_2;
    uVar1 = SbmBufferAddress(param_2);
    *(undefined4 *)(param_1 + 0xe4) = uVar1;
    uVar1 = SbmBufferSize(param_2);
    *(undefined4 *)(param_1 + 0xe8) = uVar1;
    return 0;
  }
  return 0;
}



void CedarPluginVDInit(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = VDecoderRegister(0x101,"mjpegplus",0x12e19,0,param_1,param_2,param_3);
  if (iVar1 != 0) {
    __android_log_print(6,"awplayer",&DAT_000138ad,"CedarPluginVDInit",0x39);
  }
  return;
}



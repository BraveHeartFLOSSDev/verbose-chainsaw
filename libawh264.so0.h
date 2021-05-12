typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
#define unkbyte9   unsigned long long
#define unkbyte10   unsigned long long
#define unkbyte11   unsigned long long
#define unkbyte12   unsigned long long
#define unkbyte13   unsigned long long
#define unkbyte14   unsigned long long
#define unkbyte15   unsigned long long
#define unkbyte16   unsigned long long

#define unkuint9   unsigned long long
#define unkuint10   unsigned long long
#define unkuint11   unsigned long long
#define unkuint12   unsigned long long
#define unkuint13   unsigned long long
#define unkuint14   unsigned long long
#define unkuint15   unsigned long long
#define unkuint16   unsigned long long

#define unkint9   long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

#define unkfloat1   float
#define unkfloat2   float
#define unkfloat3   float
#define unkfloat5   double
#define unkfloat6   double
#define unkfloat7   double
#define unkfloat9   long double
#define unkfloat11   long double
#define unkfloat12   long double
#define unkfloat13   long double
#define unkfloat14   long double
#define unkfloat15   long double
#define unkfloat16   long double

#define BADSPACEBASE   void
#define code   void

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

typedef enum Elf_SectionHeaderType_ARM {
    SHT_SYMTAB=2,
    SHT_ARM_DEBUGOVERLAY=1879048196,
    SHT_GNU_versym=1879048191,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_LIBLIST=1879048183,
    SHT_FINI_ARRAY=15,
    SHT_GROUP=17,
    SHT_CHECKSUM=1879048184,
    SHT_SHLIB=10,
    SHT_ARM_ATTRIBUTES=1879048195,
    SHT_ANDROID_RELA=1610612738,
    SHT_NOBITS=8,
    SHT_GNU_HASH=1879048182,
    SHT_REL=9,
    SHT_SYMTAB_SHNDX=18,
    SHT_HASH=5,
    SHT_PROGBITS=1,
    SHT_ANDROID_REL=1610612737,
    SHT_NULL=0,
    SHT_GNU_verneed=1879048190,
    SHT_ARM_OVERLAYSECTION=1879048197,
    SHT_INIT_ARRAY=14,
    SHT_ARM_EXIDX=1879048193,
    SHT_NOTE=7,
    SHT_PREINIT_ARRAY=16,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_ARM_PREEMPTMAP=1879048194,
    SHT_SUNW_COMDAT=1879048187,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_DYNSYM=11,
    SHT_SUNW_syminfo=1879048188,
    SHT_DYNAMIC=6,
    SHT_SUNW_move=1879048186
} Elf_SectionHeaderType_ARM;

struct Elf32_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_ARM sh_type;
    dword sh_flags;
    dword sh_addr;
    dword sh_offset;
    dword sh_size;
    dword sh_link;
    dword sh_info;
    dword sh_addralign;
    dword sh_entsize;
};

typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

typedef enum Elf_ProgramHeaderType_ARM {
    PT_GNU_STACK=1685382481,
    PT_NOTE=4,
    PT_INTERP=3,
    PT_PHDR=6,
    PT_LOAD=1,
    PT_NULL=0,
    PT_DYNAMIC=2,
    PT_SHLIB=5,
    PT_ARM_EXIDX=1879048192,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_RELRO=1685382482,
    PT_TLS=7
} Elf_ProgramHeaderType_ARM;

struct Elf32_Phdr {
    enum Elf_ProgramHeaderType_ARM p_type;
    dword p_offset;
    dword p_vaddr;
    dword p_paddr;
    dword p_filesz;
    dword p_memsz;
    dword p_flags;
    dword p_align;
};

typedef enum Elf32_DynTag_ARM {
    DT_INIT_ARRAY=25,
    DT_CONFIG=1879047930,
    DT_RELASZ=8,
    DT_INIT=12,
    DT_HASH=4,
    DT_NULL=0,
    DT_GNU_CONFLICT=1879047928,
    DT_FLAGS=30,
    DT_AUXILIARY=2147483645,
    DT_GNU_HASH=1879047925,
    DT_DEBUG=21,
    DT_RELCOUNT=1879048186,
    DT_RELR=36,
    DT_FEATURE_1=1879047676,
    DT_FILTER=2147483647,
    DT_RELENT=19,
    DT_REL=17,
    DT_DEPAUDIT=1879047931,
    DT_RUNPATH=29,
    DT_GNU_PRELINKED=1879047669,
    DT_POSFLAG_1=1879047677,
    DT_VERDEF=1879048188,
    DT_ANDROID_RELRENT=1879040003,
    DT_MOVETAB=1879047934,
    DT_RPATH=15,
    DT_RELACOUNT=1879048185,
    DT_RELSZ=18,
    DT_SYMINSZ=1879047678,
    DT_VERNEED=1879048190,
    DT_ANDROID_RELASZ=1610612754,
    DT_FINI_ARRAY=26,
    DT_TEXTREL=22,
    DT_ANDROID_RELSZ=1610612752,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_VERNEEDNUM=1879048191,
    DT_STRTAB=5,
    DT_NEEDED=1,
    DT_PLTPADSZ=1879047673,
    DT_ANDROID_REL=1610612751,
    DT_FLAGS_1=1879048187,
    DT_ANDROID_RELR=1879040000,
    DT_SYMINFO=1879047935,
    DT_SYMTAB=6,
    DT_TLSDESC_GOT=1879047927,
    DT_JMPREL=23,
    DT_ANDROID_RELA=1610612753,
    DT_SYMINENT=1879047679,
    DT_SONAME=14,
    DT_FINI=13,
    DT_MOVEENT=1879047674,
    DT_RELRENT=37,
    DT_FINI_ARRAYSZ=28,
    DT_PREINIT_ARRAYSZ=33,
    DT_VERSYM=1879048176,
    DT_MOVESZ=1879047675,
    DT_RELAENT=9,
    DT_PLTRELSZ=2,
    DT_RELA=7,
    DT_VERDEFNUM=1879048189,
    DT_PLTREL=20,
    DT_CHECKSUM=1879047672,
    DT_TLSDESC_PLT=1879047926,
    DT_PLTPAD=1879047933,
    DT_RELRSZ=35,
    DT_BIND_NOW=24,
    DT_PREINIT_ARRAY=32,
    DT_SYMBOLIC=16,
    DT_GNU_LIBLIST=1879047929,
    DT_PLTGOT=3,
    DT_STRSZ=10,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_INIT_ARRAYSZ=27,
    DT_AUDIT=1879047932,
    DT_SYMENT=11,
    DT_ANDROID_RELRSZ=1879040001
} Elf32_DynTag_ARM;

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
};

typedef struct Elf32_Dyn_ARM Elf32_Dyn_ARM, *PElf32_Dyn_ARM;

struct Elf32_Dyn_ARM {
    enum Elf32_DynTag_ARM d_tag;
    dword d_val;
};

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
};

typedef struct Elf32_Ehdr Elf32_Ehdr, *PElf32_Ehdr;

struct Elf32_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    dword e_entry;
    dword e_phoff;
    dword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef ulong size_t;




void __cxa_finalize(void);
void __cxa_atexit(void);
void * malloc(size_t __size);
void * memset(void *__s,int __c,size_t __n);
void SbmBufferAddress(void);
void SbmBufferSize(void);
void __stack_chk_fail(void);
void VDecoderRegister(void);
void __android_log_print(void);
void FbmReturnBuffer(void);
void ResetVeInternal(void);
void FbmDestroy(void);
void free(void *__ptr);
void * memcpy(void *__dest,void *__src,size_t __n);
void AdapterVeGetBaseAddress(void);
void FbmEmptyBufferNum(void);
void AdapterVeWaitInterrupt(void);
void SbmStreamFrameNum(void);
void SbmFlushStream(void);
void __aeabi_ldivmod(void);
void SbmRequestStream(void);
void SbmReturnStream(void);
void __aeabi_uidiv(void);
void FbmCreate(void);
void FbmGetAlignValue(void);
void GetBufferSize(void);
void FbmShareBuffer(void);
void FbmValidPictureNum(void);
void __memcpy_chk(void);
void SbmBufferWritePointer(void);
void FbmGetBufferOffset(void);
void * memmove(void *__dest,void *__src,size_t __n);
void abort(void);
void __aeabi_uidivmod(void);
void FbmRequestBuffer(void);
void FUN_00012510(void);
undefined4 FUN_00012530(undefined4 param_1);
int H264DecoderGetFbm(int param_1,int param_2);
undefined4 H264DecoderGetFbmNum(int param_1);
undefined4 * CreateH264Decoder(undefined4 param_1);
undefined4 H264DecoderSetSbm(int param_1,undefined4 param_2,int param_3);
void FUN_00012680(int param_1,undefined *param_2);
void CedarPluginVDInit(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 H264ProcessExtraData(int param_1,undefined *param_2);
int H264PallocBufferBeforeDecode(int param_1,int param_2);
void H264FlushDelayedPictures(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void H264DecoderRest(int param_1,undefined4 param_2,undefined4 param_3);
void H264FreeMemory(int param_1,void *param_2);
void Destroy(void *param_1);
int H264DecoderInit(void *param_1,void *param_2,void *param_3,undefined4 param_4);
undefined * H264SearchNaluSize(int param_1,int param_2,uint param_3,size_t param_4);
uint H264DecoderDecode(uint param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void H264ResetDecoderParams(int param_1);
undefined4 H264InitDecode(int param_1,int *param_2,undefined *param_3,undefined4 param_4);
ulonglong H264DecodeExtraData(int param_1,int param_2,int param_3);
undefined4 H264RequestBitstreamData(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
void H264SetVbvParams(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,undefined4 param_6);
int H264ComputeScaleRatio(uint param_1,uint param_2);
void H264ComputeOffset(int param_1,int param_2,int param_3,int param_4);
undefined4 H264MallocFrmBuffer(int param_1,int param_2);
void H264SortDisplayFrameOrder(int param_1,int param_2,int param_3);
void H264exchangeValues(undefined4 *param_1,undefined4 *param_2);
void H264CongigureDisplayParameters(int param_1,int param_2);
void H264ProcessDecodeFrameBuffer(int param_1,int param_2,undefined4 param_3);
undefined8 H264CheckNextStartCode(int param_1,int param_2,uint param_3,uint param_4);
int H264JudgeFrameEnd(int param_1,int param_2);
undefined8 H264ProcessNaluUnit(uint param_1,char *param_2,int param_3,uint param_4,byte param_5);
void H264PrintRegister(int param_1);
void H264InitFuncCtrlRegister(int param_1);
void H264CheckBsDmaBusy(int param_1);
void H264EnableIntr(int param_1);
undefined4 H264GetbitOffset(int param_1,int param_2);
undefined4 H264UpdateDataPointer(int param_1,int param_2,int param_3);
void H264ConfigureBitstreamRegister(int param_1,int param_2,undefined4 param_3);
void H264SearchStartcode(int param_1,int param_2);
void H264ConfigureEptbDetect(int param_1,int param_2,undefined4 param_3,int param_4);
void H264ConfigureReconMvcolBufRegister(int param_1,int param_2,int param_3,int param_4);
void H264ConfigureFrameInfoRegister(int param_1,undefined4 *param_2);
void H264CalCulateRefFrameRegisterValue(int param_1,undefined4 *param_2,int param_3,int param_4);
void H264ConfigureRefFrameRegister(int param_1,int param_2);
void H264ConfigureRefListRegister(int param_1,int param_2);
void H264ConvertScalingMatrices(int param_1,int param_2,int param_3);
void H264ConfigureQuantMatrixRegister(int param_1,int param_2);
void H264ConfigureScaleRotateRegister(int param_1,int param_2,int param_3);
void H264ConfigMafRegisters(int param_1,int param_2);
void H264ConfigTopLeveLRegisters(int *param_1,int param_2);
void H264ConfigureSliceRegister(int param_1,int param_2,int param_3);
void H264ConfigureAvcRegister(int param_1,int param_2,int param_3,undefined4 param_4);
void H264SyncByte(int param_1);
undefined4 H264GetBits(int param_1,int param_2);
undefined4 H264ShowBits(int param_1,int param_2);
undefined4 H264GetUeGolomb(int param_1);
undefined4 H264GetSeGolomb(int param_1);
undefined4 H264GetDecodeMbNum(int param_1);
undefined4 H264GetFunctionStatus(int param_1);
uint H264VeIsr(int param_1);
void H264CongigureWeightTableRegisters(int param_1,int param_2);
int FUN_00016404(int *param_1,int *param_2,int param_3,int param_4,uint param_5);
int FUN_00016474(int param_1,int param_2);
bool FUN_000164c4(void *param_1,void *param_2,uint param_3,int param_4);
int FUN_00016500(int param_1,int param_2,int param_3,int param_4,uint param_5);
undefined4 FUN_000165ea(int param_1,int param_2,uint param_3,undefined4 param_4);
int H264PicNumExtract(int param_1,int param_2,uint *param_3);
void H264ReferenceRefresh(int param_1);
undefined4 H264FillDefaultRefList(int param_1,int param_2,int param_3);
void H264DirectRefListInit(int param_1);
uint H264DecodeRefPicMarking(int param_1,int param_2);
longlong H264ReorderInterviewPic(uint param_1,int param_2,int param_3,int param_4);
undefined4 H264DecodeRefPicListReordering(uint param_1,int param_2);
undefined4 H264ExecuteRefPicMarking(int param_1,undefined4 *param_2,int param_3);
longlong H264DecodeNalHeaderExt(uint param_1,int param_2,undefined4 param_3);
undefined4 H264DecodeNalSpsExt(void);
void FUN_000171ec(int param_1,int param_2);
undefined4 FUN_00017254(int param_1,uint param_2,uint param_3,size_t param_4);
void FUN_00017284(int param_1,void *param_2,size_t param_3,void *param_4,void *param_5);
void FUN_00017304(int param_1,int param_2,undefined *param_3,uint param_4,void *param_5,void *param_6);
int H264DecVuiParameters(int param_1,int param_2,int param_3);
undefined4 H264DecodeSps(int param_1,int param_2);
int H264GetVLCSymbol(int param_1,uint param_2,int param_3);
undefined4 H264DecodePps(int param_1,char *param_2,uint param_3);
void H264ProcessActiveFormat(int param_1,int param_2,int param_3,size_t param_4);
undefined4 H264DecodeSei(int param_1,int param_2,int param_3);
void H264InitPoc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 H264GetValidBufferIndex(int param_1,int *param_2);
undefined4 H264FrameStart(int param_1,int param_2);
void H264ExchangePts(undefined4 *param_1,undefined4 *param_2);
void H264CalculatePicturePts(int param_1);
undefined4 H264DecodeSliceHeader(uint param_1,int param_2);
undefined __cxa_finalize()
undefined __cxa_atexit()
undefined __aeabi_unwind_cpp_pr0()
void * malloc(size_t __size)
void * memset(void * __s, int __c, size_t __n)
undefined SbmBufferAddress()
undefined SbmBufferSize()
undefined __stack_chk_fail()
undefined VDecoderRegister()
undefined __android_log_print()
undefined __aeabi_unwind_cpp_pr1()
undefined FbmReturnBuffer()
undefined ResetVeInternal()
undefined FbmDestroy()
void free(void * __ptr)
void * memcpy(void * __dest, void * __src, size_t __n)
undefined AdapterVeGetBaseAddress()
undefined AdapterMemPalloc()
undefined AdapterMemPfree()
undefined AdapterMemRead()
undefined AdapterMemFlushCache()
undefined AdapterMemGetPhysicAddress()
undefined AdapterMemSet()
undefined AdapterMemCopy()
undefined AdapterMemWrite()
undefined AdapterSecureMemAdapterAlloc()
undefined AdapterSecureMemAdapterFree()
undefined AdapterSecureMemAdapterFlushCache()
undefined AdapterSecureMemAdapterGetPhysicAddress()
undefined AdapterSecureMemAdapterSet()
undefined AdapterSecureMemAdapterCopy()
undefined AdapterSecureMemAdapterRead()
undefined AdapterSecureMemAdapterWrite()
undefined FbmEmptyBufferNum()
undefined AdapterVeWaitInterrupt()
undefined SbmStreamFrameNum()
undefined SbmFlushStream()
undefined __aeabi_ldivmod()
undefined SbmRequestStream()
undefined SbmReturnStream()
undefined __aeabi_uidiv()
undefined FbmCreate()
undefined FbmGetAlignValue()
undefined GetBufferSize()
undefined FbmShareBuffer()
undefined FbmValidPictureNum()
undefined __memcpy_chk()
undefined SbmBufferWritePointer()
undefined FbmGetBufferOffset()
void * memmove(void * __dest, void * __src, size_t __n)
void abort(void)
undefined __aeabi_uidivmod()
undefined FbmRequestBuffer()


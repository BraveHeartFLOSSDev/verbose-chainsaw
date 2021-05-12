typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
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

typedef struct timeval timeval, *Ptimeval;

typedef long __time_t;

typedef long __suseconds_t;

struct timeval {
    __time_t tv_sec;
    __suseconds_t tv_usec;
};

typedef struct timezone timezone, *Ptimezone;

typedef struct timezone * __timezone_ptr_t;

struct timezone {
    int tz_minuteswest;
    int tz_dsttime;
};

typedef struct tm tm, *Ptm;

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long tm_gmtoff;
    char * tm_zone;
};

typedef __time_t time_t;

typedef ulong size_t;

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

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
};

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

typedef union pthread_mutex_t pthread_mutex_t, *Ppthread_mutex_t;

typedef struct __pthread_mutex_s __pthread_mutex_s, *P__pthread_mutex_s;

typedef union _union_13 _union_13, *P_union_13;

typedef struct __pthread_internal_slist __pthread_internal_slist, *P__pthread_internal_slist;

typedef struct __pthread_internal_slist __pthread_slist_t;

struct __pthread_internal_slist {
    struct __pthread_internal_slist * __next;
};

union _union_13 {
    int __spins;
    __pthread_slist_t __list;
};

struct __pthread_mutex_s {
    int __lock;
    uint __count;
    int __owner;
    int __kind;
    uint __nusers;
    union _union_13 field_0x14;
};

union pthread_mutex_t {
    struct __pthread_mutex_s __data;
    char __size[24];
    long __align;
};

typedef union pthread_mutexattr_t pthread_mutexattr_t, *Ppthread_mutexattr_t;

union pthread_mutexattr_t {
    char __size[4];
    int __align;
};




void __cxa_finalize(void);
void __cxa_atexit(void);
void __android_log_print(void);
void * malloc(size_t __size);
void * memset(void *__s,int __c,size_t __n);
void free(void *__ptr);
void VeInitEncoderPerformance(void);
void * memcpy(void *__dest,void *__src,size_t __n);
void VeUninitEncoderPerformance(void);
void * calloc(size_t __nmemb,size_t __size);
int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr);
int pthread_mutex_destroy(pthread_mutex_t *__mutex);
int pthread_mutex_lock(pthread_mutex_t *__mutex);
int pthread_mutex_unlock(pthread_mutex_t *__mutex);
void VeInitialize(void);
void MemAdapterOpen(void);
void SecureMemAdapterOpen(void);
void SecureMemAdapterClose(void);
void MemAdapterClose(void);
void VeEncoderLock(void);
void VeEncoderUnLock(void);
void VeReset(void);
void VeWaitEncoderInterrupt(void);
void VeGetRegisterBaseAddress(void);
void VeGetDramType(void);
void MemAdapterPalloc(void);
void MemAdapterPfree(void);
void MemAdapterFlushCache(void);
void MemAdapterGetPhysicAddress(void);
void MemAdapterGetPhysicAddressCpu(void);
void MemAdapterGetVirtualAddress(void);
void VeEnableEncoder(void);
void VeDisableEncoder(void);
void VeResetEncoder(void);
void VeSetDramType(void);
void __aeabi_uidiv(void);
void __aeabi_idiv(void);
char * strcpy(char *__dest,char *__src);
double log(double __x);
tm * gmtime_r(time_t *__timer,tm *__tp);
int snprintf(char *__s,size_t __maxlen,char *__format,...);
size_t strlen(char *__s);
void __aeabi_ldivmod(void);
void __aeabi_l2d(void);
void __aeabi_idivmod(void);
void __aeabi_uidivmod(void);
double sqrt(double __x);
void __aeabi_l2f(void);
void __aeabi_f2lz(void);
int gettimeofday(timeval *__tv,__timezone_ptr_t __tz);
void __stack_chk_fail(void);
double pow(double __x,double __y);
void FUN_00013c60(void);
undefined4 FUN_00013c80(undefined4 param_1);
void ** VideoEncCreate(void *param_1,undefined4 param_2);
undefined4 VideoEncInit(int *param_1,void *param_2,undefined4 param_3,undefined4 param_4);
undefined4 VideoEncUnInit(int *param_1,undefined4 param_2);
void VideoEncDestroy(void **param_1,undefined4 param_2);
undefined8 AllocInputBuffer(uint param_1,size_t *param_2,undefined4 param_3);
undefined8 GetOneAllocInputBuffer(int param_1,void *param_2,undefined4 param_3);
undefined8 FlushCacheAllocInputBuffer(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined8 ReturnOneAllocInputBuffer(int param_1,uint *param_2,undefined4 param_3);
undefined8 ReleaseAllocInputBuffer(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 AddOneInputBuffer(uint param_1,void *param_2,undefined4 param_3);
undefined4 VideoEncodeOneFrame(int *param_1);
undefined4 AlreadyUsedInputBuffer(uint param_1,void *param_2,undefined4 param_3);
void ValidBitstreamFrameNum(int *param_1);
undefined4 GetOneBitstreamFrame(int *param_1);
undefined4 FreeOneBitStreamFrame(int *param_1);
void VideoEncGetParameter(int *param_1);
void VideoEncSetParameter(int *param_1);
undefined4 AWJpecEnc(void *param_1,undefined4 param_2,void *param_3,size_t *param_4);
void FUN_000143d0(int *param_1,int param_2);
void * FrameBufferManagerCreate(size_t param_1,undefined4 param_2);
void FrameBufferManagerDestroy(void *param_1);
undefined4 AddInputBuffer(int param_1,void *param_2);
undefined4 GetInputBuffer(int param_1,void *param_2);
undefined8 AddUsedInputBuffer(int param_1,int *param_2,undefined4 param_3);
undefined4 GetUsedInputBuffer(int param_1,void *param_2);
undefined4 AllocateInputBuffer(int param_1,size_t *param_2);
undefined8 GetOneAllocateInputBuffer(int param_1,void *param_2,undefined4 param_3);
undefined4 FlushCacheAllocateInputBuffer(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 ReturnOneAllocateInputBuffer(int param_1,uint *param_2);
undefined8 BitStreamCreate(int param_1,undefined4 param_2,undefined4 param_3);
void BitStreamDestroy(pthread_mutex_t *param_1);
int BitStreamBaseAddress(int param_1,undefined4 param_2);
int BitStreamBasePhyAddress(int param_1,undefined4 param_2);
int BitStreamEndPhyAddress(int param_1,undefined4 param_2);
int BitStreamBufferSize(int param_1,undefined4 param_2);
int BitStreamFreeBufferSize(int param_1,undefined4 param_2);
undefined8 BitStreamFrameNum(int param_1,undefined4 param_2,undefined4 param_3);
undefined8 BitStreamWriteOffset(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 BitStreamAddOneBitstream(pthread_mutex_t *param_1,void *param_2);
pthread_mutex_t * BitStreamGetOneBitstream(pthread_mutex_t *param_1,undefined4 param_2);
pthread_mutex_t * BitStreamReturnOneBitstream(pthread_mutex_t *param_1,int param_2);
undefined4 EncAdapterInitialize(void);
void EncAdpaterRelease(void);
void EncAdapterLockVideoEngine(void);
void EncAdapterUnLockVideoEngine(void);
void EncAdapterVeReset(void);
void EncAdapterVeWaitInterrupt(void);
void EncAdapterVeGetBaseAddress(void);
void EncAdapterMemGetDramType(void);
void EncAdapterMemPalloc(void);
void EncAdapterMemPfree(void);
void EncAdapterMemFlushCache(void);
void EncAdapterMemGetPhysicAddress(void);
void EncAdapterMemGetPhysicAddressCpu(void);
void EncAdapterMemGetVirtualAddress(void);
void EncAdapterEnableEncoder(void);
void EncAdapterDisableEncoder(void);
void EncAdapterResetEncoder(void);
void EncAdapterInitPerformance(void);
void EncAdapterUninitPerformance(void);
undefined8 EncAdapterGetICVersion(undefined4 param_1);
void EncAdapterSetDramType(void);
void EncAdapterPrintTopVEReg(void);
void EncAdapterPrintEncReg(void);
void EncAdapterPrintIspReg(void);
void FUN_00015000(int *param_1,uint param_2);
void * IspCreate(undefined4 param_1,undefined4 param_2);
void IspDestroy(void *param_1);
void SetIspBaseAddress(undefined4 *param_1,undefined4 param_2);
void SetIspRegister(undefined4 *param_1,int *param_2);
void SetIspRegister_old_version(undefined4 *param_1,int *param_2);
void * VencoderDeviceCreate(int param_1);
void FUN_00015b24(int param_1,undefined4 param_2);
undefined4 JpegFreeOneBitstream(int param_1,undefined4 *param_2);
undefined8 JpegGetOneBitstream(int param_1,undefined4 *param_2,undefined4 param_3);
undefined8 JpegValidBitStreamFrameNum(int param_1,undefined4 param_2,undefined4 param_3);
undefined8 JpegInit(int *param_1,void *param_2,undefined4 param_3);
void * JpegEncOpen(undefined4 param_1,undefined4 param_2);
undefined4 JpegSetParameter(int param_1,int param_2,int *param_3);
undefined4 JpegGetParameter(int param_1,int param_2,undefined4 *param_3);
undefined4 JpegEncAllocThumbBuffer(int param_1);
undefined4 JpegEncMainFrame(undefined4 *param_1,int param_2,undefined4 param_3);
void JpegEncFreeThumbBuffer(int param_1);
void JpegEncClose(void **param_1);
undefined4 JpegUnInit(void **param_1);
undefined8 JpegEncThumbFrame(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 JpegEncEncode(undefined4 *param_1,int param_2,undefined4 param_3);
void FUN_000168f4(int param_1,undefined4 param_2);
void FUN_00016902(int param_1,undefined4 param_2);
void write_exif_byte(int param_1,undefined param_2);
void writer_exif_marker(int param_1,undefined param_2);
void write_exif_element_struct(short *param_1);
void write_exif_element(short *param_1,int param_2);
void * InitExif(undefined4 param_1);
void UnInitExif(void *param_1);
undefined4 set_exif_info(int param_1,char *param_2);
void write_APP1_marker_and_TIFF_header(int param_1);
void write_0th_IFD(short *param_1);
void write_exif_IFD(short *param_1);
void write_gps_IFD(short *param_1);
void write_1st_IFD(short *param_1);
undefined4 WriteExifInfo(short *param_1,char *param_2,int param_3);
undefined4 GetThumbNailOffset(int param_1);
undefined4 SetThumbNailSize(int param_1,undefined4 param_2);
undefined4 SetAPP1Size(int param_1,undefined4 param_2);
void FUN_00017744(int param_1,uint param_2);
void emit_dqt(int param_1,int param_2);
void emit_sof(int param_1);
void emit_sos(int param_1);
void jpeg_set_quant_tbl(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 H264SetParameter(int param_1,int param_2,int *param_3);
undefined4 H264FreeOneBitstream(int param_1,undefined4 *param_2);
undefined4 H264GetOneBitstream(int param_1,undefined4 *param_2);
undefined8 H264ValidBitStreamFrameNum(int param_1,undefined4 param_2,undefined4 param_3);
void H264EncClose(void **param_1);
undefined4 H264UnInit(void **param_1);
undefined4 H264GetParameter(int param_1,int param_2,undefined4 *param_3);
void init_classify_engine(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
void init_temporalfilter(int param_1,int param_2);
void init_dynamicMe(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 staticst_histogram(int param_1);
void flm_flag(int param_1);
void switch_T_SVC_QP(int param_1);
undefined4 h264_get_ve_capability(int param_1);
undefined4 h264_check_capability(int param_1);
void h264_init_default_param(int param_1);
void * H264EncOpen(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 H264InitMemory(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 h264_init_regInfo(int param_1);
undefined8 h264_init_sps_pps(int param_1,undefined4 param_2,undefined4 param_3);
undefined8 H264Init(int *param_1,void *param_2,undefined4 param_3);
undefined4 H264SetIspInfo(int param_1,int param_2);
float insert_p_skip(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 H264EncMotionDetect(int param_1);
undefined4 H264EncFrame(undefined4 *param_1,int param_2,undefined4 param_3);
undefined4 H264EncField(undefined4 *param_1,int param_2);
undefined4 H264EncEncode(undefined4 *param_1,void *param_2,undefined4 param_3,undefined4 param_4);
undefined4 CheckRegValue_h264(uint param_1,uint *param_2,uint param_3);
void FUN_0001a6b4(undefined4 param_1,int param_2,int param_3);
void FUN_0001a700(int param_1,int param_2);
void PutVlcSE(int param_1,int param_2);
undefined8 RbspTrailingBits(int param_1);
void initVUI(int param_1,int param_2);
int InitSPS(int param_1,int param_2);
ulonglong InitPPS(int param_1,int param_2);
undefined8 InitPrefixNAL(int param_1,int param_2);
void SliceHeader(int param_1,int param_2,int param_3);
void StartSlice(int param_1,uint param_2,int param_3,undefined4 param_4);
void _edata(void);
void h264_init_Poc(int param_1);
void getPoc(int param_1,int param_2);
void getSkipPoc(int param_1,int param_2);
double QP2Qstep(undefined4 param_1);
int Qstep2QP(undefined4 param_1,undefined4 param_2);
int _end(void);
void RCModelEstimator(int param_1,int param_2,int *param_3);
void MADModelEstimator(uint param_1,int param_2,int *param_3);
void updateMADModel(uint param_1);
void updateRCModel(uint param_1);
void updateModelQPFrame(int param_1,int param_2);
undefined4 updateQPRC2(int param_1);
void rc_init_gop_params(int param_1);
void resetRemainingBits(int param_1);
void rc_init_frame(int param_1);
void rc_update_pict_frame(int param_1,uint param_2);
void rc_init_sequence(int param_1);
void h264_init_rc_quene(int param_1);
void rcInitPic(int param_1);
void rcUpdatePic(int param_1);
void updateLastQP(int param_1,undefined4 param_2);
void FUN_0001c8f6(int param_1);
void FUN_0001c930(int param_1,int param_2);
void FUN_0001c950(int param_1,int param_2);
undefined4 writeMBLayerPSlice(int param_1,int param_2);
void biari_encode_symbol_final(uint *param_1,int param_2);
void arienco_reset_EC(int param_1);
void write_terminating_bit(uint *param_1,int param_2);
void arienco_start_encoding(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
void arienco_done_encoding(uint *param_1);
void biari_encode_symbol(uint *param_1,uint param_2,int param_3);
void writeMB_Pskip_flagInfo_CABAC(int param_1,int param_2,uint *param_3);
void ue_linfo(int param_1,int *param_2,int *param_3);
undefined4 symbol2uvlc(int param_1);
void writeUVLC2buffer(int param_1,int param_2);
void writeSE_UVLC(int param_1,int param_2);
undefined4 writeMBLayerPslice_CAVLC(int param_1,int *param_2,int param_3);
void biari_init_context(int param_1,undefined4 *param_2,byte *param_3);
void p_skip_mb_encode(int param_1,uint *param_2,int *param_3);
undefined4 put_bit_sw(undefined4 param_1,undefined4 param_2,int param_3);
undefined4 put_byte(undefined4 param_1,int param_2);
int PutVlcUE_sw(int param_1,int param_2);
int PutVlcSE_sw(int param_1,int param_2);
int initPrefixNAL_sw(int param_1,int param_2);
int SliceHeader_sw(int param_1,int param_2,int param_3);
void writeVlcByteAlign(int param_1);
void SODBtoRBSP(int param_1);
void RBSPtoEBSP(void *param_1,void *param_2,int param_3,size_t param_4);
void p_skip_frame_encode(int *param_1,int param_2,undefined4 param_3);
undefined4 VP8SetParameter(int param_1,int param_2,undefined4 *param_3);
undefined4 VP8FreeOneBitstream(int param_1,int *param_2,int param_3,int param_4);
undefined4 VP8GetOneBitstream(int param_1,uint *param_2);
void VP8EncClose(void **param_1);
undefined4 VP8UnInit(void **param_1);
undefined4 VP8GetParameter(int param_1,int param_2,undefined4 *param_3);
void VP8enc_time_start(int param_1,int param_2);
void VP8enc_time_end(int param_1,int param_2,undefined4 param_3);
void vp8_init_classify_engine(int param_1,int param_2);
void vp8_init_temporalfilter(int param_1,int param_2);
undefined4 vp8_staticst_histogram(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void vp8_init_default_param(int param_1);
void * VP8EncOpen(undefined4 param_1,undefined4 param_2);
undefined8 VP8InitMemory(int param_1,undefined4 param_2,undefined4 param_3);
undefined8 VP8Init(int *param_1,void *param_2);
undefined4 VP8SetIspInfo(int param_1,int param_2);
undefined VP8ValidBitStreamFrameNum(int param_1);
undefined4 VP8EncMotionDetect(int param_1);
undefined4 VP8EncFrame(undefined4 *param_1,int param_2);
undefined4 VP8EncEncode(undefined4 *param_1,void *param_2);
void vp8_encode_bool(uint *param_1,int param_2,int param_3);
void vp8_encode_value(uint *param_1,int param_2,int param_3);
void delay_icache_VP8(int param_1);
undefined4 CheckRegValue_VP8(uint param_1,uint *param_2,uint param_3);
void VP8PutBin(int param_1,int param_2,int param_3);
void VP8PutBinProb(int param_1,int param_2,uint param_3,int param_4);
void vp8_init_bool_encoder(undefined4 *param_1,int param_2);
int my_abs(uint param_1);
void FUN_0001f7c8(uint *param_1,uint param_2,int param_3);
void init_segmentation_lf(int param_1);
void vp8_SliceHeader(int param_1,int param_2);
void vp8_StartSlice(int param_1,int param_2);
uint FUN_0001fdf4(int *param_1,int param_2);
void FUN_0001fe1c(byte *param_1,int *param_2);
int FUN_0001fe3c(uint param_1,byte *param_2);
void FUN_0001ff14(int param_1,int param_2,int param_3,int param_4,int param_5);
void FUN_0001ff70(int param_1,int param_2,int param_3,int param_4,int param_5);
void FUN_0001ffb2(char *param_1,int param_2);
void FUN_0001ffce(int param_1,uint *param_2,int param_3,int param_4,int param_5,int *param_6);
void FUN_00020074(uint *param_1,int *param_2,byte *param_3,uint param_4,byte param_5,undefined4 *param_6,int param_7);
void FUN_00020118(int param_1,uint *param_2,byte *param_3,undefined4 param_4,byte *param_5,undefined4 *param_6);
void branch_counts(int param_1,int param_2,int param_3,undefined4 *param_4,int *param_5);
void vp8_tree_probs_from_distribution(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6,int param_7,uint param_8);
void vp8_default_coef_probs(int param_1);
void vp8_init_mbmode_probs(int param_1);
void Initvp8sramconfig(int param_1,int param_2);
void write_component_probs_aw(int param_1,undefined4 param_2,undefined4 param_3,void *param_4,undefined4 param_5,int param_6);
int vp8_estimate_entropy_savings(int param_1);
void vp8_estimate_ymode(int param_1);
void vp8_estimate_uvmode(int param_1);
void vp8_estimate_mvd(int param_1);
void vp8_estimate_skip(int param_1);
void vp8_kf_default_bmode_probs(int param_1);
void vp8_default_bmode_probs(int param_1);
void vp8_build_component_cost_table(int **param_1,undefined4 param_2,byte *param_3,int *param_4);
void vp8_setup_key_frame(int param_1,undefined4 param_2,undefined4 param_3);
void vp8_cost_tokens(int param_1,int param_2,int param_3);
void vp8_tokens_from_tree(int param_1,int param_2);
void vp8_write_mvprobs(int param_1);
void write_kfmodes(int param_1);
void pack_inter_mode_mvs(int param_1);
void update_coef_probs(int param_1);
void vp8_coef_tree_initialize(int param_1);
void VP8InitProb(int param_1,int param_2);
void VP8UpdateProb(int param_1,undefined4 param_2);
void vp8_calc_iframe_target_size(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void vp8_calc_auto_iframe_target_size(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void vp8_calc_pframe_target_size(int param_1,undefined4 param_2,undefined4 param_3);
void vp8_init_rc(int param_1);
int vp8_regulate_q(int param_1,int param_2);
void vp8_compute_frame_size_bounds(int param_1,int *param_2,int *param_3);
undefined4 vp8_dc_quant(int param_1,int param_2);
void vp8_init_mode_costs(int param_1);
void vp8_initialize_rd_consts(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
void VP8InitRC(int param_1);
void vp8_update_rate_correction_factors(int param_1,uint param_2);
void vp8_adjust_key_frame_context(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void vp8_update_gf_useage_maps(int param_1);
void VP8UpdateRC(int param_1);
void VeEncoderLock(void);
void VeEncoderLock(void);
void VeEncoderUnLock(void);
void VeEncoderUnLock(void);
void VeReset(void);
void VeReset(void);
void VeWaitEncoderInterrupt(void);
void VeWaitEncoderInterrupt(void);
void VeGetRegisterBaseAddress(void);
void VeGetRegisterBaseAddress(void);
void VeGetDramType(void);
void VeGetDramType(void);
void MemAdapterPalloc(void);
void MemAdapterPalloc(void);
void MemAdapterPfree(void);
void MemAdapterPfree(void);
void MemAdapterFlushCache(void);
void MemAdapterFlushCache(void);
void MemAdapterGetPhysicAddress(void);
void MemAdapterGetPhysicAddress(void);
void MemAdapterGetPhysicAddressCpu(void);
void MemAdapterGetPhysicAddressCpu(void);
void MemAdapterGetVirtualAddress(void);
void MemAdapterGetVirtualAddress(void);
void VeEnableEncoder(void);
void VeEnableEncoder(void);
void VeDisableEncoder(void);
void VeDisableEncoder(void);
void VeResetEncoder(void);
void VeResetEncoder(void);
void VeInitEncoderPerformance(void);
void VeInitEncoderPerformance(void);
void VeUninitEncoderPerformance(void);
void VeUninitEncoderPerformance(void);
void VeSetDramType(void);
void VeSetDramType(void);
undefined __cxa_finalize()
undefined __cxa_atexit()
undefined __android_log_print()
void * malloc(size_t __size)
void * memset(void * __s, int __c, size_t __n)
void free(void * __ptr)
undefined __aeabi_unwind_cpp_pr0()
undefined VeInitEncoderPerformance()
void * memcpy(void * __dest, void * __src, size_t __n)
undefined VeUninitEncoderPerformance()
undefined __aeabi_unwind_cpp_pr1()
void * calloc(size_t __nmemb, size_t __size)
int pthread_mutex_init(pthread_mutex_t * __mutex, pthread_mutexattr_t * __mutexattr)
int pthread_mutex_destroy(pthread_mutex_t * __mutex)
int pthread_mutex_lock(pthread_mutex_t * __mutex)
int pthread_mutex_unlock(pthread_mutex_t * __mutex)
undefined VeInitialize()
undefined MemAdapterOpen()
undefined SecureMemAdapterOpen()
undefined SecureMemAdapterClose()
undefined MemAdapterClose()
undefined VeRelease()
undefined VeEncoderLock()
undefined VeEncoderUnLock()
undefined VeReset()
undefined VeWaitEncoderInterrupt()
undefined VeGetRegisterBaseAddress()
undefined VeGetDramType()
undefined MemAdapterPalloc()
undefined MemAdapterPfree()
undefined MemAdapterFlushCache()
undefined MemAdapterGetPhysicAddress()
undefined MemAdapterGetPhysicAddressCpu()
undefined MemAdapterGetVirtualAddress()
undefined VeEnableEncoder()
undefined VeDisableEncoder()
undefined VeResetEncoder()
undefined VeSetDramType()
undefined __aeabi_uidiv()
undefined __aeabi_idiv()
char * strcpy(char * __dest, char * __src)
double log(double __x)
tm * gmtime_r(time_t * __timer, tm * __tp)
int snprintf(char * __s, size_t __maxlen, char * __format, ...)
size_t strlen(char * __s)
undefined __aeabi_ldivmod()
undefined __aeabi_l2d()
undefined __aeabi_idivmod()
undefined __aeabi_uidivmod()
double sqrt(double __x)
undefined __aeabi_l2f()
undefined __aeabi_f2lz()
int gettimeofday(timeval * __tv, __timezone_ptr_t __tz)
undefined __stack_chk_fail()
double pow(double __x, double __y)


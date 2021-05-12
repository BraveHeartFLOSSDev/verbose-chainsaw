typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef int    int3;
typedef long long    longlong;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined6;
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

typedef ulong size_t;

typedef uint __useconds_t;

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

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
};

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
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

typedef struct __pthread_internal_slist __pthread_internal_slist, *P__pthread_internal_slist;

struct __pthread_internal_slist {
    struct __pthread_internal_slist * __next;
};

typedef union pthread_mutex_t pthread_mutex_t, *Ppthread_mutex_t;

typedef struct __pthread_mutex_s __pthread_mutex_s, *P__pthread_mutex_s;

typedef union _union_13 _union_13, *P_union_13;

typedef struct __pthread_internal_slist __pthread_slist_t;

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

typedef union pthread_condattr_t pthread_condattr_t, *Ppthread_condattr_t;

union pthread_condattr_t {
    char __size[4];
    int __align;
};

typedef union pthread_mutexattr_t pthread_mutexattr_t, *Ppthread_mutexattr_t;

union pthread_mutexattr_t {
    char __size[4];
    int __align;
};

typedef union pthread_cond_t pthread_cond_t, *Ppthread_cond_t;

typedef struct _struct_16 _struct_16, *P_struct_16;

struct _struct_16 {
    int __lock;
    uint __futex;
    ulonglong __total_seq;
    ulonglong __wakeup_seq;
    ulonglong __woken_seq;
    void * __mutex;
    uint __nwaiters;
    uint __broadcast_seq;
};

union pthread_cond_t {
    struct _struct_16 __data;
    char __size[48];
    longlong __align;
};




void __cxa_finalize(void);
void __cxa_atexit(void);
void __android_log_assert(void);
void * malloc(size_t __size);
void CdxListAddTail(void);
void __android_log_print(void);
char * strdup(char *__s);
char * strstr(char *__haystack,char *__needle);
char * strchr(char *__s,int __c);
char * strrchr(char *__s,int __c);
int strcasecmp(char *__s1,char *__s2);
void free(void *__ptr);
int pthread_mutex_lock(pthread_mutex_t *__mutex);
int pthread_mutex_unlock(pthread_mutex_t *__mutex);
void CdxStreamOpen(void);
void * memset(void *__s,int __c,size_t __n);
void __stack_chk_fail(void);
void * memcpy(void *__dest,void *__src,size_t __n);
void __aeabi_ldivmod(void);
void __aeabi_uidiv(void);
void __memcpy_chk(void);
void CdxBitReaderCreate(void);
void CdxBitReaderGetBits(void);
void CdxBitReaderSkipBits(void);
void CdxBitReaderDestroy(void);
int memcmp(void *__s1,void *__s2,size_t __n);
void __CdxBufferCreate(void);
int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr);
int pthread_cond_init(pthread_cond_t *__cond,pthread_condattr_t *__cond_attr);
void __memset_chk(void);
void CdxListDel(void);
void CdxBufferDestroy(void);
void CdxGetNowUs(void);
void __aeabi_ul2d(void);
void __aeabi_d2ulz(void);
void CdxBitReaderNumBitsLeft(void);
void CdxBitReaderData(void);
void __aeabi_uldivmod(void);
int pthread_cond_signal(pthread_cond_t *__cond);
int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex);
int pthread_mutex_destroy(pthread_mutex_t *__mutex);
int pthread_cond_destroy(pthread_cond_t *__cond);
size_t strlen(char *__s);
int usleep(__useconds_t __useconds);
void * realloc(void *__ptr,size_t __size);
void __aeabi_uidivmod(void);
char * strcpy(char *__dest,char *__src);
void __aeabi_idiv(void);
int snprintf(char *__s,size_t __maxlen,char *__format,...);
void uncompress(void);
int puts(char *__s);
void __aeabi_l2d(void);
void __aeabi_l2f(void);
void * memmove(void *__dest,void *__src,size_t __n);
int strcmp(char *__s1,char *__s2);
int strncmp(char *__s1,char *__s2,size_t __n);
int sscanf(char *__s,char *__format,...);
int sprintf(char *__s,char *__format,...);
void FUN_00012e10(void);
undefined4 FUN_00012e30(undefined4 param_1);
undefined4 FUN_00012e70(char **param_1);
undefined4 AwParserRegister(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 * CdxParserCreate(char *param_1,undefined4 param_2);
undefined8 CdxParserOpen(char *param_1,undefined4 param_2,pthread_mutex_t *param_3,int *param_4,int *param_5,undefined4 *param_6);
undefined8 CdxParserPrepare(undefined4 *param_1,undefined4 param_2,pthread_mutex_t *param_3,int *param_4,int *param_5,char **param_6,undefined4 *param_7,undefined4 param_8);
uint FUN_000135a0(int param_1,uint param_2,uint param_3);
uint FUN_000135ec(int *param_1,int param_2);
uint FUN_0001361e(int *param_1);
uint FUN_00013638(int *param_1);
uint FUN_000136bc(int *param_1);
int FUN_0001374c(int param_1,uint *param_2);
int FUN_000137c0(int param_1,int param_2);
undefined4 FUN_000137f8(int param_1,int param_2);
void decode_scaling_list(int *param_1,int param_2);
void decode_scaling_matrices(int *param_1);
undefined4 probeH264SizeInfo(int param_1,int param_2,uint param_3);
int probeStartCode(int param_1,int param_2,int3 param_3);
undefined4 probeConvertAvcSpecificData(undefined *param_1,int param_2,undefined4 param_3,int *param_4);
int VerifyAvcSpecificDataForPacketOriented(int param_1,void *param_2,size_t param_3);
int probeH264SpecificData(int param_1,void *param_2,size_t param_3);
undefined4 probeMpeg2SpecificData(int param_1,int param_2,int param_3);
undefined4 decodeWmv3SequenceHeader(int param_1,int param_2,uint param_3);
int probeWmv3SpecificData(int param_1,int param_2,int param_3);
void * probeH265RefPictureNumber(int param_1,uint param_2);
int probeH265SpecificData(int param_1,int param_2,int param_3);
undefined4 ExtractDimensionsFromVOLHeader(int param_1,int param_2,char *param_3,undefined4 *param_4);
undefined4 probeMpeg4SpecificData(int param_1,int param_2,int param_3,int param_4);
undefined4 probeAvsSpecificData(int param_1,int param_2,uint param_3);
int ProbeVideoSpecificData(int param_1,void *param_2,uint param_3,int param_4,int param_5);
undefined4 TSAttribute(int param_1);
undefined4 TSGetStatus(int param_1);
undefined4 FUN_00015158(int param_1,undefined4 param_2);
undefined4 * TSParserOpen(undefined4 param_1,uint param_2);
longlong FUN_0001533c(uint param_1,undefined4 param_2,int param_3);
undefined4 FUN_000153cc(int param_1,int param_2,undefined4 param_3);
undefined4 TSGetMediaInfo(int param_1,void *param_2);
undefined4 TSRead(int param_1,void **param_2);
void FUN_00015524(undefined4 *param_1);
int FUN_000155c8(int param_1);
undefined4 FUN_000157dc(char **param_1);
void FUN_0001585c(undefined4 *param_1);
void FUN_00015900(char **param_1);
undefined4 FUN_000159a4(char **param_1);
void FUN_00015a20(char **param_1);
void FUN_00015ac4(char **param_1);
void FUN_00015b64(undefined4 *param_1);
void FUN_00015c04(undefined4 *param_1);
void FUN_00015ca4(undefined4 *param_1);
void FUN_00015d44(char **param_1);
void FUN_00015de4(int param_1,int param_2,int param_3);
undefined8 TSParserProbe(char **param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_00015ee8(int *param_1);
undefined2 U16_AT(undefined *param_1);
undefined4 PSISectionAppend(int param_1);
undefined4 * PSISectionIsComplete(int param_1);
int PSISectionIsEmpty(int param_1);
void PSISectionData(int param_1);
void PSISectionSize(int param_1);
void PSISectionClear(int param_1);
void DestroyPSISection(void *param_1);
void DestroyPSISections(int param_1);
void DestroyStream(void *param_1);
void DestroyStreams(int param_1);
void DestroyProgram(void *param_1);
void DestroyPrograms(int param_1);
void updatePCR(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void parseAdaptationField(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 * findPSISectionByPID(int param_1,int param_2);
undefined4 * findProgramByPID(int param_1,int param_2);
undefined4 * findStreamByPID(int param_1,int param_2);
undefined4 * findStreamByMediaType(int param_1,int param_2);
undefined4 StreamAppend(int param_1,void *param_2,size_t param_3);
char * findStartCodePrefix(char *param_1,int param_2);
undefined4 onPayloadData(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,char *param_7,int param_8);
longlong parseDescriptor(uint param_1,int param_2,undefined4 param_3);
undefined4 * VideoInProgram(int param_1);
undefined4 * MinorVideoInProgram(int param_1);
undefined4 * FUN_00016bb8(int param_1);
undefined4 FUN_00016bd0(int param_1,undefined4 *param_2);
undefined8 FUN_00016d84(void *param_1,int param_2,undefined4 param_3);
undefined4 parsePES(void *param_1,undefined4 param_2);
undefined4 StreamFlush(void *param_1);
int StreamParse(void *param_1,int param_2,int param_3,undefined4 param_4);
undefined4 ProgramParsePID(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int *param_6);
undefined4 * AudioInProgram(int param_1);
undefined4 * SubtitleInProgram(int param_1);
longlong parseProgramMap(uint param_1,undefined *param_2,char *param_3);
void parseProgramAssociationTable(uint param_1,undefined4 param_2);
undefined4 * parsePSISection(uint param_1,void *param_2,char *param_3);
undefined4 * parsePID(uint param_1,undefined4 param_2,int param_3,int param_4,int param_5);
undefined4 * parseTS(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 * feedTSPacket(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 AdjustBufferOfStreams(int param_1);
undefined4 ResetStreamsInProgram(int param_1);
undefined4 ResetPSISection(int param_1);
undefined8 PrintCacheBuffer(int *param_1,undefined4 param_2,undefined4 param_3);
undefined8 ProbePTS(char *param_1,int param_2,int param_3);
undefined8 ProbeLastPTS(char *param_1,int param_2,int param_3);
undefined4 ProbeByteRate(char *param_1,uint param_2,int param_3);
undefined4 SubmitLastData(int param_1);
undefined4 * GetEs(uint param_1,undefined4 *param_2);
undefined4 FUN_00019010(int param_1);
undefined4 * TSPrefetch(uint param_1,undefined4 *param_2);
int EstimateDuration(uint param_1);
undefined8 ResetCacheBuffer(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 TSForceStop(int param_1);
undefined4 TSClose(void *param_1);
undefined8 TSClrForceStop(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 GetCacheState(int param_1,int *param_2);
uint TSControl(int param_1,int param_2,undefined8 *param_3);
undefined4 TSInit(char *param_1);
undefined8 FindNextPTS(int param_1,char *param_2,int param_3,char **param_4);
int SeekToTime(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5);
int TSSeekTo(char *param_1,undefined4 param_2,uint param_3,uint param_4);
undefined4 __CdxMovParserGetStatus(int param_1);
undefined8 FUN_0001b030(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_0001b180(int param_1,char *param_2);
void FUN_0001b8a8(char **param_1);
undefined8 FUN_0001b94c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_0001ba1c(int *param_1,undefined param_2,undefined param_3,undefined param_4,undefined4 param_5);
undefined4 FUN_0001ba9c(char **param_1);
void FUN_0001bb1c(undefined4 *param_1);
undefined4 FUN_0001bbc0(int param_1,void *param_2);
void FUN_0001bf60(char **param_1);
uint FUN_0001c004(char **param_1,uint param_2);
undefined4 FUN_0001c0bc(int param_1,undefined4 *param_2);
void FUN_0001c300(undefined4 *param_1);
undefined4 FUN_0001c3a4(int param_1,undefined4 param_2,char **param_3);
char ** FUN_0001c5ec(char **param_1,uint param_2,undefined4 param_3,int param_4);
void __CdxMovParserInit(int param_1,undefined4 param_2);
undefined4 FUN_0001c814(undefined4 *param_1);
undefined4 FUN_0001c82c(undefined *param_1);
undefined8 FUN_0001c844(undefined *param_1);
void FUN_0001c85e(int param_1,int param_2,int param_3);
void FUN_0001c86a(int param_1,int param_2,int param_3);
void FUN_0001c87c(int param_1,int param_2,int param_3);
ulonglong FUN_0001c888(int param_1,int param_2,int param_3);
int FUN_0001c8ae(uint *param_1,int param_2);
uint FUN_0001c8dc(int param_1,uint *param_2,int *param_3);
undefined4 FUN_0001c90c(int param_1,int param_2,int param_3,int param_4);
undefined4 FUN_0001c98c(int param_1,int param_2);
undefined8 FUN_0001ca3c(int param_1,int param_2,int param_3);
undefined4 FUN_0001caa4(int param_1,uint param_2,int param_3);
undefined4 FUN_0001caf8(char **param_1);
void FUN_0001cb78(char **param_1);
undefined4 FUN_0001cc1c(int *param_1,undefined param_2,undefined param_3,undefined param_4,undefined4 param_5);
void FUN_0001cc9c(undefined4 *param_1);
uint FUN_0001cd40(char **param_1,uint param_2);
uint FUN_0001cdf8(int param_1,undefined4 *param_2,uint param_3,uint param_4);
undefined4 FUN_0001d0dc(int param_1,int param_2);
void FUN_0001d270(undefined *param_1,void *param_2);
void ReadStss(int param_1,int param_2,int param_3);
uint MovParseTraf(int param_1,char **param_2,undefined4 param_3,uint param_4);
int MovBuildKeyframeIdx(int param_1,int param_2);
uint * MovTimeToSampleSidx(int param_1,uint param_2,int param_3);
int MovTimeToSample(int param_1,int param_2);
int MovSeekSample(int param_1,uint param_2,int param_3);
undefined4 MovReadSampleList(int param_1);
int MovReadSampleFragment(int param_1);
int MovReadSample(int param_1);
int MovFindKeyframe(int param_1,int param_2,uint param_3);
undefined4 MovParseStbl(int param_1,undefined4 param_2,int param_3,uint param_4);
undefined4 MovParseTrak(int param_1,undefined4 param_2,int param_3,uint param_4);
undefined4 MovParseUdta(int param_1,undefined4 param_2,int param_3,uint param_4);
undefined4 MovParserMoov(undefined *param_1);
size_t FUN_00020fb8(undefined *param_1,char **param_2);
undefined4 CdxMovOpen(int param_1,char **param_2);
undefined8 CdxMovClose(int param_1);
int CdxMovExit(void *param_1);
int CdxMovRead(int param_1,undefined4 param_2);
undefined4 CdxMovSeek(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 _edata(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,undefined param_6,undefined param_7,undefined param_8,undefined param_9,char **param_10,uint param_11);
void * CdxMovInit(undefined4 *param_1);
int CdxMovSetStream(int param_1);
void FUN_00021c5c(int param_1);
bool FUN_00021cc4(int param_1);
uint FUN_00021cea(int param_1,int param_2);
uint FUN_00021d2a(int param_1,int param_2);
undefined4 mov_getvolhdr(byte *param_1,int param_2,uint *param_3,uint *param_4);
void aw_list_new(void);
undefined4 aw_list_rem(void **param_1,void *param_2);
void aw_list_del(void **param_1);
void aw_list_reset(void **param_1);
undefined4 aw_list_add(int *param_1,undefined4 param_2);
undefined4 aw_list_count(int param_1);
undefined4 * aw_list_get(undefined4 *param_1,uint param_2);
int ** aw_list_last(int **param_1);
void aw_list_rem_last(void **param_1);
void struct_list_free(int **param_1,undefined *param_2);
undefined4 aw_list_insert(int *param_1,int param_2,uint param_3);
uint FUN_00022242(byte *param_1);
undefined4 FUN_00022294(char **param_1);
void FUN_00022404(undefined4 *param_1);
undefined4 FUN_000224a8(char **param_1);
void FUN_00022640(char **param_1);
undefined4 FUN_000226e4(int param_1,undefined4 param_2,undefined4 *param_3);
void FUN_00022794(undefined4 *param_1);
undefined8 CdxMp3ParserOpen(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_000228fc(int *param_1);
undefined4 GetMPEGAudioFrameSize(uint param_1,int *param_2,uint *param_3,undefined4 *param_4,int *param_5,undefined4 *param_6);
uint * FUN_00022b30(void **param_1);
void _FINI_0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
undefined8 FUN_00022e90(void **param_1,undefined4 param_2,undefined4 param_3);
int FUN_00022ed0(int param_1,uint param_2,longlong *param_3,int *param_4,uint *param_5);
undefined4 _INIT_0(void);
undefined4 FUN_00023180(int param_1);
undefined4 GetXINGOffsetForTime(uint *param_1,undefined4 *param_2,int *param_3);
undefined4 FUN_000237c0(int param_1,undefined4 param_2,uint param_3,uint param_4);
uint FUN_00023a20(byte **param_1,uint param_2);
undefined4 FUN_00023ad8(int param_1,void **param_2);
void * FUN_00023b60(undefined4 param_1);
void FUN_00023b98(undefined4 *param_1);
int FUN_00023c3c(int param_1,void *param_2,void *param_3,int param_4,size_t param_5);
undefined4 FUN_00023c8c(int *param_1,undefined param_2,undefined param_3,undefined param_4,undefined4 param_5);
void FUN_00023d0c(undefined4 *param_1);
undefined4 FUN_00023db0(void *param_1);
void FUN_00023dcc(char **param_1);
undefined4 FUN_00024070(int param_1,int param_2);
void FUN_00024480(char **param_1,char *param_2);
int AACFindSyncWord(byte *param_1,int param_2);
int AACFindSyncWord_LATM(byte *param_1,int param_2);
undefined4 FUN_00024578(int param_1,int param_2);
undefined4 GetNextFrame(int param_1);
undefined4 FUN_00025248(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined8 FUN_00025638(int param_1,undefined4 param_2,undefined4 *param_3);
undefined4 FUN_00025788(char *param_1,int param_2);
void FUN_00025940(int param_1);
undefined4 FUN_00025b88(int param_1,char *param_2);
undefined4 FUN_00025f80(char **param_1);
void FUN_00026000(undefined4 *param_1);
undefined4 FUN_000260a4(int *param_1,undefined param_2,undefined param_3,undefined param_4,undefined4 param_5);
void FUN_00026230(int param_1,char *param_2);
undefined4 ID3Switch2SyncsafeInteger(uint *param_1);
int ID3PsrGETID3Len(char *param_1,int param_2);
undefined4 ID3PsrEncodingChange(int param_1);
undefined4 ID3PsrGetLanguageEncoding(byte *param_1);
uint ID3PsrShowBs(undefined4 param_1,int param_2,int param_3);
undefined4 ID3PsrSkipBsInByte(int param_1,int param_2);
uint ID3PsrGetBsInByte(int param_1,int param_2,int param_3);
void FUN_000267cc(uint *param_1,undefined4 *param_2,int param_3,int param_4);
void FUN_00026866(int *param_1,undefined4 *param_2,int param_3,int param_4);
int ID3PsrGetStringLen(int param_1);
int ID3PsrGeTID3_V2(int param_1);
undefined4 FUN_000270bc(int param_1);
undefined FUN_0002cb2e(int param_1, undefined4 param_2, int param_3, undefined param_4)
undefined __cxa_finalize()
undefined __cxa_atexit()
undefined __android_log_assert()
undefined __aeabi_unwind_cpp_pr0()
void * malloc(size_t __size)
undefined CdxListAddTail()
undefined __android_log_print()
char * strdup(char * __s)
char * strstr(char * __haystack, char * __needle)
char * strchr(char * __s, int __c)
char * strrchr(char * __s, int __c)
int strcasecmp(char * __s1, char * __s2)
void free(void * __ptr)
int pthread_mutex_lock(pthread_mutex_t * __mutex)
int pthread_mutex_unlock(pthread_mutex_t * __mutex)
undefined CdxStreamOpen()
void * memset(void * __s, int __c, size_t __n)
undefined __stack_chk_fail()
void * memcpy(void * __dest, void * __src, size_t __n)
undefined __aeabi_unwind_cpp_pr1()
undefined __aeabi_ldivmod()
undefined __aeabi_uidiv()
undefined __memcpy_chk()
undefined CdxBitReaderCreate()
undefined CdxBitReaderGetBits()
undefined CdxBitReaderSkipBits()
undefined CdxBitReaderDestroy()
int memcmp(void * __s1, void * __s2, size_t __n)
undefined __CdxBufferCreate()
int pthread_mutex_init(pthread_mutex_t * __mutex, pthread_mutexattr_t * __mutexattr)
int pthread_cond_init(pthread_cond_t * __cond, pthread_condattr_t * __cond_attr)
undefined __memset_chk()
undefined CdxListDel()
undefined CdxBufferDestroy()
undefined __aeabi_ul2d()
undefined __aeabi_d2ulz()
undefined CdxGetNowUs()
undefined CdxBitReaderNumBitsLeft()
undefined CdxBitReaderData()
undefined __aeabi_uldivmod()
int pthread_cond_signal(pthread_cond_t * __cond)
int pthread_cond_wait(pthread_cond_t * __cond, pthread_mutex_t * __mutex)
int pthread_mutex_destroy(pthread_mutex_t * __mutex)
int pthread_cond_destroy(pthread_cond_t * __cond)
size_t strlen(char * __s)
int usleep(__useconds_t __useconds)
void * realloc(void * __ptr, size_t __size)
undefined __aeabi_uidivmod()
undefined __aeabi_idiv()
char * strcpy(char * __dest, char * __src)
int snprintf(char * __s, size_t __maxlen, char * __format, ...)
undefined uncompress()
int puts(char * __s)
undefined __aeabi_l2d()
undefined __aeabi_l2f()
void * memmove(void * __dest, void * __src, size_t __n)
int strcmp(char * __s1, char * __s2)
int strncmp(char * __s1, char * __s2, size_t __n)
int sscanf(char * __s, char * __format, ...)
int sprintf(char * __s, char * __format, ...)


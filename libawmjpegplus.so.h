typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
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

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
};

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

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

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

typedef ulong size_t;




void __cxa_finalize(void);
void * memset(void *__s,int __c,size_t __n);
void FbmCreate(void);
void __stack_chk_fail(void);
void FbmRequestBuffer(void);
void FbmGetBufferOffset(void);
void FbmReturnBuffer(void);
void * memcpy(void *__dest,void *__src,size_t __n);
void AdapterMemFlushCache(void);
void * malloc(size_t __size);
void free(void *__ptr);
void AdapterVeGetBaseAddress(void);
void __android_log_print(void);
void __aeabi_idiv(void);
void AdapterMemGetPhysicAddress(void);
void VeWaitJpegDecodeInterrupt(void);
void AdapterMemPfree(void);
void __aeabi_uidiv(void);
void __aeabi_idivmod(void);
void ResetJpegVeInternal(void);
void ResetVeInternal(void);
void FbmDestroy(void);
void AdapterMemPalloc(void);
void FbmEmptyBufferNum(void);
void SbmRequestStream(void);
void __memcpy_chk(void);
void SbmReturnStream(void);
void SbmFlushStream(void);
void SbmBufferAddress(void);
void SbmBufferSize(void);
void VDecoderRegister(void);
uint GetBytePlus(int param_1,uint param_2);
void JpegSkipVariablePlus(int param_1);
undefined4 JpegFirstMarkerPlus(int param_1);
undefined4 JpegNextMarkerPlus(int param_1);
undefined4 JpegGetSoiPlus(int param_1);
uint JpegMallocFrmBufferPlus(int param_1,byte *param_2);
undefined4 JpegGetSofPlus(int param_1);
bool JpegGetDqtPlus(int param_1);
int JpegGetDhtPlus(int param_1);
undefined4 JpegGetSosPlus(int param_1);
undefined4 JpegGetDriPlus(int param_1);
undefined JpegReadMarkersPlus(int param_1);
uint JpegDecoderMainPlus(int param_1,byte *param_2);
void MjpegSetSecDispParamsPlus(int param_1,int param_2,int param_3);
void MjpegTransformPlanner422To420_Plus(int param_1,int param_2);
longlong RotateMjpegBySoftPlus(void *param_1,void *param_2,int param_3,int param_4,int param_5);
undefined4 getJpegInfoSize(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4);
int FUN_00011c9a(void);
undefined8 SetJpegFormatPlus(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 FillJpegHuffmanTablePlus(int param_1);
undefined4 InitJpegHwPlus(int param_1);
undefined4 JpegHwDecPlus(undefined4 param_1,int param_2);
undefined4 Tile_Mode_Decode(undefined4 param_1,int param_2);
void MjpegDecoderResetPlus(int param_1);
undefined4 * CreateMjpegPlusDecoder(undefined4 param_1);
void FUN_00013104(void *param_1);
undefined4 FUN_00013184(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_00013548(int param_1,undefined4 param_2,int param_3);
void CedarPluginVDInit(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined __cxa_finalize()
undefined __cxa_atexit()
undefined __aeabi_unwind_cpp_pr0()
void * memset(void * __s, int __c, size_t __n)
undefined FbmCreate()
undefined __stack_chk_fail()
undefined FbmRequestBuffer()
undefined FbmGetBufferOffset()
undefined FbmReturnBuffer()
void * memcpy(void * __dest, void * __src, size_t __n)
undefined AdapterMemFlushCache()
void * malloc(size_t __size)
void free(void * __ptr)
undefined AdapterVeGetBaseAddress()
undefined __aeabi_unwind_cpp_pr1()
undefined __android_log_print()
undefined __aeabi_idiv()
undefined AdapterMemGetPhysicAddress()
undefined VeWaitJpegDecodeInterrupt()
undefined AdapterMemPfree()
undefined __aeabi_uidiv()
undefined __aeabi_idivmod()
undefined ResetJpegVeInternal()
undefined ResetVeInternal()
undefined FbmDestroy()
undefined AdapterMemPalloc()
undefined FbmEmptyBufferNum()
undefined SbmRequestStream()
undefined __memcpy_chk()
undefined SbmReturnStream()
undefined SbmFlushStream()
undefined SbmBufferAddress()
undefined SbmBufferSize()
undefined VDecoderRegister()


typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined3;
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
int pthread_mutex_lock(pthread_mutex_t *__mutex);
void * memset(void *__s,int __c,size_t __n);
void * memcpy(void *__dest,void *__src,size_t __n);
int pthread_mutex_unlock(pthread_mutex_t *__mutex);
int usleep(__useconds_t __useconds);
void __android_log_print(void);
void __aeabi_idiv(void);
void __aeabi_ldivmod(void);
void * malloc(size_t __size);
void __memcpy_chk(void);
void free(void *__ptr);
void __stack_chk_fail(void);
int pthread_mutex_destroy(pthread_mutex_t *__mutex);
int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr);
void __aeabi_uidiv(void);
void * memmove(void *__dest,void *__src,size_t __n);
void FUN_00013458(void);
undefined4 FUN_00013478(undefined4 param_1);
undefined4 FUN_000134b8(pthread_mutex_t *param_1,void *param_2,size_t param_3);
void ss_xxxx(undefined4 param_1,undefined4 *param_2);
size_t ShowAbsBits(ushort *param_1,size_t param_2,int param_3);
void FlushAbsBits(int param_1,int param_2);
size_t FREAD_AC320(ushort *param_1,size_t param_2,int param_3);
undefined4 FSeek_AC320(int param_1,int param_2);
undefined4 FSeek_AC320_Origin(int param_1,int param_2,int param_3);
undefined4 BigLitEndianCheck(int param_1,int param_2);
uint ParseRequestAudioBitstreamBuffer(pthread_mutex_t *param_1,int param_2,int *param_3,int *param_4,uint *param_5,uint *param_6,undefined4 *param_7);
undefined4 ParseUpdateAudioBitstreamData(pthread_mutex_t *param_1,int param_2,uint param_3,uint param_4,int param_5);
undefined4 ParseAudioStreamDataSize(int param_1);
void BitstreamQueryQuality(pthread_mutex_t *param_1,undefined4 *param_2,undefined4 *param_3);
void ParseBitstreamSeekSync(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5);
undefined4 InitializeAudioDecodeLib(pthread_mutex_t *param_1,undefined4 *param_2,int param_3);
void DecodeAudioFrame(int param_1);
undefined4 DestroyAudioDecodeLib(pthread_mutex_t *param_1);
void SetAudiolibRawParam(int param_1,undefined param_2);
pthread_mutex_t * CreateAudioDecodeLib(void);
undefined4 AdCedarBuildAACPacketHdr(byte *param_1,int param_2,int param_3,undefined *param_4,undefined4 *param_5,uint param_6,int param_7);
undefined4 AdCedarUpdateAACPacketHdr(int param_1,int param_2,int param_3);
undefined4 split_xiph_headers(ushort *param_1,int param_2,undefined4 *param_3,size_t *param_4);
undefined4 SetAudioBsHeader_PCM(int param_1,int param_2);
size_t FUN_00015198(int *param_1,void *param_2,void *param_3,int param_4,size_t param_5);
uint AudioAACAACframeDec(int *param_1,short *param_2,size_t *param_3);
undefined4 AudioAACAACDecExit(int param_1);
undefined4 AudioAACAACDecInit(int param_1);
void FUN_00016938(undefined4 *param_1);
undefined4 * AudioAACDecInit(void);
undefined4 AudioAACDecExit(void *param_1);
int AACFindSyncWord_before(int param_1,int param_2);
int AACFindSyncWord_before_LATM(int param_1,int param_2);
undefined4 GetBeforeFrame(int *param_1);
uint GetNextFrame(int *param_1);
uint AudioAACfuntion(int *param_1,int param_2);
uint FUN_000173f8(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5);
void ** AACResetDecoder(void **param_1);
void AACFreeDecoder(void **param_1);
void ** AACInitDecoder(void *param_1);
int AACFindSyncWord(byte *param_1,int param_2);
int AACFindSyncWord_LATM(byte *param_1,int param_2);
void AACGetLastFrameInfo(int param_1,undefined4 *param_2);
void AACSetRawBlockParams(int *param_1,uint param_2,int param_3);
undefined4 AACFlushCodec(int *param_1);
uint AACDecode(int *param_1,byte **param_2,byte **param_3,undefined2 *param_4);
void raac_SetBitstreamPointer(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
uint raac_GetBits(byte **param_1,uint param_2);
uint raac_GetBitsNoAdvance(byte **param_1,uint param_2);
void raac_AdvanceBitstream(byte **param_1,uint param_2);
int raac_CalcBitsUsed(int *param_1,int param_2,int param_3);
void raac_ByteAlignBitstream(byte **param_1);
void raac_ClearBuffer(int param_1,int param_2);
void raac_FreeBuffers(void **param_1);
void ** raac_AllocateBuffers(void);
undefined4 raac_DecodeProgramConfigElement(undefined *param_1,byte **param_2);
undefined4 raac_DecodeNextElement(int *param_1,int *param_2,uint *param_3,int *param_4);
undefined4 raac_Dequantize(int *param_1,int param_2);
undefined4 raac_DeinterleaveShortBlocks(void);
undefined4 raac_UnpackADTSHeader(undefined4 *param_1,void **param_2,uint *param_3,int *param_4);
undefined4 UnpackLATMHeader(undefined4 *param_1,int *param_2,uint *param_3,int *param_4,undefined4 *param_5);
int raac_GetADTSChannelMapping(int *param_1,int param_2,uint param_3,int param_4);
undefined4 raac_UnpackADIFHeader(int *param_1,int *param_2,uint *param_3,int *param_4);
undefined4 raac_SetRawBlockParams(int *param_1,uint param_2,int param_3,int param_4,int param_5);
undefined4 raac_PrepareRawBlock(int *param_1);
undefined4 raac_FlushCodec(int *param_1);
undefined4 raac_IMDCT(int *param_1,int param_2,int param_3,int param_4);
void FUN_0001acc8(int param_1,byte **param_2);
void FUN_0001b00c(int param_1,byte **param_2);
void FUN_0001b064(byte **param_1);
uint FUN_0001b298(byte **param_1);
byte * FUN_0001b2c4(int param_1,byte **param_2,int param_3);
int FUN_0001c298(byte **param_1);
void * latm_init(void);
void * raac_latm_reset(void *param_1);
undefined4 latm_exit(void *param_1);
undefined4 latm_getinfo(int param_1);
void AudioAACaacframe_latm(uint *param_1,undefined4 param_2,undefined4 param_3);
int FUN_0001c85c(byte **param_1);
undefined4 raac_DecodeICSInfo(byte **param_1,undefined *param_2,int param_3);
undefined4 raac_DecodeNoiselessData(int *param_1,int *param_2,uint *param_3,int *param_4,int param_5);
undefined4 raac_PNS(int *param_1,int param_2);
int raac_StereoProcess(int *param_1);
uint raac_TNSFilter(int *param_1,int param_2);
undefined4 raac_InitSBR(int param_1);
undefined4 raac_ResetSBR(int param_1);
void raac_FreeSBR(int param_1);
undefined4 raac_DecodeSBRBitstream(int param_1,int param_2);
undefined4 raac_DecodeSBRData(int param_1,int param_2,int param_3);
undefined4 raac_FlushCodecSBR(int param_1);
void FUN_0001f014(int param_1,int param_2);
int FUN_0001f064(char *param_1,char *param_2,char *param_3,int param_4,byte param_5,int param_6,int param_7);
undefined4 raac_CalcFreqTables(int param_1,uint *param_2,int param_3);
undefined4 raac_AdjustHighFreq(uint **param_1,uint **param_2,uint **param_3,uint **param_4,uint **param_5,int param_6);
undefined8 raac_GenerateHighFreq(int param_1,int param_2,int *param_3,int param_4);
int * raac_DecWindowOverlapNoClip(int param_1,int param_2,int *param_3,int param_4,int param_5);
void raac_DecWindowOverlapLongStartNoClip(int param_1,int *param_2,int *param_3,int param_4,int param_5);
void raac_DecWindowOverlapLongStopNoClip(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5);
void raac_DecWindowOverlapShortNoClip(int param_1,int param_2,int param_3,int param_4,int param_5);
int raac_InvRNormalized(int param_1);
longlong raac_RatioPowInv(uint param_1,uint param_2,int param_3,undefined4 param_4);
int raac_SqrtFix(int param_1,uint param_2,uint *param_3);
void FUN_0002293c(int *param_1);
void FUN_000229e8(int *param_1,int param_2);
uint raac_QMFAnalysis(int *param_1,int param_2,uint *param_3,int param_4,int *param_5,uint param_6);
void raac_QMFSynthesis(int *param_1,int param_2,int *param_3,uint param_4,ushort *param_5,int param_6);
void FUN_00022e20(byte **param_1,int param_2,int param_3,int param_4,int param_5);
void FUN_00022e88(byte **param_1,int param_2,int param_3);
void FUN_00022ec0(byte **param_1,int param_2,int param_3,int param_4);
undefined4 FUN_00022f28(byte **param_1,byte param_2,byte *param_3);
undefined4 _FINI_0(undefined param_1,undefined4 param_2,undefined *param_3,uint param_4,undefined param_5,undefined param_6,undefined param_7,undefined param_8,undefined1 param_9);
int raac_GetSampRateIdx(int param_1);
undefined4 raac_UnpackSBRHeader(byte **param_1,int *param_2);
undefined4 raac_UnpackSBRSingleChannel(byte **param_1,int param_2,int param_3);
undefined4 raac_UnpackSBRChannelPair(byte **param_1,int param_2,int param_3);
uint ga_config_get_data(int *param_1,uint *param_2);
uint readBits(int param_1,uint param_2);
undefined4 unreadBits(int param_1,int param_2,uint param_3);
void byteAlign(int param_1);
void newBitstream(int *param_1,undefined4 param_2,undefined4 param_3,undefined *param_4);
void deleteBitstream(int param_1,undefined4 param_2,undefined *param_3,undefined4 param_4);
undefined4 feedBitstream(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
int bitsLeftInBitstream(int *param_1);
undefined4 setAtBitstream(int *param_1,int param_2,int param_3);
void raac_CVKernel1(int *param_1,uint *param_2);
void raac_CVKernel2(int *param_1,undefined4 *param_2);
void raac_QMFAnalysisConv(int *param_1,int param_2,int param_3,undefined4 *param_4);
void raac_QMFSynthesisConv(int *param_1,int param_2,int param_3,ushort *param_4,int param_5);
void raac_DCT4(int param_1,uint *param_2,int param_3);
void raac_R4FFT(int param_1,int *param_2);
byte * raac_DecodeHuffmanScalar(int param_1,int param_2,uint param_3,int *param_4);
void FUN_000253c0(byte **param_1,int param_2,int param_3,uint *param_4);
void FUN_000254e4(byte **param_1,int param_2,int param_3,uint *param_4);
void FUN_000255d0(byte **param_1,int param_2,int param_3,uint *param_4);
uint raac_DecodeSpectrumLong(int param_1,byte **param_2,int param_3);
undefined4 raac_DecodeSpectrumShort(int param_1,byte **param_2,int param_3);
void raac_FFT32C(int *param_1);
int FUN_00026320(byte **param_1,int param_2);
undefined4 raac_DecodeSBREnvelope(byte **param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
undefined4 raac_DecodeSBRNoise(byte **param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
void raac_UncoupleSBREnvelope(int param_1,int param_2,int param_3,int param_4);
void raac_UncoupleSBRNoise(int param_1,int param_2,int param_3,int param_4);
undefined4 AudioMP3mp3DecExit(int param_1);
undefined4 AudioMP3mp3DecInit(undefined4 *param_1);
void FUN_00026e20(undefined4 *param_1);
undefined4 * AudioMP3DecInit(void);
undefined4 AudioMP3DecExit(void *param_1);
size_t AudioMP3FillReadBuffer(int param_1,void *param_2,void *param_3,int param_4,size_t param_5,int param_6);
int AudioMP3BufferDataCheck(int param_1,int param_2);
undefined4 AudioMP3MP3FRAMEDEC(ushort *param_1,int *param_2,int *param_3);
int AudioMP3mp3frameDec(uint param_1,int param_2,float param_3,float param_4,float param_5,int *param_6,ushort *param_7,int *param_8);
void AudioMP3GETTAG_XING(int param_1,int param_2,int param_3,int param_4);
undefined4 AudioMP3ExtractI4(undefined *param_1);
uint AudioMP3ExtractIn(int param_1,int param_2);
ulonglong AudioMP3Time2Frame(uint param_1,int param_2,undefined4 param_3,float param_4,float param_5,undefined4 param_6,int param_7);
float AudioMP3XING_SeekPosition(uint param_1,int param_2,float param_3,float param_4,float param_5,int param_6,int param_7,int param_8);
void AudioMP3GETTAG_VBRI(int param_1,int param_2);
undefined4 AudioMP3VBRITagCheck(int *param_1);
uint AudioMP3VBRI_SeekPosition(uint param_1,int param_2,undefined4 param_3,float param_4,float param_5,int param_6,int param_7,int param_8);
undefined4 AudioMP3VBRFseek(uint param_1,int param_2,float param_3,float param_4,float param_5,uint param_6,int param_7,int *param_8);
void CalNowTime(uint param_1,int param_2,undefined4 *param_3,uint param_4);
undefined4 MP3FrameHeaderSync(int param_1);
undefined4 MP3FFSKIPframe(int param_1);
undefined4 MP3FFEndCheck(int param_1);
uint FameLengthcal(int param_1);
undefined4 MP3RevSKIPframe(int param_1,int param_2);
undefined4 checkheader(byte *param_1,int param_2);
undefined4 Read4or5byteHeadAndCheck(int param_1);
undefined4 Mp3RevFrameHeaderSync(int param_1);
undefined4 MP3RevEndCheck(int param_1);
undefined4 AudioMP3do_func(uint param_1,int param_2,float param_3,float param_4,float param_5,int *param_6);
void FUN_00028be8(byte **param_1,ushort *param_2,int param_3);
int FUN_00028cc0(byte **param_1,uint param_2);
undefined4 AudioMP3mad_layer_I(int *param_1);
undefined4 AudioMP3mad_layer_II(int *param_1);
undefined4 AudioMP3layerI_IIDec(int *param_1,undefined2 *param_2);
void AudioMP3layerI_IIDecInit(int param_1);
void ** AudioMP3MP3InitDecoder(void);
void AudioMP3MP3FreeDecoder(void **param_1);
int AudioMP3MP3FindSyncWord(int param_1,int param_2);
void AudioMP3MP3GetLastFrameInfo(int param_1,undefined4 *param_2);
undefined4 AudioMP3MP3GetNextFrameInfo(uint **param_1,undefined4 *param_2,int param_3);
undefined4 AudioMP3MP3Decode(uint **param_1,uint **param_2,uint **param_3,undefined2 *param_4,int param_5);
int AudioMP3UnpackScaleFactors(int *param_1,int param_2,uint *param_3,int param_4,int param_5,int param_6);
void AudioMP3mad_stream_buffer(int param_1,int param_2,int param_3);
undefined4 AudioMP3Subband(int param_1,ushort *param_2);
void AudioMP3mad_synth_mute(int param_1);
void AudioMP3mad_synth_init(int param_1);
void AudioMP3mad_synth_frame(int param_1,int param_2);
int AudioMP3scale(int param_1);
void AudioMP3output(int param_1,undefined2 *param_2);
void AudioMP3mad_bit_init(undefined4 *param_1,undefined4 param_2);
int AudioMP3mad_bit_length(int *param_1,int *param_2);
int AudioMP3mad_bit_nextbyte(int *param_1);
uint AudioMP3mad_bit_read(byte **param_1,uint param_2);
uint AudioMP3mad_bit_crc(byte *param_1,undefined4 param_2,uint param_3,uint param_4);
void xmp3_SetBitstreamPointer(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
uint xmp3_GetBits(byte **param_1,uint param_2);
int xmp3_CalcBitsUsed(int *param_1,int param_2,int param_3);
int AudioMP3CheckPadBit(int *param_1);
undefined4 AudioMP3UnpackFrameHeader2(int param_1,uint *param_2,int param_3);
undefined4 AudioMP3UnpackFrameHeader(uint **param_1,int param_2);
undefined4 AudioMP3UnpackSideInfo(int *param_1,byte *param_2);
void AudioMP3FreeBuffers(void **param_1);
void ** AudioMP3AllocateBuffers(void);
void xmp3_FDCT32(int *param_1,int param_2,int param_3,int param_4,int param_5);
uint AudioMP3Dequantize(int *param_1,int param_2);
uint FUN_0002e150(uint *param_1,uint *param_2,int param_3,uint param_4);
int xmp3_DequantChannel(int param_1,int param_2,int *param_3,int param_4,undefined *param_5,int param_6,undefined4 *param_7);
byte * AudioMP3DecodeHuffman(int *param_1,byte *param_2,uint *param_3,int param_4,int param_5,int param_6);
void FUN_0002f16c(int *param_1,int *param_2,int param_3);
uint FUN_0002f30c(int param_1,int param_2,uint param_3,uint param_4);
undefined4 AudioMP3IMDCT(int *param_1,int param_2,int param_3);
void xmp3_PolyphaseMono(ushort *param_1,int *param_2,int *param_3);
void xmp3_PolyphaseStereo(ushort *param_1,int *param_2,int *param_3);
void xmp3_MidSideProc(int param_1,int param_2,uint *param_3);
void xmp3_IntensityProcMPEG1(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,undefined4 param_7,uint *param_8);
void xmp3_IntensityProcMPEG2(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6,int param_7,undefined4 param_8,uint *param_9);
undefined __cxa_finalize()
undefined __cxa_atexit()
int pthread_mutex_lock(pthread_mutex_t * __mutex)
void * memset(void * __s, int __c, size_t __n)
void * memcpy(void * __dest, void * __src, size_t __n)
int pthread_mutex_unlock(pthread_mutex_t * __mutex)
undefined __aeabi_unwind_cpp_pr0()
int usleep(__useconds_t __useconds)
undefined __android_log_print()
undefined __aeabi_unwind_cpp_pr1()
undefined __aeabi_idiv()
undefined __aeabi_ldivmod()
void * malloc(size_t __size)
undefined __memcpy_chk()
void free(void * __ptr)
undefined __stack_chk_fail()
int pthread_mutex_destroy(pthread_mutex_t * __mutex)
int pthread_mutex_init(pthread_mutex_t * __mutex, pthread_mutexattr_t * __mutexattr)
undefined __aeabi_uidiv()
void * memmove(void * __dest, void * __src, size_t __n)


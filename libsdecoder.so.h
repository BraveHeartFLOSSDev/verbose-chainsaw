typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned int    uint;
typedef unsigned long    ulong;
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

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef longlong __quad_t;

typedef __quad_t __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char * _IO_read_ptr;
    char * _IO_read_end;
    char * _IO_read_base;
    char * _IO_write_base;
    char * _IO_write_ptr;
    char * _IO_write_end;
    char * _IO_buf_base;
    char * _IO_buf_end;
    char * _IO_save_base;
    char * _IO_backup_base;
    char * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE * _chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t * _lock;
    __off64_t _offset;
    void * __pad1;
    void * __pad2;
    void * __pad3;
    void * __pad4;
    size_t __pad5;
    int _mode;
    char _unused2[15];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct _IO_FILE FILE;

typedef int __ssize_t;

typedef __ssize_t ssize_t;

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




void __cxa_finalize(void);
void __cxa_atexit(void);
void * malloc(size_t __size);
void __android_log_print(void);
void free(void *__ptr);
size_t strlen(char *__s);
void * memset(void *__s,int __c,size_t __n);
void * memcpy(void *__dest,void *__src,size_t __n);
void __memset_chk(void);
void __stack_chk_fail(void);
int strncasecmp(char *__s1,char *__s2,size_t __n);
int sscanf(char *__s,char *__format,...);
char * strncpy(char *__dest,char *__src,size_t __n);
void __strlen_chk(void);
int open(char *__file,int __oflag,...);
char * strstr(char *__haystack,char *__needle);
char * strdup(char *__s);
int close(int __fd);
void __strncpy_chk(void);
__off_t lseek(int __fd,__off_t __offset,int __whence);
int dup(int __fd);
void * realloc(void *__ptr,size_t __size);
char * strcpy(char *__dest,char *__src);
void __aeabi_uidiv(void);
void __strcpy_chk(void);
void * memchr(void *__s,int __c,size_t __n);
long strtol(char *__nptr,char **__endptr,int __base);
char * strchr(char *__s,int __c);
void __memcpy_chk(void);
int strncmp(char *__s1,char *__s2,size_t __n);
int atoi(char *__nptr);
ssize_t read(int __fd,void *__buf,size_t __nbytes);
int pthread_mutex_lock(pthread_mutex_t *__mutex);
int pthread_mutex_unlock(pthread_mutex_t *__mutex);
int pthread_mutex_destroy(pthread_mutex_t *__mutex);
int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr);
void __aeabi_idiv(void);
void __aeabi_ldivmod(void);
void abort(void);
char * strrchr(char *__s,int __c);
int sprintf(char *__s,char *__format,...);
int fputc(int __c,FILE *__stream);
FILE * fopen(char *__filename,char *__modes);
void FUN_000123d0(void);
undefined4 FUN_000123f0(undefined4 param_1);
undefined4 ProbeSubtitleStream(char *param_1,char **param_2,int *param_3);
undefined4 ProbeSubtitleStreamFd(int param_1,byte *param_2,byte *param_3,byte **param_4,int *param_5);
int * CreateSubtitleDecoder(int *param_1);
void DestroySubtitleDecoder(void *param_1);
void ResetSubtitleDecoder(int param_1);
undefined4 DecodeSubtitleStream(int *param_1);
void NextSubtitleItem(int param_1);
void RequestSubtitleItem(int param_1);
void FlushSubtitleItem(int param_1);
void EmptySubtitleItemNum(int param_1);
char * FUN_00012708(char *param_1);
char * FUN_00012768(char *param_1);
byte * FUN_0001282c(byte *param_1,char *param_2);
void FUN_0001289c(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,int param_6,int param_7,int *param_8);
void probe_smi_language(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,int param_6,int param_7,int *param_8,int param_9,int param_10);
undefined4 ProbeSubtitleStreamImpl(char *param_1,char **param_2,int *param_3);
undefined4 ProbeSubtitleStreamFdImpl(int param_1,byte *param_2,byte *param_3,byte **param_4,int *param_5);
uint * SubExternalNextSubItemInfo(uint *param_1);
int * SubExternalReqeustSubItem(int *param_1);
void SubExternalFlushSubItem(void);
void SubExternalReset(int param_1,undefined4 param_2,uint param_3,uint param_4);
undefined4 SubExternalDecode(int param_1);
void SubExternalExit(void *param_1);
undefined * SubExternalInit(int param_1);
void FUN_00014174(char *param_1);
char * stristr(char *param_1,char *param_2);
int sub_parse_smi_lang_index(int param_1,int param_2,int param_3);
int sub_format_autodetect(int param_1,byte *param_2,int param_3,uint *param_4);
void add_newLine_tag(char *param_1);
void remove_control_data(byte *param_1);
char * process_external_sub_control_symbols(char *param_1);
byte * sub_read_line_timeAfter(int param_1,int param_2,byte **param_3,int param_4);
byte * sub_read_line_mpsub(int param_1,int param_2,byte **param_3,int param_4);
byte * sub_read_line_inscribercg(int param_1,int param_2,byte **param_3,int param_4);
byte * sub_read_line_sonic(int param_1,int param_2,byte **param_3,int param_4);
int _edata(undefined4 param_1,undefined4 param_2,undefined param_3,undefined param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined param_10,int param_11,undefined4 param_12,int param_13,int param_14,int *param_15,void *param_16,int param_17,int param_18);
byte * sub_read_line_s2k(int param_1,int param_2,byte **param_3,int param_4);
int sub_read_line_rtf(int param_1,int param_2,int *param_3,int param_4);
byte * _end(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined param_10,uint param_11,undefined4 param_12,int param_13,undefined4 param_14,undefined4 param_15,int *param_16,undefined *param_17);
byte * sub_read_line_tmplayer(int param_1,int param_2,byte **param_3,int param_4);
undefined4 sub_read_line_dat(void);
byte * sub_read_line_asc(int param_1,int param_2,byte **param_3,int param_4);
byte * sub_read_line_time_useFrame(int param_1,int param_2,byte **param_3,int param_4);
byte * sub_read_line_time_diffLine(int param_1,int param_2,byte **param_3,int param_4);
byte * sub_read_line_time_sameLine(int param_1,int param_2,byte **param_3,int param_4);
byte * sub_read_line_sofni(int param_1,int param_2,byte **param_3,undefined4 param_4);
byte * sub_read_line_sami(int param_1,int param_2,int param_3,int param_4);
int sub_read_line_cpc600(int param_1,int param_2,int *param_3,int param_4);
void sub_ssa_ass_parse_info(int param_1,int param_2,int param_3);
byte * sub_read_line_ssa(int param_1,int param_2,byte **param_3,int param_4);
byte * sub_read_line_IAuthorScript(int param_1,int param_2,byte **param_3,int param_4);
void sub_sort_accorind_time(int param_1,void *param_2,void *param_3);
void * sub_post_process(int param_1,int param_2,void *param_3,void *param_4);
void sub_select_update_idx(int param_1,undefined4 param_2,uint param_3,uint param_4);
void strcpy_trim(undefined *param_1,byte *param_2);
void sub_set_playResx_playResy(int param_1);
byte sub_ssa_ass_convert_style(char *param_1,char *param_2,char *param_3,char *param_4);
uint sub_ssa_ass_convert_colorValue(char *param_1);
void sub_ssa_ass_process_styles_info(byte *param_1,char *param_2,int param_3);
void remove_strim_blank(char *param_1);
void sub_post_ssa_ass_ctrl_inf(byte *param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6);
char * sub_ssa_ass_parse_style_info(int param_1,undefined4 param_2,char *param_3,void *param_4,int *param_5,int *param_6,int *param_7,uint *param_8);
void sub_ssa_ass_convert_control_tags(char *param_1,int param_2);
void sub_post_process_ssa_ass(byte *param_1,int param_2,char *param_3,char *param_4,int *param_5,int *param_6);
void sub_ssa_ass_get_disply_pos(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6,int param_7,int param_8);
int open_stream(int __fd);
void free_stream(int param_1);
byte * stream_read_line(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,int param_6,byte *param_7,int param_8,int param_9);
uint SubInternalReqeustSubItem(int param_1);
void SubInternalExit(void *param_1);
void SubInternalFlushSubItem(void *param_1,int *param_2);
void SubInternalReset(int param_1);
int SubInternalDecode(int param_1,void **param_2);
undefined * SubInternalInit(int param_1);
uint SubInternalEmptySubItemNum(int param_1);
uint SubInternalNextSubItemInfo(int param_1);
undefined4 sub_internal_check_valid_buf(int param_1);
int sub_internal_itxt_dec(int param_1);
void sub_internal_init_disp_parameters(int param_1,int param_2,undefined4 param_3);
void sub_internal_set_bitmap_format(undefined *param_1,undefined4 param_2);
void sub_internal_malloc_memory(undefined *param_1,int param_2,undefined4 param_3);
void sub_process_disp_pos(int param_1,int param_2,int param_3);
uint conver_data_format(int param_1,undefined param_2,undefined param_3,undefined param_4,byte param_5);
void convert_to_rgb(int param_1,undefined *param_2,undefined *param_3,undefined *param_4,byte param_5,byte param_6,byte param_7);
int sub_internal_pgs_dec(int param_1);
int convert_data_to_bmp(int param_1,int param_2,byte *param_3,byte *param_4,char param_5);
void * run_len_decode_process(int param_1,int param_2,void *param_3,int param_4,ushort param_5,uint param_6,byte param_7,int param_8,byte param_9,undefined4 *param_10);
uint get_next_bits(uint param_1,byte *param_2,int *param_3,uint *param_4,uint *param_5);
int run_length_decode(int param_1,int param_2,int param_3,ushort *param_4,int param_5,byte param_6);
int process_sp_dcsqt(int param_1,int param_2,int param_3,undefined2 *param_4);
int sub_internal_dvdsub_dec(int param_1);
undefined4 subDivxConvertIndexToBmp(int param_1,uint *param_2,int param_3);
ushort * subDivxParsePicInf(uint *param_1,ushort *param_2,int param_3);
uint subDivxRunLengthDecode(uint param_1,uint param_2,uint param_3,int param_4,void *param_5);
int subInternalDivxDecode(int param_1);
uint getNext32Bits(byte *param_1);
undefined2 getNext16Bits(undefined *param_1);
undefined4 ittxt_get_dispPos(char *param_1);
undefined4 ittxt_get_disp_control_inf(int param_1,byte *param_2,uint param_3);
void ittxt_sub_convert_control_data(byte *param_1,int param_2,byte *param_3);
int sub_internal_ittxt_dec(int param_1);
uint get_ssa_sub_info(int param_1,byte *param_2,uint param_3);
int sub_internal_issa_dec(int param_1);
void SubIdxsubExit(void **param_1);
uint SubIdxsubEmptySubItemNum(int *param_1);
void SubIdxsubFlushSubItem(void **param_1,int *param_2);
uint SubIdxsubReqeustSubItem(int *param_1);
uint SubIdxsubNextSubItemInfo(int *param_1);
void IdxsubRemoveStrimBlank(char *param_1);
undefined4 IdxsubParseIdxFile(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,int param_7);
void IdxsubSearchSub(int param_1,undefined4 param_2,uint param_3,uint param_4);
void SubIdxsubReset(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
undefined4 IdxsubReadData(int param_1);
void SubIdxsubDecode(int *param_1);
void SubIdxsubOpenFilePath(int param_1,char *param_2);
void ** SubIdxsubInit(int param_1);
undefined4 write_u_short_int(uint param_1,FILE *param_2);
undefined4 write_u_long_int(uint param_1,FILE *param_2);
void bmp_write_header(FILE *param_1,uint param_2,uint param_3,int param_4);
void bmp_write_data(FILE *param_1,uint param_2,int param_3,int param_4);
void bmp_write_data_color(FILE *param_1,uint param_2,int param_3,int param_4,int param_5,int param_6);
void writebmp(char *param_1,uint param_2,uint param_3,int param_4);
void writebmpcolor(char *param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6);
void YUV420toRGB(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7);
uint subGetBits(int *param_1,int param_2);
void subInitGetBits(uint *param_1,uint param_2,uint param_3);
undefined4 subGetBitsCount(int param_1);
uint subShowBits(int *param_1,int param_2);
void subSkipBits(int param_1,int param_2);
void subAlignGetBits(int param_1);
undefined __cxa_finalize()
undefined __cxa_atexit()
undefined __aeabi_unwind_cpp_pr0()
void * malloc(size_t __size)
undefined __android_log_print()
void free(void * __ptr)
undefined __aeabi_unwind_cpp_pr1()
size_t strlen(char * __s)
void * memset(void * __s, int __c, size_t __n)
void * memcpy(void * __dest, void * __src, size_t __n)
undefined __memset_chk()
undefined __stack_chk_fail()
int strncasecmp(char * __s1, char * __s2, size_t __n)
int sscanf(char * __s, char * __format, ...)
char * strncpy(char * __dest, char * __src, size_t __n)
undefined __strlen_chk()
int open(char * __file, int __oflag, ...)
char * strstr(char * __haystack, char * __needle)
char * strdup(char * __s)
int close(int __fd)
undefined __strncpy_chk()
__off_t lseek(int __fd, __off_t __offset, int __whence)
int dup(int __fd)
void * realloc(void * __ptr, size_t __size)
char * strcpy(char * __dest, char * __src)
undefined __aeabi_uidiv()
undefined __strcpy_chk()
void * memchr(void * __s, int __c, size_t __n)
long strtol(char * __nptr, char * * __endptr, int __base)
char * strchr(char * __s, int __c)
undefined __memcpy_chk()
int strncmp(char * __s1, char * __s2, size_t __n)
int atoi(char * __nptr)
ssize_t read(int __fd, void * __buf, size_t __nbytes)
int pthread_mutex_lock(pthread_mutex_t * __mutex)
int pthread_mutex_unlock(pthread_mutex_t * __mutex)
int pthread_mutex_destroy(pthread_mutex_t * __mutex)
int pthread_mutex_init(pthread_mutex_t * __mutex, pthread_mutexattr_t * __mutexattr)
undefined __aeabi_idiv()
undefined __aeabi_ldivmod()
void abort(void)
char * strrchr(char * __s, int __c)
int sprintf(char * __s, char * __format, ...)
int fputc(int __c, FILE * __stream)
FILE * fopen(char * __filename, char * __modes)
int fclose(FILE * __stream)
int puts(char * __s)


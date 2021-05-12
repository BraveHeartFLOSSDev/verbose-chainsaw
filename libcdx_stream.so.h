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

typedef ushort sa_family_t;

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

typedef struct timeval timeval, *Ptimeval;

typedef long __time_t;

typedef long __suseconds_t;

struct timeval {
    __time_t tv_sec;
    __suseconds_t tv_usec;
};

typedef struct in_addr in_addr, *Pin_addr;

typedef uint uint32_t;

typedef uint32_t in_addr_t;

struct in_addr {
    in_addr_t s_addr;
};

typedef struct _IO_FILE FILE;

typedef struct sockaddr sockaddr, *Psockaddr;

struct sockaddr {
    sa_family_t sa_family;
    char sa_data[14];
};

typedef uint __socklen_t;

typedef __socklen_t socklen_t;

typedef long __fd_mask;

typedef struct fd_set fd_set, *Pfd_set;

struct fd_set {
    __fd_mask fds_bits[128];
};

typedef int __ssize_t;

typedef __ssize_t ssize_t;

typedef uint __useconds_t;

typedef struct hostent hostent, *Phostent;

struct hostent {
    char * h_name;
    char * * h_aliases;
    int h_addrtype;
    int h_length;
    char * * h_addr_list;
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

typedef ulong pthread_t;

typedef union pthread_attr_t pthread_attr_t, *Ppthread_attr_t;

union pthread_attr_t {
    char __size[36];
    long __align;
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




void __cxa_finalize(void);
void __cxa_atexit(void);
void * malloc(size_t __size);
void CdxListAddTail(void);
void __android_log_print(void);
void * memset(void *__s,int __c,size_t __n);
char * strchr(char *__s,int __c);
void __android_log_assert(void);
int strcasecmp(char *__s1,char *__s2);
void __memcpy_chk(void);
void __stack_chk_fail(void);
int pthread_mutex_lock(pthread_mutex_t *__mutex);
int pthread_mutex_unlock(pthread_mutex_t *__mutex);
void free(void *__ptr);
void * memcpy(void *__dest,void *__src,size_t __n);
in_addr_t inet_addr(char *__cp);
hostent * gethostbyname(char *__name);
char * strncpy(char *__dest,char *__src,size_t __n);
int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout);
ssize_t send(int __fd,void *__buf,size_t __n,int __flags);
void __errno(void);
int snprintf(char *__s,size_t __maxlen,char *__format,...);
void __aeabi_idiv(void);
ssize_t recv(int __fd,void *__buf,size_t __n,int __flags);
int strncmp(char *__s1,char *__s2,size_t __n);
int strncasecmp(char *__s1,char *__s2,size_t __n);
char * strstr(char *__haystack,char *__needle);
int atoi(char *__nptr);
void * realloc(void *__ptr,size_t __size);
void * calloc(size_t __nmemb,size_t __size);
int memcmp(void *__s1,void *__s2,size_t __n);
void __strlen_chk(void);
void __aeabi_l2d(void);
int close(int __fd);
long lrand48(void);
int socket(int __domain,int __type,int __protocol);
int fcntl(int __fd,int __cmd,...);
int connect(int __fd,sockaddr *__addr,socklen_t __len);
int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen);
int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,void *__arg);
int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex);
int usleep(__useconds_t __useconds);
size_t strlen(char *__s);
char * strcpy(char *__dest,char *__src);
int sscanf(char *__s,char *__format,...);
long strtol(char *__nptr,char **__endptr,int __base);
double strtod(char *__nptr,char **__endptr);
int pthread_cond_signal(pthread_cond_t *__cond);
int pthread_mutex_destroy(pthread_mutex_t *__mutex);
int pthread_cond_destroy(pthread_cond_t *__cond);
int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr);
int pthread_cond_init(pthread_cond_t *__cond,pthread_condattr_t *__cond_attr);
int sprintf(char *__s,char *__format,...);
void CdxUrlNew(void);
void __sprintf_chk(void);
void CdxUrlFree(void);
void __strncpy_chk(void);
int printf(char *__format,...);
int puts(char *__s);
void __aeabi_uldivmod(void);
void __aeabi_ldivmod(void);
char * strdup(char *__s);
void CdxAsynSocket(void);
int inet_aton(char *__cp,in_addr *__inp);
int getsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t *__optlen);
void CdxSockAsynSend(void);
int fflush(FILE *__stream);
void __memset_chk(void);
void CdxUrlUnescapeString(void);
void CdxCheck4Proxies(void);
__off64_t lseek64(int __fd,__off64_t __offset,int __whence);
long syscall(long __sysno,...);
void CdxDumpThreadStack(void);
ssize_t read(int __fd,void *__buf,size_t __nbytes);
int strcmp(char *__s1,char *__s2);
int open(char *__file,int __oflag,...);
int dup(int __fd);
ssize_t readlink(char *__path,char *__buf,size_t __len);
void FUN_00012e50(void);
undefined4 FUN_00012e70(undefined4 param_1);
undefined4 AwStreamRegister(undefined4 param_1,undefined4 param_2);
int CdxStreamCreate(char **param_1);
int CdxStreamOpen(char **param_1,pthread_mutex_t *param_2,int *param_3,undefined **param_4,undefined4 *param_5);
undefined4 _edata(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5);
undefined4 _end(pthread_mutex_t *param_1);
void FUN_000132cc(int param_1,int *param_2,int param_3,int param_4);
hostent * FUN_0001331c(int param_1,char **param_2,uint param_3);
void aw_set_rtmp_parameter(int param_1);
int aw_rtmp_sockBuf_send(uint *param_1,int param_2,int param_3,int param_4);
void FUN_00013b74(int param_1,int param_2,int param_3,int param_4);
int FUN_00013c3c(int param_1,int param_2,uint param_3);
int CdxRecv(uint param_1,int param_2,int param_3,int param_4,int *param_5);
undefined8 aw_rtmp_sockbuf_fill(uint *param_1,int *param_2);
undefined4 FUN_00013da4(int param_1,int param_2);
undefined * aw_amf_encode_int16(undefined *param_1,undefined *param_2,undefined4 param_3);
undefined * aw_amf_encode_int24(undefined *param_1,undefined *param_2,undefined4 param_3);
undefined * aw_amf_encode_int32(undefined *param_1,undefined *param_2,undefined4 param_3);
undefined4 aw_encode_int32Le(undefined *param_1,undefined4 param_2);
undefined * aw_amf_encode_string(undefined *param_1,undefined *param_2,void **param_3);
undefined *aw_amf_encode_number(undefined *param_1,undefined *param_2,undefined4 param_3,undefined4 param_4);
undefined * aw_amf_encode_boolean(undefined *param_1,undefined *param_2,int param_3);
undefined *aw_amf_encode_named_string(undefined *param_1,undefined *param_2,void **param_3,void **param_4);
undefined *aw_amf_encode_named_number(undefined *param_1,undefined *param_2,void **param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
undefined *aw_amf_encode_named_boolean(undefined *param_1,undefined *param_2,void **param_3,int param_4);
void aw_amf_prop_get_name(undefined4 *param_1,undefined4 *param_2);
char aw_amf_decode_boolean(char *param_1);
undefined2 aw_amf_decode_int16(undefined *param_1);
uint aw_amf_decode_int24(byte *param_1);
uint aw_amf_decode_int32(byte *param_1);
void aw_amf_decode_string(undefined *param_1,undefined4 *param_2);
undefined8 aw_amf_decode_number(undefined *param_1);
void * aw_rtmp_send_packet(int param_1,int *param_2,int param_3);
void FUN_00014494(int param_1);
void FUN_00014538(undefined4 param_1,undefined4 param_2,int param_3);
void FUN_000145d0(int param_1,void **param_2);
void FUN_00014660(int param_1);
void FUN_00014704(int param_1);
void FUN_000147a8(int param_1,void **param_2);
void FUN_0001484c(int param_1,void **param_2);
void FUN_000148e0(int param_1);
void FUN_00014994(int param_1);
void FUN_00014a58(int param_1);
void FUN_00014b80(undefined4 param_1,undefined4 param_2,int param_3);
void FUN_00014c20(int param_1);
undefined4 aw_rtmp_get_time(void);
undefined * aw_amf_prop_encode(void **param_1,undefined *param_2,undefined *param_3);
int * FUN_00014d38(int param_1,int *param_2);
undefined * aw_amf_encode(int *param_1,undefined *param_2,undefined *param_3);
int aw_rtmp_is_connected(int param_1);
void aw_rtmp_packet_free(int param_1);
void * aw_rtmp_packet_alloc(int param_1,int param_2);
void aw_rtmp_send_ctrl(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
void aw_rtmp_send_pause(int param_1,int param_2,int param_3);
void aw_amf_decode_long_string(byte *param_1,byte **param_2);
int aw_amf3_read_integer(int param_1,uint *param_2);
undefined8 aw_amf3_read_string(int param_1,int *param_2,undefined4 param_3);
void aw_amf3_class_definition_add_prop(int param_1,undefined4 *param_2);
int aw_amf3_class_definition_get_prop(int param_1,int param_2,int param_3);
void aw_amf_prop_set_name(undefined4 *param_1,undefined4 *param_2);
int aw_amf3_decode(int param_1,uint *param_2,int param_3,int param_4,int param_5);
int aw_amf3_prop_decode(int param_1,int *param_2,byte *param_3,int param_4,int param_5);
int aw_amf_decode(uint param_1,uint *param_2,byte *param_3,int param_4,uint param_5);
undefined8 aw_amf_prop_decode(uint param_1,undefined4 *param_2,byte *param_3,int param_4,uint param_5);
int aw_amf_decode_array(uint param_1,uint *param_2,int param_3,int param_4,int param_5,uint param_6);
void aw_amf_prop_dump(char **param_1);
void aw_amf_dump(int *param_1);
void aw_amf_prop_get_object(int param_1,undefined4 *param_2);
int aw_amf_get_prop(int param_1,int *param_2,void **param_3,int param_4);
undefined4 FUN_00015a1c(int param_1,int *param_2);
undefined4 aw_amf_prop_get_number(int param_1);
undefined4 aw_rtmp_find_first_matching_property(int param_1,int *param_2,void **param_3,void *param_4);
void aw_rtmp_send_serverBw(int param_1);
void aw_rtmp_send_create_stream(int param_1);
void aw_amf_prop_reset(int param_1);
void aw_amf_reset(int *param_1);
undefined4 aw_rtmp_find_prefix_property(int param_1,int *param_2,void **param_3,void *param_4);
undefined4 FUN_00015d68(int param_1,byte *param_2,int param_3);
void aw_send_seek(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
int aw_rtmp_sock_buf_close(int *param_1);
void aw_rtmp_close(int param_1);
byte * FUN_0001606c(int param_1,byte *param_2,int param_3);
int aw_rtmp_client_packet(int param_1,undefined4 *param_2,uint param_3);
undefined8 FUN_00016ae4(int param_1,void *param_2,size_t param_3);
void * aw_rtmp_read_packet(int param_1,void **param_2);
undefined aw_rtmp_connect_stream(int param_1,int param_2);
uint FUN_00016f68(int param_1);
int * aw_rtmp_connect1(int param_1,int *param_2);
undefined8 FUN_00017178(int param_1);
int aw_rtmp_connect0(int param_1,sockaddr *param_2);
hostent * aw_rtmp_connect(int param_1,int *param_2);
int aw_rtmp_connect3(int param_1,sockaddr *param_2);
int __RtmpGetProbeData(int param_1);
undefined4 __RtmpAttribute(void);
undefined4 __RtmpGetIoState(int param_1);
undefined4 __RtmpEos(int param_1);
undefined8 __RtmpSize(int param_1);
undefined8 __RtmpTell(int param_1);
undefined8 __RtmpSeek(int param_1,undefined4 param_2,uint param_3,uint param_4,int param_5);
uint __RtmpRead(int param_1,void *param_2,uint param_3);
undefined8 __RtmpSeekToTime(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void aw_rtmp_parse_playpath(char **param_1,char **param_2);
undefined4 aw_rtmp_parseUrl(char *param_1,undefined4 *param_2,char **param_3,uint *param_4,char **param_5,char **param_6);
void aw_amf_add_prop(uint *param_1,void *param_2);
int aw_rtmp_setOpt(int param_1,char **param_2,byte **param_3);
int aw_rtmp_setupUrl2(char **param_1,int param_2);
int aw_rtmp_get_next_media_packet(int param_1,void **param_2);
uint aw_rtmp_read_one_packet(int param_1,char *param_2,uint param_3);
uint aw_rtmp_stream_read(int param_1,char *param_2,uint param_3);
undefined4 aw_read_rtmp_stream2(int param_1);
void RtmpClose(void *param_1);
undefined4 __RtmpClose(void *param_1);
longlong __RtmpForceStop(int param_1,uint param_2);
undefined4 __RtmpClrForceStop(int param_1);
undefined4 __RtmpControl(int param_1,int param_2,undefined4 *param_3);
void aw_rtmp_init(undefined **param_1);
undefined8 aw_rtmp_streaming_start2(char **param_1,int param_2,uint param_3);
void FUN_00018984(void **param_1);
undefined8 FUN_00018a00(uint param_1,void *param_2,uint param_3);
char * FUN_00018a98(int param_1);
char ** FUN_00018ad4(char **param_1);
char ** FUN_00018b16(char **param_1,char *param_2);
void CdxMmshSetField(uint param_1,char *param_2,undefined4 param_3);
undefined8 CdxMmshResponseParse(char **param_1,undefined4 param_2,undefined4 param_3);
void CdxMmshSetUri(uint param_1,char *param_2,undefined4 param_3);
uint CdxMmshAddBasicAuthentication(uint param_1,char *param_2,char *param_3);
char * CdxMmshBuildRequest(char *param_1,undefined4 param_2,undefined4 param_3);
undefined4 CdxMmshAuthenticate(char **param_1,int param_2,int *param_3);
char ** MmshRequest(char **param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6);
size_t NopStreamingRead(int param_1,void *param_2,size_t param_3,int param_4);
size_t FUN_00019510(int param_1,void *param_2,size_t param_3,int param_4);
undefined4 AsfStreamingType(ushort *param_1,undefined4 *param_2);
int MmshFindAsfGuid(int param_1,void *param_2,int param_3,int param_4);
int MmshGetMaxIdx(int param_1,int *param_2,int param_3);
char * MmshStreamingStart(undefined4 param_1,char **param_2);
uint MmshStreamingReadFunc(int param_1,int param_2);
bool MmshNopStreamingReadFunc(int param_1,size_t param_2);
undefined4 CdxNopStreamingSeek(char **param_1);
undefined4 CdxMmshStreamingSeek(char **param_1);
void FUN_0001ad58(undefined4 *param_1);
undefined4 aw_mms_http_streaming_start(char **param_1,int param_2);
size_t aw_asf_http_read_wrapper(void *param_1,size_t param_2,int param_3,undefined4 param_4);
size_t aw_mms_http_streaming_read(void *param_1,int param_2,int param_3);
undefined4 aw_mms_http_streaming_read_func(int param_1);
undefined4 aw_mms_http_streaming_seek(void);
int __MmsGetProbeData(int param_1);
undefined4 __MmsGetIoState(int param_1);
undefined4 __MmsAttribute(void);
undefined4 __MmsEos(int param_1);
undefined8 __MmsSize(void);
undefined8 FUN_0001b696(int param_1);
undefined4 __MmsSeekToTime(char **param_1,undefined4 param_2,uint param_3,int param_4);
void __MmsSeek(int param_1,undefined4 param_2,uint param_3,uint param_4,int param_5);
uint __MmsRead(int param_1,void *param_2,uint param_3);
undefined4 CdxMmsClose(void *param_1,int param_2);
undefined ** __MmsStreamOpen(char **param_1,undefined4 param_2);
undefined4 __MmsClose(void *param_1,int param_2);
longlong __MmsForceStop(int param_1,uint param_2);
undefined4 __MmsClrForceStop(int param_1);
undefined4 __MmsControl(int param_1,int param_2,undefined4 *param_3);
void aw_stream_set_interrupt_callback(undefined4 param_1);
undefined4 aw_stream_check_interrupt(int param_1);
uint Connect2Server(int param_1,char *param_2,uint param_3,int param_4);
void FUN_0001c244(undefined *param_1,int param_2,uint param_3);
void FUN_0001c27e(int param_1,undefined4 param_2);
uint FUN_0001c29c(int param_1,int param_2);
undefined4 FUN_0001c2c0(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5,uint param_6,undefined4 param_7);
int MmsGetNetworkData(int param_1,int param_2,void *param_3,size_t param_4);
undefined8 FUN_0001c564(int param_1,int param_2,int param_3,uint param_4);
uint FUN_0001c5d4(int param_1);
int FUN_0001c89c(int param_1,int param_2);
uint MmstStreamingStart(undefined4 param_1,int param_2);
undefined4 AsfStreamStart(undefined4 param_1,char **param_2);
undefined4 CdxReadAsfStream(char **param_1);
undefined8 FUN_0001d3d0(char *param_1);
undefined8 FUN_0001d698(uint *param_1,uint param_2,undefined4 param_3);
undefined4 FUN_0001d710(undefined *param_1,undefined4 param_2,uint param_3,uint param_4,int param_5);
ssize_t FUN_0001da94(undefined *param_1,void *param_2,uint param_3);
int __FileStreamConnect(char *param_1);
undefined __cxa_finalize()
undefined __cxa_atexit()
void * malloc(size_t __size)
undefined CdxListAddTail()
undefined __aeabi_unwind_cpp_pr0()
undefined __android_log_print()
void * memset(void * __s, int __c, size_t __n)
char * strchr(char * __s, int __c)
undefined __android_log_assert()
int strcasecmp(char * __s1, char * __s2)
undefined __memcpy_chk()
undefined __stack_chk_fail()
int pthread_mutex_lock(pthread_mutex_t * __mutex)
int pthread_mutex_unlock(pthread_mutex_t * __mutex)
void free(void * __ptr)
void * memcpy(void * __dest, void * __src, size_t __n)
in_addr_t inet_addr(char * __cp)
hostent * gethostbyname(char * __name)
char * strncpy(char * __dest, char * __src, size_t __n)
int select(int __nfds, fd_set * __readfds, fd_set * __writefds, fd_set * __exceptfds, timeval * __timeout)
ssize_t send(int __fd, void * __buf, size_t __n, int __flags)
undefined __errno()
int snprintf(char * __s, size_t __maxlen, char * __format, ...)
undefined __aeabi_idiv()
ssize_t recv(int __fd, void * __buf, size_t __n, int __flags)
int strncmp(char * __s1, char * __s2, size_t __n)
int strncasecmp(char * __s1, char * __s2, size_t __n)
char * strstr(char * __haystack, char * __needle)
int atoi(char * __nptr)
void * realloc(void * __ptr, size_t __size)
undefined __aeabi_unwind_cpp_pr1()
void * calloc(size_t __nmemb, size_t __size)
int memcmp(void * __s1, void * __s2, size_t __n)
undefined __strlen_chk()
undefined __aeabi_l2d()
int close(int __fd)
long lrand48(void)
int socket(int __domain, int __type, int __protocol)
int fcntl(int __fd, int __cmd, ...)
int connect(int __fd, sockaddr * __addr, socklen_t __len)
int setsockopt(int __fd, int __level, int __optname, void * __optval, socklen_t __optlen)
int pthread_create(pthread_t * __newthread, pthread_attr_t * __attr, __start_routine * __start_routine, void * __arg)
int pthread_cond_wait(pthread_cond_t * __cond, pthread_mutex_t * __mutex)
int usleep(__useconds_t __useconds)
size_t strlen(char * __s)
char * strcpy(char * __dest, char * __src)
int sscanf(char * __s, char * __format, ...)
long strtol(char * __nptr, char * * __endptr, int __base)
double strtod(char * __nptr, char * * __endptr)
int pthread_cond_signal(pthread_cond_t * __cond)
int pthread_mutex_destroy(pthread_mutex_t * __mutex)
int pthread_cond_destroy(pthread_cond_t * __cond)
int pthread_mutex_init(pthread_mutex_t * __mutex, pthread_mutexattr_t * __mutexattr)
int pthread_cond_init(pthread_cond_t * __cond, pthread_condattr_t * __cond_attr)
int sprintf(char * __s, char * __format, ...)
undefined CdxUrlNew()
undefined __sprintf_chk()
undefined CdxUrlFree()
undefined __aeabi_uldivmod()
undefined __strncpy_chk()
int printf(char * __format, ...)
int puts(char * __s)
undefined __aeabi_ldivmod()
char * strdup(char * __s)
undefined CdxAsynSocket()
int inet_aton(char * __cp, in_addr * __inp)
int getsockopt(int __fd, int __level, int __optname, void * __optval, socklen_t * __optlen)
undefined CdxSockAsynSend()
int fflush(FILE * __stream)
undefined __memset_chk()
undefined CdxUrlUnescapeString()
undefined CdxCheck4Proxies()
__off64_t lseek64(int __fd, __off64_t __offset, int __whence)
long syscall(long __sysno, ...)
undefined CdxDumpThreadStack()
ssize_t read(int __fd, void * __buf, size_t __nbytes)
int strcmp(char * __s1, char * __s2)
int open(char * __file, int __oflag, ...)
int dup(int __fd)
ssize_t readlink(char * __path, char * __buf, size_t __len)


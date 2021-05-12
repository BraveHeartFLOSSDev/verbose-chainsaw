typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
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

typedef struct sockaddr sockaddr, *Psockaddr;

struct sockaddr {
    sa_family_t sa_family;
    char sa_data[14];
};

typedef uint __socklen_t;

typedef __socklen_t socklen_t;

typedef ulong size_t;

typedef long __fd_mask;

typedef struct fd_set fd_set, *Pfd_set;

struct fd_set {
    __fd_mask fds_bits[128];
};

typedef int __ssize_t;

typedef __ssize_t ssize_t;

typedef int __pid_t;

typedef longlong __quad_t;

typedef long __time_t;

typedef __quad_t __off64_t;

typedef long __suseconds_t;

typedef ulonglong __u_quad_t;

typedef __u_quad_t __ino64_t;

typedef ulong __ino_t;

typedef long __off_t;

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

typedef struct dirent dirent, *Pdirent;

struct dirent {
    __ino_t d_ino;
    __off_t d_off;
    ushort d_reclen;
    uchar d_type;
    char d_name[256];
};

typedef struct dirent64 dirent64, *Pdirent64;

struct dirent64 {
    __ino64_t d_ino;
    __off64_t d_off;
    ushort d_reclen;
    uchar d_type;
    char d_name[256];
};

typedef struct timeval timeval, *Ptimeval;

struct timeval {
    __time_t tv_sec;
    __suseconds_t tv_usec;
};

typedef struct timespec timespec, *Ptimespec;

struct timespec {
    __time_t tv_sec;
    long tv_nsec;
};

typedef struct timezone timezone, *Ptimezone;

typedef struct timezone * __timezone_ptr_t;

struct timezone {
    int tz_minuteswest;
    int tz_dsttime;
};

typedef __time_t time_t;

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
void free(void *__ptr);
void * malloc(size_t __size);
void __errno(void);
void __android_log_print(void);
int pthread_mutexattr_init(pthread_mutexattr_t *__attr);
int pthread_mutexattr_settype(pthread_mutexattr_t *__attr,int __kind);
int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr);
char * strrchr(char *__s,int __c);
void __android_log_assert(void);
int pthread_mutex_destroy(pthread_mutex_t *__mutex);
int pthread_mutex_lock(pthread_mutex_t *__mutex);
int pthread_mutex_unlock(pthread_mutex_t *__mutex);
void * memcpy(void *__dest,void *__src,size_t __n);
size_t strlen(char *__s);
void __aeabi_uidiv(void);
void * memset(void *__s,int __c,size_t __n);
void __aeabi_uidivmod(void);
void * memmove(void *__dest,void *__src,size_t __n);
int strcmp(char *__s1,char *__s2);
long syscall(long __sysno,...);
void unwind_backtrace_thread(void);
void get_backtrace_symbols(void);
void format_backtrace_line(void);
void free_backtrace_symbols(void);
void __stack_chk_fail(void);
__pid_t getpid(void);
void __sprintf_chk(void);
int scandir(char *__dir,dirent ***__namelist,__selector *__selector,__cmp *__cmp);
long atol(char *__nptr);
int usleep(__useconds_t __useconds);
int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,void *__arg);
int pthread_cond_signal(pthread_cond_t *__cond);
void __aeabi_uldivmod(void);
int pthread_cond_init(pthread_cond_t *__cond,pthread_condattr_t *__cond_attr);
int pthread_cond_broadcast(pthread_cond_t *__cond);
int pthread_join(pthread_t __th,void **__thread_return);
int pthread_cond_destroy(pthread_cond_t *__cond);
time_t time(time_t *__timer);
int pthread_cond_timedwait(pthread_cond_t *__cond,pthread_mutex_t *__mutex,timespec *__abstime);
void pthread_exit(void *__retval);
char * strncpy(char *__dest,char *__src,size_t __n);
char * strcat(char *__dest,char *__src);
char * strcpy(char *__dest,char *__src);
char * strstr(char *__haystack,char *__needle);
char * strchr(char *__s,int __c);
char * strdup(char *__s);
int atoi(char *__nptr);
int strcasecmp(char *__s1,char *__s2);
char * getenv(char *__name);
int sprintf(char *__s,char *__format,...);
int fcntl(int __fd,int __cmd,...);
int socket(int __domain,int __type,int __protocol);
int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen);
long lrand48(void);
void __aeabi_idiv(void);
int bind(int __fd,sockaddr *__addr,socklen_t __len);
hostent * gethostbyname(char *__name);
int getsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t *__optlen);
int connect(int __fd,sockaddr *__addr,socklen_t __len);
int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout);
ssize_t send(int __fd,void *__buf,size_t __n,int __flags);
ssize_t recv(int __fd,void *__buf,size_t __n,int __flags);
int strncasecmp(char *__s1,char *__s2,size_t __n);
int gettimeofday(timeval *__tv,__timezone_ptr_t __tz);
void FUN_0001210c(void *param_1);
undefined4 * FUN_00012148(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
void ** PoolNodeCreate(void *param_1,void *param_2);
void ** __AwPoolCreate(void **param_1,void *param_2,void *param_3);
void AwPoolDestroy(void *param_1);
void ** AwPalloc(void **param_1,void *param_2,undefined *param_3,void *param_4);
void AwPfree(int param_1,int param_2);
void ** AwRealloc(void **param_1,char *param_2,void *param_3,undefined *param_4,void *param_5);
void AwPoolReset(undefined4 param_1,undefined4 param_2);
char FUN_0001298c(uint param_1);
void ** CdxDecodeBase64(void **param_1,char *param_2);
void ** CdxEncodeBase64(void **param_1,byte *param_2,undefined4 param_3);
int CdxBitReaderData(int param_1);
int CdxBitReaderNumBitsLeft(int param_1);
void CdxBitReaderPutBits(int param_1,undefined4 param_2,char *param_3);
undefined8 CdxBitReaderGetBits(char *param_1,uint param_2,undefined4 param_3);
undefined8 CdxBitReaderSkipBits(char *param_1,undefined *param_2,char *param_3);
void CdxBitReaderDestroy(void *param_1);
void CdxBitReaderCreate(undefined4 *param_1,undefined *param_2,undefined4 param_3);
undefined4 __CdxBufferGetMeta(int param_1);
void __CdxBufferSeekRange(int param_1,int param_2,int param_3);
void __CdxBufferSetRange(int param_1,int param_2,char *param_3);
undefined8 __CdxBufferCreate(void **param_1,undefined *param_2,void *param_3,undefined *param_4,char *param_5,char *param_6);
void CdxBufferDestroy(undefined4 *param_1,undefined4 param_2,char *param_3);
void CdxDumpThreadStack(int param_1);
void CdxCallStack(void);
void __CdxListAdd(int *param_1,int **param_2,int param_3);
void CdxListAddAfter(int *param_1,int **param_2);
void CdxListAddBefore(int *param_1,int param_2);
void __CdxListDel(int *param_1,int param_2);
void __CdxListDelEntry(int *param_1);
void CdxListDel(int *param_1);
void CdxListReplace(int *param_1,int *param_2);
void CdxListReplaceInit(int *param_1,int *param_2);
void CdxListDelInit(int *param_1);
void CdxListMove(int **param_1,int **param_2);
void CdxListMoveTail(int *param_1,int param_2);
bool CdxListIsLast(int *param_1,int param_2);
bool CdxListEmpty(int *param_1);
void CdxListRotateLeft(int **param_1);
bool CdxListIsSingular(int *param_1);
void __CdxHandlerMsgRecv(int param_1);
void FUN_00013d14(undefined **param_1);
void __CdxHandlerPostUS(int param_1);
void FUN_00013e30(undefined4 *param_1);
void FUN_00013ed0(undefined **param_1);
void DeliverTimerInit(void);
longlong FUN_000140f0(void *param_1,void *param_2,uint param_3,uint param_4);
undefined8 CdxDeliverCreate(void **param_1,undefined4 param_2,undefined4 param_3);
undefined8 __CdxMessageCreate(char *param_1,void *param_2,void *param_3,undefined *param_4,void *param_5);
void CdxMessageDestroy(undefined *param_1);
void CdxDeliverClearMsg(int *param_1);
void CdxDeliverDestroy(int *param_1,undefined4 param_2,undefined4 param_3);
void DeliverTimerExit(void);
void CdxDeliverReset(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void ** CdxHandlerCreate(void **param_1,void *param_2,void *param_3);
void CdxHandlerDestroy(int param_1);
undefined8 __CdxMetaCreate(void **param_1,undefined *param_2,void *param_3);
int * __CdxMetaDup(undefined4 *param_1,int *param_2);
void CdxMetaDestroy(char *param_1);
void CdxUrlPrintf(undefined4 *param_1,undefined4 param_2);
void CdxUrlUnescapeString(char *param_1,char *param_2);
void CdxUrlEscapeStringPart(byte *param_1,byte *param_2);
void CdxUrlEscapeString(byte *param_1,char *param_2);
void CdxUrlFree(void **param_1);
char ** CdxUrlNew(char *param_1,byte *param_2);
undefined8 CdxCheck4Proxies(char **param_1,byte *param_2);
char ** CdxUrlRedirect(char **param_1,char *param_2);
void FUN_000161dc(int param_1,int param_2);
undefined4 FUN_00016208(int param_1);
undefined8 CdxQueueCreate(void **param_1);
void CdxQueueDestroy(char *param_1);
undefined4 CdxMakeSocketBlocking(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
void CdxSocketMakePortPair(int *param_1,int *param_2,uint *param_3);
undefined4 CdxSockAddrConstruct(undefined2 *param_1,char *param_2,uint param_3);
undefined4 CdxSockSetBlocking(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
bool CdxSockIsBlocking(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
char * CdxAsynSocket(int param_1,void *param_2);
int CdxSockAsynConnect(uint param_1,sockaddr *param_2,undefined4 param_3,int param_4,int *param_5);
int CdxSockAsynSend(uint param_1,int param_2,int param_3,int param_4,int *param_5);
int CdxSockAsynRecv(uint param_1,int param_2,int param_3,int param_4,int *param_5);
void CdxSockNoblockRecv(int param_1,void *param_2,size_t param_3);
void ** FUN_00016ee8(void **param_1,char *param_2,void *param_3);
void CdxStrTrimTail(char *param_1);
void CdxStrTrimHead(char *param_1);
void CdxStrTrim(char *param_1);
void CdxStrTolower(char *param_1);
void ** AttrbuteOfKeyInSingleParam(void **param_1,char *param_2,char *param_3);
void ** CdxStrAttributeOfKey(void **param_1,char *param_2,char *param_3,int param_4);
undefined8 CdxStrSplit(void **param_1,char *param_2,int param_3,undefined *param_4);
longlong CdxGetNowUs(int param_1,int param_2,undefined4 param_3);
undefined __cxa_finalize()
undefined __cxa_atexit()
void free(void * __ptr)
undefined __aeabi_unwind_cpp_pr0()
void * malloc(size_t __size)
undefined __errno()
undefined __android_log_print()
int pthread_mutexattr_init(pthread_mutexattr_t * __attr)
int pthread_mutexattr_settype(pthread_mutexattr_t * __attr, int __kind)
int pthread_mutex_init(pthread_mutex_t * __mutex, pthread_mutexattr_t * __mutexattr)
char * strrchr(char * __s, int __c)
undefined __android_log_assert()
int pthread_mutex_destroy(pthread_mutex_t * __mutex)
int pthread_mutex_lock(pthread_mutex_t * __mutex)
int pthread_mutex_unlock(pthread_mutex_t * __mutex)
void * memcpy(void * __dest, void * __src, size_t __n)
size_t strlen(char * __s)
undefined __aeabi_uidiv()
undefined __aeabi_uidivmod()
void * memset(void * __s, int __c, size_t __n)
void * memmove(void * __dest, void * __src, size_t __n)
int strcmp(char * __s1, char * __s2)
long syscall(long __sysno, ...)
undefined unwind_backtrace_thread()
undefined get_backtrace_symbols()
undefined format_backtrace_line()
undefined free_backtrace_symbols()
undefined __stack_chk_fail()
undefined __aeabi_unwind_cpp_pr1()
__pid_t getpid(void)
undefined __sprintf_chk()
int scandir(char * __dir, dirent * * * __namelist, __selector * __selector, __cmp * __cmp)
long atol(char * __nptr)
int usleep(__useconds_t __useconds)
int pthread_create(pthread_t * __newthread, pthread_attr_t * __attr, __start_routine * __start_routine, void * __arg)
undefined __aeabi_uldivmod()
int pthread_cond_signal(pthread_cond_t * __cond)
int pthread_cond_init(pthread_cond_t * __cond, pthread_condattr_t * __cond_attr)
int pthread_cond_broadcast(pthread_cond_t * __cond)
int pthread_join(pthread_t __th, void * * __thread_return)
int pthread_cond_destroy(pthread_cond_t * __cond)
time_t time(time_t * __timer)
int pthread_cond_timedwait(pthread_cond_t * __cond, pthread_mutex_t * __mutex, timespec * __abstime)
void pthread_exit(void * __retval)
char * strncpy(char * __dest, char * __src, size_t __n)
char * strcat(char * __dest, char * __src)
char * strcpy(char * __dest, char * __src)
char * strstr(char * __haystack, char * __needle)
char * strchr(char * __s, int __c)
char * strdup(char * __s)
int atoi(char * __nptr)
int strcasecmp(char * __s1, char * __s2)
char * getenv(char * __name)
int sprintf(char * __s, char * __format, ...)
int fcntl(int __fd, int __cmd, ...)
undefined __aeabi_idiv()
int socket(int __domain, int __type, int __protocol)
int setsockopt(int __fd, int __level, int __optname, void * __optval, socklen_t __optlen)
long lrand48(void)
int bind(int __fd, sockaddr * __addr, socklen_t __len)
hostent * gethostbyname(char * __name)
int getsockopt(int __fd, int __level, int __optname, void * __optval, socklen_t * __optlen)
int connect(int __fd, sockaddr * __addr, socklen_t __len)
int select(int __nfds, fd_set * __readfds, fd_set * __writefds, fd_set * __exceptfds, timeval * __timeout)
ssize_t send(int __fd, void * __buf, size_t __n, int __flags)
ssize_t recv(int __fd, void * __buf, size_t __n, int __flags)
int strncasecmp(char * __s1, char * __s2, size_t __n)
int gettimeofday(timeval * __tv, __timezone_ptr_t __tz)


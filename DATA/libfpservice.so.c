typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long long    qword;
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
typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct BpFingerPrint BpFingerPrint, *PBpFingerPrint;

struct BpFingerPrint { // PlaceHolder Class Structure
};

typedef struct BpFingerPrintService BpFingerPrintService, *PBpFingerPrintService;

struct BpFingerPrintService { // PlaceHolder Class Structure
};

typedef struct BpFingerPrintClient BpFingerPrintClient, *PBpFingerPrintClient;

struct BpFingerPrintClient { // PlaceHolder Class Structure
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef long __off64_t;

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

typedef struct exception exception, *Pexception;

struct exception { // PlaceHolder Class Structure
};

typedef struct bad_alloc bad_alloc, *Pbad_alloc;

struct bad_alloc { // PlaceHolder Class Structure
};

typedef struct bad_exception bad_exception, *Pbad_exception;

struct bad_exception { // PlaceHolder Class Structure
};

typedef struct stat stat, *Pstat;

typedef ulong __dev_t;

typedef ulong __ino_t;

typedef ulong __nlink_t;

typedef uint __mode_t;

typedef uint __uid_t;

typedef uint __gid_t;

typedef long __blksize_t;

typedef long __blkcnt_t;

typedef struct timespec timespec, *Ptimespec;

typedef long __time_t;

struct timespec {
    __time_t tv_sec;
    long tv_nsec;
};

struct stat {
    __dev_t st_dev;
    __ino_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;
    __uid_t st_uid;
    __gid_t st_gid;
    int __pad0;
    __dev_t st_rdev;
    __off_t st_size;
    __blksize_t st_blksize;
    __blkcnt_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    long __unused[3];
};

typedef struct IFingerPrintService IFingerPrintService, *PIFingerPrintService;

struct IFingerPrintService { // PlaceHolder Class Structure
};

typedef struct BnInterface<android--IFingerPrintService> BnInterface<android--IFingerPrintService>, *PBnInterface<android--IFingerPrintService>;

struct BnInterface<android--IFingerPrintService> { // PlaceHolder Class Structure
};

typedef struct Parcel Parcel, *PParcel;

struct Parcel { // PlaceHolder Class Structure
};

typedef struct sp<android--FpService> sp<android--FpService>, *Psp<android--FpService>;

struct sp<android--FpService> { // PlaceHolder Class Structure
};

typedef struct BpInterface<android--IFingerPrint> BpInterface<android--IFingerPrint>, *PBpInterface<android--IFingerPrint>;

struct BpInterface<android--IFingerPrint> { // PlaceHolder Class Structure
};

typedef struct String8 String8, *PString8;

struct String8 { // PlaceHolder Class Structure
};

typedef struct IInterface IInterface, *PIInterface;

struct IInterface { // PlaceHolder Class Structure
};

typedef struct BnFingerPrintService BnFingerPrintService, *PBnFingerPrintService;

struct BnFingerPrintService { // PlaceHolder Class Structure
};

typedef struct sp<android--IFingerPrintClient> sp<android--IFingerPrintClient>, *Psp<android--IFingerPrintClient>;

struct sp<android--IFingerPrintClient> { // PlaceHolder Class Structure
};

typedef struct BpRefBase BpRefBase, *PBpRefBase;

struct BpRefBase { // PlaceHolder Class Structure
};

typedef struct IFingerPrint IFingerPrint, *PIFingerPrint;

struct IFingerPrint { // PlaceHolder Class Structure
};

typedef struct BnInterface<android--IFingerPrint> BnInterface<android--IFingerPrint>, *PBnInterface<android--IFingerPrint>;

struct BnInterface<android--IFingerPrint> { // PlaceHolder Class Structure
};

typedef struct RefBase RefBase, *PRefBase;

struct RefBase { // PlaceHolder Class Structure
};

typedef struct sp<android--FpService--Client> sp<android--FpService--Client>, *Psp<android--FpService--Client>;

struct sp<android--FpService--Client> { // PlaceHolder Class Structure
};

typedef struct BnFingerPrint BnFingerPrint, *PBnFingerPrint;

struct BnFingerPrint { // PlaceHolder Class Structure
};

typedef struct BBinder BBinder, *PBBinder;

struct BBinder { // PlaceHolder Class Structure
};

typedef struct BnInterface<android--IFingerPrintClient> BnInterface<android--IFingerPrintClient>, *PBnInterface<android--IFingerPrintClient>;

struct BnInterface<android--IFingerPrintClient> { // PlaceHolder Class Structure
};

typedef struct IFingerPrintClient IFingerPrintClient, *PIFingerPrintClient;

struct IFingerPrintClient { // PlaceHolder Class Structure
};

typedef struct FpService FpService, *PFpService;

struct FpService { // PlaceHolder Class Structure
};

typedef struct BpInterface<android--IFingerPrintClient> BpInterface<android--IFingerPrintClient>, *PBpInterface<android--IFingerPrintClient>;

struct BpInterface<android--IFingerPrintClient> { // PlaceHolder Class Structure
};

typedef struct BpInterface<android--IFingerPrintService> BpInterface<android--IFingerPrintService>, *PBpInterface<android--IFingerPrintService>;

struct BpInterface<android--IFingerPrintService> { // PlaceHolder Class Structure
};

typedef struct Client Client, *PClient;

struct Client { // PlaceHolder Class Structure
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

typedef union sem_t sem_t, *Psem_t;

union sem_t {
    char __size[32];
    long __align;
};

typedef struct __foreign_exception __foreign_exception, *P__foreign_exception;

struct __foreign_exception { // PlaceHolder Class Structure
};

typedef struct __forced_unwind __forced_unwind, *P__forced_unwind;

struct __forced_unwind { // PlaceHolder Class Structure
};

typedef struct __si_class_type_info __si_class_type_info, *P__si_class_type_info;

struct __si_class_type_info { // PlaceHolder Class Structure
};

typedef struct _IO_FILE FILE;

typedef long __ssize_t;

typedef __ssize_t ssize_t;

typedef int __pid_t;

typedef uint __useconds_t;

typedef union pthread_mutex_t pthread_mutex_t, *Ppthread_mutex_t;

typedef struct __pthread_mutex_s __pthread_mutex_s, *P__pthread_mutex_s;

typedef struct __pthread_internal_list __pthread_internal_list, *P__pthread_internal_list;

typedef struct __pthread_internal_list __pthread_list_t;

struct __pthread_internal_list {
    struct __pthread_internal_list * __prev;
    struct __pthread_internal_list * __next;
};

struct __pthread_mutex_s {
    int __lock;
    uint __count;
    int __owner;
    uint __nusers;
    int __kind;
    int __spins;
    __pthread_list_t __list;
};

union pthread_mutex_t {
    struct __pthread_mutex_s __data;
    char __size[40];
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

typedef int pthread_once_t;

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

typedef uint pthread_key_t;

typedef union pthread_attr_t pthread_attr_t, *Ppthread_attr_t;

union pthread_attr_t {
    char __size[56];
    long __align;
};

typedef dword fpalgo_act_status;

typedef dword Recognize_Status;

typedef dword fingerprint_chip_mode;

typedef dword Register_Status;

typedef struct __class_type_info __class_type_info, *P__class_type_info;

struct __class_type_info { // PlaceHolder Structure
};

typedef struct __dyncast_result __dyncast_result, *P__dyncast_result;

struct __dyncast_result { // PlaceHolder Structure
};

typedef dword __sub_kind;

typedef struct __upcast_result __upcast_result, *P__upcast_result;

struct __upcast_result { // PlaceHolder Structure
};

typedef struct type_info type_info, *Ptype_info;

struct type_info { // PlaceHolder Structure
};

typedef struct sp sp, *Psp;

struct sp { // PlaceHolder Structure
};

typedef struct IBinder IBinder, *PIBinder;

struct IBinder { // PlaceHolder Structure
};

typedef dword fpContext;

typedef struct wp wp, *Pwp;

struct wp { // PlaceHolder Structure
};

typedef struct Vector Vector, *PVector;

struct Vector { // PlaceHolder Structure
};

typedef struct String16 String16, *PString16;

struct String16 { // PlaceHolder Structure
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType_AARCH64 {
    SHT_AARCH64_ATTRIBUTES=1879048195,
    SHT_CHECKSUM=1879048184,
    SHT_DYNAMIC=6,
    SHT_DYNSYM=11,
    SHT_FINI_ARRAY=15,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_GROUP=17,
    SHT_HASH=5,
    SHT_INIT_ARRAY=14,
    SHT_NOBITS=8,
    SHT_NOTE=7,
    SHT_NULL=0,
    SHT_PREINIT_ARRAY=16,
    SHT_PROGBITS=1,
    SHT_REL=9,
    SHT_RELA=4,
    SHT_SHLIB=10,
    SHT_STRTAB=3,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_syminfo=1879048188,
    SHT_SYMTAB=2,
    SHT_SYMTAB_SHNDX=18
} Elf_SectionHeaderType_AARCH64;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_AARCH64 sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_pad[9];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

typedef enum Elf_ProgramHeaderType_AARCH64 {
    PT_AARCH64_ARCHEXT=1879048192,
    PT_DYNAMIC=2,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_RELRO=1685382482,
    PT_GNU_STACK=1685382481,
    PT_INTERP=3,
    PT_LOAD=1,
    PT_NOTE=4,
    PT_NULL=0,
    PT_PHDR=6,
    PT_SHLIB=5,
    PT_TLS=7
} Elf_ProgramHeaderType_AARCH64;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType_AARCH64 p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef struct Elf64_Dyn_AARCH64 Elf64_Dyn_AARCH64, *PElf64_Dyn_AARCH64;

typedef enum Elf64_DynTag_AARCH64 {
    DT_AUDIT=1879047932,
    DT_AUXILIARY=2147483645,
    DT_BIND_NOW=24,
    DT_CHECKSUM=1879047672,
    DT_CONFIG=1879047930,
    DT_DEBUG=21,
    DT_DEPAUDIT=1879047931,
    DT_ENCODING=32,
    DT_FEATURE_1=1879047676,
    DT_FILTER=2147483647,
    DT_FINI=13,
    DT_FINI_ARRAY=26,
    DT_FINI_ARRAYSZ=28,
    DT_FLAGS=30,
    DT_FLAGS_1=1879048187,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_HASH=1879047925,
    DT_GNU_LIBLIST=1879047929,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_GNU_PRELINKED=1879047669,
    DT_HASH=4,
    DT_INIT=12,
    DT_INIT_ARRAY=25,
    DT_INIT_ARRAYSZ=27,
    DT_JMPREL=23,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_MOVETAB=1879047934,
    DT_NEEDED=1,
    DT_NULL=0,
    DT_PLTGOT=3,
    DT_PLTPAD=1879047933,
    DT_PLTPADSZ=1879047673,
    DT_PLTREL=20,
    DT_PLTRELSZ=2,
    DT_POSFLAG_1=1879047677,
    DT_PREINIT_ARRAYSZ=33,
    DT_REL=17,
    DT_RELA=7,
    DT_RELACOUNT=1879048185,
    DT_RELAENT=9,
    DT_RELASZ=8,
    DT_RELCOUNT=1879048186,
    DT_RELENT=19,
    DT_RELSZ=18,
    DT_RPATH=15,
    DT_RUNPATH=29,
    DT_SONAME=14,
    DT_STRSZ=10,
    DT_STRTAB=5,
    DT_SYMBOLIC=16,
    DT_SYMENT=11,
    DT_SYMINENT=1879047679,
    DT_SYMINFO=1879047935,
    DT_SYMINSZ=1879047678,
    DT_SYMTAB=6,
    DT_TEXTREL=22,
    DT_TLSDESC_GOT=1879047927,
    DT_TLSDESC_PLT=1879047926,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_VERSYM=1879048176
} Elf64_DynTag_AARCH64;

struct Elf64_Dyn_AARCH64 {
    enum Elf64_DynTag_AARCH64 d_tag;
    qword d_val;
};




void FUN_00112510(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void writeCString(char *param_1)

{
  writeCString(param_1);
  return;
}



void __thiscall BpRefBase(BpRefBase *this,sp *param_1)

{
  BpRefBase(this,param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sem_destroy(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = sem_destroy(__sem);
  return iVar1;
}



void property_set(void)

{
  property_set();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void write(void *param_1,ulong param_2)

{
  write(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void writeInterfaceToken(String16 *param_1)

{
  writeInterfaceToken(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = usleep(__useconds);
  return iVar1;
}



void __thiscall Parcel(Parcel *this)

{
  Parcel(this);
  return;
}



void __thiscall String16(String16 *this,char *param_1)

{
  String16(this,param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int rename(char *__old,char *__new)

{
  int iVar1;
  
  iVar1 = rename(__old,__new);
  return iVar1;
}



void hw_get_module(void)

{
  hw_get_module();
  return;
}



void __thiscall _Parcel(Parcel *this)

{
  _Parcel(this);
  return;
}



void __thiscall _RefBase(RefBase *this)

{
  _RefBase(this);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_destroy(__mutex);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int close(int __fd)

{
  int iVar1;
  
  iVar1 = close(__fd);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void writeInt32(int param_1)

{
  writeInt32(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void onIncStrongAttempted(uint param_1,void *param_2)

{
  onIncStrongAttempted(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void onLastWeakRef(void *param_1)

{
  onLastWeakRef(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void onLastStrongRef(void *param_1)

{
  onLastStrongRef(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



void __thiscall BBinder(BBinder *this)

{
  BBinder(this);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_key_delete(pthread_key_t __key)

{
  int iVar1;
  
  iVar1 = pthread_key_delete(__key);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

long atol(char *__nptr)

{
  long lVar1;
  
  lVar1 = atol(__nptr);
  return lVar1;
}



void __thiscall _IInterface(IInterface *this)

{
  _IInterface(this);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void onFirstRef(void)

{
  onFirstRef();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_cond_destroy(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = pthread_cond_destroy(__cond);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = sprintf(__s,__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void readStrongBinder(void)

{
  readStrongBinder();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = getpid();
  return _Var1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void localBinder(void)

{
  localBinder();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sem_post(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = sem_post(__sem);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_setspecific(pthread_key_t __key,void *__pointer)

{
  int iVar1;
  
  iVar1 = pthread_setspecific(__key,__pointer);
  return iVar1;
}



void __thiscall RefBase(RefBase *this)

{
  RefBase(this);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void unlinkToDeath(wp *param_1,void *param_2,uint param_3,wp *param_4)

{
  unlinkToDeath(param_1,param_2,param_3,param_4);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_once(pthread_once_t *__once_control,__init_routine *__init_routine)

{
  int iVar1;
  
  iVar1 = pthread_once(__once_control,__init_routine);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void dataAvail(void)

{
  dataAvail();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void onTransact(uint param_1,Parcel *param_2,Parcel *param_3,uint param_4)

{
  onTransact(param_1,param_2,param_3,param_4);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = strstr(__haystack,__needle);
  return pcVar1;
}



void __thiscall _BpRefBase(BpRefBase *this)

{
  _BpRefBase(this);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = realloc(__ptr,__size);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void readInplace(ulong param_1)

{
  readInplace(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void decStrong(void *param_1)

{
  decStrong(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void read(void *param_1,ulong param_2)

{
  read(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void findObject(void *param_1)

{
  findObject(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = strncmp(__s1,__s2,__n);
  return iVar1;
}



void onLastStrongRef(void)

{
  onLastStrongRef();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = fputc(__c,__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = snprintf(__s,__maxlen,__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void writeStrongBinder(sp *param_1)

{
  writeStrongBinder(param_1);
  return;
}



void __android_log_print(void)

{
  __android_log_print();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void writeInt64(long param_1)

{
  writeInt64(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int remove(char *__filename)

{
  int iVar1;
  
  iVar1 = remove(__filename);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void onIncStrongAttempted(uint param_1,void *param_2)

{
  onIncStrongAttempted(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void size(void)

{
  size();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void localBinder(void)

{
  localBinder();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void asBinder(sp *param_1)

{
  asBinder(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = pthread_create(__newthread,__attr,__start_routine,__arg);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
}



void __thiscall IInterface(IInterface *this)

{
  IInterface(this);
  return;
}



void onFirstRef(void)

{
  onFirstRef();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
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

void transact(uint param_1,Parcel *param_2,Parcel *param_3,uint param_4)

{
  transact(param_1,param_2,param_3,param_4);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sem_init(sem_t *__sem,int __pshared,uint __value)

{
  int iVar1;
  
  iVar1 = sem_init(__sem,__pshared,__value);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int stat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = stat(__file,__buf);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * pthread_getspecific(pthread_key_t __key)

{
  void *pvVar1;
  
  pvVar1 = pthread_getspecific(__key);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void attachObject(void *param_1,void *param_2,void *param_3,FuncDef49 *param_4)

{
  attachObject(param_1,param_2,param_3,param_4);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void remoteBinder(void)

{
  remoteBinder();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Unknown calling convention yet parameter storage is locked

void readCString(void)

{
  readCString();
  return;
}



void property_get_int32(void)

{
  property_get_int32();
  return;
}



void __cxa_atexit(void)

{
  __cxa_atexit();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void checkInterface(IBinder *param_1)

{
  checkInterface(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void queryLocalInterface(String16 *param_1)

{
  queryLocalInterface(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void pingBinder(void)

{
  pingBinder();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void writeNoException(void)

{
  writeNoException();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = memcmp(__s1,__s2,__n);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = write(__fd,__buf,__n);
  return sVar1;
}



void __thiscall _String8(String8 *this)

{
  _String8(this);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void getInterfaceDescriptor(void)

{
  getInterfaceDescriptor();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sem_wait(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = sem_wait(__sem);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void onLastStrongRef(void *param_1)

{
  onLastStrongRef(param_1);
  return;
}



void strzcmp16(void)

{
  strzcmp16();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock(__mutex);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void detachObject(void *param_1)

{
  detachObject(param_1);
  return;
}



void onIncStrongAttempted(void)

{
  onIncStrongAttempted();
  return;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void readInt32(void)

{
  readInt32();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

tm * localtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = localtime(__timer);
  return ptVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_key_create(pthread_key_t *__key,__destr_function *__destr_function)

{
  int iVar1;
  
  iVar1 = pthread_key_create(__key,__destr_function);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void dump(int param_1,Vector *param_2)

{
  dump(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void isBinderAlive(void)

{
  isBinderAlive();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void checkSubclass(void *param_1)

{
  checkSubclass(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void onFirstRef(void)

{
  onFirstRef();
  return;
}



void property_get(void)

{
  property_get();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void readExceptionCode(void)

{
  readExceptionCode();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = time(__timer);
  return tVar1;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = fputs(__s,__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void readInt64(void)

{
  readInt64();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void linkToDeath(sp *param_1,void *param_2,uint param_3)

{
  linkToDeath(param_1,param_2,param_3);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_cond_init(pthread_cond_t *__cond,pthread_condattr_t *__cond_attr)

{
  int iVar1;
  
  iVar1 = pthread_cond_init(__cond,__cond_attr);
  return iVar1;
}



void __thiscall _BBinder(BBinder *this)

{
  _BBinder(this);
  return;
}



void __thiscall String8(String8 *this)

{
  String8(this);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void incStrong(void *param_1)

{
  incStrong(param_1);
  return;
}



void dl_iterate_phdr(void)

{
  dl_iterate_phdr();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = open(__file,__oflag);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sem_getvalue(sem_t *__sem,int *__sval)

{
  int iVar1;
  
  iVar1 = sem_getvalue(__sem,__sval);
  return iVar1;
}



void entry(void)

{
  __cxa_finalize(&DAT_00146000);
  return;
}



void FUN_00112c4c(void)

{
  pthread_mutex_init((pthread_mutex_t *)ProcessRawDataLock,(pthread_mutexattr_t *)0x0);
  __cxa_atexit(_ZN7android5MutexD1Ev,ProcessRawDataLock,&DAT_00146000);
  pthread_mutex_init((pthread_mutex_t *)mStatusCheckLock,(pthread_mutexattr_t *)0x0);
  __cxa_atexit(_ZN7android5MutexD1Ev,mStatusCheckLock,&DAT_00146000);
  return;
}



void FUN_00112cc0(void)

{
  pthread_mutex_init((pthread_mutex_t *)&DAT_00146318,(pthread_mutexattr_t *)0x0);
  __cxa_atexit(_ZN7android5MutexD1Ev,&DAT_00146318,&DAT_00146000);
  return;
}



void FUN_00112d04(void)

{
  String16((String16 *)&descriptor,"android.hardware.FingerPrint");
  __cxa_atexit(_String16,&descriptor,&DAT_00146000);
  return;
}



void FUN_00112de8(void)

{
  int iVar1;
  
  DAT_00157fac = false;
  iVar1 = pthread_key_create(&DAT_00157fa8,(__destr_function *)&LAB_00122768);
  DAT_00157fac = iVar1 == 0;
  __cxa_atexit(&LAB_0012274c,&DAT_00157fa8,&DAT_00146000);
  return;
}



void FUN_00112e48(code *param_1)

{
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



// android::FpService::setDefaultMode()

void __thiscall setDefaultMode(FpService *this)

{
  (**(code **)(*(longlong *)this + 0x68))(this,(ulonglong)*(uint *)(this + 0x2f8));
  return;
}



// android::FpService::getInfo(char*)

undefined8 getInfo(char *param_1)

{
  return 0;
}



// android::BnInterface<android::IFingerPrint>::onAsBinder()

BnInterface_android__IFingerPrint_ * __thiscall onAsBinder(BnInterface_android__IFingerPrint_ *this)

{
  return this + 8;
}



// android::BnInterface<android::IFingerPrintService>::onAsBinder()

BnInterface_android__IFingerPrintService_ * __thiscall
onAsBinder(BnInterface_android__IFingerPrintService_ *this)

{
  return this + 8;
}



// android::FpService::setChipMode(fingerprint_chip_mode)

undefined8 __thiscall setChipMode(FpService *this,fingerprint_chip_mode param_1)

{
  __android_log_print(3,"FingerGoodix","setChipMode = %d ",(ulonglong)param_1);
  (**(code **)(*(longlong *)(this + 0x158) + 0x140))(*(longlong *)(this + 0x158),(ulonglong)param_1)
  ;
  *(fingerprint_chip_mode *)(this + 0xe8) = param_1;
  return 0;
}



// android::FpService::getChipMode()

undefined8 __thiscall getChipMode(FpService *this)

{
  longlong lVar1;
  
  lVar1 = __stack_chk_guard;
  (**(code **)(*(longlong *)(this + 0x158) + 0xa8))(*(longlong *)(this + 0x158));
  __android_log_print(3,"FingerGoodix","getChipMode = %d ",0);
  if (lVar1 == __stack_chk_guard) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// android::FpService::setCurNotifyClientID(int)

undefined8 __thiscall setCurNotifyClientID(FpService *this,int param_1)

{
  undefined8 uVar1;
  
  if ((uint)param_1 < 7) {
    __android_log_print(3,"FingerGoodix","setCurNotifyClientID:%d",(ulonglong)(uint)param_1);
    *(int *)(this + 0x2f4) = param_1;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// android::FpService::Client::getInfo()

undefined1 * getInfo(void)

{
  __android_log_print(3,"FingerGoodix","Client::getInfo");
  __android_log_print(3,"FingerGoodix",0x136e10,algoVersion);
  return algoVersion;
}



// android::FpService::Client::requestPermission(char const*)

undefined8 __thiscall requestPermission(Client *this,char *param_1)

{
  __android_log_print(3,"FingerGoodix","Client::requestPermission:%s",param_1);
  return 0;
}



// android::FpService::Client::set_fpdb_to_ta(char*)

ulonglong __thiscall set_fpdb_to_ta(Client *this,char *param_1)

{
  ulonglong uVar1;
  uint local_c;
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","set_fpdb_to_ta");
  local_c = 0xffffffff;
  uVar1 = (**(code **)(*(longlong *)this + 0x160))(this);
  if ((int)uVar1 == 0) {
    (**(code **)(*(longlong *)(this + 0x28) + 0x1a8))(param_1,&local_c);
    __android_log_print(3,"FingerGoodix","set_fpdb_to_ta,result:%d",(ulonglong)local_c);
    uVar1 = (ulonglong)local_c;
  }
  if (local_8 == __stack_chk_guard) {
    return uVar1;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// android::FpService::Client::set_user_id(unsigned long)

void __thiscall set_user_id(Client *this,ulong param_1)

{
  __android_log_print(3,"FingerGoodix","client:set_user_id");
  (**(code **)(*(longlong *)(this + 0x28) + 0x1b0))((ulonglong)param_1);
  return;
}



// android::FpService::Client::sendScreenState(int)

undefined8 sendScreenState(int param_1)

{
  __android_log_print(3,"FingerGoodix","Client::sendScreenState");
  return 0;
}



// android::FpService::Client::setPauseRegisterState(int)

undefined8 __thiscall setPauseRegisterState(Client *this,int param_1)

{
  __android_log_print(3,"FingerGoodix","Client::setPauseRegisterState,state:%d",
                      (ulonglong)(uint)param_1);
  return 0;
}



// android::FpService::Client::registRollback()

void __thiscall registRollback(Client *this)

{
  __android_log_print(3,"FingerGoodix","Client::registRollback");
  (**(code **)(*(longlong *)this + 0x160))(this);
  return;
}



// android::FpService::Client::resetRegist()

void __thiscall resetRegist(Client *this)

{
  __android_log_print(3,"FingerGoodix","Client::resetRegist");
  (**(code **)(*(longlong *)this + 0x160))(this);
  return;
}



// android::FpService::Client::weChatSetSessionId(unsigned long)

void __thiscall weChatSetSessionId(Client *this,ulong param_1)

{
  __android_log_print(3,"FingerGoodix","%s, challenge = %ld",
                                            
                      "virtual android::status_t android::FpService::Client::weChatSetSessionId(uint64_t)"
                      ,(ulonglong)param_1);
  (**(code **)(*(longlong *)(this + 0x28) + 0x1d0))(*(longlong *)(this + 0x28),(ulonglong)param_1);
  return;
}



// android::FpService::Client::handleGenericNotify(int, int, int)

void __thiscall handleGenericNotify(Client *this,int param_1,int param_2,int param_3)

{
  __android_log_print(3,"FingerGoodix","handleGenericNotify,msgType:%d, ext1:%d, ext2:%d",
                      (ulonglong)(uint)param_1,(ulonglong)(uint)param_2,(ulonglong)(uint)param_3);
  (**(code **)(**(longlong **)(this + 0x40) + 0x20))
            (*(longlong **)(this + 0x40),(ulonglong)(uint)param_1,(ulonglong)(uint)param_2,
             (ulonglong)(uint)param_3);
  return;
}



// android::FpService::Client::handleNotifyData(int, int, char*)

void __thiscall handleNotifyData(Client *this,int param_1,int param_2,char *param_3)

{
  __android_log_print(3,"FingerGoodix","handleNotifyData clientID:%d",
                      (ulonglong)*(uint *)(this + 0x48));
  (**(code **)(**(longlong **)(this + 0x40) + 0x28))
            (*(longlong **)(this + 0x40),(ulonglong)(uint)param_1,(ulonglong)(uint)param_2,param_3);
  return;
}



// android::FpService::Client::handleNotifyEvent(unsigned char, unsigned char)

void __thiscall handleNotifyEvent(Client *this,uchar param_1,uchar param_2)

{
  __android_log_print(3,"FingerGoodix","handleNotifyEvent clientID:%d",
                      (ulonglong)*(uint *)(this + 0x48));
  (**(code **)(**(longlong **)(this + 0x40) + 0x20))
            (*(longlong **)(this + 0x40),5,(ulonglong)param_1,(ulonglong)param_2);
  return;
}



// android::FpService::RawDataProcessRequest()

undefined8 __thiscall RawDataProcessRequest(FpService *this)

{
  int local_c;
  longlong local_8;
  
  local_c = 0;
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","trigger rawdata signal sem!");
  (**(code **)(*(longlong *)(this + 0x158) + 0x1c0))(*(longlong *)(this + 0x158));
  sem_getvalue((sem_t *)&DAT_00146040,&local_c);
  if (local_c == 0) {
    sem_post((sem_t *)&DAT_00146040);
  }
  if (local_8 == __stack_chk_guard) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// android::FpService::setStatus(fpalgo_act_status)

undefined8 __thiscall setStatus(FpService *this,fpalgo_act_status param_1)

{
  pthread_mutex_t *__mutex;
  undefined8 uVar1;
  
  __mutex = (pthread_mutex_t *)(this + 0xbc);
  pthread_mutex_lock(__mutex);
  __android_log_print(3,"FingerGoodix","mCurStatus = %d , nextStatus = %d",
                      (ulonglong)*(uint *)(this + 0xe4),(ulonglong)param_1);
  switch(param_1) {
  case 0:
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
    *(fpalgo_act_status *)(this + 0xe4) = param_1;
    pthread_mutex_unlock(__mutex);
    return 0;
  case 2:
    switch(*(undefined4 *)(this + 0xe4)) {
    case 0:
    case 1:
    case 3:
    case 5:
    case 6:
    case 7:
    case 8:
      uVar1 = 0;
      *(undefined4 *)(this + 0xe4) = 2;
      goto LAB_001134d0;
    case 2:
switchD_00113580_caseD_2:
      pthread_mutex_unlock(__mutex);
      return 0;
    }
    break;
  case 4:
    uVar1 = 0xffffffff;
    if (*(int *)(this + 0xe4) - 2U < 2) {
      *(undefined4 *)(this + 0xe4) = 4;
      pthread_mutex_unlock(__mutex);
      return 0xffffffff;
    }
    goto LAB_001134d0;
  case 6:
    switch(*(undefined4 *)(this + 0xe4)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
    case 7:
    case 8:
      uVar1 = 0;
      *(undefined4 *)(this + 0xe4) = 6;
      goto LAB_001134d0;
    case 6:
      goto switchD_00113580_caseD_2;
    }
  }
  uVar1 = 0xffffffff;
LAB_001134d0:
  pthread_mutex_unlock(__mutex);
  return uVar1;
}



// android::FpService::Client::regist()

ulonglong __thiscall regist(Client *this)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  __android_log_print(3,"FingerGoodix","JEM,Client::register %d",
                      (ulonglong)*(uint *)(*(longlong *)(this + 0x38) + 0xe4));
  uVar1 = (**(code **)(*(longlong *)this + 0x160))(this);
  if ((int)uVar1 != 0) {
    return uVar1 & 0xffffffff;
  }
  pthread_mutex_lock((pthread_mutex_t *)ProcessRawDataLock);
  plVar2 = *(longlong **)(this + 0x38);
  if ((*(int *)((longlong)plVar2 + 0xe4) == 0) || (*(int *)((longlong)plVar2 + 0xe4) == 7)) {
    __android_log_print(6,"FingerGoodix","JEM,Client::register FAILED,CHECK STATUS!");
    uVar3 = 0xffffffff;
    pthread_mutex_unlock((pthread_mutex_t *)ProcessRawDataLock);
  }
  else {
    (**(code **)(*plVar2 + 0x88))(plVar2,(ulonglong)*(uint *)(this + 0x48));
    (**(code **)(**(longlong **)(this + 0x38) + 0x80))(*(longlong **)(this + 0x38),2);
    (**(code **)(**(longlong **)(this + 0x38) + 0x90))(*(longlong **)(this + 0x38));
    uVar3 = 0;
    pthread_mutex_unlock((pthread_mutex_t *)ProcessRawDataLock);
  }
  return uVar3;
}



// android::FpService::Client::cancelRegist()

undefined8 __thiscall cancelRegist(Client *this)

{
  longlong *plVar1;
  
  __android_log_print(3,"FingerGoodix","Client::cancelRegist");
  pthread_mutex_lock((pthread_mutex_t *)mStatusCheckLock);
  if (*(int *)(*(longlong *)(this + 0x38) + 0x2f4) == *(int *)(this + 0x48)) {
    (**(code **)(*(longlong *)(this + 0x28) + 0xc0))(*(longlong *)(this + 0x28));
    plVar1 = *(longlong **)(this + 0x38);
    if (*(int *)((longlong)plVar1 + 0xe4) - 2U < 3) {
      (**(code **)(*plVar1 + 0x80))(plVar1,5);
      (**(code **)(*(longlong *)(this + 0x28) + 0x1b8))(*(longlong *)(this + 0x28));
      (**(code **)(**(longlong **)(this + 0x38) + 0x80))(*(longlong **)(this + 0x38),1);
      pthread_mutex_unlock((pthread_mutex_t *)mStatusCheckLock);
      return 0;
    }
  }
  else {
    __android_log_print(3,"FingerGoodix","false!current notify id:%d,clientID:%d");
  }
  pthread_mutex_unlock((pthread_mutex_t *)mStatusCheckLock);
  return 0xffffffff;
}



// android::FpService::Client::saveRegist(int)

ulonglong saveRegist(int param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = (longlong *)(ulonglong)(uint)param_1;
  __android_log_print(3,"FingerGoodix","Client::saveRegist curStatus = %d",
                      (ulonglong)*(uint *)(plVar1[7] + 0xe4));
  uVar2 = (**(code **)(*plVar1 + 0x160))(plVar1);
  if ((int)uVar2 != 0) {
    return uVar2 & 0xffffffff;
  }
  pthread_mutex_lock((pthread_mutex_t *)mStatusCheckLock);
  if (*(int *)(plVar1[7] + 0xe4) == 4) {
    uVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1,"goodix");
    uVar2 = uVar2 & 0xffffffff;
    (**(code **)(*(longlong *)plVar1[7] + 0x80))((longlong *)plVar1[7],1);
  }
  else {
    __android_log_print(6,"FingerGoodix","Client::saveRegist , Enroll not complete!");
    uVar2 = 0xffffffff;
  }
  pthread_mutex_unlock((pthread_mutex_t *)mStatusCheckLock);
  return uVar2;
}



// android::FpService::Client::cancelRecognize()

undefined8 __thiscall cancelRecognize(Client *this)

{
  int iVar1;
  
  __android_log_print(3,"FingerGoodix","Client::cancelRecognize %d",
                      (ulonglong)*(uint *)(*(longlong *)(this + 0x38) + 0xe4));
  pthread_mutex_lock((pthread_mutex_t *)mStatusCheckLock);
  if (*(int *)(*(longlong *)(this + 0x38) + 0x2f4) != *(int *)(this + 0x48)) {
    __android_log_print(3,"FingerGoodix","false!current notify id:%d,clientID:%d");
LAB_00113990:
    pthread_mutex_unlock((pthread_mutex_t *)mStatusCheckLock);
    return 0xffffffff;
  }
  iVar1 = *(int *)(*(longlong *)(this + 0x38) + 0xe4);
  if ((iVar1 == 8) || (iVar1 == 1)) {
    __android_log_print(3,"FingerGoodix","Already canceled!");
  }
  else {
    if (1 < iVar1 - 6U) {
      __android_log_print(3,"FingerGoodix","Cancel Failed. status:%d!");
      goto LAB_00113990;
    }
    __android_log_print(3,"FingerGoodix","Cancel status:%d\n");
    (**(code **)(**(longlong **)(this + 0x38) + 0x80))(*(longlong **)(this + 0x38),8);
    (**(code **)(*(longlong *)(this + 0x28) + 0x1b8))(*(longlong *)(this + 0x28));
    (**(code **)(**(longlong **)(this + 0x38) + 0x80))(*(longlong **)(this + 0x38),1);
  }
  pthread_mutex_unlock((pthread_mutex_t *)mStatusCheckLock);
  return 0;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int _ZN7android5MutexD1Ev(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_destroy(__mutex);
  return iVar1;
}



// android::FpService::onTransact(unsigned int, android::Parcel const&, android::Parcel*, unsigned
// int)

void onTransact(uint param_1,Parcel *param_2,Parcel *param_3,uint param_4)

{
  if ((int)param_2 == 2) {
    getpid();
  }
  onTransact(param_1,param_2,param_3,param_4);
  return;
}



// non-virtual thunk to android::FpService::onTransact(unsigned int, android::Parcel const&,
// android::Parcel*, unsigned int)

void onTransact(uint param_1,Parcel *param_2,Parcel *param_3,uint param_4)

{
  onTransact(param_1 - 8,param_2,param_3,param_4);
  return;
}



// android::FpService::Client::load_all_fpdata(void*)

ulonglong __thiscall load_all_fpdata(Client *this,void *param_1)

{
  ulonglong uVar1;
  undefined auStack1032 [1024];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","load_all_fpdata");
  memset(auStack1032,0,0x400);
  uVar1 = (**(code **)(*(longlong *)this + 0x160))(this);
  if ((int)uVar1 == 0) {
    __android_log_print(3,"FingerGoodix","prepare to load_all_fpdata.");
    (**(code **)(*(longlong *)(this + 0x28) + 0x1a0))(auStack1032);
    memcpy(param_1,auStack1032,0x80);
  }
  if (local_8 == __stack_chk_guard) {
    return uVar1 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// android::FpService::Client::recognize(void*)

undefined8 __thiscall recognize(Client *this,void *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_10;
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","FpService::Client::recognize");
  calculate_token_t._0_8_ = *(undefined8 *)param_1;
  calculate_token_t._8_8_ = *(undefined8 *)((longlong)param_1 + 8);
  calculate_token_t._16_8_ = *(undefined8 *)((longlong)param_1 + 0x10);
  calculate_token_t._24_8_ = *(undefined8 *)((longlong)param_1 + 0x18);
  calculate_token_t._32_8_ = *(undefined8 *)((longlong)param_1 + 0x20);
  calculate_token_t._40_8_ = *(undefined8 *)((longlong)param_1 + 0x28);
  calculate_token_t._48_8_ = *(undefined8 *)((longlong)param_1 + 0x30);
  calculate_token_t._56_8_ = *(undefined8 *)((longlong)param_1 + 0x38);
  calculate_token_t._64_4_ = *(undefined4 *)((longlong)param_1 + 0x40);
  calculate_token_t[68] = *(undefined *)((longlong)param_1 + 0x44);
  uVar3 = (**(code **)(*(longlong *)this + 0x160))(this);
  if ((int)uVar3 == 0) {
    if (*(int *)(*(longlong *)(this + 0x38) + 0xe4) - 6U < 2) {
      __android_log_print(3,"FingerGoodix","Already recognize.");
      uVar3 = 0;
    }
    else {
      pthread_mutex_lock((pthread_mutex_t *)ProcessRawDataLock);
      (**(code **)(**(longlong **)(this + 0x38) + 0x80))(*(longlong **)(this + 0x38),6);
      lVar5 = *(longlong *)(this + 0x38);
      *(undefined4 *)(lVar5 + 0x9c) = 5;
      uVar1 = _DAT_00146058;
      uVar3 = _DAT_00146050;
      *(undefined8 *)(lVar5 + 0x94) = _DAT_00146060;
      *(undefined8 *)(lVar5 + 0x84) = uVar3;
      *(undefined8 *)(lVar5 + 0x8c) = uVar1;
      iVar2 = (**(code **)(*(longlong *)(this + 0x28) + 0x1d8))
                        (*(longlong *)(this + 0x28),&local_10);
      if ((iVar2 == 0) && (local_10 != 0)) {
        lVar5 = *(longlong *)(this + 0x38);
        *(undefined4 *)(lVar5 + 0x80) = 3;
      }
      else {
        lVar5 = *(longlong *)(this + 0x38);
        *(undefined4 *)(lVar5 + 0x80) = 0;
      }
      lVar4 = *(longlong *)(this + 0x28);
      *(undefined *)(lVar5 + 0x160) = 0;
      (**(code **)(lVar4 + 0xa0))(lVar4,0);
      (**(code **)(**(longlong **)(this + 0x38) + 0x88))
                (*(longlong **)(this + 0x38),(ulonglong)*(uint *)(this + 0x48));
      (**(code **)(**(longlong **)(this + 0x38) + 0x90))(*(longlong **)(this + 0x38));
      pthread_mutex_unlock((pthread_mutex_t *)ProcessRawDataLock);
      uVar3 = 0;
    }
  }
  if (local_8 == __stack_chk_guard) {
    return uVar3;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// android::FpService::Client::recognizeWithRestrict(unsigned int*, unsigned int, unsigned int)

undefined8 __thiscall recognizeWithRestrict(Client *this,uint *param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_10;
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix",
                      "FpService::Client::recognizeWithRestrict, sectype = %d, length:%d",
                      (ulonglong)param_3,(ulonglong)param_2);
  uVar2 = (**(code **)(*(longlong *)this + 0x160))(this);
  if ((int)uVar2 == 0) {
    if (*(int *)(*(longlong *)(this + 0x38) + 0xe4) - 6U < 2) {
      __android_log_print(3,"FingerGoodix","Already recognizeWithRestrict.");
      uVar2 = 0;
    }
    else {
      pthread_mutex_lock((pthread_mutex_t *)ProcessRawDataLock);
      (**(code **)(**(longlong **)(this + 0x38) + 0x80))(*(longlong **)(this + 0x38),6);
      iVar1 = (**(code **)(*(longlong *)(this + 0x28) + 0x1d8))
                        (*(longlong *)(this + 0x28),&local_10);
      if ((iVar1 == 0) && (local_10 != 0)) {
        lVar3 = *(longlong *)(this + 0x38);
        *(undefined4 *)(lVar3 + 0x80) = 3;
      }
      else {
        lVar3 = *(longlong *)(this + 0x38);
        *(uint *)(lVar3 + 0x80) = param_3;
      }
      *(uint *)(lVar3 + 0x9c) = param_2;
      *(undefined8 *)(lVar3 + 0x84) = 0;
      *(undefined8 *)(lVar3 + 0x8c) = 0;
      *(undefined8 *)(lVar3 + 0x94) = 0;
      memcpy((void *)(*(longlong *)(this + 0x38) + 0x84),param_1,param_2 << 2);
      (**(code **)(*(longlong *)(this + 0x28) + 0xa0))(*(longlong *)(this + 0x28),0);
      (**(code **)(**(longlong **)(this + 0x38) + 0x88))
                (*(longlong **)(this + 0x38),(ulonglong)*(uint *)(this + 0x48));
      (**(code **)(**(longlong **)(this + 0x38) + 0x90))(*(longlong **)(this + 0x38));
      pthread_mutex_unlock((pthread_mutex_t *)ProcessRawDataLock);
      uVar2 = 0;
    }
  }
  if (local_8 == __stack_chk_guard) {
    return uVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// android::FpService::Client::recognizeFido(unsigned char*, int, unsigned char*, int)

ulonglong __thiscall
recognizeFido(Client *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  __android_log_print(3,"FingerGoodix","Client::recognizeFido. \n");
  uVar2 = (**(code **)(*(longlong *)this + 0x160))(this);
  if ((int)uVar2 != 0) {
    return uVar2 & 0xffffffff;
  }
  pthread_mutex_lock((pthread_mutex_t *)ProcessRawDataLock);
  (**(code **)(**(longlong **)(this + 0x38) + 0x80))(*(longlong **)(this + 0x38),6);
  lVar3 = *(longlong *)(this + 0x38);
  *(undefined4 *)(lVar3 + 0x9c) = 5;
  uVar1 = _DAT_00146058;
  uVar4 = _DAT_00146050;
  *(undefined8 *)(lVar3 + 0x94) = _DAT_00146060;
  *(undefined8 *)(lVar3 + 0x84) = uVar4;
  *(undefined8 *)(lVar3 + 0x8c) = uVar1;
  __android_log_print(3,"FingerGoodix","Set Fido Verify.\n");
  lVar3 = *(longlong *)(this + 0x38);
  *(undefined *)(lVar3 + 0x160) = 1;
  if ((param_2 < 0x21) && (param_4 < 0x21)) {
    *(int *)(lVar3 + 0x184) = param_2;
    *(int *)(lVar3 + 0x1a8) = param_4;
    memcpy((void *)(lVar3 + 0x164),param_1,param_2);
    memcpy((void *)(*(longlong *)(this + 0x38) + 0x188),param_3,param_4);
    (**(code **)(*(longlong *)(this + 0x28) + 0xa0))(*(longlong *)(this + 0x28),0);
    (**(code **)(**(longlong **)(this + 0x38) + 0x88))
              (*(longlong **)(this + 0x38),(ulonglong)*(uint *)(this + 0x48));
    (**(code **)(**(longlong **)(this + 0x38) + 0x90))(*(longlong **)(this + 0x38));
    uVar4 = 0;
  }
  else {
    __android_log_print(6,"FingerGoodix",
                        "Client::recognizeFido: aaidbuf or finalchanllenge_buf overflow");
    uVar4 = 0xffffffff;
  }
  pthread_mutex_unlock((pthread_mutex_t *)ProcessRawDataLock);
  return uVar4;
}



// android::FpService::Client::setPasswd(char const*, char const*)

ulonglong __thiscall setPasswd(Client *this,char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  __android_log_print(3,"FingerGoodix","Client::setPasswd,%s,%s",param_1,param_2);
  uVar4 = (**(code **)(*(longlong *)this + 0x160))(this);
  if ((int)uVar4 == 0) {
    if ((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) {
      __android_log_print(3,"FingerGoodix","old password or new password is NULL");
      return 0x85;
    }
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x78));
    iVar1 = (**(code **)(**(longlong **)(this + 0x38) + 0x70))(*(longlong **)(this + 0x38));
    if (iVar1 == 0) {
      (**(code **)(*(longlong *)(this + 0x28) + 0x140))(*(longlong *)(this + 0x28),2);
      __android_log_print(3,"FingerGoodix","it is in MODE_IMAGE,set it to MODE_KEY");
    }
    lVar5 = *(longlong *)(this + 0x28);
    sVar2 = strlen(param_1);
    sVar3 = strlen(param_2);
    uVar4 = (**(code **)(lVar5 + 0x100))(lVar5,param_1,(ulonglong)sVar2,param_2,(ulonglong)sVar3);
    uVar4 = uVar4 & 0xffffffff;
    iVar1 = (**(code **)(**(longlong **)(this + 0x38) + 0x70))(*(longlong **)(this + 0x38));
    if (iVar1 == 1) {
      (**(code **)(*(longlong *)(this + 0x28) + 0x140))(*(longlong *)(this + 0x28),0);
      __android_log_print(3,"FingerGoodix","set it back to MODE_IMAGE");
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x78));
  }
  return uVar4;
}



// android::FpService::Client::checkPasswd(char const*)

ulonglong __thiscall checkPasswd(Client *this,char *param_1)

{
  int iVar1;
  size_t sVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  __android_log_print(3,"FingerGoodix","Client::checkPasswd :%s",param_1);
  uVar3 = (**(code **)(*(longlong *)this + 0x160))(this);
  if ((int)uVar3 == 0) {
    if (param_1 == (char *)0x0) {
      __android_log_print(3,"FingerGoodix","passwd is null");
      return 0x85;
    }
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x78));
    iVar1 = (**(code **)(**(longlong **)(this + 0x38) + 0x70))(*(longlong **)(this + 0x38));
    if (iVar1 == 0) {
      (**(code **)(*(longlong *)(this + 0x28) + 0x140))(*(longlong *)(this + 0x28),2);
      __android_log_print(3,"FingerGoodix","it is in MODE_IMAGE,set it to MODE_KEY");
    }
    lVar4 = *(longlong *)(this + 0x28);
    sVar2 = strlen(param_1);
    uVar3 = (**(code **)(lVar4 + 0x108))(lVar4,param_1,(ulonglong)sVar2);
    uVar3 = uVar3 & 0xffffffff;
    iVar1 = (**(code **)(**(longlong **)(this + 0x38) + 0x70))(*(longlong **)(this + 0x38));
    if (iVar1 == 1) {
      (**(code **)(*(longlong *)(this + 0x28) + 0x140))(*(longlong *)(this + 0x28),0);
      __android_log_print(3,"FingerGoodix","set it back to MODE_IMAGE");
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x78));
  }
  return uVar3;
}



// android::FpService::dump(int, android::Vector<android::String16> const&)

undefined8 dump(int param_1,Vector *param_2)

{
  String8 aSStack16 [8];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  String8(aSStack16);
  _String8(aSStack16);
  if (local_8 == __stack_chk_guard) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// non-virtual thunk to android::FpService::dump(int, android::Vector<android::String16> const&)

void dump(int param_1,Vector *param_2)

{
  dump(param_1 + -8,param_2);
  return;
}



// android::BnInterface<android::IFingerPrint>::queryLocalInterface(android::String16 const&)

void __thiscall queryLocalInterface(BnInterface_android__IFingerPrint_ *this,String16 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  BnInterface_android__IFingerPrint_ **in_x8;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)param_1;
  uVar3 = size();
  uVar1 = descriptor;
  uVar4 = size();
  iVar2 = strzcmp16(uVar5,uVar3,uVar1,uVar4);
  if (iVar2 == 0) {
    *in_x8 = this;
    if (this != (BnInterface_android__IFingerPrint_ *)0x0) {
      incStrong(this + *(longlong *)(*(longlong *)this + -0x18));
    }
    return;
  }
  *in_x8 = (BnInterface_android__IFingerPrint_ *)0x0;
  return;
}



// non-virtual thunk to
// android::BnInterface<android::IFingerPrint>::queryLocalInterface(android::String16 const&)

void __thiscall queryLocalInterface(BnInterface_android__IFingerPrint_ *this,String16 *param_1)

{
  queryLocalInterface(this + -8,param_1);
  return;
}



// android::BnInterface<android::IFingerPrintService>::queryLocalInterface(android::String16 const&)

void __thiscall
queryLocalInterface(BnInterface_android__IFingerPrintService_ *this,String16 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  BnInterface_android__IFingerPrintService_ **in_x8;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)param_1;
  uVar3 = size();
  uVar1 = descriptor;
  uVar4 = size();
  iVar2 = strzcmp16(uVar5,uVar3,uVar1,uVar4);
  if (iVar2 == 0) {
    *in_x8 = this;
    if (this != (BnInterface_android__IFingerPrintService_ *)0x0) {
      incStrong(this + *(longlong *)(*(longlong *)this + -0x18));
    }
    return;
  }
  *in_x8 = (BnInterface_android__IFingerPrintService_ *)0x0;
  return;
}



// non-virtual thunk to
// android::BnInterface<android::IFingerPrintService>::queryLocalInterface(android::String16 const&)

void __thiscall
queryLocalInterface(BnInterface_android__IFingerPrintService_ *this,String16 *param_1)

{
  queryLocalInterface(this + -8,param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// android::BnInterface<android::IFingerPrint>::getInterfaceDescriptor() const

undefined8 * getInterfaceDescriptor(void)

{
  return &descriptor;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// non-virtual thunk to android::BnInterface<android::IFingerPrint>::getInterfaceDescriptor() const

void getInterfaceDescriptor(void)

{
  getInterfaceDescriptor();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// android::BnInterface<android::IFingerPrintService>::getInterfaceDescriptor() const

undefined8 * getInterfaceDescriptor(void)

{
  return &descriptor;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// non-virtual thunk to android::BnInterface<android::IFingerPrintService>::getInterfaceDescriptor()
// const

void getInterfaceDescriptor(void)

{
  getInterfaceDescriptor();
  return;
}



// android::FpService::check(int)

undefined8 __thiscall check(FpService *this,int param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","finger print check,id is %d.",(ulonglong)(uint)param_1);
  uVar2 = 0x85;
  if ((uint)param_1 < 7) {
    (**(code **)(*(longlong *)this + 0x48))(this);
    uVar2 = 0;
  }
  if (lVar1 == __stack_chk_guard) {
    return uVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// android::FpService::getClientLockById(int)

FpService * __thiscall getClientLockById(FpService *this,int param_1)

{
  if ((uint)param_1 < 7) {
    this = this + (longlong)param_1 * 0x28 + 0x1d8;
  }
  else {
    __android_log_print(3,"FingerGoodix","Failed to getClientLockById,invalide fingerprint Id:%d",
                        (ulonglong)(uint)param_1);
    this = (FpService *)0x0;
  }
  return this;
}



// android::FpService::Client::unRegist(int)

void __thiscall unRegist(Client *this,int param_1)

{
  int iVar1;
  int local_10 [2];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","Client::unRegist");
  iVar1 = (**(code **)(*(longlong *)this + 0x160))(this);
  if (iVar1 == 0) {
    local_10[0] = param_1;
    (**(code **)(*(longlong *)this + 0xe0))(this,local_10,1);
  }
  if (local_8 == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// android::FpService::Client::delFpTemplates(unsigned int*, unsigned int)

void __thiscall delFpTemplates(Client *this,uint *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  __android_log_print(3,"FingerGoodix","Client::delFpTemplates,count:%d",(ulonglong)param_2);
  iVar2 = (**(code **)(*(longlong *)this + 0x160))(this);
  if (iVar2 == 0) {
    uVar4 = 0;
    if (0 < (int)param_2) {
      do {
        puVar1 = param_1 + uVar4;
        uVar3 = uVar4 & 0xffffffff;
        uVar4 = uVar4 + 1;
        __android_log_print(3,"FingerGoodix","Client::delFpTemplates,position:%d,value:%d",uVar3,
                            (ulonglong)*puVar1);
      } while ((int)uVar4 < (int)param_2);
    }
    (**(code **)(*(longlong *)(this + 0x28) + 0xf0))
              (*(longlong *)(this + 0x28),param_1,(ulonglong)param_2);
  }
  return;
}



// android::FpService::Client::getFpTemplateIdList(unsigned int*, unsigned int*)

ulonglong __thiscall getFpTemplateIdList(Client *this,uint *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint *puVar4;
  
  __android_log_print(3,"FingerGoodix","Client::getFpTemplateIdList,pCount:%d",(ulonglong)*param_2);
  uVar2 = (**(code **)(*(longlong *)this + 0x160))(this);
  if ((int)uVar2 == 0) {
    if (*param_2 != 0) {
      uVar2 = 0;
      puVar4 = param_1;
      do {
        uVar1 = (int)uVar2 + 1;
        __android_log_print(3,"FingerGoodix","Client::getFpTemplateIdList,position:%d,value:%d",
                            uVar2,(ulonglong)*puVar4);
        uVar2 = (ulonglong)uVar1;
        puVar4 = puVar4 + 1;
      } while (uVar1 < *param_2);
    }
    __android_log_print(3,"FingerGoodix","Client::getFpTemplateIdList,mHardWareContext.device,%p",
                        *(undefined8 *)(this + 0x28));
    uVar2 = (**(code **)(*(longlong *)(this + 0x28) + 0xf8))
                      (*(longlong *)(this + 0x28),param_1,param_2);
    uVar2 = uVar2 & 0xffffffff;
    if (*param_2 != 0) {
      uVar3 = 0;
      do {
        uVar1 = (int)uVar3 + 1;
        __android_log_print(3,"FingerGoodix","Client::getFpTemplateIdList,position:%d,value:%d",
                            uVar3,(ulonglong)*param_1);
        uVar3 = (ulonglong)uVar1;
        param_1 = param_1 + 1;
      } while (uVar1 < *param_2);
    }
  }
  return uVar2;
}



// android::FpService::Client::driverTest()

ulonglong __thiscall driverTest(Client *this)

{
  int iVar1;
  ulonglong uVar2;
  
  __android_log_print(3,"FingerGoodix","Client::driverTest");
  uVar2 = (**(code **)(*(longlong *)this + 0x160))(this);
  if (((int)uVar2 == 0) &&
     (iVar1 = (**(code **)(*(longlong *)(this + 0x28) + 0x118))(*(longlong *)(this + 0x28)),
     iVar1 == 0)) {
    __android_log_print(3,"FingerGoodix","fnCa_DriverTest run ok");
    return uVar2 & 0xffffffff;
  }
  return uVar2 & 0xffffffff;
}



// android::FpService::Client::getFpTemplateList(unsigned int*, unsigned int*, char**)

ulonglong __thiscall getFpTemplateList(Client *this,uint *param_1,uint *param_2,char **param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  __android_log_print(3,"FingerGoodix","Client::getFpTemplateList,count:%d",(ulonglong)*param_1);
  uVar1 = (**(code **)(*(longlong *)this + 0x160))(this);
  if ((int)uVar1 == 0) {
    if ((param_2 == (uint *)0x0) || (param_3 == (char **)0x0)) {
      __android_log_print(6,"FingerGoodix","some of the params is NULL in getFpTemplateList");
      uVar1 = 0xffffffff;
    }
    else {
      uVar2 = (**(code **)(*(longlong *)(this + 0x28) + 0xf8))
                        (*(longlong *)(this + 0x28),param_2,param_1);
      if ((int)uVar2 != 0) {
        __android_log_print(6,"FingerGoodix","failed to fnCa_GetFpTemplateIdList");
        return uVar2 & 0xffffffff;
      }
      lVar4 = 0;
      if (*param_1 != 0) {
        do {
          (**(code **)(*(longlong *)this + 0x108))(this,(ulonglong)param_2[lVar4],param_3[lVar4]);
          __android_log_print(3,"FingerGoodix","get id:%d,name:%s",(ulonglong)param_2[lVar4],
                              param_3[lVar4]);
          iVar3 = (int)lVar4;
          lVar4 = lVar4 + 1;
        } while (iVar3 + 1U < *param_1);
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}



// android::FpService::Client::alipayTzInvokeCommand(unsigned int, void*, unsigned int, void*,
// unsigned int*)

undefined8 __thiscall
alipayTzInvokeCommand
          (Client *this,uint param_1,void *param_2,uint param_3,void *param_4,uint *param_5)

{
  undefined8 uVar1;
  
  __android_log_print(3,"FingerGoodix","Client[%d]::alipayTzInvokeCommand",
                      (ulonglong)*(uint *)(this + 0x48));
  uVar1 = (**(code **)(*(longlong *)this + 0x160))(this);
  if ((int)uVar1 == 0) {
    if ((param_4 == (void *)0x0 || param_5 == (uint *)0x0) || (param_2 == (void *)0x0)) {
      __android_log_print(6,"FingerGoodix","some of the params is NULL in getFpTemplateList");
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = (**(code **)(*(longlong *)(this + 0x28) + 0x1c8))
                        (*(longlong *)(this + 0x28),0xa001000,param_2,(ulonglong)param_3);
    }
  }
  return uVar1;
}



// android::FpService::Client::enableFingerScreenUnlock()

undefined8 __thiscall enableFingerScreenUnlock(Client *this)

{
  int iVar1;
  
  __android_log_print(3,"FingerGoodix","Client::enableFingerScreenUnlock");
  iVar1 = (**(code **)(*(longlong *)(this + 0x28) + 0x268))(*(longlong *)(this + 0x28));
  if (iVar1 == 0) {
    __android_log_print(3,"FingerGoodix","enable_finger_screen_unlock run ok");
  }
  return 0;
}



// android::FpService::Client::disableFingerScreenUnlock()

undefined8 __thiscall disableFingerScreenUnlock(Client *this)

{
  int iVar1;
  
  __android_log_print(3,"FingerGoodix","Client::disableFingerScreenUnlock");
  iVar1 = (**(code **)(*(longlong *)(this + 0x28) + 0x270))(*(longlong *)(this + 0x28));
  if (iVar1 == 0) {
    __android_log_print(3,"FingerGoodix","disable_finger_screen_unlock run ok");
  }
  return 0;
}



// android::FpService::Client::setRecFlag(unsigned int)

undefined8 __thiscall setRecFlag(Client *this,uint param_1)

{
  int iVar1;
  
  __android_log_print(3,"FingerGoodix","Client::setRecFlag fpFlag: %d",(ulonglong)param_1);
  iVar1 = (**(code **)(*(longlong *)(this + 0x28) + 0x278))
                    (*(longlong *)(this + 0x28),(ulonglong)param_1);
  if (iVar1 == 0) {
    __android_log_print(3,"FingerGoodix","set_recognize_flag run ok");
  }
  return 0;
}



// android::FpService::Client::query()

ulonglong __thiscall query(Client *this)

{
  ulonglong uVar1;
  undefined8 *__ptr;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  uint local_c;
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","Client::query");
  uVar1 = (**(code **)(*(longlong *)this + 0x160))(this);
  uVar5 = uVar1 & 0xffffffff;
  if ((int)uVar1 == 0) {
    local_c = 5;
    __ptr = (undefined8 *)malloc(0x14);
    if (__ptr == (undefined8 *)0x0) {
      uVar5 = 0xffffffff;
      __android_log_print(3,"FingerGoodix","Client:query fail to malloc memory");
    }
    else {
      lVar2 = *(longlong *)this;
      *__ptr = 0;
      __ptr[1] = 0;
      *(undefined4 *)(__ptr + 2) = 0;
      uVar1 = (**(code **)(lVar2 + 0xe8))(this,__ptr,&local_c);
      if ((int)uVar1 == 0) {
        __android_log_print(3,"FingerGoodix","after add count,query count:%d,queryResult:0x%x",
                            (ulonglong)local_c,0x50000);
        if (local_c == 0) {
          uVar5 = 0x50000;
          uVar4 = 0x50000;
        }
        else {
          uVar4 = 0x50000;
          uVar3 = 0;
          puVar6 = __ptr;
          do {
            uVar3 = uVar3 + 1;
            uVar4 = uVar4 | 1 << (ulonglong)(*(uint *)puVar6 - 1 & 0x1f);
            __android_log_print(3,"FingerGoodix","add index:%d,queryResult:0x%x",
                                (ulonglong)*(uint *)puVar6,(ulonglong)uVar4);
            puVar6 = (undefined8 *)((longlong)puVar6 + 4);
          } while (uVar3 < local_c);
          uVar5 = (ulonglong)uVar4;
        }
        __android_log_print(3,"FingerGoodix","after add index,query count:%d,queryResult:0x%x",
                            (ulonglong)local_c,(ulonglong)uVar4);
      }
      else {
        __android_log_print(6,"FingerGoodix","failed to query!!!,getFpTemplateIdList result:0x%x",
                            uVar1 & 0xffffffff);
      }
      free(__ptr);
    }
  }
  if (local_8 == __stack_chk_guard) {
    return uVar5;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// android::FpService::Client::saveRegister(char const*)

undefined8 __thiscall saveRegister(Client *this,char *param_1)

{
  longlong lVar1;
  size_t __n;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *__dest;
  ulonglong uVar4;
  
  lVar1 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","Client::saveRegister()");
  uVar3 = (**(code **)(*(longlong *)this + 0x160))(this);
  if ((int)uVar3 == 0) {
    __dest = (undefined8 *)malloc(0x80);
    if (__dest == (undefined8 *)0x0) {
      __android_log_print(6,"FingerGoodix","failed to malloc pFpName in saveRegister");
      uVar3 = 0xffffffff;
    }
    else {
      *__dest = 0;
      __dest[1] = 0;
      __dest[2] = 0;
      __dest[3] = 0;
      __dest[4] = 0;
      __dest[5] = 0;
      __dest[6] = 0;
      __dest[7] = 0;
      __dest[8] = 0;
      __dest[9] = 0;
      __dest[10] = 0;
      __dest[0xb] = 0;
      __dest[0xc] = 0;
      __dest[0xd] = 0;
      __dest[0xe] = 0;
      __dest[0xf] = 0;
      if (param_1 == (char *)0x0) {
        __android_log_print(6,"FingerGoodix","Client saveRegister name is NULL");
        uVar4 = 1;
      }
      else {
        __android_log_print(3,"FingerGoodix","Client saveRegister name:%s",param_1);
        __n = strlen(param_1);
        if (0x7f < __n) {
          __android_log_print(3,"FingerGoodix","modify fp name is too long,count is %d.",
                              (ulonglong)__n);
          uVar3 = 0xffffffff;
          goto LAB_00114f24;
        }
        memcpy(__dest,param_1,__n);
        uVar4 = (ulonglong)(__n + 1);
      }
      uVar2 = (**(code **)(*(longlong *)(this + 0x28) + 200))
                        (*(longlong *)(this + 0x28),__dest,uVar4);
      free(__dest);
      if (uVar2 == 0) {
        __android_log_print(3,"FingerGoodix","success to saveRegister(),index:%d",0);
        uVar3 = 0;
      }
      else {
        __android_log_print(6,"FingerGoodix","failed to saveRegister(),result:%d",(ulonglong)uVar2);
        uVar3 = 0xffffffff;
      }
    }
  }
LAB_00114f24:
  if (lVar1 == __stack_chk_guard) {
    return uVar3;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// android::FpService::Client::modifyFpName(int, char const*)

ulonglong __thiscall modifyFpName(Client *this,int param_1,char *param_2)

{
  size_t __n;
  undefined8 uVar1;
  undefined8 *__dest;
  ulonglong uVar2;
  uint uVar3;
  
  __android_log_print(3,"FingerGoodix","Client::modifyFpName:%d",(ulonglong)(uint)param_1);
  uVar1 = (**(code **)(*(longlong *)this + 0x160))(this);
  if ((int)uVar1 == 0) {
    __dest = (undefined8 *)malloc(0x80);
    if (__dest != (undefined8 *)0x0) {
      *__dest = 0;
      __dest[1] = 0;
      __dest[2] = 0;
      __dest[3] = 0;
      __dest[4] = 0;
      __dest[5] = 0;
      __dest[6] = 0;
      __dest[7] = 0;
      __dest[8] = 0;
      __dest[9] = 0;
      __dest[10] = 0;
      __dest[0xb] = 0;
      __dest[0xc] = 0;
      __dest[0xd] = 0;
      __dest[0xe] = 0;
      __dest[0xf] = 0;
      if (param_2 == (char *)0x0) {
        uVar3 = 1;
        __android_log_print(6,"FingerGoodix","pName is NULL!!!");
      }
      else {
        __n = strlen(param_2);
        if (0x7f < (int)__n) {
          __android_log_print(6,"FingerGoodix","modify fp name is too long,count is %d.",
                              (ulonglong)__n);
          return 0xffffffff;
        }
        uVar3 = __n + 1;
        memcpy(__dest,param_2,__n);
        __android_log_print(3,"FingerGoodix","modifyFpName is %s,pFpName is %s,length is %d",param_2
                            ,__dest,(ulonglong)__n);
      }
      __android_log_print(3,"FingerGoodix","call ta in modifyFpName");
      uVar2 = (**(code **)(*(longlong *)(this + 0x28) + 0xd8))
                        (*(longlong *)(this + 0x28),(ulonglong)(uint)param_1,__dest,(ulonglong)uVar3
                        );
      free(__dest);
      return uVar2 & 0xffffffff;
    }
    __android_log_print(6,"FingerGoodix","failed to malloc pFpName in modifyFpName");
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// android::FpService::Client::getFpNameById(int, char*)

ulonglong __thiscall getFpNameById(Client *this,int param_1,char *param_2)

{
  longlong lVar1;
  size_t sVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","Client::getFpNameById,%d",(ulonglong)(uint)param_1);
  uVar3 = (**(code **)(*(longlong *)this + 0x160))(this);
  if ((int)uVar3 == 0) {
    uVar4 = (**(code **)(*(longlong *)(this + 0x28) + 0xd0))
                      (*(longlong *)(this + 0x28),(ulonglong)(uint)param_1,param_2);
    uVar3 = uVar4 & 0xffffffff;
    if ((int)uVar4 == 0) {
      sVar2 = strlen(param_2);
      __android_log_print(3,"FingerGoodix",
                          "success to fnCa_GetFpNameById,count:%d,name:%s,length:%d",0x80,param_2,
                          (ulonglong)sVar2);
    }
    else {
      __android_log_print(6,"FingerGoodix","failed to fnCa_GetFpNameById,free pFpName");
    }
  }
  if (lVar1 == __stack_chk_guard) {
    return uVar3;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// android::FpService::getClientByIdUnsafe(int)

undefined8 __thiscall getClientByIdUnsafe(FpService *this,int param_1)

{
  undefined8 uVar1;
  
  if ((uint)param_1 < 7) {
    uVar1 = *(undefined8 *)(this + (longlong)param_1 * 8 + 0x20);
  }
  else {
    __android_log_print(3,"FingerGoodix","Failed to getClientByIdUnsafe,invalide fingerprint Id:%d")
    ;
    uVar1 = 0;
  }
  return uVar1;
}



// android::FpService::Client::setSafeClass(unsigned int)

ulonglong __thiscall setSafeClass(Client *this,uint param_1)

{
  ulonglong uVar1;
  
  if (*(int *)(*(longlong *)(this + 0x38) + 0xe4) == 0) {
    __android_log_print(6,"FingerGoodix","%s, service is failed to init, nothing to do, just return"
                        ,
                        "virtual android::status_t android::FpService::Client::setSafeClass(uint32_t)"
                       );
    return 0x81;
  }
  __android_log_print(6,"FingerGoodix","FpService::Client::setSafeClass , enter, safeClass:%d",
                      (ulonglong)param_1);
  uVar1 = (**(code **)(*(longlong *)(this + 0x28) + 0x290))
                    (*(longlong *)(this + 0x28),(ulonglong)param_1);
  if ((int)uVar1 == 0) {
    DAT_00146008 = param_1;
  }
  __android_log_print(3,"FingerGoodix",
                      "FpService::Client::setSafeClass fnCa_SetSafeClass return:0x%08X",
                      uVar1 & 0xffffffff);
  return uVar1 & 0xffffffff;
}



// android::FpService::~FpService()

void __thiscall _FpService(FpService *this)

{
  int iVar1;
  longlong *plVar2;
  longlong **pplVar3;
  pthread_mutex_t *__mutex;
  
  *(undefined8 *)this = 0x141b08;
  *(undefined8 *)(this + 0x300) = 0x141c78;
  *(undefined8 *)(this + 8) = 0x141bb8;
  pplVar3 = (longlong **)(this + 0x58);
  __android_log_print(6,"FingerGoodix","FingerPrintService is ~FpService()");
  __android_log_print(3,"FingerGoodix","but finger print is busy");
  DAT_00146068 = 0;
  if (*(longlong *)(this + 0x158) != 0) {
    (**(code **)(*(longlong *)(this + 0x158) + 0x98))();
    (**(code **)(*(longlong *)(this + 0x158) + 0x88))(*(longlong *)(this + 0x158));
    *(undefined4 *)(this + 0x2f0) = 1;
    iVar1 = (**(code **)(*(longlong *)(this + 0x158) + 0x160))(*(longlong *)(this + 0x158));
    if (iVar1 == 0) {
      __android_log_print(3,"FingerGoodix","success to disable device");
    }
    else {
      __android_log_print(3,"FingerGoodix","failed to disable device");
    }
    __android_log_print(3,"FingerGoodix","FpService::~FpService(),fnCa_CloseSession");
  }
  __mutex = (pthread_mutex_t *)(this + 0x2f0);
  do {
    __mutex = __mutex + -1;
    pthread_mutex_destroy(__mutex);
  } while ((pthread_mutex_t *)(this + 0x1d8) != __mutex);
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x1b0));
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x11c));
  pthread_cond_destroy((pthread_cond_t *)(this + 0xec));
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0xbc));
  do {
    pplVar3 = pplVar3 + -1;
    plVar2 = *pplVar3;
    if (plVar2 != (longlong *)0x0) {
      decStrong((void *)((longlong)plVar2 + *(longlong *)(*plVar2 + -0x18)));
    }
  } while ((longlong **)(this + 0x20) != pplVar3);
  *(undefined8 *)this = 0x1417b8;
  *(undefined8 *)(this + 0x300) = 0x1418c8;
  *(undefined8 *)(this + 8) = 0x141808;
  _BBinder((BBinder *)(this + 8));
  _IFingerPrintService((IFingerPrintService *)this);
  _RefBase((RefBase *)(this + 0x300));
  return;
}



// virtual thunk to android::FpService::~FpService()

void __thiscall _FpService(FpService *this)

{
  _FpService(this + *(longlong *)(*(longlong *)this + -0x18));
  return;
}



// non-virtual thunk to android::FpService::~FpService()

void __thiscall _FpService(FpService *this)

{
  _FpService(this + -8);
  return;
}



// android::FpService::~FpService()

void __thiscall _FpService(FpService *this)

{
  _FpService(this);
  _ZdlPv(this);
  return;
}



// virtual thunk to android::FpService::~FpService()

void __thiscall _FpService(FpService *this)

{
  _FpService(this + *(longlong *)(*(longlong *)this + -0x18));
  return;
}



// non-virtual thunk to android::FpService::~FpService()

void __thiscall _FpService(FpService *this)

{
  _FpService(this + -8);
  return;
}



// android::FpService::set_prop_goodix_fp(char)

void __thiscall set_prop_goodix_fp(FpService *this,char param_1)

{
  ulonglong uVar1;
  ulonglong local_68;
  undefined8 uStack96;
  undefined8 local_58;
  undefined8 uStack80;
  undefined8 local_48;
  undefined8 uStack64;
  undefined8 local_38;
  undefined8 uStack48;
  undefined8 local_28;
  undefined8 uStack32;
  undefined8 local_18;
  undefined4 local_10;
  undefined local_c;
  longlong local_8;
  
  local_18 = 0;
  local_8 = __stack_chk_guard;
  local_68 = 0;
  uStack96 = 0;
  local_58 = 0;
  uStack80 = 0;
  local_48 = 0;
  uStack64 = 0;
  local_38 = 0;
  uStack48 = 0;
  local_28 = 0;
  uStack32 = 0;
  local_10 = 0;
  local_c = 0;
  uVar1 = property_get("persist.sys.fp.goodix",&local_68,0);
  __android_log_print(3,"FingerGoodix","getprop[%s] return: %d, prop: %s","persist.sys.fp.goodix",
                      uVar1 & 0xffffffff,&local_68);
  local_68 = local_68 & 0xffffffffffff0000 | (ulonglong)(byte)param_1;
  uVar1 = property_set("persist.sys.fp.goodix",&local_68);
  __android_log_print(3,"FingerGoodix","setprop[%s] to \'%s\', return: %d","persist.sys.fp.goodix",
                      &local_68,uVar1 & 0xffffffff);
  if ((int)(uVar1 & 0xffffffff) != 0) {
    __android_log_print(6,"FingerGoodix","Failed to setprop[%s]","persist.sys.fp.goodix");
  }
  if (local_8 == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// android::BnFingerPrintService::~BnFingerPrintService()

void __thiscall _BnFingerPrintService(BnFingerPrintService *this)

{
  longlong *in_x1;
  longlong lVar1;
  
  lVar1 = *in_x1;
  *(longlong *)this = lVar1;
  *(longlong *)(this + *(longlong *)(lVar1 + -0x18)) = in_x1[0xc];
  *(longlong *)(this + 8) = in_x1[0xd];
  lVar1 = in_x1[1];
  *(longlong *)this = lVar1;
  *(longlong *)(this + *(longlong *)(lVar1 + -0x18)) = in_x1[10];
  *(longlong *)(this + 8) = in_x1[0xb];
  _BBinder((BBinder *)(this + 8));
  _IFingerPrintService((IFingerPrintService *)this);
  return;
}



// WARNING: Restarted to delay deadcode elimination for space: stack
// android::FpService::FpService()

void __thiscall FpService(FpService *this)

{
  longlong lVar1;
  longlong *in_x1;
  pthread_mutex_t *__mutex;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 in_register_00005008;
  
  IFingerPrintService((IFingerPrintService *)this);
  uVar3 = BBinder((BBinder *)(this + 8));
  lVar1 = in_x1[2];
                    // WARNING: Ignoring partial resolution of indirect
  uVar2 = 0;
  uVar2 = 0;
  uVar2 = 0;
  uVar2 = 0;
  *(longlong *)this = lVar1;
  *(longlong *)(this + *(longlong *)(lVar1 + -0x18)) = in_x1[0xb];
  *(longlong *)(this + 8) = in_x1[0xc];
  lVar1 = in_x1[1];
  *(longlong *)this = lVar1;
  *(longlong *)(this + *(longlong *)(lVar1 + -0x18)) = in_x1[0xd];
  *(longlong *)(this + 8) = in_x1[0xe];
  lVar1 = *in_x1;
  *(longlong *)this = lVar1;
  *(longlong *)(this + *(longlong *)(lVar1 + -0x18)) = in_x1[0xf];
  *(longlong *)(this + 8) = in_x1[0x10];
  *(undefined8 *)(this + 0x28) = in_register_00005008;
  *(undefined8 *)(this + 0x20) = uVar3;
  *(undefined8 *)(this + 0x38) = in_register_00005008;
  *(undefined8 *)(this + 0x30) = uVar3;
  *(undefined8 *)(this + 0x48) = in_register_00005008;
  *(undefined8 *)(this + 0x40) = uVar3;
  *(undefined8 *)(this + 0x50) = 0;
  pthread_mutex_init((pthread_mutex_t *)(this + 0xbc),(pthread_mutexattr_t *)0x0);
  pthread_cond_init((pthread_cond_t *)(this + 0xec),(pthread_condattr_t *)0x0);
  pthread_mutex_init((pthread_mutex_t *)(this + 0x11c),(pthread_mutexattr_t *)0x0);
  this[0x1ac] = (FpService)0x0;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x1b0),(pthread_mutexattr_t *)0x0);
  __mutex = (pthread_mutex_t *)(this + 0x1d8);
  lVar1 = 6;
  do {
    pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    lVar1 = lVar1 + -1;
    __mutex = __mutex + 1;
  } while (lVar1 != -1);
  DAT_00146050 = 1;
  DAT_00146054 = 2;
  *(undefined4 *)(this + 0x2f8) = 1;
  DAT_0014605c = 4;
  DAT_00146058 = 3;
  DAT_00146060 = 5;
  DAT_00146064 = 3;
  __android_log_print(3,"FingerGoodix","FingerPrintService is constructing");
  return;
}



// WARNING: Restarted to delay deadcode elimination for space: stack
// android::FpService::FpService()

void __thiscall FpService(FpService *this)

{
  longlong lVar1;
  pthread_mutex_t *__mutex;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 in_register_00005008;
  
  RefBase((RefBase *)(this + 0x300));
  IFingerPrintService((IFingerPrintService *)this);
  uVar3 = BBinder((BBinder *)(this + 8));
                    // WARNING: Ignoring partial resolution of indirect
  uVar2 = 0;
  uVar2 = 0;
  uVar2 = 0;
  uVar2 = 0;
  *(undefined8 *)this = 0x141b08;
  *(undefined8 *)(this + 0x300) = 0x141c78;
  *(undefined8 *)(this + 8) = 0x141bb8;
  *(undefined8 *)(this + 0x28) = in_register_00005008;
  *(undefined8 *)(this + 0x20) = uVar3;
  *(undefined8 *)(this + 0x38) = in_register_00005008;
  *(undefined8 *)(this + 0x30) = uVar3;
  *(undefined8 *)(this + 0x48) = in_register_00005008;
  *(undefined8 *)(this + 0x40) = uVar3;
  *(undefined8 *)(this + 0x50) = 0;
  pthread_mutex_init((pthread_mutex_t *)(this + 0xbc),(pthread_mutexattr_t *)0x0);
  pthread_cond_init((pthread_cond_t *)(this + 0xec),(pthread_condattr_t *)0x0);
  pthread_mutex_init((pthread_mutex_t *)(this + 0x11c),(pthread_mutexattr_t *)0x0);
  this[0x1ac] = (FpService)0x0;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x1b0),(pthread_mutexattr_t *)0x0);
  __mutex = (pthread_mutex_t *)(this + 0x1d8);
  lVar1 = 6;
  do {
    pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    lVar1 = lVar1 + -1;
    __mutex = __mutex + 1;
  } while (lVar1 != -1);
  DAT_00146050 = 1;
  DAT_00146054 = 2;
  *(undefined4 *)(this + 0x2f8) = 1;
  DAT_0014605c = 4;
  DAT_00146058 = 3;
  DAT_00146060 = 5;
  DAT_00146064 = 3;
  __android_log_print(3,"FingerGoodix","FingerPrintService is constructing");
  return;
}



// android::FpService::init()

undefined8 __thiscall init(FpService *this)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  code **ppcVar4;
  longlong local_2a8;
  longlong local_2a0;
  uint local_298;
  undefined4 uStack660;
  uint local_290;
  undefined auStack648 [128];
  undefined auStack520 [64];
  undefined auStack456 [64];
  undefined auStack392 [64];
  char acStack328 [64];
  undefined auStack264 [64];
  char acStack200 [64];
  undefined auStack136 [64];
  undefined auStack72 [64];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","FingerPrintService is initializing");
  *(undefined4 *)(this + 0x2f4) = 0;
  local_2a8 = 0;
  memset(auStack648,0,0x280);
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  sem_init((sem_t *)&DAT_00146040,0,0);
  uVar2 = hw_get_module("gxfingerprint",&local_2a8);
  if ((int)uVar2 == 0) {
    if (local_2a8 == 0) {
      __android_log_print(6,"FingerGoodix","No valid fingerprint module");
      uVar3 = 0xffffffff;
    }
    else {
      ppcVar4 = *(code ***)(local_2a8 + 0x20);
      *(longlong *)(this + 0x150) = local_2a8;
      if (*ppcVar4 == (code *)0x0) {
        __android_log_print(6,"FingerGoodix","No valid open method",ppcVar4,uVar2 & 0xffffffff);
        uVar3 = 0xffffffff;
      }
      else {
        local_2a0 = 0;
        uVar1 = (**ppcVar4)(local_2a8,0,&local_2a0);
        if (uVar1 == 0) {
          enable_goodix_fp_with_sys_prop();
          if (*(int *)(local_2a0 + 4) != 0x100) {
            __android_log_print(3,"FingerGoodix","Wrong fp version. Expected %d, got %d",0x100);
          }
          *(longlong *)(this + 0x158) = local_2a0;
          *(undefined4 *)(this + 0x7c) = 0;
          DAT_00146068 = this;
          (**(code **)(local_2a0 + 0x198))(local_2a0,notifyClient);
          (**(code **)(*(longlong *)(this + 0x158) + 0x148))(*(longlong *)(this + 0x158),auStack648)
          ;
          (**(code **)(*(longlong *)(this + 0x158) + 0x228))
                    (*(longlong *)(this + 0x158),this + 0xa0);
          __android_log_print(6,"FingerGoodix",
                              "##################################################################");
          __android_log_print(6,"FingerGoodix","SOFT VERSION INFO");
          __android_log_print(6,"FingerGoodix","         TARGET_MODE=%s","debug");
          __android_log_print(6,"FingerGoodix","PACKAGE_VERSION_CODE=%s",0x134868);
          __android_log_print(6,"FingerGoodix","PACKAGE_VERSION_NAME=%s",0x134868);
          __android_log_print(6,"FingerGoodix","          GIT_BRANCH=%s","A13_new");
          __android_log_print(6,"FingerGoodix","           COMMIT_ID=%s",
                              "25c663ef1953ad1dc2133804973618c76630aebb");
          __android_log_print(6,"FingerGoodix","          BUILD_TIME=%s","2017.05.24_12:54:44");
          sprintf(acStack328,"GX Srv V%02x.%02x.%02x [%s_%s]",1,0,0x16,"May 24 2017","12:54:46");
          sprintf(acStack200,"Flow V%02x.%02x.%02x [%s_%s]",1,0,6,"May 24 2017","12:54:46");
          memset(algoVersion,0,0x1ff);
          sprintf(algoVersion,"%sSERVICE VERSION=%s.\n",algoVersion,acStack328);
          sprintf(algoVersion,"%sHAL VERSION=%s.\n",algoVersion,auStack264);
          sprintf(algoVersion,"%sTA VERSION=%s.\n",algoVersion,auStack648);
          sprintf(algoVersion,"%sALG VERSION=%s.\n",algoVersion,auStack456);
          sprintf(algoVersion,"%sNAVIGATION VERSION=%s.\n",algoVersion,auStack520);
          sprintf(algoVersion,"%sFLOW VERSION=%s.\n",algoVersion,acStack200);
          sprintf(algoVersion,"%sBASE VERSION=%s.\n",algoVersion,auStack136);
          sprintf(algoVersion,"%sCONSISTENCY VERSION=%s.\n",algoVersion,auStack392);
          sprintf(algoVersion,"%sVERSION ChipId=%s.\n",algoVersion,auStack72);
          sprintf(algoVersion,"%sHardwareInfo VendorId=0x%x.\n",algoVersion,
                  (ulonglong)(byte)this[0xb8]);
          __android_log_print(6,"FingerGoodix",0x136e10,algoVersion);
          if (this[0xb8] == (FpService)0x10) {
            __android_log_print(6,"FingerGoodix","Chip type>>> Ofilm Chip");
          }
          else {
            if (this[0xb8] == (FpService)0x0) {
              __android_log_print(6,"FingerGoodix","Chip type>>> Qiutech Chip");
            }
          }
          __android_log_print(6,"FingerGoodix",
                              "##################################################################");
          uVar2 = (**(code **)(*(longlong *)(this + 0x158) + 0x240))(*(longlong *)(this + 0x158));
          __android_log_print(3,"FingerGoodix","preprocessor init ret = %d",uVar2 & 0xffffffff);
          *(bool *)(this + 0x1ac) = (int)uVar2 == 0;
          pthread_create((pthread_t *)(this + 0x148),(pthread_attr_t *)0x0,
                         (__start_routine *)&LAB_00117504,this);
          (**(code **)(*(longlong *)this + 0x80))(this,1);
          local_298 = 0;
          uVar1 = property_get_int32("ro.register.count",0);
          if (0 < (int)uVar1) {
            __android_log_print(3,"FingerGoodix","preprocessor init register_cnt = %d",
                                (ulonglong)uVar1);
            uStack660 = 1;
            local_290 = uVar1;
            (**(code **)(*(longlong *)(this + 0x158) + 0x248))
                      (*(longlong *)(this + 0x158),CONCAT44(1,local_298),(ulonglong)uVar1);
          }
          uVar1 = property_get_int32("ro.template.count",0);
          if ((int)uVar1 < 1) {
            uVar3 = 0;
          }
          else {
            __android_log_print(3,"FingerGoodix","preprocessor init study_cnt = %d",(ulonglong)uVar1
                               );
            uStack660 = 0;
            local_290 = uVar1;
            (**(code **)(*(longlong *)(this + 0x158) + 0x248))
                      (*(longlong *)(this + 0x158),(ulonglong)local_298,(ulonglong)uVar1);
            uVar3 = 0;
          }
        }
        else {
          __android_log_print(6,"FingerGoodix","Can\'t open fingerprint methods, error: %d",
                              (ulonglong)uVar1);
          disable_goodix_fp_with_sys_prop();
          sem_destroy((sem_t *)&DAT_00146040);
          uVar3 = 0xffffffff;
        }
      }
    }
  }
  else {
    __android_log_print(6,"FingerGoodix","Can\'t open fingerprint HW Module, %s error: %d",
                        "gxfingerprint",uVar2 & 0xffffffff);
    uVar3 = 0xffffffff;
  }
  if (local_8 == __stack_chk_guard) {
    return uVar3;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// android::FpService::~FpService()

void __thiscall _FpService(FpService *this)

{
  int iVar1;
  longlong *plVar2;
  longlong *in_x1;
  longlong lVar3;
  longlong **pplVar4;
  pthread_mutex_t *__mutex;
  
  lVar3 = *in_x1;
  *(longlong *)this = lVar3;
  *(longlong *)(this + *(longlong *)(lVar3 + -0x18)) = in_x1[0xf];
  pplVar4 = (longlong **)(this + 0x58);
  *(longlong *)(this + 8) = in_x1[0x10];
  __android_log_print(6,"FingerGoodix","FingerPrintService is ~FpService()");
  __android_log_print(3,"FingerGoodix","but finger print is busy");
  DAT_00146068 = 0;
  if (*(longlong *)(this + 0x158) != 0) {
    (**(code **)(*(longlong *)(this + 0x158) + 0x98))();
    (**(code **)(*(longlong *)(this + 0x158) + 0x88))(*(longlong *)(this + 0x158));
    *(undefined4 *)(this + 0x2f0) = 1;
    iVar1 = (**(code **)(*(longlong *)(this + 0x158) + 0x160))(*(longlong *)(this + 0x158));
    if (iVar1 == 0) {
      __android_log_print(3,"FingerGoodix","success to disable device");
    }
    else {
      __android_log_print(3,"FingerGoodix","failed to disable device");
    }
    __android_log_print(3,"FingerGoodix","FpService::~FpService(),fnCa_CloseSession");
  }
  __mutex = (pthread_mutex_t *)(this + 0x2f0);
  do {
    __mutex = __mutex + -1;
    pthread_mutex_destroy(__mutex);
  } while ((pthread_mutex_t *)(this + 0x1d8) != __mutex);
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x1b0));
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x11c));
  pthread_cond_destroy((pthread_cond_t *)(this + 0xec));
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0xbc));
  do {
    pplVar4 = pplVar4 + -1;
    plVar2 = *pplVar4;
    if (plVar2 != (longlong *)0x0) {
      decStrong((void *)((longlong)plVar2 + *(longlong *)(*plVar2 + -0x18)));
    }
  } while ((longlong **)(this + 0x20) != pplVar4);
  lVar3 = in_x1[1];
  *(longlong *)this = lVar3;
  *(longlong *)(this + *(longlong *)(lVar3 + -0x18)) = in_x1[0xd];
  *(longlong *)(this + 8) = in_x1[0xe];
  lVar3 = in_x1[2];
  *(longlong *)this = lVar3;
  *(longlong *)(this + *(longlong *)(lVar3 + -0x18)) = in_x1[0xb];
  *(longlong *)(this + 8) = in_x1[0xc];
  _BBinder((BBinder *)(this + 8));
  _IFingerPrintService((IFingerPrintService *)this);
  return;
}



// android::FpService::setFingerPrintBusy(int)

void __thiscall setFingerPrintBusy(FpService *this,int param_1)

{
  *(undefined4 *)(this + ((longlong)param_1 + 0x14) * 4 + 8) = 1;
  return;
}



// android::FpService::setFingerPrintFree(int)

void __thiscall setFingerPrintFree(FpService *this,int param_1)

{
  *(undefined4 *)(this + ((longlong)param_1 + 0x14) * 4 + 8) = 0;
  return;
}



// android::imageEventCallback(unsigned char, unsigned char)

void imageEventCallback(uchar param_1,uchar param_2)

{
  __android_log_print(3,"FingerGoodix","imageEventCallback");
  return;
}



// android::BnFingerPrint::~BnFingerPrint()

void __thiscall _BnFingerPrint(BnFingerPrint *this)

{
  longlong *in_x1;
  longlong lVar1;
  
  lVar1 = *in_x1;
  *(longlong *)this = lVar1;
  *(longlong *)(this + *(longlong *)(lVar1 + -0x18)) = in_x1[0xc];
  *(longlong *)(this + 8) = in_x1[0xd];
  lVar1 = in_x1[1];
  *(longlong *)this = lVar1;
  *(longlong *)(this + *(longlong *)(lVar1 + -0x18)) = in_x1[10];
  *(longlong *)(this + 8) = in_x1[0xb];
  _BBinder((BBinder *)(this + 8));
  _IFingerPrint((IFingerPrint *)this);
  return;
}



// android::FpService::Client::checkPid() const

undefined8 __thiscall checkPid(Client *this)

{
  if (*(uint *)(this + 0x4c) != 0x7b) {
    __android_log_print(3,"FingerGoodix",
                                                
                        "attempt to use a locked fp from a different process (old pid %d, new pid %d)"
                        ,(ulonglong)*(uint *)(this + 0x4c),0x7b);
    return 0x10;
  }
  return 0;
}



// android::FpService::Client::lock()

ulonglong __thiscall lock(Client *this)

{
  uint uVar1;
  
  __android_log_print(3,"FingerGoodix","FingerPrintService::lock (pid %d)",0x7b);
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x78));
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x50));
  uVar1 = *(uint *)(this + 0x4c);
  if (uVar1 == 0) {
    *(undefined4 *)(this + 0x4c) = 0x7b;
  }
  else {
    uVar1 = checkPid(this);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x50));
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x78));
  return (ulonglong)uVar1;
}



// android::FpService::Client::unlock()

ulonglong __thiscall unlock(Client *this)

{
  ulonglong uVar1;
  longlong *plVar2;
  
  __android_log_print(3,"FingerGoodix","FingerPrintService::unlock (pid %d)",0x7b);
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x78));
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x50));
  uVar1 = checkPid(this);
  if ((int)uVar1 == 0) {
    *(undefined4 *)(this + 0x4c) = 0;
    __android_log_print(3,"FingerGoodix","clear mFpClient (pid %d)",0x7b);
    plVar2 = *(longlong **)(this + 0x40);
    if (plVar2 != (longlong *)0x0) {
      decStrong((void *)((longlong)plVar2 + *(longlong *)(*plVar2 + -0x18)));
      *(undefined8 *)(this + 0x40) = 0;
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x50));
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x78));
  return uVar1 & 0xffffffff;
}



// android::FpService::Client::reset2KeyMode()

void __thiscall reset2KeyMode(Client *this)

{
  int iVar1;
  
  __android_log_print(3,"FingerGoodix","reset2KeyMode");
  iVar1 = (**(code **)(*(longlong *)this + 0x160))(this);
  if (iVar1 == 0) {
    (**(code **)(*(longlong *)(this + 0x28) + 0x128))(*(longlong *)(this + 0x28));
  }
  return;
}



// android::FpService::Client::disconnect()

ulonglong __thiscall disconnect(Client *this)

{
  int iVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  __android_log_print(3,"FingerGoodix","Client::disconnect E (pid %d)",0x7b);
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x78));
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x50));
  uVar2 = checkPid(this);
  uVar4 = uVar2 & 0xffffffff;
  if ((int)uVar2 != 0) {
    __android_log_print(3,"FingerGoodix","different client - don\'t disconnect");
    uVar4 = 0xffffffff;
    goto LAB_001167d4;
  }
  if (*(int *)(this + 0x4c) < 1) {
    __android_log_print(3,"FingerGoodix",
                        "fp is unlocked (mClientPid = %d), don\'t tear down hardware");
    uVar4 = 0xffffffff;
    goto LAB_001167d4;
  }
  iVar1 = reset2KeyMode(this);
  if (iVar1 == 0) {
    __android_log_print(3,"FingerGoodix","success to reset2KeyMode");
    plVar3 = *(longlong **)(this + 0x38);
    if (*(int *)(this + 0x48) == *(int *)((longlong)plVar3 + 0x2f4)) {
LAB_00116824:
      pthread_mutex_lock((pthread_mutex_t *)mStatusCheckLock);
      plVar3 = *(longlong **)(this + 0x38);
      iVar1 = *(int *)((longlong)plVar3 + 0xe4);
      if (iVar1 - 2U < 2) {
        (**(code **)(*(longlong *)(this + 0x28) + 0xc0))(*(longlong *)(this + 0x28));
        (**(code **)(**(longlong **)(this + 0x38) + 0x80))(*(longlong **)(this + 0x38),5);
      }
      else {
        if (iVar1 - 6U < 2) {
          (**(code **)(*(longlong *)(this + 0x28) + 0xe8))(*(longlong *)(this + 0x28));
          (**(code **)(**(longlong **)(this + 0x38) + 0x80))(*(longlong **)(this + 0x38),8);
        }
        else {
          if (iVar1 - 10U < 2) {
            (**(code **)(*plVar3 + 0x80))(plVar3,0xc);
          }
        }
      }
      (**(code **)(*(longlong *)(this + 0x28) + 0x1b8))(*(longlong *)(this + 0x28));
      (**(code **)(**(longlong **)(this + 0x38) + 0x80))(*(longlong **)(this + 0x38),1);
      pthread_mutex_unlock((pthread_mutex_t *)mStatusCheckLock);
      plVar3 = *(longlong **)(this + 0x38);
    }
  }
  else {
    __android_log_print(3,"FingerGoodix","failed to reset2KeyMode");
    plVar3 = *(longlong **)(this + 0x38);
    if (*(int *)(this + 0x48) == *(int *)((longlong)plVar3 + 0x2f4)) goto LAB_00116824;
  }
  (**(code **)(*plVar3 + 0x40))(plVar3,this + 0x40);
  setFingerPrintFree(*(FpService **)(this + 0x38),*(int *)(this + 0x48));
LAB_001167d4:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x50));
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x78));
  return uVar4;
}



// android::FpService::Client::~Client()

void __thiscall _Client(Client *this)

{
  longlong *plVar1;
  longlong *in_x1;
  longlong lVar2;
  
  lVar2 = *in_x1;
  *(longlong *)this = lVar2;
  *(longlong *)(this + *(longlong *)(lVar2 + -0x18)) = in_x1[0xf];
  *(longlong *)(this + 8) = in_x1[0x10];
  deactivateClient(this);
  __android_log_print(3,"FingerGoodix","Client::~Client X (pid %d)",0x7b);
  *(undefined4 *)(this + 0x4c) = 0x7b;
  disconnect(this);
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x78));
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x50));
  plVar1 = *(longlong **)(this + 0x40);
  if (plVar1 != (longlong *)0x0) {
    decStrong((void *)((longlong)plVar1 + *(longlong *)(*plVar1 + -0x18)));
  }
  plVar1 = *(longlong **)(this + 0x38);
  if (plVar1 != (longlong *)0x0) {
    decStrong((void *)((longlong)plVar1 + *(longlong *)(*plVar1 + -0x18)));
  }
  lVar2 = in_x1[1];
  *(longlong *)this = lVar2;
  *(longlong *)(this + *(longlong *)(lVar2 + -0x18)) = in_x1[0xd];
  *(longlong *)(this + 8) = in_x1[0xe];
  lVar2 = in_x1[2];
  *(longlong *)this = lVar2;
  *(longlong *)(this + *(longlong *)(lVar2 + -0x18)) = in_x1[0xb];
  *(longlong *)(this + 8) = in_x1[0xc];
  _BBinder((BBinder *)(this + 8));
  _IFingerPrint((IFingerPrint *)this);
  return;
}



// android::FpService::Client::~Client()

void __thiscall _Client(Client *this)

{
  longlong *plVar1;
  
  *(undefined8 *)this = 0x1426d8;
  *(undefined8 *)(this + 0xa0) = 0x142948;
  *(undefined8 *)(this + 8) = 0x142888;
  deactivateClient(this);
  __android_log_print(3,"FingerGoodix","Client::~Client X (pid %d)",0x7b);
  *(undefined4 *)(this + 0x4c) = 0x7b;
  disconnect(this);
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x78));
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x50));
  plVar1 = *(longlong **)(this + 0x40);
  if (plVar1 != (longlong *)0x0) {
    decStrong((void *)((longlong)plVar1 + *(longlong *)(*plVar1 + -0x18)));
  }
  plVar1 = *(longlong **)(this + 0x38);
  if (plVar1 != (longlong *)0x0) {
    decStrong((void *)((longlong)plVar1 + *(longlong *)(*plVar1 + -0x18)));
  }
  *(undefined8 *)this = 0x142148;
  *(undefined8 *)(this + 0xa0) = 0x142378;
  *(undefined8 *)(this + 8) = 0x1422b8;
  _BBinder((BBinder *)(this + 8));
  _IFingerPrint((IFingerPrint *)this);
  _RefBase((RefBase *)(this + 0xa0));
  return;
}



// virtual thunk to android::FpService::Client::~Client()

void __thiscall _Client(Client *this)

{
  _Client(this + *(longlong *)(*(longlong *)this + -0x18));
  return;
}



// non-virtual thunk to android::FpService::Client::~Client()

void __thiscall _Client(Client *this)

{
  _Client(this + -8);
  return;
}



// android::FpService::Client::~Client()

void __thiscall _Client(Client *this)

{
  _Client(this);
  _ZdlPv(this);
  return;
}



// virtual thunk to android::FpService::Client::~Client()

void __thiscall _Client(Client *this)

{
  _Client(this + *(longlong *)(*(longlong *)this + -0x18));
  return;
}



// non-virtual thunk to android::FpService::Client::~Client()

void __thiscall _Client(Client *this)

{
  _Client(this + -8);
  return;
}



// android::FpService::Client::sysHalSetMode(int)

undefined8 __thiscall sysHalSetMode(Client *this,int param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 < 0) {
    uVar2 = -param_1;
    iVar3 = 1;
  }
  else {
    if (param_1 < 10000) {
      return 0xffffffff;
    }
    iVar3 = 2;
    uVar2 = param_1 - 10000;
  }
  __android_log_print(3,"FingerGoodix","app change mode to: %d.",(ulonglong)uVar2);
  (**(code **)(*(longlong *)this + 200))(this);
  plVar1 = *(longlong **)(this + 0x38);
  if (*(int *)((longlong)plVar1 + 0xe4) - 2U < 3) {
    (**(code **)(*(longlong *)this + 0x80))(this);
    plVar1 = *(longlong **)(this + 0x38);
  }
  (**(code **)(*plVar1 + 0x68))(plVar1,(ulonglong)uVar2);
  if (iVar3 == 2) {
    *(uint *)(*(longlong *)(this + 0x38) + 0x2f8) = uVar2;
  }
  return 0;
}



// android::FpService::Client::setMode(int)

undefined8 __thiscall setMode(Client *this,int param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)(uint)param_1;
  __android_log_print(3,"FingerGoodix","gx_fpd set mode: %d.",uVar2);
  uVar1 = (**(code **)(*(longlong *)this + 0x160))(this);
  if (((int)uVar1 == 0) && (uVar1 = sysHalSetMode(this,param_1), (int)uVar1 != 0)) {
    pthread_mutex_lock((pthread_mutex_t *)mStatusCheckLock);
    __android_log_print(3,"FingerGoodix","Client::setMode=%d ,but no longer support.return 0!",uVar2
                       );
    if ((param_1 == 2) || ((param_1 == 0x10 || (param_1 == 1)))) {
      (**(code **)(**(longlong **)(this + 0x38) + 0x68))(*(longlong **)(this + 0x38),uVar2);
    }
    else {
      __android_log_print(3,"FingerGoodix","Should not support to set mode[%d].\n",uVar2);
    }
    (**(code **)(*(longlong *)(this + 0x28) + 0x128))(*(longlong *)(this + 0x28));
    (**(code **)(**(longlong **)(this + 0x38) + 0x80))(*(longlong **)(this + 0x38),1);
    pthread_mutex_unlock((pthread_mutex_t *)mStatusCheckLock);
    return 0;
  }
  return uVar1;
}



// android::sp<android::FpService::Client>::operator=(android::sp<android::FpService::Client>
// const&)

sp_android__FpService__Client_ * __thiscall
operator_(sp_android__FpService__Client_ *this,sp *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)param_1;
  if (plVar2 != (longlong *)0x0) {
    incStrong((void *)((longlong)plVar2 + *(longlong *)(*plVar2 + -0x18)));
  }
  plVar1 = *(longlong **)this;
  if (plVar1 != (longlong *)0x0) {
    decStrong((void *)((longlong)plVar1 + *(longlong *)(*plVar1 + -0x18)));
  }
  *(longlong **)this = plVar2;
  return this;
}



// android::notifyClient(int, int, int)

void notifyClient(int param_1,int param_2,int param_3)

{
  longlong *local_10;
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","notifyClient,type:%d,msg:%d,ext:%d,clientID:%d",
                      (ulonglong)(uint)param_1,(ulonglong)(uint)param_2,(ulonglong)(uint)param_3,
                      (ulonglong)*(uint *)(DAT_00146068 + 0x2f4));
  local_10 = (longlong *)0x0;
  if (*(uint *)(DAT_00146068 + 0x2f4) < 7) {
    operator_((sp_android__FpService__Client_ *)&local_10,
              (sp *)(DAT_00146068 + ((longlong)(int)*(uint *)(DAT_00146068 + 0x2f4) + 4) * 8));
  }
  else {
    __android_log_print(6,"FingerGoodix","Invalid NotifyClientID");
  }
  if (local_10 == (longlong *)0x0) {
    __android_log_print(6,"FingerGoodix","client is null");
    if (local_10 != (longlong *)0x0) {
      decStrong((void *)((longlong)local_10 + *(longlong *)(*local_10 + -0x18)));
    }
  }
  else {
    (**(code **)(*local_10 + 0x180))
              (local_10,(ulonglong)(uint)param_1,(ulonglong)(uint)param_2,(ulonglong)(uint)param_3);
    if (local_10 != (longlong *)0x0) {
      decStrong((void *)((longlong)local_10 + *(longlong *)(*local_10 + -0x18)));
    }
  }
  if (local_8 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// android::postData2Client(int, int, char*)

void postData2Client(int param_1,int param_2,char *param_3)

{
  longlong *local_10;
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","postData2Client,msgType:%d,length:%d,clientID:%d",
                      (ulonglong)(uint)param_1,(ulonglong)(uint)param_2,
                      (ulonglong)*(uint *)(DAT_00146068 + 0x2f4));
  local_10 = (longlong *)0x0;
  if (*(uint *)(DAT_00146068 + 0x2f4) < 7) {
    operator_((sp_android__FpService__Client_ *)&local_10,
              (sp *)(DAT_00146068 + ((longlong)(int)*(uint *)(DAT_00146068 + 0x2f4) + 4) * 8));
  }
  else {
    __android_log_print(6,"FingerGoodix","Invalid NotifyClientID");
  }
  if (local_10 == (longlong *)0x0) {
    __android_log_print(6,"FingerGoodix","client is null");
    if (local_10 != (longlong *)0x0) {
      decStrong((void *)((longlong)local_10 + *(longlong *)(*local_10 + -0x18)));
    }
  }
  else {
    (**(code **)(*local_10 + 0x188))
              (local_10,(ulonglong)(uint)param_1,(ulonglong)(uint)param_2,param_3);
    if (local_10 != (longlong *)0x0) {
      decStrong((void *)((longlong)local_10 + *(longlong *)(*local_10 + -0x18)));
    }
  }
  if (local_8 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps
// android::FpService::RegisterDump(Register_Status)

undefined8 __thiscall RegisterDump(FpService *this,Register_Status param_1)

{
  int iVar1;
  char *__ptr;
  size_t local_84;
  undefined8 local_80;
  undefined8 uStack120;
  undefined8 local_70;
  undefined8 uStack104;
  undefined8 local_60;
  undefined8 uStack88;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack48;
  undefined8 local_28;
  undefined8 uStack32;
  undefined8 local_18;
  undefined8 uStack16;
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  local_84 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  uStack48 = 0;
  local_28 = 0;
  uStack32 = 0;
  local_18 = 0;
  uStack16 = 0;
  local_80 = 0;
  uStack120 = 0;
  local_70 = 0;
  uStack104 = 0;
  local_60 = 0;
  uStack88 = 0;
  local_50 = 0;
  iVar1 = property_get_int32("goodix.fp.debug",0);
  if (iVar1 == 1) {
    local_84 = *(int *)(this + 0xa0) * *(int *)(this + 0xa4);
    __ptr = (char *)malloc(local_84);
    iVar1 = (**(code **)(*(longlong *)(this + 0x158) + 0x1e8))
                      (*(longlong *)(this + 0x158),__ptr,&local_84,&local_80,0);
    if ((__ptr != (char *)0x0) && (iVar1 == 0)) {
      postData2Client(0x1b,0x34,(char *)&local_80);
      postData2Client(0x1a,local_84,__ptr);
    }
    free(__ptr);
    switch(param_1) {
    case 0:
      local_48 = 0x73736563637573;
      break;
    case 1:
      local_48 = 0x746163696c707564;
      local_40 = CONCAT62(local_40._2_6_,0x65);
      break;
    case 2:
      local_48 = 0x79616c7265766f;
      break;
    case 3:
      local_48 = 0x65766f635f776f6c;
      local_40 = CONCAT62(local_40._2_6_,0x72);
      break;
    case 4:
      local_48 = 0x67616d695f646162;
      local_40 = CONCAT62(local_40._2_6_,0x65);
      break;
    default:
      goto switchD_00117254_caseD_5;
    case 9:
      local_48 = 0x705f746365666564;
      local_40 = 0x6961665f6c657869;
      local_38 = CONCAT62(local_38._2_6_,0x6c);
    }
    (**(code **)(*(longlong *)(this + 0x158) + 0x2b8))(*(longlong *)(this + 0x158),&local_48,1);
  }
switchD_00117254_caseD_5:
  if (local_8 == __stack_chk_guard) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Could not reconcile some variable overlaps
// android::FpService::RecognizeDump(Recognize_Status)

undefined8 __thiscall RecognizeDump(FpService *this,Recognize_Status param_1)

{
  uint uVar1;
  int iVar2;
  char *__ptr;
  size_t local_84;
  undefined8 local_80;
  undefined8 uStack120;
  undefined8 local_70;
  undefined8 uStack104;
  undefined8 local_60;
  undefined8 uStack88;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack48;
  undefined8 local_28;
  undefined8 uStack32;
  undefined8 local_18;
  undefined8 uStack16;
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  local_84 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  uStack48 = 0;
  local_28 = 0;
  uStack32 = 0;
  local_18 = 0;
  uStack16 = 0;
  local_80 = 0;
  uStack120 = 0;
  local_70 = 0;
  uStack104 = 0;
  local_60 = 0;
  uStack88 = 0;
  local_50 = 0;
  uVar1 = property_get_int32("goodix.fp.debug",0);
  if (uVar1 == 1) {
    local_84 = *(int *)(this + 0xa0) * *(int *)(this + 0xa4);
    __ptr = (char *)malloc(local_84);
    iVar2 = (**(code **)(*(longlong *)(this + 0x158) + 0x1e8))
                      (*(longlong *)(this + 0x158),__ptr,&local_84,&local_80,(ulonglong)uVar1);
    if ((__ptr != (char *)0x0) && (iVar2 == 0)) {
      postData2Client(0x109,0x34,(char *)&local_80);
      postData2Client(0x108,local_84,__ptr);
    }
    free(__ptr);
    switch(param_1) {
    case 0:
      local_48 = 0x73736563637573;
      break;
    default:
      goto switchD_00117444_caseD_1;
    case 2:
      local_38 = CONCAT62(local_38._2_6_,0x6c);
      local_48 = 0x65636f7270657270;
      local_40 = 0x6961665f726f7373;
      break;
    case 3:
      local_48 = 0x676d61695f646162;
      local_40 = CONCAT62(local_40._2_6_,0x65);
      break;
    case 4:
      local_38 = CONCAT62(local_38._2_6_,0x6c);
      local_48 = 0x705f746365666564;
      local_40 = 0x6961665f6c657869;
      break;
    case 5:
      local_38 = CONCAT44(local_38._4_4_,0x316c65);
      local_48 = 0x705f746365666564;
      local_40 = 0x76656c5f6c657869;
      break;
    case 6:
      local_48 = 0x705f746365666564;
      local_40 = 0x76656c5f6c657869;
      local_38 = CONCAT44(local_38._4_4_,0x326c65);
    }
    (**(code **)(*(longlong *)(this + 0x158) + 0x2b8))(*(longlong *)(this + 0x158),&local_48,0);
  }
switchD_00117444_caseD_1:
  if (local_8 == __stack_chk_guard) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Could not reconcile some variable overlaps
// android::FpService::Client::mp_test(int, int)

ulonglong __thiscall mp_test(Client *this,int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte local_81;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack104;
  undefined8 local_60;
  undefined8 uStack88;
  undefined8 local_50;
  ulonglong local_48;
  undefined8 uStack64;
  undefined8 local_38;
  undefined8 uStack48;
  undefined8 local_28;
  undefined8 uStack32;
  undefined8 local_18;
  undefined8 uStack16;
  longlong local_8;
  
  uVar8 = (ulonglong)(uint)param_2;
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","mp_test");
  uVar3 = (**(code **)(*(longlong *)this + 0x160))(this);
  uVar7 = uVar3 & 0xffffffff;
  if ((int)uVar3 != 0) goto LAB_00118498;
  local_81 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack104 = 0;
  local_60 = 0;
  uStack88 = 0;
  local_50 = 0;
  __android_log_print(3,"FingerGoodix","%s. cmd = %d\n",
                      "android::status_t android::FpService::Client::mp_test(int, int)",
                      (ulonglong)(uint)param_1);
  (**(code **)(*(longlong *)(this + 0x28) + 400))(*(longlong *)(this + 0x28),&local_81);
  if (local_81 == 3) {
    __android_log_print((ulonglong)local_81,"FingerGoodix","%s mode %d \n",
                        "android::status_t android::FpService::Client::mp_test(int, int)",3);
    goto LAB_00118498;
  }
  if (999 < param_1) {
    uVar1 = param_1 - 1000;
    if (uVar1 == 1) {
      if (2 < *(int *)(*(longlong *)(this + 0x38) + 0xe4) - 0xdU) {
        lVar6 = *(longlong *)(this + 0x28);
        uVar5 = 0;
        goto LAB_0011881c;
      }
      goto LAB_001187e4;
    }
    if (uVar1 == 9) {
      pthread_mutex_lock((pthread_mutex_t *)mStatusCheckLock);
      uVar7 = (**(code **)(*(longlong *)(this + 0x28) + 0x230))
                        (*(longlong *)(this + 0x28),8,&local_80);
      uVar7 = uVar7 & 0xffffffff;
      plVar4 = *(longlong **)(this + 0x38);
      if (*(int *)((longlong)plVar4 + 0xe4) - 0xdU < 3) {
        (**(code **)(*plVar4 + 0x80))(plVar4,0x10);
        (**(code **)(*(longlong *)(this + 0x28) + 0x1b8))(*(longlong *)(this + 0x28));
        (**(code **)(**(longlong **)(this + 0x38) + 0x80))(*(longlong **)(this + 0x38),1);
        uVar7 = 0;
        pthread_mutex_unlock((pthread_mutex_t *)mStatusCheckLock);
      }
      else {
        pthread_mutex_unlock((pthread_mutex_t *)mStatusCheckLock);
      }
      goto LAB_00118498;
    }
    if (uVar1 == 2) {
      uVar3 = (**(code **)(*(longlong *)(this + 0x28) + 0x230))
                        (*(longlong *)(this + 0x28),1,&local_80);
      if (((int)uVar3 == 0) && ((int)local_80 == 1)) {
        uVar3 = (**(code **)(*(longlong *)(this + 0x28) + 0x298))(*(longlong *)(this + 0x28));
        uVar7 = uVar3 & 0xffffffff;
        if ((int)uVar3 == 0) {
          __android_log_print(3,"FingerGoodix","CMD_SELFTEST SUCCESS.\n");
        }
        else {
          uVar7 = 0xffffffff;
          __android_log_print(3,"FingerGoodix","CMD_SELFTEST failed. selftest:%d, ret:%d.\n",
                              local_80 & 0xffffffff,0);
        }
      }
      else {
        uVar7 = 0xffffffff;
        __android_log_print(6,"FingerGoodix","Selftest:%d, ret:%d\n",local_80 & 0xffffffff,
                            uVar3 & 0xffffffff);
      }
      goto LAB_00118498;
    }
    if (uVar1 == 0) {
      __android_log_print(3,"FingerGoodix","FINGERPRINT_MP_TEST Coverage:%d",
                          (ulonglong)*(uint *)(*(longlong *)(this + 0x38) + 0xe4));
      if (*(int *)(*(longlong *)(this + 0x38) + 0xe4) - 0xdU < 3) {
LAB_001187e4:
        uVar7 = 0;
        __android_log_print(6,"FingerGoodix","Service has already in MP_TEST.\n");
        goto LAB_00118498;
      }
      pthread_mutex_lock((pthread_mutex_t *)ProcessRawDataLock);
      (**(code **)(**(longlong **)(this + 0x38) + 0x80))(*(longlong **)(this + 0x38),0xe);
      (**(code **)(**(longlong **)(this + 0x38) + 0x88))
                (*(longlong **)(this + 0x38),(ulonglong)*(uint *)(this + 0x48));
      (**(code **)(**(longlong **)(this + 0x38) + 0x90))(*(longlong **)(this + 0x38));
      notifyClient(6000,0,0);
    }
    else {
      uVar7 = 0xffffffff;
      if (uVar1 != 3) goto LAB_00118498;
      __android_log_print((ulonglong)uVar1,"FingerGoodix","FINGERPRINT_MP_TEST:%d",
                          (ulonglong)*(uint *)(*(longlong *)(this + 0x38) + 0xe4));
      if (*(int *)(*(longlong *)(this + 0x38) + 0xe4) - 0xdU < 3) goto LAB_001187e4;
      pthread_mutex_lock((pthread_mutex_t *)ProcessRawDataLock);
      (**(code **)(*(longlong *)(this + 0x28) + 0x230))(*(longlong *)(this + 0x28),9,&local_80);
      (**(code **)(**(longlong **)(this + 0x38) + 0x80))(*(longlong **)(this + 0x38),0xd);
      (**(code **)(**(longlong **)(this + 0x38) + 0x88))
                (*(longlong **)(this + 0x38),(ulonglong)*(uint *)(this + 0x48));
      (**(code **)(**(longlong **)(this + 0x38) + 0x90))(*(longlong **)(this + 0x38));
      notifyClient(6000,0,0);
    }
    uVar7 = 0;
    pthread_mutex_unlock((pthread_mutex_t *)ProcessRawDataLock);
    goto LAB_00118498;
  }
  if (param_1 == 9) {
    (**(code **)(*(longlong *)(this + 0x28) + 0x1c0))(*(longlong *)(this + 0x28));
    uVar7 = (**(code **)(*(longlong *)(this + 0x28) + 0x230))
                      (*(longlong *)(this + 0x28),0,&local_80);
    uVar7 = uVar7 & 0xffffffff;
    postData2Client(9,0x38,(char *)&local_80);
    if (((int)uVar7 == 0) && ((int)local_80 == -2)) {
      notifyClient(0x1194,9,6);
    }
    else {
      notifyClient(0x1194,9,0);
    }
    (**(code **)(*(longlong *)(this + 0x28) + 0x230))(*(longlong *)(this + 0x28),9,&local_80);
    goto LAB_00118498;
  }
  if (param_1 == 10) {
    iVar2 = (**(code **)(*(longlong *)(this + 0x28) + 0x230))
                      (*(longlong *)(this + 0x28),1,&local_80);
    postData2Client(0,0x38,(char *)&local_80);
    if ((iVar2 == 0) && ((int)local_80 == 1)) {
      notifyClient(0x1194,0,0);
    }
    else {
      uVar7 = 0xffffffff;
      __android_log_print(3,"FingerGoodix","service mp_test:selftest failed.");
      notifyClient(0x1194,0,4);
    }
    goto LAB_00118498;
  }
  if (param_1 == 0xb) {
    (**(code **)(*(longlong *)(this + 0x28) + 0x138))(*(longlong *)(this + 0x28),1);
    (**(code **)(*(longlong *)(this + 0x28) + 0x230))(*(longlong *)(this + 0x28),2,&local_80);
    (**(code **)(*(longlong *)(this + 0x28) + 0x138))(*(longlong *)(this + 0x28),0);
    (**(code **)(*(longlong *)(this + 0x28) + 0x260))(*(longlong *)(this + 0x28));
    postData2Client(2,0x38,(char *)&local_80);
    if (local_80._4_4_ == 1) {
LAB_00118950:
      uVar7 = 0;
      __android_log_print(3,"FingerGoodix","service mp_test:performance success.");
      notifyClient(0x1194,2,0);
      goto LAB_00118498;
    }
LAB_00118684:
    uVar7 = 0xffffffff;
    __android_log_print(3,"FingerGoodix","service mp_test:performance failed.");
    notifyClient(0x1194,2,4);
    goto LAB_00118498;
  }
  if (param_1 == 0xc) {
    (**(code **)(*(longlong *)(this + 0x28) + 0x230))(*(longlong *)(this + 0x28),3,&local_80);
    postData2Client(4,0x38,(char *)&local_80);
    if ((int)local_78 == 1) {
      __android_log_print(3,"FingerGoodix","service mp_test:image quality success.");
      notifyClient(0x1194,4,0);
    }
    else {
      uVar7 = 0xffffffff;
      __android_log_print(3,"FingerGoodix","service mp_test:image quality failed.");
      notifyClient(0x1194,4,4);
    }
    goto LAB_00118498;
  }
  if (param_1 == 0xd) {
    (**(code **)(*(longlong *)(this + 0x28) + 0x230))(*(longlong *)(this + 0x28),5,&local_80);
    postData2Client(5,0x38,(char *)&local_80);
    if (local_78._4_4_ == 1) {
      __android_log_print(3,"FingerGoodix","service mp_test:scene success.");
      notifyClient(0x1194,5,0);
    }
    else {
      uVar7 = 0xffffffff;
      __android_log_print(3,"FingerGoodix","service mp_test:scene failed.");
      notifyClient(0x1194,5,4);
    }
    goto LAB_00118498;
  }
  if (param_1 == 0xe) {
    local_48 = 0;
    uStack64 = 0;
    local_38 = 0;
    uStack48 = 0;
    local_28 = 0;
    uStack32 = 0;
    local_18 = 0;
    uStack16 = 0;
    (**(code **)(*(longlong *)(this + 0x28) + 0x188))(*(longlong *)(this + 0x28),0);
    uVar7 = (**(code **)(*(longlong *)(this + 0x28) + 0x230))
                      (*(longlong *)(this + 0x28),6,&local_80);
    uVar7 = uVar7 & 0xffffffff;
    iVar2 = property_get_int32("goodix.fp.debug",0);
    if (iVar2 == 1) {
      if ((int)local_70 == 1) {
        local_48 = 0x73736563637573;
      }
      else {
        local_48 = local_48 & 0xff00000000000000 | 0x64656c696166;
      }
      (**(code **)(*(longlong *)(this + 0x28) + 0x2b8))(*(longlong *)(this + 0x28),&local_48,5);
    }
    postData2Client(6,0x38,(char *)&local_80);
    if (((int)uVar7 == 0) && ((int)local_70 == 1)) {
      __android_log_print(3,"FingerGoodix","service mp_test:defect detection pass.");
      notifyClient(0x1194,6,0);
      (**(code **)(*(longlong *)(this + 0x28) + 0x188))(*(longlong *)(this + 0x28),1);
    }
    else {
      uVar7 = 0xffffffff;
      __android_log_print(3,"FingerGoodix","service mp_test:defect detection failed.");
      notifyClient(0x1194,6,4);
      (**(code **)(*(longlong *)(this + 0x28) + 0x188))(*(longlong *)(this + 0x28),1);
    }
    goto LAB_00118498;
  }
  if (param_1 == 0xf) {
    (**(code **)(*(longlong *)(this + 0x28) + 0x138))(*(longlong *)(this + 0x28),1);
    (**(code **)(*(longlong *)(this + 0x28) + 0x230))(*(longlong *)(this + 0x28),2,&local_80);
    (**(code **)(*(longlong *)(this + 0x28) + 0x138))(*(longlong *)(this + 0x28),0);
    (**(code **)(*(longlong *)(this + 0x28) + 0x260))(*(longlong *)(this + 0x28));
    (**(code **)(*(longlong *)(this + 0x28) + 0x230))(*(longlong *)(this + 0x28),7,&local_80);
    postData2Client(7,0x38,(char *)&local_80);
    if (local_70._4_4_ == 1) {
      uVar7 = 0;
      __android_log_print(3,"FingerGoodix","service mp_test:pixel_detection success.");
      notifyClient(0x1194,7,0);
    }
    else {
      uVar7 = 0xffffffff;
      __android_log_print(3,"FingerGoodix","service mp_test:pixel_detection failed.");
      notifyClient(0x1194,7,4);
    }
    goto LAB_00118498;
  }
  if (param_1 == 0x10) {
    lVar6 = *(longlong *)(this + 0x28);
    uVar5 = 8;
LAB_0011881c:
    uVar7 = (**(code **)(lVar6 + 0x230))(lVar6,uVar5,&local_80);
    uVar7 = uVar7 & 0xffffffff;
  }
  else {
    if (param_1 == 0x11) {
      if (0 < param_2) {
        iVar2 = (**(code **)(*(longlong *)(this + 0x28) + 0x178))(*(longlong *)(this + 0x28),uVar8);
        if (iVar2 == 0x83) {
          uVar7 = 0xffffffff;
          __android_log_print(3,"FingerGoodix","service mp_test:finger down timeout.");
          notifyClient(0x1194,1,1);
        }
        else {
          if (iVar2 == 0) {
            uVar7 = 0;
            __android_log_print(3,"FingerGoodix","service mp_test:finger down success.");
            notifyClient(0x1194,1,0);
          }
          else {
            uVar7 = 0xffffffff;
            __android_log_print(3,"FingerGoodix","service mp_test:finger down failed.");
            notifyClient(0x1194,1,4);
          }
        }
        goto LAB_00118498;
      }
    }
    else {
      if (param_1 != 0x12) {
        if (param_1 == 0x15) {
          __android_log_print(3,"FingerGoodix","service mp_test:check ring enable.");
          lVar6 = *(longlong *)(this + 0x28);
          uVar5 = 0xe;
        }
        else {
          if (param_1 != 0x16) {
            if (param_1 == 0x17) {
              iVar2 = (**(code **)(*(longlong *)(this + 0x28) + 0x298))(*(longlong *)(this + 0x28));
              if (iVar2 == 0) {
                uVar7 = 0xffffffff;
                __android_log_print(3,"FingerGoodix","service mp_test:CheckReset success.");
                notifyClient(0x1194,8,0);
              }
              else {
                uVar7 = 0;
                __android_log_print(3,"FingerGoodix","service mp_test:CheckReset failed.");
                notifyClient(0x1194,8,4);
              }
              goto LAB_00118498;
            }
            if (param_1 != 0x18) {
              uVar7 = 0xffffffff;
              __android_log_print(6,"FingerGoodix","service mp_test:case error.");
              goto LAB_00118498;
            }
            (**(code **)(*(longlong *)(this + 0x28) + 0x138))(*(longlong *)(this + 0x28),1);
            (**(code **)(*(longlong *)(this + 0x28) + 0x230))
                      (*(longlong *)(this + 0x28),0xc,&local_80);
            (**(code **)(*(longlong *)(this + 0x28) + 0x138))(*(longlong *)(this + 0x28),0);
            (**(code **)(*(longlong *)(this + 0x28) + 0x260))(*(longlong *)(this + 0x28));
            postData2Client(4,0x38,(char *)&local_80);
            postData2Client(2,0x38,(char *)&local_80);
            postData2Client(5,0x38,(char *)&local_80);
            if ((int)local_78 == 0) {
              __android_log_print(3,"FingerGoodix","service mp_test:quality success.");
              notifyClient(0x1194,4,0);
            }
            else {
              __android_log_print(3,"FingerGoodix","service mp_test:quality failed.");
              notifyClient(0x1194,4,4);
            }
            if (local_78._4_4_ == 0) {
              __android_log_print(3,"FingerGoodix","service mp_test:scene success.");
              notifyClient(0x1194,5,0);
            }
            else {
              __android_log_print(3,"FingerGoodix","service mp_test:scene failed.");
              notifyClient(0x1194,5,4);
            }
            if (local_80._4_4_ == 0) goto LAB_00118950;
            goto LAB_00118684;
          }
          __android_log_print(3,"FingerGoodix","service mp_test:check ring disable.");
          lVar6 = *(longlong *)(this + 0x28);
          uVar5 = 0xf;
        }
        goto LAB_0011881c;
      }
      if (0 < param_2) {
        iVar2 = (**(code **)(*(longlong *)(this + 0x28) + 0x180))(*(longlong *)(this + 0x28),uVar8);
        if (iVar2 == 0x83) {
          uVar7 = 0xffffffff;
          __android_log_print(3,"FingerGoodix","service mp_test:finger up timeout.");
          notifyClient(0x1194,3,1);
        }
        else {
          if (iVar2 == 0) {
            uVar7 = 0;
            __android_log_print(3,"FingerGoodix","service mp_test:finger up success.");
            notifyClient(0x1194,3,0);
          }
          else {
            uVar7 = 0xffffffff;
            __android_log_print(3,"FingerGoodix","service mp_test:finger up failed.");
            notifyClient(0x1194,3,4);
          }
        }
        goto LAB_00118498;
      }
    }
    uVar7 = 0xffffffff;
    __android_log_print(3,"FingerGoodix","Time out param error. time = %d.",uVar8);
  }
LAB_00118498:
  if (local_8 == __stack_chk_guard) {
    return uVar7;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// android::FpService::Client::SendCmd(int, char*, int, char**, int*)

ulonglong __thiscall
SendCmd(Client *this,int param_1,char *param_2,int param_3,char **param_4,int *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 local_18;
  undefined4 uStack20;
  uint local_10;
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","FpService::Client::SendCmd cmd = %d.",
                      (ulonglong)(uint)param_1);
  uVar2 = (**(code **)(*(longlong *)this + 0x160))(this);
  if (uVar2 != 0) {
    uVar3 = (ulonglong)uVar2;
    goto LAB_0011925c;
  }
  if (param_5 != (int *)0x0) {
    *param_5 = 0;
    *param_4 = (char *)0x0;
  }
  switch(param_1) {
  case 0:
    pthread_mutex_lock((pthread_mutex_t *)mStatusCheckLock);
    plVar6 = *(longlong **)(this + 0x38);
    if (*(int *)((longlong)plVar6 + 0xe4) - 10U < 2) {
      (**(code **)(*plVar6 + 0x80))(plVar6,0xc);
      (**(code **)(*(longlong *)(this + 0x28) + 0x1b8))(*(longlong *)(this + 0x28));
      (**(code **)(**(longlong **)(this + 0x38) + 0x80))(*(longlong **)(this + 0x38),1);
      uVar3 = 0;
    }
    else {
      uVar3 = 0xffffffff;
    }
    pthread_mutex_unlock((pthread_mutex_t *)mStatusCheckLock);
    break;
  case 1:
    __android_log_print(3,"FingerGoodix","FINGERPRINT_CMD_GET_BITMAP:%d",
                        (ulonglong)*(uint *)(*(longlong *)(this + 0x38) + 0xe4));
    pthread_mutex_lock((pthread_mutex_t *)ProcessRawDataLock);
    (**(code **)(**(longlong **)(this + 0x38) + 0x80))(*(longlong **)(this + 0x38),10);
    (**(code **)(**(longlong **)(this + 0x38) + 0x88))
              (*(longlong **)(this + 0x38),(ulonglong)*(uint *)(this + 0x48));
    (**(code **)(**(longlong **)(this + 0x38) + 0x90))(*(longlong **)(this + 0x38));
    uVar3 = 0;
    pthread_mutex_unlock((pthread_mutex_t *)ProcessRawDataLock);
    break;
  case 2:
    puVar5 = (undefined8 *)malloc(0x10);
    *puVar5 = 0;
    puVar5[1] = 0;
    if (param_2 == (char *)0x0) {
      __android_log_print(6,"FingerGoodix","Error_%d:in_buffer is NULL.",0x9a0);
    }
    else {
      (**(code **)(*(longlong *)(this + 0x28) + 0x1f0))
                (*(longlong *)(this + 0x28),param_2,(ulonglong)(uint)param_3,puVar5);
    }
    *(undefined8 **)param_4 = puVar5;
    uVar3 = 0;
    *param_5 = 0x10;
    break;
  case 3:
    uVar3 = 0;
    (**(code **)(*(longlong *)(this + 0x28) + 0x208))(*(longlong *)(this + 0x28));
    break;
  case 4:
    if (param_2 == (char *)0x0) {
      uVar3 = 0;
      __android_log_print(6,"FingerGoodix","Error_%d:in_buffer is NULL.",0x9af);
    }
    else {
      uVar3 = 0;
      (**(code **)(*(longlong *)(this + 0x28) + 0x1f8))
                (*(longlong *)(this + 0x28),param_2,(ulonglong)(uint)param_3);
    }
    break;
  case 5:
    puVar5 = (undefined8 *)malloc(0x1c);
    puVar5[2] = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    *(undefined4 *)(puVar5 + 3) = 0;
    if (param_2 == (char *)0x0) {
      __android_log_print(6,"FingerGoodix","Error_%d:in_buffer is NULL.",0x9be);
    }
    else {
      (**(code **)(*(longlong *)(this + 0x28) + 0x200))
                (*(longlong *)(this + 0x28),param_2,(ulonglong)(uint)param_3,puVar5);
    }
    *(undefined8 **)param_4 = puVar5;
    uVar3 = 0;
    *param_5 = 0x1c;
    break;
  case 6:
    if (param_2 == (char *)0x0) {
      uVar3 = 0;
      __android_log_print(6,"FingerGoodix","Error_%d:in_buffer is NULL.",0x9e4);
    }
    else {
      uVar3 = 0;
      (**(code **)(*(longlong *)(this + 0x28) + 0x210))
                (*(longlong *)(this + 0x28),param_2,(ulonglong)(uint)param_3);
    }
    break;
  default:
    if (param_1 < 1000) {
      uVar3 = 0;
      __android_log_print(6,"FingerGoodix","SendCmd:command not find!");
    }
    else {
      (**(code **)(**(longlong **)(this + 0x38) + 0x68))(*(longlong **)(this + 0x38),0);
      (**(code **)(**(longlong **)(this + 0x38) + 0x88))
                (*(longlong **)(this + 0x38),(ulonglong)*(uint *)(this + 0x48));
      if ((param_2 == (char *)0x0) || (param_3 < 1)) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = mp_test(this,param_1,*(int *)param_2);
      }
      uVar3 = uVar3 & 0xffffffff;
      if (param_1 == 0x3f1) {
        (**(code **)(**(longlong **)(this + 0x38) + 0x68))(*(longlong **)(this + 0x38),2);
      }
    }
    break;
  case 8:
    puVar5 = (undefined8 *)malloc(0x1c);
    if (puVar5 != (undefined8 *)0x0) {
      lVar7 = *(longlong *)(this + 0x38);
      uVar3 = 0;
      uVar8 = *(undefined8 *)(lVar7 + 0xa8);
      *puVar5 = *(undefined8 *)(lVar7 + 0xa0);
      puVar5[1] = uVar8;
      puVar5[2] = *(undefined8 *)(lVar7 + 0xb0);
      uVar1 = *(undefined4 *)(lVar7 + 0xb8);
      *(undefined8 **)param_4 = puVar5;
      *(undefined4 *)(puVar5 + 3) = uVar1;
      *param_5 = 0x1c;
      break;
    }
    goto LAB_00119304;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
    pthread_mutex_lock((pthread_mutex_t *)ProcessRawDataLock);
    (**(code **)(**(longlong **)(this + 0x38) + 0x68))(*(longlong **)(this + 0x38),0);
    (**(code **)(**(longlong **)(this + 0x38) + 0x88))
              (*(longlong **)(this + 0x38),(ulonglong)*(uint *)(this + 0x48));
    if ((param_2 == (char *)0x0) || (param_3 < 1)) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = mp_test(this,param_1,*(int *)param_2);
      uVar3 = uVar3 & 0xffffffff;
    }
    if (param_1 == 0x10) {
      (**(code **)(**(longlong **)(this + 0x38) + 0x68))(*(longlong **)(this + 0x38),1);
    }
    pthread_mutex_unlock((pthread_mutex_t *)ProcessRawDataLock);
    break;
  case 0x13:
    if (param_2 == (char *)0x0) {
      uVar3 = 0;
      __android_log_print(6,"FingerGoodix","Error_%d:in_buffer is NULL.",0xa30);
      break;
    }
    local_10 = *(uint *)param_2;
    local_18 = 1;
    uStack20 = 1;
    (**(code **)(*(longlong *)(this + 0x28) + 0x248))
              (*(longlong *)(this + 0x28),0x100000001,(ulonglong)local_10);
LAB_00119304:
    uVar3 = 0;
    break;
  case 0x14:
    uVar3 = 0;
    puVar4 = (uint *)malloc(4);
    local_18 = 1;
    uStack20 = 1;
    (**(code **)(*(longlong *)(this + 0x28) + 0x250))(*(longlong *)(this + 0x28),&local_18);
    *(uint **)param_4 = puVar4;
    *puVar4 = local_10;
    *param_5 = 4;
  }
LAB_0011925c:
  if (local_8 == __stack_chk_guard) {
    return uVar3;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// android::FpService::removeClient(android::sp<android::IFingerPrintClient> const&)

void __thiscall removeClient(FpService *this,sp *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong **pplVar3;
  uint uVar4;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  longlong *local_18;
  longlong *local_10;
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  pplVar3 = (longlong **)(this + 0x20);
  __android_log_print(3,"FingerGoodix","FingerPrintService::removeClient,pid=%d",0x7b);
  uVar4 = 0;
  do {
    local_30 = (longlong *)0x0;
    if (*pplVar3 == (longlong *)0x0) {
      __android_log_print(3,"FingerGoodix","mClient[%d] is unused",(ulonglong)uVar4);
LAB_00119884:
      if (local_30 != (longlong *)0x0) {
        decStrong((void *)((longlong)local_30 + *(longlong *)(*local_30 + -0x18)));
      }
    }
    else {
      operator_((sp_android__FpService__Client_ *)&local_30,(sp *)pplVar3);
      if (local_30 == (longlong *)0x0) {
        plVar2 = *pplVar3;
        if (plVar2 != (longlong *)0x0) {
          decStrong((void *)((longlong)plVar2 + *(longlong *)(*plVar2 + -0x18)));
          *pplVar3 = (longlong *)0x0;
        }
        __android_log_print(3,"FingerGoodix","mClient[%d] is null",(ulonglong)uVar4);
        goto LAB_00119884;
      }
      local_28 = *(longlong **)param_1;
      if (local_28 != (longlong *)0x0) {
        incStrong((void *)((longlong)local_28 + *(longlong *)(*local_28 + -0x18)));
      }
      asBinder((sp *)&local_28);
      local_18 = (longlong *)local_30[8];
      if (local_18 != (longlong *)0x0) {
        incStrong((void *)((longlong)local_18 + *(longlong *)(*local_18 + -0x18)));
      }
      asBinder((sp *)&local_18);
      plVar1 = local_10;
      plVar2 = local_20;
      if (local_10 != (longlong *)0x0) {
        decStrong((void *)((longlong)local_10 + *(longlong *)(*local_10 + -0x18)));
      }
      if (local_18 != (longlong *)0x0) {
        decStrong((void *)((longlong)local_18 + *(longlong *)(*local_18 + -0x18)));
      }
      if (local_20 != (longlong *)0x0) {
        decStrong((void *)((longlong)local_20 + *(longlong *)(*local_20 + -0x18)));
      }
      if (local_28 != (longlong *)0x0) {
        decStrong((void *)((longlong)local_28 + *(longlong *)(*local_28 + -0x18)));
      }
      if (plVar2 == plVar1) {
        __android_log_print(3,"FingerGoodix","found fingerprint client,remove it now");
        plVar2 = *(longlong **)(this + (longlong)(int)uVar4 * 8 + 0x20);
        if (plVar2 != (longlong *)0x0) {
          decStrong((void *)((longlong)plVar2 + *(longlong *)(*plVar2 + -0x18)));
          *(undefined8 *)(this + (longlong)(int)uVar4 * 8 + 0x20) = 0;
        }
        if (local_30 != (longlong *)0x0) {
          decStrong((void *)((longlong)local_30 + *(longlong *)(*local_30 + -0x18)));
        }
        goto LAB_001198b0;
      }
      if (local_30 != (longlong *)0x0) {
        decStrong((void *)((longlong)local_30 + *(longlong *)(*local_30 + -0x18)));
      }
    }
    pplVar3 = pplVar3 + 1;
    uVar4 = uVar4 + 1;
    if (uVar4 == 7) {
LAB_001198b0:
      if (local_8 == __stack_chk_guard) {
        return;
      }
                    // WARNING: Subroutine does not return
      __stack_chk_fail();
    }
  } while( true );
}



// android::sp<android::FpService>::operator=(android::sp<android::FpService> const&)

sp_android__FpService_ * __thiscall operator_(sp_android__FpService_ *this,sp *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)param_1;
  if (plVar2 != (longlong *)0x0) {
    incStrong((void *)((longlong)plVar2 + *(longlong *)(*plVar2 + -0x18)));
  }
  plVar1 = *(longlong **)this;
  if (plVar1 != (longlong *)0x0) {
    decStrong((void *)((longlong)plVar1 + *(longlong *)(*plVar1 + -0x18)));
  }
  *(longlong **)this = plVar2;
  return this;
}



// android::sp<android::IFingerPrintClient>::operator=(android::sp<android::IFingerPrintClient>
// const&)

sp_android__IFingerPrintClient_ * __thiscall
operator_(sp_android__IFingerPrintClient_ *this,sp *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)param_1;
  if (plVar2 != (longlong *)0x0) {
    incStrong((void *)((longlong)plVar2 + *(longlong *)(*plVar2 + -0x18)));
  }
  plVar1 = *(longlong **)this;
  if (plVar1 != (longlong *)0x0) {
    decStrong((void *)((longlong)plVar1 + *(longlong *)(*plVar1 + -0x18)));
  }
  *(longlong **)this = plVar2;
  return this;
}



// android::FpService::Client::Client(android::sp<android::FpService> const&,
// android::sp<android::IFingerPrintClient> const&, android::fpContext, int, int)

void __thiscall
Client(Client *this,sp *param_1,sp *param_2,fpContext param_3,int param_4,int param_5)

{
  longlong lVar1;
  uint in_w6;
  undefined4 in_w7;
  
  IFingerPrint((IFingerPrint *)this);
  BBinder((BBinder *)(this + 8));
  lVar1 = *(longlong *)(param_1 + 0x10);
  *(longlong *)this = lVar1;
  *(undefined8 *)(this + *(longlong *)(lVar1 + -0x18)) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 0x60);
  lVar1 = *(longlong *)(param_1 + 8);
  *(longlong *)this = lVar1;
  *(undefined8 *)(this + *(longlong *)(lVar1 + -0x18)) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 0x70);
  lVar1 = *(longlong *)param_1;
  *(longlong *)this = lVar1;
  *(undefined8 *)(this + *(longlong *)(lVar1 + -0x18)) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x50),(pthread_mutexattr_t *)0x0);
  pthread_mutex_init((pthread_mutex_t *)(this + 0x78),(pthread_mutexattr_t *)0x0);
  __android_log_print(3,"FingerGoodix",
                      "FingerPrintService client(class:FingerPrint) is constructing,clientID = %d",
                      (ulonglong)in_w6);
  operator_((sp_android__FpService_ *)(this + 0x38),param_2);
  operator_((sp_android__IFingerPrintClient_ *)(this + 0x40),(sp *)(ulonglong)param_3);
  *(ulonglong *)(this + 0x20) = (ulonglong)(uint)param_4;
  *(ulonglong *)(this + 0x28) = (ulonglong)(uint)param_5;
  *(undefined4 *)(this + 0x4c) = in_w7;
  this[0x30] = (Client)0x0;
  *(uint *)(this + 0x48) = in_w6;
  setFingerPrintBusy(*(FpService **)(this + 0x38),in_w6);
  __android_log_print(3,"FingerGoodix","Set finger print busy flag in client construct");
  return;
}



// android::FpService::Client::Client(android::sp<android::FpService> const&,
// android::sp<android::IFingerPrintClient> const&, android::fpContext, int, int)

void __thiscall
Client(Client *this,sp *param_1,sp *param_2,fpContext param_3,int param_4,int param_5)

{
  undefined4 in_w6;
  
  RefBase((RefBase *)(this + 0xa0));
  IFingerPrint((IFingerPrint *)this);
  BBinder((BBinder *)(this + 8));
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)this = 0x1426d8;
  *(undefined8 *)(this + 0xa0) = 0x142948;
  *(undefined8 *)(this + 8) = 0x142888;
  *(undefined8 *)(this + 0x40) = 0;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x50),(pthread_mutexattr_t *)0x0);
  pthread_mutex_init((pthread_mutex_t *)(this + 0x78),(pthread_mutexattr_t *)0x0);
  __android_log_print(3,"FingerGoodix",
                      "FingerPrintService client(class:FingerPrint) is constructing,clientID = %d",
                      (ulonglong)(uint)param_5);
  operator_((sp_android__FpService_ *)(this + 0x38),param_1);
  operator_((sp_android__IFingerPrintClient_ *)(this + 0x40),param_2);
  *(ulonglong *)(this + 0x20) = (ulonglong)param_3;
  *(ulonglong *)(this + 0x28) = (ulonglong)(uint)param_4;
  *(undefined4 *)(this + 0x4c) = in_w6;
  this[0x30] = (Client)0x0;
  *(int *)(this + 0x48) = param_5;
  setFingerPrintBusy(*(FpService **)(this + 0x38),param_5);
  __android_log_print(3,"FingerGoodix","Set finger print busy flag in client construct");
  return;
}



// android::FpService::connect(android::sp<android::IFingerPrintClient> const&, int)

void __thiscall connect(FpService *this,sp *param_1,int param_2)

{
  FpService *pFVar1;
  uint uVar2;
  longlong *this_00;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong **in_x8;
  longlong lVar5;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  longlong *local_18;
  longlong *local_10;
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","finger print service is connecting,client id is %d,pid = %d"
                      ,(ulonglong)(uint)param_2,0x7b);
  local_38 = (longlong *)0x0;
  if (6 < (uint)param_2) {
    __android_log_print(6,"FingerGoodix","Warning: Invalid clientId:%d",(ulonglong)(uint)param_2);
    *in_x8 = (longlong *)0x0;
    goto LAB_00119f50;
  }
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x1b0));
  lVar5 = (longlong)param_2;
  pFVar1 = this + lVar5 * 8;
  if (*(longlong *)(pFVar1 + 0x20) == 0) {
LAB_0011a1a8:
    local_10 = (longlong *)this;
    incStrong(this + *(longlong *)(*(longlong *)this + -0x18));
    uVar3 = *(undefined8 *)(this + 0x150);
    uVar4 = *(undefined8 *)(this + 0x158);
    this_00 = (longlong *)operator_new(0xb0);
    Client((Client *)this_00,(sp *)&local_10,param_1,(fpContext)uVar3,(int)uVar4,param_2);
    incStrong((void *)((longlong)this_00 + *(longlong *)(*this_00 + -0x18)));
    if (local_38 != (longlong *)0x0) {
      decStrong((void *)((longlong)local_38 + *(longlong *)(*local_38 + -0x18)));
    }
    local_38 = this_00;
    if (local_10 != (longlong *)0x0) {
      decStrong((void *)((longlong)local_10 + *(longlong *)(*local_10 + -0x18)));
    }
    operator_((sp_android__FpService__Client_ *)(this + (lVar5 + 4) * 8),(sp *)&local_38);
  }
  else {
    operator_((sp_android__FpService__Client_ *)&local_38,(sp *)(this + (lVar5 + 4) * 8));
    if (local_38 == (longlong *)0x0) {
      this_00 = *(longlong **)(pFVar1 + 0x20);
      if (this_00 != (longlong *)0x0) {
        decStrong((void *)((longlong)this_00 + *(longlong *)(*this_00 + -0x18)));
        *(undefined8 *)(pFVar1 + 0x20) = 0;
      }
      __android_log_print(3,"FingerGoodix","FingerPrintService::connect client is unused.");
      goto LAB_0011a1a8;
    }
    local_30 = *(longlong **)param_1;
    if (local_30 != (longlong *)0x0) {
      incStrong((void *)((longlong)local_30 + *(longlong *)(*local_30 + -0x18)));
    }
    asBinder((sp *)&local_30);
    local_20 = (longlong *)local_38[8];
    if (local_20 != (longlong *)0x0) {
      incStrong((void *)((longlong)local_20 + *(longlong *)(*local_20 + -0x18)));
    }
    asBinder((sp *)&local_20);
    this_00 = local_28;
    if (local_18 != (longlong *)0x0) {
      decStrong((void *)((longlong)local_18 + *(longlong *)(*local_18 + -0x18)));
    }
    if (local_20 != (longlong *)0x0) {
      decStrong((void *)((longlong)local_20 + *(longlong *)(*local_20 + -0x18)));
    }
    if (local_28 != (longlong *)0x0) {
      decStrong((void *)((longlong)local_28 + *(longlong *)(*local_28 + -0x18)));
    }
    if (local_30 != (longlong *)0x0) {
      decStrong((void *)((longlong)local_30 + *(longlong *)(*local_30 + -0x18)));
    }
    if (this_00 != local_18) {
      __android_log_print(3,"FingerGoodix","FingerPrintService::connect X(pid %d),client is exist.",
                          0x7b);
      __android_log_print(3,"FingerGoodix","fpservice: mCurStatus:%d\n",
                          (ulonglong)*(uint *)(this + 0xe4));
      uVar2 = *(uint *)(this + 0xe4);
      if ((uVar2 - 0xd < 3 || uVar2 - 10 < 2) || ((uVar2 & 0xfffffffb) - 2 < 2)) {
        (**(code **)(*(longlong *)(this + 0x158) + 0x1b8))(*(longlong *)(this + 0x158));
      }
      (**(code **)(*(longlong *)this + 0x80))(this,1);
      (**(code **)(*local_38 + 0x28))(local_38);
      if (local_38 != (longlong *)0x0) {
        decStrong((void *)((longlong)local_38 + *(longlong *)(*local_38 + -0x18)));
      }
      local_38 = (longlong *)0x0;
      setFingerPrintFree(this,0x7b);
      __android_log_print(3,"FingerGoodix",
                          "FingerPrintService::connect X(pid %d),client is exist. but not same",0x7b
                         );
      goto LAB_0011a1a8;
    }
    __android_log_print(3,"FingerGoodix","FingerPrintService::connect X(pid %d) the same client",
                        0x7b);
  }
  *in_x8 = local_38;
  if (local_38 != (longlong *)0x0) {
    incStrong((void *)((longlong)local_38 + *(longlong *)(*local_38 + -0x18)));
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x1b0));
LAB_00119f50:
  if (local_38 != (longlong *)0x0) {
    decStrong((void *)((longlong)local_38 + *(longlong *)(*local_38 + -0x18)));
  }
  if (local_8 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// android::FpService::Client::connect(android::sp<android::IFingerPrintClient> const&)

undefined8 __thiscall connect(Client *this,sp *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *local_28;
  longlong *local_20;
  longlong *local_18;
  longlong *local_10;
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","Client::connect (pid %d)",0x7b);
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x78));
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x50));
  if ((*(int *)(this + 0x4c) != 0) && (iVar2 = checkPid(this), iVar2 != 0)) {
    __android_log_print(3,"FingerGoodix","Tried to connect to a locked fp (old pid %d, new pid %d)",
                        (ulonglong)*(uint *)(this + 0x4c),0x7b);
    uVar3 = 0x10;
    goto LAB_0011a550;
  }
  if (*(longlong *)(this + 0x40) == 0) {
LAB_0011a594:
    *(undefined4 *)(this + 0x4c) = 0x7b;
    operator_((sp_android__IFingerPrintClient_ *)(this + 0x40),param_1);
    __android_log_print(3,"FingerGoodix","Client::connect X (pid %d)",0x7b);
  }
  else {
    local_28 = *(longlong **)param_1;
    if (local_28 != (longlong *)0x0) {
      incStrong((void *)((longlong)local_28 + *(longlong *)(*local_28 + -0x18)));
    }
    asBinder((sp *)&local_28);
    local_18 = *(longlong **)(this + 0x40);
    if (local_18 != (longlong *)0x0) {
      incStrong((void *)((longlong)local_18 + *(longlong *)(*local_18 + -0x18)));
    }
    asBinder((sp *)&local_18);
    plVar1 = local_20;
    if (local_10 != (longlong *)0x0) {
      decStrong((void *)((longlong)local_10 + *(longlong *)(*local_10 + -0x18)));
    }
    if (local_18 != (longlong *)0x0) {
      decStrong((void *)((longlong)local_18 + *(longlong *)(*local_18 + -0x18)));
    }
    if (local_20 != (longlong *)0x0) {
      decStrong((void *)((longlong)local_20 + *(longlong *)(*local_20 + -0x18)));
    }
    if (local_28 != (longlong *)0x0) {
      decStrong((void *)((longlong)local_28 + *(longlong *)(*local_28 + -0x18)));
    }
    if (plVar1 != local_10) goto LAB_0011a594;
    __android_log_print(3,"FingerGoodix","Client::Connect to the same client");
  }
  uVar3 = 0;
LAB_0011a550:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x50));
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x78));
  if (local_8 == __stack_chk_guard) {
    return uVar3;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// android::FpService::Client::gfCmdM(int, unsigned char*, int, unsigned char*, int, int*)

ulonglong __thiscall
gfCmdM(Client *this,int param_1,uchar *param_2,int param_3,uchar *param_4,int param_5,int *param_6)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  uVar3 = (ulonglong)(uint)param_3;
  __android_log_print(3,"FingerGoodix","M gfCmdM, cmd:%d, req_data_len:%d",(ulonglong)(uint)param_1,
                      uVar3);
  if (param_1 == 7) {
    (**(code **)(*(longlong *)(this + 0x28) + 0x2c8))(0);
    return 0;
  }
  if (param_1 < 8) {
    if (param_1 == 1) {
      if (param_3 == 4) {
        uVar1 = *(uint *)param_2;
        __android_log_print(3,"FingerGoodix","M gfCmdM, set active froup:%d",(ulonglong)uVar1);
        (**(code **)(*(longlong *)this + 0x168))(this,(ulonglong)uVar1);
        return 0;
      }
      uVar4 = 0xffffffff;
    }
    else {
      if (param_1 != 6) goto LAB_0011a808;
      uVar4 = 0;
      (**(code **)(*(longlong *)(this + 0x28) + 0x2c8))(1);
    }
    return uVar4;
  }
  if (param_1 - 0x96U < 2) {
    lVar2 = *(longlong *)(this + 0x28);
    *param_6 = param_5;
    uVar3 = (**(code **)(lVar2 + 0x2d8))((ulonglong)(uint)param_1,param_2,uVar3,param_4,param_6);
    __android_log_print(3,"FingerGoodix","send_cmd_to_ta:ret:%d, command:%d, rsp data length:%d",
                        uVar3 & 0xffffffff,(ulonglong)(uint)param_1,(ulonglong)(uint)*param_6);
    return uVar3 & 0xffffffff;
  }
LAB_0011a808:
  __android_log_print(3,"FingerGoodix","service pass the cmd to HAL.");
  uVar3 = (**(code **)(*(longlong *)(this + 0x28) + 0x2c0))
                    (*(longlong *)(this + 0x28),(ulonglong)(uint)param_1,param_2,uVar3,param_4,
                     (ulonglong)(uint)param_5,param_6);
  return uVar3 & 0xffffffff;
}



// android::FpService::Client::getFingerPrintId()

ulonglong __thiscall getFingerPrintId(Client *this)

{
  return (ulonglong)*(uint *)(this + 0x48);
}



// android::FpService::Client::deactivateClient()

void __thiscall deactivateClient(Client *this)

{
  ulonglong uVar1;
  
  if (DAT_00146310 != this) {
    return;
  }
  uVar1 = getFingerPrintId(this);
  __android_log_print(3,"FingerGoodix","remove active client:%d",uVar1 & 0xffffffff);
  DAT_00146310 = (Client *)0x0;
  return;
}



// android::FpService::switchClient(android::FpService::Client*, android::FpService::Client*)

undefined8 __thiscall switchClient(FpService *this,Client *param_1,Client *param_2)

{
  ulonglong uVar1;
  undefined4 local_c;
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  if (param_2 != (Client *)0x0) {
    uVar1 = getFingerPrintId(param_2);
    __android_log_print(3,"FingerGoodix","Swicth client, old client id:%d",uVar1 & 0xffffffff);
  }
  if (param_1 != (Client *)0x0) {
    uVar1 = getFingerPrintId(param_1);
    local_c = (undefined4)uVar1;
    __android_log_print(3,"FingerGoodix","Swicth client, new client id:%d",uVar1 & 0xffffffff);
    __android_log_print(3,"FingerGoodix","Cancel old action");
    (**(code **)(*(longlong *)param_1 + 200))(param_1);
    (**(code **)(*(longlong *)param_1 + 0x80))(param_1);
    (**(code **)(*(longlong *)(this + 0x158) + 0x2c0))
              (*(longlong *)(this + 0x158),0x51,&local_c,4,0,0,0);
    DAT_00146310 = param_1;
    (**(code **)(*(longlong *)this + 0x88))(this,uVar1 & 0xffffffff);
  }
  if (local_8 == __stack_chk_guard) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// android::FpService::Client::prepareFpEnv()

undefined8 __thiscall prepareFpEnv(Client *this)

{
  uint uVar1;
  Client *this_00;
  int iVar2;
  int iVar3;
  longlong *this_01;
  undefined8 uVar4;
  undefined4 local_14;
  longlong *local_10;
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  iVar2 = (**(code **)(*(longlong *)(this + 0x28) + 0x2d0))();
  if (iVar2 == 0) {
    __android_log_print(6,"FingerGoodix","prepare FpEnv, fingerprint has been disabled!");
    uVar4 = 0xffffffff;
    goto LAB_0011ab6c;
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00146318);
  __android_log_print(3,"FingerGoodix","prepare FpEnv, active client=%p",DAT_00146310);
  this_00 = DAT_00146310;
  if (DAT_00146310 == (Client *)0x0) {
    local_14 = *(undefined4 *)(this + 0x48);
    DAT_00146310 = this;
    (**(code **)(*(longlong *)(this + 0x28) + 0x2c0))
              (*(longlong *)(this + 0x28),0x51,&local_14,4,0,0,0);
  }
  else {
    if (this != DAT_00146310) {
      iVar2 = getFingerPrintId(this);
      iVar3 = getFingerPrintId(this_00);
      this_01 = *(longlong **)(this + 0x38);
      if (iVar3 < iVar2) {
        local_10 = this_01;
        if (this_01 == (longlong *)0x0) {
          this_01 = (longlong *)0x0;
        }
        else {
          incStrong((void *)((longlong)this_01 + *(longlong *)(*this_01 + -0x18)));
          this_01 = local_10;
        }
        uVar1 = *(uint *)((longlong)this_01 + 0xe4);
        __android_log_print(3,"FingerGoodix","wait to prepare AlgoEnv, mode=%d, status=%d",
                            (ulonglong)*(uint *)(this_01 + 0x1d),(ulonglong)uVar1);
        if (uVar1 - 2 < 8) {
          do {
            usleep(50000);
          } while (*(int *)((longlong)local_10 + 0xe4) - 2U < 8);
LAB_0011ab38:
          decStrong((void *)((longlong)local_10 + *(longlong *)(*local_10 + -0x18)));
        }
        else {
          if (local_10 != (longlong *)0x0) goto LAB_0011ab38;
        }
        switchClient(*(FpService **)(this + 0x38),this,this_00);
      }
      else {
        switchClient((FpService *)this_01,this,this_00);
        __android_log_print(3,"FingerGoodix","Change the active client.");
      }
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00146318);
  uVar4 = 0;
LAB_0011ab6c:
  if (local_8 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar4;
}



// android::FpService::Client::setActiveGroup(int)

ulonglong __thiscall setActiveGroup(Client *this,int param_1)

{
  ulonglong uVar1;
  undefined4 local_10;
  int local_c;
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","Set the active group");
  uVar1 = (**(code **)(*(longlong *)this + 0x160))(this);
  if ((int)uVar1 == 0) {
    if (DAT_00146340 == param_1) {
      __android_log_print(3,"FingerGoodix","The active group is not changed.");
    }
    else {
      DAT_00146340 = param_1;
      __android_log_print(3,"FingerGoodix","Client[%d] set active group to %d",
                          (ulonglong)*(uint *)(this + 0x48),(ulonglong)(uint)param_1);
      (**(code **)(*(longlong *)this + 0x80))(this);
      (**(code **)(*(longlong *)this + 200))(this);
      (**(code **)(*(longlong *)(this + 0x28) + 0x98))(*(longlong *)(this + 0x28));
      local_10 = *(undefined4 *)(this + 0x48);
      (**(code **)(*(longlong *)(this + 0x28) + 0x2c0))
                (*(longlong *)(this + 0x28),0x51,&local_10,4,0,0,0);
      local_c = param_1;
      (**(code **)(*(longlong *)(this + 0x28) + 0x2c0))
                (*(longlong *)(this + 0x28),0x50,&local_c,4,0,0,0);
      (**(code **)(**(longlong **)(this + 0x38) + 0x78))(*(longlong **)(this + 0x38));
    }
  }
  if (local_8 == __stack_chk_guard) {
    return uVar1 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FUN_0011ade0(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 local_68;
  undefined8 uStack96;
  undefined8 local_58;
  undefined8 uStack80;
  undefined8 local_48;
  undefined8 uStack64;
  undefined8 local_38;
  undefined8 uStack48;
  undefined8 local_28;
  undefined8 uStack32;
  undefined8 local_18;
  undefined4 local_10;
  undefined local_c;
  longlong local_8;
  
  local_68 = 0;
  uStack96 = 0;
  local_8 = __stack_chk_guard;
  local_58 = 0;
  uStack80 = 0;
  local_48 = 0;
  uStack64 = 0;
  local_38 = 0;
  uStack48 = 0;
  local_28 = 0;
  uStack32 = 0;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  uVar1 = property_get(param_1,&local_68,0);
  __android_log_print(3,"FingerGoodix","getprop[%s] return: %d, prop: %s",param_1,uVar1 & 0xffffffff
                      ,&local_68);
  uVar1 = property_set(param_1,param_2);
  __android_log_print(3,"FingerGoodix","setprop[%s] to \'%s\', return: %d",param_1,param_2,
                      uVar1 & 0xffffffff);
  if ((int)(uVar1 & 0xffffffff) != 0) {
    __android_log_print(6,"FingerGoodix","Failed to setprop[%s]",param_1);
  }
  if (local_8 == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention yet parameter storage is locked
// check_sys_prop()

undefined8 check_sys_prop(void)

{
  return 0;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// disable_goodix_fp_with_sys_prop()

void disable_goodix_fp_with_sys_prop(void)

{
  int iVar1;
  ulonglong uVar2;
  char *pcVar3;
  undefined8 local_c8;
  undefined8 uStack192;
  undefined8 local_b8;
  undefined8 uStack176;
  undefined8 local_a8;
  undefined8 uStack160;
  undefined8 local_98;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 uStack128;
  undefined8 local_78;
  undefined4 local_70;
  undefined local_6c;
  undefined8 local_68;
  undefined8 uStack96;
  undefined8 local_58;
  undefined8 uStack80;
  undefined8 local_48;
  undefined8 uStack64;
  undefined8 local_38;
  undefined8 uStack48;
  undefined8 local_28;
  undefined8 uStack32;
  undefined8 local_18;
  undefined4 local_10;
  undefined local_c;
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  local_c8 = 0;
  uStack192 = 0;
  local_b8 = 0;
  uStack176 = 0;
  local_a8 = 0;
  uStack160 = 0;
  local_98 = 0;
  uStack144 = 0;
  local_88 = 0;
  uStack128 = 0;
  local_78 = 0;
  local_70 = 0;
  local_6c = 0;
  uVar2 = property_get("persist.sys.fp.vendor",&local_c8,0);
  __android_log_print(3,"FingerGoodix","getprop[%s] return: %d, prop: %s","persist.sys.fp.vendor",
                      uVar2 & 0xffffffff,&local_c8);
  iVar1 = strcmp((char *)&local_c8,"goodix");
  if (iVar1 != 0) {
    local_68 = 0;
    uStack96 = 0;
    local_58 = 0;
    uStack80 = 0;
    local_48 = 0;
    uStack64 = 0;
    local_38 = 0;
    uStack48 = 0;
    local_28 = 0;
    uStack32 = 0;
    local_18 = 0;
    local_10 = 0;
    local_c = 0;
    uVar2 = property_get("ro.bootmode",&local_68,0);
    __android_log_print(3,"FingerGoodix","getprop[%s] return: %d, prop: %s","ro.bootmode",
                        uVar2 & 0xffffffff,&local_68);
    pcVar3 = strstr((char *)&local_68,"ffbm");
    if (pcVar3 == (char *)0x0) {
      FUN_0011ade0("persist.sys.fp.vendor","switchf");
    }
    else {
      FUN_0011ade0("persist.sys.fp.vendor",&DAT_00136c58);
    }
  }
  local_68 = CONCAT71((uint7)((ulonglong)local_68 >> 8) & 0xffffffffffff00,0x30);
  FUN_0011ade0("persist.sys.fp.goodix",&local_68);
  if (local_8 == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention yet parameter storage is locked
// enable_goodix_fp_with_sys_prop()

void enable_goodix_fp_with_sys_prop(void)

{
  undefined2 local_10 [4];
  longlong local_8;
  
  local_10[0] = 0x31;
  local_8 = __stack_chk_guard;
  FUN_0011ade0("persist.sys.fp.goodix",local_10);
  FUN_0011ade0("persist.sys.fp.vendor","goodix");
  local_10[0] = 0x31;
  FUN_0011ade0("persist.sys.fp.onstart",local_10);
  if (local_8 == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention yet parameter storage is locked

undefined8 * _ZNK7android12IFingerPrint22getInterfaceDescriptorEv(void)

{
  return &descriptor;
}



// android::BpInterface<android::IFingerPrint>::onAsBinder()

undefined8 __thiscall onAsBinder(BpInterface_android__IFingerPrint_ *this)

{
  return *(undefined8 *)(this + 0x10);
}



// BpFingerPrint::gfCmdM(int, unsigned char*, int, unsigned char*, int, int*)

ulonglong __thiscall
gfCmdM(BpFingerPrint *this,int param_1,uchar *param_2,int param_3,uchar *param_4,int param_5,
      int *param_6)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client, gfCmdM");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  iVar1 = (int)aPStack216;
  writeInt32(iVar1);
  writeInt32(iVar1);
  writeInt32(iVar1);
  if (0 < param_3) {
    write(aPStack216,(ulong)param_2);
  }
  (**(code **)(**(longlong **)(this + 0x10) + 0x28))
            (*(longlong **)(this + 0x10),0x23,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar3 = readInt32();
  uVar2 = readInt32();
  *param_6 = uVar2;
  if ((int)uVar2 < 1) {
    __android_log_print(3,"FingerGoodix","client, no rsp data.");
  }
  else {
    if ((param_5 < (int)uVar2) || (param_4 == (uchar *)0x0)) {
      __android_log_print(6,"FingerGoodix",
                          "client, get rsp data failed! rsp_buf=%p, rsp_buf_len=%d, rsp_data_len=%d"
                          ,param_4,(ulonglong)(uint)param_5,(ulonglong)uVar2);
    }
    else {
      read(aPStack112,(ulong)param_4);
      __android_log_print(3,"FingerGoodix","client, get rsp data OK. rsp_data_len=%d",
                          (ulonglong)uVar2);
    }
  }
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar3 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::setRecFlag(unsigned int)

ulonglong setRecFlag(uint param_1)

{
  ulonglong uVar1;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client, %s",
                      "virtual android::status_t BpFingerPrint::setRecFlag(uint32_t)");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  writeInt32((int)aPStack216);
  (**(code **)(**(longlong **)((ulonglong)param_1 + 0x10) + 0x28))
            (*(longlong **)((ulonglong)param_1 + 0x10),0x1f,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar1 = readInt32();
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar1 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::setSafeClass(unsigned int)

ulonglong setSafeClass(uint param_1)

{
  ulonglong uVar1;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,setSafeClass");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  writeInt32((int)aPStack216);
  (**(code **)(**(longlong **)((ulonglong)param_1 + 0x10) + 0x28))
            (*(longlong **)((ulonglong)param_1 + 0x10),0x22,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar1 = readInt32();
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar1 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::disableFingerScreenUnlock()

ulonglong __thiscall disableFingerScreenUnlock(BpFingerPrint *this)

{
  ulonglong uVar1;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,disableFingerScreenUnlock");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  (**(code **)(**(longlong **)(this + 0x10) + 0x28))
            (*(longlong **)(this + 0x10),0x1e,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar1 = readInt32();
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar1 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::enableFingerScreenUnlock()

ulonglong __thiscall enableFingerScreenUnlock(BpFingerPrint *this)

{
  ulonglong uVar1;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,enableFingerScreenUnlock");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  (**(code **)(**(longlong **)(this + 0x10) + 0x28))
            (*(longlong **)(this + 0x10),0x1d,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar1 = readInt32();
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar1 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::alipayTzInvokeCommand(unsigned int, void*, unsigned int, void*, unsigned int*)

ulonglong __thiscall
alipayTzInvokeCommand
          (BpFingerPrint *this,uint param_1,void *param_2,uint param_3,void *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,alipayTzInvokeCommand");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  iVar1 = (int)aPStack216;
  writeInt32(iVar1);
  writeInt32(iVar1);
  write(aPStack216,(ulong)param_2);
  (**(code **)(**(longlong **)(this + 0x10) + 0x28))
            (*(longlong **)(this + 0x10),0x1b,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar3 = readInt32();
  uVar2 = readInt32();
  *param_5 = uVar2;
  read(aPStack112,(ulong)param_4);
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar3 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::getFpNameById(int, char*)

ulonglong __thiscall getFpNameById(BpFingerPrint *this,int param_1,char *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,getFpNameById,%d",(ulonglong)(uint)param_1);
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  writeInt32((int)aPStack216);
  (**(code **)(**(longlong **)(this + 0x10) + 0x28))
            (*(longlong **)(this + 0x10),0x19,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar1 = readInt32();
  uVar2 = uVar1 & 0xffffffff;
  if ((int)uVar1 == 0) {
    if (param_2 != (char *)0x0) {
      uVar2 = read(aPStack112,(ulong)param_2);
      uVar2 = uVar2 & 0xffffffff;
    }
  }
  else {
    __android_log_print(6,"FingerGoodix","failed to getFpNameId");
  }
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::driverTest()

ulonglong __thiscall driverTest(BpFingerPrint *this)

{
  ulonglong uVar1;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,driverTest");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  (**(code **)(**(longlong **)(this + 0x10) + 0x28))
            (*(longlong **)(this + 0x10),0x17,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar1 = readInt32();
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar1 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::setPauseRegisterState(int)

ulonglong setPauseRegisterState(int param_1)

{
  ulonglong uVar1;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,setPauseRegisterState");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  writeInt32((int)aPStack216);
  (**(code **)(**(longlong **)((ulonglong)(uint)param_1 + 0x10) + 0x28))
            (*(longlong **)((ulonglong)(uint)param_1 + 0x10),0x16,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar1 = readInt32();
  __android_log_print(3,"FingerGoodix","setPauseRegisterState,result:%d",uVar1 & 0xffffffff);
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar1 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::getFpTemplateIdList(unsigned int*, unsigned int*)

ulonglong __thiscall getFpTemplateIdList(BpFingerPrint *this,uint *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,getFpTemplateIdList");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  (**(code **)(**(longlong **)(this + 0x10) + 0x28))
            (*(longlong **)(this + 0x10),0x15,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar2 = readInt32();
  if ((int)uVar2 == 0) {
    uVar1 = readInt32();
    *param_2 = uVar1;
    read(aPStack112,(ulong)param_1);
    __android_log_print(3,"FingerGoodix","pIdList:%d,%d,%d",(ulonglong)*param_1,
                        (ulonglong)param_1[1],(ulonglong)param_1[2]);
  }
  else {
    *param_2 = 0;
  }
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar2 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::delFpTemplates(unsigned int*, unsigned int)

ulonglong delFpTemplates(uint *param_1,uint param_2)

{
  ulonglong uVar1;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,delFpTemplates");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  writeInt32((int)aPStack216);
  write(aPStack216,param_2);
  (**(code **)(**(longlong **)(param_1 + 4) + 0x28))
            (*(longlong **)(param_1 + 4),0x14,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar1 = readInt32();
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar1 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::cancelRecognize()

ulonglong __thiscall cancelRecognize(BpFingerPrint *this)

{
  ulonglong uVar1;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,cancel recognize");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  (**(code **)(**(longlong **)(this + 0x10) + 0x28))
            (*(longlong **)(this + 0x10),0x11,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar1 = readInt32();
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar1 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::recognizeFido(unsigned char*, int, unsigned char*, int)

ulonglong recognizeFido(uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  int iVar1;
  ulonglong uVar2;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,recognize fido");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  iVar1 = (int)aPStack216;
  writeInt32(iVar1);
  write(aPStack216,param_2);
  writeInt32(iVar1);
  write(aPStack216,param_4);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
            (*(longlong **)(param_1 + 0x10),0x20,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar2 = readInt32();
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar2 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::recognizeWithRestrict(unsigned int*, unsigned int, unsigned int)

ulonglong recognizeWithRestrict(uint *param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,recognizeWithRestrict");
  __android_log_print(3,"FingerGoodix","arrayLen:%d",(ulonglong)param_3);
  if (param_3 != 0) {
    uVar4 = 0;
    do {
      lVar1 = uVar4 * 4;
      uVar3 = uVar4 & 0xffffffff;
      uVar4 = uVar4 + 1;
      __android_log_print(3,"FingerGoodix","array index:%d,value:%d",uVar3,
                          (ulonglong)*(uint *)((ulonglong)param_2 + lVar1));
    } while (uVar4 != (ulonglong)(param_3 - 1) + 1);
  }
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  iVar2 = (int)aPStack216;
  writeInt32(iVar2);
  write(aPStack216,param_2);
  writeInt32(iVar2);
  (**(code **)(**(longlong **)(param_1 + 4) + 0x28))
            (*(longlong **)(param_1 + 4),0x10,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar4 = readInt32();
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar4 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::recognize(void*)

ulonglong __thiscall recognize(BpFingerPrint *this,void *param_1)

{
  ulonglong uVar1;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,recognize");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  writeInt32((int)aPStack216);
  write(aPStack216,(ulong)param_1);
  (**(code **)(**(longlong **)(this + 0x10) + 0x28))
            (*(longlong **)(this + 0x10),0xf,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar1 = readInt32();
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar1 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::saveRegist(int)

ulonglong saveRegist(int param_1)

{
  ulonglong uVar1;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,save regist");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  writeInt32((int)aPStack216);
  (**(code **)(**(longlong **)((ulonglong)(uint)param_1 + 0x10) + 0x28))
            (*(longlong **)((ulonglong)(uint)param_1 + 0x10),0xd,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar1 = readInt32();
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar1 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::unRegist(int)

ulonglong unRegist(int param_1)

{
  ulonglong uVar1;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,unRegist");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  writeInt32((int)aPStack216);
  (**(code **)(**(longlong **)((ulonglong)(uint)param_1 + 0x10) + 0x28))
            (*(longlong **)((ulonglong)(uint)param_1 + 0x10),0xc,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar1 = readInt32();
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar1 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::resetRegist()

ulonglong __thiscall resetRegist(BpFingerPrint *this)

{
  ulonglong uVar1;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,reset regist");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  (**(code **)(**(longlong **)(this + 0x10) + 0x28))
            (*(longlong **)(this + 0x10),0xb,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar1 = readInt32();
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar1 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::registRollback()

ulonglong __thiscall registRollback(BpFingerPrint *this)

{
  ulonglong uVar1;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,regist roll back");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  (**(code **)(**(longlong **)(this + 0x10) + 0x28))
            (*(longlong **)(this + 0x10),10,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar1 = readInt32();
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar1 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::cancelRegist()

ulonglong __thiscall cancelRegist(BpFingerPrint *this)

{
  ulonglong uVar1;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,cancel regist");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  (**(code **)(**(longlong **)(this + 0x10) + 0x28))
            (*(longlong **)(this + 0x10),9,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar1 = readInt32();
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar1 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::regist()

ulonglong __thiscall regist(BpFingerPrint *this)

{
  ulonglong uVar1;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,regist");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  (**(code **)(**(longlong **)(this + 0x10) + 0x28))
            (*(longlong **)(this + 0x10),8,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar1 = readInt32();
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar1 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::load_all_fpdata(void*)

ulonglong __thiscall load_all_fpdata(BpFingerPrint *this,void *param_1)

{
  int iVar1;
  ulonglong uVar2;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  writeInt32((int)aPStack216);
  write(aPStack216,(ulong)param_1);
  (**(code **)(**(longlong **)(this + 0x10) + 0x28))
            (*(longlong **)(this + 0x10),0x25,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar2 = readInt32();
  iVar1 = readInt32();
  if (iVar1 == 0x80) {
    read(aPStack112,(ulong)param_1);
    __android_log_print(3,"FingerGoodix","client, load_all_fpdata OK!");
  }
  else {
    __android_log_print(3,"FingerGoodix","client, load_all_fpdata fialed!");
  }
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar2 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::sendScreenState(int)

ulonglong sendScreenState(int param_1)

{
  ulonglong uVar1;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,sendScreenState");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  writeInt32((int)aPStack216);
  (**(code **)(**(longlong **)((ulonglong)(uint)param_1 + 0x10) + 0x28))
            (*(longlong **)((ulonglong)(uint)param_1 + 0x10),7,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar1 = readInt32();
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar1 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::query()

ulonglong __thiscall query(BpFingerPrint *this)

{
  ulonglong uVar1;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,query");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  (**(code **)(**(longlong **)(this + 0x10) + 0x28))
            (*(longlong **)(this + 0x10),5,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar1 = readInt32();
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar1 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::setMode(int)

ulonglong setMode(int param_1)

{
  ulonglong uVar1;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,setmode.\n");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  writeInt32((int)aPStack216);
  (**(code **)(**(longlong **)((ulonglong)(uint)param_1 + 0x10) + 0x28))
            (*(longlong **)((ulonglong)(uint)param_1 + 0x10),4,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar1 = readInt32();
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar1 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::disconnect()

ulonglong __thiscall disconnect(BpFingerPrint *this)

{
  ulonglong uVar1;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,disconnect");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  (**(code **)(**(longlong **)(this + 0x10) + 0x28))
            (*(longlong **)(this + 0x10),2,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar1 = readInt32();
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar1 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::weChatSetSessionId(unsigned long)

ulonglong weChatSetSessionId(ulong param_1)

{
  ulonglong uVar1;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client, %s",
                      "virtual android::status_t BpFingerPrint::weChatSetSessionId(uint64_t)");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  writeInt64((long)aPStack216);
  (**(code **)(**(longlong **)((ulonglong)param_1 + 0x10) + 0x28))
            (*(longlong **)((ulonglong)param_1 + 0x10),0x1c,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar1 = readInt32();
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar1 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::set_user_id(unsigned long)

ulonglong set_user_id(ulong param_1)

{
  ulonglong uVar1;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,set_user_id");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  writeInt64((long)aPStack216);
  (**(code **)(**(longlong **)((ulonglong)param_1 + 0x10) + 0x28))
            (*(longlong **)((ulonglong)param_1 + 0x10),0x24,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar1 = readInt32();
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar1 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::getInfo()

undefined8 __thiscall getInfo(BpFingerPrint *this)

{
  undefined8 uVar1;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,getInfo");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  (**(code **)(**(longlong **)(this + 0x10) + 0x28))
            (*(longlong **)(this + 0x10),3,aPStack216,aPStack112,0);
  readExceptionCode();
  readInt32();
  uVar1 = readCString();
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar1;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::modifyFpName(int, char const*)

ulonglong modifyFpName(int param_1,char *param_2)

{
  ulonglong uVar1;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,modifyFpName");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  writeInt32((int)aPStack216);
  writeCString((char *)aPStack216);
  (**(code **)(**(longlong **)((ulonglong)(uint)param_1 + 0x10) + 0x28))
            (*(longlong **)((ulonglong)(uint)param_1 + 0x10),0x18,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar1 = readInt32();
  __android_log_print(3,"FingerGoodix","modifyFpName,result:%d",uVar1 & 0xffffffff);
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar1 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::checkPasswd(char const*)

ulonglong checkPasswd(char *param_1)

{
  ulonglong uVar1;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,check passwd");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  writeCString((char *)aPStack216);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
            (*(longlong **)(param_1 + 0x10),0x13,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar1 = readInt32();
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar1 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::setPasswd(char const*, char const*)

ulonglong setPasswd(char *param_1,char *param_2)

{
  ulonglong uVar1;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,set passwd");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  writeCString((char *)aPStack216);
  writeCString((char *)aPStack216);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
            (*(longlong **)(param_1 + 0x10),0x12,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar1 = readInt32();
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar1 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::saveRegister(char const*)

ulonglong __thiscall saveRegister(BpFingerPrint *this,char *param_1)

{
  ulonglong uVar1;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,save register(),name");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  if (param_1 == (char *)0x0) {
    __android_log_print(6,"FingerGoodix","saveRegister name is NULL");
  }
  else {
    writeCString((char *)aPStack216);
    __android_log_print(3,"FingerGoodix","saveRegister name:%s",param_1);
  }
  (**(code **)(**(longlong **)(this + 0x10) + 0x28))
            (*(longlong **)(this + 0x10),0xe,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar1 = readInt32();
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar1 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::requestPermission(char const*)

ulonglong requestPermission(char *param_1)

{
  ulonglong uVar1;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,request permission");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  writeCString((char *)aPStack216);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
            (*(longlong **)(param_1 + 0x10),6,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar1 = readInt32();
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar1 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::set_fpdb_to_ta(char*)

ulonglong __thiscall set_fpdb_to_ta(BpFingerPrint *this,char *param_1)

{
  size_t sVar1;
  ulonglong uVar2;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  sVar1 = strlen(param_1);
  __android_log_print(3,"FingerGoodix","client,set_fpdb_to_ta,data_len:%d",(ulonglong)sVar1);
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  writeInt32((int)aPStack216);
  if (0 < (int)sVar1) {
    write(aPStack216,(ulong)param_1);
  }
  (**(code **)(**(longlong **)(this + 0x10) + 0x28))
            (*(longlong **)(this + 0x10),0x26,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar2 = readInt32();
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar2 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::SendCmd(int, char*, int, char**, int*)

ulonglong __thiscall
SendCmd(BpFingerPrint *this,int param_1,char *param_2,int param_3,char **param_4,int *param_5)

{
  int iVar1;
  size_t __size;
  char *__ptr;
  ulonglong uVar2;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,SendCmd");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  iVar1 = (int)aPStack216;
  writeInt32(iVar1);
  writeInt32(iVar1);
  if ((param_3 != 0) && (param_2 != (char *)0x0)) {
    write(aPStack216,(ulong)param_2);
  }
  (**(code **)(**(longlong **)(this + 0x10) + 0x28))
            (*(longlong **)(this + 0x10),0x21,aPStack216,aPStack112,0);
  readExceptionCode();
  __size = readInt32();
  if (__size != 0) {
    __ptr = (char *)malloc(__size);
    read(aPStack112,(ulong)__ptr);
    if (param_5 == (int *)0x0) {
      free(__ptr);
    }
    else {
      *param_4 = __ptr;
    }
  }
  uVar2 = readInt32();
  *param_5 = __size;
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar2 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrint::connect(android::sp<android::IFingerPrintClient> const&)

ulonglong __thiscall connect(BpFingerPrint *this,sp *param_1)

{
  ulonglong uVar1;
  longlong *local_e8;
  longlong *local_e0;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,connect");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  local_e8 = *(longlong **)param_1;
  if (local_e8 != (longlong *)0x0) {
    incStrong((void *)((longlong)local_e8 + *(longlong *)(*local_e8 + -0x18)));
  }
  asBinder((sp *)&local_e8);
  writeStrongBinder((sp *)aPStack216);
  if (local_e0 != (longlong *)0x0) {
    decStrong((void *)((longlong)local_e0 + *(longlong *)(*local_e0 + -0x18)));
  }
  if (local_e8 != (longlong *)0x0) {
    decStrong((void *)((longlong)local_e8 + *(longlong *)(*local_e8 + -0x18)));
  }
  (**(code **)(**(longlong **)(this + 0x10) + 0x28))
            (*(longlong **)(this + 0x10),1,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar1 = readInt32();
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar1 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Could not reconcile some variable overlaps
// android::BnFingerPrint::onTransact(unsigned int, android::Parcel const&, android::Parcel*,
// unsigned int)

ulonglong onTransact(uint param_1,Parcel *param_2,Parcel *param_3,uint param_4)

{
  int iVar1;
  size_t __size;
  uint uVar2;
  size_t __size_00;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  void *__s;
  char *__s_00;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  char *pcVar11;
  code *pcVar12;
  undefined8 *__ptr;
  longlong lVar13;
  void *__ptr_00;
  uint local_98;
  undefined4 uStack148;
  undefined8 local_90;
  undefined8 *local_88 [5];
  undefined8 uStack96;
  undefined8 local_58;
  undefined8 uStack80;
  ulonglong local_48;
  undefined8 uStack64;
  undefined8 local_38;
  undefined8 uStack48;
  undefined8 local_28;
  undefined8 uStack32;
  undefined8 local_18;
  undefined8 uStack16;
  longlong local_8;
  
  pcVar11 = (char *)(ulonglong)param_4;
  plVar3 = (longlong *)(ulonglong)param_1;
  local_8 = __stack_chk_guard;
  switch((int)param_2) {
  case 1:
    uVar4 = 0xffffffff;
    __android_log_print(3,"FingerGoodix","server,connect");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      readStrongBinder();
      asInterface((sp *)&local_90);
      if (local_90 != (longlong *)0x0) {
        decStrong((void *)((longlong)local_90 + *(longlong *)(*local_90 + -0x18)));
      }
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_98);
      writeNoException();
      uVar4 = writeInt32(param_4);
      uVar4 = uVar4 & 0xffffffff;
      plVar3 = (longlong *)CONCAT44(uStack148,local_98);
      if (plVar3 != (longlong *)0x0) {
        decStrong((void *)((longlong)plVar3 + *(longlong *)(*plVar3 + -0x18)));
      }
    }
    goto LAB_0011dde0;
  case 2:
    __android_log_print(3,"FingerGoodix","server,disconnect");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      uVar4 = 0;
      writeNoException();
      (**(code **)(*plVar3 + 0x28))(plVar3);
      writeInt32(param_4);
      goto LAB_0011dde0;
    }
    break;
  case 3:
    __android_log_print(3,"FingerGoodix","server,get info");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      uVar4 = 0;
      writeNoException();
      __s_00 = (char *)(**(code **)(*plVar3 + 0x30))(plVar3);
      __android_log_print(3,"FingerGoodix","server,get info %s",__s_00);
      strlen(__s_00);
      writeInt32(param_4);
      strlen(__s_00);
      write(pcVar11,(ulong)__s_00);
      goto LAB_0011dde0;
    }
    break;
  case 4:
    __android_log_print(3,"FingerGoodix","server,eng test");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      writeNoException();
      pcVar12 = *(code **)(*plVar3 + 0x38);
LAB_0011e17c:
      uVar4 = 0;
      uVar6 = readInt32();
      (*pcVar12)(plVar3,uVar6 & 0xffffffff);
      writeInt32(param_4);
      goto LAB_0011dde0;
    }
    break;
  case 5:
    __android_log_print(3,"FingerGoodix","server,query");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      uVar4 = 0;
      writeNoException();
      (**(code **)(*plVar3 + 0x48))(plVar3);
      writeInt32(param_4);
      goto LAB_0011dde0;
    }
    break;
  case 6:
    __android_log_print(3,"FingerGoodix","server,request permission");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      writeNoException();
      pcVar12 = *(code **)(*plVar3 + 0x50);
      uVar5 = readCString();
LAB_0011df00:
      uVar4 = 0;
      (*pcVar12)(plVar3,uVar5);
      writeInt32(param_4);
      goto LAB_0011dde0;
    }
    break;
  case 7:
    __android_log_print(3,"FingerGoodix","server,send screen state");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      writeNoException();
      pcVar12 = *(code **)(*plVar3 + 0x58);
      goto LAB_0011e17c;
    }
    break;
  case 8:
    __android_log_print(3,"FingerGoodix","server,regist");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      uVar4 = 0;
      writeNoException();
      (**(code **)(*plVar3 + 0x78))(plVar3);
      writeInt32(param_4);
      goto LAB_0011dde0;
    }
    break;
  case 9:
    __android_log_print(3,"FingerGoodix","server,cancel regist");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      uVar4 = 0;
      writeNoException();
      (**(code **)(*plVar3 + 0x80))(plVar3);
      writeInt32(param_4);
      goto LAB_0011dde0;
    }
    break;
  case 10:
    __android_log_print(3,"FingerGoodix","server,regist roll back");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      uVar4 = 0;
      writeNoException();
      (**(code **)(*plVar3 + 0x88))(plVar3);
      writeInt32(param_4);
      goto LAB_0011dde0;
    }
    break;
  case 0xb:
    __android_log_print(3,"FingerGoodix","server,reset regist");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      uVar4 = 0;
      writeNoException();
      (**(code **)(*plVar3 + 0x90))(plVar3);
      writeInt32(param_4);
      goto LAB_0011dde0;
    }
    break;
  case 0xc:
    __android_log_print(3,"FingerGoodix","server,unRegist");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      writeNoException();
      pcVar12 = *(code **)(*plVar3 + 0x98);
      goto LAB_0011e17c;
    }
    break;
  case 0xd:
    __android_log_print(3,"FingerGoodix","server,save regist");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      writeNoException();
      pcVar12 = *(code **)(*plVar3 + 0xa0);
      goto LAB_0011e17c;
    }
    break;
  case 0xe:
    __android_log_print(3,"FingerGoodix","server,save register()");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      writeNoException();
      pcVar12 = *(code **)(*plVar3 + 0xa8);
      uVar5 = readCString();
      goto LAB_0011df00;
    }
    break;
  case 0xf:
    uVar4 = 0xffffffff;
    __android_log_print(3,"FingerGoodix","server,recognize");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      local_48 = (local_48 >> 0x20 & 0xffffff00) << 0x20;
      local_88[0] = (void *)0x0;
      local_88[1] = 0;
      local_88[2] = 0;
      local_88[3] = 0;
      local_88[4] = 0;
      uStack96 = 0;
      local_58 = 0;
      uStack80 = 0;
      iVar1 = readInt32();
      if (0 < iVar1) {
        read(param_3,(ulong)local_88);
      }
      uVar4 = 0;
      writeNoException();
      (**(code **)(*plVar3 + 0xb0))(plVar3,local_88);
      writeInt32(param_4);
    }
    goto LAB_0011dde0;
  case 0x10:
    __android_log_print(3,"FingerGoodix","server,recognizeWithRestrict");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      uVar4 = readInt32();
      __android_log_print(3,"FingerGoodix","server receiver restrict count:%d",uVar4 & 0xffffffff);
      __size_00 = (size_t)((uVar4 & 0xffffffff) << 2);
      __ptr_00 = malloc(__size_00);
      if (__ptr_00 == (void *)0x0) {
        uVar4 = 0xffffffff;
        __android_log_print(6,"FingerGoodix",
                            "IFingerPrint TRANSACTION_FP_RECOGNIZE_WITH_RESTRICT out of memory");
        goto LAB_0011dde0;
      }
      memset(__ptr_00,0,__size_00);
      read(param_3,(ulong)__ptr_00);
      uVar6 = readInt32();
      writeNoException();
      (**(code **)(*plVar3 + 0xb8))(plVar3,__ptr_00,uVar4 & 0xffffffff,uVar6 & 0xffffffff);
LAB_0011eb68:
      uVar4 = 0;
      writeInt32(param_4);
      free(__ptr_00);
      goto LAB_0011dde0;
    }
    break;
  case 0x11:
    __android_log_print(3,"FingerGoodix","server,cancel recognize");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      uVar4 = 0;
      writeNoException();
      (**(code **)(*plVar3 + 200))(plVar3);
      writeInt32(param_4);
      goto LAB_0011dde0;
    }
    break;
  case 0x12:
    __android_log_print(3,"FingerGoodix","server,set passwd");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      uVar4 = 0;
      uVar5 = readCString();
      uVar8 = readCString();
      writeNoException();
      (**(code **)(*plVar3 + 0xd0))(plVar3,uVar5,uVar8);
      writeInt32(param_4);
      goto LAB_0011dde0;
    }
    break;
  case 0x13:
    __android_log_print(3,"FingerGoodix","server,check passwd");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      uVar4 = 0;
      uVar5 = readCString();
      writeNoException();
      (**(code **)(*plVar3 + 0xd8))(plVar3,uVar5);
      writeInt32(param_4);
      goto LAB_0011dde0;
    }
    break;
  case 0x14:
    __android_log_print(3,"FingerGoodix","server,delFpTemplates");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      uVar4 = readInt32();
      __size_00 = (size_t)((uVar4 & 0xffffffff) << 2);
      __ptr_00 = malloc(__size_00);
      if (__ptr_00 == (void *)0x0) {
        uVar4 = 0xffffffff;
        __android_log_print(6,"FingerGoodix",
                            "IFingerPrint TRANSACTION_FP_DELETE_TEMPLATE out of memory");
        goto LAB_0011dde0;
      }
      memset(__ptr_00,0,__size_00);
      read(param_3,(ulong)__ptr_00);
      writeNoException();
      (**(code **)(*plVar3 + 0xe0))(plVar3,__ptr_00,uVar4 & 0xffffffff);
      goto LAB_0011eb68;
    }
    break;
  case 0x15:
    uVar4 = 0xffffffff;
    __android_log_print(3,"FingerGoodix","server,getFpTemplateIdList");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) == 0) goto LAB_0011dde0;
    local_90 = (longlong *)CONCAT44(local_90._4_4_,5);
    __ptr = (undefined8 *)malloc(0x14);
    if (__ptr == (undefined8 *)0x0) {
      __android_log_print(6,"FingerGoodix",
                          "IFingerPrint TRANSACTION_FP_GET_TEMPLATE_LIST out of memory");
      goto LAB_0011dde0;
    }
    lVar13 = *plVar3;
    *__ptr = 0;
    __ptr[1] = 0;
    *(undefined4 *)(__ptr + 2) = 0;
    iVar1 = (**(code **)(lVar13 + 0xe8))(plVar3,__ptr,&local_90);
    writeInt32(param_4);
    if (iVar1 == 0) {
      writeInt32(param_4);
      write(pcVar11,(ulong)__ptr);
      __android_log_print(3,"FingerGoodix","templelist:%d,%d,%d",(ulonglong)*(uint *)__ptr,
                          (ulonglong)*(uint *)((longlong)__ptr + 4),(ulonglong)*(uint *)(__ptr + 1))
      ;
    }
    else {
      writeInt32(param_4);
      write(pcVar11,(ulong)__ptr);
    }
    goto LAB_0011eac8;
  case 0x16:
    __android_log_print(3,"FingerGoodix","server,setPauseRegisterState");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      uVar4 = 0;
      uVar6 = readInt32();
      writeNoException();
      (**(code **)(*plVar3 + 0xf0))(plVar3,uVar6 & 0xffffffff);
      writeInt32(param_4);
      goto LAB_0011dde0;
    }
    break;
  case 0x17:
    __android_log_print(3,"FingerGoodix","server,driverTest");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      uVar4 = 0;
      writeNoException();
      (**(code **)(*plVar3 + 0xf8))(plVar3);
      writeInt32(param_4);
      goto LAB_0011dde0;
    }
    break;
  case 0x18:
    __android_log_print(3,"FingerGoodix","server,modifyFpName");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      uVar4 = 0;
      uVar6 = readInt32();
      uVar5 = readCString();
      writeNoException();
      (**(code **)(*plVar3 + 0x100))(plVar3,uVar6 & 0xffffffff,uVar5);
      writeInt32(param_4);
      goto LAB_0011dde0;
    }
    break;
  case 0x19:
    __android_log_print(3,"FingerGoodix","server,getFpNameById");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      uVar6 = readInt32();
      __ptr = (undefined8 *)malloc(0x80);
      if (__ptr == (undefined8 *)0x0) {
        uVar4 = 0xffffffff;
        __android_log_print(6,"FingerGoodix","failed to malloc pName in server\'s getFpNameById");
        writeInt32(param_4);
      }
      else {
        lVar13 = *plVar3;
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
        __ptr[0xd] = 0;
        __ptr[0xe] = 0;
        __ptr[0xf] = 0;
        uVar4 = 0;
        (**(code **)(lVar13 + 0x108))(plVar3,uVar6 & 0xffffffff,__ptr);
        writeNoException();
        writeInt32(param_4);
        write(pcVar11,(ulong)__ptr);
        free(__ptr);
      }
      goto LAB_0011dde0;
    }
    break;
  case 0x1a:
    uVar4 = 0xffffffff;
    __android_log_print(3,"FingerGoodix","server,getFpTemplateList");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      local_90 = (longlong *)CONCAT44(local_90._4_4_,5);
      __ptr = (undefined8 *)malloc(0x14);
      if (__ptr == (undefined8 *)0x0) {
        __android_log_print(6,"FingerGoodix","failed to malloc pIdList memory!!!");
      }
      else {
        *__ptr = 0;
        __ptr[1] = 0;
        *(undefined4 *)(__ptr + 2) = 0;
        lVar13 = 0;
        do {
          puVar9 = (undefined8 *)malloc(0x80);
          *(undefined8 **)((longlong)local_88 + lVar13) = puVar9;
          if (puVar9 == (undefined8 *)0x0) {
            uVar4 = 0xffffffff;
            __android_log_print(6,"FingerGoodix","failed to malloc pNameLists");
            goto LAB_0011dde0;
          }
          lVar13 = lVar13 + 8;
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
          puVar9[3] = 0;
          puVar9[4] = 0;
          puVar9[5] = 0;
          puVar9[6] = 0;
          puVar9[7] = 0;
          puVar9[8] = 0;
          puVar9[9] = 0;
          puVar9[10] = 0;
          puVar9[0xb] = 0;
          puVar9[0xc] = 0;
          puVar9[0xd] = 0;
          puVar9[0xe] = 0;
          puVar9[0xf] = 0;
        } while (lVar13 != 0x28);
        iVar1 = (**(code **)(*plVar3 + 0x110))(plVar3,&local_90,__ptr,local_88);
        writeNoException();
        writeInt32(param_4);
        if (iVar1 == 0) {
          writeInt32(param_4);
          if ((uint)local_90 != 0) {
            write(pcVar11,(ulong)__ptr);
            __android_log_print(3,"FingerGoodix","write pIdList to reply");
            if ((uint)local_90 != 0) {
              uVar4 = 0;
              do {
                writeCString(pcVar11);
                __android_log_print(3,"FingerGoodix","write pNameLists[%d] to reply,name:%s",
                                    uVar4 & 0xffffffff,local_88[uVar4]);
                iVar1 = (int)uVar4;
                uVar4 = uVar4 + 1;
              } while (iVar1 + 1U < (uint)local_90);
            }
          }
        }
        else {
          __android_log_print(6,"FingerGoodix","server,failed to getFpTemplateList");
        }
        free(__ptr);
        uVar4 = 0;
        __android_log_print(3,"FingerGoodix","free pIdList");
        do {
          free(local_88[uVar4]);
          uVar6 = uVar4 & 0xffffffff;
          uVar4 = uVar4 + 1;
          __android_log_print(3,"FingerGoodix","free pNameList[%d]",uVar6);
        } while (uVar4 != 5);
        uVar4 = 0;
      }
    }
    goto LAB_0011dde0;
  case 0x1b:
    uVar4 = 0xffffffff;
    __android_log_print(3,"FingerGoodix","server,alipay_tz_invoke_command");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      uVar4 = 0;
      uVar6 = readInt32();
      uVar7 = readInt32();
      __ptr_00 = malloc((size_t)(uVar7 & 0xffffffff));
      read(param_3,(ulong)__ptr_00);
      local_90 = (longlong *)CONCAT44(local_90._4_4_,0x800);
      __s = malloc(0x800);
      (**(code **)(*plVar3 + 0x118))
                (plVar3,uVar6 & 0xffffffff,__ptr_00,uVar7 & 0xffffffff,__s,&local_90);
      free(__ptr_00);
      writeNoException();
      writeInt32(param_4);
      writeInt32(param_4);
      write(pcVar11,(ulong)__s);
      free(__s);
    }
    goto LAB_0011dde0;
  case 0x1c:
    __android_log_print(3,"FingerGoodix","server, weChatSetSessionId");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      uVar4 = 0;
      uVar5 = readInt64();
      (**(code **)(*plVar3 + 0x138))(plVar3,uVar5);
      writeNoException();
      writeInt32(param_4);
      goto LAB_0011dde0;
    }
    break;
  case 0x1d:
    __android_log_print(3,"FingerGoodix","server,enableFingerScreenUnlock");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      uVar4 = 0;
      writeNoException();
      (**(code **)(*plVar3 + 0x120))(plVar3);
      writeInt32(param_4);
      goto LAB_0011dde0;
    }
    break;
  case 0x1e:
    __android_log_print(3,"FingerGoodix","server,disableFingerScreenUnlock");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      uVar4 = 0;
      writeNoException();
      (**(code **)(*plVar3 + 0x128))(plVar3);
      writeInt32(param_4);
      goto LAB_0011dde0;
    }
    break;
  case 0x1f:
    __android_log_print(3,"FingerGoodix","server,setRecFlag");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      uVar4 = 0;
      uVar6 = readInt32();
      writeNoException();
      (**(code **)(*plVar3 + 0x140))(plVar3,uVar6 & 0xffffffff);
      writeInt32(param_4);
      goto LAB_0011dde0;
    }
    break;
  case 0x20:
    __android_log_print(3,"FingerGoodix","server,recognize fido");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      __size_00 = readInt32();
      __ptr_00 = malloc(__size_00);
      if (__ptr_00 != (void *)0x0) {
        memset(__ptr_00,0,__size_00);
        read(param_3,(ulong)__ptr_00);
        __size = readInt32();
        __s = malloc(__size);
        if (__s != (void *)0x0) {
          uVar4 = 0;
          memset(__s,0,__size);
          read(param_3,(ulong)__s);
          writeNoException();
          (**(code **)(*plVar3 + 0xc0))
                    (plVar3,__ptr_00,(ulonglong)__size_00,__s,(longlong)(int)__size);
          writeInt32(param_4);
          free(__ptr_00);
          free(__s);
          goto LAB_0011dde0;
        }
      }
      uVar4 = 0xffffffff;
      __android_log_print(6,"FingerGoodix",
                          "IFingerPrint TRANSACTION_FP_RECOGNIZE_FIDO out of memory");
      goto LAB_0011dde0;
    }
    break;
  case 0x21:
    uVar4 = 0xffffffff;
    __android_log_print(3,"FingerGoodix","server,send cmd.");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      local_98 = 0;
      local_90 = (longlong *)0x0;
      __ptr_00 = (void *)0x0;
      uVar4 = readInt32();
      uVar6 = readInt32();
      if ((size_t)uVar6 != 0) {
        __ptr_00 = malloc((size_t)uVar6);
        read(param_3,(ulong)__ptr_00);
      }
      writeNoException();
      (**(code **)(*plVar3 + 0x40))
                (plVar3,uVar4 & 0xffffffff,__ptr_00,uVar6 & 0xffffffff,&local_90,&local_98);
      __android_log_print(3,"FingerGoodix","---TRANSACTION_FP_SEND_CMD----out_length = %d,%s",
                          (ulonglong)local_98,local_90);
      writeInt32(param_4);
      if (local_90 != (longlong *)0x0) {
        write(pcVar11,(ulong)local_90);
        free(local_90);
      }
      uVar4 = 0;
      writeInt32(param_4);
      free(__ptr_00);
    }
    goto LAB_0011dde0;
  case 0x22:
    __android_log_print(3,"FingerGoodix","server,save regist");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      writeNoException();
      pcVar12 = *(code **)(*plVar3 + 0x130);
      goto LAB_0011e17c;
    }
    break;
  case 0x23:
    uVar4 = 0xffffffff;
    __android_log_print(3,"FingerGoodix","server, gfCmdM");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) == 0) goto LAB_0011dde0;
    __ptr_00 = (void *)0x0;
    uVar4 = readInt32();
    uVar6 = readInt32();
    uVar7 = readInt32();
    __size_00 = (size_t)(uVar6 & 0xffffffff);
    if (0 < (int)__size_00) {
      __ptr_00 = malloc(__size_00);
      read(param_3,(ulong)__ptr_00);
    }
    __size_00 = (size_t)(uVar7 & 0xffffffff);
    __ptr = (undefined8 *)0x0;
    if (0 < (int)__size_00) {
      __ptr = (undefined8 *)malloc(__size_00);
    }
    local_90 = (longlong *)((ulonglong)local_90._4_4_ << 0x20);
    (**(code **)(*plVar3 + 0x148))
              (plVar3,uVar4 & 0xffffffff,__ptr_00,uVar6 & 0xffffffff,__ptr,uVar7 & 0xffffffff);
    writeNoException();
    writeInt32(param_4);
    writeInt32(param_4);
    if (0 < (int)(uint)local_90) {
      write(pcVar11,(ulong)__ptr);
    }
    if (__ptr_00 != (void *)0x0) {
      free(__ptr_00);
    }
    if (__ptr == (undefined8 *)0x0) {
      uVar4 = 0;
      goto LAB_0011dde0;
    }
LAB_0011eac8:
    uVar4 = 0;
    free(__ptr);
    goto LAB_0011dde0;
  case 0x24:
    __android_log_print(3,"FingerGoodix","server,set_user_id");
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      writeNoException();
      pcVar12 = *(code **)(*plVar3 + 0x70);
      uVar5 = readInt64();
      goto LAB_0011df00;
    }
    break;
  case 0x25:
    uVar4 = 0xffffffff;
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      local_88[0] = (void *)0x0;
      local_88[1] = 0;
      local_88[2] = 0;
      local_88[3] = 0;
      local_88[4] = 0;
      uStack96 = 0;
      local_58 = 0;
      uStack80 = 0;
      local_48 = 0;
      uStack64 = 0;
      local_38 = 0;
      uStack48 = 0;
      local_28 = 0;
      uStack32 = 0;
      local_18 = 0;
      uStack16 = 0;
      iVar1 = readInt32();
      if (iVar1 < 1) {
        uVar4 = 0;
        writeNoException();
        (**(code **)(*plVar3 + 0x60))(plVar3,local_88);
        writeInt32(param_4);
        writeInt32(param_4);
      }
      else {
        uVar4 = 0;
        uVar10 = (ulong)local_88;
        read(param_3,uVar10);
        writeNoException();
        (**(code **)(*plVar3 + 0x60))(plVar3,local_88);
        writeInt32(param_4);
        writeInt32(param_4);
        write(pcVar11,uVar10);
      }
    }
    goto LAB_0011dde0;
  case 0x26:
    uVar2 = checkInterface((IBinder *)param_3);
    if ((uVar2 & 0xff) != 0) {
      __ptr_00 = (void *)0x0;
      __size_00 = readInt32();
      if (__size_00 != 0) {
        __ptr_00 = malloc(__size_00);
        read(param_3,(ulong)__ptr_00);
      }
      uVar4 = 0;
      __android_log_print(3,"FingerGoodix","server,set fpdb to data");
      writeNoException();
      (**(code **)(*plVar3 + 0x68))(plVar3,__ptr_00);
      writeInt32(param_4);
      free(__ptr_00);
      goto LAB_0011dde0;
    }
    break;
  default:
    uVar4 = onTransact(param_1 + 8,param_2,param_3,param_4);
    uVar4 = uVar4 & 0xffffffff;
    goto LAB_0011dde0;
  }
  uVar4 = 0xffffffff;
LAB_0011dde0:
  if (local_8 == __stack_chk_guard) {
    return uVar4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// non-virtual thunk to android::BnFingerPrint::onTransact(unsigned int, android::Parcel const&,
// android::Parcel*, unsigned int)

void onTransact(uint param_1,Parcel *param_2,Parcel *param_3,uint param_4)

{
  onTransact(param_1 - 8,param_2,param_3,param_4);
  return;
}



// BpFingerPrint::getFpTemplateList(unsigned int*, unsigned int*, char**)

ulonglong __thiscall
getFpTemplateList(BpFingerPrint *this,uint *param_1,uint *param_2,char **param_3)

{
  uint uVar1;
  ulonglong uVar2;
  char *pcVar3;
  ulonglong uVar4;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,getFpTemplateList");
  if ((param_2 == (uint *)0x0 || param_3 == (char **)0x0) || (param_1 == (uint *)0x0)) {
    __android_log_print(6,"FingerGoodix","some of the params is NULL,just return");
    uVar4 = 0xffffffff;
  }
  else {
    Parcel(aPStack216);
    Parcel(aPStack112);
    _ZNK7android12IFingerPrint22getInterfaceDescriptorEv();
    writeInterfaceToken((String16 *)aPStack216);
    (**(code **)(**(longlong **)(this + 0x10) + 0x28))
              (*(longlong **)(this + 0x10),0x1a,aPStack216,aPStack112,0);
    readExceptionCode();
    uVar2 = readInt32();
    uVar4 = uVar2 & 0xffffffff;
    if ((int)uVar2 == 0) {
      uVar1 = readInt32();
      *param_1 = uVar1;
      __android_log_print(3,"FingerGoodix","success to getFpTemplate,count:%d");
      if ((*param_1 != 0) && (read(aPStack112,(ulong)param_2), *param_1 != 0)) {
        uVar2 = 0;
        do {
          pcVar3 = (char *)readCString();
          *param_3 = pcVar3;
          __android_log_print(3,"FingerGoodix","pNameList[%d] is %s",uVar2);
          uVar1 = (int)uVar2 + 1;
          uVar2 = (ulonglong)uVar1;
          param_3 = param_3 + 1;
        } while (uVar1 < *param_1);
      }
    }
    else {
      __android_log_print(6,"FingerGoodix","failed to getFpTemplateList");
      *param_1 = 0;
    }
    __android_log_print(3,"FingerGoodix","return from getFpTemplateList");
    _Parcel(aPStack112);
    _Parcel(aPStack216);
  }
  if (local_8 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar4;
}



// android::IFingerPrint::IFingerPrint()

void __thiscall IFingerPrint(IFingerPrint *this)

{
  longlong lVar1;
  longlong *in_x1;
  
  IInterface((IInterface *)this);
  lVar1 = *in_x1;
  *(longlong *)this = lVar1;
  *(longlong *)(this + *(longlong *)(lVar1 + -0x18)) = in_x1[3];
  return;
}



// android::IFingerPrint::IFingerPrint()

void __thiscall IFingerPrint(IFingerPrint *this)

{
  RefBase((RefBase *)(this + 8));
  IInterface((IInterface *)this);
  *(undefined8 *)this = 0x1431f8;
  *(undefined8 *)(this + 8) = 0x143380;
  return;
}



// android::IFingerPrint::~IFingerPrint()

void __thiscall _IFingerPrint(IFingerPrint *this)

{
  longlong *in_x1;
  longlong lVar1;
  
  lVar1 = *in_x1;
  *(longlong *)this = lVar1;
  *(longlong *)(this + *(longlong *)(lVar1 + -0x18)) = in_x1[3];
  _IInterface((IInterface *)this);
  return;
}



// BpFingerPrint::~BpFingerPrint()

void __thiscall _BpFingerPrint(BpFingerPrint *this)

{
  *(undefined8 *)this = 0x142cb8;
  *(undefined8 *)(this + 0x28) = 0x142e80;
  *(undefined8 *)(this + 8) = 0x142e20;
  _BpRefBase((BpRefBase *)(this + 8));
  _IFingerPrint((IFingerPrint *)this);
  _RefBase((RefBase *)(this + 0x28));
  return;
}



// non-virtual thunk to BpFingerPrint::~BpFingerPrint()

void __thiscall _BpFingerPrint(BpFingerPrint *this)

{
  _BpFingerPrint(this + -8);
  return;
}



// virtual thunk to BpFingerPrint::~BpFingerPrint()

void __thiscall _BpFingerPrint(BpFingerPrint *this)

{
  _BpFingerPrint(this + *(longlong *)(*(longlong *)this + -0x18));
  return;
}



// BpFingerPrint::~BpFingerPrint()

void __thiscall _BpFingerPrint(BpFingerPrint *this)

{
  *(undefined8 *)this = 0x142cb8;
  *(undefined8 *)(this + 0x28) = 0x142e80;
  *(undefined8 *)(this + 8) = 0x142e20;
  _BpRefBase((BpRefBase *)(this + 8));
  _IFingerPrint((IFingerPrint *)this);
  _RefBase((RefBase *)(this + 0x28));
  _ZdlPv(this);
  return;
}



// non-virtual thunk to BpFingerPrint::~BpFingerPrint()

void __thiscall _BpFingerPrint(BpFingerPrint *this)

{
  _BpFingerPrint(this + -8);
  return;
}



// virtual thunk to BpFingerPrint::~BpFingerPrint()

void __thiscall _BpFingerPrint(BpFingerPrint *this)

{
  _BpFingerPrint(this + *(longlong *)(*(longlong *)this + -0x18));
  return;
}



// android::IFingerPrint::asInterface(android::sp<android::IBinder> const&)

void asInterface(sp *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  longlong *this;
  longlong *plVar3;
  longlong **in_x8;
  longlong *local_10;
  
  lVar1 = __stack_chk_guard;
  ppcVar2 = *(code ***)param_1;
  *in_x8 = (longlong *)0x0;
  if (ppcVar2 != (code **)0x0) {
    (**(code **)*ppcVar2)(ppcVar2,&descriptor);
    if (local_10 != (longlong *)0x0) {
      incStrong((void *)((longlong)local_10 + *(longlong *)(*local_10 + -0x18)));
    }
    this = *in_x8;
    if (this != (longlong *)0x0) {
      decStrong((void *)((longlong)this + *(longlong *)(*this + -0x18)));
    }
    *in_x8 = local_10;
    if (local_10 != (longlong *)0x0) {
      decStrong((void *)((longlong)local_10 + *(longlong *)(*local_10 + -0x18)));
      local_10 = *in_x8;
    }
    if (local_10 == (longlong *)0x0) {
      this = (longlong *)operator_new(0x38);
      RefBase((RefBase *)(this + 5));
      IFingerPrint((IFingerPrint *)this);
      BpRefBase((BpRefBase *)(this + 1),(sp *)&PTR_DAT_00142ee0);
      *this = 0x142f28;
      this[5] = 0x1430f0;
      this[1] = 0x143090;
      incStrong(this + 5);
      plVar3 = *in_x8;
      if (plVar3 != (longlong *)0x0) {
        decStrong((void *)((longlong)plVar3 + *(longlong *)(*plVar3 + -0x18)));
      }
      *in_x8 = this;
    }
  }
  if (lVar1 == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// android::IFingerPrint::~IFingerPrint()

void __thiscall _IFingerPrint(IFingerPrint *this)

{
  *(undefined8 *)this = 0x1431f8;
  *(undefined8 *)(this + 8) = 0x143380;
  _IInterface((IInterface *)this);
  _RefBase((RefBase *)(this + 8));
  return;
}



// virtual thunk to android::IFingerPrint::~IFingerPrint()

void __thiscall _IFingerPrint(IFingerPrint *this)

{
  _IFingerPrint(this + *(longlong *)(*(longlong *)this + -0x18));
  return;
}



// android::IFingerPrint::~IFingerPrint()

void __thiscall _IFingerPrint(IFingerPrint *this)

{
  _IFingerPrint(this);
  _ZdlPv(this);
  return;
}



// virtual thunk to android::IFingerPrint::~IFingerPrint()

void __thiscall _IFingerPrint(IFingerPrint *this)

{
  _IFingerPrint(this + *(longlong *)(*(longlong *)this + -0x18));
  return;
}



// android::IFingerPrintClient::getInterfaceDescriptor() const

undefined8 * __thiscall getInterfaceDescriptor(IFingerPrintClient *this)

{
  return &descriptor;
}



// android::BnInterface<android::IFingerPrintClient>::onAsBinder()

BnInterface_android__IFingerPrintClient_ * __thiscall
onAsBinder(BnInterface_android__IFingerPrintClient_ *this)

{
  return this + 8;
}



// android::BnInterface<android::IFingerPrintClient>::getInterfaceDescriptor() const

undefined8 * __thiscall getInterfaceDescriptor(BnInterface_android__IFingerPrintClient_ *this)

{
  return &descriptor;
}



// non-virtual thunk to android::BnInterface<android::IFingerPrintClient>::getInterfaceDescriptor()
// const

void __thiscall getInterfaceDescriptor(BnInterface_android__IFingerPrintClient_ *this)

{
  getInterfaceDescriptor(this + -8);
  return;
}



// android::BpInterface<android::IFingerPrintClient>::onAsBinder()

undefined8 __thiscall onAsBinder(BpInterface_android__IFingerPrintClient_ *this)

{
  return *(undefined8 *)(this + 0x10);
}



// BpFingerPrintClient::dataCallback(int, int, char*)

void __thiscall dataCallback(BpFingerPrintClient *this,int param_1,int param_2,char *param_3)

{
  int iVar1;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client dataCallback,type is %d.",(ulonglong)(uint)param_1);
  Parcel(aPStack216);
  Parcel(aPStack112);
  getInterfaceDescriptor((IFingerPrintClient *)this);
  writeInterfaceToken((String16 *)aPStack216);
  iVar1 = (int)aPStack216;
  writeInt32(iVar1);
  if (param_3 == (char *)0x0) {
    __android_log_print(3,"FingerGoodix","dataCallback,msgData is null");
  }
  else {
    writeInt32(iVar1);
    write(aPStack216,(ulong)param_3);
  }
  (**(code **)(**(longlong **)(this + 0x10) + 0x28))
            (*(longlong **)(this + 0x10),2,aPStack216,aPStack112,1);
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrintClient::notifyCallback(int, int, int)

void notifyCallback(int param_1,int param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client notifyCallback");
  Parcel(aPStack216);
  Parcel(aPStack112);
  getInterfaceDescriptor((IFingerPrintClient *)(ulonglong)(uint)param_1);
  writeInterfaceToken((String16 *)aPStack216);
  iVar1 = (int)aPStack216;
  writeInt32(iVar1);
  writeInt32(iVar1);
  writeInt32(iVar1);
  plVar2 = *(longlong **)((IFingerPrintClient *)(ulonglong)(uint)param_1 + 0x10);
  (**(code **)(*plVar2 + 0x28))(plVar2,1,aPStack216,aPStack112,1);
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// android::BnFingerPrintClient::onTransact(unsigned int, android::Parcel const&, android::Parcel*,
// unsigned int)

undefined8 onTransact(uint param_1,Parcel *param_2,Parcel *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  
  plVar3 = (longlong *)(ulonglong)param_1;
  if ((int)param_2 == 1) {
    __android_log_print(3,"FingerGoodix","server,NOTIFY_CALLBACK");
    uVar1 = checkInterface((IBinder *)param_3);
    if ((uVar1 & 0xff) != 0) {
      uVar4 = readInt32();
      uVar6 = readInt32();
      uVar7 = readInt32();
      (**(code **)(*plVar3 + 0x20))(plVar3,uVar4 & 0xffffffff,uVar6 & 0xffffffff,uVar7 & 0xffffffff)
      ;
      return 0;
    }
  }
  else {
    if ((int)param_2 != 2) {
      uVar8 = onTransact(param_1 + 8,param_2,param_3,param_4);
      return uVar8;
    }
    __android_log_print(3,"FingerGoodix","server,DATA_CALLBACK");
    uVar1 = checkInterface((IBinder *)param_3);
    if ((uVar1 & 0xff) != 0) {
      uVar4 = readInt32();
      lVar5 = dataAvail();
      if (lVar5 == 0) {
        uVar8 = 0;
        lVar5 = 0;
      }
      else {
        iVar2 = readInt32();
        lVar5 = (longlong)iVar2;
        uVar8 = readInplace((ulong)param_3);
      }
      (**(code **)(*plVar3 + 0x28))(plVar3,uVar4 & 0xffffffff,lVar5,uVar8);
      return 0;
    }
  }
  return 0xffffffff;
}



// non-virtual thunk to android::BnFingerPrintClient::onTransact(unsigned int, android::Parcel
// const&, android::Parcel*, unsigned int)

void onTransact(uint param_1,Parcel *param_2,Parcel *param_3,uint param_4)

{
  onTransact(param_1 - 8,param_2,param_3,param_4);
  return;
}



// android::BnInterface<android::IFingerPrintClient>::queryLocalInterface(android::String16 const&)

void __thiscall
queryLocalInterface(BnInterface_android__IFingerPrintClient_ *this,String16 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  BnInterface_android__IFingerPrintClient_ **in_x8;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)param_1;
  uVar3 = size();
  uVar1 = descriptor;
  uVar4 = size();
  iVar2 = strzcmp16(uVar5,uVar3,uVar1,uVar4);
  if (iVar2 == 0) {
    *in_x8 = this;
    if (this != (BnInterface_android__IFingerPrintClient_ *)0x0) {
      incStrong(this + *(longlong *)(*(longlong *)this + -0x18));
    }
    return;
  }
  *in_x8 = (BnInterface_android__IFingerPrintClient_ *)0x0;
  return;
}



// non-virtual thunk to
// android::BnInterface<android::IFingerPrintClient>::queryLocalInterface(android::String16 const&)

void __thiscall
queryLocalInterface(BnInterface_android__IFingerPrintClient_ *this,String16 *param_1)

{
  queryLocalInterface(this + -8,param_1);
  return;
}



// android::IFingerPrintClient::IFingerPrintClient()

void __thiscall IFingerPrintClient(IFingerPrintClient *this)

{
  longlong lVar1;
  longlong *in_x1;
  
  IInterface((IInterface *)this);
  lVar1 = *in_x1;
  *(longlong *)this = lVar1;
  *(longlong *)(this + *(longlong *)(lVar1 + -0x18)) = in_x1[3];
  return;
}



// android::IFingerPrintClient::IFingerPrintClient()

void __thiscall IFingerPrintClient(IFingerPrintClient *this)

{
  RefBase((RefBase *)(this + 8));
  IInterface((IInterface *)this);
  *(undefined8 *)this = 0x1442b8;
  *(undefined8 *)(this + 8) = 0x144320;
  return;
}



// android::IFingerPrintClient::~IFingerPrintClient()

void __thiscall _IFingerPrintClient(IFingerPrintClient *this)

{
  longlong *in_x1;
  longlong lVar1;
  
  lVar1 = *in_x1;
  *(longlong *)this = lVar1;
  *(longlong *)(this + *(longlong *)(lVar1 + -0x18)) = in_x1[3];
  _IInterface((IInterface *)this);
  return;
}



// BpFingerPrintClient::~BpFingerPrintClient()

void __thiscall _BpFingerPrintClient(BpFingerPrintClient *this)

{
  *(undefined8 *)this = 0x143fb8;
  *(undefined8 *)(this + 0x28) = 0x144060;
  *(undefined8 *)(this + 8) = 0x144000;
  _BpRefBase((BpRefBase *)(this + 8));
  _IFingerPrintClient((IFingerPrintClient *)this);
  _RefBase((RefBase *)(this + 0x28));
  return;
}



// non-virtual thunk to BpFingerPrintClient::~BpFingerPrintClient()

void __thiscall _BpFingerPrintClient(BpFingerPrintClient *this)

{
  _BpFingerPrintClient(this + -8);
  return;
}



// virtual thunk to BpFingerPrintClient::~BpFingerPrintClient()

void __thiscall _BpFingerPrintClient(BpFingerPrintClient *this)

{
  _BpFingerPrintClient(this + *(longlong *)(*(longlong *)this + -0x18));
  return;
}



// BpFingerPrintClient::~BpFingerPrintClient()

void __thiscall _BpFingerPrintClient(BpFingerPrintClient *this)

{
  *(undefined8 *)this = 0x143fb8;
  *(undefined8 *)(this + 0x28) = 0x144060;
  *(undefined8 *)(this + 8) = 0x144000;
  _BpRefBase((BpRefBase *)(this + 8));
  _IFingerPrintClient((IFingerPrintClient *)this);
  _RefBase((RefBase *)(this + 0x28));
  _ZdlPv(this);
  return;
}



// non-virtual thunk to BpFingerPrintClient::~BpFingerPrintClient()

void __thiscall _BpFingerPrintClient(BpFingerPrintClient *this)

{
  _BpFingerPrintClient(this + -8);
  return;
}



// virtual thunk to BpFingerPrintClient::~BpFingerPrintClient()

void __thiscall _BpFingerPrintClient(BpFingerPrintClient *this)

{
  _BpFingerPrintClient(this + *(longlong *)(*(longlong *)this + -0x18));
  return;
}



// android::IFingerPrintClient::asInterface(android::sp<android::IBinder> const&)

void asInterface(sp *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  longlong *this;
  longlong *plVar3;
  longlong **in_x8;
  longlong *local_10;
  
  lVar1 = __stack_chk_guard;
  ppcVar2 = *(code ***)param_1;
  *in_x8 = (longlong *)0x0;
  if (ppcVar2 != (code **)0x0) {
    (**(code **)*ppcVar2)(ppcVar2,&descriptor);
    if (local_10 != (longlong *)0x0) {
      incStrong((void *)((longlong)local_10 + *(longlong *)(*local_10 + -0x18)));
    }
    this = *in_x8;
    if (this != (longlong *)0x0) {
      decStrong((void *)((longlong)this + *(longlong *)(*this + -0x18)));
    }
    *in_x8 = local_10;
    if (local_10 != (longlong *)0x0) {
      decStrong((void *)((longlong)local_10 + *(longlong *)(*local_10 + -0x18)));
      local_10 = *in_x8;
    }
    if (local_10 == (longlong *)0x0) {
      this = (longlong *)operator_new(0x38);
      RefBase((RefBase *)(this + 5));
      IFingerPrintClient((IFingerPrintClient *)this);
      BpRefBase((BpRefBase *)(this + 1),(sp *)&PTR_DAT_001440c0);
      *this = 0x144108;
      this[5] = 0x1441b0;
      this[1] = 0x144150;
      incStrong(this + 5);
      plVar3 = *in_x8;
      if (plVar3 != (longlong *)0x0) {
        decStrong((void *)((longlong)plVar3 + *(longlong *)(*plVar3 + -0x18)));
      }
      *in_x8 = this;
    }
  }
  if (lVar1 == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// android::IFingerPrintClient::~IFingerPrintClient()

void __thiscall _IFingerPrintClient(IFingerPrintClient *this)

{
  *(undefined8 *)this = 0x1442b8;
  *(undefined8 *)(this + 8) = 0x144320;
  _IInterface((IInterface *)this);
  _RefBase((RefBase *)(this + 8));
  return;
}



// virtual thunk to android::IFingerPrintClient::~IFingerPrintClient()

void __thiscall _IFingerPrintClient(IFingerPrintClient *this)

{
  _IFingerPrintClient(this + *(longlong *)(*(longlong *)this + -0x18));
  return;
}



// android::IFingerPrintClient::~IFingerPrintClient()

void __thiscall _IFingerPrintClient(IFingerPrintClient *this)

{
  _IFingerPrintClient(this);
  _ZdlPv(this);
  return;
}



// virtual thunk to android::IFingerPrintClient::~IFingerPrintClient()

void __thiscall _IFingerPrintClient(IFingerPrintClient *this)

{
  _IFingerPrintClient(this + *(longlong *)(*(longlong *)this + -0x18));
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

undefined8 * _ZNK7android19IFingerPrintService22getInterfaceDescriptorEv(void)

{
  return &descriptor;
}



// android::BpInterface<android::IFingerPrintService>::onAsBinder()

undefined8 __thiscall onAsBinder(BpInterface_android__IFingerPrintService_ *this)

{
  return *(undefined8 *)(this + 0x10);
}



// BpFingerPrintService::connect(android::sp<android::IFingerPrintClient> const&, int)

void connect(sp *param_1,int param_2)

{
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android19IFingerPrintService22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  local_f0 = *(longlong **)(ulonglong)(uint)param_2;
  if (local_f0 != (longlong *)0x0) {
    incStrong((void *)((longlong)local_f0 + *(longlong *)(*local_f0 + -0x18)));
  }
  asBinder((sp *)&local_f0);
  writeStrongBinder((sp *)aPStack216);
  if (local_e8 != (longlong *)0x0) {
    decStrong((void *)((longlong)local_e8 + *(longlong *)(*local_e8 + -0x18)));
  }
  if (local_f0 != (longlong *)0x0) {
    decStrong((void *)((longlong)local_f0 + *(longlong *)(*local_f0 + -0x18)));
  }
  writeInt32((int)aPStack216);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
            (*(longlong **)(param_1 + 0x10),2,aPStack216,aPStack112,0);
  readExceptionCode();
  readStrongBinder();
  asInterface((sp *)&local_e0);
  if (local_e0 != (longlong *)0x0) {
    decStrong((void *)((longlong)local_e0 + *(longlong *)(*local_e0 + -0x18)));
  }
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// BpFingerPrintService::check(int)

ulonglong check(int param_1)

{
  ulonglong uVar1;
  Parcel aPStack216 [104];
  Parcel aPStack112 [104];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","client,check");
  Parcel(aPStack216);
  Parcel(aPStack112);
  _ZNK7android19IFingerPrintService22getInterfaceDescriptorEv();
  writeInterfaceToken((String16 *)aPStack216);
  writeInt32((int)aPStack216);
  (**(code **)(**(longlong **)((ulonglong)(uint)param_1 + 0x10) + 0x28))
            (*(longlong **)((ulonglong)(uint)param_1 + 0x10),1,aPStack216,aPStack112,0);
  readExceptionCode();
  uVar1 = readInt32();
  _Parcel(aPStack112);
  _Parcel(aPStack216);
  if (local_8 == __stack_chk_guard) {
    return uVar1 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// android::BnFingerPrintService::onTransact(unsigned int, android::Parcel const&, android::Parcel*,
// unsigned int)

undefined8 onTransact(uint param_1,Parcel *param_2,Parcel *param_3,uint param_4)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  code *pcVar5;
  longlong *local_28;
  longlong *local_20;
  longlong *local_18;
  longlong *local_10;
  longlong local_8;
  
  plVar2 = (longlong *)(ulonglong)param_1;
  local_8 = __stack_chk_guard;
  if ((int)param_2 == 1) {
    __android_log_print(3,"FingerGoodix","server,check");
    uVar1 = checkInterface((IBinder *)param_3);
    if ((uVar1 & 0xff) == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar4 = readInt32();
      (**(code **)(*plVar2 + 0x20))(plVar2,uVar4 & 0xffffffff);
      writeNoException();
      writeInt32(param_4);
      uVar3 = 0;
    }
  }
  else {
    if ((int)param_2 == 2) {
      __android_log_print(3,"FingerGoodix","server,connect");
      uVar1 = checkInterface((IBinder *)param_3);
      uVar3 = 0xffffffff;
      if ((uVar1 & 0xff) != 0) {
        readStrongBinder();
        asInterface((sp *)&local_10);
        if (local_10 != (longlong *)0x0) {
          decStrong((void *)((longlong)local_10 + *(longlong *)(*local_10 + -0x18)));
        }
        pcVar5 = *(code **)(*plVar2 + 0x28);
        uVar4 = readInt32();
        (*pcVar5)(plVar2,&local_28,uVar4 & 0xffffffff);
        writeNoException();
        local_18 = local_20;
        if (local_20 != (longlong *)0x0) {
          incStrong((void *)((longlong)local_20 + *(longlong *)(*local_20 + -0x18)));
        }
        asBinder((sp *)&local_18);
        writeStrongBinder((sp *)(ulonglong)param_4);
        if (local_10 != (longlong *)0x0) {
          decStrong((void *)((longlong)local_10 + *(longlong *)(*local_10 + -0x18)));
        }
        if (local_18 != (longlong *)0x0) {
          decStrong((void *)((longlong)local_18 + *(longlong *)(*local_18 + -0x18)));
        }
        if (local_20 != (longlong *)0x0) {
          decStrong((void *)((longlong)local_20 + *(longlong *)(*local_20 + -0x18)));
        }
        if (local_28 != (longlong *)0x0) {
          decStrong((void *)((longlong)local_28 + *(longlong *)(*local_28 + -0x18)));
        }
        uVar3 = 0;
      }
    }
    else {
      uVar3 = onTransact(param_1 + 8,param_2,param_3,param_4);
    }
  }
  if (local_8 == __stack_chk_guard) {
    return uVar3;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// non-virtual thunk to android::BnFingerPrintService::onTransact(unsigned int, android::Parcel
// const&, android::Parcel*, unsigned int)

void onTransact(uint param_1,Parcel *param_2,Parcel *param_3,uint param_4)

{
  onTransact(param_1 - 8,param_2,param_3,param_4);
  return;
}



// android::IFingerPrintService::IFingerPrintService()

void __thiscall IFingerPrintService(IFingerPrintService *this)

{
  longlong lVar1;
  longlong *in_x1;
  
  IInterface((IInterface *)this);
  lVar1 = *in_x1;
  *(longlong *)this = lVar1;
  *(longlong *)(this + *(longlong *)(lVar1 + -0x18)) = in_x1[3];
  return;
}



// android::IFingerPrintService::IFingerPrintService()

void __thiscall IFingerPrintService(IFingerPrintService *this)

{
  RefBase((RefBase *)(this + 8));
  IInterface((IInterface *)this);
  *(undefined8 *)this = 0x144ef8;
  *(undefined8 *)(this + 8) = 0x144f60;
  return;
}



// android::IFingerPrintService::~IFingerPrintService()

void __thiscall _IFingerPrintService(IFingerPrintService *this)

{
  longlong *in_x1;
  longlong lVar1;
  
  lVar1 = *in_x1;
  *(longlong *)this = lVar1;
  *(longlong *)(this + *(longlong *)(lVar1 + -0x18)) = in_x1[3];
  _IInterface((IInterface *)this);
  return;
}



// BpFingerPrintService::~BpFingerPrintService()

void __thiscall _BpFingerPrintService(BpFingerPrintService *this)

{
  *(undefined8 *)this = 0x144bf8;
  *(undefined8 *)(this + 0x28) = 0x144ca0;
  *(undefined8 *)(this + 8) = 0x144c40;
  _BpRefBase((BpRefBase *)(this + 8));
  _IFingerPrintService((IFingerPrintService *)this);
  _RefBase((RefBase *)(this + 0x28));
  return;
}



// non-virtual thunk to BpFingerPrintService::~BpFingerPrintService()

void __thiscall _BpFingerPrintService(BpFingerPrintService *this)

{
  _BpFingerPrintService(this + -8);
  return;
}



// virtual thunk to BpFingerPrintService::~BpFingerPrintService()

void __thiscall _BpFingerPrintService(BpFingerPrintService *this)

{
  _BpFingerPrintService(this + *(longlong *)(*(longlong *)this + -0x18));
  return;
}



// BpFingerPrintService::~BpFingerPrintService()

void __thiscall _BpFingerPrintService(BpFingerPrintService *this)

{
  *(undefined8 *)this = 0x144bf8;
  *(undefined8 *)(this + 0x28) = 0x144ca0;
  *(undefined8 *)(this + 8) = 0x144c40;
  _BpRefBase((BpRefBase *)(this + 8));
  _IFingerPrintService((IFingerPrintService *)this);
  _RefBase((RefBase *)(this + 0x28));
  _ZdlPv(this);
  return;
}



// non-virtual thunk to BpFingerPrintService::~BpFingerPrintService()

void __thiscall _BpFingerPrintService(BpFingerPrintService *this)

{
  _BpFingerPrintService(this + -8);
  return;
}



// virtual thunk to BpFingerPrintService::~BpFingerPrintService()

void __thiscall _BpFingerPrintService(BpFingerPrintService *this)

{
  _BpFingerPrintService(this + *(longlong *)(*(longlong *)this + -0x18));
  return;
}



// android::IFingerPrintService::asInterface(android::sp<android::IBinder> const&)

void asInterface(sp *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  longlong *this;
  longlong *plVar3;
  longlong **in_x8;
  longlong *local_10;
  
  lVar1 = __stack_chk_guard;
  ppcVar2 = *(code ***)param_1;
  *in_x8 = (longlong *)0x0;
  if (ppcVar2 != (code **)0x0) {
    (**(code **)*ppcVar2)(ppcVar2,&descriptor);
    if (local_10 != (longlong *)0x0) {
      incStrong((void *)((longlong)local_10 + *(longlong *)(*local_10 + -0x18)));
    }
    this = *in_x8;
    if (this != (longlong *)0x0) {
      decStrong((void *)((longlong)this + *(longlong *)(*this + -0x18)));
    }
    *in_x8 = local_10;
    if (local_10 != (longlong *)0x0) {
      decStrong((void *)((longlong)local_10 + *(longlong *)(*local_10 + -0x18)));
      local_10 = *in_x8;
    }
    if (local_10 == (longlong *)0x0) {
      this = (longlong *)operator_new(0x38);
      RefBase((RefBase *)(this + 5));
      IFingerPrintService((IFingerPrintService *)this);
      BpRefBase((BpRefBase *)(this + 1),(sp *)&PTR_DAT_00144d00);
      *this = 0x144d48;
      this[5] = 0x144df0;
      this[1] = 0x144d90;
      incStrong(this + 5);
      plVar3 = *in_x8;
      if (plVar3 != (longlong *)0x0) {
        decStrong((void *)((longlong)plVar3 + *(longlong *)(*plVar3 + -0x18)));
      }
      *in_x8 = this;
    }
  }
  if (lVar1 == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// android::IFingerPrintService::~IFingerPrintService()

void __thiscall _IFingerPrintService(IFingerPrintService *this)

{
  *(undefined8 *)this = 0x144ef8;
  *(undefined8 *)(this + 8) = 0x144f60;
  _IInterface((IInterface *)this);
  _RefBase((RefBase *)(this + 8));
  return;
}



// virtual thunk to android::IFingerPrintService::~IFingerPrintService()

void __thiscall _IFingerPrintService(IFingerPrintService *this)

{
  _IFingerPrintService(this + *(longlong *)(*(longlong *)this + -0x18));
  return;
}



// android::IFingerPrintService::~IFingerPrintService()

void __thiscall _IFingerPrintService(IFingerPrintService *this)

{
  _IFingerPrintService(this);
  _ZdlPv(this);
  return;
}



// virtual thunk to android::IFingerPrintService::~IFingerPrintService()

void __thiscall _IFingerPrintService(IFingerPrintService *this)

{
  _IFingerPrintService(this + *(longlong *)(*(longlong *)this + -0x18));
  return;
}



undefined8
saveGrayBitmap(undefined8 param_1,void *param_2,size_t param_3,size_t *param_4,char param_5,
              char param_6)

{
  uint uVar1;
  undefined uVar2;
  void *__dest;
  undefined *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined local_440;
  undefined local_43f;
  undefined local_43e;
  undefined local_43d;
  undefined local_436;
  undefined local_435;
  undefined local_432;
  byte local_42e;
  byte local_42a;
  undefined local_426;
  undefined local_424;
  undefined local_40a [1026];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  memset(&local_440,0,0x436);
  __dest = malloc(0xc800);
  if (param_2 == (void *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    local_440 = 0x42;
    local_43d = 0x28;
    local_432 = 0x28;
    local_42e = param_6 + 3U & 0xfc;
    local_42a = param_5 + 3U & 0xfc;
    local_43f = 0x4d;
    uVar5 = 0;
    local_43e = 0x36;
    local_436 = 0x36;
    local_426 = 1;
    local_435 = 4;
    local_424 = 8;
    puVar3 = local_40a;
    do {
      uVar2 = (undefined)uVar5;
      *puVar3 = uVar2;
      uVar1 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar1;
      puVar3[1] = uVar2;
      puVar3[2] = uVar2;
      puVar3 = puVar3 + 4;
    } while (uVar1 != 0x100);
    memcpy(__dest,&local_440,0x436);
    memcpy((void *)((longlong)__dest + 0x436),param_2,param_3);
    if (param_4 + 5 != (size_t *)0x0) {
      memcpy(param_4 + 5,__dest,param_3 + 0x436);
      *param_4 = param_3 + 0x436;
    }
    free(__dest);
    uVar4 = 0;
  }
  if (local_8 == __stack_chk_guard) {
    return uVar4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void writeDataToRecordFile(uint *param_1)

{
  int __fd;
  uint uVar1;
  tm *ptVar2;
  uint local_b8;
  undefined4 local_b4;
  ulonglong local_b0;
  ulonglong local_a8;
  undefined auStack160 [48];
  longlong local_70;
  undefined8 local_20;
  undefined8 uStack24;
  undefined4 local_10;
  undefined local_c;
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix",
                                            
                      "writeDataToRecordFile,shasha: Index = %d , score = %d,id = %d,update=%d,size= %d\n"
                      ,(ulonglong)*param_1,(ulonglong)param_1[1],(ulonglong)param_1[4],
                      (ulonglong)param_1[5],(ulonglong)param_1[0xba]);
  stat("/sdcard/MIUI/debug_log/1.dat",(stat *)auStack160);
  __android_log_print(3,"FingerGoodix","writeDataToRecordFile-->size:%lld\n",local_70);
  if (1000000 < local_70) {
    __android_log_print(3,"FingerGoodix","writeDataToRecordFile:bak");
    remove("/sdcard/MIUI/debug_log/2.dat");
    rename("/sdcard/MIUI/debug_log/1.dat","/sdcard/MIUI/debug_log/2.dat");
  }
  __fd = open("/sdcard/MIUI/debug_log/1.dat",0x441,0x1ff);
  local_10 = 0;
  local_c = 0;
  local_20 = 0;
  uStack24 = 0;
  local_b8 = 0;
  uVar1 = time((time_t *)0x0);
  local_b0 = (ulonglong)uVar1;
  ptVar2 = localtime((time_t *)&local_b0);
  snprintf((char *)&local_20,0x15,"%04d%02d%02d%02d%02d%02d",(ulonglong)(ptVar2->tm_year + 0x76c),
           (ulonglong)(ptVar2->tm_mon + 1),(ulonglong)(uint)ptVar2->tm_mday,
           (ulonglong)(uint)ptVar2->tm_hour,(ulonglong)(uint)ptVar2->tm_min,ptVar2->tm_sec);
  if (param_1[4] == 0) {
    local_b8 = 0;
  }
  else {
    uVar1 = param_1[1];
    param_1[1] = uVar1 + 300;
    if ((param_1[5] == 1) && (0x14a < (int)(uVar1 + 300))) {
      local_b8 = 2;
    }
    else {
      local_b8 = 1;
    }
  }
  if (__fd < 1) {
    __android_log_print(6,"FingerGoodix","%s open file failed","writeDataToRecordFile");
  }
  else {
    uVar1 = atol((char *)&local_20);
    local_a8 = (ulonglong)uVar1;
    local_b4 = 0;
    __android_log_print(3,"FingerGoodix","writeDataToRecordFile-->timestamp:%lld\n",local_a8);
    __android_log_print(3,"FingerGoodix","writeDataToRecordFile-->result:%lld\n",(ulonglong)local_b8
                       );
    __android_log_print(3,"FingerGoodix","writeDataToRecordFile-->verifyScore:%lld\n",
                        (ulonglong)param_1[1]);
    __android_log_print(3,"FingerGoodix","writeDataToRecordFile-->verifyID:%lld\n",
                        (ulonglong)param_1[4]);
    __android_log_print(3,"FingerGoodix","writeDataToRecordFile-->template_size:%lld\n",
                        (ulonglong)param_1[0xba]);
    write(__fd,&local_a8,8);
    write(__fd,&local_b8,4);
    write(__fd,param_1 + 1,4);
    write(__fd,param_1 + 4,4);
    write(__fd,param_1 + 0xba,4);
    write(__fd,&local_b4,4);
    close(__fd);
  }
  if (local_8 == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention yet parameter storage is locked

void _ZdlPv(void *__ptr)

{
  free(__ptr);
  return;
}



void FUN_001212fc(byte *param_1,ulonglong *param_2)

{
  uint uVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  uVar4 = 0;
  do {
    bVar2 = *param_1;
    uVar3 = uVar4 & 0x3f;
    uVar1 = (int)uVar4 + 7;
    uVar4 = (ulonglong)uVar1;
    uVar5 = uVar5 | ((ulonglong)bVar2 & 0x7f) << uVar3;
    param_1 = param_1 + 1;
  } while ((char)bVar2 < '\0');
  if ((uVar1 < 0x40) && ((bVar2 >> 6 & 1) != 0)) {
    uVar5 = -1 << (uVar4 & 0x3f) | uVar5;
  }
  *param_2 = uVar5;
  return;
}



ulonglong * FUN_0012133c(byte param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong *local_8;
  
  if (param_1 != 0x50) {
    switch((uint)param_1 & 0xf) {
    case 0:
    case 4:
    case 0xc:
      puVar3 = param_3 + 1;
      local_8 = (ulonglong *)*param_3;
      break;
    case 1:
      local_8 = (ulonglong *)0x0;
      uVar5 = 0;
      puVar4 = param_3;
      do {
        puVar3 = (ulonglong *)((longlong)puVar4 + 1);
        bVar1 = *(byte *)puVar4;
        uVar2 = uVar5 & 0x3f;
        uVar5 = (ulonglong)((int)uVar5 + 7);
        local_8 = (ulonglong *)((ulonglong)local_8 | ((ulonglong)bVar1 & 0x7f) << uVar2);
        puVar4 = puVar3;
      } while ((char)bVar1 < '\0');
      break;
    case 2:
      puVar3 = (ulonglong *)((longlong)param_3 + 2);
      local_8 = (ulonglong *)(ulonglong)*(ushort *)param_3;
      break;
    case 3:
      puVar3 = (ulonglong *)((longlong)param_3 + 4);
      local_8 = (ulonglong *)(ulonglong)*(uint *)param_3;
      break;
    default:
                    // WARNING: Subroutine does not return
      abort();
    case 9:
      puVar3 = (ulonglong *)FUN_001212fc(param_3,&local_8);
      break;
    case 10:
      puVar3 = (ulonglong *)((longlong)param_3 + 2);
      local_8 = (ulonglong *)(longlong)*(short *)param_3;
      break;
    case 0xb:
      puVar3 = (ulonglong *)((longlong)param_3 + 4);
      local_8 = (ulonglong *)(longlong)(int)*(uint *)param_3;
    }
    if (local_8 != (ulonglong *)0x0) {
      if ((param_1 & 0x70) != 0x10) {
        param_3 = param_2;
      }
      local_8 = (ulonglong *)((longlong)local_8 + (longlong)param_3);
      if ((char)param_1 < '\0') {
        local_8 = (ulonglong *)*local_8;
      }
    }
    *(ulonglong **)param_4 = local_8;
    return puVar3;
  }
  puVar3 = (ulonglong *)((longlong)param_3 + 7U & 0xfffffffffffffff8);
  *param_4 = *puVar3;
  return puVar3 + 1;
}



undefined8 FUN_0012144c(byte param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  if (param_1 == 0xff) {
    return 0;
  }
  bVar1 = param_1 & 0x70;
  if (bVar1 == 0x20) {
    uVar2 = _Unwind_GetTextRelBase(param_2);
    return uVar2;
  }
  if (bVar1 < 0x21) {
    if ((param_1 & 0x70) == 0) {
      return 0;
    }
    if (bVar1 == 0x10) {
      return 0;
    }
  }
  else {
    if (bVar1 == 0x40) {
      uVar2 = _Unwind_GetRegionStart(param_2);
      return uVar2;
    }
    if (bVar1 == 0x50) {
      return 0;
    }
    if (bVar1 == 0x30) {
      uVar2 = _Unwind_GetDataRelBase(param_2);
      return uVar2;
    }
  }
                    // WARNING: Subroutine does not return
  abort();
}



void FUN_001214c8(longlong param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = _Unwind_GetRegionStart();
  }
  *param_3 = uVar3;
  bVar1 = *param_2;
  if (bVar1 == 0xff) {
    param_3[1] = uVar3;
    pbVar4 = param_2 + 2;
    bVar1 = param_2[1];
    *(byte *)(param_3 + 5) = bVar1;
  }
  else {
    uVar3 = FUN_0012144c((ulonglong)bVar1,param_1);
    pbVar5 = (byte *)FUN_0012133c((ulonglong)bVar1,uVar3,param_2 + 1,param_3 + 1);
    pbVar4 = pbVar5 + 1;
    bVar1 = *pbVar5;
    *(byte *)(param_3 + 5) = bVar1;
  }
  if (bVar1 == 0xff) {
    param_3[3] = 0;
  }
  else {
    uVar7 = 0;
    uVar6 = 0;
    pbVar5 = pbVar4;
    do {
      pbVar4 = pbVar5 + 1;
      bVar1 = *pbVar5;
      uVar2 = uVar6 & 0x3f;
      uVar6 = (ulonglong)((int)uVar6 + 7);
      uVar7 = uVar7 | ((ulonglong)bVar1 & 0x7f) << uVar2;
      pbVar5 = pbVar4;
    } while ((char)bVar1 < '\0');
    *(byte **)(param_3 + 3) = pbVar4 + uVar7;
  }
  uVar7 = 0;
  *(byte *)((longlong)param_3 + 0x29) = *pbVar4;
  uVar6 = 0;
  pbVar4 = pbVar4 + 1;
  do {
    pbVar5 = pbVar4 + 1;
    bVar1 = *pbVar4;
    uVar2 = uVar6 & 0x3f;
    uVar6 = (ulonglong)((int)uVar6 + 7);
    uVar7 = uVar7 | ((ulonglong)bVar1 & 0x7f) << uVar2;
    pbVar4 = pbVar5;
  } while ((char)bVar1 < '\0');
  *(byte **)(param_3 + 4) = pbVar5 + uVar7;
  return;
}



ulonglong FUN_001215d4(longlong param_1,longlong *param_2,longlong **param_3,ulonglong param_4)

{
  byte bVar1;
  ulonglong uVar2;
  longlong **pplVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  byte *pbVar8;
  longlong **local_8;
  
  pbVar8 = (byte *)(*(longlong *)(param_1 + 0x18) + ~param_4);
  do {
    uVar6 = 0;
    uVar5 = 0;
    pbVar8 = pbVar8;
    do {
      pbVar8 = pbVar8 + 1;
      bVar1 = *pbVar8;
      uVar2 = uVar5 & 0x3f;
      uVar5 = (ulonglong)((int)uVar5 + 7);
      uVar6 = uVar6 | ((ulonglong)bVar1 & 0x7f) << uVar2;
      pbVar8 = pbVar8;
    } while ((char)bVar1 < '\0');
    if (uVar6 == 0) {
      return 0;
    }
    bVar1 = *(byte *)(param_1 + 0x28);
    if (bVar1 == 0xff) {
      lVar7 = 0;
    }
    else {
      switch((uint)bVar1 & 7) {
      case 0:
      case 4:
        lVar7 = uVar6 * -8;
        break;
      default:
                    // WARNING: Subroutine does not return
        abort();
      case 2:
        lVar7 = uVar6 * -2;
        break;
      case 3:
        lVar7 = uVar6 * -4;
      }
    }
    FUN_0012133c((ulonglong)bVar1,*(undefined8 *)(param_1 + 0x10),
                 *(longlong *)(param_1 + 0x18) + lVar7,&local_8);
    pplVar3 = local_8;
    local_8 = param_3;
    uVar4 = (**(code **)(*param_2 + 0x10))(param_2);
    if ((uVar4 & 0xff) != 0) {
      local_8 = (longlong **)*local_8;
    }
    uVar5 = (*(code *)(*pplVar3)[4])(pplVar3,param_2,&local_8,1);
  } while ((int)(uVar5 & 0xff) == 0);
  return uVar5 & 0xff;
}



undefined8
__gxx_personality_v0
          (int param_1,uint param_2,longlong param_3,ulonglong *param_4,undefined8 param_5)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  FuncDef50 *pFVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined auStack288 [16];
  undefined8 uStack272;
  ulonglong **local_88;
  undefined *local_80;
  uint local_78;
  int local_74;
  undefined **local_70;
  ulonglong **local_68;
  ulonglong local_60;
  byte *local_58;
  int local_4c;
  int local_48;
  undefined4 uStack68;
  longlong local_40;
  ulonglong **local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  byte *local_10;
  byte local_8;
  byte local_7;
  
  local_4c = 0;
  if (param_1 != 1) {
    return 3;
  }
  bVar1 = 1 < param_3 + 0xb8b1aabcbcd4d500U;
  if ((param_2 == 6) <= bVar1) {
    local_60 = _Unwind_GetLanguageSpecificData(param_5);
    if (local_60 == 0) {
      return 8;
    }
    local_58 = (byte *)FUN_001214c8(param_5,local_60,&local_30);
    local_20 = FUN_0012144c((ulonglong)local_8,param_5);
    lVar6 = _Unwind_GetIPInfo(param_5,&local_4c);
    uVar15 = lVar6 - (ulonglong)(local_4c == 0);
    if (local_58 < local_10) {
      pbVar9 = local_58;
      do {
        uVar5 = (ulonglong)local_7;
        local_58 = pbVar9;
        uVar13 = FUN_0012144c(uVar5,0);
        local_58 = (byte *)FUN_0012133c(uVar5,uVar13,local_58,&local_48);
        uVar5 = (ulonglong)local_7;
        uVar13 = FUN_0012144c(uVar5,0);
        local_58 = (byte *)FUN_0012133c(uVar5,uVar13,local_58,&local_40);
        uVar5 = (ulonglong)local_7;
        uVar13 = FUN_0012144c(uVar5,0);
        pbVar9 = (byte *)FUN_0012133c(uVar5,uVar13,local_58,&local_38);
        uVar10 = 0;
        uVar5 = 0;
        do {
          pbVar9 = pbVar9 + 1;
          bVar2 = *pbVar9;
          uVar11 = uVar5 & 0x3f;
          uVar5 = (ulonglong)((int)uVar5 + 7);
          uVar10 = uVar10 | ((ulonglong)bVar2 & 0x7f) << uVar11;
          pbVar9 = pbVar9;
        } while ((char)bVar2 < '\0');
        uVar5 = CONCAT44(uStack68,local_48) + local_30;
        if (uVar15 < uVar5) break;
        if (uVar15 < uVar5 + local_40) {
          if (local_38 == (ulonglong **)0x0) {
            return 8;
          }
          uVar15 = (longlong)local_38 + local_28;
          if (uVar10 == 0) {
            if (uVar15 == 0) {
              return 8;
            }
          }
          else {
            if (uVar15 == 0) {
              return 8;
            }
            local_10 = local_10 + (uVar10 - 1);
            if (local_10 != (byte *)0x0) {
              local_78 = param_2 & 8;
              if ((param_2 >> 3 & 1) == 0) {
                if (bVar1) {
                  local_68 = (ulonglong **)0x0;
                  local_70 = &typeinfo;
                }
                else {
                  local_68 = (ulonglong **)(param_4 + 4);
                  if ((*param_4 & 1) != 0) {
                    local_68 = (ulonglong **)param_4[-10];
                  }
                  local_70 = (undefined **)local_68[-0xe];
                }
              }
              else {
                local_68 = (ulonglong **)0x0;
                local_70 = &typeinfo;
              }
              local_74 = 0;
              local_80 = &DAT_00137c84;
              goto LAB_00121a6c;
            }
          }
          iVar3 = 2;
          goto LAB_00121978;
        }
      } while (pbVar9 < local_10);
    }
    uVar15 = 0;
    iVar3 = 1;
LAB_00121978:
    local_68 = (ulonglong **)0x0;
    local_48 = 0;
    local_10 = (byte *)0x0;
    goto LAB_00121984;
  }
  local_60 = param_4[-3];
  uVar15 = param_4[-2];
  local_48 = *(int *)((longlong)param_4 + -0x24);
  if (uVar15 == 0) {
    if ((param_2 >> 3 & 1) != 0) {
                    // WARNING: Subroutine does not return
      terminate();
    }
LAB_001217ac:
    FUN_001224dc(param_4);
  }
  if ((param_2 >> 3 & 1) == 0) {
LAB_00121818:
    if (local_48 < 0) {
      FUN_001214c8(param_5,local_60,&local_30);
      local_20 = FUN_0012144c((ulonglong)local_8,param_5);
      uVar5 = FUN_0012144c((ulonglong)local_8,param_5);
      param_4[-2] = uVar5;
    }
    goto LAB_001217bc;
  }
  goto LAB_001217b8;
LAB_00121a6c:
  local_58 = (byte *)FUN_001212fc(local_10,&local_48);
  FUN_001212fc(local_58,&local_40);
  uVar5 = CONCAT44(uStack68,local_48);
  if (uVar5 == 0) {
    local_74 = 1;
  }
  else {
    if ((longlong)uVar5 < 1) {
      if (bVar1 < (local_70 != (undefined **)0x0 && local_78 == 0)) {
        uVar4 = FUN_001215d4(&local_30,local_70,local_68);
        uVar4 = uVar4 & 0xff ^ 1;
      }
      else {
        uVar11 = 0;
        uVar10 = 0;
        pbVar9 = (byte *)(local_18 + ~uVar5);
        do {
          bVar2 = *pbVar9;
          uVar5 = uVar10 & 0x3f;
          uVar10 = (ulonglong)((int)uVar10 + 7);
          uVar11 = uVar11 | ((ulonglong)bVar2 & 0x7f) << uVar5;
          pbVar9 = pbVar9 + 1;
        } while ((char)bVar2 < '\0');
        uVar4 = (uint)(uVar11 == 0);
      }
      if (uVar4 != 0) {
LAB_00121bd0:
        iVar3 = 3;
        goto LAB_00121984;
      }
    }
    else {
      if (local_8 != 0xff) {
        if (((uint)local_8 & 7) < 5) {
                    // WARNING: Could not recover jumptable at 0x00121b40. Too many branches
                    // WARNING: Treating indirect jump as call
          uVar13 = (*(code *)(&UNK_00121b44 + (longlong)(char)local_80[(uint)local_8 & 7] * 4))();
          return uVar13;
        }
                    // WARNING: Subroutine does not return
        abort();
      }
      FUN_0012133c((ulonglong)local_8,local_20,local_18,&local_38);
      if (local_38 == (ulonglong **)0x0) goto LAB_00121bd0;
      if (local_70 != (undefined **)0x0) {
        local_88 = local_38;
        local_38 = local_68;
        uVar4 = (**(code **)(*local_70 + 0x10))(local_70);
        if ((uVar4 & 0xff) != 0) {
          local_38 = (ulonglong **)*local_38;
        }
        uVar4 = (*(code *)(*local_88)[4])(local_88,local_70,&local_38,1);
        if ((uVar4 & 0xff) != 0) {
          local_68 = local_38;
          goto LAB_00121bd0;
        }
      }
    }
  }
  if (local_40 == 0) goto LAB_00121c24;
  local_10 = local_58 + local_40;
  goto LAB_00121a6c;
LAB_00121c24:
  if (local_74 == 0) {
    return 8;
  }
  local_48 = 0;
  iVar3 = 2;
LAB_00121984:
  if ((param_2 & 1) != 0) {
    if (iVar3 == 2) {
      return 8;
    }
    if (!bVar1) {
      param_4[-3] = local_60;
      *(int *)((longlong)param_4 + -0x24) = local_48;
      *(byte **)(param_4 + -4) = local_10;
      *(ulonglong ***)(param_4 + -1) = local_68;
      param_4[-2] = uVar15;
      return 6;
    }
    return 6;
  }
  if (((param_2 >> 3 & 1) == 0) && (!bVar1)) {
    if (iVar3 == 1) goto LAB_001217ac;
    goto LAB_00121818;
  }
  if (iVar3 == 1) {
                    // WARNING: Subroutine does not return
    terminate();
  }
LAB_001217b8:
  if (local_48 < 0) {
    lVar6 = unexpected();
    __cxa_begin_catch();
    uStack272 = *(undefined8 *)(lVar6 + -0x10);
    uVar13 = *(undefined8 *)(lVar6 + -0x18);
    iVar3 = *(int *)(lVar6 + -0x24);
    pFVar12 = *(FuncDef50 **)(lVar6 + -0x38);
    __unexpected(*(FuncDef52 **)(lVar6 + -0x40));
    __cxa_begin_catch();
    plVar7 = (longlong *)__cxa_get_globals_fast();
    puVar8 = (undefined8 *)*plVar7;
    puVar14 = puVar8 + 0xe;
    if ((puVar8[10] & 1) != 0) {
      puVar14 = (undefined8 *)*puVar8;
    }
    FUN_001214c8(0,uVar13,auStack288);
    uVar4 = FUN_001215d4(auStack288,puVar14[-0xe],puVar14,(longlong)iVar3);
    if ((uVar4 & 0xff) == 0) {
      uVar4 = FUN_001215d4(auStack288,&typeinfo,0,(longlong)iVar3);
      if ((uVar4 & 0xff) == 0) {
                    // WARNING: Subroutine does not return
        __terminate(pFVar12);
      }
      puVar14 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar14 = 0x145730;
                    // WARNING: Subroutine does not return
      __cxa_throw(puVar14,&typeinfo,_bad_exception);
    }
    uVar13 = __cxa_rethrow();
    __cxa_end_catch();
    __cxa_end_catch();
                    // WARNING: Subroutine does not return
    _Unwind_Resume(uVar13);
  }
LAB_001217bc:
  _Unwind_SetGR(param_5,0,param_4);
  _Unwind_SetGR(param_5,1,(longlong)local_48);
  _Unwind_SetIP(param_5,uVar15);
  return 7;
}



void __cxa_call_unexpected(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  FuncDef50 *pFVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined auStack48 [16];
  undefined8 local_20;
  
  __cxa_begin_catch();
  local_20 = *(undefined8 *)(param_1 + -0x10);
  uVar6 = *(undefined8 *)(param_1 + -0x18);
  iVar1 = *(int *)(param_1 + -0x24);
  pFVar5 = *(FuncDef50 **)(param_1 + -0x38);
  __unexpected(*(FuncDef52 **)(param_1 + -0x40));
  __cxa_begin_catch();
  plVar3 = (longlong *)__cxa_get_globals_fast();
  puVar4 = (undefined8 *)*plVar3;
  puVar7 = puVar4 + 0xe;
  if ((puVar4[10] & 1) != 0) {
    puVar7 = (undefined8 *)*puVar4;
  }
  FUN_001214c8(0,uVar6,auStack48);
  uVar2 = FUN_001215d4(auStack48,puVar7[-0xe],puVar7,(longlong)iVar1);
  if ((uVar2 & 0xff) != 0) {
    uVar6 = __cxa_rethrow();
    __cxa_end_catch();
    __cxa_end_catch();
                    // WARNING: Subroutine does not return
    _Unwind_Resume(uVar6);
  }
  uVar2 = FUN_001215d4(auStack48,&typeinfo,0,(longlong)iVar1);
  if ((uVar2 & 0xff) != 0) {
    puVar7 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar7 = 0x145730;
                    // WARNING: Subroutine does not return
    __cxa_throw(puVar7,&typeinfo,_bad_exception);
  }
                    // WARNING: Subroutine does not return
  __terminate(pFVar5);
}



// __cxxabiv1::__terminate(void (*)())

void __terminate(FuncDef50 *param_1)

{
  (*param_1)();
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::set_terminate(void (*)())

undefined * set_terminate(FuncDef51 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  do {
    puVar3 = __terminate_handler;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(&__terminate_handler,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      __terminate_handler = param_1;
    }
  } while (cVar1 != '\0');
  return puVar3;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::get_terminate()

undefined * get_terminate(void)

{
  return __terminate_handler;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::terminate()

void terminate(void)

{
  FuncDef50 *pFVar1;
  
  pFVar1 = (FuncDef50 *)get_terminate();
                    // WARNING: Subroutine does not return
  __terminate(pFVar1);
}



// __cxxabiv1::__unexpected(void (*)())

void __unexpected(FuncDef52 *param_1)

{
  (*param_1)();
                    // WARNING: Subroutine does not return
  terminate();
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::set_unexpected(void (*)())

undefined * set_unexpected(FuncDef53 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  do {
    puVar3 = __unexpected_handler;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(&__unexpected_handler,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      __unexpected_handler = param_1;
    }
  } while (cVar1 != '\0');
  return puVar3;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::get_unexpected()

undefined * get_unexpected(void)

{
  return __unexpected_handler;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::unexpected()

void unexpected(void)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  FuncDef52 *pFVar5;
  int *piVar6;
  longlong in_x1;
  
  pFVar5 = (FuncDef52 *)get_unexpected();
  uVar4 = __unexpected(pFVar5);
  if (1 < uVar4) {
                    // WARNING: Subroutine does not return
    __terminate(*(FuncDef50 **)(in_x1 + -0x38));
  }
  piVar6 = (int *)(in_x1 + -0x60);
  do {
    iVar1 = *piVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
    if (bVar3) {
      *piVar6 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 == 0) {
    if (*(code **)(in_x1 + -0x48) != (code *)0x0) {
      (**(code **)(in_x1 + -0x48))(in_x1 + 0x20);
    }
    __cxa_free_exception(in_x1 + 0x20);
    return;
  }
  return;
}



void __cxa_throw(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __cxa_get_globals();
  *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  *(undefined8 *)(param_1 + -0x68) = param_3;
  *(undefined8 *)(param_1 + -0x70) = param_2;
  *(undefined4 *)(param_1 + -0x80) = 1;
  uVar2 = get_unexpected();
  *(undefined8 *)(param_1 + -0x60) = uVar2;
  uVar2 = get_terminate();
  *(undefined8 *)(param_1 + -0x58) = uVar2;
  *(undefined8 *)(param_1 + -0x20) = 0x474e5543432b2b00;
  *(undefined8 *)(param_1 + -0x18) = 0x121e04;
  _Unwind_RaiseException(param_1 + -0x20);
  __cxa_begin_catch(param_1 + -0x20);
                    // WARNING: Subroutine does not return
  terminate();
}



void __cxa_rethrow(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)__cxa_get_globals();
  lVar2 = *plVar1;
  *(int *)(plVar1 + 1) = *(int *)(plVar1 + 1) + 1;
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x50) + 0xb8b1aabcbcd4d500U < 2) {
      *(int *)(lVar2 + 0x28) = -*(int *)(lVar2 + 0x28);
    }
    else {
      *plVar1 = 0;
    }
    _Unwind_Resume_or_Rethrow(lVar2 + 0x50);
    __cxa_begin_catch(lVar2 + 0x50);
  }
                    // WARNING: Subroutine does not return
  terminate();
}



// operator new(unsigned long)

void * operator_new(ulong param_1)

{
  void *pvVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  pvVar1 = malloc(param_1);
  while( true ) {
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    pcVar2 = (code *)get_new_handler();
    if (pcVar2 == (code *)0x0) break;
    (*pcVar2)();
    pvVar1 = malloc(param_1);
  }
  puVar3 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar3 = 0x145650;
                    // WARNING: Subroutine does not return
  __cxa_throw(puVar3,&typeinfo,_bad_alloc);
}



void __cxa_pure_virtual(void)

{
  write(2,"pure virtual method called\n",0x1b);
                    // WARNING: Subroutine does not return
  terminate();
}



void __cxa_deleted_virtual(void)

{
  write(2,"deleted virtual method called\n",0x1e);
                    // WARNING: Subroutine does not return
  terminate();
}



// std::bad_alloc::what() const

char * what(void)

{
  return "std::bad_alloc";
}



// std::bad_alloc::~bad_alloc()

void __thiscall _bad_alloc(bad_alloc *this)

{
  *(undefined8 *)this = 0x145650;
  _exception((exception *)this);
  return;
}



// std::bad_alloc::~bad_alloc()

void __thiscall _bad_alloc(bad_alloc *this)

{
  _bad_alloc(this);
  _ZdlPv(this);
  return;
}



void FUN_001220f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar1 = 0x140830;
                    // WARNING: Subroutine does not return
  __cxa_throw(puVar1,&PTR_PTR____si_class_type_info_00145670,&LAB_00122070);
}



void FUN_00122120(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar1 = 0x140860;
                    // WARNING: Subroutine does not return
  __cxa_throw(puVar1,&PTR_PTR____si_class_type_info_00145688,&LAB_00122080);
}



undefined8 * __cxa_allocate_exception(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  puVar4 = (undefined8 *)malloc((size_t)(param_1 + 0x80U));
  if (puVar4 != (undefined8 *)0x0) {
LAB_00122174:
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    return puVar4 + 0x10;
  }
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00147f70);
  if (iVar2 == 0) {
    if (param_1 + 0x80U < 0x401) {
      uVar5 = 0;
      uVar3 = DAT_00157fa0;
      do {
        if ((uVar3 & 1) == 0) {
          uVar3 = 1 << (uVar5 & 0x3f) | DAT_00157fa0;
          puVar4 = &DAT_00147fa0 + uVar5 * 0x80;
          DAT_00157fa0 = uVar3;
          iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00147f70);
          if (iVar2 == 0) goto LAB_00122174;
          FUN_00122120();
          if (uVar3 != 0xffffffffffffffff) {
                    // WARNING: Subroutine does not return
            _Unwind_Resume();
          }
          goto LAB_00122240;
        }
        uVar1 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar1;
        uVar3 = uVar3 >> 1;
      } while (uVar1 != 0x40);
    }
                    // WARNING: Subroutine does not return
    terminate();
  }
  FUN_001220f0();
LAB_00122240:
                    // WARNING: Subroutine does not return
  __cxa_call_unexpected();
}



void FUN_00122244(undefined8 param_1,longlong param_2)

{
  if (param_2 != -1) {
                    // WARNING: Subroutine does not return
    _Unwind_Resume();
  }
                    // WARNING: Subroutine does not return
  __cxa_call_unexpected();
}



// WARNING: Removing unreachable block (ram,0x001222d4)

void __cxa_free_exception(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = &DAT_00147fa0;
  if ((param_1 < &DAT_00147fa0) || ((undefined8 *)0x157f9f < param_1)) {
    free(param_1 + -0x10);
    return;
  }
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00147f70);
  if (iVar1 == 0) {
    puVar2 = DAT_00157fa0;
    DAT_00157fa0 = (undefined8 *)
                   ((ulonglong)DAT_00157fa0 &
                   (1 << ((ulonglong)(param_1 + -0x28ff4) >> 10 & 0x3f) ^ 0xffffffffffffffffU));
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00147f70);
    if (iVar1 == 0) {
      return;
    }
    FUN_00122120();
  }
  else {
    FUN_001220f0();
  }
  if (puVar2 == (undefined8 *)0xffffffffffffffff) {
                    // WARNING: Subroutine does not return
    __cxa_call_unexpected();
  }
                    // WARNING: Subroutine does not return
  _Unwind_Resume();
}



undefined8 * __cxa_allocate_dependent_exception(undefined8 param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)malloc(0x70);
  if (puVar4 != (undefined8 *)0x0) {
LAB_00122330:
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    return puVar4;
  }
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00147f70);
  if (iVar2 == 0) {
    param_2 = 0;
    uVar3 = DAT_00146360;
    while ((uVar3 & 1) != 0) {
      uVar1 = (int)param_2 + 1;
      param_2 = (ulonglong)uVar1;
      uVar3 = uVar3 >> 1;
      if (uVar1 == 0x40) {
                    // WARNING: Subroutine does not return
        terminate();
      }
    }
    DAT_00146360 = 1 << (param_2 & 0x3f) | DAT_00146360;
    puVar4 = &DAT_00146370 + param_2 * 0xe;
    iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00147f70);
    if (iVar2 == 0) goto LAB_00122330;
    FUN_00122120();
  }
  FUN_001220f0();
  if (param_2 == 0xffffffffffffffff) {
                    // WARNING: Subroutine does not return
    __cxa_call_unexpected();
  }
                    // WARNING: Subroutine does not return
  _Unwind_Resume();
}



// WARNING: Removing unreachable block (ram,0x0012249c)

void __cxa_free_dependent_exception(undefined8 *param_1)

{
  int iVar1;
  code *pcVar2;
  
  if ((param_1 < &DAT_00146370) || ((undefined8 *)0x147f6f < param_1)) {
    free(param_1);
    return;
  }
  pcVar2 = pthread_create;
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00147f70);
  if (iVar1 == 0) {
    pcVar2 = DAT_00146360;
    DAT_00146360 = (code *)((ulonglong)DAT_00146360 &
                           (1 << (SUB168(ZEXT416((int)param_1 - 0x146370U >> 4) *
                                         ZEXT816(0x2492492492492494) >> 0x40,0) & 0x3f) ^
                           0xffffffffffffffffU));
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00147f70);
    if (iVar1 == 0) {
      return;
    }
    FUN_00122120();
  }
  else {
    FUN_001220f0();
  }
  if (pcVar2 == (code *)0xffffffffffffffff) {
                    // WARNING: Subroutine does not return
    __cxa_call_unexpected();
  }
                    // WARNING: Subroutine does not return
  _Unwind_Resume();
}



void FUN_001224dc(longlong *param_1)

{
  if ((param_1 != (longlong *)0x0) && (__cxa_begin_catch(), *param_1 + 0xb8b1aabcbcd4d500U < 2)) {
                    // WARNING: Subroutine does not return
    __terminate((FuncDef50 *)param_1[-7]);
  }
                    // WARNING: Subroutine does not return
  terminate();
}



undefined8 __cxa_get_exception_ptr(longlong param_1)

{
  return *(undefined8 *)(param_1 + -8);
}



longlong __cxa_begin_catch(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong **pplVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  pplVar3 = (longlong **)__cxa_get_globals();
  plVar5 = *pplVar3;
  plVar4 = param_1 + -10;
  if (*param_1 + 0xb8b1aabcbcd4d500U < 2) {
    iVar2 = *(int *)(param_1 + -5);
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    iVar1 = *(int *)(pplVar3 + 1);
    *(int *)(param_1 + -5) = iVar2 + 1;
    *(int *)(pplVar3 + 1) = iVar1 + -1;
    if (plVar5 != plVar4) {
      *(longlong **)(param_1 + -6) = plVar5;
      *pplVar3 = plVar4;
    }
    return param_1[-1];
  }
  if (plVar5 == (longlong *)0x0) {
    *pplVar3 = plVar4;
    return 0;
  }
                    // WARNING: Subroutine does not return
  terminate();
}



void __cxa_end_catch(void)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  plVar1 = (longlong *)__cxa_get_globals_fast();
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    if (1 < *(longlong *)(lVar2 + 0x50) + 0xb8b1aabcbcd4d500U) {
      *plVar1 = 0;
      _Unwind_DeleteException(lVar2 + 0x50);
      return;
    }
    iVar3 = *(int *)(lVar2 + 0x28);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 1;
      if (iVar3 == 0) {
        *plVar1 = *(longlong *)(lVar2 + 0x20);
        *(undefined4 *)(lVar2 + 0x28) = 0;
        return;
      }
    }
    else {
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        *plVar1 = *(longlong *)(lVar2 + 0x20);
        _Unwind_DeleteException(lVar2 + 0x50);
        return;
      }
      if (iVar3 == -1) {
                    // WARNING: Subroutine does not return
        terminate();
      }
    }
    *(int *)(lVar2 + 0x28) = iVar3;
  }
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::uncaught_exception()

ulonglong uncaught_exception(void)

{
  longlong lVar1;
  
  lVar1 = __cxa_get_globals();
  return (ulonglong)(*(int *)(lVar1 + 8) != 0);
}



// std::exception::~exception()

void __thiscall _exception(exception *this)

{
  return;
}



// std::bad_exception::~bad_exception()

void __thiscall _bad_exception(bad_exception *this)

{
  *(undefined8 *)this = 0x145730;
  _exception((exception *)this);
  return;
}



// std::exception::what() const

char * what(void)

{
  return "std::exception";
}



// std::bad_exception::what() const

char * what(void)

{
  return "std::bad_exception";
}



// std::exception::~exception()

void __thiscall _exception(exception *this)

{
  _exception(this);
  _ZdlPv(this);
  return;
}



// std::bad_exception::~bad_exception()

void __thiscall _bad_exception(bad_exception *this)

{
  _bad_exception(this);
  _ZdlPv(this);
  return;
}



// __cxxabiv1::__forced_unwind::~__forced_unwind()

void __thiscall ___forced_unwind(__forced_unwind *this)

{
  return;
}



// __cxxabiv1::__forced_unwind::~__forced_unwind()

void __thiscall ___forced_unwind(__forced_unwind *this)

{
  ___forced_unwind(this);
  _ZdlPv(this);
  return;
}



// __cxxabiv1::__foreign_exception::~__foreign_exception()

void __thiscall ___foreign_exception(__foreign_exception *this)

{
  return;
}



// __cxxabiv1::__foreign_exception::~__foreign_exception()

void __thiscall ___foreign_exception(__foreign_exception *this)

{
  ___foreign_exception(this);
  _ZdlPv(this);
  return;
}



undefined * __cxa_get_globals_fast(void)

{
  void *pvVar1;
  
  if (DAT_00157fac == '\0') {
    return &DAT_00157fb0;
  }
  pvVar1 = pthread_getspecific(DAT_00157fa8);
  return (undefined *)pvVar1;
}



undefined8 * __cxa_get_globals(void)

{
  int iVar1;
  undefined8 *__pointer;
  
  if (DAT_00157fac == '\0') {
    __pointer = (undefined8 *)&DAT_00157fb0;
  }
  else {
    __pointer = (undefined8 *)pthread_getspecific(DAT_00157fa8);
    if (__pointer == (undefined8 *)0x0) {
      __pointer = (undefined8 *)malloc(0x10);
      if ((__pointer == (undefined8 *)0x0) ||
         (iVar1 = pthread_setspecific(DAT_00157fa8,__pointer), iVar1 != 0)) {
                    // WARNING: Subroutine does not return
        terminate();
      }
      *__pointer = 0;
      *(undefined4 *)(__pointer + 1) = 0;
    }
  }
  return __pointer;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::set_new_handler(void (*)())

FuncDef54 * set_new_handler(FuncDef54 *param_1)

{
  char cVar1;
  bool bVar2;
  FuncDef54 *pFVar3;
  
  do {
    pFVar3 = DAT_00157fc0;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x157fc0,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_00157fc0 = param_1;
    }
  } while (cVar1 != '\0');
  return pFVar3;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::get_new_handler()

undefined8 get_new_handler(void)

{
  return DAT_00157fc0;
}



// __cxxabiv1::__si_class_type_info::~__si_class_type_info()

void __thiscall ___si_class_type_info(__si_class_type_info *this)

{
  *(undefined8 *)this = 0x1457e0;
  ___class_type_info((__class_type_info *)this);
  return;
}



// __cxxabiv1::__si_class_type_info::~__si_class_type_info()

void __thiscall ___si_class_type_info(__si_class_type_info *this)

{
  ___si_class_type_info(this);
  _ZdlPv(this);
  return;
}



// WARNING: Removing unreachable block (ram,0x001229bc)
// WARNING: Removing unreachable block (ram,0x001229c8)
// __cxxabiv1::__si_class_type_info::__do_dyncast(long, __cxxabiv1::__class_type_info::__sub_kind,
// __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void
// const*, __cxxabiv1::__class_type_info::__dyncast_result&) const

ulonglong __thiscall
__do_dyncast(__si_class_type_info *this,long param_1,__sub_kind param_2,__class_type_info *param_3,
            void *param_4,__class_type_info *param_5,void *param_6,__dyncast_result *param_7)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  char *__s1;
  
  __s1 = *(char **)(this + 8);
  if ((__s1 == *(char **)(param_3 + 8)) ||
     ((cVar1 = *__s1, cVar1 != '*' && (iVar2 = strcmp(__s1,*(char **)(param_3 + 8)), iVar2 == 0))))
  {
    *(void **)param_7 = param_4;
    *(__sub_kind *)(param_7 + 8) = param_2;
    uVar4 = 6;
    if (param_6 != (void *)((longlong)param_4 + (ulonglong)(uint)param_1)) {
      uVar4 = 1;
    }
    *(undefined4 *)(param_7 + 0x10) = uVar4;
    return 0;
  }
  if ((param_4 == param_6) &&
     ((__s1 == *(char **)(param_5 + 8) ||
      ((cVar1 != '*' && (iVar2 = strcmp(__s1,*(char **)(param_5 + 8)), iVar2 == 0)))))) {
    *(__sub_kind *)(param_7 + 0xc) = param_2;
    return 0;
  }
  uVar3 = (**(code **)(**(longlong **)(this + 0x10) + 0x38))
                    (*(longlong **)(this + 0x10),(ulonglong)(uint)param_1,(ulonglong)param_2,param_3
                     ,param_4,param_5,param_6);
  return uVar3 & 0xff;
}



// __cxxabiv1::__si_class_type_info::__do_find_public_src(long, void const*,
// __cxxabiv1::__class_type_info const*, void const*) const

ulonglong __thiscall
__do_find_public_src
          (__si_class_type_info *this,long param_1,void *param_2,__class_type_info *param_3,
          void *param_4)

{
  int iVar1;
  ulonglong uVar2;
  char *__s1;
  
  if (param_4 == param_2) {
    __s1 = *(char **)(this + 8);
    if (__s1 == *(char **)(param_3 + 8)) {
      return 6;
    }
    if ((*__s1 != '*') && (iVar1 = strcmp(__s1,*(char **)(param_3 + 8)), iVar1 == 0)) {
      return 6;
    }
  }
  uVar2 = (**(code **)(**(longlong **)(this + 0x10) + 0x40))
                    (*(longlong **)(this + 0x10),(ulonglong)(uint)param_1,param_2,param_3,param_4);
  return uVar2 & 0xffffffff;
}



// __cxxabiv1::__si_class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*,
// __cxxabiv1::__class_type_info::__upcast_result&) const

ulonglong __thiscall
__do_upcast(__si_class_type_info *this,__class_type_info *param_1,void *param_2,
           __upcast_result *param_3)

{
  ulonglong uVar1;
  
  uVar1 = __do_upcast((__class_type_info *)this,param_1,param_2,param_3);
  uVar1 = uVar1 & 0xff;
  if ((int)uVar1 == 0) {
    uVar1 = (**(code **)(**(longlong **)(this + 0x10) + 0x30))
                      (*(longlong **)(this + 0x10),param_1,param_2,param_3);
    uVar1 = uVar1 & 0xff;
  }
  return uVar1;
}



ulonglong FUN_00122b50(longlong param_1,longlong param_2)

{
  int iVar1;
  char *__s1;
  
  __s1 = *(char **)(param_1 + 8);
  if (__s1 == *(char **)(param_2 + 8)) {
    return 1;
  }
  if (*__s1 != '*') {
    iVar1 = strcmp(__s1,*(char **)(param_2 + 8));
    return (ulonglong)(iVar1 == 0);
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00122c90)
// WARNING: Removing unreachable block (ram,0x00122d24)
// WARNING: Removing unreachable block (ram,0x00122ca4)
// __gnu_cxx::__verbose_terminate_handler()

void __verbose_terminate_handler(void)

{
  longlong lVar1;
  char *__s;
  char *__s_00;
  size_t __n;
  
  if (DAT_00157fc8 == '\0') {
    DAT_00157fc8 = '\x01';
    lVar1 = __cxa_current_exception_type();
    if (lVar1 != 0) {
      __s = *(char **)(lVar1 + 8);
      if (*__s == '*') {
        __s = __s + 1;
      }
      __s_00 = (char *)__cxa_demangle(__s,0,0);
      fwrite("terminate called after throwing an instance of \'",1,0x30,(FILE *)sem_init);
      fputs(__s,(FILE *)sem_init);
      do {
        fwrite(&DAT_00137ee8,1,2,(FILE *)sem_init);
        __cxa_rethrow();
        fputs(__s_00,(FILE *)sem_init);
      } while( true );
    }
    __s = "terminate called without an active exception\n";
    __n = 0x2d;
  }
  else {
    __n = 0x1d;
    __s = "terminate called recursively\n";
  }
  fwrite(__s,1,__n,(FILE *)sem_init);
                    // WARNING: Subroutine does not return
  abort();
}



// __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void**) const

ulonglong __thiscall __do_upcast(__class_type_info *this,__class_type_info *param_1,void **param_2)

{
  bool bVar1;
  void *local_18;
  uint local_10;
  undefined4 local_c;
  undefined8 local_8;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  local_c = 0x10;
  local_8 = 0;
  (**(code **)(*(longlong *)this + 0x30))(this,param_1,*param_2,&local_18);
  bVar1 = (local_10 & 6) == 6;
  if (bVar1) {
    *param_2 = local_18;
  }
  return (ulonglong)bVar1;
}



// __cxxabiv1::__class_type_info::__do_find_public_src(long, void const*,
// __cxxabiv1::__class_type_info const*, void const*) const

ulonglong __thiscall
__do_find_public_src
          (__class_type_info *this,long param_1,void *param_2,__class_type_info *param_3,
          void *param_4)

{
  uint uVar1;
  
  uVar1 = 6;
  if (param_4 != param_2) {
    uVar1 = 1;
  }
  return (ulonglong)uVar1;
}



// __cxxabiv1::__class_type_info::~__class_type_info()

void __thiscall ___class_type_info(__class_type_info *this)

{
  *(undefined8 *)this = 0x145870;
  return;
}



// __cxxabiv1::__class_type_info::~__class_type_info()

void __thiscall ___class_type_info(__class_type_info *this)

{
  ___class_type_info(this);
  _ZdlPv(this);
  return;
}



// __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*,
// __cxxabiv1::__class_type_info::__upcast_result&) const

undefined8 __thiscall
__do_upcast(__class_type_info *this,__class_type_info *param_1,void *param_2,
           __upcast_result *param_3)

{
  int iVar1;
  char *__s1;
  
  __s1 = *(char **)(this + 8);
  if (__s1 != *(char **)(param_1 + 8)) {
    if (*__s1 != '*') {
      iVar1 = strcmp(__s1,*(char **)(param_1 + 8));
      if (iVar1 == 0) goto LAB_00122e24;
    }
    return 0;
  }
LAB_00122e24:
  *(void **)param_3 = param_2;
  *(undefined8 *)(param_3 + 0x10) = 0x10;
  *(undefined4 *)(param_3 + 8) = 6;
  return 1;
}



// __cxxabiv1::__class_type_info::__do_catch(std::type_info const*, void**, unsigned int) const

ulonglong __thiscall
__do_catch(__class_type_info *this,type_info *param_1,void **param_2,uint param_3)

{
  int iVar1;
  ulonglong uVar2;
  char *__s1;
  
  __s1 = *(char **)(this + 8);
  if (__s1 == *(char **)(param_1 + 8)) {
    return 1;
  }
  if ((*__s1 != '*') && (iVar1 = strcmp(__s1,*(char **)(param_1 + 8)), iVar1 == 0)) {
    return 1;
  }
  if (3 < param_3) {
    return 0;
  }
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1,this,param_2);
  return uVar2 & 0xff;
}



// __cxxabiv1::__class_type_info::__do_dyncast(long, __cxxabiv1::__class_type_info::__sub_kind,
// __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void
// const*, __cxxabiv1::__class_type_info::__dyncast_result&) const

undefined8 __thiscall
__do_dyncast(__class_type_info *this,long param_1,__sub_kind param_2,__class_type_info *param_3,
            void *param_4,__class_type_info *param_5,void *param_6,__dyncast_result *param_7)

{
  int iVar1;
  char *__s2;
  char *__s1;
  
  __s1 = *(char **)(this + 8);
  if (param_4 == param_6) {
    if (__s1 == *(char **)(param_5 + 8)) {
LAB_00122fd0:
      *(__sub_kind *)(param_7 + 0xc) = param_2;
      return 0;
    }
    if (*__s1 == '*') {
      if (__s1 != *(char **)(param_3 + 8)) {
        return 0;
      }
      goto LAB_00122fb0;
    }
    iVar1 = strcmp(__s1,*(char **)(param_5 + 8));
    if (iVar1 == 0) goto LAB_00122fd0;
    __s2 = *(char **)(param_3 + 8);
    if (__s1 == __s2) goto LAB_00122fb0;
  }
  else {
    __s2 = *(char **)(param_3 + 8);
    if (__s1 == __s2) goto LAB_00122fb0;
    if (*__s1 == '*') {
      return 0;
    }
  }
  iVar1 = strcmp(__s1,__s2);
  if (iVar1 != 0) {
    return 0;
  }
LAB_00122fb0:
  *(void **)param_7 = param_4;
  *(__sub_kind *)(param_7 + 8) = param_2;
  *(undefined4 *)(param_7 + 0x10) = 1;
  return 0;
}



longlong FUN_00122ff4(longlong param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  
  switch(param_2) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 0xb:
  case 0x21:
  case 0x2b:
  case 0x2d:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3c:
  case 0x3d:
  case 0x3f:
  case 0x4b:
  case 0x4c:
    if (param_3 == 0) {
      return 0;
    }
switchD_00123020_caseD_2a:
    if ((param_4 != 0) && (iVar2 = *(int *)(param_1 + 0x28), iVar2 < *(int *)(param_1 + 0x2c))) {
LAB_0012303c:
      *(int *)(param_1 + 0x28) = iVar2 + 1;
      lVar1 = *(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 0x18;
      if (lVar1 != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 0x18) = param_2;
        *(longlong *)(lVar1 + 8) = param_3;
        *(longlong *)(lVar1 + 0x10) = param_4;
        return lVar1;
      }
    }
LAB_00123004:
    return 0;
  default:
    goto LAB_00123004;
  case 9:
  case 10:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x28:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x3b:
  case 0x3e:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x48:
  case 0x49:
  case 0x4a:
    if (param_3 == 0) {
      return 0;
    }
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x29:
  case 0x2e:
  case 0x2f:
    iVar2 = *(int *)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x2c) <= iVar2) {
      return 0;
    }
    goto LAB_0012303c;
  case 0x2a:
  case 0x30:
    goto switchD_00123020_caseD_2a;
  }
}



longlong FUN_00123094(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 < *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x28) = iVar2 + 1;
    lVar1 = *(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 0x18;
    if ((lVar1 != 0 && param_2 != 0) && (param_3 != 0)) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 0x18) = 0;
      *(longlong *)(lVar1 + 8) = param_2;
      *(int *)(lVar1 + 0x10) = param_3;
      return lVar1;
    }
  }
  return 0;
}



int ** FUN_001230f4(longlong param_1,int **param_2,int param_3)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int *piVar4;
  uint uVar5;
  int **ppiVar6;
  
  pcVar3 = *(char **)(param_1 + 0x18);
  cVar2 = *pcVar3;
  ppiVar6 = param_2;
  do {
    if ((cVar2 == 'V') || (cVar2 == 'r')) {
      *(char **)(param_1 + 0x18) = pcVar3 + 1;
      if (cVar2 != 'r') {
        if (cVar2 != 'V') goto LAB_00123158;
        uVar5 = 0x1d;
        if (param_3 == 0) {
          uVar5 = 0x1a;
        }
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 9;
        goto LAB_0012316c;
      }
      uVar5 = 0x1c;
      if (param_3 == 0) {
        uVar5 = 0x19;
      }
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 9;
      piVar4 = (int *)FUN_00122ff4(param_1,(ulonglong)uVar5,0,0);
      *ppiVar6 = piVar4;
    }
    else {
      if (cVar2 != 'K') {
        if (((param_3 == 0) && (cVar2 == 'F')) && (param_2 != ppiVar6)) {
          do {
            piVar4 = *param_2;
            iVar1 = *piVar4;
            if (iVar1 == 0x1a) {
              *piVar4 = 0x1d;
            }
            else {
              if (iVar1 == 0x1b) {
                *piVar4 = 0x1e;
              }
              else {
                if (iVar1 == 0x19) {
                  *piVar4 = 0x1c;
                }
              }
            }
            param_2 = (int **)(piVar4 + 2);
          } while (param_2 != ppiVar6);
        }
        return ppiVar6;
      }
      *(char **)(param_1 + 0x18) = pcVar3 + 1;
LAB_00123158:
      uVar5 = 0x1e;
      if (param_3 == 0) {
        uVar5 = 0x1b;
      }
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 6;
LAB_0012316c:
      piVar4 = (int *)FUN_00122ff4(param_1,(ulonglong)uVar5,0,0);
      *ppiVar6 = piVar4;
    }
    if (piVar4 == (int *)0x0) {
      return (int **)0;
    }
    pcVar3 = *(char **)(param_1 + 0x18);
    ppiVar6 = (int **)(piVar4 + 2);
    cVar2 = *pcVar3;
  } while( true );
}



longlong FUN_001232a4(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  byte bVar5;
  int iVar6;
  char *pcVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  
  pcVar7 = *(char **)(param_1 + 0x18);
  if (*pcVar7 != 'S') {
    return 0;
  }
  *(char **)(param_1 + 0x18) = pcVar7 + 1;
  if (pcVar7[1] != '\0') {
    *(char **)(param_1 + 0x18) = pcVar7 + 2;
    bVar5 = pcVar7[1];
    uVar8 = (ulonglong)bVar5;
    uVar14 = (uint)bVar5 - 0x30;
    if (((uVar14 & 0xff) < 10) || (bVar5 == 0x5f)) {
      if (bVar5 == 0x5f) {
        uVar3 = 0;
        goto LAB_001233e0;
      }
    }
    else {
      if (0x19 < (byte)(bVar5 + 0xbf)) goto LAB_00123370;
    }
    uVar10 = 0;
    do {
      iVar6 = (int)uVar8;
      uVar3 = (uVar10 * 0x24 + iVar6) - 0x37;
      if ((uVar14 & 0xff) < 10) {
        uVar3 = (uVar10 * 0x24 + iVar6) - 0x30;
      }
      else {
        if (0x19 < (iVar6 - 0x41U & 0xff)) {
          return 0;
        }
      }
      uVar8 = 0;
      if (uVar3 < uVar10) {
        return 0;
      }
      pbVar12 = *(byte **)(param_1 + 0x18);
      if (*pbVar12 != 0) {
        *(byte **)(param_1 + 0x18) = pbVar12 + 1;
        uVar8 = (ulonglong)*pbVar12;
        if (*pbVar12 == 0x5f) goto LAB_001233dc;
      }
      uVar14 = (int)uVar8 - 0x30;
      uVar10 = uVar3;
    } while( true );
  }
  bVar5 = 0;
LAB_00123370:
  uVar14 = *(uint *)(param_1 + 0x10) >> 3 & 1;
  if (uVar14 < (param_2 != 0)) {
    uVar14 = (uint)((byte)(**(char **)(param_1 + 0x18) + 0xbdU) < 2);
  }
  if (bVar5 == 0x74) {
    lVar9 = 0x140ce0;
  }
  else {
    if (bVar5 == 0x61) {
      lVar9 = 0x140d18;
    }
    else {
      if (bVar5 == 0x62) {
        lVar9 = 0x140d50;
      }
      else {
        if (bVar5 == 0x73) {
          lVar9 = 0x140d88;
        }
        else {
          if (bVar5 == 0x69) {
            lVar9 = 0x140dc0;
          }
          else {
            if (bVar5 == 0x6f) {
              lVar9 = 0x140df8;
            }
            else {
              if (bVar5 != 100) {
                return 0;
              }
              lVar9 = 0x140e30;
            }
          }
        }
      }
    }
  }
  lVar16 = *(longlong *)(lVar9 + 0x28);
  if (lVar16 == 0) {
    iVar15 = *(int *)(param_1 + 0x2c);
    iVar6 = *(int *)(param_1 + 0x28);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x28);
    iVar15 = *(int *)(param_1 + 0x2c);
    uVar2 = *(undefined4 *)(lVar9 + 0x30);
    lVar17 = 0;
    if (iVar6 < iVar15) {
      lVar13 = (longlong)iVar6;
      iVar6 = iVar6 + 1;
      *(int *)(param_1 + 0x28) = iVar6;
      lVar1 = *(longlong *)(param_1 + 0x20) + lVar13 * 0x18;
      if (lVar1 != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + lVar13 * 0x18) = 0x18;
        *(longlong *)(lVar1 + 8) = lVar16;
        *(undefined4 *)(lVar1 + 0x10) = uVar2;
        lVar17 = lVar1;
      }
    }
    *(longlong *)(param_1 + 0x48) = lVar17;
  }
  if (uVar14 == 0) {
    uVar4 = *(undefined8 *)(lVar9 + 8);
    iVar11 = *(int *)(lVar9 + 0x10);
  }
  else {
    uVar4 = *(undefined8 *)(lVar9 + 0x18);
    iVar11 = *(int *)(lVar9 + 0x20);
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar11;
  if (iVar15 <= iVar6) {
    return 0;
  }
  *(int *)(param_1 + 0x28) = iVar6 + 1;
  lVar9 = *(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 0x18;
  if (lVar9 != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 0x18) = 0x18;
    *(undefined8 *)(lVar9 + 8) = uVar4;
    *(int *)(lVar9 + 0x10) = iVar11;
    return lVar9;
  }
  return 0;
LAB_001233dc:
  uVar3 = uVar3 + 1;
LAB_001233e0:
  if (*(uint *)(param_1 + 0x38) <= uVar3) {
    return 0;
  }
  uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + (ulonglong)uVar3 * 8);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  return uVar4;
}



void FUN_00123564(int *param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  if (param_3 == (undefined4 *)0x0) {
switchD_001235b8_caseD_5:
    return;
  }
  do {
    switch(*param_3) {
    case 1:
    case 2:
    case 3:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x25:
    case 0x26:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x42:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
switchD_001235b8_caseD_1:
      piVar1 = *(int **)(param_3 + 2);
      break;
    case 4:
      *param_1 = *param_1 + 1;
      piVar1 = *(int **)(param_3 + 2);
      break;
    default:
      goto switchD_001235b8_caseD_5;
    case 7:
    case 8:
    case 0x32:
      param_3 = *(undefined4 **)(param_3 + 4);
      goto joined_r0x001235d8;
    case 0x23:
    case 0x24:
      piVar1 = *(int **)(param_3 + 2);
      if (*piVar1 == 5) {
        *param_2 = *param_2 + 1;
        goto switchD_001235b8_caseD_1;
      }
      break;
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
      param_3 = *(undefined4 **)(param_3 + 2);
      goto joined_r0x001235d8;
    }
    FUN_00123564(param_1,param_2,piVar1);
    param_3 = *(undefined4 **)(param_3 + 4);
joined_r0x001235d8:
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
  } while( true );
}



void FUN_00123630(undefined *param_1,undefined param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x100);
  if (lVar1 != 0xff) {
    *(longlong *)(param_1 + 0x100) = lVar1 + 1;
    param_1[lVar1] = param_2;
    param_1[0x108] = param_2;
    return;
  }
  param_1[0xff] = 0;
  (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
  *(undefined8 *)(param_1 + 0x100) = 1;
  *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
  *param_1 = param_2;
  param_1[0x108] = param_2;
  return;
}



longlong FUN_001236a8(byte **param_1)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  pbVar3 = *param_1;
  bVar1 = *pbVar3;
  bVar2 = bVar1 == 0x6e;
  if (bVar2) {
    *param_1 = pbVar3 + 1;
    uVar6 = 0xffffffffffffffff;
    bVar1 = pbVar3[1];
  }
  else {
    uVar6 = 0;
  }
  if ((byte)(bVar1 - 0x30) < 10) {
    pbVar3 = *param_1;
    uVar4 = 0;
    do {
      pbVar3 = pbVar3 + 1;
      uVar5 = (ulonglong)bVar1;
      *param_1 = pbVar3;
      bVar1 = *pbVar3;
      uVar4 = (uVar4 * 10 + uVar5) - 0x30;
    } while ((byte)(bVar1 - 0x30) < 10);
  }
  else {
    uVar4 = 0;
  }
  return (uVar4 ^ uVar6) + (ulonglong)bVar2;
}



longlong FUN_00123730(longlong param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x120);
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x130) = 1;
  }
  else {
    piVar3 = *(int **)(*(longlong *)(lVar5 + 8) + 0x10);
    uVar2 = *param_2 & 0xffffffff;
    if ((piVar3 != (int *)0x0) && (*piVar3 == 0x2f)) {
      iVar4 = (int)*param_2;
      if (iVar4 < 1) {
        if (iVar4 != 0) {
          return 0;
        }
      }
      else {
        do {
          piVar3 = *(int **)(piVar3 + 4);
          uVar1 = (int)uVar2 - 1;
          uVar2 = (ulonglong)uVar1;
          if ((piVar3 == (int *)0x0) || (*piVar3 != 0x2f)) goto LAB_00123780;
        } while (uVar1 != 0);
      }
      return *(undefined8 *)(piVar3 + 2);
    }
LAB_00123780:
    lVar5 = 0;
  }
  return lVar5;
}



int * FUN_001237ac(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  int *piVar2;
  
  if (param_2 != (undefined4 *)0x0) {
    do {
      switch(*param_2) {
      case 0:
      case 6:
      case 0x18:
      case 0x27:
      case 0x31:
      case 0x40:
      case 0x45:
      case 0x47:
      case 0x4a:
      case 0x4b:
        goto LAB_001237f8;
      case 5:
        piVar2 = (int *)FUN_00123730(param_1,param_2 + 2);
        if ((piVar2 != (int *)0x0) && (*piVar2 == 0x2f)) {
          return piVar2;
        }
        goto LAB_001237f8;
      case 7:
      case 8:
      case 0x32:
        goto switchD_00123814_caseD_7;
      }
      lVar1 = FUN_001237ac(param_1,*(undefined8 *)(param_2 + 2));
      if (lVar1 != 0) {
        return (int *)lVar1;
      }
switchD_00123814_caseD_7:
      param_2 = *(undefined4 **)(param_2 + 4);
    } while (param_2 != (undefined4 *)0x0);
  }
LAB_001237f8:
  return (int *)0;
}



void FUN_00123844(void *param_1,longlong param_2,void **param_3)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = param_3[2];
  pvVar1 = (void *)((longlong)param_3[1] + param_2 + 1);
  if (pvVar2 < pvVar1) {
    if (*(int *)(param_3 + 3) != 0) {
      return;
    }
    if ((pvVar2 != (void *)0x0) || (pvVar2 = (void *)0x2, (void *)0x2 < pvVar1)) {
      do {
        pvVar2 = (void *)((longlong)pvVar2 * 2);
      } while (pvVar2 < pvVar1);
    }
    pvVar1 = realloc(*param_3,(size_t)pvVar2);
    if (pvVar1 == (void *)0x0) {
      free(*param_3);
      *param_3 = (void *)0x0;
      param_3[1] = (void *)0x0;
      param_3[2] = (void *)0x0;
      *(undefined4 *)(param_3 + 3) = 1;
      return;
    }
    *param_3 = pvVar1;
    param_3[2] = pvVar2;
  }
  if (*(int *)(param_3 + 3) != 0) {
    return;
  }
  memcpy((void *)((longlong)*param_3 + (longlong)param_3[1]),param_1,(size_t)param_2);
  *(undefined *)((longlong)*param_3 + param_2 + (longlong)param_3[1]) = 0;
  param_3[1] = (void *)((longlong)param_3[1] + param_2);
  return;
}



void FUN_00123934(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  size_t sVar3;
  longlong lVar4;
  
  sVar3 = strlen(param_2);
  if (sVar3 != 0) {
    pcVar1 = param_2 + sVar3;
    lVar4 = *(longlong *)(param_1 + 0x100);
    do {
      while (cVar2 = *param_2, lVar4 == 0xff) {
        param_2 = param_2 + 1;
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(undefined8 *)(param_1 + 0x100) = 1;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        *param_1 = cVar2;
        param_1[0x108] = cVar2;
        lVar4 = 1;
        if (param_2 == pcVar1) {
          return;
        }
      }
      *(longlong *)(param_1 + 0x100) = lVar4 + 1;
      param_2 = param_2 + 1;
      param_1[lVar4] = cVar2;
      param_1[0x108] = cVar2;
      lVar4 = lVar4 + 1;
    } while (param_2 != pcVar1);
  }
  return;
}



longlong FUN_001239e8(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  void *__s1;
  
  lVar4 = (longlong)param_2;
  __s1 = *(void **)(param_1 + 0x18);
  if (lVar4 <= *(longlong *)(param_1 + 8) - (longlong)__s1) {
    *(longlong *)(param_1 + 0x18) = (longlong)__s1 + lVar4;
    if (((*(uint *)(param_1 + 0x10) >> 2 & 1) != 0) && (*(char *)((longlong)__s1 + lVar4) == '$')) {
      *(longlong *)(param_1 + 0x18) = (longlong)__s1 + lVar4 + 1;
    }
    if ((((9 < param_2) && (iVar2 = memcmp(__s1,"_GLOBAL_",8), iVar2 == 0)) &&
        ((cVar1 = *(char *)((longlong)__s1 + 8), cVar1 == '_' || cVar1 == '.' || (cVar1 == '$'))))
       && (*(char *)((longlong)__s1 + 9) == 'N')) {
      *(int *)(param_1 + 0x50) = (*(int *)(param_1 + 0x50) + 0x16) - param_2;
      uVar3 = FUN_00123094(param_1,"(anonymous namespace)",0x15);
      return uVar3;
    }
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 < *(int *)(param_1 + 0x2c)) {
      *(int *)(param_1 + 0x28) = iVar2 + 1;
      lVar4 = *(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 0x18;
      if ((param_2 != 0 && __s1 != (void *)0x0) && (lVar4 != 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 0x18) = 0;
        *(void **)(lVar4 + 8) = __s1;
        *(int *)(lVar4 + 0x10) = param_2;
        return lVar4;
      }
    }
  }
  return 0;
}



void FUN_00123b3c(char *param_1,undefined8 param_2)

{
  char cVar1;
  size_t sVar2;
  longlong lVar3;
  ulonglong uVar4;
  char local_20 [32];
  
  sprintf(local_20,"%ld",param_2);
  sVar2 = strlen(local_20);
  if (sVar2 != 0) {
    uVar4 = 0;
    lVar3 = *(longlong *)(param_1 + 0x100);
    do {
      while (cVar1 = local_20[uVar4], lVar3 == 0xff) {
        uVar4 = uVar4 + 1;
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(undefined8 *)(param_1 + 0x100) = 1;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        *param_1 = cVar1;
        param_1[0x108] = cVar1;
        lVar3 = 1;
        if (uVar4 == (ulonglong)sVar2) {
          return;
        }
      }
      *(longlong *)(param_1 + 0x100) = lVar3 + 1;
      uVar4 = uVar4 + 1;
      param_1[lVar3] = cVar1;
      param_1[0x108] = cVar1;
      lVar3 = lVar3 + 1;
    } while (uVar4 != (ulonglong)sVar2);
  }
  return;
}



undefined8 FUN_00123c08(longlong param_1)

{
  byte bVar1;
  bool bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  pbVar4 = *(byte **)(param_1 + 0x18);
  bVar1 = *pbVar4;
  bVar2 = bVar1 == 0x6e;
  if (bVar2) {
    *(byte **)(param_1 + 0x18) = pbVar4 + 1;
    bVar1 = pbVar4[1];
  }
  if ((byte)(bVar1 - 0x30) < 10) {
    pbVar4 = *(byte **)(param_1 + 0x18);
    lVar5 = 0;
    do {
      pbVar4 = pbVar4 + 1;
      uVar6 = (ulonglong)bVar1;
      *(byte **)(param_1 + 0x18) = pbVar4;
      bVar1 = *pbVar4;
      lVar5 = lVar5 * 10 + uVar6 + -0x30;
    } while ((byte)(bVar1 - 0x30) < 10);
    if ((0 < lVar5) && (!bVar2)) {
      uVar3 = FUN_001239e8();
      *(undefined8 *)(param_1 + 0x48) = uVar3;
      return uVar3;
    }
  }
  return 0;
}



longlong FUN_00123cb0(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  byte *pbVar4;
  
  pbVar4 = *(byte **)(param_1 + 0x18);
  bVar1 = *pbVar4;
  if (bVar1 != 0x5f) {
    if ((bVar1 != 0x6e) && ((byte)(bVar1 - 0x30) < 10)) {
      lVar2 = 0;
      do {
        pbVar4 = pbVar4 + 1;
        *(byte **)(param_1 + 0x18) = pbVar4;
        lVar3 = lVar2 * 10 + (ulonglong)bVar1;
        bVar1 = *pbVar4;
        lVar2 = lVar3 + -0x30;
      } while ((byte)(bVar1 - 0x30) < 10);
      lVar3 = lVar3 + -0x2f;
      if (bVar1 == 0x5f) goto LAB_00123d2c;
    }
    return 0xffffffffffffffff;
  }
  lVar3 = 0;
LAB_00123d2c:
  *(byte **)(param_1 + 0x18) = pbVar4 + 1;
  return lVar3;
}



ulonglong FUN_00123d3c(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  bool bVar3;
  char *pcVar4;
  longlong lVar5;
  byte *pbVar6;
  
  pcVar4 = *(char **)(param_1 + 0x18);
  if (*pcVar4 == '_') {
    pbVar6 = (byte *)(pcVar4 + 1);
    *(byte **)(param_1 + 0x18) = pbVar6;
    bVar2 = pcVar4[1];
    if (bVar2 == 0x6e) {
      pbVar6 = (byte *)(pcVar4 + 2);
      *(byte **)(param_1 + 0x18) = pbVar6;
      bVar2 = pcVar4[2];
      if (9 < (byte)(bVar2 - 0x30)) {
        return 1;
      }
      bVar3 = true;
    }
    else {
      if (9 < (byte)(bVar2 - 0x30)) {
        return 1;
      }
      bVar3 = false;
    }
    lVar5 = 0;
    do {
      pbVar6 = pbVar6 + 1;
      *(byte **)(param_1 + 0x18) = pbVar6;
      lVar1 = lVar5 * 10 + (ulonglong)bVar2;
      bVar2 = *pbVar6;
      lVar5 = lVar1 + -0x30;
    } while ((byte)(bVar2 - 0x30) < 10);
    if (bVar3) {
      return lVar1 - 0x31U >> 0x3f;
    }
  }
  return 1;
}



longlong FUN_00123de0(longlong param_1)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  char *pcVar7;
  
  pcVar7 = *(char **)(param_1 + 0x18);
  if (*pcVar7 != 'T') {
    return 0;
  }
  pbVar6 = (byte *)(pcVar7 + 1);
  *(byte **)(param_1 + 0x18) = pbVar6;
  bVar2 = pcVar7[1];
  if (bVar2 == 0x5f) {
    lVar5 = 0;
  }
  else {
    if (bVar2 == 0x6e) {
      return 0;
    }
    if (9 < (byte)(bVar2 - 0x30)) {
      return 0;
    }
    lVar4 = 0;
    pbVar3 = (byte *)(pcVar7 + 2);
    do {
      pbVar6 = pbVar3;
      *(byte **)(param_1 + 0x18) = pbVar6;
      lVar5 = lVar4 * 10 + (ulonglong)bVar2;
      bVar2 = *pbVar6;
      lVar4 = lVar5 + -0x30;
      pbVar3 = pbVar6 + 1;
    } while ((byte)(bVar2 - 0x30) < 10);
    lVar5 = lVar5 + -0x2f;
    if (bVar2 != 0x5f) {
      return 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x28);
  *(byte **)(param_1 + 0x18) = pbVar6 + 1;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  if (iVar1 < *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x28) = iVar1 + 1;
    lVar4 = *(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 0x18;
    if (lVar4 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 0x18) = 5;
      *(longlong *)(lVar4 + 8) = lVar5;
      return lVar4;
    }
  }
  return 0;
}



undefined8 FUN_00123ecc(longlong param_1,uint param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  
  if (param_2 == 0) {
    pbVar1 = *(byte **)(param_1 + 0x18);
    if (*pbVar1 == 0) {
      return 0;
    }
    *(byte **)(param_1 + 0x18) = pbVar1 + 1;
    param_2 = (uint)*pbVar1;
  }
  if (param_2 == 0x68) {
    pcVar3 = *(char **)(param_1 + 0x18);
    cVar4 = *pcVar3;
    pcVar2 = pcVar3;
    if (cVar4 == 'n') {
      pcVar2 = pcVar3 + 1;
      *(char **)(param_1 + 0x18) = pcVar2;
      cVar4 = pcVar3[1];
    }
    if ((byte)(cVar4 - 0x30U) < 10) {
      do {
        pcVar2 = pcVar2 + 1;
        *(char **)(param_1 + 0x18) = pcVar2;
        cVar4 = *pcVar2;
      } while ((byte)(cVar4 - 0x30U) < 10);
      goto LAB_00123f4c;
    }
  }
  else {
    if (param_2 != 0x76) {
      return 0;
    }
    FUN_001236a8(param_1 + 0x18);
    if (**(char **)(param_1 + 0x18) != '_') {
      return 0;
    }
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
    FUN_001236a8(param_1 + 0x18);
    pcVar2 = *(char **)(param_1 + 0x18);
  }
  cVar4 = *pcVar2;
LAB_00123f4c:
  if (cVar4 != '_') {
    return 0;
  }
  *(char **)(param_1 + 0x18) = pcVar2 + 1;
  return 1;
}



longlong FUN_00123fb8(longlong param_1)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  char *__s1;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  int *piVar14;
  char *pcVar15;
  char **ppcVar16;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_8;
  
  __s1 = *(char **)(param_1 + 0x18);
  uVar12 = *(undefined8 *)(param_1 + 0x48);
  if (1 < (byte)(*__s1 + 0xb7U)) {
    return 0;
  }
  pcVar15 = __s1 + 1;
  *(char **)(param_1 + 0x18) = pcVar15;
  cVar3 = __s1[1];
  if (cVar3 == 'E') {
    *(char **)(param_1 + 0x18) = __s1 + 2;
    uVar12 = FUN_00122ff4(param_1,0x2f,0,0);
    return uVar12;
  }
  plVar11 = &local_8;
  local_8 = 0;
LAB_00124028:
  switch(cVar3) {
  case 'I':
  case 'J':
    lVar5 = FUN_00123fb8(param_1);
    break;
  default:
    lVar5 = FUN_00125bf8(param_1);
    break;
  case 'L':
    lVar5 = FUN_00128798(param_1);
    break;
  case 'X':
    __s1 = pcVar15 + 1;
    uVar1 = *(undefined4 *)(param_1 + 0x54);
    *(char **)(param_1 + 0x18) = __s1;
    *(undefined4 *)(param_1 + 0x54) = 1;
    cVar3 = pcVar15[1];
    if (cVar3 == 'L') {
      lVar5 = FUN_00128798(param_1);
      __s1 = *(char **)(param_1 + 0x18);
    }
    else {
      if (cVar3 == 'T') {
        lVar5 = FUN_00123de0(param_1);
        __s1 = *(char **)(param_1 + 0x18);
      }
      else {
        if (cVar3 == 's') {
          if (pcVar15[2] == 'r') {
            *(char **)(param_1 + 0x18) = pcVar15 + 3;
            uVar7 = FUN_00125bf8(param_1);
            uVar8 = FUN_001275a4(param_1);
            if (**(char **)(param_1 + 0x18) == 'I') {
              uVar9 = FUN_00123fb8(param_1);
              uVar8 = FUN_00122ff4(param_1,4,uVar8,uVar9);
            }
            lVar5 = FUN_00122ff4(param_1,1,uVar7,uVar8);
            __s1 = *(char **)(param_1 + 0x18);
          }
          else {
            if (pcVar15[2] != 'p') goto LAB_00124114;
            *(char **)(param_1 + 0x18) = pcVar15 + 3;
            uVar7 = FUN_00128910(param_1);
            lVar5 = FUN_00122ff4(param_1,0x4a,uVar7,0);
            __s1 = *(char **)(param_1 + 0x18);
          }
        }
        else {
          if (cVar3 == 'f') {
            if (pcVar15[2] != 'p') goto LAB_00124114;
            *(char **)(param_1 + 0x18) = pcVar15 + 3;
            if (pcVar15[3] == 'T') {
              lVar13 = 0;
              *(char **)(param_1 + 0x18) = pcVar15 + 4;
            }
            else {
              iVar4 = FUN_00123cb0(param_1);
              lVar13 = (longlong)(iVar4 + 1);
              if (iVar4 + 1 == 0) {
                __s1 = *(char **)(param_1 + 0x18);
                goto LAB_00124220;
              }
            }
            iVar4 = *(int *)(param_1 + 0x28);
            if (iVar4 < *(int *)(param_1 + 0x2c)) {
              *(int *)(param_1 + 0x28) = iVar4 + 1;
              lVar5 = *(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x18;
              if (lVar5 != 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x18) = 6;
                *(longlong *)(lVar5 + 8) = lVar13;
                __s1 = *(char **)(param_1 + 0x18);
                goto LAB_001241c0;
              }
            }
            goto switchD_00124354_caseD_4;
          }
          if ((byte)(cVar3 - 0x30U) < 10) {
LAB_001241a0:
            lVar5 = FUN_001275a4(param_1);
            __s1 = *(char **)(param_1 + 0x18);
            if (lVar5 != 0) {
              if (*__s1 == 'I') {
                uVar7 = FUN_00123fb8(param_1);
                lVar5 = FUN_00122ff4(param_1,4,lVar5,uVar7);
                __s1 = *(char **)(param_1 + 0x18);
              }
              goto LAB_001241c0;
            }
          }
          else {
            if (cVar3 == 'o') {
              if (pcVar15[2] == 'n') {
                *(char **)(param_1 + 0x18) = pcVar15 + 3;
                goto LAB_001241a0;
              }
            }
            else {
              if (((cVar3 == 't') || (cVar3 == 'i')) && (pcVar15[2] == 'l')) {
                uVar7 = 0;
                if (cVar3 == 't') {
                  uVar7 = FUN_00125bf8(param_1);
                  __s1 = *(char **)(param_1 + 0x18);
                }
                *(char **)(param_1 + 0x18) = __s1 + 2;
                uVar8 = FUN_001254a4(param_1,0x45);
                lVar5 = FUN_00122ff4(param_1,0x30,uVar7,uVar8);
                __s1 = *(char **)(param_1 + 0x18);
                goto LAB_001241c0;
              }
            }
LAB_00124114:
            piVar6 = (int *)FUN_001273b0(param_1);
            if (piVar6 != (int *)0x0) {
              iVar4 = *piVar6;
              if (iVar4 == 0x31) {
                ppcVar16 = *(char ***)(piVar6 + 2);
                __s1 = *ppcVar16;
                *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(ppcVar16 + 2) + -2;
                iVar4 = strcmp(__s1,"st");
                if (iVar4 == 0) {
                  uVar7 = FUN_00125bf8(param_1);
LAB_001244f0:
                  lVar5 = FUN_00122ff4(param_1,0x36,piVar6,uVar7);
                  __s1 = *(char **)(param_1 + 0x18);
                  goto LAB_001241c0;
                }
                switch(*(undefined4 *)((longlong)ppcVar16 + 0x14)) {
                case 1:
                  cVar3 = *__s1;
                  if (((cVar3 == 'm') || (cVar3 == 'p')) && (__s1[1] == cVar3)) {
                    if (**(char **)(param_1 + 0x18) != '_') {
                      uVar7 = FUN_00128910(param_1);
                      uVar7 = FUN_00122ff4(param_1,0x38,uVar7,uVar7);
                      goto LAB_001244f0;
                    }
                    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                  }
                  goto switchD_0012447c_caseD_1;
                case 3:
                  goto switchD_00124354_caseD_3;
                case 2:
                  goto switchD_00124354_caseD_2;
                case 0:
                  goto switchD_00124354_caseD_0;
                }
              }
              else {
                if (iVar4 == 0x32) {
                  switch(piVar6[2]) {
                  case 0:
switchD_00124354_caseD_0:
                    lVar5 = FUN_00122ff4(param_1,0x35,piVar6,0);
                    __s1 = *(char **)(param_1 + 0x18);
                    goto LAB_001241c0;
                  case 2:
                    __s1 = (char *)0x0;
switchD_00124354_caseD_2:
                    if (((**(char ***)(piVar6 + 2))[1] == 'c') &&
                       ((cVar3 = ***(char ***)(piVar6 + 2), (byte)(cVar3 + 0x8eU) < 2 ||
                        ((byte)(cVar3 + 0x9dU) < 2)))) {
                      uVar7 = FUN_00125bf8(param_1);
                    }
                    else {
                      uVar7 = FUN_00128910(param_1);
                    }
                    iVar4 = strcmp(__s1,"cl");
                    if (iVar4 == 0) {
                      uVar8 = FUN_001254a4(param_1,0x45);
                    }
                    else {
                      iVar4 = strcmp(__s1,"dt");
                      if ((iVar4 == 0) || (iVar4 = strcmp(__s1,"pt"), iVar4 == 0)) {
                        uVar8 = FUN_001275a4(param_1);
                        if (**(char **)(param_1 + 0x18) == 'I') {
                          uVar9 = FUN_00123fb8(param_1);
                          uVar8 = FUN_00122ff4(param_1,4,uVar8,uVar9);
                        }
                      }
                      else {
                        uVar8 = FUN_00128910(param_1);
                      }
                    }
                    uVar7 = FUN_00122ff4(param_1,0x38,uVar7,uVar8);
                    lVar5 = FUN_00122ff4(param_1,0x37,piVar6,uVar7);
                    __s1 = *(char **)(param_1 + 0x18);
                    goto LAB_001241c0;
                  case 3:
                    __s1 = (char *)0x0;
switchD_00124354_caseD_3:
                    iVar4 = strcmp(__s1,"qu");
                    if (iVar4 == 0) {
                      local_18 = FUN_00128910(param_1);
                      __s1 = *(char **)(param_1 + 0x18);
                      cVar3 = *__s1;
                      if (cVar3 == 'L') {
                        piVar14 = (int *)FUN_00128798(param_1);
                        __s1 = *(char **)(param_1 + 0x18);
                        cVar3 = *__s1;
LAB_001247b0:
                        if (cVar3 == 'L') {
                          lVar5 = FUN_00128798(param_1);
                        }
                        else {
                          if (cVar3 == 'T') {
                            lVar5 = FUN_00123de0(param_1);
                          }
                          else {
                            if (cVar3 == 's') {
                              if (__s1[1] == 'r') {
                                *(char **)(param_1 + 0x18) = __s1 + 2;
                                uVar7 = FUN_00125bf8(param_1);
                                uVar8 = FUN_001275a4(param_1);
                                if (**(char **)(param_1 + 0x18) == 'I') {
                                  uVar9 = FUN_00123fb8(param_1);
                                  uVar8 = FUN_00122ff4(param_1,4,uVar8,uVar9);
                                }
                                lVar5 = FUN_00122ff4(param_1,1,uVar7,uVar8);
                              }
                              else {
                                if (__s1[1] != 'p') goto LAB_00124808;
                                *(char **)(param_1 + 0x18) = __s1 + 2;
                                uVar7 = FUN_00128910(param_1);
                                lVar5 = FUN_00122ff4(param_1,0x4a,uVar7,0);
                              }
                            }
                            else {
                              if (cVar3 == 'f') {
                                if (__s1[1] == 'p') {
                                  *(char **)(param_1 + 0x18) = __s1 + 2;
                                  if (__s1[2] == 'T') {
                                    lVar13 = 0;
                                    *(char **)(param_1 + 0x18) = __s1 + 3;
                                  }
                                  else {
                                    iVar4 = FUN_00123cb0(param_1);
                                    if (iVar4 + 1 == 0) goto LAB_00124c68;
                                    lVar13 = (longlong)(iVar4 + 1);
                                  }
                                  iVar4 = *(int *)(param_1 + 0x28);
                                  lVar5 = 0;
                                  if (iVar4 < *(int *)(param_1 + 0x2c)) {
                                    *(int *)(param_1 + 0x28) = iVar4 + 1;
                                    lVar5 = *(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x18;
                                    if (lVar5 != 0) {
                                      *(undefined4 *)
                                       (*(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x18) = 6;
                                      *(longlong *)(lVar5 + 8) = lVar13;
                                    }
                                  }
                                }
                                else {
LAB_00124808:
                                  piVar10 = (int *)FUN_001273b0(param_1);
                                  if (piVar10 == (int *)0x0) {
LAB_00124c68:
                                    lVar5 = 0;
                                  }
                                  else {
                                    iVar4 = *piVar10;
                                    if (iVar4 == 0x31) {
                                      ppcVar16 = *(char ***)(piVar10 + 2);
                                      __s1 = *ppcVar16;
                                      *(int *)(param_1 + 0x50) =
                                           *(int *)(param_1 + 0x50) + *(int *)(ppcVar16 + 2) + -2;
                                      iVar4 = strcmp(__s1,"st");
                                      if (iVar4 != 0) {
                                        lVar5 = 0;
                                        switch(*(undefined4 *)((longlong)ppcVar16 + 0x14)) {
                                        case 3:
                                          goto switchD_00124c64_caseD_3;
                                        case 2:
                                          goto switchD_00124c64_caseD_2;
                                        case 0:
                                          goto switchD_00124c64_caseD_0;
                                        default:
                                          goto switchD_00124c64_caseD_4;
                                        case 1:
                                          goto switchD_00124c64_caseD_1;
                                        }
                                      }
                                      uVar7 = FUN_00125bf8(param_1);
                                    }
                                    else {
                                      if (iVar4 == 0x32) {
                                        lVar5 = 0;
                                        switch(piVar10[2]) {
                                        case 0:
switchD_00124c64_caseD_0:
                                          lVar5 = FUN_00122ff4(param_1,0x35,piVar10,0);
                                          break;
                                        case 2:
                                          __s1 = (char *)0x0;
switchD_00124c64_caseD_2:
                                          if ((**(char ***)(piVar10 + 2))[1] == 'c') {
                                            cVar3 = ***(char ***)(piVar10 + 2);
                                            bVar2 = cVar3 + 0x8e;
                                            if ((1 < bVar2) && (1 < (byte)(cVar3 + 0x9dU)))
                                            goto LAB_00124f20;
                                            local_20 = FUN_00125bf8(param_1,(ulonglong)bVar2,__s1,0)
                                            ;
                                          }
                                          else {
LAB_00124f20:
                                            local_20 = FUN_00128910(param_1);
                                          }
                                          iVar4 = strcmp(__s1,"cl");
                                          if (iVar4 == 0) {
                                            uVar7 = FUN_001254a4(param_1,0x45);
                                          }
                                          else {
                                            iVar4 = strcmp(__s1,"dt");
                                            if ((iVar4 == 0) ||
                                               (iVar4 = strcmp(__s1,"pt"), iVar4 == 0)) {
                                              uVar7 = FUN_001275a4(param_1);
                                              if (**(char **)(param_1 + 0x18) == 'I') {
                                                uVar8 = FUN_00123fb8(param_1);
                                                uVar7 = FUN_00122ff4(param_1,4,uVar7,uVar8);
                                              }
                                            }
                                            else {
                                              uVar7 = FUN_00128910(param_1);
                                            }
                                          }
                                          uVar7 = FUN_00122ff4(param_1,0x38,local_20,uVar7);
                                          lVar5 = FUN_00122ff4(param_1,0x37,piVar10,uVar7);
                                          break;
                                        case 3:
                                          __s1 = (char *)0x0;
switchD_00124c64_caseD_3:
                                          iVar4 = strcmp(__s1,"qu");
                                          if (iVar4 == 0) {
                                            local_20 = FUN_00128910(param_1);
                                            local_28 = FUN_00128910(param_1);
                                            uVar7 = FUN_00128910(param_1);
                                          }
                                          else {
                                            if ((*__s1 != 'n') ||
                                               ((__s1[1] != 'a' && (__s1[1] != 'w'))))
                                            goto LAB_00124c68;
                                            local_20 = FUN_001254a4(param_1,0x5f);
                                            local_28 = FUN_00125bf8(param_1);
                                            __s1 = *(char **)(param_1 + 0x18);
                                            cVar3 = *__s1;
                                            if (cVar3 != 'E') {
                                              if (cVar3 == 'p') {
                                                lVar5 = 0;
                                                if (__s1[1] == 'i') {
                                                  *(char **)(param_1 + 0x18) = __s1 + 2;
                                                  uVar7 = FUN_001254a4(param_1,0x45);
                                                  goto LAB_00125058;
                                                }
                                              }
                                              else {
                                                if (cVar3 != 'i') goto LAB_00124c68;
                                                lVar5 = 0;
                                                if (__s1[1] == 'l') {
                                                  uVar7 = FUN_00128910(param_1);
                                                  goto LAB_00125058;
                                                }
                                              }
                                              break;
                                            }
                                            uVar7 = 0;
                                            *(char **)(param_1 + 0x18) = __s1 + 1;
                                          }
LAB_00125058:
                                          uVar7 = FUN_00122ff4(param_1,0x3b,local_28,uVar7);
                                          uVar7 = FUN_00122ff4(param_1,0x3a,local_20,uVar7);
                                          lVar5 = FUN_00122ff4(param_1,0x39,piVar10,uVar7);
                                          break;
                                        case 1:
                                          goto switchD_00124bfc_caseD_1;
                                        }
                                        goto switchD_00124c64_caseD_4;
                                      }
                                      if (iVar4 != 0x33) goto LAB_00124c68;
                                      if (**(char **)(param_1 + 0x18) == '_') {
                                        *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                                        uVar7 = FUN_001254a4(param_1,0x45);
                                        goto LAB_00124850;
                                      }
switchD_00124bfc_caseD_1:
                                      uVar7 = FUN_00128910(param_1);
                                    }
LAB_00124850:
                                    lVar5 = FUN_00122ff4(param_1,0x36,piVar10,uVar7);
                                  }
                                }
                              }
                              else {
                                if (9 < (byte)(cVar3 - 0x30U)) {
                                  if (cVar3 != 'o') goto LAB_001247e8;
                                  if (__s1[1] != 'n') goto LAB_00124808;
                                  *(char **)(param_1 + 0x18) = __s1 + 2;
                                }
                                lVar5 = FUN_001275a4(param_1);
                                if ((lVar5 != 0) && (**(char **)(param_1 + 0x18) == 'I')) {
                                  uVar7 = FUN_00123fb8(param_1);
                                  lVar5 = FUN_00122ff4(param_1,4,lVar5,uVar7);
                                }
                              }
                            }
                          }
                        }
                      }
                      else {
                        if (cVar3 == 'T') {
                          piVar14 = (int *)FUN_00123de0(param_1);
                          __s1 = *(char **)(param_1 + 0x18);
                          cVar3 = *__s1;
                          goto LAB_001247b0;
                        }
                        if (cVar3 == 's') {
                          if (__s1[1] == 'r') {
                            *(char **)(param_1 + 0x18) = __s1 + 2;
                            piVar14 = (int *)FUN_00125bf8(param_1);
                            uVar7 = FUN_001275a4(param_1);
                            if (**(char **)(param_1 + 0x18) != 'I') {
                              piVar14 = (int *)FUN_00122ff4(param_1,1,piVar14,uVar7);
                              __s1 = *(char **)(param_1 + 0x18);
                              cVar3 = *__s1;
                              goto LAB_001247b0;
                            }
                            uVar8 = FUN_00123fb8(param_1);
                            uVar7 = FUN_00122ff4(param_1,4,uVar7,uVar8);
                            uVar8 = 1;
                            goto LAB_0012479c;
                          }
                          if (__s1[1] != 'p') goto LAB_0012474c;
                          *(char **)(param_1 + 0x18) = __s1 + 2;
                          piVar14 = (int *)FUN_00128910(param_1);
                          uVar7 = 0x4a;
LAB_00124af0:
                          piVar14 = (int *)FUN_00122ff4(param_1,uVar7,piVar14,0);
LAB_00124afc:
                          __s1 = *(char **)(param_1 + 0x18);
LAB_00124b00:
                          cVar3 = *__s1;
                          goto LAB_001247b0;
                        }
                        if (cVar3 == 'f') {
                          if (__s1[1] != 'p') goto LAB_0012474c;
                          *(char **)(param_1 + 0x18) = __s1 + 2;
                          if (__s1[2] == 'T') {
                            __s1 = __s1 + 3;
                            lVar5 = 0;
                            *(char **)(param_1 + 0x18) = __s1;
                          }
                          else {
                            iVar4 = FUN_00123cb0(param_1);
                            __s1 = *(char **)(param_1 + 0x18);
                            if (iVar4 + 1 == 0) {
LAB_00124b0c:
                              piVar14 = (int *)0x0;
                              cVar3 = *__s1;
                              goto LAB_001247b0;
                            }
                            lVar5 = (longlong)(iVar4 + 1);
                          }
                          iVar4 = *(int *)(param_1 + 0x28);
                          if (iVar4 < *(int *)(param_1 + 0x2c)) {
                            *(int *)(param_1 + 0x28) = iVar4 + 1;
                            piVar14 = (int *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x18
                                             );
                            if (piVar14 == (int *)0x0) goto LAB_00124b00;
                            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x18)
                                 = 6;
                            *(longlong *)(piVar14 + 2) = lVar5;
                            cVar3 = *__s1;
                          }
                          else {
                            cVar3 = *__s1;
                            piVar14 = (int *)0x0;
                          }
                          goto LAB_001247b0;
                        }
                        if ((byte)(cVar3 - 0x30U) < 10) {
LAB_00124964:
                          piVar14 = (int *)FUN_001275a4(param_1);
                          __s1 = *(char **)(param_1 + 0x18);
                          cVar3 = *__s1;
                          if ((piVar14 != (int *)0x0) && (cVar3 == 'I')) {
                            uVar7 = FUN_00123fb8(param_1);
                            uVar8 = 4;
                            goto LAB_0012479c;
                          }
                          goto LAB_001247b0;
                        }
                        if (cVar3 == 'o') {
                          if (__s1[1] == 'n') {
                            *(char **)(param_1 + 0x18) = __s1 + 2;
                            goto LAB_00124964;
                          }
                        }
                        else {
                          if (((cVar3 == 't') || (cVar3 == 'i')) && (__s1[1] == 'l')) {
                            uVar7 = 0;
                            if (cVar3 == 't') {
                              uVar7 = FUN_00125bf8(param_1);
                              __s1 = *(char **)(param_1 + 0x18);
                            }
                            *(char **)(param_1 + 0x18) = __s1 + 2;
                            uVar8 = FUN_001254a4(param_1,0x45);
                            piVar14 = (int *)FUN_00122ff4(param_1,0x30,uVar7,uVar8);
                            __s1 = *(char **)(param_1 + 0x18);
                            cVar3 = *__s1;
                            goto LAB_001247b0;
                          }
                        }
LAB_0012474c:
                        piVar14 = (int *)FUN_001273b0(param_1);
                        if (piVar14 == (int *)0x0) goto LAB_00124afc;
                        iVar4 = *piVar14;
                        if (iVar4 == 0x31) {
                          ppcVar16 = *(char ***)(piVar14 + 2);
                          __s1 = *ppcVar16;
                          *(int *)(param_1 + 0x50) =
                               *(int *)(param_1 + 0x50) + *(int *)(ppcVar16 + 2) + -2;
                          iVar4 = strcmp(__s1,"st");
                          if (iVar4 != 0) {
                            switch(*(undefined4 *)((longlong)ppcVar16 + 0x14)) {
                            case 3:
                              goto switchD_00124ce8_caseD_3;
                            default:
                              goto switchD_00124ce8_caseD_4;
                            case 2:
                              goto switchD_00124ce8_caseD_2;
                            case 0:
                              goto switchD_00124ce8_caseD_0;
                            case 1:
                              goto switchD_00124ce8_caseD_1;
                            }
                          }
                          uVar7 = FUN_00125bf8(param_1);
                          uVar8 = 0x36;
                          goto LAB_0012479c;
                        }
                        if (iVar4 != 0x32) {
                          if (iVar4 == 0x33) {
                            if (**(char **)(param_1 + 0x18) != '_') goto switchD_00124b7c_caseD_1;
                            *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                            uVar7 = FUN_001254a4(param_1,0x45);
                            goto LAB_00124794;
                          }
switchD_00124ce8_caseD_4:
                          __s1 = *(char **)(param_1 + 0x18);
                          goto LAB_00124b0c;
                        }
                        switch(piVar14[2]) {
                        case 0:
switchD_00124ce8_caseD_0:
                          uVar7 = 0x35;
                          goto LAB_00124af0;
                        case 2:
                          __s1 = (char *)0x0;
switchD_00124ce8_caseD_2:
                          if (((**(char ***)(piVar14 + 2))[1] == 'c') &&
                             ((cVar3 = ***(char ***)(piVar14 + 2), (byte)(cVar3 + 0x8eU) < 2 ||
                              ((byte)(cVar3 + 0x9dU) < 2)))) {
                            local_20 = FUN_00125bf8(param_1);
                          }
                          else {
                            local_20 = FUN_00128910(param_1);
                          }
                          iVar4 = strcmp(__s1,"cl");
                          if (iVar4 == 0) {
                            uVar7 = FUN_001254a4(param_1,0x45);
                          }
                          else {
                            iVar4 = strcmp(__s1,"dt");
                            if ((iVar4 == 0) || (iVar4 = strcmp(__s1,"pt"), iVar4 == 0)) {
                              uVar7 = FUN_001275a4(param_1);
                              if (**(char **)(param_1 + 0x18) == 'I') {
                                uVar8 = FUN_00123fb8(param_1);
                                uVar7 = FUN_00122ff4(param_1,4,uVar7,uVar8);
                              }
                            }
                            else {
                              uVar7 = FUN_00128910(param_1);
                            }
                          }
                          uVar7 = FUN_00122ff4(param_1,0x38,local_20,uVar7);
                          uVar8 = 0x37;
                          goto LAB_0012479c;
                        case 3:
                          __s1 = (char *)0x0;
switchD_00124ce8_caseD_3:
                          iVar4 = strcmp(__s1,"qu");
                          if (iVar4 == 0) {
                            local_20 = FUN_00128910(param_1);
                            uVar7 = FUN_00128910(param_1);
                            uVar8 = FUN_00128910(param_1);
LAB_00124ed0:
                            uVar7 = FUN_00122ff4(param_1,0x3b,uVar7,uVar8);
                            uVar7 = FUN_00122ff4(param_1,0x3a,local_20,uVar7);
                            uVar8 = 0x39;
                            goto LAB_0012479c;
                          }
                          if ((*__s1 != 'n') || ((__s1[1] != 'a' && (__s1[1] != 'w'))))
                          goto switchD_00124ce8_caseD_4;
                          local_20 = FUN_001254a4(param_1,0x5f);
                          uVar7 = FUN_00125bf8(param_1);
                          __s1 = *(char **)(param_1 + 0x18);
                          cVar3 = *__s1;
                          if (cVar3 == 'E') {
                            uVar8 = 0;
                            *(char **)(param_1 + 0x18) = __s1 + 1;
                            goto LAB_00124ed0;
                          }
                          if (cVar3 == 'p') {
                            if (__s1[1] == 'i') {
                              *(char **)(param_1 + 0x18) = __s1 + 2;
                              uVar8 = FUN_001254a4(param_1,0x45);
                              goto LAB_00124ed0;
                            }
                          }
                          else {
                            if (cVar3 != 'i') {
                              piVar14 = (int *)0x0;
                              goto LAB_001247b0;
                            }
                            if (__s1[1] == 'l') {
                              uVar8 = FUN_00128910(param_1);
                              goto LAB_00124ed0;
                            }
                          }
                          piVar14 = (int *)0x0;
LAB_001247e8:
                          if (((cVar3 != 't') && (cVar3 != 'i')) || (__s1[1] != 'l'))
                          goto LAB_00124808;
                          uVar7 = 0;
                          if (cVar3 == 't') {
                            uVar7 = FUN_00125bf8(param_1);
                          }
                          *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 2;
                          uVar8 = FUN_001254a4(param_1,0x45);
                          lVar5 = FUN_00122ff4(param_1,0x30,uVar7,uVar8);
                          break;
                        case 1:
                          goto switchD_00124b7c_caseD_1;
                        default:
                          goto switchD_00124ce8_caseD_4;
                        }
                      }
                    }
                    else {
                      if ((*__s1 != 'n') || ((__s1[1] != 'a' && (__s1[1] != 'w')))) break;
                      local_18 = FUN_001254a4(param_1,0x5f);
                      piVar14 = (int *)FUN_00125bf8(param_1);
                      __s1 = *(char **)(param_1 + 0x18);
                      cVar3 = *__s1;
                      if (cVar3 != 'E') {
                        if (cVar3 == 'p') {
                          lVar5 = 0;
                          if (__s1[1] == 'i') {
                            *(char **)(param_1 + 0x18) = __s1 + 2;
                            lVar5 = FUN_001254a4(param_1,0x45);
                            goto switchD_00124c64_caseD_4;
                          }
                        }
                        else {
                          lVar5 = 0;
                          if ((cVar3 == 'i') && (__s1[1] == 'l')) {
                            lVar5 = FUN_00128910(param_1);
                            goto switchD_00124c64_caseD_4;
                          }
                        }
                        goto LAB_001241c0;
                      }
                      lVar5 = 0;
                      *(char **)(param_1 + 0x18) = __s1 + 1;
                    }
switchD_00124c64_caseD_4:
                    uVar7 = FUN_00122ff4(param_1,0x3b,piVar14,lVar5);
                    uVar7 = FUN_00122ff4(param_1,0x3a,local_18,uVar7);
                    lVar5 = FUN_00122ff4(param_1,0x39,piVar6,uVar7);
                    __s1 = *(char **)(param_1 + 0x18);
                    goto LAB_001241c0;
                  case 1:
                    goto switchD_0012447c_caseD_1;
                  }
                }
                else {
                  if (iVar4 == 0x33) {
                    if (**(char **)(param_1 + 0x18) == '_') {
                      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                      uVar7 = FUN_001254a4(param_1,0x45);
                      goto LAB_001244f0;
                    }
switchD_0012447c_caseD_1:
                    uVar7 = FUN_00128910(param_1);
                    goto LAB_001244f0;
                  }
                }
              }
            }
switchD_00124354_caseD_4:
            __s1 = *(char **)(param_1 + 0x18);
          }
LAB_00124220:
          lVar5 = 0;
        }
      }
    }
LAB_001241c0:
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    if (*__s1 != 'E') {
      return 0;
    }
    *(char **)(param_1 + 0x18) = __s1 + 1;
  }
  if (lVar5 == 0) {
    return 0;
  }
  lVar5 = FUN_00122ff4(param_1,0x2f,lVar5,0);
  *plVar11 = lVar5;
  if (lVar5 == 0) {
    return 0;
  }
  pcVar15 = *(char **)(param_1 + 0x18);
  plVar11 = (longlong *)(lVar5 + 0x10);
  cVar3 = *pcVar15;
  if (cVar3 == 'E') {
    *(undefined8 *)(param_1 + 0x48) = uVar12;
    *(char **)(param_1 + 0x18) = pcVar15 + 1;
    return local_8;
  }
  goto LAB_00124028;
switchD_00124ce8_caseD_1:
  cVar3 = *__s1;
  if (((cVar3 == 'm') || (cVar3 == 'p')) && (__s1[1] == cVar3)) {
    if (**(char **)(param_1 + 0x18) != '_') {
      uVar7 = FUN_00128910(param_1);
      uVar7 = FUN_00122ff4(param_1,0x38,uVar7,uVar7);
      uVar8 = 0x36;
      goto LAB_0012479c;
    }
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
switchD_00124b7c_caseD_1:
  uVar7 = FUN_00128910(param_1);
LAB_00124794:
  uVar8 = 0x36;
LAB_0012479c:
  piVar14 = (int *)FUN_00122ff4(param_1,uVar8,piVar14,uVar7);
  __s1 = *(char **)(param_1 + 0x18);
  cVar3 = *__s1;
  goto LAB_001247b0;
switchD_00124c64_caseD_1:
  cVar3 = *__s1;
  if (((cVar3 == 'm') || (cVar3 == 'p')) && (__s1[1] == cVar3)) {
    bVar2 = **(byte **)(param_1 + 0x18);
    if (bVar2 != 0x5f) {
      uVar7 = FUN_00128910(param_1,(ulonglong)bVar2,__s1,0);
      uVar7 = FUN_00122ff4(param_1,0x38,uVar7,uVar7);
      goto LAB_00124850;
    }
    *(byte **)(param_1 + 0x18) = *(byte **)(param_1 + 0x18) + 1;
  }
  goto switchD_00124bfc_caseD_1;
}



longlong FUN_001254a4(longlong param_1,char param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *__s1;
  longlong *plVar10;
  char **ppcVar11;
  longlong local_8;
  
  __s1 = *(char **)(param_1 + 0x18);
  plVar10 = &local_8;
  local_8 = 0;
  if (*__s1 == param_2) {
    *(char **)(param_1 + 0x18) = __s1 + 1;
    uVar5 = FUN_00122ff4(param_1,0x2e,0,0);
    return uVar5;
  }
  do {
    uVar1 = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x54) = 1;
    cVar2 = *__s1;
    if (cVar2 == 'L') {
      lVar6 = FUN_00128798(param_1);
LAB_00125668:
      *(undefined4 *)(param_1 + 0x54) = uVar1;
      if (lVar6 == 0) {
        return 0;
      }
    }
    else {
      if (cVar2 == 'T') {
        lVar6 = FUN_00123de0(param_1);
        goto LAB_00125668;
      }
      if (cVar2 == 's') {
        if (__s1[1] == 'r') {
          *(char **)(param_1 + 0x18) = __s1 + 2;
          uVar5 = FUN_00125bf8(param_1);
          uVar8 = FUN_001275a4(param_1);
          if (**(char **)(param_1 + 0x18) == 'I') {
            uVar9 = FUN_00123fb8(param_1);
            uVar8 = FUN_00122ff4(param_1,4,uVar8,uVar9);
          }
          lVar6 = FUN_00122ff4(param_1,1,uVar5,uVar8);
        }
        else {
          if (__s1[1] != 'p') goto LAB_00125558;
          *(char **)(param_1 + 0x18) = __s1 + 2;
          uVar5 = FUN_00128910(param_1);
          lVar6 = FUN_00122ff4(param_1,0x4a,uVar5,0);
        }
        goto LAB_00125668;
      }
      if (cVar2 == 'f') {
        if (__s1[1] != 'p') goto LAB_00125558;
        *(char **)(param_1 + 0x18) = __s1 + 2;
        if (__s1[2] == 'T') {
          lVar7 = 0;
          *(char **)(param_1 + 0x18) = __s1 + 3;
        }
        else {
          iVar3 = FUN_00123cb0(param_1);
          if (iVar3 + 1 == 0) goto switchD_00125824_caseD_4;
          lVar7 = (longlong)(iVar3 + 1);
        }
        iVar3 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x2c) <= iVar3) goto switchD_00125824_caseD_4;
        *(int *)(param_1 + 0x28) = iVar3 + 1;
        lVar6 = *(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 0x18;
        if (lVar6 == 0) goto switchD_00125824_caseD_4;
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 0x18) = 6;
        *(longlong *)(lVar6 + 8) = lVar7;
      }
      else {
        if (9 < (byte)(cVar2 - 0x30U)) {
          if (cVar2 == 'o') {
            if (__s1[1] == 'n') {
              *(char **)(param_1 + 0x18) = __s1 + 2;
              goto LAB_001255cc;
            }
          }
          else {
            if (((cVar2 == 't') || (cVar2 == 'i')) && (__s1[1] == 'l')) {
              uVar5 = 0;
              if (cVar2 == 't') {
                uVar5 = FUN_00125bf8(param_1);
                __s1 = *(char **)(param_1 + 0x18);
              }
              *(char **)(param_1 + 0x18) = __s1 + 2;
              uVar8 = FUN_001254a4(param_1,0x45);
              lVar6 = FUN_00122ff4(param_1,0x30,uVar5,uVar8);
              goto LAB_00125668;
            }
          }
LAB_00125558:
          piVar4 = (int *)FUN_001273b0(param_1);
          if (piVar4 == (int *)0x0) goto switchD_00125824_caseD_4;
          iVar3 = *piVar4;
          if (iVar3 == 0x31) {
            ppcVar11 = *(char ***)(piVar4 + 2);
            __s1 = *ppcVar11;
            *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(ppcVar11 + 2) + -2;
            iVar3 = strcmp(__s1,"st");
            if (iVar3 != 0) {
              switch(*(undefined4 *)((longlong)ppcVar11 + 0x14)) {
              case 0:
                goto switchD_00125824_caseD_0;
              case 1:
                goto switchD_00125824_caseD_1;
              case 2:
                goto switchD_00125824_caseD_2;
              case 3:
                goto switchD_00125824_caseD_3;
              default:
                goto switchD_00125824_caseD_4;
              }
            }
            uVar5 = FUN_00125bf8(param_1);
          }
          else {
            if (iVar3 == 0x32) {
              switch(piVar4[2]) {
              case 0:
switchD_00125824_caseD_0:
                lVar6 = FUN_00122ff4(param_1,0x35,piVar4,0);
                goto LAB_00125668;
              case 1:
                goto switchD_001257fc_caseD_1;
              case 2:
                __s1 = (char *)0x0;
switchD_00125824_caseD_2:
                if (((**(char ***)(piVar4 + 2))[1] == 'c') &&
                   ((cVar2 = ***(char ***)(piVar4 + 2), (byte)(cVar2 + 0x8eU) < 2 ||
                    ((byte)(cVar2 + 0x9dU) < 2)))) {
                  uVar5 = FUN_00125bf8(param_1);
                }
                else {
                  uVar5 = FUN_00128910(param_1);
                }
                iVar3 = strcmp(__s1,"cl");
                if (iVar3 == 0) {
                  uVar8 = FUN_001254a4(param_1,0x45);
                }
                else {
                  iVar3 = strcmp(__s1,"dt");
                  if ((iVar3 == 0) || (iVar3 = strcmp(__s1,"pt"), iVar3 == 0)) {
                    uVar8 = FUN_001275a4(param_1);
                    if (**(char **)(param_1 + 0x18) == 'I') {
                      uVar9 = FUN_00123fb8(param_1);
                      uVar8 = FUN_00122ff4(param_1,4,uVar8,uVar9);
                    }
                  }
                  else {
                    uVar8 = FUN_00128910(param_1);
                  }
                }
                uVar5 = FUN_00122ff4(param_1,0x38,uVar5,uVar8);
                lVar6 = FUN_00122ff4(param_1,0x37,piVar4,uVar5);
                goto LAB_00125668;
              case 3:
                __s1 = (char *)0x0;
switchD_00125824_caseD_3:
                iVar3 = strcmp(__s1,"qu");
                if (iVar3 == 0) {
                  uVar5 = FUN_00128910(param_1);
                  uVar8 = FUN_00128910(param_1);
                  uVar9 = FUN_00128910(param_1);
                }
                else {
                  if ((*__s1 != 'n') || ((__s1[1] != 'a' && (__s1[1] != 'w'))))
                  goto switchD_00125824_caseD_4;
                  uVar5 = FUN_001254a4(param_1,0x5f);
                  uVar8 = FUN_00125bf8(param_1);
                  __s1 = *(char **)(param_1 + 0x18);
                  cVar2 = *__s1;
                  if (cVar2 == 'E') {
                    uVar9 = 0;
                    *(char **)(param_1 + 0x18) = __s1 + 1;
                  }
                  else {
                    if (cVar2 == 'p') {
                      if (__s1[1] != 'i') goto switchD_00125824_caseD_4;
                      *(char **)(param_1 + 0x18) = __s1 + 2;
                      uVar9 = FUN_001254a4(param_1,0x45);
                    }
                    else {
                      if ((cVar2 != 'i') || (__s1[1] != 'l')) {
switchD_00125824_caseD_4:
                        *(undefined4 *)(param_1 + 0x54) = uVar1;
                        return 0;
                      }
                      uVar9 = FUN_00128910(param_1);
                    }
                  }
                }
                uVar8 = FUN_00122ff4(param_1,0x3b,uVar8,uVar9);
                uVar5 = FUN_00122ff4(param_1,0x3a,uVar5,uVar8);
                lVar6 = FUN_00122ff4(param_1,0x39,piVar4,uVar5);
                goto LAB_00125668;
              default:
                goto switchD_00125824_caseD_4;
              }
            }
            if (iVar3 != 0x33) goto switchD_00125824_caseD_4;
            if (**(char **)(param_1 + 0x18) == '_') {
              *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
              uVar5 = FUN_001254a4(param_1,0x45);
              goto LAB_001255a0;
            }
switchD_001257fc_caseD_1:
            uVar5 = FUN_00128910(param_1);
          }
LAB_001255a0:
          lVar6 = FUN_00122ff4(param_1,0x36,piVar4,uVar5);
          goto LAB_00125668;
        }
LAB_001255cc:
        lVar6 = FUN_001275a4(param_1);
        if (lVar6 == 0) goto switchD_00125824_caseD_4;
        if (**(char **)(param_1 + 0x18) == 'I') {
          uVar5 = FUN_00123fb8(param_1);
          lVar6 = FUN_00122ff4(param_1,4,lVar6,uVar5);
          goto LAB_00125668;
        }
      }
      *(undefined4 *)(param_1 + 0x54) = uVar1;
    }
    lVar6 = FUN_00122ff4(param_1,0x2e,lVar6,0);
    *plVar10 = lVar6;
    if (lVar6 == 0) {
      return 0;
    }
    __s1 = *(char **)(param_1 + 0x18);
    plVar10 = (longlong *)(lVar6 + 0x10);
    if (*__s1 == param_2) {
      *(char **)(param_1 + 0x18) = __s1 + 1;
      return local_8;
    }
  } while( true );
switchD_00125824_caseD_1:
  cVar2 = *__s1;
  if (((cVar2 == 'm') || (cVar2 == 'p')) && (__s1[1] == cVar2)) {
    if (**(char **)(param_1 + 0x18) != '_') {
      uVar5 = FUN_00128910(param_1);
      uVar5 = FUN_00122ff4(param_1,0x38,uVar5,uVar5);
      goto LAB_001255a0;
    }
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
  goto switchD_001257fc_caseD_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * FUN_00125bf8(longlong param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar10;
  int **ppiVar11;
  int *piVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ushort uVar19;
  int *piVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  char *__s1;
  int *local_8;
  
  pbVar22 = *(byte **)(param_1 + 0x18);
  bVar7 = *pbVar22;
  if ((bVar7 == 0x56 || bVar7 == 0x72) || (bVar7 == 0x4b)) {
    ppiVar11 = (int **)FUN_001230f4(param_1,&local_8,0);
    if (ppiVar11 == (int **)0x0) {
      return (int *)0;
    }
    if (**(char **)(param_1 + 0x18) == 'F') {
      piVar12 = (int *)FUN_00128f78(param_1);
      *ppiVar11 = piVar12;
    }
    else {
      piVar12 = (int *)FUN_00125bf8();
      *ppiVar11 = piVar12;
    }
    if (piVar12 == (int *)0x0) {
      return (int *)0;
    }
    if (*piVar12 - 0x1fU < 2) {
      piVar20 = *(int **)(piVar12 + 2);
      *(int **)(piVar12 + 2) = local_8;
      local_8 = *ppiVar11;
      *ppiVar11 = piVar20;
    }
    if (local_8 == (int *)0x0) {
      return (int *)0;
    }
    iVar10 = *(int *)(param_1 + 0x38);
    if (*(int *)(param_1 + 0x3c) <= iVar10) {
      return (int *)0;
    }
    *(int **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar10 * 8) = local_8;
    *(int *)(param_1 + 0x38) = iVar10 + 1;
    return local_8;
  }
  switch((uint)bVar7) {
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x4e:
  case 0x5a:
    local_8 = (int *)FUN_00127b28(param_1);
    break;
  default:
    goto switchD_00125c74_caseD_3a;
  case 0x41:
    pbVar21 = pbVar22 + 1;
    *(byte **)(param_1 + 0x18) = pbVar21;
    if (pbVar22[1] == 0x5f) {
      lVar13 = 0;
    }
    else {
      if ((byte)(pbVar22[1] - 0x30) < 10) {
        pbVar22 = pbVar22 + 2;
        do {
          pbVar23 = pbVar22;
          *(byte **)(param_1 + 0x18) = pbVar23;
          pbVar22 = pbVar23 + 1;
        } while ((byte)(*pbVar23 - 0x30) < 10);
        lVar13 = FUN_00123094(param_1,pbVar21,(ulonglong)(uint)((int)pbVar23 - (int)pbVar21));
joined_r0x001266d0:
        if (lVar13 == 0) goto LAB_00125e1c;
        pbVar21 = *(byte **)(param_1 + 0x18);
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(param_1 + 0x54) = 1;
        bVar7 = pbVar22[1];
        if (bVar7 == 0x4c) {
          lVar13 = FUN_00128798(param_1);
LAB_001266cc:
          *(undefined4 *)(param_1 + 0x54) = uVar2;
          goto joined_r0x001266d0;
        }
        if (bVar7 == 0x54) {
          lVar13 = FUN_00123de0(param_1);
          goto LAB_001266cc;
        }
        if (bVar7 == 0x73) {
          if (pbVar22[2] == 0x72) {
            *(byte **)(param_1 + 0x18) = pbVar22 + 3;
            uVar16 = FUN_00125bf8(param_1);
            uVar17 = FUN_001275a4(param_1);
            if (**(char **)(param_1 + 0x18) == 'I') {
              uVar18 = FUN_00123fb8(param_1);
              uVar17 = FUN_00122ff4(param_1,4,uVar17,uVar18);
              lVar13 = FUN_00122ff4(param_1,1,uVar16,uVar17);
            }
            else {
              lVar13 = FUN_00122ff4(param_1,1,uVar16,uVar17);
            }
          }
          else {
            if (pbVar22[2] != 0x70) goto LAB_00126670;
            *(byte **)(param_1 + 0x18) = pbVar22 + 3;
            uVar16 = FUN_00128910(param_1);
            lVar13 = FUN_00122ff4(param_1,0x4a,uVar16,0);
          }
          goto LAB_001266cc;
        }
        if (bVar7 != 0x66) {
          if ((byte)(bVar7 - 0x30) < 10) {
LAB_00126744:
            lVar13 = FUN_001275a4(param_1);
            if (lVar13 != 0) {
              pbVar21 = *(byte **)(param_1 + 0x18);
              if (*pbVar21 != 0x49) {
                *(undefined4 *)(param_1 + 0x54) = uVar2;
                goto LAB_00125e0c;
              }
              uVar16 = FUN_00123fb8(param_1);
              lVar13 = FUN_00122ff4(param_1,4,lVar13,uVar16);
              goto LAB_001266cc;
            }
          }
          else {
            if (bVar7 == 0x6f) {
              if (pbVar22[2] == 0x6e) {
                *(byte **)(param_1 + 0x18) = pbVar22 + 3;
                goto LAB_00126744;
              }
            }
            else {
              if (((bVar7 == 0x74) || (bVar7 == 0x69)) && (pbVar22[2] == 0x6c)) {
                uVar16 = 0;
                if (bVar7 == 0x74) {
                  uVar16 = FUN_00125bf8(param_1);
                }
                *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 2;
                uVar17 = FUN_001254a4(param_1,0x45);
                lVar13 = FUN_00122ff4(param_1,0x30,uVar16,uVar17);
                goto LAB_001266cc;
              }
            }
LAB_00126670:
            piVar12 = (int *)FUN_001273b0(param_1);
            if (piVar12 != (int *)0x0) {
              iVar10 = *piVar12;
              if (iVar10 == 0x31) {
                __s1 = **(char ***)(piVar12 + 2);
                *(int *)(param_1 + 0x50) =
                     *(int *)(param_1 + 0x50) + *(int *)(*(char ***)(piVar12 + 2) + 2) + -2;
                iVar10 = strcmp(__s1,"st");
                if (iVar10 == 0) {
                  uVar16 = FUN_00125bf8(param_1);
LAB_001266b8:
                  lVar13 = FUN_00122ff4(param_1,0x36,piVar12,uVar16);
                  goto LAB_001266cc;
                }
                switch(*(undefined4 *)(*(longlong *)(piVar12 + 2) + 0x14)) {
                case 1:
                  cVar8 = *__s1;
                  if (((cVar8 == 'm') || (cVar8 == 'p')) && (__s1[1] == cVar8)) {
                    if (**(char **)(param_1 + 0x18) != '_') {
                      uVar16 = FUN_00128910(param_1);
                      uVar16 = FUN_00122ff4(param_1,0x38,uVar16,uVar16);
                      goto LAB_001266b8;
                    }
                    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                  }
                  goto switchD_00126a08_caseD_1;
                case 3:
                  goto switchD_00126c34_caseD_3;
                case 2:
                  goto switchD_00126c34_caseD_2;
                case 0:
                  goto switchD_00126c34_caseD_0;
                }
              }
              else {
                if (iVar10 == 0x32) {
                  switch(piVar12[2]) {
                  case 0:
switchD_00126c34_caseD_0:
                    lVar13 = FUN_00122ff4(param_1,0x35,piVar12,0);
                    goto LAB_001266cc;
                  case 2:
                    __s1 = (char *)0x0;
switchD_00126c34_caseD_2:
                    if (((**(char ***)(piVar12 + 2))[1] == 'c') &&
                       ((cVar8 = ***(char ***)(piVar12 + 2), (byte)(cVar8 + 0x8eU) < 2 ||
                        ((byte)(cVar8 + 0x9dU) < 2)))) {
                      uVar16 = FUN_00125bf8(param_1);
                    }
                    else {
                      uVar16 = FUN_00128910(param_1);
                    }
                    iVar10 = strcmp(__s1,"cl");
                    if (iVar10 == 0) {
                      uVar17 = FUN_001254a4(param_1,0x45);
                    }
                    else {
                      iVar10 = strcmp(__s1,"dt");
                      if ((iVar10 == 0) || (iVar10 = strcmp(__s1,"pt"), iVar10 == 0)) {
                        uVar17 = FUN_001275a4(param_1);
                        if (**(char **)(param_1 + 0x18) == 'I') {
                          uVar18 = FUN_00123fb8(param_1);
                          uVar17 = FUN_00122ff4(param_1,4,uVar17,uVar18);
                        }
                      }
                      else {
                        uVar17 = FUN_00128910(param_1);
                      }
                    }
                    uVar16 = FUN_00122ff4(param_1,0x38,uVar16,uVar17);
                    lVar13 = FUN_00122ff4(param_1,0x37,piVar12,uVar16);
                    goto LAB_001266cc;
                  case 3:
                    __s1 = (char *)0x0;
switchD_00126c34_caseD_3:
                    iVar10 = strcmp(__s1,"qu");
                    if (iVar10 == 0) {
                      uVar16 = FUN_00128910(param_1);
                      uVar17 = FUN_00128910(param_1);
                      uVar18 = FUN_00128910(param_1);
LAB_00126ab0:
                      uVar17 = FUN_00122ff4(param_1,0x3b,uVar17,uVar18);
                      uVar16 = FUN_00122ff4(param_1,0x3a,uVar16,uVar17);
                      lVar13 = FUN_00122ff4(param_1,0x39,piVar12,uVar16);
                      goto LAB_001266cc;
                    }
                    if ((*__s1 == 'n') && ((__s1[1] == 'a' || (__s1[1] == 'w')))) {
                      uVar16 = FUN_001254a4(param_1,0x5f);
                      uVar17 = FUN_00125bf8(param_1);
                      __s1 = *(char **)(param_1 + 0x18);
                      cVar8 = *__s1;
                      if (cVar8 == 'E') {
                        uVar18 = 0;
                        *(char **)(param_1 + 0x18) = __s1 + 1;
                        goto LAB_00126ab0;
                      }
                      if (cVar8 == 'p') {
                        if (__s1[1] == 'i') {
                          *(char **)(param_1 + 0x18) = __s1 + 2;
                          uVar18 = FUN_001254a4(param_1,0x45);
                          goto LAB_00126ab0;
                        }
                      }
                      else {
                        if ((cVar8 == 'i') && (__s1[1] == 'l')) {
                          uVar18 = FUN_00128910(param_1);
                          goto LAB_00126ab0;
                        }
                      }
                    }
                    break;
                  case 1:
                    goto switchD_00126a08_caseD_1;
                  }
                }
                else {
                  if (iVar10 == 0x33) {
                    if (**(char **)(param_1 + 0x18) == '_') {
                      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                      uVar16 = FUN_001254a4(param_1,0x45);
                      goto LAB_001266b8;
                    }
switchD_00126a08_caseD_1:
                    uVar16 = FUN_00128910(param_1);
                    goto LAB_001266b8;
                  }
                }
              }
            }
          }
switchD_00126c34_caseD_4:
          *(undefined4 *)(param_1 + 0x54) = uVar2;
          goto LAB_00125e1c;
        }
        if (pbVar22[2] != 0x70) goto LAB_00126670;
        *(byte **)(param_1 + 0x18) = pbVar22 + 3;
        if (pbVar22[3] == 0x54) {
          iVar10 = 0;
          *(byte **)(param_1 + 0x18) = pbVar22 + 4;
        }
        else {
          iVar10 = FUN_00123cb0(param_1);
          iVar10 = iVar10 + 1;
          if (iVar10 == 0) goto switchD_00126c34_caseD_4;
        }
        iVar6 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x2c) <= iVar6) goto switchD_00126c34_caseD_4;
        *(int *)(param_1 + 0x28) = iVar6 + 1;
        lVar13 = *(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 0x18;
        if (lVar13 == 0) goto switchD_00126c34_caseD_4;
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 0x18) = 6;
        *(longlong *)(lVar13 + 8) = (longlong)iVar10;
        *(undefined4 *)(param_1 + 0x54) = uVar2;
        pbVar21 = *(byte **)(param_1 + 0x18);
      }
LAB_00125e0c:
      if (*pbVar21 != 0x5f) goto LAB_00125e1c;
    }
    *(byte **)(param_1 + 0x18) = pbVar21 + 1;
    uVar16 = FUN_00125bf8(param_1);
    local_8 = (int *)FUN_00122ff4(param_1,0x2a,lVar13,uVar16);
    break;
  case 0x43:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    uVar16 = FUN_00125bf8(param_1);
    local_8 = (int *)FUN_00122ff4(param_1,0x25,uVar16,0);
    break;
  case 0x44:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    if (pbVar22[1] == 0) {
      return (int *)0;
    }
    *(byte **)(param_1 + 0x18) = pbVar22 + 2;
    switch(pbVar22[1]) {
    case 0x46:
      iVar10 = *(int *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x2c) <= iVar10) {
        uRam0000000000000000 = 0;
                    // WARNING: Could not recover jumptable at 0x0012672c. Too many branches
                    // WARNING: Treating indirect jump as call
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1000,0x126730);
        uVar16 = (*UNRECOVERED_JUMPTABLE_00)();
        return (int *)uVar16;
      }
      *(int *)(param_1 + 0x28) = iVar10 + 1;
      local_8 = (int *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18);
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18) = 0x2c;
      bVar1 = (byte)(pbVar22[2] - 0x30) < 10;
      *(ushort *)(local_8 + 4) = (ushort)bVar1;
      if (bVar1) {
        FUN_001236a8(param_1 + 0x18);
      }
      piVar12 = local_8;
      uVar16 = FUN_00125bf8(param_1);
      *(undefined8 *)(piVar12 + 2) = uVar16;
      if (*(longlong *)(local_8 + 2) == 0) {
        return (int *)0;
      }
      FUN_001236a8(param_1 + 0x18);
      __s1 = *(char **)(param_1 + 0x18);
      uVar19 = 0;
      if (*__s1 != '\0') {
        *(char **)(param_1 + 0x18) = __s1 + 1;
        uVar19 = (ushort)(*__s1 == 's');
      }
      *(ushort *)((longlong)local_8 + 0x12) = uVar19;
      return local_8;
    case 0x54:
    case 0x74:
      uVar2 = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x54) = 1;
      bVar7 = pbVar22[2];
      if (bVar7 == 0x4c) {
        lVar13 = FUN_00128798(param_1);
      }
      else {
        if (bVar7 == 0x54) {
          lVar13 = FUN_00123de0(param_1);
        }
        else {
          if (bVar7 == 0x73) {
            if (pbVar22[3] == 0x72) {
              *(byte **)(param_1 + 0x18) = pbVar22 + 4;
              uVar16 = FUN_00125bf8(param_1);
              uVar17 = FUN_001275a4(param_1);
              if (**(char **)(param_1 + 0x18) == 'I') {
                uVar18 = FUN_00123fb8(param_1);
                uVar17 = FUN_00122ff4(param_1,4,uVar17,uVar18);
                lVar13 = FUN_00122ff4(param_1,1,uVar16,uVar17);
              }
              else {
                lVar13 = FUN_00122ff4(param_1,1,uVar16,uVar17);
              }
            }
            else {
              if (pbVar22[3] != 0x70) goto LAB_00126454;
              *(byte **)(param_1 + 0x18) = pbVar22 + 4;
              uVar16 = FUN_00128910(param_1);
              lVar13 = FUN_00122ff4(param_1,0x4a,uVar16,0);
            }
          }
          else {
            if (bVar7 == 0x66) {
              if (pbVar22[3] != 0x70) goto LAB_00126454;
              *(byte **)(param_1 + 0x18) = pbVar22 + 4;
              if (pbVar22[4] == 0x54) {
                iVar10 = 0;
                *(byte **)(param_1 + 0x18) = pbVar22 + 5;
              }
              else {
                iVar10 = FUN_00123cb0(param_1);
                iVar10 = iVar10 + 1;
                if (iVar10 == 0) goto LAB_00126cc4;
              }
              iVar6 = *(int *)(param_1 + 0x28);
              if (*(int *)(param_1 + 0x2c) <= iVar6) goto LAB_00126cc4;
              *(int *)(param_1 + 0x28) = iVar6 + 1;
              lVar14 = *(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 0x18;
              lVar13 = 0;
              if (lVar14 != 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 0x18) = 6;
                *(longlong *)(lVar14 + 8) = (longlong)iVar10;
                lVar13 = lVar14;
              }
            }
            else {
              if ((byte)(bVar7 - 0x30) < 10) {
LAB_0012685c:
                lVar13 = FUN_001275a4(param_1);
                if (lVar13 != 0) {
                  if (**(char **)(param_1 + 0x18) == 'I') {
                    uVar16 = FUN_00123fb8(param_1);
                    lVar13 = FUN_00122ff4(param_1,4,lVar13,uVar16);
                  }
                  goto switchD_00126cb0_caseD_4;
                }
              }
              else {
                if (bVar7 == 0x6f) {
                  if (pbVar22[3] == 0x6e) {
                    *(byte **)(param_1 + 0x18) = pbVar22 + 4;
                    goto LAB_0012685c;
                  }
                }
                else {
                  if (((bVar7 == 0x74) || (bVar7 == 0x69)) && (pbVar22[3] == 0x6c)) {
                    uVar16 = 0;
                    if (bVar7 == 0x74) {
                      uVar16 = FUN_00125bf8(param_1);
                    }
                    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 2;
                    uVar17 = FUN_001254a4(param_1,0x45);
                    lVar13 = FUN_00122ff4(param_1,0x30,uVar16,uVar17);
                    goto switchD_00126cb0_caseD_4;
                  }
                }
LAB_00126454:
                piVar12 = (int *)FUN_001273b0(param_1);
                if (piVar12 != (int *)0x0) {
                  iVar10 = *piVar12;
                  if (iVar10 == 0x31) {
                    __s1 = **(char ***)(piVar12 + 2);
                    *(int *)(param_1 + 0x50) =
                         *(int *)(param_1 + 0x50) + *(int *)(*(char ***)(piVar12 + 2) + 2) + -2;
                    iVar10 = strcmp(__s1,"st");
                    if (iVar10 != 0) {
                      lVar13 = 0;
                      switch(*(undefined4 *)(*(longlong *)(piVar12 + 2) + 0x14)) {
                      case 3:
                        goto switchD_00126cb0_caseD_3;
                      case 2:
                        goto switchD_00126cb0_caseD_2;
                      case 0:
                        goto switchD_00126cb0_caseD_0;
                      default:
                        goto switchD_00126cb0_caseD_4;
                      case 1:
                        goto switchD_00126cb0_caseD_1;
                      }
                    }
                    uVar16 = FUN_00125bf8(param_1);
                  }
                  else {
                    if (iVar10 == 0x32) {
                      lVar13 = 0;
                      switch(piVar12[2]) {
                      case 0:
switchD_00126cb0_caseD_0:
                        lVar13 = FUN_00122ff4(param_1,0x35,piVar12,0);
                        break;
                      case 2:
                        __s1 = (char *)0x0;
switchD_00126cb0_caseD_2:
                        if ((**(char ***)(piVar12 + 2))[1] == 'c') {
                          cVar8 = ***(char ***)(piVar12 + 2);
                          bVar7 = cVar8 + 0x8e;
                          if ((1 < bVar7) && (1 < (byte)(cVar8 + 0x9dU))) goto LAB_00126ef8;
                          uVar16 = FUN_00125bf8(param_1,(ulonglong)bVar7,0);
                        }
                        else {
LAB_00126ef8:
                          uVar16 = FUN_00128910(param_1);
                        }
                        iVar10 = strcmp(__s1,"cl");
                        if (iVar10 == 0) {
                          uVar17 = FUN_001254a4(param_1,0x45);
                        }
                        else {
                          iVar10 = strcmp(__s1,"dt");
                          if ((iVar10 == 0) || (iVar10 = strcmp(__s1,"pt"), iVar10 == 0)) {
                            uVar17 = FUN_001275a4(param_1);
                            if (**(char **)(param_1 + 0x18) == 'I') {
                              uVar18 = FUN_00123fb8(param_1);
                              uVar17 = FUN_00122ff4(param_1,4,uVar17,uVar18);
                            }
                          }
                          else {
                            uVar17 = FUN_00128910(param_1);
                          }
                        }
                        uVar16 = FUN_00122ff4(param_1,0x38,uVar16,uVar17);
                        lVar13 = FUN_00122ff4(param_1,0x37,piVar12,uVar16);
                        break;
                      case 3:
                        __s1 = (char *)0x0;
switchD_00126cb0_caseD_3:
                        iVar10 = strcmp(__s1,"qu");
                        if (iVar10 == 0) {
                          uVar16 = FUN_00128910(param_1);
                          uVar17 = FUN_00128910(param_1);
                          uVar18 = FUN_00128910(param_1);
                        }
                        else {
                          if ((*__s1 != 'n') || ((__s1[1] != 'a' && (__s1[1] != 'w'))))
                          goto LAB_00126cc4;
                          uVar16 = FUN_001254a4(param_1,0x5f);
                          uVar17 = FUN_00125bf8(param_1);
                          __s1 = *(char **)(param_1 + 0x18);
                          cVar8 = *__s1;
                          if (cVar8 != 'E') {
                            if (cVar8 == 'p') {
                              if (__s1[1] == 'i') {
                                *(char **)(param_1 + 0x18) = __s1 + 2;
                                uVar18 = FUN_001254a4(param_1,0x45);
                                goto LAB_00127068;
                              }
                            }
                            else {
                              if ((cVar8 == 'i') && (__s1[1] == 'l')) {
                                uVar18 = FUN_00128910(param_1);
                                goto LAB_00127068;
                              }
                            }
                            goto LAB_00126cc4;
                          }
                          uVar18 = 0;
                          *(char **)(param_1 + 0x18) = __s1 + 1;
                        }
LAB_00127068:
                        uVar17 = FUN_00122ff4(param_1,0x3b,uVar17,uVar18);
                        uVar16 = FUN_00122ff4(param_1,0x3a,uVar16,uVar17);
                        lVar13 = FUN_00122ff4(param_1,0x39,piVar12,uVar16);
                        break;
                      case 1:
                        goto switchD_00126ec8_caseD_1;
                      }
                      goto switchD_00126cb0_caseD_4;
                    }
                    if (iVar10 != 0x33) goto LAB_00126cc4;
                    if (**(char **)(param_1 + 0x18) == '_') {
                      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                      uVar16 = FUN_001254a4(param_1,0x45);
                      goto LAB_0012649c;
                    }
switchD_00126ec8_caseD_1:
                    uVar16 = FUN_00128910(param_1);
                  }
LAB_0012649c:
                  lVar13 = FUN_00122ff4(param_1,0x36,piVar12,uVar16);
                  goto switchD_00126cb0_caseD_4;
                }
              }
LAB_00126cc4:
              lVar13 = 0;
            }
          }
        }
      }
switchD_00126cb0_caseD_4:
      *(undefined4 *)(param_1 + 0x54) = uVar2;
      local_8 = (int *)FUN_00122ff4(param_1,0x42,lVar13,0);
      if (local_8 == (int *)0x0) {
        return (int *)0;
      }
      __s1 = *(char **)(param_1 + 0x18);
      if (*__s1 == '\0') {
        return (int *)0;
      }
      *(char **)(param_1 + 0x18) = __s1 + 1;
      if (*__s1 != 'E') {
        return (int *)0;
      }
      goto LAB_00125d5c;
    case 0x61:
      uVar16 = FUN_00123094(param_1,&DAT_00138428,4);
      return (int *)uVar16;
    case 100:
      iVar10 = *(int *)(param_1 + 0x28);
      if (iVar10 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar10 + 1;
        lVar13 = *(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18;
        if (lVar13 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18) = 0x27;
          *(undefined8 *)(lVar13 + 8) = 0x140c20;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 9;
          return (int *)lVar13;
        }
      }
      break;
    case 0x65:
      iVar10 = *(int *)(param_1 + 0x28);
      if (iVar10 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar10 + 1;
        lVar13 = *(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18;
        if (lVar13 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18) = 0x27;
          *(undefined8 *)(lVar13 + 8) = 0x140c40;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 10;
          return (int *)lVar13;
        }
      }
      break;
    case 0x66:
      iVar10 = *(int *)(param_1 + 0x28);
      if (iVar10 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar10 + 1;
        lVar13 = *(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18;
        if (lVar13 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18) = 0x27;
          *(undefined8 *)(lVar13 + 8) = 0x140c00;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 9;
          return (int *)lVar13;
        }
      }
      break;
    case 0x68:
      iVar10 = *(int *)(param_1 + 0x28);
      if (iVar10 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar10 + 1;
        lVar13 = *(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18;
        if (lVar13 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18) = 0x27;
          *(undefined8 *)(lVar13 + 8) = 0x140c60;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 4;
          return (int *)lVar13;
        }
      }
      break;
    case 0x69:
      iVar10 = *(int *)(param_1 + 0x28);
      if (iVar10 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar10 + 1;
        lVar13 = *(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18;
        if (lVar13 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18) = 0x27;
          *(undefined8 *)(lVar13 + 8) = 0x140ca0;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 8;
          return (int *)lVar13;
        }
      }
      break;
    case 0x6e:
      iVar10 = *(int *)(param_1 + 0x28);
      if (iVar10 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar10 + 1;
        lVar13 = *(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18;
        if (lVar13 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18) = 0x27;
          *(undefined8 *)(lVar13 + 8) = 0x140cc0;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x11;
          return (int *)lVar13;
        }
      }
      break;
    case 0x70:
      uVar16 = FUN_00125bf8(param_1);
      local_8 = (int *)FUN_00122ff4(param_1,0x4a,uVar16,0);
      goto LAB_00125d58;
    case 0x73:
      iVar10 = *(int *)(param_1 + 0x28);
      if (iVar10 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar10 + 1;
        lVar13 = *(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18;
        if (lVar13 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18) = 0x27;
          *(undefined8 *)(lVar13 + 8) = 0x140c80;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 8;
          return (int *)lVar13;
        }
      }
      break;
    case 0x76:
      local_8 = (int *)FUN_001290a8(param_1);
      goto LAB_00125d58;
    default:
      goto switchD_00125c74_caseD_3a;
    }
LAB_0012659c:
    local_8 = (int *)0x0;
                    // WARNING: Could not recover jumptable at 0x001265a8. Too many branches
                    // WARNING: Treating indirect jump as call
    UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1000,0x1265ac);
    uVar16 = (*UNRECOVERED_JUMPTABLE_00)(_DAT_00000008);
    return (int *)uVar16;
  case 0x46:
    local_8 = (int *)FUN_00128f78(param_1);
    break;
  case 0x47:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    uVar16 = FUN_00125bf8(param_1);
    local_8 = (int *)FUN_00122ff4(param_1,0x26,uVar16,0);
    break;
  case 0x4d:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    lVar13 = FUN_00125bf8(param_1);
    if ((lVar13 == 0) || (lVar14 = FUN_00125bf8(param_1), lVar14 == 0)) {
LAB_00125e1c:
      local_8 = (int *)0x0;
    }
    else {
      local_8 = (int *)FUN_00122ff4(param_1,0x2b,lVar13,lVar14);
    }
    break;
  case 0x4f:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    uVar16 = FUN_00125bf8(param_1);
    local_8 = (int *)FUN_00122ff4(param_1,0x24,uVar16,0);
    break;
  case 0x50:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    uVar16 = FUN_00125bf8(param_1);
    local_8 = (int *)FUN_00122ff4(param_1,0x22,uVar16,0);
    break;
  case 0x52:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    uVar16 = FUN_00125bf8(param_1);
    local_8 = (int *)FUN_00122ff4(param_1,0x23,uVar16,0);
    break;
  case 0x53:
    bVar7 = pbVar22[1];
    if (((9 < (byte)(bVar7 - 0x30)) && (bVar7 != 0x5f)) && (0x19 < (byte)(bVar7 + 0xbf))) {
      local_8 = (int *)FUN_00127b28(param_1);
      if (local_8 == (int *)0x0) {
        return (int *)0;
      }
      if (*local_8 == 0x18) {
        return local_8;
      }
      goto LAB_00125d5c;
    }
    local_8 = (int *)FUN_001232a4(param_1,0);
    if (**(char **)(param_1 + 0x18) != 'I') {
      return local_8;
    }
LAB_00126004:
    piVar12 = local_8;
    uVar16 = FUN_00123fb8(param_1);
    local_8 = (int *)FUN_00122ff4(param_1,4,piVar12,uVar16);
    break;
  case 0x54:
    local_8 = (int *)FUN_00123de0(param_1);
    __s1 = *(char **)(param_1 + 0x18);
    if (*__s1 == 'I') {
      if (*(int *)(param_1 + 0x58) == 0) {
        if (local_8 == (int *)0x0) {
          return (int *)0;
        }
        iVar10 = *(int *)(param_1 + 0x38);
        if (*(int *)(param_1 + 0x3c) <= iVar10) {
          return (int *)0;
        }
        *(int **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar10 * 8) = local_8;
        *(int *)(param_1 + 0x38) = iVar10 + 1;
        goto LAB_00126004;
      }
      uVar2 = *(undefined4 *)(param_1 + 0x28);
      uVar3 = *(undefined4 *)(param_1 + 0x38);
      uVar4 = *(undefined4 *)(param_1 + 0x40);
      uVar5 = *(undefined4 *)(param_1 + 0x50);
      uVar16 = FUN_00123fb8(param_1);
      if (**(char **)(param_1 + 0x18) == 'I') {
        if (local_8 == (int *)0x0) {
          return (int *)0;
        }
        iVar10 = *(int *)(param_1 + 0x38);
        if (*(int *)(param_1 + 0x3c) <= iVar10) {
          return (int *)0;
        }
        *(int **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar10 * 8) = local_8;
        *(int *)(param_1 + 0x38) = iVar10 + 1;
        local_8 = (int *)FUN_00122ff4(param_1,4,local_8,uVar16);
      }
      else {
        *(char **)(param_1 + 0x18) = __s1;
        *(undefined4 *)(param_1 + 0x28) = uVar2;
        *(undefined4 *)(param_1 + 0x38) = uVar3;
        *(undefined4 *)(param_1 + 0x40) = uVar4;
        *(undefined4 *)(param_1 + 0x50) = uVar5;
      }
    }
    break;
  case 0x55:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    local_8 = (int *)FUN_00123c08(param_1);
    uVar16 = FUN_00125bf8(param_1);
    local_8 = (int *)FUN_00122ff4(param_1,0x21,uVar16,local_8);
    break;
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x73:
  case 0x74:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
    uVar9 = (uint)bVar7 - 0x61;
    iVar10 = *(int *)(param_1 + 0x28);
    uVar15 = -(ulonglong)(uVar9 >> 0x1f) & 0xffffffe000000000 | (ulonglong)uVar9 << 5;
    if (iVar10 < *(int *)(param_1 + 0x2c)) {
      *(int *)(param_1 + 0x28) = iVar10 + 1;
      lVar13 = *(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18;
      if (lVar13 != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18) = 0x27;
        *(longlong *)(lVar13 + 8) = (longlong)&PTR_s_signed_char_001408c0 + uVar15;
        iVar10 = *(int *)(&DAT_001408c8 + uVar15);
        *(byte **)(param_1 + 0x18) = pbVar22 + 1;
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar10;
        return (int *)lVar13;
      }
    }
    goto LAB_0012659c;
  case 0x75:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    uVar16 = FUN_00123c08(param_1);
    local_8 = (int *)FUN_00122ff4(param_1,0x28,uVar16,0);
  }
LAB_00125d58:
  if (local_8 != (int *)0x0) {
LAB_00125d5c:
    iVar10 = *(int *)(param_1 + 0x38);
    if (iVar10 < *(int *)(param_1 + 0x3c)) {
      *(int **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar10 * 8) = local_8;
      *(int *)(param_1 + 0x38) = iVar10 + 1;
      return local_8;
    }
  }
switchD_00125c74_caseD_3a:
  return (int *)0;
switchD_00126cb0_caseD_1:
  cVar8 = *__s1;
  if (((cVar8 == 'm') || (cVar8 == 'p')) && (__s1[1] == cVar8)) {
    bVar7 = **(byte **)(param_1 + 0x18);
    if (bVar7 != 0x5f) {
      uVar16 = FUN_00128910(param_1,(ulonglong)bVar7,0);
      uVar16 = FUN_00122ff4(param_1,0x38,uVar16,uVar16);
      goto LAB_0012649c;
    }
    *(byte **)(param_1 + 0x18) = *(byte **)(param_1 + 0x18) + 1;
  }
  goto switchD_00126ec8_caseD_1;
}



longlong FUN_001272a0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong local_8;
  
  pcVar3 = *(char **)(param_1 + 0x18);
  local_8 = 0;
  cVar1 = *pcVar3;
  if ((cVar1 != 'E' && cVar1 != '\0') && (plVar4 = &local_8, cVar1 != '.')) {
    while (((cVar1 != 'O' && (cVar1 != 'R')) || (pcVar3[1] != 'E'))) {
      lVar2 = FUN_00125bf8(param_1);
      if (lVar2 == 0) {
        return 0;
      }
      lVar2 = FUN_00122ff4(param_1,0x2e,lVar2,0);
      *plVar4 = lVar2;
      plVar4 = (longlong *)(lVar2 + 0x10);
      if (lVar2 == 0) {
        return 0;
      }
      pcVar3 = *(char **)(param_1 + 0x18);
      cVar1 = *pcVar3;
      if ((cVar1 == 'E' || cVar1 == '\0') || (cVar1 == '.')) break;
    }
    if (local_8 != 0) {
      if (*(longlong *)(local_8 + 0x10) != 0) {
        return local_8;
      }
      if (**(int **)(local_8 + 8) == 0x27) {
        lVar2 = *(longlong *)(*(int **)(local_8 + 8) + 2);
        if (*(int *)(lVar2 + 0x1c) == 9) {
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) - *(int *)(lVar2 + 8);
          *(undefined8 *)(local_8 + 8) = 0;
          return local_8;
        }
        return local_8;
      }
      return local_8;
    }
  }
  return 0;
}



longlong FUN_001273b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong lVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  byte bVar11;
  
  pbVar7 = *(byte **)(param_1 + 0x18);
  if (*pbVar7 == 0) {
    bVar11 = 0;
    bVar10 = 0;
  }
  else {
    *(byte **)(param_1 + 0x18) = pbVar7 + 1;
    bVar10 = *pbVar7;
    if (pbVar7[1] == 0) {
      bVar11 = 0;
    }
    else {
      *(byte **)(param_1 + 0x18) = pbVar7 + 2;
      bVar11 = pbVar7[1];
      if (bVar10 == 0x76) {
        if (((uint)bVar11 - 0x30 & 0xff) < 10) {
          lVar6 = FUN_00123c08();
          iVar8 = *(int *)(param_1 + 0x28);
          if (*(int *)(param_1 + 0x2c) <= iVar8) {
            return 0;
          }
          *(int *)(param_1 + 0x28) = iVar8 + 1;
          lVar2 = *(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 0x18;
          if (lVar6 == 0) {
            return 0;
          }
          if (lVar2 == 0) {
            return 0;
          }
          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 0x18) = 0x32;
          *(uint *)(lVar2 + 8) = (uint)bVar11 - 0x30;
          *(longlong *)(lVar2 + 0x10) = lVar6;
          return lVar2;
        }
      }
      else {
        if ((bVar11 == 0x76) && (bVar10 == 99)) {
          uVar3 = *(undefined4 *)(param_1 + 0x58);
          *(uint *)(param_1 + 0x58) = (uint)(*(int *)(param_1 + 0x54) == 0);
          uVar5 = FUN_00125bf8();
          if (*(int *)(param_1 + 0x58) == 0) {
            uVar5 = FUN_00122ff4(param_1,0x33,uVar5,0);
            *(undefined4 *)(param_1 + 0x58) = uVar3;
          }
          else {
            uVar5 = FUN_00122ff4(param_1,0x34,uVar5,0);
            *(undefined4 *)(param_1 + 0x58) = uVar3;
          }
          return uVar5;
        }
      }
    }
  }
  iVar9 = 0x3d;
  iVar8 = 0;
  do {
    iVar1 = iVar8 + (iVar9 - iVar8) / 2;
    bVar4 = *(&PTR_DAT_00140e68)[(longlong)iVar1 * 3];
    if (bVar10 == bVar4) {
      bVar4 = (&PTR_DAT_00140e68)[(longlong)iVar1 * 3][1];
      if (bVar11 == bVar4) {
        iVar8 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x2c) <= iVar8) {
          return 0;
        }
        *(int *)(param_1 + 0x28) = iVar8 + 1;
        lVar6 = *(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 0x18;
        if (lVar6 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 0x18) = 0x31;
          *(undefined ***)(lVar6 + 8) = &PTR_DAT_00140e68 + (longlong)iVar1 * 3;
          return lVar6;
        }
        return 0;
      }
      if (bVar4 <= bVar11) goto LAB_00127448;
    }
    else {
      if (bVar4 <= bVar10) {
LAB_00127448:
        iVar8 = iVar1 + 1;
        iVar1 = iVar9;
      }
    }
    iVar9 = iVar1;
    if (iVar8 == iVar9) {
      return 0;
    }
  } while( true );
}



int * FUN_001275a4(longlong param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  longlong lVar6;
  char *pcVar7;
  char *__s1;
  ulonglong uVar8;
  char cVar9;
  byte *pbVar10;
  bool bVar11;
  int *local_8;
  
  __s1 = *(char **)(param_1 + 0x18);
  cVar9 = *__s1;
  if ((byte)(cVar9 - 0x30U) < 10) {
    local_8 = (int *)FUN_00123c08();
    pcVar7 = *(char **)(param_1 + 0x18);
    cVar9 = *pcVar7;
    goto joined_r0x001276fc;
  }
  if ((byte)(cVar9 + 0x9fU) < 0x1a) {
    local_8 = (int *)FUN_001273b0();
    if ((local_8 != (int *)0x0) && (*local_8 == 0x31)) {
      __s1 = **(char ***)(local_8 + 2);
      *(int *)(param_1 + 0x50) =
           *(int *)(param_1 + 0x50) + *(int *)(*(char ***)(local_8 + 2) + 2) + 7;
      iVar3 = strcmp(__s1,"li");
      if (iVar3 == 0) {
        uVar4 = FUN_00123c08(param_1);
        local_8 = (int *)FUN_00122ff4(param_1,0x36,local_8,uVar4);
      }
    }
    pcVar7 = *(char **)(param_1 + 0x18);
    cVar9 = *pcVar7;
    goto joined_r0x001276fc;
  }
  if (1 < (byte)(cVar9 + 0xbdU)) {
    if (cVar9 == 'L') {
      *(char **)(param_1 + 0x18) = __s1 + 1;
      local_8 = (int *)FUN_00123c08();
      if (local_8 == (int *)0x0) {
        return (int *)0;
      }
      iVar3 = FUN_00123d3c(param_1);
      if (iVar3 == 0) {
        return (int *)0;
      }
      cVar9 = **(char **)(param_1 + 0x18);
      pcVar7 = *(char **)(param_1 + 0x18);
      goto joined_r0x001276fc;
    }
    if (cVar9 != 'U') {
      return (int *)0;
    }
    if (__s1[1] == 'l') {
      pcVar7 = __s1 + 1;
      *(char **)(param_1 + 0x18) = pcVar7;
      cVar9 = __s1[1];
      if (cVar9 == 'l') {
        *(char **)(param_1 + 0x18) = __s1 + 2;
        lVar6 = FUN_001272a0();
        pcVar7 = *(char **)(param_1 + 0x18);
        if (lVar6 == 0) goto LAB_00127930;
        cVar9 = *pcVar7;
        if (cVar9 == 'E') {
          *(char **)(param_1 + 0x18) = pcVar7 + 1;
          if (pcVar7[1] == '_') {
            __s1 = pcVar7 + 2;
            iVar3 = 0;
            *(char **)(param_1 + 0x18) = __s1;
          }
          else {
            if (pcVar7[1] == 'n') {
              return (int *)0;
            }
            local_8 = (int *)0x0;
            iVar3 = FUN_001236a8(param_1 + 0x18);
            pcVar7 = *(char **)(param_1 + 0x18);
            cVar9 = *pcVar7;
            if (cVar9 != '_') goto joined_r0x001276fc;
            iVar3 = iVar3 + 1;
            __s1 = pcVar7 + 1;
            *(char **)(param_1 + 0x18) = __s1;
            if (iVar3 < 0) {
              cVar9 = pcVar7[1];
              pcVar7 = __s1;
              local_8 = (int *)0x0;
              goto joined_r0x001276fc;
            }
          }
          iVar1 = *(int *)(param_1 + 0x28);
          if (iVar1 < *(int *)(param_1 + 0x2c)) {
            *(int *)(param_1 + 0x28) = iVar1 + 1;
            local_8 = (int *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 0x18);
            if (local_8 != (int *)0x0) {
              *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 0x18) = 0x45;
              *(longlong *)(local_8 + 2) = lVar6;
              local_8[4] = iVar3;
              iVar3 = *(int *)(param_1 + 0x38);
              if (iVar3 < *(int *)(param_1 + 0x3c)) goto LAB_00127884;
            }
          }
          cVar9 = *__s1;
          local_8 = (int *)0x0;
          pcVar7 = __s1;
          goto joined_r0x001276fc;
        }
      }
    }
    else {
      if (__s1[1] != 't') {
        return (int *)0;
      }
      pcVar7 = __s1 + 1;
      *(char **)(param_1 + 0x18) = pcVar7;
      cVar9 = __s1[1];
      if (cVar9 == 't') {
        *(char **)(param_1 + 0x18) = __s1 + 2;
        lVar6 = FUN_00123cb0();
        if ((-1 < lVar6) && (iVar3 = *(int *)(param_1 + 0x28), iVar3 < *(int *)(param_1 + 0x2c))) {
          *(int *)(param_1 + 0x28) = iVar3 + 1;
          local_8 = (int *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 0x18);
          if (local_8 != (int *)0x0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 0x18) = 0x47;
            *(longlong *)(local_8 + 2) = lVar6;
            iVar3 = *(int *)(param_1 + 0x38);
            if (iVar3 < *(int *)(param_1 + 0x3c)) {
LAB_00127884:
              *(int **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar3 * 8) = local_8;
              *(int *)(param_1 + 0x38) = iVar3 + 1;
              cVar9 = **(char **)(param_1 + 0x18);
              pcVar7 = *(char **)(param_1 + 0x18);
              goto joined_r0x001276fc;
            }
          }
        }
        pcVar7 = *(char **)(param_1 + 0x18);
LAB_00127930:
        cVar9 = *pcVar7;
        local_8 = (int *)0x0;
        goto joined_r0x001276fc;
      }
    }
    local_8 = (int *)0x0;
    goto joined_r0x001276fc;
  }
  piVar5 = *(int **)(param_1 + 0x48);
  if ((piVar5 == (int *)0x0) || ((*piVar5 != 0 && (*piVar5 != 0x18)))) {
    if (cVar9 == 'C') goto LAB_00127a74;
    if (cVar9 != 'D') {
      return (int *)0;
    }
LAB_00127960:
    switch(__s1[1]) {
    case '0':
      iVar3 = 1;
      break;
    case '1':
      iVar3 = 2;
      break;
    case '2':
      iVar3 = 3;
      break;
    default:
switchD_00127a98_caseD_5:
      return (int *)0;
    case '4':
      iVar3 = 4;
      break;
    case '5':
      iVar3 = 5;
    }
    iVar1 = *(int *)(param_1 + 0x28);
    pcVar7 = __s1 + 2;
    *(char **)(param_1 + 0x18) = pcVar7;
    if (iVar1 < *(int *)(param_1 + 0x2c)) {
      *(int *)(param_1 + 0x28) = iVar1 + 1;
      local_8 = (int *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 0x18);
      if ((local_8 != (int *)0x0) && (piVar5 != (int *)0x0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 0x18) = 8;
        local_8[2] = iVar3;
        *(int **)(local_8 + 4) = piVar5;
        cVar9 = __s1[2];
        goto joined_r0x001276fc;
      }
    }
  }
  else {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + piVar5[4];
    cVar9 = *__s1;
    if (cVar9 != 'C') {
      if (cVar9 != 'D') {
        local_8 = (int *)0x0;
        pcVar7 = __s1;
        goto joined_r0x001276fc;
      }
      goto LAB_00127960;
    }
LAB_00127a74:
    switch(__s1[1]) {
    case '1':
      iVar3 = 1;
      break;
    case '2':
      iVar3 = 2;
      break;
    case '3':
      iVar3 = 3;
      break;
    case '4':
      iVar3 = 4;
      break;
    case '5':
      iVar3 = 5;
      break;
    default:
      goto switchD_00127a98_caseD_5;
    }
    iVar1 = *(int *)(param_1 + 0x28);
    pcVar7 = __s1 + 2;
    *(char **)(param_1 + 0x18) = pcVar7;
    if (iVar1 < *(int *)(param_1 + 0x2c)) {
      *(int *)(param_1 + 0x28) = iVar1 + 1;
      local_8 = (int *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 0x18);
      if ((local_8 != (int *)0x0) && (piVar5 != (int *)0x0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 0x18) = 7;
        local_8[2] = iVar3;
        *(int **)(local_8 + 4) = piVar5;
        cVar9 = __s1[2];
        goto joined_r0x001276fc;
      }
    }
  }
  pcVar7 = __s1 + 2;
  cVar9 = *pcVar7;
  local_8 = (int *)0x0;
joined_r0x001276fc:
  if (cVar9 != 'B') {
    return local_8;
  }
  do {
    *(char **)(param_1 + 0x18) = pcVar7 + 1;
    bVar11 = false;
    bVar2 = pcVar7[1];
    if (bVar2 == 0x6e) {
      *(char **)(param_1 + 0x18) = pcVar7 + 2;
      bVar11 = true;
      bVar2 = pcVar7[2];
      if ((byte)(bVar2 - 0x30) < 10) goto LAB_0012765c;
LAB_0012772c:
      uVar4 = 0;
    }
    else {
      if (9 < (byte)(bVar2 - 0x30)) goto LAB_0012772c;
LAB_0012765c:
      pbVar10 = *(byte **)(param_1 + 0x18);
      lVar6 = 0;
      do {
        pbVar10 = pbVar10 + 1;
        uVar8 = (ulonglong)bVar2;
        *(byte **)(param_1 + 0x18) = pbVar10;
        bVar2 = *pbVar10;
        lVar6 = lVar6 * 10 + uVar8 + -0x30;
      } while ((byte)(bVar2 - 0x30) < 10);
      if ((lVar6 < 1) || (bVar11)) goto LAB_0012772c;
      uVar4 = FUN_001239e8(param_1);
      *(undefined8 *)(param_1 + 0x48) = uVar4;
    }
    local_8 = (int *)FUN_00122ff4(param_1,0x4b,local_8,uVar4);
    pcVar7 = *(char **)(param_1 + 0x18);
    if (*pcVar7 != 'B') {
      return local_8;
    }
  } while( true );
}



longlong FUN_00127b28(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  longlong lVar9;
  int *piVar10;
  undefined *puVar11;
  int *piVar12;
  char cVar13;
  longlong lVar14;
  longlong local_8;
  
  puVar11 = *(undefined **)(param_1 + 0x18);
  switch(*puVar11) {
  case 0x4e:
    *(undefined **)(param_1 + 0x18) = puVar11 + 1;
    plVar5 = (longlong *)FUN_001230f4(param_1,&local_8,1);
    if (plVar5 == (longlong *)0x0) {
      return 0;
    }
    pcVar4 = *(char **)(param_1 + 0x18);
    cVar13 = *pcVar4;
    if (cVar13 == 'O') {
      if (cVar13 == 'R') goto LAB_00127f84;
      uVar7 = 0x20;
      iVar1 = *(int *)(param_1 + 0x50) + 3;
    }
    else {
      lVar3 = 0;
      if (cVar13 != 'R') {
        lVar14 = 0;
        goto LAB_00127ca4;
      }
LAB_00127f84:
      uVar7 = 0x1f;
      iVar1 = *(int *)(param_1 + 0x50) + 2;
    }
    *(int *)(param_1 + 0x50) = iVar1;
    *(char **)(param_1 + 0x18) = pcVar4 + 1;
    lVar14 = 0;
    lVar3 = FUN_00122ff4(param_1,uVar7,0,0);
    pcVar4 = *(char **)(param_1 + 0x18);
    cVar13 = *pcVar4;
LAB_00127ca4:
    do {
      if (cVar13 == '\0') {
LAB_00127f2c:
        *plVar5 = 0;
        return 0;
      }
      pcVar8 = pcVar4;
      if (cVar13 == 'D') {
        if ((pcVar4[1] & 0xdfU) != 0x54) {
          lVar9 = FUN_001275a4(param_1);
          goto LAB_00127f14;
        }
        lVar9 = FUN_00125bf8();
        goto LAB_00127f14;
      }
      do {
        if ((((byte)(cVar13 - 0x30U) < 10) || ((byte)(cVar13 + 0x9fU) < 0x1a)) ||
           ((cVar13 == 'C' || cVar13 == 'U' || (cVar13 == 'L')))) {
          lVar9 = FUN_001275a4(param_1);
          if (lVar14 != 0) goto LAB_00127e90;
LAB_00127ea4:
          if (cVar13 == 'S') goto LAB_00127ee0;
        }
        else {
          if (cVar13 == 'S') {
            lVar9 = FUN_001232a4(param_1,1);
            if (lVar14 != 0) {
LAB_00127e90:
              uVar7 = 1;
LAB_00127e94:
              lVar9 = FUN_00122ff4(param_1,uVar7,lVar14,lVar9);
              goto LAB_00127ea4;
            }
            pcVar4 = *(char **)(param_1 + 0x18);
            cVar13 = *pcVar4;
            lVar14 = lVar9;
            goto LAB_00127ca4;
          }
          if (cVar13 == 'I') {
            if (lVar14 != 0) {
              lVar9 = FUN_00123fb8(param_1);
              uVar7 = 4;
              goto LAB_00127e94;
            }
            goto LAB_00127f2c;
          }
          if (cVar13 != 'T') {
            if (cVar13 == 'E') {
              *plVar5 = lVar14;
              if (lVar14 == 0) {
                return 0;
              }
              if (lVar3 != 0) {
                *(longlong *)(lVar3 + 8) = local_8;
                local_8 = lVar3;
              }
              if (**(char **)(param_1 + 0x18) == 'E') {
                *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                return local_8;
              }
              return 0;
            }
            if ((cVar13 != 'M') || (lVar14 == 0)) goto LAB_00127f2c;
            pcVar4 = pcVar8 + 1;
            *(char **)(param_1 + 0x18) = pcVar4;
            cVar13 = pcVar8[1];
            goto LAB_00127ca4;
          }
          lVar9 = FUN_00123de0(param_1);
LAB_00127f14:
          if (lVar14 != 0) goto LAB_00127e90;
        }
        pcVar8 = *(char **)(param_1 + 0x18);
        cVar13 = *pcVar8;
        lVar14 = lVar9;
      } while (cVar13 == 'E');
      if ((lVar9 == 0) || (iVar1 = *(int *)(param_1 + 0x38), *(int *)(param_1 + 0x3c) <= iVar1))
      goto LAB_00127f2c;
      *(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 8) = lVar9;
      *(int *)(param_1 + 0x38) = iVar1 + 1;
LAB_00127ee0:
      pcVar4 = *(char **)(param_1 + 0x18);
      cVar13 = *pcVar4;
      lVar14 = lVar9;
    } while( true );
  default:
    lVar3 = FUN_001275a4(param_1);
    if (**(char **)(param_1 + 0x18) == 'I') {
      if (lVar3 == 0) {
        return 0;
      }
      iVar1 = *(int *)(param_1 + 0x38);
      if (*(int *)(param_1 + 0x3c) <= iVar1) {
        return 0;
      }
      *(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 8) = lVar3;
      *(int *)(param_1 + 0x38) = iVar1 + 1;
      uVar7 = FUN_00123fb8(param_1);
      lVar3 = FUN_00122ff4(param_1,4,lVar3,uVar7);
    }
    break;
  case 0x53:
    if (puVar11[1] == 't') {
      *(undefined **)(param_1 + 0x18) = puVar11 + 2;
      uVar7 = FUN_00123094(param_1,&DAT_00138448,3);
      uVar6 = FUN_001275a4(param_1);
      lVar3 = FUN_00122ff4(param_1,1,uVar7,uVar6);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 3;
      if (**(char **)(param_1 + 0x18) != 'I') {
        return lVar3;
      }
      if (lVar3 == 0) {
        return 0;
      }
      iVar1 = *(int *)(param_1 + 0x38);
      if (*(int *)(param_1 + 0x3c) <= iVar1) {
        return 0;
      }
      *(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 8) = lVar3;
      *(int *)(param_1 + 0x38) = iVar1 + 1;
    }
    else {
      lVar3 = FUN_001232a4(param_1,0);
      if (**(char **)(param_1 + 0x18) != 'I') {
        return lVar3;
      }
    }
    uVar7 = FUN_00123fb8(param_1);
    lVar3 = FUN_00122ff4(param_1,4,lVar3,uVar7);
    break;
  case 0x55:
    uVar7 = FUN_001275a4(param_1);
    return uVar7;
  case 0x5a:
    *(undefined **)(param_1 + 0x18) = puVar11 + 1;
    uVar7 = FUN_001280d4(param_1,0);
    pcVar4 = *(char **)(param_1 + 0x18);
    if (*pcVar4 != 'E') {
      return 0;
    }
    *(char **)(param_1 + 0x18) = pcVar4 + 1;
    if (pcVar4[1] == 's') {
      *(char **)(param_1 + 0x18) = pcVar4 + 2;
      iVar1 = FUN_00123d3c(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      piVar12 = (int *)FUN_00123094(param_1,"string literal",0xe);
    }
    else {
      if (pcVar4[1] == 'd') {
        *(char **)(param_1 + 0x18) = pcVar4 + 2;
        iVar1 = FUN_00123cb0(param_1);
        if (iVar1 < 0) {
          return 0;
        }
        piVar10 = (int *)FUN_00127b28(param_1);
        if ((((piVar10 != (int *)0x0) && (*piVar10 != 0x45)) && (*piVar10 != 0x47)) &&
           (iVar2 = FUN_00123d3c(param_1), iVar2 == 0)) {
          return 0;
        }
        iVar2 = *(int *)(param_1 + 0x28);
        piVar12 = (int *)0x0;
        if (iVar2 < *(int *)(param_1 + 0x2c)) {
          *(int *)(param_1 + 0x28) = iVar2 + 1;
          piVar12 = (int *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 0x18);
          if (piVar12 != (int *)0x0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 0x18) = 0x46;
            piVar12[4] = iVar1;
            *(int **)(piVar12 + 2) = piVar10;
          }
        }
      }
      else {
        piVar12 = (int *)FUN_00127b28(param_1);
        if (((piVar12 != (int *)0x0) && (*piVar12 != 0x45)) &&
           ((*piVar12 != 0x47 && (iVar1 = FUN_00123d3c(param_1), iVar1 == 0)))) {
          return 0;
        }
      }
    }
    uVar7 = FUN_00122ff4(param_1,2,uVar7,piVar12);
    return uVar7;
  }
  return lVar3;
}



uint * FUN_001280d4(longlong param_1,int param_2)

{
  uint **ppuVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int *piVar7;
  undefined8 uVar8;
  char *pcVar9;
  longlong lVar10;
  uint *puVar11;
  uint *puVar12;
  ulonglong uVar13;
  char *pcVar14;
  
  pcVar9 = *(char **)(param_1 + 0x18);
  if ((*pcVar9 != 'T') && (*pcVar9 != 'G')) {
    puVar12 = (uint *)FUN_00127b28();
    if ((puVar12 != (uint *)0x0) && ((param_2 != 0 && ((*(uint *)(param_1 + 0x10) & 1) == 0)))) {
      while (*puVar12 - 0x1c < 5) {
        puVar12 = *(uint **)(puVar12 + 2);
      }
      if (*puVar12 == 2) {
        piVar7 = *(int **)(puVar12 + 4);
        iVar4 = *piVar7;
        while (iVar4 - 0x1cU < 5) {
          piVar7 = *(int **)(piVar7 + 2);
          iVar4 = *piVar7;
        }
        *(int **)(puVar12 + 4) = piVar7;
      }
      return puVar12;
    }
    cVar2 = **(char **)(param_1 + 0x18);
    if (cVar2 == 'E' || cVar2 == '\0') {
      return puVar12;
    }
    puVar11 = puVar12;
    if (puVar12 == (uint *)0x0) {
      return (uint *)0;
    }
    do {
      uVar5 = *puVar11;
      if (uVar5 == 4) {
        puVar11 = *(uint **)(puVar11 + 2);
        goto joined_r0x0012821c;
      }
    } while (((3 < uVar5) && (uVar5 - 0x1c < 5)) &&
            (ppuVar1 = (uint **)(puVar11 + 2), puVar11 = *ppuVar1, *ppuVar1 != (uint *)0x0));
LAB_00128170:
    if (cVar2 == 'J') goto LAB_001286c0;
    lVar10 = 0;
    goto LAB_00128260;
  }
  iVar4 = *(int *)(param_1 + 0x50);
  *(int *)(param_1 + 0x50) = iVar4 + 0x14;
  if (*pcVar9 == 'T') {
    *(char **)(param_1 + 0x18) = pcVar9 + 1;
    if (pcVar9[1] == '\0') {
      return (uint *)0;
    }
    *(char **)(param_1 + 0x18) = pcVar9 + 2;
    switch(pcVar9[1]) {
    case 'C':
      lVar10 = FUN_00125bf8(param_1);
      lVar6 = FUN_001236a8(param_1 + 0x18);
      if (lVar6 < 0) {
        return (uint *)0;
      }
      if (**(char **)(param_1 + 0x18) != '_') {
        return (uint *)0;
      }
      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
      puVar12 = (uint *)FUN_00125bf8(param_1);
      uVar8 = 0xb;
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 5;
      break;
    default:
      return (uint *)0;
    case 'F':
      puVar12 = (uint *)FUN_00125bf8(param_1);
      uVar8 = 0xe;
      lVar10 = 0;
      break;
    case 'H':
      puVar12 = (uint *)FUN_00127b28(param_1);
      uVar8 = 0x14;
      lVar10 = 0;
      break;
    case 'I':
      puVar12 = (uint *)FUN_00125bf8(param_1);
      uVar8 = 0xc;
      lVar10 = 0;
      break;
    case 'J':
      puVar12 = (uint *)FUN_00125bf8(param_1);
      uVar8 = 0x12;
      lVar10 = 0;
      break;
    case 'S':
      puVar12 = (uint *)FUN_00125bf8(param_1);
      uVar8 = 0xd;
      lVar10 = 0;
      break;
    case 'T':
      *(int *)(param_1 + 0x50) = iVar4 + 10;
      puVar12 = (uint *)FUN_00125bf8(param_1);
      uVar8 = 10;
      lVar10 = 0;
      break;
    case 'V':
      *(int *)(param_1 + 0x50) = iVar4 + 0xf;
      puVar12 = (uint *)FUN_00125bf8(param_1);
      uVar8 = 9;
      lVar10 = 0;
      break;
    case 'W':
      puVar12 = (uint *)FUN_00127b28(param_1);
      uVar8 = 0x15;
      lVar10 = 0;
      break;
    case 'c':
      iVar4 = FUN_00123ecc(param_1,0);
      if (iVar4 == 0) {
        return (uint *)0;
      }
      iVar4 = FUN_00123ecc(param_1,0);
      if (iVar4 == 0) {
        return (uint *)0;
      }
      puVar12 = (uint *)FUN_001280d4(param_1,0);
      uVar8 = 0x11;
      lVar10 = 0;
      break;
    case 'h':
      iVar4 = FUN_00123ecc(param_1,0x68);
      if (iVar4 == 0) {
        return (uint *)0;
      }
      puVar12 = (uint *)FUN_001280d4(param_1,0);
      uVar8 = 0xf;
      lVar10 = 0;
      break;
    case 'v':
      iVar4 = FUN_00123ecc(param_1,0x76);
      if (iVar4 == 0) {
        return (uint *)0;
      }
      puVar12 = (uint *)FUN_001280d4(param_1,0);
      uVar8 = 0x10;
      lVar10 = 0;
    }
    goto LAB_00128294;
  }
  if (*pcVar9 != 'G') {
    return (uint *)0;
  }
  *(char **)(param_1 + 0x18) = pcVar9 + 1;
  if (pcVar9[1] == '\0') {
    return (uint *)0;
  }
  *(char **)(param_1 + 0x18) = pcVar9 + 2;
  switch(pcVar9[1]) {
  case 'A':
    puVar12 = (uint *)FUN_001280d4(param_1,0);
    uVar8 = 0x17;
    lVar10 = 0;
    break;
  default:
    return (uint *)0;
  case 'R':
    puVar12 = (uint *)FUN_00127b28(param_1);
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 < *(int *)(param_1 + 0x2c)) {
      *(int *)(param_1 + 0x28) = iVar4 + 1;
      lVar10 = *(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x18;
      if (lVar10 == 0) goto LAB_0012877c;
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x18) = 0x41;
      uVar8 = FUN_001236a8(param_1 + 0x18);
      *(undefined8 *)(lVar10 + 8) = uVar8;
    }
    else {
LAB_0012877c:
      lVar10 = 0;
    }
    uVar8 = 0x16;
    break;
  case 'T':
    if ((pcVar9[2] == '\0') || (*(char **)(param_1 + 0x18) = pcVar9 + 3, pcVar9[2] != 'n')) {
      puVar12 = (uint *)FUN_001280d4(param_1,0);
      uVar8 = 0x48;
      lVar10 = 0;
    }
    else {
      puVar12 = (uint *)FUN_001280d4(param_1,0);
      uVar8 = 0x49;
      lVar10 = 0;
    }
    break;
  case 'V':
    puVar12 = (uint *)FUN_00127b28(param_1);
    uVar8 = 0x13;
    lVar10 = 0;
    break;
  case 'r':
    lVar10 = FUN_001236a8(param_1 + 0x18);
    if (lVar10 < 2) {
      return (uint *)0;
    }
    pcVar9 = *(char **)(param_1 + 0x18);
    if (*pcVar9 == '\0') {
      return (uint *)0;
    }
    pcVar14 = pcVar9 + 1;
    *(char **)(param_1 + 0x18) = pcVar14;
    if (*pcVar9 != '_') {
      return (uint *)0;
    }
    lVar10 = lVar10 + -1;
    puVar11 = (uint *)0x0;
    do {
      if (*pcVar14 == '\0') {
        return (uint *)0;
      }
      uVar13 = 0;
      if (*pcVar14 == '$') {
        bVar3 = pcVar14[1];
        uVar5 = (uint)bVar3;
        if (bVar3 == 0x53) {
          uVar5 = 0x2f;
        }
        else {
          if (bVar3 == 0x5f) {
            uVar5 = 0x2e;
          }
          else {
            if (bVar3 != 0x24) {
              return (uint *)0;
            }
          }
        }
        iVar4 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x2c) <= iVar4) {
LAB_00128784:
          *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 2;
          return (uint *)0;
        }
        *(int *)(param_1 + 0x28) = iVar4 + 1;
        puVar12 = (uint *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x18);
        if (puVar12 == (uint *)0x0) goto LAB_00128784;
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x18) = 0x40;
        lVar6 = -2;
        puVar12[2] = uVar5;
        pcVar14 = (char *)(*(longlong *)(param_1 + 0x18) + 2);
        *(char **)(param_1 + 0x18) = pcVar14;
      }
      else {
        do {
          uVar13 = uVar13 + 1;
          if ((lVar10 <= (longlong)uVar13) || (pcVar14[uVar13] == '\0')) break;
        } while (pcVar14[uVar13] != '$');
        lVar6 = -uVar13;
        puVar12 = (uint *)FUN_00123094(param_1,pcVar14,uVar13 & 0xffffffff);
        pcVar14 = (char *)(*(longlong *)(param_1 + 0x18) + uVar13);
        *(char **)(param_1 + 0x18) = pcVar14;
        if (puVar12 == (uint *)0x0) {
          return (uint *)0;
        }
      }
      lVar10 = lVar10 + lVar6;
      if ((puVar11 != (uint *)0x0) &&
         (puVar12 = (uint *)FUN_00122ff4(param_1,0x3f,puVar11), puVar12 == (uint *)0x0)) {
        return (uint *)0;
      }
      puVar11 = puVar12;
    } while (0 < lVar10);
    uVar8 = 0x3e;
    lVar10 = 0;
  }
  goto LAB_00128294;
joined_r0x0012821c:
  if (puVar11 == (uint *)0x0) goto LAB_00128248;
  uVar5 = *puVar11;
  if (8 < uVar5) {
    if (uVar5 == 0x34) goto LAB_00128170;
    goto LAB_00128248;
  }
  if (6 < uVar5) goto LAB_00128170;
  if (1 < uVar5 - 1) goto LAB_00128248;
  puVar11 = *(uint **)(puVar11 + 4);
  goto joined_r0x0012821c;
LAB_00128248:
  if (cVar2 == 'J') {
LAB_001286c0:
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
  lVar10 = FUN_00125bf8(param_1);
  if (lVar10 == 0) {
LAB_00128774:
    lVar10 = 0;
  }
  else {
LAB_00128260:
    lVar6 = FUN_001272a0(param_1);
    if (lVar6 == 0) goto LAB_00128774;
    lVar10 = FUN_00122ff4(param_1,0x29,lVar10,lVar6);
  }
  uVar8 = 3;
LAB_00128294:
  uVar8 = FUN_00122ff4(param_1,uVar8,puVar12,lVar10);
  return (uint *)uVar8;
}



undefined8 FUN_00128798(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  char *pcVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  pcVar6 = *(char **)(param_1 + 0x18);
  if (*pcVar6 != 'L') {
    return 0;
  }
  pcVar4 = pcVar6 + 1;
  *(char **)(param_1 + 0x18) = pcVar4;
  cVar3 = pcVar6[1];
  if (cVar3 == 'Z') {
    if (cVar3 == '_') goto LAB_001288c0;
  }
  else {
    if (cVar3 != '_') {
      piVar1 = (int *)FUN_00125bf8();
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      if ((*piVar1 == 0x27) && (*(int *)(*(longlong *)(piVar1 + 2) + 0x1c) != 0)) {
        *(int *)(param_1 + 0x50) =
             *(int *)(param_1 + 0x50) - *(int *)(*(longlong *)(piVar1 + 2) + 8);
      }
      pcVar4 = *(char **)(param_1 + 0x18);
      uVar7 = 0x3c;
      cVar3 = *pcVar4;
      pcVar6 = pcVar4;
      if (cVar3 == 'n') {
        pcVar6 = pcVar4 + 1;
        *(char **)(param_1 + 0x18) = pcVar6;
        uVar7 = 0x3d;
        cVar3 = pcVar4[1];
      }
      pcVar4 = pcVar6;
      if (cVar3 == 'E') {
        uVar5 = 0;
      }
      else {
        do {
          if (cVar3 == '\0') {
            return 0;
          }
          pcVar4 = pcVar4 + 1;
          *(char **)(param_1 + 0x18) = pcVar4;
          cVar3 = *pcVar4;
        } while (cVar3 != 'E');
        uVar5 = (ulonglong)(uint)((int)pcVar4 - (int)pcVar6);
      }
      uVar2 = FUN_00123094(param_1,pcVar6,uVar5);
      uVar7 = FUN_00122ff4(param_1,uVar7,piVar1,uVar2);
      pcVar4 = *(char **)(param_1 + 0x18);
      cVar3 = *pcVar4;
      goto LAB_00128870;
    }
LAB_001288c0:
    pcVar4 = pcVar6 + 2;
    *(char **)(param_1 + 0x18) = pcVar4;
    cVar3 = pcVar6[2];
  }
  uVar7 = 0;
  if (cVar3 == 'Z') {
    *(char **)(param_1 + 0x18) = pcVar4 + 1;
    uVar7 = FUN_001280d4(param_1,0);
    pcVar4 = *(char **)(param_1 + 0x18);
    cVar3 = *pcVar4;
  }
LAB_00128870:
  if (cVar3 != 'E') {
    return 0;
  }
  *(char **)(param_1 + 0x18) = pcVar4 + 1;
  return uVar7;
}



int * FUN_00128910(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  char *__s1;
  longlong lVar8;
  char **ppcVar9;
  
  __s1 = *(char **)(param_1 + 0x18);
  cVar2 = *__s1;
  if (cVar2 == 'L') {
    uVar4 = FUN_00128798();
    return (int *)uVar4;
  }
  if (cVar2 == 'T') {
    uVar4 = FUN_00123de0();
    return (int *)uVar4;
  }
  if (cVar2 == 's') {
    if (__s1[1] == 'r') {
      *(char **)(param_1 + 0x18) = __s1 + 2;
      piVar7 = (int *)FUN_00125bf8();
      uVar4 = FUN_001275a4(param_1);
      if (**(char **)(param_1 + 0x18) == 'I') {
        uVar6 = FUN_00123fb8(param_1);
        uVar4 = FUN_00122ff4(param_1,4,uVar4,uVar6);
      }
      uVar6 = 1;
      goto LAB_00128a00;
    }
    if (__s1[1] == 'p') {
      *(char **)(param_1 + 0x18) = __s1 + 2;
      piVar7 = (int *)FUN_00128910();
      uVar6 = 0x4a;
      uVar4 = 0;
      goto LAB_00128b3c;
    }
  }
  else {
    if (cVar2 == 'f') {
      if (__s1[1] == 'p') {
        *(char **)(param_1 + 0x18) = __s1 + 2;
        if (__s1[2] == 'T') {
          lVar8 = 0;
          *(char **)(param_1 + 0x18) = __s1 + 3;
        }
        else {
          iVar3 = FUN_00123cb0();
          lVar8 = (longlong)(iVar3 + 1);
          if (iVar3 + 1 == 0) {
            return (int *)0;
          }
        }
        iVar3 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x2c) <= iVar3) {
          return (int *)0;
        }
        *(int *)(param_1 + 0x28) = iVar3 + 1;
        lVar1 = *(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 0x18;
        if (lVar1 == 0) {
          return (int *)0;
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 0x18) = 6;
        *(longlong *)(lVar1 + 8) = lVar8;
        return (int *)lVar1;
      }
    }
    else {
      if ((byte)(cVar2 - 0x30U) < 10) {
LAB_0012895c:
        piVar7 = (int *)FUN_001275a4(param_1);
        if (piVar7 == (int *)0x0) {
          return (int *)0;
        }
        if (**(char **)(param_1 + 0x18) != 'I') {
          return piVar7;
        }
        uVar4 = FUN_00123fb8(param_1);
        uVar6 = 4;
        goto LAB_00128b3c;
      }
      if (cVar2 == 'o') {
        if (__s1[1] == 'n') {
          *(char **)(param_1 + 0x18) = __s1 + 2;
          goto LAB_0012895c;
        }
      }
      else {
        if (((cVar2 == 't') || (cVar2 == 'i')) && (__s1[1] == 'l')) {
          piVar7 = (int *)0x0;
          if (cVar2 == 't') {
            piVar7 = (int *)FUN_00125bf8(param_1);
            __s1 = *(char **)(param_1 + 0x18);
          }
          *(char **)(param_1 + 0x18) = __s1 + 2;
          uVar4 = FUN_001254a4(param_1,0x45);
          uVar6 = 0x30;
          goto LAB_00128b3c;
        }
      }
    }
  }
  piVar7 = (int *)FUN_001273b0(param_1);
  if (piVar7 == (int *)0x0) {
    return (int *)0;
  }
  iVar3 = *piVar7;
  if (iVar3 == 0x31) {
    ppcVar9 = *(char ***)(piVar7 + 2);
    __s1 = *ppcVar9;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(ppcVar9 + 2) + -2;
    iVar3 = strcmp(__s1,"st");
    if (iVar3 != 0) {
      switch(*(undefined4 *)((longlong)ppcVar9 + 0x14)) {
      case 0:
        goto switchD_00128c28_caseD_0;
      case 1:
        goto switchD_00128c28_caseD_1;
      case 2:
        goto switchD_00128c28_caseD_2;
      case 3:
        goto switchD_00128c28_caseD_3;
      default:
        goto switchD_00128c28_caseD_4;
      }
    }
    uVar4 = FUN_00125bf8(param_1);
  }
  else {
    if (iVar3 == 0x32) {
      switch(piVar7[2]) {
      case 0:
switchD_00128c28_caseD_0:
        uVar6 = 0x35;
        uVar4 = 0;
LAB_00128b3c:
        uVar4 = FUN_00122ff4(param_1,uVar6,piVar7,uVar4);
        return (int *)uVar4;
      case 1:
        goto switchD_00128ba4_caseD_1;
      case 2:
        __s1 = (char *)0x0;
switchD_00128c28_caseD_2:
        if (((**(char ***)(piVar7 + 2))[1] == 'c') &&
           ((cVar2 = ***(char ***)(piVar7 + 2), (byte)(cVar2 + 0x8eU) < 2 ||
            ((byte)(cVar2 + 0x9dU) < 2)))) {
          uVar4 = FUN_00125bf8(param_1);
        }
        else {
          uVar4 = FUN_00128910(param_1);
        }
        iVar3 = strcmp(__s1,"cl");
        if (iVar3 == 0) {
          uVar6 = FUN_001254a4(param_1,0x45);
        }
        else {
          iVar3 = strcmp(__s1,"dt");
          if ((iVar3 == 0) || (iVar3 = strcmp(__s1,"pt"), iVar3 == 0)) {
            uVar6 = FUN_001275a4(param_1);
            if (**(char **)(param_1 + 0x18) == 'I') {
              uVar5 = FUN_00123fb8(param_1);
              uVar6 = FUN_00122ff4(param_1,4,uVar6,uVar5);
            }
          }
          else {
            uVar6 = FUN_00128910(param_1);
          }
        }
        uVar4 = FUN_00122ff4(param_1,0x38,uVar4,uVar6);
        uVar6 = 0x37;
        goto LAB_00128a00;
      case 3:
        __s1 = (char *)0x0;
switchD_00128c28_caseD_3:
        iVar3 = strcmp(__s1,"qu");
        if (iVar3 == 0) {
          uVar4 = FUN_00128910(param_1);
          uVar6 = FUN_00128910(param_1);
          uVar5 = FUN_00128910(param_1);
        }
        else {
          if (*__s1 != 'n') {
            return (int *)0;
          }
          if ((__s1[1] != 'a') && (__s1[1] != 'w')) {
            return (int *)0;
          }
          uVar4 = FUN_001254a4(param_1,0x5f);
          uVar6 = FUN_00125bf8(param_1);
          __s1 = *(char **)(param_1 + 0x18);
          cVar2 = *__s1;
          if (cVar2 == 'E') {
            uVar5 = 0;
            *(char **)(param_1 + 0x18) = __s1 + 1;
          }
          else {
            if (cVar2 == 'p') {
              if (__s1[1] != 'i') {
                return (int *)0;
              }
              *(char **)(param_1 + 0x18) = __s1 + 2;
              uVar5 = FUN_001254a4(param_1,0x45);
            }
            else {
              if ((cVar2 != 'i') || (__s1[1] != 'l')) {
switchD_00128c28_caseD_4:
                return (int *)0;
              }
              uVar5 = FUN_00128910(param_1);
            }
          }
        }
        uVar6 = FUN_00122ff4(param_1,0x3b,uVar6,uVar5);
        uVar4 = FUN_00122ff4(param_1,0x3a,uVar4,uVar6);
        uVar6 = 0x39;
        goto LAB_00128a00;
      default:
        goto switchD_00128c28_caseD_4;
      }
    }
    if (iVar3 != 0x33) {
      return (int *)0;
    }
    if (**(char **)(param_1 + 0x18) == '_') {
      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
      uVar4 = FUN_001254a4(param_1,0x45);
      goto LAB_001289f4;
    }
switchD_00128ba4_caseD_1:
    uVar4 = FUN_00128910(param_1);
  }
LAB_001289f4:
  uVar6 = 0x36;
LAB_00128a00:
  uVar4 = FUN_00122ff4(param_1,uVar6,piVar7,uVar4);
  return (int *)uVar4;
switchD_00128c28_caseD_1:
  cVar2 = *__s1;
  if (((cVar2 == 'm') || (cVar2 == 'p')) && (__s1[1] == cVar2)) {
    if (**(char **)(param_1 + 0x18) != '_') {
      uVar4 = FUN_00128910(param_1);
      uVar4 = FUN_00122ff4(param_1,0x38,uVar4,uVar4);
      goto LAB_001289f4;
    }
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
  goto switchD_00128ba4_caseD_1;
}



undefined8 FUN_00128f78(longlong param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  
  pcVar7 = *(char **)(param_1 + 0x18);
  if (*pcVar7 != 'F') {
    return 0;
  }
  pcVar1 = pcVar7 + 1;
  *(char **)(param_1 + 0x18) = pcVar1;
  cVar2 = pcVar7[1];
  if (cVar2 == 'Y') {
    pcVar1 = pcVar7 + 2;
    *(char **)(param_1 + 0x18) = pcVar1;
    cVar2 = pcVar7[2];
  }
  if (cVar2 == 'J') {
    *(char **)(param_1 + 0x18) = pcVar1 + 1;
  }
  lVar4 = FUN_00125bf8();
  if ((lVar4 == 0) || (lVar5 = FUN_001272a0(param_1), lVar5 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_00122ff4(param_1,0x29,lVar4,lVar5);
  }
  pcVar7 = *(char **)(param_1 + 0x18);
  cVar2 = *pcVar7;
  if (cVar2 == 'O') {
    if (cVar2 == 'R') goto LAB_00129090;
    uVar8 = 0x20;
    iVar3 = *(int *)(param_1 + 0x50) + 3;
  }
  else {
    if (cVar2 != 'R') {
      if (cVar2 != 'E') {
        return 0;
      }
      goto LAB_00129018;
    }
LAB_00129090:
    uVar8 = 0x1f;
    iVar3 = *(int *)(param_1 + 0x50) + 2;
  }
  *(int *)(param_1 + 0x50) = iVar3;
  *(char **)(param_1 + 0x18) = pcVar7 + 1;
  uVar6 = FUN_00122ff4(param_1,uVar8,uVar6,0);
  pcVar7 = *(char **)(param_1 + 0x18);
  if (*pcVar7 != 'E') {
    return 0;
  }
LAB_00129018:
  *(char **)(param_1 + 0x18) = pcVar7 + 1;
  return uVar6;
}


/*
Unable to decompile 'FUN_001290a8'
Cause: 
Low-level Error: Could not finish collapsing block structure
*/


void FUN_0012b7dc(undefined *param_1,uint param_2,longlong *param_3)

{
  char *pcVar1;
  byte *pbVar2;
  longlong ***ppplVar3;
  char cVar4;
  byte bVar5;
  undefined uVar6;
  bool bVar7;
  int iVar8;
  size_t sVar9;
  longlong lVar10;
  longlong **pplVar11;
  int *piVar12;
  longlong lVar13;
  char *__s1;
  longlong lVar14;
  undefined8 *puVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong **pplVar22;
  int *piVar23;
  char **ppcVar24;
  longlong *plVar25;
  longlong ***ppplVar26;
  longlong **pplVar27;
  longlong ***ppplVar28;
  byte bVar29;
  int iVar30;
  undefined8 *puVar31;
  ulonglong uVar32;
  byte *pbVar33;
  byte *pbVar34;
  uint uVar35;
  undefined8 unaff_x22;
  ulonglong uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  longlong ***local_90;
  longlong *local_88;
  longlong **local_80;
  longlong *local_78;
  longlong **local_70;
  longlong ***local_68;
  longlong ***local_60;
  longlong *local_58;
  longlong **local_50;
  longlong ***local_48;
  longlong ****local_40;
  longlong *local_38;
  undefined4 local_30;
  undefined4 uStack44;
  longlong ***local_28;
  longlong *****local_20;
  longlong *local_18;
  ulonglong local_10;
  longlong ***local_8;
  
  if (param_3 == (longlong *)0x0) goto LAB_0012b858;
  if (*(int *)(param_1 + 0x130) != 0) {
    return;
  }
  iVar8 = *(int *)param_3;
  switch(iVar8) {
  case 0:
    if ((param_2 >> 2 & 1) == 0) {
      iVar8 = *(int *)(param_3 + 2);
      lVar13 = param_3[1];
      if ((longlong)iVar8 != 0) {
        lVar19 = 0;
        lVar14 = *(longlong *)(param_1 + 0x100);
        do {
          uVar6 = *(undefined *)(lVar13 + lVar19);
          if (lVar14 == 0xff) {
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            lVar10 = 1;
            lVar14 = 0;
            *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
          }
          else {
            lVar10 = lVar14 + 1;
          }
          *(longlong *)(param_1 + 0x100) = lVar10;
          lVar19 = lVar19 + 1;
          param_1[lVar14] = uVar6;
          param_1[0x108] = uVar6;
          lVar14 = lVar10;
        } while ((longlong)iVar8 != lVar19);
      }
    }
    else {
      pbVar33 = (byte *)param_3[1];
      pbVar2 = pbVar33 + *(int *)(param_3 + 2);
      while (pbVar33 < pbVar2) {
        bVar29 = *pbVar33;
        if (((3 < (longlong)(pbVar2 + -(longlong)pbVar33)) && (bVar29 == 0x5f)) &&
           ((bVar5 = pbVar33[1], bVar5 == 0x5f &&
            ((bVar29 = bVar5, pbVar33[2] == 0x55 && (pbVar34 = pbVar33 + 3, pbVar34 < pbVar2)))))) {
          uVar32 = 0;
          do {
            bVar29 = *pbVar34;
            uVar17 = (uint)bVar29;
            uVar35 = uVar17 - 0x30;
            if (9 < (uVar35 & 0xff)) {
              if ((uVar17 - 0x41 & 0xff) < 6) {
                uVar35 = uVar17 - 0x37;
              }
              else {
                if (5 < (uVar17 - 0x61 & 0xff)) {
                  if (((pbVar34 < pbVar2) && (bVar29 == 0x5f)) && (uVar32 < 0x100)) {
                    lVar13 = *(longlong *)(param_1 + 0x100);
                    if (lVar13 == 0xff) {
                      param_1[0xff] = 0;
                      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
                      *(undefined8 *)(param_1 + 0x100) = 0;
                      lVar13 = 0;
                      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
                    }
                    *(longlong *)(param_1 + 0x100) = lVar13 + 1;
                    param_1[lVar13] = (char)uVar32;
                    param_1[0x108] = (char)uVar32;
                    goto LAB_0012ded8;
                  }
                  break;
                }
                uVar35 = (uint)bVar29 - 0x57;
              }
            }
            pbVar34 = pbVar34 + 1;
            uVar32 = (longlong)(int)uVar35 + uVar32 * 0x10;
          } while (pbVar34 != pbVar2);
          bVar29 = 0x5f;
        }
        lVar13 = *(longlong *)(param_1 + 0x100);
        if (lVar13 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar19 = 1;
          lVar13 = 0;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        }
        else {
          lVar19 = lVar13 + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar19;
        param_1[lVar13] = bVar29;
        param_1[0x108] = bVar29;
        pbVar34 = pbVar33;
LAB_0012ded8:
        pbVar33 = pbVar34 + 1;
      }
    }
    break;
  case 1:
  case 2:
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[1]);
    lVar13 = *(longlong *)(param_1 + 0x100);
    if ((param_2 >> 2 & 1) == 0) {
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        *param_1 = 0x3a;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
LAB_0012b92c:
        lVar13 = lVar19 + 1;
      }
      else {
        lVar19 = lVar13 + 1;
        *(longlong *)(param_1 + 0x100) = lVar19;
        param_1[lVar13] = 0x3a;
        param_1[0x108] = 0x3a;
        if (lVar19 != 0xff) goto LAB_0012b92c;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar13 = 1;
        lVar19 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar13;
      param_1[lVar19] = 0x3a;
      param_1[0x108] = 0x3a;
    }
    else {
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar13 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar19;
      param_1[lVar13] = 0x2e;
      param_1[0x108] = 0x2e;
    }
    piVar12 = (int *)param_3[2];
    if (*piVar12 == 0x46) {
      FUN_00123934(param_1,"{default arg#");
      FUN_00123b3c(param_1,(longlong)(piVar12[4] + 1));
      FUN_00123934(param_1,&DAT_00138460);
      piVar12 = *(int **)(piVar12 + 2);
    }
    FUN_0012b7dc(param_1,(ulonglong)param_2,piVar12);
    break;
  case 3:
    uVar37 = *(undefined8 *)(param_1 + 0x128);
    *(undefined8 *)(param_1 + 0x128) = 0;
    plVar21 = (longlong *)param_3[1];
    if (plVar21 != (longlong *)0x0) {
      iVar8 = *(int *)plVar21;
      ppplVar26 = *(longlong ****)(param_1 + 0x120);
      local_80 = (longlong **)0x0;
      *(longlong ****)(param_1 + 0x128) = &local_80;
      local_78 = plVar21;
      local_70._0_4_ = 0;
      local_68 = ppplVar26;
      if (iVar8 - 0x1cU < 5) {
        plVar21 = (longlong *)plVar21[1];
        if (plVar21 != (longlong *)0x0) {
          iVar8 = *(int *)plVar21;
          local_60 = &local_80;
          *(longlong ****)(param_1 + 0x128) = &local_60;
          local_58 = plVar21;
          local_50._0_4_ = 0;
          local_48 = ppplVar26;
          if (4 < iVar8 - 0x1cU) {
            lVar13 = 2;
            goto LAB_0012ee48;
          }
          plVar21 = (longlong *)plVar21[1];
          if (plVar21 != (longlong *)0x0) {
            iVar8 = *(int *)plVar21;
            local_40 = (longlong ****)&local_60;
            local_38 = plVar21;
            *(longlong ******)(param_1 + 0x128) = &local_40;
            local_30 = 0;
            local_28 = ppplVar26;
            if (4 < iVar8 - 0x1cU) {
              lVar13 = 3;
              goto LAB_0012ee48;
            }
            plVar21 = (longlong *)plVar21[1];
            if (plVar21 != (longlong *)0x0) {
              iVar8 = *(int *)plVar21;
              local_20 = &local_40;
              local_18 = plVar21;
              *(longlong *****)(param_1 + 0x128) = &local_28 + 1;
              local_10 = local_10 & 0xffffffff00000000;
              local_8 = ppplVar26;
              if (4 < iVar8 - 0x1cU) {
                lVar13 = 4;
                goto LAB_0012ee48;
              }
            }
          }
        }
      }
      else {
        lVar13 = 1;
LAB_0012ee48:
        uVar17 = (uint)lVar13;
        uVar35 = uVar17;
        if (iVar8 == 4) {
          *(longlong *****)(param_1 + 0x120) = &local_90;
          local_90 = ppplVar26;
          local_88 = plVar21;
LAB_0012ef68:
          FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[2]);
          if (*(int *)plVar21 == 4) {
            *(longlong ****)(param_1 + 0x120) = local_90;
          }
          uVar17 = uVar35 - 1;
          if (*(int *)(&local_70 + (ulonglong)uVar17 * 4) == 0) {
            FUN_00123630(param_1,0x20);
            FUN_0012f1e8(param_1,(ulonglong)param_2,(&local_78)[(ulonglong)uVar17 * 4]);
          }
          if (uVar17 != 0) {
            uVar17 = uVar35 - 2;
            if (*(int *)(&local_70 + (ulonglong)uVar17 * 4) == 0) {
              FUN_00123630(param_1,0x20);
              FUN_0012f1e8(param_1,(ulonglong)param_2,(&local_78)[(ulonglong)uVar17 * 4]);
            }
            if (uVar17 != 0) {
              uVar35 = uVar35 - 3;
              if (*(int *)(&local_70 + (ulonglong)uVar35 * 4) == 0) {
                FUN_00123630(param_1,0x20);
                FUN_0012f1e8(param_1,(ulonglong)param_2,(&local_78)[(ulonglong)uVar35 * 4]);
              }
              if ((uVar35 != 0) && ((int)local_70 == 0)) {
                FUN_00123630(param_1,0x20);
                FUN_0012f1e8(param_1,(ulonglong)param_2,local_78);
                *(undefined8 *)(param_1 + 0x128) = uVar37;
                return;
              }
            }
          }
          *(undefined8 *)(param_1 + 0x128) = uVar37;
          return;
        }
        if (iVar8 != 2) goto LAB_0012ef68;
        plVar25 = (longlong *)plVar21[2];
        if (*(int *)plVar25 == 0x46) {
          plVar25 = (longlong *)plVar25[1];
        }
        if (4 < *(int *)plVar25 - 0x1cU) goto LAB_0012ef68;
        if (uVar17 != 4) {
          uVar32 = (ulonglong)(uVar17 - 1);
          ppplVar28 = &local_80 + lVar13 * 4;
          *(longlong ****)(param_1 + 0x128) = ppplVar28;
          ppplVar3 = &local_80 + uVar32 * 4;
          uVar35 = uVar17 + 1;
          uVar36 = (ulonglong)uVar35;
          plVar20 = (&local_78)[uVar32 * 4];
          *ppplVar28 = *ppplVar3;
          (&local_78)[lVar13 * 4] = plVar20;
          pplVar27 = (&local_70)[uVar32 * 4 + 1];
          (&local_70)[lVar13 * 4] = (&local_70)[uVar32 * 4];
          (&local_70)[lVar13 * 4 + 1] = pplVar27;
          *(longlong ****)(&local_80 + lVar13 * 4) = ppplVar3;
          (&local_78)[uVar32 * 4] = plVar25;
          *(undefined4 *)(&local_70 + uVar32 * 4) = 0;
          *(longlong ****)(&local_70 + uVar32 * 4 + 1) = ppplVar26;
          plVar25 = (longlong *)plVar25[1];
          if (4 < *(int *)plVar25 - 0x1cU) goto LAB_0012ef68;
          if (uVar35 != 4) {
            uVar35 = uVar17 + 2;
            ppplVar3 = &local_80 + uVar36 * 4;
            *(longlong ****)(param_1 + 0x128) = ppplVar3;
            plVar20 = (&local_78)[lVar13 * 4];
            *ppplVar3 = *ppplVar28;
            (&local_78)[uVar36 * 4] = plVar20;
            pplVar27 = (&local_70)[lVar13 * 4 + 1];
            (&local_70)[uVar36 * 4] = (&local_70)[lVar13 * 4];
            (&local_70)[uVar36 * 4 + 1] = pplVar27;
            *(longlong ****)(&local_80 + uVar36 * 4) = ppplVar28;
            (&local_78)[lVar13 * 4] = plVar25;
            *(undefined4 *)(&local_70 + lVar13 * 4) = 0;
            *(longlong ****)(&local_70 + lVar13 * 4 + 1) = ppplVar26;
            plVar25 = (longlong *)plVar25[1];
            if (4 < *(int *)plVar25 - 0x1cU) goto LAB_0012ef68;
            if (uVar35 != 4) {
              local_10 = CONCAT44(uStack44,local_30);
              local_18 = local_38;
              local_20 = &local_40;
              local_8 = local_28;
              *(longlong *****)(param_1 + 0x128) = &local_28 + 1;
              local_30 = 0;
              if (4 < *(int *)plVar25[1] - 0x1cU) {
                uVar35 = 4;
                local_38 = plVar25;
                local_28 = ppplVar26;
                goto LAB_0012ef68;
              }
            }
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 0x130) = 1;
    break;
  case 4:
    uVar37 = *(undefined8 *)(param_1 + 0x160);
    uVar38 = *(undefined8 *)(param_1 + 0x128);
    *(longlong **)(param_1 + 0x160) = param_3;
    *(undefined8 *)(param_1 + 0x128) = 0;
    piVar12 = (int *)param_3[1];
    if (((((param_2 >> 2 & 1) == 0) || (*piVar12 != 0)) || (piVar12[4] != 6)) ||
       (iVar8 = strncmp(*(char **)(piVar12 + 2),"JArray",6), iVar8 != 0)) {
      FUN_0012b7dc(param_1,(ulonglong)param_2,piVar12);
      if (param_1[0x108] == '<') {
        FUN_00123630(param_1,0x20);
      }
      lVar13 = *(longlong *)(param_1 + 0x100);
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar13 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar19;
      param_1[lVar13] = 0x3c;
      param_1[0x108] = 0x3c;
      FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[2]);
      if (param_1[0x108] == '>') {
        FUN_00123630(param_1,0x20);
      }
      lVar13 = *(longlong *)(param_1 + 0x100);
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar13 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar19;
      param_1[lVar13] = 0x3e;
      param_1[0x108] = 0x3e;
    }
    else {
      FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[2]);
      FUN_00123934(param_1,&DAT_00138470);
    }
    *(undefined8 *)(param_1 + 0x128) = uVar38;
    *(undefined8 *)(param_1 + 0x160) = uVar37;
    break;
  case 5:
    piVar12 = (int *)FUN_00123730(param_1,param_3 + 1);
    if (piVar12 != (int *)0x0) {
      if (*piVar12 != 0x2f) {
LAB_0012c9f4:
        puVar31 = *(undefined8 **)(param_1 + 0x120);
        *(undefined8 *)(param_1 + 0x120) = *puVar31;
        FUN_0012b7dc(param_1,(ulonglong)param_2);
        *(undefined8 **)(param_1 + 0x120) = puVar31;
        return;
      }
      iVar8 = *(int *)(param_1 + 0x134);
      while (0 < iVar8) {
        piVar12 = *(int **)(piVar12 + 4);
        iVar8 = iVar8 + -1;
        if ((piVar12 == (int *)0x0) || (*piVar12 != 0x2f)) goto LAB_0012b858;
      }
      if ((iVar8 == 0) && (*(longlong *)(piVar12 + 2) != 0)) goto LAB_0012c9f4;
    }
    goto LAB_0012b858;
  case 6:
    lVar19 = param_3[1];
    lVar13 = *(longlong *)(param_1 + 0x100);
    if (lVar19 != 0) {
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x7b;
        lVar13 = 2;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        param_1[1] = 0x70;
LAB_0012d8d0:
        lVar14 = lVar13 + 1;
        *(longlong *)(param_1 + 0x100) = lVar14;
        param_1[lVar13] = 0x61;
        param_1[0x108] = 0x61;
        if (lVar14 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 0x72;
          lVar13 = 2;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
          param_1[1] = 0x6d;
        }
        else {
LAB_0012d8ec:
          lVar10 = lVar14 + 1;
          *(longlong *)(param_1 + 0x100) = lVar10;
          param_1[lVar14] = 0x72;
          param_1[0x108] = 0x72;
          if (lVar10 != 0xff) goto LAB_0012d908;
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 0x6d;
          lVar13 = 1;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        }
      }
      else {
        lVar14 = lVar13 + 1;
        *(longlong *)(param_1 + 0x100) = lVar14;
        param_1[lVar13] = 0x7b;
        param_1[0x108] = 0x7b;
        if (lVar14 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 0x70;
          lVar14 = 2;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
          param_1[1] = 0x61;
          goto LAB_0012d8ec;
        }
        lVar13 = lVar13 + 2;
        *(longlong *)(param_1 + 0x100) = lVar13;
        param_1[lVar14] = 0x70;
        param_1[0x108] = 0x70;
        if (lVar13 != 0xff) goto LAB_0012d8d0;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x61;
        lVar10 = 2;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        param_1[1] = 0x72;
LAB_0012d908:
        lVar13 = lVar10 + 1;
        *(longlong *)(param_1 + 0x100) = lVar13;
        param_1[lVar10] = 0x6d;
        param_1[0x108] = 0x6d;
        if (lVar13 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar14 = 1;
          lVar13 = 0;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
          goto LAB_0012d928;
        }
      }
      lVar14 = lVar13 + 1;
LAB_0012d928:
      *(longlong *)(param_1 + 0x100) = lVar14;
      param_1[lVar13] = 0x23;
      param_1[0x108] = 0x23;
      uVar32 = 0;
      sprintf((char *)&local_80,"%ld",lVar19);
      sVar9 = strlen((char *)&local_80);
      lVar13 = *(longlong *)(param_1 + 0x100);
      lVar19 = lVar13;
      if (sVar9 != 0) {
        do {
          uVar6 = *(undefined *)((longlong)&local_80 + uVar32);
          if (lVar19 == 0xff) {
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            lVar13 = 1;
            lVar19 = 0;
            *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
          }
          else {
            lVar13 = lVar19 + 1;
          }
          *(longlong *)(param_1 + 0x100) = lVar13;
          uVar32 = uVar32 + 1;
          param_1[lVar19] = uVar6;
          param_1[0x108] = uVar6;
          lVar19 = lVar13;
        } while (uVar32 != (ulonglong)sVar9);
      }
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar13 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar19;
      param_1[lVar13] = 0x7d;
      param_1[0x108] = 0x7d;
      return;
    }
    if (lVar13 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *param_1 = 0x74;
      lVar13 = 2;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      param_1[1] = 0x68;
LAB_0012c258:
      lVar19 = lVar13 + 1;
      *(longlong *)(param_1 + 0x100) = lVar19;
      param_1[lVar13] = 0x69;
      param_1[0x108] = 0x69;
      if (lVar19 != 0xff) goto LAB_0012c274;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar13 = 1;
      lVar19 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar13 + 1;
      *(longlong *)(param_1 + 0x100) = lVar19;
      param_1[lVar13] = 0x74;
      param_1[0x108] = 0x74;
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x68;
        lVar19 = 2;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        param_1[1] = 0x69;
      }
      else {
        lVar13 = lVar13 + 2;
        *(longlong *)(param_1 + 0x100) = lVar13;
        param_1[lVar19] = 0x68;
        param_1[0x108] = 0x68;
        if (lVar13 != 0xff) goto LAB_0012c258;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x69;
        lVar19 = 1;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
LAB_0012c274:
      lVar13 = lVar19 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar13;
    param_1[lVar19] = 0x73;
    param_1[0x108] = 0x73;
    break;
  case 7:
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[2]);
    break;
  case 8:
    lVar13 = *(longlong *)(param_1 + 0x100);
    if (lVar13 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar13 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar13 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar19;
    param_1[lVar13] = 0x7e;
    param_1[0x108] = 0x7e;
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[2]);
    break;
  case 9:
    __s1 = "vtable for ";
    lVar13 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = *__s1;
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar13 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar19;
      __s1 = __s1 + 1;
      param_1[lVar13] = cVar4;
      param_1[0x108] = cVar4;
      lVar13 = lVar19;
    } while (__s1 != "");
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 10:
    __s1 = "VTT for ";
    lVar13 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = *__s1;
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar13 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar19;
      __s1 = __s1 + 1;
      param_1[lVar13] = cVar4;
      param_1[0x108] = cVar4;
      lVar13 = lVar19;
    } while (__s1 != "");
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0xb:
    lVar13 = 0;
    lVar19 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = "construction vtable for "[lVar13];
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar14 = 1;
        lVar19 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar14 = lVar19 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar14;
      lVar13 = lVar13 + 1;
      param_1[lVar19] = cVar4;
      param_1[0x108] = cVar4;
      lVar19 = lVar14;
    } while (lVar13 != 0x18);
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[1]);
    lVar13 = *(longlong *)(param_1 + 0x100);
    if (lVar13 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar13 = 2;
      *param_1 = 0x2d;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      param_1[1] = 0x69;
LAB_0012d6a4:
      lVar19 = lVar13 + 1;
      *(longlong *)(param_1 + 0x100) = lVar19;
      param_1[lVar13] = 0x6e;
      param_1[0x108] = 0x6e;
      if (lVar19 != 0xff) goto LAB_0012d6c0;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar13 = 1;
      lVar19 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar13 + 1;
      *(longlong *)(param_1 + 0x100) = lVar19;
      param_1[lVar13] = 0x2d;
      param_1[0x108] = 0x2d;
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x69;
        lVar19 = 2;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        param_1[1] = 0x6e;
      }
      else {
        lVar13 = lVar13 + 2;
        *(longlong *)(param_1 + 0x100) = lVar13;
        param_1[lVar19] = 0x69;
        param_1[0x108] = 0x69;
        if (lVar13 != 0xff) goto LAB_0012d6a4;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x6e;
        lVar19 = 1;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
LAB_0012d6c0:
      lVar13 = lVar19 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar13;
    param_1[lVar19] = 0x2d;
    param_1[0x108] = 0x2d;
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[2]);
    break;
  case 0xc:
    __s1 = "typeinfo for ";
    lVar13 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = *__s1;
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar13 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar19;
      __s1 = __s1 + 1;
      param_1[lVar13] = cVar4;
      param_1[0x108] = cVar4;
      lVar13 = lVar19;
    } while (__s1 != "");
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0xd:
    lVar13 = 0;
    lVar19 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = "typeinfo name for "[lVar13];
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar14 = 1;
        lVar19 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar14 = lVar19 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar14;
      lVar13 = lVar13 + 1;
      param_1[lVar19] = cVar4;
      param_1[0x108] = cVar4;
      lVar19 = lVar14;
    } while (lVar13 != 0x12);
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0xe:
    __s1 = "typeinfo fn for ";
    lVar13 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = *__s1;
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar13 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar19;
      __s1 = __s1 + 1;
      param_1[lVar13] = cVar4;
      param_1[0x108] = cVar4;
      lVar13 = lVar19;
    } while (__s1 != "");
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0xf:
    lVar13 = 0;
    lVar19 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = "non-virtual thunk to "[lVar13];
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar14 = 1;
        lVar19 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar14 = lVar19 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar14;
      lVar13 = lVar13 + 1;
      param_1[lVar19] = cVar4;
      param_1[0x108] = cVar4;
      lVar19 = lVar14;
    } while (lVar13 != 0x15);
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0x10:
    lVar13 = 0;
    lVar19 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = "virtual thunk to "[lVar13];
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar14 = 1;
        lVar19 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar14 = lVar19 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar14;
      lVar13 = lVar13 + 1;
      param_1[lVar19] = cVar4;
      param_1[0x108] = cVar4;
      lVar19 = lVar14;
    } while (lVar13 != 0x11);
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0x11:
    lVar13 = 0;
    lVar19 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = "covariant return thunk to "[lVar13];
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar14 = 1;
        lVar19 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar14 = lVar19 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar14;
      lVar13 = lVar13 + 1;
      param_1[lVar19] = cVar4;
      param_1[0x108] = cVar4;
      lVar19 = lVar14;
    } while (lVar13 != 0x1a);
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0x12:
    __s1 = "java Class for ";
    lVar13 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = *__s1;
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar13 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar19;
      __s1 = __s1 + 1;
      param_1[lVar13] = cVar4;
      param_1[0x108] = cVar4;
      lVar13 = lVar19;
    } while (__s1 != "");
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0x13:
    FUN_00123934(param_1,"guard variable for ");
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0x14:
    FUN_00123934(param_1,"TLS init function for ");
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0x15:
    FUN_00123934(param_1,"TLS wrapper function for ");
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0x16:
    FUN_00123934(param_1,"reference temporary #");
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[2]);
    FUN_00123934(param_1,0x1384c0);
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0x17:
    FUN_00123934(param_1,"hidden alias for ");
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0x18:
    iVar8 = *(int *)(param_3 + 2);
    lVar13 = param_3[1];
    if ((longlong)iVar8 != 0) {
      lVar19 = 0;
      lVar14 = *(longlong *)(param_1 + 0x100);
      do {
        uVar6 = *(undefined *)(lVar13 + lVar19);
        if (lVar14 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar10 = 1;
          lVar14 = 0;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        }
        else {
          lVar10 = lVar14 + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar10;
        lVar19 = lVar19 + 1;
        param_1[lVar14] = uVar6;
        param_1[0x108] = uVar6;
        lVar14 = lVar10;
      } while ((longlong)iVar8 != lVar19);
    }
    break;
  case 0x19:
  case 0x1a:
  case 0x1b:
    local_80 = *(longlong ***)(param_1 + 0x128);
    pplVar27 = local_80;
    if (local_80 == (longlong **)0x0) {
      local_80 = (longlong **)0x0;
      bVar7 = false;
    }
    else {
      do {
        if (*(int *)(pplVar27 + 2) == 0) {
          if (2 < *(int *)pplVar27[1] - 0x19U) break;
          if (iVar8 == *(int *)pplVar27[1]) {
            FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[1]);
            return;
          }
        }
        pplVar27 = (longlong **)*pplVar27;
      } while (pplVar27 != (longlong **)0x0);
      bVar7 = false;
    }
    goto LAB_0012c0d8;
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x25:
  case 0x26:
    local_80 = *(longlong ***)(param_1 + 0x128);
    bVar7 = false;
LAB_0012c0d8:
    local_68 = *(longlong ****)(param_1 + 0x120);
    *(longlong ****)(param_1 + 0x128) = &local_80;
    local_78 = param_3;
LAB_0012c0f4:
    lVar13 = local_78[1];
LAB_0012c0f8:
    plVar21 = local_78;
    local_70._0_4_ = 0;
    FUN_0012b7dc(param_1,(ulonglong)param_2,lVar13);
    if ((int)local_70 == 0) {
      FUN_0012f1e8(param_1,(ulonglong)param_2,plVar21);
    }
    *(longlong ***)(param_1 + 0x128) = local_80;
    if (bVar7) {
      *(undefined8 *)(param_1 + 0x120) = unaff_x22;
    }
    break;
  case 0x23:
  case 0x24:
    plVar21 = (longlong *)param_3[1];
    bVar7 = false;
    iVar8 = *(int *)plVar21;
    if (iVar8 == 5) {
      uVar35 = *(uint *)(param_1 + 0x148);
      pplVar27 = *(longlong ***)(param_1 + 0x140);
      if ((int)uVar35 < 1) {
LAB_0012dba0:
        if (*(int *)(param_1 + 0x14c) <= (int)uVar35) {
LAB_0012f0cc:
          *(undefined4 *)(param_1 + 0x130) = 1;
          return;
        }
        uVar32 = -(ulonglong)(uVar35 >> 0x1f) & 0xfffffff000000000 | (ulonglong)uVar35 << 4;
        plVar25 = *(longlong **)(param_1 + 0x120);
        *(uint *)(param_1 + 0x148) = uVar35 + 1;
        *(longlong **)((longlong)pplVar27 + uVar32) = plVar21;
        puVar31 = (undefined8 *)((longlong)pplVar27 + uVar32 + 8);
        if (plVar25 != (longlong *)0x0) {
          uVar35 = *(uint *)(param_1 + 0x158);
          iVar8 = *(int *)(param_1 + 0x15c);
          if ((int)uVar35 < iVar8) {
            uVar32 = -(ulonglong)(uVar35 >> 0x1f) & 0xfffffff000000000 | (ulonglong)uVar35 << 4;
            puVar15 = puVar31;
            iVar30 = uVar35 + 1;
            do {
              iVar16 = iVar30;
              puVar31 = (undefined8 *)(*(longlong *)(param_1 + 0x150) + uVar32);
              puVar31[1] = plVar25[1];
              *(undefined8 **)puVar15 = puVar31;
              plVar25 = (longlong *)*plVar25;
              if (plVar25 == (longlong *)0x0) {
                *(int *)(param_1 + 0x158) = iVar16;
                goto LAB_0012dc24;
              }
              uVar32 = uVar32 + 0x10;
              puVar15 = puVar31;
              iVar30 = iVar16 + 1;
            } while (iVar16 + 1 != iVar8 + 1);
            *(int *)(param_1 + 0x158) = iVar16;
          }
          goto LAB_0012f0cc;
        }
LAB_0012dc24:
        *puVar31 = 0;
        bVar7 = false;
        plVar21 = (longlong *)FUN_00123730(param_1,plVar21 + 1);
        if (plVar21 == (longlong *)0x0) goto LAB_0012b858;
LAB_0012dde4:
        iVar8 = *(int *)plVar21;
        if (iVar8 != 0x2f) goto LAB_0012c134;
        iVar8 = *(int *)(param_1 + 0x134);
        while (0 < iVar8) {
          plVar21 = (longlong *)plVar21[2];
          iVar8 = iVar8 + -1;
          if ((plVar21 == (longlong *)0x0) || (*(int *)plVar21 != 0x2f)) goto LAB_0012b850;
        }
        if ((iVar8 == 0) && (plVar21 = (longlong *)plVar21[1], plVar21 != (longlong *)0x0)) {
          iVar8 = *(int *)plVar21;
          goto LAB_0012c134;
        }
LAB_0012b850:
        if (!bVar7) goto LAB_0012b858;
      }
      else {
        pplVar11 = pplVar27;
        if (plVar21 != *pplVar27) {
          do {
            pplVar11 = pplVar11 + 2;
            if (pplVar11 == pplVar27 + ((ulonglong)(uVar35 - 1) + 1) * 2) goto LAB_0012dba0;
          } while (plVar21 != *pplVar11);
        }
        unaff_x22 = *(undefined8 *)(param_1 + 0x120);
        *(longlong **)(param_1 + 0x120) = pplVar11[1];
        bVar7 = true;
        plVar21 = (longlong *)FUN_00123730(param_1,plVar21 + 1);
        if (plVar21 != (longlong *)0x0) goto LAB_0012dde4;
      }
      *(undefined8 *)(param_1 + 0x120) = unaff_x22;
LAB_0012b858:
      *(undefined4 *)(param_1 + 0x130) = 1;
      return;
    }
LAB_0012c134:
    if ((iVar8 == 0x23) || (*(int *)param_3 == iVar8)) {
      local_80 = *(longlong ***)(param_1 + 0x128);
      param_3 = plVar21;
      goto LAB_0012c0d8;
    }
    if (iVar8 != 0x24) {
      local_80 = *(longlong ***)(param_1 + 0x128);
      goto LAB_0012c0d8;
    }
    lVar13 = plVar21[1];
    local_80 = *(longlong ***)(param_1 + 0x128);
    local_68 = *(longlong ****)(param_1 + 0x120);
    *(longlong ****)(param_1 + 0x128) = &local_80;
    local_78 = param_3;
    if (lVar13 == 0) goto LAB_0012c0f4;
    goto LAB_0012c0f8;
  case 0x27:
    if ((param_2 >> 2 & 1) == 0) {
      lVar13 = (longlong)*(int *)((longlong *)param_3[1] + 1);
      lVar19 = *(longlong *)param_3[1];
      if (lVar13 != 0) {
        lVar14 = 0;
        lVar10 = *(longlong *)(param_1 + 0x100);
        do {
          uVar6 = *(undefined *)(lVar19 + lVar14);
          if (lVar10 == 0xff) {
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            lVar18 = 1;
            lVar10 = 0;
            *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
          }
          else {
            lVar18 = lVar10 + 1;
          }
          *(longlong *)(param_1 + 0x100) = lVar18;
          lVar14 = lVar14 + 1;
          param_1[lVar10] = uVar6;
          param_1[0x108] = uVar6;
          lVar10 = lVar18;
        } while (lVar13 != lVar14);
      }
    }
    else {
      lVar13 = (longlong)*(int *)(param_3[1] + 0x18);
      lVar19 = *(longlong *)(param_3[1] + 0x10);
      if (lVar13 != 0) {
        lVar14 = 0;
        lVar10 = *(longlong *)(param_1 + 0x100);
        do {
          uVar6 = *(undefined *)(lVar19 + lVar14);
          if (lVar10 == 0xff) {
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            lVar18 = 1;
            lVar10 = 0;
            *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
          }
          else {
            lVar18 = lVar10 + 1;
          }
          *(longlong *)(param_1 + 0x100) = lVar18;
          lVar14 = lVar14 + 1;
          param_1[lVar10] = uVar6;
          param_1[0x108] = uVar6;
          lVar10 = lVar18;
        } while (lVar13 != lVar14);
      }
    }
    break;
  case 0x28:
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0x29:
    if ((param_2 >> 5 & 1) == 0) {
      if ((param_3[1] != 0) && ((param_2 >> 6 & 1) == 0)) {
        local_80 = *(longlong ***)(param_1 + 0x128);
        *(longlong ****)(param_1 + 0x128) = &local_80;
        local_68 = *(longlong ****)(param_1 + 0x120);
        local_70._0_4_ = 0;
        local_78 = param_3;
        FUN_0012b7dc(param_1,(ulonglong)(param_2 & 0xffffff9f),param_3[1]);
        *(longlong ***)(param_1 + 0x128) = local_80;
        if ((int)local_70 != 0) {
          return;
        }
        FUN_00123630(param_1,0x20);
      }
      FUN_00130044(param_1,(ulonglong)(param_2 & 0xffffff9f),param_3 + 2,
                   *(undefined8 *)(param_1 + 0x128));
    }
    else {
      FUN_00130044(param_1,(ulonglong)(param_2 & 0xffffff9f),param_3 + 2,
                   *(undefined8 *)(param_1 + 0x128));
      if (param_3[1] != 0) {
        FUN_0012b7dc(param_1,(ulonglong)(param_2 & 0xffffff9f));
      }
    }
    break;
  case 0x2a:
    pplVar27 = *(longlong ***)(param_1 + 0x128);
    local_68 = *(longlong ****)(param_1 + 0x120);
    *(longlong ****)(param_1 + 0x128) = &local_80;
    local_70._0_4_ = 0;
    local_80 = pplVar27;
    if ((pplVar27 == (longlong **)0x0) || (2 < *(int *)pplVar27[1] - 0x19U)) {
      local_78 = param_3;
      FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[2]);
      *(longlong ***)(param_1 + 0x128) = pplVar27;
      if ((int)local_70 != 0) {
        return;
      }
    }
    else {
      pplVar11 = pplVar27;
      ppplVar26 = &local_80;
      uVar32 = 1;
      local_78 = param_3;
      do {
        ppplVar28 = ppplVar26;
        uVar36 = uVar32;
        if (*(int *)(pplVar11 + 2) == 0) {
          if (3 < (uint)uVar32) {
            *(undefined4 *)(param_1 + 0x130) = 1;
            return;
          }
          uVar36 = (ulonglong)((uint)uVar32 + 1);
          ppplVar28 = &local_80 + uVar32 * 4;
          plVar21 = pplVar11[1];
          *(longlong **)ppplVar28 = *pplVar11;
          (&local_78)[uVar32 * 4] = plVar21;
          pplVar22 = (longlong **)pplVar11[3];
          *(longlong **)(&local_70 + uVar32 * 4) = pplVar11[2];
          (&local_70)[uVar32 * 4 + 1] = pplVar22;
          *(longlong ****)(&local_80 + uVar32 * 4) = ppplVar26;
          *(longlong ****)(param_1 + 0x128) = ppplVar28;
          *(undefined4 *)(pplVar11 + 2) = 1;
        }
        pplVar11 = (longlong **)*pplVar11;
      } while ((pplVar11 != (longlong **)0x0) &&
              (ppplVar26 = ppplVar28, uVar32 = uVar36, *(int *)pplVar11[1] - 0x19U < 3));
      FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[2]);
      *(longlong ***)(param_1 + 0x128) = pplVar27;
      if ((int)local_70 != 0) {
        return;
      }
      if ((int)uVar36 != 1) {
        do {
          uVar35 = (int)uVar36 - 1;
          uVar36 = (ulonglong)uVar35;
          FUN_0012f1e8(param_1,(ulonglong)param_2,(&local_78)[uVar36 * 4]);
        } while (uVar35 != 1);
        pplVar27 = *(longlong ***)(param_1 + 0x128);
      }
    }
    FUN_0012fd7c(param_1,(ulonglong)param_2,param_3 + 1,pplVar27);
    break;
  case 0x2b:
  case 0x2d:
    local_80 = *(longlong ***)(param_1 + 0x128);
    *(longlong ****)(param_1 + 0x128) = &local_80;
    local_68 = *(longlong ****)(param_1 + 0x120);
    local_70._0_4_ = 0;
    local_78 = param_3;
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[2]);
    if ((int)local_70 == 0) {
      FUN_0012f1e8(param_1,(ulonglong)param_2,param_3);
    }
    *(longlong ***)(param_1 + 0x128) = local_80;
    break;
  case 0x2c:
    if (*(short *)((longlong)param_3 + 0x12) != 0) {
      lVar13 = *(longlong *)(param_1 + 0x100);
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar13 = 2;
        *param_1 = 0x5f;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        param_1[1] = 0x53;
LAB_0012dadc:
        lVar19 = lVar13 + 1;
        *(longlong *)(param_1 + 0x100) = lVar19;
        param_1[lVar13] = 0x61;
        param_1[0x108] = 0x61;
        if (lVar19 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 0x74;
          lVar13 = 1;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
          goto LAB_0012db14;
        }
LAB_0012daf8:
        lVar13 = lVar19 + 1;
        *(longlong *)(param_1 + 0x100) = lVar13;
        param_1[lVar19] = 0x74;
        param_1[0x108] = 0x74;
        if (lVar13 != 0xff) goto LAB_0012db14;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar13 + 1;
        *(longlong *)(param_1 + 0x100) = lVar19;
        param_1[lVar13] = 0x5f;
        param_1[0x108] = 0x5f;
        if (lVar19 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 0x53;
          lVar19 = 2;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
          param_1[1] = 0x61;
          goto LAB_0012daf8;
        }
        lVar13 = lVar13 + 2;
        *(longlong *)(param_1 + 0x100) = lVar13;
        param_1[lVar19] = 0x53;
        param_1[0x108] = 0x53;
        if (lVar13 != 0xff) goto LAB_0012dadc;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x61;
        lVar13 = 2;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        param_1[1] = 0x74;
LAB_0012db14:
        lVar19 = lVar13 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar19;
      param_1[lVar13] = 0x20;
      param_1[0x108] = 0x20;
    }
    if (*(longlong *)(param_3[1] + 8) == 0x1409c0) {
      lVar13 = *(longlong *)(param_1 + 0x100);
    }
    else {
      FUN_0012b7dc(param_1,(ulonglong)param_2);
      lVar19 = *(longlong *)(param_1 + 0x100);
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar13 = 1;
        lVar19 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar13 = lVar19 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar13;
      param_1[lVar19] = 0x20;
      param_1[0x108] = 0x20;
    }
    if (*(short *)(param_3 + 2) == 0) {
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar13 = 2;
        *param_1 = 0x5f;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        param_1[1] = 0x46;
LAB_0012d7f8:
        lVar19 = lVar13 + 1;
        *(longlong *)(param_1 + 0x100) = lVar19;
        param_1[lVar13] = 0x72;
        param_1[0x108] = 0x72;
        if (lVar19 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 0x61;
          lVar13 = 2;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
          param_1[1] = 99;
        }
        else {
LAB_0012d814:
          lVar14 = lVar19 + 1;
          *(longlong *)(param_1 + 0x100) = lVar14;
          param_1[lVar19] = 0x61;
          param_1[0x108] = 0x61;
          if (lVar14 != 0xff) goto LAB_0012d830;
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 99;
          lVar13 = 1;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        }
      }
      else {
        lVar19 = lVar13 + 1;
        *(longlong *)(param_1 + 0x100) = lVar19;
        param_1[lVar13] = 0x5f;
        param_1[0x108] = 0x5f;
        if (lVar19 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 0x46;
          lVar19 = 2;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
          param_1[1] = 0x72;
          goto LAB_0012d814;
        }
        lVar13 = lVar13 + 2;
        *(longlong *)(param_1 + 0x100) = lVar13;
        param_1[lVar19] = 0x46;
        param_1[0x108] = 0x46;
        if (lVar13 != 0xff) goto LAB_0012d7f8;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x72;
        lVar14 = 2;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        param_1[1] = 0x61;
LAB_0012d830:
        lVar13 = lVar14 + 1;
        *(longlong *)(param_1 + 0x100) = lVar13;
        param_1[lVar14] = 99;
        param_1[0x108] = 99;
        if (lVar13 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar19 = 1;
          lVar13 = 0;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
          goto LAB_0012d850;
        }
      }
      lVar19 = lVar13 + 1;
LAB_0012d850:
      *(longlong *)(param_1 + 0x100) = lVar19;
      param_1[lVar13] = 0x74;
      param_1[0x108] = 0x74;
      return;
    }
    if (lVar13 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar13 = 2;
      *param_1 = 0x5f;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      param_1[1] = 0x41;
LAB_0012cd6c:
      lVar19 = lVar13 + 1;
      *(longlong *)(param_1 + 0x100) = lVar19;
      param_1[lVar13] = 99;
      param_1[0x108] = 99;
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 99;
        lVar13 = 2;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        param_1[1] = 0x75;
      }
      else {
LAB_0012cd88:
        lVar14 = lVar19 + 1;
        *(longlong *)(param_1 + 0x100) = lVar14;
        param_1[lVar19] = 99;
        param_1[0x108] = 99;
        if (lVar14 != 0xff) goto LAB_0012cda4;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x75;
        lVar13 = 1;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
LAB_0012cdc0:
      lVar19 = lVar13 + 1;
    }
    else {
      lVar19 = lVar13 + 1;
      *(longlong *)(param_1 + 0x100) = lVar19;
      param_1[lVar13] = 0x5f;
      param_1[0x108] = 0x5f;
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x41;
        lVar19 = 2;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        param_1[1] = 99;
        goto LAB_0012cd88;
      }
      lVar13 = lVar13 + 2;
      *(longlong *)(param_1 + 0x100) = lVar13;
      param_1[lVar19] = 0x41;
      param_1[0x108] = 0x41;
      if (lVar13 != 0xff) goto LAB_0012cd6c;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *param_1 = 99;
      lVar14 = 2;
      param_1[1] = 99;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
LAB_0012cda4:
      lVar13 = lVar14 + 1;
      *(longlong *)(param_1 + 0x100) = lVar13;
      param_1[lVar14] = 0x75;
      param_1[0x108] = 0x75;
      if (lVar13 != 0xff) goto LAB_0012cdc0;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar13 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar19;
    param_1[lVar13] = 0x6d;
    param_1[0x108] = 0x6d;
    break;
  case 0x2e:
  case 0x2f:
    if (param_3[1] != 0) {
      FUN_0012b7dc(param_1,(ulonglong)param_2);
    }
    if (param_3[2] != 0) {
      uVar36 = *(ulonglong *)(param_1 + 0x100);
      uVar32 = uVar36;
      if (0xfd < uVar36) {
        param_1[uVar36] = 0;
        uVar32 = 0;
        (**(code **)(param_1 + 0x110))(param_1,uVar36,*(undefined8 *)(param_1 + 0x118));
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      param_1[uVar32] = 0x2c;
      *(ulonglong *)(param_1 + 0x100) = uVar32 + 2;
      param_1[uVar32 + 1] = 0x20;
      param_1[0x108] = 0x20;
      lVar13 = *(longlong *)(param_1 + 0x138);
      FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[2]);
      if ((*(longlong *)(param_1 + 0x138) == lVar13) &&
         (*(longlong *)(param_1 + 0x100) == uVar32 + 2)) {
        *(ulonglong *)(param_1 + 0x100) = uVar32;
      }
    }
    break;
  case 0x30:
    lVar13 = param_3[2];
    if (param_3[1] != 0) {
      FUN_0012b7dc(param_1,(ulonglong)param_2);
    }
    lVar19 = *(longlong *)(param_1 + 0x100);
    if (lVar19 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar14 = 1;
      lVar19 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar14 = lVar19 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar14;
    param_1[lVar19] = 0x7b;
    param_1[0x108] = 0x7b;
    FUN_0012b7dc(param_1,(ulonglong)param_2,lVar13);
    lVar13 = *(longlong *)(param_1 + 0x100);
    if (lVar13 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar13 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar13 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar19;
    param_1[lVar13] = 0x7d;
    param_1[0x108] = 0x7d;
    break;
  case 0x31:
    lVar19 = param_3[1];
    __s1 = "operator";
    iVar8 = *(int *)(lVar19 + 0x10);
    lVar13 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = *__s1;
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar14 = 1;
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar14 = lVar13 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar14;
      __s1 = __s1 + 1;
      param_1[lVar13] = cVar4;
      param_1[0x108] = cVar4;
      lVar13 = lVar14;
    } while (__s1 != "");
    __s1 = *(char **)(lVar19 + 8);
    if ((byte)(*__s1 + 0x9fU) < 0x1a) {
      if (lVar14 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar14 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar14 + 1;
      param_1[lVar14] = 0x20;
      param_1[0x108] = 0x20;
      __s1 = *(char **)(lVar19 + 8);
    }
    lVar13 = (longlong)iVar8;
    if (__s1[lVar13 + -1] == ' ') {
      lVar13 = (longlong)(iVar8 + -1);
    }
    if (lVar13 != 0) {
      pcVar1 = __s1 + lVar13;
      lVar13 = *(longlong *)(param_1 + 0x100);
      do {
        cVar4 = *__s1;
        if (lVar13 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar19 = 1;
          lVar13 = 0;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        }
        else {
          lVar19 = lVar13 + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar19;
        __s1 = __s1 + 1;
        param_1[lVar13] = cVar4;
        param_1[0x108] = cVar4;
        lVar13 = lVar19;
      } while (__s1 != pcVar1);
    }
    break;
  case 0x32:
    lVar13 = 0;
    lVar19 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = "operator "[lVar13];
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar14 = 1;
        lVar19 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar14 = lVar19 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar14;
      lVar13 = lVar13 + 1;
      param_1[lVar19] = cVar4;
      param_1[0x108] = cVar4;
      lVar19 = lVar14;
    } while (lVar13 != 9);
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[2]);
    break;
  default:
    *(undefined4 *)(param_1 + 0x130) = 1;
    break;
  case 0x34:
    lVar13 = 0;
    lVar19 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = "operator "[lVar13];
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar14 = 1;
        lVar19 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar14 = lVar19 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar14;
      lVar13 = lVar13 + 1;
      param_1[lVar19] = cVar4;
      param_1[0x108] = cVar4;
      lVar19 = lVar14;
    } while (lVar13 != 9);
    if (*(longlong **)(param_1 + 0x160) != (longlong *)0x0) {
      local_80 = *(longlong ***)(param_1 + 0x120);
      *(longlong ****)(param_1 + 0x120) = &local_80;
      local_78 = *(longlong **)(param_1 + 0x160);
    }
    if (*(int *)param_3[1] == 4) {
      FUN_0012b7dc(param_1,(ulonglong)param_2,*(undefined8 *)((int *)param_3[1] + 2));
      if (*(longlong *)(param_1 + 0x160) != 0) {
        *(longlong ***)(param_1 + 0x120) = local_80;
      }
      if (param_1[0x108] == '<') {
        lVar13 = *(longlong *)(param_1 + 0x100);
        if (lVar13 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(undefined8 *)(param_1 + 0x100) = 0;
          lVar13 = 0;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar13 + 1;
        param_1[lVar13] = 0x20;
        param_1[0x108] = 0x20;
      }
      lVar13 = *(longlong *)(param_1 + 0x100);
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar13 + 1;
      param_1[lVar13] = 0x3c;
      param_1[0x108] = 0x3c;
      FUN_0012b7dc(param_1,(ulonglong)param_2,*(undefined8 *)(param_3[1] + 0x10));
      if (param_1[0x108] == '>') {
        lVar13 = *(longlong *)(param_1 + 0x100);
        if (lVar13 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(undefined8 *)(param_1 + 0x100) = 0;
          lVar13 = 0;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar13 + 1;
        param_1[lVar13] = 0x20;
        param_1[0x108] = 0x20;
      }
      lVar13 = *(longlong *)(param_1 + 0x100);
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar13 + 1;
      param_1[lVar13] = 0x3e;
      param_1[0x108] = 0x3e;
    }
    else {
      FUN_0012b7dc(param_1,(ulonglong)param_2);
      if (*(longlong *)(param_1 + 0x160) != 0) {
        *(longlong ***)(param_1 + 0x120) = local_80;
      }
    }
    break;
  case 0x35:
    FUN_001302f4(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0x36:
    piVar23 = (int *)param_3[1];
    piVar12 = (int *)param_3[2];
    if (*piVar23 == 0x31) {
      __s1 = **(char ***)(piVar23 + 2);
      iVar8 = strcmp(__s1,"ad");
      if (iVar8 == 0) {
        iVar8 = *piVar12;
        if (iVar8 != 3) goto LAB_0012dc6c;
        if ((**(int **)(piVar12 + 2) == 1) && (**(int **)(piVar12 + 4) == 0x29)) {
          piVar12 = *(int **)(piVar12 + 2);
        }
      }
      else {
        iVar8 = *piVar12;
LAB_0012dc6c:
        if (iVar8 == 0x38) {
          FUN_001303c8(param_1,(ulonglong)param_2,*(undefined8 *)(piVar12 + 2));
          FUN_001302f4(param_1,(ulonglong)param_2,piVar23);
          return;
        }
      }
      FUN_001302f4(param_1,(ulonglong)param_2,piVar23);
      iVar8 = strcmp(__s1,"gs");
      if (iVar8 == 0) {
        FUN_0012b7dc(param_1,(ulonglong)param_2,piVar12);
        return;
      }
      iVar8 = strcmp(__s1,"st");
      if (iVar8 == 0) {
        FUN_00123630(param_1,0x28);
        FUN_0012b7dc(param_1,(ulonglong)param_2,piVar12);
        lVar13 = *(longlong *)(param_1 + 0x100);
        if (lVar13 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar13 = 0;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar13 + 1;
        param_1[lVar13] = 0x29;
        param_1[0x108] = 0x29;
        return;
      }
    }
    else {
      if (*piVar23 == 0x33) {
        lVar13 = *(longlong *)(param_1 + 0x100);
        if (lVar13 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar13 = 0;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar13 + 1;
        param_1[lVar13] = 0x28;
        param_1[0x108] = 0x28;
        FUN_0012b7dc(param_1,(ulonglong)param_2,*(undefined8 *)(piVar23 + 2));
        FUN_00123630(param_1,0x29);
      }
      else {
        FUN_001302f4(param_1,(ulonglong)param_2,piVar23);
      }
    }
    FUN_001303c8(param_1,(ulonglong)param_2,piVar12);
    break;
  case 0x37:
    piVar12 = (int *)param_3[2];
    if (*piVar12 != 0x38) goto LAB_0012b858;
    ppcVar24 = *(char ***)((int *)param_3[1] + 2);
    __s1 = *ppcVar24;
    if ((__s1[1] == 'c') && (((byte)(*__s1 + 0x8eU) < 2 || ((byte)(*__s1 + 0x9dU) < 2)))) {
      FUN_001302f4(param_1,(ulonglong)param_2);
      FUN_00123630(param_1,0x3c);
      FUN_0012b7dc(param_1,(ulonglong)param_2,*(undefined8 *)(param_3[2] + 8));
      FUN_00123934(param_1,&DAT_00138710);
      FUN_0012b7dc(param_1,(ulonglong)param_2,*(undefined8 *)(param_3[2] + 0x10));
      FUN_00123630(param_1,0x29);
    }
    else {
      if ((*(int *)param_3[1] == 0x31) && ((*(int *)(ppcVar24 + 2) == 1 && (*ppcVar24[1] == '>'))))
      {
        FUN_00123630(param_1,0x28);
        piVar12 = (int *)param_3[2];
        __s1 = **(char ***)(param_3[1] + 8);
      }
      iVar8 = strcmp(__s1,"cl");
      piVar12 = *(int **)(piVar12 + 2);
      if ((iVar8 == 0) && (*piVar12 == 3)) {
        if (**(int **)(piVar12 + 4) != 0x29) {
          *(undefined4 *)(param_1 + 0x130) = 1;
        }
        FUN_001303c8(param_1,(ulonglong)param_2,*(undefined8 *)(piVar12 + 2));
      }
      else {
        FUN_001303c8(param_1,(ulonglong)param_2);
      }
      lVar13 = param_3[1];
      __s1 = **(char ***)(lVar13 + 8);
      iVar8 = strcmp(__s1,"ix");
      if (iVar8 == 0) {
        FUN_00123630(param_1,0x5b);
        FUN_0012b7dc(param_1,(ulonglong)param_2,*(undefined8 *)(param_3[2] + 0x10));
        FUN_00123630(param_1,0x5d);
      }
      else {
        iVar8 = strcmp(__s1,"cl");
        if (iVar8 != 0) {
          FUN_001302f4(param_1,(ulonglong)param_2,lVar13);
        }
        FUN_001303c8(param_1,(ulonglong)param_2,*(undefined8 *)(param_3[2] + 0x10));
      }
      if (((*(int *)param_3[1] == 0x31) &&
          (lVar13 = *(longlong *)((int *)param_3[1] + 2), *(int *)(lVar13 + 0x10) == 1)) &&
         (**(char **)(lVar13 + 8) == '>')) {
        FUN_00123630(param_1,0x29);
      }
    }
    break;
  case 0x38:
    *(undefined4 *)(param_1 + 0x130) = 1;
    break;
  case 0x39:
    piVar12 = (int *)param_3[2];
    if ((*piVar12 != 0x3a) || (piVar23 = *(int **)(piVar12 + 4), *piVar23 != 0x3b))
    goto LAB_0012b858;
    lVar14 = param_3[1];
    lVar13 = *(longlong *)(piVar12 + 2);
    uVar37 = *(undefined8 *)(piVar23 + 2);
    lVar19 = *(longlong *)(piVar23 + 4);
    iVar8 = strcmp(**(char ***)(lVar14 + 8),"qu");
    if (iVar8 == 0) {
      FUN_001303c8(param_1,(ulonglong)param_2);
      FUN_001302f4(param_1,(ulonglong)param_2,lVar14);
      FUN_001303c8(param_1,(ulonglong)param_2,uVar37);
      FUN_00123934(param_1,&DAT_00138648);
      FUN_001303c8(param_1,(ulonglong)param_2,lVar19);
    }
    else {
      FUN_00123934(param_1,&DAT_00138650);
      if (*(longlong *)(lVar13 + 8) != 0) {
        FUN_001303c8(param_1,(ulonglong)param_2);
        FUN_00123630(param_1,0x20);
      }
      FUN_0012b7dc(param_1,(ulonglong)param_2,uVar37);
      if (lVar19 != 0) {
        FUN_001303c8(param_1,(ulonglong)param_2,lVar19);
      }
    }
    break;
  case 0x3a:
  case 0x3b:
    *(undefined4 *)(param_1 + 0x130) = 1;
    break;
  case 0x3c:
  case 0x3d:
    uVar35 = 0;
    if ((*(int *)param_3[1] == 0x27) &&
       (uVar35 = *(uint *)(*(longlong *)((int *)param_3[1] + 2) + 0x1c), uVar35 != 0)) {
      if (uVar35 < 7) {
        if (*(int *)param_3[2] == 0) {
          if (iVar8 == 0x3d) {
            FUN_00123630(param_1,0x2d);
          }
          FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[2]);
          switch(uVar35) {
          case 2:
            FUN_00123630(param_1,0x75);
            return;
          case 3:
            FUN_00123630(param_1,0x6c);
            return;
          case 4:
            FUN_00123934(param_1,&DAT_00138658);
            return;
          case 5:
            FUN_00123934(param_1,&DAT_00138660);
            return;
          case 6:
            FUN_00123934(param_1,0x136750);
            return;
          default:
            return;
          }
        }
      }
      else {
        if ((((uVar35 == 7) && (piVar12 = (int *)param_3[2], *piVar12 == 0)) && (piVar12[4] == 1))
           && (iVar8 == 0x3c)) {
          if (**(char **)(piVar12 + 2) == '0') {
            FUN_00123934(param_1,"false");
            return;
          }
          if (**(char **)(piVar12 + 2) == '1') {
            FUN_00123934(param_1,&DAT_00138670);
            return;
          }
        }
      }
    }
    lVar13 = *(longlong *)(param_1 + 0x100);
    if (lVar13 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar13 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar13 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar19;
    param_1[lVar13] = 0x28;
    param_1[0x108] = 0x28;
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[1]);
    lVar13 = *(longlong *)(param_1 + 0x100);
    if (lVar13 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar13 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar13 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar19;
    param_1[lVar13] = 0x29;
    param_1[0x108] = 0x29;
    if (*(int *)param_3 == 0x3d) {
      FUN_00123630(param_1,0x2d);
    }
    if (uVar35 == 8) {
      FUN_00123630(param_1,0x5b);
      FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[2]);
      FUN_00123630(param_1,0x5d);
    }
    else {
      FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[2]);
    }
    break;
  case 0x3e:
    __s1 = "java resource ";
    lVar13 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = *__s1;
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar13 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar19;
      __s1 = __s1 + 1;
      param_1[lVar13] = cVar4;
      param_1[0x108] = cVar4;
      lVar13 = lVar19;
    } while (__s1 != "");
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0x3f:
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[1]);
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[2]);
    break;
  case 0x40:
    lVar13 = *(longlong *)(param_1 + 0x100);
    uVar6 = *(undefined *)(param_3 + 1);
    if (lVar13 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar13 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar13 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar19;
    param_1[lVar13] = uVar6;
    param_1[0x108] = uVar6;
    break;
  case 0x41:
    sprintf((char *)&local_80,"%ld",param_3[1]);
    sVar9 = strlen((char *)&local_80);
    if (sVar9 != 0) {
      uVar32 = 0;
      lVar13 = *(longlong *)(param_1 + 0x100);
      do {
        uVar6 = *(undefined *)((longlong)&local_80 + uVar32);
        if (lVar13 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar19 = 1;
          lVar13 = 0;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        }
        else {
          lVar19 = lVar13 + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar19;
        uVar32 = uVar32 + 1;
        param_1[lVar13] = uVar6;
        param_1[0x108] = uVar6;
        lVar13 = lVar19;
      } while (uVar32 != (ulonglong)sVar9);
    }
    break;
  case 0x42:
    __s1 = "decltype (";
    lVar13 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = *__s1;
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar13 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar19;
      __s1 = __s1 + 1;
      param_1[lVar13] = cVar4;
      param_1[0x108] = cVar4;
      lVar13 = lVar19;
    } while (__s1 != "");
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[1]);
    lVar13 = *(longlong *)(param_1 + 0x100);
    if (lVar13 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar13 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar13 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar19;
    param_1[lVar13] = 0x29;
    param_1[0x108] = 0x29;
    break;
  case 0x43:
    lVar13 = 0;
    lVar19 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = "global constructors keyed to "[lVar13];
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar14 = 1;
        lVar19 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar14 = lVar19 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar14;
      lVar13 = lVar13 + 1;
      param_1[lVar19] = cVar4;
      param_1[0x108] = cVar4;
      lVar19 = lVar14;
    } while (lVar13 != 0x1d);
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0x44:
    lVar13 = 0;
    lVar19 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = "global destructors keyed to "[lVar13];
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar14 = 1;
        lVar19 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar14 = lVar19 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar14;
      lVar13 = lVar13 + 1;
      param_1[lVar19] = cVar4;
      param_1[0x108] = cVar4;
      lVar19 = lVar14;
    } while (lVar13 != 0x1c);
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0x45:
    __s1 = "{lambda(";
    lVar13 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = *__s1;
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar13 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar19;
      __s1 = __s1 + 1;
      param_1[lVar13] = cVar4;
      param_1[0x108] = cVar4;
      lVar13 = lVar19;
    } while (__s1 != "");
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[1]);
    lVar13 = *(longlong *)(param_1 + 0x100);
    if (lVar13 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      *param_1 = 0x29;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
LAB_0012d544:
      lVar13 = lVar19 + 1;
    }
    else {
      lVar19 = lVar13 + 1;
      *(longlong *)(param_1 + 0x100) = lVar19;
      param_1[lVar13] = 0x29;
      param_1[0x108] = 0x29;
      if (lVar19 != 0xff) goto LAB_0012d544;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar13 = 1;
      lVar19 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar13;
    param_1[lVar19] = 0x23;
    param_1[0x108] = 0x23;
    uVar32 = 0;
    sprintf((char *)&local_80,"%ld",(longlong)(*(int *)(param_3 + 2) + 1));
    sVar9 = strlen((char *)&local_80);
    lVar13 = *(longlong *)(param_1 + 0x100);
    lVar19 = lVar13;
    if (sVar9 != 0) {
      do {
        uVar6 = *(undefined *)((longlong)&local_80 + uVar32);
        if (lVar19 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar13 = 1;
          lVar19 = 0;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        }
        else {
          lVar13 = lVar19 + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar13;
        uVar32 = uVar32 + 1;
        param_1[lVar19] = uVar6;
        param_1[0x108] = uVar6;
        lVar19 = lVar13;
      } while (uVar32 != (ulonglong)sVar9);
    }
    if (lVar13 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar13 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar13 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar19;
    param_1[lVar13] = 0x7d;
    param_1[0x108] = 0x7d;
    break;
  case 0x47:
    __s1 = "{unnamed type#";
    lVar13 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = *__s1;
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar13 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar19;
      __s1 = __s1 + 1;
      param_1[lVar13] = cVar4;
      param_1[0x108] = cVar4;
      lVar13 = lVar19;
    } while (__s1 != "");
    uVar32 = 0;
    sprintf((char *)&local_80,"%ld",param_3[1] + 1);
    sVar9 = strlen((char *)&local_80);
    lVar13 = *(longlong *)(param_1 + 0x100);
    lVar19 = lVar13;
    if (sVar9 != 0) {
      do {
        uVar6 = *(undefined *)((longlong)&local_80 + uVar32);
        if (lVar19 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar13 = 1;
          lVar19 = 0;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        }
        else {
          lVar13 = lVar19 + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar13;
        uVar32 = uVar32 + 1;
        param_1[lVar19] = uVar6;
        param_1[0x108] = uVar6;
        lVar19 = lVar13;
      } while (uVar32 != (ulonglong)sVar9);
    }
    if (lVar13 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar13 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar13 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar19;
    param_1[lVar13] = 0x7d;
    param_1[0x108] = 0x7d;
    break;
  case 0x48:
    lVar13 = 0;
    lVar19 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = "transaction clone for "[lVar13];
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar14 = 1;
        lVar19 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar14 = lVar19 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar14;
      lVar13 = lVar13 + 1;
      param_1[lVar19] = cVar4;
      param_1[0x108] = cVar4;
      lVar19 = lVar14;
    } while (lVar13 != 0x16);
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0x49:
    lVar13 = 0;
    lVar19 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = "non-transaction clone for "[lVar13];
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar14 = 1;
        lVar19 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar14 = lVar19 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar14;
      lVar13 = lVar13 + 1;
      param_1[lVar19] = cVar4;
      param_1[0x108] = cVar4;
      lVar19 = lVar14;
    } while (lVar13 != 0x1a);
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0x4a:
    iVar8 = 0;
    piVar12 = (int *)FUN_001237ac(param_1,param_3[1]);
    if (piVar12 == (int *)0x0) {
      FUN_001303c8(param_1,(ulonglong)param_2,param_3[1]);
      FUN_00123934(param_1,&DAT_00138698);
    }
    else {
      do {
        if ((*piVar12 != 0x2f) || (*(longlong *)(piVar12 + 2) == 0)) {
          lVar13 = param_3[1];
          if (iVar8 == 0) {
            return;
          }
          goto LAB_0012c7ec;
        }
        piVar12 = *(int **)(piVar12 + 4);
        iVar8 = iVar8 + 1;
      } while (piVar12 != (int *)0x0);
      lVar13 = param_3[1];
LAB_0012c7ec:
      iVar30 = 0;
      do {
        *(int *)(param_1 + 0x134) = iVar30;
        FUN_0012b7dc(param_1,(ulonglong)param_2,lVar13);
        if (iVar30 < iVar8 + -1) {
          lVar19 = *(longlong *)(param_1 + 0x100);
          if (lVar19 == 0xff) {
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            *param_1 = 0x2c;
            lVar14 = 1;
            *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
LAB_0012c83c:
            lVar19 = lVar14 + 1;
          }
          else {
            lVar14 = lVar19 + 1;
            *(longlong *)(param_1 + 0x100) = lVar14;
            param_1[lVar19] = 0x2c;
            param_1[0x108] = 0x2c;
            if (lVar14 != 0xff) goto LAB_0012c83c;
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            lVar19 = 1;
            lVar14 = 0;
            *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
          }
          *(longlong *)(param_1 + 0x100) = lVar19;
          param_1[lVar14] = 0x20;
          param_1[0x108] = 0x20;
        }
        iVar30 = iVar30 + 1;
      } while (iVar30 != iVar8);
    }
    break;
  case 0x4b:
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[1]);
    lVar13 = *(longlong *)(param_1 + 0x100);
    if (lVar13 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *param_1 = 0x5b;
      lVar13 = 2;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      param_1[1] = 0x61;
LAB_0012c8b4:
      lVar19 = lVar13 + 1;
      *(longlong *)(param_1 + 0x100) = lVar19;
      param_1[lVar13] = 0x62;
      param_1[0x108] = 0x62;
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x69;
        lVar13 = 1;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        goto LAB_0012c8ec;
      }
LAB_0012c8d0:
      lVar13 = lVar19 + 1;
      *(longlong *)(param_1 + 0x100) = lVar13;
      param_1[lVar19] = 0x69;
      param_1[0x108] = 0x69;
      if (lVar13 != 0xff) goto LAB_0012c8ec;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar13 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar13 + 1;
      *(longlong *)(param_1 + 0x100) = lVar19;
      param_1[lVar13] = 0x5b;
      param_1[0x108] = 0x5b;
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x61;
        lVar19 = 2;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        param_1[1] = 0x62;
        goto LAB_0012c8d0;
      }
      lVar13 = lVar13 + 2;
      *(longlong *)(param_1 + 0x100) = lVar13;
      param_1[lVar19] = 0x61;
      param_1[0x108] = 0x61;
      if (lVar13 != 0xff) goto LAB_0012c8b4;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *param_1 = 0x62;
      lVar13 = 2;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      param_1[1] = 0x69;
LAB_0012c8ec:
      lVar19 = lVar13 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar19;
    param_1[lVar13] = 0x3a;
    param_1[0x108] = 0x3a;
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[2]);
    lVar13 = *(longlong *)(param_1 + 0x100);
    if (lVar13 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar13 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar13 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar19;
    param_1[lVar13] = 0x5d;
    param_1[0x108] = 0x5d;
    break;
  case 0x4c:
    __s1 = " [clone ";
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[1]);
    lVar13 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = *__s1;
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar13 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar19;
      __s1 = __s1 + 1;
      param_1[lVar13] = cVar4;
      param_1[0x108] = cVar4;
      lVar13 = lVar19;
    } while (__s1 != "");
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3[2]);
    lVar13 = *(longlong *)(param_1 + 0x100);
    if (lVar13 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar13 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar13 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar19;
    param_1[lVar13] = 0x5d;
    param_1[0x108] = 0x5d;
  }
  return;
}



void FUN_0012f1e8(undefined *param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined uVar5;
  char *pcVar6;
  
  switch(*param_3) {
  case 3:
    param_3 = *(undefined4 **)(param_3 + 2);
  default:
LAB_0012f224:
    FUN_0012b7dc(param_1,(ulonglong)param_2,param_3);
    return;
  case 0x19:
  case 0x1c:
    lVar2 = 0;
    lVar3 = *(longlong *)(param_1 + 0x100);
    do {
      cVar1 = " restrict"[lVar2];
      if (lVar3 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar4 = 1;
        lVar3 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar4 = lVar3 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar4;
      lVar2 = lVar2 + 1;
      param_1[lVar3] = cVar1;
      param_1[0x108] = cVar1;
      lVar3 = lVar4;
    } while (lVar2 != 9);
    break;
  case 0x1a:
  case 0x1d:
    lVar2 = 0;
    lVar3 = *(longlong *)(param_1 + 0x100);
    do {
      cVar1 = " volatile"[lVar2];
      if (lVar3 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar4 = 1;
        lVar3 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar4 = lVar3 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar4;
      lVar2 = lVar2 + 1;
      param_1[lVar3] = cVar1;
      param_1[0x108] = cVar1;
      lVar3 = lVar4;
    } while (lVar2 != 9);
    break;
  case 0x1b:
  case 0x1e:
    lVar2 = *(longlong *)(param_1 + 0x100);
    if (lVar2 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *param_1 = 0x20;
      lVar2 = 2;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      param_1[1] = 99;
LAB_0012f3f0:
      lVar3 = lVar2 + 1;
      *(longlong *)(param_1 + 0x100) = lVar3;
      param_1[lVar2] = 0x6f;
      param_1[0x108] = 0x6f;
      if (lVar3 == 0xff) {
        param_1[0xff] = 0;
        uVar5 = 0x74;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x6e;
        lVar3 = 2;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        param_1[1] = 0x73;
      }
      else {
LAB_0012f40c:
        lVar2 = lVar3 + 1;
        *(longlong *)(param_1 + 0x100) = lVar2;
        param_1[lVar3] = 0x6e;
        param_1[0x108] = 0x6e;
        if (lVar2 != 0xff) goto LAB_0012f428;
        uVar5 = 0x74;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x73;
        lVar3 = 1;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      goto LAB_0012f50c;
    }
    lVar3 = lVar2 + 1;
    *(longlong *)(param_1 + 0x100) = lVar3;
    param_1[lVar2] = 0x20;
    param_1[0x108] = 0x20;
    if (lVar3 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *param_1 = 99;
      lVar3 = 2;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      param_1[1] = 0x6f;
      goto LAB_0012f40c;
    }
    lVar2 = lVar2 + 2;
    *(longlong *)(param_1 + 0x100) = lVar2;
    param_1[lVar3] = 99;
    param_1[0x108] = 99;
    if (lVar2 != 0xff) goto LAB_0012f3f0;
    param_1[0xff] = 0;
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    *param_1 = 0x6f;
    lVar2 = 2;
    *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    param_1[1] = 0x6e;
LAB_0012f428:
    lVar3 = lVar2 + 1;
    *(longlong *)(param_1 + 0x100) = lVar3;
    param_1[lVar2] = 0x73;
    param_1[0x108] = 0x73;
    uVar5 = 0x74;
    if (lVar3 != 0xff) goto LAB_0012f50c;
    goto LAB_0012f444;
  case 0x1f:
    lVar3 = *(longlong *)(param_1 + 0x100);
    if (lVar3 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar2 = 1;
      lVar3 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar2 = lVar3 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar2;
    param_1[lVar3] = 0x20;
    param_1[0x108] = 0x20;
    goto LAB_0012f494;
  case 0x20:
    lVar3 = *(longlong *)(param_1 + 0x100);
    if (lVar3 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar2 = 1;
      lVar3 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar2 = lVar3 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar2;
    param_1[lVar3] = 0x20;
    param_1[0x108] = 0x20;
    goto LAB_0012f4e4;
  case 0x21:
    lVar2 = *(longlong *)(param_1 + 0x100);
    if (lVar2 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar3 = 1;
      lVar2 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar3 = lVar2 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar3;
    param_1[lVar2] = 0x20;
    param_1[0x108] = 0x20;
    param_3 = *(undefined4 **)(param_3 + 4);
    goto LAB_0012f224;
  case 0x22:
    if ((param_2 >> 2 & 1) == 0) {
      lVar2 = *(longlong *)(param_1 + 0x100);
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar3 = 1;
        lVar2 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar3 = lVar2 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar3;
      param_1[lVar2] = 0x2a;
      param_1[0x108] = 0x2a;
    }
    break;
  case 0x23:
    lVar2 = *(longlong *)(param_1 + 0x100);
LAB_0012f494:
    if (lVar2 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar3 = 1;
      lVar2 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar3 = lVar2 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar3;
    param_1[lVar2] = 0x26;
    param_1[0x108] = 0x26;
    break;
  case 0x24:
    lVar2 = *(longlong *)(param_1 + 0x100);
LAB_0012f4e4:
    if (lVar2 == 0xff) {
      uVar5 = 0x26;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar3 = 1;
      *param_1 = 0x26;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar3 = lVar2 + 1;
      *(longlong *)(param_1 + 0x100) = lVar3;
      param_1[lVar2] = 0x26;
      param_1[0x108] = 0x26;
      uVar5 = 0x26;
      if (lVar3 == 0xff) {
LAB_0012f444:
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,lVar3,*(undefined8 *)(param_1 + 0x118));
        lVar2 = 1;
        lVar3 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        goto LAB_0012f510;
      }
    }
LAB_0012f50c:
    lVar2 = lVar3 + 1;
LAB_0012f510:
    *(longlong *)(param_1 + 0x100) = lVar2;
    param_1[lVar3] = uVar5;
    param_1[0x108] = uVar5;
    return;
  case 0x25:
    pcVar6 = "complex ";
    lVar2 = *(longlong *)(param_1 + 0x100);
    do {
      cVar1 = *pcVar6;
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar3 = 1;
        lVar2 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar3 = lVar2 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar3;
      pcVar6 = pcVar6 + 1;
      param_1[lVar2] = cVar1;
      param_1[0x108] = cVar1;
      lVar2 = lVar3;
    } while (pcVar6 != "");
    break;
  case 0x26:
    pcVar6 = "imaginary ";
    lVar2 = *(longlong *)(param_1 + 0x100);
    do {
      cVar1 = *pcVar6;
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar3 = 1;
        lVar2 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar3 = lVar2 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar3;
      pcVar6 = pcVar6 + 1;
      param_1[lVar2] = cVar1;
      param_1[0x108] = cVar1;
      lVar2 = lVar3;
    } while (pcVar6 != "");
    break;
  case 0x2b:
    if (param_1[0x108] != '(') {
      lVar2 = *(longlong *)(param_1 + 0x100);
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar3 = 1;
        lVar2 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar3 = lVar2 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar3;
      param_1[lVar2] = 0x20;
      param_1[0x108] = 0x20;
    }
    FUN_0012b7dc(param_1,(ulonglong)param_2,*(undefined8 *)(param_3 + 2));
    lVar2 = *(longlong *)(param_1 + 0x100);
    if (lVar2 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar2 = 2;
      *param_1 = 0x3a;
      param_1[1] = 0x3a;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
LAB_0012f6f8:
      lVar3 = lVar2 + 1;
    }
    else {
      lVar3 = lVar2 + 1;
      *(longlong *)(param_1 + 0x100) = lVar3;
      param_1[lVar2] = 0x3a;
      param_1[0x108] = 0x3a;
      if (lVar3 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x3a;
        lVar2 = 1;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        goto LAB_0012f6f8;
      }
      lVar2 = lVar2 + 2;
      *(longlong *)(param_1 + 0x100) = lVar2;
      param_1[lVar3] = 0x3a;
      param_1[0x108] = 0x3a;
      if (lVar2 != 0xff) goto LAB_0012f6f8;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar3 = 1;
      lVar2 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar3;
    param_1[lVar2] = 0x2a;
    param_1[0x108] = 0x2a;
    break;
  case 0x2d:
    pcVar6 = " __vector(";
    lVar2 = *(longlong *)(param_1 + 0x100);
    do {
      cVar1 = *pcVar6;
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar3 = 1;
        lVar2 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar3 = lVar2 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar3;
      pcVar6 = pcVar6 + 1;
      param_1[lVar2] = cVar1;
      param_1[0x108] = cVar1;
      lVar2 = lVar3;
    } while (pcVar6 != "");
    FUN_0012b7dc(param_1,(ulonglong)param_2,*(undefined8 *)(param_3 + 2));
    lVar2 = *(longlong *)(param_1 + 0x100);
    if (lVar2 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar3 = 1;
      lVar2 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar3 = lVar2 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar3;
    param_1[lVar2] = 0x29;
    param_1[0x108] = 0x29;
  }
  return;
}



void FUN_0012fa68(undefined *param_1,uint param_2,undefined8 *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  
  if (param_3 != (undefined8 *)0x0) {
    iVar2 = *(int *)(param_1 + 0x130);
    while (iVar2 == 0) {
      if (*(int *)(param_3 + 2) == 0) {
        piVar5 = (int *)param_3[1];
        iVar2 = *piVar5;
        if ((param_4 != 0) || (4 < iVar2 - 0x1cU)) {
          *(undefined4 *)(param_3 + 2) = 1;
          uVar8 = *(undefined8 *)(param_1 + 0x120);
          *(undefined8 *)(param_1 + 0x120) = param_3[3];
          if (iVar2 == 0x29) {
            FUN_00130044(param_1,(ulonglong)param_2,piVar5 + 4,*param_3);
            *(undefined8 *)(param_1 + 0x120) = uVar8;
            return;
          }
          if (iVar2 == 0x2a) {
            FUN_0012fd7c(param_1,(ulonglong)param_2,piVar5 + 2,*param_3);
            *(undefined8 *)(param_1 + 0x120) = uVar8;
            return;
          }
          if (iVar2 == 2) {
            uVar6 = *(undefined8 *)(param_1 + 0x128);
            *(undefined8 *)(param_1 + 0x128) = 0;
            FUN_0012b7dc(param_1,(ulonglong)param_2,*(undefined8 *)(piVar5 + 2));
            *(undefined8 *)(param_1 + 0x128) = uVar6;
            lVar3 = *(longlong *)(param_1 + 0x100);
            if ((param_2 >> 2 & 1) != 0) {
              if (lVar3 == 0xff) {
                param_1[0xff] = 0;
                (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
                lVar4 = 1;
                lVar3 = 0;
                *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
              }
              else {
                lVar4 = lVar3 + 1;
              }
              *(longlong *)(param_1 + 0x100) = lVar4;
              param_1[lVar3] = 0x2e;
              param_1[0x108] = 0x2e;
              goto LAB_0012fbfc;
            }
            if (lVar3 == 0xff) {
              param_1[0xff] = 0;
              (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
              lVar4 = 1;
              *param_1 = 0x3a;
              *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
LAB_0012fbd0:
              lVar3 = lVar4 + 1;
            }
            else {
              lVar4 = lVar3 + 1;
              *(longlong *)(param_1 + 0x100) = lVar4;
              param_1[lVar3] = 0x3a;
              param_1[0x108] = 0x3a;
              if (lVar4 != 0xff) goto LAB_0012fbd0;
              param_1[0xff] = 0;
              (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
              lVar3 = 1;
              lVar4 = 0;
              *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
            }
            *(longlong *)(param_1 + 0x100) = lVar3;
            param_1[lVar4] = 0x3a;
            param_1[0x108] = 0x3a;
LAB_0012fbfc:
            piVar5 = *(int **)(param_3[1] + 0x10);
            iVar2 = *piVar5;
            if (iVar2 != 0x46) goto LAB_0012fc1c;
            pcVar7 = "{default arg#";
            lVar3 = *(longlong *)(param_1 + 0x100);
            do {
              cVar1 = *pcVar7;
              if (lVar3 == 0xff) {
                param_1[0xff] = 0;
                (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
                lVar4 = 1;
                lVar3 = 0;
                *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
              }
              else {
                lVar4 = lVar3 + 1;
              }
              *(longlong *)(param_1 + 0x100) = lVar4;
              pcVar7 = pcVar7 + 1;
              param_1[lVar3] = cVar1;
              param_1[0x108] = cVar1;
              lVar3 = lVar4;
            } while (pcVar7 != "");
            FUN_00123b3c(param_1,(longlong)(piVar5[4] + 1));
            FUN_00123934(param_1,&DAT_00138460);
            do {
              piVar5 = *(int **)(piVar5 + 2);
              iVar2 = *piVar5;
LAB_0012fc1c:
            } while (iVar2 - 0x1cU < 5);
            FUN_0012b7dc(param_1,(ulonglong)param_2,piVar5);
            *(undefined8 *)(param_1 + 0x120) = uVar8;
            return;
          }
          FUN_0012f1e8(param_1,(ulonglong)param_2);
          *(undefined8 *)(param_1 + 0x120) = uVar8;
        }
      }
      param_3 = (undefined8 *)*param_3;
      if (param_3 == (undefined8 *)0x0) {
        return;
      }
      iVar2 = *(int *)(param_1 + 0x130);
    }
  }
  return;
}



void FUN_0012fd7c(undefined *param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = param_4;
  if (param_4 != (longlong *)0x0) {
    do {
      if (*(int *)(plVar1 + 2) == 0) {
        if (*(int *)plVar1[1] == 0x2a) {
          FUN_0012fa68(param_1,(ulonglong)param_2,param_4,0);
          lVar3 = *(longlong *)(param_1 + 0x100);
          goto joined_r0x0012fee4;
        }
        lVar3 = *(longlong *)(param_1 + 0x100);
        if (lVar3 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar2 = 1;
          *param_1 = 0x20;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
LAB_0012fe80:
          lVar3 = lVar2 + 1;
        }
        else {
          lVar2 = lVar3 + 1;
          *(longlong *)(param_1 + 0x100) = lVar2;
          param_1[lVar3] = 0x20;
          param_1[0x108] = 0x20;
          if (lVar2 != 0xff) goto LAB_0012fe80;
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar3 = 1;
          lVar2 = 0;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar3;
        param_1[lVar2] = 0x28;
        param_1[0x108] = 0x28;
        FUN_0012fa68(param_1,(ulonglong)param_2,param_4,0);
        lVar3 = *(longlong *)(param_1 + 0x100);
        lVar2 = lVar3 + 1;
        if (lVar3 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar2 = 1;
          lVar3 = 0;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar2;
        param_1[lVar3] = 0x29;
        param_1[0x108] = 0x29;
        goto LAB_0012fdc8;
      }
      plVar1 = (longlong *)*plVar1;
    } while (plVar1 != (longlong *)0x0);
    FUN_0012fa68(param_1,(ulonglong)param_2,param_4,0);
  }
  lVar2 = *(longlong *)(param_1 + 0x100);
LAB_0012fdc8:
  if (lVar2 == 0xff) {
    param_1[0xff] = 0;
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    lVar3 = 1;
    lVar2 = 0;
    *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
  }
  else {
    lVar3 = lVar2 + 1;
  }
  *(longlong *)(param_1 + 0x100) = lVar3;
  param_1[lVar2] = 0x20;
  param_1[0x108] = 0x20;
joined_r0x0012fee4:
  if (lVar3 == 0xff) {
    param_1[0xff] = 0;
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    *param_1 = 0x5b;
    param_1[0x108] = 0x5b;
    lVar2 = 1;
    lVar3 = *param_3;
    *(undefined8 *)(param_1 + 0x100) = 1;
    *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    if (lVar3 == 0) goto LAB_0012fe20;
LAB_0012fe08:
    FUN_0012b7dc(param_1,(ulonglong)param_2);
    lVar2 = *(longlong *)(param_1 + 0x100);
  }
  else {
    lVar2 = lVar3 + 1;
    *(longlong *)(param_1 + 0x100) = lVar2;
    param_1[lVar3] = 0x5b;
    param_1[0x108] = 0x5b;
    if (*param_3 != 0) goto LAB_0012fe08;
  }
  if (lVar2 == 0xff) {
    param_1[0xff] = 0;
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    *(undefined8 *)(param_1 + 0x100) = 1;
    *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    *param_1 = 0x5d;
    param_1[0x108] = 0x5d;
    return;
  }
LAB_0012fe20:
  *(longlong *)(param_1 + 0x100) = lVar2 + 1;
  param_1[lVar2] = 0x5d;
  param_1[0x108] = 0x5d;
  return;
}



void FUN_00130044(undefined *param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if (param_4 != (longlong *)0x0) {
    iVar1 = *(int *)(param_4 + 2);
    plVar3 = param_4;
joined_r0x00130070:
    if (iVar1 == 0) {
      switch(*(undefined4 *)plVar3[1]) {
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x21:
      case 0x25:
      case 0x26:
      case 0x2b:
        bVar2 = param_1[0x108];
LAB_00130154:
        if (bVar2 == 0x20) goto LAB_001301c0;
        lVar5 = *(longlong *)(param_1 + 0x100);
        if (lVar5 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar4 = 1;
          lVar5 = 0;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        }
        else {
          lVar4 = lVar5 + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar4;
        param_1[lVar5] = 0x20;
        param_1[0x108] = 0x20;
        if (lVar4 != 0xff) goto LAB_001301cc;
LAB_00130184:
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,lVar4,*(undefined8 *)(param_1 + 0x118));
        lVar5 = 1;
        lVar4 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        break;
      default:
        plVar3 = (longlong *)*plVar3;
        if (plVar3 != (longlong *)0x0) goto code_r0x001300ac;
        goto LAB_001300b4;
      case 0x22:
      case 0x23:
      case 0x24:
        bVar2 = param_1[0x108];
        if ((bVar2 & 0xfd) != 0x28) goto LAB_00130154;
LAB_001301c0:
        lVar4 = *(longlong *)(param_1 + 0x100);
        if (lVar4 == 0xff) goto LAB_00130184;
LAB_001301cc:
        lVar5 = lVar4 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar5;
      param_1[lVar4] = 0x28;
      param_1[0x108] = 0x28;
      uVar6 = *(undefined8 *)(param_1 + 0x128);
      *(undefined8 *)(param_1 + 0x128) = 0;
      FUN_0012fa68(param_1,(ulonglong)param_2,param_4,0);
      lVar4 = *(longlong *)(param_1 + 0x100);
      if (lVar4 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar5 = 1;
        lVar4 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar5 = lVar4 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar5;
      param_1[lVar4] = 0x29;
      param_1[0x108] = 0x29;
      goto joined_r0x001300d8;
    }
  }
LAB_001300b4:
  uVar6 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = 0;
  FUN_0012fa68(param_1,(ulonglong)param_2,param_4,0);
  lVar5 = *(longlong *)(param_1 + 0x100);
joined_r0x001300d8:
  if (lVar5 == 0xff) {
    param_1[0xff] = 0;
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    *param_1 = 0x28;
    param_1[0x108] = 0x28;
    lVar4 = 1;
    lVar5 = *param_3;
    *(undefined8 *)(param_1 + 0x100) = 1;
    *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    if (lVar5 != 0) goto LAB_001300f8;
  }
  else {
    lVar4 = lVar5 + 1;
    *(longlong *)(param_1 + 0x100) = lVar4;
    param_1[lVar5] = 0x28;
    param_1[0x108] = 0x28;
    if (*param_3 != 0) {
LAB_001300f8:
      FUN_0012b7dc(param_1,(ulonglong)param_2);
      lVar4 = *(longlong *)(param_1 + 0x100);
    }
    if (lVar4 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar5 = 1;
      lVar4 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      goto LAB_00130114;
    }
  }
  lVar5 = lVar4 + 1;
LAB_00130114:
  *(longlong *)(param_1 + 0x100) = lVar5;
  param_1[lVar4] = 0x29;
  param_1[0x108] = 0x29;
  FUN_0012fa68(param_1,(ulonglong)param_2,param_4,1);
  *(undefined8 *)(param_1 + 0x128) = uVar6;
  return;
code_r0x001300ac:
  iVar1 = *(int *)(plVar3 + 2);
  goto joined_r0x00130070;
}



void FUN_001302f4(undefined *param_1,undefined8 param_2,int *param_3)

{
  undefined uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*param_3 != 0x31) {
    FUN_0012b7dc();
    return;
  }
  lVar4 = (longlong)*(int *)(*(longlong *)(param_3 + 2) + 0x10);
  lVar5 = *(longlong *)(*(longlong *)(param_3 + 2) + 8);
  if (lVar4 != 0) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x100);
    do {
      while (uVar1 = *(undefined *)(lVar5 + lVar3), lVar2 == 0xff) {
        lVar3 = lVar3 + 1;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(undefined8 *)(param_1 + 0x100) = 1;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        *param_1 = uVar1;
        param_1[0x108] = uVar1;
        lVar2 = 1;
        if (lVar4 == lVar3) {
          return;
        }
      }
      *(longlong *)(param_1 + 0x100) = lVar2 + 1;
      lVar3 = lVar3 + 1;
      param_1[lVar2] = uVar1;
      param_1[0x108] = uVar1;
      lVar2 = lVar2 + 1;
    } while (lVar4 != lVar3);
  }
  return;
}



void FUN_001303c8(longlong param_1,ulonglong param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = *param_3;
  if ((uVar1 != 0x30 && 1 < uVar1) && (uVar1 != 6)) {
    lVar3 = *(longlong *)(param_1 + 0x100);
    if (lVar3 == 0xff) {
      *(undefined *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar2 = 1;
      lVar3 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar2 = lVar3 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar2;
    *(undefined *)(param_1 + lVar3) = 0x28;
    *(undefined *)(param_1 + 0x108) = 0x28;
    FUN_0012b7dc(param_1,param_2 & 0xffffffff,param_3);
    lVar3 = *(longlong *)(param_1 + 0x100);
    if (lVar3 == 0xff) {
      *(undefined *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar2 = 1;
      lVar3 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar2 = lVar3 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar2;
    *(undefined *)(param_1 + lVar3) = 0x29;
    *(undefined *)(param_1 + 0x108) = 0x29;
    return;
  }
  FUN_0012b7dc(param_1);
  return;
}



ulonglong FUN_001304d0(char *param_1,code *param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  code *pcVar6;
  int iVar7;
  size_t sVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  char cVar12;
  uint uVar13;
  char *pcVar14;
  undefined auStack560 [16];
  char *local_1d8;
  char *local_1c8;
  char *local_1c0;
  uint local_1b8;
  char *local_1b0;
  undefined *local_1a8;
  undefined4 local_1a0;
  int local_19c;
  undefined *local_198;
  undefined4 local_190;
  size_t local_18c;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined auStack360 [256];
  longlong local_68;
  undefined local_60;
  code *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  undefined4 local_20;
  uint local_1c;
  undefined *local_18;
  undefined4 local_10;
  uint local_c;
  undefined8 local_8;
  
  cVar12 = *param_1;
  if ((cVar12 == '_') && (param_1[1] == 'Z')) {
    iVar9 = 1;
  }
  else {
    iVar9 = 0;
    iVar7 = strncmp(param_1,"_GLOBAL_",8);
    if ((iVar7 == 0) && ((cVar1 = param_1[8], cVar1 == '_' || cVar1 == '.' || (cVar1 == '$')))) {
      cVar1 = param_1[9];
      if (((cVar1 == 'I') || (iVar9 = 0, cVar1 == 'D')) &&
         ((iVar9 = 0, param_1[10] == '_' && (iVar9 = 2, cVar1 != 'I')))) {
        iVar9 = 3;
      }
    }
  }
  local_18c = strlen(param_1);
  local_1c0 = param_1 + (ulonglong)local_18c;
  lVar2 = -((longlong)(int)(local_18c << 1) * 0x18 + 0x10);
  local_1b8 = 0x11;
  lVar3 = -((-(ulonglong)(local_18c >> 0x1f) & 0xfffffff800000000 | (ulonglong)local_18c << 3) +
            0x16 & 0xfffffffffffffff0);
  local_1c8 = param_1;
  local_1b0 = param_1;
  local_198 = &stack0xfffffffffffffde0 + lVar3 + lVar2;
  local_19c = local_18c << 1;
  local_1a0 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_174 = 0;
  local_170 = 0;
  local_1a8 = &stack0xfffffffffffffde0 + lVar2;
  if (iVar9 == 1) {
    if (cVar12 != '_') {
      return 0;
    }
    if (param_1[1] != 'Z') {
      return 0;
    }
    local_1b0 = param_1 + 2;
    lVar11 = FUN_001280d4(&local_1c8,1);
    if ((local_1b8 & 1) == 0) {
LAB_001308f0:
      cVar12 = *local_1b0;
    }
    else {
      while (pcVar5 = local_1b0, cVar12 = *local_1b0, cVar12 == '.') {
        cVar12 = local_1b0[1];
        if (((byte)(cVar12 + 0x9fU) < 0x1a) || (cVar12 == '_')) {
          cVar12 = local_1b0[2];
          pcVar14 = local_1b0 + 2;
          if (0x19 < (byte)(cVar12 + 0x9fU)) goto LAB_001308e4;
          do {
            do {
              pcVar14 = pcVar14 + 1;
              cVar12 = *pcVar14;
            } while ((byte)(cVar12 + 0x9fU) < 0x1a);
LAB_001308e4:
          } while (cVar12 == '_');
        }
        else {
          if (9 < (byte)(cVar12 - 0x30U)) goto LAB_001308f0;
          cVar12 = *local_1b0;
          pcVar14 = local_1b0;
        }
        while (cVar12 == '.') {
          while( true ) {
            if (9 < (byte)(pcVar14[1] - 0x30U)) goto LAB_00130874;
            cVar12 = pcVar14[2];
            pcVar14 = pcVar14 + 2;
            if (9 < (byte)(cVar12 - 0x30U)) break;
            do {
              pcVar14 = pcVar14 + 1;
            } while ((byte)(*pcVar14 - 0x30U) < 10);
            if (*pcVar14 != '.') goto LAB_00130874;
          }
        }
LAB_00130874:
        iVar7 = (int)local_1b0;
        local_1b0 = pcVar14;
        uVar10 = FUN_00123094(&local_1c8,pcVar5,(ulonglong)(uint)((int)pcVar14 - iVar7));
        lVar11 = FUN_00122ff4(&local_1c8,0x4c,lVar11,uVar10);
      }
    }
  }
  else {
    if (iVar9 == 0) {
      lVar11 = FUN_00125bf8(&local_1c8);
      cVar12 = *local_1b0;
    }
    else {
      local_1b0 = param_1 + 0xb;
      uVar13 = 0x43;
      if (iVar9 != 2) {
        uVar13 = 0x44;
      }
      if ((param_1[0xb] == '_') && (param_1[0xc] == 'Z')) {
        local_1b0 = param_1 + 0xd;
        uVar10 = FUN_001280d4(&local_1c8,0,0x44);
      }
      else {
        local_1d8 = local_1b0;
        sVar8 = strlen(local_1b0,(&stack0xfffffffffffffde0)[lVar3 + lVar2]);
        uVar10 = FUN_00123094(&local_1c8,local_1d8,(ulonglong)sVar8);
      }
      lVar11 = FUN_00122ff4(&local_1c8,(ulonglong)uVar13,uVar10,0);
      pcVar5 = local_1b0;
      sVar8 = strlen(local_1b0,(&stack0xfffffffffffffde0)[lVar3 + lVar2]);
      local_1b0 = pcVar5 + sVar8;
      cVar12 = pcVar5[sVar8];
    }
  }
  if ((cVar12 == '\0') && (lVar11 != 0)) {
    local_58 = param_2;
    local_50 = param_3;
    local_68 = 0;
    local_60 = 0;
    local_48 = 0;
    local_40 = 0;
    local_34 = 0;
    local_30 = 0;
    local_38 = 0;
    local_28 = (undefined *)0x0;
    local_20 = 0;
    local_1c = 0;
    local_18 = (undefined *)0x0;
    local_10 = 0;
    local_c = 0;
    FUN_00123564(&local_c,&local_1c,lVar11);
    local_8 = 0;
    local_c = local_1c * local_c;
    lVar4 = -((-(ulonglong)(local_1c >> 0x1f) & 0xfffffff000000000 | (ulonglong)local_1c << 4) +
             0x10);
    local_28 = &stack0xfffffffffffffde0 + lVar4 + lVar3 + lVar2;
    local_18 = &stack0xfffffffffffffde0 +
               ((lVar4 + lVar3 + lVar2) -
               ((-(ulonglong)(local_c >> 0x1f) & 0xfffffff000000000 | (ulonglong)local_c << 4) +
               0x10));
    FUN_0012b7dc(auStack360,0x11,lVar11);
    uVar10 = local_50;
    pcVar6 = local_58;
    lVar2 = local_68;
    auStack360[local_68] = 0;
    (*pcVar6)(auStack360,lVar2,uVar10);
    return (ulonglong)(local_38 == 0);
  }
  return 0;
}



char * __cxa_demangle(longlong param_1,char *param_2,ulonglong *param_3,undefined4 *param_4)

{
  int iVar1;
  size_t sVar2;
  char *__src;
  ulonglong uVar3;
  char *local_20;
  undefined8 local_18;
  ulonglong local_10;
  int local_8;
  
  if ((param_1 == 0) || ((param_2 != (char *)0x0 && (param_3 == (ulonglong *)0x0)))) {
    if (param_4 == (undefined4 *)0x0) {
      return (char *)0;
    }
    *param_4 = 0xfffffffd;
  }
  else {
    local_20 = (char *)0x0;
    local_18 = 0;
    local_10 = 0;
    local_8 = 0;
    iVar1 = FUN_001304d0(param_1,FUN_00123844,&local_20);
    __src = local_20;
    if (iVar1 == 0) {
      free(local_20);
      if (param_4 == (undefined4 *)0x0) {
        return (char *)0;
      }
    }
    else {
      uVar3 = 1;
      if (local_8 == 0) {
        uVar3 = local_10;
      }
      if (local_20 != (char *)0x0) {
        if (param_2 == (char *)0x0) {
          if (param_3 != (ulonglong *)0x0) {
            *param_3 = uVar3;
          }
        }
        else {
          sVar2 = strlen(local_20);
          if ((ulonglong)sVar2 < *param_3) {
            memcpy(param_2,__src,sVar2 + 1);
            free(__src);
            __src = param_2;
          }
          else {
            free(param_2);
            *param_3 = uVar3;
          }
        }
        if (param_4 == (undefined4 *)0x0) {
          return __src;
        }
        *param_4 = 0;
        return __src;
      }
      if (param_4 == (undefined4 *)0x0) {
        return (char *)0;
      }
      if (uVar3 == 1) {
        *param_4 = 0xffffffff;
        return (char *)0;
      }
    }
    *param_4 = 0xfffffffe;
  }
  return (char *)0;
}



ulonglong __gcclibcxx_demangle_callback(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    _uVar2 = 0xfffffffd;
  }
  else {
    iVar1 = FUN_001304d0();
    uVar2 = 0xfffffffe;
    if (iVar1 != 0) {
      uVar2 = 0;
    }
    _uVar2 = (ulonglong)uVar2;
  }
  return _uVar2;
}



longlong __cxa_current_exception_type(void)

{
  longlong **pplVar1;
  longlong *plVar2;
  longlong lVar3;
  
  pplVar1 = (longlong **)__cxa_get_globals();
  plVar2 = *pplVar1;
  if (plVar2 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    if ((plVar2[10] & 1U) != 0) {
      plVar2 = (longlong *)(*plVar2 + -0x70);
    }
    lVar3 = *plVar2;
  }
  return lVar3;
}



void FUN_00130adc(byte *param_1,ulonglong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  do {
    bVar1 = *param_1;
    uVar2 = uVar4 & 0x3f;
    uVar4 = (ulonglong)((int)uVar4 + 7);
    uVar3 = uVar3 | ((ulonglong)bVar1 & 0x7f) << uVar2;
    param_1 = param_1 + 1;
  } while ((char)bVar1 < '\0');
  *param_2 = uVar3;
  return;
}



void FUN_00130b04(byte *param_1,ulonglong *param_2)

{
  uint uVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  uVar5 = 0;
  do {
    bVar2 = *param_1;
    uVar3 = uVar5 & 0x3f;
    uVar1 = (int)uVar5 + 7;
    uVar5 = (ulonglong)uVar1;
    uVar4 = uVar4 | ((ulonglong)bVar2 & 0x7f) << uVar3;
    param_1 = param_1 + 1;
  } while ((char)bVar2 < '\0');
  if ((uVar1 < 0x40) && ((bVar2 >> 6 & 1) != 0)) {
    uVar4 = -1 << (uVar5 & 0x3f) | uVar4;
  }
  *param_2 = uVar4;
  return;
}



ulonglong ** FUN_00130b44(byte param_1,ulonglong **param_2,ulonglong **param_3,ulonglong **param_4)

{
  ulonglong **ppuVar1;
  ulonglong **local_8;
  
  if (param_1 == 0x50) {
    local_8 = (ulonglong **)((longlong)param_3 + 7U & 0xfffffffffffffff8);
    ppuVar1 = local_8 + 1;
    local_8 = (ulonglong **)*local_8;
  }
  else {
    switch((uint)param_1 & 0xf) {
    case 0:
    case 4:
    case 0xc:
      ppuVar1 = param_3 + 1;
      local_8 = (ulonglong **)*param_3;
      break;
    case 1:
      ppuVar1 = (ulonglong **)FUN_00130adc(param_3,&local_8);
      break;
    case 2:
      ppuVar1 = (ulonglong **)((longlong)param_3 + 2);
      local_8 = (ulonglong **)(ulonglong)*(ushort *)param_3;
      break;
    case 3:
      ppuVar1 = (ulonglong **)((longlong)param_3 + 4);
      local_8 = (ulonglong **)(ulonglong)*(uint *)param_3;
      break;
    default:
                    // WARNING: Subroutine does not return
      abort();
    case 9:
      ppuVar1 = (ulonglong **)FUN_00130b04(param_3,&local_8);
      break;
    case 10:
      ppuVar1 = (ulonglong **)((longlong)param_3 + 2);
      local_8 = (ulonglong **)(longlong)*(short *)param_3;
      break;
    case 0xb:
      ppuVar1 = (ulonglong **)((longlong)param_3 + 4);
      local_8 = (ulonglong **)(longlong)(int)*(uint *)param_3;
    }
    if (local_8 != (ulonglong **)0x0) {
      if ((param_1 & 0x70) != 0x10) {
        param_3 = param_2;
      }
      local_8 = (ulonglong **)((longlong)local_8 + (longlong)param_3);
      if ((char)param_1 < '\0') {
        local_8 = (ulonglong **)*local_8;
      }
    }
  }
  *(ulonglong ***)param_4 = local_8;
  return ppuVar1;
}



void FUN_00130c34(void)

{
  DAT_00157fd0 = 8;
  DAT_00157fd1 = 8;
  DAT_00157fd2 = 8;
  DAT_00157fd3 = 8;
  DAT_00157fd4 = 8;
  DAT_00157fd5 = 8;
  DAT_00157fd6 = 8;
  DAT_00157fd7 = 8;
  DAT_00157fd8 = 8;
  DAT_00157fd9 = 8;
  DAT_00157fda = 8;
  DAT_00157fdb = 8;
  DAT_00157fdc = 8;
  DAT_00157fdd = 8;
  DAT_00157fde = 8;
  DAT_00157fdf = 8;
  DAT_00157fe0 = 8;
  DAT_00157fe1 = 8;
  DAT_00157fe2 = 8;
  DAT_00157fe3 = 8;
  DAT_00157fe4 = 8;
  DAT_00157fe5 = 8;
  DAT_00157fe6 = 8;
  DAT_00157fe7 = 8;
  DAT_00157fe8 = 8;
  DAT_00157fe9 = 8;
  DAT_00157fea = 8;
  DAT_00157feb = 8;
  DAT_00157fec = 8;
  DAT_00157fed = 8;
  DAT_00157fee = 8;
  DAT_00157fef = 8;
  DAT_00158010 = 8;
  DAT_00158011 = 8;
  DAT_00158012 = 8;
  DAT_00158013 = 8;
  DAT_00158014 = 8;
  DAT_00158015 = 8;
  DAT_00158016 = 8;
  DAT_00158017 = 8;
  DAT_00158018 = 8;
  DAT_00158019 = 8;
  DAT_0015801a = 8;
  DAT_0015801b = 8;
  DAT_0015801c = 8;
  DAT_0015801d = 8;
  DAT_0015801e = 8;
  DAT_0015801f = 8;
  DAT_00158020 = 8;
  DAT_00158021 = 8;
  DAT_00158022 = 8;
  DAT_00158023 = 8;
  DAT_00158024 = 8;
  DAT_00158025 = 8;
  DAT_00158026 = 8;
  DAT_00158027 = 8;
  DAT_00158028 = 8;
  DAT_00158029 = 8;
  DAT_0015802a = 8;
  DAT_0015802b = 8;
  DAT_0015802c = 8;
  DAT_0015802d = 8;
  DAT_0015802e = 8;
  DAT_0015802f = 8;
  DAT_00158030 = 8;
  return;
}



void FUN_00130d48(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  if (DAT_00157fef == '\b') {
    *param_3 = param_2;
    if ((*(ulonglong *)(param_1 + 0x340) >> 0x3e & 1) != 0) {
      *(undefined *)(param_1 + 0x377) = 0;
    }
    *(undefined8 **)(param_1 + 0xf8) = param_3;
    return;
  }
                    // WARNING: Subroutine does not return
  abort();
}



undefined8 * _Unwind_GetGR(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x62) {
    puVar1 = *(undefined8 **)(param_1 + (longlong)param_2 * 8);
    if (((*(ulonglong *)(param_1 + 0x340) >> 0x3e & 1) == 0) ||
       (*(char *)(param_1 + param_2 + 0x358) == '\0')) {
      if ((&DAT_00157fd0)[param_2] != '\b') goto LAB_00130d94;
      puVar1 = (undefined8 *)*puVar1;
    }
    return puVar1;
  }
LAB_00130d94:
                    // WARNING: Subroutine does not return
  abort();
}



longlong FUN_00130ddc(longlong param_1,longlong param_2)

{
  void **__dest;
  void **__src;
  longlong lVar1;
  undefined auStack8 [8];
  
  if ((((*(ulonglong *)(param_2 + 0x340) >> 0x3e & 1) == 0) || (*(char *)(param_2 + 0x377) == '\0'))
     && (*(longlong *)(param_2 + 0xf8) == 0)) {
    FUN_00130d48(param_2,*(undefined8 *)(param_2 + 0x310),auStack8);
  }
  lVar1 = 0;
  while( true ) {
    __dest = *(void ***)(param_1 + lVar1 * 8);
    __src = *(void ***)(param_2 + lVar1 * 8);
    if (*(char *)(param_1 + lVar1 + 0x358) != '\0') break;
    if ((*(char *)(param_2 + lVar1 + 0x358) == '\0') || (__dest == (void **)0x0)) {
      if ((__dest != (void **)0x0 && __src != (void **)0x0) && (__src != __dest)) {
        memcpy(__dest,__src,(uint)(byte)(&DAT_00157fd0)[lVar1]);
      }
    }
    else {
      if ((&DAT_00157fd0)[lVar1] != '\b') break;
      *(void ***)__dest = __src;
    }
    lVar1 = lVar1 + 1;
    if (lVar1 == 0x61) {
      if ((((*(ulonglong *)(param_1 + 0x340) >> 0x3e & 1) == 0) ||
          (lVar1 = 0, *(char *)(param_1 + 0x377) == '\0')) &&
         (lVar1 = 0, *(longlong *)(param_1 + 0xf8) == 0)) {
        lVar1 = _Unwind_GetGR(param_2,0x1f);
        lVar1 = (lVar1 - *(longlong *)(param_1 + 0x310)) + *(longlong *)(param_2 + 0x350);
      }
      return lVar1;
    }
  }
                    // WARNING: Subroutine does not return
  abort();
}



undefined8 _Unwind_GetCFA(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x310);
}



void _Unwind_SetGR(longlong param_1,int param_2,undefined8 param_3)

{
  if (0x61 < param_2) {
LAB_00130f00:
                    // WARNING: Subroutine does not return
    abort();
  }
  if (((*(ulonglong *)(param_1 + 0x340) >> 0x3e & 1) == 0) ||
     (*(char *)(param_1 + param_2 + 0x358) == '\0')) {
    if ((&DAT_00157fd0)[param_2] != '\b') goto LAB_00130f00;
    **(undefined8 **)(param_1 + (longlong)param_2 * 8) = param_3;
  }
  else {
    *(undefined8 *)(param_1 + (longlong)param_2 * 8) = param_3;
  }
  return;
}



undefined8 _Unwind_GetIP(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x318);
}



undefined8 _Unwind_GetIPInfo(longlong param_1,uint *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x318);
  *param_2 = (uint)((ulonglong)*(undefined8 *)(param_1 + 0x340) >> 0x3f);
  return uVar1;
}



void _Unwind_SetIP(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x318) = param_2;
  return;
}



undefined8 _Unwind_GetLanguageSpecificData(longlong param_1)

{
  return *(undefined8 *)(param_1 + 800);
}



undefined8 _Unwind_GetRegionStart(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x338);
}



undefined8 _Unwind_FindEnclosingFunction(longlong param_1)

{
  longlong lVar1;
  undefined auStack24 [16];
  undefined8 local_8;
  
  lVar1 = _Unwind_Find_FDE(param_1 + -1,auStack24);
  if (lVar1 == 0) {
    local_8 = 0;
  }
  return local_8;
}



undefined8 _Unwind_GetDataRelBase(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x330);
}



undefined8 _Unwind_GetTextRelBase(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x328);
}



undefined8 FUN_00130fb4(byte param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  if (param_1 != 0xff) {
    bVar1 = param_1 & 0x70;
    if (bVar1 == 0x20) {
      uVar2 = _Unwind_GetTextRelBase(param_2);
      return uVar2;
    }
    if (bVar1 < 0x21) {
      if (((param_1 & 0x70) != 0) && (bVar1 != 0x10)) {
LAB_0013101c:
                    // WARNING: Subroutine does not return
        abort();
      }
    }
    else {
      if (bVar1 == 0x40) {
        uVar2 = _Unwind_GetRegionStart();
        return uVar2;
      }
      if (bVar1 != 0x50) {
        if (bVar1 == 0x30) {
          uVar2 = _Unwind_GetDataRelBase();
          return uVar2;
        }
        goto LAB_0013101c;
      }
    }
  }
  return 0;
}



void FUN_0013102c(byte *param_1,byte *param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *__dest;
  undefined *puVar3;
  byte *pbVar4;
  void *pvVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined4 uVar13;
  undefined *puVar14;
  undefined *local_28;
  ulonglong local_18;
  longlong local_10;
  longlong local_8;
  
  *(undefined8 *)(param_4 + 0x620) = 0;
  __dest = &stack0xffffffffffffff70;
  puVar14 = (undefined *)0x0;
LAB_00131074:
  while( true ) {
    while( true ) {
      pbVar4 = param_1;
      if ((param_2 <= pbVar4) ||
         (uVar11 = *(ulonglong *)(param_4 + 0x648),
         (ulonglong)(*(longlong *)(param_3 + 0x318) - (*(longlong *)(param_3 + 0x340) >> 0x3f)) <=
         uVar11)) {
        return;
      }
      bVar2 = *pbVar4;
      uVar9 = (ulonglong)bVar2;
      param_1 = pbVar4 + 1;
      bVar1 = bVar2 & 0xc0;
      if (bVar1 != 0x40) break;
      *(longlong *)(param_4 + 0x648) = uVar11 + (uVar9 & 0x3f) * *(longlong *)(param_4 + 0x660);
    }
    if (bVar1 == 0x80) break;
    if (bVar1 != 0xc0) goto code_r0x001310f4;
    *(undefined4 *)(param_4 + (uVar9 & 0x3f) * 0x10 + 8) = 0;
  }
  local_18 = uVar9 & 0x3f;
  goto LAB_00131194;
code_r0x001310f4:
  switch(bVar2) {
  case 0:
    goto LAB_00131074;
  case 1:
    local_28 = (undefined *)(ulonglong)*(byte *)(param_4 + 0x670);
    uVar7 = FUN_00130fb4(local_28,param_3);
    param_1 = (byte *)FUN_00130b44((ulonglong)local_28 & 0xffffffff,uVar7,param_1,&local_8);
    *(longlong *)(param_4 + 0x648) = local_8;
    goto LAB_00131074;
  case 2:
    *(longlong *)(param_4 + 0x648) = uVar11 + (ulonglong)pbVar4[1] * *(longlong *)(param_4 + 0x660);
    param_1 = pbVar4 + 2;
    goto LAB_00131074;
  case 3:
    *(longlong *)(param_4 + 0x648) =
         uVar11 + (ulonglong)*(ushort *)(pbVar4 + 1) * *(longlong *)(param_4 + 0x660);
    param_1 = pbVar4 + 3;
    goto LAB_00131074;
  case 4:
    *(longlong *)(param_4 + 0x648) =
         uVar11 + (ulonglong)*(uint *)(pbVar4 + 1) * *(longlong *)(param_4 + 0x660);
    param_1 = pbVar4 + 5;
    goto LAB_00131074;
  case 5:
    param_1 = (byte *)FUN_00130adc(param_1,&local_18);
LAB_00131194:
    param_1 = (byte *)FUN_00130adc(param_1,&local_10);
    lVar10 = *(longlong *)(param_4 + 0x658);
    lVar8 = local_10;
    break;
  case 6:
  case 8:
    param_1 = (byte *)FUN_00130adc(param_1,&local_18);
    if (local_18 < 0x62) {
      *(undefined4 *)(param_4 + local_18 * 0x10 + 8) = 0;
    }
    goto LAB_00131074;
  case 7:
    param_1 = (byte *)FUN_00130adc(param_1,&local_18);
    if (local_18 < 0x62) {
      *(undefined4 *)(param_4 + local_18 * 0x10 + 8) = 6;
    }
    goto LAB_00131074;
  case 9:
    uVar7 = FUN_00130adc(param_1,&local_18);
    param_1 = (byte *)FUN_00130adc(uVar7,&local_8);
    if (0x61 < local_18) goto LAB_00131074;
    lVar6 = local_18 * 0x10;
    *(undefined4 *)(param_4 + lVar6 + 8) = 2;
    lVar8 = local_8;
    goto LAB_001314f0;
  case 10:
    if (puVar14 == (undefined *)0x0) {
      puVar3 = __dest + -0x660;
      __dest = __dest + -0x660;
    }
    else {
      puVar3 = __dest;
      __dest = puVar14;
      puVar14 = *(undefined **)(puVar14 + 0x620);
    }
    pvVar5 = memcpy(__dest,param_4,0x648,*puVar3);
    *(void **)(param_4 + 0x620) = pvVar5;
    __dest = puVar3;
    goto LAB_00131074;
  case 0xb:
    local_28 = *(undefined **)(param_4 + 0x620);
    memcpy(param_4,local_28,0x648,*__dest);
    *(undefined **)(local_28 + 0x620) = puVar14;
    puVar14 = local_28;
    goto LAB_00131074;
  case 0xc:
    uVar7 = FUN_00130adc(param_1,&local_10);
    *(longlong *)(param_4 + 0x630) = local_10;
    param_1 = (byte *)FUN_00130adc(uVar7,&local_10);
    *(longlong *)(param_4 + 0x628) = local_10;
    goto LAB_001312d8;
  case 0xd:
    param_1 = (byte *)FUN_00130adc(param_1,&local_10);
    *(longlong *)(param_4 + 0x630) = local_10;
LAB_001312d8:
    *(undefined4 *)(param_4 + 0x640) = 1;
    goto LAB_00131074;
  case 0xe:
    param_1 = (byte *)FUN_00130adc(param_1,&local_10);
    lVar8 = local_10;
    goto LAB_001313a4;
  case 0xf:
    *(byte **)(param_4 + 0x638) = param_1;
    *(undefined4 *)(param_4 + 0x640) = 2;
    goto LAB_00131454;
  case 0x10:
    param_1 = (byte *)FUN_00130adc(param_1,&local_18);
    if (0x61 < local_18) goto LAB_00131454;
    uVar13 = 3;
    goto LAB_0013144c;
  case 0x11:
    uVar7 = FUN_00130adc(param_1,&local_18);
    param_1 = (byte *)FUN_00130b04(uVar7,&local_8);
    lVar10 = *(longlong *)(param_4 + 0x658);
    lVar8 = local_8;
    break;
  case 0x12:
    uVar7 = FUN_00130adc(param_1,&local_10);
    *(longlong *)(param_4 + 0x630) = local_10;
    param_1 = (byte *)FUN_00130b04(uVar7,&local_8);
    *(undefined4 *)(param_4 + 0x640) = 1;
    goto LAB_00131398;
  case 0x13:
    param_1 = (byte *)FUN_00130b04(param_1,&local_8);
LAB_00131398:
    lVar8 = local_8 * *(longlong *)(param_4 + 0x658);
LAB_001313a4:
    *(longlong *)(param_4 + 0x628) = lVar8;
    goto LAB_00131074;
  case 0x14:
    uVar7 = FUN_00130adc(param_1,&local_18);
    param_1 = (byte *)FUN_00130adc(uVar7,&local_10);
    lVar10 = *(longlong *)(param_4 + 0x658);
    lVar8 = local_10;
    goto LAB_00131404;
  case 0x15:
    uVar7 = FUN_00130adc(param_1,&local_18);
    param_1 = (byte *)FUN_00130b04(uVar7,&local_8);
    lVar10 = *(longlong *)(param_4 + 0x658);
    lVar8 = local_8;
LAB_00131404:
    if (0x61 < local_18) goto LAB_00131074;
    lVar6 = local_18 * 0x10;
    *(undefined4 *)(param_4 + lVar6 + 8) = 4;
    lVar8 = lVar8 * lVar10;
    goto LAB_001314f0;
  case 0x16:
    param_1 = (byte *)FUN_00130adc(param_1,&local_18);
    if (0x61 < local_18) goto LAB_00131454;
    uVar13 = 5;
LAB_0013144c:
    *(undefined4 *)(param_4 + local_18 * 0x10 + 8) = uVar13;
    *(byte **)(param_4 + local_18 * 0x10) = param_1;
LAB_00131454:
    lVar8 = FUN_00130adc(param_1,&local_10);
    param_1 = (byte *)(lVar8 + local_10);
    goto LAB_00131074;
  default:
    goto switchD_00131100_caseD_17;
  case 0x2d:
    lVar8 = 0x10;
    local_18 = 0x10;
    lVar6 = 0;
    plVar12 = (longlong *)(param_4 + 0x100);
    do {
      *(undefined4 *)(plVar12 + 1) = 1;
      lVar8 = lVar8 + 1;
      *plVar12 = lVar6;
      lVar6 = lVar6 + 8;
      plVar12 = plVar12 + 2;
    } while (lVar8 != 0x20);
    goto LAB_00131074;
  case 0x2e:
    param_1 = (byte *)FUN_00130adc(param_1,&local_10);
    *(longlong *)(param_3 + 0x350) = local_10;
    goto LAB_00131074;
  case 0x2f:
    uVar7 = FUN_00130adc(param_1,&local_18);
    param_1 = (byte *)FUN_00130adc(uVar7,&local_10);
    lVar8 = *(longlong *)(param_4 + 0x658);
    if (0x61 < local_18) goto LAB_00131074;
    lVar6 = local_18 * 0x10;
    *(undefined4 *)(param_4 + lVar6 + 8) = 1;
    lVar8 = -(lVar8 * local_10);
    goto LAB_001314f0;
  }
  if (0x61 < local_18) goto LAB_00131074;
  lVar6 = local_18 * 0x10;
  *(undefined4 *)(param_4 + lVar6 + 8) = 1;
  lVar8 = lVar8 * lVar10;
LAB_001314f0:
  *(longlong *)(param_4 + lVar6) = lVar8;
  goto LAB_00131074;
switchD_00131100_caseD_17:
                    // WARNING: Subroutine does not return
  abort(*__dest);
}



undefined8 FUN_00131524(longlong param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  size_t sVar3;
  uint *puVar4;
  longlong lVar5;
  int *piVar6;
  longlong *plVar7;
  byte *pbVar8;
  byte *pbVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  uint *puVar16;
  char *__s;
  byte *pbVar17;
  ulonglong local_18;
  longlong local_10;
  longlong local_8;
  
  memset(param_2,0,0x680);
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  if (*(longlong *)(param_1 + 0x318) == 0) {
    return 5;
  }
  puVar4 = (uint *)_Unwind_Find_FDE(*(longlong *)(param_1 + 0x318) +
                                    (-1 - (*(longlong *)(param_1 + 0x340) >> 0x3f)),param_1 + 0x328)
  ;
  if (puVar4 == (uint *)0x0) {
    if (**(int **)(param_1 + 0x318) != -0x2d7fee98) {
      return 5;
    }
    if ((*(int **)(param_1 + 0x318))[1] != -0x2bffffff) {
      return 5;
    }
    lVar15 = *(longlong *)(param_1 + 0x310);
    param_2[0xc6] = 0x1f;
    *(undefined4 *)(param_2 + 200) = 1;
    lVar10 = lVar15 + 0x130;
    param_2[0xc5] = 0x130;
    lVar5 = 8;
    plVar7 = param_2;
    do {
      *(undefined4 *)(plVar7 + 1) = 1;
      *plVar7 = lVar5;
      lVar5 = lVar5 + 8;
      plVar7 = plVar7 + 2;
    } while (lVar5 != 0x100);
    piVar6 = (int *)(lVar15 + 0x250);
    while (*piVar6 != 0) {
      if (*piVar6 == 0x46508001) {
        plVar7 = param_2 + 0x80;
        do {
          *(undefined4 *)(plVar7 + 1) = 1;
          plVar14 = plVar7 + 2;
          *plVar7 = (longlong)piVar6 + ((-0x3f0 - lVar10) - (longlong)param_2) + (longlong)plVar7;
          plVar7 = plVar14;
        } while (plVar14 != param_2 + 0xc0);
      }
      piVar6 = (int *)((longlong)piVar6 + (ulonglong)(uint)piVar6[1]);
    }
    *(undefined *)((longlong)param_2 + 0x673) = 1;
    param_2[0x3e] = (lVar15 + 0x230) - lVar10;
    *(undefined4 *)(param_2 + 0x3f) = 1;
    *(undefined4 *)(param_2 + 0xc1) = 4;
    param_2[0xc0] = *(longlong *)(lVar15 + 0x238) - lVar10;
    param_2[0xcd] = 0x60;
LAB_00131920:
    uVar11 = 0;
  }
  else {
    puVar16 = (uint *)((longlong)puVar4 + (4 - (longlong)(int)puVar4[1]));
    param_2[0xc9] = *(longlong *)(param_1 + 0x338);
    __s = (char *)((longlong)puVar16 + 9);
    sVar3 = strlen(__s);
    plVar14 = (longlong *)(__s + (ulonglong)sVar3 + 1);
    plVar7 = plVar14;
    if ((*(char *)((longlong)puVar16 + 9) == 'e') && (*(char *)((longlong)puVar16 + 10) == 'h')) {
      plVar7 = plVar14 + 1;
      __s = (char *)((longlong)puVar16 + 0xb);
      param_2[0xcf] = *plVar14;
    }
    if (*(byte *)(puVar16 + 2) < 4) {
LAB_001316fc:
      uVar11 = FUN_00130adc(plVar7,&local_18);
      param_2[0xcc] = local_18;
      pbVar17 = (byte *)FUN_00130b04(uVar11,&local_10);
      param_2[0xcb] = local_10;
      if (*(char *)(puVar16 + 2) == '\x01') {
        pbVar8 = pbVar17 + 1;
        uVar12 = (ulonglong)*pbVar17;
      }
      else {
        pbVar8 = (byte *)FUN_00130adc(pbVar17,&local_18);
        uVar12 = local_18;
      }
      param_2[0xcd] = uVar12;
      *(undefined *)((longlong)param_2 + 0x671) = 0xff;
      pbVar17 = (byte *)0x0;
      if (*__s == 'z') {
        __s = __s + 1;
        pbVar8 = (byte *)FUN_00130adc(pbVar8,&local_18);
        *(undefined *)((longlong)param_2 + 0x672) = 1;
        pbVar17 = pbVar8 + local_18;
      }
      while( true ) {
        __s = __s + 1;
        cVar2 = *__s;
        if (cVar2 == '\0') break;
        __s = __s;
        if (cVar2 == 'L') {
          *(byte *)((longlong)param_2 + 0x671) = *pbVar8;
LAB_001317b8:
          pbVar8 = pbVar8 + 1;
        }
        else {
          if (cVar2 == 'R') {
            *(byte *)(param_2 + 0xce) = *pbVar8;
            goto LAB_001317b8;
          }
          if (cVar2 == 'P') {
            bVar1 = *pbVar8;
            uVar11 = FUN_00130fb4((ulonglong)bVar1,param_1);
            pbVar8 = (byte *)FUN_00130b44((ulonglong)bVar1,uVar11,pbVar8 + 1,&local_8);
            param_2[0xca] = local_8;
          }
          else {
            pbVar9 = pbVar17;
            if (cVar2 != 'S') goto LAB_00131828;
            *(undefined *)((longlong)param_2 + 0x673) = 1;
          }
        }
      }
      pbVar9 = pbVar8;
      if (pbVar17 != (byte *)0x0) {
        pbVar9 = pbVar17;
      }
LAB_00131828:
      if (pbVar9 != (byte *)0x0) {
        FUN_0013102c(pbVar9,(longlong)puVar16 + (ulonglong)*puVar16 + 4,param_1,param_2);
        if (*(byte *)(param_2 + 0xce) == 0xff) {
          iVar13 = 0;
        }
        else {
          switch((uint)*(byte *)(param_2 + 0xce) & 7) {
          case 0:
          case 4:
            iVar13 = 8;
            break;
          default:
                    // WARNING: Subroutine does not return
            abort();
          case 2:
            iVar13 = 2;
            break;
          case 3:
            iVar13 = 4;
          }
        }
        lVar5 = 0;
        lVar10 = (longlong)puVar4 + (ulonglong)(uint)(iVar13 << 1) + 8;
        if (*(char *)((longlong)param_2 + 0x672) != '\0') {
          lVar10 = FUN_00130adc(lVar10,&local_8);
          lVar5 = lVar10 + local_8;
        }
        bVar1 = *(byte *)((longlong)param_2 + 0x671);
        if (bVar1 != 0xff) {
          uVar11 = FUN_00130fb4((ulonglong)bVar1,param_1);
          lVar10 = FUN_00130b44((ulonglong)bVar1,uVar11,lVar10,&local_8);
          *(longlong *)(param_1 + 800) = local_8;
        }
        if (lVar5 == 0) {
          lVar5 = lVar10;
        }
        FUN_0013102c(lVar5,(longlong)puVar4 + (ulonglong)*puVar4 + 4,param_1,param_2);
        goto LAB_00131920;
      }
    }
    else {
      if ((*(char *)plVar7 == '\b') && (*(char *)((longlong)plVar7 + 1) == '\0')) {
        plVar7 = (longlong *)((longlong)plVar7 + 2);
        goto LAB_001316fc;
      }
    }
    uVar11 = 3;
  }
  return uVar11;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

ulonglong * FUN_00131948(byte *param_1,byte *param_2,undefined8 param_3,ulonglong *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong **ppuVar9;
  ulonglong *puVar10;
  byte *pbVar11;
  ulonglong *puVar12;
  uint uVar13;
  uint local_220 [2];
  ulonglong *local_218;
  ulonglong local_210;
  ulonglong *local_208;
  ulonglong *local_200 [64];
  
  local_200[0] = param_4;
  uVar13 = 1;
LAB_00131998:
  pbVar11 = param_1;
  if (param_2 <= pbVar11) {
    if (uVar13 != 0) {
      return local_200[(int)(uVar13 - 1)];
    }
switchD_00131dd4_caseD_1f:
                    // WARNING: Subroutine does not return
    abort();
  }
  bVar1 = *pbVar11;
  param_1 = pbVar11 + 1;
  if (bVar1 < 0x21) {
    if (bVar1 < 0x1f) {
      if (bVar1 == 0x10) {
        param_1 = (byte *)FUN_00130adc(param_1,&local_218);
        puVar10 = local_218;
      }
      else {
        if (bVar1 < 0x11) {
          if (bVar1 == 10) {
            puVar10 = (ulonglong *)(ulonglong)*(ushort *)(pbVar11 + 1);
LAB_00131ba4:
            param_1 = pbVar11 + 3;
          }
          else {
            if (bVar1 < 0xb) {
              if (bVar1 == 6) goto LAB_00131ce0;
              if (bVar1 < 7) {
                if (bVar1 != 3) goto switchD_00131dd4_caseD_1f;
                param_1 = pbVar11 + 9;
                puVar10 = *(ulonglong **)(pbVar11 + 1);
              }
              else {
                param_1 = pbVar11 + 2;
                if (bVar1 == 8) {
                  puVar10 = (ulonglong *)(ulonglong)pbVar11[1];
                }
                else {
                  if (bVar1 != 9) goto switchD_00131dd4_caseD_1f;
                  puVar10 = (ulonglong *)(longlong)(char)pbVar11[1];
                }
              }
            }
            else {
              if (bVar1 == 0xd) {
                puVar10 = (ulonglong *)(longlong)*(int *)(pbVar11 + 1);
              }
              else {
                if (0xd < bVar1) {
                  param_1 = pbVar11 + 9;
                  if ((bVar1 == 0xe) || (bVar1 == 0xf)) {
                    puVar10 = *(ulonglong **)(pbVar11 + 1);
                    goto LAB_00131eb8;
                  }
                  goto switchD_00131dd4_caseD_1f;
                }
                if (bVar1 == 0xb) {
                  puVar10 = (ulonglong *)(longlong)*(short *)(pbVar11 + 1);
                  goto LAB_00131ba4;
                }
                if (bVar1 != 0xc) goto switchD_00131dd4_caseD_1f;
                puVar10 = (ulonglong *)(ulonglong)*(uint *)(pbVar11 + 1);
              }
              param_1 = pbVar11 + 5;
            }
          }
        }
        else {
          if (bVar1 == 0x15) {
            local_210 = (ulonglong)pbVar11[1];
            param_1 = pbVar11 + 2;
            if ((longlong)(int)(uVar13 - 1) <= (longlong)local_210) goto switchD_00131dd4_caseD_1f;
            puVar10 = local_200[(longlong)(int)(uVar13 - 1) - local_210];
          }
          else {
            if (0x15 < bVar1) {
              if (bVar1 == 0x19) goto LAB_00131ce0;
              if (0x19 < bVar1) goto LAB_00131da4;
              iVar5 = uVar13 - 1;
              iVar2 = uVar13 - 2;
              if (bVar1 == 0x16) {
                if ((int)uVar13 < 2) goto switchD_00131dd4_caseD_1f;
                puVar10 = local_200[iVar5];
                local_200[iVar5] = local_200[iVar2];
                local_200[iVar2] = puVar10;
              }
              else {
                if ((bVar1 != 0x17) || ((int)uVar13 < 3)) goto switchD_00131dd4_caseD_1f;
                puVar10 = local_200[iVar5];
                puVar12 = local_200[(int)(uVar13 - 3)];
                local_200[iVar5] = local_200[iVar2];
                local_200[iVar2] = puVar12;
                local_200[(int)(uVar13 - 3)] = puVar10;
              }
              goto LAB_00131998;
            }
            if (bVar1 == 0x12) {
              if (uVar13 == 0) goto switchD_00131dd4_caseD_1f;
              iVar5 = uVar13 - 1;
            }
            else {
              if (bVar1 < 0x12) {
                param_1 = (byte *)FUN_00130b04(param_1,&local_208);
                puVar10 = local_208;
                goto LAB_00131eb8;
              }
              if (bVar1 == 0x13) {
                if (uVar13 == 0) goto switchD_00131dd4_caseD_1f;
                uVar13 = uVar13 - 1;
                goto LAB_00131998;
              }
              if ((bVar1 != 0x14) || ((int)uVar13 < 2)) goto switchD_00131dd4_caseD_1f;
              iVar5 = uVar13 - 2;
            }
            puVar10 = local_200[iVar5];
          }
        }
      }
    }
    else {
LAB_00131ce0:
      if (uVar13 == 0) goto switchD_00131dd4_caseD_1f;
      uVar13 = uVar13 - 1;
      ppuVar9 = (ulonglong **)local_200[(int)uVar13];
      if (bVar1 == 0x1f) {
        puVar10 = (ulonglong *)-(longlong)ppuVar9;
      }
      else {
        if (bVar1 < 0x20) {
          if (bVar1 == 6) {
switchD_00131d54_caseD_8:
            puVar10 = *ppuVar9;
          }
          else {
            if (bVar1 != 0x19) goto switchD_00131dd4_caseD_1f;
            puVar10 = (ulonglong *)
                      (((ulonglong)ppuVar9 ^ (longlong)ppuVar9 >> 0x3f) -
                      ((longlong)ppuVar9 >> 0x3f));
          }
        }
        else {
          if (bVar1 == 0x23) {
            param_1 = (byte *)FUN_00130adc(param_1,&local_218);
            puVar10 = (ulonglong *)((longlong)ppuVar9 + (longlong)local_218);
          }
          else {
            if (bVar1 == 0x94) {
              param_1 = pbVar11 + 2;
              switch(pbVar11[1]) {
              case 1:
                puVar10 = (ulonglong *)(ulonglong)*(byte *)ppuVar9;
                break;
              case 2:
                puVar10 = (ulonglong *)(ulonglong)*(ushort *)ppuVar9;
                break;
              default:
                goto switchD_00131dd4_caseD_1f;
              case 4:
                puVar10 = (ulonglong *)(ulonglong)*(uint *)ppuVar9;
                break;
              case 8:
                goto switchD_00131d54_caseD_8;
              }
            }
            else {
              if (bVar1 != 0x20) goto switchD_00131dd4_caseD_1f;
              puVar10 = (ulonglong *)~(ulonglong)ppuVar9;
            }
          }
        }
      }
    }
  }
  else {
    if (bVar1 < 0x50) {
      if (0x2f < bVar1) {
        puVar10 = (ulonglong *)(ulonglong)((uint)bVar1 - 0x30);
        goto LAB_00131eb8;
      }
      if (0x27 < bVar1) {
        if (bVar1 < 0x2f) {
          if (0x28 < bVar1) goto LAB_00131da4;
          if (uVar13 == 0) goto switchD_00131dd4_caseD_1f;
          uVar13 = uVar13 - 1;
          param_1 = pbVar11 + 3;
          if (local_200[(int)uVar13] != (ulonglong *)0x0) {
            param_1 = pbVar11 + 3 + *(short *)(pbVar11 + 1);
          }
        }
        else {
          param_1 = pbVar11 + (longlong)*(short *)(pbVar11 + 1) + 3;
        }
        goto LAB_00131998;
      }
      if ((bVar1 < 0x24) && (0x22 < bVar1)) goto LAB_00131ce0;
LAB_00131da4:
      if ((int)uVar13 < 2) goto switchD_00131dd4_caseD_1f;
      uVar3 = uVar13 - 2;
      puVar8 = local_200[(int)uVar3];
      puVar12 = local_200[(int)(uVar13 - 1)];
      uVar13 = uVar3;
      switch(bVar1) {
      case 0x1a:
        puVar10 = (ulonglong *)((ulonglong)puVar12 & (ulonglong)puVar8);
        break;
      case 0x1b:
        puVar10 = (ulonglong *)0x0;
        if (puVar12 != (ulonglong *)0x0) {
          puVar10 = (ulonglong *)((longlong)puVar8 / (longlong)puVar12);
        }
        break;
      case 0x1c:
        puVar10 = (ulonglong *)((longlong)puVar8 - (longlong)puVar12);
        break;
      case 0x1d:
        uVar4 = 0;
        if (puVar12 != (ulonglong *)0x0) {
          uVar4 = (ulonglong)puVar8 / (ulonglong)puVar12;
        }
        puVar10 = (ulonglong *)((longlong)puVar8 - uVar4 * (longlong)puVar12);
        break;
      case 0x1e:
        puVar10 = (ulonglong *)((longlong)puVar12 * (longlong)puVar8);
        break;
      default:
        goto switchD_00131dd4_caseD_1f;
      case 0x21:
        puVar10 = (ulonglong *)((ulonglong)puVar12 | (ulonglong)puVar8);
        break;
      case 0x22:
        puVar10 = (ulonglong *)((longlong)puVar12 + (longlong)puVar8);
        break;
      case 0x24:
        puVar10 = (ulonglong *)((longlong)puVar8 << ((ulonglong)puVar12 & 0x3f));
        break;
      case 0x25:
        puVar10 = (ulonglong *)((ulonglong)puVar8 >> ((ulonglong)puVar12 & 0x3f));
        break;
      case 0x26:
        puVar10 = (ulonglong *)((longlong)puVar8 >> ((ulonglong)puVar12 & 0x3f));
        break;
      case 0x27:
        puVar10 = (ulonglong *)((ulonglong)puVar12 ^ (ulonglong)puVar8);
        break;
      case 0x29:
        puVar10 = (ulonglong *)(ulonglong)(puVar8 == puVar12);
        break;
      case 0x2a:
        puVar10 = (ulonglong *)(ulonglong)((longlong)puVar12 <= (longlong)puVar8);
        break;
      case 0x2b:
        puVar10 = (ulonglong *)(ulonglong)((longlong)puVar12 < (longlong)puVar8);
        break;
      case 0x2c:
        puVar10 = (ulonglong *)(ulonglong)((longlong)puVar8 <= (longlong)puVar12);
        break;
      case 0x2d:
        puVar10 = (ulonglong *)(ulonglong)((longlong)puVar8 < (longlong)puVar12);
        break;
      case 0x2e:
        puVar10 = (ulonglong *)(ulonglong)(puVar8 != puVar12);
      }
    }
    else {
      if (bVar1 != 0x90) {
        if (bVar1 < 0x91) {
          if (bVar1 < 0x70) {
            uVar3 = (uint)bVar1 - 0x50;
            goto LAB_00131c0c;
          }
          param_1 = (byte *)FUN_00130b04(param_1,&local_210);
          lVar7 = _Unwind_GetGR(param_3,(ulonglong)((uint)bVar1 - 0x70));
        }
        else {
          if (bVar1 == 0x94) goto LAB_00131ce0;
          if (0x94 < bVar1) {
            if (bVar1 != 0x96) {
              if (bVar1 == 0xf1) {
                bVar1 = pbVar11[1];
                uVar6 = FUN_00130fb4((ulonglong)bVar1,param_3);
                param_1 = (byte *)FUN_00130b44((ulonglong)bVar1,uVar6,pbVar11 + 2,&local_208);
                puVar10 = local_208;
                goto LAB_00131eb8;
              }
              goto switchD_00131dd4_caseD_1f;
            }
            goto LAB_00131998;
          }
          if (bVar1 != 0x92) goto switchD_00131dd4_caseD_1f;
          uVar6 = FUN_00130adc(param_1,local_220);
          param_1 = (byte *)FUN_00130b04(uVar6,&local_210);
          lVar7 = _Unwind_GetGR(param_3,(ulonglong)local_220[0]);
        }
        puVar10 = (ulonglong *)(lVar7 + local_210);
        goto LAB_00131eb8;
      }
      param_1 = (byte *)FUN_00130adc(param_1,local_220);
      uVar3 = local_220[0];
LAB_00131c0c:
      puVar10 = (ulonglong *)_Unwind_GetGR(param_3,(ulonglong)uVar3);
    }
  }
LAB_00131eb8:
  if (0x3f < uVar13) goto switchD_00131dd4_caseD_1f;
  local_200[(int)uVar13] = puVar10;
  uVar13 = uVar13 + 1;
  goto LAB_00131998;
}



void FUN_00131efc(void *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  longlong *plVar7;
  undefined auStack976 [8];
  longlong local_3c8;
  longlong alStack960 [31];
  longlong local_2c8;
  ulonglong local_80;
  char acStack104 [31];
  char local_49;
  
  memcpy(alStack960,param_1,0x3c0);
  if ((((local_80 >> 0x3e & 1) == 0) || (local_49 == '\0')) && (local_2c8 == 0)) {
    FUN_00130d48(alStack960,*(undefined8 *)((longlong)param_1 + 0x310),auStack976);
  }
  if ((*(ulonglong *)((longlong)param_1 + 0x340) >> 0x3e & 1) != 0) {
    *(undefined *)((longlong)param_1 + 0x377) = 0;
  }
  iVar2 = *(int *)(param_2 + 200);
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  if (iVar2 == 1) {
    lVar3 = _Unwind_GetGR(alStack960,(ulonglong)*(uint *)(param_2 + 0xc6));
    lVar3 = lVar3 + param_2[0xc5];
  }
  else {
    if (iVar2 != 2) {
LAB_00132044:
                    // WARNING: Subroutine does not return
      abort();
    }
    lVar3 = FUN_00130adc(param_2[199],&local_3c8);
    lVar3 = FUN_00131948(lVar3,lVar3 + local_3c8,alStack960,0);
  }
  *(longlong *)((longlong)param_1 + 0x310) = lVar3;
  puVar6 = (undefined *)((longlong)param_1 + 0x358);
  lVar5 = 0;
  plVar7 = param_2;
  do {
    switch(*(undefined4 *)(plVar7 + 1)) {
    case 1:
      lVar4 = lVar3 + *plVar7;
      break;
    case 2:
      if (acStack104[(int)*plVar7] != '\0') {
        lVar4 = _Unwind_GetGR(alStack960);
        goto LAB_00132034;
      }
      lVar4 = alStack960[(int)*plVar7];
      break;
    case 3:
      lVar4 = FUN_00130adc(*plVar7,&local_3c8);
      lVar4 = FUN_00131948(lVar4,lVar4 + local_3c8,alStack960,lVar3);
      break;
    case 4:
      lVar4 = lVar3 + *plVar7;
      goto LAB_00132034;
    case 5:
      lVar4 = FUN_00130adc(*plVar7,&local_3c8);
      lVar4 = FUN_00131948(lVar4,lVar4 + local_3c8,alStack960,lVar3);
LAB_00132034:
      if ((byte)(&DAT_00157fd0)[lVar5] < 9) {
        *puVar6 = 1;
        goto LAB_001320b4;
      }
      goto LAB_00132044;
    default:
      goto switchD_0013200c_caseD_5;
    }
    if ((*(ulonglong *)((longlong)param_1 + 0x340) >> 0x3e & 1) != 0) {
      *puVar6 = 0;
    }
LAB_001320b4:
    *(longlong *)((longlong)param_1 + lVar5 * 8) = lVar4;
switchD_0013200c_caseD_5:
    lVar5 = lVar5 + 1;
    plVar7 = plVar7 + 2;
    puVar6 = puVar6 + 1;
    if (lVar5 == 0x62) {
      uVar1 = *(ulonglong *)((longlong)param_1 + 0x340) & 0x7fffffffffffffff;
      if (*(char *)((longlong)param_2 + 0x673) != '\0') {
        uVar1 = *(ulonglong *)((longlong)param_1 + 0x340) | 0x8000000000000000;
      }
      *(ulonglong *)((longlong)param_1 + 0x340) = uVar1;
      return;
    }
  } while( true );
}



void FUN_00132108(void *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 unaff_x30;
  undefined auStack1672 [8];
  undefined auStack1664 [1576];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_40;
  
  memset(param_1,0,0x3c0);
  *(undefined8 *)((longlong)param_1 + 0x318) = unaff_x30;
  *(undefined8 *)((longlong)param_1 + 0x340) = 0x4000000000000000;
  iVar1 = FUN_00131524(param_1,auStack1664);
  if (iVar1 == 0) {
    iVar1 = pthread_once((pthread_once_t *)&DAT_00158034,FUN_00130c34);
    if ((iVar1 != 0) && (DAT_00157fd0 == '\0')) {
      FUN_00130c34();
    }
    FUN_00130d48(param_1,param_2,auStack1672);
    local_58 = 0;
    local_40 = 1;
    local_50 = 0x1f;
    FUN_00131efc(param_1,auStack1664);
    *(undefined8 *)((longlong)param_1 + 0x318) = param_3;
    return;
  }
                    // WARNING: Subroutine does not return
  abort();
}



void FUN_001321e4(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_00131efc();
  if (*(int *)(param_2 + *(longlong *)(param_2 + 0x668) * 0x10 + 8) == 6) {
    *(undefined8 *)(param_1 + 0x318) = 0;
  }
  else {
    uVar1 = _Unwind_GetGR(param_1);
    *(undefined8 *)(param_1 + 0x318) = uVar1;
  }
  return;
}



undefined8 FUN_00132230(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined auStack1664 [1616];
  code *local_30;
  
  do {
    iVar1 = FUN_00131524(param_2,auStack1664);
    lVar2 = _Unwind_GetCFA(param_2);
    uVar4 = 4;
    if (lVar2 + (*(longlong *)(param_2 + 0x340) >> 0x3f) != param_1[3]) {
      uVar4 = 0;
    }
    if (iVar1 != 0) {
      return 2;
    }
    if (local_30 != (code *)0x0) {
      uVar3 = (*local_30)(1,(ulonglong)(uVar4 | 2),*param_1,param_1,param_2);
      if ((int)uVar3 == 7) {
        return uVar3;
      }
      if ((int)uVar3 != 8) {
        return 2;
      }
    }
    if (uVar4 != 0) {
                    // WARNING: Subroutine does not return
      abort();
    }
    FUN_001321e4(param_2,auStack1664);
  } while( true );
}



ulonglong FUN_001322f0(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined auStack1664 [1616];
  code *local_30;
  
  pcVar3 = (code *)param_1[2];
  uVar4 = param_1[3];
  while( true ) {
    uVar1 = FUN_00131524(param_2,auStack1664);
    if ((uVar1 != 5) && (uVar1 != 0)) {
      return 2;
    }
    uVar5 = 10;
    if (uVar1 == 5) {
      uVar5 = 0x1a;
    }
    iVar2 = (*pcVar3)(1,(ulonglong)uVar5,*param_1,param_1,param_2,uVar4);
    if (iVar2 != 0) {
      return 2;
    }
    if (uVar1 == 5) break;
    if (local_30 != (code *)0x0) {
      uVar1 = (*local_30)(1,10,*param_1,param_1,param_2);
      if (uVar1 == 7) break;
      if (uVar1 != 8) {
        return 2;
      }
    }
    FUN_001321e4(param_2,auStack1664);
  }
  return (ulonglong)uVar1;
}



longlong __frame_state_for(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  char *pcVar6;
  undefined auStack2624 [792];
  longlong local_728;
  undefined8 local_700;
  undefined8 local_6f0;
  undefined8 local_680;
  undefined8 local_678 [196];
  undefined8 local_58;
  undefined2 local_50;
  int local_40;
  undefined2 local_18;
  undefined8 local_8;
  
  local_728 = param_1 + 1;
  memset(auStack2624,0,0x3c0);
  local_700 = 0x4000000000000000;
  iVar2 = FUN_00131524(auStack2624,&local_680);
  lVar5 = 0;
  if ((iVar2 == 0) && (local_40 != 2)) {
    puVar3 = local_678;
    pcVar6 = (char *)(param_2 + 0x334);
    puVar4 = (undefined8 *)(param_2 + 0x20);
    do {
      cVar1 = *(char *)puVar3;
      *pcVar6 = cVar1;
      if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
        *puVar4 = puVar3[-1];
      }
      else {
        *puVar4 = 0;
      }
      puVar3 = puVar3 + 2;
      pcVar6 = pcVar6 + 1;
      puVar4 = puVar4 + 1;
    } while (puVar3 != &local_58);
    *(undefined8 *)(param_2 + 0x10) = local_58;
    *(undefined2 *)(param_2 + 0x330) = local_50;
    *(undefined2 *)(param_2 + 0x332) = local_18;
    *(undefined8 *)(param_2 + 0x18) = local_6f0;
    *(undefined8 *)(param_2 + 8) = local_8;
    lVar5 = param_2;
  }
  return lVar5;
}



void FUN_001324d0(void)

{
  return;
}



undefined8 * _Unwind_RaiseException(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined auStack3584 [960];
  undefined auStack2624 [784];
  undefined8 local_730;
  undefined8 local_728;
  longlong local_700;
  undefined auStack1664 [1616];
  code *local_30;
  
  FUN_00132108(auStack3584,register0x00000008);
  memcpy(auStack2624,auStack3584,0x3c0);
  do {
    iVar1 = FUN_00131524(auStack2624,auStack1664);
    if (iVar1 == 5) {
      return param_1;
    }
    if (iVar1 != 0) {
      return param_1;
    }
    if (local_30 != (code *)0x0) {
      iVar1 = (*local_30)(1,1,*param_1,param_1,auStack2624);
      if (iVar1 == 6) {
        param_1[2] = 0;
        lVar2 = _Unwind_GetCFA(auStack2624);
        param_1[3] = lVar2 + (local_700 >> 0x3f);
        memcpy(auStack2624,auStack3584,0x3c0);
        iVar1 = FUN_00132230(param_1,auStack2624);
        if (iVar1 == 7) {
          FUN_00130ddc(auStack3584,auStack2624);
          FUN_001324d0(local_730,local_728);
        }
        return param_1;
      }
      if (iVar1 != 8) {
        return param_1;
      }
    }
    FUN_001321e4(auStack2624,auStack1664);
  } while( true );
}



longlong _Unwind_ForcedUnwind(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined auStack1920 [960];
  undefined auStack960 [784];
  undefined8 local_b0;
  undefined8 local_a8;
  
  FUN_00132108(auStack1920,register0x00000008);
  memcpy(auStack960,auStack1920,0x3c0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  iVar1 = FUN_001322f0(param_1,auStack960);
  if (iVar1 == 7) {
    FUN_00130ddc(auStack1920,auStack960);
    FUN_001324d0(local_b0,local_a8);
  }
  return param_1;
}



longlong _Unwind_Resume(longlong param_1)

{
  int iVar1;
  undefined auStack1920 [960];
  undefined auStack960 [784];
  undefined8 local_b0;
  undefined8 local_a8;
  
  FUN_00132108(auStack1920,register0x00000008);
  memcpy(auStack960,auStack1920,0x3c0);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    iVar1 = FUN_00132230(param_1,auStack960);
  }
  else {
    iVar1 = FUN_001322f0(param_1,auStack960);
  }
  if (iVar1 != 7) {
                    // WARNING: Subroutine does not return
    abort();
  }
  FUN_00130ddc(auStack1920,auStack960);
  FUN_001324d0(local_b0,local_a8);
  return param_1;
}



longlong _Unwind_Resume_or_Rethrow(longlong param_1)

{
  int iVar1;
  undefined auStack1920 [960];
  undefined auStack960 [784];
  undefined8 local_b0;
  undefined8 local_a8;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    _Unwind_RaiseException();
  }
  else {
    FUN_00132108(auStack1920,register0x00000008);
    memcpy(auStack960,auStack1920,0x3c0);
    iVar1 = FUN_001322f0(param_1,auStack960);
    if (iVar1 != 7) {
                    // WARNING: Subroutine does not return
      abort();
    }
    FUN_00130ddc(auStack1920,auStack960);
    FUN_001324d0(local_b0,local_a8);
  }
  return param_1;
}



void _Unwind_DeleteException(longlong param_1)

{
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(1,param_1);
  }
  return;
}



undefined8 _Unwind_Backtrace(code *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined auStack2624 [960];
  undefined auStack1664 [1664];
  
  FUN_00132108(auStack2624,register0x00000008);
  while (((iVar1 = FUN_00131524(auStack2624,auStack1664), iVar1 == 5 || (iVar1 == 0)) &&
         (iVar2 = (*param_1)(auStack2624,param_2), iVar2 == 0))) {
    if (iVar1 == 5) {
      return 5;
    }
    FUN_001321e4(auStack2624,auStack1664);
  }
  return 3;
}



void FUN_00132a28(byte *param_1,ulonglong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  do {
    bVar1 = *param_1;
    uVar2 = uVar4 & 0x3f;
    uVar4 = (ulonglong)((int)uVar4 + 7);
    uVar3 = uVar3 | ((ulonglong)bVar1 & 0x7f) << uVar2;
    param_1 = param_1 + 1;
  } while ((char)bVar1 < '\0');
  *param_2 = uVar3;
  return;
}



void FUN_00132a50(byte *param_1,ulonglong *param_2)

{
  uint uVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  uVar5 = 0;
  do {
    bVar2 = *param_1;
    uVar3 = uVar5 & 0x3f;
    uVar1 = (int)uVar5 + 7;
    uVar5 = (ulonglong)uVar1;
    uVar4 = uVar4 | ((ulonglong)bVar2 & 0x7f) << uVar3;
    param_1 = param_1 + 1;
  } while ((char)bVar2 < '\0');
  if ((uVar1 < 0x40) && ((bVar2 >> 6 & 1) != 0)) {
    uVar4 = -1 << (uVar5 & 0x3f) | uVar4;
  }
  *param_2 = uVar4;
  return;
}



void FUN_00132aac(undefined8 param_1,code *param_2,longlong param_3,ulonglong param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar3 = (int)param_4;
  while( true ) {
    uVar1 = iVar3 * 2 + 1;
    uVar5 = (ulonglong)uVar1;
    if (param_5 <= (int)uVar1) {
      return;
    }
    uVar2 = iVar3 * 2 + 2;
    if ((int)uVar2 < param_5) {
      uVar5 = -(ulonglong)(uVar1 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3;
      iVar3 = (*param_2)(param_1,*(undefined8 *)(param_3 + uVar5),
                         *(undefined8 *)(param_3 + uVar5 + 8));
      if (iVar3 < 0) {
        uVar1 = uVar2;
      }
      uVar5 = (ulonglong)uVar1;
    }
    uVar6 = -(param_4 >> 0x1f & 1) & 0xfffffff800000000 | (param_4 & 0xffffffff) << 3;
    uVar7 = -(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3;
    iVar3 = (*param_2)(param_1,*(undefined8 *)(param_3 + uVar6),*(undefined8 *)(param_3 + uVar7));
    if (-1 < iVar3) break;
    uVar4 = *(undefined8 *)(param_3 + uVar6);
    *(undefined8 *)(param_3 + uVar6) = *(undefined8 *)(param_3 + uVar7);
    *(undefined8 *)(param_3 + uVar7) = uVar4;
    iVar3 = (int)uVar5;
    param_4 = uVar5;
  }
  return;
}



void FUN_00132b6c(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar5 = *(ulonglong *)(param_3 + 8);
  lVar2 = param_3 + 0x10;
  uVar6 = uVar5 >> 1;
  while( true ) {
    uVar4 = (int)uVar6 - 1;
    uVar6 = (ulonglong)uVar4;
    if ((int)uVar4 < 0) break;
    FUN_00132aac(param_1,param_2,lVar2,(ulonglong)uVar4,uVar5 & 0xffffffff);
  }
  lVar7 = 0;
  uVar4 = (int)uVar5 - 1;
  lVar1 = lVar2 + (longlong)(int)uVar4 * 8;
  while (0 < (int)uVar4) {
    uVar5 = (ulonglong)uVar4;
    uVar3 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(lVar1 + lVar7);
    *(undefined8 *)(lVar1 + lVar7) = uVar3;
    uVar4 = uVar4 - 1;
    lVar7 = lVar7 + -8;
    FUN_00132aac(param_1,param_2,lVar2,0,uVar5);
  }
  return;
}



undefined8 FUN_00132c20(byte param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0xff) {
    uVar1 = 0;
  }
  else {
    switch((uint)param_1 & 7) {
    case 0:
    case 4:
      uVar1 = 8;
      break;
    default:
                    // WARNING: Subroutine does not return
      abort();
    case 2:
      uVar1 = 2;
      break;
    case 3:
      uVar1 = 4;
    }
  }
  return uVar1;
}



undefined8 FUN_00132c80(byte param_1,longlong param_2)

{
  byte bVar1;
  bool bVar2;
  
  if (param_1 != 0xff) {
    bVar1 = param_1 & 0x70;
    if (bVar1 == 0x20) {
      return *(undefined8 *)(param_2 + 8);
    }
    if (bVar1 < 0x21) {
      bVar2 = bVar1 == 0x10;
      if ((param_1 & 0x70) == 0) {
        return 0;
      }
    }
    else {
      if (bVar1 == 0x30) {
        return *(undefined8 *)(param_2 + 0x10);
      }
      bVar2 = bVar1 == 0x50;
    }
    if (!bVar2) {
                    // WARNING: Subroutine does not return
      abort();
    }
  }
  return 0;
}



undefined8 FUN_00132ce0(byte param_1,longlong param_2)

{
  byte bVar1;
  bool bVar2;
  
  if (param_1 != 0xff) {
    bVar1 = param_1 & 0x70;
    if (bVar1 == 0x20) {
      return *(undefined8 *)(param_2 + 8);
    }
    if (bVar1 < 0x21) {
      bVar2 = bVar1 == 0x10;
      if ((param_1 & 0x70) == 0) {
        return 0;
      }
    }
    else {
      if (bVar1 == 0x30) {
        return *(undefined8 *)(param_2 + 0x10);
      }
      bVar2 = bVar1 == 0x50;
    }
    if (!bVar2) {
                    // WARNING: Subroutine does not return
      abort();
    }
  }
  return 0;
}



ulonglong ** FUN_00132d40(byte param_1,ulonglong **param_2,ulonglong **param_3,ulonglong **param_4)

{
  ulonglong **ppuVar1;
  ulonglong **local_8;
  
  if (param_1 == 0x50) {
    local_8 = (ulonglong **)((longlong)param_3 + 7U & 0xfffffffffffffff8);
    ppuVar1 = local_8 + 1;
    local_8 = (ulonglong **)*local_8;
  }
  else {
    switch((uint)param_1 & 0xf) {
    case 0:
    case 4:
    case 0xc:
      ppuVar1 = param_3 + 1;
      local_8 = (ulonglong **)*param_3;
      break;
    case 1:
      ppuVar1 = (ulonglong **)FUN_00132a28(param_3,&local_8);
      break;
    case 2:
      ppuVar1 = (ulonglong **)((longlong)param_3 + 2);
      local_8 = (ulonglong **)(ulonglong)*(ushort *)param_3;
      break;
    case 3:
      ppuVar1 = (ulonglong **)((longlong)param_3 + 4);
      local_8 = (ulonglong **)(ulonglong)*(uint *)param_3;
      break;
    default:
                    // WARNING: Subroutine does not return
      abort();
    case 9:
      ppuVar1 = (ulonglong **)FUN_00132a50(param_3,&local_8);
      break;
    case 10:
      ppuVar1 = (ulonglong **)((longlong)param_3 + 2);
      local_8 = (ulonglong **)(longlong)*(short *)param_3;
      break;
    case 0xb:
      ppuVar1 = (ulonglong **)((longlong)param_3 + 4);
      local_8 = (ulonglong **)(longlong)(int)*(uint *)param_3;
    }
    if (local_8 != (ulonglong **)0x0) {
      if ((param_1 & 0x70) != 0x10) {
        param_3 = param_2;
      }
      local_8 = (ulonglong **)((longlong)local_8 + (longlong)param_3);
      if ((char)param_1 < '\0') {
        local_8 = (ulonglong **)*local_8;
      }
    }
  }
  *(ulonglong ***)param_4 = local_8;
  return ppuVar1;
}



ulonglong FUN_00132e30(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong local_10;
  ulonglong local_8;
  
  uVar2 = (ulonglong)(*(ushort *)(param_1 + 0x20) >> 3) & 0xff;
  uVar3 = FUN_00132c80(uVar2,param_1);
  FUN_00132d40(uVar2,uVar3,param_2 + 8,&local_10);
  FUN_00132d40((ulonglong)(*(ushort *)(param_1 + 0x20) >> 3),uVar3,param_3 + 8,&local_8);
  uVar1 = -(uint)(local_10 < local_8);
  if (local_8 < local_10) {
    uVar1 = 1;
  }
  return (ulonglong)uVar1;
}



ulonglong FUN_00132ec0(longlong param_1)

{
  char cVar1;
  size_t sVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  byte *pbVar6;
  char *pcVar7;
  char *__s;
  undefined auStack24 [8];
  undefined auStack16 [8];
  undefined auStack8 [8];
  
  __s = (char *)(param_1 + 9);
  sVar2 = strlen(__s);
  pcVar7 = __s + (ulonglong)sVar2 + 1;
  if (3 < *(byte *)(param_1 + 8)) {
    if (__s[(ulonglong)sVar2 + 1] != '\b') {
      return 0xff;
    }
    if (pcVar7[1] != '\0') {
      return 0xff;
    }
    pcVar7 = pcVar7 + 2;
  }
  if (*(char *)(param_1 + 9) == 'z') {
    uVar4 = FUN_00132a28(pcVar7,auStack16);
    lVar5 = FUN_00132a50(uVar4,auStack8);
    if (*(char *)(param_1 + 8) == '\x01') {
      lVar5 = lVar5 + 1;
    }
    else {
      lVar5 = FUN_00132a28(lVar5,auStack16);
    }
    __s = (char *)(param_1 + 10);
    pbVar6 = (byte *)FUN_00132a28(lVar5,auStack16);
    while (cVar1 = *__s, cVar1 != 'R') {
      if (cVar1 == 'P') {
        pbVar6 = (byte *)FUN_00132d40((ulonglong)((uint)*pbVar6 & 0x7f),0,pbVar6 + 1,auStack24);
      }
      else {
        if (cVar1 != 'L') goto LAB_00132f18;
        pbVar6 = pbVar6 + 1;
      }
      __s = __s + 1;
    }
    uVar3 = (ulonglong)*pbVar6;
  }
  else {
LAB_00132f18:
    uVar3 = 0;
  }
  return uVar3;
}



uint * FUN_00132fbc(longlong param_1,uint *param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong local_10;
  ulonglong local_8;
  
  uVar7 = (ulonglong)(*(ushort *)(param_1 + 0x20) >> 3) & 0xff;
  uVar1 = FUN_00132c80(uVar7,param_1);
  lVar2 = 0;
  do {
    if (*param_2 == 0) {
      return (uint *)0;
    }
    if (param_2[1] != 0) {
      lVar6 = lVar2;
      if (((*(byte *)(param_1 + 0x20) >> 2 & 1) != 0) &&
         (lVar6 = (longlong)param_2 + (4 - (longlong)(int)param_2[1]), lVar6 != lVar2)) {
        uVar3 = FUN_00132ec0(lVar6);
        uVar7 = uVar3 & 0xffffffff;
        uVar1 = FUN_00132c80(uVar3,param_1);
      }
      if ((uint)uVar7 == 0) {
        local_10 = *(ulonglong *)(param_2 + 2);
        local_8 = *(ulonglong *)(param_2 + 4);
        uVar3 = local_10;
      }
      else {
        uVar4 = FUN_00132d40(uVar7 & 0xff,uVar1,param_2 + 2,&local_10);
        FUN_00132d40((ulonglong)((uint)uVar7 & 0xf),0,uVar4,&local_8);
        uVar3 = FUN_00132c20(uVar7 & 0xff);
        uVar5 = 0xffffffffffffffff;
        if ((uVar3 & 0xffffffff) < 8) {
          uVar5 = (1 << ((uVar3 & 7) << 3)) - 1;
        }
        uVar3 = uVar5 & local_10;
      }
      lVar2 = lVar6;
      if ((uVar3 != 0) && (param_3 - local_10 < local_8)) {
        return param_2;
      }
    }
    param_2 = (uint *)((longlong)param_2 + (ulonglong)*param_2 + 4);
  } while( true );
}



void FUN_0013311c(longlong param_1)

{
  FUN_00132ec0((param_1 + 4) - (longlong)*(int *)(param_1 + 4));
  return;
}



undefined8 FUN_0013312c(ulonglong *param_1,ulonglong param_2,ulonglong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  undefined8 *puVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  int *piVar13;
  int *piVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  int *piVar18;
  int *piVar19;
  ulonglong uVar20;
  undefined8 local_40;
  ulonglong local_38;
  longlong local_30;
  ulonglong local_28;
  ulonglong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  piVar13 = (int *)param_1[2];
  uVar16 = *param_1;
  if ((param_2 < 0x30) || (*(int *)(param_3 + 5) == 0)) {
    if (param_2 < 0x1a) {
      return 0xffffffff;
    }
  }
  else {
    if ((param_1[4] == DAT_00146030) && (param_1[5] == DAT_00158040)) {
      puVar17 = DAT_00158048;
      puVar11 = (ulonglong *)0x0;
      puVar15 = (ulonglong *)0x0;
      while (puVar9 = puVar17, puVar9 != (ulonglong *)0x0) {
        if ((*puVar9 <= *param_3) && (*param_3 < puVar9[1])) {
          uVar16 = puVar9[2];
          piVar14 = (int *)puVar9[3];
          if (puVar9 != DAT_00158048) {
            puVar15[5] = puVar9[5];
            *(ulonglong **)(puVar9 + 5) = DAT_00158048;
            DAT_00158048 = puVar9;
          }
          goto LAB_00133338;
        }
        puVar11 = puVar9;
        if ((*puVar9 | puVar9[1]) == 0) break;
        puVar17 = (ulonglong *)puVar9[5];
        if (puVar17 != (ulonglong *)0x0) {
          puVar15 = puVar9;
        }
      }
      goto LAB_00133254;
    }
    puVar10 = &DAT_00158080;
    DAT_00146030 = param_1[4];
    DAT_00158040 = param_1[5];
    do {
      puVar10[-6] = 0;
      puVar10[-5] = 0;
      *(undefined8 **)(puVar10 + -1) = puVar10;
      puVar10 = puVar10 + 6;
    } while (puVar10 != (undefined8 *)0x158200);
    DAT_001581c8 = 0;
    DAT_00158048 = &DAT_00158050;
    *(undefined4 *)(param_3 + 5) = 0;
  }
  puVar15 = (ulonglong *)0x0;
  puVar11 = (ulonglong *)0x0;
LAB_00133254:
  uVar20 = (ulonglong)*(ushort *)(param_1 + 3);
  uVar12 = 0;
  uVar8 = 0;
  bVar5 = false;
  piVar18 = (int *)0x0;
  piVar14 = (int *)0x0;
  while (uVar20 = uVar20 - 1, uVar20 != 0xffffffffffffffff) {
    iVar4 = *piVar13;
    piVar19 = piVar14;
    if (iVar4 == 1) {
      uVar2 = uVar16 + *(longlong *)(piVar13 + 4);
      if ((uVar2 <= *param_3) && (*param_3 < uVar2 + *(longlong *)(piVar13 + 10))) {
        bVar5 = true;
        uVar12 = uVar2 + *(longlong *)(piVar13 + 10);
        uVar8 = uVar2;
      }
    }
    else {
      piVar19 = piVar13;
      if ((iVar4 != 0x6474e550) && (piVar19 = piVar14, iVar4 == 2)) {
        piVar18 = piVar13;
      }
    }
    piVar13 = piVar13 + 0xe;
    piVar14 = piVar19;
  }
  if (!bVar5) {
    return 0;
  }
  if (param_2 >= 0x30) {
    if ((puVar15 != (ulonglong *)0x0) && (puVar11 != (ulonglong *)0x0)) {
      puVar15[5] = puVar11[5];
      *(ulonglong **)(puVar11 + 5) = DAT_00158048;
      DAT_00158048 = puVar11;
    }
    puVar11 = DAT_00158048;
    DAT_00158048[2] = uVar16;
    *(int **)(puVar11 + 3) = piVar14;
    *(int **)(puVar11 + 4) = piVar18;
    *puVar11 = uVar8;
    puVar11[1] = uVar12;
  }
LAB_00133338:
  if (piVar14 == (int *)0x0) {
    return 0;
  }
  lVar1 = uVar16 + *(longlong *)(piVar14 + 4);
  if (*(char *)(uVar16 + *(longlong *)(piVar14 + 4)) != '\x01') {
    return 1;
  }
  bVar3 = *(byte *)(lVar1 + 1);
  uVar6 = FUN_00132ce0((ulonglong)bVar3,param_3);
  uVar6 = FUN_00132d40((ulonglong)bVar3,uVar6,lVar1 + 4,&local_40);
  bVar3 = *(byte *)(lVar1 + 2);
  if ((bVar3 != 0xff) && (*(char *)(lVar1 + 3) == ';')) {
    uVar7 = FUN_00132ce0((ulonglong)bVar3,param_3);
    piVar13 = (int *)FUN_00132d40((ulonglong)bVar3,uVar7,uVar6,&local_38);
    if (local_38 == 0) {
      return 1;
    }
    if (((ulonglong)piVar13 & 3) == 0) {
      uVar16 = *param_3;
      if (uVar16 < (ulonglong)(lVar1 + *piVar13)) {
        return 1;
      }
      local_38 = local_38 - 1;
      if (uVar16 < (ulonglong)(lVar1 + piVar13[local_38 * 2])) {
        uVar12 = 0;
        uVar8 = local_38;
        do {
          uVar20 = uVar8;
          if (uVar20 <= uVar12) {
                    // WARNING: Subroutine does not return
            abort();
          }
          uVar2 = uVar20 + uVar12;
          local_38 = uVar2 >> 1;
          uVar8 = local_38;
        } while ((uVar16 < (ulonglong)(lVar1 + piVar13[uVar2 & 0xfffffffffffffffe])) ||
                (uVar12 = local_38 + 1, uVar8 = uVar20,
                (ulonglong)(lVar1 + piVar13[(uVar2 & 0xfffffffffffffffe) + 2]) <= uVar16));
      }
      uVar16 = lVar1 + piVar13[local_38 * 2 + 1];
      uVar12 = FUN_0013311c(uVar16);
      uVar8 = FUN_00132c20(uVar12 & 0xff);
      FUN_00132d40((ulonglong)((uint)(uVar12 & 0xff) & 0xf),0,uVar16 + (uVar8 & 0xffffffff) + 8,
                   &local_30);
      iVar4 = piVar13[local_38 * 2];
      if (*param_3 < (ulonglong)(lVar1 + iVar4 + local_30)) {
        param_3[4] = uVar16;
      }
      param_3[3] = lVar1 + iVar4;
      return 1;
    }
  }
  local_28 = param_3[1];
  local_20 = param_3[2];
  local_10 = 4;
  local_30 = 0;
  local_18 = local_40;
  uVar16 = FUN_00132fbc(&local_30,local_40,*param_3);
  param_3[4] = uVar16;
  if (uVar16 != 0) {
    uVar16 = FUN_0013311c();
    uVar6 = FUN_00132ce0(uVar16 & 0xff,param_3);
    FUN_00132d40(uVar16 & 0xff,uVar6,param_3[4] + 8,&local_38);
    param_3[3] = local_38;
  }
  return 1;
}



ulonglong FUN_0013354c(undefined8 param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong local_10;
  ulonglong local_8;
  
  uVar2 = FUN_0013311c(param_2);
  uVar3 = FUN_00132c80(uVar2 & 0xff,param_1);
  FUN_00132d40(uVar2 & 0xff,uVar3,param_2 + 8,&local_10);
  uVar2 = FUN_0013311c(param_3);
  uVar3 = FUN_00132c80(uVar2 & 0xff,param_1);
  FUN_00132d40(uVar2 & 0xff,uVar3,param_3 + 8,&local_8);
  uVar1 = -(uint)(local_10 < local_8);
  if (local_8 < local_10) {
    uVar1 = 1;
  }
  return (ulonglong)uVar1;
}



longlong FUN_001335e8(ulonglong *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong local_8;
  
  uVar9 = 0;
  uVar8 = 0;
  lVar7 = 0;
  lVar3 = 0;
  do {
    if (*param_2 == 0) {
      return lVar7;
    }
    if (param_2[1] != 0) {
      lVar6 = (longlong)param_2 + (4 - (longlong)(int)param_2[1]);
      if (lVar6 != lVar3) {
        uVar2 = FUN_00132ec0(lVar6);
        uVar8 = (ulonglong)uVar2;
        if (uVar2 == 0xff) {
          return 0xffffffffffffffff;
        }
        uVar9 = FUN_00132c80((ulonglong)(byte)uVar2,param_1);
        uVar1 = *(ushort *)(param_1 + 4);
        lVar3 = lVar6;
        if ((uVar1 & 0x7f8) == 0x7f8) {
          *(ushort *)(param_1 + 4) = uVar1 & 0xf800 | uVar1 & 7 | (ushort)((uVar2 & 0xff) << 3);
        }
        else {
          if (((uint)(uVar1 >> 3) & 0xff) != uVar2) {
            *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 4;
          }
        }
      }
      FUN_00132d40(uVar8 & 0xff,uVar9,param_2 + 2,&local_8);
      uVar4 = FUN_00132c20(uVar8 & 0xff);
      uVar5 = 0xffffffffffffffff;
      if ((uVar4 & 0xffffffff) < 8) {
        uVar5 = (1 << ((uVar4 & 7) << 3)) - 1;
      }
      if (((uVar5 & local_8) != 0) && (lVar7 = lVar7 + 1, local_8 < *param_1)) {
        *param_1 = local_8;
      }
    }
    param_2 = (uint *)((longlong)param_2 + (ulonglong)*param_2 + 4);
  } while( true );
}



void FUN_00133748(longlong param_1,longlong *param_2,uint *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong local_8;
  
  uVar7 = (ulonglong)(*(ushort *)(param_1 + 0x20) >> 3) & 0xff;
  uVar1 = FUN_00132c80(uVar7,param_1);
  lVar2 = 0;
  while (*param_3 != 0) {
    if (param_3[1] != 0) {
      lVar6 = lVar2;
      if (((*(byte *)(param_1 + 0x20) >> 2 & 1) != 0) &&
         (lVar6 = (longlong)param_3 + (4 - (longlong)(int)param_3[1]), lVar6 != lVar2)) {
        uVar3 = FUN_00132ec0(lVar6);
        uVar7 = uVar3 & 0xffffffff;
        uVar1 = FUN_00132c80(uVar3,param_1);
      }
      if ((int)uVar7 == 0) {
        uVar3 = *(ulonglong *)(param_3 + 2);
      }
      else {
        FUN_00132d40(uVar7 & 0xff,uVar1,param_3 + 2,&local_8);
        uVar4 = FUN_00132c20(uVar7 & 0xff);
        uVar3 = 0xffffffffffffffff;
        if ((uVar4 & 0xffffffff) < 8) {
          uVar3 = (1 << ((uVar4 & 7) << 3)) - 1;
        }
        uVar3 = uVar3 & local_8;
      }
      lVar2 = lVar6;
      if ((uVar3 != 0) && (lVar6 = *param_2, lVar6 != 0)) {
        lVar5 = *(longlong *)(lVar6 + 8);
        *(longlong *)(lVar6 + 8) = lVar5 + 1;
        *(uint **)(lVar6 + (lVar5 + 2) * 8) = param_3;
      }
    }
    param_3 = (uint *)((longlong)param_3 + (ulonglong)*param_3 + 4);
  }
  return;
}



longlong FUN_0013387c(ulonglong *param_1,ulonglong param_2)

{
  byte bVar1;
  ulonglong *puVar2;
  void *pvVar3;
  uint uVar4;
  size_t __size;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  code *pcVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  ulonglong local_18;
  ulonglong *local_10;
  void *local_8;
  
  if ((*(byte *)(param_1 + 4) & 1) != 0) goto LAB_001338a8;
  uVar14 = (ulonglong)(*(uint *)(param_1 + 4) >> 0xb);
  if (*(uint *)(param_1 + 4) >> 0xb == 0) {
    if ((*(byte *)(param_1 + 4) >> 1 & 1) == 0) {
      uVar14 = FUN_001335e8(param_1,param_1[3]);
      if (uVar14 != 0xffffffffffffffff) goto LAB_00133920;
LAB_001338e0:
      param_1[4] = 0;
      *(undefined2 *)(param_1 + 4) = 0x7f8;
      param_1[3] = 0x1581d8;
    }
    else {
      plVar10 = (longlong *)param_1[3];
      while (*plVar10 != 0) {
        lVar8 = FUN_001335e8(param_1);
        if (lVar8 == -1) goto LAB_001338e0;
        uVar14 = uVar14 + lVar8;
        plVar10 = plVar10 + 1;
      }
LAB_00133920:
      uVar4 = (uint)uVar14 & 0x1fffff;
      if ((ulonglong)uVar4 == uVar14) {
        uVar4 = *(uint *)(param_1 + 4) & 0x7ff | uVar4 << 0xb;
      }
      else {
        uVar4 = *(uint *)(param_1 + 4) & 0x7ff;
      }
      *(uint *)(param_1 + 4) = uVar4;
      if (uVar14 != 0) goto LAB_00133948;
    }
  }
  else {
LAB_00133948:
    __size = ((int)uVar14 + 2) * 8;
    local_10 = (ulonglong *)malloc(__size);
    if (local_10 != (ulonglong *)0x0) {
      local_10[1] = 0;
      local_8 = malloc(__size);
      if (local_8 != (void *)0x0) {
        *(undefined8 *)((longlong)local_8 + 8) = 0;
      }
      if ((*(byte *)(param_1 + 4) >> 1 & 1) == 0) {
        FUN_00133748(param_1,&local_10,param_1[3]);
      }
      else {
        plVar10 = (longlong *)param_1[3];
        while (*plVar10 != 0) {
          plVar10 = plVar10 + 1;
          FUN_00133748(param_1,&local_10);
        }
      }
      pvVar3 = local_8;
      puVar2 = local_10;
      if ((local_10 != (ulonglong *)0x0) && (local_10[1] != uVar14)) {
LAB_00133ca0:
                    // WARNING: Subroutine does not return
        abort();
      }
      if ((*(byte *)(param_1 + 4) >> 2 & 1) == 0) {
        if ((*(ushort *)(param_1 + 4) & 0x7f8) == 0) {
          pcVar13 = (code *)&LAB_00132a90;
        }
        else {
          pcVar13 = FUN_00132e30;
        }
      }
      else {
        pcVar13 = FUN_0013354c;
      }
      if (local_8 == (void *)0x0) {
        FUN_00132b6c(param_1,pcVar13,local_10);
      }
      else {
        puVar16 = local_10 + 2;
        uVar18 = local_10[1];
        uVar11 = 0;
        puVar12 = &DAT_001581d0;
        puVar19 = puVar16;
        while (uVar11 != uVar18) {
          while ((puVar12 != &DAT_001581d0 &&
                 (iVar5 = (*pcVar13)(param_1,*puVar19,*puVar12), iVar5 < 0))) {
            lVar8 = (longlong)pvVar3 + (longlong)((longlong)puVar12 - (longlong)puVar16);
            puVar12 = *(ulonglong **)(lVar8 + 0x10);
            *(undefined8 *)(lVar8 + 0x10) = 0;
          }
          lVar8 = uVar11 * 8;
          uVar11 = uVar11 + 1;
          *(ulonglong **)((longlong)pvVar3 + lVar8 + 0x10) = puVar12;
          puVar12 = puVar19;
          puVar19 = puVar19 + 1;
        }
        lVar8 = 0;
        uVar11 = 0;
        uVar15 = 0;
        while (uVar15 != uVar18) {
          if (*(longlong *)((longlong)pvVar3 + uVar15 * 8 + 0x10) == 0) {
            lVar17 = lVar8 + 2;
            lVar8 = lVar8 + 1;
            *(ulonglong *)((longlong)pvVar3 + lVar17 * 8) = *puVar16;
          }
          else {
            lVar17 = uVar11 + 2;
            uVar11 = uVar11 + 1;
            puVar2[lVar17] = *puVar16;
          }
          uVar15 = uVar15 + 1;
          puVar16 = puVar16 + 1;
        }
        puVar2[1] = uVar11;
        *(longlong *)((longlong)pvVar3 + 8) = lVar8;
        if (*(longlong *)((longlong)local_8 + 8) + local_10[1] != uVar14) goto LAB_00133ca0;
        FUN_00132b6c(param_1,pcVar13);
        pvVar3 = local_8;
        puVar2 = local_10;
        lVar8 = *(longlong *)((longlong)local_8 + 8);
        if (lVar8 != 0) {
          uVar14 = local_10[1];
          lVar17 = lVar8 << 3;
          do {
            lVar8 = lVar8 + -1;
            uVar11 = *(ulonglong *)((longlong)pvVar3 + lVar17 + 8);
            puVar16 = puVar2 + uVar14;
            while (uVar14 != 0) {
              iVar5 = (*pcVar13)(param_1,puVar16[1],uVar11);
              if (iVar5 < 1) break;
              *(ulonglong *)((longlong)(puVar16 + -1) + lVar17 + 0x10) = puVar16[1];
              uVar14 = uVar14 - 1;
              puVar16 = puVar16 + -1;
            }
            lVar17 = lVar17 + -8;
            puVar2[uVar14 + lVar8 + 2] = uVar11;
          } while (lVar8 != 0);
          puVar2[1] = puVar2[1] + *(longlong *)((longlong)pvVar3 + 8);
        }
        free(local_8);
      }
      *local_10 = param_1[3];
      *(ulonglong **)(param_1 + 3) = local_10;
      *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 1;
    }
  }
  if (param_2 < *param_1) {
    return 0;
  }
LAB_001338a8:
  bVar1 = *(byte *)(param_1 + 4);
  if ((bVar1 & 1) == 0) {
    if ((bVar1 >> 1 & 1) == 0) {
      uVar9 = FUN_00132fbc(param_1,param_1[3],param_2);
      return uVar9;
    }
    plVar10 = (longlong *)param_1[3];
    while (*plVar10 != 0) {
      lVar8 = FUN_00132fbc(param_1,*plVar10,param_2);
      if (lVar8 != 0) {
        return lVar8;
      }
      plVar10 = plVar10 + 1;
    }
  }
  else {
    if ((bVar1 >> 2 & 1) == 0) {
      if ((*(ushort *)(param_1 + 4) & 0x7f8) == 0) {
        uVar14 = 0;
        uVar11 = *(undefined8 *)(param_1[3] + 8);
        while (uVar18 = uVar11, uVar14 < uVar18) {
          uVar11 = uVar18 + uVar14 >> 1;
          lVar8 = *(longlong *)(param_1[3] + (uVar11 + 2) * 8);
          if (*(ulonglong *)(lVar8 + 8) <= param_2) {
            if (param_2 < *(ulonglong *)(lVar8 + 8) + *(longlong *)(lVar8 + 0x10)) {
              return lVar8;
            }
            uVar14 = uVar11 + 1;
            uVar11 = uVar18;
          }
        }
      }
      else {
        uVar11 = (ulonglong)(*(ushort *)(param_1 + 4) >> 3) & 0xff;
        uVar15 = param_1[3];
        uVar14 = 0;
        uVar9 = FUN_00132c80(uVar11,param_1);
        uVar18 = *(undefined8 *)(uVar15 + 8);
        while (uVar6 = uVar18, uVar14 < uVar6) {
          uVar18 = uVar6 + uVar14 >> 1;
          lVar8 = *(longlong *)(uVar15 + (uVar18 + 2) * 8);
          uVar7 = FUN_00132d40(uVar11,uVar9,lVar8 + 8,&local_18);
          FUN_00132d40((ulonglong)((uint)uVar11 & 0xf),0,uVar7,&local_10);
          if (local_18 <= param_2) {
            if (param_2 < local_18 + (longlong)local_10) {
              return lVar8;
            }
            uVar14 = uVar18 + 1;
            uVar18 = uVar6;
          }
        }
      }
    }
    else {
      uVar18 = param_1[3];
      uVar14 = 0;
      uVar11 = *(undefined8 *)(uVar18 + 8);
      while (uVar15 = uVar11, uVar14 < uVar15) {
        uVar11 = uVar15 + uVar14 >> 1;
        lVar8 = *(longlong *)(uVar18 + (uVar11 + 2) * 8);
        uVar6 = FUN_0013311c(lVar8);
        uVar9 = FUN_00132c80(uVar6 & 0xff,param_1);
        uVar9 = FUN_00132d40(uVar6 & 0xff,uVar9,lVar8 + 8,&local_18);
        FUN_00132d40((ulonglong)((uint)uVar6 & 0xf),0,uVar9,&local_10);
        if (local_18 <= param_2) {
          if (param_2 < local_18 + (longlong)local_10) {
            return lVar8;
          }
          uVar14 = uVar11 + 1;
          uVar11 = uVar15;
        }
      }
    }
  }
  return 0;
}



int * __register_frame_info_bases
                (int *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    *param_2 = 0xffffffffffffffff;
    param_2[4] = 0;
    *(int **)(param_2 + 3) = param_1;
    param_2[1] = param_3;
    param_2[2] = param_4;
    *(undefined2 *)(param_2 + 4) = 0x7f8;
    pthread_mutex_lock((pthread_mutex_t *)&DAT_001581e0);
    *(undefined8 **)(param_2 + 5) = DAT_00158208;
    DAT_00158208 = param_2;
    uVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_001581e0);
    return (int *)(ulonglong)uVar1;
  }
  return param_1;
}



void __register_frame_info(undefined8 param_1,undefined8 param_2)

{
  __register_frame_info_bases(param_1,param_2,0,0);
  return;
}



void __register_frame(int *param_1)

{
  void *pvVar1;
  
  if (*param_1 != 0) {
    pvVar1 = malloc(0x30);
    __register_frame_info(param_1,pvVar1);
    return;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00133f5c)

ulonglong __register_frame_info_table_bases
                    (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  
  param_2[4] = 0;
  param_2[3] = param_1;
  *(undefined *)(param_2 + 4) = 2;
  param_2[1] = param_3;
  *param_2 = 0xffffffffffffffff;
  param_2[2] = param_4;
  *(ushort *)(param_2 + 4) = *(ushort *)(param_2 + 4) | 0x7f8;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_001581e0);
  *(undefined8 **)(param_2 + 5) = DAT_00158208;
  DAT_00158208 = param_2;
  uVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_001581e0);
  return (ulonglong)uVar1;
}



void __register_frame_info_table(undefined8 param_1,undefined8 param_2)

{
  __register_frame_info_table_bases(param_1,param_2,0,0);
  return;
}



void __register_frame_table(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(0x30);
  __register_frame_info_table(param_1,pvVar1);
  return;
}



longlong __deregister_frame_info_bases(int *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_001581e0);
  plVar1 = &DAT_00158208;
  lVar2 = DAT_00158208;
  while (lVar2 != 0) {
    if (*(int **)(lVar2 + 0x18) == param_1) goto LAB_00134030;
    plVar1 = (longlong *)(lVar2 + 0x28);
    lVar2 = *(longlong *)(lVar2 + 0x28);
  }
  plVar1 = &DAT_00158210;
  while (lVar2 = *plVar1, lVar2 != 0) {
    if ((*(byte *)(lVar2 + 0x20) & 1) == 0) {
      if (*(int **)(lVar2 + 0x18) == param_1) goto LAB_00134030;
    }
    else {
      if (**(int ***)(lVar2 + 0x18) == param_1) {
        *plVar1 = *(longlong *)(lVar2 + 0x28);
        free(*(void **)(lVar2 + 0x18));
        break;
      }
    }
    plVar1 = (longlong *)(lVar2 + 0x28);
  }
LAB_00134070:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_001581e0);
  if (lVar2 != 0) {
    return lVar2;
  }
                    // WARNING: Subroutine does not return
  abort();
LAB_00134030:
  *plVar1 = *(longlong *)(lVar2 + 0x28);
  goto LAB_00134070;
}



longlong __deregister_frame_info(int *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_001581e0);
  plVar1 = &DAT_00158208;
  lVar2 = DAT_00158208;
  while (lVar2 != 0) {
    if (*(int **)(lVar2 + 0x18) == param_1) goto LAB_00134030;
    plVar1 = (longlong *)(lVar2 + 0x28);
    lVar2 = *(longlong *)(lVar2 + 0x28);
  }
  plVar1 = &DAT_00158210;
  while (lVar2 = *plVar1, lVar2 != 0) {
    if ((*(byte *)(lVar2 + 0x20) & 1) == 0) {
      if (*(int **)(lVar2 + 0x18) == param_1) goto LAB_00134030;
    }
    else {
      if (**(int ***)(lVar2 + 0x18) == param_1) {
        *plVar1 = *(longlong *)(lVar2 + 0x28);
        free(*(void **)(lVar2 + 0x18));
        break;
      }
    }
    plVar1 = (longlong *)(lVar2 + 0x28);
  }
LAB_00134070:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_001581e0);
  if (lVar2 != 0) {
    return lVar2;
  }
                    // WARNING: Subroutine does not return
  abort();
LAB_00134030:
  *plVar1 = *(longlong *)(lVar2 + 0x28);
  goto LAB_00134070;
}



void __deregister_frame(int *param_1)

{
  void *__ptr;
  
  if (*param_1 != 0) {
    __ptr = (void *)__deregister_frame_info();
    free(__ptr);
    return;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0013426c)

longlong _Unwind_Find_FDE(ulonglong param_1,ulonglong *param_2)

{
  byte bVar1;
  int iVar2;
  ulonglong **ppuVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  longlong local_10;
  undefined4 local_8;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_001581e0);
  puVar7 = DAT_00158210;
  while (puVar7 != (ulonglong *)0x0) {
    if (*puVar7 <= param_1) {
      local_10 = FUN_0013387c(puVar7,param_1);
      if (local_10 != 0) goto LAB_001341a4;
      break;
    }
    puVar7 = (ulonglong *)puVar7[5];
  }
  do {
    puVar7 = DAT_00158208;
    if (DAT_00158208 == (ulonglong *)0x0) {
      local_10 = 0;
      break;
    }
    DAT_00158208 = (ulonglong *)DAT_00158208[5];
    local_10 = FUN_0013387c(puVar7,param_1);
    ppuVar3 = (ulonglong **)&DAT_00158210;
    puVar6 = DAT_00158210;
    while ((puVar6 != (ulonglong *)0x0 && (*puVar7 <= *puVar6))) {
      ppuVar3 = (ulonglong **)(puVar6 + 5);
      puVar6 = (ulonglong *)puVar6[5];
    }
    *(ulonglong **)(puVar7 + 5) = puVar6;
    *ppuVar3 = puVar7;
  } while (local_10 == 0);
LAB_001341a4:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_001581e0);
  if (local_10 == 0) {
    local_8 = 1;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    local_30 = param_1;
    iVar2 = dl_iterate_phdr(FUN_0013312c,&local_30);
    if (iVar2 < 0) {
      return 0;
    }
    if (local_10 == 0) {
      return 0;
    }
    *param_2 = local_28;
    param_2[1] = local_20;
    local_30 = local_18;
  }
  else {
    *param_2 = puVar7[1];
    bVar1 = *(byte *)(puVar7 + 4);
    param_2[1] = puVar7[2];
    uVar4 = (ulonglong)(*(ushort *)(puVar7 + 4) >> 3) & 0xff;
    if ((bVar1 >> 2 & 1) != 0) {
      uVar4 = FUN_0013311c(local_10);
    }
    uVar5 = FUN_00132c80(uVar4 & 0xff,puVar7);
    FUN_00132d40(uVar4 & 0xff,uVar5,local_10 + 8,&local_30);
  }
  param_2[2] = local_30;
  return local_10;
}



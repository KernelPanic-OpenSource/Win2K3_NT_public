/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    wow64t.h

Abstract:

    32-bit structure definitions for 64-bit NT.

Author:

    Barry Bond (barrybo)   20-Jun-1998

Revision History:

--*/

#ifndef _WOW64T_
#define _WOW64T_

#if _MSC_VER > 1000
#pragma once
#endif

//
// Page size on x86 NT
//

#define PAGE_SIZE_X86NT    0x1000
#define PAGE_SHIFT_X86NT   12L

//
// Convert the number of native pages to sub x86-pages
//

#define Wow64GetNumberOfX86Pages(NativePages)    \
        (NativePages * (PAGE_SIZE >> PAGE_SHIFT_X86NT))
        
//
// Macro to round to the nearest page size
//

#define WOW64_ROUND_TO_PAGES(Size)  \
        (((ULONG_PTR)(Size) + PAGE_SIZE - 1) & ~(PAGE_SIZE - 1))
        
//
// Get number of native pages
//

#define WOW64_BYTES_TO_PAGES(Size)  (((ULONG)(Size) >> PAGE_SHIFT) + \
                                     (((ULONG)(Size) & (PAGE_SIZE - 1)) != 0))

//
// The name of the 32-bit system directory, which is a child of %SystemRoot%
//

#define WOW64_SYSTEM_DIRECTORY      "syswow64"
#define WOW64_SYSTEM_DIRECTORY_U   L"syswow64"

// Length in bytes of the new system directory, not counting a
// null terminator
//

#define WOW64_SYSTEM_DIRECTORY_SIZE (sizeof(WOW64_SYSTEM_DIRECTORY)-sizeof(CHAR))
#define WOW64_SYSTEM_DIRECTORY_U_SIZE (sizeof(WOW64_SYSTEM_DIRECTORY_U)-sizeof(WCHAR))

//
// Wow64 Registry Configuration 
//

#define WOW64_REGISTRY_CONFIG_ROOT              L"\\REGISTRY\\MACHINE\\SOFTWARE\\Microsoft\\WOW64"
#define WOW64_REGISTRY_CONFIG_EXECUTE_OPTIONS   L"ExecuteOptions"


#define WOW64_X86_TAG               " (x86)"
#define WOW64_X86_TAG_U            L" (x86)"

//
// File system redirection values
//

#define WOW64_FILE_SYSTEM_ENABLE_REDIRECT          (UlongToPtr(0x00))   // enable file-system redirection for the currently executing thread
#define WOW64_FILE_SYSTEM_DISABLE_REDIRECT         (UlongToPtr(0x01))   // disable file-system redirection for the currently executing thread
#define WOW64_FILE_SYSTEM_DISABLE_REDIRECT_LEGACY  ((PVOID)L"[<__wow64_disable_redirect_all__]>")


#define TYPE32(x)   ULONG
#define TYPE64(x)   ULONGLONG


#if !_WIN64
__inline
void *
ULonglongToPtr(
    const ULONGLONG ull
    )
{
#pragma warning (push)
#pragma warning (disable : 4305)
    return((void *) ull );
#pragma warning (pop)
}
#endif

//
// Wow64Info structure is shared between 32-bit and 64-bit modules inside a Wow64 process.
// NOTE : This structure shouldn't contain any pointer-dependent data, as 
// it is viewed from 32-bit and 64-bit code.
//
typedef struct _WOW64INFO {

    ULONG NativeSystemPageSize;         // Page size of the native system the emulator is running on.
    
    ULONG CpuFlags;

} WOW64INFO, *PWOW64INFO;


typedef struct _PEB_LDR_DATA32 {
    ULONG Length;
    BOOLEAN Initialized;
    TYPE32(HANDLE) SsHandle;
    LIST_ENTRY32 InLoadOrderModuleList;
    LIST_ENTRY32 InMemoryOrderModuleList;
    LIST_ENTRY32 InInitializationOrderModuleList;
    TYPE32(PVOID) EntryInProgress;
} PEB_LDR_DATA32, *PPEB_LDR_DATA32;

typedef struct _GDI_TEB_BATCH32 {
    ULONG    Offset;
    TYPE32(ULONG_PTR) HDC;
    ULONG    Buffer[GDI_BATCH_BUFFER_SIZE];
} GDI_TEB_BATCH32,*PGDI_TEB_BATCH32;


typedef struct _GDI_TEB_BATCH64 {
    ULONG    Offset;
    TYPE64(ULONG_PTR) HDC;
    ULONG    Buffer[GDI_BATCH_BUFFER_SIZE];
} GDI_TEB_BATCH64,*PGDI_TEB_BATCH64;


typedef struct _Wx86ThreadState32 {
    TYPE32(PULONG)  CallBx86Eip;
    TYPE32(PVOID)   DeallocationCpu;
    BOOLEAN UseKnownWx86Dll;
    char    OleStubInvoked;
} WX86THREAD32, *PWX86THREAD32;

typedef struct _Wx86ThreadState64 {
    TYPE64(PULONG)  CallBx86Eip;
    TYPE64(PVOID)   DeallocationCpu;
    BOOLEAN UseKnownWx86Dll;
    char    OleStubInvoked;
} WX86THREAD64, *PWX86THREAD64;

typedef struct _CLIENT_ID32 {
    TYPE32(HANDLE)  UniqueProcess;
    TYPE32(HANDLE)  UniqueThread;
} CLIENT_ID32;

typedef CLIENT_ID32 *PCLIENT_ID32;

#if !defined(CLIENT_ID64_DEFINED)

typedef struct _CLIENT_ID64 {
    TYPE64(HANDLE)  UniqueProcess;
    TYPE64(HANDLE)  UniqueThread;
} CLIENT_ID64;

typedef CLIENT_ID64 *PCLIENT_ID64;

#define CLIENT_ID64_DEFINED

#endif

typedef ULONG GDI_HANDLE_BUFFER32[GDI_HANDLE_BUFFER_SIZE32];
typedef ULONG GDI_HANDLE_BUFFER64[GDI_HANDLE_BUFFER_SIZE64];

#define PEBTEB_BITS 32
#include "pebteb.h"
#undef PEBTEB_BITS

#define PEBTEB_BITS 64
#include "pebteb.h"
#undef PEBTEB_BITS

typedef struct _RTL_DRIVE_LETTER_CURDIR32 {
    USHORT Flags;
    USHORT Length;
    ULONG TimeStamp;
    STRING32 DosPath;
} RTL_DRIVE_LETTER_CURDIR32, *PRTL_DRIVE_LETTER_CURDIR32;


typedef struct _CURDIR32 {
    UNICODE_STRING32 DosPath;
    TYPE32(HANDLE) Handle;
} CURDIR32, *PCURDIR32;



typedef struct _RTL_USER_PROCESS_PARAMETERS32 {
    ULONG MaximumLength;
    ULONG Length;

    ULONG Flags;
    ULONG DebugFlags;

    TYPE32(HANDLE) ConsoleHandle;
    ULONG  ConsoleFlags;
    TYPE32(HANDLE) StandardInput;
    TYPE32(HANDLE) StandardOutput;
    TYPE32(HANDLE) StandardError;

    CURDIR32 CurrentDirectory;        // ProcessParameters
    UNICODE_STRING32 DllPath;         // ProcessParameters
    UNICODE_STRING32 ImagePathName;   // ProcessParameters
    UNICODE_STRING32 CommandLine;     // ProcessParameters
    TYPE32(PVOID) Environment;              // NtAllocateVirtualMemory

    ULONG StartingX;
    ULONG StartingY;
    ULONG CountX;
    ULONG CountY;
    ULONG CountCharsX;
    ULONG CountCharsY;
    ULONG FillAttribute;

    ULONG WindowFlags;
    ULONG ShowWindowFlags;
    UNICODE_STRING32 WindowTitle;     // ProcessParameters
    UNICODE_STRING32 DesktopInfo;     // ProcessParameters
    UNICODE_STRING32 ShellInfo;       // ProcessParameters
    UNICODE_STRING32 RuntimeData;     // ProcessParameters
    RTL_DRIVE_LETTER_CURDIR32 CurrentDirectores[ RTL_MAX_DRIVE_LETTERS ];
} RTL_USER_PROCESS_PARAMETERS32, *PRTL_USER_PROCESS_PARAMETERS32;

#if !defined(BUILD_WOW6432)

//
// Get the 32-bit TEB without doing a memory reference.
//

#define WOW64_GET_TEB32_SAFE(teb64) \
        ((PTEB32) ((ULONGLONG)teb64 + WOW64_ROUND_TO_PAGES (sizeof (TEB))))
        
#define WOW64_GET_TEB32(teb64) \
        WOW64_GET_TEB32_SAFE(teb64)

//
// Update the first qword in the 64-bit TEB.  The 32-bit rdteb instruction
// reads the TEB32 pointer value directly from this field.
//
#define WOW64_SET_TEB32(teb64, teb32) \
   (teb64)->NtTib.ExceptionList = (struct _EXCEPTION_REGISTRATION_RECORD *)(teb32);


#define WOW64_TEB32_POINTER_ADDRESS(teb64) \
        (PVOID)&((teb64)->NtTib.ExceptionList)


#endif

//
// Thunk macros

#define UStr32ToUStr(dst, src) { (dst)->Length = (src)->Length; \
                                 (dst)->MaximumLength = (src)->MaximumLength; \
                                 (dst)->Buffer = (PWSTR) ((src)->Buffer); }

#define UStrToUStr32(dst, src) { (dst)->Length = (src)->Length; \
                                 (dst)->MaximumLength = (src)->MaximumLength; \
                                 (dst)->Buffer = (ULONG) ((src)->Buffer); }

#define NtCurrentTeb32()  ((PTEB32) WOW64_GET_TEB32_SAFE (NtCurrentTeb ()))
#define NtCurrentPeb32()  ((PPEB32) UlongToPtr ((NtCurrentTeb32()->ProcessEnvironmentBlock)) )


// This is currently defined in windows\core\w32inc\w32wow64.h:
#define NtCurrentTeb64()   ((PTEB64)((PTEB32)NtCurrentTeb())->GdiBatchCount)

// This is currently defined in base\wow64\inc\wow64.h:
#define WOW64_TLS_FILESYSREDIR      8   // Used to enable/disable the filesystem
#define WOW64_TLS_WOW64INFO        10   // Used to access native system information for wow64 processes.
#define WOW64_TLS_INITIAL_TEB32    11   // A pointer to the 32-bit initial TEB
#define WOW64_TLS_MAX_NUMBER       12   // Maximum number of TLS slot entries to allocate.

// These should only be called from Win32 code known to be running on Win64.
#if !_WIN64
#define Wow64EnableFilesystemRedirector()   \
    NtCurrentTeb64()->TlsSlots[WOW64_TLS_FILESYSREDIR] = 0;
    
#define Wow64DisableFilesystemRedirector(filename)  \
    NtCurrentTeb64()->TlsSlots[WOW64_TLS_FILESYSREDIR] = (ULONGLONG)PtrToUlong(filename);


__inline 
PVOID 
Wow64SetFilesystemRedirectorEx (
    PVOID NewValue
    )
/*++

Routine Description:

    This routine allows a thread running inside Wow64 to disable file-system 
    redirection for all calls happening in the context of this thread.
    
    
    NOTE: This routine should only called from a wow64 process, and is only available 
          when running on .NET server platforms and beyond. If you component will 
          run on downlevel platforms (XP 2600 for example), you shouldn't use WOW64_FILE_SYSTEM_DISABLE_REDIRECT (see below).

Example (Enumerating files under c:\windows\system32):
    
    {
        HANDLE File;
        WIN32_FIND_DATA FindData;
#ifndef _WIN64        
        BOOL bWow64Process = FALSE;
        PVOID Wow64RedirectionOld;
#endif        

        //
        // Disable Wow64 file system redirection
        //
#ifndef _WIN64        
        IsWow64Process (GetCurrentProcess (), &bWow64Process);
        if (bWow64Process == TRUE) {
            Wow64RedirectionOld = Wow64SetFilesystemRedirectorEx (WOW64_FILE_SYSTEM_DISABLE_REDIRECT);
        }
#endif        
        File = FindFirstFileA ("c:\\windows\\system32\\*.*", &FindData);
        
        do {
        .
        .
        } while (FindNextFileA (File, &FindData) != 0);
        
        FindClose (File);
        
        //
        // Enable Wow64 file-system redirection
        //
#ifndef _WIN64        
        if (bWow64Process == TRUE) {
            Wow64SetFilesystemRedirectorEx (Wow64RedirectionOld);
        }
#endif        
    }


Arguments:

    NewValue - New Wow64 file-system redirection value. This can either be:
               a- pointer to a unicode string with a fully-qualified path name (e.g. L"c:\\windows\\notepad.exe").
               b- any of the following predefined values :
                  * WOW64_FILE_SYSTEM_ENABLE_REDIRECT : Enables file-system redirection (default)
                  * WOW64_FILE_SYSTEM_DISABLE_REDIRECT : Disables file-system redirection on all
                    file I/O operations happening within the context of the current thread.
                  * WOW64_FILE_SYSTEM_DISABLE_REDIRECT_LEGACY: Use this only if you want to run on 
                    download level platforms (for example XP 2600), as it will have no effect
                    and prevents your program from malfunctioning.
    
Return:

    Old Wow64 file-system redirection value

--*/
{
    NtCurrentTeb64()->TlsSlots[WOW64_TLS_FILESYSREDIR] = (ULONGLONG)PtrToUlong(NewValue);
    return UlongToPtr ((ULONG)NtCurrentTeb64()->TlsSlots[WOW64_TLS_FILESYSREDIR]);
}

//
// Wow64Info is accessed only from compiled code for x86 on win64.
// NOTE: Only Wow64 processes are allowed to call these macros.
//

#define Wow64GetSharedInfo()    ((PWOW64INFO)NtCurrentTeb64()->TlsSlots[WOW64_TLS_WOW64INFO])

#define Wow64GetSystemNativePageSize() \
    ((PWOW64INFO)ULonglongToPtr((NtCurrentTeb64()->TlsSlots[WOW64_TLS_WOW64INFO])))->NativeSystemPageSize
    
#else

#define Wow64GetSharedInfo()    ((PWOW64INFO)NtCurrentTeb()->TlsSlots[WOW64_TLS_WOW64INFO])
#define Wow64GetInitialTeb32()  ((PINITIAL_TEB)NtCurrentTeb()->TlsSlots[WOW64_TLS_INITIAL_TEB32])

#endif

typedef ULONGLONG SIZE_T64, *PSIZE_T64;

#if defined(BUILD_WOW6432)

typedef VOID * __ptr64 NATIVE_PVOID;
typedef ULONG64 NATIVE_ULONG_PTR;
typedef SIZE_T64 NATIVE_SIZE_T;
typedef PSIZE_T64 PNATIVE_SIZE_T;
typedef struct _PEB64 NATIVE_PEB;
typedef struct _PROCESS_BASIC_INFORMATION64 NATIVE_PROCESS_BASIC_INFORMATION;
typedef struct _MEMORY_BASIC_INFORMATION64 NATIVE_MEMORY_BASIC_INFORMATION;

#else

typedef ULONG_PTR NATIVE_ULONG_PTR;
typedef SIZE_T NATIVE_SIZE_T;
typedef PSIZE_T PNATIVE_SIZE_T;
typedef PVOID NATIVE_PVOID;
typedef struct _PEB NATIVE_PEB;
typedef struct _PROCESS_BASIC_INFORMATION NATIVE_PROCESS_BASIC_INFORMATION;
typedef struct _MEMORY_BASIC_INFORMATION NATIVE_MEMORY_BASIC_INFORMATION;

#endif

#endif  // _WOW64T_

/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) 1992  Microsoft Corporation

Module Name:

    nwevent.h

Abstract:

    Definitions for NetWare network events.

Author:

    Portable Systems Group 12/22/1992

Revision History:

Notes:

    This file is generated by the MC tool from the netevent.mc file.

--*/

#ifndef _NWEVENT_
#define _NWEVENT_


/////////////////////////////////////////////////////////////////////////
//
// NetWare Redirector Events
//
//
/////////////////////////////////////////////////////////////////////////



// Issued from kernel mode.  Don't use %1 for
// server-supplied insertion strings -- the I/O system provides the
// first string.

//
//  Values are 32 bit values layed out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-+-----------------------+-------------------------------+
//  |Sev|C|R|     Facility          |               Code            |
//  +---+-+-+-----------------------+-------------------------------+
//
//  where
//
//      Sev - is the severity code
//
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//
//      C - is the Customer code flag
//
//      R - is a reserved bit
//
//      Facility - is the facility code
//
//      Code - is the facility's status code
//
//
// Define the facility codes
//


//
// Define the severity codes
//
#define STATUS_SEVERITY_WARNING          0x2
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_INFORMATIONAL    0x1
#define STATUS_SEVERITY_ERROR            0x3


//
// MessageId: EVENT_NWRDR_RESOURCE_SHORTAGE
//
// MessageText:
//
//  The Microsoft Client Service for NetWare redirector was unable to allocate memory.
//
#define EVENT_NWRDR_RESOURCE_SHORTAGE    0xC0001F41L

//
// MessageId: EVENT_NWRDR_CANT_CREATE_DEVICE
//
// MessageText:
//
//  The Microsoft Client Service for NetWare redirector could not create its device.  The redirector could not be started.
//
#define EVENT_NWRDR_CANT_CREATE_DEVICE   0xC0001F42L

//
// MessageId: EVENT_NWRDR_INVALID_REPLY
//
// MessageText:
//
//  The Microsoft Client Service for NetWare redirector received an incorrectly formatted response from %2.
//
#define EVENT_NWRDR_INVALID_REPLY        0xC0001F43L

//
// MessageId: EVENT_NWRDR_FAILED_UNLOCK
//
// MessageText:
//
//  The Microsoft Client Service for NetWare redirector failed to unlock part of a file on server %2.
//
#define EVENT_NWRDR_FAILED_UNLOCK        0xC0001F44L

//
// MessageId: EVENT_NWRDR_NETWORK_ERROR
//
// MessageText:
//
//  The Microsoft Client Service for NetWare redirector has encountered a network error.
//
#define EVENT_NWRDR_NETWORK_ERROR        0xC0001F45L

//
// MessageId: EVENT_NWRDR_UNEXPECTED_ERROR
//
// MessageText:
//
//  An unexpected network error has occurred on the connection to %2.
//
#define EVENT_NWRDR_UNEXPECTED_ERROR     0xC0001F46L

//
// MessageId: EVENT_NWRDR_TIMEOUT
//
// MessageText:
//
//  The Microsoft Client Service for NetWare redirector has timed out one or more requests to %2.
//
#define EVENT_NWRDR_TIMEOUT              0x80001F47L

//
// MessageId: EVENT_NWRDR_NO_SERVER_ON_NETWORK
//
// MessageText:
//
//  No NetWare or compatible server exists on this network.
//
#define EVENT_NWRDR_NO_SERVER_ON_NETWORK 0xC0001F48L

/////////////////////////////////////////////////////////////////////////
//
// NetWare Workstation Events
//
//
/////////////////////////////////////////////////////////////////////////
//
// MessageId: EVENT_NWWKSTA_NO_TRANSPORTS
//
// MessageText:
//
//  The Microsoft Client Service for NetWare could not start because it did not bind to any transports.
//
#define EVENT_NWWKSTA_NO_TRANSPORTS      0xC0002329L

//
// MessageId: EVENT_NWWKSTA_CANT_BIND_TO_TRANSPORT
//
// MessageText:
//
//  The Microsoft Client Service for NetWare could not bind to the transport %1.
//
#define EVENT_NWWKSTA_CANT_BIND_TO_TRANSPORT 0xC000232AL

//
// MessageId: EVENT_NWWKSTA_INVALID_REGISTRY_VALUE
//
// MessageText:
//
//  The value named %1 in the Microsoft Client Service for NetWare registry key %2 was invalid.  The value was
//  ignored, and processing continued.
//
#define EVENT_NWWKSTA_INVALID_REGISTRY_VALUE 0x8000232BL

//
// MessageId: EVENT_NWWKSTA_CANT_CREATE_REDIRECTOR
//
// MessageText:
//
//  The Microsoft Client Service for NetWare redirector (%1) could not be started.
//
#define EVENT_NWWKSTA_CANT_CREATE_REDIRECTOR 0xC000232CL

//
// MessageId: EVENT_NWWKSTA_GATEWAY_LOGON_FAILED
//
// MessageText:
//
//  The Gateway Account could not be logged on. The error %1 occurred.
//
#define EVENT_NWWKSTA_GATEWAY_LOGON_FAILED 0xC000232DL

//
// MessageId: EVENT_NWWKSTA_CANNOT_REDIRECT_DEVICES
//
// MessageText:
//
//  Device %1 could not be reconnected to %2. Error %3 occurred.
//
#define EVENT_NWWKSTA_CANNOT_REDIRECT_DEVICES 0xC000232EL

//
// MessageId: EVENT_NWWKSTA_WRONG_NWLINK_VERSION
//
// MessageText:
//
//  The version of the NWLINK transport present does not support all the capabilities required to use the Microsoft Client Service for NetWare properly.
//
#define EVENT_NWWKSTA_WRONG_NWLINK_VERSION 0xC000232FL

/////////////////////////////////////////////////////////////////////////
//
// NetWare Credential Manager Events
//
//
/////////////////////////////////////////////////////////////////////////
//
// MessageId: NW_MESSAGE_TITLE
//
// MessageText:
//
//  Client Service for NetWare%0
//
#define NW_MESSAGE_TITLE                 0x40002711L

//
// MessageId: NW_MESSAGE_FROM_SERVER
//
// MessageText:
//
//  Message from server %1. %n
//
#define NW_MESSAGE_FROM_SERVER           0x40002712L

//
// MessageId: NW_PASSWORD_HAS_EXPIRED
//
// MessageText:
//
//  The password for %1 on %2 has expired, with %3 grace logins left.%n
//
#define NW_PASSWORD_HAS_EXPIRED          0x80002713L

//
// MessageId: NW_LOGIN_DISABLED
//
// MessageText:
//
//  Logins to the server has been disabled.%n
//
#define NW_LOGIN_DISABLED                0xC0002714L

//
// MessageId: NW_PASSWORD_HAS_EXPIRED1
//
// MessageText:
//
//  The password for %1 on %2 has expired.%n
//
#define NW_PASSWORD_HAS_EXPIRED1         0xC0002715L

//
// MessageId: NW_MESSAGE_TITLE_NTAS
//
// MessageText:
//
//  Gateway Service for NetWare%0
//
#define NW_MESSAGE_TITLE_NTAS            0x40002716L


#endif // _NWEVENT


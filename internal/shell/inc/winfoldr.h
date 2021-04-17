#ifndef _WINFOLDR_H_
#define _WINFOLDR_H_

// Folder Display Name IDs

// should reserve 0x5500 to 0x5C00 for localization strings
// assumption: maximum folder #< 256, max lNK #< 512

#define IDS_LOCALGDN_FLD_START 0x5500


#define IDS_LOCALGDN_FLD_ACCESSIBILITY      IDS_LOCALGDN_FLD_START
#define IDS_LOCALGDN_FLD_ACCESSORIES        IDS_LOCALGDN_FLD_START+1
#define IDS_LOCALGDN_FLD_ADMIN_TOOLS        IDS_LOCALGDN_FLD_START+2
#define IDS_LOCALGDN_FLD_ADMINISTRATOR      IDS_LOCALGDN_FLD_START+3
#define IDS_LOCALGDN_FLD_APP_COMP_SCRIPTS   IDS_LOCALGDN_FLD_START+4
#define IDS_LOCALGDN_FLD_APP_DATA           IDS_LOCALGDN_FLD_START+5
#define IDS_LOCALGDN_FLD_COMMON_COVER       IDS_LOCALGDN_FLD_START+6
#define IDS_LOCALGDN_FLD_COMMON_FILES       IDS_LOCALGDN_FLD_START+7
#define IDS_LOCALGDN_FLD_COMMUNICATIONS     IDS_LOCALGDN_FLD_START+8
#define IDS_LOCALGDN_FLD_DESKTOP            IDS_LOCALGDN_FLD_START+9
#define IDS_LOCALGDN_FLD_DOCUMENTS          IDS_LOCALGDN_FLD_START+10
#define IDS_LOCALGDN_FLD_DOCSETTINGS        IDS_LOCALGDN_FLD_START+11
#define IDS_LOCALGDN_FLD_ENTERTAINMENT      IDS_LOCALGDN_FLD_START+12
#define IDS_LOCALGDN_FLD_GAMES              IDS_LOCALGDN_FLD_START+13
#define IDS_LOCALGDN_FLD_LOCALSETTINGS      IDS_LOCALGDN_FLD_START+14
#define IDS_LOCALGDN_FLD_MEDIA              IDS_LOCALGDN_FLD_START+15
#define IDS_LOCALGDN_FLD_MSSCRIPTDEBUG      IDS_LOCALGDN_FLD_START+16
#define IDS_LOCALGDN_FLD_MYBRIEFCASE        IDS_LOCALGDN_FLD_START+17
#define IDS_LOCALGDN_FLD_MYFAXES            IDS_LOCALGDN_FLD_START+18
#define IDS_LOCALGDN_FLD_MYPICTURES         IDS_LOCALGDN_FLD_START+19
#define IDS_LOCALGDN_FLD_ONLINE_SERVICES    IDS_LOCALGDN_FLD_START+20
#define IDS_LOCALGDN_FLD_PROGRAM_FILES      IDS_LOCALGDN_FLD_START+21
#define IDS_LOCALGDN_FLD_PROGRAMS           IDS_LOCALGDN_FLD_START+22
#define IDS_LOCALGDN_FLD_RECEIVED_FAXES     IDS_LOCALGDN_FLD_START+23
#define IDS_LOCALGDN_FLD_SENT_FAXES         IDS_LOCALGDN_FLD_START+24
#define IDS_LOCALGDN_FLD_SHARED_DOC         IDS_LOCALGDN_FLD_START+25
#define IDS_LOCALGDN_FLD_START_MENU         IDS_LOCALGDN_FLD_START+26
#define IDS_LOCALGDN_FLD_STARTUP            IDS_LOCALGDN_FLD_START+27
#define IDS_LOCALGDN_FLD_SYSTEM_TOOLS       IDS_LOCALGDN_FLD_START+28
#define IDS_LOCALGDN_FLD_WINDOWS_MEDIA      IDS_LOCALGDN_FLD_START+29
#define IDS_LOCALGDN_FLD_MYMUSIC            IDS_LOCALGDN_FLD_START+30
#define IDS_LOCALGDN_FLD_MYVIDEOS           IDS_LOCALGDN_FLD_START+31
#define IDS_LOCALGDN_FLD_THEIRDOCUMENTS     IDS_LOCALGDN_FLD_START+32
#define IDS_LOCALGDN_FLD_THEIRPICTURES      IDS_LOCALGDN_FLD_START+33
#define IDS_LOCALGDN_FLD_THEIRMUSIC         IDS_LOCALGDN_FLD_START+34
#define IDS_LOCALGDN_FLD_THEIRVIDEOS        IDS_LOCALGDN_FLD_START+35


// LNK file Display Name IDs
// assume maximum FOLDER is less than 0x100
#define IDS_LOCALGDN_LNK_START IDS_LOCALGDN_FLD_START+0x100

#define IDS_LOCALGDN_LNK_ACCESSIBILITY_WIZARD   IDS_LOCALGDN_LNK_START
#define IDS_LOCALGDN_LNK_ADDRESS_BOOK           IDS_LOCALGDN_LNK_START+1
#define IDS_LOCALGDN_LNK_BACKUP                 IDS_LOCALGDN_LNK_START+2
#define IDS_LOCALGDN_LNK_CALCULATOR             IDS_LOCALGDN_LNK_START+3
#define IDS_LOCALGDN_LNK_CDPLAYER               IDS_LOCALGDN_LNK_START+4
#define IDS_LOCALGDN_LNK_CHARACTER_MAP          IDS_LOCALGDN_LNK_START+5
#define IDS_LOCALGDN_LNK_COMMAND_PROMPT         IDS_LOCALGDN_LNK_START+6
#define IDS_LOCALGDN_LNK_COMP_MANAG             IDS_LOCALGDN_LNK_START+7
#define IDS_LOCALGDN_LNK_CONFIG_SERVER          IDS_LOCALGDN_LNK_START+8
#define IDS_LOCALGDN_LNK_DATA_ODBC              IDS_LOCALGDN_LNK_START+9
#define IDS_LOCALGDN_LNK_DISK_CLEANUP           IDS_LOCALGDN_LNK_START+10
#define IDS_LOCALGDN_LNK_DISK_DEFRAG            IDS_LOCALGDN_LNK_START+11
#define IDS_LOCALGDN_LNK_DFS                    IDS_LOCALGDN_LNK_START+12
#define IDS_LOCALGDN_LNK_EVENT_VIEWER           IDS_LOCALGDN_LNK_START+13
#define IDS_LOCALGDN_LNK_FREECELL               IDS_LOCALGDN_LNK_START+14
#define IDS_LOCALGDN_LNK_HYPERTERMINAL          IDS_LOCALGDN_LNK_START+15
#define IDS_LOCALGDN_LNK_IMAGING                IDS_LOCALGDN_LNK_START+16
#define IDS_LOCALGDN_LNK_ICW                    IDS_LOCALGDN_LNK_START+17
#define IDS_LOCALGDN_LNK_INTERNET_EXPLORER      IDS_LOCALGDN_LNK_START+18
#define IDS_LOCALGDN_LNK_INTERNET_SERVICES      IDS_LOCALGDN_LNK_START+19
#define IDS_LOCALGDN_LNK_ISDN_CONFIG            IDS_LOCALGDN_LNK_START+20
#define IDS_LOCALGDN_LNK_LAUNCH_IE              IDS_LOCALGDN_LNK_START+21
#define IDS_LOCALGDN_LNK_LAUNCH_OE              IDS_LOCALGDN_LNK_START+22
#define IDS_LOCALGDN_LNK_LICENSING              IDS_LOCALGDN_LNK_START+23
#define IDS_LOCALGDN_LNK_LOCAL_SECURITY         IDS_LOCALGDN_LNK_START+24
#define IDS_LOCALGDN_LNK_MAGNIFIER              IDS_LOCALGDN_LNK_START+25
#define IDS_LOCALGDN_LNK_MAINTENANCE_WIZARD     IDS_LOCALGDN_LNK_START+26
#define IDS_LOCALGDN_LNK_MSSCRIPT_DEB           IDS_LOCALGDN_LNK_START+27
#define IDS_LOCALGDN_LNK_MSSCRIPT_DEB_README    IDS_LOCALGDN_LNK_START+28
#define IDS_LOCALGDN_LNK_MINESWEEPER            IDS_LOCALGDN_LNK_START+29
#define IDS_LOCALGDN_LNK_MSN_MESSENGER          IDS_LOCALGDN_LNK_START+30
#define IDS_LOCALGDN_LNK_MYBRIEFCASE            IDS_LOCALGDN_LNK_START+31
#define IDS_LOCALGDN_LNK_NARRATOR               IDS_LOCALGDN_LNK_START+32
#define IDS_LOCALGDN_LNK_NETWORK_DIALUP         IDS_LOCALGDN_LNK_START+33
#define IDS_LOCALGDN_LNK_NETWORK_MON            IDS_LOCALGDN_LNK_START+34
#define IDS_LOCALGDN_LNK_NOTEPAD                IDS_LOCALGDN_LNK_START+35
#define IDS_LOCALGDN_LNK_ONSCREEN_KEY           IDS_LOCALGDN_LNK_START+36
#define IDS_LOCALGDN_LNK_OUTLOOK_EXPRESS        IDS_LOCALGDN_LNK_START+37
#define IDS_LOCALGDN_LNK_PAINT                  IDS_LOCALGDN_LNK_START+38
#define IDS_LOCALGDN_LNK_PERFORMANCE            IDS_LOCALGDN_LNK_START+39
#define IDS_LOCALGDN_LNK_PHONE_DIALER           IDS_LOCALGDN_LNK_START+40
#define IDS_LOCALGDN_LNK_PINBALL                IDS_LOCALGDN_LNK_START+41
#define IDS_LOCALGDN_LNK_SCHEDULED_TASKS        IDS_LOCALGDN_LNK_START+42
#define IDS_LOCALGDN_LNK_SERVICES               IDS_LOCALGDN_LNK_START+43
#define IDS_LOCALGDN_LNK_SOLITAIRE              IDS_LOCALGDN_LNK_START+44
#define IDS_LOCALGDN_LNK_SOUND_REC              IDS_LOCALGDN_LNK_START+45
#define IDS_LOCALGDN_LNK_SYNCHRONIZE            IDS_LOCALGDN_LNK_START+46
#define IDS_LOCALGDN_LNK_SYSTEM_INFO            IDS_LOCALGDN_LNK_START+47
#define IDS_LOCALGDN_LNK_TELNET_SERVER_ADMIN    IDS_LOCALGDN_LNK_START+48
#define IDS_LOCALGDN_LNK_UTILITY_MANAGER        IDS_LOCALGDN_LNK_START+49
#define IDS_LOCALGDN_LNK_VOLUME_CONTROL         IDS_LOCALGDN_LNK_START+50
#define IDS_LOCALGDN_LNK_WINDOWS_EXPLORER       IDS_LOCALGDN_LNK_START+51
#define IDS_LOCALGDN_LNK_WINDOWS_UPDATE         IDS_LOCALGDN_LNK_START+52
#define IDS_LOCALGDN_LNK_WORDPAD                IDS_LOCALGDN_LNK_START+53

#define IDS_LOCALGDN_LNK_EUDCEDIT               IDS_LOCALGDN_LNK_START+54
#define IDS_LOCALGDN_LNK_CHAT                   IDS_LOCALGDN_LNK_START+55
#define IDS_LOCALGDN_LNK_MEDIAPLAYER            IDS_LOCALGDN_LNK_START+56
#define IDS_LOCALGDN_LNK_GETSTART               IDS_LOCALGDN_LNK_START+57
#define IDS_LOCALGDN_LNK_CLIPBOOK               IDS_LOCALGDN_LNK_START+58
#define IDS_LOCALGDN_LNK_WINDOWS_CATALOG        IDS_LOCALGDN_LNK_START+59 // 22075


// IDs for Infotip Strings
// assume maximum LNK is less than 0x200
#define IDS_LOCALGDN_ITIP_START IDS_LOCALGDN_LNK_START+0x200

#define IDS_LOCALGDN_ITIP_ACCESSIBILITY_WIZARD  IDS_LOCALGDN_ITIP_START
#define IDS_LOCALGDN_ITIP_ADDRESS_BOOK          IDS_LOCALGDN_ITIP_START+1
#define IDS_LOCALGDN_ITIP_BACKUP                IDS_LOCALGDN_ITIP_START+2
#define IDS_LOCALGDN_ITIP_CALCULATOR            IDS_LOCALGDN_ITIP_START+3
#define IDS_LOCALGDN_ITIP_CDPLAYER              IDS_LOCALGDN_ITIP_START+4
#define IDS_LOCALGDN_ITIP_CHARACTER_MAP         IDS_LOCALGDN_ITIP_START+5
#define IDS_LOCALGDN_ITIP_COMMAND_PROMPT        IDS_LOCALGDN_ITIP_START+6
#define IDS_LOCALGDN_ITIP_COMP_MANAG            IDS_LOCALGDN_ITIP_START+7
#define IDS_LOCALGDN_ITIP_CONFIG_SERVER         IDS_LOCALGDN_ITIP_START+8
#define IDS_LOCALGDN_ITIP_DATA_ODBC             IDS_LOCALGDN_ITIP_START+9
#define IDS_LOCALGDN_ITIP_DISK_CLEANUP          IDS_LOCALGDN_ITIP_START+10
#define IDS_LOCALGDN_ITIP_DISK_DEFRAG           IDS_LOCALGDN_ITIP_START+11
#define IDS_LOCALGDN_ITIP_DFS                   IDS_LOCALGDN_ITIP_START+12
#define IDS_LOCALGDN_ITIP_EVEN_VIEWER           IDS_LOCALGDN_ITIP_START+13
#define IDS_LOCALGDN_ITIP_FREECELL              IDS_LOCALGDN_ITIP_START+14
#define IDS_LOCALGDN_ITIP_HYPERTERMINAL         IDS_LOCALGDN_ITIP_START+15
#define IDS_LOCALGDN_ITIP_IMAGING               IDS_LOCALGDN_ITIP_START+16
#define IDS_LOCALGDN_ITIP_ICW                   IDS_LOCALGDN_ITIP_START+17
#define IDS_LOCALGDN_ITIP_INTERNET_EXPLORER     IDS_LOCALGDN_ITIP_START+18
#define IDS_LOCALGDN_ITIP_INTERNET_SERVICES     IDS_LOCALGDN_ITIP_START+19
#define IDS_LOCALGDN_ITIP_ISDN_CONFIG           IDS_LOCALGDN_ITIP_START+20
#define IDS_LOCALGDN_ITIP_LAUNCH_IE             IDS_LOCALGDN_ITIP_START+21
#define IDS_LOCALGDN_ITIP_LAUNCH_OE             IDS_LOCALGDN_ITIP_START+22
#define IDS_LOCALGDN_ITIP_LICENSING             IDS_LOCALGDN_ITIP_START+23
#define IDS_LOCALGDN_ITIP_LOCAL_SECURITY        IDS_LOCALGDN_ITIP_START+24
#define IDS_LOCALGDN_ITIP_MAGNIFIER             IDS_LOCALGDN_ITIP_START+25
#define IDS_LOCALGDN_ITIP_MAINTENANCE_WIZARD    IDS_LOCALGDN_ITIP_START+26
#define IDS_LOCALGDN_ITIP_MSSCRIPT_DEB          IDS_LOCALGDN_ITIP_START+27
#define IDS_LOCALGDN_ITIP_MSSCRIPT_DEB_README   IDS_LOCALGDN_ITIP_START+28
#define IDS_LOCALGDN_ITIP_MINESWEEPER           IDS_LOCALGDN_ITIP_START+29
#define IDS_LOCALGDN_ITIP_MSN_MESSENGER_SERVICE IDS_LOCALGDN_ITIP_START+30
#define IDS_LOCALGDN_ITIP_MYBRIEFCASE           IDS_LOCALGDN_ITIP_START+31
#define IDS_LOCALGDN_ITIP_NARRATOR              IDS_LOCALGDN_ITIP_START+32
#define IDS_LOCALGDN_ITIP_NETWORK_DIALUP        IDS_LOCALGDN_ITIP_START+33
#define IDS_LOCALGDN_ITIP_NETWORK_MON           IDS_LOCALGDN_ITIP_START+34
#define IDS_LOCALGDN_ITIP_NOTEPAD               IDS_LOCALGDN_ITIP_START+35
#define IDS_LOCALGDN_ITIP_ONSCREEN_KEY          IDS_LOCALGDN_ITIP_START+36
#define IDS_LOCALGDN_ITIP_OUTLOOK_EXPRESS       IDS_LOCALGDN_ITIP_START+37
#define IDS_LOCALGDN_ITIP_PAINT                 IDS_LOCALGDN_ITIP_START+38
#define IDS_LOCALGDN_ITIP_PERFORMANCE           IDS_LOCALGDN_ITIP_START+39
#define IDS_LOCALGDN_ITIP_PHONE_DIALER          IDS_LOCALGDN_ITIP_START+40
#define IDS_LOCALGDN_ITIP_PINBALL               IDS_LOCALGDN_ITIP_START+41
#define IDS_LOCALGDN_ITIP_SCHEDULED_TASKS       IDS_LOCALGDN_ITIP_START+42
#define IDS_LOCALGDN_ITIP_SERVICES              IDS_LOCALGDN_ITIP_START+43
#define IDS_LOCALGDN_ITIP_SOLITAIRE             IDS_LOCALGDN_ITIP_START+44
#define IDS_LOCALGDN_ITIP_SOUND_REC             IDS_LOCALGDN_ITIP_START+45
#define IDS_LOCALGDN_ITIP_SYNCHRONIZE           IDS_LOCALGDN_ITIP_START+46
#define IDS_LOCALGDN_ITIP_SYSTEM_INFO           IDS_LOCALGDN_ITIP_START+47
#define IDS_LOCALGDN_ITIP_TELNET_SERVER_ADM     IDS_LOCALGDN_ITIP_START+48
#define IDS_LOCALGDN_ITIP_UTILITY_MANAGER       IDS_LOCALGDN_ITIP_START+49
#define IDS_LOCALGDN_ITIP_VOLUME_CONTROL        IDS_LOCALGDN_ITIP_START+50
#define IDS_LOCALGDN_ITIP_WINDOWS_EXPLORER      IDS_LOCALGDN_ITIP_START+51
#define IDS_LOCALGDN_ITIP_WINDOWS_UPDATE        IDS_LOCALGDN_ITIP_START+52
#define IDS_LOCALGDN_ITIP_WORDPAD               IDS_LOCALGDN_ITIP_START+53

#define IDS_LOCALGDN_ITIP_EUDCEDIT              IDS_LOCALGDN_ITIP_START+54
#define IDS_LOCALGDN_ITIP_CHAT                  IDS_LOCALGDN_ITIP_START+55
#define IDS_LOCALGDN_ITIP_MEDIAPLAYER           IDS_LOCALGDN_ITIP_START+56
#define IDS_LOCALGDN_ITIP_GETSTART              IDS_LOCALGDN_ITIP_START+57
#define IDS_LOCALGDN_ITIP_CLIPBOOK              IDS_LOCALGDN_ITIP_START+58
#define IDS_LOCALGDN_ITIP_WINDOWS_CATALOG       IDS_LOCALGDN_ITIP_START+59 // 22587


//added on 5/2/2000 for Shell Name Space InfoTip
//assume 0x180 Shortcut before this. If not enough, add new ones after NameSpace Infotip
#define IDS_LOCALGDN_ITIPNS_START IDS_LOCALGDN_ITIP_START+0x180

#define IDS_LOCALGDN_ITIPNS_MY_NETWORK_PLACES   IDS_LOCALGDN_ITIPNS_START
#define IDS_LOCALGDN_ITIPNS_MY_COMPUTER         IDS_LOCALGDN_ITIPNS_START+1
#define IDS_LOCALGDN_ITIPNS_MY_DOCUMENTS        IDS_LOCALGDN_ITIPNS_START+2
#define IDS_LOCALGDN_ITIPNS_RECYCLE_BIN         IDS_LOCALGDN_ITIPNS_START+3
// unused
#define IDS_LOCALGDN_ITIPNS_BRIEFCASE           IDS_LOCALGDN_ITIPNS_START+5
// unused
// unused
#define IDS_LOCALGDN_ITIPNS_FONTS               IDS_LOCALGDN_ITIPNS_START+8
#define IDS_LOCALGDN_ITIPNS_ADMIN_TOOLS         IDS_LOCALGDN_ITIPNS_START+9
// unused
#define IDS_LOCALGDN_ITIPNS_SCHEDULED_TASKS     IDS_LOCALGDN_ITIPNS_START+11
#define IDS_LOCALGDN_ITIPNS_FOLDEROPTIONS       IDS_LOCALGDN_ITIPNS_START+12

// added on 5/2/2000 for LocalizedString/DisplayName of Shell Name Space
#define IDS_LOCALGDN_NS_START IDS_LOCALGDN_ITIPNS_START+0x40

// unused
// unused
#define IDS_LOCALGDN_NS_BRIEFCASE               IDS_LOCALGDN_NS_START+2
// unused
// unused
#define IDS_LOCALGDN_NS_FONTS                   IDS_LOCALGDN_NS_START+5
#define IDS_LOCALGDN_NS_ADMIN_TOOLS             IDS_LOCALGDN_NS_START+6
// unused
// unused
#define IDS_LOCALGDN_NS_FOLDEROPTIONS           IDS_LOCALGDN_NS_START+9

// Shell search extensions
#define IDS_LOCALGDN_SRCHEXT_START IDS_LOCALGDN_NS_START+0x100

#define IDS_LOCALGDN_SRCHEXT_FILES_AND_FOLDERS  IDS_LOCALGDN_SRCHEXT_START
#define IDS_LOCALGDN_SRCHEXT_COMPUTERS          IDS_LOCALGDN_SRCHEXT_START+1
#define IDS_LOCALGDN_SRCHEXT_PRINTER            IDS_LOCALGDN_SRCHEXT_START+2

// Shell search extensions help
#define IDS_LOCALGDN_SRCHHLP_START IDS_LOCALGDN_SRCHEXT_START+0x40

#define IDS_LOCALGDN_SRCHHLP_FILES_AND_FOLDERS  IDS_LOCALGDN_SRCHHLP_START
#define IDS_LOCALGDN_SRCHHLP_COMPUTERS          IDS_LOCALGDN_SRCHHLP_START+1
#define IDS_LOCALGDN_SRCHHLP_PRINTER            IDS_LOCALGDN_SRCHHLP_START+2

// next available range is IDS_LOCALGDN_SRCHHLP_START+0x40

#endif // _WINFOLDR_H_

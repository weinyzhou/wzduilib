#ifndef _UICONFIG_H_
#define _UICONFIG_H_

#ifdef _WIN32_WCE
#undef SUPPORT_RICHEDIT
#else
#define SUPPORT_RICHEDIT
#endif

#ifndef WC_EDIT
#define WC_EDIT _T("Edit")
#endif

#endif
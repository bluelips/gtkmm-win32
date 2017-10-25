/* gtk/gtkmmconfig.h.  Generated from gtkmmconfig.h.in by configure.  */
#ifndef _GTKMM_CONFIG_H
#define _GTKMM_CONFIG_H

#include <gdkmmconfig.h>

/* Defined when the --enable-api-atkmm configure argument was given */
#define GTKMM_ATKMM_ENABLED 1

/* Define to omit deprecated API from gtkmm. */
/* #undef GTKMM_DISABLE_DEPRECATED */

/* Major version number of gtkmm. */
#define GTKMM_MAJOR_VERSION 3

/* Micro version number of gtkmm. */
#define GTKMM_MICRO_VERSION 0

/* Minor version number of gtkmm. */
#define GTKMM_MINOR_VERSION 18

/* Define when building gtkmm as a static library. */
/* #undef GTKMM_STATIC_LIB */

/* Enable DLL-specific stuff only when not building a static library. */
#if (!defined(GTKMM_STATIC_LIB) && !defined(__CYGWIN__) && defined(_WIN32))
# define GTKMM_DLL 1
#endif

#ifdef GTKMM_DLL
//#pragma message("In GTKMM_DLL")
# if defined(GTKMM_BUILD) && defined(_WINDLL)
//#pragma message("In defined(GTKMM_BUILD) && defined(_WINDLL)")
#  if defined(_MSC_VER)
//#pragma message("In defined(_MSC_VER) && defined(GTKMM_BUILD) && defined(_WINDLL)")
#   define GTKMM_API __declspec(dllexport)
#  else // defined(_MSC_VER)
//#pragma message("In !defined(_MSC_VER) && defined(GTKMM_BUILD) && defined(_WINDLL)")
#   define GTKMM_API
#  endif // defined(_MSC_VER)
# elif !defined(GTKMM_BUILD)
//#pragma message("In # elif !defined(GTKMM_BUILD)")
#  define GTKMM_API __declspec(dllimport)
# else
//#pragma message("In first gtkmm empty else")
/* Build a static library. */
#  define GTKMM_API
# endif /* GTKMM_BUILD - _WINDLL */
#else
//#pragma message("In second gtkmm empty else")
# define GTKMM_API
#endif /* GTKMM_DLL */

#endif /* !_GTKMM_CONFIG_H */
    
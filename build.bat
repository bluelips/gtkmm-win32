rem # if %GTK3_ROOT%=="" set GTK3_ROOT=c:\gtk-build
set GTK3_ROOT=c:\gtk-build

set GTK3_TARGET=%GTK3_ROOT%\gtk

set GTKMM_ROOT=%CD%
set GTKMM_BUILD_ROOT=%GTKMM_ROOT%\build
set GTKMM_TARGET=%GTKMM_ROOT%\gtkmm

set TMP_PATH=%PATH%
set PATH=%GTK3_TARGET%\Win32\bin;%PATH%

set TMP_INCLUDE=%INCLUDE%"
set INCLUDE=%GTKMM_ROOT%\.extra;%INCLUDE%

set INCLUDE=%GTK3_TARGET%\Win32\include;%INCLUDE%
set INCLUDE=%GTK3_TARGET%\Win32\include\glib-2.0;%INCLUDE%
set INCLUDE=%GTK3_TARGET%\Win32\lib\glib-2.0\include;%INCLUDE%
set INCLUDE=%GTK3_TARGET%\Win32\include\gtk-3.0;%INCLUDE%
set INCLUDE=%GTK3_TARGET%\Win32\include\gdk-pixbuf-2.0;%INCLUDE%
set INCLUDE=%GTK3_TARGET%\Win32\include\atk-1.0;%INCLUDE%
set INCLUDE=%GTK3_TARGET%\Win32\include\pango-1.0;%INCLUDE%

set INCLUDE=%GTKMM_TARGET%\Win32\include\sigc++-2.0;%INCLUDE%
set INCLUDE=%GTKMM_TARGET%\Win32\lib\sigc++-2.0\include;%INCLUDE%
set INCLUDE=%GTKMM_TARGET%\Win32\include\glibmm-2.4;%INCLUDE%
set INCLUDE=%GTKMM_TARGET%\Win32\include\giomm-2.4;%INCLUDE%
set INCLUDE=%GTKMM_TARGET%\Win32\lib\glibmm-2.4\include;%INCLUDE%
set INCLUDE=%GTKMM_TARGET%\Win32\lib\giomm-2.4\include;%INCLUDE%
set INCLUDE=%GTKMM_TARGET%\Win32\include\cairomm-1.0;%INCLUDE%
set INCLUDE=%GTKMM_TARGET%\Win32\include\pangomm-1.4;%INCLUDE%
set INCLUDE=%GTKMM_TARGET%\Win32\lib\pangomm-1.4\include;%INCLUDE%
set INCLUDE=%GTKMM_TARGET%\Win32\include\atkmm-1.6;%INCLUDE%

set LIB=%GTK3_TARGET%\Win32\lib;%LIB%
set LIB=%GTKMM_TARGET%\Win32\lib;%LIB%

set UseEnv=true

set DebugConf="/p:MultiProcessorCompilation=true;Configuration=Debug;Platform=Win32"
set ReleaseConf="/p:MultiProcessorCompilation=true;Configuration=Release;Platform=Win32"

msbuild %GTKMM_BUILD_ROOT%\libsigc++-2.6.2\MSVC_Net2013\libsigc++2.sln %DebugConf%
msbuild %GTKMM_BUILD_ROOT%\libsigc++-2.6.2\MSVC_Net2013\libsigc++2.sln %ReleaseConf%

msbuild %GTKMM_BUILD_ROOT%\glibmm-2.46.3\MSVC_Net2013\glibmm.sln %DebugConf%
msbuild %GTKMM_BUILD_ROOT%\glibmm-2.46.3\MSVC_Net2013\glibmm.sln %ReleaseConf%

msbuild %GTKMM_BUILD_ROOT%\atkmm-2.24.2\MSVC_Net2013\atkmm.sln %DebugConf%
msbuild %GTKMM_BUILD_ROOT%\atkmm-2.24.2\MSVC_Net2013\atkmm.sln %ReleaseConf%

msbuild %GTKMM_BUILD_ROOT%\cairomm-1.12.0\MSVC_Net2013\cairomm.sln %DebugConf%
msbuild %GTKMM_BUILD_ROOT%\cairomm-1.12.0\MSVC_Net2013\cairomm.sln %ReleaseConf%

msbuild %GTKMM_BUILD_ROOT%\pangomm-2.38.1\MSVC_Net2013\pangomm.sln %DebugConf%
msbuild %GTKMM_BUILD_ROOT%\pangomm-2.38.1\MSVC_Net2013\pangomm.sln %ReleaseConf%

msbuild %GTKMM_BUILD_ROOT%\gtkmm-3.18.0\MSVC_Net2013\gtkmm.sln %DebugConf%
msbuild %GTKMM_BUILD_ROOT%\gtkmm-3.18.0\MSVC_Net2013\gtkmm.sln %ReleaseConf%

set GTK_BUILD_INCLUDE=%INCLUDE%
set GTK_BUILD_PATH=%PATH%
set INCLUDE=%TMP_INCLUDE%
set PATH=%TMP_PATH%
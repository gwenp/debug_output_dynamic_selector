#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.68])
AC_INIT([FULL-PACKAGE-NAME], [VERSION], [BUG-REPORT-ADDRESS])
AM_INIT_AUTOMAKE(debugManager,0.1,gwenael.pluchon@gmail.com)

AC_CONFIG_SRCDIR([src/main.cpp])

# Checks for programs.
AC_PROG_CXX
AC_PROG_CC

# Checks for libraries.
PKG_CHECK_MODULES([LIBJSONCPP], [jsoncpp])

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.
AC_HEADER_STDBOOL

# Checks for library functions.

AC_CONFIG_FILES(Makefile)

AC_OUTPUT

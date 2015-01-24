AC_PREREQ(2.59)   # ensure a recent version of autoconf
AC_INIT([gettime], [m4_esyscmd_s([git describe --always])], [raywill@xuehuar.com])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
AM_PROG_AR
AC_PROG_LIBTOOL
AC_PROG_CXX

# copy revision into configure
AC_REVISION([m4_esyscmd_s([git describe --always])])  
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([
  Makefile
  src/Makefile
  src/timer/Makefile
])
AC_OUTPUT


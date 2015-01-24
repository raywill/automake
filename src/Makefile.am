#AM_LDFLAGS=-lrt -lpthread -ltimer
AM_LDFLAGS=-lpthread -ltimer_1.0
#AM_CPPFLAGS=-I${TBLIB_ROOT}/include/tbsys
#LDADD=${TBLIB_ROOT}/lib/libtbsys.a		
AM_CPPFLAGS=-Itimer
#LDADD=libtimer_1.0.la		
LDADD=-Ltimer
bin_PROGRAMS=gettime
gettime_SOURCES=test_time.cpp

SUBDIRS=timer
DIST_SUBDIRS=timer

AM_CPPFLAGS = -I$(top_srcdir)/include -Wsystem-headers

noinst_PROGRAMS = hello
hello_SOURCES = hello.cpp tp.c ust_tests_hello.h
hello_LDADD = $(top_builddir)/liblttng-ust/liblttng-ust.la

if LTTNG_UST_BUILD_WITH_LIBDL
hello_LDADD += -ldl
endif
if LTTNG_UST_BUILD_WITH_LIBC_DL
hello_LDADD += -lc
endif

noinst_SCRIPTS = run
EXTRA_DIST = run

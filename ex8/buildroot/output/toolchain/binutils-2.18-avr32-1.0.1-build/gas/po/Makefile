# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright 2003, 2006 Free Software Foundation, Inc.
#
# This file may be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU Public License
# but which still want to provide support for the GNU gettext functionality.
# Please note that the actual code is *not* freely available.

PACKAGE = gas
VERSION = 2.18.atmel.1.0.1.avr32linux.1

SHELL = /bin/sh


srcdir = /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/po
top_srcdir = /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas
VPATH = /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/po
top_builddir = ../

prefix = /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/staging/usr
exec_prefix = ${prefix}
datadir = $(prefix)/
localedir = $(datadir)/locale
gnulocaledir = $(prefix)/share/locale
gettextsrcdir = $(prefix)/share/gettext/po
subdir = po

DESTDIR =

INSTALL = /usr/bin/install -c
INSTALL_DATA = /usr/bin/install -c -m 644
MKINSTALLDIRS = /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/../mkinstalldirs

CC = /usr/bin/gcc
GENCAT = 
GMSGFMT = PATH=../src:$$PATH /usr/bin/msgfmt
MSGFMT = /usr/bin/msgfmt
XGETTEXT = PATH=../src:$$PATH /usr/bin/xgettext
MSGMERGE = PATH=../src:$$PATH msgmerge

DEFS = -DHAVE_CONFIG_H
CFLAGS = -I/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/host/include -I/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/host/usr/include
CPPFLAGS = 

INCLUDES = -I.. -I$(top_srcdir)/intl

COMPILE = $(CC) -c $(DEFS) $(INCLUDES) $(CPPFLAGS) $(CFLAGS) $(XCFLAGS)

SOURCES = cat-id-tbl.c
POFILES =  $(srcdir)/fr.po $(srcdir)/tr.po $(srcdir)/es.po $(srcdir)/rw.po
GMOFILES =  $(srcdir)/fr.gmo $(srcdir)/tr.gmo $(srcdir)/es.gmo $(srcdir)/rw.gmo
DISTFILES = ChangeLog Makefile.in.in POTFILES.in $(PACKAGE).pot \
stamp-cat-id $(POFILES) $(GMOFILES) $(SOURCES)

POTFILES = \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/app.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/as.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/as.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/asintl.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/atof-generic.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/bignum.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/bit_fix.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/cgen.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/cond.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/e-crisaout.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/e-criself.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/e-i386aout.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/e-i386coff.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/e-i386elf.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/e-mipsecoff.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/e-mipself.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/obj-aout.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/obj-aout.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/obj-coff.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/obj-coff.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/obj-ecoff.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/obj-ecoff.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/obj-elf.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/obj-elf.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/obj-evax.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/obj-evax.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/obj-som.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/obj-som.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-alpha.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-alpha.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-arc.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-arc.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-arm.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-arm.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-avr.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-avr.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-bfin.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-bfin.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-cr16.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-cr16.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-cris.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-cris.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-crx.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-crx.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-d10v.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-d10v.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-d30v.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-d30v.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-dlx.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-dlx.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-fr30.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-fr30.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-frv.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-frv.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-h8300.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-h8300.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-hppa.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-hppa.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-i370.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-i370.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-i386.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-i386.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-i860.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-i860.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-i960.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-i960.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-ia64.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-ia64.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-ip2k.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-ip2k.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-m32c.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-m32c.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-m32r.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-m32r.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-m68hc11.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-m68hc11.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-m68k.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-m68k.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-mcore.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-mcore.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-mep.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-mep.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-mips.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-mips.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-mmix.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-mmix.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-mn10200.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-mn10200.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-mn10300.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-mn10300.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-msp430.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-msp430.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-ns32k.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-ns32k.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-openrisc.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-openrisc.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-or32.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-or32.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-pdp11.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-pdp11.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-pj.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-pj.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-ppc.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-ppc.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-s390.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-s390.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-score.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-score.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-sh64.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-sh64.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-sh.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-sh.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-sparc.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-sparc.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-spu.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-spu.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-tic30.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-tic30.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-tic54x.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-tic54x.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-v850.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-v850.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-vax.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-vax.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-xc16x.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-xc16x.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-xstormy16.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-xstormy16.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-xtensa.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-xtensa.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-z80.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-z80.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-z8k.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/config/tc-z8k.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/depend.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/dw2gencfi.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/dw2gencfi.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/dwarf2dbg.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/dwarf2dbg.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/ecoff.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/ecoff.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/ehopt.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/emul.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/emul-target.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/expr.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/expr.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/flonum-copy.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/flonum.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/flonum-konst.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/flonum-mult.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/frags.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/frags.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/hash.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/hash.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/input-file.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/input-file.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/input-scrub.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/itbl-lex.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/itbl-ops.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/itbl-ops.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/listing.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/listing.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/literal.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/macro.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/macro.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/messages.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/obj.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/output-file.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/output-file.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/read.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/read.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/sb.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/sb.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/stabs.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/struc-symbol.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/subsegs.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/subsegs.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/symbols.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/symbols.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/tc.h \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/write.c \
     /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas/write.h

CATALOGS = 
CATOBJEXT = 
INSTOBJEXT = 

.SUFFIXES:
.SUFFIXES: .c .o .po .pox .gmo .mo .msg .cat

.c.o:
	$(COMPILE) $<

.po.pox:
	$(MAKE) $(PACKAGE).pot
	$(MSGMERGE) $< $(srcdir)/$(PACKAGE).pot -o $*.pox

.po.mo:
	$(MSGFMT) -o $@ $<

.po.gmo:
	file=`echo $* | sed 's,.*/,,'`.gmo \
	  && rm -f $$file && $(GMSGFMT) -o $$file $<

.po.cat:
	sed -f ../intl/po2msg.sed < $< > $*.msg \
	  && rm -f $@ && $(GENCAT) $@ $*.msg


all: all-no

all-yes: $(CATALOGS) # $(PACKAGE).pot
all-no:

$(srcdir)/$(PACKAGE).pot: $(POTFILES)
	$(XGETTEXT) --default-domain=$(PACKAGE) --directory=$(top_srcdir) \
	  --add-comments --keyword=_ --keyword=N_ \
	  --msgid-bugs-address=bug-binutils@gnu.org \
	  --files-from=$(srcdir)/POTFILES.in
	rm -f $(srcdir)/$(PACKAGE).pot
	mv $(PACKAGE).po $(srcdir)/$(PACKAGE).pot

$(srcdir)/cat-id-tbl.c: stamp-cat-id; @:
$(srcdir)/stamp-cat-id: $(PACKAGE).pot
	rm -f cat-id-tbl.tmp
	sed -f ../intl/po2tbl.sed $(srcdir)/$(PACKAGE).pot \
		| sed -e "s/@PACKAGE NAME@/$(PACKAGE)/" > cat-id-tbl.tmp
	if cmp -s cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; then \
	  rm cat-id-tbl.tmp; \
	else \
	  echo cat-id-tbl.c changed; \
	  rm -f $(srcdir)/cat-id-tbl.c; \
	  mv cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; \
	fi
	cd $(srcdir) && rm -f stamp-cat-id && echo timestamp > stamp-cat-id


install: install-exec install-data
install-exec:
install-info:
install-html:
install-data: install-data-no
install-data-no: all
install-data-yes: all
	if test -r $(MKINSTALLDIRS); then \
	  $(MKINSTALLDIRS) $(DESTDIR)$(datadir); \
	else \
	  $(top_srcdir)/mkinstalldirs $(DESTDIR)$(datadir); \
	fi
	@catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  case "$$cat" in \
	    *.gmo) destdir=$(gnulocaledir);; \
	    *)     destdir=$(localedir);; \
	  esac; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  dir=$(DESTDIR)$$destdir/$$lang/LC_MESSAGES; \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $$dir; \
	  else \
	    $(top_srcdir)/mkinstalldirs $$dir; \
	  fi; \
	  if test -r $$cat; then \
	    $(INSTALL_DATA) $$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $$cat as $$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  else \
	    $(INSTALL_DATA) $(srcdir)/$$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $(srcdir)/$$cat as" \
		 "$$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  fi; \
	  if test -r $$cat.m; then \
	    $(INSTALL_DATA) $$cat.m $$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	    echo "installing $$cat.m as $$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	  else \
	    if test -r $(srcdir)/$$cat.m ; then \
	      $(INSTALL_DATA) $(srcdir)/$$cat.m \
		$$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	      echo "installing $(srcdir)/$$cat as" \
		   "$$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	    else \
	      true; \
	    fi; \
	  fi; \
	done
	if test "$(PACKAGE)" = "gettext"; then \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $(DESTDIR)$(gettextsrcdir); \
	  else \
	    $(top_srcdir)/mkinstalldirs $(DESTDIR)$(gettextsrcdir); \
	  fi; \
	  $(INSTALL_DATA) $(srcdir)/Makefile.in.in \
			  $(DESTDIR)$(gettextsrcdir)/Makefile.in.in; \
	else \
	  : ; \
	fi

# Define this as empty until I found a useful application.
installcheck:

uninstall:
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	done
	rm -f $(DESTDIR)$(gettextsrcdir)/po-Makefile.in.in

check: all

cat-id-tbl.o: ../intl/libgettext.h

html dvi pdf ps info tags TAGS ID:

mostlyclean:
	rm -f core core.* *.pox $(PACKAGE).po *.old.po cat-id-tbl.tmp
	rm -fr *.o

clean: mostlyclean

distclean: clean
	rm -f Makefile Makefile.in POTFILES *.mo *.msg *.cat *.cat.m

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f $(GMOFILES)

distdir = ../$(PACKAGE)-$(VERSION)/$(subdir)
dist distdir: update-po $(DISTFILES)
	dists="$(DISTFILES)"; \
	for file in $$dists; do \
	  ln $(srcdir)/$$file $(distdir) 2> /dev/null \
	    || cp -p $(srcdir)/$$file $(distdir); \
	done

update-po: Makefile
	$(MAKE) $(PACKAGE).pot
	PATH=`pwd`/../src:$$PATH; \
	cd $(srcdir); \
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  mv $$lang.po $$lang.old.po; \
	  echo "$$lang:"; \
	  if $(MSGMERGE) $$lang.old.po $(PACKAGE).pot -o $$lang.po; then \
	    rm -f $$lang.old.po; \
	  else \
	    echo "msgmerge for $$cat failed!"; \
	    rm -f $$lang.po; \
	    mv $$lang.old.po $$lang.po; \
	  fi; \
	done

POTFILES: POTFILES.in
	( if test 'x$(srcdir)' != 'x.'; then \
	    posrcprefix='$(top_srcdir)/'; \
	  else \
	    posrcprefix="../"; \
	  fi; \
	  rm -f $@-t $@ \
	    && (sed -e '/^#/d' -e '/^[ 	]*$$/d' \
		    -e "s@.*@	$$posrcprefix& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/POTFILES.in

Makefile: Make-in ../config.status POTFILES
	cd .. \
	  && CONFIG_FILES=$(subdir)/Makefile.in:$(subdir)/Make-in \
	     CONFIG_HEADERS= $(SHELL) ./config.status

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:

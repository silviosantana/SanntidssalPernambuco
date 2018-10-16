# Generated automatically from Makefile.in by configure.
#-----------------------------------------------------------------------------
#
# NcFTP vis makefile for the platform linux-x86_64-libc5, on the host sanntid.
#
#-----------------------------------------------------------------------------

CC=/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/staging/usr/bin/avr32-unknown-linux-uclibc-gcc --sysroot=/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/staging
CFLAGS=-D_REENTRANT -Os -pipe -Os -msoft-float -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -I/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/staging/usr/include -I/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/staging/include -Wno-format-y2k -static-libgcc
#CC=gcc
#CFLAGS=-O2 -W -Wall -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wshadow -Wbad-function-cast -Wwrite-strings -Wconversion
CPPFLAGS=-I/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/build/ncftp-3.2.4 -I../libncftp -I../Strn -I../sio -I/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/build/ncftp-3.2.4 -I/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/build/ncftp-3.2.4/libncftp -I/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/build/ncftp-3.2.4/sio -I/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/build/ncftp-3.2.4/Strn
prefix=/usr
exec_prefix=/usr
BINDIR=${exec_prefix}/bin
SYSCONFDIR=/etc
SOCKS_LIBS=
CURSESLIBS=
LIBS=$(CURSESLIBS) -lresolv $(SOCKS_LIBS)
STRIP=strip
LDFLAGS=-L../libncftp -L../Strn -L../sio -L/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/build/ncftp-3.2.4/libncftp -L/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/build/ncftp-3.2.4/sio -L/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/build/ncftp-3.2.4/Strn -L/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/staging/lib -L/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/staging/usr/lib

# Any -D definitions:
DEFS=-Dvis -DO_S=\"linux-x86_64-libc5\" -DNCFTPPATH=\"$(BINDIR)/ncftp\" -DSYSCONFDIR=\"$(SYSCONFDIR)\" -DHAVE_CONFIG_H -DLINUX=35007 -DLINUX_LIBC=5

DPROGS=# ../bin/ncftpbookmarks

all: $(DPROGS)
	-@echo 'Done making NcFTP full-screen utilities.'

../bin/ncftpbookmarks: bmed.c wgets.o wutil.o pref.o preffw.o trace.o util.o bookmark.o version.o bmed.h wgets.h syshdrs.h ../libncftp/libncftp.a
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) bmed.c wgets.o wutil.o pref.o preffw.o trace.o util.o bookmark.o version.o -o ../bin/ncftpbookmarks $(LDFLAGS) -lncftp -lStrn -lsio $(LIBS)
	-@$(STRIP) ../bin/ncftpbookmarks
	-@/bin/rm -rf ../bin/ncftpbookmarks.dSYM

bookmark.o: ../ncftp/bookmark.c ../ncftp/bookmark.h syshdrs.h
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) ../ncftp/bookmark.c -c

pref.o: ../ncftp/pref.c ../ncftp/pref.h syshdrs.h
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) ../ncftp/pref.c -c

preffw.o: ../ncftp/preffw.c ../ncftp/pref.h syshdrs.h
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) ../ncftp/preffw.c -c

trace.o: ../ncftp/trace.c ../ncftp/trace.h syshdrs.h
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) ../ncftp/trace.c -c

util.o: ../ncftp/util.c ../ncftp/util.h syshdrs.h
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) ../ncftp/util.c -c

version.o: ../ncftp/version.c
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) ../ncftp/version.c -c

wutil.o: wutil.c wutil.h syshdrs.h
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) wutil.c -c

wgets.o: wgets.c wgets.h syshdrs.h
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) wgets.c -c

clean:
	/bin/rm -rf $(DPROGS) *.o core *.pch SunWS_cache

PACKAGE=Makefile.in bmed.c bmed.h syshdrs.h wgets.c wgets.h wutil.c wutil.h

TMPDIR=/tmp
TARDIR=vis

tarcp:
	-@mkdir -p $(TMPDIR)/TAR/$(TARDIR)
	-@chmod ga+r $(PACKAGE)
	-@chmod 755 $(TMPDIR)/TAR/$(TARDIR)
	cp -pr $(PACKAGE) $(TMPDIR)/TAR/$(TARDIR)

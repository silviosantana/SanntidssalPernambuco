# Generated automatically from Makefile.in by configure.
#-----------------------------------------------------------------------------
#
# NcFTP sh_util makefile for the platform linux-x86_64-libc5, on the host sanntid.
#
#-----------------------------------------------------------------------------

CC=/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/staging/usr/bin/avr32-unknown-linux-uclibc-gcc --sysroot=/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/staging
CFLAGS=-D_REENTRANT -Os -pipe -Os -msoft-float -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -I/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/staging/usr/include -I/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/staging/include -Wno-format-y2k -static-libgcc
#CC=gcc
#CFLAGS=-O2 -W -Wall -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wshadow -Wbad-function-cast -Wwrite-strings -Wconversion
CPPFLAGS=-I/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/build/ncftp-3.2.4 -I../libncftp -I../Strn -I../sio -I/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/build/ncftp-3.2.4 -I/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/build/ncftp-3.2.4/libncftp -I/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/build/ncftp-3.2.4/sio -I/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/build/ncftp-3.2.4/Strn
prefix=/usr
SYSCONFDIR=/etc
SOCKS_LIBS=
LIBS=-lresolv $(SOCKS_LIBS)
STRIP=strip
LDFLAGS=-L../libncftp -L../Strn -L../sio -L/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/build/ncftp-3.2.4/libncftp -L/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/build/ncftp-3.2.4/sio -L/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/build/ncftp-3.2.4/Strn -L/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/staging/lib -L/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/staging/usr/lib

# Any -D definitions:
DEFS=-Dsh_util -DO_S=\"linux-x86_64-libc5\" -DSYSCONFDIR=\"$(SYSCONFDIR)\" -DHAVE_CONFIG_H -DLINUX=35007 -DLINUX_LIBC=5

DPROGS=../bin/ncftpget ../bin/ncftpput ../bin/ncftpbatch ../bin/ncftpls

all: $(DPROGS)
	-@echo 'Done making NcFTP shell utilities.'

../bin/ncftpget: ncftpget.c gpshare.o bookmark.o preffw.o spoolutil.o util.o gl_getline.o version.o gpshare.h syshdrs.h ../ncftp/util.h ../ncftp/pref.h ../ncftp/spool.h ../libncftp/ncftp.h ../libncftp/ncftp_errno.h ../libncftp/libncftp.a
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) gpshare.o bookmark.o preffw.o spoolutil.o util.o gl_getline.o version.o ncftpget.c -o ../bin/ncftpget $(LDFLAGS) -lncftp -lStrn -lsio $(LIBS)
	-@$(STRIP) ../bin/ncftpget

../bin/ncftpput: ncftpput.c gpshare.o bookmark.o preffw.o spoolutil.o util.o gl_getline.o version.o gpshare.h syshdrs.h ../ncftp/util.h ../ncftp/pref.h ../ncftp/spool.h ../libncftp/ncftp.h ../libncftp/ncftp_errno.h ../libncftp/libncftp.a
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) gpshare.o bookmark.o preffw.o spoolutil.o util.o gl_getline.o version.o ncftpput.c -o ../bin/ncftpput $(LDFLAGS) -lncftp -lStrn -lsio $(LIBS)
	-@$(STRIP) ../bin/ncftpput

../bin/ncftpls: ncftpls.c gpshare.o bookmark.o preffw.o util.o gl_getline.o version.o gpshare.h syshdrs.h ../ncftp/util.h ../ncftp/pref.h ../libncftp/ncftp.h ../libncftp/ncftp_errno.h ../libncftp/libncftp.a
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) gpshare.o bookmark.o preffw.o util.o gl_getline.o version.o ncftpls.c -o ../bin/ncftpls $(LDFLAGS) -lncftp -lStrn -lsio $(LIBS)
	-@$(STRIP) ../bin/ncftpls

../bin/ncftpbatch: ncftpbatch.c preffw.o util.o spoolutil.o version.o gpshare.o bookmark.o ../ncftp/util.h ../ncftp/pref.h ../ncftp/spool.h gpshare.h syshdrs.h ../libncftp/ncftp.h ../libncftp/ncftp_errno.h ../libncftp/libncftp.a
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) preffw.o util.o spoolutil.o version.o gpshare.o bookmark.o ncftpbatch.c -o ../bin/ncftpbatch $(LDFLAGS) -lncftp -lStrn -lsio $(LIBS)
	-@$(STRIP) ../bin/ncftpbatch
	-@( cd ../bin ; rm -f ncftpspooler ; ln -s ncftpbatch ncftpspooler )

util.o: ../ncftp/util.c ../ncftp/util.h syshdrs.h
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) -c ../ncftp/util.c

bookmark.o: ../ncftp/bookmark.c ../ncftp/bookmark.h syshdrs.h
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) -c ../ncftp/bookmark.c

gl_getline.o: ../ncftp/gl_getline.c ../ncftp/gl_getline.h syshdrs.h
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) -c ../ncftp/gl_getline.c

gpshare.o: gpshare.c gpshare.h syshdrs.h
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) -c gpshare.c

spool.o: ../ncftp/spool.c ../ncftp/spool.h syshdrs.h
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) -c ../ncftp/spool.c

spoolutil.o: ../ncftp/spoolutil.c ../ncftp/spool.h syshdrs.h
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) -c ../ncftp/spoolutil.c

preffw.o: ../ncftp/preffw.c ../ncftp/pref.h syshdrs.h
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) -c ../ncftp/preffw.c

version.o: ../ncftp/version.c
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) ../ncftp/version.c -c

clean:
	/bin/rm -rf $(DPROGS) ../bin/ncftpspooler *.o core *.pch SunWS_cache

PACKAGE=Makefile.in   gpshare.c     gpshare.h	  ncftpbatch.c \
	ncftpget.c    ncftpput.c    syshdrs.h	  ncftpls.c

TMPDIR=/tmp
TARDIR=sh_util

tarcp:
	-@mkdir -p $(TMPDIR)/TAR/$(TARDIR)
	-@chmod ga+r $(PACKAGE)
	-@chmod 755 $(TMPDIR)/TAR/$(TARDIR)
	cp -pr $(PACKAGE) $(TMPDIR)/TAR/$(TARDIR)

# Generated automatically from Makefile.in by configure.
#-----------------------------------------------------------------------------
#
# NcFTP makefile for the platform linux-x86_64-libc5, on the host sanntid.
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
LIBS=-lresolv $(SOCKS_LIBS)
STRIP=strip
LDFLAGS=-L../libncftp -L../Strn -L../sio -L/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/build/ncftp-3.2.4/libncftp -L/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/build/ncftp-3.2.4/sio -L/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/build/ncftp-3.2.4/Strn -L/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/staging/lib -L/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/staging/usr/lib

# Any -D definitions:
BETA=# -DBETA=20
DEFS=-Dncftp $(BETA) -DO_S=\"linux-x86_64-libc5\" -DBINDIR=\"$(BINDIR)\" -DSYSCONFDIR=\"$(SYSCONFDIR)\" -DHAVE_CONFIG_H -DLINUX=35007 -DLINUX_LIBC=5

OBJS=cmds.o cmdlist.o ls.o main.o version.o shell.o util.o readln.o progress.o bookmark.o pref.o preffw.o trace.o spool.o spoolutil.o log.o gl_getline.o

DPROGS=../bin/ncftp

all: $(DPROGS)
	-@echo 'Done making NcFTP.'

../bin/ncftp: $(OBJS) ../libncftp/libncftp.a
#
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) $(OBJS) -o ../bin/ncftp $(LDFLAGS) -lncftp -lStrn -lsio $(LIBS)
	-@$(STRIP) ../bin/ncftp

clean:
	/bin/rm -rf $(DPROGS) *.o core *.pch SunWS_cache

SHELL=/bin/sh
.SUFFIXES: .c .o

.c.o:
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) $< -c

PACKAGE=Makefile.in  bookmark.c   bookmark.h   cmdlist.c \
	cmds.c	     cmds.h \
	ls.c	     ls.h	  main.c       main.h \
	pref.c	     pref.h	  progress.c   progress.h \
	readln.c     readln.h	  shell.c      shell.h \
	spool.c      spool.h	  syshdrs.h    trace.c \
	trace.h      util.c	  util.h       version.c \
	preffw.c     log.c        log.h        gl_getline.c \
	gl_getline.h    spoolutil.c

TMPDIR=/tmp
TARDIR=ncftp

tarcp:
	-@mkdir -p $(TMPDIR)/TAR/$(TARDIR)
	-@chmod ga+r $(PACKAGE)
	-@chmod 755 $(TMPDIR)/TAR/$(TARDIR)
	cp -pr $(PACKAGE) $(TMPDIR)/TAR/$(TARDIR)

### Dependencies #############################################################

version.o: version.c
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) -DO_S=\"linux-x86_64-libc5\" $< -c

bookmark.o: bookmark.c syshdrs.h bookmark.h util.h ../libncftp/ncftp.h ../libncftp/ncftp_errno.h
cmdlist.o: cmdlist.c syshdrs.h shell.h bookmark.h cmds.h ../libncftp/ncftp.h ../libncftp/ncftp_errno.h
cmds.o: cmds.c syshdrs.h shell.h util.h ls.h bookmark.h cmds.h main.h \
 trace.h pref.h spool.h ../libncftp/ncftp.h ../libncftp/ncftp_errno.h
ls.o: ls.c syshdrs.h util.h ls.h trace.h ../libncftp/ncftp.h ../libncftp/ncftp_errno.h
main.o: main.c syshdrs.h ls.h bookmark.h cmds.h main.h shell.h \
 progress.h pref.h readln.h trace.h spool.h util.h ../libncftp/ncftp.h ../libncftp/ncftp_errno.h
pref.o: pref.c syshdrs.h pref.h util.h ../libncftp/ncftp.h ../libncftp/ncftp_errno.h
preffw.o: preffw.c syshdrs.h pref.h util.h ../libncftp/ncftp.h ../libncftp/ncftp_errno.h
progress.o: progress.c syshdrs.h util.h progress.h ../libncftp/ncftp.h ../libncftp/ncftp_errno.h
readln.o: readln.c syshdrs.h shell.h util.h bookmark.h cmds.h ls.h \
 readln.h gl_getline.h ../libncftp/ncftp.h ../libncftp/ncftp_errno.h
shell.o: shell.c syshdrs.h shell.h util.h bookmark.h cmds.h readln.h \
 trace.h main.h ../libncftp/ncftp.h ../libncftp/ncftp_errno.h
spool.o: spool.c spool.h syshdrs.h ../libncftp/ncftp.h ../libncftp/ncftp_errno.h
spoolutil.o: spoolutil.c spool.h syshdrs.h ../libncftp/ncftp.h ../libncftp/ncftp_errno.h
trace.o: trace.c syshdrs.h trace.h util.h ../libncftp/ncftp.h ../libncftp/ncftp_errno.h
util.o: util.c syshdrs.h shell.h trace.h util.h ../libncftp/ncftp.h ../libncftp/ncftp_errno.h
log.o: log.c syshdrs.h log.h util.h ../libncftp/ncftp.h ../libncftp/ncftp_errno.h
gl_getline.o: gl_getline.c syshdrs.h gl_getline.h

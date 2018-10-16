VPATH = /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gdb-6.7.1-avr32-2.1.5/gdb/testsuite/gdb.threads
srcdir = /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gdb-6.7.1-avr32-2.1.5/gdb/testsuite/gdb.threads

EXECUTABLES = pthreads

all info install-info dvi install uninstall installcheck check:
	@echo "Nothing to be done for $@..."

clean mostlyclean:
	-rm -f *~ *.o a.out xgdb *.x *.ci *.tmp core* $(EXECUTABLES)

distclean maintainer-clean realclean: clean
	-rm -f Makefile config.status config.log config.h

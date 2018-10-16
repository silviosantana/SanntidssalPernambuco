VPATH = /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gdb-6.7.1-avr32-2.1.5/gdb/testsuite/gdb.mi
srcdir = /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gdb-6.7.1-avr32-2.1.5/gdb/testsuite/gdb.mi

PROGS = basics c_variable cpp_variable var-cmd

MISCELLANEOUS = testcmds

all info install-info dvi install uninstall installcheck check:
	@echo "Nothing to be done for $@..."

clean mostlyclean:
	-rm -f *.ci *.o $(OBJS) $(PROGS) *~ core

distclean maintainer-clean realclean: clean
	-rm -f Makefile config.status config.log

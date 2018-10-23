#! /bin/sh
# Test configuration file handling.

BITNESS=32

rm -rf tests/tmp/*

# Simple dump out test.
touch tests/tmp/empty
[ "`modprobe -C /empty -c 2>&1`" = "" ]
[ "`modprobe --config /empty --showconfig 2>&1`" = "" ]

# Explicitly mentioned config files must exist.
[ "`modprobe -C FILE-WHICH-DOESNT-EXIST foo 2>&1`" = "FATAL: Failed to open config file FILE-WHICH-DOESNT-EXIST: No such file or directory" ]

MODULE_DIR=tests/tmp/lib/modules/$MODTEST_UNAME
mkdir -p $MODULE_DIR
touch $MODULE_DIR/modules.dep

[ "`modprobe foo 2>&1`" = "FATAL: Module foo not found." ]

# Create a simple config file.
mkdir -p tests/tmp/etc/modprobe.d
cat > tests/tmp/etc/modprobe.d/modprobe.conf <<EOF
# Various aliases
alias alias_to_foo foo
alias alias_to_bar bar
alias alias_to_export_dep-$BITNESS export_dep-$BITNESS
alias alias_to_noexport_dep-$BITNESS noexport_dep-$BITNESS
alias alias_to_noexport_nodep-$BITNESS noexport_nodep-$BITNESS
alias alias_to_noexport_doubledep-$BITNESS noexport_doubledep-$BITNESS
alias alias_to_noexport_nodep-$BITNESS_with_tabbed_options noexport_nodep-$BITNESS

# Various options, including options to aliases.
options alias_to_export_dep-$BITNESS I am alias to export_dep
options export_dep-$BITNESS I am export_dep
options alias_to_noexport_dep-$BITNESS I am alias to noexport_dep
options noexport_dep-$BITNESS I am noexport_dep
options alias_to_noexport_nodep-$BITNESS I am alias to noexport_nodep
options noexport_nodep-$BITNESS I am noexport_nodep
options alias_to_noexport_doubledep-$BITNESS I am alias to noexport_doubledep
options noexport_doubledep-$BITNESS I am noexport_doubledep
options alias_to_noexport_nodep-$BITNESS_with_tabbed_options index=0 id="Thinkpad" isapnp=0 \\
	port=0x530 cport=0x538 fm_port=0x388 \\
	mpu_port=-1 mpu_irq=-1 \\
	irq=9 dma1=1 dma2=3 \\
	enable=1 isapnp=0

# Install commands
install bar echo Installing bar
install foo echo Installing foo
install export_nodep-$BITNESS echo Installing export_nodep

# Remove commands
remove bar echo Removing bar
remove foo echo Removing foo
remove export_nodep-$BITNESS echo Removing export_nodep
EOF

# Now create a second file
cat > tests/tmp/etc/modprobe.d/modprobe-include.conf <<EOF
install baz echo Installing baz
remove baz echo Removing baz

alias alias_to_baz baz
EOF

# Create inputs
ln tests/data/$BITNESS/normal/export_dep-$BITNESS.ko \
   tests/data/$BITNESS/normal/noexport_dep-$BITNESS.ko \
   tests/data/$BITNESS/normal/export_nodep-$BITNESS.ko \
   tests/data/$BITNESS/normal/noexport_nodep-$BITNESS.ko \
   tests/data/$BITNESS/normal/noexport_doubledep-$BITNESS.ko \
   $MODULE_DIR

# Now create modules.dep
cat > $MODULE_DIR/modules.dep <<EOF
noexport_nodep-$BITNESS.ko:
noexport_doubledep-$BITNESS.ko: export_dep-$BITNESS.ko export_nodep-$BITNESS.ko
noexport_dep-$BITNESS.ko: export_nodep-$BITNESS.ko
export_nodep-$BITNESS.ko:
export_dep-$BITNESS.ko: export_nodep-$BITNESS.ko
EOF

SIZE_NOEXPORT_NODEP=`wc -c < tests/data/$BITNESS/normal/noexport_nodep-$BITNESS.ko`
SIZE_EXPORT_NODEP=`wc -c < tests/data/$BITNESS/normal/export_nodep-$BITNESS.ko`
SIZE_NOEXPORT_DEP=`wc -c < tests/data/$BITNESS/normal/noexport_dep-$BITNESS.ko`
SIZE_EXPORT_DEP=`wc -c < tests/data/$BITNESS/normal/export_dep-$BITNESS.ko`
SIZE_NOEXPORT_DOUBLEDEP=`wc -c < tests/data/$BITNESS/normal/noexport_doubledep-$BITNESS.ko`

# Test ignoring install & remove.

[ "`modprobe --ignore-install export_nodep-$BITNESS 2>&1`" = "INIT_MODULE: $SIZE_EXPORT_NODEP " ]
[ "`modprobe -i export_nodep-$BITNESS 2>&1`" = "INIT_MODULE: $SIZE_EXPORT_NODEP " ]
[ "`modprobe -i foo 2>&1`" = "FATAL: Module foo not found." ]
[ "`modprobe -r --ignore-remove export_nodep-$BITNESS 2>&1`" = "DELETE_MODULE: export_nodep_$BITNESS EXCL " ]
[ "`modprobe -r -i export_nodep-$BITNESS 2>&1`" = "DELETE_MODULE: export_nodep_$BITNESS EXCL " ]
[ "`modprobe -i -r foo 2>&1`" = "FATAL: Module foo not found." ]

# Test install & remove (fake modules)
[ "`modprobe foo 2>&1`" = "SYSTEM: echo Installing foo" ]
[ "`modprobe bar 2>&1`" = "SYSTEM: echo Installing bar" ]
[ "`modprobe baz 2>&1`" = "SYSTEM: echo Installing baz" ]
[ "`modprobe -r foo 2>&1`" = "SYSTEM: echo Removing foo" ]
[ "`modprobe -r bar 2>&1`" = "SYSTEM: echo Removing bar" ]
[ "`modprobe -r baz 2>&1`" = "SYSTEM: echo Removing baz" ]

# Test install & remove of a what is also a real module.
[ "`modprobe export_nodep-$BITNESS 2>&1`" = "SYSTEM: echo Installing export_nodep" ]
[ "`modprobe -r export_nodep-$BITNESS 2>&1`" = "SYSTEM: echo Removing export_nodep" ]

# Test install & remove of what is also a real module via dependency.
[ "`modprobe noexport_dep-$BITNESS 2>&1`" = "SYSTEM: echo Installing export_nodep
INIT_MODULE: $SIZE_NOEXPORT_DEP I am noexport_dep" ]
[ "`modprobe -r noexport_dep-$BITNESS 2>&1`" = "DELETE_MODULE: noexport_dep_$BITNESS EXCL 
SYSTEM: echo Removing export_nodep" ]

# Test ignoring install & remove: only effects commandline.
[ "`modprobe -i noexport_dep-$BITNESS 2>&1`" = "SYSTEM: echo Installing export_nodep
INIT_MODULE: $SIZE_NOEXPORT_DEP I am noexport_dep" ]
[ "`modprobe -r -i noexport_dep-$BITNESS 2>&1`" = "DELETE_MODULE: noexport_dep_$BITNESS EXCL 
SYSTEM: echo Removing export_nodep" ]

# Test options
[ "`modprobe noexport_nodep-$BITNESS 2>&1`" = "INIT_MODULE: $SIZE_NOEXPORT_NODEP I am noexport_nodep" ]
[ "`modprobe noexport_nodep-$BITNESS OPTIONS 2>&1`" = "INIT_MODULE: $SIZE_NOEXPORT_NODEP I am noexport_nodep OPTIONS" ]

[ "`modprobe noexport_dep-$BITNESS 2>&1`" = "SYSTEM: echo Installing export_nodep
INIT_MODULE: $SIZE_NOEXPORT_DEP I am noexport_dep" ]
[ "`modprobe noexport_dep-$BITNESS OPTIONS 2>&1`" = "SYSTEM: echo Installing export_nodep
INIT_MODULE: $SIZE_NOEXPORT_DEP I am noexport_dep OPTIONS" ]

[ "`modprobe export_dep-$BITNESS 2>&1`" = "SYSTEM: echo Installing export_nodep
INIT_MODULE: $SIZE_EXPORT_DEP I am export_dep" ]
[ "`modprobe export_dep-$BITNESS OPTIONS 2>&1`" = "SYSTEM: echo Installing export_nodep
INIT_MODULE: $SIZE_EXPORT_DEP I am export_dep OPTIONS" ]

[ "`modprobe noexport_doubledep-$BITNESS 2>&1`" = "SYSTEM: echo Installing export_nodep
INIT_MODULE: $SIZE_EXPORT_DEP I am export_dep
INIT_MODULE: $SIZE_NOEXPORT_DOUBLEDEP I am noexport_doubledep" ]
[ "`modprobe noexport_doubledep-$BITNESS OPTIONS 2>&1`" = "SYSTEM: echo Installing export_nodep
INIT_MODULE: $SIZE_EXPORT_DEP I am export_dep
INIT_MODULE: $SIZE_NOEXPORT_DOUBLEDEP I am noexport_doubledep OPTIONS" ]

# Test aliases doing insertion.
[ "`modprobe alias_to_noexport_nodep-$BITNESS 2>&1`" = "INIT_MODULE: $SIZE_NOEXPORT_NODEP I am noexport_nodep I am alias to noexport_nodep" ]
[ "`modprobe alias_to_noexport_nodep-$BITNESS OPTIONS 2>&1`" = "INIT_MODULE: $SIZE_NOEXPORT_NODEP I am noexport_nodep I am alias to noexport_nodep OPTIONS" ]

[ "`modprobe alias_to_noexport_dep-$BITNESS 2>&1`" = "SYSTEM: echo Installing export_nodep
INIT_MODULE: $SIZE_NOEXPORT_DEP I am noexport_dep I am alias to noexport_dep" ]
[ "`modprobe alias_to_noexport_dep-$BITNESS OPTIONS 2>&1`" = "SYSTEM: echo Installing export_nodep
INIT_MODULE: $SIZE_NOEXPORT_DEP I am noexport_dep I am alias to noexport_dep OPTIONS" ]

[ "`modprobe alias_to_export_dep-$BITNESS 2>&1`" = "SYSTEM: echo Installing export_nodep
INIT_MODULE: $SIZE_EXPORT_DEP I am export_dep I am alias to export_dep" ]
[ "`modprobe alias_to_export_dep-$BITNESS OPTIONS 2>&1`" = "SYSTEM: echo Installing export_nodep
INIT_MODULE: $SIZE_EXPORT_DEP I am export_dep I am alias to export_dep OPTIONS" ]

[ "`modprobe alias_to_noexport_doubledep-$BITNESS 2>&1`" = "SYSTEM: echo Installing export_nodep
INIT_MODULE: $SIZE_EXPORT_DEP I am export_dep
INIT_MODULE: $SIZE_NOEXPORT_DOUBLEDEP I am noexport_doubledep I am alias to noexport_doubledep" ]
[ "`modprobe alias_to_noexport_doubledep-$BITNESS 2>&1`" = "SYSTEM: echo Installing export_nodep
INIT_MODULE: $SIZE_EXPORT_DEP I am export_dep
INIT_MODULE: $SIZE_NOEXPORT_DOUBLEDEP I am noexport_doubledep I am alias to noexport_doubledep" ]
[ "`modprobe alias_to_noexport_doubledep-$BITNESS OPTIONS 2>&1`" = "SYSTEM: echo Installing export_nodep
INIT_MODULE: $SIZE_EXPORT_DEP I am export_dep
INIT_MODULE: $SIZE_NOEXPORT_DOUBLEDEP I am noexport_doubledep I am alias to noexport_doubledep OPTIONS" ]

[ "`modprobe alias_to_foo 2>&1`" = "SYSTEM: echo Installing foo" ]
[ "`modprobe alias_to_bar 2>&1`" = "SYSTEM: echo Installing bar" ]
[ "`modprobe alias_to_baz 2>&1`" = "SYSTEM: echo Installing baz" ]

# Test tab-to-spaces conversion, and \ wrapping.
[ "`modprobe alias_to_noexport_nodep-$BITNESS_with_tabbed_options 2>&1`" = "INIT_MODULE: $SIZE_NOEXPORT_NODEP I am noexport_nodep index=0 id=\"Thinkpad\" isapnp=0  port=0x530 cport=0x538 fm_port=0x388  mpu_port=-1 mpu_irq=-1  irq=9 dma1=1 dma2=3  enable=1 isapnp=0" ]

# Test aliases doing removal.
[ "`modprobe -r alias_to_noexport_nodep-$BITNESS 2>&1`" = "DELETE_MODULE: noexport_nodep_$BITNESS EXCL " ]
[ "`modprobe -r alias_to_noexport_dep-$BITNESS 2>&1`" = "DELETE_MODULE: noexport_dep_$BITNESS EXCL 
SYSTEM: echo Removing export_nodep" ]
[ "`modprobe -r alias_to_export_dep-$BITNESS 2>&1`" = "DELETE_MODULE: export_dep_$BITNESS EXCL 
SYSTEM: echo Removing export_nodep" ]
[ "`modprobe -r alias_to_noexport_doubledep-$BITNESS 2>&1`" = "DELETE_MODULE: noexport_doubledep_$BITNESS EXCL 
DELETE_MODULE: export_dep_$BITNESS EXCL 
SYSTEM: echo Removing export_nodep" ]

[ "`modprobe -r alias_to_foo 2>&1`" = "SYSTEM: echo Removing foo" ]
[ "`modprobe -r alias_to_bar 2>&1`" = "SYSTEM: echo Removing bar" ]
[ "`modprobe -r alias_to_baz 2>&1`" = "SYSTEM: echo Removing baz" ]
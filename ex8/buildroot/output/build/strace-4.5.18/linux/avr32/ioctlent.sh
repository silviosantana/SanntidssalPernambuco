#!/bin/sh
# Copyright (c) 1993, 1994, 1995 Rick Sladkey <jrs@world.std.com>
# All rights reserved.
#
# Copyright (c) 1995, 1996 Michael Elizabeth Chastain <mec@duracef.shout.net>
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. The name of the author may not be used to endorse or promote products
#    derived from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
# IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
# OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
# IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
# NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
# THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

# Files to find.
file_find='asm/*.h linux/*.h scsi/*.h mtd/*.h'

# Files to stop.
file_stop='asm/byteorder.h linux/config.h linux/elf-em.h linux/pci_ids.h linux/xd.h linux/reiserfs_fs.h linux/usbdevice_fs.h'

# Defs to find.
# Work on the kernel source to convert all to df_iowr.
# Don't know how to find low-numbered ioctls in linux/mc146818rtc.h.
df_name='^[	 ]*#[	 ]*define[	 ]+[A-Z_][A-Z0-9_]*[	 ]+'
df_iowr='_IO|_IOR|_IOW|_IOWR'
df_NNNN='0[Xx](03|06|22|46|4B|4C|53|54|56|89|90)[0-9A-Fa-f][0-9A-Fa-f]'
df_4359='0[Xx]4359[0-9A-Fa-f][0-9A-Fa-f]'	# linux/cyclades.h
df_470N='470[0-9]'				# linux/fs.h        (only in 1.2.13)
df_smix='MIXER_READ|MIXER_WRITE'		# linux/soundcard.h
df_12NN='12[3-4][0-9]'				# linux/umsdos_fs.h (only in 1.2.13)
df_tail='([()	 ]|$)'
def_find="$df_name($df_iowr|$df_NNNN|$df_4359|$df_470N|$df_smix|$df_12NN)$df_tail"

# Defs to stop.
ds_tail='_MAGIC|_PATCH'
ds_fdmp='FD(DEF|GET|SET)MEDIAPRM'		# linux/fd.h aliases (only in 1.2.13)
ds_mtio='MTIOC(GET|SET)CONFIG'			# linux/mtio.h needs config (only in 1.2.13)
ds_soundcard='_SIO(RW?|W)?'
def_stop="$ds_tail|$ds_fdmp|$ds_mtio|$ds_soundcard"

# Validate arg count.
if [ $# -ne 1 ]
then
	echo "usage: $0 include-directory" >&2
	exit 1
fi

# Grep through the files.
(
	# Construct list: find files minus stop files.
	cd $1 || exit
	file_list=`(ls $file_find $file_stop $file_stop 2>/dev/null) | sort | uniq -u`

	# Grep matching #define lines.
	# Transform to C structure form.
	# Filter out stop list.
	egrep "$def_find" $file_list |
		sed -n -e 's/^\(.*\):#[	 ]*define[	 ]*\([A-Z_][A-Z0-9_]*\).*$/	{ "\1",	"\2",	\2	},/p' |
		egrep -v "$def_stop"
) > ioctlent.tmp

# Generate the output file.
echo '/* This file is automatically generated by ioctlent.sh */'
echo
echo '#include <sys/types.h>'
echo '#include <sys/socket.h>'
echo '#include <stdint.h>'
echo
echo '/* Needed for <linux/baycom.h> */'
echo '#define BAYCOM_DEBUG'
echo
echo '/* Needed for <linux/dm-ioctl.h> */'
echo '#define CONFIG_COMPAT'
echo
echo '/* Needed for <linux/ext3_fs.h> */'
echo '#define CONFIG_JBD_DEBUG'
echo
echo '/* Needed for <linux/lp.h> */'
echo '#define LP_STATS'
echo
echo '/* Needed for <linux/videodev2.h> */'
echo '#define __OLD_VIDIOC_'
echo
echo '/* Needed for <linux/zftape.h> */'
echo '#define ZFT_OBSOLETE'
echo
echo '/* Needed for <linux/auto_fs.h> */'
echo '#include <linux/limits.h>'
echo
echo '/* Needed for <linux/cyclades.h> */'
echo '#include <linux/termios.h>'
#echo '#include <linux/tqueue.h>'
echo
echo '/* Needed for <linux/if_ppp.h> */'
echo '#include <linux/ppp_defs.h>'
echo '#include <linux/filter.h>'
echo
echo '/* Needed for <linux/msdos_fs.h> */'
echo '#include <linux/dirent.h>'
echo
awk '{ print "#include <" substr($2, 2, length($2) - 3) ">" }' ioctlent.tmp | sort -u
echo
echo 'struct ioctlent ioctlent [] ='
echo '{'
cat ioctlent.tmp
echo '};'

# Clean up.
rm -f ioctlent.tmp
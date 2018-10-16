#ifndef GCC_TM_H
#define GCC_TM_H
#ifndef UCLIBC_DEFAULT
# define UCLIBC_DEFAULT 1
#endif
#ifdef IN_GCC
# include "options.h"
# include "config/dbxelf.h"
# include "config/elfos.h"
# include "config/linux.h"
# include "config/avr32/linux-elf.h"
# include "config/avr32/avr32.h"
# include "defaults.h"
#endif
#if defined IN_GCC && !defined GENERATOR_FILE && !defined USED_FOR_TARGET
# include "insn-constants.h"
# include "insn-flags.h"
#endif
#endif /* GCC_TM_H */

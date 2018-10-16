/* Generated automatically by the program `genconditions' from the target
   machine description file.  */

#include "bconfig.h"
#include "system.h"

/* It is necessary, but not entirely safe, to include the headers below
   in a generator program.  As a defensive measure, don't do so when the
   table isn't going to have anything in it.  */
#if GCC_VERSION >= 3001

/* Do not allow checking to confuse the issue.  */
#undef ENABLE_CHECKING
#undef ENABLE_TREE_CHECKING
#undef ENABLE_RTL_CHECKING
#undef ENABLE_RTL_FLAG_CHECKING
#undef ENABLE_GC_CHECKING
#undef ENABLE_GC_ALWAYS_COLLECT

#include "coretypes.h"
#include "tm.h"
#include "insn-constants.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"

/* Fake - insn-config.h doesn't exist yet.  */
#define MAX_RECOG_OPERANDS 10
#define MAX_DUP_OPERANDS 10
#define MAX_INSNS_PER_SPLIT 5

#include "regs.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "toplev.h"
#include "reload.h"
#include "tm-constrs.h"

#define HAVE_eh_return 1
#include "except.h"

/* Dummy external declarations.  */
extern rtx insn;
extern rtx ins1;
extern rtx operands[];

#endif /* gcc >= 3.0.1 */

/* Structure definition duplicated from gensupport.h rather than
   drag in that file and its dependencies.  */
struct c_test
{
  const char *expr;
  int value;
};

/* This table lists each condition found in the machine description.
   Each condition is mapped to its truth value (0 or 1), or -1 if that
   cannot be calculated at compile time.
   If we don't have __builtin_constant_p, or it's not acceptable in array
   initializers, fall back to assuming that all conditions potentially
   vary at run time.  It works in 3.0.1 and later; 3.0 only when not
   optimizing.  */

#if GCC_VERSION >= 3001
static const struct c_test insn_conditions[] = {

#line 4733 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "USE_RETURN_INSN (TRUE) && (REGNO(operands[0]) == RETVAL_REGNUM)",
    __builtin_constant_p 
#line 4733 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE) && (REGNO(operands[0]) == RETVAL_REGNUM))
    ? (int) 
#line 4733 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE) && (REGNO(operands[0]) == RETVAL_REGNUM))
    : -1 },
#line 4642 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "dead_or_set_p(insn, operands[2])",
    __builtin_constant_p 
#line 4642 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(dead_or_set_p(insn, operands[2]))
    ? (int) 
#line 4642 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(dead_or_set_p(insn, operands[2]))
    : -1 },
#line 3616 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "(reload_completed &&\n\
    REG_P(operands[0]) && REG_P(operands[1])\n\
    && (REGNO(operands[0]) != REGNO(operands[1])))",
    __builtin_constant_p 
#line 3616 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((reload_completed &&
    REG_P(operands[0]) && REG_P(operands[1])
    && (REGNO(operands[0]) != REGNO(operands[1]))))
    ? (int) 
#line 3616 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((reload_completed &&
    REG_P(operands[0]) && REG_P(operands[1])
    && (REGNO(operands[0]) != REGNO(operands[1]))))
    : -1 },
#line 1220 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "(peep2_reg_dead_p(2, operands[0]) &&\n\
    (INTVAL(operands[2]) < 4 && INTVAL(operands[2]) > 0))",
    __builtin_constant_p 
#line 1220 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((peep2_reg_dead_p(2, operands[0]) &&
    (INTVAL(operands[2]) < 4 && INTVAL(operands[2]) > 0)))
    ? (int) 
#line 1220 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((peep2_reg_dead_p(2, operands[0]) &&
    (INTVAL(operands[2]) < 4 && INTVAL(operands[2]) > 0)))
    : -1 },
#line 3862 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "TARGET_DSP",
    __builtin_constant_p 
#line 3862 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_DSP)
    ? (int) 
#line 3862 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_DSP)
    : -1 },
#line 893 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "TARGET_SOFT_FLOAT\n\
   && reload_completed\n\
   && (REG_P (operands[0]) \n\
        && (REG_P (operands[1])\n\
            || GET_CODE (operands[1]) == CONST_DOUBLE))",
    __builtin_constant_p 
#line 893 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_SOFT_FLOAT
   && reload_completed
   && (REG_P (operands[0]) 
        && (REG_P (operands[1])
            || GET_CODE (operands[1]) == CONST_DOUBLE)))
    ? (int) 
#line 893 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_SOFT_FLOAT
   && reload_completed
   && (REG_P (operands[0]) 
        && (REG_P (operands[1])
            || GET_CODE (operands[1]) == CONST_DOUBLE)))
    : -1 },
#line 1279 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "(INTVAL(operands[3]) == 0) || (INTVAL(operands[3]) == 2) ||\n\
   (INTVAL(operands[3]) == 4) || (INTVAL(operands[3]) == 8)",
    __builtin_constant_p 
#line 1279 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((INTVAL(operands[3]) == 0) || (INTVAL(operands[3]) == 2) ||
   (INTVAL(operands[3]) == 4) || (INTVAL(operands[3]) == 8))
    ? (int) 
#line 1279 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((INTVAL(operands[3]) == 0) || (INTVAL(operands[3]) == 2) ||
   (INTVAL(operands[3]) == 4) || (INTVAL(operands[3]) == 8))
    : -1 },
#line 493 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "register_operand (operands[0], V2HImode)\n\
   || register_operand (operands[1], V2HImode)",
    __builtin_constant_p 
#line 493 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(register_operand (operands[0], V2HImode)
   || register_operand (operands[1], V2HImode))
    ? (int) 
#line 493 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(register_operand (operands[0], V2HImode)
   || register_operand (operands[1], V2HImode))
    : -1 },
#line 4670 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "(peep2_reg_dead_p(2, operands[0]) || (REGNO(operands[2]) == REGNO(operands[0])))",
    __builtin_constant_p 
#line 4670 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((peep2_reg_dead_p(2, operands[0]) || (REGNO(operands[2]) == REGNO(operands[0]))))
    ? (int) 
#line 4670 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((peep2_reg_dead_p(2, operands[0]) || (REGNO(operands[2]) == REGNO(operands[0]))))
    : -1 },
#line 4283 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "(REGNO(operands[0]) == REGNO(operands[2])) || peep2_reg_dead_p(2, operands[0])",
    __builtin_constant_p 
#line 4283 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((REGNO(operands[0]) == REGNO(operands[2])) || peep2_reg_dead_p(2, operands[0]))
    ? (int) 
#line 4283 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((REGNO(operands[0]) == REGNO(operands[2])) || peep2_reg_dead_p(2, operands[0]))
    : -1 },
#line 671 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "TARGET_ARCH_AP",
    __builtin_constant_p 
#line 671 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_ARCH_AP)
    ? (int) 
#line 671 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_ARCH_AP)
    : -1 },
#line 873 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "TARGET_SOFT_FLOAT\n\
   && (register_operand (operands[0], DFmode)\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 873 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_SOFT_FLOAT
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 873 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_SOFT_FLOAT
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    : -1 },
#line 638 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "reload_completed &&\n\
   (REG_P (operands[0]) &&\n\
   (REG_P (operands[1]) \n\
    || GET_CODE (operands[1]) == CONST_INT\n\
    || GET_CODE (operands[1]) == CONST_DOUBLE))",
    __builtin_constant_p 
#line 638 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(reload_completed &&
   (REG_P (operands[0]) &&
   (REG_P (operands[1]) 
    || GET_CODE (operands[1]) == CONST_INT
    || GET_CODE (operands[1]) == CONST_DOUBLE)))
    ? (int) 
#line 638 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(reload_completed &&
   (REG_P (operands[0]) &&
   (REG_P (operands[1]) 
    || GET_CODE (operands[1]) == CONST_INT
    || GET_CODE (operands[1]) == CONST_DOUBLE)))
    : -1 },
#line 4700 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "(USE_RETURN_INSN (FALSE) && (REGNO(operands[0]) == RETVAL_REGNUM) &&\n\
   ((INTVAL(operands[1]) == -1) || (INTVAL(operands[1]) == 0) || (INTVAL(operands[1]) == 1)))",
    __builtin_constant_p 
#line 4700 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((USE_RETURN_INSN (FALSE) && (REGNO(operands[0]) == RETVAL_REGNUM) &&
   ((INTVAL(operands[1]) == -1) || (INTVAL(operands[1]) == 0) || (INTVAL(operands[1]) == 1))))
    ? (int) 
#line 4700 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((USE_RETURN_INSN (FALSE) && (REGNO(operands[0]) == RETVAL_REGNUM) &&
   ((INTVAL(operands[1]) == -1) || (INTVAL(operands[1]) == 0) || (INTVAL(operands[1]) == 1))))
    : -1 },
#line 493 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "register_operand (operands[0], SImode)\n\
   || register_operand (operands[1], SImode)",
    __builtin_constant_p 
#line 493 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(register_operand (operands[0], SImode)
   || register_operand (operands[1], SImode))
    ? (int) 
#line 493 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(register_operand (operands[0], SImode)
   || register_operand (operands[1], SImode))
    : -1 },
#line 4656 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "peep2_reg_dead_p(2, operands[0])",
    __builtin_constant_p 
#line 4656 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(peep2_reg_dead_p(2, operands[0]))
    ? (int) 
#line 4656 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(peep2_reg_dead_p(2, operands[0]))
    : -1 },
#line 1493 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "!TARGET_NO_MUL_INSNS",
    __builtin_constant_p 
#line 1493 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(!TARGET_NO_MUL_INSNS)
    ? (int) 
#line 1493 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(!TARGET_NO_MUL_INSNS)
    : -1 },
#line 3259 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "USE_RETURN_INSN (TRUE)",
    __builtin_constant_p 
#line 3259 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE))
    ? (int) 
#line 3259 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE))
    : -1 },
#line 1032 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "INTVAL(operands[2]) < 32",
    __builtin_constant_p 
#line 1032 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(INTVAL(operands[2]) < 32)
    ? (int) 
#line 1032 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(INTVAL(operands[2]) < 32)
    : -1 },
#line 1067 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "((peep2_reg_dead_p(2, operands[0]) &&\n\
    (INTVAL(operands[3]) <= 16)))",
    __builtin_constant_p 
#line 1067 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(((peep2_reg_dead_p(2, operands[0]) &&
    (INTVAL(operands[3]) <= 16))))
    ? (int) 
#line 1067 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(((peep2_reg_dead_p(2, operands[0]) &&
    (INTVAL(operands[3]) <= 16))))
    : -1 },
#line 312 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
  { "TARGET_HARD_FLOAT &&\n\
   (peep2_reg_dead_p(2, operands[0]) || (REGNO(operands[3]) == REGNO(operands[0])))",
    __builtin_constant_p 
#line 312 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT &&
   (peep2_reg_dead_p(2, operands[0]) || (REGNO(operands[3]) == REGNO(operands[0]))))
    ? (int) 
#line 312 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT &&
   (peep2_reg_dead_p(2, operands[0]) || (REGNO(operands[3]) == REGNO(operands[0]))))
    : -1 },
#line 806 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "(register_operand (operands[0], SFmode)\n\
    || register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 806 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((register_operand (operands[0], SFmode)
    || register_operand (operands[1], SFmode)))
    ? (int) 
#line 806 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((register_operand (operands[0], SFmode)
    || register_operand (operands[1], SFmode)))
    : -1 },
#line 3569 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "(reload_completed &&\n\
     REG_P(operands[0]) && REG_P(operands[1])\n\
     && (REGNO(operands[0]) != REGNO(operands[1])))",
    __builtin_constant_p 
#line 3569 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((reload_completed &&
     REG_P(operands[0]) && REG_P(operands[1])
     && (REGNO(operands[0]) != REGNO(operands[1]))))
    ? (int) 
#line 3569 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((reload_completed &&
     REG_P(operands[0]) && REG_P(operands[1])
     && (REGNO(operands[0]) != REGNO(operands[1]))))
    : -1 },
#line 142 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md"
  { "TARGET_SIMD",
    __builtin_constant_p 
#line 142 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md"
(TARGET_SIMD)
    ? (int) 
#line 142 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md"
(TARGET_SIMD)
    : -1 },
#line 3303 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "flag_pic",
    __builtin_constant_p 
#line 3303 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(flag_pic)
    ? (int) 
#line 3303 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(flag_pic)
    : -1 },
#line 111 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
  { "TARGET_HARD_FLOAT\n\
   && reload_completed\n\
   && (REG_P(operands[0]) &&  (REGNO_REG_CLASS(REGNO(operands[0])) == GENERAL_REGS))\n\
   && (REG_P(operands[1]) &&  (REGNO_REG_CLASS(REGNO(operands[1])) == GENERAL_REGS))",
    __builtin_constant_p 
#line 111 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT
   && reload_completed
   && (REG_P(operands[0]) &&  (REGNO_REG_CLASS(REGNO(operands[0])) == GENERAL_REGS))
   && (REG_P(operands[1]) &&  (REGNO_REG_CLASS(REGNO(operands[1])) == GENERAL_REGS)))
    ? (int) 
#line 111 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT
   && reload_completed
   && (REG_P(operands[0]) &&  (REGNO_REG_CLASS(REGNO(operands[0])) == GENERAL_REGS))
   && (REG_P(operands[1]) &&  (REGNO_REG_CLASS(REGNO(operands[1])) == GENERAL_REGS)))
    : -1 },
#line 1052 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "((peep2_reg_dead_p(2, operands[0]) &&\n\
    (INTVAL(operands[3]) <= 8)))",
    __builtin_constant_p 
#line 1052 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(((peep2_reg_dead_p(2, operands[0]) &&
    (INTVAL(operands[3]) <= 8))))
    ? (int) 
#line 1052 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(((peep2_reg_dead_p(2, operands[0]) &&
    (INTVAL(operands[3]) <= 8))))
    : -1 },
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "TARGET_V2_INSNS",
    __builtin_constant_p 
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)
    ? (int) 
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)
    : -1 },
#line 3209 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "USE_RETURN_INSN (FALSE) &&\n\
   ((INTVAL(operands[0]) == -1) || (INTVAL(operands[0]) == 0) || (INTVAL(operands[0]) == 1))",
    __builtin_constant_p 
#line 3209 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (FALSE) &&
   ((INTVAL(operands[0]) == -1) || (INTVAL(operands[0]) == 0) || (INTVAL(operands[0]) == 1)))
    ? (int) 
#line 3209 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (FALSE) &&
   ((INTVAL(operands[0]) == -1) || (INTVAL(operands[0]) == 0) || (INTVAL(operands[0]) == 1)))
    : -1 },
#line 1638 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "!TARGET_NO_MUL_INSNS && TARGET_DSP",
    __builtin_constant_p 
#line 1638 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(!TARGET_NO_MUL_INSNS && TARGET_DSP)
    ? (int) 
#line 1638 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(!TARGET_NO_MUL_INSNS && TARGET_DSP)
    : -1 },
#line 3178 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "USE_RETURN_INSN (FALSE)",
    __builtin_constant_p 
#line 3178 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (FALSE))
    ? (int) 
#line 3178 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (FALSE))
    : -1 },
#line 1402 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "!TARGET_NO_MUL_INSNS && TARGET_DSP\n\
   && (peep2_reg_dead_p(1, operands[0]) || (REGNO(operands[0]) == REGNO(operands[3])))",
    __builtin_constant_p 
#line 1402 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(!TARGET_NO_MUL_INSNS && TARGET_DSP
   && (peep2_reg_dead_p(1, operands[0]) || (REGNO(operands[0]) == REGNO(operands[3]))))
    ? (int) 
#line 1402 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(!TARGET_NO_MUL_INSNS && TARGET_DSP
   && (peep2_reg_dead_p(1, operands[0]) || (REGNO(operands[0]) == REGNO(operands[3]))))
    : -1 },
#line 382 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
  { "TARGET_HARD_FLOAT && peep2_reg_dead_p(2, operands[0])",
    __builtin_constant_p 
#line 382 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT && peep2_reg_dead_p(2, operands[0]))
    ? (int) 
#line 382 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT && peep2_reg_dead_p(2, operands[0]))
    : -1 },
#line 4806 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "(peep2_reg_dead_p(2, operands[0])) || (REGNO(operands[2]) == REGNO(operands[0]))",
    __builtin_constant_p 
#line 4806 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((peep2_reg_dead_p(2, operands[0])) || (REGNO(operands[2]) == REGNO(operands[0])))
    ? (int) 
#line 4806 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((peep2_reg_dead_p(2, operands[0])) || (REGNO(operands[2]) == REGNO(operands[0])))
    : -1 },
#line 577 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "flag_pic && CONSTANT_POOL_ADDRESS_P(XEXP(operands[1], 0))",
    __builtin_constant_p 
#line 577 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(flag_pic && CONSTANT_POOL_ADDRESS_P(XEXP(operands[1], 0)))
    ? (int) 
#line 577 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(flag_pic && CONSTANT_POOL_ADDRESS_P(XEXP(operands[1], 0)))
    : -1 },
#line 4226 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "(REGNO(operands[0]) == REGNO(operands[2]) || peep2_reg_dead_p(2, operands[0]))",
    __builtin_constant_p 
#line 4226 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((REGNO(operands[0]) == REGNO(operands[2]) || peep2_reg_dead_p(2, operands[0])))
    ? (int) 
#line 4226 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((REGNO(operands[0]) == REGNO(operands[2]) || peep2_reg_dead_p(2, operands[0])))
    : -1 },
#line 715 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "reload_completed &&\n\
   (REG_P (operands[0]) &&\n\
   (REG_P (operands[1]) \n\
    /* If this is a load from the constant pool we split it into\n\
       two double loads. */\n\
    || (GET_CODE (operands[1]) == MEM\n\
        && GET_CODE (XEXP (operands[1], 0)) == SYMBOL_REF\n\
        && CONSTANT_POOL_ADDRESS_P (XEXP (operands[1], 0)))               \n\
    /* If this is a load where the pointer register is a part\n\
       of the register list, we must split it into two double\n\
       loads in order for it to be exception safe. */\n\
    || (GET_CODE (operands[1]) == MEM\n\
        && register_operand (XEXP (operands[1], 0), SImode)\n\
        && reg_overlap_mentioned_p (operands[0], XEXP (operands[1], 0)))               \n\
    || GET_CODE (operands[1]) == CONST_INT\n\
    || GET_CODE (operands[1]) == CONST_DOUBLE))",
    __builtin_constant_p 
#line 715 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(reload_completed &&
   (REG_P (operands[0]) &&
   (REG_P (operands[1]) 
    /* If this is a load from the constant pool we split it into
       two double loads. */
    || (GET_CODE (operands[1]) == MEM
        && GET_CODE (XEXP (operands[1], 0)) == SYMBOL_REF
        && CONSTANT_POOL_ADDRESS_P (XEXP (operands[1], 0)))               
    /* If this is a load where the pointer register is a part
       of the register list, we must split it into two double
       loads in order for it to be exception safe. */
    || (GET_CODE (operands[1]) == MEM
        && register_operand (XEXP (operands[1], 0), SImode)
        && reg_overlap_mentioned_p (operands[0], XEXP (operands[1], 0)))               
    || GET_CODE (operands[1]) == CONST_INT
    || GET_CODE (operands[1]) == CONST_DOUBLE)))
    ? (int) 
#line 715 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(reload_completed &&
   (REG_P (operands[0]) &&
   (REG_P (operands[1]) 
    /* If this is a load from the constant pool we split it into
       two double loads. */
    || (GET_CODE (operands[1]) == MEM
        && GET_CODE (XEXP (operands[1], 0)) == SYMBOL_REF
        && CONSTANT_POOL_ADDRESS_P (XEXP (operands[1], 0)))               
    /* If this is a load where the pointer register is a part
       of the register list, we must split it into two double
       loads in order for it to be exception safe. */
    || (GET_CODE (operands[1]) == MEM
        && register_operand (XEXP (operands[1], 0), SImode)
        && reg_overlap_mentioned_p (operands[0], XEXP (operands[1], 0)))               
    || GET_CODE (operands[1]) == CONST_INT
    || GET_CODE (operands[1]) == CONST_DOUBLE)))
    : -1 },
#line 4628 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "dead_or_set_p(insn, operands[0])",
    __builtin_constant_p 
#line 4628 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(dead_or_set_p(insn, operands[0]))
    ? (int) 
#line 4628 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(dead_or_set_p(insn, operands[0]))
    : -1 },
#line 471 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
  { "TARGET_HARD_FLOAT",
    __builtin_constant_p 
#line 471 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT)
    ? (int) 
#line 471 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT)
    : -1 },
#line 493 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "register_operand (operands[0], V4QImode)\n\
   || register_operand (operands[1], V4QImode)",
    __builtin_constant_p 
#line 493 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(register_operand (operands[0], V4QImode)
   || register_operand (operands[1], V4QImode))
    ? (int) 
#line 493 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(register_operand (operands[0], V4QImode)
   || register_operand (operands[1], V4QImode))
    : -1 },
  { "(TARGET_V2_INSNS) && (TARGET_V2_INSNS)",
    __builtin_constant_p (
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2682 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    ? (int) (
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2682 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    : -1 },
#line 4488 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "(peep2_reg_dead_p(2, operands[0]))\n\
   || (REGNO(operands[0]) == REGNO(operands[2]))",
    __builtin_constant_p 
#line 4488 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((peep2_reg_dead_p(2, operands[0]))
   || (REGNO(operands[0]) == REGNO(operands[2])))
    ? (int) 
#line 4488 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((peep2_reg_dead_p(2, operands[0]))
   || (REGNO(operands[0]) == REGNO(operands[2])))
    : -1 },
#line 3236 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "USE_RETURN_INSN (TRUE) &&\n\
   ((INTVAL(operands[0]) == -1) || (INTVAL(operands[0]) == 0) || (INTVAL(operands[0]) == 1))",
    __builtin_constant_p 
#line 3236 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE) &&
   ((INTVAL(operands[0]) == -1) || (INTVAL(operands[0]) == 0) || (INTVAL(operands[0]) == 1)))
    ? (int) 
#line 3236 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE) &&
   ((INTVAL(operands[0]) == -1) || (INTVAL(operands[0]) == 0) || (INTVAL(operands[0]) == 1)))
    : -1 },
#line 3373 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "flag_pic &&\n\
   ((INTVAL(operands[2]) == 0) || (INTVAL(operands[2]) == 2) ||\n\
    (INTVAL(operands[2]) == 4) || (INTVAL(operands[2]) == 8))",
    __builtin_constant_p 
#line 3373 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(flag_pic &&
   ((INTVAL(operands[2]) == 0) || (INTVAL(operands[2]) == 2) ||
    (INTVAL(operands[2]) == 4) || (INTVAL(operands[2]) == 8)))
    ? (int) 
#line 3373 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(flag_pic &&
   ((INTVAL(operands[2]) == 0) || (INTVAL(operands[2]) == 2) ||
    (INTVAL(operands[2]) == 4) || (INTVAL(operands[2]) == 8)))
    : -1 },
#line 435 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "register_operand (operands[0], HImode)\n\
   || register_operand (operands[1], HImode)",
    __builtin_constant_p 
#line 435 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(register_operand (operands[0], HImode)
   || register_operand (operands[1], HImode))
    ? (int) 
#line 435 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(register_operand (operands[0], HImode)
   || register_operand (operands[1], HImode))
    : -1 },
#line 616 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "register_operand (operands[0], DImode)\n\
   || register_operand (operands[1], DImode)",
    __builtin_constant_p 
#line 616 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(register_operand (operands[0], DImode)
   || register_operand (operands[1], DImode))
    ? (int) 
#line 616 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(register_operand (operands[0], DImode)
   || register_operand (operands[1], DImode))
    : -1 },
#line 1511 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "peep2_reg_dead_p(1, operands[2])",
    __builtin_constant_p 
#line 1511 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(peep2_reg_dead_p(1, operands[2]))
    ? (int) 
#line 1511 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(peep2_reg_dead_p(1, operands[2]))
    : -1 },
#line 4427 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "(peep2_reg_dead_p(2, operands[0]))\n\
   || (REGNO(operands[0]) == REGNO(operands[3]))",
    __builtin_constant_p 
#line 4427 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((peep2_reg_dead_p(2, operands[0]))
   || (REGNO(operands[0]) == REGNO(operands[3])))
    ? (int) 
#line 4427 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((peep2_reg_dead_p(2, operands[0]))
   || (REGNO(operands[0]) == REGNO(operands[3])))
    : -1 },
#line 4714 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "(REGNO(operands[0]) == RETVAL_REGNUM) &&\n\
   ((INTVAL(operands[1]) == -1) || (INTVAL(operands[1]) == 0) || (INTVAL(operands[1]) == 1))",
    __builtin_constant_p 
#line 4714 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((REGNO(operands[0]) == RETVAL_REGNUM) &&
   ((INTVAL(operands[1]) == -1) || (INTVAL(operands[1]) == 0) || (INTVAL(operands[1]) == 1)))
    ? (int) 
#line 4714 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((REGNO(operands[0]) == RETVAL_REGNUM) &&
   ((INTVAL(operands[1]) == -1) || (INTVAL(operands[1]) == 0) || (INTVAL(operands[1]) == 1)))
    : -1 },
#line 451 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "TARGET_UNALIGNED_WORD",
    __builtin_constant_p 
#line 451 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_UNALIGNED_WORD)
    ? (int) 
#line 451 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_UNALIGNED_WORD)
    : -1 },
#line 4687 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "USE_RETURN_INSN (TRUE) && (REGNO(operands[0]) == RETVAL_REGNUM)\n\
   && (REGNO(operands[1]) != LR_REGNUM)\n\
   && (REGNO_REG_CLASS(REGNO(operands[1])) == GENERAL_REGS)",
    __builtin_constant_p 
#line 4687 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE) && (REGNO(operands[0]) == RETVAL_REGNUM)
   && (REGNO(operands[1]) != LR_REGNUM)
   && (REGNO_REG_CLASS(REGNO(operands[1])) == GENERAL_REGS))
    ? (int) 
#line 4687 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE) && (REGNO(operands[0]) == RETVAL_REGNUM)
   && (REGNO(operands[1]) != LR_REGNUM)
   && (REGNO_REG_CLASS(REGNO(operands[1])) == GENERAL_REGS))
    : -1 },
#line 3383 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "!flag_pic",
    __builtin_constant_p 
#line 3383 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(!flag_pic)
    ? (int) 
#line 3383 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(!flag_pic)
    : -1 },
#line 4203 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "REGNO(operands[0]) != REGNO(operands[1]) && avr32_const_ok_for_constraint_p(INTVAL(operands[2]), 'K', \"Ks16\")",
    __builtin_constant_p 
#line 4203 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(REGNO(operands[0]) != REGNO(operands[1]) && avr32_const_ok_for_constraint_p(INTVAL(operands[2]), 'K', "Ks16"))
    ? (int) 
#line 4203 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(REGNO(operands[0]) != REGNO(operands[1]) && avr32_const_ok_for_constraint_p(INTVAL(operands[2]), 'K', "Ks16"))
    : -1 },
#line 698 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "(register_operand (operands[0], TImode)\n\
    || register_operand (operands[1], TImode))",
    __builtin_constant_p 
#line 698 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((register_operand (operands[0], TImode)
    || register_operand (operands[1], TImode)))
    ? (int) 
#line 698 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((register_operand (operands[0], TImode)
    || register_operand (operands[1], TImode)))
    : -1 },
#line 4409 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "(dead_or_set_p(insn, operands[0]))",
    __builtin_constant_p 
#line 4409 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((dead_or_set_p(insn, operands[0])))
    ? (int) 
#line 4409 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((dead_or_set_p(insn, operands[0])))
    : -1 },
#line 2168 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "(GET_CODE (PATTERN (insn)) != COND_EXEC\n\
    && cfun->machine->ifcvt_after_reload)",
    __builtin_constant_p 
#line 2168 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload))
    ? (int) 
#line 2168 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload))
    : -1 },
#line 4109 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "((INTVAL(operands[0]) == -1) || (INTVAL(operands[0]) == 0) || (INTVAL(operands[0]) == 1))",
    __builtin_constant_p 
#line 4109 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(((INTVAL(operands[0]) == -1) || (INTVAL(operands[0]) == 0) || (INTVAL(operands[0]) == 1)))
    ? (int) 
#line 4109 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(((INTVAL(operands[0]) == -1) || (INTVAL(operands[0]) == 0) || (INTVAL(operands[0]) == 1)))
    : -1 },
#line 4127 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "(INTVAL(operands[3]) == 24 || INTVAL(operands[3]) == 16 || INTVAL(operands[3]) == 8\n\
   || INTVAL(operands[3]) == 0)",
    __builtin_constant_p 
#line 4127 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((INTVAL(operands[3]) == 24 || INTVAL(operands[3]) == 16 || INTVAL(operands[3]) == 8
   || INTVAL(operands[3]) == 0))
    ? (int) 
#line 4127 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((INTVAL(operands[3]) == 24 || INTVAL(operands[3]) == 16 || INTVAL(operands[3]) == 8
   || INTVAL(operands[3]) == 0))
    : -1 },
#line 1831 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "(peep2_reg_dead_p(2, operands[0])) || (REGNO(operands[3]) == REGNO(operands[0]))",
    __builtin_constant_p 
#line 1831 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((peep2_reg_dead_p(2, operands[0])) || (REGNO(operands[3]) == REGNO(operands[0])))
    ? (int) 
#line 1831 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((peep2_reg_dead_p(2, operands[0])) || (REGNO(operands[3]) == REGNO(operands[0])))
    : -1 },
#line 1795 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "(dead_or_set_p(insn, operands[3])) || (REGNO(operands[3]) == REGNO(operands[0]))",
    __builtin_constant_p 
#line 1795 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((dead_or_set_p(insn, operands[3])) || (REGNO(operands[3]) == REGNO(operands[0])))
    ? (int) 
#line 1795 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((dead_or_set_p(insn, operands[3])) || (REGNO(operands[3]) == REGNO(operands[0])))
    : -1 },
  { "(TARGET_V2_INSNS) && (USE_RETURN_INSN (TRUE))",
    __builtin_constant_p (
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 3246 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE)))
    ? (int) (
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 3246 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE)))
    : -1 },
  { "(TARGET_V2_INSNS) && (USE_RETURN_INSN (TRUE) &&\n\
   ((INTVAL(operands[0]) == -1) || (INTVAL(operands[0]) == 0) || (INTVAL(operands[0]) == 1)))",
    __builtin_constant_p (
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 3236 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE) &&
   ((INTVAL(operands[0]) == -1) || (INTVAL(operands[0]) == 0) || (INTVAL(operands[0]) == 1))))
    ? (int) (
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 3236 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE) &&
   ((INTVAL(operands[0]) == -1) || (INTVAL(operands[0]) == 0) || (INTVAL(operands[0]) == 1))))
    : -1 },
#line 3284 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "TARGET_RETURN_STACK",
    __builtin_constant_p 
#line 3284 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_RETURN_STACK)
    ? (int) 
#line 3284 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_RETURN_STACK)
    : -1 },
#line 4608 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "avr32_rnd_operands(operands[1], operands[2])",
    __builtin_constant_p 
#line 4608 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_rnd_operands(operands[1], operands[2]))
    ? (int) 
#line 4608 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_rnd_operands(operands[1], operands[2]))
    : -1 },
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "(GET_CODE (PATTERN (insn)) != COND_EXEC\n\
    && cfun->machine->ifcvt_after_reload\n\
    && avr32_cond_imm_clobber_splittable (insn, operands))",
    __builtin_constant_p 
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands)))
    ? (int) 
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands)))
    : -1 },
#line 398 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "register_operand (operands[0], QImode)\n\
   || register_operand (operands[1], QImode)",
    __builtin_constant_p 
#line 398 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(register_operand (operands[0], QImode)
   || register_operand (operands[1], QImode))
    ? (int) 
#line 398 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(register_operand (operands[0], QImode)
   || register_operand (operands[1], QImode))
    : -1 },
#line 3503 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
  { "reload_completed",
    __builtin_constant_p 
#line 3503 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(reload_completed)
    ? (int) 
#line 3503 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(reload_completed)
    : -1 },

};
#endif /* gcc >= 3.0.1 */

int
main(void)
{
  unsigned int i;
  const char *p;
  puts ("(define_conditions [");
#if GCC_VERSION >= 3001
  for (i = 0; i < ARRAY_SIZE (insn_conditions); i++)
    {
      printf ("  (%d \"", insn_conditions[i].value);
      for (p = insn_conditions[i].expr; *p; p++)
        {
          switch (*p)
	     {
	     case '\\':
	     case '\"': putchar ('\\'); break;
	     default: break;
	     }
          putchar (*p);
        }
      puts ("\")");
    }
#endif /* gcc >= 3.0.1 */
  puts ("])");
  fflush (stdout);
return ferror (stdout) != 0 ? FATAL_EXIT_CODE : SUCCESS_EXIT_CODE;
}

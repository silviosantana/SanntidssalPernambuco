/* Generated automatically by the program `genoutput'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "flags.h"
#include "ggc.h"
#include "rtl.h"
#include "expr.h"
#include "insn-codes.h"
#include "tm_p.h"
#include "function.h"
#include "regs.h"
#include "hard-reg-set.h"
#include "real.h"
#include "insn-config.h"

#include "conditions.h"
#include "insn-attr.h"

#include "recog.h"

#include "toplev.h"
#include "output.h"
#include "target.h"
#include "tm-constrs.h"

static const char * const output_0[] = {
  "mov\t%0, %1",
  "ld.ub\t%0, %1",
  "st.b\t%0, %1",
  "mov\t%0, %1",
};

static const char * const output_1[] = {
  "mov\t%0, %1",
  "ld.sh\t%0, %1",
  "st.h\t%0, %1",
  "mov\t%0, %1",
};

static const char *
output_2 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 495 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
    switch (which_alternative) {
      case 0:
      case 1: return "mov\t%0, %1";
      case 2:
        if ( TARGET_V2_INSNS )
           return "movh\t%0, hi(%1)";
        /* Fallthrough */
      case 3: return "mov\t%0, lo(%1)\n\torh\t%0,hi(%1)";
      case 4:
        if ( (REG_P(XEXP(operands[1], 0))
              && REGNO(XEXP(operands[1], 0)) == SP_REGNUM)
             || (GET_CODE(XEXP(operands[1], 0)) == PLUS
                 && REGNO(XEXP(XEXP(operands[1], 0), 0)) == SP_REGNUM
	         && GET_CODE(XEXP(XEXP(operands[1], 0), 1)) == CONST_INT
	         && INTVAL(XEXP(XEXP(operands[1], 0), 1)) % 4 == 0
	         && INTVAL(XEXP(XEXP(operands[1], 0), 1)) <= 0x1FC) )
          return "lddsp\t%0, %1";
	else if ( avr32_const_pool_ref_operand(operands[1], GET_MODE(operands[1])) )
          return "lddpc\t%0, %1";
        else
          return "ld.w\t%0, %1";
      case 5:
        if ( (REG_P(XEXP(operands[0], 0))
              && REGNO(XEXP(operands[0], 0)) == SP_REGNUM)
             || (GET_CODE(XEXP(operands[0], 0)) == PLUS
                 && REGNO(XEXP(XEXP(operands[0], 0), 0)) == SP_REGNUM
	         && GET_CODE(XEXP(XEXP(operands[0], 0), 1)) == CONST_INT
	         && INTVAL(XEXP(XEXP(operands[0], 0), 1)) % 4 == 0
	         && INTVAL(XEXP(XEXP(operands[0], 0), 1)) <= 0x1FC) )
          return "stdsp\t%0, %1";
	else
          return "st.w\t%0, %1";
      case 6:
        if ( TARGET_HAS_ASM_ADDR_PSEUDOS )
          return "lda.w\t%0, %1";
        else
          return "ld.w\t%0, r6[%1@got]";
      default:
	abort();
    }
  }
}

static const char *
output_3 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 495 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
    switch (which_alternative) {
      case 0:
      case 1: return "mov\t%0, %1";
      case 2:
        if ( TARGET_V2_INSNS )
           return "movh\t%0, hi(%1)";
        /* Fallthrough */
      case 3: return "mov\t%0, lo(%1)\n\torh\t%0,hi(%1)";
      case 4:
        if ( (REG_P(XEXP(operands[1], 0))
              && REGNO(XEXP(operands[1], 0)) == SP_REGNUM)
             || (GET_CODE(XEXP(operands[1], 0)) == PLUS
                 && REGNO(XEXP(XEXP(operands[1], 0), 0)) == SP_REGNUM
	         && GET_CODE(XEXP(XEXP(operands[1], 0), 1)) == CONST_INT
	         && INTVAL(XEXP(XEXP(operands[1], 0), 1)) % 4 == 0
	         && INTVAL(XEXP(XEXP(operands[1], 0), 1)) <= 0x1FC) )
          return "lddsp\t%0, %1";
	else if ( avr32_const_pool_ref_operand(operands[1], GET_MODE(operands[1])) )
          return "lddpc\t%0, %1";
        else
          return "ld.w\t%0, %1";
      case 5:
        if ( (REG_P(XEXP(operands[0], 0))
              && REGNO(XEXP(operands[0], 0)) == SP_REGNUM)
             || (GET_CODE(XEXP(operands[0], 0)) == PLUS
                 && REGNO(XEXP(XEXP(operands[0], 0), 0)) == SP_REGNUM
	         && GET_CODE(XEXP(XEXP(operands[0], 0), 1)) == CONST_INT
	         && INTVAL(XEXP(XEXP(operands[0], 0), 1)) % 4 == 0
	         && INTVAL(XEXP(XEXP(operands[0], 0), 1)) <= 0x1FC) )
          return "stdsp\t%0, %1";
	else
          return "st.w\t%0, %1";
      case 6:
        if ( TARGET_HAS_ASM_ADDR_PSEUDOS )
          return "lda.w\t%0, %1";
        else
          return "ld.w\t%0, r6[%1@got]";
      default:
	abort();
    }
  }
}

static const char *
output_4 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 495 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
    switch (which_alternative) {
      case 0:
      case 1: return "mov\t%0, %1";
      case 2:
        if ( TARGET_V2_INSNS )
           return "movh\t%0, hi(%1)";
        /* Fallthrough */
      case 3: return "mov\t%0, lo(%1)\n\torh\t%0,hi(%1)";
      case 4:
        if ( (REG_P(XEXP(operands[1], 0))
              && REGNO(XEXP(operands[1], 0)) == SP_REGNUM)
             || (GET_CODE(XEXP(operands[1], 0)) == PLUS
                 && REGNO(XEXP(XEXP(operands[1], 0), 0)) == SP_REGNUM
	         && GET_CODE(XEXP(XEXP(operands[1], 0), 1)) == CONST_INT
	         && INTVAL(XEXP(XEXP(operands[1], 0), 1)) % 4 == 0
	         && INTVAL(XEXP(XEXP(operands[1], 0), 1)) <= 0x1FC) )
          return "lddsp\t%0, %1";
	else if ( avr32_const_pool_ref_operand(operands[1], GET_MODE(operands[1])) )
          return "lddpc\t%0, %1";
        else
          return "ld.w\t%0, %1";
      case 5:
        if ( (REG_P(XEXP(operands[0], 0))
              && REGNO(XEXP(operands[0], 0)) == SP_REGNUM)
             || (GET_CODE(XEXP(operands[0], 0)) == PLUS
                 && REGNO(XEXP(XEXP(operands[0], 0), 0)) == SP_REGNUM
	         && GET_CODE(XEXP(XEXP(operands[0], 0), 1)) == CONST_INT
	         && INTVAL(XEXP(XEXP(operands[0], 0), 1)) % 4 == 0
	         && INTVAL(XEXP(XEXP(operands[0], 0), 1)) <= 0x1FC) )
          return "stdsp\t%0, %1";
	else
          return "st.w\t%0, %1";
      case 6:
        if ( TARGET_HAS_ASM_ADDR_PSEUDOS )
          return "lda.w\t%0, %1";
        else
          return "ld.w\t%0, r6[%1@got]";
      default:
	abort();
    }
  }
}

static const char *
output_8 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 589 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   (*targetm.asm_out.internal_label) (asm_out_file, "L",
	 		     CODE_LABEL_NUMBER (operands[1]));
   return "rsub\t%0, pc";
  }
}

static const char *
output_9 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 618 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
    switch (which_alternative ){
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        return "#";
    case 5:
      if ( avr32_const_pool_ref_operand(operands[1], GET_MODE(operands[1])))
        return "ld.d\t%0, pc[%1 - .]";
      else
        return "ld.d\t%0, %1";
    case 6:
      return "st.d\t%0, %1";
    default:
      abort();
    }
  }
}

static const char *
output_10 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 700 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
    switch (which_alternative ){
    case 0:
    case 2:
    case 4:
        return "#";
    case 1:
        return "ldm\t%p1, %0";
    case 3:
        return "stm\t%p0, %1";
    case 5:
        return "ld.d\t%U0, pc[%1 - .]\n\tld.d\t%B0, pc[%1 - . + 8]";
    }
  }
}

static const char *
output_11 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 808 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
    switch (which_alternative) {
      case 0:
      case 1: return "mov\t%0, %1";
      case 2: 
       {
        HOST_WIDE_INT target_float[2];
        real_to_target (target_float, CONST_DOUBLE_REAL_VALUE (operands[1]), SFmode);
        if ( TARGET_V2_INSNS 
             && avr32_hi16_immediate_operand (GEN_INT (target_float[0]), VOIDmode) )
           return "movh\t%0, hi(%1)";
        else
           return "mov\t%0, lo(%1)\n\torh\t%0, hi(%1)";
       }
      case 3:
        if ( (REG_P(XEXP(operands[1], 0))
              && REGNO(XEXP(operands[1], 0)) == SP_REGNUM)
             || (GET_CODE(XEXP(operands[1], 0)) == PLUS
                 && REGNO(XEXP(XEXP(operands[1], 0), 0)) == SP_REGNUM
	         && GET_CODE(XEXP(XEXP(operands[1], 0), 1)) == CONST_INT
	         && INTVAL(XEXP(XEXP(operands[1], 0), 1)) % 4 == 0
	         && INTVAL(XEXP(XEXP(operands[1], 0), 1)) <= 0x1FC) )
          return "lddsp\t%0, %1";
          else if ( avr32_const_pool_ref_operand(operands[1], GET_MODE(operands[1])) )
          return "lddpc\t%0, %1";
        else
          return "ld.w\t%0, %1";
      case 4:
        if ( (REG_P(XEXP(operands[0], 0))
              && REGNO(XEXP(operands[0], 0)) == SP_REGNUM)
             || (GET_CODE(XEXP(operands[0], 0)) == PLUS
                 && REGNO(XEXP(XEXP(operands[0], 0), 0)) == SP_REGNUM
	         && GET_CODE(XEXP(XEXP(operands[0], 0), 1)) == CONST_INT
	         && INTVAL(XEXP(XEXP(operands[0], 0), 1)) % 4 == 0
	         && INTVAL(XEXP(XEXP(operands[0], 0), 1)) <= 0x1FC) )
          return "stdsp\t%0, %1";
	else
          return "st.w\t%0, %1";
      default:
	abort();
    }
  }
}

static const char *
output_12 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 876 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
    switch (which_alternative ){
    case 0:
    case 1:
    case 2: 
        return "#";
    case 3:
      if ( avr32_const_pool_ref_operand(operands[1], GET_MODE(operands[1])))
        return "ld.d\t%0, pc[%1 - .]";
      else
        return "ld.d\t%0, %1";
    case 4:
      return "st.d\t%0, %1";
    default:
      abort();
    }
  }
}

static const char *
output_28 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1085 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
    if (INTVAL(operands[0])) {
      return "pushm\t%r0";
    } else {
      return "";
    }
  }
}

static const char *
output_29 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1102 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
    if (INTVAL(operands[1])) {
      if (INTVAL(operands[2]) != 0)
         return "stm\t--%0, %s1";
      else
         return "stm\t%0, %s1";
    } else {
      return "";
    }
  }
}

static const char *
output_30 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1122 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
    if (INTVAL(operands[0])) {
      return "popm   %r0";
    } else {
      return "";
    }
  }
}

static const char * const output_31[] = {
  "add     %0, %2",
  "add     %0, %1, %2",
  "sub     %0, %n2",
  "sub     %0, %1, %n2",
  "sub     %0, %n2",
};

static const char * const output_32[] = {
  "add     %0, %2",
  "add     %0, %1, %2",
  "sub     %0, %n2",
  "sub     %0, %1, %n2",
  "sub     %0, %n2",
};

static const char * const output_33[] = {
  "add     %0, %2",
  "add     %0, %1, %2",
  "sub     %0, %n2",
  "sub     %0, %1, %n2",
  "sub     %0, %n2",
};

static const char * const output_46[] = {
  "add     %0, %1, %2\n\tadc    %m0, %m1, %m2",
  "add     %0, %2\n\tadc    %m0, %m0, %m2",
};

static const char * const output_50[] = {
  "sub     %0, %2",
  "sub     %0, %1, %2",
  "sub     %0, %2",
  "sub     %0, %1, %2",
  "sub     %0, %2",
  "rsub    %0, %1",
  "rsub    %0, %2, %1",
};

static const char * const output_51[] = {
  "sub     %0, %2",
  "sub     %0, %1, %2",
  "sub     %0, %2",
  "sub     %0, %1, %2",
  "sub     %0, %2",
  "rsub    %0, %1",
  "rsub    %0, %2, %1",
};

static const char * const output_52[] = {
  "sub     %0, %2",
  "sub     %0, %1, %2",
  "sub     %0, %2",
  "sub     %0, %1, %2",
  "sub     %0, %2",
  "rsub    %0, %1",
  "rsub    %0, %2, %1",
};

static const char * const output_53[] = {
  "sub     %0, %1, %2 << %p3",
  "sub     %0, %0, %2 << %p3",
  "sub     %0, %1, %0 << %p3",
};

static const char * const output_54[] = {
  "sub     %0, %1, %2 << %p3",
  "sub     %0, %0, %2 << %p3",
  "sub     %0, %1, %0 << %p3",
};

static const char * const output_55[] = {
  "sub     %0, %1, %2 << %p3",
  "sub     %0, %0, %2 << %p3",
  "sub     %0, %1, %0 << %p3",
};

static const char * const output_59[] = {
  "sub     %0, %1, %2\n\tsbc    %m0, %m1, %m2",
  "sub     %0, %2\n\tsbc    %m0, %m0, %m2",
};

static const char *
output_66 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1344 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   switch (which_alternative){
    case 0:
      return "mul     %0, %2";
    case 1:
      return "mul     %0, %1, %2";
    case 2:
      return "mul     %0, %1, %2";
    default:
      gcc_unreachable();
   }
  }
}

static const char *
output_67 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   switch (which_alternative){
    case 0:
      return "mul     %0, %2";
    case 1:
      return "mul     %0, %1, %2";
    case 2:
      return "mul     %0, %1, %2";
    default:
      gcc_unreachable();
   }
  }
}

static const char *
output_92 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1753 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( GET_CODE(operands[4]) == ASHIFT )
      return "and\t%0, %1, %2 << %3";
   else
      return "and\t%0, %1, %2 >> %3";
      }
}

static const char *
output_93 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1753 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( GET_CODE(operands[4]) == ASHIFT )
      return "or\t%0, %1, %2 << %3";
   else
      return "or\t%0, %1, %2 >> %3";
      }
}

static const char *
output_94 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1753 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( GET_CODE(operands[4]) == ASHIFT )
      return "eor\t%0, %1, %2 << %3";
   else
      return "eor\t%0, %1, %2 >> %3";
      }
}

static const char *
output_96 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1863 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   switch (which_alternative){
    case 0:
         return "and\t%0, %2";
    case 1:
        {
         int i, first_set = -1;
         /* Search for first bit set in mask */
         for ( i = 31; i >= 0; --i )
           if ( INTVAL(operands[2]) & (1 << i) ){
             first_set = i;
             break;
           }
         operands[2] = gen_rtx_CONST_INT(SImode, first_set + 1);
         return "bfextu\t%0, %1, 0, %2";
        }
    case 2:
         if ( one_bit_cleared_operand(operands[2], VOIDmode) ){
             int bitpos;
             for ( bitpos = 0; bitpos < 32; bitpos++ )
               if ( !(INTVAL(operands[2]) & (1 << bitpos)) )
                 break;
             operands[2] = gen_rtx_CONST_INT(SImode, bitpos);
             return "cbr\t%0, %2";
         } else if ( (INTVAL(operands[2]) >= 0) &&
                     (INTVAL(operands[2]) <= 65535) )
             return "andl\t%0, %2, COH";
         else if ( (INTVAL(operands[2]) < 0) &&
                   (INTVAL(operands[2]) >= -65536 ) )
             return "andl\t%0, lo(%2)";
         else if ( ((INTVAL(operands[2]) & 0xffff) == 0xffff) )
             return "andh\t%0, hi(%2)";
         else if ( ((INTVAL(operands[2]) & 0xffff) == 0x0) )
             return "andh\t%0, hi(%2), COH";
         else
             return "andh\t%0, hi(%2)\n\tandl\t%0, lo(%2)";
    case 3:
         return "and\t%0, %1, %2";
    default:
	 abort();
    }
  }
}

static const char *
output_98 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1932 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   switch (which_alternative){
    case 0:
         return "or\t%0, %2";
    case 1:
         if ( one_bit_set_operand(operands[2], VOIDmode) ){
             int bitpos;
             for (bitpos = 0; bitpos < 32; bitpos++)
               if (INTVAL(operands[2]) & (1 << bitpos))
                 break;
             operands[2] = gen_rtx_CONST_INT( SImode, bitpos);
             return "sbr\t%0, %2";
         } else if ( (INTVAL(operands[2]) >= 0) &&
              (INTVAL(operands[2]) <= 65535) )
             return "orl\t%0, %2";
         else if ( ((INTVAL(operands[2]) & 0xffff) == 0x0) )
             return "orh\t%0, hi(%2)";
         else
             return "orh\t%0, hi(%2)\n\torl\t%0, lo(%2)";
    case 2:
         return "or\t%0, %1, %2";
    default:
	 abort();
    }
  }
}

static const char *
output_100 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1982 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   switch (which_alternative){
    case 0:
         return "eor     %0, %2";
    case 1:
         if ( (INTVAL(operands[2]) >= 0) &&
              (INTVAL(operands[2]) <= 65535) )
             return "eorl    %0, %2";
         else if ( ((INTVAL(operands[2]) & 0xffff) == 0x0) )
             return "eorh    %0, hi(%2)";
         else
             return "eorh    %0, hi(%2)\n\teorl    %0, lo(%2)";
    case 2:
         return "eor     %0, %1, %2";
    default:
	 abort();
    }
  }
}

static const char *
output_117 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tand%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tand%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_118 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_119 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\teor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\teor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_120 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tadd%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tadd%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_121 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tsub%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tsub%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_122 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tand%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tand%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_123 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_124 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\teor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\teor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_125 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tadd%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tadd%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_126 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tsub%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tsub%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_127 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tand%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tand%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_128 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_129 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\teor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\teor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_130 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tadd%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tadd%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_131 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tsub%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tsub%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_132 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2088 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
         return "%! mov\t%2, 0xffff\n\tand%?\t%0, %1, %2";
       }
   else
      {
       return "#";
      }
      
  }
}

static const char *
output_133 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2120 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
         return "%! mov\t%2, 0xff\n\tand%?\t%0, %1, %2";
       }
   else
      {
       return "#";
      }
      
  }
}

static const char *
output_134 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2152 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
         return "%! mov\t%2, 0xff\n\tand%?\t%0, %1, %2";
       }
   else
      {
       return "#";
      }
      
  }
}

static const char * const output_137[] = {
  "lsl     %0, %1, %2",
  "lsl     %0, %2",
  "lsl     %0, %1, %2",
};

static const char * const output_138[] = {
  "asr     %0, %1, %2",
  "asr     %0, %2",
  "asr     %0, %1, %2",
};

static const char * const output_139[] = {
  "lsr     %0, %1, %2",
  "lsr     %0, %2",
  "lsr     %0, %1, %2",
};

static const char * const output_140[] = {
  "neg\t%0",
  "rsub\t%0, %1, 0",
};

static const char * const output_143[] = {
  "rsub\t%0, %1, -1",
  "com\t%0",
};

static const char *
output_146 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2421 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   set_next_insn_cond(insn,
                      avr32_output_cmp(get_next_insn_cond(insn), GET_MODE (operands[0]), operands[0], operands[1]));
   return "";
  }
}

static const char *
output_147 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2421 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   set_next_insn_cond(insn,
                      avr32_output_cmp(get_next_insn_cond(insn), GET_MODE (operands[0]), operands[0], operands[1]));
   return "";
  }
}

static const char *
output_148 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2421 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   set_next_insn_cond(insn,
                      avr32_output_cmp(get_next_insn_cond(insn), GET_MODE (operands[0]), operands[0], operands[1]));
   return "";
  }
}

static const char *
output_149 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2421 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   set_next_insn_cond(insn,
                      avr32_output_cmp(get_next_insn_cond(insn), GET_MODE (operands[0]), operands[0], operands[1]));
   return "";
  }
}

static const char *
output_150 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2451 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   set_next_insn_cond(insn,
     avr32_output_cmp(get_next_insn_cond(insn), SImode, operands[0], const0_rtx));

   return "";
  }
}

static const char *
output_151 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2475 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   set_next_insn_cond(insn,
     avr32_output_cmp(get_next_insn_cond(insn), DImode, operands[0], const0_rtx));
   return "";
  }
}

static const char *
output_153 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2508 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   switch ( which_alternative ){
     case 0:
       return    "casts.h\t%0";
     case 1:
       return    "bfexts\t%0, %1, 0, 16";
     case 2:
     case 3:
       return    "ld.sh\t%0, %1";
     default:
       abort();
   }
  }
}

static const char *
output_154 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2529 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   switch ( which_alternative ){
     case 0:
       return    "casts.b\t%0";
     case 1:
       return    "bfexts\t%0, %1, 0, 8";
     case 2:
     case 3:
       return    "ld.sb\t%0, %1";
     default:
       abort();
   }
  }
}

static const char *
output_155 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2550 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   switch ( which_alternative ){
     case 0:
       return    "casts.b\t%0";
     case 1:
       return    "bfexts\t%0, %1, 0, 8";
     case 2:
     case 3:
       return    "ld.sb\t%0, %1";
     default:
       abort();
   }
  }
}

static const char *
output_156 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2578 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   switch ( which_alternative ){
     case 0:
       return    "castu.h\t%0";
     case 1:
       return    "bfextu\t%0, %1, 0, 16";
     case 2:
     case 3:
       return    "ld.uh\t%0, %1";
     default:
       abort();
   }
  }
}

static const char *
output_157 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2600 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   switch ( which_alternative ){
     case 0:
       return    "castu.b\t%0";
     case 1:
       return    "bfextu\t%0, %1, 0, 8";
     case 2:
     case 3:
       return    "ld.ub\t%0, %1";
     default:
       abort();
   }
  }
}

static const char *
output_158 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2621 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   switch ( which_alternative ){
     case 0:
       return    "castu.b\t%0";
     case 1:
       return    "bfextu\t%0, %1, 0, 8";
     case 2:
     case 3:
       return    "ld.ub\t%0, %1";
     default:
       abort();
   }
  }
}

static const char *
output_203 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2878 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
   return "add%i1\t%0, %2, %3";
  }
}

static const char *
output_204 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2878 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
   return "add%i1\t%0, %2, %3";
  }
}

static const char *
output_205 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2878 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
   return "add%i1\t%0, %2, %3";
  }
}

static const char *
output_206 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2878 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
   return "add%i1\t%0, %2, %3";
  }
}

static const char *
output_207 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2878 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
   return "add%i1\t%0, %2, %3";
  }
}

static const char *
output_208 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2878 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
   return "add%i1\t%0, %2, %3";
  }
}

static const char *
output_209 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2878 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
   return "add%i1\t%0, %2, %3";
  }
}

static const char *
output_210 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2878 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
   return "add%i1\t%0, %2, %3";
  }
}

static const char *
output_211 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2878 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
   return "add%i1\t%0, %2, %3";
  }
}

static const char *
output_212 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2878 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
   return "add%i1\t%0, %2, %3";
  }
}

static const char *
output_213 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2878 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
   return "add%i1\t%0, %2, %3";
  }
}

static const char *
output_214 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2878 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
   return "add%i1\t%0, %2, %3";
  }
}

static const char *
output_215 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2895 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
   return "sub%i1\t%0, -%3";
  }
}

static const char *
output_216 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2895 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
   return "sub%i1\t%0, -%3";
  }
}

static const char *
output_217 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2895 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
   return "sub%i1\t%0, -%3";
  }
}

static const char *
output_218 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2895 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
   return "sub%i1\t%0, -%3";
  }
}

static const char *
output_219 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2895 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
   return "sub%i1\t%0, -%3";
  }
}

static const char *
output_220 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2895 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
   return "sub%i1\t%0, -%3";
  }
}

static const char *
output_221 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2895 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
   return "sub%i1\t%0, -%3";
  }
}

static const char *
output_222 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2895 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
   return "sub%i1\t%0, -%3";
  }
}

static const char *
output_223 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2895 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
   return "sub%i1\t%0, -%3";
  }
}

static const char *
output_224 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2895 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
   return "sub%i1\t%0, -%3";
  }
}

static const char *
output_225 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2895 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
   return "sub%i1\t%0, -%3";
  }
}

static const char *
output_226 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2895 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
   return "sub%i1\t%0, -%3";
  }
}

static const char *
output_227 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2933 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
           
   switch( which_alternative ){
    case 0:
      return "mov%i1    %0, %3";
    case 1:
      return "mov%1    %0, %2";
    case 2:
      return "mov%1    %0, %2\n\tmov%i1    %0, %3";
    default:
      abort();
    }

  }
}

static const char *
output_228 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2933 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
           
   switch( which_alternative ){
    case 0:
      return "mov%i1    %0, %3";
    case 1:
      return "mov%1    %0, %2";
    case 2:
      return "mov%1    %0, %2\n\tmov%i1    %0, %3";
    default:
      abort();
    }

  }
}

static const char *
output_229 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2933 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
           
   switch( which_alternative ){
    case 0:
      return "mov%i1    %0, %3";
    case 1:
      return "mov%1    %0, %2";
    case 2:
      return "mov%1    %0, %2\n\tmov%i1    %0, %3";
    default:
      abort();
    }

  }
}

static const char *
output_230 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2933 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
           
   switch( which_alternative ){
    case 0:
      return "mov%i1    %0, %3";
    case 1:
      return "mov%1    %0, %2";
    case 2:
      return "mov%1    %0, %2\n\tmov%i1    %0, %3";
    default:
      abort();
    }

  }
}

static const char *
output_231 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2933 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
           
   switch( which_alternative ){
    case 0:
      return "mov%i1    %0, %3";
    case 1:
      return "mov%1    %0, %2";
    case 2:
      return "mov%1    %0, %2\n\tmov%i1    %0, %3";
    default:
      abort();
    }

  }
}

static const char *
output_232 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2933 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
           
   switch( which_alternative ){
    case 0:
      return "mov%i1    %0, %3";
    case 1:
      return "mov%1    %0, %2";
    case 2:
      return "mov%1    %0, %2\n\tmov%i1    %0, %3";
    default:
      abort();
    }

  }
}

static const char *
output_233 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2933 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
           
   switch( which_alternative ){
    case 0:
      return "mov%i1    %0, %3";
    case 1:
      return "mov%1    %0, %2";
    case 2:
      return "mov%1    %0, %2\n\tmov%i1    %0, %3";
    default:
      abort();
    }

  }
}

static const char *
output_234 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2933 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
           
   switch( which_alternative ){
    case 0:
      return "mov%i1    %0, %3";
    case 1:
      return "mov%1    %0, %2";
    case 2:
      return "mov%1    %0, %2\n\tmov%i1    %0, %3";
    default:
      abort();
    }

  }
}

static const char *
output_235 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2933 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
           
   switch( which_alternative ){
    case 0:
      return "mov%i1    %0, %3";
    case 1:
      return "mov%1    %0, %2";
    case 2:
      return "mov%1    %0, %2\n\tmov%i1    %0, %3";
    default:
      abort();
    }

  }
}

static const char *
output_236 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2933 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
           
   switch( which_alternative ){
    case 0:
      return "mov%i1    %0, %3";
    case 1:
      return "mov%1    %0, %2";
    case 2:
      return "mov%1    %0, %2\n\tmov%i1    %0, %3";
    default:
      abort();
    }

  }
}

static const char *
output_237 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2933 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
           
   switch( which_alternative ){
    case 0:
      return "mov%i1    %0, %3";
    case 1:
      return "mov%1    %0, %2";
    case 2:
      return "mov%1    %0, %2\n\tmov%i1    %0, %3";
    default:
      abort();
    }

  }
}

static const char *
output_238 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2933 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
           
   switch( which_alternative ){
    case 0:
      return "mov%i1    %0, %3";
    case 1:
      return "mov%1    %0, %2";
    case 2:
      return "mov%1    %0, %2\n\tmov%i1    %0, %3";
    default:
      abort();
    }

  }
}

static const char *
output_239 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2933 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
           
   switch( which_alternative ){
    case 0:
      return "mov%i1    %0, %3";
    case 1:
      return "mov%1    %0, %2";
    case 2:
      return "mov%1    %0, %2\n\tmov%i1    %0, %3";
    default:
      abort();
    }

  }
}

static const char *
output_240 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2933 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
           
   switch( which_alternative ){
    case 0:
      return "mov%i1    %0, %3";
    case 1:
      return "mov%1    %0, %2";
    case 2:
      return "mov%1    %0, %2\n\tmov%i1    %0, %3";
    default:
      abort();
    }

  }
}

static const char *
output_241 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2933 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
           
   switch( which_alternative ){
    case 0:
      return "mov%i1    %0, %3";
    case 1:
      return "mov%1    %0, %2";
    case 2:
      return "mov%1    %0, %2\n\tmov%i1    %0, %3";
    default:
      abort();
    }

  }
}

static const char *
output_242 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2933 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);
           
   switch( which_alternative ){
    case 0:
      return "mov%i1    %0, %3";
    case 1:
      return "mov%1    %0, %2";
    case 2:
      return "mov%1    %0, %2\n\tmov%i1    %0, %3";
    default:
      abort();
    }

  }
}

static const char *
output_243 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2963 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
    if (get_attr_length(insn) > 4)
      return "Can't jump this far";
    return (get_attr_length(insn) == 2 ?
	    "rjmp    %0" : "bral    %0");
  }
}

static const char *
output_244 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2989 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   switch (which_alternative){
    case 0:
      return "icall\t%0";
    case 1:
      return "rcall\t%0";
    case 2:
      return "mcall\t%0";
    case 3:
      if ( TARGET_HAS_ASM_ADDR_PSEUDOS )
        return "call\t%0";
      else
        return "mcall\tr6[%0@got]";
    default:
      abort();
   }
  }
}

static const char *
output_245 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3117 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   switch (which_alternative){
    case 0:
      return "icall\t%1";
    case 1:
      return "rcall\t%1";
    case 2:
      return "mcall\t%1";
    case 3:
      if ( TARGET_HAS_ASM_ADDR_PSEUDOS )
        return "call\t%1";
      else
        return "mcall\tr6[%1@got]";
    default:
      abort();
   }
  }
}

static const char *
output_246 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3179 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   avr32_output_return_instruction(TRUE, FALSE, NULL, NULL);
   return "";
  }
}

static const char *
output_249 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3211 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   avr32_output_return_instruction(TRUE, FALSE, NULL, operands[0]);
   return "";
  }
}

static const char *
output_259 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3340 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
    switch( which_alternative ){
      case 0:
        return "mov\tpc, %0";
      case 1:
        if ( avr32_const_pool_ref_operand(operands[0], GET_MODE(operands[0])) )
          return "lddpc\tpc, %0";
        else
          return "ld.w\tpc, %0";
      case 2:
        if ( flag_pic )
          return "ld.w\tpc, r6[%0@got]";
        else
          return "lda.w\tpc, %0";
      default:
	abort();
    }
   }
}

static const char *
output_262 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3449 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
     return "pref\t%0";
  }
}

static const char *
output_266 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3553 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   switch ( which_alternative ){
     case 0:
       if ( REGNO(operands[0]) == REGNO(operands[1]))
         return "swap.bh\t%0";
       else
         return "mov\t%0, %1\n\tswap.bh\t%0";
     case 1:
       return "stswp.h\t%0, %1";
     case 2:
       return "ldswp.sh\t%0, %1";
     default:
       abort();
     }
  }
}

static const char *
output_267 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3601 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
    switch ( which_alternative ){
     case 0:
       if ( REGNO(operands[0]) == REGNO(operands[1]))
         return "swap.b\t%0";
       else
         return "#";
     case 1:
       return "stswp.w\t%0, %1";
     case 2:
       return "ldswp.w\t%0, %1";
     default:
       abort();
    }
  }
}

static const char * const output_270[] = {
  "brev\t%0\n\tclz\t%0, %0",
  "mov\t%0, %1\n\tbrev\t%0\n\tclz\t%0, %0",
};

static const char *
output_290 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3873 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   assemble_align (32);
   return "";
  }
}

static const char *
output_291 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3883 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   return ".cpool";
  }
}

static const char *
output_292 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3892 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   making_const_table = FALSE;
   return "";
  }
}

static const char *
output_293 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3903 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
    making_const_table = TRUE;
    switch (GET_MODE_CLASS (GET_MODE (operands[0])))
      {
      case MODE_FLOAT:
      {
        REAL_VALUE_TYPE r;
        char real_string[1024];
        REAL_VALUE_FROM_CONST_DOUBLE (r, operands[0]);
        real_to_decimal(real_string, &r, 1024, 0, 1);
        asm_fprintf (asm_out_file, "\t.float\t%s\n", real_string);
        break;
      }
      default:
        assemble_integer (operands[0], 4, 0, 1);
        break;
      }
    return "";
  }
}

static const char *
output_294 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3928 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
    making_const_table = TRUE;
    switch (GET_MODE_CLASS (GET_MODE (operands[0])))
      {
       case MODE_FLOAT:
        {
         REAL_VALUE_TYPE r; 
         char real_string[1024];
         REAL_VALUE_FROM_CONST_DOUBLE (r, operands[0]);
         real_to_decimal(real_string, &r, 1024, 0, 1);
         asm_fprintf (asm_out_file, "\t.double\t%s\n", real_string);
         break;
        }
       default:
         assemble_integer(operands[0], 8, 0, 1);
        break;
     }
    return "";
  }
}

static const char *
output_295 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3953 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
    making_const_table = TRUE;
    assemble_integer(operands[0], 16, 0, 1);
    return "";
  }
}

static const char * const output_297[] = {
  "mvcr.w\tcp%1, %0, cr%2",
  "stcm.w\tcp%1, %0, cr%2",
  "stc.w\tcp%1, %0, cr%2",
};

static const char * const output_298[] = {
  "mvcr.d\tcp%1, %0, cr%2",
  "stcm.d\tcp%1, %0, cr%2-cr%i2",
  "stc.d\tcp%1, %0, cr%2",
};

static const char *
output_299 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4007 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   switch (which_alternative){
    case 0:
      return "mvrc.w\tcp%0, cr%1, %2";
    case 1:
      return "ldcm.w\tcp%0, %2, cr%1";
    case 2:
      return "ldc.w\tcp%0, cr%1, %2";
    default:
      abort();
   }
  }
}

static const char *
output_300 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4028 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   switch (which_alternative){
    case 0:
      return "mvrc.d\tcp%0, cr%1, %2";
    case 1:
      return "ldcm.d\tcp%0, %2, cr%1-cr%i1";
    case 2:
      return "ldc.d\tcp%0, cr%1, %2";
    default:
      abort();
   }
  }
}

static const char *
output_301 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4070 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
    avr32_output_return_instruction (FALSE, FALSE, NULL, NULL);
    return "";
  }
}

static const char *
output_302 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4084 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
    avr32_output_return_instruction (FALSE, FALSE, NULL, operands[0]);
    return "";
  }
}

static const char *
output_303 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4096 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   avr32_output_return_instruction (FALSE, FALSE,  NULL, NULL);
   return "";
  }
}

static const char *
output_304 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4110 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
    avr32_output_return_instruction (FALSE, FALSE, NULL, operands[0]);
    return "";
  }
}

static const char *
output_305 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4129 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   switch ( INTVAL(operands[3]) ){
    case 0:
         return "ld.w    %0, %1[%2:b << 2]";
    case 8:
         return "ld.w    %0, %1[%2:l << 2]";
    case 16:
         return "ld.w    %0, %1[%2:u << 2]";
    case 24:
         return "ld.w    %0, %1[%2:t << 2]";
    default:
         internal_error("illegal operand for ldxi");
   }
  }
}

static const char *
output_309 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4862 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( INTVAL(operands[2]) == 0 )
      return "bfextu\t%0, %1, 16, 16";
   else
      return "bfextu\t%0, %1, 0, 16";
  }
}

static const char *
output_310 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4878 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   switch ( INTVAL(operands[2]) ){
     case 0:
       return "bfextu\t%0, %1, 24, 8";
     case 1:
       return "bfextu\t%0, %1, 16, 8";
     case 2:
       return "bfextu\t%0, %1, 8, 8";
     case 3:
       return "bfextu\t%0, %1, 0, 8";
     default:
       abort();
   }
  }
}

static const char * const output_311[] = {
  "mov\t%0, %1\n\tbfins\t%0, %2, 0, 16",
  "bfins\t%0, %2, 0, 16",
  "bfins\t%0, %1, 16, 16",
};

static const char * const output_334[] = {
  "fmov.s\t%0, %1",
  "fmov.s\t%0, %1",
  "fmov.s\t%0, %1",
  "fld.s\t%0, %1",
  "fst.s\t%0, %1",
  "mov\t%0, %1",
  "mov\t%0, %1",
  "ld.w\t%0, %1",
  "st.w\t%0, %1",
};

static const char * const output_335[] = {
  "fmov.d\t%0, %1",
  "fmov.d\t%0, %1",
  "fmov.d\t%0, %1",
  "fld.d\t%0, %1",
  "fst.d\t%0, %1",
  "mov\t%0, %1\n\tmov\t%m0, %m1",
  "ld.d\t%0, %1",
  "st.d\t%0, %1",
};

static const char *
output_358 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 457 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
{
   if (!rtx_equal_p(cc_prev_status.mdep.fpvalue, SET_SRC(PATTERN (insn))) )
      return "fcmp.d\t%0, %1";
   return "";
  }
}

static const char *
output_359 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 499 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
{
   if (!rtx_equal_p(cc_prev_status.mdep.fpvalue, SET_SRC(PATTERN (insn))) )
      return "fcmp.s\t%0, %1";
   return "";
  }
}

static const char *
output_362 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 533 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
{
    int cop_reglist = INTVAL(operands[1]);

    if (INTVAL(operands[2]) != 0)
      return "stcm.w\tcp0, --%0, %C1";
    else
      return "stcm.w\tcp0, %0, %C1";

    if ( cop_reglist & ~0xff ){
      operands[1] = GEN_INT(cop_reglist & ~0xff);
      if (INTVAL(operands[2]) != 0)
         return "stcm.d\tcp0, --%0, %D1";
      else
         return "stcm.d\tcp0, %0, %D1";
    }
  }
}

static const char *
output_386 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1778 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( GET_CODE(operands[5]) == ASHIFT )
      return "and\t%0, %4, %1 << %2";
   else
      return "and\t%0, %4, %1 >> %2";
  }
}

static const char *
output_387 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1778 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( GET_CODE(operands[5]) == ASHIFT )
      return "or\t%0, %4, %1 << %2";
   else
      return "or\t%0, %4, %1 >> %2";
  }
}

static const char *
output_388 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1778 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( GET_CODE(operands[5]) == ASHIFT )
      return "eor\t%0, %4, %1 << %2";
   else
      return "eor\t%0, %4, %1 >> %2";
  }
}

static const char *
output_389 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1796 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( GET_CODE(operands[5]) == ASHIFT )
      return "and\t%0, %4, %1 << %2";
   else
      return "and\t%0, %4, %1 >> %2";
  }
}

static const char *
output_390 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1796 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( GET_CODE(operands[5]) == ASHIFT )
      return "or\t%0, %4, %1 << %2";
   else
      return "or\t%0, %4, %1 >> %2";
  }
}

static const char *
output_391 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1796 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( GET_CODE(operands[5]) == ASHIFT )
      return "eor\t%0, %4, %1 << %2";
   else
      return "eor\t%0, %4, %1 >> %2";
  }
}

static const char *
output_453 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4381 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   switch ( INTVAL(operands[2]) ){
    case 0:
         return "ld.w    %3, %4[%1:b << 2]";
    case 8:
         return "ld.w    %3, %4[%1:l << 2]";
    case 16:
         return "ld.w    %3, %4[%1:u << 2]";
    case 24:
         return "ld.w    %3, %4[%1:t << 2]";
    default:
         internal_error("illegal operand for ldxi");
   }
  }
}

static const char *
output_470 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4702 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
    avr32_output_return_instruction (TRUE, FALSE, NULL, operands[1]);
    return "";
  }
}

static const char *
output_471 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4716 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
    avr32_output_return_instruction (FALSE, FALSE, NULL, operands[1]);
    return "";
  }
}

static const char *
output_472 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4734 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   operands[1] = avr32_output_cmp(operands[1], GET_MODE(operands[4]), operands[4], operands[5]);

   if ( GET_CODE(operands[2]) == REG
        && GET_CODE(operands[3]) == REG
        && REGNO(operands[2]) != LR_REGNUM
        && REGNO(operands[3]) != LR_REGNUM ){
      return "ret%1    %2\n\tret%i1    %3";
   } else if ( GET_CODE(operands[2]) == REG
               && GET_CODE(operands[3]) == CONST_INT ){
      if ( INTVAL(operands[3]) == -1
           || INTVAL(operands[3]) == 0
           || INTVAL(operands[3]) == 1 ){
        return "ret%1    %2\n\tret%i1    %d3";
      } else {
        return "mov%1    r12, %2\n\tmov%i1    r12, %3\n\tretal    r12";
      }
   } else if ( GET_CODE(operands[2]) == CONST_INT
               && GET_CODE(operands[3]) == REG ){
      if ( INTVAL(operands[2]) == -1
           || INTVAL(operands[2]) == 0
           || INTVAL(operands[2]) == 1 ){
        return "ret%1    %d2\n\tret%i1    %3";
      } else {
        return "mov%1    r12, %2\n\tmov%i1    r12, %3\n\tretal    r12";
      }
   } else {
      if ( (INTVAL(operands[2]) == -1
            || INTVAL(operands[2]) == 0
            || INTVAL(operands[2]) == 1 )
           && (INTVAL(operands[3]) == -1
               || INTVAL(operands[3]) == 0
               || INTVAL(operands[3]) == 1 )){
        return "ret%1    %d2\n\tret%i1    %d3";
      } else {
        return "mov%1    r12, %2\n\tmov%i1    r12, %3\n\tretal    r12";
      }
   }
  }
}

static const char *
output_536 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tand%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tand%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_538 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_540 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\teor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\teor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_542 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tadd%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tadd%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_544 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tsub%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tsub%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_546 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tand%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tand%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_548 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_550 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\teor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\teor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_552 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tadd%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tadd%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_554 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tsub%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tsub%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_556 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tand%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tand%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_558 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_560 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\teor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\teor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_562 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tadd%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tadd%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_564 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tsub%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tsub%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_566 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2088 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
         return "%! mov\t%2, 0xffff\n\tand%?\t%0, %1, %2";
       }
   else
      {
       return "#";
      }
      
  }
}

static const char *
output_568 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2120 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
         return "%! mov\t%2, 0xff\n\tand%?\t%0, %1, %2";
       }
   else
      {
       return "#";
      }
      
  }
}

static const char *
output_570 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2152 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
         return "%! mov\t%2, 0xff\n\tand%?\t%0, %1, %2";
       }
   else
      {
       return "#";
      }
      
  }
}

static const char *
output_623 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tand%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tand%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_625 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_627 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\teor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\teor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_629 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tadd%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tadd%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_631 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tsub%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tsub%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_633 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tand%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tand%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_635 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_637 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\teor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\teor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_639 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tadd%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tadd%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_641 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tsub%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tsub%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_643 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tand%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tand%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_645 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_647 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\teor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\teor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_649 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tadd%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tadd%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_651 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tsub%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tsub%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_653 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2088 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
         return "%! mov\t%2, 0xffff\n\tand%?\t%0, %1, %2";
       }
   else
      {
       return "#";
      }
      
  }
}

static const char *
output_655 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2120 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
         return "%! mov\t%2, 0xff\n\tand%?\t%0, %1, %2";
       }
   else
      {
       return "#";
      }
      
  }
}

static const char *
output_657 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2152 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
         return "%! mov\t%2, 0xff\n\tand%?\t%0, %1, %2";
       }
   else
      {
       return "#";
      }
      
  }
}

static const char *
output_710 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tand%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tand%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_712 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_714 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\teor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\teor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_716 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tadd%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tadd%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_718 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tsub%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tsub%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_720 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tand%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tand%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_722 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_724 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\teor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\teor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_726 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tadd%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tadd%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_728 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tsub%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tsub%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_730 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tand%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tand%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_732 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_734 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\teor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\teor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_736 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tadd%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tadd%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_738 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tsub%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tsub%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_740 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2088 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
         return "%! mov\t%2, 0xffff\n\tand%?\t%0, %1, %2";
       }
   else
      {
       return "#";
      }
      
  }
}

static const char *
output_742 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2120 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
         return "%! mov\t%2, 0xff\n\tand%?\t%0, %1, %2";
       }
   else
      {
       return "#";
      }
      
  }
}

static const char *
output_744 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2152 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
         return "%! mov\t%2, 0xff\n\tand%?\t%0, %1, %2";
       }
   else
      {
       return "#";
      }
      
  }
}

static const char *
output_797 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tand%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tand%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_799 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_801 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\teor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\teor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_803 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tadd%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tadd%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_805 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tsub%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tsub%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_807 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tand%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tand%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_809 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_811 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\teor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\teor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_813 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tadd%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tadd%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_815 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tsub%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tsub%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_817 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tand%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tand%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_819 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_821 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\teor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\teor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_823 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tadd%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tadd%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_825 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tsub%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tsub%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_827 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2088 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
         return "%! mov\t%2, 0xffff\n\tand%?\t%0, %1, %2";
       }
   else
      {
       return "#";
      }
      
  }
}

static const char *
output_829 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2120 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
         return "%! mov\t%2, 0xff\n\tand%?\t%0, %1, %2";
       }
   else
      {
       return "#";
      }
      
  }
}

static const char *
output_831 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2152 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
         return "%! mov\t%2, 0xff\n\tand%?\t%0, %1, %2";
       }
   else
      {
       return "#";
      }
      
  }
}

static const char *
output_884 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tand%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tand%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_886 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_888 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\teor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\teor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_890 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tadd%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tadd%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_892 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tsub%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tsub%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_894 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tand%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tand%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_896 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_898 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\teor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\teor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_900 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tadd%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tadd%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_902 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tsub%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tsub%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_904 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tand%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tand%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tand%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tand%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_906 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_908 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\teor%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\teor%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\teor%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\teor%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_910 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tadd%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tadd%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tadd%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tadd%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_912 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
       if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
          return "%! mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
       else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
          return "%! mov\t%3, %2\n\tsub%?\t%0, %1, %3";
       else
          return "%! movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
       }
   else
      {
       if ( !avr32_cond_imm_clobber_splittable (insn, operands) )
          {
                if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks08") )
                   return "mov%?\t%3, %2\n\tsub%?\t%0, %1, %3";
                else if ( avr32_const_ok_for_constraint_p (INTVAL (operands[2]), 'K', "Ks21") )
                   return "mov\t%3, %2\n\tsub%?\t%0, %1, %3";
                else
                   return "movh\t%3, hi(%2)\n\tsub%?\t%0, %1, %3";
          }
       return "#";
      }
      
  }
}

static const char *
output_914 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2088 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
         return "%! mov\t%2, 0xffff\n\tand%?\t%0, %1, %2";
       }
   else
      {
       return "#";
      }
      
  }
}

static const char *
output_916 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2120 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
         return "%! mov\t%2, 0xff\n\tand%?\t%0, %1, %2";
       }
   else
      {
       return "#";
      }
      
  }
}

static const char *
output_918 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2152 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( current_insn_predicate != NULL_RTX ) 
      {
         return "%! mov\t%2, 0xff\n\tand%?\t%0, %1, %2";
       }
   else
      {
       return "#";
      }
      
  }
}



static const struct insn_operand_data operand_data[] = 
{
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,m,r",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "rKs08,m,r,i",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m,r",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rKs08,m,r,i",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,r,r,m,r",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rKs08,Ks21,J,n,m,r,W",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,r,r,m,r",
    V2HImode,
    0,
    1
  },
  {
    general_operand,
    "rKs08,Ks21,J,n,m,r,W",
    V2HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,r,r,m,r",
    V4QImode,
    0,
    1
  },
  {
    general_operand,
    "rKs08,Ks21,J,n,m,r,W",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,r,r,r,m",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "r,Ks08,Ks21,G,n,m,r",
    DImode,
    0,
    1
  },
  {
    avr32_movti_dst_operand,
    "=r,&r,r,<RKu00,r,r",
    TImode,
    0,
    1
  },
  {
    avr32_movti_src_operand,
    "r,RKu00>,RKu00,r,n,T",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,r,m",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "r,G,F,m,r",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,r,m",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "r,G,F,m,r",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "RKu11",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "RKu11",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "RKu10",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "RKu09",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "=RKu11",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=RKu11",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=RKu10",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=RKu09",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SFmode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "Ku05",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "Ku05",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "Ku05",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "Ku05",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r,r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%0,r,0,r,0",
    SImode,
    0,
    1
  },
  {
    avr32_add_operand,
    "r,r,Is08,Is16,Is21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r,r,r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "%0,r,0,r,0",
    HImode,
    0,
    1
  },
  {
    avr32_add_operand,
    "r,r,Is08,Is16,Is21",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r,r,r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "%0,r,0,r,0",
    QImode,
    0,
    1
  },
  {
    avr32_add_operand,
    "r,r,Is08,Is16,Is21",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    avr32_add_shift_immediate_operand,
    "Ku02",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    avr32_add_shift_immediate_operand,
    "Ku02",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    avr32_add_shift_immediate_operand,
    "Ku02",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "Ku04",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "Ku04",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "Ku04",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%r,0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "%Is08",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    HImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "%Is08",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    QImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "%Is08",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "=r,r,r,r,r,r,r",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "0,r,0,r,0,r,Ks08",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "r,r,Ks08,Ks16,Ks21,0,r",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "=r,r,r,r,r,r,r",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "0,r,0,r,0,r,Ks08",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "r,r,Ks08,Ks16,Ks21,0,r",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "=r,r,r,r,r,r,r",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "0,r,0,r,0,r,Ks08",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "r,r,Ks08,Ks16,Ks21,0,r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,0,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,r,0",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "Ku04,Ku04,Ku04",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r,0,r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r,r,0",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "Ku04,Ku04,Ku04",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r,0,r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r,r,0",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "Ku04,Ku04,Ku04",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    avr32_add_shift_immediate_operand,
    "Ku02",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    avr32_add_shift_immediate_operand,
    "Ku02",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "Ks08",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    HImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "Ks08",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    QImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "Ks08",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "%0,r,r",
    QImode,
    0,
    1
  },
  {
    avr32_mul_operand,
    "r,r,Ks08",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%0,r,r",
    SImode,
    0,
    1
  },
  {
    avr32_mul_operand,
    "r,r,Ks08",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "Ku05",
    SImode,
    0,
    1
  },
  {
    logical_shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%0,r,0,r",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "r,M,i,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%0,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%0,0,r",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "r,i,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0,r",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "r,i,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    QImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,0,r",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "r,Ku05,Ku05",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,r,<RKu00>,m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r,r",
    SImode,
    0,
    1
  },
  {
    extendqi_operand,
    "0,r,RKu00,m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r,r",
    HImode,
    0,
    1
  },
  {
    extendqi_operand,
    "0,r,RKu00,m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,r,<RKu00>,m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,r,<RKu00>,m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "RKu10",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "RKu09",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "RKs10",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "Is08",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "Is08",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "Is08",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "Is08",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "Is08",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "Is08",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "Is08",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "Is08",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "Is08",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "Is08",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "Is08",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "Is08",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    SFmode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    avr32_cond_register_immediate_operand,
    "0,rKs08,rKs08",
    SFmode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08,0,rKs08",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "r,r,r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20,rKu20,rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    SFmode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    avr32_cond_register_immediate_operand,
    "0,rKs08,rKs08",
    SFmode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08,0,rKs08",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "r,r,r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21,rKs21,rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    SFmode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    avr32_cond_register_immediate_operand,
    "0,rKs08,rKs08",
    SFmode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08,0,rKs08",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "r,r,r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r,r,r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    SFmode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    avr32_cond_register_immediate_operand,
    "0,rKs08,rKs08",
    SFmode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08,0,rKs08",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "r,r,r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r,r,r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    avr32_cond_register_immediate_operand,
    "0,rKs08,rKs08",
    SImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08,0,rKs08",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,r,r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20,rKu20,rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    avr32_cond_register_immediate_operand,
    "0,rKs08,rKs08",
    SImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08,0,rKs08",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,r,r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21,rKs21,rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    avr32_cond_register_immediate_operand,
    "0,rKs08,rKs08",
    SImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08,0,rKs08",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,r,r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r,r,r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    avr32_cond_register_immediate_operand,
    "0,rKs08,rKs08",
    SImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08,0,rKs08",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,r,r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r,r,r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    avr32_cond_register_immediate_operand,
    "0,rKs08,rKs08",
    HImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08,0,rKs08",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r,r,r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20,rKu20,rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    avr32_cond_register_immediate_operand,
    "0,rKs08,rKs08",
    HImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08,0,rKs08",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r,r,r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21,rKs21,rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    avr32_cond_register_immediate_operand,
    "0,rKs08,rKs08",
    HImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08,0,rKs08",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r,r,r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r,r,r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    avr32_cond_register_immediate_operand,
    "0,rKs08,rKs08",
    HImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08,0,rKs08",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r,r,r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r,r,r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    avr32_cond_register_immediate_operand,
    "0,rKs08,rKs08",
    QImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08,0,rKs08",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r,r,r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20,rKu20,rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    avr32_cond_register_immediate_operand,
    "0,rKs08,rKs08",
    QImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08,0,rKs08",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r,r,r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21,rKs21,rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    avr32_cond_register_immediate_operand,
    "0,rKs08,rKs08",
    QImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08,0,rKs08",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r,r,r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r,r,r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    avr32_cond_register_immediate_operand,
    "0,rKs08,rKs08",
    QImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08,0,rKs08",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r,r,r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r,r,r",
    QImode,
    0,
    1
  },
  {
    avr32_call_operand,
    "r,U,T,W",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r,r",
    VOIDmode,
    0,
    1
  },
  {
    avr32_call_operand,
    "r,U,T,W",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    avr32_comparison_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    avr32_comparison_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    V2HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    V4QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    general_operand,
    "r,m,W",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "Ku04",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    avr32_ks16_address_operand,
    "p",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    avr32_bswap_operand,
    "=r,RKs13,r",
    HImode,
    0,
    1
  },
  {
    avr32_bswap_operand,
    "r,r,RKs13",
    HImode,
    0,
    1
  },
  {
    avr32_bswap_operand,
    "=r,RKs14,r",
    SImode,
    0,
    1
  },
  {
    avr32_bswap_operand,
    "r,r,RKs14",
    SImode,
    0,
    1
  },
  {
    avr32_ks11_address_operand,
    "p",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "Ku05",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "Ku08",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "Ku05",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "Ku05",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "Ku03",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "Ku04",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "Ku04",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "Ku04",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "Ku07",
    VOIDmode,
    0,
    1
  },
  {
    avr32_cop_move_operand,
    "=r,<,Z",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "Ku03,Ku03,Ku03",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "Ku04,Ku04,Ku04",
    VOIDmode,
    0,
    1
  },
  {
    avr32_cop_move_operand,
    "=r,<,Z",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "Ku03,Ku03,Ku03",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "Ku04,Ku04,Ku04",
    VOIDmode,
    0,
    1
  },
  {
    avr32_cop_move_operand,
    "r,>,Z",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "Ku03,Ku03,Ku03",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "Ku04,Ku04,Ku04",
    VOIDmode,
    0,
    1
  },
  {
    avr32_cop_move_operand,
    "r,>,Z",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    V2HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    V4QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "r,r,0",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r,0,r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=&r,&r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+RKs16,+RKs16",
    SImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "r,Ks21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    avr32_ks16_memory_operand,
    "RKs16",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    avr32_ks16_memory_operand,
    "=RKs16",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+RKu00",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    V2HImode,
    0,
    1
  },
  {
    immediate_operand,
    "Ku04",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    V4QImode,
    0,
    1
  },
  {
    immediate_operand,
    "Ku04",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,f,r,f,m,r,r,r,m",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "f,r,f,m,f,r,G,m,r",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,f,r,f,m,r,r,m",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "f,r,f,m,f,r,m,r",
    DFmode,
    0,
    1
  },
  {
    avr32_fp_register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    avr32_fp_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    avr32_fp_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    avr32_fp_register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    avr32_fp_register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    avr32_fp_register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    avr32_fp_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    avr32_fp_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    avr32_fp_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    avr32_fp_register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    avr32_fp_register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    avr32_fp_register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    1
  },
  {
    avr32_movti_dst_operand,
    "",
    TImode,
    0,
    1
  },
  {
    avr32_movti_src_operand,
    "",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    alu_operator,
    "",
    SImode,
    0,
    0
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    logical_binary_operator,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    logical_shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    0,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    0,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    avr32_cond_register_immediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    avr32_cond_register_immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    avr32_cond_register_immediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    avr32_cond_register_immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    avr32_call_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    avr32_bswap_operand,
    "",
    HImode,
    0,
    1
  },
  {
    avr32_bswap_operand,
    "",
    HImode,
    0,
    1
  },
  {
    avr32_bswap_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_bswap_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    load_sb_memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_extract_shift_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_const_pool_ref_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    avr32_const_pool_ref_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_const_pool_ref_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08",
    VOIDmode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    VOIDmode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKs21",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    avr32_ks16_memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_ks16_memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_fp_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    avr32_fp_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    avr32_fp_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    avr32_fp_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    avr32_fp_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    avr32_fp_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    avr32_fp_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    avr32_fp_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "RKu11",
    SFmode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "RKu11",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "RKu10",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "RKu09",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "=RKu11",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SFmode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "=RKu11",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "=RKu10",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "=RKu09",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SFmode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08",
    SFmode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "%Is08",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    HImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "%Is08",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    QImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "%Is08",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "Ks08",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    HImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "Ks08",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    QImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "Ks08",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    QImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "RKu10",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "RKu09",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "RKs10",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    V2HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    V4QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_immediate_operand,
    "rKu20",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "RKu11",
    SFmode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "RKu11",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "RKu10",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "RKu09",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=RKu11",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SFmode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=RKu11",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=RKu10",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=RKu09",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SFmode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08",
    SFmode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "%Is08",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    HImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "%Is08",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    QImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "%Is08",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "Ks08",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    HImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "Ks08",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    QImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "Ks08",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    QImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "RKu10",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "RKu09",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "RKs10",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    V2HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    V4QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_const_int_operand,
    "rKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "RKu11",
    SFmode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "RKu11",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "RKu10",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "RKu09",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=RKu11",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SFmode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=RKu11",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=RKu10",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=RKu09",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SFmode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08",
    SFmode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "%Is08",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    HImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "%Is08",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    QImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "%Is08",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "Ks08",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    HImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "Ks08",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    QImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "Ks08",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    QImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "RKu10",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "RKu09",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "RKs10",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    V2HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    V4QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "RKu11",
    SFmode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "RKu11",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "RKu10",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "RKu09",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "=RKu11",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SFmode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "=RKu11",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "=RKu10",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "=RKu09",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SFmode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08",
    SFmode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "%Is08",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    HImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "%Is08",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    QImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "%Is08",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "Ks08",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    HImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "Ks08",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    QImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "Ks08",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    QImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "RKu10",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "RKu09",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "RKs10",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    V2HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    V4QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "RKu11",
    SFmode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "RKu11",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "RKu10",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "RKu09",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=RKu11",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SFmode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=RKu11",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=RKu10",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=RKu09",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SFmode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08",
    SFmode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    avr32_cond_register_immediate_operand,
    "rKs08",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "%Is08",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    HImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "%Is08",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    QImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "%Is08",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "Ks08",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    HImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "Ks08",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    QImode,
    0,
    1
  },
  {
    avr32_cond_immediate_operand,
    "Ks08",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    QImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    avr32_mov_immediate_operand,
    "JKs21",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "RKu10",
    HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "RKu09",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "RKs10",
    QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    V2HImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    V4QImode,
    0,
    1
  },
  {
    avr32_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    one_bit_set_operand,
    "i",
    SImode,
    0,
    1
  },
};


#if GCC_VERSION >= 2007
__extension__
#endif

const struct insn_data insn_data[] = 
{
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:395 */
  {
    "*movqi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_0 },
#else
    { 0, output_0, 0 },
#endif
    0,
    &operand_data[1],
    2,
    0,
    4,
    2
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:432 */
  {
    "*movhi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1 },
#else
    { 0, output_1, 0 },
#endif
    0,
    &operand_data[3],
    2,
    0,
    4,
    2
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:490 */
  {
    "movsi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_2 },
#else
    { 0, 0, output_2 },
#endif
    gen_movsi_internal,
    &operand_data[5],
    2,
    0,
    7,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:490 */
  {
    "movv2hi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_3 },
#else
    { 0, 0, output_3 },
#endif
    gen_movv2hi_internal,
    &operand_data[7],
    2,
    0,
    7,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:490 */
  {
    "movv4qi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_4 },
#else
    { 0, 0, output_4 },
#endif
    gen_movv4qi_internal,
    &operand_data[9],
    2,
    0,
    7,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:549 */
  {
    "mov_symbol_lo",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov\t%0, lo(%1)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_mov_symbol_lo,
    &operand_data[11],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:558 */
  {
    "add_symbol_hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orh\t%0, hi(%1)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_add_symbol_hi,
    &operand_data[11],
    2,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:574 */
  {
    "pic_load_addr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lddpc\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_pic_load_addr,
    &operand_data[13],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:583 */
  {
    "pic_compute_got_from_pc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_8 },
#else
    { 0, 0, output_8 },
#endif
    gen_pic_compute_got_from_pc,
    &operand_data[15],
    2,
    1,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:613 */
  {
    "*movdi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_9 },
#else
    { 0, 0, output_9 },
#endif
    0,
    &operand_data[17],
    2,
    0,
    7,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:695 */
  {
    "*movti_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_10 },
#else
    { 0, 0, output_10 },
#endif
    0,
    &operand_data[19],
    2,
    0,
    6,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:803 */
  {
    "*movsf_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_11 },
#else
    { 0, 0, output_11 },
#endif
    0,
    &operand_data[21],
    2,
    0,
    5,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:870 */
  {
    "*movdf_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_12 },
#else
    { 0, 0, output_12 },
#endif
    0,
    &operand_data[23],
    2,
    0,
    5,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:917 */
  {
    "ldsf_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ld.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_ldsf_predicable,
    &operand_data[25],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:917 */
  {
    "ldsi_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ld.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_ldsi_predicable,
    &operand_data[27],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:917 */
  {
    "ldhi_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ld.sh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_ldhi_predicable,
    &operand_data[29],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:917 */
  {
    "ldqi_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ld.ub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_ldqi_predicable,
    &operand_data[31],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:929 */
  {
    "stsf_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "st.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_stsf_predicable,
    &operand_data[33],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:929 */
  {
    "stsi_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "st.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_stsi_predicable,
    &operand_data[35],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:929 */
  {
    "sthi_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "st.h%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_sthi_predicable,
    &operand_data[37],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:929 */
  {
    "stqi_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "st.b%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_stqi_predicable,
    &operand_data[39],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:940 */
  {
    "movsf_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_movsf_predicable,
    &operand_data[41],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:940 */
  {
    "movsi_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_movsi_predicable,
    &operand_data[43],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:940 */
  {
    "movhi_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_movhi_predicable,
    &operand_data[45],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:940 */
  {
    "movqi_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_movqi_predicable,
    &operand_data[47],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:978 */
  {
    "insv",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bfins\t%0, %3, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_insv,
    &operand_data[49],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1015 */
  {
    "extv_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bfexts\t%0, %1, %3, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_extv_internal,
    &operand_data[53],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1027 */
  {
    "extzv_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bfextu\t%0, %1, %3, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_extzv_internal,
    &operand_data[53],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1080 */
  {
    "pushm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_28 },
#else
    { 0, 0, output_28 },
#endif
    gen_pushm,
    &operand_data[57],
    1,
    0,
    0,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1096 */
  {
    "stm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_29 },
#else
    { 0, 0, output_29 },
#endif
    gen_stm,
    &operand_data[58],
    3,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1118 */
  {
    "popm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_30 },
#else
    { 0, 0, output_30 },
#endif
    gen_popm,
    &operand_data[57],
    1,
    0,
    0,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1139 */
  {
    "addsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_31 },
#else
    { 0, output_31, 0 },
#endif
    gen_addsi3,
    &operand_data[61],
    3,
    0,
    5,
    2
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1139 */
  {
    "addhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_32 },
#else
    { 0, output_32, 0 },
#endif
    gen_addhi3,
    &operand_data[64],
    3,
    0,
    5,
    2
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1139 */
  {
    "addqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_33 },
#else
    { 0, output_33, 0 },
#endif
    gen_addqi3,
    &operand_data[67],
    3,
    0,
    5,
    2
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1154 */
  {
    "addsi3_lsl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add     %0, %2, %1 << %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_addsi3_lsl,
    &operand_data[70],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1154 */
  {
    "addhi3_lsl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add     %0, %2, %1 << %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_addhi3_lsl,
    &operand_data[74],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1154 */
  {
    "addqi3_lsl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add     %0, %2, %1 << %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_addqi3_lsl,
    &operand_data[78],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1164 */
  {
    "addsi3_lsl2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add     %0, %1, %2 << %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_addsi3_lsl2,
    &operand_data[70],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1164 */
  {
    "addhi3_lsl2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add     %0, %1, %2 << %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_addhi3_lsl2,
    &operand_data[74],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1164 */
  {
    "addqi3_lsl2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add     %0, %1, %2 << %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_addqi3_lsl2,
    &operand_data[78],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1175 */
  {
    "addsi3_mul",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add     %0, %2, %1 << %p3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_addsi3_mul,
    &operand_data[82],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1175 */
  {
    "addhi3_mul",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add     %0, %2, %1 << %p3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_addhi3_mul,
    &operand_data[86],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1175 */
  {
    "addqi3_mul",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add     %0, %2, %1 << %p3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_addqi3_mul,
    &operand_data[90],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1186 */
  {
    "addsi3_mul2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add     %0, %1, %2 << %p3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_addsi3_mul2,
    &operand_data[82],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1186 */
  {
    "addhi3_mul2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add     %0, %1, %2 << %p3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_addhi3_mul2,
    &operand_data[86],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1186 */
  {
    "addqi3_mul2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add     %0, %1, %2 << %p3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_addqi3_mul2,
    &operand_data[90],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1228 */
  {
    "adddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_46 },
#else
    { 0, output_46, 0 },
#endif
    gen_adddi3,
    &operand_data[94],
    3,
    0,
    2,
    2
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1241 */
  {
    "addsi_imm_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%?\t%0, -%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_addsi_imm_predicable,
    &operand_data[97],
    2,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1241 */
  {
    "addhi_imm_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%?\t%0, -%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_addhi_imm_predicable,
    &operand_data[99],
    2,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1241 */
  {
    "addqi_imm_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%?\t%0, -%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_addqi_imm_predicable,
    &operand_data[101],
    2,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1258 */
  {
    "subsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_50 },
#else
    { 0, output_50, 0 },
#endif
    gen_subsi3,
    &operand_data[103],
    3,
    0,
    7,
    2
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1258 */
  {
    "subhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_51 },
#else
    { 0, output_51, 0 },
#endif
    gen_subhi3,
    &operand_data[106],
    3,
    0,
    7,
    2
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1258 */
  {
    "subqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_52 },
#else
    { 0, output_52, 0 },
#endif
    gen_subqi3,
    &operand_data[109],
    3,
    0,
    7,
    2
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1274 */
  {
    "*subsi3_mul",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_53 },
#else
    { 0, output_53, 0 },
#endif
    0,
    &operand_data[112],
    4,
    0,
    3,
    2
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1274 */
  {
    "*subhi3_mul",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_54 },
#else
    { 0, output_54, 0 },
#endif
    0,
    &operand_data[116],
    4,
    0,
    3,
    2
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1274 */
  {
    "*subqi3_mul",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_55 },
#else
    { 0, output_55, 0 },
#endif
    0,
    &operand_data[120],
    4,
    0,
    3,
    2
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1288 */
  {
    "*subsi3_lsl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub     %0, %1, %2 << %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[70],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1288 */
  {
    "*subhi3_lsl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub     %0, %1, %2 << %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[124],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1288 */
  {
    "*subqi3_lsl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub     %0, %1, %2 << %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[128],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1299 */
  {
    "subdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_59 },
#else
    { 0, output_59, 0 },
#endif
    gen_subdi3,
    &operand_data[94],
    3,
    0,
    2,
    2
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1312 */
  {
    "subsi_imm_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_subsi_imm_predicable,
    &operand_data[132],
    2,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1312 */
  {
    "subhi_imm_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_subhi_imm_predicable,
    &operand_data[134],
    2,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1312 */
  {
    "subqi_imm_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_subqi_imm_predicable,
    &operand_data[136],
    2,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1322 */
  {
    "rsubsi_imm_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_rsubsi_imm_predicable,
    &operand_data[132],
    2,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1322 */
  {
    "rsubhi_imm_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_rsubhi_imm_predicable,
    &operand_data[134],
    2,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1322 */
  {
    "rsubqi_imm_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_rsubqi_imm_predicable,
    &operand_data[136],
    2,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1339 */
  {
    "mulqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_66 },
#else
    { 0, 0, output_66 },
#endif
    gen_mulqi3,
    &operand_data[138],
    3,
    0,
    3,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1360 */
  {
    "mulsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_67 },
#else
    { 0, 0, output_67 },
#endif
    gen_mulsi3,
    &operand_data[141],
    3,
    0,
    3,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1382 */
  {
    "mulhisi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulhh.w %0, %1:b, %2:b",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_mulhisi3,
    &operand_data[144],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1417 */
  {
    "mulnhisi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulnhh.w %0, %1:b, %2:b",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_mulnhisi3,
    &operand_data[147],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1428 */
  {
    "machisi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "machh.w %0, %1:b, %2:b",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_machisi3,
    &operand_data[150],
    3,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1442 */
  {
    "mulsidi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "muls.d  %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_mulsidi3,
    &operand_data[153],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1453 */
  {
    "umulsidi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulu.d  %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_umulsidi3,
    &operand_data[153],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1464 */
  {
    "*mulaccsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mac     %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[156],
    3,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1475 */
  {
    "mulaccsidi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "macs.d  %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_mulaccsidi3,
    &operand_data[159],
    3,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1487 */
  {
    "umulaccsidi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "macu.d  %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_umulaccsidi3,
    &operand_data[159],
    3,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1527 */
  {
    "mulsathh_h",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulsathh.h\t%0, %1:b, %2:b",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_mulsathh_h,
    &operand_data[162],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1538 */
  {
    "mulsatrndhh_h",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulsatrndhh.h\t%0, %1:b, %2:b",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_mulsatrndhh_h,
    &operand_data[162],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1551 */
  {
    "mulsathh_w",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulsathh.w\t%0, %1:b, %2:b",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_mulsathh_w,
    &operand_data[144],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1562 */
  {
    "mulsatwh_w",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulsatwh.w\t%0, %1, %2:b",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_mulsatwh_w,
    &operand_data[165],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1573 */
  {
    "mulsatrndwh_w",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulsatrndwh.w\t%0, %1, %2:b",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_mulsatrndwh_w,
    &operand_data[165],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1585 */
  {
    "macsathh_w",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "macsathh.w\t%0, %1:b, %2:b",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_macsathh_w,
    &operand_data[150],
    3,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1598 */
  {
    "mulwh_d",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulwh.d\t%0, %1, %2:b",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_mulwh_d,
    &operand_data[168],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1610 */
  {
    "mulnwh_d",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulnwh.d\t%0, %1, %2:b",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_mulnwh_d,
    &operand_data[168],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1621 */
  {
    "macwh_d",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "macwh.d\t%0, %1, %2:b",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_macwh_d,
    &operand_data[171],
    3,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1633 */
  {
    "machh_d",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "machh.d\t%0, %1:b, %2:b",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_machh_d,
    &operand_data[174],
    3,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1644 */
  {
    "satadd_w",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "satadd.w\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_satadd_w,
    &operand_data[70],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1654 */
  {
    "satsub_w",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "satsub.w\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_satsub_w,
    &operand_data[70],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1664 */
  {
    "satadd_h",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "satadd.h\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_satadd_h,
    &operand_data[74],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1674 */
  {
    "satsub_h",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "satsub.h\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_satsub_h,
    &operand_data[74],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1691 */
  {
    "sminsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "min     %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_sminsi3,
    &operand_data[70],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1706 */
  {
    "smaxsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "max     %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_smaxsi3,
    &operand_data[70],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1746 */
  {
    "andsi_lshift",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_92 },
#else
    { 0, 0, output_92 },
#endif
    gen_andsi_lshift,
    &operand_data[177],
    5,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1746 */
  {
    "iorsi_lshift",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_93 },
#else
    { 0, 0, output_93 },
#endif
    gen_iorsi_lshift,
    &operand_data[177],
    5,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1746 */
  {
    "xorsi_lshift",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_94 },
#else
    { 0, 0, output_94 },
#endif
    gen_xorsi_lshift,
    &operand_data[177],
    5,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1847 */
  {
    "andnsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andn    %0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_andnsi,
    &operand_data[182],
    2,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1858 */
  {
    "andsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_96 },
#else
    { 0, 0, output_96 },
#endif
    gen_andsi3,
    &operand_data[184],
    3,
    0,
    4,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1911 */
  {
    "anddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_anddi3,
    &operand_data[187],
    3,
    0,
    2,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1927 */
  {
    "iorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_98 },
#else
    { 0, 0, output_98 },
#endif
    gen_iorsi3,
    &operand_data[190],
    3,
    0,
    3,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1961 */
  {
    "iordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_iordi3,
    &operand_data[187],
    3,
    0,
    2,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1977 */
  {
    "xorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_100 },
#else
    { 0, 0, output_100 },
#endif
    gen_xorsi3,
    &operand_data[193],
    3,
    0,
    3,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2004 */
  {
    "xordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_xordi3,
    &operand_data[187],
    3,
    0,
    2,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "andsi_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_andsi_predicable,
    &operand_data[196],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "orsi_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_orsi_predicable,
    &operand_data[196],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "eorsi_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "eor%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_eorsi_predicable,
    &operand_data[196],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "addsi_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_addsi_predicable,
    &operand_data[196],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "subsi_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_subsi_predicable,
    &operand_data[70],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "andhi_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_andhi_predicable,
    &operand_data[162],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "orhi_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_orhi_predicable,
    &operand_data[162],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "eorhi_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "eor%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_eorhi_predicable,
    &operand_data[162],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "addhi_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_addhi_predicable,
    &operand_data[162],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "subhi_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_subhi_predicable,
    &operand_data[74],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "andqi_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_andqi_predicable,
    &operand_data[199],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "orqi_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_orqi_predicable,
    &operand_data[199],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "eorqi_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "eor%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_eorqi_predicable,
    &operand_data[199],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "addqi_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_addqi_predicable,
    &operand_data[199],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "subqi_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_subqi_predicable,
    &operand_data[78],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "andsi_imm_clobber_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_117 },
#else
    { 0, 0, output_117 },
#endif
    gen_andsi_imm_clobber_predicable,
    &operand_data[202],
    4,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "orsi_imm_clobber_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_118 },
#else
    { 0, 0, output_118 },
#endif
    gen_orsi_imm_clobber_predicable,
    &operand_data[202],
    4,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "eorsi_imm_clobber_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_119 },
#else
    { 0, 0, output_119 },
#endif
    gen_eorsi_imm_clobber_predicable,
    &operand_data[202],
    4,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "addsi_imm_clobber_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_120 },
#else
    { 0, 0, output_120 },
#endif
    gen_addsi_imm_clobber_predicable,
    &operand_data[202],
    4,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "subsi_imm_clobber_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_121 },
#else
    { 0, 0, output_121 },
#endif
    gen_subsi_imm_clobber_predicable,
    &operand_data[206],
    4,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "andhi_imm_clobber_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_122 },
#else
    { 0, 0, output_122 },
#endif
    gen_andhi_imm_clobber_predicable,
    &operand_data[210],
    4,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "orhi_imm_clobber_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_123 },
#else
    { 0, 0, output_123 },
#endif
    gen_orhi_imm_clobber_predicable,
    &operand_data[210],
    4,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "eorhi_imm_clobber_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_124 },
#else
    { 0, 0, output_124 },
#endif
    gen_eorhi_imm_clobber_predicable,
    &operand_data[210],
    4,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "addhi_imm_clobber_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_125 },
#else
    { 0, 0, output_125 },
#endif
    gen_addhi_imm_clobber_predicable,
    &operand_data[210],
    4,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "subhi_imm_clobber_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_126 },
#else
    { 0, 0, output_126 },
#endif
    gen_subhi_imm_clobber_predicable,
    &operand_data[214],
    4,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "andqi_imm_clobber_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_127 },
#else
    { 0, 0, output_127 },
#endif
    gen_andqi_imm_clobber_predicable,
    &operand_data[218],
    4,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "orqi_imm_clobber_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_128 },
#else
    { 0, 0, output_128 },
#endif
    gen_orqi_imm_clobber_predicable,
    &operand_data[218],
    4,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "eorqi_imm_clobber_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_129 },
#else
    { 0, 0, output_129 },
#endif
    gen_eorqi_imm_clobber_predicable,
    &operand_data[218],
    4,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "addqi_imm_clobber_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_130 },
#else
    { 0, 0, output_130 },
#endif
    gen_addqi_imm_clobber_predicable,
    &operand_data[218],
    4,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "subqi_imm_clobber_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_131 },
#else
    { 0, 0, output_131 },
#endif
    gen_subqi_imm_clobber_predicable,
    &operand_data[222],
    4,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2082 */
  {
    "zero_extendhisi_clobber_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_132 },
#else
    { 0, 0, output_132 },
#endif
    gen_zero_extendhisi_clobber_predicable,
    &operand_data[226],
    3,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2114 */
  {
    "zero_extendqisi_clobber_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_133 },
#else
    { 0, 0, output_133 },
#endif
    gen_zero_extendqisi_clobber_predicable,
    &operand_data[229],
    3,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2146 */
  {
    "zero_extendqihi_clobber_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_134 },
#else
    { 0, 0, output_134 },
#endif
    gen_zero_extendqihi_clobber_predicable,
    &operand_data[232],
    3,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2209 */
  {
    "divmodsi4_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "divs    %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_divmodsi4_internal,
    &operand_data[235],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2250 */
  {
    "udivmodsi4_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "divu    %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_udivmodsi4_internal,
    &operand_data[235],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2267 */
  {
    "ashlsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_137 },
#else
    { 0, output_137, 0 },
#endif
    gen_ashlsi3,
    &operand_data[238],
    3,
    0,
    3,
    2
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2285 */
  {
    "ashrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_138 },
#else
    { 0, output_138, 0 },
#endif
    gen_ashrsi3,
    &operand_data[238],
    3,
    0,
    3,
    2
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2303 */
  {
    "lshrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_139 },
#else
    { 0, output_139, 0 },
#endif
    gen_lshrsi3,
    &operand_data[238],
    3,
    0,
    3,
    2
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2321 */
  {
    "negsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_140 },
#else
    { 0, output_140, 0 },
#endif
    gen_negsi2,
    &operand_data[241],
    2,
    0,
    2,
    2
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2331 */
  {
    "negsi2_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsub%?\t%0, 0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_negsi2_predicable,
    &operand_data[15],
    1,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2345 */
  {
    "abssi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "abs\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_abssi2,
    &operand_data[243],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2360 */
  {
    "one_cmplsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_143 },
#else
    { 0, output_143, 0 },
#endif
    gen_one_cmplsi2,
    &operand_data[245],
    2,
    0,
    2,
    2
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2371 */
  {
    "one_cmplsi2_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsub%?\t%0, -1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_one_cmplsi2_predicable,
    &operand_data[15],
    1,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2386 */
  {
    "bldsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bld\t%0, %p1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_bldsi,
    &operand_data[247],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2415 */
  {
    "cmpdi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_146 },
#else
    { 0, 0, output_146 },
#endif
    gen_cmpdi_internal,
    &operand_data[249],
    2,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2415 */
  {
    "cmpsi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_147 },
#else
    { 0, 0, output_147 },
#endif
    gen_cmpsi_internal,
    &operand_data[251],
    2,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2415 */
  {
    "cmphi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_148 },
#else
    { 0, 0, output_148 },
#endif
    gen_cmphi_internal,
    &operand_data[75],
    2,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2415 */
  {
    "cmpqi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_149 },
#else
    { 0, 0, output_149 },
#endif
    gen_cmpqi_internal,
    &operand_data[79],
    2,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2447 */
  {
    "tstsi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_150 },
#else
    { 0, 0, output_150 },
#endif
    gen_tstsi_internal,
    &operand_data[36],
    1,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2471 */
  {
    "tstdi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_151 },
#else
    { 0, 0, output_151 },
#endif
    gen_tstdi_internal,
    &operand_data[249],
    1,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2491 */
  {
    "truncdisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "truncdisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_truncdisi2,
    &operand_data[253],
    2,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2504 */
  {
    "extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_153 },
#else
    { 0, 0, output_153 },
#endif
    gen_extendhisi2,
    &operand_data[255],
    2,
    0,
    4,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2525 */
  {
    "extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_154 },
#else
    { 0, 0, output_154 },
#endif
    gen_extendqisi2,
    &operand_data[257],
    2,
    0,
    4,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2546 */
  {
    "extendqihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_155 },
#else
    { 0, 0, output_155 },
#endif
    gen_extendqihi2,
    &operand_data[259],
    2,
    0,
    4,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2574 */
  {
    "zero_extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_156 },
#else
    { 0, 0, output_156 },
#endif
    gen_zero_extendhisi2,
    &operand_data[255],
    2,
    0,
    4,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2596 */
  {
    "zero_extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_157 },
#else
    { 0, 0, output_157 },
#endif
    gen_zero_extendqisi2,
    &operand_data[261],
    2,
    0,
    4,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2617 */
  {
    "zero_extendqihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_158 },
#else
    { 0, 0, output_158 },
#endif
    gen_zero_extendqihi2,
    &operand_data[263],
    2,
    0,
    4,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2642 */
  {
    "ldsisi_predicable_se",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ld.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_ldsisi_predicable_se,
    &operand_data[27],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2642 */
  {
    "ldsihi_predicable_se",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ld.sh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_ldsihi_predicable_se,
    &operand_data[265],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2642 */
  {
    "ldsiqi_predicable_se",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ld.sb%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_ldsiqi_predicable_se,
    &operand_data[267],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2654 */
  {
    "ldsisi_predicable_ze",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ld.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_ldsisi_predicable_ze,
    &operand_data[27],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2654 */
  {
    "ldsihi_predicable_ze",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ld.uh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_ldsihi_predicable_ze,
    &operand_data[265],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2654 */
  {
    "ldsiqi_predicable_ze",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ld.ub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_ldsiqi_predicable_ze,
    &operand_data[267],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2666 */
  {
    "ldhi_predicable_ze",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ld.ub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_ldhi_predicable_ze,
    &operand_data[269],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2678 */
  {
    "ldhi_predicable_se",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ld.sb%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_ldhi_predicable_se,
    &operand_data[269],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2699 */
  {
    "seq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sreq\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_seq,
    &operand_data[11],
    1,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2699 */
  {
    "sne",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "srne\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_sne,
    &operand_data[11],
    1,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2699 */
  {
    "sgt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "srgt\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_sgt,
    &operand_data[11],
    1,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2699 */
  {
    "sge",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "srge\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_sge,
    &operand_data[11],
    1,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2699 */
  {
    "slt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "srlt\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_slt,
    &operand_data[11],
    1,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2699 */
  {
    "sle",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "srle\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_sle,
    &operand_data[11],
    1,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2699 */
  {
    "sgtu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "srhi\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_sgtu,
    &operand_data[11],
    1,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2699 */
  {
    "sgeu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "srhs\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_sgeu,
    &operand_data[11],
    1,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2699 */
  {
    "sltu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "srlo\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_sltu,
    &operand_data[11],
    1,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2699 */
  {
    "sleu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "srls\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_sleu,
    &operand_data[11],
    1,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2708 */
  {
    "smi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "srmi\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_smi,
    &operand_data[11],
    1,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2717 */
  {
    "spl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "srpl\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_spl,
    &operand_data[11],
    1,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2733 */
  {
    "bmi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "brmi    %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_bmi,
    &operand_data[16],
    1,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2748 */
  {
    "*bmi-reverse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "brpl    %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[16],
    1,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2764 */
  {
    "bpl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "brpl    %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_bpl,
    &operand_data[16],
    1,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2779 */
  {
    "*bpl-reverse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "brmi    %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[16],
    1,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2795 */
  {
    "beq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "breq    %0 ",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_beq,
    &operand_data[16],
    1,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2795 */
  {
    "bne",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "brne    %0 ",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_bne,
    &operand_data[16],
    1,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2795 */
  {
    "bgt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "brgt    %0 ",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_bgt,
    &operand_data[16],
    1,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2795 */
  {
    "bge",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "brge    %0 ",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_bge,
    &operand_data[16],
    1,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2795 */
  {
    "blt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "brlt    %0 ",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_blt,
    &operand_data[16],
    1,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2795 */
  {
    "ble",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "brle    %0 ",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_ble,
    &operand_data[16],
    1,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2795 */
  {
    "bgtu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "brhi    %0 ",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_bgtu,
    &operand_data[16],
    1,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2795 */
  {
    "bgeu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "brhs    %0 ",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_bgeu,
    &operand_data[16],
    1,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2795 */
  {
    "bltu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "brlo    %0 ",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_bltu,
    &operand_data[16],
    1,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2795 */
  {
    "bleu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "brls    %0 ",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_bleu,
    &operand_data[16],
    1,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2812 */
  {
    "*beq-reverse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "brne    %0 ",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[16],
    1,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2812 */
  {
    "*bne-reverse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "breq    %0 ",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[16],
    1,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2812 */
  {
    "*bgt-reverse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "brle    %0 ",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[16],
    1,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2812 */
  {
    "*bge-reverse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "brlt    %0 ",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[16],
    1,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2812 */
  {
    "*blt-reverse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "brge    %0 ",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[16],
    1,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2812 */
  {
    "*ble-reverse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "brgt    %0 ",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[16],
    1,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2812 */
  {
    "*bgtu-reverse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "brls    %0 ",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[16],
    1,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2812 */
  {
    "*bgeu-reverse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "brlo    %0 ",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[16],
    1,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2812 */
  {
    "*bltu-reverse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "brhs    %0 ",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[16],
    1,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2812 */
  {
    "*bleu-reverse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "brhi    %0 ",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[16],
    1,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2868 */
  {
    "addsicc_cmpdi_reg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_203 },
#else
    { 0, 0, output_203 },
#endif
    gen_addsicc_cmpdi_reg,
    &operand_data[271],
    6,
    1,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2868 */
  {
    "addhicc_cmpdi_reg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_204 },
#else
    { 0, 0, output_204 },
#endif
    gen_addhicc_cmpdi_reg,
    &operand_data[277],
    6,
    1,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2868 */
  {
    "addqicc_cmpdi_reg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_205 },
#else
    { 0, 0, output_205 },
#endif
    gen_addqicc_cmpdi_reg,
    &operand_data[283],
    6,
    1,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2868 */
  {
    "addsicc_cmpsi_reg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_206 },
#else
    { 0, 0, output_206 },
#endif
    gen_addsicc_cmpsi_reg,
    &operand_data[289],
    6,
    1,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2868 */
  {
    "addhicc_cmpsi_reg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_207 },
#else
    { 0, 0, output_207 },
#endif
    gen_addhicc_cmpsi_reg,
    &operand_data[295],
    6,
    1,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2868 */
  {
    "addqicc_cmpsi_reg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_208 },
#else
    { 0, 0, output_208 },
#endif
    gen_addqicc_cmpsi_reg,
    &operand_data[301],
    6,
    1,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2868 */
  {
    "addsicc_cmphi_reg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_209 },
#else
    { 0, 0, output_209 },
#endif
    gen_addsicc_cmphi_reg,
    &operand_data[307],
    6,
    1,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2868 */
  {
    "addhicc_cmphi_reg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_210 },
#else
    { 0, 0, output_210 },
#endif
    gen_addhicc_cmphi_reg,
    &operand_data[313],
    6,
    1,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2868 */
  {
    "addqicc_cmphi_reg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_211 },
#else
    { 0, 0, output_211 },
#endif
    gen_addqicc_cmphi_reg,
    &operand_data[319],
    6,
    1,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2868 */
  {
    "addsicc_cmpqi_reg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_212 },
#else
    { 0, 0, output_212 },
#endif
    gen_addsicc_cmpqi_reg,
    &operand_data[325],
    6,
    1,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2868 */
  {
    "addhicc_cmpqi_reg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_213 },
#else
    { 0, 0, output_213 },
#endif
    gen_addhicc_cmpqi_reg,
    &operand_data[331],
    6,
    1,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2868 */
  {
    "addqicc_cmpqi_reg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_214 },
#else
    { 0, 0, output_214 },
#endif
    gen_addqicc_cmpqi_reg,
    &operand_data[337],
    6,
    1,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2885 */
  {
    "addsicc_cmpdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_215 },
#else
    { 0, 0, output_215 },
#endif
    gen_addsicc_cmpdi,
    &operand_data[343],
    6,
    1,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2885 */
  {
    "addhicc_cmpdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_216 },
#else
    { 0, 0, output_216 },
#endif
    gen_addhicc_cmpdi,
    &operand_data[349],
    6,
    1,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2885 */
  {
    "addqicc_cmpdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_217 },
#else
    { 0, 0, output_217 },
#endif
    gen_addqicc_cmpdi,
    &operand_data[355],
    6,
    1,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2885 */
  {
    "addsicc_cmpsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_218 },
#else
    { 0, 0, output_218 },
#endif
    gen_addsicc_cmpsi,
    &operand_data[361],
    6,
    1,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2885 */
  {
    "addhicc_cmpsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_219 },
#else
    { 0, 0, output_219 },
#endif
    gen_addhicc_cmpsi,
    &operand_data[367],
    6,
    1,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2885 */
  {
    "addqicc_cmpsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_220 },
#else
    { 0, 0, output_220 },
#endif
    gen_addqicc_cmpsi,
    &operand_data[373],
    6,
    1,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2885 */
  {
    "addsicc_cmphi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_221 },
#else
    { 0, 0, output_221 },
#endif
    gen_addsicc_cmphi,
    &operand_data[379],
    6,
    1,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2885 */
  {
    "addhicc_cmphi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_222 },
#else
    { 0, 0, output_222 },
#endif
    gen_addhicc_cmphi,
    &operand_data[385],
    6,
    1,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2885 */
  {
    "addqicc_cmphi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_223 },
#else
    { 0, 0, output_223 },
#endif
    gen_addqicc_cmphi,
    &operand_data[391],
    6,
    1,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2885 */
  {
    "addsicc_cmpqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_224 },
#else
    { 0, 0, output_224 },
#endif
    gen_addsicc_cmpqi,
    &operand_data[397],
    6,
    1,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2885 */
  {
    "addhicc_cmpqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_225 },
#else
    { 0, 0, output_225 },
#endif
    gen_addhicc_cmpqi,
    &operand_data[403],
    6,
    1,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2885 */
  {
    "addqicc_cmpqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_226 },
#else
    { 0, 0, output_226 },
#endif
    gen_addqicc_cmpqi,
    &operand_data[409],
    6,
    1,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2925 */
  {
    "movsfcc_cmpdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_227 },
#else
    { 0, 0, output_227 },
#endif
    gen_movsfcc_cmpdi,
    &operand_data[415],
    6,
    0,
    3,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2925 */
  {
    "movsfcc_cmpsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_228 },
#else
    { 0, 0, output_228 },
#endif
    gen_movsfcc_cmpsi,
    &operand_data[421],
    6,
    0,
    3,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2925 */
  {
    "movsfcc_cmphi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_229 },
#else
    { 0, 0, output_229 },
#endif
    gen_movsfcc_cmphi,
    &operand_data[427],
    6,
    0,
    3,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2925 */
  {
    "movsfcc_cmpqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_230 },
#else
    { 0, 0, output_230 },
#endif
    gen_movsfcc_cmpqi,
    &operand_data[433],
    6,
    0,
    3,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2925 */
  {
    "movsicc_cmpdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_231 },
#else
    { 0, 0, output_231 },
#endif
    gen_movsicc_cmpdi,
    &operand_data[439],
    6,
    0,
    3,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2925 */
  {
    "movsicc_cmpsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_232 },
#else
    { 0, 0, output_232 },
#endif
    gen_movsicc_cmpsi,
    &operand_data[445],
    6,
    0,
    3,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2925 */
  {
    "movsicc_cmphi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_233 },
#else
    { 0, 0, output_233 },
#endif
    gen_movsicc_cmphi,
    &operand_data[451],
    6,
    0,
    3,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2925 */
  {
    "movsicc_cmpqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_234 },
#else
    { 0, 0, output_234 },
#endif
    gen_movsicc_cmpqi,
    &operand_data[457],
    6,
    0,
    3,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2925 */
  {
    "movhicc_cmpdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_235 },
#else
    { 0, 0, output_235 },
#endif
    gen_movhicc_cmpdi,
    &operand_data[463],
    6,
    0,
    3,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2925 */
  {
    "movhicc_cmpsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_236 },
#else
    { 0, 0, output_236 },
#endif
    gen_movhicc_cmpsi,
    &operand_data[469],
    6,
    0,
    3,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2925 */
  {
    "movhicc_cmphi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_237 },
#else
    { 0, 0, output_237 },
#endif
    gen_movhicc_cmphi,
    &operand_data[475],
    6,
    0,
    3,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2925 */
  {
    "movhicc_cmpqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_238 },
#else
    { 0, 0, output_238 },
#endif
    gen_movhicc_cmpqi,
    &operand_data[481],
    6,
    0,
    3,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2925 */
  {
    "movqicc_cmpdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_239 },
#else
    { 0, 0, output_239 },
#endif
    gen_movqicc_cmpdi,
    &operand_data[487],
    6,
    0,
    3,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2925 */
  {
    "movqicc_cmpsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_240 },
#else
    { 0, 0, output_240 },
#endif
    gen_movqicc_cmpsi,
    &operand_data[493],
    6,
    0,
    3,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2925 */
  {
    "movqicc_cmphi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_241 },
#else
    { 0, 0, output_241 },
#endif
    gen_movqicc_cmphi,
    &operand_data[499],
    6,
    0,
    3,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2925 */
  {
    "movqicc_cmpqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_242 },
#else
    { 0, 0, output_242 },
#endif
    gen_movqicc_cmpqi,
    &operand_data[505],
    6,
    0,
    3,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2959 */
  {
    "jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_243 },
#else
    { 0, 0, output_243 },
#endif
    gen_jump,
    &operand_data[16],
    1,
    0,
    0,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2984 */
  {
    "call_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_244 },
#else
    { 0, 0, output_244 },
#endif
    gen_call_internal,
    &operand_data[511],
    2,
    0,
    4,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3110 */
  {
    "call_value_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_245 },
#else
    { 0, 0, output_245 },
#endif
    gen_call_value_internal,
    &operand_data[513],
    3,
    0,
    4,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3176 */
  {
    "return",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_246 },
#else
    { 0, 0, output_246 },
#endif
    gen_return,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3188 */
  {
    "return_cond",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ret%0\tr12",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_return_cond,
    &operand_data[516],
    1,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3197 */
  {
    "return_cond_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ret%?\tr12",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_return_cond_predicable,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3205 */
  {
    "return_imm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_249 },
#else
    { 0, 0, output_249 },
#endif
    gen_return_imm,
    &operand_data[517],
    1,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3219 */
  {
    "return_imm_cond",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ret%1\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_return_imm_cond,
    &operand_data[517],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3232 */
  {
    "return_imm_predicable",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ret%?\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_return_imm_predicable,
    &operand_data[517],
    1,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3242 */
  {
    "return_sireg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ret%?\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_return_sireg,
    &operand_data[36],
    1,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3242 */
  {
    "return_v2hireg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ret%?\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_return_v2hireg,
    &operand_data[519],
    1,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3242 */
  {
    "return_v4qireg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ret%?\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_return_v4qireg,
    &operand_data[520],
    1,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3251 */
  {
    "return_sireg_cond",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ret%1\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_return_sireg_cond,
    &operand_data[521],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3251 */
  {
    "return_v2hireg_cond",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ret%1\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_return_v2hireg_cond,
    &operand_data[523],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3251 */
  {
    "return_v4qireg_cond",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ret%1\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_return_v4qireg_cond,
    &operand_data[525],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3268 */
  {
    "nop",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nop",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_nop,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3336 */
  {
    "indirect_jump_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_259 },
#else
    { 0, 0, output_259 },
#endif
    gen_indirect_jump_internal,
    &operand_data[527],
    1,
    0,
    3,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3367 */
  {
    "tablejump_add",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\tpc, %0, %1 << %p2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_tablejump_add,
    &operand_data[528],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3380 */
  {
    "tablejump_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ld.w\tpc, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_tablejump_insn,
    &operand_data[532],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3444 */
  {
    "prefetch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_262 },
#else
    { 0, 0, output_262 },
#endif
    gen_prefetch,
    &operand_data[534],
    3,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3497 */
  {
    "eh_return",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_eh_return,
    &operand_data[537],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3516 */
  {
    "ffssi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov    %0, %1\n\
   brev   %0\n\
   clz    %0, %0\n\
   sub    %0, -1\n\
   cp     %0, 33\n\
   moveq  %0, 0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_ffssi2,
    &operand_data[53],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3535 */
  {
    "*swap_h",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "swap.h    %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[11],
    1,
    2,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3544 */
  {
    "bswap_16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_266 },
#else
    { 0, 0, output_266 },
#endif
    gen_bswap_16,
    &operand_data[539],
    2,
    1,
    3,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3586 */
  {
    "bswap_32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_267 },
#else
    { 0, 0, output_267 },
#endif
    gen_bswap_32,
    &operand_data[541],
    2,
    3,
    3,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3646 */
  {
    "blockage",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_blockage,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3656 */
  {
    "clzsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "clz    %0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_clzsi2,
    &operand_data[53],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3668 */
  {
    "ctzsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_270 },
#else
    { 0, output_270, 0 },
#endif
    gen_ctzsi2,
    &operand_data[241],
    2,
    0,
    2,
    2
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3682 */
  {
    "cache",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cache    %0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_cache,
    &operand_data[543],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3690 */
  {
    "sync",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sync    %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_sync,
    &operand_data[545],
    1,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3700 */
  {
    "tlbr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tlbr",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_tlbr,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3707 */
  {
    "tlbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tlbw",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_tlbw,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3714 */
  {
    "tlbs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tlbs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_tlbs,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3724 */
  {
    "breakpoint",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "breakpoint",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_breakpoint,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3735 */
  {
    "mtsr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mtsr\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_mtsr,
    &operand_data[546],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3743 */
  {
    "mfsr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mfsr\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_mfsr,
    &operand_data[548],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3754 */
  {
    "mtdr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mtdr\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_mtdr,
    &operand_data[546],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3762 */
  {
    "mfdr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mfdr\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_mfdr,
    &operand_data[548],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3773 */
  {
    "musfr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "musfr\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_musfr,
    &operand_data[36],
    1,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3781 */
  {
    "mustr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mustr\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_mustr,
    &operand_data[11],
    1,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3789 */
  {
    "ssrf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ssrf    %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_ssrf,
    &operand_data[50],
    1,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3797 */
  {
    "csrf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "csrf    %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_csrf,
    &operand_data[50],
    1,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3808 */
  {
    "frs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "frs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_frs,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3820 */
  {
    "sats",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sats\t%0 >> %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_sats,
    &operand_data[550],
    3,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3832 */
  {
    "satu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "satu\t%0 >> %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_satu,
    &operand_data[550],
    3,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3844 */
  {
    "satrnds",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "satrnds\t%0 >> %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_satrnds,
    &operand_data[550],
    3,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3856 */
  {
    "satrndu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sats\t%0 >> %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_satrndu,
    &operand_data[550],
    3,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3870 */
  {
    "align_4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_290 },
#else
    { 0, 0, output_290 },
#endif
    gen_align_4,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3880 */
  {
    "consttable_start",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_291 },
#else
    { 0, 0, output_291 },
#endif
    gen_consttable_start,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3889 */
  {
    "consttable_end",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_292 },
#else
    { 0, 0, output_292 },
#endif
    gen_consttable_end,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3900 */
  {
    "consttable_4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_293 },
#else
    { 0, 0, output_293 },
#endif
    gen_consttable_4,
    &operand_data[16],
    1,
    0,
    0,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3925 */
  {
    "consttable_8",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_294 },
#else
    { 0, 0, output_294 },
#endif
    gen_consttable_8,
    &operand_data[16],
    1,
    0,
    0,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3950 */
  {
    "consttable_16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_295 },
#else
    { 0, 0, output_295 },
#endif
    gen_consttable_16,
    &operand_data[16],
    1,
    0,
    0,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3964 */
  {
    "cop",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cop\tcp%0, cr%1, cr%2, cr%3, %4",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_cop,
    &operand_data[553],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3975 */
  {
    "mvcrsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_297 },
#else
    { 0, output_297, 0 },
#endif
    gen_mvcrsi,
    &operand_data[558],
    3,
    0,
    3,
    2
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3988 */
  {
    "mvcrdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_298 },
#else
    { 0, output_298, 0 },
#endif
    gen_mvcrdi,
    &operand_data[561],
    3,
    0,
    3,
    2
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4001 */
  {
    "mvrcsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_299 },
#else
    { 0, 0, output_299 },
#endif
    gen_mvrcsi,
    &operand_data[562],
    3,
    0,
    3,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4022 */
  {
    "mvrcdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_300 },
#else
    { 0, 0, output_300 },
#endif
    gen_mvrcdi,
    &operand_data[565],
    3,
    0,
    3,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4067 */
  {
    "*epilogue_insns",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_301 },
#else
    { 0, 0, output_301 },
#endif
    0,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4079 */
  {
    "*epilogue_insns_ret_imm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_302 },
#else
    { 0, 0, output_302 },
#endif
    0,
    &operand_data[517],
    1,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4093 */
  {
    "sibcall_epilogue",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_303 },
#else
    { 0, 0, output_303 },
#endif
    gen_sibcall_epilogue,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4105 */
  {
    "*sibcall_epilogue_insns_ret_imm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_304 },
#else
    { 0, 0, output_304 },
#endif
    0,
    &operand_data[517],
    1,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4119 */
  {
    "ldxi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_305 },
#else
    { 0, 0, output_305 },
#endif
    gen_ldxi,
    &operand_data[177],
    4,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4571 */
  {
    "*round",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "satrnds    %0 >> %2, 31",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[568],
    3,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4819 */
  {
    "vec_setv2hi_hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bfins\t%0, %1, 16, 16",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_vec_setv2hi_hi,
    &operand_data[571],
    2,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4832 */
  {
    "vec_setv2hi_lo",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bfins\t%0, %1, 0, 16",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_vec_setv2hi_lo,
    &operand_data[573],
    2,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4856 */
  {
    "vec_extractv2hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_309 },
#else
    { 0, 0, output_309 },
#endif
    gen_vec_extractv2hi,
    &operand_data[575],
    3,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4872 */
  {
    "vec_extractv4qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_310 },
#else
    { 0, 0, output_310 },
#endif
    gen_vec_extractv4qi,
    &operand_data[578],
    3,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4897 */
  {
    "concatv2hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_311 },
#else
    { 0, output_311, 0 },
#endif
    gen_concatv2hi,
    &operand_data[581],
    3,
    0,
    3,
    2
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:6 */
  {
    "sync_compare_and_swapsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "0:\n\
   ssrf\t5\n\
   ld.w\t%0,%1\n\
   cp.w\t%0,%2\n\
   brne\t0f\n\
   stcond\t%1, %3\n\
   brne\t0b\n\
   0:\n\
  ",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_sync_compare_and_swapsi,
    &operand_data[584],
    4,
    2,
    2,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:30 */
  {
    "sync_loadsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%2:\n\
   ssrf\t5\n\
   ld.w\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_sync_loadsi,
    &operand_data[588],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:53 */
  {
    "sync_store_if_lock",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stcond\t%0, %1\n\
   brne\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_sync_store_if_lock,
    &operand_data[591],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:236 */
  {
    "sync_lock_test_and_setsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg\t%0, %p1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_sync_lock_test_and_setsi,
    &operand_data[594],
    3,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:26 */
  {
    "addv2hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "padd.h\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_addv2hi3,
    &operand_data[597],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:26 */
  {
    "addv4qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "padd.b\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_addv4qi3,
    &operand_data[600],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:39 */
  {
    "subv2hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psub.h\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_subv2hi3,
    &operand_data[597],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:39 */
  {
    "subv4qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psub.b\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_subv4qi3,
    &operand_data[600],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:49 */
  {
    "absv2hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pabs.sh\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_absv2hi2,
    &operand_data[597],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:49 */
  {
    "absv4qi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pabs.sb\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_absv4qi2,
    &operand_data[600],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:57 */
  {
    "ashlv2hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "plsl.h\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_ashlv2hi3,
    &operand_data[603],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:57 */
  {
    "ashlv4qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "plsl.b\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_ashlv4qi3,
    &operand_data[606],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:66 */
  {
    "ashrv2hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pasr.h\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_ashrv2hi3,
    &operand_data[603],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:66 */
  {
    "ashrv4qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pasr.b\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_ashrv4qi3,
    &operand_data[606],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:75 */
  {
    "lshrv2hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "plsr.h\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_lshrv2hi3,
    &operand_data[603],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:75 */
  {
    "lshrv4qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "plsr.b\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_lshrv4qi3,
    &operand_data[606],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:84 */
  {
    "smaxv2hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmax.sh\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_smaxv2hi3,
    &operand_data[597],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:94 */
  {
    "sminv2hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmin.sh\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_sminv2hi3,
    &operand_data[597],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:104 */
  {
    "umaxv4qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmax.ub\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_umaxv4qi3,
    &operand_data[600],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:114 */
  {
    "uminv4qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmin.ub\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_uminv4qi3,
    &operand_data[600],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:125 */
  {
    "addsubv2hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddsub.h\t%0, %1:b, %2:b",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_addsubv2hi,
    &operand_data[609],
    3,
    2,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:136 */
  {
    "subaddv2hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubadd.h\t%0, %1:b, %2:b",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_subaddv2hi,
    &operand_data[609],
    3,
    2,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:80 */
  {
    "*movsf_fpcp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_334 },
#else
    { 0, output_334, 0 },
#endif
    0,
    &operand_data[612],
    2,
    0,
    9,
    2
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:97 */
  {
    "*movdf_fpcp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_335 },
#else
    { 0, output_335, 0 },
#endif
    0,
    &operand_data[614],
    2,
    0,
    8,
    2
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:130 */
  {
    "mulsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmul.s\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_mulsf3,
    &operand_data[616],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:139 */
  {
    "nmulsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmul.s\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_nmulsf3,
    &operand_data[616],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:162 */
  {
    "macsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmac.s\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_macsf3,
    &operand_data[616],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:172 */
  {
    "nmacsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmac.s\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_nmacsf3,
    &operand_data[616],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:198 */
  {
    "msubacsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmsc.s\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_msubacsf3,
    &operand_data[616],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:223 */
  {
    "nmsubacsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmsc.s\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_nmsubacsf3,
    &operand_data[616],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:235 */
  {
    "addsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fadd.s\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_addsf3,
    &operand_data[616],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:244 */
  {
    "subsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsub.s\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_subsf3,
    &operand_data[616],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:254 */
  {
    "negsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fneg.s\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_negsf2,
    &operand_data[616],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:262 */
  {
    "abssf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs.s\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_abssf2,
    &operand_data[616],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:270 */
  {
    "truncdfsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcastd.s\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_truncdfsf2,
    &operand_data[620],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:279 */
  {
    "extendsfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcasts.d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_extendsfdf2,
    &operand_data[622],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:288 */
  {
    "muldf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmul.d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_muldf3,
    &operand_data[624],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:297 */
  {
    "nmuldf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmul.d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_nmuldf3,
    &operand_data[624],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:319 */
  {
    "macdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmac.d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_macdf3,
    &operand_data[624],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:329 */
  {
    "msubacdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmsc.d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_msubacdf3,
    &operand_data[624],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:354 */
  {
    "nmsubacdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmsc.d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_nmsubacdf3,
    &operand_data[624],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:364 */
  {
    "nmacdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmac.d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_nmacdf3,
    &operand_data[624],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:389 */
  {
    "adddf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fadd.d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_adddf3,
    &operand_data[624],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:398 */
  {
    "subdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsub.d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_subdf3,
    &operand_data[624],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:407 */
  {
    "negdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fneg.d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_negdf2,
    &operand_data[624],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:415 */
  {
    "absdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs.d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_absdf2,
    &operand_data[624],
    2,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:451 */
  {
    "cmpdf_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_358 },
#else
    { 0, 0, output_358 },
#endif
    gen_cmpdf_internal,
    &operand_data[625],
    2,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:493 */
  {
    "cmpsf_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_359 },
#else
    { 0, 0, output_359 },
#endif
    gen_cmpsf_internal,
    &operand_data[617],
    2,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:508 */
  {
    "fpcc_to_reg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmov.s\t%0, fsr",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_fpcc_to_reg,
    &operand_data[11],
    1,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:517 */
  {
    "reg_to_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "musfr\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    gen_reg_to_cc,
    &operand_data[36],
    1,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:527 */
  {
    "stm_fp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_362 },
#else
    { 0, 0, output_362 },
#endif
    gen_stm_fp,
    &operand_data[58],
    3,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:375 */
  {
    "movqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_movqi,
    &operand_data[628],
    2,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:411 */
  {
    "movhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_movhi,
    &operand_data[630],
    2,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:448 */
  {
    "movmisalignsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_movmisalignsi,
    &operand_data[632],
    2,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:457 */
  {
    "movsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_movsi,
    &operand_data[634],
    2,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:457 */
  {
    "movv2hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_movv2hi,
    &operand_data[636],
    2,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:457 */
  {
    "movv4qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_movv4qi,
    &operand_data[638],
    2,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:600 */
  {
    "movdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_movdi,
    &operand_data[640],
    2,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:613 */
  {
    "movdi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[640],
    2,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:668 */
  {
    "movti",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_movti,
    &operand_data[642],
    2,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:695 */
  {
    "movti+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[644],
    2,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:790 */
  {
    "movsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_movsf,
    &operand_data[646],
    2,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:858 */
  {
    "movdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_movdf,
    &operand_data[648],
    2,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:870 */
  {
    "movdf+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[648],
    2,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:956 */
  {
    "movmemsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_movmemsi,
    &operand_data[650],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:991 */
  {
    "extv",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_extv,
    &operand_data[654],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1003 */
  {
    "extzv",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_extzv,
    &operand_data[654],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1045 */
  {
    "extzv+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[658],
    5,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1060 */
  {
    "extzv+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[663],
    5,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1198 */
  {
    "extzv+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[668],
    5,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1213 */
  {
    "extzv+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[668],
    5,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1393 */
  {
    "extzv+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[672],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1503 */
  {
    "extzv+6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[679],
    5,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1724 */
  {
    "extzv+7",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[684],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1769 */
  {
    "extzv+8",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_386 },
#else
    { 0, 0, output_386 },
#endif
    0,
    &operand_data[691],
    6,
    0,
    0,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1769 */
  {
    "extzv+9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_387 },
#else
    { 0, 0, output_387 },
#endif
    0,
    &operand_data[691],
    6,
    0,
    0,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1769 */
  {
    "extzv+10",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_388 },
#else
    { 0, 0, output_388 },
#endif
    0,
    &operand_data[691],
    6,
    0,
    0,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1787 */
  {
    "extzv+11",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_389 },
#else
    { 0, 0, output_389 },
#endif
    0,
    &operand_data[691],
    6,
    0,
    0,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1787 */
  {
    "extzv+12",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_390 },
#else
    { 0, 0, output_390 },
#endif
    0,
    &operand_data[691],
    6,
    0,
    0,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1787 */
  {
    "extzv+13",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_391 },
#else
    { 0, 0, output_391 },
#endif
    0,
    &operand_data[691],
    6,
    0,
    0,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1806 */
  {
    "extzv+14",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[691],
    6,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1806 */
  {
    "extzv+15",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[691],
    6,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1806 */
  {
    "extzv+16",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[691],
    6,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1823 */
  {
    "extzv+17",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[691],
    6,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1823 */
  {
    "extzv+18",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[691],
    6,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1823 */
  {
    "extzv+19",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[691],
    6,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "divmodsi4-18",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[697],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "divmodsi4-17",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[697],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "divmodsi4-16",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[697],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "divmodsi4-15",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[697],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "divmodsi4-14",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[697],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "divmodsi4-13",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[701],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "divmodsi4-12",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[701],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "divmodsi4-11",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[701],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "divmodsi4-10",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[701],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "divmodsi4-9",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[701],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "divmodsi4-8",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[705],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "divmodsi4-7",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[705],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "divmodsi4-6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[705],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "divmodsi4-5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[705],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "divmodsi4-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[705],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2082 */
  {
    "divmodsi4-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[709],
    3,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2114 */
  {
    "divmodsi4-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[711],
    3,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2146 */
  {
    "divmodsi4-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[714],
    3,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2182 */
  {
    "divmodsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_divmodsi4,
    &operand_data[717],
    4,
    3,
    1,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2225 */
  {
    "udivmodsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_udivmodsi4,
    &operand_data[717],
    4,
    3,
    1,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2403 */
  {
    "cmpdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_cmpdi,
    &operand_data[721],
    2,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2403 */
  {
    "cmpsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_cmpsi,
    &operand_data[723],
    2,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2403 */
  {
    "cmphi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_cmphi,
    &operand_data[673],
    2,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2403 */
  {
    "cmpqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_cmpqi,
    &operand_data[705],
    2,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2437 */
  {
    "tstsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_tstsi,
    &operand_data[634],
    1,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2461 */
  {
    "tstdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_tstdi,
    &operand_data[684],
    1,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2837 */
  {
    "addsicc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_addsicc,
    &operand_data[725],
    4,
    3,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2837 */
  {
    "addhicc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_addhicc,
    &operand_data[729],
    4,
    3,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2837 */
  {
    "addqicc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_addqicc,
    &operand_data[733],
    4,
    3,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2907 */
  {
    "movsfcc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_movsfcc,
    &operand_data[737],
    4,
    2,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2907 */
  {
    "movsicc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_movsicc,
    &operand_data[741],
    4,
    2,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2907 */
  {
    "movhicc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_movhicc,
    &operand_data[745],
    4,
    2,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2907 */
  {
    "movqicc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_movqicc,
    &operand_data[749],
    4,
    2,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3011 */
  {
    "call",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_call,
    &operand_data[753],
    2,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3062 */
  {
    "call_value",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_call_value,
    &operand_data[755],
    3,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3146 */
  {
    "untyped_call",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_untyped_call,
    &operand_data[758],
    3,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3282 */
  {
    "nonlocal_goto_receiver",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_nonlocal_goto_receiver,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3301 */
  {
    "builtin_setjmp_receiver",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_builtin_setjmp_receiver,
    &operand_data[16],
    1,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3321 */
  {
    "indirect_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_indirect_jump,
    &operand_data[253],
    1,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3389 */
  {
    "casesi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_casesi,
    &operand_data[761],
    5,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3466 */
  {
    "prologue",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_prologue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3497 */
  {
    "prologue+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[766],
    2,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3544 */
  {
    "prologue+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[768],
    2,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3586 */
  {
    "epilogue-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[770],
    2,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4051 */
  {
    "epilogue",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_epilogue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4167 */
  {
    "epilogue+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[668],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4197 */
  {
    "epilogue+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[668],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4221 */
  {
    "epilogue+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[772],
    3,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4240 */
  {
    "epilogue+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[775],
    3,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4259 */
  {
    "epilogue+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[778],
    3,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4278 */
  {
    "epilogue+6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[778],
    3,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4299 */
  {
    "epilogue+7",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[780],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4313 */
  {
    "epilogue+8",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[780],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4338 */
  {
    "epilogue+9",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[654],
    3,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4351 */
  {
    "epilogue+10",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[782],
    3,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4371 */
  {
    "epilogue+11",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_453 },
#else
    { 0, 0, output_453 },
#endif
    0,
    &operand_data[785],
    5,
    0,
    0,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4402 */
  {
    "epilogue+12",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ld.w    %2, %3[%1:b << 2]",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[780],
    4,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4418 */
  {
    "epilogue+13",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[785],
    5,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4438 */
  {
    "epilogue+14",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[789],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4458 */
  {
    "epilogue+15",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[780],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4480 */
  {
    "epilogue+16",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[780],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4507 */
  {
    "vec_setv2hi-16",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[780],
    3,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4522 */
  {
    "vec_setv2hi-15",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[780],
    3,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4544 */
  {
    "vec_setv2hi-14",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addabs  %0, %3, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[793],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4555 */
  {
    "vec_setv2hi-13",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addabs  %0, %3, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[793],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4586 */
  {
    "vec_setv2hi-12",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[655],
    3,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4601 */
  {
    "vec_setv2hi-11",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "satrnds    %0 >> %2, 31",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[796],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4622 */
  {
    "vec_setv2hi-10",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mcall    %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[799],
    3,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4635 */
  {
    "vec_setv2hi-9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mcall    %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[802],
    4,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4650 */
  {
    "vec_setv2hi-8",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[799],
    3,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4663 */
  {
    "vec_setv2hi-7",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[806],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4683 */
  {
    "vec_setv2hi-6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "retal    %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[810],
    2,
    0,
    0,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4696 */
  {
    "vec_setv2hi-5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_470 },
#else
    { 0, 0, output_470 },
#endif
    0,
    &operand_data[812],
    2,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4710 */
  {
    "vec_setv2hi-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_471 },
#else
    { 0, 0, output_471 },
#endif
    0,
    &operand_data[812],
    2,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4725 */
  {
    "vec_setv2hi-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_472 },
#else
    { 0, 0, output_472 },
#endif
    0,
    &operand_data[814],
    6,
    0,
    1,
    3
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4784 */
  {
    "vec_setv2hi-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[820],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4799 */
  {
    "vec_setv2hi-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[820],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4845 */
  {
    "vec_setv2hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_vec_setv2hi,
    &operand_data[824],
    3,
    1,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:67 */
  {
    "sync_addsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_sync_addsi,
    &operand_data[827],
    2,
    9,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:67 */
  {
    "sync_subsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_sync_subsi,
    &operand_data[827],
    2,
    9,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:67 */
  {
    "sync_andsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_sync_andsi,
    &operand_data[827],
    2,
    9,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:67 */
  {
    "sync_iorsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_sync_iorsi,
    &operand_data[827],
    2,
    9,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:67 */
  {
    "sync_xorsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_sync_xorsi,
    &operand_data[827],
    2,
    9,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:112 */
  {
    "sync_old_addsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_sync_old_addsi,
    &operand_data[829],
    3,
    8,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:112 */
  {
    "sync_old_subsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_sync_old_subsi,
    &operand_data[829],
    3,
    8,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:112 */
  {
    "sync_old_andsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_sync_old_andsi,
    &operand_data[829],
    3,
    8,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:112 */
  {
    "sync_old_iorsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_sync_old_iorsi,
    &operand_data[829],
    3,
    8,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:112 */
  {
    "sync_old_xorsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_sync_old_xorsi,
    &operand_data[829],
    3,
    8,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:154 */
  {
    "sync_new_addsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_sync_new_addsi,
    &operand_data[829],
    3,
    8,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:154 */
  {
    "sync_new_subsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_sync_new_subsi,
    &operand_data[829],
    3,
    8,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:154 */
  {
    "sync_new_andsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_sync_new_andsi,
    &operand_data[829],
    3,
    8,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:154 */
  {
    "sync_new_iorsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_sync_new_iorsi,
    &operand_data[829],
    3,
    8,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:154 */
  {
    "sync_new_xorsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_sync_new_xorsi,
    &operand_data[829],
    3,
    8,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:97 */
  {
    "sync_new_xorsi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[648],
    2,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:148 */
  {
    "sync_new_xorsi+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[832],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:182 */
  {
    "sync_new_xorsi+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[832],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:208 */
  {
    "sync_new_xorsi+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[832],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:306 */
  {
    "cmpdf-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[836],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:339 */
  {
    "cmpdf-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[836],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:374 */
  {
    "cmpdf-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[836],
    4,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:424 */
  {
    "cmpdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_cmpdf,
    &operand_data[840],
    2,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:466 */
  {
    "cmpsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    gen_cmpsf,
    &operand_data[842],
    2,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:917 */
  {
    "cmpsf+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[844],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:917 */
  {
    "cmpsf+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[849],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:917 */
  {
    "cmpsf+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.sh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[854],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:917 */
  {
    "cmpsf+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.ub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[859],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:929 */
  {
    "cmpsf+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! st.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[864],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:929 */
  {
    "cmpsf+6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! st.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[869],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:929 */
  {
    "cmpsf+7",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! st.h%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[874],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:929 */
  {
    "cmpsf+8",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! st.b%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[879],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:940 */
  {
    "cmpsf+9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! mov%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[884],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:940 */
  {
    "cmpsf+10",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! mov%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[889],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:940 */
  {
    "cmpsf+11",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! mov%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[894],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:940 */
  {
    "cmpsf+12",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! mov%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[899],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1241 */
  {
    "cmpsf+13",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, -%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[904],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1241 */
  {
    "cmpsf+14",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, -%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[909],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1241 */
  {
    "cmpsf+15",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, -%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[914],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1312 */
  {
    "cmpsf+16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[919],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1312 */
  {
    "cmpsf+17",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[924],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1312 */
  {
    "cmpsf+18",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[929],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1322 */
  {
    "cmpsf+19",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! rsub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[919],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1322 */
  {
    "cmpsf+20",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! rsub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[924],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1322 */
  {
    "cmpsf+21",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! rsub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[929],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+22",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! and%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[934],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+23",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! or%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[934],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+24",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! eor%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[934],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+25",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! add%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[934],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+26",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[940],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+27",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! and%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[946],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+28",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! or%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[946],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+29",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! eor%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[946],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+30",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! add%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[946],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+31",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[952],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! and%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[958],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+33",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! or%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[958],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+34",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! eor%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[958],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+35",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! add%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[958],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+36",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[964],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+37",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_536 },
#else
    { 0, 0, output_536 },
#endif
    0,
    &operand_data[970],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+38",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[977],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+39",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_538 },
#else
    { 0, 0, output_538 },
#endif
    0,
    &operand_data[970],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+40",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[977],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+41",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_540 },
#else
    { 0, 0, output_540 },
#endif
    0,
    &operand_data[970],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+42",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[977],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+43",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_542 },
#else
    { 0, 0, output_542 },
#endif
    0,
    &operand_data[970],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+44",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[977],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+45",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_544 },
#else
    { 0, 0, output_544 },
#endif
    0,
    &operand_data[984],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+46",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[977],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+47",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_546 },
#else
    { 0, 0, output_546 },
#endif
    0,
    &operand_data[991],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+48",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[998],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+49",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_548 },
#else
    { 0, 0, output_548 },
#endif
    0,
    &operand_data[991],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+50",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[998],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+51",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_550 },
#else
    { 0, 0, output_550 },
#endif
    0,
    &operand_data[991],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+52",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[998],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+53",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_552 },
#else
    { 0, 0, output_552 },
#endif
    0,
    &operand_data[991],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+54",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[998],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+55",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_554 },
#else
    { 0, 0, output_554 },
#endif
    0,
    &operand_data[1005],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+56",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[998],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+57",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_556 },
#else
    { 0, 0, output_556 },
#endif
    0,
    &operand_data[1012],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+58",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1019],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+59",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_558 },
#else
    { 0, 0, output_558 },
#endif
    0,
    &operand_data[1012],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+60",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1019],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+61",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_560 },
#else
    { 0, 0, output_560 },
#endif
    0,
    &operand_data[1012],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+62",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1019],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+63",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_562 },
#else
    { 0, 0, output_562 },
#endif
    0,
    &operand_data[1012],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+64",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1019],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+65",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_564 },
#else
    { 0, 0, output_564 },
#endif
    0,
    &operand_data[1026],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+66",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1019],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2082 */
  {
    "cmpsf+67",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_566 },
#else
    { 0, 0, output_566 },
#endif
    0,
    &operand_data[1033],
    6,
    0,
    1,
    3
  },
  /* insn-conditions.md:2082 */
  {
    "cmpsf+68",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1039],
    6,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2114 */
  {
    "cmpsf+69",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_568 },
#else
    { 0, 0, output_568 },
#endif
    0,
    &operand_data[1045],
    6,
    0,
    1,
    3
  },
  /* insn-conditions.md:2114 */
  {
    "cmpsf+70",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1051],
    6,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2146 */
  {
    "cmpsf+71",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_570 },
#else
    { 0, 0, output_570 },
#endif
    0,
    &operand_data[1057],
    6,
    0,
    1,
    3
  },
  /* insn-conditions.md:2146 */
  {
    "cmpsf+72",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1063],
    6,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2331 */
  {
    "cmpsf+73",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! rsub%?\t%0, 0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1069],
    4,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2371 */
  {
    "cmpsf+74",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! rsub%?\t%0, -1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1069],
    4,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2642 */
  {
    "cmpsf+75",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[849],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2642 */
  {
    "cmpsf+76",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.sh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1073],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2642 */
  {
    "cmpsf+77",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.sb%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1078],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2654 */
  {
    "cmpsf+78",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[849],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2654 */
  {
    "cmpsf+79",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.uh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1073],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2654 */
  {
    "cmpsf+80",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.ub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1078],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2666 */
  {
    "cmpsf+81",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.ub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1083],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2678 */
  {
    "cmpsf+82",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.sb%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1083],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3197 */
  {
    "cmpsf+83",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ret%?\tr12",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[846],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3232 */
  {
    "cmpsf+84",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ret%?\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1088],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3242 */
  {
    "cmpsf+85",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ret%?\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[870],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3242 */
  {
    "cmpsf+86",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ret%?\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1092],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3242 */
  {
    "cmpsf+87",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ret%?\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1096],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:917 */
  {
    "cmpsf+88",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1100],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:917 */
  {
    "cmpsf+89",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1105],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:917 */
  {
    "cmpsf+90",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.sh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1110],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:917 */
  {
    "cmpsf+91",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.ub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1115],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:929 */
  {
    "cmpsf+92",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! st.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1120],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:929 */
  {
    "cmpsf+93",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! st.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1125],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:929 */
  {
    "cmpsf+94",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! st.h%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1130],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:929 */
  {
    "cmpsf+95",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! st.b%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1135],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:940 */
  {
    "cmpsf+96",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! mov%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1140],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:940 */
  {
    "cmpsf+97",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! mov%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1145],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:940 */
  {
    "cmpsf+98",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! mov%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1150],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:940 */
  {
    "cmpsf+99",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! mov%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1155],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1241 */
  {
    "cmpsf+100",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, -%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1160],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1241 */
  {
    "cmpsf+101",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, -%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1165],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1241 */
  {
    "cmpsf+102",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, -%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1170],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1312 */
  {
    "cmpsf+103",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1175],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1312 */
  {
    "cmpsf+104",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1180],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1312 */
  {
    "cmpsf+105",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1185],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1322 */
  {
    "cmpsf+106",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! rsub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1175],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1322 */
  {
    "cmpsf+107",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! rsub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1180],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1322 */
  {
    "cmpsf+108",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! rsub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1185],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+109",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! and%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1190],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+110",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! or%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1190],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+111",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! eor%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1190],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+112",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! add%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1190],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+113",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1196],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+114",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! and%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1202],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+115",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! or%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1202],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+116",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! eor%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1202],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+117",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! add%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1202],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+118",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1208],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+119",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! and%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1214],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+120",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! or%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1214],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+121",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! eor%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1214],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+122",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! add%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1214],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+123",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1220],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+124",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_623 },
#else
    { 0, 0, output_623 },
#endif
    0,
    &operand_data[1226],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+125",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1233],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+126",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_625 },
#else
    { 0, 0, output_625 },
#endif
    0,
    &operand_data[1226],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+127",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1233],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+128",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_627 },
#else
    { 0, 0, output_627 },
#endif
    0,
    &operand_data[1226],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+129",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1233],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+130",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_629 },
#else
    { 0, 0, output_629 },
#endif
    0,
    &operand_data[1226],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+131",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1233],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+132",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_631 },
#else
    { 0, 0, output_631 },
#endif
    0,
    &operand_data[1240],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+133",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1233],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+134",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_633 },
#else
    { 0, 0, output_633 },
#endif
    0,
    &operand_data[1247],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+135",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1254],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+136",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_635 },
#else
    { 0, 0, output_635 },
#endif
    0,
    &operand_data[1247],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+137",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1254],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+138",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_637 },
#else
    { 0, 0, output_637 },
#endif
    0,
    &operand_data[1247],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+139",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1254],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+140",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_639 },
#else
    { 0, 0, output_639 },
#endif
    0,
    &operand_data[1247],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+141",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1254],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+142",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_641 },
#else
    { 0, 0, output_641 },
#endif
    0,
    &operand_data[1261],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+143",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1254],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+144",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_643 },
#else
    { 0, 0, output_643 },
#endif
    0,
    &operand_data[1268],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+145",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1275],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+146",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_645 },
#else
    { 0, 0, output_645 },
#endif
    0,
    &operand_data[1268],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+147",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1275],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+148",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_647 },
#else
    { 0, 0, output_647 },
#endif
    0,
    &operand_data[1268],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+149",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1275],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+150",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_649 },
#else
    { 0, 0, output_649 },
#endif
    0,
    &operand_data[1268],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+151",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1275],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+152",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_651 },
#else
    { 0, 0, output_651 },
#endif
    0,
    &operand_data[1282],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+153",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1275],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2082 */
  {
    "cmpsf+154",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_653 },
#else
    { 0, 0, output_653 },
#endif
    0,
    &operand_data[1289],
    6,
    0,
    1,
    3
  },
  /* insn-conditions.md:2082 */
  {
    "cmpsf+155",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1295],
    6,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2114 */
  {
    "cmpsf+156",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_655 },
#else
    { 0, 0, output_655 },
#endif
    0,
    &operand_data[1301],
    6,
    0,
    1,
    3
  },
  /* insn-conditions.md:2114 */
  {
    "cmpsf+157",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1307],
    6,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2146 */
  {
    "cmpsf+158",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_657 },
#else
    { 0, 0, output_657 },
#endif
    0,
    &operand_data[1313],
    6,
    0,
    1,
    3
  },
  /* insn-conditions.md:2146 */
  {
    "cmpsf+159",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1319],
    6,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2331 */
  {
    "cmpsf+160",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! rsub%?\t%0, 0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1325],
    4,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2371 */
  {
    "cmpsf+161",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! rsub%?\t%0, -1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1325],
    4,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2642 */
  {
    "cmpsf+162",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1105],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2642 */
  {
    "cmpsf+163",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.sh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1329],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2642 */
  {
    "cmpsf+164",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.sb%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1334],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2654 */
  {
    "cmpsf+165",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1105],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2654 */
  {
    "cmpsf+166",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.uh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1329],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2654 */
  {
    "cmpsf+167",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.ub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1334],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2666 */
  {
    "cmpsf+168",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.ub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1339],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2678 */
  {
    "cmpsf+169",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.sb%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1339],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3197 */
  {
    "cmpsf+170",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ret%?\tr12",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1102],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3232 */
  {
    "cmpsf+171",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ret%?\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1344],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3242 */
  {
    "cmpsf+172",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ret%?\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1126],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3242 */
  {
    "cmpsf+173",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ret%?\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1348],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3242 */
  {
    "cmpsf+174",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ret%?\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1352],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:917 */
  {
    "cmpsf+175",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1356],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:917 */
  {
    "cmpsf+176",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1361],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:917 */
  {
    "cmpsf+177",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.sh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1366],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:917 */
  {
    "cmpsf+178",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.ub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1371],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:929 */
  {
    "cmpsf+179",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! st.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1376],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:929 */
  {
    "cmpsf+180",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! st.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1381],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:929 */
  {
    "cmpsf+181",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! st.h%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1386],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:929 */
  {
    "cmpsf+182",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! st.b%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1391],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:940 */
  {
    "cmpsf+183",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! mov%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1396],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:940 */
  {
    "cmpsf+184",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! mov%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1401],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:940 */
  {
    "cmpsf+185",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! mov%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1406],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:940 */
  {
    "cmpsf+186",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! mov%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1411],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1241 */
  {
    "cmpsf+187",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, -%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1416],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1241 */
  {
    "cmpsf+188",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, -%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1421],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1241 */
  {
    "cmpsf+189",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, -%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1426],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1312 */
  {
    "cmpsf+190",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1431],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1312 */
  {
    "cmpsf+191",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1436],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1312 */
  {
    "cmpsf+192",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1441],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1322 */
  {
    "cmpsf+193",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! rsub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1431],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1322 */
  {
    "cmpsf+194",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! rsub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1436],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1322 */
  {
    "cmpsf+195",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! rsub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1441],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+196",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! and%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1446],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+197",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! or%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1446],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+198",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! eor%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1446],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+199",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! add%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1446],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+200",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1452],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+201",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! and%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1458],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+202",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! or%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1458],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+203",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! eor%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1458],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+204",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! add%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1458],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+205",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1464],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+206",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! and%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1470],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+207",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! or%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1470],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+208",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! eor%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1470],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+209",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! add%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1470],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+210",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1476],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+211",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_710 },
#else
    { 0, 0, output_710 },
#endif
    0,
    &operand_data[1482],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+212",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1489],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+213",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_712 },
#else
    { 0, 0, output_712 },
#endif
    0,
    &operand_data[1482],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+214",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1489],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+215",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_714 },
#else
    { 0, 0, output_714 },
#endif
    0,
    &operand_data[1482],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+216",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1489],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+217",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_716 },
#else
    { 0, 0, output_716 },
#endif
    0,
    &operand_data[1482],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+218",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1489],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+219",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_718 },
#else
    { 0, 0, output_718 },
#endif
    0,
    &operand_data[1496],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+220",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1489],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+221",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_720 },
#else
    { 0, 0, output_720 },
#endif
    0,
    &operand_data[1503],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+222",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1510],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+223",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_722 },
#else
    { 0, 0, output_722 },
#endif
    0,
    &operand_data[1503],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+224",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1510],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+225",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_724 },
#else
    { 0, 0, output_724 },
#endif
    0,
    &operand_data[1503],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+226",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1510],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+227",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_726 },
#else
    { 0, 0, output_726 },
#endif
    0,
    &operand_data[1503],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+228",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1510],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+229",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_728 },
#else
    { 0, 0, output_728 },
#endif
    0,
    &operand_data[1517],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+230",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1510],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+231",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_730 },
#else
    { 0, 0, output_730 },
#endif
    0,
    &operand_data[1524],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+232",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1531],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+233",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_732 },
#else
    { 0, 0, output_732 },
#endif
    0,
    &operand_data[1524],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+234",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1531],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+235",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_734 },
#else
    { 0, 0, output_734 },
#endif
    0,
    &operand_data[1524],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+236",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1531],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+237",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_736 },
#else
    { 0, 0, output_736 },
#endif
    0,
    &operand_data[1524],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+238",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1531],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+239",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_738 },
#else
    { 0, 0, output_738 },
#endif
    0,
    &operand_data[1538],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+240",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1531],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2082 */
  {
    "cmpsf+241",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_740 },
#else
    { 0, 0, output_740 },
#endif
    0,
    &operand_data[1545],
    6,
    0,
    1,
    3
  },
  /* insn-conditions.md:2082 */
  {
    "cmpsf+242",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1551],
    6,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2114 */
  {
    "cmpsf+243",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_742 },
#else
    { 0, 0, output_742 },
#endif
    0,
    &operand_data[1557],
    6,
    0,
    1,
    3
  },
  /* insn-conditions.md:2114 */
  {
    "cmpsf+244",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1563],
    6,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2146 */
  {
    "cmpsf+245",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_744 },
#else
    { 0, 0, output_744 },
#endif
    0,
    &operand_data[1569],
    6,
    0,
    1,
    3
  },
  /* insn-conditions.md:2146 */
  {
    "cmpsf+246",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1575],
    6,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2331 */
  {
    "cmpsf+247",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! rsub%?\t%0, 0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1581],
    4,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2371 */
  {
    "cmpsf+248",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! rsub%?\t%0, -1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1581],
    4,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2642 */
  {
    "cmpsf+249",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1361],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2642 */
  {
    "cmpsf+250",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.sh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1585],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2642 */
  {
    "cmpsf+251",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.sb%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1590],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2654 */
  {
    "cmpsf+252",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1361],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2654 */
  {
    "cmpsf+253",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.uh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1585],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2654 */
  {
    "cmpsf+254",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.ub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1590],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2666 */
  {
    "cmpsf+255",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.ub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1595],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2678 */
  {
    "cmpsf+256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.sb%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1595],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3197 */
  {
    "cmpsf+257",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ret%?\tr12",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[278],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3232 */
  {
    "cmpsf+258",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ret%?\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1600],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3242 */
  {
    "cmpsf+259",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ret%?\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1382],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3242 */
  {
    "cmpsf+260",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ret%?\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1604],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3242 */
  {
    "cmpsf+261",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ret%?\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1608],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:917 */
  {
    "cmpsf+262",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1612],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:917 */
  {
    "cmpsf+263",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1617],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:917 */
  {
    "cmpsf+264",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.sh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1622],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:917 */
  {
    "cmpsf+265",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.ub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1627],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:929 */
  {
    "cmpsf+266",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! st.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1632],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:929 */
  {
    "cmpsf+267",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! st.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1637],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:929 */
  {
    "cmpsf+268",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! st.h%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1642],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:929 */
  {
    "cmpsf+269",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! st.b%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1647],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:940 */
  {
    "cmpsf+270",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! mov%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1652],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:940 */
  {
    "cmpsf+271",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! mov%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1657],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:940 */
  {
    "cmpsf+272",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! mov%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1662],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:940 */
  {
    "cmpsf+273",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! mov%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1667],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1241 */
  {
    "cmpsf+274",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, -%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1672],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1241 */
  {
    "cmpsf+275",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, -%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1677],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1241 */
  {
    "cmpsf+276",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, -%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1682],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1312 */
  {
    "cmpsf+277",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1687],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1312 */
  {
    "cmpsf+278",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1692],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1312 */
  {
    "cmpsf+279",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1697],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1322 */
  {
    "cmpsf+280",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! rsub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1687],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1322 */
  {
    "cmpsf+281",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! rsub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1692],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1322 */
  {
    "cmpsf+282",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! rsub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1697],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+283",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! and%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1702],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+284",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! or%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1702],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+285",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! eor%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1702],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+286",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! add%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1702],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+287",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1708],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+288",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! and%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1714],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+289",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! or%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1714],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+290",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! eor%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1714],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+291",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! add%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1714],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+292",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1720],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+293",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! and%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1726],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+294",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! or%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1726],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+295",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! eor%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1726],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+296",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! add%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1726],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+297",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1732],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+298",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_797 },
#else
    { 0, 0, output_797 },
#endif
    0,
    &operand_data[1738],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+299",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1745],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+300",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_799 },
#else
    { 0, 0, output_799 },
#endif
    0,
    &operand_data[1738],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+301",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1745],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+302",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_801 },
#else
    { 0, 0, output_801 },
#endif
    0,
    &operand_data[1738],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+303",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1745],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+304",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_803 },
#else
    { 0, 0, output_803 },
#endif
    0,
    &operand_data[1738],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+305",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1745],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+306",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_805 },
#else
    { 0, 0, output_805 },
#endif
    0,
    &operand_data[1752],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+307",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1745],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+308",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_807 },
#else
    { 0, 0, output_807 },
#endif
    0,
    &operand_data[1759],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+309",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1766],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+310",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_809 },
#else
    { 0, 0, output_809 },
#endif
    0,
    &operand_data[1759],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+311",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1766],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+312",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_811 },
#else
    { 0, 0, output_811 },
#endif
    0,
    &operand_data[1759],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+313",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1766],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+314",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_813 },
#else
    { 0, 0, output_813 },
#endif
    0,
    &operand_data[1759],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+315",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1766],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+316",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_815 },
#else
    { 0, 0, output_815 },
#endif
    0,
    &operand_data[1773],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+317",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1766],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+318",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_817 },
#else
    { 0, 0, output_817 },
#endif
    0,
    &operand_data[1780],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+319",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1787],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+320",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_819 },
#else
    { 0, 0, output_819 },
#endif
    0,
    &operand_data[1780],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+321",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1787],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+322",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_821 },
#else
    { 0, 0, output_821 },
#endif
    0,
    &operand_data[1780],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+323",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1787],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+324",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_823 },
#else
    { 0, 0, output_823 },
#endif
    0,
    &operand_data[1780],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+325",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1787],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+326",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_825 },
#else
    { 0, 0, output_825 },
#endif
    0,
    &operand_data[1794],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+327",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1787],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2082 */
  {
    "cmpsf+328",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_827 },
#else
    { 0, 0, output_827 },
#endif
    0,
    &operand_data[1801],
    6,
    0,
    1,
    3
  },
  /* insn-conditions.md:2082 */
  {
    "cmpsf+329",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1807],
    6,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2114 */
  {
    "cmpsf+330",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_829 },
#else
    { 0, 0, output_829 },
#endif
    0,
    &operand_data[1813],
    6,
    0,
    1,
    3
  },
  /* insn-conditions.md:2114 */
  {
    "cmpsf+331",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1819],
    6,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2146 */
  {
    "cmpsf+332",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_831 },
#else
    { 0, 0, output_831 },
#endif
    0,
    &operand_data[1825],
    6,
    0,
    1,
    3
  },
  /* insn-conditions.md:2146 */
  {
    "cmpsf+333",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1831],
    6,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2331 */
  {
    "cmpsf+334",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! rsub%?\t%0, 0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1837],
    4,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2371 */
  {
    "cmpsf+335",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! rsub%?\t%0, -1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1837],
    4,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2642 */
  {
    "cmpsf+336",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1617],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2642 */
  {
    "cmpsf+337",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.sh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1841],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2642 */
  {
    "cmpsf+338",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.sb%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1846],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2654 */
  {
    "cmpsf+339",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1617],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2654 */
  {
    "cmpsf+340",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.uh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1841],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2654 */
  {
    "cmpsf+341",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.ub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1846],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2666 */
  {
    "cmpsf+342",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.ub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1851],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2678 */
  {
    "cmpsf+343",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.sb%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1851],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3197 */
  {
    "cmpsf+344",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ret%?\tr12",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[284],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3232 */
  {
    "cmpsf+345",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ret%?\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1856],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3242 */
  {
    "cmpsf+346",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ret%?\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1638],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3242 */
  {
    "cmpsf+347",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ret%?\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1860],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3242 */
  {
    "cmpsf+348",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ret%?\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1864],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:917 */
  {
    "cmpsf+349",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1868],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:917 */
  {
    "cmpsf+350",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1873],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:917 */
  {
    "cmpsf+351",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.sh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1878],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:917 */
  {
    "cmpsf+352",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.ub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1883],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:929 */
  {
    "cmpsf+353",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! st.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1888],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:929 */
  {
    "cmpsf+354",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! st.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1893],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:929 */
  {
    "cmpsf+355",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! st.h%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1898],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:929 */
  {
    "cmpsf+356",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! st.b%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1903],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:940 */
  {
    "cmpsf+357",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! mov%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1908],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:940 */
  {
    "cmpsf+358",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! mov%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1913],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:940 */
  {
    "cmpsf+359",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! mov%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1918],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:940 */
  {
    "cmpsf+360",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! mov%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1923],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1241 */
  {
    "cmpsf+361",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, -%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1928],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1241 */
  {
    "cmpsf+362",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, -%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1933],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1241 */
  {
    "cmpsf+363",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, -%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1938],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1312 */
  {
    "cmpsf+364",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1943],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1312 */
  {
    "cmpsf+365",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1948],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1312 */
  {
    "cmpsf+366",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1953],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1322 */
  {
    "cmpsf+367",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! rsub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1943],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1322 */
  {
    "cmpsf+368",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! rsub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1948],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1322 */
  {
    "cmpsf+369",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! rsub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1953],
    5,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+370",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! and%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1958],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+371",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! or%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1958],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+372",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! eor%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1958],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+373",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! add%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1958],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+374",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1964],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+375",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! and%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1970],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+376",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! or%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1970],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+377",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! eor%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1970],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+378",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! add%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1970],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+379",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1976],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+380",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! and%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1982],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+381",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! or%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1982],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+382",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! eor%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1982],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+383",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! add%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1982],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
  {
    "cmpsf+384",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! sub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1988],
    6,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+385",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_884 },
#else
    { 0, 0, output_884 },
#endif
    0,
    &operand_data[1994],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+386",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2001],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_886 },
#else
    { 0, 0, output_886 },
#endif
    0,
    &operand_data[1994],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+388",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2001],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+389",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_888 },
#else
    { 0, 0, output_888 },
#endif
    0,
    &operand_data[1994],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+390",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2001],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+391",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_890 },
#else
    { 0, 0, output_890 },
#endif
    0,
    &operand_data[1994],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+392",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2001],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+393",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_892 },
#else
    { 0, 0, output_892 },
#endif
    0,
    &operand_data[2008],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+394",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2001],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+395",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_894 },
#else
    { 0, 0, output_894 },
#endif
    0,
    &operand_data[2015],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+396",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2022],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+397",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_896 },
#else
    { 0, 0, output_896 },
#endif
    0,
    &operand_data[2015],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+398",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2022],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+399",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_898 },
#else
    { 0, 0, output_898 },
#endif
    0,
    &operand_data[2015],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+400",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2022],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+401",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_900 },
#else
    { 0, 0, output_900 },
#endif
    0,
    &operand_data[2015],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+402",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2022],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+403",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_902 },
#else
    { 0, 0, output_902 },
#endif
    0,
    &operand_data[2029],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+404",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2022],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+405",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_904 },
#else
    { 0, 0, output_904 },
#endif
    0,
    &operand_data[2036],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+406",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2043],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+407",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_906 },
#else
    { 0, 0, output_906 },
#endif
    0,
    &operand_data[2036],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+408",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2043],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+409",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_908 },
#else
    { 0, 0, output_908 },
#endif
    0,
    &operand_data[2036],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+410",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2043],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+411",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_910 },
#else
    { 0, 0, output_910 },
#endif
    0,
    &operand_data[2036],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+412",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2043],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
  {
    "cmpsf+413",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_912 },
#else
    { 0, 0, output_912 },
#endif
    0,
    &operand_data[2050],
    7,
    0,
    1,
    3
  },
  /* insn-conditions.md:2029 */
  {
    "cmpsf+414",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2043],
    7,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2082 */
  {
    "cmpsf+415",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_914 },
#else
    { 0, 0, output_914 },
#endif
    0,
    &operand_data[2057],
    6,
    0,
    1,
    3
  },
  /* insn-conditions.md:2082 */
  {
    "cmpsf+416",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2063],
    6,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2114 */
  {
    "cmpsf+417",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_916 },
#else
    { 0, 0, output_916 },
#endif
    0,
    &operand_data[2069],
    6,
    0,
    1,
    3
  },
  /* insn-conditions.md:2114 */
  {
    "cmpsf+418",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2075],
    6,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2146 */
  {
    "cmpsf+419",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_918 },
#else
    { 0, 0, output_918 },
#endif
    0,
    &operand_data[2081],
    6,
    0,
    1,
    3
  },
  /* insn-conditions.md:2146 */
  {
    "cmpsf+420",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2087],
    6,
    0,
    0,
    0
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2331 */
  {
    "cmpsf+421",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! rsub%?\t%0, 0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2093],
    4,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2371 */
  {
    "cmpsf+422",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! rsub%?\t%0, -1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2093],
    4,
    1,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2642 */
  {
    "cmpsf+423",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1873],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2642 */
  {
    "cmpsf+424",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.sh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2097],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2642 */
  {
    "cmpsf+425",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.sb%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2102],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2654 */
  {
    "cmpsf+426",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.w%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1873],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2654 */
  {
    "cmpsf+427",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.uh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2097],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2654 */
  {
    "cmpsf+428",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.ub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2102],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2666 */
  {
    "cmpsf+429",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.ub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2107],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2678 */
  {
    "cmpsf+430",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ld.sb%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2107],
    5,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3197 */
  {
    "cmpsf+431",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ret%?\tr12",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1870],
    3,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3232 */
  {
    "cmpsf+432",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ret%?\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2112],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3242 */
  {
    "cmpsf+433",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ret%?\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1894],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3242 */
  {
    "cmpsf+434",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ret%?\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2116],
    4,
    0,
    1,
    1
  },
  /* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3242 */
  {
    "cmpsf+435",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%! ret%?\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2120],
    4,
    0,
    1,
    1
  },
};


const char *
get_insn_name (int code)
{
  if (code == NOOP_MOVE_INSN_CODE)
    return "NOOP_MOVE";
  else
    return insn_data[code].name;
}

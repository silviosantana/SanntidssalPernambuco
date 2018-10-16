/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tree.h"
#include "tm_p.h"
#include "function.h"
#include "insn-config.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "toplev.h"
#include "reload.h"
#include "regs.h"
#include "tm-constrs.h"

int
avr32_indirect_register_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 27 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
(register_operand(XEXP(op, 0), SImode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
avr32_indexed_memory_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 36 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
{

   rtx op0 = XEXP(XEXP(op, 0), 0);
   rtx op1 = XEXP(XEXP(op, 0), 1);

   return ((avr32_address_register_rtx_p (op0, 0)
            && avr32_legitimate_index_p (GET_MODE(op), op1, 0))
	   || (avr32_address_register_rtx_p (op1, 0)
            && avr32_legitimate_index_p (GET_MODE(op), op0, 0)));

 }

int
avr32_indexed_memory_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (((GET_CODE (op) == MEM) && (
#line 35 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
(GET_CODE(XEXP(op, 0)) == PLUS))) && (
(avr32_indexed_memory_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
load_sb_memory_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (avr32_indirect_register_operand (op, mode)) || (avr32_indexed_memory_operand (op, mode));
}

int
extendqi_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (load_sb_memory_operand (op, mode)) || (register_operand (op, mode));
}

int
post_inc_memory_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 61 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
((GET_CODE(XEXP(op, 0)) == POST_INC)
                     && REG_P(XEXP(XEXP(op, 0), 0))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
pre_dec_memory_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 66 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
((GET_CODE(XEXP(op, 0)) == PRE_DEC)
                     && REG_P(XEXP(XEXP(op, 0), 0))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
avr32_add_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || ((immediate_operand (op, mode)) && (
#line 73 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
(CONST_OK_FOR_CONSTRAINT_P(INTVAL(op), 'I', "Is21"))));
}

static inline int
power_of_two_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 78 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
{
  HOST_WIDE_INT value = INTVAL (op);

  return value != 0 && (value & (value - 1)) == 0;
}

int
power_of_two_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(power_of_two_operand_1 (op, mode)));
}

static inline int
multiple_of_8_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 87 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
{
  HOST_WIDE_INT value = INTVAL (op);

  return (value & 0x7) == 0 ;
}

int
multiple_of_8_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(multiple_of_8_operand_1 (op, mode)));
}

static inline int
multiple_of_16_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 96 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
{
  HOST_WIDE_INT value = INTVAL (op);

  return (value & 0xf) == 0 ;
}

int
multiple_of_16_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(multiple_of_16_operand_1 (op, mode)));
}

static inline int
avr32_mask_upper_bits_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 105 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
{
  HOST_WIDE_INT value = INTVAL (op) + 1;

  return value != 1 && value != 0 && (value & (value - 1)) == 0;
}

int
avr32_mask_upper_bits_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(avr32_mask_upper_bits_operand_1 (op, mode)));
}

int
avr32_mul_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || ((immediate_operand (op, mode)) && (
#line 116 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
(CONST_OK_FOR_CONSTRAINT_P(INTVAL(op), 'K', "Ks08"))));
}

int
logical_binary_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case IOR:
    case XOR:
    case AND:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
logical_shift_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case ASHIFT:
    case LSHIFTRT:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
avr32_logical_shift_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case ASHIFT:
    case LSHIFTRT:
      break;
    default:
      return false;
    }
  return (((
#line 129 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
(GET_CODE(XEXP(op, 1)) == CONST_INT)) && (
#line 130 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
(register_operand(XEXP(op, 0), GET_MODE(XEXP(op, 0)))))) || ((
#line 131 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
(GET_CODE(XEXP(op, 0)) == CONST_INT)) && (
#line 132 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
(register_operand(XEXP(op, 1), GET_MODE(XEXP(op, 1))))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
avr32_logical_insn_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (avr32_logical_shift_operand (op, mode));
}

int
avr32_comparison_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == EQ || GET_CODE (op) == NE || GET_CODE (op) == GT || GET_CODE (op) == GE || GET_CODE (op) == LT || GET_CODE (op) == LE || GET_CODE (op) == GTU || GET_CODE (op) == GEU || GET_CODE (op) == LTU || GET_CODE (op) == LEU) || ((GET_CODE (op) == UNSPEC) && (
#line 147 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
((XINT(op, 1) == UNSPEC_COND_MI)
                         || (XINT(op, 1) == UNSPEC_COND_PL))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
avr32_cond3_comparison_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == EQ || GET_CODE (op) == NE || GET_CODE (op) == GE || GET_CODE (op) == LT || GET_CODE (op) == GEU || GET_CODE (op) == LTU) || ((GET_CODE (op) == UNSPEC) && (
#line 153 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
((XINT(op, 1) == UNSPEC_COND_MI)
                         || (XINT(op, 1) == UNSPEC_COND_PL))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
avr32_comparison_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (((GET_CODE (op) == EQ || GET_CODE (op) == NE || GET_CODE (op) == GT || GET_CODE (op) == GE || GET_CODE (op) == LT || GET_CODE (op) == LE || GET_CODE (op) == GTU || GET_CODE (op) == GEU || GET_CODE (op) == LTU || GET_CODE (op) == LEU) && (
#line 159 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
((CC0_P (XEXP(op,0)) && rtx_equal_p (XEXP(op,1), const0_rtx))))) || ((GET_CODE (op) == UNSPEC) && (
#line 161 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
((XINT(op, 1) == UNSPEC_COND_MI)
                         || (XINT(op, 1) == UNSPEC_COND_PL))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
one_bit_set_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 167 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
{
   int i;
   int value;
   int ones = 0;

   value = INTVAL(op);
   for ( i = 0 ; i < 32; i++ ){
     if ( value & ( 1 << i ) ){
        ones++;
      }
   }

   return ( ones == 1 );
  }

int
one_bit_set_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(one_bit_set_operand_1 (op, mode)));
}

static inline int
one_bit_cleared_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 186 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
{
   int i;
   int value;
   int zeroes = 0;

   value = INTVAL(op);
   for ( i = 0 ; i < 32; i++ ){
     if ( !(value & ( 1 << i )) ){
        zeroes++;
      }
   }

   return ( zeroes == 1 );
  }

int
one_bit_cleared_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(one_bit_cleared_operand_1 (op, mode)));
}

static inline int
avr32_hi16_immediate_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 205 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
{
   /* If the low 16-bits are zero then this
      is a hi16 immediate. */
   return ((INTVAL(op) & 0xffff) == 0);
   }

int
avr32_hi16_immediate_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(avr32_hi16_immediate_operand_1 (op, mode)));
}

int
register_immediate_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (immediate_operand (op, mode));
}

int
register_const_int_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || ((const_int_operand (op, mode)) && (immediate_operand (op, mode)));
}

int
register_const_double_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (const_double_operand (op, mode));
}

int
avr32_label_ref_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 231 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
(avr32_find_symbol(op)
                    && (GET_CODE(avr32_find_symbol(op)) == LABEL_REF)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
avr32_const_pool_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 238 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
{
        return (flag_pic ? (!(symbol_mentioned_p (get_pool_constant (op))
                        || label_mentioned_p (get_pool_constant (op)))
                       || avr32_got_mentioned_p(get_pool_constant (op)))
                    : true);
  }

int
avr32_const_pool_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (((GET_CODE (op) == SYMBOL_REF) && (
#line 237 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
(CONSTANT_POOL_ADDRESS_P(op)))) && (
(avr32_const_pool_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
avr32_const_pool_ref_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (avr32_label_ref_operand (op, mode)) || (((GET_CODE (op) == MEM) && (
#line 250 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
(avr32_const_pool_operand(XEXP(op,0), GET_MODE(XEXP(op,0)))))) && (
(mode == VOIDmode || GET_MODE (op) == mode)));
}

int
avr32_movti_src_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (avr32_const_pool_ref_operand (op, mode)) || (((register_immediate_operand (op, mode)) || (avr32_indirect_register_operand (op, mode))) || (post_inc_memory_operand (op, mode)));
}

int
avr32_movti_dst_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((register_operand (op, mode)) || (avr32_indirect_register_operand (op, mode))) || (pre_dec_memory_operand (op, mode));
}

int
avr32_k12_memory_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && ((
#line 270 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
(REG_P(XEXP(op, 0)))) || (
#line 271 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
(GET_CODE(XEXP(op, 0)) == PLUS
                         && REG_P(XEXP(XEXP(op, 0), 0))
                         && (GET_CODE(XEXP(XEXP(op, 0), 1)) == CONST_INT)
                         && (CONST_OK_FOR_CONSTRAINT_P(INTVAL(XEXP(XEXP(op, 0), 0)),
                                'K', (mode == SImode) ? "Ks14" : ((mode == HImode) ? "Ks13" : "Ks12"))))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
avr32_imm_disp_memory_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 280 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
(GET_CODE(XEXP(op, 0)) == PLUS
                    && REG_P(XEXP(XEXP(op, 0), 0))
                    && (GET_CODE(XEXP(XEXP(op, 0), 1)) == CONST_INT)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
avr32_bswap_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (avr32_k12_memory_operand (op, mode)) || (register_operand (op, mode));
}

int
avr32_cop_memory_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) && (!(
#line 292 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
(GET_CODE(XEXP(op, 0)) == PLUS
                         && REG_P(XEXP(XEXP(op, 0), 0))
                         && (GET_CODE(XEXP(XEXP(op, 0), 1)) == CONST_INT)
                         && !(CONST_OK_FOR_CONSTRAINT_P(INTVAL(XEXP(XEXP(op, 0), 0)), 'K', "Ku10")))));
}

int
avr32_cop_move_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (avr32_cop_memory_operand (op, mode));
}

int
avr32_extract_shift_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_int_operand (op, mode)) && (
#line 308 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
((INTVAL(op) == 0) || (INTVAL(op) == 8)
                    || (INTVAL(op) == 16) || (INTVAL(op) == 24)));
}

int
avr32_fp_register_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
#line 314 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
(REGNO_REG_CLASS(REGNO(op)) == FP_REGS));
}

int
avr32_symbol_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == LABEL_REF || GET_CODE (op) == SYMBOL_REF) || ((GET_CODE (op) == CONST) && (
#line 320 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
(avr32_find_symbol(op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
avr32_address_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case LABEL_REF:
    case SYMBOL_REF:
      break;
    default:
      return false;
    }
  return ((
#line 325 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
(TARGET_HAS_ASM_ADDR_PSEUDOS)) || (
#line 326 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
(flag_pic))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
avr32_ks16_address_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((address_operand (op, mode)) && ((
#line 331 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
(REG_P(op))) || (
#line 332 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
(GET_CODE(op) == PLUS
                         && ((GET_CODE(XEXP(op,0)) == CONST_INT)
                             || (GET_CODE(XEXP(op,1)) == CONST_INT)))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
avr32_ks16_memory_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 339 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
(avr32_ks16_address_operand (XEXP (op, 0), GET_MODE (XEXP (op, 0)))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
avr32_ks11_address_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((address_operand (op, mode)) && ((
#line 344 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
(REG_P(op))) || (
#line 345 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
(GET_CODE(op) == PLUS
                         && (((GET_CODE(XEXP(op,0)) == CONST_INT)
                              && avr32_const_ok_for_constraint_p(INTVAL(XEXP(op,0)), 'K', "Ks11"))
                             || ((GET_CODE(XEXP(op,1)) == CONST_INT)
                                 && avr32_const_ok_for_constraint_p(INTVAL(XEXP(op,1)), 'K', "Ks11"))))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
avr32_call_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((register_operand (op, mode)) || ((avr32_const_pool_ref_operand (op, mode)) || (avr32_address_operand (op, mode)))) || ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
(SYMBOL_REF_RCALL_FUNCTION_P(op))) && (
(mode == VOIDmode || GET_MODE (op) == mode)));
}

int
alu_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case IOR:
    case XOR:
    case AND:
    case PLUS:
    case MINUS:
    case ASHIFT:
    case LSHIFTRT:
    case ASHIFTRT:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
avr32_add_shift_immediate_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (immediate_operand (op, mode)) && (
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
(CONST_OK_FOR_CONSTRAINT_P(INTVAL(op), 'K', "Ku02")));
}

int
avr32_cond_register_immediate_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || ((immediate_operand (op, mode)) && (
#line 370 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
(CONST_OK_FOR_CONSTRAINT_P(INTVAL(op), 'K', "Ks08"))));
}

int
avr32_cond_immediate_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (immediate_operand (op, mode)) && (
#line 374 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
(CONST_OK_FOR_CONSTRAINT_P(INTVAL(op), 'I', "Is08")));
}

int
avr32_cond_move_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((register_operand (op, mode)) || ((immediate_operand (op, mode)) && (
#line 380 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
(CONST_OK_FOR_CONSTRAINT_P(INTVAL(op), 'K', "Ks08"))))) || ((
#line 381 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
(TARGET_V2_INSNS)) && (memory_operand (op, mode)));
}

int
avr32_mov_immediate_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (immediate_operand (op, mode)) && (
#line 386 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/predicates.md"
(avr32_const_ok_for_move(INTVAL(op))));
}


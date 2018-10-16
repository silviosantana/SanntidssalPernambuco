/* Generated automatically by the program `genrecog' from the target
   machine description file.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
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
#include "tm-constrs.h"



/* `recog' contains a decision tree that recognizes whether the rtx
   X0 is a valid instruction.

   recog returns -1 if the rtx is not valid.  If the rtx is valid, recog
   returns a nonnegative number which is the insn code number for the
   pattern that matched.  This is the same as the order in the machine
   description of the entry that matched.  This number can be used as an
   index into `insn_data' and other tables.

   The third argument to recog is an optional pointer to an int.  If
   present, recog will accept a pattern if it matches except for missing
   CLOBBER expressions at the end.  In that case, the value pointed to by
   the optional pointer will be set to the number of CLOBBERs that need
   to be added (it should be initialized to zero by the caller).  If it
   is set nonzero, the caller should allocate a PARALLEL of the
   appropriate size, copy the initial entries, and call add_clobbers
   (found in insn-emit.c) to fill in the CLOBBERs.


   The function split_insns returns 0 if the rtl could not
   be split or the split rtl as an INSN list if it can be.

   The function peephole2_insns returns 0 if the rtl could not
   be matched. If there was a match, the new rtl is returned in an INSN list,
   and LAST_INSN will point to the last recognized insn in the old sequence.
*/


extern rtx gen_split_370 (rtx, rtx *);
extern rtx gen_split_372 (rtx, rtx *);
extern rtx gen_split_375 (rtx, rtx *);
extern rtx gen_peephole2_379 (rtx, rtx *);
extern rtx gen_peephole2_380 (rtx, rtx *);
extern rtx gen_peephole2_381 (rtx, rtx *);
extern rtx gen_peephole2_382 (rtx, rtx *);
extern rtx gen_peephole2_383 (rtx, rtx *);
extern rtx gen_peephole2_384 (rtx, rtx *);
extern rtx gen_split_385 (rtx, rtx *);
extern rtx gen_peephole2_392 (rtx, rtx *);
extern rtx gen_peephole2_393 (rtx, rtx *);
extern rtx gen_peephole2_394 (rtx, rtx *);
extern rtx gen_peephole2_395 (rtx, rtx *);
extern rtx gen_peephole2_396 (rtx, rtx *);
extern rtx gen_peephole2_397 (rtx, rtx *);
extern rtx gen_split_398 (rtx, rtx *);
extern rtx gen_split_399 (rtx, rtx *);
extern rtx gen_split_400 (rtx, rtx *);
extern rtx gen_split_401 (rtx, rtx *);
extern rtx gen_split_402 (rtx, rtx *);
extern rtx gen_split_403 (rtx, rtx *);
extern rtx gen_split_404 (rtx, rtx *);
extern rtx gen_split_405 (rtx, rtx *);
extern rtx gen_split_406 (rtx, rtx *);
extern rtx gen_split_407 (rtx, rtx *);
extern rtx gen_split_408 (rtx, rtx *);
extern rtx gen_split_409 (rtx, rtx *);
extern rtx gen_split_410 (rtx, rtx *);
extern rtx gen_split_411 (rtx, rtx *);
extern rtx gen_split_412 (rtx, rtx *);
extern rtx gen_split_413 (rtx, rtx *);
extern rtx gen_split_414 (rtx, rtx *);
extern rtx gen_split_415 (rtx, rtx *);
extern rtx gen_split_439 (rtx, rtx *);
extern rtx gen_split_440 (rtx, rtx *);
extern rtx gen_split_441 (rtx, rtx *);
extern rtx gen_peephole2_443 (rtx, rtx *);
extern rtx gen_peephole2_444 (rtx, rtx *);
extern rtx gen_peephole2_445 (rtx, rtx *);
extern rtx gen_peephole2_446 (rtx, rtx *);
extern rtx gen_peephole2_447 (rtx, rtx *);
extern rtx gen_peephole2_448 (rtx, rtx *);
extern rtx gen_peephole2_449 (rtx, rtx *);
extern rtx gen_peephole2_450 (rtx, rtx *);
extern rtx gen_peephole2_451 (rtx, rtx *);
extern rtx gen_peephole2_452 (rtx, rtx *);
extern rtx gen_peephole2_455 (rtx, rtx *);
extern rtx gen_peephole2_456 (rtx, rtx *);
extern rtx gen_peephole2_457 (rtx, rtx *);
extern rtx gen_peephole2_458 (rtx, rtx *);
extern rtx gen_peephole2_459 (rtx, rtx *);
extern rtx gen_peephole2_460 (rtx, rtx *);
extern rtx gen_peephole2_463 (rtx, rtx *);
extern rtx gen_peephole2_467 (rtx, rtx *);
extern rtx gen_peephole2_468 (rtx, rtx *);
extern rtx gen_peephole2_473 (rtx, rtx *);
extern rtx gen_peephole2_474 (rtx, rtx *);
extern rtx gen_split_491 (rtx, rtx *);
extern rtx gen_peephole2_492 (rtx, rtx *);
extern rtx gen_peephole2_493 (rtx, rtx *);
extern rtx gen_peephole2_494 (rtx, rtx *);
extern rtx gen_peephole2_495 (rtx, rtx *);
extern rtx gen_peephole2_496 (rtx, rtx *);
extern rtx gen_peephole2_497 (rtx, rtx *);
extern rtx gen_split_537 (rtx, rtx *);
extern rtx gen_split_539 (rtx, rtx *);
extern rtx gen_split_541 (rtx, rtx *);
extern rtx gen_split_543 (rtx, rtx *);
extern rtx gen_split_545 (rtx, rtx *);
extern rtx gen_split_547 (rtx, rtx *);
extern rtx gen_split_549 (rtx, rtx *);
extern rtx gen_split_551 (rtx, rtx *);
extern rtx gen_split_553 (rtx, rtx *);
extern rtx gen_split_555 (rtx, rtx *);
extern rtx gen_split_557 (rtx, rtx *);
extern rtx gen_split_559 (rtx, rtx *);
extern rtx gen_split_561 (rtx, rtx *);
extern rtx gen_split_563 (rtx, rtx *);
extern rtx gen_split_565 (rtx, rtx *);
extern rtx gen_split_567 (rtx, rtx *);
extern rtx gen_split_569 (rtx, rtx *);
extern rtx gen_split_571 (rtx, rtx *);
extern rtx gen_split_624 (rtx, rtx *);
extern rtx gen_split_626 (rtx, rtx *);
extern rtx gen_split_628 (rtx, rtx *);
extern rtx gen_split_630 (rtx, rtx *);
extern rtx gen_split_632 (rtx, rtx *);
extern rtx gen_split_634 (rtx, rtx *);
extern rtx gen_split_636 (rtx, rtx *);
extern rtx gen_split_638 (rtx, rtx *);
extern rtx gen_split_640 (rtx, rtx *);
extern rtx gen_split_642 (rtx, rtx *);
extern rtx gen_split_644 (rtx, rtx *);
extern rtx gen_split_646 (rtx, rtx *);
extern rtx gen_split_648 (rtx, rtx *);
extern rtx gen_split_650 (rtx, rtx *);
extern rtx gen_split_652 (rtx, rtx *);
extern rtx gen_split_654 (rtx, rtx *);
extern rtx gen_split_656 (rtx, rtx *);
extern rtx gen_split_658 (rtx, rtx *);
extern rtx gen_split_711 (rtx, rtx *);
extern rtx gen_split_713 (rtx, rtx *);
extern rtx gen_split_715 (rtx, rtx *);
extern rtx gen_split_717 (rtx, rtx *);
extern rtx gen_split_719 (rtx, rtx *);
extern rtx gen_split_721 (rtx, rtx *);
extern rtx gen_split_723 (rtx, rtx *);
extern rtx gen_split_725 (rtx, rtx *);
extern rtx gen_split_727 (rtx, rtx *);
extern rtx gen_split_729 (rtx, rtx *);
extern rtx gen_split_731 (rtx, rtx *);
extern rtx gen_split_733 (rtx, rtx *);
extern rtx gen_split_735 (rtx, rtx *);
extern rtx gen_split_737 (rtx, rtx *);
extern rtx gen_split_739 (rtx, rtx *);
extern rtx gen_split_741 (rtx, rtx *);
extern rtx gen_split_743 (rtx, rtx *);
extern rtx gen_split_745 (rtx, rtx *);
extern rtx gen_split_798 (rtx, rtx *);
extern rtx gen_split_800 (rtx, rtx *);
extern rtx gen_split_802 (rtx, rtx *);
extern rtx gen_split_804 (rtx, rtx *);
extern rtx gen_split_806 (rtx, rtx *);
extern rtx gen_split_808 (rtx, rtx *);
extern rtx gen_split_810 (rtx, rtx *);
extern rtx gen_split_812 (rtx, rtx *);
extern rtx gen_split_814 (rtx, rtx *);
extern rtx gen_split_816 (rtx, rtx *);
extern rtx gen_split_818 (rtx, rtx *);
extern rtx gen_split_820 (rtx, rtx *);
extern rtx gen_split_822 (rtx, rtx *);
extern rtx gen_split_824 (rtx, rtx *);
extern rtx gen_split_826 (rtx, rtx *);
extern rtx gen_split_828 (rtx, rtx *);
extern rtx gen_split_830 (rtx, rtx *);
extern rtx gen_split_832 (rtx, rtx *);
extern rtx gen_split_885 (rtx, rtx *);
extern rtx gen_split_887 (rtx, rtx *);
extern rtx gen_split_889 (rtx, rtx *);
extern rtx gen_split_891 (rtx, rtx *);
extern rtx gen_split_893 (rtx, rtx *);
extern rtx gen_split_895 (rtx, rtx *);
extern rtx gen_split_897 (rtx, rtx *);
extern rtx gen_split_899 (rtx, rtx *);
extern rtx gen_split_901 (rtx, rtx *);
extern rtx gen_split_903 (rtx, rtx *);
extern rtx gen_split_905 (rtx, rtx *);
extern rtx gen_split_907 (rtx, rtx *);
extern rtx gen_split_909 (rtx, rtx *);
extern rtx gen_split_911 (rtx, rtx *);
extern rtx gen_split_913 (rtx, rtx *);
extern rtx gen_split_915 (rtx, rtx *);
extern rtx gen_split_917 (rtx, rtx *);
extern rtx gen_split_919 (rtx, rtx *);



static int
recog_1 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_CODE (x1))
    {
    case ZERO_EXTRACT:
      goto L107;
    case MEM:
      goto L7988;
    default:
     break;
   }
 L7937: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L10;
    }
 L7940: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L22;
    }
 L7949: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L83;
    }
 L7953: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L113;
    }
 L7960: ATTRIBUTE_UNUSED_LABEL
  if (avr32_bswap_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1875;
    }
 L7961: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cop_move_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1995;
    }
  goto ret0;

 L107: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L108;
    }
  goto ret0;

 L108: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L109;
    }
  goto ret0;

 L109: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L110;
    }
  goto ret0;

 L110: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, VOIDmode))
    {
      operands[3] = x1;
      return 25;  /* insv */
    }
  goto ret0;

 L7988: ATTRIBUTE_UNUSED_LABEL
  if (avr32_ks16_memory_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2099;
    }
  goto L7937;

 L2099: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 25)
    goto L2100;
  x1 = XEXP (x0, 0);
  goto L7937;

 L2100: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2101;
    }
  x1 = XEXP (x0, 0);
  goto L7937;

 L2101: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2102;
  x1 = XEXP (x0, 0);
  goto L7937;

 L2102: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  return 314;  /* sync_store_if_lock */

 L10: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L11;
    }
  x1 = XEXP (x0, 0);
  goto L7940;

 L11: ATTRIBUTE_UNUSED_LABEL
  if (
#line 493 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(register_operand (operands[0], SImode)
   || register_operand (operands[1], SImode)))
    {
      return 2;  /* movsi_internal */
    }
  x1 = XEXP (x0, 0);
  goto L7940;

 L22: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L7989;
  x1 = XEXP (x0, 0);
  goto L7949;

 L7989: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case HIGH:
      goto L23;
    case LO_SUM:
      goto L27;
    case UNSPEC:
      goto L7993;
    case SUBREG:
    case MEM:
      goto L7992;
    default:
      x1 = XEXP (x0, 0);
      goto L7949;
   }
 L7992: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L68;
    }
  x1 = XEXP (x0, 0);
  goto L7949;

 L23: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (immediate_operand (x2, SImode))
    {
      operands[1] = x2;
      return 5;  /* mov_symbol_lo */
    }
  x1 = XEXP (x0, 0);
  goto L7949;

 L27: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L28;
  x1 = XEXP (x0, 0);
  goto L7949;

 L28: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[1] = x2;
      return 6;  /* add_symbol_hi */
    }
  x1 = XEXP (x0, 0);
  goto L7949;

 L7993: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 10)
    goto L32;
  x1 = XEXP (x0, 0);
  goto L7949;

 L32: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  goto L33;

 L33: ATTRIBUTE_UNUSED_LABEL
  if (
#line 577 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(flag_pic && CONSTANT_POOL_ADDRESS_P(XEXP(operands[1], 0))))
    {
      return 7;  /* pic_load_addr */
    }
  x1 = XEXP (x0, 0);
  goto L7949;

 L68: ATTRIBUTE_UNUSED_LABEL
  if (
#line 920 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 14;  /* ldsi_predicable */
    }
  x1 = XEXP (x0, 0);
  goto L7949;

 L83: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L84;
    }
  x1 = XEXP (x0, 0);
  goto L7953;

 L84: ATTRIBUTE_UNUSED_LABEL
  if (
#line 932 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 18;  /* stsi_predicable */
    }
  x1 = XEXP (x0, 0);
  goto L7953;

 L113: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L7994;
 L98: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_register_immediate_operand (x1, SImode))
    {
      operands[1] = x1;
      return 22;  /* movsi_predicable */
    }
  x1 = XEXP (x0, 0);
  goto L7960;

 L7994: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case SIGN_EXTRACT:
      goto L114;
    case ZERO_EXTRACT:
      goto L121;
    case PLUS:
      goto L140;
    case MINUS:
      goto L280;
    default:
     break;
   }
  goto L98;

 L114: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L115;
    }
  goto L98;

 L115: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L116;
    }
  goto L98;

 L116: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (immediate_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L117;
    }
  goto L98;

 L117: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1020 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(INTVAL(operands[2]) < 32))
    {
      return 26;  /* extv_internal */
    }
  x1 = XEXP (x0, 1);
  goto L98;

 L121: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L122;
    }
  goto L98;

 L122: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L123;
    }
  goto L98;

 L123: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (immediate_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L124;
    }
  goto L98;

 L124: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1032 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(INTVAL(operands[2]) < 32))
    {
      return 27;  /* extzv_internal */
    }
  x1 = XEXP (x0, 1);
  goto L98;

 L140: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L7999;
 L250: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0]))
    goto L251;
  goto L98;

 L7999: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ASHIFT:
      goto L156;
    case MULT:
      goto L198;
    case REG:
    case SUBREG:
      goto L7998;
    default:
      goto L250;
   }
 L7998: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L177;
    }
  goto L250;

 L156: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L157;
    }
  goto L250;

 L157: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_add_shift_immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L158;
    }
  goto L250;

 L158: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      return 34;  /* addsi3_lsl */
    }
  x2 = XEXP (x1, 0);
  goto L250;

 L198: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L199;
    }
  goto L250;

 L199: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L200;
    }
  goto L250;

 L200: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L201;
    }
  x2 = XEXP (x1, 0);
  goto L250;

 L201: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1180 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((INTVAL(operands[3]) == 0) || (INTVAL(operands[3]) == 2) ||
   (INTVAL(operands[3]) == 4) || (INTVAL(operands[3]) == 8)))
    {
      return 40;  /* addsi3_mul */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L250;

 L177: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L8001;
 L141: ATTRIBUTE_UNUSED_LABEL
  if (avr32_add_operand (x2, SImode))
    {
      operands[2] = x2;
      return 31;  /* addsi3 */
    }
  x2 = XEXP (x1, 0);
  goto L250;

 L8001: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ASHIFT:
      goto L178;
    case MULT:
      goto L223;
    default:
     break;
   }
  goto L141;

 L178: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L179;
    }
  goto L141;

 L179: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_add_shift_immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      return 37;  /* addsi3_lsl2 */
    }
  goto L141;

 L223: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L224;
    }
  goto L141;

 L224: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L225;
    }
  goto L141;

 L225: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1191 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((INTVAL(operands[3]) == 0) || (INTVAL(operands[3]) == 2) ||
   (INTVAL(operands[3]) == 4) || (INTVAL(operands[3]) == 8)))
    {
      return 43;  /* addsi3_mul2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L141;

 L251: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_cond_immediate_operand (x2, SImode))
    {
      operands[1] = x2;
      return 47;  /* addsi_imm_predicable */
    }
  goto L98;

 L280: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L281;
    }
  goto L98;

 L281: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L8003;
  goto L98;

 L8003: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L282;
    case ASHIFT:
      goto L306;
    default:
     break;
   }
  goto L98;

 L282: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L283;
    }
  goto L98;

 L283: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L284;
    }
  goto L98;

 L284: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1279 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((INTVAL(operands[3]) == 0) || (INTVAL(operands[3]) == 2) ||
   (INTVAL(operands[3]) == 4) || (INTVAL(operands[3]) == 8)))
    {
      return 53;  /* *subsi3_mul */
    }
  x1 = XEXP (x0, 1);
  goto L98;

 L306: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L307;
    }
  goto L98;

 L307: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_add_shift_immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      return 56;  /* *subsi3_lsl */
    }
  goto L98;

 L1875: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == IOR)
    goto L1876;
  x1 = XEXP (x0, 0);
  goto L7961;

 L1876: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == IOR)
    goto L1877;
  x1 = XEXP (x0, 0);
  goto L7961;

 L1877: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L1878;
  x1 = XEXP (x0, 0);
  goto L7961;

 L1878: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == AND)
    goto L1879;
  x1 = XEXP (x0, 0);
  goto L7961;

 L1879: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (avr32_bswap_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L1880;
    }
  x1 = XEXP (x0, 0);
  goto L7961;

 L1880: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == -16777216L)
    goto L1881;
  x1 = XEXP (x0, 0);
  goto L7961;

 L1881: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (24)])
    goto L1882;
  x1 = XEXP (x0, 0);
  goto L7961;

 L1882: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L1883;
  x1 = XEXP (x0, 0);
  goto L7961;

 L1883: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == AND)
    goto L1884;
  x1 = XEXP (x0, 0);
  goto L7961;

 L1884: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L1885;
  x1 = XEXP (x0, 0);
  goto L7961;

 L1885: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 16711680L)
    goto L1886;
  x1 = XEXP (x0, 0);
  goto L7961;

 L1886: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L1887;
  x1 = XEXP (x0, 0);
  goto L7961;

 L1887: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == IOR)
    goto L1888;
  x1 = XEXP (x0, 0);
  goto L7961;

 L1888: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ASHIFT)
    goto L1889;
  x1 = XEXP (x0, 0);
  goto L7961;

 L1889: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == AND)
    goto L1890;
  x1 = XEXP (x0, 0);
  goto L7961;

 L1890: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L1891;
  x1 = XEXP (x0, 0);
  goto L7961;

 L1891: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 65280L)
    goto L1892;
  x1 = XEXP (x0, 0);
  goto L7961;

 L1892: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L1893;
  x1 = XEXP (x0, 0);
  goto L7961;

 L1893: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ASHIFT)
    goto L1894;
  x1 = XEXP (x0, 0);
  goto L7961;

 L1894: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == AND)
    goto L1895;
  x1 = XEXP (x0, 0);
  goto L7961;

 L1895: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L1896;
  x1 = XEXP (x0, 0);
  goto L7961;

 L1896: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 255L)
    goto L1897;
  x1 = XEXP (x0, 0);
  goto L7961;

 L1897: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (24)])
    {
      return 267;  /* bswap_32 */
    }
  x1 = XEXP (x0, 0);
  goto L7961;

 L1995: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 12)
    goto L1996;
  goto ret0;

 L1996: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (immediate_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L1997;
    }
  goto ret0;

 L1997: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      return 297;  /* mvcrsi */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_2 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case UNSPEC:
      goto L8108;
    case EQ:
      goto L1126;
    case NE:
      goto L1135;
    case GT:
      goto L1144;
    case GE:
      goto L1153;
    case LT:
      goto L1162;
    case LE:
      goto L1171;
    case GTU:
      goto L1180;
    case GEU:
      goto L1189;
    case LTU:
      goto L1198;
    case LEU:
      goto L1207;
    default:
     break;
   }
  goto ret0;

 L8108: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 2)
    goto L8110;
  goto ret0;

 L8110: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 8L:
      goto L1090;
    case 9L:
      goto L1108;
    default:
      break;
    }
  goto ret0;

 L1090: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CC0)
    goto L1091;
  goto ret0;

 L1091: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1092;
  goto ret0;

 L1092: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L1093;
    case PC:
      goto L1102;
    default:
     break;
   }
  goto ret0;

 L1093: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L1094;

 L1094: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 179;  /* bmi */
    }
  goto ret0;

 L1102: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1103;
  goto ret0;

 L1103: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  return 180;  /* *bmi-reverse */

 L1108: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CC0)
    goto L1109;
  goto ret0;

 L1109: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1110;
  goto ret0;

 L1110: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L1111;
    case PC:
      goto L1120;
    default:
     break;
   }
  goto ret0;

 L1111: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L1112;

 L1112: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 181;  /* bpl */
    }
  goto ret0;

 L1120: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1121;
  goto ret0;

 L1121: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  return 182;  /* *bpl-reverse */

 L1126: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0)
    goto L1127;
  goto ret0;

 L1127: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1128;
  goto ret0;

 L1128: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L1129;
    case PC:
      goto L1219;
    default:
     break;
   }
  goto ret0;

 L1129: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L1130;

 L1130: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 183;  /* beq */
    }
  goto ret0;

 L1219: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1220;
  goto ret0;

 L1220: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  return 193;  /* *beq-reverse */

 L1135: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0)
    goto L1136;
  goto ret0;

 L1136: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1137;
  goto ret0;

 L1137: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L1138;
    case PC:
      goto L1228;
    default:
     break;
   }
  goto ret0;

 L1138: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L1139;

 L1139: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 184;  /* bne */
    }
  goto ret0;

 L1228: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1229;
  goto ret0;

 L1229: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  return 194;  /* *bne-reverse */

 L1144: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0)
    goto L1145;
  goto ret0;

 L1145: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1146;
  goto ret0;

 L1146: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L1147;
    case PC:
      goto L1237;
    default:
     break;
   }
  goto ret0;

 L1147: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L1148;

 L1148: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 185;  /* bgt */
    }
  goto ret0;

 L1237: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1238;
  goto ret0;

 L1238: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  return 195;  /* *bgt-reverse */

 L1153: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0)
    goto L1154;
  goto ret0;

 L1154: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1155;
  goto ret0;

 L1155: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L1156;
    case PC:
      goto L1246;
    default:
     break;
   }
  goto ret0;

 L1156: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L1157;

 L1157: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 186;  /* bge */
    }
  goto ret0;

 L1246: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1247;
  goto ret0;

 L1247: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  return 196;  /* *bge-reverse */

 L1162: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0)
    goto L1163;
  goto ret0;

 L1163: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1164;
  goto ret0;

 L1164: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L1165;
    case PC:
      goto L1255;
    default:
     break;
   }
  goto ret0;

 L1165: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L1166;

 L1166: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 187;  /* blt */
    }
  goto ret0;

 L1255: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1256;
  goto ret0;

 L1256: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  return 197;  /* *blt-reverse */

 L1171: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0)
    goto L1172;
  goto ret0;

 L1172: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1173;
  goto ret0;

 L1173: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L1174;
    case PC:
      goto L1264;
    default:
     break;
   }
  goto ret0;

 L1174: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L1175;

 L1175: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 188;  /* ble */
    }
  goto ret0;

 L1264: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1265;
  goto ret0;

 L1265: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  return 198;  /* *ble-reverse */

 L1180: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0)
    goto L1181;
  goto ret0;

 L1181: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1182;
  goto ret0;

 L1182: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L1183;
    case PC:
      goto L1273;
    default:
     break;
   }
  goto ret0;

 L1183: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L1184;

 L1184: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 189;  /* bgtu */
    }
  goto ret0;

 L1273: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1274;
  goto ret0;

 L1274: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  return 199;  /* *bgtu-reverse */

 L1189: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0)
    goto L1190;
  goto ret0;

 L1190: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1191;
  goto ret0;

 L1191: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L1192;
    case PC:
      goto L1282;
    default:
     break;
   }
  goto ret0;

 L1192: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L1193;

 L1193: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 190;  /* bgeu */
    }
  goto ret0;

 L1282: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1283;
  goto ret0;

 L1283: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  return 200;  /* *bgeu-reverse */

 L1198: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0)
    goto L1199;
  goto ret0;

 L1199: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1200;
  goto ret0;

 L1200: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L1201;
    case PC:
      goto L1291;
    default:
     break;
   }
  goto ret0;

 L1201: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L1202;

 L1202: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 191;  /* bltu */
    }
  goto ret0;

 L1291: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1292;
  goto ret0;

 L1292: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  return 201;  /* *bltu-reverse */

 L1207: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0)
    goto L1208;
  goto ret0;

 L1208: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1209;
  goto ret0;

 L1209: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L1210;
    case PC:
      goto L1300;
    default:
     break;
   }
  goto ret0;

 L1210: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L1211;

 L1211: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 192;  /* bleu */
    }
  goto ret0;

 L1300: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1301;
  goto ret0;

 L1301: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  return 202;  /* *bleu-reverse */
 ret0:
  return -1;
}

static int
recog_3 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case MINUS:
      goto L660;
    case MULT:
      goto L366;
    case PLUS:
      goto L389;
    case SS_TRUNCATE:
      goto L461;
    case SS_PLUS:
      goto L545;
    case SS_MINUS:
      goto L551;
    case SMIN:
      goto L569;
    case SMAX:
      goto L574;
    case AND:
      goto L579;
    case IOR:
      goto L586;
    case XOR:
      goto L593;
    case ASHIFT:
      goto L895;
    case ASHIFTRT:
      goto L900;
    case LSHIFTRT:
      goto L905;
    case NEG:
      goto L910;
    case ABS:
      goto L918;
    case NOT:
      goto L922;
    case SIGN_EXTEND:
      goto L965;
    case ZERO_EXTEND:
      goto L977;
    case EQ:
      goto L1029;
    case NE:
      goto L1034;
    case GT:
      goto L1039;
    case GE:
      goto L1044;
    case LT:
      goto L1049;
    case LE:
      goto L1054;
    case GTU:
      goto L1059;
    case GEU:
      goto L1064;
    case LTU:
      goto L1069;
    case LEU:
      goto L1074;
    case UNSPEC:
      goto L8159;
    case IF_THEN_ELSE:
      goto L1305;
    case FFS:
      goto L1850;
    case CLZ:
      goto L1903;
    case CTZ:
      goto L1907;
    case UNSPEC_VOLATILE:
      goto L8161;
    case MEM:
      goto L2034;
    default:
     break;
   }
  goto ret0;

 L660: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L661;
    }
 L330: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0]))
    goto L331;
 L345: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_immediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L346;
    }
  goto ret0;

 L661: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L662;
    }
  x2 = XEXP (x1, 0);
  goto L330;

 L662: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 106;  /* subsi_predicable */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L330;

 L331: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_cond_immediate_operand (x2, SImode))
    {
      operands[1] = x2;
      return 60;  /* subsi_imm_predicable */
    }
  x2 = XEXP (x1, 0);
  goto L345;

 L346: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0]))
    {
      return 63;  /* rsubsi_imm_predicable */
    }
  goto ret0;

 L366: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L8171;
  goto ret0;

 L8171: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SIGN_EXTEND)
    goto L373;
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L367;
    }
  goto ret0;

 L373: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode)
    goto L8173;
  goto ret0;

 L8173: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NEG)
    goto L382;
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L374;
    }
  goto ret0;

 L382: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L383;
    }
  goto ret0;

 L383: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L384;
  goto ret0;

 L384: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L385;
    }
  goto ret0;

 L385: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1422 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(!TARGET_NO_MUL_INSNS && TARGET_DSP))
    {
      return 69;  /* mulnhisi3 */
    }
  goto ret0;

 L374: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L375;
  goto ret0;

 L375: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L376;
    }
  goto ret0;

 L376: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1387 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(!TARGET_NO_MUL_INSNS && TARGET_DSP))
    {
      return 68;  /* mulhisi3 */
    }
  goto ret0;

 L367: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_mul_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L368;
    }
  goto ret0;

 L368: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1364 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(!TARGET_NO_MUL_INSNS))
    {
      return 67;  /* mulsi3 */
    }
  goto ret0;

 L389: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L8174;
 L493: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0]))
    goto L494;
  goto ret0;

 L8174: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L390;
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L655;
    }
  goto L493;

 L390: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L8176;
  goto L493;

 L8176: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == SIGN_EXTEND)
    goto L391;
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L416;
    }
  goto L493;

 L391: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L392;
    }
  goto L493;

 L392: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L393;
  goto L493;

 L393: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L394;
    }
  goto L493;

 L394: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 1434 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(!TARGET_NO_MUL_INSNS && TARGET_DSP))
    {
      return 70;  /* machisi3 */
    }
  x2 = XEXP (x1, 0);
  goto L493;

 L416: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L417;
    }
  goto L493;

 L417: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 1469 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(!TARGET_NO_MUL_INSNS))
    {
      return 73;  /* *mulaccsi3 */
    }
  x2 = XEXP (x1, 0);
  goto L493;

 L655: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L656;
    }
  x2 = XEXP (x1, 0);
  goto L493;

 L656: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 105;  /* addsi_predicable */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L493;

 L494: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L495;
  goto ret0;

 L495: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ASHIFT)
    goto L496;
  goto ret0;

 L496: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == MULT)
    goto L497;
  goto ret0;

 L497: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L498;
  goto ret0;

 L498: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, HImode))
    {
      operands[1] = x6;
      goto L499;
    }
  goto ret0;

 L499: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L500;
  goto ret0;

 L500: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, HImode))
    {
      operands[2] = x6;
      goto L501;
    }
  goto ret0;

 L501: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1591 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(!TARGET_NO_MUL_INSNS && TARGET_DSP))
    {
      return 81;  /* macsathh_w */
    }
  goto ret0;

 L461: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L8178;
  goto ret0;

 L8178: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ASHIFT:
      goto L462;
    case ASHIFTRT:
      goto L472;
    default:
     break;
   }
  goto ret0;

 L462: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MULT)
    goto L463;
  goto ret0;

 L463: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L464;
  goto ret0;

 L464: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, HImode))
    {
      operands[1] = x5;
      goto L465;
    }
  goto ret0;

 L465: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L466;
  goto ret0;

 L466: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, HImode))
    {
      operands[2] = x5;
      goto L467;
    }
  goto ret0;

 L467: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1556 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(!TARGET_NO_MUL_INSNS && TARGET_DSP))
    {
      return 78;  /* mulsathh_w */
    }
  goto ret0;

 L472: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L8180;
  goto ret0;

 L8180: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case MULT:
      goto L473;
    case PLUS:
      goto L483;
    default:
     break;
   }
  goto ret0;

 L473: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L474;
  goto ret0;

 L474: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L475;
    }
  goto ret0;

 L475: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L476;
  goto ret0;

 L476: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, HImode))
    {
      operands[2] = x5;
      goto L477;
    }
  goto ret0;

 L477: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (15)]
      && 
#line 1567 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(!TARGET_NO_MUL_INSNS && TARGET_DSP))
    {
      return 79;  /* mulsatwh_w */
    }
  goto ret0;

 L483: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == MULT)
    goto L484;
  goto ret0;

 L484: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L485;
  goto ret0;

 L485: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L486;
    }
  goto ret0;

 L486: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L487;
  goto ret0;

 L487: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, HImode))
    {
      operands[2] = x6;
      goto L488;
    }
  goto ret0;

 L488: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1073741824L)
    goto L489;
  goto ret0;

 L489: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (15)]
      && 
#line 1579 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(!TARGET_NO_MUL_INSNS && TARGET_DSP))
    {
      return 80;  /* mulsatrndwh_w */
    }
  goto ret0;

 L545: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L546;
    }
  goto ret0;

 L546: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L547;
    }
  goto ret0;

 L547: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1648 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_DSP))
    {
      return 86;  /* satadd_w */
    }
  goto ret0;

 L551: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L552;
    }
  goto ret0;

 L552: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L553;
    }
  goto ret0;

 L553: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1658 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_DSP))
    {
      return 87;  /* satsub_w */
    }
  goto ret0;

 L569: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L570;
    }
  goto ret0;

 L570: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      return 90;  /* sminsi3 */
    }
  goto ret0;

 L574: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L575;
    }
  goto ret0;

 L575: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      return 91;  /* smaxsi3 */
    }
  goto ret0;

 L579: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L8182;
 L600: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0]))
    goto L601;
  goto ret0;

 L8182: ATTRIBUTE_UNUSED_LABEL
  if (logical_shift_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L580;
    }
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L607;
    }
  goto L600;

 L580: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L581;
    }
  goto L600;

 L581: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L582;
    }
  goto L600;

 L582: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      return 92;  /* andsi_lshift */
    }
  x2 = XEXP (x1, 0);
  goto L600;

 L607: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      operands[2] = x2;
      return 96;  /* andsi3 */
    }
 L637: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L638;
    }
  x2 = XEXP (x1, 0);
  goto L600;

 L638: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 102;  /* andsi_predicable */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L600;

 L601: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NOT)
    goto L602;
  goto ret0;

 L602: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      return 95;  /* andnsi */
    }
  goto ret0;

 L586: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L8186;
  goto ret0;

 L8186: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == ASHIFT)
    goto L1855;
 L8184: ATTRIBUTE_UNUSED_LABEL
  if (logical_shift_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L587;
    }
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L617;
    }
  goto ret0;

 L1855: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L1856;
  goto L8184;

 L1856: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (16)])
    goto L1857;
  goto L8184;

 L1857: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L1858;
  x2 = XEXP (x1, 0);
  goto L8184;

 L1858: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L1859;
  x2 = XEXP (x1, 0);
  goto L8184;

 L1859: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (16)])
    {
      return 265;  /* *swap_h */
    }
  x2 = XEXP (x1, 0);
  goto L8184;

 L587: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L588;
    }
  goto ret0;

 L588: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L589;
    }
  goto ret0;

 L589: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      return 93;  /* iorsi_lshift */
    }
  goto ret0;

 L617: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      operands[2] = x2;
      return 98;  /* iorsi3 */
    }
 L643: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L644;
    }
  goto ret0;

 L644: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 103;  /* orsi_predicable */
    }
  goto ret0;

 L593: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L8187;
  goto ret0;

 L8187: ATTRIBUTE_UNUSED_LABEL
  if (logical_shift_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L594;
    }
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L627;
    }
  goto ret0;

 L594: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L595;
    }
  goto ret0;

 L595: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L596;
    }
  goto ret0;

 L596: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      return 94;  /* xorsi_lshift */
    }
  goto ret0;

 L627: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      operands[2] = x2;
      return 100;  /* xorsi3 */
    }
 L649: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L650;
    }
  goto ret0;

 L650: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 104;  /* eorsi_predicable */
    }
  goto ret0;

 L895: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L896;
    }
  goto ret0;

 L896: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      operands[2] = x2;
      return 137;  /* ashlsi3 */
    }
  goto ret0;

 L900: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L8190;
  goto ret0;

 L8190: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2046;
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L901;
    }
  goto ret0;

 L2046: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2047;
  goto ret0;

 L2047: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2048;
    }
  goto ret0;

 L2048: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2049;
    }
  goto ret0;

 L2049: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4576 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_rnd_operands(operands[1], operands[2])))
    {
      return 306;  /* *round */
    }
  goto ret0;

 L901: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      operands[2] = x2;
      return 138;  /* ashrsi3 */
    }
  goto ret0;

 L905: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L906;
    }
  goto ret0;

 L906: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      operands[2] = x2;
      return 139;  /* lshrsi3 */
    }
  goto ret0;

 L910: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      return 140;  /* negsi2 */
    }
 L914: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0])
      && 
#line 2334 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 141;  /* negsi2_predicable */
    }
  goto ret0;

 L918: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      return 142;  /* abssi2 */
    }
  goto ret0;

 L922: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      return 143;  /* one_cmplsi2 */
    }
 L926: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0])
      && 
#line 2374 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 144;  /* one_cmplsi2_predicable */
    }
  goto ret0;

 L965: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L8191;
    case QImode:
      goto L8192;
    case SImode:
      goto L8193;
    default:
      break;
    }
  goto ret0;

 L8191: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      return 153;  /* extendhisi2 */
    }
 L8194: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L995;
    }
  goto ret0;

 L995: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2646 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 160;  /* ldsihi_predicable_se */
    }
  goto ret0;

 L8192: ATTRIBUTE_UNUSED_LABEL
  if (extendqi_operand (x2, QImode))
    {
      operands[1] = x2;
      return 154;  /* extendqisi2 */
    }
 L8195: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1000;
    }
  goto ret0;

 L1000: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2646 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 161;  /* ldsiqi_predicable_se */
    }
  goto ret0;

 L8193: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L990;
    }
  goto ret0;

 L990: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2646 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 159;  /* ldsisi_predicable_se */
    }
  goto ret0;

 L977: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L8196;
    case QImode:
      goto L8197;
    case SImode:
      goto L8198;
    default:
      break;
    }
  goto ret0;

 L8196: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      return 156;  /* zero_extendhisi2 */
    }
 L8199: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1010;
    }
  goto ret0;

 L1010: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2658 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 163;  /* ldsihi_predicable_ze */
    }
  goto ret0;

 L8197: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      return 157;  /* zero_extendqisi2 */
    }
 L8200: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1015;
    }
  goto ret0;

 L1015: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2658 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 164;  /* ldsiqi_predicable_ze */
    }
  goto ret0;

 L8198: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1005;
    }
  goto ret0;

 L1005: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2658 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 162;  /* ldsisi_predicable_ze */
    }
  goto ret0;

 L1029: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0)
    goto L1030;
  goto ret0;

 L1030: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 167;  /* seq */
    }
  goto ret0;

 L1034: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0)
    goto L1035;
  goto ret0;

 L1035: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 168;  /* sne */
    }
  goto ret0;

 L1039: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0)
    goto L1040;
  goto ret0;

 L1040: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 169;  /* sgt */
    }
  goto ret0;

 L1044: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0)
    goto L1045;
  goto ret0;

 L1045: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 170;  /* sge */
    }
  goto ret0;

 L1049: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0)
    goto L1050;
  goto ret0;

 L1050: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 171;  /* slt */
    }
  goto ret0;

 L1054: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0)
    goto L1055;
  goto ret0;

 L1055: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 172;  /* sle */
    }
  goto ret0;

 L1059: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0)
    goto L1060;
  goto ret0;

 L1060: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 173;  /* sgtu */
    }
  goto ret0;

 L1064: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0)
    goto L1065;
  goto ret0;

 L1065: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 174;  /* sgeu */
    }
  goto ret0;

 L1069: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0)
    goto L1070;
  goto ret0;

 L1070: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 175;  /* sltu */
    }
  goto ret0;

 L1074: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0)
    goto L1075;
  goto ret0;

 L1075: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 176;  /* sleu */
    }
  goto ret0;

 L8159: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L8201;
    case 3:
      goto L8203;
    case 1:
      goto L8207;
    default:
      break;
    }
  goto ret0;

 L8201: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 8L:
      goto L1079;
    case 9L:
      goto L1084;
    default:
      break;
    }
  goto ret0;

 L1079: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == CC0)
    goto L1080;
  goto ret0;

 L1080: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 177;  /* smi */
    }
  goto ret0;

 L1084: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == CC0)
    goto L1085;
  goto ret0;

 L1085: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 178;  /* spl */
    }
  goto ret0;

 L8203: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 17L:
      goto L1950;
    case 18L:
      goto L1957;
    case 19L:
      goto L1964;
    case 20L:
      goto L1971;
    default:
      break;
    }
  goto ret0;

 L1950: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L1951;
  goto ret0;

 L1951: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L1952;
    }
  goto ret0;

 L1952: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (immediate_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L1953;
    }
  goto ret0;

 L1953: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3826 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_DSP))
    {
      return 286;  /* sats */
    }
  goto ret0;

 L1957: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L1958;
  goto ret0;

 L1958: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L1959;
    }
  goto ret0;

 L1959: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (immediate_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L1960;
    }
  goto ret0;

 L1960: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3838 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_DSP))
    {
      return 287;  /* satu */
    }
  goto ret0;

 L1964: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L1965;
  goto ret0;

 L1965: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L1966;
    }
  goto ret0;

 L1966: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (immediate_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L1967;
    }
  goto ret0;

 L1967: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3850 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_DSP))
    {
      return 288;  /* satrnds */
    }
  goto ret0;

 L1971: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L1972;
  goto ret0;

 L1972: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L1973;
    }
  goto ret0;

 L1973: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (immediate_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L1974;
    }
  goto ret0;

 L1974: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3862 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_DSP))
    {
      return 289;  /* satrndu */
    }
  goto ret0;

 L8207: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 14)
    goto L2393;
  goto ret0;

 L2393: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 512 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT))
    {
      return 360;  /* fpcc_to_reg */
    }
  goto ret0;

 L1305: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (avr32_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L1306;
    }
  goto ret0;

 L1306: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DImode:
      goto L8208;
    case SImode:
      goto L8209;
    case HImode:
      goto L8210;
    case QImode:
      goto L8211;
    default:
      break;
    }
  goto ret0;

 L8208: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[4] = x3;
      goto L1307;
    }
  goto ret0;

 L1307: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_immediate_operand (x3, DImode))
    {
      operands[5] = x3;
      goto L1440;
    }
  goto ret0;

 L1440: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1441;
    }
 L1308: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0]))
    goto L1309;
 L1592: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_register_immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1593;
    }
  goto ret0;

 L1441: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1442;
  x2 = XEXP (x1, 1);
  goto L1308;

 L1442: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L1443;
  x2 = XEXP (x1, 1);
  goto L1308;

 L1443: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      return 215;  /* addsicc_cmpdi */
    }
  x2 = XEXP (x1, 1);
  goto L1308;

 L1309: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1310;
  x2 = XEXP (x1, 1);
  goto L1592;

 L1310: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1311;
    }
  x2 = XEXP (x1, 1);
  goto L1592;

 L1311: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1312;
    }
  x2 = XEXP (x1, 1);
  goto L1592;

 L1312: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2877 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 203;  /* addsicc_cmpdi_reg */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1592;

 L1593: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (avr32_cond_register_immediate_operand (x2, SImode))
    {
      operands[3] = x2;
      return 231;  /* movsicc_cmpdi */
    }
  goto ret0;

 L8209: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L1340;
    }
  goto ret0;

 L1340: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_const_int_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L1470;
    }
  goto ret0;

 L1470: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1471;
    }
 L1341: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0]))
    goto L1342;
 L1600: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_register_immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1601;
    }
  goto ret0;

 L1471: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1472;
  x2 = XEXP (x1, 1);
  goto L1341;

 L1472: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L1473;
  x2 = XEXP (x1, 1);
  goto L1341;

 L1473: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      return 218;  /* addsicc_cmpsi */
    }
  x2 = XEXP (x1, 1);
  goto L1341;

 L1342: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1343;
  x2 = XEXP (x1, 1);
  goto L1600;

 L1343: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1344;
    }
  x2 = XEXP (x1, 1);
  goto L1600;

 L1344: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1345;
    }
  x2 = XEXP (x1, 1);
  goto L1600;

 L1345: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2877 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 206;  /* addsicc_cmpsi_reg */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1600;

 L1601: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (avr32_cond_register_immediate_operand (x2, SImode))
    {
      operands[3] = x2;
      return 232;  /* movsicc_cmpsi */
    }
  goto ret0;

 L8210: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[4] = x3;
      goto L1373;
    }
  goto ret0;

 L1373: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[5] = x3;
      goto L1500;
    }
  goto ret0;

 L1500: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1501;
    }
 L1374: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0]))
    goto L1375;
 L1608: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_register_immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1609;
    }
  goto ret0;

 L1501: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1502;
  x2 = XEXP (x1, 1);
  goto L1374;

 L1502: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L1503;
  x2 = XEXP (x1, 1);
  goto L1374;

 L1503: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      return 221;  /* addsicc_cmphi */
    }
  x2 = XEXP (x1, 1);
  goto L1374;

 L1375: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1376;
  x2 = XEXP (x1, 1);
  goto L1608;

 L1376: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1377;
    }
  x2 = XEXP (x1, 1);
  goto L1608;

 L1377: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1378;
    }
  x2 = XEXP (x1, 1);
  goto L1608;

 L1378: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2877 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 209;  /* addsicc_cmphi_reg */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1608;

 L1609: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (avr32_cond_register_immediate_operand (x2, SImode))
    {
      operands[3] = x2;
      return 233;  /* movsicc_cmphi */
    }
  goto ret0;

 L8211: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, QImode))
    {
      operands[4] = x3;
      goto L1406;
    }
  goto ret0;

 L1406: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[5] = x3;
      goto L1530;
    }
  goto ret0;

 L1530: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1531;
    }
 L1407: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0]))
    goto L1408;
 L1616: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_register_immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1617;
    }
  goto ret0;

 L1531: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1532;
  x2 = XEXP (x1, 1);
  goto L1407;

 L1532: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L1533;
  x2 = XEXP (x1, 1);
  goto L1407;

 L1533: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      return 224;  /* addsicc_cmpqi */
    }
  x2 = XEXP (x1, 1);
  goto L1407;

 L1408: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1409;
  x2 = XEXP (x1, 1);
  goto L1616;

 L1409: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1410;
    }
  x2 = XEXP (x1, 1);
  goto L1616;

 L1410: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1411;
    }
  x2 = XEXP (x1, 1);
  goto L1616;

 L1411: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2877 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 212;  /* addsicc_cmpqi_reg */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1616;

 L1617: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (avr32_cond_register_immediate_operand (x2, SImode))
    {
      operands[3] = x2;
      return 234;  /* movsicc_cmpqi */
    }
  goto ret0;

 L1850: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      return 264;  /* ffssi2 */
    }
  goto ret0;

 L1903: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      return 269;  /* clzsi2 */
    }
  goto ret0;

 L1907: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      return 270;  /* ctzsi2 */
    }
  goto ret0;

 L8161: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L8212;
    case 2:
      goto L8215;
    default:
      break;
    }
  goto ret0;

 L8212: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 3L:
      goto L1927;
    case 11L:
      goto L1934;
    case 22L:
      goto L1940;
    default:
      break;
    }
  goto ret0;

 L1927: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (immediate_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      return 278;  /* mfsr */
    }
  goto ret0;

 L1934: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (immediate_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      return 280;  /* mfdr */
    }
  goto ret0;

 L1940: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 282;  /* mustr */
    }
  goto ret0;

 L8215: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 24)
    goto L2094;
  goto ret0;

 L2094: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (avr32_ks16_memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2095;
    }
  goto ret0;

 L2095: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2096;
  goto ret0;

 L2096: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  return 313;  /* sync_loadsi */

 L2034: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L2035;
  goto ret0;

 L2035: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2036;
    }
  goto ret0;

 L2036: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L2037;
  goto ret0;

 L2037: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == ZERO_EXTRACT)
    goto L2038;
  goto ret0;

 L2038: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2039;
    }
  goto ret0;

 L2039: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2040;
  goto ret0;

 L2040: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 2);
  if (immediate_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L2041;
    }
  goto ret0;

 L2041: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (4)]
      && 
#line 4127 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((INTVAL(operands[3]) == 24 || INTVAL(operands[3]) == 16 || INTVAL(operands[3]) == 8
   || INTVAL(operands[3]) == 0)))
    {
      return 305;  /* ldxi */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_4 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case MINUS:
      goto L690;
    case SS_TRUNCATE:
      goto L439;
    case SS_PLUS:
      goto L557;
    case SS_MINUS:
      goto L563;
    case AND:
      goto L666;
    case IOR:
      goto L672;
    case XOR:
      goto L678;
    case PLUS:
      goto L684;
    case SIGN_EXTEND:
      goto L973;
    case ZERO_EXTEND:
      goto L985;
    case IF_THEN_ELSE:
      goto L1316;
    case VEC_SELECT:
      goto L2067;
    default:
     break;
   }
  goto ret0;

 L690: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L691;
    }
 L335: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0]))
    goto L336;
 L350: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_immediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L351;
    }
  goto ret0;

 L691: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L692;
    }
  x2 = XEXP (x1, 0);
  goto L335;

 L692: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 111;  /* subhi_predicable */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L335;

 L336: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_cond_immediate_operand (x2, HImode))
    {
      operands[1] = x2;
      return 61;  /* subhi_imm_predicable */
    }
  x2 = XEXP (x1, 0);
  goto L350;

 L351: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0]))
    {
      return 64;  /* rsubhi_imm_predicable */
    }
  goto ret0;

 L439: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L440;
  goto ret0;

 L440: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L8228;
  goto ret0;

 L8228: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case MULT:
      goto L441;
    case PLUS:
      goto L451;
    default:
     break;
   }
  goto ret0;

 L441: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L442;
  goto ret0;

 L442: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, HImode))
    {
      operands[1] = x5;
      goto L443;
    }
  goto ret0;

 L443: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L444;
  goto ret0;

 L444: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, HImode))
    {
      operands[2] = x5;
      goto L445;
    }
  goto ret0;

 L445: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (15)]
      && 
#line 1532 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(!TARGET_NO_MUL_INSNS && TARGET_DSP))
    {
      return 76;  /* mulsathh_h */
    }
  goto ret0;

 L451: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == MULT)
    goto L452;
  goto ret0;

 L452: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == SImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L453;
  goto ret0;

 L453: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, HImode))
    {
      operands[1] = x6;
      goto L454;
    }
  goto ret0;

 L454: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == SImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L455;
  goto ret0;

 L455: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, HImode))
    {
      operands[2] = x6;
      goto L456;
    }
  goto ret0;

 L456: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1073741824L)
    goto L457;
  goto ret0;

 L457: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (15)]
      && 
#line 1545 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(!TARGET_NO_MUL_INSNS && TARGET_DSP))
    {
      return 77;  /* mulsatrndhh_h */
    }
  goto ret0;

 L557: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L558;
    }
  goto ret0;

 L558: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L559;
    }
  goto ret0;

 L559: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1668 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_DSP))
    {
      return 88;  /* satadd_h */
    }
  goto ret0;

 L563: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L564;
    }
  goto ret0;

 L564: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L565;
    }
  goto ret0;

 L565: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1678 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_DSP))
    {
      return 89;  /* satsub_h */
    }
  goto ret0;

 L666: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L667;
    }
  goto ret0;

 L667: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L668;
    }
  goto ret0;

 L668: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 107;  /* andhi_predicable */
    }
  goto ret0;

 L672: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L673;
    }
  goto ret0;

 L673: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L674;
    }
  goto ret0;

 L674: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 108;  /* orhi_predicable */
    }
  goto ret0;

 L678: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L679;
    }
  goto ret0;

 L679: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L680;
    }
  goto ret0;

 L680: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 109;  /* eorhi_predicable */
    }
  goto ret0;

 L684: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L685;
    }
  goto ret0;

 L685: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L686;
    }
  goto ret0;

 L686: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 110;  /* addhi_predicable */
    }
  goto ret0;

 L973: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode)
    goto L8230;
  goto ret0;

 L8230: ATTRIBUTE_UNUSED_LABEL
  if (extendqi_operand (x2, QImode))
    {
      operands[1] = x2;
      return 155;  /* extendqihi2 */
    }
 L8231: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1025;
    }
  goto ret0;

 L1025: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2682 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 166;  /* ldhi_predicable_se */
    }
  goto ret0;

 L985: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode)
    goto L8232;
  goto ret0;

 L8232: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      return 158;  /* zero_extendqihi2 */
    }
 L8233: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1020;
    }
  goto ret0;

 L1020: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2670 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 165;  /* ldhi_predicable_ze */
    }
  goto ret0;

 L1316: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (avr32_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L1317;
    }
  goto ret0;

 L1317: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DImode:
      goto L8234;
    case SImode:
      goto L8235;
    case HImode:
      goto L8236;
    case QImode:
      goto L8237;
    default:
      break;
    }
  goto ret0;

 L8234: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[4] = x3;
      goto L1318;
    }
  goto ret0;

 L1318: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_immediate_operand (x3, DImode))
    {
      operands[5] = x3;
      goto L1450;
    }
  goto ret0;

 L1450: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1451;
    }
 L1319: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0]))
    goto L1320;
 L1624: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_register_immediate_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1625;
    }
  goto ret0;

 L1451: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == PLUS)
    goto L1452;
  x2 = XEXP (x1, 1);
  goto L1319;

 L1452: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L1453;
  x2 = XEXP (x1, 1);
  goto L1319;

 L1453: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, HImode))
    {
      operands[3] = x3;
      return 216;  /* addhicc_cmpdi */
    }
  x2 = XEXP (x1, 1);
  goto L1319;

 L1320: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == PLUS)
    goto L1321;
  x2 = XEXP (x1, 1);
  goto L1624;

 L1321: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1322;
    }
  x2 = XEXP (x1, 1);
  goto L1624;

 L1322: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L1323;
    }
  x2 = XEXP (x1, 1);
  goto L1624;

 L1323: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2877 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 204;  /* addhicc_cmpdi_reg */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1624;

 L1625: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (avr32_cond_register_immediate_operand (x2, HImode))
    {
      operands[3] = x2;
      return 235;  /* movhicc_cmpdi */
    }
  goto ret0;

 L8235: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L1351;
    }
  goto ret0;

 L1351: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_const_int_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L1480;
    }
  goto ret0;

 L1480: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1481;
    }
 L1352: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0]))
    goto L1353;
 L1632: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_register_immediate_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1633;
    }
  goto ret0;

 L1481: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == PLUS)
    goto L1482;
  x2 = XEXP (x1, 1);
  goto L1352;

 L1482: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L1483;
  x2 = XEXP (x1, 1);
  goto L1352;

 L1483: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, HImode))
    {
      operands[3] = x3;
      return 219;  /* addhicc_cmpsi */
    }
  x2 = XEXP (x1, 1);
  goto L1352;

 L1353: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == PLUS)
    goto L1354;
  x2 = XEXP (x1, 1);
  goto L1632;

 L1354: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1355;
    }
  x2 = XEXP (x1, 1);
  goto L1632;

 L1355: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L1356;
    }
  x2 = XEXP (x1, 1);
  goto L1632;

 L1356: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2877 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 207;  /* addhicc_cmpsi_reg */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1632;

 L1633: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (avr32_cond_register_immediate_operand (x2, HImode))
    {
      operands[3] = x2;
      return 236;  /* movhicc_cmpsi */
    }
  goto ret0;

 L8236: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[4] = x3;
      goto L1384;
    }
  goto ret0;

 L1384: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[5] = x3;
      goto L1510;
    }
  goto ret0;

 L1510: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1511;
    }
 L1385: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0]))
    goto L1386;
 L1640: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_register_immediate_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1641;
    }
  goto ret0;

 L1511: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == PLUS)
    goto L1512;
  x2 = XEXP (x1, 1);
  goto L1385;

 L1512: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L1513;
  x2 = XEXP (x1, 1);
  goto L1385;

 L1513: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, HImode))
    {
      operands[3] = x3;
      return 222;  /* addhicc_cmphi */
    }
  x2 = XEXP (x1, 1);
  goto L1385;

 L1386: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == PLUS)
    goto L1387;
  x2 = XEXP (x1, 1);
  goto L1640;

 L1387: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1388;
    }
  x2 = XEXP (x1, 1);
  goto L1640;

 L1388: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L1389;
    }
  x2 = XEXP (x1, 1);
  goto L1640;

 L1389: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2877 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 210;  /* addhicc_cmphi_reg */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1640;

 L1641: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (avr32_cond_register_immediate_operand (x2, HImode))
    {
      operands[3] = x2;
      return 237;  /* movhicc_cmphi */
    }
  goto ret0;

 L8237: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, QImode))
    {
      operands[4] = x3;
      goto L1417;
    }
  goto ret0;

 L1417: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[5] = x3;
      goto L1540;
    }
  goto ret0;

 L1540: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1541;
    }
 L1418: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0]))
    goto L1419;
 L1648: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_register_immediate_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1649;
    }
  goto ret0;

 L1541: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == PLUS)
    goto L1542;
  x2 = XEXP (x1, 1);
  goto L1418;

 L1542: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L1543;
  x2 = XEXP (x1, 1);
  goto L1418;

 L1543: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, HImode))
    {
      operands[3] = x3;
      return 225;  /* addhicc_cmpqi */
    }
  x2 = XEXP (x1, 1);
  goto L1418;

 L1419: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == PLUS)
    goto L1420;
  x2 = XEXP (x1, 1);
  goto L1648;

 L1420: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1421;
    }
  x2 = XEXP (x1, 1);
  goto L1648;

 L1421: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L1422;
    }
  x2 = XEXP (x1, 1);
  goto L1648;

 L1422: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2877 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 213;  /* addhicc_cmpqi_reg */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1648;

 L1649: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (avr32_cond_register_immediate_operand (x2, HImode))
    {
      operands[3] = x2;
      return 238;  /* movhicc_cmpqi */
    }
  goto ret0;

 L2067: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L2068;
    }
  goto ret0;

 L2068: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 1)
    goto L2069;
  goto ret0;

 L2069: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (immediate_operand (x3, SImode))
    {
      operands[2] = x3;
      return 309;  /* vec_extractv2hi */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_5 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case QImode:
      goto L7935;
    case HImode:
      goto L7936;
    case SImode:
      goto L7956;
    case V2HImode:
      goto L7938;
    case V4QImode:
      goto L7939;
    case DImode:
      goto L7941;
    case TImode:
      goto L7942;
    case SFmode:
      goto L7943;
    case DFmode:
      goto L7944;
    case BLKmode:
      goto L7957;
    case CCmode:
      goto L7969;
    default:
      break;
    }
 L928: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case CC0:
      goto L929;
    case PC:
      goto L1088;
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST:
    case REG:
    case SUBREG:
    case MEM:
    case LABEL_REF:
    case SYMBOL_REF:
      goto L263;
    default:
      goto L328;
   }
 L263: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L264;
    }
 L328: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L329;
    }
  if (general_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L269;
    }
 L333: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L334;
    }
  if (general_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L274;
    }
 L338: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L339;
    }
 L1708: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L1709;
    }
  goto ret0;

 L7935: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L2;
    }
 L7947: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L75;
    }
 L7951: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L91;
    }
 L7955: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L149;
    }
  goto L928;

 L2: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L3;
    }
  x1 = XEXP (x0, 0);
  goto L7947;

 L3: ATTRIBUTE_UNUSED_LABEL
  if (
#line 398 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(register_operand (operands[0], QImode)
   || register_operand (operands[1], QImode)))
    {
      return 0;  /* *movqi_internal */
    }
  x1 = XEXP (x0, 0);
  goto L7947;

 L75: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (memory_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L76;
    }
  x1 = XEXP (x0, 0);
  goto L7951;

 L76: ATTRIBUTE_UNUSED_LABEL
  if (
#line 920 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 16;  /* ldqi_predicable */
    }
  x1 = XEXP (x0, 0);
  goto L7951;

 L91: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L92;
    }
  x1 = XEXP (x0, 0);
  goto L7955;

 L92: ATTRIBUTE_UNUSED_LABEL
  if (
#line 932 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 20;  /* stqi_predicable */
    }
  x1 = XEXP (x0, 0);
  goto L7955;

 L149: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L7970;
 L104: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_register_immediate_operand (x1, QImode))
    {
      operands[1] = x1;
      return 24;  /* movqi_predicable */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L7970: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L150;
    case MINUS:
      goto L296;
    default:
     break;
   }
  goto L104;

 L150: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode)
    goto L7973;
 L260: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0]))
    goto L261;
  goto L104;

 L7973: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ASHIFT:
      goto L170;
    case MULT:
      goto L214;
    case REG:
    case SUBREG:
      goto L7972;
    default:
      goto L260;
   }
 L7972: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L191;
    }
  goto L260;

 L170: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L171;
    }
  goto L260;

 L171: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_add_shift_immediate_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L172;
    }
  goto L260;

 L172: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[2] = x2;
      return 36;  /* addqi3_lsl */
    }
  x2 = XEXP (x1, 0);
  goto L260;

 L214: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L215;
    }
  goto L260;

 L215: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L216;
    }
  goto L260;

 L216: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L217;
    }
  x2 = XEXP (x1, 0);
  goto L260;

 L217: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1180 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((INTVAL(operands[3]) == 0) || (INTVAL(operands[3]) == 2) ||
   (INTVAL(operands[3]) == 4) || (INTVAL(operands[3]) == 8)))
    {
      return 42;  /* addqi3_mul */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L260;

 L191: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L7975;
 L151: ATTRIBUTE_UNUSED_LABEL
  if (avr32_add_operand (x2, QImode))
    {
      operands[2] = x2;
      return 33;  /* addqi3 */
    }
  x2 = XEXP (x1, 0);
  goto L260;

 L7975: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ASHIFT:
      goto L192;
    case MULT:
      goto L239;
    default:
     break;
   }
  goto L151;

 L192: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L193;
    }
  goto L151;

 L193: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_add_shift_immediate_operand (x3, QImode))
    {
      operands[3] = x3;
      return 39;  /* addqi3_lsl2 */
    }
  goto L151;

 L239: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L240;
    }
  goto L151;

 L240: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L241;
    }
  goto L151;

 L241: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1191 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((INTVAL(operands[3]) == 0) || (INTVAL(operands[3]) == 2) ||
   (INTVAL(operands[3]) == 4) || (INTVAL(operands[3]) == 8)))
    {
      return 45;  /* addqi3_mul2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L151;

 L261: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_cond_immediate_operand (x2, QImode))
    {
      operands[1] = x2;
      return 49;  /* addqi_imm_predicable */
    }
  goto L104;

 L296: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L297;
    }
  goto L104;

 L297: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L7977;
  goto L104;

 L7977: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L298;
    case ASHIFT:
      goto L320;
    default:
     break;
   }
  goto L104;

 L298: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L299;
    }
  goto L104;

 L299: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L300;
    }
  goto L104;

 L300: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1279 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((INTVAL(operands[3]) == 0) || (INTVAL(operands[3]) == 2) ||
   (INTVAL(operands[3]) == 4) || (INTVAL(operands[3]) == 8)))
    {
      return 55;  /* *subqi3_mul */
    }
  x1 = XEXP (x0, 1);
  goto L104;

 L320: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L321;
    }
  goto L104;

 L321: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_add_shift_immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      return 58;  /* *subqi3_lsl */
    }
  goto L104;

 L7936: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L6;
    }
 L7946: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L71;
    }
 L7950: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L87;
    }
 L7954: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L144;
    }
 L7959: ATTRIBUTE_UNUSED_LABEL
  if (avr32_bswap_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L1862;
    }
  goto L928;

 L6: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L7;
    }
  x1 = XEXP (x0, 0);
  goto L7946;

 L7: ATTRIBUTE_UNUSED_LABEL
  if (
#line 435 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(register_operand (operands[0], HImode)
   || register_operand (operands[1], HImode)))
    {
      return 1;  /* *movhi_internal */
    }
  x1 = XEXP (x0, 0);
  goto L7946;

 L71: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (memory_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L72;
    }
  x1 = XEXP (x0, 0);
  goto L7950;

 L72: ATTRIBUTE_UNUSED_LABEL
  if (
#line 920 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 15;  /* ldhi_predicable */
    }
  x1 = XEXP (x0, 0);
  goto L7950;

 L87: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L88;
    }
  x1 = XEXP (x0, 0);
  goto L7954;

 L88: ATTRIBUTE_UNUSED_LABEL
  if (
#line 932 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 19;  /* sthi_predicable */
    }
  x1 = XEXP (x0, 0);
  goto L7954;

 L144: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L7979;
 L101: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_register_immediate_operand (x1, HImode))
    {
      operands[1] = x1;
      return 23;  /* movhi_predicable */
    }
  x1 = XEXP (x0, 0);
  goto L7959;

 L7979: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L145;
    case MINUS:
      goto L288;
    default:
     break;
   }
  goto L101;

 L145: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode)
    goto L7982;
 L255: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0]))
    goto L256;
  goto L101;

 L7982: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ASHIFT:
      goto L163;
    case MULT:
      goto L206;
    case REG:
    case SUBREG:
      goto L7981;
    default:
      goto L255;
   }
 L7981: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L184;
    }
  goto L255;

 L163: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L164;
    }
  goto L255;

 L164: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_add_shift_immediate_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L165;
    }
  goto L255;

 L165: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[2] = x2;
      return 35;  /* addhi3_lsl */
    }
  x2 = XEXP (x1, 0);
  goto L255;

 L206: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L207;
    }
  goto L255;

 L207: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L208;
    }
  goto L255;

 L208: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L209;
    }
  x2 = XEXP (x1, 0);
  goto L255;

 L209: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1180 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((INTVAL(operands[3]) == 0) || (INTVAL(operands[3]) == 2) ||
   (INTVAL(operands[3]) == 4) || (INTVAL(operands[3]) == 8)))
    {
      return 41;  /* addhi3_mul */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L255;

 L184: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode)
    goto L7984;
 L146: ATTRIBUTE_UNUSED_LABEL
  if (avr32_add_operand (x2, HImode))
    {
      operands[2] = x2;
      return 32;  /* addhi3 */
    }
  x2 = XEXP (x1, 0);
  goto L255;

 L7984: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ASHIFT:
      goto L185;
    case MULT:
      goto L231;
    default:
     break;
   }
  goto L146;

 L185: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L186;
    }
  goto L146;

 L186: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_add_shift_immediate_operand (x3, HImode))
    {
      operands[3] = x3;
      return 38;  /* addhi3_lsl2 */
    }
  goto L146;

 L231: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L232;
    }
  goto L146;

 L232: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L233;
    }
  goto L146;

 L233: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1191 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((INTVAL(operands[3]) == 0) || (INTVAL(operands[3]) == 2) ||
   (INTVAL(operands[3]) == 4) || (INTVAL(operands[3]) == 8)))
    {
      return 44;  /* addhi3_mul2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L146;

 L256: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_cond_immediate_operand (x2, HImode))
    {
      operands[1] = x2;
      return 48;  /* addhi_imm_predicable */
    }
  goto L101;

 L288: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L289;
    }
  goto L101;

 L289: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode)
    goto L7986;
  goto L101;

 L7986: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L290;
    case ASHIFT:
      goto L313;
    default:
     break;
   }
  goto L101;

 L290: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L291;
    }
  goto L101;

 L291: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L292;
    }
  goto L101;

 L292: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1279 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((INTVAL(operands[3]) == 0) || (INTVAL(operands[3]) == 2) ||
   (INTVAL(operands[3]) == 4) || (INTVAL(operands[3]) == 8)))
    {
      return 54;  /* *subhi3_mul */
    }
  x1 = XEXP (x0, 1);
  goto L101;

 L313: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L314;
    }
  goto L101;

 L314: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_add_shift_immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      return 57;  /* *subhi3_lsl */
    }
  goto L101;

 L1862: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == IOR)
    goto L1863;
  x1 = XEXP (x0, 0);
  goto L928;

 L1863: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == AND)
    goto L1864;
  x1 = XEXP (x0, 0);
  goto L928;

 L1864: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L1865;
  x1 = XEXP (x0, 0);
  goto L928;

 L1865: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (avr32_bswap_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L1866;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L1866: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L1867;
  x1 = XEXP (x0, 0);
  goto L928;

 L1867: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 255L)
    goto L1868;
  x1 = XEXP (x0, 0);
  goto L928;

 L1868: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ASHIFT)
    goto L1869;
  x1 = XEXP (x0, 0);
  goto L928;

 L1869: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == AND)
    goto L1870;
  x1 = XEXP (x0, 0);
  goto L928;

 L1870: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L1871;
  x1 = XEXP (x0, 0);
  goto L928;

 L1871: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 255L)
    goto L1872;
  x1 = XEXP (x0, 0);
  goto L928;

 L1872: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    {
      return 266;  /* bswap_16 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L7956: ATTRIBUTE_UNUSED_LABEL
  tem = recog_1 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L928;

 L7938: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2HImode))
    {
      operands[0] = x1;
      goto L14;
    }
 L7963: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2HImode))
    {
      operands[0] = x1;
      goto L2052;
    }
  goto L928;

 L14: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, V2HImode))
    {
      operands[1] = x1;
      goto L15;
    }
  x1 = XEXP (x0, 0);
  goto L7963;

 L15: ATTRIBUTE_UNUSED_LABEL
  if (
#line 493 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(register_operand (operands[0], V2HImode)
   || register_operand (operands[1], V2HImode)))
    {
      return 3;  /* movv2hi_internal */
    }
  x1 = XEXP (x0, 0);
  goto L7963;

 L2052: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2HImode)
    goto L8005;
  x1 = XEXP (x0, 0);
  goto L928;

 L8005: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case VEC_MERGE:
      goto L2053;
    case VEC_CONCAT:
      goto L2079;
    case PLUS:
      goto L2113;
    case MINUS:
      goto L2125;
    case ABS:
      goto L2137;
    case ASHIFT:
      goto L2147;
    case ASHIFTRT:
      goto L2159;
    case LSHIFTRT:
      goto L2171;
    case SMAX:
      goto L2183;
    case SMIN:
      goto L2189;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L928;

 L2053: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L2054;
  x1 = XEXP (x0, 0);
  goto L928;

 L2054: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2HImode
      && GET_CODE (x2) == VEC_DUPLICATE)
    goto L2055;
  x1 = XEXP (x0, 0);
  goto L928;

 L2055: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2056;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2056: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT)
    goto L8015;
  x1 = XEXP (x0, 0);
  goto L928;

 L8015: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x2, 0) == XWINT (x2, 0))
    switch ((int) XWINT (x2, 0))
      {
      case 1L:
        goto L8017;
      case 2L:
        goto L8018;
      default:
        break;
      }
  x1 = XEXP (x0, 0);
  goto L928;

 L8017: ATTRIBUTE_UNUSED_LABEL
  return 307;  /* vec_setv2hi_hi */

 L8018: ATTRIBUTE_UNUSED_LABEL
  return 308;  /* vec_setv2hi_lo */

 L2079: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode)
    goto L8020;
  x1 = XEXP (x0, 0);
  goto L928;

 L8020: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L2208;
    case MINUS:
      goto L2217;
    case REG:
    case SUBREG:
      goto L8019;
    default:
      x1 = XEXP (x0, 0);
      goto L928;
   }
 L8019: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L2080;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2208: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2209;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2209: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2210;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2210: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == MINUS)
    goto L2211;
  x1 = XEXP (x0, 0);
  goto L928;

 L2211: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2212;
  x1 = XEXP (x0, 0);
  goto L928;

 L2212: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 131 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md"
(TARGET_SIMD))
    {
      return 332;  /* addsubv2hi */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2217: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2218;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2218: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2219;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2219: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == PLUS)
    goto L2220;
  x1 = XEXP (x0, 0);
  goto L928;

 L2220: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2221;
  x1 = XEXP (x0, 0);
  goto L928;

 L2221: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 142 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md"
(TARGET_SIMD))
    {
      return 333;  /* subaddv2hi */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2080: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[2] = x2;
      return 311;  /* concatv2hi */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2113: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L2114;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2114: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L2115;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2115: ATTRIBUTE_UNUSED_LABEL
  if (
#line 33 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md"
(TARGET_SIMD))
    {
      return 316;  /* addv2hi3 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2125: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L2126;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2126: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L2127;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2127: ATTRIBUTE_UNUSED_LABEL
  if (
#line 43 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md"
(TARGET_SIMD))
    {
      return 318;  /* subv2hi3 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2137: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L2138;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2138: ATTRIBUTE_UNUSED_LABEL
  if (
#line 52 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md"
(TARGET_SIMD))
    {
      return 320;  /* absv2hi2 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2147: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L2148;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2148: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2149;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2149: ATTRIBUTE_UNUSED_LABEL
  if (
#line 61 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md"
(TARGET_SIMD))
    {
      return 322;  /* ashlv2hi3 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2159: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L2160;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2160: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2161;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2161: ATTRIBUTE_UNUSED_LABEL
  if (
#line 70 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md"
(TARGET_SIMD))
    {
      return 324;  /* ashrv2hi3 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2171: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L2172;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2172: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2173;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2173: ATTRIBUTE_UNUSED_LABEL
  if (
#line 79 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md"
(TARGET_SIMD))
    {
      return 326;  /* lshrv2hi3 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2183: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L2184;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2184: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L2185;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2185: ATTRIBUTE_UNUSED_LABEL
  if (
#line 89 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md"
(TARGET_SIMD))
    {
      return 328;  /* smaxv2hi3 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2189: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L2190;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2190: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L2191;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2191: ATTRIBUTE_UNUSED_LABEL
  if (
#line 99 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md"
(TARGET_SIMD))
    {
      return 329;  /* sminv2hi3 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L7939: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V4QImode))
    {
      operands[0] = x1;
      goto L18;
    }
 L7965: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4QImode))
    {
      operands[0] = x1;
      goto L2118;
    }
  goto L928;

 L18: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, V4QImode))
    {
      operands[1] = x1;
      goto L19;
    }
  x1 = XEXP (x0, 0);
  goto L7965;

 L19: ATTRIBUTE_UNUSED_LABEL
  if (
#line 493 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(register_operand (operands[0], V4QImode)
   || register_operand (operands[1], V4QImode)))
    {
      return 4;  /* movv4qi_internal */
    }
  x1 = XEXP (x0, 0);
  goto L7965;

 L2118: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4QImode)
    goto L8022;
  x1 = XEXP (x0, 0);
  goto L928;

 L8022: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L2119;
    case MINUS:
      goto L2131;
    case ABS:
      goto L2142;
    case ASHIFT:
      goto L2153;
    case ASHIFTRT:
      goto L2165;
    case LSHIFTRT:
      goto L2177;
    case UMAX:
      goto L2195;
    case UMIN:
      goto L2201;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L928;

 L2119: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L2120;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2120: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L2121;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2121: ATTRIBUTE_UNUSED_LABEL
  if (
#line 33 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md"
(TARGET_SIMD))
    {
      return 317;  /* addv4qi3 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2131: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L2132;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2132: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L2133;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2133: ATTRIBUTE_UNUSED_LABEL
  if (
#line 43 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md"
(TARGET_SIMD))
    {
      return 319;  /* subv4qi3 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2142: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L2143;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2143: ATTRIBUTE_UNUSED_LABEL
  if (
#line 52 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md"
(TARGET_SIMD))
    {
      return 321;  /* absv4qi2 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2153: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L2154;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2154: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2155;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2155: ATTRIBUTE_UNUSED_LABEL
  if (
#line 61 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md"
(TARGET_SIMD))
    {
      return 323;  /* ashlv4qi3 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2165: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L2166;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2166: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2167;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2167: ATTRIBUTE_UNUSED_LABEL
  if (
#line 70 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md"
(TARGET_SIMD))
    {
      return 325;  /* ashrv4qi3 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2177: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L2178;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2178: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2179;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2179: ATTRIBUTE_UNUSED_LABEL
  if (
#line 79 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md"
(TARGET_SIMD))
    {
      return 327;  /* lshrv4qi3 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2195: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L2196;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2196: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L2197;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2197: ATTRIBUTE_UNUSED_LABEL
  if (
#line 109 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md"
(TARGET_SIMD))
    {
      return 330;  /* umaxv4qi3 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2201: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L2202;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2202: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L2203;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2203: ATTRIBUTE_UNUSED_LABEL
  if (
#line 119 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md"
(TARGET_SIMD))
    {
      return 331;  /* uminv4qi3 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L7941: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L47;
    }
 L7958: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L244;
    }
 L7962: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cop_move_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L2000;
    }
  goto L928;

 L47: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L48;
    }
  x1 = XEXP (x0, 0);
  goto L7958;

 L48: ATTRIBUTE_UNUSED_LABEL
  if (
#line 616 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(register_operand (operands[0], DImode)
   || register_operand (operands[1], DImode)))
    {
      return 9;  /* *movdi_internal */
    }
  x1 = XEXP (x0, 0);
  goto L7958;

 L244: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L8030;
  x1 = XEXP (x0, 0);
  goto L7962;

 L8030: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L245;
    case MINUS:
      goto L325;
    case MULT:
      goto L398;
    case ASHIFT:
      goto L505;
    case AND:
      goto L611;
    case IOR:
      goto L621;
    case XOR:
      goto L631;
    case UNSPEC:
      goto L8039;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L7962;

 L245: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L8042;
 L524: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0]))
    goto L525;
  x1 = XEXP (x0, 0);
  goto L7962;

 L8042: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L422;
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L246;
    }
  goto L524;

 L422: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L8043;
  goto L524;

 L8043: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L423;
    case ZERO_EXTEND:
      goto L432;
    default:
     break;
   }
  goto L524;

 L423: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L424;
    }
  goto L524;

 L424: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L425;
  goto L524;

 L425: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L426;
    }
  goto L524;

 L426: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 1481 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(!TARGET_NO_MUL_INSNS))
    {
      return 74;  /* mulaccsidi3 */
    }
  x2 = XEXP (x1, 0);
  goto L524;

 L432: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L433;
    }
  goto L524;

 L433: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L434;
  goto L524;

 L434: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L435;
    }
  goto L524;

 L435: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 1493 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(!TARGET_NO_MUL_INSNS))
    {
      return 75;  /* umulaccsidi3 */
    }
  x2 = XEXP (x1, 0);
  goto L524;

 L246: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      return 46;  /* adddi3 */
    }
  x2 = XEXP (x1, 0);
  goto L524;

 L525: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L8045;
  x1 = XEXP (x0, 0);
  goto L7962;

 L8045: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ASHIFT:
      goto L526;
    case MULT:
      goto L537;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L7962;

 L526: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MULT)
    goto L527;
  x1 = XEXP (x0, 0);
  goto L7962;

 L527: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L528;
  x1 = XEXP (x0, 0);
  goto L7962;

 L528: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L529;
    }
  x1 = XEXP (x0, 0);
  goto L7962;

 L529: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L530;
  x1 = XEXP (x0, 0);
  goto L7962;

 L530: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, HImode))
    {
      operands[2] = x5;
      goto L531;
    }
  x1 = XEXP (x0, 0);
  goto L7962;

 L531: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (16)]
      && 
#line 1627 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(!TARGET_NO_MUL_INSNS && TARGET_DSP))
    {
      return 84;  /* macwh_d */
    }
  x1 = XEXP (x0, 0);
  goto L7962;

 L537: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L538;
  x1 = XEXP (x0, 0);
  goto L7962;

 L538: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L539;
    }
  x1 = XEXP (x0, 0);
  goto L7962;

 L539: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L540;
  x1 = XEXP (x0, 0);
  goto L7962;

 L540: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L541;
    }
  x1 = XEXP (x0, 0);
  goto L7962;

 L541: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1638 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(!TARGET_NO_MUL_INSNS && TARGET_DSP))
    {
      return 85;  /* machh_d */
    }
  x1 = XEXP (x0, 0);
  goto L7962;

 L325: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L326;
    }
  x1 = XEXP (x0, 0);
  goto L7962;

 L326: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      return 59;  /* subdi3 */
    }
  x1 = XEXP (x0, 0);
  goto L7962;

 L398: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L8047;
  x1 = XEXP (x0, 0);
  goto L7962;

 L8047: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SIGN_EXTEND:
      goto L399;
    case ZERO_EXTEND:
      goto L407;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L7962;

 L399: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L400;
    }
  x1 = XEXP (x0, 0);
  goto L7962;

 L400: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L401;
  x1 = XEXP (x0, 0);
  goto L7962;

 L401: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L402;
    }
  x1 = XEXP (x0, 0);
  goto L7962;

 L402: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1447 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(!TARGET_NO_MUL_INSNS))
    {
      return 71;  /* mulsidi3 */
    }
  x1 = XEXP (x0, 0);
  goto L7962;

 L407: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L408;
    }
  x1 = XEXP (x0, 0);
  goto L7962;

 L408: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L409;
  x1 = XEXP (x0, 0);
  goto L7962;

 L409: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L410;
    }
  x1 = XEXP (x0, 0);
  goto L7962;

 L410: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1458 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(!TARGET_NO_MUL_INSNS))
    {
      return 72;  /* umulsidi3 */
    }
  x1 = XEXP (x0, 0);
  goto L7962;

 L505: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MULT)
    goto L506;
  x1 = XEXP (x0, 0);
  goto L7962;

 L506: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L8049;
  x1 = XEXP (x0, 0);
  goto L7962;

 L8049: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L507;
    case NOT:
      goto L516;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L7962;

 L507: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L508;
    }
  x1 = XEXP (x0, 0);
  goto L7962;

 L508: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L509;
  x1 = XEXP (x0, 0);
  goto L7962;

 L509: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L510;
    }
  x1 = XEXP (x0, 0);
  goto L7962;

 L510: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (16)]
      && 
#line 1603 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(!TARGET_NO_MUL_INSNS && TARGET_DSP))
    {
      return 82;  /* mulwh_d */
    }
  x1 = XEXP (x0, 0);
  goto L7962;

 L516: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L517;
  x1 = XEXP (x0, 0);
  goto L7962;

 L517: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L518;
    }
  x1 = XEXP (x0, 0);
  goto L7962;

 L518: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L519;
  x1 = XEXP (x0, 0);
  goto L7962;

 L519: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L520;
    }
  x1 = XEXP (x0, 0);
  goto L7962;

 L520: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (16)]
      && 
#line 1615 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(!TARGET_NO_MUL_INSNS && TARGET_DSP))
    {
      return 83;  /* mulnwh_d */
    }
  x1 = XEXP (x0, 0);
  goto L7962;

 L611: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L612;
    }
  x1 = XEXP (x0, 0);
  goto L7962;

 L612: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      return 97;  /* anddi3 */
    }
  x1 = XEXP (x0, 0);
  goto L7962;

 L621: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L622;
    }
  x1 = XEXP (x0, 0);
  goto L7962;

 L622: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      return 99;  /* iordi3 */
    }
  x1 = XEXP (x0, 0);
  goto L7962;

 L631: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L632;
    }
  x1 = XEXP (x0, 0);
  goto L7962;

 L632: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      return 101;  /* xordi3 */
    }
  x1 = XEXP (x0, 0);
  goto L7962;

 L8039: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2)
    goto L8051;
  x1 = XEXP (x0, 0);
  goto L7962;

 L8051: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 3L:
      goto L885;
    case 2L:
      goto L890;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L7962;

 L885: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L886;
    }
  x1 = XEXP (x0, 0);
  goto L7962;

 L886: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      return 135;  /* divmodsi4_internal */
    }
  x1 = XEXP (x0, 0);
  goto L7962;

 L890: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L891;
    }
  x1 = XEXP (x0, 0);
  goto L7962;

 L891: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      return 136;  /* udivmodsi4_internal */
    }
  x1 = XEXP (x0, 0);
  goto L7962;

 L2000: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 12)
    goto L2001;
  x1 = XEXP (x0, 0);
  goto L928;

 L2001: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (immediate_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L2002;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2002: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      return 298;  /* mvcrdi */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L7942: ATTRIBUTE_UNUSED_LABEL
  if (avr32_movti_dst_operand (x1, TImode))
    {
      operands[0] = x1;
      goto L51;
    }
  goto L928;

 L51: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (avr32_movti_src_operand (x1, TImode))
    {
      operands[1] = x1;
      goto L52;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L52: ATTRIBUTE_UNUSED_LABEL
  if (
#line 698 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((register_operand (operands[0], TImode)
    || register_operand (operands[1], TImode))))
    {
      return 10;  /* *movti_internal */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L7943: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L55;
    }
 L7945: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L63;
    }
 L7948: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L79;
    }
 L7952: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L1556;
    }
 L7966: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L2224;
    }
 L7967: ATTRIBUTE_UNUSED_LABEL
  if (avr32_fp_register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L2232;
    }
  goto L928;

 L55: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L56;
    }
  x1 = XEXP (x0, 0);
  goto L7945;

 L56: ATTRIBUTE_UNUSED_LABEL
  if (
#line 806 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((register_operand (operands[0], SFmode)
    || register_operand (operands[1], SFmode))))
    {
      return 11;  /* *movsf_internal */
    }
  x1 = XEXP (x0, 0);
  goto L7945;

 L63: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (memory_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L64;
    }
  x1 = XEXP (x0, 0);
  goto L7948;

 L64: ATTRIBUTE_UNUSED_LABEL
  if (
#line 920 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 13;  /* ldsf_predicable */
    }
  x1 = XEXP (x0, 0);
  goto L7948;

 L79: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L80;
    }
  x1 = XEXP (x0, 0);
  goto L7952;

 L80: ATTRIBUTE_UNUSED_LABEL
  if (
#line 932 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 17;  /* stsf_predicable */
    }
  x1 = XEXP (x0, 0);
  goto L7952;

 L1556: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode
      && GET_CODE (x1) == IF_THEN_ELSE)
    goto L1557;
  if (avr32_cond_register_immediate_operand (x1, SFmode))
    {
      operands[1] = x1;
      return 21;  /* movsf_predicable */
    }
  x1 = XEXP (x0, 0);
  goto L7966;

 L1557: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (avr32_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L1558;
    }
  x1 = XEXP (x0, 0);
  goto L7966;

 L1558: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DImode:
      goto L8053;
    case SImode:
      goto L8054;
    case HImode:
      goto L8055;
    case QImode:
      goto L8056;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L7966;

 L8053: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[4] = x3;
      goto L1559;
    }
  x1 = XEXP (x0, 0);
  goto L7966;

 L1559: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_immediate_operand (x3, DImode))
    {
      operands[5] = x3;
      goto L1560;
    }
  x1 = XEXP (x0, 0);
  goto L7966;

 L1560: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_cond_register_immediate_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L1561;
    }
  x1 = XEXP (x0, 0);
  goto L7966;

 L1561: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (avr32_cond_register_immediate_operand (x2, SFmode))
    {
      operands[3] = x2;
      return 227;  /* movsfcc_cmpdi */
    }
  x1 = XEXP (x0, 0);
  goto L7966;

 L8054: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L1567;
    }
  x1 = XEXP (x0, 0);
  goto L7966;

 L1567: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_const_int_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L1568;
    }
  x1 = XEXP (x0, 0);
  goto L7966;

 L1568: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_cond_register_immediate_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L1569;
    }
  x1 = XEXP (x0, 0);
  goto L7966;

 L1569: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (avr32_cond_register_immediate_operand (x2, SFmode))
    {
      operands[3] = x2;
      return 228;  /* movsfcc_cmpsi */
    }
  x1 = XEXP (x0, 0);
  goto L7966;

 L8055: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[4] = x3;
      goto L1575;
    }
  x1 = XEXP (x0, 0);
  goto L7966;

 L1575: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[5] = x3;
      goto L1576;
    }
  x1 = XEXP (x0, 0);
  goto L7966;

 L1576: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_cond_register_immediate_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L1577;
    }
  x1 = XEXP (x0, 0);
  goto L7966;

 L1577: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (avr32_cond_register_immediate_operand (x2, SFmode))
    {
      operands[3] = x2;
      return 229;  /* movsfcc_cmphi */
    }
  x1 = XEXP (x0, 0);
  goto L7966;

 L8056: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, QImode))
    {
      operands[4] = x3;
      goto L1583;
    }
  x1 = XEXP (x0, 0);
  goto L7966;

 L1583: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[5] = x3;
      goto L1584;
    }
  x1 = XEXP (x0, 0);
  goto L7966;

 L1584: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_cond_register_immediate_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L1585;
    }
  x1 = XEXP (x0, 0);
  goto L7966;

 L1585: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (avr32_cond_register_immediate_operand (x2, SFmode))
    {
      operands[3] = x2;
      return 230;  /* movsfcc_cmpqi */
    }
  x1 = XEXP (x0, 0);
  goto L7966;

 L2224: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L2225;
    }
  x1 = XEXP (x0, 0);
  goto L7967;

 L2225: ATTRIBUTE_UNUSED_LABEL
  if (
#line 83 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT))
    {
      return 334;  /* *movsf_fpcp */
    }
  x1 = XEXP (x0, 0);
  goto L7967;

 L2232: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode)
    goto L8057;
  x1 = XEXP (x0, 0);
  goto L928;

 L8057: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case MULT:
      goto L2233;
    case NEG:
      goto L2239;
    case PLUS:
      goto L2246;
    case MINUS:
      goto L2263;
    case ABS:
      goto L2297;
    case FLOAT_TRUNCATE:
      goto L2302;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L928;

 L2233: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (avr32_fp_register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2234;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2234: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_fp_register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2235;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2235: ATTRIBUTE_UNUSED_LABEL
  if (
#line 134 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT))
    {
      return 336;  /* mulsf3 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2239: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L8063;
  x1 = XEXP (x0, 0);
  goto L928;

 L8063: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L2240;
  if (avr32_fp_register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2293;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2240: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (avr32_fp_register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L2241;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2241: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_fp_register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L2242;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2242: ATTRIBUTE_UNUSED_LABEL
  if (
#line 143 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT))
    {
      return 337;  /* nmulsf3 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2293: ATTRIBUTE_UNUSED_LABEL
  if (
#line 257 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT))
    {
      return 344;  /* negsf2 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2246: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L8065;
  x1 = XEXP (x0, 0);
  goto L928;

 L8065: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L2247;
    case NEG:
      goto L2255;
    case REG:
    case SUBREG:
      goto L8067;
    default:
      x1 = XEXP (x0, 0);
      goto L928;
   }
 L8067: ATTRIBUTE_UNUSED_LABEL
  if (avr32_fp_register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2281;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2247: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (avr32_fp_register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L2248;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2248: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_fp_register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L2249;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2249: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_fp_register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L2250;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2250: ATTRIBUTE_UNUSED_LABEL
  if (
#line 167 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT))
    {
      return 338;  /* macsf3 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2255: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == MULT)
    goto L2256;
  x1 = XEXP (x0, 0);
  goto L928;

 L2256: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (avr32_fp_register_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L2257;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2257: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_fp_register_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L2258;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2258: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_fp_register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L2259;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2259: ATTRIBUTE_UNUSED_LABEL
  if (
#line 177 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT))
    {
      return 339;  /* nmacsf3 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2281: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_fp_register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2282;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2282: ATTRIBUTE_UNUSED_LABEL
  if (
#line 239 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT))
    {
      return 342;  /* addsf3 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2263: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L8068;
  x1 = XEXP (x0, 0);
  goto L928;

 L8068: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L2264;
    case NEG:
      goto L2272;
    case REG:
    case SUBREG:
      goto L8070;
    default:
      x1 = XEXP (x0, 0);
      goto L928;
   }
 L8070: ATTRIBUTE_UNUSED_LABEL
  if (avr32_fp_register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2287;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2264: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (avr32_fp_register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L2265;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2265: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_fp_register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L2266;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2266: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_fp_register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L2267;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2267: ATTRIBUTE_UNUSED_LABEL
  if (
#line 203 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT))
    {
      return 340;  /* msubacsf3 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2272: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == MULT)
    goto L2273;
  x1 = XEXP (x0, 0);
  goto L928;

 L2273: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (avr32_fp_register_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L2274;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2274: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_fp_register_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L2275;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2275: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_fp_register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L2276;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2276: ATTRIBUTE_UNUSED_LABEL
  if (
#line 228 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT))
    {
      return 341;  /* nmsubacsf3 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2287: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_fp_register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2288;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2288: ATTRIBUTE_UNUSED_LABEL
  if (
#line 248 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT))
    {
      return 343;  /* subsf3 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2297: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (avr32_fp_register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2298;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2298: ATTRIBUTE_UNUSED_LABEL
  if (
#line 265 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT))
    {
      return 345;  /* abssf2 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2302: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (avr32_fp_register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2303;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2303: ATTRIBUTE_UNUSED_LABEL
  if (
#line 274 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT))
    {
      return 346;  /* truncdfsf2 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L7944: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L59;
    }
 L7968: ATTRIBUTE_UNUSED_LABEL
  if (avr32_fp_register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L2306;
    }
  goto L928;

 L59: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L60;
    }
  x1 = XEXP (x0, 0);
  goto L7968;

 L60: ATTRIBUTE_UNUSED_LABEL
  if (
#line 873 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_SOFT_FLOAT
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode))))
    {
      return 12;  /* *movdf_internal */
    }
 L2229: ATTRIBUTE_UNUSED_LABEL
  if (
#line 100 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT))
    {
      return 335;  /* *movdf_fpcp */
    }
  x1 = XEXP (x0, 0);
  goto L7968;

 L2306: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode)
    goto L8071;
  x1 = XEXP (x0, 0);
  goto L928;

 L8071: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FLOAT_EXTEND:
      goto L2307;
    case MULT:
      goto L2312;
    case NEG:
      goto L2318;
    case PLUS:
      goto L2325;
    case MINUS:
      goto L2333;
    case ABS:
      goto L2376;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L928;

 L2307: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (avr32_fp_register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2308;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2308: ATTRIBUTE_UNUSED_LABEL
  if (
#line 283 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT))
    {
      return 347;  /* extendsfdf2 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2312: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (avr32_fp_register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2313;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2313: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_fp_register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2314;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2314: ATTRIBUTE_UNUSED_LABEL
  if (
#line 292 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT))
    {
      return 348;  /* muldf3 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2318: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L8077;
  x1 = XEXP (x0, 0);
  goto L928;

 L8077: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L2319;
  if (avr32_fp_register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2372;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2319: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (avr32_fp_register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L2320;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2320: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_fp_register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L2321;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2321: ATTRIBUTE_UNUSED_LABEL
  if (
#line 301 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT))
    {
      return 349;  /* nmuldf3 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2372: ATTRIBUTE_UNUSED_LABEL
  if (
#line 410 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT))
    {
      return 356;  /* negdf2 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2325: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L8079;
  x1 = XEXP (x0, 0);
  goto L928;

 L8079: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L2326;
    case NEG:
      goto L2351;
    case REG:
    case SUBREG:
      goto L8081;
    default:
      x1 = XEXP (x0, 0);
      goto L928;
   }
 L8081: ATTRIBUTE_UNUSED_LABEL
  if (avr32_fp_register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2360;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2326: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (avr32_fp_register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L2327;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2327: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_fp_register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L2328;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2328: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_fp_register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L2329;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2329: ATTRIBUTE_UNUSED_LABEL
  if (
#line 324 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT))
    {
      return 350;  /* macdf3 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2351: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == MULT)
    goto L2352;
  x1 = XEXP (x0, 0);
  goto L928;

 L2352: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (avr32_fp_register_operand (x4, DFmode))
    {
      operands[1] = x4;
      goto L2353;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2353: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_fp_register_operand (x4, DFmode))
    {
      operands[2] = x4;
      goto L2354;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2354: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_fp_register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L2355;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2355: ATTRIBUTE_UNUSED_LABEL
  if (
#line 369 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT))
    {
      return 353;  /* nmacdf3 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2360: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_fp_register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2361;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2361: ATTRIBUTE_UNUSED_LABEL
  if (
#line 393 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT))
    {
      return 354;  /* adddf3 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2333: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L8082;
  x1 = XEXP (x0, 0);
  goto L928;

 L8082: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L2334;
    case NEG:
      goto L2342;
    case REG:
    case SUBREG:
      goto L8084;
    default:
      x1 = XEXP (x0, 0);
      goto L928;
   }
 L8084: ATTRIBUTE_UNUSED_LABEL
  if (avr32_fp_register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2366;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2334: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (avr32_fp_register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L2335;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2335: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_fp_register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L2336;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2336: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_fp_register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L2337;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2337: ATTRIBUTE_UNUSED_LABEL
  if (
#line 334 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT))
    {
      return 351;  /* msubacdf3 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2342: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == MULT)
    goto L2343;
  x1 = XEXP (x0, 0);
  goto L928;

 L2343: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (avr32_fp_register_operand (x4, DFmode))
    {
      operands[1] = x4;
      goto L2344;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2344: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_fp_register_operand (x4, DFmode))
    {
      operands[2] = x4;
      goto L2345;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2345: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_fp_register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L2346;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2346: ATTRIBUTE_UNUSED_LABEL
  if (
#line 359 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT))
    {
      return 352;  /* nmsubacdf3 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2366: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_fp_register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2367;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2367: ATTRIBUTE_UNUSED_LABEL
  if (
#line 402 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT))
    {
      return 355;  /* subdf3 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2376: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (avr32_fp_register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2377;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2377: ATTRIBUTE_UNUSED_LABEL
  if (
#line 418 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT))
    {
      return 357;  /* absdf2 */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L7957: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L127;
  goto L928;

 L127: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == PRE_DEC)
    goto L128;
  goto L928;

 L128: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 2)
    goto L129;
  goto L928;

 L129: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == BLKmode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 0)
    goto L130;
  x1 = XEXP (x0, 0);
  goto L928;

 L130: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      return 28;  /* pushm */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L7969: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 17)
    goto L2380;
  goto L928;

 L2380: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCmode
      && GET_CODE (x1) == COMPARE)
    goto L2381;
  x1 = XEXP (x0, 0);
  goto L928;

 L2381: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L8085;
    case SFmode:
      goto L8086;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L8085: ATTRIBUTE_UNUSED_LABEL
  if (avr32_fp_register_operand (x2, DFmode))
    {
      operands[0] = x2;
      goto L2382;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2382: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_fp_register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2383;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2383: ATTRIBUTE_UNUSED_LABEL
  if (
#line 456 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT))
    {
      return 358;  /* cmpdf_internal */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L8086: ATTRIBUTE_UNUSED_LABEL
  if (avr32_fp_register_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L2388;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2388: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_fp_register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2389;
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L2389: ATTRIBUTE_UNUSED_LABEL
  if (
#line 498 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT))
    {
      return 359;  /* cmpsf_internal */
    }
  x1 = XEXP (x0, 0);
  goto L928;

 L929: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L8087;
    case DImode:
      goto L8088;
    case HImode:
      goto L8090;
    case QImode:
      goto L8091;
    default:
      break;
    }
  goto ret0;

 L8087: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L930;
    case COMPARE:
      goto L940;
    case UNSPEC:
      goto L8095;
    case REG:
    case SUBREG:
      goto L8092;
    default:
      goto ret0;
   }
 L8092: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      return 150;  /* tstsi_internal */
    }
  goto ret0;

 L930: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L931;
    }
  goto ret0;

 L931: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (one_bit_set_operand (x2, SImode))
    {
      operands[1] = x2;
      return 145;  /* bldsi */
    }
  goto ret0;

 L940: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L941;
    }
  goto ret0;

 L941: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_const_int_operand (x2, SImode))
    {
      operands[1] = x2;
      return 147;  /* cmpsi_internal */
    }
  goto ret0;

 L8095: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 15)
    goto L2397;
  goto ret0;

 L2397: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2398;
    }
  goto ret0;

 L2398: ATTRIBUTE_UNUSED_LABEL
  if (
#line 521 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT))
    {
      return 361;  /* reg_to_cc */
    }
  goto ret0;

 L8088: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == COMPARE)
    goto L935;
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      return 151;  /* tstdi_internal */
    }
  goto ret0;

 L935: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L936;
    }
  goto ret0;

 L936: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_immediate_operand (x2, DImode))
    {
      operands[1] = x2;
      return 146;  /* cmpdi_internal */
    }
  goto ret0;

 L8090: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == COMPARE)
    goto L945;
  goto ret0;

 L945: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L946;
    }
  goto ret0;

 L946: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      return 148;  /* cmphi_internal */
    }
  goto ret0;

 L8091: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == COMPARE)
    goto L950;
  goto ret0;

 L950: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L951;
    }
  goto ret0;

 L951: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      return 149;  /* cmpqi_internal */
    }
  goto ret0;

 L1088: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case IF_THEN_ELSE:
      goto L1089;
    case LABEL_REF:
      goto L1685;
    default:
     break;
   }
 L1814: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, SImode))
    {
      operands[0] = x1;
      return 259;  /* indirect_jump_internal */
    }
  goto ret0;

 L1089: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L8096;
 L1718: ATTRIBUTE_UNUSED_LABEL
  if (avr32_comparison_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L1719;
    }
  goto ret0;

 L8096: ATTRIBUTE_UNUSED_LABEL
  tem = recog_2 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L1718;

 L1719: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == RETURN)
    goto L1720;
  goto ret0;

 L1720: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 3193 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE)))
    {
      return 247;  /* return_cond */
    }
  goto ret0;

 L1685: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  return 243;  /* jump */

 L264: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L8112;
  x1 = XEXP (x0, 0);
  goto L328;

 L8112: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case MINUS:
      goto L265;
    case TRUNCATE:
      goto L961;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L328;

 L265: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonmemory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L266;
    }
  x1 = XEXP (x0, 0);
  goto L328;

 L266: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      operands[2] = x2;
      return 50;  /* subsi3 */
    }
  x1 = XEXP (x0, 0);
  goto L328;

 L961: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, DImode))
    {
      operands[1] = x2;
      return 152;  /* truncdisi2 */
    }
  x1 = XEXP (x0, 0);
  goto L328;

 L329: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L8114;
  x1 = XEXP (x0, 0);
  goto L1708;

 L8114: ATTRIBUTE_UNUSED_LABEL
  tem = recog_3 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L1708;

 L269: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == MINUS)
    goto L270;
  x1 = XEXP (x0, 0);
  goto L333;

 L270: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonmemory_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L271;
    }
  x1 = XEXP (x0, 0);
  goto L333;

 L271: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, HImode))
    {
      operands[2] = x2;
      return 51;  /* subhi3 */
    }
  x1 = XEXP (x0, 0);
  goto L333;

 L334: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L8216;
  x1 = XEXP (x0, 0);
  goto L1708;

 L8216: ATTRIBUTE_UNUSED_LABEL
  tem = recog_4 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L1708;

 L274: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode
      && GET_CODE (x1) == MINUS)
    goto L275;
  x1 = XEXP (x0, 0);
  goto L338;

 L275: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonmemory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L276;
    }
  x1 = XEXP (x0, 0);
  goto L338;

 L276: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      return 52;  /* subqi3 */
    }
  x1 = XEXP (x0, 0);
  goto L338;

 L339: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L8238;
  x1 = XEXP (x0, 0);
  goto L1708;

 L8238: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case MINUS:
      goto L720;
    case MULT:
      goto L360;
    case AND:
      goto L696;
    case IOR:
      goto L702;
    case XOR:
      goto L708;
    case PLUS:
      goto L714;
    case IF_THEN_ELSE:
      goto L1327;
    case VEC_SELECT:
      goto L2073;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L1708;

 L720: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L721;
    }
 L340: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0]))
    goto L341;
 L355: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_immediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L356;
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L721: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L722;
    }
  x2 = XEXP (x1, 0);
  goto L340;

 L722: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 116;  /* subqi_predicable */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L340;

 L341: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_cond_immediate_operand (x2, QImode))
    {
      operands[1] = x2;
      return 62;  /* subqi_imm_predicable */
    }
  x2 = XEXP (x1, 0);
  goto L355;

 L356: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0]))
    {
      return 65;  /* rsubqi_imm_predicable */
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L360: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L361;
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L361: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_mul_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L362;
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L362: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1343 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(!TARGET_NO_MUL_INSNS))
    {
      return 66;  /* mulqi3 */
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L696: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L697;
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L697: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L698;
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L698: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 112;  /* andqi_predicable */
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L702: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L703;
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L703: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L704;
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L704: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 113;  /* orqi_predicable */
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L708: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L709;
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L709: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L710;
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L710: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 114;  /* eorqi_predicable */
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L714: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L715;
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L715: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L716;
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L716: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 115;  /* addqi_predicable */
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L1327: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (avr32_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L1328;
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L1328: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DImode:
      goto L8246;
    case SImode:
      goto L8247;
    case HImode:
      goto L8248;
    case QImode:
      goto L8249;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L8246: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[4] = x3;
      goto L1329;
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L1329: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_immediate_operand (x3, DImode))
    {
      operands[5] = x3;
      goto L1460;
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L1460: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1461;
    }
 L1330: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0]))
    goto L1331;
 L1656: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_register_immediate_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1657;
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L1461: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == PLUS)
    goto L1462;
  x2 = XEXP (x1, 1);
  goto L1330;

 L1462: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L1463;
  x2 = XEXP (x1, 1);
  goto L1330;

 L1463: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, QImode))
    {
      operands[3] = x3;
      return 217;  /* addqicc_cmpdi */
    }
  x2 = XEXP (x1, 1);
  goto L1330;

 L1331: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == PLUS)
    goto L1332;
  x2 = XEXP (x1, 1);
  goto L1656;

 L1332: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1333;
    }
  x2 = XEXP (x1, 1);
  goto L1656;

 L1333: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L1334;
    }
  x2 = XEXP (x1, 1);
  goto L1656;

 L1334: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2877 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 205;  /* addqicc_cmpdi_reg */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1656;

 L1657: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (avr32_cond_register_immediate_operand (x2, QImode))
    {
      operands[3] = x2;
      return 239;  /* movqicc_cmpdi */
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L8247: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L1362;
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L1362: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_const_int_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L1490;
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L1490: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1491;
    }
 L1363: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0]))
    goto L1364;
 L1664: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_register_immediate_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1665;
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L1491: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == PLUS)
    goto L1492;
  x2 = XEXP (x1, 1);
  goto L1363;

 L1492: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L1493;
  x2 = XEXP (x1, 1);
  goto L1363;

 L1493: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, QImode))
    {
      operands[3] = x3;
      return 220;  /* addqicc_cmpsi */
    }
  x2 = XEXP (x1, 1);
  goto L1363;

 L1364: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == PLUS)
    goto L1365;
  x2 = XEXP (x1, 1);
  goto L1664;

 L1365: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1366;
    }
  x2 = XEXP (x1, 1);
  goto L1664;

 L1366: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L1367;
    }
  x2 = XEXP (x1, 1);
  goto L1664;

 L1367: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2877 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 208;  /* addqicc_cmpsi_reg */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1664;

 L1665: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (avr32_cond_register_immediate_operand (x2, QImode))
    {
      operands[3] = x2;
      return 240;  /* movqicc_cmpsi */
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L8248: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[4] = x3;
      goto L1395;
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L1395: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[5] = x3;
      goto L1520;
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L1520: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1521;
    }
 L1396: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0]))
    goto L1397;
 L1672: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_register_immediate_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1673;
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L1521: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == PLUS)
    goto L1522;
  x2 = XEXP (x1, 1);
  goto L1396;

 L1522: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L1523;
  x2 = XEXP (x1, 1);
  goto L1396;

 L1523: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, QImode))
    {
      operands[3] = x3;
      return 223;  /* addqicc_cmphi */
    }
  x2 = XEXP (x1, 1);
  goto L1396;

 L1397: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == PLUS)
    goto L1398;
  x2 = XEXP (x1, 1);
  goto L1672;

 L1398: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1399;
    }
  x2 = XEXP (x1, 1);
  goto L1672;

 L1399: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L1400;
    }
  x2 = XEXP (x1, 1);
  goto L1672;

 L1400: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2877 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 211;  /* addqicc_cmphi_reg */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1672;

 L1673: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (avr32_cond_register_immediate_operand (x2, QImode))
    {
      operands[3] = x2;
      return 241;  /* movqicc_cmphi */
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L8249: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, QImode))
    {
      operands[4] = x3;
      goto L1428;
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L1428: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[5] = x3;
      goto L1550;
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L1550: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1551;
    }
 L1429: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0]))
    goto L1430;
 L1680: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_register_immediate_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1681;
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L1551: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == PLUS)
    goto L1552;
  x2 = XEXP (x1, 1);
  goto L1429;

 L1552: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L1553;
  x2 = XEXP (x1, 1);
  goto L1429;

 L1553: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, QImode))
    {
      operands[3] = x3;
      return 226;  /* addqicc_cmpqi */
    }
  x2 = XEXP (x1, 1);
  goto L1429;

 L1430: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == PLUS)
    goto L1431;
  x2 = XEXP (x1, 1);
  goto L1680;

 L1431: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1432;
    }
  x2 = XEXP (x1, 1);
  goto L1680;

 L1432: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L1433;
    }
  x2 = XEXP (x1, 1);
  goto L1680;

 L1433: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2877 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 214;  /* addqicc_cmpqi_reg */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1680;

 L1681: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (avr32_cond_register_immediate_operand (x2, QImode))
    {
      operands[3] = x2;
      return 242;  /* movqicc_cmpqi */
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L2073: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L2074;
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L2074: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 1)
    goto L2075;
  x1 = XEXP (x0, 0);
  goto L1708;

 L2075: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (immediate_operand (x3, SImode))
    {
      operands[2] = x3;
      return 310;  /* vec_extractv4qi */
    }
  x1 = XEXP (x0, 0);
  goto L1708;

 L1709: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CALL)
    goto L1710;
  goto ret0;

 L1710: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1711;
  goto ret0;

 L1711: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (avr32_call_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1712;
    }
  goto ret0;

 L1712: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  goto L1713;

 L1713: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 245;  /* call_value_internal */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_6 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8251;
    case HImode:
      goto L8252;
    case QImode:
      goto L8253;
    default:
      break;
    }
 L1817: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PC)
    goto L1818;
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L1701;
    }
  goto ret0;

 L8251: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L37;
    }
  goto L1817;

 L37: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L8254;
  x2 = XEXP (x1, 0);
  goto L1817;

 L8254: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case UNSPEC:
      goto L8262;
    case AND:
      goto L727;
    case IOR:
      goto L736;
    case XOR:
      goto L745;
    case PLUS:
      goto L754;
    case MINUS:
      goto L763;
    case ZERO_EXTEND:
      goto L862;
    case SUBREG:
    case MEM:
      goto L8261;
    default:
      x2 = XEXP (x1, 0);
      goto L1817;
   }
 L8261: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2085;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L8262: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 11)
    goto L38;
  x2 = XEXP (x1, 0);
  goto L1817;

 L38: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MINUS)
    goto L39;
  x2 = XEXP (x1, 0);
  goto L1817;

 L39: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == PC)
    goto L40;
  x2 = XEXP (x1, 0);
  goto L1817;

 L40: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[0]))
    goto L41;
  x2 = XEXP (x1, 0);
  goto L1817;

 L41: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L42;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L42: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L43;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L43: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L44;

 L44: ATTRIBUTE_UNUSED_LABEL
  if (
#line 588 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(flag_pic))
    {
      return 8;  /* pic_compute_got_from_pc */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L727: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L728;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L728: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_mov_immediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L729;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L729: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L730;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L730: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L731;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L731: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 117;  /* andsi_imm_clobber_predicable */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L736: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L737;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L737: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_mov_immediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L738;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L738: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L739;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L739: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L740;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L740: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 118;  /* orsi_imm_clobber_predicable */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L745: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L746;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L746: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_mov_immediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L747;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L747: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L748;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L748: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L749;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L749: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 119;  /* eorsi_imm_clobber_predicable */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L754: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L755;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L755: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_mov_immediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L756;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L756: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L757;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L757: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L758;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L758: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 120;  /* addsi_imm_clobber_predicable */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L763: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L764;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L764: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_mov_immediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L765;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L765: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L766;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L766: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L767;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L767: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 121;  /* subsi_imm_clobber_predicable */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L862: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case HImode:
      goto L8263;
    case QImode:
      goto L8264;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L8263: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L863;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L863: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L864;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L864: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L865;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L865: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2087 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 132;  /* zero_extendhisi_clobber_predicable */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L8264: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L871;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L871: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L872;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L872: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L873;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L873: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2119 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 133;  /* zero_extendqisi_clobber_predicable */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L2085: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2086;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L2086: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L2087;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L2087: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L8265;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L8265: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 23)
    goto L2088;
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      return 315;  /* sync_lock_test_and_setsi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L2088: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2089;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L2089: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_immediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2090;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L2090: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      return 312;  /* sync_compare_and_swapsi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L8252: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L771;
    }
  goto L1817;

 L771: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode)
    goto L8267;
  x2 = XEXP (x1, 0);
  goto L1817;

 L8267: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case AND:
      goto L772;
    case IOR:
      goto L781;
    case XOR:
      goto L790;
    case PLUS:
      goto L799;
    case MINUS:
      goto L808;
    case ZERO_EXTEND:
      goto L878;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L1817;

 L772: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L773;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L773: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_mov_immediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L774;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L774: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L775;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L775: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L776;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L776: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 122;  /* andhi_imm_clobber_predicable */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L781: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L782;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L782: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_mov_immediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L783;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L783: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L784;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L784: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L785;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L785: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 123;  /* orhi_imm_clobber_predicable */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L790: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L791;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L791: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_mov_immediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L792;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L792: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L793;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L793: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L794;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L794: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 124;  /* eorhi_imm_clobber_predicable */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L799: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L800;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L800: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_mov_immediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L801;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L801: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L802;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L802: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L803;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L803: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 125;  /* addhi_imm_clobber_predicable */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L808: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L809;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L809: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_mov_immediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L810;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L810: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L811;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L811: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L812;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L812: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 126;  /* subhi_imm_clobber_predicable */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L878: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L879;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L879: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L880;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L880: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L881;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L881: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2151 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 134;  /* zero_extendqihi_clobber_predicable */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L8253: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L816;
    }
  goto L1817;

 L816: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L8273;
  x2 = XEXP (x1, 0);
  goto L1817;

 L8273: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case AND:
      goto L817;
    case IOR:
      goto L826;
    case XOR:
      goto L835;
    case PLUS:
      goto L844;
    case MINUS:
      goto L853;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L1817;

 L817: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L818;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L818: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_mov_immediate_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L819;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L819: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L820;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L820: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[3] = x2;
      goto L821;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L821: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 127;  /* andqi_imm_clobber_predicable */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L826: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L827;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L827: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_mov_immediate_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L828;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L828: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L829;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L829: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[3] = x2;
      goto L830;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L830: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 128;  /* orqi_imm_clobber_predicable */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L835: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L836;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L836: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_mov_immediate_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L837;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L837: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L838;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L838: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[3] = x2;
      goto L839;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L839: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 129;  /* eorqi_imm_clobber_predicable */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L844: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L845;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L845: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_mov_immediate_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L846;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L846: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L847;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L847: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[3] = x2;
      goto L848;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L848: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 130;  /* addqi_imm_clobber_predicable */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L853: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L854;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L854: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_mov_immediate_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L855;
    }
  x2 = XEXP (x1, 0);
  goto L1817;

 L855: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L856;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L856: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[3] = x2;
      goto L857;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L857: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 131;  /* subqi_imm_clobber_predicable */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1817;

 L1818: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L8278;
  goto ret0;

 L8278: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1819;
  if (memory_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1831;
    }
  goto ret0;

 L1819: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L1820;
    }
  goto ret0;

 L1820: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L1821;
  goto ret0;

 L1821: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1822;
    }
  goto ret0;

 L1822: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1823;
    }
  goto ret0;

 L1823: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L1824;
  goto ret0;

 L1824: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1825;
  goto ret0;

 L1825: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L1826;

 L1826: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3373 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(flag_pic &&
   ((INTVAL(operands[2]) == 0) || (INTVAL(operands[2]) == 2) ||
    (INTVAL(operands[2]) == 4) || (INTVAL(operands[2]) == 8))))
    {
      return 260;  /* tablejump_add */
    }
  goto ret0;

 L1831: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L1832;
  goto ret0;

 L1832: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1833;
  goto ret0;

 L1833: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L1834;

 L1834: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3383 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(!flag_pic))
    {
      return 261;  /* tablejump_insn */
    }
  goto ret0;

 L1701: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L1702;
  goto ret0;

 L1702: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L1703;
  goto ret0;

 L1703: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (avr32_call_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1704;
    }
  goto ret0;

 L1704: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L1705;

 L1705: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1706;
  goto ret0;

 L1706: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 1)
    {
      return 245;  /* call_value_internal */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_7 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 1);
  if (register_immediate_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L3073;
    }
  goto ret0;

 L3073: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == SET)
    goto L3074;
  goto ret0;

 L3074: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L8323;
    case SImode:
      goto L8324;
    case HImode:
      goto L8325;
    case QImode:
      goto L8326;
    default:
      break;
    }
  goto ret0;

 L8323: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L3075;
    }
 L8327: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L3107;
    }
 L8331: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L3139;
    }
  goto ret0;

 L3075: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3076;
    }
  x2 = XEXP (x1, 0);
  goto L8327;

 L3076: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 920 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 500;  /* cmpsf+1 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8327;

 L3107: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3108;
    }
  x2 = XEXP (x1, 0);
  goto L8331;

 L3108: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 932 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 504;  /* cmpsf+5 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8331;

 L3139: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_cond_register_immediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3140;
    }
  goto ret0;

 L3140: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 508;  /* cmpsf+9 */
    }
  goto ret0;

 L8324: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3083;
    }
 L8328: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3115;
    }
 L8332: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3171;
    }
  goto ret0;

 L3083: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3084;
    }
  x2 = XEXP (x1, 0);
  goto L8328;

 L3084: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 920 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 501;  /* cmpsf+2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8328;

 L3115: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3116;
    }
  x2 = XEXP (x1, 0);
  goto L8332;

 L3116: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 932 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 505;  /* cmpsf+6 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8332;

 L3171: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L8335;
 L3147: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_register_immediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3148;
    }
  goto ret0;

 L8335: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L3172;
    case MINUS:
      goto L3202;
    case SIGN_EXTEND:
      goto L3887;
    case ZERO_EXTEND:
      goto L3914;
    default:
     break;
   }
  goto L3147;

 L3172: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3173;
  goto L3147;

 L3173: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3174;
    }
  goto L3147;

 L3174: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 512;  /* cmpsf+13 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3147;

 L3202: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3203;
 L3232: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_immediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3233;
    }
  goto L3147;

 L3203: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3204;
    }
  x3 = XEXP (x2, 0);
  goto L3232;

 L3204: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 515;  /* cmpsf+16 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L3232;

 L3233: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 518;  /* cmpsf+19 */
    }
  goto L3147;

 L3887: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8339;
    case HImode:
      goto L8340;
    case QImode:
      goto L8341;
    default:
      break;
    }
  goto L3147;

 L8339: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3888;
    }
  goto L3147;

 L3888: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2646 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 574;  /* cmpsf+75 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3147;

 L8340: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L3897;
    }
  goto L3147;

 L3897: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2646 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 575;  /* cmpsf+76 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3147;

 L8341: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3906;
    }
  goto L3147;

 L3906: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2646 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 576;  /* cmpsf+77 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3147;

 L3914: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8342;
    case HImode:
      goto L8343;
    case QImode:
      goto L8344;
    default:
      break;
    }
  goto L3147;

 L8342: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3915;
    }
  goto L3147;

 L3915: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2658 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 577;  /* cmpsf+78 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3147;

 L8343: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L3924;
    }
  goto L3147;

 L3924: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2658 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 578;  /* cmpsf+79 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3147;

 L8344: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3933;
    }
  goto L3147;

 L3933: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2658 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 579;  /* cmpsf+80 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3147;

 L3148: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 509;  /* cmpsf+10 */
    }
  goto ret0;

 L8325: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3091;
    }
 L8329: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3123;
    }
 L8333: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3181;
    }
  goto ret0;

 L3091: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L3092;
    }
  x2 = XEXP (x1, 0);
  goto L8329;

 L3092: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 920 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 502;  /* cmpsf+3 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8329;

 L3123: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L3124;
    }
  x2 = XEXP (x1, 0);
  goto L8333;

 L3124: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 932 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 506;  /* cmpsf+7 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8333;

 L3181: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode)
    goto L8345;
 L3155: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_register_immediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L3156;
    }
  goto ret0;

 L8345: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L3182;
    case MINUS:
      goto L3212;
    case ZERO_EXTEND:
      goto L3941;
    case SIGN_EXTEND:
      goto L3950;
    default:
     break;
   }
  goto L3155;

 L3182: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3183;
  goto L3155;

 L3183: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L3184;
    }
  goto L3155;

 L3184: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 513;  /* cmpsf+14 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3155;

 L3212: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3213;
 L3241: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_immediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L3242;
    }
  goto L3155;

 L3213: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L3214;
    }
  x3 = XEXP (x2, 0);
  goto L3241;

 L3214: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 516;  /* cmpsf+17 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L3241;

 L3242: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 519;  /* cmpsf+20 */
    }
  goto L3155;

 L3941: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3942;
    }
  goto L3155;

 L3942: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2670 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 580;  /* cmpsf+81 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3155;

 L3950: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3951;
    }
  goto L3155;

 L3951: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2682 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 581;  /* cmpsf+82 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3155;

 L3156: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 510;  /* cmpsf+11 */
    }
  goto ret0;

 L8326: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L3099;
    }
 L8330: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L3131;
    }
 L8334: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L3191;
    }
  goto ret0;

 L3099: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3100;
    }
  x2 = XEXP (x1, 0);
  goto L8330;

 L3100: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 920 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 503;  /* cmpsf+4 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8330;

 L3131: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3132;
    }
  x2 = XEXP (x1, 0);
  goto L8334;

 L3132: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 932 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 507;  /* cmpsf+8 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8334;

 L3191: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L8349;
 L3163: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_register_immediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3164;
    }
  goto ret0;

 L8349: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L3192;
    case MINUS:
      goto L3222;
    default:
     break;
   }
  goto L3163;

 L3192: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3193;
  goto L3163;

 L3193: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3194;
    }
  goto L3163;

 L3194: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 514;  /* cmpsf+15 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3163;

 L3222: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3223;
 L3250: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_immediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3251;
    }
  goto L3163;

 L3223: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3224;
    }
  x3 = XEXP (x2, 0);
  goto L3250;

 L3224: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 517;  /* cmpsf+18 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L3250;

 L3251: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 520;  /* cmpsf+21 */
    }
  goto L3163;

 L3164: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 511;  /* cmpsf+12 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_8 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L6803;
  goto ret0;

 L6803: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == SET)
    goto L6804;
  goto ret0;

 L6804: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L8351;
    case SImode:
      goto L8352;
    case HImode:
      goto L8353;
    case QImode:
      goto L8354;
    default:
      break;
    }
  goto ret0;

 L8351: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L6805;
    }
 L8355: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L6845;
    }
 L8359: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L6885;
    }
  goto ret0;

 L6805: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L6806;
    }
  x2 = XEXP (x1, 0);
  goto L8355;

 L6806: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 920 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 848;  /* cmpsf+349 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8355;

 L6845: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L6846;
    }
  x2 = XEXP (x1, 0);
  goto L8359;

 L6846: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 932 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 852;  /* cmpsf+353 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8359;

 L6885: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_cond_register_immediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L6886;
    }
  goto ret0;

 L6886: ATTRIBUTE_UNUSED_LABEL
  if (
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 856;  /* cmpsf+357 */
    }
  goto ret0;

 L8352: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L6815;
    }
 L8356: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L6855;
    }
 L8360: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L6925;
    }
  goto ret0;

 L6815: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6816;
    }
  x2 = XEXP (x1, 0);
  goto L8356;

 L6816: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 920 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 849;  /* cmpsf+350 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8356;

 L6855: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6856;
    }
  x2 = XEXP (x1, 0);
  goto L8360;

 L6856: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 932 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 853;  /* cmpsf+354 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8360;

 L6925: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L8363;
 L6895: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_register_immediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6896;
    }
  goto ret0;

 L8363: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L6926;
    case MINUS:
      goto L6962;
    case SIGN_EXTEND:
      goto L7765;
    case ZERO_EXTEND:
      goto L7798;
    default:
     break;
   }
  goto L6895;

 L6926: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L6927;
  goto L6895;

 L6927: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6928;
    }
  goto L6895;

 L6928: ATTRIBUTE_UNUSED_LABEL
  if (
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 860;  /* cmpsf+361 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L6895;

 L6962: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L6963;
 L6998: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_immediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6999;
    }
  goto L6895;

 L6963: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6964;
    }
  x3 = XEXP (x2, 0);
  goto L6998;

 L6964: ATTRIBUTE_UNUSED_LABEL
  if (
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 863;  /* cmpsf+364 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L6998;

 L6999: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 866;  /* cmpsf+367 */
    }
  goto L6895;

 L7765: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8367;
    case HImode:
      goto L8368;
    case QImode:
      goto L8369;
    default:
      break;
    }
  goto L6895;

 L8367: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7766;
    }
  goto L6895;

 L7766: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2646 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 922;  /* cmpsf+423 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L6895;

 L8368: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L7777;
    }
  goto L6895;

 L7777: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2646 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 923;  /* cmpsf+424 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L6895;

 L8369: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L7788;
    }
  goto L6895;

 L7788: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2646 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 924;  /* cmpsf+425 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L6895;

 L7798: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8370;
    case HImode:
      goto L8371;
    case QImode:
      goto L8372;
    default:
      break;
    }
  goto L6895;

 L8370: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7799;
    }
  goto L6895;

 L7799: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2658 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 925;  /* cmpsf+426 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L6895;

 L8371: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L7810;
    }
  goto L6895;

 L7810: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2658 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 926;  /* cmpsf+427 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L6895;

 L8372: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L7821;
    }
  goto L6895;

 L7821: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2658 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 927;  /* cmpsf+428 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L6895;

 L6896: ATTRIBUTE_UNUSED_LABEL
  if (
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 857;  /* cmpsf+358 */
    }
  goto ret0;

 L8353: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L6825;
    }
 L8357: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L6865;
    }
 L8361: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L6937;
    }
  goto ret0;

 L6825: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L6826;
    }
  x2 = XEXP (x1, 0);
  goto L8357;

 L6826: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 920 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 850;  /* cmpsf+351 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8357;

 L6865: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L6866;
    }
  x2 = XEXP (x1, 0);
  goto L8361;

 L6866: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 932 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 854;  /* cmpsf+355 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8361;

 L6937: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode)
    goto L8373;
 L6905: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_register_immediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L6906;
    }
  goto ret0;

 L8373: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L6938;
    case MINUS:
      goto L6974;
    case ZERO_EXTEND:
      goto L7831;
    case SIGN_EXTEND:
      goto L7842;
    default:
     break;
   }
  goto L6905;

 L6938: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L6939;
  goto L6905;

 L6939: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L6940;
    }
  goto L6905;

 L6940: ATTRIBUTE_UNUSED_LABEL
  if (
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 861;  /* cmpsf+362 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L6905;

 L6974: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L6975;
 L7009: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_immediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L7010;
    }
  goto L6905;

 L6975: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L6976;
    }
  x3 = XEXP (x2, 0);
  goto L7009;

 L6976: ATTRIBUTE_UNUSED_LABEL
  if (
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 864;  /* cmpsf+365 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L7009;

 L7010: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 867;  /* cmpsf+368 */
    }
  goto L6905;

 L7831: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L7832;
    }
  goto L6905;

 L7832: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2670 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 928;  /* cmpsf+429 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L6905;

 L7842: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L7843;
    }
  goto L6905;

 L7843: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2682 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 929;  /* cmpsf+430 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L6905;

 L6906: ATTRIBUTE_UNUSED_LABEL
  if (
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 858;  /* cmpsf+359 */
    }
  goto ret0;

 L8354: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L6835;
    }
 L8358: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L6875;
    }
 L8362: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L6949;
    }
  goto ret0;

 L6835: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L6836;
    }
  x2 = XEXP (x1, 0);
  goto L8358;

 L6836: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 920 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 851;  /* cmpsf+352 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8358;

 L6875: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L6876;
    }
  x2 = XEXP (x1, 0);
  goto L8362;

 L6876: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 932 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 855;  /* cmpsf+356 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8362;

 L6949: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L8377;
 L6915: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_register_immediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L6916;
    }
  goto ret0;

 L8377: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L6950;
    case MINUS:
      goto L6986;
    default:
     break;
   }
  goto L6915;

 L6950: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L6951;
  goto L6915;

 L6951: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L6952;
    }
  goto L6915;

 L6952: ATTRIBUTE_UNUSED_LABEL
  if (
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 862;  /* cmpsf+363 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L6915;

 L6986: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L6987;
 L7020: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_immediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L7021;
    }
  goto L6915;

 L6987: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L6988;
    }
  x3 = XEXP (x2, 0);
  goto L7020;

 L6988: ATTRIBUTE_UNUSED_LABEL
  if (
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 865;  /* cmpsf+366 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L7020;

 L7021: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 868;  /* cmpsf+369 */
    }
  goto L6915;

 L6916: ATTRIBUTE_UNUSED_LABEL
  if (
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 859;  /* cmpsf+360 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_9 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 1);
  if (register_const_int_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L4005;
    }
  goto ret0;

 L4005: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == SET)
    goto L4006;
  goto ret0;

 L4006: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L8379;
    case SImode:
      goto L8380;
    case HImode:
      goto L8381;
    case QImode:
      goto L8382;
    default:
      break;
    }
  goto ret0;

 L8379: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L4007;
    }
 L8383: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L4039;
    }
 L8387: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L4071;
    }
  goto ret0;

 L4007: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L4008;
    }
  x2 = XEXP (x1, 0);
  goto L8383;

 L4008: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 920 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 587;  /* cmpsf+88 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8383;

 L4039: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L4040;
    }
  x2 = XEXP (x1, 0);
  goto L8387;

 L4040: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 932 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 591;  /* cmpsf+92 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8387;

 L4071: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_cond_register_immediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L4072;
    }
  goto ret0;

 L4072: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 595;  /* cmpsf+96 */
    }
  goto ret0;

 L8380: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4015;
    }
 L8384: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4047;
    }
 L8388: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4103;
    }
  goto ret0;

 L4015: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4016;
    }
  x2 = XEXP (x1, 0);
  goto L8384;

 L4016: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 920 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 588;  /* cmpsf+89 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8384;

 L4047: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4048;
    }
  x2 = XEXP (x1, 0);
  goto L8388;

 L4048: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 932 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 592;  /* cmpsf+93 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8388;

 L4103: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L8391;
 L4079: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_register_immediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4080;
    }
  goto ret0;

 L8391: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L4104;
    case MINUS:
      goto L4134;
    case SIGN_EXTEND:
      goto L4819;
    case ZERO_EXTEND:
      goto L4846;
    default:
     break;
   }
  goto L4079;

 L4104: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4105;
  goto L4079;

 L4105: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4106;
    }
  goto L4079;

 L4106: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 599;  /* cmpsf+100 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4079;

 L4134: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4135;
 L4164: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_immediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4165;
    }
  goto L4079;

 L4135: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4136;
    }
  x3 = XEXP (x2, 0);
  goto L4164;

 L4136: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 602;  /* cmpsf+103 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4164;

 L4165: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 605;  /* cmpsf+106 */
    }
  goto L4079;

 L4819: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8395;
    case HImode:
      goto L8396;
    case QImode:
      goto L8397;
    default:
      break;
    }
  goto L4079;

 L8395: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4820;
    }
  goto L4079;

 L4820: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2646 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 661;  /* cmpsf+162 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4079;

 L8396: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L4829;
    }
  goto L4079;

 L4829: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2646 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 662;  /* cmpsf+163 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4079;

 L8397: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L4838;
    }
  goto L4079;

 L4838: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2646 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 663;  /* cmpsf+164 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4079;

 L4846: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8398;
    case HImode:
      goto L8399;
    case QImode:
      goto L8400;
    default:
      break;
    }
  goto L4079;

 L8398: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4847;
    }
  goto L4079;

 L4847: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2658 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 664;  /* cmpsf+165 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4079;

 L8399: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L4856;
    }
  goto L4079;

 L4856: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2658 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 665;  /* cmpsf+166 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4079;

 L8400: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L4865;
    }
  goto L4079;

 L4865: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2658 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 666;  /* cmpsf+167 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4079;

 L4080: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 596;  /* cmpsf+97 */
    }
  goto ret0;

 L8381: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L4023;
    }
 L8385: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L4055;
    }
 L8389: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L4113;
    }
  goto ret0;

 L4023: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L4024;
    }
  x2 = XEXP (x1, 0);
  goto L8385;

 L4024: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 920 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 589;  /* cmpsf+90 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8385;

 L4055: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L4056;
    }
  x2 = XEXP (x1, 0);
  goto L8389;

 L4056: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 932 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 593;  /* cmpsf+94 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8389;

 L4113: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode)
    goto L8401;
 L4087: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_register_immediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L4088;
    }
  goto ret0;

 L8401: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L4114;
    case MINUS:
      goto L4144;
    case ZERO_EXTEND:
      goto L4873;
    case SIGN_EXTEND:
      goto L4882;
    default:
     break;
   }
  goto L4087;

 L4114: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4115;
  goto L4087;

 L4115: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L4116;
    }
  goto L4087;

 L4116: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 600;  /* cmpsf+101 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4087;

 L4144: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4145;
 L4173: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_immediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L4174;
    }
  goto L4087;

 L4145: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L4146;
    }
  x3 = XEXP (x2, 0);
  goto L4173;

 L4146: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 603;  /* cmpsf+104 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4173;

 L4174: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 606;  /* cmpsf+107 */
    }
  goto L4087;

 L4873: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L4874;
    }
  goto L4087;

 L4874: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2670 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 667;  /* cmpsf+168 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4087;

 L4882: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L4883;
    }
  goto L4087;

 L4883: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2682 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 668;  /* cmpsf+169 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4087;

 L4088: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 597;  /* cmpsf+98 */
    }
  goto ret0;

 L8382: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L4031;
    }
 L8386: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L4063;
    }
 L8390: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L4123;
    }
  goto ret0;

 L4031: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L4032;
    }
  x2 = XEXP (x1, 0);
  goto L8386;

 L4032: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 920 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 590;  /* cmpsf+91 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8386;

 L4063: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L4064;
    }
  x2 = XEXP (x1, 0);
  goto L8390;

 L4064: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 932 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 594;  /* cmpsf+95 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8390;

 L4123: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L8405;
 L4095: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_register_immediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L4096;
    }
  goto ret0;

 L8405: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L4124;
    case MINUS:
      goto L4154;
    default:
     break;
   }
  goto L4095;

 L4124: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4125;
  goto L4095;

 L4125: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L4126;
    }
  goto L4095;

 L4126: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 601;  /* cmpsf+102 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4095;

 L4154: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4155;
 L4182: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_immediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L4183;
    }
  goto L4095;

 L4155: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L4156;
    }
  x3 = XEXP (x2, 0);
  goto L4182;

 L4156: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 604;  /* cmpsf+105 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4182;

 L4183: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 607;  /* cmpsf+108 */
    }
  goto L4095;

 L4096: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 598;  /* cmpsf+99 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_10 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[4] = x2;
      goto L4937;
    }
  goto ret0;

 L4937: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == SET)
    goto L4938;
  goto ret0;

 L4938: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L8407;
    case SImode:
      goto L8408;
    case HImode:
      goto L8409;
    case QImode:
      goto L8410;
    default:
      break;
    }
  goto ret0;

 L8407: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L4939;
    }
 L8411: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L4971;
    }
 L8415: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L5003;
    }
  goto ret0;

 L4939: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L4940;
    }
  x2 = XEXP (x1, 0);
  goto L8411;

 L4940: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 920 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 674;  /* cmpsf+175 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8411;

 L4971: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L4972;
    }
  x2 = XEXP (x1, 0);
  goto L8415;

 L4972: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 932 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 678;  /* cmpsf+179 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8415;

 L5003: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_cond_register_immediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L5004;
    }
  goto ret0;

 L5004: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 682;  /* cmpsf+183 */
    }
  goto ret0;

 L8408: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4947;
    }
 L8412: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4979;
    }
 L8416: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5035;
    }
  goto ret0;

 L4947: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4948;
    }
  x2 = XEXP (x1, 0);
  goto L8412;

 L4948: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 920 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 675;  /* cmpsf+176 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8412;

 L4979: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4980;
    }
  x2 = XEXP (x1, 0);
  goto L8416;

 L4980: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 932 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 679;  /* cmpsf+180 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8416;

 L5035: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L8419;
 L5011: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_register_immediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5012;
    }
  goto ret0;

 L8419: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L5036;
    case MINUS:
      goto L5066;
    case SIGN_EXTEND:
      goto L5751;
    case ZERO_EXTEND:
      goto L5778;
    default:
     break;
   }
  goto L5011;

 L5036: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L5037;
  goto L5011;

 L5037: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5038;
    }
  goto L5011;

 L5038: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 686;  /* cmpsf+187 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5011;

 L5066: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L5067;
 L5096: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_immediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5097;
    }
  goto L5011;

 L5067: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5068;
    }
  x3 = XEXP (x2, 0);
  goto L5096;

 L5068: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 689;  /* cmpsf+190 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L5096;

 L5097: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 692;  /* cmpsf+193 */
    }
  goto L5011;

 L5751: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8423;
    case HImode:
      goto L8424;
    case QImode:
      goto L8425;
    default:
      break;
    }
  goto L5011;

 L8423: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5752;
    }
  goto L5011;

 L5752: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2646 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 748;  /* cmpsf+249 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5011;

 L8424: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L5761;
    }
  goto L5011;

 L5761: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2646 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 749;  /* cmpsf+250 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5011;

 L8425: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L5770;
    }
  goto L5011;

 L5770: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2646 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 750;  /* cmpsf+251 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5011;

 L5778: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8426;
    case HImode:
      goto L8427;
    case QImode:
      goto L8428;
    default:
      break;
    }
  goto L5011;

 L8426: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5779;
    }
  goto L5011;

 L5779: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2658 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 751;  /* cmpsf+252 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5011;

 L8427: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L5788;
    }
  goto L5011;

 L5788: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2658 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 752;  /* cmpsf+253 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5011;

 L8428: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L5797;
    }
  goto L5011;

 L5797: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2658 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 753;  /* cmpsf+254 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5011;

 L5012: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 683;  /* cmpsf+184 */
    }
  goto ret0;

 L8409: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L4955;
    }
 L8413: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L4987;
    }
 L8417: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L5045;
    }
  goto ret0;

 L4955: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L4956;
    }
  x2 = XEXP (x1, 0);
  goto L8413;

 L4956: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 920 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 676;  /* cmpsf+177 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8413;

 L4987: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L4988;
    }
  x2 = XEXP (x1, 0);
  goto L8417;

 L4988: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 932 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 680;  /* cmpsf+181 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8417;

 L5045: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode)
    goto L8429;
 L5019: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_register_immediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L5020;
    }
  goto ret0;

 L8429: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L5046;
    case MINUS:
      goto L5076;
    case ZERO_EXTEND:
      goto L5805;
    case SIGN_EXTEND:
      goto L5814;
    default:
     break;
   }
  goto L5019;

 L5046: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L5047;
  goto L5019;

 L5047: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L5048;
    }
  goto L5019;

 L5048: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 687;  /* cmpsf+188 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5019;

 L5076: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L5077;
 L5105: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_immediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L5106;
    }
  goto L5019;

 L5077: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L5078;
    }
  x3 = XEXP (x2, 0);
  goto L5105;

 L5078: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 690;  /* cmpsf+191 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L5105;

 L5106: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 693;  /* cmpsf+194 */
    }
  goto L5019;

 L5805: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L5806;
    }
  goto L5019;

 L5806: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2670 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 754;  /* cmpsf+255 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5019;

 L5814: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L5815;
    }
  goto L5019;

 L5815: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2682 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 755;  /* cmpsf+256 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5019;

 L5020: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 684;  /* cmpsf+185 */
    }
  goto ret0;

 L8410: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L4963;
    }
 L8414: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L4995;
    }
 L8418: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L5055;
    }
  goto ret0;

 L4963: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L4964;
    }
  x2 = XEXP (x1, 0);
  goto L8414;

 L4964: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 920 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 677;  /* cmpsf+178 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8414;

 L4995: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L4996;
    }
  x2 = XEXP (x1, 0);
  goto L8418;

 L4996: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 932 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 681;  /* cmpsf+182 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8418;

 L5055: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L8433;
 L5027: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_register_immediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L5028;
    }
  goto ret0;

 L8433: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L5056;
    case MINUS:
      goto L5086;
    default:
     break;
   }
  goto L5027;

 L5056: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L5057;
  goto L5027;

 L5057: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L5058;
    }
  goto L5027;

 L5058: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 688;  /* cmpsf+189 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5027;

 L5086: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L5087;
 L5114: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_immediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L5115;
    }
  goto L5027;

 L5087: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L5088;
    }
  x3 = XEXP (x2, 0);
  goto L5114;

 L5088: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 691;  /* cmpsf+192 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L5114;

 L5115: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 694;  /* cmpsf+195 */
    }
  goto L5027;

 L5028: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 685;  /* cmpsf+186 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_11 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[4] = x2;
      goto L5869;
    }
  goto ret0;

 L5869: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == SET)
    goto L5870;
  goto ret0;

 L5870: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L8435;
    case SImode:
      goto L8436;
    case HImode:
      goto L8437;
    case QImode:
      goto L8438;
    default:
      break;
    }
  goto ret0;

 L8435: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L5871;
    }
 L8439: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L5903;
    }
 L8443: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L5935;
    }
  goto ret0;

 L5871: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L5872;
    }
  x2 = XEXP (x1, 0);
  goto L8439;

 L5872: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 920 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 761;  /* cmpsf+262 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8439;

 L5903: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L5904;
    }
  x2 = XEXP (x1, 0);
  goto L8443;

 L5904: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 932 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 765;  /* cmpsf+266 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8443;

 L5935: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_cond_register_immediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L5936;
    }
  goto ret0;

 L5936: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 769;  /* cmpsf+270 */
    }
  goto ret0;

 L8436: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5879;
    }
 L8440: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5911;
    }
 L8444: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5967;
    }
  goto ret0;

 L5879: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5880;
    }
  x2 = XEXP (x1, 0);
  goto L8440;

 L5880: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 920 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 762;  /* cmpsf+263 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8440;

 L5911: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5912;
    }
  x2 = XEXP (x1, 0);
  goto L8444;

 L5912: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 932 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 766;  /* cmpsf+267 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8444;

 L5967: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L8447;
 L5943: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_register_immediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5944;
    }
  goto ret0;

 L8447: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L5968;
    case MINUS:
      goto L5998;
    case SIGN_EXTEND:
      goto L6683;
    case ZERO_EXTEND:
      goto L6710;
    default:
     break;
   }
  goto L5943;

 L5968: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L5969;
  goto L5943;

 L5969: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5970;
    }
  goto L5943;

 L5970: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 773;  /* cmpsf+274 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5943;

 L5998: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L5999;
 L6028: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_immediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6029;
    }
  goto L5943;

 L5999: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6000;
    }
  x3 = XEXP (x2, 0);
  goto L6028;

 L6000: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 776;  /* cmpsf+277 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L6028;

 L6029: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 779;  /* cmpsf+280 */
    }
  goto L5943;

 L6683: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8451;
    case HImode:
      goto L8452;
    case QImode:
      goto L8453;
    default:
      break;
    }
  goto L5943;

 L8451: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6684;
    }
  goto L5943;

 L6684: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2646 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 835;  /* cmpsf+336 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5943;

 L8452: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L6693;
    }
  goto L5943;

 L6693: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2646 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 836;  /* cmpsf+337 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5943;

 L8453: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L6702;
    }
  goto L5943;

 L6702: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2646 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 837;  /* cmpsf+338 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5943;

 L6710: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8454;
    case HImode:
      goto L8455;
    case QImode:
      goto L8456;
    default:
      break;
    }
  goto L5943;

 L8454: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6711;
    }
  goto L5943;

 L6711: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2658 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 838;  /* cmpsf+339 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5943;

 L8455: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L6720;
    }
  goto L5943;

 L6720: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2658 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 839;  /* cmpsf+340 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5943;

 L8456: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L6729;
    }
  goto L5943;

 L6729: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2658 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 840;  /* cmpsf+341 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5943;

 L5944: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 770;  /* cmpsf+271 */
    }
  goto ret0;

 L8437: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L5887;
    }
 L8441: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L5919;
    }
 L8445: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L5977;
    }
  goto ret0;

 L5887: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L5888;
    }
  x2 = XEXP (x1, 0);
  goto L8441;

 L5888: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 920 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 763;  /* cmpsf+264 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8441;

 L5919: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L5920;
    }
  x2 = XEXP (x1, 0);
  goto L8445;

 L5920: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 932 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 767;  /* cmpsf+268 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8445;

 L5977: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode)
    goto L8457;
 L5951: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_register_immediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L5952;
    }
  goto ret0;

 L8457: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L5978;
    case MINUS:
      goto L6008;
    case ZERO_EXTEND:
      goto L6737;
    case SIGN_EXTEND:
      goto L6746;
    default:
     break;
   }
  goto L5951;

 L5978: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L5979;
  goto L5951;

 L5979: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L5980;
    }
  goto L5951;

 L5980: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 774;  /* cmpsf+275 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5951;

 L6008: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L6009;
 L6037: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_immediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L6038;
    }
  goto L5951;

 L6009: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L6010;
    }
  x3 = XEXP (x2, 0);
  goto L6037;

 L6010: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 777;  /* cmpsf+278 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L6037;

 L6038: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 780;  /* cmpsf+281 */
    }
  goto L5951;

 L6737: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L6738;
    }
  goto L5951;

 L6738: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2670 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 841;  /* cmpsf+342 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5951;

 L6746: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L6747;
    }
  goto L5951;

 L6747: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2682 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 842;  /* cmpsf+343 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5951;

 L5952: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 771;  /* cmpsf+272 */
    }
  goto ret0;

 L8438: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L5895;
    }
 L8442: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L5927;
    }
 L8446: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L5987;
    }
  goto ret0;

 L5895: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L5896;
    }
  x2 = XEXP (x1, 0);
  goto L8442;

 L5896: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 920 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 764;  /* cmpsf+265 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8442;

 L5927: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L5928;
    }
  x2 = XEXP (x1, 0);
  goto L8446;

 L5928: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 932 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 768;  /* cmpsf+269 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8446;

 L5987: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L8461;
 L5959: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_register_immediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L5960;
    }
  goto ret0;

 L8461: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L5988;
    case MINUS:
      goto L6018;
    default:
     break;
   }
  goto L5959;

 L5988: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L5989;
  goto L5959;

 L5989: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L5990;
    }
  goto L5959;

 L5990: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 775;  /* cmpsf+276 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5959;

 L6018: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L6019;
 L6046: ATTRIBUTE_UNUSED_LABEL
  if (avr32_cond_immediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L6047;
    }
  goto L5959;

 L6019: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_cond_immediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L6020;
    }
  x3 = XEXP (x2, 0);
  goto L6046;

 L6020: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 778;  /* cmpsf+279 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L6046;

 L6047: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 781;  /* cmpsf+282 */
    }
  goto L5959;

 L5960: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS))
    {
      return 772;  /* cmpsf+273 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_12 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == AND)
    goto L7025;
  if (register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L4187;
    }
  goto ret0;

 L7025: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L7026;
    }
  goto ret0;

 L7026: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (one_bit_set_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L7027;
    }
  goto ret0;

 L7027: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L7028;
  goto ret0;

 L7028: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L7029;
    case PARALLEL:
      goto L8491;
    default:
     break;
   }
  goto ret0;

 L7029: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8492;
    case HImode:
      goto L8493;
    case QImode:
      goto L8494;
    default:
      break;
    }
  goto ret0;

 L8492: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L7030;
    }
  goto ret0;

 L7030: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L8495;
  goto ret0;

 L8495: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case AND:
      goto L7031;
    case IOR:
      goto L7043;
    case XOR:
      goto L7055;
    case PLUS:
      goto L7067;
    case MINUS:
      goto L7079;
    default:
     break;
   }
  goto ret0;

 L7031: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7032;
    }
  goto ret0;

 L7032: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L7033;
    }
  goto ret0;

 L7033: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 869;  /* cmpsf+370 */
    }
  goto ret0;

 L7043: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7044;
    }
  goto ret0;

 L7044: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L7045;
    }
  goto ret0;

 L7045: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 870;  /* cmpsf+371 */
    }
  goto ret0;

 L7055: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7056;
    }
  goto ret0;

 L7056: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L7057;
    }
  goto ret0;

 L7057: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 871;  /* cmpsf+372 */
    }
  goto ret0;

 L7067: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7068;
    }
  goto ret0;

 L7068: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L7069;
    }
  goto ret0;

 L7069: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 872;  /* cmpsf+373 */
    }
  goto ret0;

 L7079: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7080;
    }
  goto ret0;

 L7080: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L7081;
    }
  goto ret0;

 L7081: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 873;  /* cmpsf+374 */
    }
  goto ret0;

 L8493: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L7090;
    }
  goto ret0;

 L7090: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode)
    goto L8500;
  goto ret0;

 L8500: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case AND:
      goto L7091;
    case IOR:
      goto L7103;
    case XOR:
      goto L7115;
    case PLUS:
      goto L7127;
    case MINUS:
      goto L7139;
    default:
     break;
   }
  goto ret0;

 L7091: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L7092;
    }
  goto ret0;

 L7092: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L7093;
    }
  goto ret0;

 L7093: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 874;  /* cmpsf+375 */
    }
  goto ret0;

 L7103: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L7104;
    }
  goto ret0;

 L7104: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L7105;
    }
  goto ret0;

 L7105: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 875;  /* cmpsf+376 */
    }
  goto ret0;

 L7115: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L7116;
    }
  goto ret0;

 L7116: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L7117;
    }
  goto ret0;

 L7117: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 876;  /* cmpsf+377 */
    }
  goto ret0;

 L7127: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L7128;
    }
  goto ret0;

 L7128: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L7129;
    }
  goto ret0;

 L7129: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 877;  /* cmpsf+378 */
    }
  goto ret0;

 L7139: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L7140;
    }
  goto ret0;

 L7140: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L7141;
    }
  goto ret0;

 L7141: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 878;  /* cmpsf+379 */
    }
  goto ret0;

 L8494: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L7150;
    }
  goto ret0;

 L7150: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L8505;
  goto ret0;

 L8505: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case AND:
      goto L7151;
    case IOR:
      goto L7163;
    case XOR:
      goto L7175;
    case PLUS:
      goto L7187;
    case MINUS:
      goto L7199;
    default:
     break;
   }
  goto ret0;

 L7151: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L7152;
    }
  goto ret0;

 L7152: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L7153;
    }
  goto ret0;

 L7153: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 879;  /* cmpsf+380 */
    }
  goto ret0;

 L7163: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L7164;
    }
  goto ret0;

 L7164: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L7165;
    }
  goto ret0;

 L7165: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 880;  /* cmpsf+381 */
    }
  goto ret0;

 L7175: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L7176;
    }
  goto ret0;

 L7176: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L7177;
    }
  goto ret0;

 L7177: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 881;  /* cmpsf+382 */
    }
  goto ret0;

 L7187: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L7188;
    }
  goto ret0;

 L7188: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L7189;
    }
  goto ret0;

 L7189: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 882;  /* cmpsf+383 */
    }
  goto ret0;

 L7199: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L7200;
    }
  goto ret0;

 L7200: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L7201;
    }
  goto ret0;

 L7201: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 883;  /* cmpsf+384 */
    }
  goto ret0;

 L8491: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2)
    goto L7659;
  goto ret0;

 L7659: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L7660;
  goto ret0;

 L7660: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8510;
    case HImode:
      goto L8511;
    default:
      break;
    }
  goto ret0;

 L8510: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L7661;
    }
  goto ret0;

 L7661: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L7662;
  goto ret0;

 L7662: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case HImode:
      goto L8512;
    case QImode:
      goto L8513;
    default:
      break;
    }
  goto ret0;

 L8512: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L7663;
    }
  goto ret0;

 L7663: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7664;
  goto ret0;

 L7664: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L7665;
    }
  goto ret0;

 L7665: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2087 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 914;  /* cmpsf+415 */
    }
  goto ret0;

 L8513: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L7691;
    }
  goto ret0;

 L7691: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7692;
  goto ret0;

 L7692: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L7693;
    }
  goto ret0;

 L7693: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2119 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 916;  /* cmpsf+417 */
    }
  goto ret0;

 L8511: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L7717;
    }
  goto ret0;

 L7717: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L7718;
  goto ret0;

 L7718: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L7719;
    }
  goto ret0;

 L7719: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7720;
  goto ret0;

 L7720: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L7721;
    }
  goto ret0;

 L7721: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2151 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 918;  /* cmpsf+419 */
    }
  goto ret0;

 L4187: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_const_int_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L4188;
    }
  goto ret0;

 L4188: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L4189;
    case PARALLEL:
      goto L8514;
    default:
     break;
   }
  goto ret0;

 L4189: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8515;
    case HImode:
      goto L8516;
    case QImode:
      goto L8517;
    default:
      break;
    }
  goto ret0;

 L8515: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4190;
    }
  goto ret0;

 L4190: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L8518;
  goto ret0;

 L8518: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case AND:
      goto L4191;
    case IOR:
      goto L4201;
    case XOR:
      goto L4211;
    case PLUS:
      goto L4221;
    case MINUS:
      goto L4231;
    default:
     break;
   }
  goto ret0;

 L4191: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4192;
    }
  goto ret0;

 L4192: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4193;
    }
  goto ret0;

 L4193: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 608;  /* cmpsf+109 */
    }
  goto ret0;

 L4201: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4202;
    }
  goto ret0;

 L4202: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4203;
    }
  goto ret0;

 L4203: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 609;  /* cmpsf+110 */
    }
  goto ret0;

 L4211: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4212;
    }
  goto ret0;

 L4212: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4213;
    }
  goto ret0;

 L4213: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 610;  /* cmpsf+111 */
    }
  goto ret0;

 L4221: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4222;
    }
  goto ret0;

 L4222: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4223;
    }
  goto ret0;

 L4223: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 611;  /* cmpsf+112 */
    }
  goto ret0;

 L4231: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4232;
    }
  goto ret0;

 L4232: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4233;
    }
  goto ret0;

 L4233: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 612;  /* cmpsf+113 */
    }
  goto ret0;

 L8516: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L4240;
    }
  goto ret0;

 L4240: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode)
    goto L8523;
  goto ret0;

 L8523: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case AND:
      goto L4241;
    case IOR:
      goto L4251;
    case XOR:
      goto L4261;
    case PLUS:
      goto L4271;
    case MINUS:
      goto L4281;
    default:
     break;
   }
  goto ret0;

 L4241: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L4242;
    }
  goto ret0;

 L4242: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L4243;
    }
  goto ret0;

 L4243: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 613;  /* cmpsf+114 */
    }
  goto ret0;

 L4251: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L4252;
    }
  goto ret0;

 L4252: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L4253;
    }
  goto ret0;

 L4253: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 614;  /* cmpsf+115 */
    }
  goto ret0;

 L4261: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L4262;
    }
  goto ret0;

 L4262: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L4263;
    }
  goto ret0;

 L4263: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 615;  /* cmpsf+116 */
    }
  goto ret0;

 L4271: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L4272;
    }
  goto ret0;

 L4272: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L4273;
    }
  goto ret0;

 L4273: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 616;  /* cmpsf+117 */
    }
  goto ret0;

 L4281: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L4282;
    }
  goto ret0;

 L4282: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L4283;
    }
  goto ret0;

 L4283: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 617;  /* cmpsf+118 */
    }
  goto ret0;

 L8517: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L4290;
    }
  goto ret0;

 L4290: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L8528;
  goto ret0;

 L8528: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case AND:
      goto L4291;
    case IOR:
      goto L4301;
    case XOR:
      goto L4311;
    case PLUS:
      goto L4321;
    case MINUS:
      goto L4331;
    default:
     break;
   }
  goto ret0;

 L4291: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L4292;
    }
  goto ret0;

 L4292: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4293;
    }
  goto ret0;

 L4293: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 618;  /* cmpsf+119 */
    }
  goto ret0;

 L4301: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L4302;
    }
  goto ret0;

 L4302: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4303;
    }
  goto ret0;

 L4303: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 619;  /* cmpsf+120 */
    }
  goto ret0;

 L4311: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L4312;
    }
  goto ret0;

 L4312: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4313;
    }
  goto ret0;

 L4313: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 620;  /* cmpsf+121 */
    }
  goto ret0;

 L4321: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L4322;
    }
  goto ret0;

 L4322: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4323;
    }
  goto ret0;

 L4323: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 621;  /* cmpsf+122 */
    }
  goto ret0;

 L4331: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L4332;
    }
  goto ret0;

 L4332: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4333;
    }
  goto ret0;

 L4333: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 622;  /* cmpsf+123 */
    }
  goto ret0;

 L8514: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2)
    goto L4729;
  goto ret0;

 L4729: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L4730;
  goto ret0;

 L4730: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8533;
    case HImode:
      goto L8534;
    default:
      break;
    }
  goto ret0;

 L8533: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L4731;
    }
  goto ret0;

 L4731: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L4732;
  goto ret0;

 L4732: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case HImode:
      goto L8535;
    case QImode:
      goto L8536;
    default:
      break;
    }
  goto ret0;

 L8535: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L4733;
    }
  goto ret0;

 L4733: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4734;
  goto ret0;

 L4734: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4735;
    }
  goto ret0;

 L4735: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2087 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 653;  /* cmpsf+154 */
    }
  goto ret0;

 L8536: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L4757;
    }
  goto ret0;

 L4757: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4758;
  goto ret0;

 L4758: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4759;
    }
  goto ret0;

 L4759: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2119 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 655;  /* cmpsf+156 */
    }
  goto ret0;

 L8534: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L4779;
    }
  goto ret0;

 L4779: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L4780;
  goto ret0;

 L4780: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L4781;
    }
  goto ret0;

 L4781: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4782;
  goto ret0;

 L4782: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4783;
    }
  goto ret0;

 L4783: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2151 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 657;  /* cmpsf+158 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_13 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DImode:
      goto L8463;
    case SImode:
      goto L8467;
    case HImode:
      goto L8465;
    case QImode:
      goto L8466;
    default:
      break;
    }
  goto ret0;

 L8463: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L3255;
    }
  goto ret0;

 L3255: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_immediate_operand (x2, DImode))
    {
      operands[5] = x2;
      goto L3256;
    }
  goto ret0;

 L3256: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3257;
    case PARALLEL:
      goto L8468;
    default:
     break;
   }
  goto ret0;

 L3257: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8469;
    case HImode:
      goto L8470;
    case QImode:
      goto L8471;
    default:
      break;
    }
  goto ret0;

 L8469: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3258;
    }
  goto ret0;

 L3258: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L8472;
  goto ret0;

 L8472: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case AND:
      goto L3259;
    case IOR:
      goto L3269;
    case XOR:
      goto L3279;
    case PLUS:
      goto L3289;
    case MINUS:
      goto L3299;
    default:
     break;
   }
  goto ret0;

 L3259: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3260;
    }
  goto ret0;

 L3260: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3261;
    }
  goto ret0;

 L3261: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 521;  /* cmpsf+22 */
    }
  goto ret0;

 L3269: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3270;
    }
  goto ret0;

 L3270: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3271;
    }
  goto ret0;

 L3271: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 522;  /* cmpsf+23 */
    }
  goto ret0;

 L3279: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3280;
    }
  goto ret0;

 L3280: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3281;
    }
  goto ret0;

 L3281: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 523;  /* cmpsf+24 */
    }
  goto ret0;

 L3289: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3290;
    }
  goto ret0;

 L3290: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3291;
    }
  goto ret0;

 L3291: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 524;  /* cmpsf+25 */
    }
  goto ret0;

 L3299: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3300;
    }
  goto ret0;

 L3300: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3301;
    }
  goto ret0;

 L3301: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 525;  /* cmpsf+26 */
    }
  goto ret0;

 L8470: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3308;
    }
  goto ret0;

 L3308: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode)
    goto L8477;
  goto ret0;

 L8477: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case AND:
      goto L3309;
    case IOR:
      goto L3319;
    case XOR:
      goto L3329;
    case PLUS:
      goto L3339;
    case MINUS:
      goto L3349;
    default:
     break;
   }
  goto ret0;

 L3309: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L3310;
    }
  goto ret0;

 L3310: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L3311;
    }
  goto ret0;

 L3311: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 526;  /* cmpsf+27 */
    }
  goto ret0;

 L3319: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L3320;
    }
  goto ret0;

 L3320: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L3321;
    }
  goto ret0;

 L3321: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 527;  /* cmpsf+28 */
    }
  goto ret0;

 L3329: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L3330;
    }
  goto ret0;

 L3330: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L3331;
    }
  goto ret0;

 L3331: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 528;  /* cmpsf+29 */
    }
  goto ret0;

 L3339: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L3340;
    }
  goto ret0;

 L3340: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L3341;
    }
  goto ret0;

 L3341: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 529;  /* cmpsf+30 */
    }
  goto ret0;

 L3349: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L3350;
    }
  goto ret0;

 L3350: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L3351;
    }
  goto ret0;

 L3351: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 530;  /* cmpsf+31 */
    }
  goto ret0;

 L8471: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L3358;
    }
  goto ret0;

 L3358: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L8482;
  goto ret0;

 L8482: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case AND:
      goto L3359;
    case IOR:
      goto L3369;
    case XOR:
      goto L3379;
    case PLUS:
      goto L3389;
    case MINUS:
      goto L3399;
    default:
     break;
   }
  goto ret0;

 L3359: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3360;
    }
  goto ret0;

 L3360: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3361;
    }
  goto ret0;

 L3361: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 531;  /* cmpsf+32 */
    }
  goto ret0;

 L3369: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3370;
    }
  goto ret0;

 L3370: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3371;
    }
  goto ret0;

 L3371: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 532;  /* cmpsf+33 */
    }
  goto ret0;

 L3379: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3380;
    }
  goto ret0;

 L3380: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3381;
    }
  goto ret0;

 L3381: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 533;  /* cmpsf+34 */
    }
  goto ret0;

 L3389: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3390;
    }
  goto ret0;

 L3390: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3391;
    }
  goto ret0;

 L3391: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 534;  /* cmpsf+35 */
    }
  goto ret0;

 L3399: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3400;
    }
  goto ret0;

 L3400: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3401;
    }
  goto ret0;

 L3401: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 535;  /* cmpsf+36 */
    }
  goto ret0;

 L8468: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2)
    goto L3797;
  goto ret0;

 L3797: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L3798;
  goto ret0;

 L3798: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8487;
    case HImode:
      goto L8488;
    default:
      break;
    }
  goto ret0;

 L8487: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L3799;
    }
  goto ret0;

 L3799: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L3800;
  goto ret0;

 L3800: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case HImode:
      goto L8489;
    case QImode:
      goto L8490;
    default:
      break;
    }
  goto ret0;

 L8489: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L3801;
    }
  goto ret0;

 L3801: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3802;
  goto ret0;

 L3802: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3803;
    }
  goto ret0;

 L3803: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2087 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 566;  /* cmpsf+67 */
    }
  goto ret0;

 L8490: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3825;
    }
  goto ret0;

 L3825: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3826;
  goto ret0;

 L3826: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3827;
    }
  goto ret0;

 L3827: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2119 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 568;  /* cmpsf+69 */
    }
  goto ret0;

 L8488: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L3847;
    }
  goto ret0;

 L3847: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L3848;
  goto ret0;

 L3848: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3849;
    }
  goto ret0;

 L3849: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3850;
  goto ret0;

 L3850: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3851;
    }
  goto ret0;

 L3851: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2151 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 570;  /* cmpsf+71 */
    }
  goto ret0;

 L8467: ATTRIBUTE_UNUSED_LABEL
  return recog_12 (x0, insn, pnum_clobbers);

 L8465: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[4] = x2;
      goto L5119;
    }
  goto ret0;

 L5119: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[5] = x2;
      goto L5120;
    }
  goto ret0;

 L5120: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L5121;
    case PARALLEL:
      goto L8537;
    default:
     break;
   }
  goto ret0;

 L5121: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8538;
    case HImode:
      goto L8539;
    case QImode:
      goto L8540;
    default:
      break;
    }
  goto ret0;

 L8538: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5122;
    }
  goto ret0;

 L5122: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L8541;
  goto ret0;

 L8541: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case AND:
      goto L5123;
    case IOR:
      goto L5133;
    case XOR:
      goto L5143;
    case PLUS:
      goto L5153;
    case MINUS:
      goto L5163;
    default:
     break;
   }
  goto ret0;

 L5123: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5124;
    }
  goto ret0;

 L5124: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5125;
    }
  goto ret0;

 L5125: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 695;  /* cmpsf+196 */
    }
  goto ret0;

 L5133: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5134;
    }
  goto ret0;

 L5134: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5135;
    }
  goto ret0;

 L5135: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 696;  /* cmpsf+197 */
    }
  goto ret0;

 L5143: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5144;
    }
  goto ret0;

 L5144: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5145;
    }
  goto ret0;

 L5145: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 697;  /* cmpsf+198 */
    }
  goto ret0;

 L5153: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5154;
    }
  goto ret0;

 L5154: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5155;
    }
  goto ret0;

 L5155: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 698;  /* cmpsf+199 */
    }
  goto ret0;

 L5163: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5164;
    }
  goto ret0;

 L5164: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5165;
    }
  goto ret0;

 L5165: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 699;  /* cmpsf+200 */
    }
  goto ret0;

 L8539: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L5172;
    }
  goto ret0;

 L5172: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode)
    goto L8546;
  goto ret0;

 L8546: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case AND:
      goto L5173;
    case IOR:
      goto L5183;
    case XOR:
      goto L5193;
    case PLUS:
      goto L5203;
    case MINUS:
      goto L5213;
    default:
     break;
   }
  goto ret0;

 L5173: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L5174;
    }
  goto ret0;

 L5174: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L5175;
    }
  goto ret0;

 L5175: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 700;  /* cmpsf+201 */
    }
  goto ret0;

 L5183: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L5184;
    }
  goto ret0;

 L5184: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L5185;
    }
  goto ret0;

 L5185: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 701;  /* cmpsf+202 */
    }
  goto ret0;

 L5193: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L5194;
    }
  goto ret0;

 L5194: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L5195;
    }
  goto ret0;

 L5195: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 702;  /* cmpsf+203 */
    }
  goto ret0;

 L5203: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L5204;
    }
  goto ret0;

 L5204: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L5205;
    }
  goto ret0;

 L5205: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 703;  /* cmpsf+204 */
    }
  goto ret0;

 L5213: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L5214;
    }
  goto ret0;

 L5214: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L5215;
    }
  goto ret0;

 L5215: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 704;  /* cmpsf+205 */
    }
  goto ret0;

 L8540: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L5222;
    }
  goto ret0;

 L5222: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L8551;
  goto ret0;

 L8551: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case AND:
      goto L5223;
    case IOR:
      goto L5233;
    case XOR:
      goto L5243;
    case PLUS:
      goto L5253;
    case MINUS:
      goto L5263;
    default:
     break;
   }
  goto ret0;

 L5223: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L5224;
    }
  goto ret0;

 L5224: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5225;
    }
  goto ret0;

 L5225: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 705;  /* cmpsf+206 */
    }
  goto ret0;

 L5233: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L5234;
    }
  goto ret0;

 L5234: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5235;
    }
  goto ret0;

 L5235: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 706;  /* cmpsf+207 */
    }
  goto ret0;

 L5243: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L5244;
    }
  goto ret0;

 L5244: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5245;
    }
  goto ret0;

 L5245: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 707;  /* cmpsf+208 */
    }
  goto ret0;

 L5253: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L5254;
    }
  goto ret0;

 L5254: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5255;
    }
  goto ret0;

 L5255: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 708;  /* cmpsf+209 */
    }
  goto ret0;

 L5263: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L5264;
    }
  goto ret0;

 L5264: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5265;
    }
  goto ret0;

 L5265: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 709;  /* cmpsf+210 */
    }
  goto ret0;

 L8537: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2)
    goto L5661;
  goto ret0;

 L5661: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L5662;
  goto ret0;

 L5662: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8556;
    case HImode:
      goto L8557;
    default:
      break;
    }
  goto ret0;

 L8556: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L5663;
    }
  goto ret0;

 L5663: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L5664;
  goto ret0;

 L5664: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case HImode:
      goto L8558;
    case QImode:
      goto L8559;
    default:
      break;
    }
  goto ret0;

 L8558: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L5665;
    }
  goto ret0;

 L5665: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5666;
  goto ret0;

 L5666: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5667;
    }
  goto ret0;

 L5667: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2087 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 740;  /* cmpsf+241 */
    }
  goto ret0;

 L8559: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L5689;
    }
  goto ret0;

 L5689: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5690;
  goto ret0;

 L5690: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5691;
    }
  goto ret0;

 L5691: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2119 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 742;  /* cmpsf+243 */
    }
  goto ret0;

 L8557: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L5711;
    }
  goto ret0;

 L5711: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L5712;
  goto ret0;

 L5712: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L5713;
    }
  goto ret0;

 L5713: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5714;
  goto ret0;

 L5714: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5715;
    }
  goto ret0;

 L5715: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2151 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 744;  /* cmpsf+245 */
    }
  goto ret0;

 L8466: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[4] = x2;
      goto L6051;
    }
  goto ret0;

 L6051: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[5] = x2;
      goto L6052;
    }
  goto ret0;

 L6052: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L6053;
    case PARALLEL:
      goto L8560;
    default:
     break;
   }
  goto ret0;

 L6053: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8561;
    case HImode:
      goto L8562;
    case QImode:
      goto L8563;
    default:
      break;
    }
  goto ret0;

 L8561: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L6054;
    }
  goto ret0;

 L6054: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L8564;
  goto ret0;

 L8564: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case AND:
      goto L6055;
    case IOR:
      goto L6065;
    case XOR:
      goto L6075;
    case PLUS:
      goto L6085;
    case MINUS:
      goto L6095;
    default:
     break;
   }
  goto ret0;

 L6055: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6056;
    }
  goto ret0;

 L6056: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6057;
    }
  goto ret0;

 L6057: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 782;  /* cmpsf+283 */
    }
  goto ret0;

 L6065: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6066;
    }
  goto ret0;

 L6066: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6067;
    }
  goto ret0;

 L6067: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 783;  /* cmpsf+284 */
    }
  goto ret0;

 L6075: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6076;
    }
  goto ret0;

 L6076: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6077;
    }
  goto ret0;

 L6077: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 784;  /* cmpsf+285 */
    }
  goto ret0;

 L6085: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6086;
    }
  goto ret0;

 L6086: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6087;
    }
  goto ret0;

 L6087: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 785;  /* cmpsf+286 */
    }
  goto ret0;

 L6095: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6096;
    }
  goto ret0;

 L6096: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6097;
    }
  goto ret0;

 L6097: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 786;  /* cmpsf+287 */
    }
  goto ret0;

 L8562: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L6104;
    }
  goto ret0;

 L6104: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode)
    goto L8569;
  goto ret0;

 L8569: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case AND:
      goto L6105;
    case IOR:
      goto L6115;
    case XOR:
      goto L6125;
    case PLUS:
      goto L6135;
    case MINUS:
      goto L6145;
    default:
     break;
   }
  goto ret0;

 L6105: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L6106;
    }
  goto ret0;

 L6106: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L6107;
    }
  goto ret0;

 L6107: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 787;  /* cmpsf+288 */
    }
  goto ret0;

 L6115: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L6116;
    }
  goto ret0;

 L6116: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L6117;
    }
  goto ret0;

 L6117: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 788;  /* cmpsf+289 */
    }
  goto ret0;

 L6125: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L6126;
    }
  goto ret0;

 L6126: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L6127;
    }
  goto ret0;

 L6127: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 789;  /* cmpsf+290 */
    }
  goto ret0;

 L6135: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L6136;
    }
  goto ret0;

 L6136: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L6137;
    }
  goto ret0;

 L6137: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 790;  /* cmpsf+291 */
    }
  goto ret0;

 L6145: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L6146;
    }
  goto ret0;

 L6146: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L6147;
    }
  goto ret0;

 L6147: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 791;  /* cmpsf+292 */
    }
  goto ret0;

 L8563: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L6154;
    }
  goto ret0;

 L6154: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L8574;
  goto ret0;

 L8574: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case AND:
      goto L6155;
    case IOR:
      goto L6165;
    case XOR:
      goto L6175;
    case PLUS:
      goto L6185;
    case MINUS:
      goto L6195;
    default:
     break;
   }
  goto ret0;

 L6155: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L6156;
    }
  goto ret0;

 L6156: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6157;
    }
  goto ret0;

 L6157: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 792;  /* cmpsf+293 */
    }
  goto ret0;

 L6165: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L6166;
    }
  goto ret0;

 L6166: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6167;
    }
  goto ret0;

 L6167: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 793;  /* cmpsf+294 */
    }
  goto ret0;

 L6175: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L6176;
    }
  goto ret0;

 L6176: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6177;
    }
  goto ret0;

 L6177: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 794;  /* cmpsf+295 */
    }
  goto ret0;

 L6185: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L6186;
    }
  goto ret0;

 L6186: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6187;
    }
  goto ret0;

 L6187: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 795;  /* cmpsf+296 */
    }
  goto ret0;

 L6195: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L6196;
    }
  goto ret0;

 L6196: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6197;
    }
  goto ret0;

 L6197: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2022 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 796;  /* cmpsf+297 */
    }
  goto ret0;

 L8560: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2)
    goto L6593;
  goto ret0;

 L6593: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L6594;
  goto ret0;

 L6594: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8579;
    case HImode:
      goto L8580;
    default:
      break;
    }
  goto ret0;

 L8579: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L6595;
    }
  goto ret0;

 L6595: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L6596;
  goto ret0;

 L6596: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case HImode:
      goto L8581;
    case QImode:
      goto L8582;
    default:
      break;
    }
  goto ret0;

 L8581: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L6597;
    }
  goto ret0;

 L6597: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6598;
  goto ret0;

 L6598: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6599;
    }
  goto ret0;

 L6599: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2087 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 827;  /* cmpsf+328 */
    }
  goto ret0;

 L8582: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L6621;
    }
  goto ret0;

 L6621: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6622;
  goto ret0;

 L6622: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6623;
    }
  goto ret0;

 L6623: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2119 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 829;  /* cmpsf+330 */
    }
  goto ret0;

 L8580: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L6643;
    }
  goto ret0;

 L6643: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L6644;
  goto ret0;

 L6644: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L6645;
    }
  goto ret0;

 L6645: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6646;
  goto ret0;

 L6646: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6647;
    }
  goto ret0;

 L6647: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2151 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 831;  /* cmpsf+332 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_14 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == PARALLEL
      && XVECLEN (x1, 0) == 2)
    goto L3407;
  goto ret0;

 L3407: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L3408;
  goto ret0;

 L3408: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8588;
    case HImode:
      goto L8589;
    case QImode:
      goto L8590;
    default:
      break;
    }
  goto ret0;

 L8588: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L3409;
    }
  goto ret0;

 L3409: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L8591;
  goto ret0;

 L8591: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case AND:
      goto L3410;
    case IOR:
      goto L3436;
    case XOR:
      goto L3462;
    case PLUS:
      goto L3488;
    case MINUS:
      goto L3514;
    default:
     break;
   }
  goto ret0;

 L3410: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3411;
    }
  goto ret0;

 L3411: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3412;
    }
  goto ret0;

 L3412: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3413;
  goto ret0;

 L3413: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3414;
    }
  goto ret0;

 L3414: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 536;  /* cmpsf+37 */
    }
  goto ret0;

 L3436: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3437;
    }
  goto ret0;

 L3437: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3438;
    }
  goto ret0;

 L3438: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3439;
  goto ret0;

 L3439: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3440;
    }
  goto ret0;

 L3440: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 538;  /* cmpsf+39 */
    }
  goto ret0;

 L3462: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3463;
    }
  goto ret0;

 L3463: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3464;
    }
  goto ret0;

 L3464: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3465;
  goto ret0;

 L3465: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3466;
    }
  goto ret0;

 L3466: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 540;  /* cmpsf+41 */
    }
  goto ret0;

 L3488: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3489;
    }
  goto ret0;

 L3489: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3490;
    }
  goto ret0;

 L3490: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3491;
  goto ret0;

 L3491: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3492;
    }
  goto ret0;

 L3492: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 542;  /* cmpsf+43 */
    }
  goto ret0;

 L3514: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3515;
    }
  goto ret0;

 L3515: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3516;
    }
  goto ret0;

 L3516: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3517;
  goto ret0;

 L3517: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3518;
    }
  goto ret0;

 L3518: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 544;  /* cmpsf+45 */
    }
  goto ret0;

 L8589: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L3539;
    }
  goto ret0;

 L3539: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode)
    goto L8596;
  goto ret0;

 L8596: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case AND:
      goto L3540;
    case IOR:
      goto L3566;
    case XOR:
      goto L3592;
    case PLUS:
      goto L3618;
    case MINUS:
      goto L3644;
    default:
     break;
   }
  goto ret0;

 L3540: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L3541;
    }
  goto ret0;

 L3541: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L3542;
    }
  goto ret0;

 L3542: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3543;
  goto ret0;

 L3543: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L3544;
    }
  goto ret0;

 L3544: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 546;  /* cmpsf+47 */
    }
  goto ret0;

 L3566: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L3567;
    }
  goto ret0;

 L3567: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L3568;
    }
  goto ret0;

 L3568: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3569;
  goto ret0;

 L3569: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L3570;
    }
  goto ret0;

 L3570: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 548;  /* cmpsf+49 */
    }
  goto ret0;

 L3592: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L3593;
    }
  goto ret0;

 L3593: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L3594;
    }
  goto ret0;

 L3594: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3595;
  goto ret0;

 L3595: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L3596;
    }
  goto ret0;

 L3596: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 550;  /* cmpsf+51 */
    }
  goto ret0;

 L3618: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L3619;
    }
  goto ret0;

 L3619: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L3620;
    }
  goto ret0;

 L3620: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3621;
  goto ret0;

 L3621: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L3622;
    }
  goto ret0;

 L3622: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 552;  /* cmpsf+53 */
    }
  goto ret0;

 L3644: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L3645;
    }
  goto ret0;

 L3645: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L3646;
    }
  goto ret0;

 L3646: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3647;
  goto ret0;

 L3647: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L3648;
    }
  goto ret0;

 L3648: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 554;  /* cmpsf+55 */
    }
  goto ret0;

 L8590: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, QImode))
    {
      operands[0] = x3;
      goto L3669;
    }
  goto ret0;

 L3669: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == QImode)
    goto L8601;
  goto ret0;

 L8601: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case AND:
      goto L3670;
    case IOR:
      goto L3696;
    case XOR:
      goto L3722;
    case PLUS:
      goto L3748;
    case MINUS:
      goto L3774;
    default:
     break;
   }
  goto ret0;

 L3670: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3671;
    }
  goto ret0;

 L3671: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3672;
    }
  goto ret0;

 L3672: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3673;
  goto ret0;

 L3673: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L3674;
    }
  goto ret0;

 L3674: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 556;  /* cmpsf+57 */
    }
  goto ret0;

 L3696: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3697;
    }
  goto ret0;

 L3697: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3698;
    }
  goto ret0;

 L3698: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3699;
  goto ret0;

 L3699: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L3700;
    }
  goto ret0;

 L3700: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 558;  /* cmpsf+59 */
    }
  goto ret0;

 L3722: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3723;
    }
  goto ret0;

 L3723: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3724;
    }
  goto ret0;

 L3724: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3725;
  goto ret0;

 L3725: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L3726;
    }
  goto ret0;

 L3726: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 560;  /* cmpsf+61 */
    }
  goto ret0;

 L3748: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3749;
    }
  goto ret0;

 L3749: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3750;
    }
  goto ret0;

 L3750: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3751;
  goto ret0;

 L3751: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L3752;
    }
  goto ret0;

 L3752: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 562;  /* cmpsf+63 */
    }
  goto ret0;

 L3774: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3775;
    }
  goto ret0;

 L3775: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3776;
    }
  goto ret0;

 L3776: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3777;
  goto ret0;

 L3777: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L3778;
    }
  goto ret0;

 L3778: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 564;  /* cmpsf+65 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_15 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == PARALLEL
      && XVECLEN (x1, 0) == 2)
    goto L7209;
  goto ret0;

 L7209: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L7210;
  goto ret0;

 L7210: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8606;
    case HImode:
      goto L8607;
    case QImode:
      goto L8608;
    default:
      break;
    }
  goto ret0;

 L8606: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L7211;
    }
  goto ret0;

 L7211: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L8609;
  goto ret0;

 L8609: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case AND:
      goto L7212;
    case IOR:
      goto L7242;
    case XOR:
      goto L7272;
    case PLUS:
      goto L7302;
    case MINUS:
      goto L7332;
    default:
     break;
   }
  goto ret0;

 L7212: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L7213;
    }
  goto ret0;

 L7213: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L7214;
    }
  goto ret0;

 L7214: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7215;
  goto ret0;

 L7215: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L7216;
    }
  goto ret0;

 L7216: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 884;  /* cmpsf+385 */
    }
  goto ret0;

 L7242: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L7243;
    }
  goto ret0;

 L7243: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L7244;
    }
  goto ret0;

 L7244: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7245;
  goto ret0;

 L7245: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L7246;
    }
  goto ret0;

 L7246: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 886;  /* cmpsf+387 */
    }
  goto ret0;

 L7272: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L7273;
    }
  goto ret0;

 L7273: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L7274;
    }
  goto ret0;

 L7274: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7275;
  goto ret0;

 L7275: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L7276;
    }
  goto ret0;

 L7276: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 888;  /* cmpsf+389 */
    }
  goto ret0;

 L7302: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L7303;
    }
  goto ret0;

 L7303: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L7304;
    }
  goto ret0;

 L7304: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7305;
  goto ret0;

 L7305: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L7306;
    }
  goto ret0;

 L7306: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 890;  /* cmpsf+391 */
    }
  goto ret0;

 L7332: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L7333;
    }
  goto ret0;

 L7333: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L7334;
    }
  goto ret0;

 L7334: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7335;
  goto ret0;

 L7335: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L7336;
    }
  goto ret0;

 L7336: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 892;  /* cmpsf+393 */
    }
  goto ret0;

 L8607: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L7361;
    }
  goto ret0;

 L7361: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode)
    goto L8614;
  goto ret0;

 L8614: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case AND:
      goto L7362;
    case IOR:
      goto L7392;
    case XOR:
      goto L7422;
    case PLUS:
      goto L7452;
    case MINUS:
      goto L7482;
    default:
     break;
   }
  goto ret0;

 L7362: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L7363;
    }
  goto ret0;

 L7363: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L7364;
    }
  goto ret0;

 L7364: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7365;
  goto ret0;

 L7365: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L7366;
    }
  goto ret0;

 L7366: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 894;  /* cmpsf+395 */
    }
  goto ret0;

 L7392: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L7393;
    }
  goto ret0;

 L7393: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L7394;
    }
  goto ret0;

 L7394: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7395;
  goto ret0;

 L7395: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L7396;
    }
  goto ret0;

 L7396: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 896;  /* cmpsf+397 */
    }
  goto ret0;

 L7422: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L7423;
    }
  goto ret0;

 L7423: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L7424;
    }
  goto ret0;

 L7424: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7425;
  goto ret0;

 L7425: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L7426;
    }
  goto ret0;

 L7426: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 898;  /* cmpsf+399 */
    }
  goto ret0;

 L7452: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L7453;
    }
  goto ret0;

 L7453: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L7454;
    }
  goto ret0;

 L7454: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7455;
  goto ret0;

 L7455: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L7456;
    }
  goto ret0;

 L7456: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 900;  /* cmpsf+401 */
    }
  goto ret0;

 L7482: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L7483;
    }
  goto ret0;

 L7483: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L7484;
    }
  goto ret0;

 L7484: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7485;
  goto ret0;

 L7485: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L7486;
    }
  goto ret0;

 L7486: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 902;  /* cmpsf+403 */
    }
  goto ret0;

 L8608: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, QImode))
    {
      operands[0] = x3;
      goto L7511;
    }
  goto ret0;

 L7511: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == QImode)
    goto L8619;
  goto ret0;

 L8619: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case AND:
      goto L7512;
    case IOR:
      goto L7542;
    case XOR:
      goto L7572;
    case PLUS:
      goto L7602;
    case MINUS:
      goto L7632;
    default:
     break;
   }
  goto ret0;

 L7512: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L7513;
    }
  goto ret0;

 L7513: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L7514;
    }
  goto ret0;

 L7514: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7515;
  goto ret0;

 L7515: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L7516;
    }
  goto ret0;

 L7516: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 904;  /* cmpsf+405 */
    }
  goto ret0;

 L7542: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L7543;
    }
  goto ret0;

 L7543: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L7544;
    }
  goto ret0;

 L7544: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7545;
  goto ret0;

 L7545: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L7546;
    }
  goto ret0;

 L7546: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 906;  /* cmpsf+407 */
    }
  goto ret0;

 L7572: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L7573;
    }
  goto ret0;

 L7573: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L7574;
    }
  goto ret0;

 L7574: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7575;
  goto ret0;

 L7575: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L7576;
    }
  goto ret0;

 L7576: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 908;  /* cmpsf+409 */
    }
  goto ret0;

 L7602: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L7603;
    }
  goto ret0;

 L7603: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L7604;
    }
  goto ret0;

 L7604: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7605;
  goto ret0;

 L7605: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L7606;
    }
  goto ret0;

 L7606: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 910;  /* cmpsf+411 */
    }
  goto ret0;

 L7632: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L7633;
    }
  goto ret0;

 L7633: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L7634;
    }
  goto ret0;

 L7634: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7635;
  goto ret0;

 L7635: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L7636;
    }
  goto ret0;

 L7636: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 912;  /* cmpsf+413 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_16 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == PARALLEL
      && XVECLEN (x1, 0) == 2)
    goto L4339;
  goto ret0;

 L4339: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L4340;
  goto ret0;

 L4340: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8624;
    case HImode:
      goto L8625;
    case QImode:
      goto L8626;
    default:
      break;
    }
  goto ret0;

 L8624: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L4341;
    }
  goto ret0;

 L4341: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L8627;
  goto ret0;

 L8627: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case AND:
      goto L4342;
    case IOR:
      goto L4368;
    case XOR:
      goto L4394;
    case PLUS:
      goto L4420;
    case MINUS:
      goto L4446;
    default:
     break;
   }
  goto ret0;

 L4342: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4343;
    }
  goto ret0;

 L4343: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4344;
    }
  goto ret0;

 L4344: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4345;
  goto ret0;

 L4345: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4346;
    }
  goto ret0;

 L4346: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 623;  /* cmpsf+124 */
    }
  goto ret0;

 L4368: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4369;
    }
  goto ret0;

 L4369: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4370;
    }
  goto ret0;

 L4370: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4371;
  goto ret0;

 L4371: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4372;
    }
  goto ret0;

 L4372: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 625;  /* cmpsf+126 */
    }
  goto ret0;

 L4394: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4395;
    }
  goto ret0;

 L4395: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4396;
    }
  goto ret0;

 L4396: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4397;
  goto ret0;

 L4397: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4398;
    }
  goto ret0;

 L4398: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 627;  /* cmpsf+128 */
    }
  goto ret0;

 L4420: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4421;
    }
  goto ret0;

 L4421: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4422;
    }
  goto ret0;

 L4422: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4423;
  goto ret0;

 L4423: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4424;
    }
  goto ret0;

 L4424: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 629;  /* cmpsf+130 */
    }
  goto ret0;

 L4446: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4447;
    }
  goto ret0;

 L4447: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4448;
    }
  goto ret0;

 L4448: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4449;
  goto ret0;

 L4449: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4450;
    }
  goto ret0;

 L4450: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 631;  /* cmpsf+132 */
    }
  goto ret0;

 L8625: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L4471;
    }
  goto ret0;

 L4471: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode)
    goto L8632;
  goto ret0;

 L8632: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case AND:
      goto L4472;
    case IOR:
      goto L4498;
    case XOR:
      goto L4524;
    case PLUS:
      goto L4550;
    case MINUS:
      goto L4576;
    default:
     break;
   }
  goto ret0;

 L4472: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L4473;
    }
  goto ret0;

 L4473: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L4474;
    }
  goto ret0;

 L4474: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4475;
  goto ret0;

 L4475: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L4476;
    }
  goto ret0;

 L4476: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 633;  /* cmpsf+134 */
    }
  goto ret0;

 L4498: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L4499;
    }
  goto ret0;

 L4499: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L4500;
    }
  goto ret0;

 L4500: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4501;
  goto ret0;

 L4501: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L4502;
    }
  goto ret0;

 L4502: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 635;  /* cmpsf+136 */
    }
  goto ret0;

 L4524: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L4525;
    }
  goto ret0;

 L4525: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L4526;
    }
  goto ret0;

 L4526: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4527;
  goto ret0;

 L4527: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L4528;
    }
  goto ret0;

 L4528: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 637;  /* cmpsf+138 */
    }
  goto ret0;

 L4550: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L4551;
    }
  goto ret0;

 L4551: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L4552;
    }
  goto ret0;

 L4552: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4553;
  goto ret0;

 L4553: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L4554;
    }
  goto ret0;

 L4554: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 639;  /* cmpsf+140 */
    }
  goto ret0;

 L4576: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L4577;
    }
  goto ret0;

 L4577: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L4578;
    }
  goto ret0;

 L4578: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4579;
  goto ret0;

 L4579: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L4580;
    }
  goto ret0;

 L4580: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 641;  /* cmpsf+142 */
    }
  goto ret0;

 L8626: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, QImode))
    {
      operands[0] = x3;
      goto L4601;
    }
  goto ret0;

 L4601: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == QImode)
    goto L8637;
  goto ret0;

 L8637: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case AND:
      goto L4602;
    case IOR:
      goto L4628;
    case XOR:
      goto L4654;
    case PLUS:
      goto L4680;
    case MINUS:
      goto L4706;
    default:
     break;
   }
  goto ret0;

 L4602: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L4603;
    }
  goto ret0;

 L4603: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4604;
    }
  goto ret0;

 L4604: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4605;
  goto ret0;

 L4605: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L4606;
    }
  goto ret0;

 L4606: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 643;  /* cmpsf+144 */
    }
  goto ret0;

 L4628: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L4629;
    }
  goto ret0;

 L4629: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4630;
    }
  goto ret0;

 L4630: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4631;
  goto ret0;

 L4631: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L4632;
    }
  goto ret0;

 L4632: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 645;  /* cmpsf+146 */
    }
  goto ret0;

 L4654: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L4655;
    }
  goto ret0;

 L4655: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4656;
    }
  goto ret0;

 L4656: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4657;
  goto ret0;

 L4657: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L4658;
    }
  goto ret0;

 L4658: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 647;  /* cmpsf+148 */
    }
  goto ret0;

 L4680: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L4681;
    }
  goto ret0;

 L4681: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4682;
    }
  goto ret0;

 L4682: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4683;
  goto ret0;

 L4683: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L4684;
    }
  goto ret0;

 L4684: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 649;  /* cmpsf+150 */
    }
  goto ret0;

 L4706: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L4707;
    }
  goto ret0;

 L4707: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4708;
    }
  goto ret0;

 L4708: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4709;
  goto ret0;

 L4709: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L4710;
    }
  goto ret0;

 L4710: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 651;  /* cmpsf+152 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_17 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == PARALLEL
      && XVECLEN (x1, 0) == 2)
    goto L5271;
  goto ret0;

 L5271: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L5272;
  goto ret0;

 L5272: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8642;
    case HImode:
      goto L8643;
    case QImode:
      goto L8644;
    default:
      break;
    }
  goto ret0;

 L8642: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L5273;
    }
  goto ret0;

 L5273: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L8645;
  goto ret0;

 L8645: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case AND:
      goto L5274;
    case IOR:
      goto L5300;
    case XOR:
      goto L5326;
    case PLUS:
      goto L5352;
    case MINUS:
      goto L5378;
    default:
     break;
   }
  goto ret0;

 L5274: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5275;
    }
  goto ret0;

 L5275: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5276;
    }
  goto ret0;

 L5276: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5277;
  goto ret0;

 L5277: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L5278;
    }
  goto ret0;

 L5278: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 710;  /* cmpsf+211 */
    }
  goto ret0;

 L5300: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5301;
    }
  goto ret0;

 L5301: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5302;
    }
  goto ret0;

 L5302: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5303;
  goto ret0;

 L5303: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L5304;
    }
  goto ret0;

 L5304: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 712;  /* cmpsf+213 */
    }
  goto ret0;

 L5326: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5327;
    }
  goto ret0;

 L5327: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5328;
    }
  goto ret0;

 L5328: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5329;
  goto ret0;

 L5329: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L5330;
    }
  goto ret0;

 L5330: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 714;  /* cmpsf+215 */
    }
  goto ret0;

 L5352: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5353;
    }
  goto ret0;

 L5353: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5354;
    }
  goto ret0;

 L5354: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5355;
  goto ret0;

 L5355: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L5356;
    }
  goto ret0;

 L5356: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 716;  /* cmpsf+217 */
    }
  goto ret0;

 L5378: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5379;
    }
  goto ret0;

 L5379: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5380;
    }
  goto ret0;

 L5380: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5381;
  goto ret0;

 L5381: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L5382;
    }
  goto ret0;

 L5382: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 718;  /* cmpsf+219 */
    }
  goto ret0;

 L8643: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L5403;
    }
  goto ret0;

 L5403: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode)
    goto L8650;
  goto ret0;

 L8650: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case AND:
      goto L5404;
    case IOR:
      goto L5430;
    case XOR:
      goto L5456;
    case PLUS:
      goto L5482;
    case MINUS:
      goto L5508;
    default:
     break;
   }
  goto ret0;

 L5404: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L5405;
    }
  goto ret0;

 L5405: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L5406;
    }
  goto ret0;

 L5406: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5407;
  goto ret0;

 L5407: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L5408;
    }
  goto ret0;

 L5408: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 720;  /* cmpsf+221 */
    }
  goto ret0;

 L5430: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L5431;
    }
  goto ret0;

 L5431: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L5432;
    }
  goto ret0;

 L5432: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5433;
  goto ret0;

 L5433: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L5434;
    }
  goto ret0;

 L5434: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 722;  /* cmpsf+223 */
    }
  goto ret0;

 L5456: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L5457;
    }
  goto ret0;

 L5457: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L5458;
    }
  goto ret0;

 L5458: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5459;
  goto ret0;

 L5459: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L5460;
    }
  goto ret0;

 L5460: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 724;  /* cmpsf+225 */
    }
  goto ret0;

 L5482: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L5483;
    }
  goto ret0;

 L5483: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L5484;
    }
  goto ret0;

 L5484: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5485;
  goto ret0;

 L5485: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L5486;
    }
  goto ret0;

 L5486: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 726;  /* cmpsf+227 */
    }
  goto ret0;

 L5508: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L5509;
    }
  goto ret0;

 L5509: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L5510;
    }
  goto ret0;

 L5510: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5511;
  goto ret0;

 L5511: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L5512;
    }
  goto ret0;

 L5512: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 728;  /* cmpsf+229 */
    }
  goto ret0;

 L8644: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, QImode))
    {
      operands[0] = x3;
      goto L5533;
    }
  goto ret0;

 L5533: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == QImode)
    goto L8655;
  goto ret0;

 L8655: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case AND:
      goto L5534;
    case IOR:
      goto L5560;
    case XOR:
      goto L5586;
    case PLUS:
      goto L5612;
    case MINUS:
      goto L5638;
    default:
     break;
   }
  goto ret0;

 L5534: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L5535;
    }
  goto ret0;

 L5535: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5536;
    }
  goto ret0;

 L5536: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5537;
  goto ret0;

 L5537: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L5538;
    }
  goto ret0;

 L5538: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 730;  /* cmpsf+231 */
    }
  goto ret0;

 L5560: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L5561;
    }
  goto ret0;

 L5561: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5562;
    }
  goto ret0;

 L5562: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5563;
  goto ret0;

 L5563: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L5564;
    }
  goto ret0;

 L5564: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 732;  /* cmpsf+233 */
    }
  goto ret0;

 L5586: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L5587;
    }
  goto ret0;

 L5587: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5588;
    }
  goto ret0;

 L5588: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5589;
  goto ret0;

 L5589: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L5590;
    }
  goto ret0;

 L5590: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 734;  /* cmpsf+235 */
    }
  goto ret0;

 L5612: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L5613;
    }
  goto ret0;

 L5613: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5614;
    }
  goto ret0;

 L5614: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5615;
  goto ret0;

 L5615: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L5616;
    }
  goto ret0;

 L5616: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 736;  /* cmpsf+237 */
    }
  goto ret0;

 L5638: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L5639;
    }
  goto ret0;

 L5639: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5640;
    }
  goto ret0;

 L5640: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5641;
  goto ret0;

 L5641: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L5642;
    }
  goto ret0;

 L5642: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 738;  /* cmpsf+239 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_18 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == PARALLEL
      && XVECLEN (x1, 0) == 2)
    goto L6203;
  goto ret0;

 L6203: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L6204;
  goto ret0;

 L6204: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8660;
    case HImode:
      goto L8661;
    case QImode:
      goto L8662;
    default:
      break;
    }
  goto ret0;

 L8660: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L6205;
    }
  goto ret0;

 L6205: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L8663;
  goto ret0;

 L8663: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case AND:
      goto L6206;
    case IOR:
      goto L6232;
    case XOR:
      goto L6258;
    case PLUS:
      goto L6284;
    case MINUS:
      goto L6310;
    default:
     break;
   }
  goto ret0;

 L6206: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6207;
    }
  goto ret0;

 L6207: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6208;
    }
  goto ret0;

 L6208: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6209;
  goto ret0;

 L6209: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6210;
    }
  goto ret0;

 L6210: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 797;  /* cmpsf+298 */
    }
  goto ret0;

 L6232: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6233;
    }
  goto ret0;

 L6233: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6234;
    }
  goto ret0;

 L6234: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6235;
  goto ret0;

 L6235: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6236;
    }
  goto ret0;

 L6236: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 799;  /* cmpsf+300 */
    }
  goto ret0;

 L6258: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6259;
    }
  goto ret0;

 L6259: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6260;
    }
  goto ret0;

 L6260: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6261;
  goto ret0;

 L6261: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6262;
    }
  goto ret0;

 L6262: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 801;  /* cmpsf+302 */
    }
  goto ret0;

 L6284: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6285;
    }
  goto ret0;

 L6285: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6286;
    }
  goto ret0;

 L6286: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6287;
  goto ret0;

 L6287: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6288;
    }
  goto ret0;

 L6288: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 803;  /* cmpsf+304 */
    }
  goto ret0;

 L6310: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6311;
    }
  goto ret0;

 L6311: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6312;
    }
  goto ret0;

 L6312: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6313;
  goto ret0;

 L6313: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6314;
    }
  goto ret0;

 L6314: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 805;  /* cmpsf+306 */
    }
  goto ret0;

 L8661: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L6335;
    }
  goto ret0;

 L6335: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode)
    goto L8668;
  goto ret0;

 L8668: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case AND:
      goto L6336;
    case IOR:
      goto L6362;
    case XOR:
      goto L6388;
    case PLUS:
      goto L6414;
    case MINUS:
      goto L6440;
    default:
     break;
   }
  goto ret0;

 L6336: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L6337;
    }
  goto ret0;

 L6337: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L6338;
    }
  goto ret0;

 L6338: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6339;
  goto ret0;

 L6339: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L6340;
    }
  goto ret0;

 L6340: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 807;  /* cmpsf+308 */
    }
  goto ret0;

 L6362: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L6363;
    }
  goto ret0;

 L6363: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L6364;
    }
  goto ret0;

 L6364: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6365;
  goto ret0;

 L6365: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L6366;
    }
  goto ret0;

 L6366: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 809;  /* cmpsf+310 */
    }
  goto ret0;

 L6388: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L6389;
    }
  goto ret0;

 L6389: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L6390;
    }
  goto ret0;

 L6390: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6391;
  goto ret0;

 L6391: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L6392;
    }
  goto ret0;

 L6392: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 811;  /* cmpsf+312 */
    }
  goto ret0;

 L6414: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L6415;
    }
  goto ret0;

 L6415: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L6416;
    }
  goto ret0;

 L6416: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6417;
  goto ret0;

 L6417: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L6418;
    }
  goto ret0;

 L6418: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 813;  /* cmpsf+314 */
    }
  goto ret0;

 L6440: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L6441;
    }
  goto ret0;

 L6441: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L6442;
    }
  goto ret0;

 L6442: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6443;
  goto ret0;

 L6443: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L6444;
    }
  goto ret0;

 L6444: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 815;  /* cmpsf+316 */
    }
  goto ret0;

 L8662: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, QImode))
    {
      operands[0] = x3;
      goto L6465;
    }
  goto ret0;

 L6465: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == QImode)
    goto L8673;
  goto ret0;

 L8673: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case AND:
      goto L6466;
    case IOR:
      goto L6492;
    case XOR:
      goto L6518;
    case PLUS:
      goto L6544;
    case MINUS:
      goto L6570;
    default:
     break;
   }
  goto ret0;

 L6466: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L6467;
    }
  goto ret0;

 L6467: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L6468;
    }
  goto ret0;

 L6468: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6469;
  goto ret0;

 L6469: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L6470;
    }
  goto ret0;

 L6470: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 817;  /* cmpsf+318 */
    }
  goto ret0;

 L6492: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L6493;
    }
  goto ret0;

 L6493: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L6494;
    }
  goto ret0;

 L6494: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6495;
  goto ret0;

 L6495: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L6496;
    }
  goto ret0;

 L6496: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 819;  /* cmpsf+320 */
    }
  goto ret0;

 L6518: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L6519;
    }
  goto ret0;

 L6519: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L6520;
    }
  goto ret0;

 L6520: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6521;
  goto ret0;

 L6521: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L6522;
    }
  goto ret0;

 L6522: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 821;  /* cmpsf+322 */
    }
  goto ret0;

 L6544: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L6545;
    }
  goto ret0;

 L6545: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L6546;
    }
  goto ret0;

 L6546: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6547;
  goto ret0;

 L6547: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L6548;
    }
  goto ret0;

 L6548: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 823;  /* cmpsf+324 */
    }
  goto ret0;

 L6570: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L6571;
    }
  goto ret0;

 L6571: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L6572;
    }
  goto ret0;

 L6572: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6573;
  goto ret0;

 L6573: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L6574;
    }
  goto ret0;

 L6574: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2035 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 825;  /* cmpsf+326 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_19 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DImode:
      goto L8678;
    case SImode:
      goto L8682;
    case HImode:
      goto L8680;
    case QImode:
      goto L8681;
    default:
      break;
    }
  goto ret0;

 L8678: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3867;
    }
  goto ret0;

 L3867: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_immediate_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L3868;
    }
  goto ret0;

 L3868: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3869;
    case PARALLEL:
      goto L8683;
    default:
     break;
   }
  goto ret0;

 L3869: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3870;
    }
  goto ret0;

 L3870: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L8684;
  goto ret0;

 L8684: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L3871;
    case NOT:
      goto L3879;
    default:
     break;
   }
  goto ret0;

 L3871: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0])
      && (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2334 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 572;  /* cmpsf+73 */
    }
  goto ret0;

 L3879: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0])
      && (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2374 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 573;  /* cmpsf+74 */
    }
  goto ret0;

 L8683: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 3)
    goto L3962;
  goto ret0;

 L3962: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L3963;
  goto ret0;

 L3963: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 3)
    goto L3975;
  goto ret0;

 L3975: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8686;
    case V2HImode:
      goto L8687;
    case V4QImode:
      goto L8688;
    default:
      break;
    }
 L3964: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L3965;
    }
  goto ret0;

 L8686: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L3976;
    }
  goto L3964;

 L3976: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == USE)
    goto L3977;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L3964;

 L3977: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 3)
    goto L3978;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L3964;

 L3978: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == RETURN
      && (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 3246 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE))))
    {
      return 584;  /* cmpsf+85 */
    }
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L3964;

 L8687: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, V2HImode))
    {
      operands[0] = x3;
      goto L3987;
    }
  goto L3964;

 L3987: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == USE)
    goto L3988;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L3964;

 L3988: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 3)
    goto L3989;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L3964;

 L3989: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == RETURN
      && (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 3246 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE))))
    {
      return 585;  /* cmpsf+86 */
    }
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L3964;

 L8688: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, V4QImode))
    {
      operands[0] = x3;
      goto L3998;
    }
  goto L3964;

 L3998: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == USE)
    goto L3999;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L3964;

 L3999: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 3)
    goto L4000;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L3964;

 L4000: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == RETURN
      && (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 3246 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE))))
    {
      return 586;  /* cmpsf+87 */
    }
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L3964;

 L3965: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == USE)
    goto L3966;
  goto ret0;

 L3966: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 3)
    goto L3967;
  goto ret0;

 L3967: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == RETURN
      && (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 3236 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE) &&
   ((INTVAL(operands[0]) == -1) || (INTVAL(operands[0]) == 0) || (INTVAL(operands[0]) == 1)))))
    {
      return 583;  /* cmpsf+84 */
    }
  goto ret0;

 L8682: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == AND)
    goto L7739;
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4799;
    }
  goto ret0;

 L7739: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L7740;
    }
  goto ret0;

 L7740: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (one_bit_set_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L7741;
    }
  goto ret0;

 L7741: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L7742;
  goto ret0;

 L7742: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L7743;
    case PARALLEL:
      goto L8689;
    default:
     break;
   }
  goto ret0;

 L7743: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L7744;
    }
  goto ret0;

 L7744: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L8690;
  goto ret0;

 L8690: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L7745;
    case NOT:
      goto L7755;
    default:
     break;
   }
  goto ret0;

 L7745: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0])
      && (
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2334 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 920;  /* cmpsf+421 */
    }
  goto ret0;

 L7755: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0])
      && (
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2374 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 921;  /* cmpsf+422 */
    }
  goto ret0;

 L8689: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 3)
    goto L7858;
  goto ret0;

 L7858: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L7859;
  goto ret0;

 L7859: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 3)
    goto L7873;
  goto ret0;

 L7873: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8692;
    case V2HImode:
      goto L8693;
    case V4QImode:
      goto L8694;
    default:
      break;
    }
 L7860: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L7861;
    }
  goto ret0;

 L8692: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L7874;
    }
  goto L7860;

 L7874: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == USE)
    goto L7875;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L7860;

 L7875: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 3)
    goto L7876;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L7860;

 L7876: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == RETURN
      && (
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 3246 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE))))
    {
      return 932;  /* cmpsf+433 */
    }
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L7860;

 L8693: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, V2HImode))
    {
      operands[0] = x3;
      goto L7887;
    }
  goto L7860;

 L7887: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == USE)
    goto L7888;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L7860;

 L7888: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 3)
    goto L7889;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L7860;

 L7889: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == RETURN
      && (
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 3246 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE))))
    {
      return 933;  /* cmpsf+434 */
    }
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L7860;

 L8694: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, V4QImode))
    {
      operands[0] = x3;
      goto L7900;
    }
  goto L7860;

 L7900: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == USE)
    goto L7901;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L7860;

 L7901: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 3)
    goto L7902;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L7860;

 L7902: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == RETURN
      && (
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 3246 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE))))
    {
      return 934;  /* cmpsf+435 */
    }
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L7860;

 L7861: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == USE)
    goto L7862;
  goto ret0;

 L7862: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 3)
    goto L7863;
  goto ret0;

 L7863: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == RETURN
      && (
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 3236 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE) &&
   ((INTVAL(operands[0]) == -1) || (INTVAL(operands[0]) == 0) || (INTVAL(operands[0]) == 1)))))
    {
      return 931;  /* cmpsf+432 */
    }
  goto ret0;

 L4799: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_const_int_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L4800;
    }
  goto ret0;

 L4800: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L4801;
    case PARALLEL:
      goto L8695;
    default:
     break;
   }
  goto ret0;

 L4801: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4802;
    }
  goto ret0;

 L4802: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L8696;
  goto ret0;

 L8696: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L4803;
    case NOT:
      goto L4811;
    default:
     break;
   }
  goto ret0;

 L4803: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0])
      && (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2334 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 659;  /* cmpsf+160 */
    }
  goto ret0;

 L4811: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0])
      && (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2374 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 660;  /* cmpsf+161 */
    }
  goto ret0;

 L8695: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 3)
    goto L4894;
  goto ret0;

 L4894: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L4895;
  goto ret0;

 L4895: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 3)
    goto L4907;
  goto ret0;

 L4907: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8698;
    case V2HImode:
      goto L8699;
    case V4QImode:
      goto L8700;
    default:
      break;
    }
 L4896: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L4897;
    }
  goto ret0;

 L8698: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L4908;
    }
  goto L4896;

 L4908: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == USE)
    goto L4909;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L4896;

 L4909: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 3)
    goto L4910;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L4896;

 L4910: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == RETURN
      && (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 3246 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE))))
    {
      return 671;  /* cmpsf+172 */
    }
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L4896;

 L8699: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, V2HImode))
    {
      operands[0] = x3;
      goto L4919;
    }
  goto L4896;

 L4919: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == USE)
    goto L4920;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L4896;

 L4920: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 3)
    goto L4921;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L4896;

 L4921: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == RETURN
      && (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 3246 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE))))
    {
      return 672;  /* cmpsf+173 */
    }
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L4896;

 L8700: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, V4QImode))
    {
      operands[0] = x3;
      goto L4930;
    }
  goto L4896;

 L4930: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == USE)
    goto L4931;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L4896;

 L4931: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 3)
    goto L4932;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L4896;

 L4932: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == RETURN
      && (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 3246 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE))))
    {
      return 673;  /* cmpsf+174 */
    }
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L4896;

 L4897: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == USE)
    goto L4898;
  goto ret0;

 L4898: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 3)
    goto L4899;
  goto ret0;

 L4899: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == RETURN
      && (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 3236 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE) &&
   ((INTVAL(operands[0]) == -1) || (INTVAL(operands[0]) == 0) || (INTVAL(operands[0]) == 1)))))
    {
      return 670;  /* cmpsf+171 */
    }
  goto ret0;

 L8680: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L5731;
    }
  goto ret0;

 L5731: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L5732;
    }
  goto ret0;

 L5732: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L5733;
    case PARALLEL:
      goto L8701;
    default:
     break;
   }
  goto ret0;

 L5733: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5734;
    }
  goto ret0;

 L5734: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L8702;
  goto ret0;

 L8702: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L5735;
    case NOT:
      goto L5743;
    default:
     break;
   }
  goto ret0;

 L5735: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0])
      && (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2334 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 746;  /* cmpsf+247 */
    }
  goto ret0;

 L5743: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0])
      && (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2374 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 747;  /* cmpsf+248 */
    }
  goto ret0;

 L8701: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 3)
    goto L5826;
  goto ret0;

 L5826: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L5827;
  goto ret0;

 L5827: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 3)
    goto L5839;
  goto ret0;

 L5839: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8704;
    case V2HImode:
      goto L8705;
    case V4QImode:
      goto L8706;
    default:
      break;
    }
 L5828: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L5829;
    }
  goto ret0;

 L8704: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L5840;
    }
  goto L5828;

 L5840: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == USE)
    goto L5841;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L5828;

 L5841: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 3)
    goto L5842;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L5828;

 L5842: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == RETURN
      && (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 3246 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE))))
    {
      return 758;  /* cmpsf+259 */
    }
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L5828;

 L8705: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, V2HImode))
    {
      operands[0] = x3;
      goto L5851;
    }
  goto L5828;

 L5851: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == USE)
    goto L5852;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L5828;

 L5852: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 3)
    goto L5853;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L5828;

 L5853: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == RETURN
      && (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 3246 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE))))
    {
      return 759;  /* cmpsf+260 */
    }
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L5828;

 L8706: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, V4QImode))
    {
      operands[0] = x3;
      goto L5862;
    }
  goto L5828;

 L5862: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == USE)
    goto L5863;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L5828;

 L5863: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 3)
    goto L5864;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L5828;

 L5864: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == RETURN
      && (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 3246 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE))))
    {
      return 760;  /* cmpsf+261 */
    }
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L5828;

 L5829: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == USE)
    goto L5830;
  goto ret0;

 L5830: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 3)
    goto L5831;
  goto ret0;

 L5831: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == RETURN
      && (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 3236 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE) &&
   ((INTVAL(operands[0]) == -1) || (INTVAL(operands[0]) == 0) || (INTVAL(operands[0]) == 1)))))
    {
      return 757;  /* cmpsf+258 */
    }
  goto ret0;

 L8681: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L6663;
    }
  goto ret0;

 L6663: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[3] = x2;
      goto L6664;
    }
  goto ret0;

 L6664: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L6665;
    case PARALLEL:
      goto L8707;
    default:
     break;
   }
  goto ret0;

 L6665: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L6666;
    }
  goto ret0;

 L6666: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L8708;
  goto ret0;

 L8708: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L6667;
    case NOT:
      goto L6675;
    default:
     break;
   }
  goto ret0;

 L6667: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0])
      && (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2334 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 833;  /* cmpsf+334 */
    }
  goto ret0;

 L6675: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0])
      && (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 2374 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS)))
    {
      return 834;  /* cmpsf+335 */
    }
  goto ret0;

 L8707: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 3)
    goto L6758;
  goto ret0;

 L6758: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L6759;
  goto ret0;

 L6759: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 3)
    goto L6771;
  goto ret0;

 L6771: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8710;
    case V2HImode:
      goto L8711;
    case V4QImode:
      goto L8712;
    default:
      break;
    }
 L6760: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L6761;
    }
  goto ret0;

 L8710: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L6772;
    }
  goto L6760;

 L6772: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == USE)
    goto L6773;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L6760;

 L6773: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 3)
    goto L6774;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L6760;

 L6774: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == RETURN
      && (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 3246 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE))))
    {
      return 845;  /* cmpsf+346 */
    }
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L6760;

 L8711: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, V2HImode))
    {
      operands[0] = x3;
      goto L6783;
    }
  goto L6760;

 L6783: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == USE)
    goto L6784;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L6760;

 L6784: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 3)
    goto L6785;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L6760;

 L6785: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == RETURN
      && (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 3246 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE))))
    {
      return 846;  /* cmpsf+347 */
    }
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L6760;

 L8712: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, V4QImode))
    {
      operands[0] = x3;
      goto L6794;
    }
  goto L6760;

 L6794: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == USE)
    goto L6795;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L6760;

 L6795: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 3)
    goto L6796;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L6760;

 L6796: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == RETURN
      && (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 3246 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE))))
    {
      return 847;  /* cmpsf+348 */
    }
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  goto L6760;

 L6761: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == USE)
    goto L6762;
  goto ret0;

 L6762: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 3)
    goto L6763;
  goto ret0;

 L6763: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == RETURN
      && (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 3236 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE) &&
   ((INTVAL(operands[0]) == -1) || (INTVAL(operands[0]) == 0) || (INTVAL(operands[0]) == 1)))))
    {
      return 844;  /* cmpsf+345 */
    }
  goto ret0;
 ret0:
  return -1;
}

int
recog (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  switch (GET_MODE (x0))
    {
    case SImode:
      goto L7903;
    case DImode:
      goto L7904;
    default:
      break;
    }
 L0: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x0))
    {
    case SET:
      goto L1;
    case PARALLEL:
      goto L7905;
    case UNSPEC:
      goto L7906;
    case CALL:
      goto L1694;
    case RETURN:
      goto L7908;
    case CONST_INT:
      goto L7911;
    case PREFETCH:
      goto L1836;
    case UNSPEC_VOLATILE:
      goto L7912;
    case COND_EXEC:
      goto L3070;
    default:
     break;
   }
  goto ret0;

 L7903: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x0) == UNSPEC_VOLATILE
      && XVECLEN (x0, 0) == 3
      && XINT (x0, 1) == 13)
    goto L2004;
  goto L0;

 L2004: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (immediate_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L2005;
    }
  goto L0;

 L2005: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (immediate_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L2006;
    }
  goto L0;

 L2006: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (avr32_cop_move_operand (x1, SImode))
    {
      operands[2] = x1;
      return 299;  /* mvrcsi */
    }
  goto L0;

 L7904: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x0) == UNSPEC_VOLATILE
      && XVECLEN (x0, 0) == 3
      && XINT (x0, 1) == 13)
    goto L2008;
  goto L0;

 L2008: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (immediate_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L2009;
    }
  goto L0;

 L2009: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (immediate_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L2010;
    }
  goto L0;

 L2010: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (avr32_cop_move_operand (x1, DImode))
    {
      operands[2] = x1;
      return 300;  /* mvrcdi */
    }
  goto L0;

 L1: ATTRIBUTE_UNUSED_LABEL
  return recog_5 (x0, insn, pnum_clobbers);

 L7905: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x0, 0))
    {
    case 2:
      goto L35;
    case 3:
      goto L1723;
    default:
      break;
    }
  goto ret0;

 L35: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L36;
    case CALL:
      goto L1688;
    case UNSPEC_VOLATILE:
      goto L8250;
    default:
     break;
   }
  goto ret0;

 L36: ATTRIBUTE_UNUSED_LABEL
  return recog_6 (x0, insn, pnum_clobbers);

 L1688: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1689;
  goto ret0;

 L1689: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (avr32_call_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L1690;
    }
  goto ret0;

 L1690: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L1691;

 L1691: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1692;
  goto ret0;

 L1692: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 1)
    {
      return 244;  /* call_internal */
    }
  goto ret0;

 L8250: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 26)
    goto L1841;
  goto ret0;

 L1841: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1842;
    }
  goto ret0;

 L1842: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1843;
  goto ret0;

 L1843: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[1] = x2;
      return 263;  /* eh_return */
    }
  goto ret0;

 L1723: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L1724;
  goto ret0;

 L1724: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 3)
    goto L1751;
  goto ret0;

 L1751: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8280;
    case V2HImode:
      goto L8281;
    case V4QImode:
      goto L8282;
    default:
      break;
    }
 L1725: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L1726;
    }
  goto ret0;

 L8280: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1752;
    }
  goto L1725;

 L1752: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L1753;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L1753: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 3)
    goto L1754;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L1754: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  switch (GET_CODE (x1))
    {
    case RETURN:
      goto L8283;
    case SET:
      goto L1776;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L8283: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3246 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE)))
    {
      return 252;  /* return_sireg */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L1776: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L1777;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L1777: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L1778;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L1778: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (avr32_comparison_operator (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L1779;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L1779: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L1780;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L1780: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1781;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L1781: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == RETURN)
    goto L1782;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L1782: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && 
#line 3259 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE)))
    {
      return 255;  /* return_sireg_cond */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L8281: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2HImode))
    {
      operands[0] = x2;
      goto L1759;
    }
  goto L1725;

 L1759: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L1760;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L1760: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 3)
    goto L1761;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L1761: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  switch (GET_CODE (x1))
    {
    case RETURN:
      goto L8284;
    case SET:
      goto L1790;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L8284: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3246 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE)))
    {
      return 253;  /* return_v2hireg */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L1790: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L1791;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L1791: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L1792;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L1792: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (avr32_comparison_operator (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L1793;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L1793: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L1794;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L1794: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1795;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L1795: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == RETURN)
    goto L1796;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L1796: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && 
#line 3259 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE)))
    {
      return 256;  /* return_v2hireg_cond */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L8282: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4QImode))
    {
      operands[0] = x2;
      goto L1766;
    }
  goto L1725;

 L1766: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L1767;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L1767: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 3)
    goto L1768;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L1768: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  switch (GET_CODE (x1))
    {
    case RETURN:
      goto L8285;
    case SET:
      goto L1804;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L8285: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3246 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE)))
    {
      return 254;  /* return_v4qireg */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L1804: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L1805;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L1805: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L1806;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L1806: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (avr32_comparison_operator (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L1807;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L1807: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L1808;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L1808: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1809;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L1809: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == RETURN)
    goto L1810;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L1810: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && 
#line 3259 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE)))
    {
      return 257;  /* return_v4qireg_cond */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1725;

 L1726: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L1727;
  goto ret0;

 L1727: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 3)
    goto L1728;
  goto ret0;

 L1728: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  switch (GET_CODE (x1))
    {
    case RETURN:
      goto L8286;
    case SET:
      goto L1736;
    case UNSPEC_VOLATILE:
      goto L8288;
    default:
     break;
   }
  goto ret0;

 L8286: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3209 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (FALSE) &&
   ((INTVAL(operands[0]) == -1) || (INTVAL(operands[0]) == 0) || (INTVAL(operands[0]) == 1))))
    {
      return 249;  /* return_imm */
    }
 L8287: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3236 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE) &&
   ((INTVAL(operands[0]) == -1) || (INTVAL(operands[0]) == 0) || (INTVAL(operands[0]) == 1))))
    {
      return 251;  /* return_imm_predicable */
    }
  goto ret0;

 L1736: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L1737;
  goto ret0;

 L1737: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L1738;
  goto ret0;

 L1738: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (avr32_comparison_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L1739;
    }
  goto ret0;

 L1739: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == RETURN)
    goto L1740;
  goto ret0;

 L1740: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && 
#line 3226 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE) &&
   ((INTVAL(operands[0]) == -1) || (INTVAL(operands[0]) == 0) || (INTVAL(operands[0]) == 1))))
    {
      return 250;  /* return_imm_cond */
    }
  goto ret0;

 L8288: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 0)
    goto L2020;
  goto ret0;

 L2020: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_CODE (x2))
    {
    case RETURN:
      goto L8289;
    case CONST_INT:
      goto L8290;
    default:
     break;
   }
  goto ret0;

 L8289: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4083 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(((INTVAL(operands[0]) == -1) || (INTVAL(operands[0]) == 0) || (INTVAL(operands[0]) == 1))))
    {
      return 302;  /* *epilogue_insns_ret_imm */
    }
  goto ret0;

 L8290: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x2, 0) == 0L
      && 
#line 4109 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(((INTVAL(operands[0]) == -1) || (INTVAL(operands[0]) == 0) || (INTVAL(operands[0]) == 1))))
    {
      return 304;  /* *sibcall_epilogue_insns_ret_imm */
    }
  goto ret0;

 L7906: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x0, 0))
    {
    case 3:
      goto L8291;
    case 1:
      goto L8292;
    default:
      break;
    }
  goto ret0;

 L8291: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x0, 1))
    {
    case 4L:
      goto L132;
    case 13L:
      goto L2400;
    default:
      break;
    }
  goto ret0;

 L132: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (register_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L133;
    }
  goto ret0;

 L133: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L134;
    }
  goto ret0;

 L134: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[2] = x1;
      return 29;  /* stm */
    }
  goto ret0;

 L2400: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (register_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L2401;
    }
  goto ret0;

 L2401: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L2402;
    }
  goto ret0;

 L2402: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[2] = x1;
      goto L2403;
    }
  goto ret0;

 L2403: ATTRIBUTE_UNUSED_LABEL
  if (
#line 532 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT))
    {
      return 362;  /* stm_fp */
    }
  goto ret0;

 L8292: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x0, 1) == 1)
    goto L136;
  goto ret0;

 L136: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      return 30;  /* popm */
    }
  goto ret0;

 L1694: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == MEM)
    goto L1695;
  goto ret0;

 L1695: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (avr32_call_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1696;
    }
  goto ret0;

 L1696: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  operands[1] = x1;
  goto L1697;

 L1697: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 244;  /* call_internal */
    }
  goto ret0;

 L7908: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3178 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (FALSE)))
    {
      return 246;  /* return */
    }
 L7909: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3199 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE)))
    {
      return 248;  /* return_cond_predicable */
    }
  goto ret0;

 L7911: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x0, 0) == 0L)
    {
      return 258;  /* nop */
    }
  goto ret0;

 L1836: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (avr32_ks16_address_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1837;
    }
  goto ret0;

 L1837: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L1838;
    }
  goto ret0;

 L1838: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 2);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[2] = x1;
      return 262;  /* prefetch */
    }
  goto ret0;

 L7912: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x0, 0))
    {
    case 1:
      goto L8294;
    case 2:
      goto L8296;
    case 5:
      goto L8314;
    default:
      break;
    }
  goto ret0;

 L8294: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x0, 1))
    {
    case 26L:
      goto L1845;
    case 4L:
      goto L1899;
    case 5L:
      goto L1912;
    case 6L:
      goto L1914;
    case 7L:
      goto L1916;
    case 8L:
      goto L1918;
    case 9L:
      goto L1920;
    case 21L:
      goto L1936;
    case 29L:
      goto L1942;
    case 28L:
      goto L1944;
    case 27L:
      goto L1946;
    case 15L:
      goto L1976;
    case 16L:
      goto L1978;
    case 17L:
      goto L1980;
    case 18L:
      goto L1982;
    case 19L:
      goto L1984;
    case 20L:
      goto L1986;
    case 0L:
      goto L2012;
    default:
      break;
    }
  goto ret0;

 L1845: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1846;
    }
  goto ret0;

 L1846: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 263;  /* eh_return */
    }
  goto ret0;

 L1899: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 268;  /* blockage */
    }
  goto ret0;

 L1912: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (immediate_operand (x1, SImode))
    {
      operands[0] = x1;
      return 272;  /* sync */
    }
  goto ret0;

 L1914: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 273;  /* tlbr */
    }
  goto ret0;

 L1916: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 274;  /* tlbw */
    }
  goto ret0;

 L1918: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 275;  /* tlbs */
    }
  goto ret0;

 L1920: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 276;  /* breakpoint */
    }
  goto ret0;

 L1936: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      return 281;  /* musfr */
    }
  goto ret0;

 L1942: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (immediate_operand (x1, SImode))
    {
      operands[0] = x1;
      return 283;  /* ssrf */
    }
  goto ret0;

 L1944: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (immediate_operand (x1, SImode))
    {
      operands[0] = x1;
      return 284;  /* csrf */
    }
  goto ret0;

 L1946: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 285;  /* frs */
    }
  goto ret0;

 L1976: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 290;  /* align_4 */
    }
  goto ret0;

 L1978: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 291;  /* consttable_start */
    }
  goto ret0;

 L1980: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 292;  /* consttable_end */
    }
  goto ret0;

 L1982: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  operands[0] = x1;
  return 293;  /* consttable_4 */

 L1984: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  operands[0] = x1;
  return 294;  /* consttable_8 */

 L1986: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  operands[0] = x1;
  return 295;  /* consttable_16 */

 L2012: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    case RETURN:
      goto L8316;
    case CONST_INT:
      goto L8317;
    default:
     break;
   }
  goto ret0;

 L8316: ATTRIBUTE_UNUSED_LABEL
  return 301;  /* *epilogue_insns */

 L8317: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x1, 0) == 0L)
    {
      return 303;  /* sibcall_epilogue */
    }
  goto ret0;

 L8296: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x0, 1))
    {
    case 1L:
      goto L1909;
    case 2L:
      goto L1922;
    case 10L:
      goto L1929;
    default:
      break;
    }
  goto ret0;

 L1909: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (avr32_ks11_address_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1910;
    }
  goto ret0;

 L1910: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (immediate_operand (x1, SImode))
    {
      operands[1] = x1;
      return 271;  /* cache */
    }
  goto ret0;

 L1922: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (immediate_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L1923;
    }
  goto ret0;

 L1923: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (register_operand (x1, SImode))
    {
      operands[1] = x1;
      return 277;  /* mtsr */
    }
  goto ret0;

 L1929: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (immediate_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L1930;
    }
  goto ret0;

 L1930: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (register_operand (x1, SImode))
    {
      operands[1] = x1;
      return 279;  /* mtdr */
    }
  goto ret0;

 L8314: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x0, 1) == 14)
    goto L1988;
  goto ret0;

 L1988: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (immediate_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L1989;
    }
  goto ret0;

 L1989: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (immediate_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L1990;
    }
  goto ret0;

 L1990: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (immediate_operand (x1, VOIDmode))
    {
      operands[2] = x1;
      goto L1991;
    }
  goto ret0;

 L1991: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (immediate_operand (x1, VOIDmode))
    {
      operands[3] = x1;
      goto L1992;
    }
  goto ret0;

 L1992: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (immediate_operand (x1, VOIDmode))
    {
      operands[4] = x1;
      return 296;  /* cop */
    }
  goto ret0;

 L3070: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (avr32_comparison_operator (x1, VOIDmode))
    {
      operands[2] = x1;
      goto L3071;
    }
 L3253: ATTRIBUTE_UNUSED_LABEL
  if (avr32_comparison_operator (x1, VOIDmode))
    {
      operands[3] = x1;
      goto L3254;
    }
 L3403: ATTRIBUTE_UNUSED_LABEL
  if (avr32_comparison_operator (x1, VOIDmode))
    {
      operands[4] = x1;
      goto L3404;
    }
 L3865: ATTRIBUTE_UNUSED_LABEL
  if (avr32_comparison_operator (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L3866;
    }
 L3953: ATTRIBUTE_UNUSED_LABEL
  if (avr32_comparison_operator (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L3954;
    }
  goto ret0;

 L3071: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DImode:
      goto L8318;
    case SImode:
      goto L8322;
    case HImode:
      goto L8320;
    case QImode:
      goto L8321;
    default:
      break;
    }
  goto L3253;

 L8318: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L3072;
    }
  goto L3253;

 L3072: ATTRIBUTE_UNUSED_LABEL
  tem = recog_7 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L3253;

 L8322: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == AND)
    goto L6800;
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L4004;
    }
  goto L3253;

 L6800: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6801;
    }
  goto L3253;

 L6801: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (one_bit_set_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L6802;
    }
  goto L3253;

 L6802: ATTRIBUTE_UNUSED_LABEL
  tem = recog_8 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L3253;

 L4004: ATTRIBUTE_UNUSED_LABEL
  tem = recog_9 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L3253;

 L8320: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L4936;
    }
  goto L3253;

 L4936: ATTRIBUTE_UNUSED_LABEL
  tem = recog_10 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L3253;

 L8321: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[3] = x2;
      goto L5868;
    }
  goto L3253;

 L5868: ATTRIBUTE_UNUSED_LABEL
  tem = recog_11 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L3253;

 L3254: ATTRIBUTE_UNUSED_LABEL
  tem = recog_13 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L3403;

 L3404: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DImode:
      goto L8583;
    case SImode:
      goto L8587;
    case HImode:
      goto L8585;
    case QImode:
      goto L8586;
    default:
      break;
    }
  goto L3865;

 L8583: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[5] = x2;
      goto L3405;
    }
  goto L3865;

 L3405: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_immediate_operand (x2, DImode))
    {
      operands[6] = x2;
      goto L3406;
    }
  goto L3865;

 L3406: ATTRIBUTE_UNUSED_LABEL
  tem = recog_14 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L3865;

 L8587: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == AND)
    goto L7205;
  if (register_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L4337;
    }
  goto L3865;

 L7205: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L7206;
    }
  goto L3865;

 L7206: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (one_bit_set_operand (x3, SImode))
    {
      operands[6] = x3;
      goto L7207;
    }
  goto L3865;

 L7207: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L7208;
  goto L3865;

 L7208: ATTRIBUTE_UNUSED_LABEL
  tem = recog_15 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L3865;

 L4337: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_const_int_operand (x2, SImode))
    {
      operands[6] = x2;
      goto L4338;
    }
  goto L3865;

 L4338: ATTRIBUTE_UNUSED_LABEL
  tem = recog_16 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L3865;

 L8585: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[5] = x2;
      goto L5269;
    }
  goto L3865;

 L5269: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[6] = x2;
      goto L5270;
    }
  goto L3865;

 L5270: ATTRIBUTE_UNUSED_LABEL
  tem = recog_17 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L3865;

 L8586: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[5] = x2;
      goto L6201;
    }
  goto L3865;

 L6201: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[6] = x2;
      goto L6202;
    }
  goto L3865;

 L6202: ATTRIBUTE_UNUSED_LABEL
  tem = recog_18 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L3865;

 L3866: ATTRIBUTE_UNUSED_LABEL
  tem = recog_19 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L3953;

 L3954: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DImode:
      goto L8713;
    case SImode:
      goto L8717;
    case HImode:
      goto L8715;
    case QImode:
      goto L8716;
    default:
      break;
    }
  goto ret0;

 L8713: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3955;
    }
  goto ret0;

 L3955: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_immediate_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3956;
    }
  goto ret0;

 L3956: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == RETURN
      && (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 3199 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE))))
    {
      return 582;  /* cmpsf+83 */
    }
  goto ret0;

 L8717: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == AND)
    goto L7847;
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4887;
    }
  goto ret0;

 L7847: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7848;
    }
  goto ret0;

 L7848: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (one_bit_set_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L7849;
    }
  goto ret0;

 L7849: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L7850;
  goto ret0;

 L7850: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == RETURN
      && (
#line 365 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 3199 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE))))
    {
      return 930;  /* cmpsf+431 */
    }
  goto ret0;

 L4887: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4888;
    }
  goto ret0;

 L4888: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == RETURN
      && (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 3199 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE))))
    {
      return 669;  /* cmpsf+170 */
    }
  goto ret0;

 L8715: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L5819;
    }
  goto ret0;

 L5819: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L5820;
    }
  goto ret0;

 L5820: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == RETURN
      && (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 3199 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE))))
    {
      return 756;  /* cmpsf+257 */
    }
  goto ret0;

 L8716: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L6751;
    }
  goto ret0;

 L6751: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L6752;
    }
  goto ret0;

 L6752: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == RETURN
      && (
#line 356 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_V2_INSNS) && 
#line 3199 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(USE_RETURN_INSN (TRUE))))
    {
      return 843;  /* cmpsf+344 */
    }
  goto ret0;
 ret0:
  return -1;
}

static rtx
split_1 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8726;
    case HImode:
      goto L8727;
    case QImode:
      goto L8728;
    default:
      break;
    }
  goto ret0;

 L8726: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2566;
    }
  goto ret0;

 L2566: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L8729;
  goto ret0;

 L8729: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case AND:
      goto L2567;
    case IOR:
      goto L2576;
    case XOR:
      goto L2585;
    case PLUS:
      goto L2594;
    case MINUS:
      goto L2603;
    case ZERO_EXTEND:
      goto L2702;
    default:
     break;
   }
  goto ret0;

 L2567: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2568;
    }
  goto ret0;

 L2568: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_mov_immediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2569;
    }
  goto ret0;

 L2569: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2570;
  goto ret0;

 L2570: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2571;
    }
  goto ret0;

 L2571: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_398 (insn, operands);
    }
  goto ret0;

 L2576: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2577;
    }
  goto ret0;

 L2577: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_mov_immediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2578;
    }
  goto ret0;

 L2578: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2579;
  goto ret0;

 L2579: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2580;
    }
  goto ret0;

 L2580: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_399 (insn, operands);
    }
  goto ret0;

 L2585: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2586;
    }
  goto ret0;

 L2586: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_mov_immediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2587;
    }
  goto ret0;

 L2587: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2588;
  goto ret0;

 L2588: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2589;
    }
  goto ret0;

 L2589: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_400 (insn, operands);
    }
  goto ret0;

 L2594: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2595;
    }
  goto ret0;

 L2595: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_mov_immediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2596;
    }
  goto ret0;

 L2596: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2597;
  goto ret0;

 L2597: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2598;
    }
  goto ret0;

 L2598: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_401 (insn, operands);
    }
  goto ret0;

 L2603: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2604;
    }
  goto ret0;

 L2604: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_mov_immediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2605;
    }
  goto ret0;

 L2605: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2606;
  goto ret0;

 L2606: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2607;
    }
  goto ret0;

 L2607: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_402 (insn, operands);
    }
  goto ret0;

 L2702: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case HImode:
      goto L8735;
    case QImode:
      goto L8736;
    default:
      break;
    }
  goto ret0;

 L8735: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2703;
    }
  goto ret0;

 L2703: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2704;
  goto ret0;

 L2704: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2705;
    }
  goto ret0;

 L2705: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2104 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload)))
    {
      return gen_split_413 (insn, operands);
    }
  goto ret0;

 L8736: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2711;
    }
  goto ret0;

 L2711: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2712;
  goto ret0;

 L2712: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2713;
    }
  goto ret0;

 L2713: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2136 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload)))
    {
      return gen_split_414 (insn, operands);
    }
  goto ret0;

 L8727: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L2611;
    }
  goto ret0;

 L2611: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode)
    goto L8737;
  goto ret0;

 L8737: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case AND:
      goto L2612;
    case IOR:
      goto L2621;
    case XOR:
      goto L2630;
    case PLUS:
      goto L2639;
    case MINUS:
      goto L2648;
    case ZERO_EXTEND:
      goto L2718;
    default:
     break;
   }
  goto ret0;

 L2612: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2613;
    }
  goto ret0;

 L2613: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_mov_immediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2614;
    }
  goto ret0;

 L2614: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2615;
  goto ret0;

 L2615: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L2616;
    }
  goto ret0;

 L2616: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_403 (insn, operands);
    }
  goto ret0;

 L2621: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2622;
    }
  goto ret0;

 L2622: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_mov_immediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2623;
    }
  goto ret0;

 L2623: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2624;
  goto ret0;

 L2624: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L2625;
    }
  goto ret0;

 L2625: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_404 (insn, operands);
    }
  goto ret0;

 L2630: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2631;
    }
  goto ret0;

 L2631: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_mov_immediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2632;
    }
  goto ret0;

 L2632: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2633;
  goto ret0;

 L2633: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L2634;
    }
  goto ret0;

 L2634: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_405 (insn, operands);
    }
  goto ret0;

 L2639: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2640;
    }
  goto ret0;

 L2640: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_mov_immediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2641;
    }
  goto ret0;

 L2641: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2642;
  goto ret0;

 L2642: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L2643;
    }
  goto ret0;

 L2643: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_406 (insn, operands);
    }
  goto ret0;

 L2648: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2649;
    }
  goto ret0;

 L2649: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_mov_immediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2650;
    }
  goto ret0;

 L2650: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2651;
  goto ret0;

 L2651: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L2652;
    }
  goto ret0;

 L2652: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_407 (insn, operands);
    }
  goto ret0;

 L2718: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2719;
    }
  goto ret0;

 L2719: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2720;
  goto ret0;

 L2720: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2721;
    }
  goto ret0;

 L2721: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2168 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload)))
    {
      return gen_split_415 (insn, operands);
    }
  goto ret0;

 L8728: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L2656;
    }
  goto ret0;

 L2656: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L8743;
  goto ret0;

 L8743: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case AND:
      goto L2657;
    case IOR:
      goto L2666;
    case XOR:
      goto L2675;
    case PLUS:
      goto L2684;
    case MINUS:
      goto L2693;
    default:
     break;
   }
  goto ret0;

 L2657: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2658;
    }
  goto ret0;

 L2658: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_mov_immediate_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2659;
    }
  goto ret0;

 L2659: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2660;
  goto ret0;

 L2660: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[3] = x2;
      goto L2661;
    }
  goto ret0;

 L2661: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_408 (insn, operands);
    }
  goto ret0;

 L2666: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2667;
    }
  goto ret0;

 L2667: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_mov_immediate_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2668;
    }
  goto ret0;

 L2668: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2669;
  goto ret0;

 L2669: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[3] = x2;
      goto L2670;
    }
  goto ret0;

 L2670: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_409 (insn, operands);
    }
  goto ret0;

 L2675: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2676;
    }
  goto ret0;

 L2676: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_mov_immediate_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2677;
    }
  goto ret0;

 L2677: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2678;
  goto ret0;

 L2678: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[3] = x2;
      goto L2679;
    }
  goto ret0;

 L2679: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_410 (insn, operands);
    }
  goto ret0;

 L2684: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2685;
    }
  goto ret0;

 L2685: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_mov_immediate_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2686;
    }
  goto ret0;

 L2686: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2687;
  goto ret0;

 L2687: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[3] = x2;
      goto L2688;
    }
  goto ret0;

 L2688: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_411 (insn, operands);
    }
  goto ret0;

 L2693: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2694;
    }
  goto ret0;

 L2694: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (avr32_mov_immediate_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2695;
    }
  goto ret0;

 L2695: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2696;
  goto ret0;

 L2696: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[3] = x2;
      goto L2697;
    }
  goto ret0;

 L2697: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_412 (insn, operands);
    }
  goto ret0;
 ret0:
  return 0;
}

static rtx
split_2 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == PARALLEL
      && XVECLEN (x1, 0) == 2)
    goto L3420;
  goto ret0;

 L3420: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L3421;
  goto ret0;

 L3421: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8753;
    case HImode:
      goto L8754;
    case QImode:
      goto L8755;
    default:
      break;
    }
  goto ret0;

 L8753: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L3422;
    }
  goto ret0;

 L3422: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L8756;
  goto ret0;

 L8756: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case AND:
      goto L3423;
    case IOR:
      goto L3449;
    case XOR:
      goto L3475;
    case PLUS:
      goto L3501;
    case MINUS:
      goto L3527;
    default:
     break;
   }
  goto ret0;

 L3423: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3424;
    }
  goto ret0;

 L3424: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3425;
    }
  goto ret0;

 L3425: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3426;
  goto ret0;

 L3426: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3427;
    }
  goto ret0;

 L3427: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_537 (insn, operands);
    }
  goto ret0;

 L3449: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3450;
    }
  goto ret0;

 L3450: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3451;
    }
  goto ret0;

 L3451: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3452;
  goto ret0;

 L3452: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3453;
    }
  goto ret0;

 L3453: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_539 (insn, operands);
    }
  goto ret0;

 L3475: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3476;
    }
  goto ret0;

 L3476: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3477;
    }
  goto ret0;

 L3477: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3478;
  goto ret0;

 L3478: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3479;
    }
  goto ret0;

 L3479: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_541 (insn, operands);
    }
  goto ret0;

 L3501: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3502;
    }
  goto ret0;

 L3502: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3503;
    }
  goto ret0;

 L3503: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3504;
  goto ret0;

 L3504: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3505;
    }
  goto ret0;

 L3505: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_543 (insn, operands);
    }
  goto ret0;

 L3527: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3528;
    }
  goto ret0;

 L3528: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3529;
    }
  goto ret0;

 L3529: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3530;
  goto ret0;

 L3530: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3531;
    }
  goto ret0;

 L3531: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_545 (insn, operands);
    }
  goto ret0;

 L8754: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L3552;
    }
  goto ret0;

 L3552: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode)
    goto L8761;
  goto ret0;

 L8761: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case AND:
      goto L3553;
    case IOR:
      goto L3579;
    case XOR:
      goto L3605;
    case PLUS:
      goto L3631;
    case MINUS:
      goto L3657;
    default:
     break;
   }
  goto ret0;

 L3553: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L3554;
    }
  goto ret0;

 L3554: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L3555;
    }
  goto ret0;

 L3555: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3556;
  goto ret0;

 L3556: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L3557;
    }
  goto ret0;

 L3557: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_547 (insn, operands);
    }
  goto ret0;

 L3579: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L3580;
    }
  goto ret0;

 L3580: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L3581;
    }
  goto ret0;

 L3581: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3582;
  goto ret0;

 L3582: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L3583;
    }
  goto ret0;

 L3583: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_549 (insn, operands);
    }
  goto ret0;

 L3605: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L3606;
    }
  goto ret0;

 L3606: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L3607;
    }
  goto ret0;

 L3607: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3608;
  goto ret0;

 L3608: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L3609;
    }
  goto ret0;

 L3609: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_551 (insn, operands);
    }
  goto ret0;

 L3631: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L3632;
    }
  goto ret0;

 L3632: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L3633;
    }
  goto ret0;

 L3633: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3634;
  goto ret0;

 L3634: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L3635;
    }
  goto ret0;

 L3635: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_553 (insn, operands);
    }
  goto ret0;

 L3657: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L3658;
    }
  goto ret0;

 L3658: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L3659;
    }
  goto ret0;

 L3659: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3660;
  goto ret0;

 L3660: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L3661;
    }
  goto ret0;

 L3661: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_555 (insn, operands);
    }
  goto ret0;

 L8755: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, QImode))
    {
      operands[0] = x3;
      goto L3682;
    }
  goto ret0;

 L3682: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == QImode)
    goto L8766;
  goto ret0;

 L8766: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case AND:
      goto L3683;
    case IOR:
      goto L3709;
    case XOR:
      goto L3735;
    case PLUS:
      goto L3761;
    case MINUS:
      goto L3787;
    default:
     break;
   }
  goto ret0;

 L3683: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3684;
    }
  goto ret0;

 L3684: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3685;
    }
  goto ret0;

 L3685: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3686;
  goto ret0;

 L3686: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L3687;
    }
  goto ret0;

 L3687: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_557 (insn, operands);
    }
  goto ret0;

 L3709: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3710;
    }
  goto ret0;

 L3710: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3711;
    }
  goto ret0;

 L3711: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3712;
  goto ret0;

 L3712: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L3713;
    }
  goto ret0;

 L3713: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_559 (insn, operands);
    }
  goto ret0;

 L3735: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3736;
    }
  goto ret0;

 L3736: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3737;
    }
  goto ret0;

 L3737: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3738;
  goto ret0;

 L3738: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L3739;
    }
  goto ret0;

 L3739: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_561 (insn, operands);
    }
  goto ret0;

 L3761: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3762;
    }
  goto ret0;

 L3762: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3763;
    }
  goto ret0;

 L3763: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3764;
  goto ret0;

 L3764: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L3765;
    }
  goto ret0;

 L3765: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_563 (insn, operands);
    }
  goto ret0;

 L3787: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3788;
    }
  goto ret0;

 L3788: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3789;
    }
  goto ret0;

 L3789: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3790;
  goto ret0;

 L3790: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L3791;
    }
  goto ret0;

 L3791: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_565 (insn, operands);
    }
  goto ret0;
 ret0:
  return 0;
}

static rtx
split_3 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == PARALLEL
      && XVECLEN (x1, 0) == 2)
    goto L7224;
  goto ret0;

 L7224: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L7225;
  goto ret0;

 L7225: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8771;
    case HImode:
      goto L8772;
    case QImode:
      goto L8773;
    default:
      break;
    }
  goto ret0;

 L8771: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L7226;
    }
  goto ret0;

 L7226: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L8774;
  goto ret0;

 L8774: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case AND:
      goto L7227;
    case IOR:
      goto L7257;
    case XOR:
      goto L7287;
    case PLUS:
      goto L7317;
    case MINUS:
      goto L7347;
    default:
     break;
   }
  goto ret0;

 L7227: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L7228;
    }
  goto ret0;

 L7228: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L7229;
    }
  goto ret0;

 L7229: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7230;
  goto ret0;

 L7230: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L7231;
    }
  goto ret0;

 L7231: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_885 (insn, operands);
    }
  goto ret0;

 L7257: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L7258;
    }
  goto ret0;

 L7258: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L7259;
    }
  goto ret0;

 L7259: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7260;
  goto ret0;

 L7260: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L7261;
    }
  goto ret0;

 L7261: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_887 (insn, operands);
    }
  goto ret0;

 L7287: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L7288;
    }
  goto ret0;

 L7288: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L7289;
    }
  goto ret0;

 L7289: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7290;
  goto ret0;

 L7290: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L7291;
    }
  goto ret0;

 L7291: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_889 (insn, operands);
    }
  goto ret0;

 L7317: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L7318;
    }
  goto ret0;

 L7318: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L7319;
    }
  goto ret0;

 L7319: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7320;
  goto ret0;

 L7320: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L7321;
    }
  goto ret0;

 L7321: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_891 (insn, operands);
    }
  goto ret0;

 L7347: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L7348;
    }
  goto ret0;

 L7348: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L7349;
    }
  goto ret0;

 L7349: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7350;
  goto ret0;

 L7350: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L7351;
    }
  goto ret0;

 L7351: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_893 (insn, operands);
    }
  goto ret0;

 L8772: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L7376;
    }
  goto ret0;

 L7376: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode)
    goto L8779;
  goto ret0;

 L8779: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case AND:
      goto L7377;
    case IOR:
      goto L7407;
    case XOR:
      goto L7437;
    case PLUS:
      goto L7467;
    case MINUS:
      goto L7497;
    default:
     break;
   }
  goto ret0;

 L7377: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L7378;
    }
  goto ret0;

 L7378: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L7379;
    }
  goto ret0;

 L7379: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7380;
  goto ret0;

 L7380: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L7381;
    }
  goto ret0;

 L7381: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_895 (insn, operands);
    }
  goto ret0;

 L7407: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L7408;
    }
  goto ret0;

 L7408: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L7409;
    }
  goto ret0;

 L7409: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7410;
  goto ret0;

 L7410: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L7411;
    }
  goto ret0;

 L7411: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_897 (insn, operands);
    }
  goto ret0;

 L7437: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L7438;
    }
  goto ret0;

 L7438: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L7439;
    }
  goto ret0;

 L7439: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7440;
  goto ret0;

 L7440: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L7441;
    }
  goto ret0;

 L7441: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_899 (insn, operands);
    }
  goto ret0;

 L7467: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L7468;
    }
  goto ret0;

 L7468: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L7469;
    }
  goto ret0;

 L7469: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7470;
  goto ret0;

 L7470: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L7471;
    }
  goto ret0;

 L7471: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_901 (insn, operands);
    }
  goto ret0;

 L7497: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L7498;
    }
  goto ret0;

 L7498: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L7499;
    }
  goto ret0;

 L7499: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7500;
  goto ret0;

 L7500: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L7501;
    }
  goto ret0;

 L7501: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_903 (insn, operands);
    }
  goto ret0;

 L8773: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, QImode))
    {
      operands[0] = x3;
      goto L7526;
    }
  goto ret0;

 L7526: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == QImode)
    goto L8784;
  goto ret0;

 L8784: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case AND:
      goto L7527;
    case IOR:
      goto L7557;
    case XOR:
      goto L7587;
    case PLUS:
      goto L7617;
    case MINUS:
      goto L7647;
    default:
     break;
   }
  goto ret0;

 L7527: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L7528;
    }
  goto ret0;

 L7528: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L7529;
    }
  goto ret0;

 L7529: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7530;
  goto ret0;

 L7530: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L7531;
    }
  goto ret0;

 L7531: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_905 (insn, operands);
    }
  goto ret0;

 L7557: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L7558;
    }
  goto ret0;

 L7558: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L7559;
    }
  goto ret0;

 L7559: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7560;
  goto ret0;

 L7560: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L7561;
    }
  goto ret0;

 L7561: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_907 (insn, operands);
    }
  goto ret0;

 L7587: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L7588;
    }
  goto ret0;

 L7588: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L7589;
    }
  goto ret0;

 L7589: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7590;
  goto ret0;

 L7590: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L7591;
    }
  goto ret0;

 L7591: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_909 (insn, operands);
    }
  goto ret0;

 L7617: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L7618;
    }
  goto ret0;

 L7618: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L7619;
    }
  goto ret0;

 L7619: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7620;
  goto ret0;

 L7620: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L7621;
    }
  goto ret0;

 L7621: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_911 (insn, operands);
    }
  goto ret0;

 L7647: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L7648;
    }
  goto ret0;

 L7648: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L7649;
    }
  goto ret0;

 L7649: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7650;
  goto ret0;

 L7650: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L7651;
    }
  goto ret0;

 L7651: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_913 (insn, operands);
    }
  goto ret0;
 ret0:
  return 0;
}

static rtx
split_4 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == PARALLEL
      && XVECLEN (x1, 0) == 2)
    goto L4352;
  goto ret0;

 L4352: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L4353;
  goto ret0;

 L4353: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8789;
    case HImode:
      goto L8790;
    case QImode:
      goto L8791;
    default:
      break;
    }
  goto ret0;

 L8789: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L4354;
    }
  goto ret0;

 L4354: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L8792;
  goto ret0;

 L8792: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case AND:
      goto L4355;
    case IOR:
      goto L4381;
    case XOR:
      goto L4407;
    case PLUS:
      goto L4433;
    case MINUS:
      goto L4459;
    default:
     break;
   }
  goto ret0;

 L4355: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4356;
    }
  goto ret0;

 L4356: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4357;
    }
  goto ret0;

 L4357: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4358;
  goto ret0;

 L4358: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4359;
    }
  goto ret0;

 L4359: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_624 (insn, operands);
    }
  goto ret0;

 L4381: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4382;
    }
  goto ret0;

 L4382: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4383;
    }
  goto ret0;

 L4383: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4384;
  goto ret0;

 L4384: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4385;
    }
  goto ret0;

 L4385: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_626 (insn, operands);
    }
  goto ret0;

 L4407: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4408;
    }
  goto ret0;

 L4408: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4409;
    }
  goto ret0;

 L4409: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4410;
  goto ret0;

 L4410: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4411;
    }
  goto ret0;

 L4411: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_628 (insn, operands);
    }
  goto ret0;

 L4433: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4434;
    }
  goto ret0;

 L4434: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4435;
    }
  goto ret0;

 L4435: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4436;
  goto ret0;

 L4436: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4437;
    }
  goto ret0;

 L4437: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_630 (insn, operands);
    }
  goto ret0;

 L4459: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4460;
    }
  goto ret0;

 L4460: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4461;
    }
  goto ret0;

 L4461: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4462;
  goto ret0;

 L4462: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4463;
    }
  goto ret0;

 L4463: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_632 (insn, operands);
    }
  goto ret0;

 L8790: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L4484;
    }
  goto ret0;

 L4484: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode)
    goto L8797;
  goto ret0;

 L8797: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case AND:
      goto L4485;
    case IOR:
      goto L4511;
    case XOR:
      goto L4537;
    case PLUS:
      goto L4563;
    case MINUS:
      goto L4589;
    default:
     break;
   }
  goto ret0;

 L4485: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L4486;
    }
  goto ret0;

 L4486: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L4487;
    }
  goto ret0;

 L4487: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4488;
  goto ret0;

 L4488: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L4489;
    }
  goto ret0;

 L4489: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_634 (insn, operands);
    }
  goto ret0;

 L4511: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L4512;
    }
  goto ret0;

 L4512: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L4513;
    }
  goto ret0;

 L4513: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4514;
  goto ret0;

 L4514: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L4515;
    }
  goto ret0;

 L4515: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_636 (insn, operands);
    }
  goto ret0;

 L4537: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L4538;
    }
  goto ret0;

 L4538: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L4539;
    }
  goto ret0;

 L4539: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4540;
  goto ret0;

 L4540: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L4541;
    }
  goto ret0;

 L4541: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_638 (insn, operands);
    }
  goto ret0;

 L4563: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L4564;
    }
  goto ret0;

 L4564: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L4565;
    }
  goto ret0;

 L4565: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4566;
  goto ret0;

 L4566: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L4567;
    }
  goto ret0;

 L4567: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_640 (insn, operands);
    }
  goto ret0;

 L4589: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L4590;
    }
  goto ret0;

 L4590: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L4591;
    }
  goto ret0;

 L4591: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4592;
  goto ret0;

 L4592: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L4593;
    }
  goto ret0;

 L4593: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_642 (insn, operands);
    }
  goto ret0;

 L8791: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, QImode))
    {
      operands[0] = x3;
      goto L4614;
    }
  goto ret0;

 L4614: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == QImode)
    goto L8802;
  goto ret0;

 L8802: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case AND:
      goto L4615;
    case IOR:
      goto L4641;
    case XOR:
      goto L4667;
    case PLUS:
      goto L4693;
    case MINUS:
      goto L4719;
    default:
     break;
   }
  goto ret0;

 L4615: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L4616;
    }
  goto ret0;

 L4616: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4617;
    }
  goto ret0;

 L4617: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4618;
  goto ret0;

 L4618: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L4619;
    }
  goto ret0;

 L4619: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_644 (insn, operands);
    }
  goto ret0;

 L4641: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L4642;
    }
  goto ret0;

 L4642: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4643;
    }
  goto ret0;

 L4643: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4644;
  goto ret0;

 L4644: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L4645;
    }
  goto ret0;

 L4645: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_646 (insn, operands);
    }
  goto ret0;

 L4667: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L4668;
    }
  goto ret0;

 L4668: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4669;
    }
  goto ret0;

 L4669: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4670;
  goto ret0;

 L4670: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L4671;
    }
  goto ret0;

 L4671: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_648 (insn, operands);
    }
  goto ret0;

 L4693: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L4694;
    }
  goto ret0;

 L4694: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4695;
    }
  goto ret0;

 L4695: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4696;
  goto ret0;

 L4696: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L4697;
    }
  goto ret0;

 L4697: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_650 (insn, operands);
    }
  goto ret0;

 L4719: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L4720;
    }
  goto ret0;

 L4720: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4721;
    }
  goto ret0;

 L4721: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4722;
  goto ret0;

 L4722: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L4723;
    }
  goto ret0;

 L4723: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_652 (insn, operands);
    }
  goto ret0;
 ret0:
  return 0;
}

static rtx
split_5 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == PARALLEL
      && XVECLEN (x1, 0) == 2)
    goto L5284;
  goto ret0;

 L5284: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L5285;
  goto ret0;

 L5285: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8807;
    case HImode:
      goto L8808;
    case QImode:
      goto L8809;
    default:
      break;
    }
  goto ret0;

 L8807: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L5286;
    }
  goto ret0;

 L5286: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L8810;
  goto ret0;

 L8810: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case AND:
      goto L5287;
    case IOR:
      goto L5313;
    case XOR:
      goto L5339;
    case PLUS:
      goto L5365;
    case MINUS:
      goto L5391;
    default:
     break;
   }
  goto ret0;

 L5287: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5288;
    }
  goto ret0;

 L5288: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5289;
    }
  goto ret0;

 L5289: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5290;
  goto ret0;

 L5290: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L5291;
    }
  goto ret0;

 L5291: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_711 (insn, operands);
    }
  goto ret0;

 L5313: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5314;
    }
  goto ret0;

 L5314: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5315;
    }
  goto ret0;

 L5315: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5316;
  goto ret0;

 L5316: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L5317;
    }
  goto ret0;

 L5317: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_713 (insn, operands);
    }
  goto ret0;

 L5339: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5340;
    }
  goto ret0;

 L5340: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5341;
    }
  goto ret0;

 L5341: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5342;
  goto ret0;

 L5342: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L5343;
    }
  goto ret0;

 L5343: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_715 (insn, operands);
    }
  goto ret0;

 L5365: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5366;
    }
  goto ret0;

 L5366: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5367;
    }
  goto ret0;

 L5367: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5368;
  goto ret0;

 L5368: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L5369;
    }
  goto ret0;

 L5369: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_717 (insn, operands);
    }
  goto ret0;

 L5391: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5392;
    }
  goto ret0;

 L5392: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5393;
    }
  goto ret0;

 L5393: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5394;
  goto ret0;

 L5394: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L5395;
    }
  goto ret0;

 L5395: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_719 (insn, operands);
    }
  goto ret0;

 L8808: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L5416;
    }
  goto ret0;

 L5416: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode)
    goto L8815;
  goto ret0;

 L8815: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case AND:
      goto L5417;
    case IOR:
      goto L5443;
    case XOR:
      goto L5469;
    case PLUS:
      goto L5495;
    case MINUS:
      goto L5521;
    default:
     break;
   }
  goto ret0;

 L5417: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L5418;
    }
  goto ret0;

 L5418: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L5419;
    }
  goto ret0;

 L5419: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5420;
  goto ret0;

 L5420: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L5421;
    }
  goto ret0;

 L5421: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_721 (insn, operands);
    }
  goto ret0;

 L5443: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L5444;
    }
  goto ret0;

 L5444: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L5445;
    }
  goto ret0;

 L5445: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5446;
  goto ret0;

 L5446: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L5447;
    }
  goto ret0;

 L5447: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_723 (insn, operands);
    }
  goto ret0;

 L5469: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L5470;
    }
  goto ret0;

 L5470: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L5471;
    }
  goto ret0;

 L5471: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5472;
  goto ret0;

 L5472: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L5473;
    }
  goto ret0;

 L5473: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_725 (insn, operands);
    }
  goto ret0;

 L5495: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L5496;
    }
  goto ret0;

 L5496: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L5497;
    }
  goto ret0;

 L5497: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5498;
  goto ret0;

 L5498: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L5499;
    }
  goto ret0;

 L5499: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_727 (insn, operands);
    }
  goto ret0;

 L5521: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L5522;
    }
  goto ret0;

 L5522: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L5523;
    }
  goto ret0;

 L5523: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5524;
  goto ret0;

 L5524: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L5525;
    }
  goto ret0;

 L5525: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_729 (insn, operands);
    }
  goto ret0;

 L8809: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, QImode))
    {
      operands[0] = x3;
      goto L5546;
    }
  goto ret0;

 L5546: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == QImode)
    goto L8820;
  goto ret0;

 L8820: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case AND:
      goto L5547;
    case IOR:
      goto L5573;
    case XOR:
      goto L5599;
    case PLUS:
      goto L5625;
    case MINUS:
      goto L5651;
    default:
     break;
   }
  goto ret0;

 L5547: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L5548;
    }
  goto ret0;

 L5548: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5549;
    }
  goto ret0;

 L5549: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5550;
  goto ret0;

 L5550: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L5551;
    }
  goto ret0;

 L5551: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_731 (insn, operands);
    }
  goto ret0;

 L5573: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L5574;
    }
  goto ret0;

 L5574: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5575;
    }
  goto ret0;

 L5575: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5576;
  goto ret0;

 L5576: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L5577;
    }
  goto ret0;

 L5577: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_733 (insn, operands);
    }
  goto ret0;

 L5599: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L5600;
    }
  goto ret0;

 L5600: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5601;
    }
  goto ret0;

 L5601: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5602;
  goto ret0;

 L5602: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L5603;
    }
  goto ret0;

 L5603: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_735 (insn, operands);
    }
  goto ret0;

 L5625: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L5626;
    }
  goto ret0;

 L5626: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5627;
    }
  goto ret0;

 L5627: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5628;
  goto ret0;

 L5628: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L5629;
    }
  goto ret0;

 L5629: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_737 (insn, operands);
    }
  goto ret0;

 L5651: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L5652;
    }
  goto ret0;

 L5652: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5653;
    }
  goto ret0;

 L5653: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5654;
  goto ret0;

 L5654: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L5655;
    }
  goto ret0;

 L5655: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_739 (insn, operands);
    }
  goto ret0;
 ret0:
  return 0;
}

static rtx
split_6 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == PARALLEL
      && XVECLEN (x1, 0) == 2)
    goto L6216;
  goto ret0;

 L6216: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L6217;
  goto ret0;

 L6217: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8825;
    case HImode:
      goto L8826;
    case QImode:
      goto L8827;
    default:
      break;
    }
  goto ret0;

 L8825: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L6218;
    }
  goto ret0;

 L6218: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L8828;
  goto ret0;

 L8828: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case AND:
      goto L6219;
    case IOR:
      goto L6245;
    case XOR:
      goto L6271;
    case PLUS:
      goto L6297;
    case MINUS:
      goto L6323;
    default:
     break;
   }
  goto ret0;

 L6219: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6220;
    }
  goto ret0;

 L6220: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6221;
    }
  goto ret0;

 L6221: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6222;
  goto ret0;

 L6222: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6223;
    }
  goto ret0;

 L6223: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_798 (insn, operands);
    }
  goto ret0;

 L6245: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6246;
    }
  goto ret0;

 L6246: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6247;
    }
  goto ret0;

 L6247: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6248;
  goto ret0;

 L6248: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6249;
    }
  goto ret0;

 L6249: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_800 (insn, operands);
    }
  goto ret0;

 L6271: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6272;
    }
  goto ret0;

 L6272: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6273;
    }
  goto ret0;

 L6273: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6274;
  goto ret0;

 L6274: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6275;
    }
  goto ret0;

 L6275: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_802 (insn, operands);
    }
  goto ret0;

 L6297: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6298;
    }
  goto ret0;

 L6298: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6299;
    }
  goto ret0;

 L6299: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6300;
  goto ret0;

 L6300: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6301;
    }
  goto ret0;

 L6301: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_804 (insn, operands);
    }
  goto ret0;

 L6323: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6324;
    }
  goto ret0;

 L6324: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6325;
    }
  goto ret0;

 L6325: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6326;
  goto ret0;

 L6326: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6327;
    }
  goto ret0;

 L6327: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_806 (insn, operands);
    }
  goto ret0;

 L8826: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L6348;
    }
  goto ret0;

 L6348: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode)
    goto L8833;
  goto ret0;

 L8833: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case AND:
      goto L6349;
    case IOR:
      goto L6375;
    case XOR:
      goto L6401;
    case PLUS:
      goto L6427;
    case MINUS:
      goto L6453;
    default:
     break;
   }
  goto ret0;

 L6349: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L6350;
    }
  goto ret0;

 L6350: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L6351;
    }
  goto ret0;

 L6351: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6352;
  goto ret0;

 L6352: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L6353;
    }
  goto ret0;

 L6353: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_808 (insn, operands);
    }
  goto ret0;

 L6375: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L6376;
    }
  goto ret0;

 L6376: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L6377;
    }
  goto ret0;

 L6377: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6378;
  goto ret0;

 L6378: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L6379;
    }
  goto ret0;

 L6379: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_810 (insn, operands);
    }
  goto ret0;

 L6401: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L6402;
    }
  goto ret0;

 L6402: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L6403;
    }
  goto ret0;

 L6403: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6404;
  goto ret0;

 L6404: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L6405;
    }
  goto ret0;

 L6405: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_812 (insn, operands);
    }
  goto ret0;

 L6427: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L6428;
    }
  goto ret0;

 L6428: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L6429;
    }
  goto ret0;

 L6429: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6430;
  goto ret0;

 L6430: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L6431;
    }
  goto ret0;

 L6431: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_814 (insn, operands);
    }
  goto ret0;

 L6453: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L6454;
    }
  goto ret0;

 L6454: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L6455;
    }
  goto ret0;

 L6455: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6456;
  goto ret0;

 L6456: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L6457;
    }
  goto ret0;

 L6457: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_816 (insn, operands);
    }
  goto ret0;

 L8827: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, QImode))
    {
      operands[0] = x3;
      goto L6478;
    }
  goto ret0;

 L6478: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == QImode)
    goto L8838;
  goto ret0;

 L8838: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case AND:
      goto L6479;
    case IOR:
      goto L6505;
    case XOR:
      goto L6531;
    case PLUS:
      goto L6557;
    case MINUS:
      goto L6583;
    default:
     break;
   }
  goto ret0;

 L6479: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L6480;
    }
  goto ret0;

 L6480: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L6481;
    }
  goto ret0;

 L6481: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6482;
  goto ret0;

 L6482: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L6483;
    }
  goto ret0;

 L6483: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_818 (insn, operands);
    }
  goto ret0;

 L6505: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L6506;
    }
  goto ret0;

 L6506: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L6507;
    }
  goto ret0;

 L6507: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6508;
  goto ret0;

 L6508: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L6509;
    }
  goto ret0;

 L6509: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_820 (insn, operands);
    }
  goto ret0;

 L6531: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L6532;
    }
  goto ret0;

 L6532: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L6533;
    }
  goto ret0;

 L6533: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6534;
  goto ret0;

 L6534: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L6535;
    }
  goto ret0;

 L6535: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_822 (insn, operands);
    }
  goto ret0;

 L6557: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L6558;
    }
  goto ret0;

 L6558: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L6559;
    }
  goto ret0;

 L6559: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6560;
  goto ret0;

 L6560: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L6561;
    }
  goto ret0;

 L6561: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_824 (insn, operands);
    }
  goto ret0;

 L6583: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L6584;
    }
  goto ret0;

 L6584: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (avr32_mov_immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L6585;
    }
  goto ret0;

 L6585: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6586;
  goto ret0;

 L6586: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L6587;
    }
  goto ret0;

 L6587: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))))
    {
      return gen_split_826 (insn, operands);
    }
  goto ret0;
 ret0:
  return 0;
}

static rtx
split_7 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DImode:
      goto L8843;
    case SImode:
      goto L8847;
    case HImode:
      goto L8845;
    case QImode:
      goto L8846;
    default:
      break;
    }
  goto ret0;

 L8843: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L3807;
    }
  goto ret0;

 L3807: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_immediate_operand (x2, DImode))
    {
      operands[5] = x2;
      goto L3808;
    }
  goto ret0;

 L3808: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == PARALLEL
      && XVECLEN (x1, 0) == 2)
    goto L3809;
  goto ret0;

 L3809: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L3810;
  goto ret0;

 L3810: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8848;
    case HImode:
      goto L8849;
    default:
      break;
    }
  goto ret0;

 L8848: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L3811;
    }
  goto ret0;

 L3811: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L3812;
  goto ret0;

 L3812: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case HImode:
      goto L8850;
    case QImode:
      goto L8851;
    default:
      break;
    }
  goto ret0;

 L8850: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L3813;
    }
  goto ret0;

 L3813: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3814;
  goto ret0;

 L3814: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3815;
    }
  goto ret0;

 L3815: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2104 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload)))
    {
      return gen_split_567 (insn, operands);
    }
  goto ret0;

 L8851: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3837;
    }
  goto ret0;

 L3837: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3838;
  goto ret0;

 L3838: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3839;
    }
  goto ret0;

 L3839: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2136 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload)))
    {
      return gen_split_569 (insn, operands);
    }
  goto ret0;

 L8849: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L3859;
    }
  goto ret0;

 L3859: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L3860;
  goto ret0;

 L3860: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3861;
    }
  goto ret0;

 L3861: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3862;
  goto ret0;

 L3862: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3863;
    }
  goto ret0;

 L3863: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2168 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload)))
    {
      return gen_split_571 (insn, operands);
    }
  goto ret0;

 L8847: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == AND)
    goto L7669;
  if (register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L4739;
    }
  goto ret0;

 L7669: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L7670;
    }
  goto ret0;

 L7670: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (one_bit_set_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L7671;
    }
  goto ret0;

 L7671: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L7672;
  goto ret0;

 L7672: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == PARALLEL
      && XVECLEN (x1, 0) == 2)
    goto L7673;
  goto ret0;

 L7673: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L7674;
  goto ret0;

 L7674: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8852;
    case HImode:
      goto L8853;
    default:
      break;
    }
  goto ret0;

 L8852: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L7675;
    }
  goto ret0;

 L7675: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L7676;
  goto ret0;

 L7676: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case HImode:
      goto L8854;
    case QImode:
      goto L8855;
    default:
      break;
    }
  goto ret0;

 L8854: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L7677;
    }
  goto ret0;

 L7677: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7678;
  goto ret0;

 L7678: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L7679;
    }
  goto ret0;

 L7679: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2104 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload)))
    {
      return gen_split_915 (insn, operands);
    }
  goto ret0;

 L8855: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L7705;
    }
  goto ret0;

 L7705: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7706;
  goto ret0;

 L7706: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L7707;
    }
  goto ret0;

 L7707: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2136 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload)))
    {
      return gen_split_917 (insn, operands);
    }
  goto ret0;

 L8853: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L7731;
    }
  goto ret0;

 L7731: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L7732;
  goto ret0;

 L7732: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L7733;
    }
  goto ret0;

 L7733: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7734;
  goto ret0;

 L7734: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L7735;
    }
  goto ret0;

 L7735: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2168 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload)))
    {
      return gen_split_919 (insn, operands);
    }
  goto ret0;

 L4739: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_const_int_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L4740;
    }
  goto ret0;

 L4740: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == PARALLEL
      && XVECLEN (x1, 0) == 2)
    goto L4741;
  goto ret0;

 L4741: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L4742;
  goto ret0;

 L4742: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8856;
    case HImode:
      goto L8857;
    default:
      break;
    }
  goto ret0;

 L8856: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L4743;
    }
  goto ret0;

 L4743: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L4744;
  goto ret0;

 L4744: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case HImode:
      goto L8858;
    case QImode:
      goto L8859;
    default:
      break;
    }
  goto ret0;

 L8858: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L4745;
    }
  goto ret0;

 L4745: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4746;
  goto ret0;

 L4746: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4747;
    }
  goto ret0;

 L4747: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2104 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload)))
    {
      return gen_split_654 (insn, operands);
    }
  goto ret0;

 L8859: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L4769;
    }
  goto ret0;

 L4769: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4770;
  goto ret0;

 L4770: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4771;
    }
  goto ret0;

 L4771: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2136 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload)))
    {
      return gen_split_656 (insn, operands);
    }
  goto ret0;

 L8857: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L4791;
    }
  goto ret0;

 L4791: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L4792;
  goto ret0;

 L4792: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L4793;
    }
  goto ret0;

 L4793: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4794;
  goto ret0;

 L4794: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4795;
    }
  goto ret0;

 L4795: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2168 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload)))
    {
      return gen_split_658 (insn, operands);
    }
  goto ret0;

 L8845: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[4] = x2;
      goto L5671;
    }
  goto ret0;

 L5671: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[5] = x2;
      goto L5672;
    }
  goto ret0;

 L5672: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == PARALLEL
      && XVECLEN (x1, 0) == 2)
    goto L5673;
  goto ret0;

 L5673: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L5674;
  goto ret0;

 L5674: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8860;
    case HImode:
      goto L8861;
    default:
      break;
    }
  goto ret0;

 L8860: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L5675;
    }
  goto ret0;

 L5675: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L5676;
  goto ret0;

 L5676: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case HImode:
      goto L8862;
    case QImode:
      goto L8863;
    default:
      break;
    }
  goto ret0;

 L8862: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L5677;
    }
  goto ret0;

 L5677: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5678;
  goto ret0;

 L5678: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5679;
    }
  goto ret0;

 L5679: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2104 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload)))
    {
      return gen_split_741 (insn, operands);
    }
  goto ret0;

 L8863: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L5701;
    }
  goto ret0;

 L5701: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5702;
  goto ret0;

 L5702: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5703;
    }
  goto ret0;

 L5703: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2136 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload)))
    {
      return gen_split_743 (insn, operands);
    }
  goto ret0;

 L8861: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L5723;
    }
  goto ret0;

 L5723: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L5724;
  goto ret0;

 L5724: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L5725;
    }
  goto ret0;

 L5725: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L5726;
  goto ret0;

 L5726: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5727;
    }
  goto ret0;

 L5727: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2168 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload)))
    {
      return gen_split_745 (insn, operands);
    }
  goto ret0;

 L8846: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[4] = x2;
      goto L6603;
    }
  goto ret0;

 L6603: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[5] = x2;
      goto L6604;
    }
  goto ret0;

 L6604: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == PARALLEL
      && XVECLEN (x1, 0) == 2)
    goto L6605;
  goto ret0;

 L6605: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L6606;
  goto ret0;

 L6606: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8864;
    case HImode:
      goto L8865;
    default:
      break;
    }
  goto ret0;

 L8864: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L6607;
    }
  goto ret0;

 L6607: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L6608;
  goto ret0;

 L6608: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case HImode:
      goto L8866;
    case QImode:
      goto L8867;
    default:
      break;
    }
  goto ret0;

 L8866: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L6609;
    }
  goto ret0;

 L6609: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6610;
  goto ret0;

 L6610: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6611;
    }
  goto ret0;

 L6611: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2104 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload)))
    {
      return gen_split_828 (insn, operands);
    }
  goto ret0;

 L8867: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L6633;
    }
  goto ret0;

 L6633: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6634;
  goto ret0;

 L6634: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6635;
    }
  goto ret0;

 L6635: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2136 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload)))
    {
      return gen_split_830 (insn, operands);
    }
  goto ret0;

 L8865: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L6655;
    }
  goto ret0;

 L6655: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L6656;
  goto ret0;

 L6656: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L6657;
    }
  goto ret0;

 L6657: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6658;
  goto ret0;

 L6658: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6659;
    }
  goto ret0;

 L6659: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2168 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload)))
    {
      return gen_split_832 (insn, operands);
    }
  goto ret0;
 ret0:
  return 0;
}

rtx
split_insns (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  switch (GET_CODE (x0))
    {
    case SET:
      goto L2405;
    case PARALLEL:
      goto L8718;
    case COND_EXEC:
      goto L3416;
    default:
     break;
   }
  goto ret0;

 L2405: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case DImode:
      goto L8719;
    case TImode:
      goto L8720;
    case DFmode:
      goto L8721;
    case HImode:
      goto L8723;
    case SImode:
      goto L8724;
    default:
      break;
    }
  goto ret0;

 L8719: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L2406;
    }
 L8722: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L2490;
    }
  goto ret0;

 L2406: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L2407;
    }
  x1 = XEXP (x0, 0);
  goto L8722;

 L2407: ATTRIBUTE_UNUSED_LABEL
  if (
#line 638 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(reload_completed &&
   (REG_P (operands[0]) &&
   (REG_P (operands[1]) 
    || GET_CODE (operands[1]) == CONST_INT
    || GET_CODE (operands[1]) == CONST_DOUBLE))))
    {
      return gen_split_370 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L8722;

 L2490: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (logical_binary_operator (x1, DImode))
    {
      operands[6] = x1;
      goto L2491;
    }
  goto ret0;

 L2491: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2492;
    }
  goto ret0;

 L2492: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2493;
    }
  goto ret0;

 L2493: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1729 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(reload_completed))
    {
      return gen_split_385 (insn, operands);
    }
  goto ret0;

 L8720: ATTRIBUTE_UNUSED_LABEL
  if (avr32_movti_dst_operand (x1, TImode))
    {
      operands[0] = x1;
      goto L2410;
    }
  goto ret0;

 L2410: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (avr32_movti_src_operand (x1, TImode))
    {
      operands[1] = x1;
      goto L2411;
    }
  goto ret0;

 L2411: ATTRIBUTE_UNUSED_LABEL
  if (
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
    || GET_CODE (operands[1]) == CONST_DOUBLE))))
    {
      return gen_split_372 (insn, operands);
    }
  goto ret0;

 L8721: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L2414;
    }
  goto ret0;

 L2414: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L2415;
    }
  goto ret0;

 L2415: ATTRIBUTE_UNUSED_LABEL
  if (
#line 893 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(TARGET_SOFT_FLOAT
   && reload_completed
   && (REG_P (operands[0]) 
        && (REG_P (operands[1])
            || GET_CODE (operands[1]) == CONST_DOUBLE))))
    {
      return gen_split_375 (insn, operands);
    }
 L3004: ATTRIBUTE_UNUSED_LABEL
  if (
#line 111 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT
   && reload_completed
   && (REG_P(operands[0]) &&  (REGNO_REG_CLASS(REGNO(operands[0])) == GENERAL_REGS))
   && (REG_P(operands[1]) &&  (REGNO_REG_CLASS(REGNO(operands[1])) == GENERAL_REGS))))
    {
      return gen_split_491 (insn, operands);
    }
  goto ret0;

 L8723: ATTRIBUTE_UNUSED_LABEL
  if (avr32_bswap_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L2730;
    }
  goto ret0;

 L2730: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == IOR)
    goto L2731;
  goto ret0;

 L2731: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == AND)
    goto L2732;
  goto ret0;

 L2732: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L2733;
  goto ret0;

 L2733: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (avr32_bswap_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L2734;
    }
  goto ret0;

 L2734: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2735;
  goto ret0;

 L2735: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 255L)
    goto L2736;
  goto ret0;

 L2736: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ASHIFT)
    goto L2737;
  goto ret0;

 L2737: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == AND)
    goto L2738;
  goto ret0;

 L2738: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L2739;
  goto ret0;

 L2739: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 255L)
    goto L2740;
  goto ret0;

 L2740: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)]
      && 
#line 3569 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((reload_completed &&
     REG_P(operands[0]) && REG_P(operands[1])
     && (REGNO(operands[0]) != REGNO(operands[1])))))
    {
      return gen_split_440 (insn, operands);
    }
  goto ret0;

 L8724: ATTRIBUTE_UNUSED_LABEL
  if (avr32_bswap_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2743;
    }
  goto ret0;

 L2743: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == IOR)
    goto L2744;
  goto ret0;

 L2744: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == IOR)
    goto L2745;
  goto ret0;

 L2745: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L2746;
  goto ret0;

 L2746: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == AND)
    goto L2747;
  goto ret0;

 L2747: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (avr32_bswap_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L2748;
    }
  goto ret0;

 L2748: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == -16777216L)
    goto L2749;
  goto ret0;

 L2749: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (24)])
    goto L2750;
  goto ret0;

 L2750: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L2751;
  goto ret0;

 L2751: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == AND)
    goto L2752;
  goto ret0;

 L2752: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L2753;
  goto ret0;

 L2753: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 16711680L)
    goto L2754;
  goto ret0;

 L2754: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2755;
  goto ret0;

 L2755: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == IOR)
    goto L2756;
  goto ret0;

 L2756: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ASHIFT)
    goto L2757;
  goto ret0;

 L2757: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == AND)
    goto L2758;
  goto ret0;

 L2758: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L2759;
  goto ret0;

 L2759: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 65280L)
    goto L2760;
  goto ret0;

 L2760: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2761;
  goto ret0;

 L2761: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ASHIFT)
    goto L2762;
  goto ret0;

 L2762: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == AND)
    goto L2763;
  goto ret0;

 L2763: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L2764;
  goto ret0;

 L2764: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 255L)
    goto L2765;
  goto ret0;

 L2765: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (24)]
      && 
#line 3616 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((reload_completed &&
    REG_P(operands[0]) && REG_P(operands[1])
    && (REGNO(operands[0]) != REGNO(operands[1])))))
    {
      return gen_split_441 (insn, operands);
    }
  goto ret0;

 L8718: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) == 2)
    goto L2564;
  goto ret0;

 L2564: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L2565;
    case UNSPEC_VOLATILE:
      goto L8725;
    default:
     break;
   }
  goto ret0;

 L2565: ATTRIBUTE_UNUSED_LABEL
  return split_1 (x0, insn);

 L8725: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 26)
    goto L2724;
  goto ret0;

 L2724: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2725;
    }
  goto ret0;

 L2725: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2726;
  goto ret0;

 L2726: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2727;
    }
  goto ret0;

 L2727: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3503 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(reload_completed))
    {
      return gen_split_439 (insn, operands);
    }
  goto ret0;

 L3416: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (avr32_comparison_operator (x1, VOIDmode))
    {
      operands[4] = x1;
      goto L3417;
    }
 L3805: ATTRIBUTE_UNUSED_LABEL
  if (avr32_comparison_operator (x1, VOIDmode))
    {
      operands[3] = x1;
      goto L3806;
    }
  goto ret0;

 L3417: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DImode:
      goto L8748;
    case SImode:
      goto L8752;
    case HImode:
      goto L8750;
    case QImode:
      goto L8751;
    default:
      break;
    }
  goto L3805;

 L8748: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[5] = x2;
      goto L3418;
    }
  goto L3805;

 L3418: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_immediate_operand (x2, DImode))
    {
      operands[6] = x2;
      goto L3419;
    }
  goto L3805;

 L3419: ATTRIBUTE_UNUSED_LABEL
  tem = split_2 (x0, insn);
  if (tem != 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L3805;

 L8752: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == AND)
    goto L7220;
  if (register_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L4350;
    }
  goto L3805;

 L7220: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L7221;
    }
  goto L3805;

 L7221: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (one_bit_set_operand (x3, SImode))
    {
      operands[6] = x3;
      goto L7222;
    }
  goto L3805;

 L7222: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L7223;
  goto L3805;

 L7223: ATTRIBUTE_UNUSED_LABEL
  tem = split_3 (x0, insn);
  if (tem != 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L3805;

 L4350: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_const_int_operand (x2, SImode))
    {
      operands[6] = x2;
      goto L4351;
    }
  goto L3805;

 L4351: ATTRIBUTE_UNUSED_LABEL
  tem = split_4 (x0, insn);
  if (tem != 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L3805;

 L8750: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[5] = x2;
      goto L5282;
    }
  goto L3805;

 L5282: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[6] = x2;
      goto L5283;
    }
  goto L3805;

 L5283: ATTRIBUTE_UNUSED_LABEL
  tem = split_5 (x0, insn);
  if (tem != 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L3805;

 L8751: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[5] = x2;
      goto L6214;
    }
  goto L3805;

 L6214: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[6] = x2;
      goto L6215;
    }
  goto L3805;

 L6215: ATTRIBUTE_UNUSED_LABEL
  tem = split_6 (x0, insn);
  if (tem != 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L3805;

 L3806: ATTRIBUTE_UNUSED_LABEL
  return split_7 (x0, insn);
 ret0:
  return 0;
}

static rtx
peephole2_1 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *_pmatch_len ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case ZERO_EXTEND:
      goto L2420;
    case ASHIFT:
      goto L2442;
    case MULT:
      goto L2465;
    case PLUS:
      goto L2770;
    case ZERO_EXTRACT:
      goto L2845;
    case AND:
      goto L2855;
    case LSHIFTRT:
      goto L2909;
    case NOT:
      goto L2924;
    default:
     break;
   }
 L8876: ATTRIBUTE_UNUSED_LABEL
  if (logical_shift_operator (x1, SImode))
    {
      operands[5] = x1;
      goto L2498;
    }
  goto ret0;

 L2420: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L8882;
    case HImode:
      goto L8883;
    default:
      break;
    }
  goto ret0;

 L8882: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L2421;
    }
  goto ret0;

 L2421: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2422;
  goto ret0;

 L2422: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L8884;
  goto ret0;

 L8884: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == ZERO_EXTRACT)
    goto L2423;
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2883;
    }
  goto ret0;

 L2423: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L2424;
    }
  goto ret0;

 L2424: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L2425;
    }
  goto ret0;

 L2425: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (immediate_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L2426;
    }
  goto ret0;

 L2426: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 1052 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(((peep2_reg_dead_p(2, operands[0]) &&
    (INTVAL(operands[3]) <= 8)))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_379 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L2883: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L2884;
  goto ret0;

 L2884: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L2885;
  goto ret0;

 L2885: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == MULT)
    goto L2886;
  goto ret0;

 L2886: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[0]))
    goto L2887;
  goto ret0;

 L2887: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L2888;
  goto ret0;

 L2888: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L2889;
    }
  goto ret0;

 L2889: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4445 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((peep2_reg_dead_p(2, operands[0]))
   || (REGNO(operands[0]) == REGNO(operands[2]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_456 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L8883: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L2432;
    }
  goto ret0;

 L2432: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2433;
  goto ret0;

 L2433: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L2434;
  goto ret0;

 L2434: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L2435;
    }
  goto ret0;

 L2435: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L2436;
    }
  goto ret0;

 L2436: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (immediate_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L2437;
    }
  goto ret0;

 L2437: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 1067 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(((peep2_reg_dead_p(2, operands[0]) &&
    (INTVAL(operands[3]) <= 16)))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_380 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L2442: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2443;
    }
  goto L8876;

 L2443: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2444;
    }
  goto L8876;

 L2444: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2445;
  x1 = XEXP (x0, 1);
  goto L8876;

 L2445: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2446;
    }
  x1 = XEXP (x0, 1);
  goto L8876;

 L2446: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L2447;
  x1 = XEXP (x0, 1);
  goto L8876;

 L2447: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2448;
 L2459: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L2460;
    }
  x1 = XEXP (x0, 1);
  goto L8876;

 L2448: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L2449;
    }
  x3 = XEXP (x2, 0);
  goto L2459;

 L2449: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1205 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((peep2_reg_dead_p(2, operands[0]) &&
    (INTVAL(operands[2]) < 4 && INTVAL(operands[2]) > 0))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_381 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2459;

 L2460: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 1220 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((peep2_reg_dead_p(2, operands[0]) &&
    (INTVAL(operands[2]) < 4 && INTVAL(operands[2]) > 0))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_382 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  goto L8876;

 L2465: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L8886;
  goto ret0;

 L8886: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SIGN_EXTEND)
    goto L2466;
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2824;
    }
  goto ret0;

 L2466: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2467;
    }
 L2479: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L2480;
    }
  goto ret0;

 L2467: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L2468;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2479;

 L2468: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2469;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2479;

 L2469: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2470;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2479;

 L2470: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2471;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2479;

 L2471: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L2472;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2479;

 L2472: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2473;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2479;

 L2473: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (16)]
      && 
#line 1402 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(!TARGET_NO_MUL_INSNS && TARGET_DSP
   && (peep2_reg_dead_p(1, operands[0]) || (REGNO(operands[0]) == REGNO(operands[3])))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_383 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2479;

 L2480: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L2481;
  goto ret0;

 L2481: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L2482;
    }
  goto ret0;

 L2482: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2483;
  goto ret0;

 L2483: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L2484;
  goto ret0;

 L2484: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (alu_operator (x2, SImode))
    {
      operands[3] = x2;
      goto L2485;
    }
  goto ret0;

 L2485: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2486;
  goto ret0;

 L2486: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, VOIDmode))
    {
      operands[4] = x3;
      goto L2487;
    }
  goto ret0;

 L2487: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1511 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(peep2_reg_dead_p(1, operands[2])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_384 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L2824: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2825;
    }
  goto ret0;

 L2825: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2826;
  goto ret0;

 L2826: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2827;
    }
  goto ret0;

 L2827: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L2828;
  goto ret0;

 L2828: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L2829;
 L2839: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[0]))
    goto L2840;
  goto ret0;

 L2829: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 4306 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(peep2_reg_dead_p(2, operands[0])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_449 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x3 = XEXP (x2, 0);
  goto L2839;

 L2840: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 4320 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(peep2_reg_dead_p(2, operands[0])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_450 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L2770: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2771;
    }
 L2944: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0]))
    goto L2945;
  goto ret0;

 L2771: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2772;
    }
  x2 = XEXP (x1, 0);
  goto L2944;

 L2772: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2773;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L2944;

 L2773: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L8888;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L2944;

 L8888: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L2774;
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2785;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L2944;

 L2774: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2775;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L2944;

 L2775: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2776;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L2944;

 L2776: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4173 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(REGNO(operands[0]) != REGNO(operands[1]) && avr32_const_ok_for_constraint_p(INTVAL(operands[2]), 'K', "Ks16")))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_443 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L2944;

 L2785: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L2786;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L2944;

 L2786: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 4203 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(REGNO(operands[0]) != REGNO(operands[1]) && avr32_const_ok_for_constraint_p(INTVAL(operands[2]), 'K', "Ks16")))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_444 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L2944;

 L2945: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2946;
    }
  goto ret0;

 L2946: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2947;
  goto ret0;

 L2947: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L2948;
  goto ret0;

 L2948: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L2949;
  goto ret0;

 L2949: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2950;
  goto ret0;

 L2950: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2951;
    }
  goto ret0;

 L2951: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4593 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_rnd_operands(operands[1], operands[2])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_463 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L2845: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2846;
    }
  goto ret0;

 L2846: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L8890;
  goto ret0;

 L8890: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x2, 0) == XWINT (x2, 0))
    switch ((int) XWINT (x2, 0))
      {
      case 1L:
        goto L2847;
      case 8L:
        goto L2866;
      default:
        break;
      }
  goto ret0;

 L2847: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2848;
    }
  goto ret0;

 L2848: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2849;
  goto ret0;

 L2849: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0)
    goto L2850;
  goto ret0;

 L2850: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 4345 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(peep2_reg_dead_p(2, operands[0])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_451 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L2866: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (avr32_extract_shift_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2867;
    }
  goto ret0;

 L2867: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2868;
  goto ret0;

 L2868: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2869;
    }
  goto ret0;

 L2869: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L2870;
  goto ret0;

 L2870: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L2871;
  goto ret0;

 L2871: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == MULT)
    goto L2872;
  goto ret0;

 L2872: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[0]))
    goto L2873;
  goto ret0;

 L2873: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L2874;
  goto ret0;

 L2874: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L2875;
    }
  goto ret0;

 L2875: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4427 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((peep2_reg_dead_p(2, operands[0]))
   || (REGNO(operands[0]) == REGNO(operands[3]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_455 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L2855: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2856;
    }
  goto ret0;

 L2856: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L8893;
  goto ret0;

 L8893: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x2, 0) == 255L)
    goto L2896;
 L8892: ATTRIBUTE_UNUSED_LABEL
  if (one_bit_set_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2857;
    }
  goto ret0;

 L2896: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2897;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L8892;

 L2897: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2898;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L8892;

 L2898: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L2899;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L8892;

 L2899: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L2900;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L8892;

 L2900: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == MULT)
    goto L2901;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L8892;

 L2901: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[0]))
    goto L2902;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L8892;

 L2902: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L2903;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L8892;

 L2903: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L2904;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L8892;

 L2904: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4466 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((peep2_reg_dead_p(2, operands[0]))
   || (REGNO(operands[0]) == REGNO(operands[2]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_457 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L8892;

 L2857: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2858;
  goto ret0;

 L2858: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0)
    goto L2859;
  goto ret0;

 L2859: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 4357 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(peep2_reg_dead_p(2, operands[0])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_452 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L2909: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2910;
    }
  goto L8876;

 L2910: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (24)])
    goto L2911;
  goto L8876;

 L2911: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2912;
  x1 = XEXP (x0, 1);
  goto L8876;

 L2912: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2913;
    }
  x1 = XEXP (x0, 1);
  goto L8876;

 L2913: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L2914;
  x1 = XEXP (x0, 1);
  goto L8876;

 L2914: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L2915;
  x1 = XEXP (x0, 1);
  goto L8876;

 L2915: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == MULT)
    goto L2916;
  x1 = XEXP (x0, 1);
  goto L8876;

 L2916: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[0]))
    goto L2917;
  x1 = XEXP (x0, 1);
  goto L8876;

 L2917: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L2918;
  x1 = XEXP (x0, 1);
  goto L8876;

 L2918: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L2919;
    }
  x1 = XEXP (x0, 1);
  goto L8876;

 L2919: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4488 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((peep2_reg_dead_p(2, operands[0]))
   || (REGNO(operands[0]) == REGNO(operands[2]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_458 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  goto L8876;

 L2924: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2925;
    }
  goto ret0;

 L2925: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2926;
  goto ret0;

 L2926: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2927;
    }
  goto ret0;

 L2927: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L2928;
  goto ret0;

 L2928: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L2929;
 L2938: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[0]))
    goto L2939;
  goto ret0;

 L2929: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 4513 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(peep2_reg_dead_p(2, operands[0])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_459 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x3 = XEXP (x2, 0);
  goto L2938;

 L2939: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 4529 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(peep2_reg_dead_p(2, operands[0])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_460 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L2498: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2499;
    }
  goto ret0;

 L2499: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2500;
    }
  goto ret0;

 L2500: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2501;
  goto ret0;

 L2501: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2502;
    }
  goto ret0;

 L2502: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L8894;
  goto ret0;

 L8894: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case AND:
      goto L2503;
    case IOR:
      goto L2514;
    case XOR:
      goto L2525;
    default:
     break;
   }
  goto ret0;

 L2503: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L2504;
    }
 L2536: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[0]))
    goto L2537;
  goto ret0;

 L2504: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 1814 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((peep2_reg_dead_p(2, operands[0])) || (REGNO(operands[3]) == REGNO(operands[0]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_392 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x3 = XEXP (x2, 0);
  goto L2536;

 L2537: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L2538;
    }
  goto ret0;

 L2538: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1831 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((peep2_reg_dead_p(2, operands[0])) || (REGNO(operands[3]) == REGNO(operands[0]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_395 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L2514: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L2515;
    }
 L2548: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[0]))
    goto L2549;
  goto ret0;

 L2515: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 1814 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((peep2_reg_dead_p(2, operands[0])) || (REGNO(operands[3]) == REGNO(operands[0]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_393 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x3 = XEXP (x2, 0);
  goto L2548;

 L2549: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L2550;
    }
  goto ret0;

 L2550: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1831 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((peep2_reg_dead_p(2, operands[0])) || (REGNO(operands[3]) == REGNO(operands[0]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_396 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L2525: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L2526;
    }
 L2560: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[0]))
    goto L2561;
  goto ret0;

 L2526: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 1814 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((peep2_reg_dead_p(2, operands[0])) || (REGNO(operands[3]) == REGNO(operands[0]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_394 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x3 = XEXP (x2, 0);
  goto L2560;

 L2561: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L2562;
    }
  goto ret0;

 L2562: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1831 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((peep2_reg_dead_p(2, operands[0])) || (REGNO(operands[3]) == REGNO(operands[0]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_397 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;
 ret0:
  return 0;
}

rtx
peephole2_insns (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *_pmatch_len ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  if (peep2_current_count >= 2)
    goto L2417;
  goto ret0;

 L2417: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x0) == SET)
    goto L2418;
  goto ret0;

 L2418: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L8868;
    case QImode:
      goto L8869;
    case HImode:
      goto L8870;
    case SFmode:
      goto L8871;
    case DFmode:
      goto L8872;
    default:
      break;
    }
  goto ret0;

 L8868: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2419;
    }
  goto ret0;

 L2419: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L8873;
 L2955: ATTRIBUTE_UNUSED_LABEL
  if (avr32_const_pool_ref_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L2956;
    }
  goto ret0;

 L8873: ATTRIBUTE_UNUSED_LABEL
  tem = peephole2_1 (x0, insn, _pmatch_len);
  if (tem != 0)
    return tem;
  goto L2955;

 L2956: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == PARALLEL
      && XVECLEN (x1, 0) == 2)
    goto L2957;
  goto ret0;

 L2957: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_CODE (x2))
    {
    case CALL:
      goto L2958;
    case SET:
      goto L2969;
    default:
     break;
   }
  goto ret0;

 L2958: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L2959;
  goto ret0;

 L2959: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L2960;
  goto ret0;

 L2960: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L2961;

 L2961: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L2962;
  goto ret0;

 L2962: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 1
      && 
#line 4656 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(peep2_reg_dead_p(2, operands[0])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_467 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L2969: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L2970;
    }
  goto ret0;

 L2970: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CALL)
    goto L2971;
  goto ret0;

 L2971: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == MEM)
    goto L2972;
  goto ret0;

 L2972: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[0]))
    goto L2973;
  goto ret0;

 L2973: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  operands[3] = x4;
  goto L2974;

 L2974: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L2975;
  goto ret0;

 L2975: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 1
      && 
#line 4670 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((peep2_reg_dead_p(2, operands[0]) || (REGNO(operands[2]) == REGNO(operands[0])))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_468 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L8869: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L2790;
    }
  goto ret0;

 L2790: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L8897;
  goto ret0;

 L8897: ATTRIBUTE_UNUSED_LABEL
  if (load_sb_memory_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L2791;
    }
 L8898: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L2799;
    }
  goto ret0;

 L2791: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2792;
  x1 = XEXP (x0, 1);
  goto L8898;

 L2792: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2793;
    }
  x1 = XEXP (x0, 1);
  goto L8898;

 L2793: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L2794;
  x1 = XEXP (x0, 1);
  goto L8898;

 L2794: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 4226 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((REGNO(operands[0]) == REGNO(operands[2]) || peep2_reg_dead_p(2, operands[0]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_445 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  goto L8898;

 L2799: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2800;
  goto ret0;

 L2800: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2801;
    }
  goto ret0;

 L2801: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L2802;
  goto ret0;

 L2802: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 4245 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((REGNO(operands[0]) == REGNO(operands[2])) || peep2_reg_dead_p(2, operands[0])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_446 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L8870: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L2806;
    }
  goto ret0;

 L2806: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L8900;
  goto ret0;

 L8900: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == NEG)
    goto L2980;
  if (memory_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L2807;
    }
  goto ret0;

 L2980: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L2981;
    }
  goto ret0;

 L2981: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2982;
  goto ret0;

 L2982: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2983;
    }
  goto ret0;

 L2983: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MULT)
    goto L2984;
  goto ret0;

 L2984: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L2985;
  goto ret0;

 L2985: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L2986;
 L2998: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, HImode))
    {
      operands[3] = x4;
      goto L2999;
    }
  goto ret0;

 L2986: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L2987;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2998;

 L2987: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[3] = x4;
      goto L2988;
    }
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2998;

 L2988: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4791 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((peep2_reg_dead_p(2, operands[0])) || (REGNO(operands[2]) == REGNO(operands[0]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_473 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2998;

 L2999: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L3000;
  goto ret0;

 L3000: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0])
      && 
#line 4806 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((peep2_reg_dead_p(2, operands[0])) || (REGNO(operands[2]) == REGNO(operands[0]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_474 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L2807: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2808;
  goto ret0;

 L2808: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2809;
    }
  goto ret0;

 L2809: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L8901;
  goto ret0;

 L8901: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SIGN_EXTEND:
      goto L2810;
    case ZERO_EXTEND:
      goto L2818;
    default:
     break;
   }
  goto ret0;

 L2810: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 4264 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((REGNO(operands[0]) == REGNO(operands[2])) || peep2_reg_dead_p(2, operands[0])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_447 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L2818: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 4283 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
((REGNO(operands[0]) == REGNO(operands[2])) || peep2_reg_dead_p(2, operands[0])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_448 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L8871: ATTRIBUTE_UNUSED_LABEL
  if (avr32_fp_register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L3008;
    }
  goto ret0;

 L3008: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode
      && GET_CODE (x1) == MULT)
    goto L3009;
  goto ret0;

 L3009: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (avr32_fp_register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3010;
    }
  goto ret0;

 L3010: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_fp_register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3011;
    }
  goto ret0;

 L3011: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3012;
  goto ret0;

 L3012: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (avr32_fp_register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L3013;
    }
  goto ret0;

 L3013: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L8903;
  goto ret0;

 L8903: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L3014;
    case MINUS:
      goto L3024;
    default:
     break;
   }
  goto ret0;

 L3014: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 154 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT &&
   (peep2_reg_dead_p(2, operands[0]) || (REGNO(operands[3]) == REGNO(operands[0])))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_492 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L3024: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L3025;
 L3035: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[0]))
    goto L3036;
  goto ret0;

 L3025: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 190 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT && peep2_reg_dead_p(2, operands[0])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_493 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x3 = XEXP (x2, 0);
  goto L3035;

 L3036: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 216 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT && peep2_reg_dead_p(2, operands[0])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_494 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L8872: ATTRIBUTE_UNUSED_LABEL
  if (avr32_fp_register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L3040;
    }
  goto ret0;

 L3040: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode
      && GET_CODE (x1) == MULT)
    goto L3041;
  goto ret0;

 L3041: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (avr32_fp_register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3042;
    }
  goto ret0;

 L3042: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (avr32_fp_register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3043;
    }
  goto ret0;

 L3043: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3044;
  goto ret0;

 L3044: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (avr32_fp_register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L3045;
    }
  goto ret0;

 L3045: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L8905;
  goto ret0;

 L8905: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L3046;
    case MINUS:
      goto L3056;
    default:
     break;
   }
  goto ret0;

 L3046: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 312 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT &&
   (peep2_reg_dead_p(2, operands[0]) || (REGNO(operands[3]) == REGNO(operands[0])))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_495 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L3056: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3057;
 L3067: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[3]))
    goto L3068;
  goto ret0;

 L3057: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 347 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT && peep2_reg_dead_p(2, operands[0])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_496 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x3 = XEXP (x2, 0);
  goto L3067;

 L3068: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 382 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
(TARGET_HARD_FLOAT && peep2_reg_dead_p(2, operands[0])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_497 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;
 ret0:
  return 0;
}


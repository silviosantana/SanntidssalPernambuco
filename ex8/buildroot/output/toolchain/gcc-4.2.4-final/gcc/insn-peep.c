/* Generated automatically by the program `genpeep'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "insn-config.h"
#include "rtl.h"
#include "tm_p.h"
#include "regs.h"
#include "output.h"
#include "real.h"
#include "recog.h"
#include "except.h"
#include "function.h"
#include "toplev.h"
#include "flags.h"
#include "tm-constrs.h"

#ifdef HAVE_peephole
extern rtx peep_operand[];

#define operands peep_operand

rtx
peephole (rtx ins1)
{
  rtx insn ATTRIBUTE_UNUSED, x ATTRIBUTE_UNUSED, pat ATTRIBUTE_UNUSED;

  if (NEXT_INSN (ins1)
      && BARRIER_P (NEXT_INSN (ins1)))
    return 0;

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L386;
  x = XEXP (pat, 0);
  operands[3] = x;
  if (! register_operand (x, SImode)) goto L386;
  x = XEXP (pat, 1);
  operands[5] = x;
  if (! logical_shift_operator (x, SImode)) goto L386;
  x = XEXP (XEXP (pat, 1), 0);
  operands[1] = x;
  if (! register_operand (x, SImode)) goto L386;
  x = XEXP (XEXP (pat, 1), 1);
  operands[2] = x;
  if (! immediate_operand (x, SImode)) goto L386;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L386; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L386;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L386;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! register_operand (x, SImode)) goto L386;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != AND) goto L386;
  if (GET_MODE (x) != SImode) goto L386;
  x = XEXP (XEXP (pat, 1), 0);
  operands[4] = x;
  if (! register_operand (x, SImode)) goto L386;
  x = XEXP (XEXP (pat, 1), 1);
  if (!rtx_equal_p (operands[3], x)) goto L386;
  if (! ((dead_or_set_p(insn, operands[3])) || (REGNO(operands[3]) == REGNO(operands[0])))) goto L386;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (6, operands));
  INSN_CODE (ins1) = 386;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L386:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L387;
  x = XEXP (pat, 0);
  operands[3] = x;
  if (! register_operand (x, SImode)) goto L387;
  x = XEXP (pat, 1);
  operands[5] = x;
  if (! logical_shift_operator (x, SImode)) goto L387;
  x = XEXP (XEXP (pat, 1), 0);
  operands[1] = x;
  if (! register_operand (x, SImode)) goto L387;
  x = XEXP (XEXP (pat, 1), 1);
  operands[2] = x;
  if (! immediate_operand (x, SImode)) goto L387;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L387; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L387;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L387;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! register_operand (x, SImode)) goto L387;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != IOR) goto L387;
  if (GET_MODE (x) != SImode) goto L387;
  x = XEXP (XEXP (pat, 1), 0);
  operands[4] = x;
  if (! register_operand (x, SImode)) goto L387;
  x = XEXP (XEXP (pat, 1), 1);
  if (!rtx_equal_p (operands[3], x)) goto L387;
  if (! ((dead_or_set_p(insn, operands[3])) || (REGNO(operands[3]) == REGNO(operands[0])))) goto L387;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (6, operands));
  INSN_CODE (ins1) = 387;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L387:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L388;
  x = XEXP (pat, 0);
  operands[3] = x;
  if (! register_operand (x, SImode)) goto L388;
  x = XEXP (pat, 1);
  operands[5] = x;
  if (! logical_shift_operator (x, SImode)) goto L388;
  x = XEXP (XEXP (pat, 1), 0);
  operands[1] = x;
  if (! register_operand (x, SImode)) goto L388;
  x = XEXP (XEXP (pat, 1), 1);
  operands[2] = x;
  if (! immediate_operand (x, SImode)) goto L388;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L388; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L388;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L388;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! register_operand (x, SImode)) goto L388;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != XOR) goto L388;
  if (GET_MODE (x) != SImode) goto L388;
  x = XEXP (XEXP (pat, 1), 0);
  operands[4] = x;
  if (! register_operand (x, SImode)) goto L388;
  x = XEXP (XEXP (pat, 1), 1);
  if (!rtx_equal_p (operands[3], x)) goto L388;
  if (! ((dead_or_set_p(insn, operands[3])) || (REGNO(operands[3]) == REGNO(operands[0])))) goto L388;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (6, operands));
  INSN_CODE (ins1) = 388;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L388:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L389;
  x = XEXP (pat, 0);
  operands[3] = x;
  if (! register_operand (x, SImode)) goto L389;
  x = XEXP (pat, 1);
  operands[5] = x;
  if (! logical_shift_operator (x, SImode)) goto L389;
  x = XEXP (XEXP (pat, 1), 0);
  operands[1] = x;
  if (! register_operand (x, SImode)) goto L389;
  x = XEXP (XEXP (pat, 1), 1);
  operands[2] = x;
  if (! immediate_operand (x, SImode)) goto L389;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L389; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L389;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L389;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! register_operand (x, SImode)) goto L389;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != AND) goto L389;
  if (GET_MODE (x) != SImode) goto L389;
  x = XEXP (XEXP (pat, 1), 0);
  if (!rtx_equal_p (operands[3], x)) goto L389;
  x = XEXP (XEXP (pat, 1), 1);
  operands[4] = x;
  if (! register_operand (x, SImode)) goto L389;
  if (! ((dead_or_set_p(insn, operands[3])) || (REGNO(operands[3]) == REGNO(operands[0])))) goto L389;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (6, operands));
  INSN_CODE (ins1) = 389;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L389:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L390;
  x = XEXP (pat, 0);
  operands[3] = x;
  if (! register_operand (x, SImode)) goto L390;
  x = XEXP (pat, 1);
  operands[5] = x;
  if (! logical_shift_operator (x, SImode)) goto L390;
  x = XEXP (XEXP (pat, 1), 0);
  operands[1] = x;
  if (! register_operand (x, SImode)) goto L390;
  x = XEXP (XEXP (pat, 1), 1);
  operands[2] = x;
  if (! immediate_operand (x, SImode)) goto L390;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L390; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L390;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L390;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! register_operand (x, SImode)) goto L390;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != IOR) goto L390;
  if (GET_MODE (x) != SImode) goto L390;
  x = XEXP (XEXP (pat, 1), 0);
  if (!rtx_equal_p (operands[3], x)) goto L390;
  x = XEXP (XEXP (pat, 1), 1);
  operands[4] = x;
  if (! register_operand (x, SImode)) goto L390;
  if (! ((dead_or_set_p(insn, operands[3])) || (REGNO(operands[3]) == REGNO(operands[0])))) goto L390;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (6, operands));
  INSN_CODE (ins1) = 390;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L390:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L391;
  x = XEXP (pat, 0);
  operands[3] = x;
  if (! register_operand (x, SImode)) goto L391;
  x = XEXP (pat, 1);
  operands[5] = x;
  if (! logical_shift_operator (x, SImode)) goto L391;
  x = XEXP (XEXP (pat, 1), 0);
  operands[1] = x;
  if (! register_operand (x, SImode)) goto L391;
  x = XEXP (XEXP (pat, 1), 1);
  operands[2] = x;
  if (! immediate_operand (x, SImode)) goto L391;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L391; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L391;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L391;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! register_operand (x, SImode)) goto L391;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != XOR) goto L391;
  if (GET_MODE (x) != SImode) goto L391;
  x = XEXP (XEXP (pat, 1), 0);
  if (!rtx_equal_p (operands[3], x)) goto L391;
  x = XEXP (XEXP (pat, 1), 1);
  operands[4] = x;
  if (! register_operand (x, SImode)) goto L391;
  if (! ((dead_or_set_p(insn, operands[3])) || (REGNO(operands[3]) == REGNO(operands[0])))) goto L391;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (6, operands));
  INSN_CODE (ins1) = 391;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L391:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L453;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! register_operand (x, SImode)) goto L453;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != ZERO_EXTRACT) goto L453;
  if (GET_MODE (x) != SImode) goto L453;
  x = XEXP (XEXP (pat, 1), 0);
  operands[1] = x;
  if (! register_operand (x, SImode)) goto L453;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != CONST_INT) goto L453;
  if (XWINT (x, 0) != 8) goto L453;
  x = XEXP (XEXP (pat, 1), 2);
  operands[2] = x;
  if (! avr32_extract_shift_operand (x, SImode)) goto L453;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L453; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L453;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L453;
  x = XEXP (pat, 0);
  operands[3] = x;
  if (! register_operand (x, SImode)) goto L453;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L453;
  if (GET_MODE (x) != SImode) goto L453;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L453;
  if (GET_MODE (x) != SImode) goto L453;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (GET_CODE (x) != MULT) goto L453;
  if (GET_MODE (x) != SImode) goto L453;
  x = XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0);
  if (!rtx_equal_p (operands[0], x)) goto L453;
  x = XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1);
  if (GET_CODE (x) != CONST_INT) goto L453;
  if (XWINT (x, 0) != 4) goto L453;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  operands[4] = x;
  if (! register_operand (x, SImode)) goto L453;
  if (! ((dead_or_set_p(insn, operands[0])))) goto L453;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (5, operands));
  INSN_CODE (ins1) = 453;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L453:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L454;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! register_operand (x, SImode)) goto L454;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != AND) goto L454;
  if (GET_MODE (x) != SImode) goto L454;
  x = XEXP (XEXP (pat, 1), 0);
  operands[1] = x;
  if (! register_operand (x, SImode)) goto L454;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != CONST_INT) goto L454;
  if (XWINT (x, 0) != 255) goto L454;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L454; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L454;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L454;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! register_operand (x, SImode)) goto L454;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L454;
  if (GET_MODE (x) != SImode) goto L454;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L454;
  if (GET_MODE (x) != SImode) goto L454;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (GET_CODE (x) != MULT) goto L454;
  if (GET_MODE (x) != SImode) goto L454;
  x = XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0);
  if (!rtx_equal_p (operands[0], x)) goto L454;
  x = XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1);
  if (GET_CODE (x) != CONST_INT) goto L454;
  if (XWINT (x, 0) != 4) goto L454;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  operands[3] = x;
  if (! register_operand (x, SImode)) goto L454;
  if (! ((dead_or_set_p(insn, operands[0])))) goto L454;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 454;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L454:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L461;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! register_operand (x, SImode)) goto L461;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != ABS) goto L461;
  if (GET_MODE (x) != SImode) goto L461;
  x = XEXP (XEXP (pat, 1), 0);
  operands[1] = x;
  if (! register_operand (x, SImode)) goto L461;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L461; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L461;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L461;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! register_operand (x, SImode)) goto L461;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != PLUS) goto L461;
  if (GET_MODE (x) != SImode) goto L461;
  x = XEXP (XEXP (pat, 1), 0);
  operands[3] = x;
  if (! register_operand (x, SImode)) goto L461;
  x = XEXP (XEXP (pat, 1), 1);
  if (!rtx_equal_p (operands[2], x)) goto L461;
  if (! (dead_or_set_p(insn, operands[2]))) goto L461;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 461;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L461:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L462;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! register_operand (x, SImode)) goto L462;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != ABS) goto L462;
  if (GET_MODE (x) != SImode) goto L462;
  x = XEXP (XEXP (pat, 1), 0);
  operands[1] = x;
  if (! register_operand (x, SImode)) goto L462;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L462; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L462;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L462;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! register_operand (x, SImode)) goto L462;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != PLUS) goto L462;
  if (GET_MODE (x) != SImode) goto L462;
  x = XEXP (XEXP (pat, 1), 0);
  if (!rtx_equal_p (operands[2], x)) goto L462;
  x = XEXP (XEXP (pat, 1), 1);
  operands[3] = x;
  if (! register_operand (x, SImode)) goto L462;
  if (! (dead_or_set_p(insn, operands[2]))) goto L462;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 462;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L462:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L464;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! register_operand (x, SImode)) goto L464;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != PLUS) goto L464;
  if (GET_MODE (x) != SImode) goto L464;
  x = XEXP (XEXP (pat, 1), 0);
  if (!rtx_equal_p (operands[0], x)) goto L464;
  x = XEXP (XEXP (pat, 1), 1);
  operands[1] = x;
  if (! immediate_operand (x, SImode)) goto L464;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L464; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L464;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L464;
  x = XEXP (pat, 0);
  if (!rtx_equal_p (operands[0], x)) goto L464;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != ASHIFTRT) goto L464;
  if (GET_MODE (x) != SImode) goto L464;
  x = XEXP (XEXP (pat, 1), 0);
  if (!rtx_equal_p (operands[0], x)) goto L464;
  x = XEXP (XEXP (pat, 1), 1);
  operands[2] = x;
  if (! immediate_operand (x, SImode)) goto L464;
  if (! (avr32_rnd_operands(operands[1], operands[2]))) goto L464;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (3, operands));
  INSN_CODE (ins1) = 464;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L464:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L465;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! register_operand (x, SImode)) goto L465;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! avr32_const_pool_ref_operand (x, VOIDmode)) goto L465;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L465; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L465;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != PARALLEL) goto L465;
  if (XVECLEN (x, 0) != 2) goto L465;
  x = XVECEXP (pat, 0, 0);
  if (GET_CODE (x) != CALL) goto L465;
  x = XEXP (XVECEXP (pat, 0, 0), 0);
  if (GET_CODE (x) != MEM) goto L465;
  if (GET_MODE (x) != SImode) goto L465;
  x = XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0);
  if (!rtx_equal_p (operands[0], x)) goto L465;
  x = XEXP (XVECEXP (pat, 0, 0), 1);
  operands[2] = x;
  x = XVECEXP (pat, 0, 1);
  if (GET_CODE (x) != CLOBBER) goto L465;
  x = XEXP (XVECEXP (pat, 0, 1), 0);
  if (GET_CODE (x) != REG) goto L465;
  if (GET_MODE (x) != SImode) goto L465;
  if (XINT (x, 0) != 1) goto L465;
  if (! (dead_or_set_p(insn, operands[0]))) goto L465;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (3, operands));
  INSN_CODE (ins1) = 465;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L465:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L466;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! register_operand (x, SImode)) goto L466;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! avr32_const_pool_ref_operand (x, VOIDmode)) goto L466;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L466; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L466;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != PARALLEL) goto L466;
  if (XVECLEN (x, 0) != 2) goto L466;
  x = XVECEXP (pat, 0, 0);
  if (GET_CODE (x) != SET) goto L466;
  x = XEXP (XVECEXP (pat, 0, 0), 0);
  operands[0] = x;
  if (! register_operand (x, VOIDmode)) goto L466;
  x = XEXP (XVECEXP (pat, 0, 0), 1);
  if (GET_CODE (x) != CALL) goto L466;
  x = XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
  if (GET_CODE (x) != MEM) goto L466;
  if (GET_MODE (x) != SImode) goto L466;
  x = XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
  if (!rtx_equal_p (operands[2], x)) goto L466;
  x = XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
  operands[3] = x;
  x = XVECEXP (pat, 0, 1);
  if (GET_CODE (x) != CLOBBER) goto L466;
  x = XEXP (XVECEXP (pat, 0, 1), 0);
  if (GET_CODE (x) != REG) goto L466;
  if (GET_MODE (x) != SImode) goto L466;
  if (XINT (x, 0) != 1) goto L466;
  if (! (dead_or_set_p(insn, operands[2]))) goto L466;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 466;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L466:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L469;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! register_operand (x, VOIDmode)) goto L469;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! register_operand (x, VOIDmode)) goto L469;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L469; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L469;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != RETURN) goto L469;
  if (! (USE_RETURN_INSN (TRUE) && (REGNO(operands[0]) == RETVAL_REGNUM)
   && (REGNO(operands[1]) != LR_REGNUM)
   && (REGNO_REG_CLASS(REGNO(operands[1])) == GENERAL_REGS))) goto L469;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (2, operands));
  INSN_CODE (ins1) = 469;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L469:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L470;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! register_operand (x, VOIDmode)) goto L470;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! immediate_operand (x, VOIDmode)) goto L470;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L470; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L470;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != RETURN) goto L470;
  if (! ((USE_RETURN_INSN (FALSE) && (REGNO(operands[0]) == RETVAL_REGNUM) &&
   ((INTVAL(operands[1]) == -1) || (INTVAL(operands[1]) == 0) || (INTVAL(operands[1]) == 1))))) goto L470;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (2, operands));
  INSN_CODE (ins1) = 470;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L470:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L471;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! register_operand (x, VOIDmode)) goto L471;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! immediate_operand (x, VOIDmode)) goto L471;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L471; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L471;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != UNSPEC_VOLATILE) goto L471;
  if (XVECLEN (x, 0) != 1) goto L471;
  x = XVECEXP (pat, 0, 0);
  if (GET_CODE (x) != RETURN) goto L471;
  x = pat;
  if (XINT (x, 1) != 0) goto L471;
  if (! ((REGNO(operands[0]) == RETVAL_REGNUM) &&
   ((INTVAL(operands[1]) == -1) || (INTVAL(operands[1]) == 0) || (INTVAL(operands[1]) == 1)))) goto L471;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (2, operands));
  INSN_CODE (ins1) = 471;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L471:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L472;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! register_operand (x, VOIDmode)) goto L472;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != IF_THEN_ELSE) goto L472;
  x = XEXP (XEXP (pat, 1), 0);
  operands[1] = x;
  if (! avr32_comparison_operator (x, VOIDmode)) goto L472;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  operands[4] = x;
  if (! register_operand (x, VOIDmode)) goto L472;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  operands[5] = x;
  if (! register_immediate_operand (x, VOIDmode)) goto L472;
  x = XEXP (XEXP (pat, 1), 1);
  operands[2] = x;
  if (! avr32_cond_register_immediate_operand (x, VOIDmode)) goto L472;
  x = XEXP (XEXP (pat, 1), 2);
  operands[3] = x;
  if (! avr32_cond_register_immediate_operand (x, VOIDmode)) goto L472;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L472; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L472;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != RETURN) goto L472;
  if (! (USE_RETURN_INSN (TRUE) && (REGNO(operands[0]) == RETVAL_REGNUM))) goto L472;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (6, operands));
  INSN_CODE (ins1) = 472;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L472:

  return 0;
}

rtx peep_operand[6];
#endif

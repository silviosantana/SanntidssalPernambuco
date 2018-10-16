/* Generated automatically by the program `genemit'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"
#include "expr.h"
#include "optabs.h"
#include "real.h"
#include "flags.h"
#include "output.h"
#include "insn-config.h"
#include "hard-reg-set.h"
#include "recog.h"
#include "resource.h"
#include "reload.h"
#include "toplev.h"
#include "tm-constrs.h"
#include "ggc.h"

#include "basic-block.h"

#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:490 */
rtx
gen_movsi_internal (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:490 */
rtx
gen_movv2hi_internal (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:490 */
rtx
gen_movv4qi_internal (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:549 */
rtx
gen_mov_symbol_lo (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (SImode,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:558 */
rtx
gen_add_symbol_hi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LO_SUM (SImode,
	operand0,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:574 */
rtx
gen_pic_load_addr (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	10));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:583 */
rtx
gen_pic_compute_got_from_pc (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_MINUS (SImode,
	pc_rtx,
	operand0)),
	11)),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1))));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:917 */
rtx
gen_ldsf_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:917 */
rtx
gen_ldsi_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:917 */
rtx
gen_ldhi_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:917 */
rtx
gen_ldqi_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:929 */
rtx
gen_stsf_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:929 */
rtx
gen_stsi_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:929 */
rtx
gen_sthi_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:929 */
rtx
gen_stqi_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:940 */
rtx
gen_movsf_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:940 */
rtx
gen_movsi_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:940 */
rtx
gen_movhi_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:940 */
rtx
gen_movqi_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:978 */
rtx
gen_insv (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	operand1,
	operand2),
	operand3);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1015 */
rtx
gen_extv_internal (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand1,
	operand2,
	operand3));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1027 */
rtx
gen_extzv_internal (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	operand2,
	operand3));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1080 */
rtx
gen_pushm (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_PRE_DEC (BLKmode,
	gen_rtx_REG (SImode,
	2))),
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (1,
		operand0),
	0));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1096 */
rtx
gen_stm (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	4);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1118 */
rtx
gen_popm (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		operand0),
	1);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1139 */
rtx
gen_addsi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1139 */
rtx
gen_addhi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (HImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1139 */
rtx
gen_addqi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (QImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1154 */
rtx
gen_addsi3_lsl (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand3),
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1154 */
rtx
gen_addhi3_lsl (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (HImode,
	gen_rtx_ASHIFT (HImode,
	operand1,
	operand3),
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1154 */
rtx
gen_addqi3_lsl (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (QImode,
	gen_rtx_ASHIFT (QImode,
	operand1,
	operand3),
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1164 */
rtx
gen_addsi3_lsl2 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	gen_rtx_ASHIFT (SImode,
	operand2,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1164 */
rtx
gen_addhi3_lsl2 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (HImode,
	operand1,
	gen_rtx_ASHIFT (HImode,
	operand2,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1164 */
rtx
gen_addqi3_lsl2 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (QImode,
	operand1,
	gen_rtx_ASHIFT (QImode,
	operand2,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1175 */
rtx
gen_addsi3_mul (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	operand1,
	operand3),
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1175 */
rtx
gen_addhi3_mul (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (HImode,
	gen_rtx_MULT (HImode,
	operand1,
	operand3),
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1175 */
rtx
gen_addqi3_mul (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (QImode,
	gen_rtx_MULT (QImode,
	operand1,
	operand3),
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1186 */
rtx
gen_addsi3_mul2 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	gen_rtx_MULT (SImode,
	operand2,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1186 */
rtx
gen_addhi3_mul2 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (HImode,
	operand1,
	gen_rtx_MULT (HImode,
	operand2,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1186 */
rtx
gen_addqi3_mul2 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (QImode,
	operand1,
	gen_rtx_MULT (QImode,
	operand2,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1228 */
rtx
gen_adddi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1241 */
rtx
gen_addsi_imm_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand0,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1241 */
rtx
gen_addhi_imm_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (HImode,
	operand0,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1241 */
rtx
gen_addqi_imm_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (QImode,
	operand0,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1258 */
rtx
gen_subsi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1258 */
rtx
gen_subhi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (HImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1258 */
rtx
gen_subqi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (QImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1299 */
rtx
gen_subdi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1312 */
rtx
gen_subsi_imm_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand0,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1312 */
rtx
gen_subhi_imm_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (HImode,
	operand0,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1312 */
rtx
gen_subqi_imm_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (QImode,
	operand0,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1322 */
rtx
gen_rsubsi_imm_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand0));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1322 */
rtx
gen_rsubhi_imm_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (HImode,
	operand1,
	operand0));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1322 */
rtx
gen_rsubqi_imm_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (QImode,
	operand1,
	operand0));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1339 */
rtx
gen_mulqi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (QImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1360 */
rtx
gen_mulsi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1382 */
rtx
gen_mulhisi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (SImode,
	operand2)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1417 */
rtx
gen_mulnhisi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_NEG (HImode,
	operand1)),
	gen_rtx_SIGN_EXTEND (SImode,
	operand2)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1428 */
rtx
gen_machisi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (SImode,
	operand2)),
	operand0));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1442 */
rtx
gen_mulsidi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1453 */
rtx
gen_umulsidi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1475 */
rtx
gen_mulaccsidi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	operand0));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1487 */
rtx
gen_umulaccsidi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)),
	operand0));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1527 */
rtx
gen_mulsathh_h (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (SImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (15)])));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1538 */
rtx
gen_mulsatrndhh_h (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (SImode,
	operand2)),
	GEN_INT (1073741824L)),
	const_int_rtx[MAX_SAVED_CONST_INT + (15)])));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1551 */
rtx
gen_mulsathh_w (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_TRUNCATE (SImode,
	gen_rtx_ASHIFT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	const1_rtx)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1562 */
rtx
gen_mulsatwh_w (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_TRUNCATE (SImode,
	gen_rtx_ASHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (15)])));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1573 */
rtx
gen_mulsatrndwh_w (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_TRUNCATE (SImode,
	gen_rtx_ASHIFTRT (DImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	GEN_INT (1073741824L)),
	const_int_rtx[MAX_SAVED_CONST_INT + (15)])));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1585 */
rtx
gen_macsathh_w (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand0,
	gen_rtx_SS_TRUNCATE (SImode,
	gen_rtx_ASHIFT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	const1_rtx))));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1598 */
rtx
gen_mulwh_d (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)]));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1610 */
rtx
gen_mulnwh_d (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_NOT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1)),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)]));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1621 */
rtx
gen_macwh_d (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1633 */
rtx
gen_machh_d (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2))));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1644 */
rtx
gen_satadd_w (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (SImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1654 */
rtx
gen_satsub_w (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MINUS (SImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1664 */
rtx
gen_satadd_h (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (HImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1674 */
rtx
gen_satsub_h (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MINUS (HImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1691 */
rtx
gen_sminsi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (SImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1706 */
rtx
gen_smaxsi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (SImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1746 */
rtx
gen_andsi_lshift (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand4), SImode,
		operand2,
		operand3),
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1746 */
rtx
gen_iorsi_lshift (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand4), SImode,
		operand2,
		operand3),
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1746 */
rtx
gen_xorsi_lshift (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand4), SImode,
		operand2,
		operand3),
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1847 */
rtx
gen_andnsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	operand0,
	gen_rtx_NOT (SImode,
	operand1)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1858 */
rtx
gen_andsi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1911 */
rtx
gen_anddi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (DImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1927 */
rtx
gen_iorsi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1961 */
rtx
gen_iordi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (DImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1977 */
rtx
gen_xorsi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2004 */
rtx
gen_xordi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (DImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
rtx
gen_andsi_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
rtx
gen_orsi_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
rtx
gen_eorsi_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
rtx
gen_addsi_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
rtx
gen_subsi_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
rtx
gen_andhi_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (HImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
rtx
gen_orhi_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (HImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
rtx
gen_eorhi_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (HImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
rtx
gen_addhi_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (HImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
rtx
gen_subhi_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (HImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
rtx
gen_andqi_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (QImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
rtx
gen_orqi_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (QImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
rtx
gen_eorqi_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (QImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
rtx
gen_addqi_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (QImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2018 */
rtx
gen_subqi_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (QImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
rtx
gen_andsi_imm_clobber_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
rtx
gen_orsi_imm_clobber_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
rtx
gen_eorsi_imm_clobber_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
rtx
gen_addsi_imm_clobber_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
rtx
gen_subsi_imm_clobber_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
rtx
gen_andhi_imm_clobber_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (HImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
rtx
gen_orhi_imm_clobber_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (HImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
rtx
gen_eorhi_imm_clobber_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (HImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
rtx
gen_addhi_imm_clobber_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (HImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
rtx
gen_subhi_imm_clobber_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (HImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
rtx
gen_andqi_imm_clobber_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (QImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
rtx
gen_orqi_imm_clobber_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (QImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
rtx
gen_eorqi_imm_clobber_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (QImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
rtx
gen_addqi_imm_clobber_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (QImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
rtx
gen_subqi_imm_clobber_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (QImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2082 */
rtx
gen_zero_extendhisi_clobber_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2114 */
rtx
gen_zero_extendqisi_clobber_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2146 */
rtx
gen_zero_extendqihi_clobber_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2209 */
rtx
gen_divmodsi4_internal (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	3));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2250 */
rtx
gen_udivmodsi4_internal (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2267 */
rtx
gen_ashlsi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2285 */
rtx
gen_ashrsi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2303 */
rtx
gen_lshrsi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2321 */
rtx
gen_negsi2 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2331 */
rtx
gen_negsi2_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	operand0));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2345 */
rtx
gen_abssi2 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (SImode,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2360 */
rtx
gen_one_cmplsi2 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (SImode,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2371 */
rtx
gen_one_cmplsi2_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (SImode,
	operand0));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2386 */
rtx
gen_bldsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_AND (SImode,
	operand0,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2415 */
rtx
gen_cmpdi_internal (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (DImode,
	operand0,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2415 */
rtx
gen_cmpsi_internal (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (SImode,
	operand0,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2415 */
rtx
gen_cmphi_internal (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (HImode,
	operand0,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2415 */
rtx
gen_cmpqi_internal (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (QImode,
	operand0,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2447 */
rtx
gen_tstsi_internal (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	cc0_rtx,
	operand0);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2471 */
rtx
gen_tstdi_internal (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	cc0_rtx,
	operand0);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2491 */
rtx
gen_truncdisi2 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2504 */
rtx
gen_extendhisi2 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2525 */
rtx
gen_extendqisi2 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2546 */
rtx
gen_extendqihi2 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2574 */
rtx
gen_zero_extendhisi2 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2596 */
rtx
gen_zero_extendqisi2 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2617 */
rtx
gen_zero_extendqihi2 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2642 */
rtx
gen_ldsisi_predicable_se (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2642 */
rtx
gen_ldsihi_predicable_se (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2642 */
rtx
gen_ldsiqi_predicable_se (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2654 */
rtx
gen_ldsisi_predicable_ze (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2654 */
rtx
gen_ldsihi_predicable_ze (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2654 */
rtx
gen_ldsiqi_predicable_ze (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2666 */
rtx
gen_ldhi_predicable_ze (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2678 */
rtx
gen_ldhi_predicable_se (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2699 */
rtx
gen_seq (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (SImode,
	cc0_rtx,
	const0_rtx));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2699 */
rtx
gen_sne (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NE (SImode,
	cc0_rtx,
	const0_rtx));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2699 */
rtx
gen_sgt (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (SImode,
	cc0_rtx,
	const0_rtx));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2699 */
rtx
gen_sge (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GE (SImode,
	cc0_rtx,
	const0_rtx));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2699 */
rtx
gen_slt (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LT (SImode,
	cc0_rtx,
	const0_rtx));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2699 */
rtx
gen_sle (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LE (SImode,
	cc0_rtx,
	const0_rtx));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2699 */
rtx
gen_sgtu (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GTU (SImode,
	cc0_rtx,
	const0_rtx));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2699 */
rtx
gen_sgeu (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GEU (SImode,
	cc0_rtx,
	const0_rtx));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2699 */
rtx
gen_sltu (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LTU (SImode,
	cc0_rtx,
	const0_rtx));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2699 */
rtx
gen_sleu (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LEU (SImode,
	cc0_rtx,
	const0_rtx));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2708 */
rtx
gen_smi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		cc0_rtx,
		const0_rtx),
	8));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2717 */
rtx
gen_spl (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		cc0_rtx,
		const0_rtx),
	9));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2733 */
rtx
gen_bmi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (2,
		cc0_rtx,
		const0_rtx),
	8),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2764 */
rtx
gen_bpl (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (2,
		cc0_rtx,
		const0_rtx),
	9),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2795 */
rtx
gen_beq (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_EQ (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2795 */
rtx
gen_bne (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2795 */
rtx
gen_bgt (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GT (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2795 */
rtx
gen_bge (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GE (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2795 */
rtx
gen_blt (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LT (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2795 */
rtx
gen_ble (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LE (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2795 */
rtx
gen_bgtu (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GTU (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2795 */
rtx
gen_bgeu (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GEU (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2795 */
rtx
gen_bltu (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LTU (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2795 */
rtx
gen_bleu (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LEU (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2868 */
rtx
gen_addsicc_cmpdi_reg (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand0,
	gen_rtx_PLUS (SImode,
	operand2,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2868 */
rtx
gen_addhicc_cmpdi_reg (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (HImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand0,
	gen_rtx_PLUS (HImode,
	operand2,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2868 */
rtx
gen_addqicc_cmpdi_reg (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (QImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand0,
	gen_rtx_PLUS (QImode,
	operand2,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2868 */
rtx
gen_addsicc_cmpsi_reg (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand0,
	gen_rtx_PLUS (SImode,
	operand2,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2868 */
rtx
gen_addhicc_cmpsi_reg (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (HImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand0,
	gen_rtx_PLUS (HImode,
	operand2,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2868 */
rtx
gen_addqicc_cmpsi_reg (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (QImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand0,
	gen_rtx_PLUS (QImode,
	operand2,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2868 */
rtx
gen_addsicc_cmphi_reg (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand0,
	gen_rtx_PLUS (SImode,
	operand2,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2868 */
rtx
gen_addhicc_cmphi_reg (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (HImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand0,
	gen_rtx_PLUS (HImode,
	operand2,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2868 */
rtx
gen_addqicc_cmphi_reg (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (QImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand0,
	gen_rtx_PLUS (QImode,
	operand2,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2868 */
rtx
gen_addsicc_cmpqi_reg (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand0,
	gen_rtx_PLUS (SImode,
	operand2,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2868 */
rtx
gen_addhicc_cmpqi_reg (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (HImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand0,
	gen_rtx_PLUS (HImode,
	operand2,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2868 */
rtx
gen_addqicc_cmpqi_reg (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (QImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand0,
	gen_rtx_PLUS (QImode,
	operand2,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2885 */
rtx
gen_addsicc_cmpdi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	gen_rtx_PLUS (SImode,
	operand2,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2885 */
rtx
gen_addhicc_cmpdi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (HImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	gen_rtx_PLUS (HImode,
	operand2,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2885 */
rtx
gen_addqicc_cmpdi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (QImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	gen_rtx_PLUS (QImode,
	operand2,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2885 */
rtx
gen_addsicc_cmpsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	gen_rtx_PLUS (SImode,
	operand2,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2885 */
rtx
gen_addhicc_cmpsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (HImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	gen_rtx_PLUS (HImode,
	operand2,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2885 */
rtx
gen_addqicc_cmpsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (QImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	gen_rtx_PLUS (QImode,
	operand2,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2885 */
rtx
gen_addsicc_cmphi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	gen_rtx_PLUS (SImode,
	operand2,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2885 */
rtx
gen_addhicc_cmphi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (HImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	gen_rtx_PLUS (HImode,
	operand2,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2885 */
rtx
gen_addqicc_cmphi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (QImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	gen_rtx_PLUS (QImode,
	operand2,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2885 */
rtx
gen_addsicc_cmpqi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	gen_rtx_PLUS (SImode,
	operand2,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2885 */
rtx
gen_addhicc_cmpqi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (HImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	gen_rtx_PLUS (HImode,
	operand2,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2885 */
rtx
gen_addqicc_cmpqi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (QImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	gen_rtx_PLUS (QImode,
	operand2,
	operand3)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2925 */
rtx
gen_movsfcc_cmpdi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	operand3));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2925 */
rtx
gen_movsfcc_cmpsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	operand3));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2925 */
rtx
gen_movsfcc_cmphi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	operand3));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2925 */
rtx
gen_movsfcc_cmpqi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	operand3));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2925 */
rtx
gen_movsicc_cmpdi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	operand3));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2925 */
rtx
gen_movsicc_cmpsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	operand3));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2925 */
rtx
gen_movsicc_cmphi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	operand3));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2925 */
rtx
gen_movsicc_cmpqi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	operand3));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2925 */
rtx
gen_movhicc_cmpdi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (HImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	operand3));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2925 */
rtx
gen_movhicc_cmpsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (HImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	operand3));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2925 */
rtx
gen_movhicc_cmphi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (HImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	operand3));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2925 */
rtx
gen_movhicc_cmpqi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (HImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	operand3));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2925 */
rtx
gen_movqicc_cmpdi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (QImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	operand3));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2925 */
rtx
gen_movqicc_cmpsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (QImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	operand3));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2925 */
rtx
gen_movqicc_cmphi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (QImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	operand3));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2925 */
rtx
gen_movqicc_cmpqi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  operand5 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (QImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	operand3));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2959 */
rtx
gen_jump (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2984 */
rtx
gen_call_internal (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand0),
	operand1),
		gen_hard_reg_clobber (SImode, 1)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3110 */
rtx
gen_call_value_internal (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2)),
		gen_hard_reg_clobber (SImode, 1)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3176 */
rtx
gen_return (void)
{
  return gen_rtx_RETURN (VOIDmode);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3188 */
rtx
gen_return_cond (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand0,
	gen_rtx_RETURN (VOIDmode),
	pc_rtx));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3197 */
rtx
gen_return_cond_predicable (void)
{
  return gen_rtx_RETURN (VOIDmode);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3205 */
rtx
gen_return_imm (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (VOIDmode,
	3),
	operand0),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (VOIDmode,
	3)),
		gen_rtx_RETURN (VOIDmode)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3219 */
rtx
gen_return_imm_cond (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (VOIDmode,
	3),
	operand0),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (VOIDmode,
	3)),
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_RETURN (VOIDmode),
	pc_rtx))));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3232 */
rtx
gen_return_imm_predicable (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (VOIDmode,
	3),
	operand0),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (VOIDmode,
	3)),
		gen_rtx_RETURN (VOIDmode)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3242 */
rtx
gen_return_sireg (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (VOIDmode,
	3),
	operand0),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (VOIDmode,
	3)),
		gen_rtx_RETURN (VOIDmode)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3242 */
rtx
gen_return_v2hireg (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (VOIDmode,
	3),
	operand0),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (VOIDmode,
	3)),
		gen_rtx_RETURN (VOIDmode)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3242 */
rtx
gen_return_v4qireg (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (VOIDmode,
	3),
	operand0),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (VOIDmode,
	3)),
		gen_rtx_RETURN (VOIDmode)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3251 */
rtx
gen_return_sireg_cond (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (VOIDmode,
	3),
	operand0),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (VOIDmode,
	3)),
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		cc0_rtx,
		const0_rtx),
	gen_rtx_RETURN (VOIDmode),
	pc_rtx))));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3251 */
rtx
gen_return_v2hireg_cond (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (VOIDmode,
	3),
	operand0),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (VOIDmode,
	3)),
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		cc0_rtx,
		const0_rtx),
	gen_rtx_RETURN (VOIDmode),
	pc_rtx))));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3251 */
rtx
gen_return_v4qireg_cond (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (VOIDmode,
	3),
	operand0),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (VOIDmode,
	3)),
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		cc0_rtx,
		const0_rtx),
	gen_rtx_RETURN (VOIDmode),
	pc_rtx))));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3268 */
rtx
gen_nop (void)
{
  return const0_rtx;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3336 */
rtx
gen_indirect_jump_internal (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3367 */
rtx
gen_tablejump_add (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_PLUS (SImode,
	operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2))),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand3))));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3380 */
rtx
gen_tablejump_insn (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1))));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3444 */
rtx
gen_prefetch (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_PREFETCH (VOIDmode,
	operand0,
	operand1,
	operand2);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3497 */
rtx
gen_eh_return (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	26),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3516 */
rtx
gen_ffssi2 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FFS (SImode,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3544 */
rtx
gen_bswap_16 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (HImode,
	gen_rtx_AND (HImode,
	gen_rtx_LSHIFTRT (HImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	GEN_INT (255L)),
	gen_rtx_ASHIFT (HImode,
	gen_rtx_AND (HImode,
	operand1,
	GEN_INT (255L)),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3586 */
rtx
gen_bswap_32 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	gen_rtx_IOR (SImode,
	gen_rtx_LSHIFTRT (SImode,
	gen_rtx_AND (SImode,
	operand1,
	GEN_INT (-16777216L)),
	const_int_rtx[MAX_SAVED_CONST_INT + (24)]),
	gen_rtx_LSHIFTRT (SImode,
	gen_rtx_AND (SImode,
	operand1,
	GEN_INT (16711680L)),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])),
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFT (SImode,
	gen_rtx_AND (SImode,
	operand1,
	GEN_INT (65280L)),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_ASHIFT (SImode,
	gen_rtx_AND (SImode,
	operand1,
	GEN_INT (255L)),
	const_int_rtx[MAX_SAVED_CONST_INT + (24)]))));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3646 */
rtx
gen_blockage (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	4);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3656 */
rtx
gen_clzsi2 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CLZ (SImode,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3668 */
rtx
gen_ctzsi2 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CTZ (SImode,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3682 */
rtx
gen_cache (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (2,
		operand0,
		operand1),
	1);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3690 */
rtx
gen_sync (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	5);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3700 */
rtx
gen_tlbr (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	6);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3707 */
rtx
gen_tlbw (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	7);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3714 */
rtx
gen_tlbs (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	8);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3724 */
rtx
gen_breakpoint (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	9);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3735 */
rtx
gen_mtsr (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (2,
		operand0,
		operand1),
	2);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3743 */
rtx
gen_mfsr (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	3));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3754 */
rtx
gen_mtdr (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (2,
		operand0,
		operand1),
	10);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3762 */
rtx
gen_mfdr (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	11));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3773 */
rtx
gen_musfr (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	21);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3781 */
rtx
gen_mustr (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		const0_rtx),
	22));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3789 */
rtx
gen_ssrf (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	29);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3797 */
rtx
gen_csrf (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	28);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3808 */
rtx
gen_frs (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	27);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3820 */
rtx
gen_sats (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	17));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3832 */
rtx
gen_satu (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	18));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3844 */
rtx
gen_satrnds (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	19));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3856 */
rtx
gen_satrndu (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	20));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3870 */
rtx
gen_align_4 (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	15);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3880 */
rtx
gen_consttable_start (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	16);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3889 */
rtx
gen_consttable_end (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	17);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3900 */
rtx
gen_consttable_4 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	18);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3925 */
rtx
gen_consttable_8 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	19);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3950 */
rtx
gen_consttable_16 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	20);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3964 */
rtx
gen_cop (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (5,
		operand0,
		operand1,
		operand2,
		operand3,
		operand4),
	14);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3975 */
rtx
gen_mvcrsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	12));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3988 */
rtx
gen_mvcrdi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	12));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4001 */
rtx
gen_mvrcsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	13);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4022 */
rtx
gen_mvrcdi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	13);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4093 */
rtx
gen_sibcall_epilogue (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	0);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4119 */
rtx
gen_ldxi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	operand1,
	gen_rtx_MULT (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand2,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	operand3),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)]))));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4819 */
rtx
gen_vec_setv2hi_hi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	operand0,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	operand1),
	const1_rtx));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4832 */
rtx
gen_vec_setv2hi_lo (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	operand0,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	operand1),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4856 */
rtx
gen_vec_extractv2hi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand2))));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4872 */
rtx
gen_vec_extractv4qi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand2))));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4897 */
rtx
gen_concatv2hi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2HImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:6 */
rtx
gen_sync_compare_and_swapsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	23))));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:30 */
rtx
gen_sync_loadsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand1,
		gen_rtx_LABEL_REF (VOIDmode,
	operand2)),
	24));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:53 */
rtx
gen_sync_store_if_lock (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand1,
		gen_rtx_LABEL_REF (VOIDmode,
	operand2)),
	25));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:236 */
rtx
gen_sync_lock_test_and_setsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	operand2)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:26 */
rtx
gen_addv2hi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2HImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:26 */
rtx
gen_addv4qi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4QImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:39 */
rtx
gen_subv2hi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2HImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:39 */
rtx
gen_subv4qi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V4QImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:49 */
rtx
gen_absv2hi2 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (V2HImode,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:49 */
rtx
gen_absv4qi2 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (V4QImode,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:57 */
rtx
gen_ashlv2hi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V2HImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:57 */
rtx
gen_ashlv4qi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V4QImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:66 */
rtx
gen_ashrv2hi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V2HImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:66 */
rtx
gen_ashrv4qi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V4QImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:75 */
rtx
gen_lshrv2hi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V2HImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:75 */
rtx
gen_lshrv4qi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V4QImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:84 */
rtx
gen_smaxv2hi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V2HImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:94 */
rtx
gen_sminv2hi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V2HImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:104 */
rtx
gen_umaxv4qi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMAX (V4QImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:114 */
rtx
gen_uminv4qi3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMIN (V4QImode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:125 */
rtx
gen_addsubv2hi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_PLUS (HImode,
	operand1,
	operand2),
	gen_rtx_MINUS (HImode,
	operand1,
	operand2)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/simd.md:136 */
rtx
gen_subaddv2hi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_MINUS (HImode,
	operand1,
	operand2),
	gen_rtx_PLUS (HImode,
	operand1,
	operand2)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:130 */
rtx
gen_mulsf3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SFmode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:139 */
rtx
gen_nmulsf3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SFmode,
	gen_rtx_MULT (SFmode,
	operand1,
	operand2)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:162 */
rtx
gen_macsf3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SFmode,
	gen_rtx_MULT (SFmode,
	operand1,
	operand2),
	operand3));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:172 */
rtx
gen_nmacsf3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SFmode,
	gen_rtx_NEG (SFmode,
	gen_rtx_MULT (SFmode,
	operand1,
	operand2)),
	operand3));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:198 */
rtx
gen_msubacsf3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SFmode,
	gen_rtx_MULT (SFmode,
	operand1,
	operand2),
	operand3));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:223 */
rtx
gen_nmsubacsf3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SFmode,
	gen_rtx_NEG (SFmode,
	gen_rtx_MULT (SFmode,
	operand1,
	operand2)),
	operand3));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:235 */
rtx
gen_addsf3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SFmode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:244 */
rtx
gen_subsf3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SFmode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:254 */
rtx
gen_negsf2 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SFmode,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:262 */
rtx
gen_abssf2 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (SFmode,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:270 */
rtx
gen_truncdfsf2 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:279 */
rtx
gen_extendsfdf2 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (DFmode,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:288 */
rtx
gen_muldf3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DFmode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:297 */
rtx
gen_nmuldf3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DFmode,
	gen_rtx_MULT (DFmode,
	operand1,
	operand2)));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:319 */
rtx
gen_macdf3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DFmode,
	gen_rtx_MULT (DFmode,
	operand1,
	operand2),
	operand3));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:329 */
rtx
gen_msubacdf3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DFmode,
	gen_rtx_MULT (DFmode,
	operand1,
	operand2),
	operand3));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:354 */
rtx
gen_nmsubacdf3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DFmode,
	gen_rtx_NEG (DFmode,
	gen_rtx_MULT (DFmode,
	operand1,
	operand2)),
	operand3));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:364 */
rtx
gen_nmacdf3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DFmode,
	gen_rtx_NEG (DFmode,
	gen_rtx_MULT (DFmode,
	operand1,
	operand2)),
	operand3));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:389 */
rtx
gen_adddf3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DFmode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:398 */
rtx
gen_subdf3 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DFmode,
	operand1,
	operand2));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:407 */
rtx
gen_negdf2 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DFmode,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:415 */
rtx
gen_absdf2 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (DFmode,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:451 */
rtx
gen_cmpdf_internal (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:493 */
rtx
gen_cmpsf_internal (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:508 */
rtx
gen_fpcc_to_reg (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_REG (CCmode,
	17)),
	14));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:517 */
rtx
gen_reg_to_cc (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  return gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand0),
	15));
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:527 */
rtx
gen_stm_fp (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  return gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	13);
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:375 */
rtx
gen_movqi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 379 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( !no_new_pseudos ){
     if (GET_CODE (operands[1]) == MEM && optimize){
         rtx reg = gen_reg_rtx (SImode);

         emit_insn (gen_zero_extendqisi2 (reg, operands[1]));
         operands[1] = gen_lowpart (QImode, reg);
     }

     /* One of the ops has to be in a register.  */
     if (GET_CODE (operands[0]) == MEM)
       operands[1] = force_reg (QImode, operands[1]);
   }

  }
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:411 */
rtx
gen_movhi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 415 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( !no_new_pseudos ){
     if (GET_CODE (operands[1]) == MEM && optimize){
         rtx reg = gen_reg_rtx (SImode);

         emit_insn (gen_extendhisi2 (reg, operands[1]));
         operands[1] = gen_lowpart (HImode, reg);
     }

     /* One of the ops has to be in a register.  */
     if (GET_CODE (operands[0]) == MEM)
       operands[1] = force_reg (HImode, operands[1]);
   }

  }
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:448 */
rtx
gen_movmisalignsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 452 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
  }
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:457 */
rtx
gen_movsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 461 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{

    /* One of the ops has to be in a register.  */
    if (GET_CODE (operands[0]) == MEM)
      operands[1] = force_reg (SImode, operands[1]);


    /* Check for out of range immediate constants as these may
       occur during reloading, since it seems like reload does
       not check if the immediate is legitimate. Don't know if
       this is a bug? */
    if ( reload_in_progress
         && avr32_imm_in_const_pool
         && GET_CODE(operands[1]) == CONST_INT
         && !avr32_const_ok_for_constraint_p(INTVAL(operands[1]), 'K', "Ks21") ){
        operands[1] = force_const_mem(SImode, operands[1]);
    }

    if ( (flag_pic || TARGET_HAS_ASM_ADDR_PSEUDOS)
         && !avr32_legitimate_pic_operand_p(operands[1]) )
      operands[1] = legitimize_pic_address (operands[1], SImode,
                                            (no_new_pseudos ? operands[0] : 0));
    else if ( flag_pic && avr32_address_operand(operands[1], GET_MODE(operands[1])) )
      /* If we have an address operand then this function uses the pic register. */
      current_function_uses_pic_offset_table = 1;
  }
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:457 */
rtx
gen_movv2hi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 461 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{

    /* One of the ops has to be in a register.  */
    if (GET_CODE (operands[0]) == MEM)
      operands[1] = force_reg (V2HImode, operands[1]);


    /* Check for out of range immediate constants as these may
       occur during reloading, since it seems like reload does
       not check if the immediate is legitimate. Don't know if
       this is a bug? */
    if ( reload_in_progress
         && avr32_imm_in_const_pool
         && GET_CODE(operands[1]) == CONST_INT
         && !avr32_const_ok_for_constraint_p(INTVAL(operands[1]), 'K', "Ks21") ){
        operands[1] = force_const_mem(SImode, operands[1]);
    }

    if ( (flag_pic || TARGET_HAS_ASM_ADDR_PSEUDOS)
         && !avr32_legitimate_pic_operand_p(operands[1]) )
      operands[1] = legitimize_pic_address (operands[1], V2HImode,
                                            (no_new_pseudos ? operands[0] : 0));
    else if ( flag_pic && avr32_address_operand(operands[1], GET_MODE(operands[1])) )
      /* If we have an address operand then this function uses the pic register. */
      current_function_uses_pic_offset_table = 1;
  }
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:457 */
rtx
gen_movv4qi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 461 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{

    /* One of the ops has to be in a register.  */
    if (GET_CODE (operands[0]) == MEM)
      operands[1] = force_reg (V4QImode, operands[1]);


    /* Check for out of range immediate constants as these may
       occur during reloading, since it seems like reload does
       not check if the immediate is legitimate. Don't know if
       this is a bug? */
    if ( reload_in_progress
         && avr32_imm_in_const_pool
         && GET_CODE(operands[1]) == CONST_INT
         && !avr32_const_ok_for_constraint_p(INTVAL(operands[1]), 'K', "Ks21") ){
        operands[1] = force_const_mem(SImode, operands[1]);
    }

    if ( (flag_pic || TARGET_HAS_ASM_ADDR_PSEUDOS)
         && !avr32_legitimate_pic_operand_p(operands[1]) )
      operands[1] = legitimize_pic_address (operands[1], V4QImode,
                                            (no_new_pseudos ? operands[0] : 0));
    else if ( flag_pic && avr32_address_operand(operands[1], GET_MODE(operands[1])) )
      /* If we have an address operand then this function uses the pic register. */
      current_function_uses_pic_offset_table = 1;
  }
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:600 */
rtx
gen_movdi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 604 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{

    /* One of the ops has to be in a register.  */
    if (GET_CODE (operands[0]) != REG)
      operands[1] = force_reg (DImode, operands[1]);

  }
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:613 */
extern rtx gen_split_370 (rtx, rtx *);
rtx
gen_split_370 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 645 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
    operands[2] = gen_highpart (SImode, operands[0]);
    operands[0] = gen_lowpart (SImode, operands[0]);
    if ( REG_P(operands[1]) ){
      operands[3] = gen_highpart(SImode, operands[1]);
      operands[1] = gen_lowpart(SImode, operands[1]);
    } else if ( GET_CODE(operands[1]) == CONST_DOUBLE 
                || GET_CODE(operands[1]) == CONST_INT ){
      rtx split_const[2];
      avr32_split_const_expr (DImode, SImode, operands[1], split_const);
      operands[3] = split_const[1];
      operands[1] = split_const[0];
    } else {
      internal_error("Illegal operand[1] for movdi split!");
    }
  }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:668 */
rtx
gen_movti (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 672 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{     
        
    /* One of the ops has to be in a register.  */
    if (GET_CODE (operands[0]) != REG)
      operands[1] = force_reg (TImode, operands[1]);

    /* We must fix any pre_dec for loads and post_inc stores */
    if ( GET_CODE (operands[0]) == MEM
         && GET_CODE (XEXP(operands[0],0)) == POST_INC ){
       emit_move_insn(gen_rtx_MEM(TImode, XEXP(XEXP(operands[0],0),0)), operands[1]);
       emit_insn(gen_addsi3(XEXP(XEXP(operands[0],0),0), XEXP(XEXP(operands[0],0),0), GEN_INT(GET_MODE_SIZE(TImode))));
       DONE;
    }

    if ( GET_CODE (operands[1]) == MEM
         && GET_CODE (XEXP(operands[1],0)) == PRE_DEC ){
       emit_insn(gen_addsi3(XEXP(XEXP(operands[1],0),0), XEXP(XEXP(operands[1],0),0), GEN_INT(-GET_MODE_SIZE(TImode))));
       emit_move_insn(operands[0], gen_rtx_MEM(TImode, XEXP(XEXP(operands[1],0),0)));
       DONE;
    }
  }
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:695 */
extern rtx gen_split_372 (rtx, rtx *);
rtx
gen_split_372 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 733 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
    operands[2] = simplify_gen_subreg ( DImode, operands[0], 
                                        TImode, 0 );
    operands[0] = simplify_gen_subreg ( DImode, operands[0], 
                                        TImode, 8 );
    if ( REG_P(operands[1]) ){
      operands[3] = simplify_gen_subreg ( DImode, operands[1], 
                                          TImode, 0 );
      operands[1] = simplify_gen_subreg ( DImode, operands[1], 
                                          TImode, 8 );
    } else if ( GET_CODE(operands[1]) == CONST_DOUBLE 
                || GET_CODE(operands[1]) == CONST_INT ){
      rtx split_const[2];
      avr32_split_const_expr (TImode, DImode, operands[1], split_const);
      operands[3] = split_const[1];
      operands[1] = split_const[0];
    } else if (avr32_const_pool_ref_operand (operands[1], GET_MODE(operands[1]))){
      rtx split_const[2];
      rtx cop = avoid_constant_pool_reference (operands[1]);
      if (operands[1] == cop)
        cop = get_pool_constant (XEXP (operands[1], 0));
      avr32_split_const_expr (TImode, DImode, cop, split_const);
      operands[3] = force_const_mem (DImode, split_const[1]); 
      operands[1] = force_const_mem (DImode, split_const[0]); 
   } else {
      rtx ptr_reg = XEXP (operands[1], 0);
      operands[1] = gen_rtx_MEM (DImode, 
                                 gen_rtx_PLUS ( SImode,
                                                ptr_reg,
                                                GEN_INT (8) ));
      operands[3] = gen_rtx_MEM (DImode,
                                 ptr_reg);
              
      /* Check if the first load will clobber the pointer.
         If so, we must switch the order of the operations. */
      if ( reg_overlap_mentioned_p (operands[0], ptr_reg) )
        {
          /* We need to switch the order of the operations
             so that the pointer register does not get clobbered
             after the first double word load. */
          rtx tmp;
          tmp = operands[0];
          operands[0] = operands[2];
          operands[2] = tmp;
          tmp = operands[1];
          operands[1] = operands[3];
          operands[3] = tmp;
        }


   }
  }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:790 */
rtx
gen_movsf (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 794 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{


    /* One of the ops has to be in a register.  */
    if (GET_CODE (operands[0]) != REG)
      operands[1] = force_reg (SFmode, operands[1]);

  }
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:858 */
rtx
gen_movdf (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 862 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
    /* One of the ops has to be in a register.  */
    if (GET_CODE (operands[0]) != REG){
      operands[1] = force_reg (DFmode, operands[1]);
    }
  }
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:870 */
extern rtx gen_split_375 (rtx, rtx *);
rtx
gen_split_375 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 900 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

   {
    operands[2] = gen_highpart (SImode, operands[0]);
    operands[0] = gen_lowpart (SImode, operands[0]);
    operands[3] = gen_highpart(SImode, operands[1]);
    operands[1] = gen_lowpart(SImode, operands[1]);
   }
  
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:956 */
rtx
gen_movmemsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 962 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

   if (avr32_gen_movmemsi (operands))
     DONE;
   FAIL;
  
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:991 */
rtx
gen_extv (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 997 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( INTVAL(operands[2]) >= 32 )
      FAIL;
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1003 */
rtx
gen_extzv (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 1009 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( INTVAL(operands[2]) >= 32 )
      FAIL;
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1045 */
extern rtx gen_peephole2_379 (rtx, rtx *);
rtx
gen_peephole2_379 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand2,
	operand3,
	operand4),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1060 */
extern rtx gen_peephole2_380 (rtx, rtx *);
rtx
gen_peephole2_380 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand2,
	operand3,
	operand4),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1198 */
extern rtx gen_peephole2_381 (rtx, rtx *);
rtx
gen_peephole2_381 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (SImode,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2),
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1213 */
extern rtx gen_peephole2_382 (rtx, rtx *);
rtx
gen_peephole2_382 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (SImode,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2),
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1393 */
extern rtx gen_peephole2_383 (rtx, rtx *);
rtx
gen_peephole2_383 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[6] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 1411 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
     operands[4] = gen_rtx_REG(SImode, REGNO(operands[1]));
     operands[5] = gen_highpart (SImode, operands[4]);
   }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_ASHIFT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	copy_rtx (operand4)),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1503 */
extern rtx gen_peephole2_384 (rtx, rtx *);
rtx
gen_peephole2_384 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 1519 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{operands[5] = gen_rtx_REG(SImode, REGNO(operands[2]));}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (SImode,
	operand2))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand3), GET_MODE (operand3),
		copy_rtx (operand5),
		operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1724 */
extern rtx gen_split_385 (rtx, rtx *);
rtx
gen_split_385 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 1732 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  {
    operands[3] = gen_highpart (SImode, operands[0]);
    operands[0] = gen_lowpart (SImode, operands[0]);
    operands[4] = gen_highpart (SImode, operands[1]);
    operands[1] = gen_lowpart (SImode, operands[1]);
    operands[5] = gen_highpart (SImode, operands[2]);
    operands[2] = gen_lowpart (SImode, operands[2]);
  }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand6), SImode,
		operand1,
		operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_fmt_ee (GET_CODE (operand6), SImode,
		operand4,
		operand5)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1806 */
extern rtx gen_peephole2_392 (rtx, rtx *);
rtx
gen_peephole2_392 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 1820 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_AND (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand5), SImode,
		operand1,
		operand2),
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1806 */
extern rtx gen_peephole2_393 (rtx, rtx *);
rtx
gen_peephole2_393 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 1820 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_IOR (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand5), SImode,
		operand1,
		operand2),
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1806 */
extern rtx gen_peephole2_394 (rtx, rtx *);
rtx
gen_peephole2_394 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 1820 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_XOR (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand5), SImode,
		operand1,
		operand2),
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1823 */
extern rtx gen_peephole2_395 (rtx, rtx *);
rtx
gen_peephole2_395 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 1837 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_AND (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand5), SImode,
		operand1,
		operand2),
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1823 */
extern rtx gen_peephole2_396 (rtx, rtx *);
rtx
gen_peephole2_396 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 1837 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_IOR (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand5), SImode,
		operand1,
		operand2),
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:1823 */
extern rtx gen_peephole2_397 (rtx, rtx *);
rtx
gen_peephole2_397 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 1837 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_XOR (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand5), SImode,
		operand1,
		operand2),
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
extern rtx gen_split_398 (rtx, rtx *);
rtx
gen_split_398 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
extern rtx gen_split_399 (rtx, rtx *);
rtx
gen_split_399 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
extern rtx gen_split_400 (rtx, rtx *);
rtx
gen_split_400 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
extern rtx gen_split_401 (rtx, rtx *);
rtx
gen_split_401 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
extern rtx gen_split_402 (rtx, rtx *);
rtx
gen_split_402 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
extern rtx gen_split_403 (rtx, rtx *);
rtx
gen_split_403 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
extern rtx gen_split_404 (rtx, rtx *);
rtx
gen_split_404 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
extern rtx gen_split_405 (rtx, rtx *);
rtx
gen_split_405 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
extern rtx gen_split_406 (rtx, rtx *);
rtx
gen_split_406 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
extern rtx gen_split_407 (rtx, rtx *);
rtx
gen_split_407 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
extern rtx gen_split_408 (rtx, rtx *);
rtx
gen_split_408 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
extern rtx gen_split_409 (rtx, rtx *);
rtx
gen_split_409 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
extern rtx gen_split_410 (rtx, rtx *);
rtx
gen_split_410 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
extern rtx gen_split_411 (rtx, rtx *);
rtx
gen_split_411 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2029 */
extern rtx gen_split_412 (rtx, rtx *);
rtx
gen_split_412 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2082 */
extern rtx gen_split_413 (rtx, rtx *);
rtx
gen_split_413 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 2108 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2114 */
extern rtx gen_split_414 (rtx, rtx *);
rtx
gen_split_414 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 2140 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2146 */
extern rtx gen_split_415 (rtx, rtx *);
rtx
gen_split_415 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 2172 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2182 */
rtx
gen_divmodsi4 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand4;
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 2193 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
    if (! no_new_pseudos) {
      operands[4] = gen_reg_rtx (DImode);

      emit_insn(gen_divmodsi4_internal(operands[4],operands[1],operands[2]));
      emit_move_insn(operands[0], gen_rtx_SUBREG( SImode, operands[4], 4));
      emit_move_insn(operands[3], gen_rtx_SUBREG( SImode, operands[4], 0));

      DONE;
    } else {
      FAIL;
    }

  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MOD (SImode,
	operand1,
	operand2)))),
		gen_rtx_USE (VOIDmode,
	operand4))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2225 */
rtx
gen_udivmodsi4 (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand4;
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 2236 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
    if (! no_new_pseudos) {
      operands[4] = gen_reg_rtx (DImode);

      emit_insn(gen_udivmodsi4_internal(operands[4],operands[1],operands[2]));
      emit_move_insn(operands[0], gen_rtx_SUBREG( SImode, operands[4], 4));
      emit_move_insn(operands[3], gen_rtx_SUBREG( SImode, operands[4], 0));

      DONE;
    } else {
      FAIL;
    }
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UMOD (SImode,
	operand1,
	operand2)))),
		gen_rtx_USE (VOIDmode,
	operand4))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2403 */
rtx
gen_cmpdi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2409 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   avr32_compare_op0 = operands[0];
   avr32_compare_op1 = operands[1];
  }
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (DImode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2403 */
rtx
gen_cmpsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2409 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   avr32_compare_op0 = operands[0];
   avr32_compare_op1 = operands[1];
  }
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (SImode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2403 */
rtx
gen_cmphi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2409 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   avr32_compare_op0 = operands[0];
   avr32_compare_op1 = operands[1];
  }
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (HImode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2403 */
rtx
gen_cmpqi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2409 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   avr32_compare_op0 = operands[0];
   avr32_compare_op1 = operands[1];
  }
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (QImode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2437 */
rtx
gen_tstsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 2441 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   avr32_compare_op0 = operands[0];
   avr32_compare_op1 = const0_rtx;
  }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2461 */
rtx
gen_tstdi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 2465 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   avr32_compare_op0 = operands[0];
   avr32_compare_op1 = const0_rtx;
  }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2837 */
rtx
gen_addsicc (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 2847 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( !(GET_CODE (operands[3]) == CONST_INT
          || (TARGET_V2_INSNS && REG_P(operands[3]))) ){
      FAIL;
   }

   /* Delete compare instruction as it is merged into this instruction */
   remove_insn (get_last_insn_anywhere ());

   operands[4] = avr32_compare_op0;
   operands[5] = avr32_compare_op1;
   
   if ( TARGET_V2_INSNS 
        && REG_P(operands[3]) 
        && REGNO(operands[0]) != REGNO(operands[2]) ){
       emit_move_insn (operands[0], operands[2]);
       operands[2] = operands[0];
   }
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	gen_rtx_PLUS (SImode,
	operand2,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2837 */
rtx
gen_addhicc (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 2847 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( !(GET_CODE (operands[3]) == CONST_INT
          || (TARGET_V2_INSNS && REG_P(operands[3]))) ){
      FAIL;
   }

   /* Delete compare instruction as it is merged into this instruction */
   remove_insn (get_last_insn_anywhere ());

   operands[4] = avr32_compare_op0;
   operands[5] = avr32_compare_op1;
   
   if ( TARGET_V2_INSNS 
        && REG_P(operands[3]) 
        && REGNO(operands[0]) != REGNO(operands[2]) ){
       emit_move_insn (operands[0], operands[2]);
       operands[2] = operands[0];
   }
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (HImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	gen_rtx_PLUS (HImode,
	operand2,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2837 */
rtx
gen_addqicc (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 2847 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   if ( !(GET_CODE (operands[3]) == CONST_INT
          || (TARGET_V2_INSNS && REG_P(operands[3]))) ){
      FAIL;
   }

   /* Delete compare instruction as it is merged into this instruction */
   remove_insn (get_last_insn_anywhere ());

   operands[4] = avr32_compare_op0;
   operands[5] = avr32_compare_op1;
   
   if ( TARGET_V2_INSNS 
        && REG_P(operands[3]) 
        && REGNO(operands[0]) != REGNO(operands[2]) ){
       emit_move_insn (operands[0], operands[2]);
       operands[2] = operands[0];
   }
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (QImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	gen_rtx_PLUS (QImode,
	operand2,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2907 */
rtx
gen_movsfcc (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 2915 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   /* Delete compare instruction as it is merged into this instruction */
   remove_insn (get_last_insn_anywhere ());

   operands[4] = avr32_compare_op0;
   operands[5] = avr32_compare_op1;
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2907 */
rtx
gen_movsicc (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 2915 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   /* Delete compare instruction as it is merged into this instruction */
   remove_insn (get_last_insn_anywhere ());

   operands[4] = avr32_compare_op0;
   operands[5] = avr32_compare_op1;
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2907 */
rtx
gen_movhicc (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 2915 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   /* Delete compare instruction as it is merged into this instruction */
   remove_insn (get_last_insn_anywhere ());

   operands[4] = avr32_compare_op0;
   operands[5] = avr32_compare_op1;
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (HImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:2907 */
rtx
gen_movqicc (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 2915 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   /* Delete compare instruction as it is merged into this instruction */
   remove_insn (get_last_insn_anywhere ());

   operands[4] = avr32_compare_op0;
   operands[5] = avr32_compare_op1;
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (QImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3011 */
rtx
gen_call (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3016 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
   rtx call_address;
   if ( GET_CODE(operands[0]) != MEM )
      FAIL;

   call_address = XEXP(operands[0], 0);

   /* If assembler supports call pseudo insn and the call
      address is a symbol then nothing special needs to be done. */
   if ( TARGET_HAS_ASM_ADDR_PSEUDOS
        && (GET_CODE(call_address) == SYMBOL_REF) ){
      /* We must however mark the function as using the GOT if
         flag_pic is set, since the call insn might turn into
         a mcall using the GOT ptr register. */
      if ( flag_pic ){
         current_function_uses_pic_offset_table = 1;
         emit_call_insn(gen_call_internal(call_address, operands[1]));
         DONE;
      }
   } else {
     if ( flag_pic &&
          GET_CODE(call_address) == SYMBOL_REF ){
       current_function_uses_pic_offset_table = 1;
       emit_call_insn(gen_call_internal(call_address, operands[1]));
       DONE;
     }

     if ( !SYMBOL_REF_RCALL_FUNCTION_P(operands[0]) ){
       if ( optimize_size &&
             GET_CODE(call_address) == SYMBOL_REF ){
         call_address = force_const_mem(SImode, call_address);
       } else {
         call_address = force_reg(SImode, call_address);
       }
     }
   }
   emit_call_insn(gen_call_internal(call_address, operands[1]));
   DONE;
  }
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_CALL (VOIDmode,
	operand0,
	operand1),
		gen_hard_reg_clobber (SImode, 1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3062 */
rtx
gen_call_value (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3068 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
    rtx call_address;
    if ( GET_CODE(operands[1]) != MEM )
      FAIL;

    call_address = XEXP(operands[1], 0);

    /* If assembler supports call pseudo insn and the call
       address is a symbol then nothing special needs to be done. */
    if ( TARGET_HAS_ASM_ADDR_PSEUDOS
         && (GET_CODE(call_address) == SYMBOL_REF) ){
       /* We must however mark the function as using the GOT if
          flag_pic is set, since the call insn might turn into
          a mcall using the GOT ptr register. */
       if ( flag_pic ) {
          current_function_uses_pic_offset_table = 1;
          emit_call_insn(gen_call_value_internal(operands[0], call_address, operands[2]));
          DONE;
       }
    } else {
      if ( flag_pic &&
           GET_CODE(call_address) == SYMBOL_REF ){
        current_function_uses_pic_offset_table = 1;
        emit_call_insn(gen_call_value_internal(operands[0], call_address, operands[2]));
        DONE;
      }

      if ( !SYMBOL_REF_RCALL_FUNCTION_P(operands[1]) ){
        if ( optimize_size &&
             GET_CODE(call_address) == SYMBOL_REF){
          call_address = force_const_mem(SImode, call_address);
        } else {
          call_address = force_reg(SImode, call_address);
        }
      }
    }
    emit_call_insn(gen_call_value_internal(operands[0], call_address,
                                           operands[2]));
    DONE;

   }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (SImode, 1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3146 */
rtx
gen_untyped_call (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3152 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
    int i;

    emit_call_insn (GEN_CALL (operands[0], const0_rtx, NULL, const0_rtx));

    for (i = 0; i < XVECLEN (operands[2], 0); i++) {
      rtx set = XVECEXP (operands[2], 0, i);
      emit_move_insn (SET_DEST (set), SET_SRC (set));
    }

    /* The optimizer does not know that the call sets the function value
       registers we stored in the result block.  We avoid problems by
       claiming that all hard registers are used and clobbered at this
       point.  */
    emit_insn (gen_blockage ());

    DONE;
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_CALL (VOIDmode,
	operand0,
	const0_rtx),
		operand1,
		operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3282 */
rtx
gen_nonlocal_goto_receiver (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 3285 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

   {
    emit_insn ( gen_frs() );
    DONE;
   }
  
  }
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3301 */
rtx
gen_builtin_setjmp_receiver (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 3304 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

   {
    if ( TARGET_RETURN_STACK ) 
     emit_insn ( gen_frs() );

    avr32_load_pic_register ();
    DONE;
   }
  
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_LABEL_REF (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3321 */
rtx
gen_indirect_jump (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 3325 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{
    /* One of the ops has to be in a register.  */
    if ( (flag_pic || TARGET_HAS_ASM_ADDR_PSEUDOS )
         && !avr32_legitimate_pic_operand_p(operands[0]) )
      operands[0] = legitimize_pic_address (operands[0], SImode, 0);
    else if ( flag_pic && avr32_address_operand(operands[0], GET_MODE(operands[0])) )
      /* If we have an address operand then this function uses the pic register. */
      current_function_uses_pic_offset_table = 1;
  }
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3389 */
rtx
gen_casesi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  operand3 = va_arg(args, rtx);
  operand4 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
#line 3396 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  {
    rtx reg;
    rtx index = operands[0];
    rtx low_bound = operands[1];
    rtx range = operands[2];
    rtx table_label = operands[3];
    rtx oor_label = operands[4];

    index = force_reg ( SImode, index );
    if (low_bound != const0_rtx)
      {
        if (!avr32_const_ok_for_constraint_p(INTVAL (low_bound), 'I', "Is21")){
          reg = force_reg(SImode, GEN_INT (INTVAL (low_bound)));
	  emit_insn (gen_subsi3 (reg, index,
			         reg));
        } else {
          reg = gen_reg_rtx (SImode);
          emit_insn (gen_addsi3 (reg, index,
		         	 GEN_INT (-INTVAL (low_bound))));
        }
	index = reg;
      }

    if (!avr32_const_ok_for_constraint_p (INTVAL (range), 'K', "Ks21"))
      range = force_reg (SImode, range);

    emit_cmp_and_jump_insns ( index, range, GTU, NULL_RTX, SImode, 1, oor_label );
    reg = gen_reg_rtx (SImode);
    emit_move_insn ( reg, gen_rtx_LABEL_REF (VOIDmode, table_label));

    if ( flag_pic ) 
       emit_jump_insn ( gen_tablejump_add ( reg, index, GEN_INT(4), table_label));
    else
       emit_jump_insn ( 
           gen_tablejump_insn ( gen_rtx_MEM ( SImode, 
                                              gen_rtx_PLUS ( SImode, 
                                                             reg, 
                                                             gen_rtx_MULT ( SImode, 
                                                                            index, 
                                                                            GEN_INT(4)))),
                                table_label));
    DONE;
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  emit (operand4);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3466 */
rtx
gen_prologue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 3469 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  avr32_expand_prologue();
  DONE;
  
  }
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3497 */
extern rtx gen_split_439 (rtx, rtx *);
rtx
gen_split_439 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 3505 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  {
    avr32_set_return_address (operands[0], operands[1]);
    DONE;
  }
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3544 */
extern rtx gen_split_440 (rtx, rtx *);
rtx
gen_split_440 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 3580 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_IOR (HImode,
	gen_rtx_AND (HImode,
	gen_rtx_LSHIFTRT (HImode,
	copy_rtx (operand0),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	GEN_INT (255L)),
	gen_rtx_ASHIFT (HImode,
	gen_rtx_AND (HImode,
	copy_rtx (operand0),
	GEN_INT (255L)),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:3586 */
extern rtx gen_split_441 (rtx, rtx *);
rtx
gen_split_441 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 3633 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_IOR (SImode,
	gen_rtx_IOR (SImode,
	gen_rtx_LSHIFTRT (SImode,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	GEN_INT (-16777216L)),
	const_int_rtx[MAX_SAVED_CONST_INT + (24)]),
	gen_rtx_LSHIFTRT (SImode,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	GEN_INT (16711680L)),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])),
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFT (SImode,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	GEN_INT (65280L)),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_ASHIFT (SImode,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	GEN_INT (255L)),
	const_int_rtx[MAX_SAVED_CONST_INT + (24)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4051 */
rtx
gen_epilogue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 4054 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  if (USE_RETURN_INSN (FALSE)){
      emit_jump_insn (gen_return ());
      DONE;
  }
  emit_jump_insn (gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		gen_rtx_RETURN (VOIDmode)),
	VUNSPEC_EPILOGUE));
  DONE;
  
  }
  emit_insn (gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		gen_rtx_RETURN (VOIDmode)),
	0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4167 */
extern rtx gen_peephole2_443 (rtx, rtx *);
rtx
gen_peephole2_443 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 4180 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))),
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4197 */
extern rtx gen_peephole2_444 (rtx, rtx *);
rtx
gen_peephole2_444 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 4210 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4221 */
extern rtx gen_peephole2_445 (rtx, rtx *);
rtx
gen_peephole2_445 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 4229 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4240 */
extern rtx gen_peephole2_446 (rtx, rtx *);
rtx
gen_peephole2_446 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 4248 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4259 */
extern rtx gen_peephole2_447 (rtx, rtx *);
rtx
gen_peephole2_447 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 4267 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4278 */
extern rtx gen_peephole2_448 (rtx, rtx *);
rtx
gen_peephole2_448 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 4286 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4299 */
extern rtx gen_peephole2_449 (rtx, rtx *);
rtx
gen_peephole2_449 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 4311 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	operand1,
	operand2),
	copy_rtx (operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4313 */
extern rtx gen_peephole2_450 (rtx, rtx *);
rtx
gen_peephole2_450 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 4325 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	operand1,
	operand2),
	copy_rtx (operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4338 */
extern rtx gen_peephole2_451 (rtx, rtx *);
rtx
gen_peephole2_451 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 4349 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
operands[2] = GEN_INT(1 << INTVAL(operands[2]));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_AND (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4351 */
extern rtx gen_peephole2_452 (rtx, rtx *);
rtx
gen_peephole2_452 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 4361 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_AND (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4418 */
extern rtx gen_peephole2_455 (rtx, rtx *);
rtx
gen_peephole2_455 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	operand4,
	gen_rtx_MULT (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	operand2),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4438 */
extern rtx gen_peephole2_456 (rtx, rtx *);
rtx
gen_peephole2_456 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 4454 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
operands[1] = gen_rtx_REG(SImode, REGNO(operands[1]));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	operand3,
	gen_rtx_MULT (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const0_rtx),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4458 */
extern rtx gen_peephole2_457 (rtx, rtx *);
rtx
gen_peephole2_457 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 4475 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	operand3,
	gen_rtx_MULT (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const0_rtx),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4480 */
extern rtx gen_peephole2_458 (rtx, rtx *);
rtx
gen_peephole2_458 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 4497 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	operand3,
	gen_rtx_MULT (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (24)]),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4507 */
extern rtx gen_peephole2_459 (rtx, rtx *);
rtx
gen_peephole2_459 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 4519 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_AND (SImode,
	copy_rtx (operand2),
	gen_rtx_NOT (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4522 */
extern rtx gen_peephole2_460 (rtx, rtx *);
rtx
gen_peephole2_460 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 4536 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_AND (SImode,
	copy_rtx (operand2),
	gen_rtx_NOT (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4586 */
extern rtx gen_peephole2_463 (rtx, rtx *);
rtx
gen_peephole2_463 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand1),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4650 */
extern rtx gen_peephole2_467 (rtx, rtx *);
rtx
gen_peephole2_467 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 4660 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2),
		gen_hard_reg_clobber (SImode, 1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4663 */
extern rtx gen_peephole2_468 (rtx, rtx *);
rtx
gen_peephole2_468 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 4675 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand3)),
		gen_hard_reg_clobber (SImode, 1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4784 */
extern rtx gen_peephole2_473 (rtx, rtx *);
rtx
gen_peephole2_473 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 4796 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_NEG (HImode,
	operand1)),
	gen_rtx_SIGN_EXTEND (SImode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4799 */
extern rtx gen_peephole2_474 (rtx, rtx *);
rtx
gen_peephole2_474 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 4811 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_NEG (HImode,
	operand1)),
	gen_rtx_SIGN_EXTEND (SImode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md:4845 */
rtx
gen_vec_setv2hi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 4853 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
{ operands[2] = GEN_INT(INTVAL(operands[2]) + 1); }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	operand0,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	operand1),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:67 */
rtx
gen_sync_addsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
#line 84 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md"
{
   rtx *mem_expr = &operands[0];
   rtx ptr_reg;
   if ( !avr32_ks16_memory_operand (*mem_expr, GET_MODE (*mem_expr)) )
    {
      ptr_reg = force_reg (Pmode, XEXP (*mem_expr, 0));
      XEXP (*mem_expr, 0) = ptr_reg;
    } 
   else 
    {
      rtx address = XEXP (*mem_expr, 0);
      if ( REG_P (address) )
         ptr_reg = address;
      else if ( REG_P (XEXP (address, 0)) ) 
         ptr_reg = XEXP (address, 0);
      else 
         ptr_reg = XEXP (address, 1);
    }

   operands[2] = gen_reg_rtx (SImode);
   operands[3] = gen_rtx_LABEL_REF(Pmode, gen_label_rtx ());
   operands[4] = ptr_reg;   

  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand3),
	24)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_PLUS (SImode,
	operand2,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand2,
		operand3),
	25)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand4));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:67 */
rtx
gen_sync_subsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
#line 84 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md"
{
   rtx *mem_expr = &operands[0];
   rtx ptr_reg;
   if ( !avr32_ks16_memory_operand (*mem_expr, GET_MODE (*mem_expr)) )
    {
      ptr_reg = force_reg (Pmode, XEXP (*mem_expr, 0));
      XEXP (*mem_expr, 0) = ptr_reg;
    } 
   else 
    {
      rtx address = XEXP (*mem_expr, 0);
      if ( REG_P (address) )
         ptr_reg = address;
      else if ( REG_P (XEXP (address, 0)) ) 
         ptr_reg = XEXP (address, 0);
      else 
         ptr_reg = XEXP (address, 1);
    }

   operands[2] = gen_reg_rtx (SImode);
   operands[3] = gen_rtx_LABEL_REF(Pmode, gen_label_rtx ());
   operands[4] = ptr_reg;   

  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand3),
	24)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_MINUS (SImode,
	operand2,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand2,
		operand3),
	25)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand4));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:67 */
rtx
gen_sync_andsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
#line 84 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md"
{
   rtx *mem_expr = &operands[0];
   rtx ptr_reg;
   if ( !avr32_ks16_memory_operand (*mem_expr, GET_MODE (*mem_expr)) )
    {
      ptr_reg = force_reg (Pmode, XEXP (*mem_expr, 0));
      XEXP (*mem_expr, 0) = ptr_reg;
    } 
   else 
    {
      rtx address = XEXP (*mem_expr, 0);
      if ( REG_P (address) )
         ptr_reg = address;
      else if ( REG_P (XEXP (address, 0)) ) 
         ptr_reg = XEXP (address, 0);
      else 
         ptr_reg = XEXP (address, 1);
    }

   operands[2] = gen_reg_rtx (SImode);
   operands[3] = gen_rtx_LABEL_REF(Pmode, gen_label_rtx ());
   operands[4] = ptr_reg;   

  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand3),
	24)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_AND (SImode,
	operand2,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand2,
		operand3),
	25)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand4));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:67 */
rtx
gen_sync_iorsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
#line 84 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md"
{
   rtx *mem_expr = &operands[0];
   rtx ptr_reg;
   if ( !avr32_ks16_memory_operand (*mem_expr, GET_MODE (*mem_expr)) )
    {
      ptr_reg = force_reg (Pmode, XEXP (*mem_expr, 0));
      XEXP (*mem_expr, 0) = ptr_reg;
    } 
   else 
    {
      rtx address = XEXP (*mem_expr, 0);
      if ( REG_P (address) )
         ptr_reg = address;
      else if ( REG_P (XEXP (address, 0)) ) 
         ptr_reg = XEXP (address, 0);
      else 
         ptr_reg = XEXP (address, 1);
    }

   operands[2] = gen_reg_rtx (SImode);
   operands[3] = gen_rtx_LABEL_REF(Pmode, gen_label_rtx ());
   operands[4] = ptr_reg;   

  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand3),
	24)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_IOR (SImode,
	operand2,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand2,
		operand3),
	25)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand4));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:67 */
rtx
gen_sync_xorsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
#line 84 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md"
{
   rtx *mem_expr = &operands[0];
   rtx ptr_reg;
   if ( !avr32_ks16_memory_operand (*mem_expr, GET_MODE (*mem_expr)) )
    {
      ptr_reg = force_reg (Pmode, XEXP (*mem_expr, 0));
      XEXP (*mem_expr, 0) = ptr_reg;
    } 
   else 
    {
      rtx address = XEXP (*mem_expr, 0);
      if ( REG_P (address) )
         ptr_reg = address;
      else if ( REG_P (XEXP (address, 0)) ) 
         ptr_reg = XEXP (address, 0);
      else 
         ptr_reg = XEXP (address, 1);
    }

   operands[2] = gen_reg_rtx (SImode);
   operands[3] = gen_rtx_LABEL_REF(Pmode, gen_label_rtx ());
   operands[4] = ptr_reg;   

  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand3),
	24)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_XOR (SImode,
	operand2,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand2,
		operand3),
	25)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand4));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:112 */
rtx
gen_sync_old_addsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 129 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md"
{
   rtx *mem_expr = &operands[1];
   rtx ptr_reg;
   if ( !avr32_ks16_memory_operand (*mem_expr, GET_MODE (*mem_expr)) )
    {
      ptr_reg = force_reg (Pmode, XEXP (*mem_expr, 0));
      XEXP (*mem_expr, 0) = ptr_reg;
    } 
   else 
    {
      rtx address = XEXP (*mem_expr, 0);
      if ( REG_P (address) )
         ptr_reg = address;
      else if ( REG_P (XEXP (address, 0)) ) 
         ptr_reg = XEXP (address, 0);
      else 
         ptr_reg = XEXP (address, 1);
    }

   operands[3] = gen_reg_rtx (SImode);
   operands[4] = gen_rtx_LABEL_REF(Pmode, gen_label_rtx ());
   operands[5] = ptr_reg;
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand1,
		operand4),
	24)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (SImode,
	operand0,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand3,
		operand4),
	25)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:112 */
rtx
gen_sync_old_subsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 129 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md"
{
   rtx *mem_expr = &operands[1];
   rtx ptr_reg;
   if ( !avr32_ks16_memory_operand (*mem_expr, GET_MODE (*mem_expr)) )
    {
      ptr_reg = force_reg (Pmode, XEXP (*mem_expr, 0));
      XEXP (*mem_expr, 0) = ptr_reg;
    } 
   else 
    {
      rtx address = XEXP (*mem_expr, 0);
      if ( REG_P (address) )
         ptr_reg = address;
      else if ( REG_P (XEXP (address, 0)) ) 
         ptr_reg = XEXP (address, 0);
      else 
         ptr_reg = XEXP (address, 1);
    }

   operands[3] = gen_reg_rtx (SImode);
   operands[4] = gen_rtx_LABEL_REF(Pmode, gen_label_rtx ());
   operands[5] = ptr_reg;
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand1,
		operand4),
	24)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MINUS (SImode,
	operand0,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand3,
		operand4),
	25)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:112 */
rtx
gen_sync_old_andsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 129 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md"
{
   rtx *mem_expr = &operands[1];
   rtx ptr_reg;
   if ( !avr32_ks16_memory_operand (*mem_expr, GET_MODE (*mem_expr)) )
    {
      ptr_reg = force_reg (Pmode, XEXP (*mem_expr, 0));
      XEXP (*mem_expr, 0) = ptr_reg;
    } 
   else 
    {
      rtx address = XEXP (*mem_expr, 0);
      if ( REG_P (address) )
         ptr_reg = address;
      else if ( REG_P (XEXP (address, 0)) ) 
         ptr_reg = XEXP (address, 0);
      else 
         ptr_reg = XEXP (address, 1);
    }

   operands[3] = gen_reg_rtx (SImode);
   operands[4] = gen_rtx_LABEL_REF(Pmode, gen_label_rtx ());
   operands[5] = ptr_reg;
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand1,
		operand4),
	24)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_AND (SImode,
	operand0,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand3,
		operand4),
	25)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:112 */
rtx
gen_sync_old_iorsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 129 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md"
{
   rtx *mem_expr = &operands[1];
   rtx ptr_reg;
   if ( !avr32_ks16_memory_operand (*mem_expr, GET_MODE (*mem_expr)) )
    {
      ptr_reg = force_reg (Pmode, XEXP (*mem_expr, 0));
      XEXP (*mem_expr, 0) = ptr_reg;
    } 
   else 
    {
      rtx address = XEXP (*mem_expr, 0);
      if ( REG_P (address) )
         ptr_reg = address;
      else if ( REG_P (XEXP (address, 0)) ) 
         ptr_reg = XEXP (address, 0);
      else 
         ptr_reg = XEXP (address, 1);
    }

   operands[3] = gen_reg_rtx (SImode);
   operands[4] = gen_rtx_LABEL_REF(Pmode, gen_label_rtx ());
   operands[5] = ptr_reg;
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand1,
		operand4),
	24)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_IOR (SImode,
	operand0,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand3,
		operand4),
	25)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:112 */
rtx
gen_sync_old_xorsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 129 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md"
{
   rtx *mem_expr = &operands[1];
   rtx ptr_reg;
   if ( !avr32_ks16_memory_operand (*mem_expr, GET_MODE (*mem_expr)) )
    {
      ptr_reg = force_reg (Pmode, XEXP (*mem_expr, 0));
      XEXP (*mem_expr, 0) = ptr_reg;
    } 
   else 
    {
      rtx address = XEXP (*mem_expr, 0);
      if ( REG_P (address) )
         ptr_reg = address;
      else if ( REG_P (XEXP (address, 0)) ) 
         ptr_reg = XEXP (address, 0);
      else 
         ptr_reg = XEXP (address, 1);
    }

   operands[3] = gen_reg_rtx (SImode);
   operands[4] = gen_rtx_LABEL_REF(Pmode, gen_label_rtx ());
   operands[5] = ptr_reg;
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand1,
		operand4),
	24)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_XOR (SImode,
	operand0,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand3,
		operand4),
	25)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:154 */
rtx
gen_sync_new_addsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 171 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md"
{
   rtx *mem_expr = &operands[1];
   rtx ptr_reg;
   if ( !avr32_ks16_memory_operand (*mem_expr, GET_MODE (*mem_expr)) )
    {
      ptr_reg = force_reg (Pmode, XEXP (*mem_expr, 0));
      XEXP (*mem_expr, 0) = ptr_reg;
    } 
   else 
    {
      rtx address = XEXP (*mem_expr, 0);
      if ( REG_P (address) )
         ptr_reg = address;
      else if ( REG_P (XEXP (address, 0)) ) 
         ptr_reg = XEXP (address, 0);
      else 
         ptr_reg = XEXP (address, 1);
    }

   operands[3] = gen_rtx_LABEL_REF(Pmode, gen_label_rtx ());
   operands[4] = ptr_reg;
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand1,
		operand3),
	24)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand0,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand3),
	25)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand4));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:154 */
rtx
gen_sync_new_subsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 171 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md"
{
   rtx *mem_expr = &operands[1];
   rtx ptr_reg;
   if ( !avr32_ks16_memory_operand (*mem_expr, GET_MODE (*mem_expr)) )
    {
      ptr_reg = force_reg (Pmode, XEXP (*mem_expr, 0));
      XEXP (*mem_expr, 0) = ptr_reg;
    } 
   else 
    {
      rtx address = XEXP (*mem_expr, 0);
      if ( REG_P (address) )
         ptr_reg = address;
      else if ( REG_P (XEXP (address, 0)) ) 
         ptr_reg = XEXP (address, 0);
      else 
         ptr_reg = XEXP (address, 1);
    }

   operands[3] = gen_rtx_LABEL_REF(Pmode, gen_label_rtx ());
   operands[4] = ptr_reg;
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand1,
		operand3),
	24)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand0,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand3),
	25)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand4));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:154 */
rtx
gen_sync_new_andsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 171 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md"
{
   rtx *mem_expr = &operands[1];
   rtx ptr_reg;
   if ( !avr32_ks16_memory_operand (*mem_expr, GET_MODE (*mem_expr)) )
    {
      ptr_reg = force_reg (Pmode, XEXP (*mem_expr, 0));
      XEXP (*mem_expr, 0) = ptr_reg;
    } 
   else 
    {
      rtx address = XEXP (*mem_expr, 0);
      if ( REG_P (address) )
         ptr_reg = address;
      else if ( REG_P (XEXP (address, 0)) ) 
         ptr_reg = XEXP (address, 0);
      else 
         ptr_reg = XEXP (address, 1);
    }

   operands[3] = gen_rtx_LABEL_REF(Pmode, gen_label_rtx ());
   operands[4] = ptr_reg;
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand1,
		operand3),
	24)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	operand0,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand3),
	25)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand4));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:154 */
rtx
gen_sync_new_iorsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 171 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md"
{
   rtx *mem_expr = &operands[1];
   rtx ptr_reg;
   if ( !avr32_ks16_memory_operand (*mem_expr, GET_MODE (*mem_expr)) )
    {
      ptr_reg = force_reg (Pmode, XEXP (*mem_expr, 0));
      XEXP (*mem_expr, 0) = ptr_reg;
    } 
   else 
    {
      rtx address = XEXP (*mem_expr, 0);
      if ( REG_P (address) )
         ptr_reg = address;
      else if ( REG_P (XEXP (address, 0)) ) 
         ptr_reg = XEXP (address, 0);
      else 
         ptr_reg = XEXP (address, 1);
    }

   operands[3] = gen_rtx_LABEL_REF(Pmode, gen_label_rtx ());
   operands[4] = ptr_reg;
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand1,
		operand3),
	24)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	operand0,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand3),
	25)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand4));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md:154 */
rtx
gen_sync_new_xorsi (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  rtx operand2 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  operand2 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 171 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/sync.md"
{
   rtx *mem_expr = &operands[1];
   rtx ptr_reg;
   if ( !avr32_ks16_memory_operand (*mem_expr, GET_MODE (*mem_expr)) )
    {
      ptr_reg = force_reg (Pmode, XEXP (*mem_expr, 0));
      XEXP (*mem_expr, 0) = ptr_reg;
    } 
   else 
    {
      rtx address = XEXP (*mem_expr, 0);
      if ( REG_P (address) )
         ptr_reg = address;
      else if ( REG_P (XEXP (address, 0)) ) 
         ptr_reg = XEXP (address, 0);
      else 
         ptr_reg = XEXP (address, 1);
    }

   operands[3] = gen_rtx_LABEL_REF(Pmode, gen_label_rtx ());
   operands[4] = ptr_reg;
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand1,
		operand3),
	24)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand0,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand3),
	25)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand4));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:97 */
extern rtx gen_split_491 (rtx, rtx *);
rtx
gen_split_491 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 117 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"

   {
    operands[2] = gen_highpart (SImode, operands[0]);
    operands[0] = gen_lowpart (SImode, operands[0]);
    operands[3] = gen_highpart(SImode, operands[1]);
    operands[1] = gen_lowpart(SImode, operands[1]);
   }
  
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:148 */
extern rtx gen_peephole2_492 (rtx, rtx *);
rtx
gen_peephole2_492 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_NEG (SFmode,
	gen_rtx_MULT (SFmode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:182 */
extern rtx gen_peephole2_493 (rtx, rtx *);
rtx
gen_peephole2_493 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (SFmode,
	gen_rtx_NEG (SFmode,
	gen_rtx_MULT (SFmode,
	operand1,
	operand2)),
	copy_rtx (operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:208 */
extern rtx gen_peephole2_494 (rtx, rtx *);
rtx
gen_peephole2_494 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MINUS (SFmode,
	gen_rtx_MULT (SFmode,
	operand1,
	operand2),
	copy_rtx (operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:306 */
extern rtx gen_peephole2_495 (rtx, rtx *);
rtx
gen_peephole2_495 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_NEG (DFmode,
	gen_rtx_MULT (DFmode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:339 */
extern rtx gen_peephole2_496 (rtx, rtx *);
rtx
gen_peephole2_496 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MINUS (DFmode,
	gen_rtx_MULT (DFmode,
	operand1,
	operand2),
	copy_rtx (operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:374 */
extern rtx gen_peephole2_497 (rtx, rtx *);
rtx
gen_peephole2_497 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (DFmode,
	gen_rtx_NEG (DFmode,
	gen_rtx_MULT (DFmode,
	operand1,
	operand2)),
	copy_rtx (operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:424 */
rtx
gen_cmpdf (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 430 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
{
   rtx tmpreg;
   if ( !REG_P(operands[0]) )
     operands[0] = force_reg(DFmode, operands[0]);

   if ( !REG_P(operands[1]) )
     operands[1] = force_reg(DFmode, operands[1]);

   avr32_compare_op0 = operands[0];
   avr32_compare_op1 = operands[1];

   emit_insn(gen_cmpdf_internal(operands[0], operands[1]));

   tmpreg = gen_reg_rtx(SImode);
   emit_insn(gen_fpcc_to_reg(tmpreg));
   emit_insn(gen_reg_to_cc(tmpreg));

   DONE;
  }
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (DFmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md:466 */
rtx
gen_cmpsf (rtx operand0 ATTRIBUTE_UNUSED, ...)
{
  rtx _val = 0;
  rtx operand1 ATTRIBUTE_UNUSED;
  va_list args;

  va_start(args, operand0);
  operand1 = va_arg(args, rtx);
  va_end(args);

  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 472 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/fpcp.md"
{
   rtx tmpreg;
   if ( !REG_P(operands[0]) )
     operands[0] = force_reg(SFmode, operands[0]);

   if ( !REG_P(operands[1]) )
     operands[1] = force_reg(SFmode, operands[1]);

   avr32_compare_op0 = operands[0];
   avr32_compare_op1 = operands[1];

   emit_insn(gen_cmpsf_internal(operands[0], operands[1]));

   tmpreg = gen_reg_rtx(SImode);
   emit_insn(gen_fpcc_to_reg(tmpreg));
   emit_insn(gen_reg_to_cc(tmpreg));

   DONE;
  }
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (SFmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_537 (rtx, rtx *);
rtx
gen_split_537 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_539 (rtx, rtx *);
rtx
gen_split_539 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_541 (rtx, rtx *);
rtx
gen_split_541 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_543 (rtx, rtx *);
rtx
gen_split_543 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_545 (rtx, rtx *);
rtx
gen_split_545 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_547 (rtx, rtx *);
rtx
gen_split_547 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (HImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_549 (rtx, rtx *);
rtx
gen_split_549 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (HImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_551 (rtx, rtx *);
rtx
gen_split_551 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (HImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_553 (rtx, rtx *);
rtx
gen_split_553 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (HImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_555 (rtx, rtx *);
rtx
gen_split_555 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (HImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_557 (rtx, rtx *);
rtx
gen_split_557 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (QImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_559 (rtx, rtx *);
rtx
gen_split_559 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (QImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_561 (rtx, rtx *);
rtx
gen_split_561 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (QImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_563 (rtx, rtx *);
rtx
gen_split_563 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (QImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_565 (rtx, rtx *);
rtx
gen_split_565 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (QImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2082 */
extern rtx gen_split_567 (rtx, rtx *);
rtx
gen_split_567 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 2108 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2114 */
extern rtx gen_split_569 (rtx, rtx *);
rtx
gen_split_569 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 2140 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2146 */
extern rtx gen_split_571 (rtx, rtx *);
rtx
gen_split_571 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 2172 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_624 (rtx, rtx *);
rtx
gen_split_624 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_626 (rtx, rtx *);
rtx
gen_split_626 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_628 (rtx, rtx *);
rtx
gen_split_628 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_630 (rtx, rtx *);
rtx
gen_split_630 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_632 (rtx, rtx *);
rtx
gen_split_632 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_634 (rtx, rtx *);
rtx
gen_split_634 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (HImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_636 (rtx, rtx *);
rtx
gen_split_636 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (HImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_638 (rtx, rtx *);
rtx
gen_split_638 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (HImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_640 (rtx, rtx *);
rtx
gen_split_640 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (HImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_642 (rtx, rtx *);
rtx
gen_split_642 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (HImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_644 (rtx, rtx *);
rtx
gen_split_644 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (QImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_646 (rtx, rtx *);
rtx
gen_split_646 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (QImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_648 (rtx, rtx *);
rtx
gen_split_648 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (QImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_650 (rtx, rtx *);
rtx
gen_split_650 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (QImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_652 (rtx, rtx *);
rtx
gen_split_652 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (QImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2082 */
extern rtx gen_split_654 (rtx, rtx *);
rtx
gen_split_654 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 2108 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2114 */
extern rtx gen_split_656 (rtx, rtx *);
rtx
gen_split_656 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 2140 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2146 */
extern rtx gen_split_658 (rtx, rtx *);
rtx
gen_split_658 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 2172 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_711 (rtx, rtx *);
rtx
gen_split_711 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_713 (rtx, rtx *);
rtx
gen_split_713 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_715 (rtx, rtx *);
rtx
gen_split_715 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_717 (rtx, rtx *);
rtx
gen_split_717 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_719 (rtx, rtx *);
rtx
gen_split_719 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_721 (rtx, rtx *);
rtx
gen_split_721 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (HImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_723 (rtx, rtx *);
rtx
gen_split_723 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (HImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_725 (rtx, rtx *);
rtx
gen_split_725 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (HImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_727 (rtx, rtx *);
rtx
gen_split_727 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (HImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_729 (rtx, rtx *);
rtx
gen_split_729 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (HImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_731 (rtx, rtx *);
rtx
gen_split_731 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (QImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_733 (rtx, rtx *);
rtx
gen_split_733 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (QImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_735 (rtx, rtx *);
rtx
gen_split_735 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (QImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_737 (rtx, rtx *);
rtx
gen_split_737 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (QImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_739 (rtx, rtx *);
rtx
gen_split_739 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (QImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2082 */
extern rtx gen_split_741 (rtx, rtx *);
rtx
gen_split_741 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 2108 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2114 */
extern rtx gen_split_743 (rtx, rtx *);
rtx
gen_split_743 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 2140 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2146 */
extern rtx gen_split_745 (rtx, rtx *);
rtx
gen_split_745 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 2172 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_798 (rtx, rtx *);
rtx
gen_split_798 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_800 (rtx, rtx *);
rtx
gen_split_800 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_802 (rtx, rtx *);
rtx
gen_split_802 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_804 (rtx, rtx *);
rtx
gen_split_804 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_806 (rtx, rtx *);
rtx
gen_split_806 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_808 (rtx, rtx *);
rtx
gen_split_808 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (HImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_810 (rtx, rtx *);
rtx
gen_split_810 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (HImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_812 (rtx, rtx *);
rtx
gen_split_812 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (HImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_814 (rtx, rtx *);
rtx
gen_split_814 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (HImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_816 (rtx, rtx *);
rtx
gen_split_816 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (HImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_818 (rtx, rtx *);
rtx
gen_split_818 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (QImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_820 (rtx, rtx *);
rtx
gen_split_820 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (QImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_822 (rtx, rtx *);
rtx
gen_split_822 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (QImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_824 (rtx, rtx *);
rtx
gen_split_824 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (QImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_826 (rtx, rtx *);
rtx
gen_split_826 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand5,
		operand6),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (QImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2082 */
extern rtx gen_split_828 (rtx, rtx *);
rtx
gen_split_828 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 2108 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2114 */
extern rtx gen_split_830 (rtx, rtx *);
rtx
gen_split_830 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 2140 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2146 */
extern rtx gen_split_832 (rtx, rtx *);
rtx
gen_split_832 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 2172 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_885 (rtx, rtx *);
rtx
gen_split_885 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		gen_rtx_AND (SImode,
	operand5,
	operand6),
		const0_rtx),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_887 (rtx, rtx *);
rtx
gen_split_887 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		gen_rtx_AND (SImode,
	operand5,
	operand6),
		const0_rtx),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_889 (rtx, rtx *);
rtx
gen_split_889 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		gen_rtx_AND (SImode,
	operand5,
	operand6),
		const0_rtx),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_891 (rtx, rtx *);
rtx
gen_split_891 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		gen_rtx_AND (SImode,
	operand5,
	operand6),
		const0_rtx),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_893 (rtx, rtx *);
rtx
gen_split_893 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		gen_rtx_AND (SImode,
	operand5,
	operand6),
		const0_rtx),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_895 (rtx, rtx *);
rtx
gen_split_895 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		gen_rtx_AND (SImode,
	operand5,
	operand6),
		const0_rtx),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (HImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_897 (rtx, rtx *);
rtx
gen_split_897 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		gen_rtx_AND (SImode,
	operand5,
	operand6),
		const0_rtx),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (HImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_899 (rtx, rtx *);
rtx
gen_split_899 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		gen_rtx_AND (SImode,
	operand5,
	operand6),
		const0_rtx),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (HImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_901 (rtx, rtx *);
rtx
gen_split_901 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		gen_rtx_AND (SImode,
	operand5,
	operand6),
		const0_rtx),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (HImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_903 (rtx, rtx *);
rtx
gen_split_903 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		gen_rtx_AND (SImode,
	operand5,
	operand6),
		const0_rtx),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (HImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_905 (rtx, rtx *);
rtx
gen_split_905 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		gen_rtx_AND (SImode,
	operand5,
	operand6),
		const0_rtx),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (QImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_907 (rtx, rtx *);
rtx
gen_split_907 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		gen_rtx_AND (SImode,
	operand5,
	operand6),
		const0_rtx),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (QImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_909 (rtx, rtx *);
rtx
gen_split_909 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		gen_rtx_AND (SImode,
	operand5,
	operand6),
		const0_rtx),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (QImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_911 (rtx, rtx *);
rtx
gen_split_911 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		gen_rtx_AND (SImode,
	operand5,
	operand6),
		const0_rtx),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (QImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2029 */
extern rtx gen_split_913 (rtx, rtx *);
rtx
gen_split_913 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		gen_rtx_AND (SImode,
	operand5,
	operand6),
		const0_rtx),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (QImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2082 */
extern rtx gen_split_915 (rtx, rtx *);
rtx
gen_split_915 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 2108 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		gen_rtx_AND (SImode,
	operand4,
	operand5),
		const0_rtx),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2114 */
extern rtx gen_split_917 (rtx, rtx *);
rtx
gen_split_917 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 2140 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		gen_rtx_AND (SImode,
	operand4,
	operand5),
		const0_rtx),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* insn-conditions.md:2146 */
extern rtx gen_split_919 (rtx, rtx *);
rtx
gen_split_919 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 2172 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		gen_rtx_AND (SImode,
	operand4,
	operand5),
		const0_rtx),
	gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}



void
add_clobbers (rtx pattern ATTRIBUTE_UNUSED, int insn_code_number)
{
  switch (insn_code_number)
    {
    case 263:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    default:
      gcc_unreachable ();
    }
}


int
added_clobbers_hard_reg_p (int insn_code_number)
{
  switch (insn_code_number)
    {
    case 263:
      return 0;

    default:
      gcc_unreachable ();
    }
}

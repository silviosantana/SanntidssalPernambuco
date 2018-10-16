/* Generated automatically by the program `genopinit'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "flags.h"
#include "insn-config.h"
#include "recog.h"
#include "expr.h"
#include "optabs.h"
#include "reload.h"

void
init_all_optabs (void)
{
#ifdef FIXUNS_TRUNC_LIKE_FIX_TRUNC
  int i, j;
#endif

  add_optab->handlers[SImode].insn_code = CODE_FOR_addsi3;
  add_optab->handlers[HImode].insn_code = CODE_FOR_addhi3;
  add_optab->handlers[QImode].insn_code = CODE_FOR_addqi3;
  add_optab->handlers[DImode].insn_code = CODE_FOR_adddi3;
  sub_optab->handlers[SImode].insn_code = CODE_FOR_subsi3;
  sub_optab->handlers[HImode].insn_code = CODE_FOR_subhi3;
  sub_optab->handlers[QImode].insn_code = CODE_FOR_subqi3;
  sub_optab->handlers[DImode].insn_code = CODE_FOR_subdi3;
  if (HAVE_mulqi3)
    smul_optab->handlers[QImode].insn_code = CODE_FOR_mulqi3;
  if (HAVE_mulsi3)
    smul_optab->handlers[SImode].insn_code = CODE_FOR_mulsi3;
  if (HAVE_mulhisi3)
    smul_widen_optab->handlers[SImode].insn_code = CODE_FOR_mulhisi3;
  if (HAVE_mulsidi3)
    smul_widen_optab->handlers[DImode].insn_code = CODE_FOR_mulsidi3;
  if (HAVE_umulsidi3)
    umul_widen_optab->handlers[DImode].insn_code = CODE_FOR_umulsidi3;
  smin_optab->handlers[SImode].insn_code = CODE_FOR_sminsi3;
  smax_optab->handlers[SImode].insn_code = CODE_FOR_smaxsi3;
  and_optab->handlers[SImode].insn_code = CODE_FOR_andsi3;
  and_optab->handlers[DImode].insn_code = CODE_FOR_anddi3;
  ior_optab->handlers[SImode].insn_code = CODE_FOR_iorsi3;
  ior_optab->handlers[DImode].insn_code = CODE_FOR_iordi3;
  xor_optab->handlers[SImode].insn_code = CODE_FOR_xorsi3;
  xor_optab->handlers[DImode].insn_code = CODE_FOR_xordi3;
  ashl_optab->handlers[SImode].insn_code = CODE_FOR_ashlsi3;
  ashr_optab->handlers[SImode].insn_code = CODE_FOR_ashrsi3;
  lshr_optab->handlers[SImode].insn_code = CODE_FOR_lshrsi3;
  neg_optab->handlers[SImode].insn_code = CODE_FOR_negsi2;
  abs_optab->handlers[SImode].insn_code = CODE_FOR_abssi2;
  one_cmpl_optab->handlers[SImode].insn_code = CODE_FOR_one_cmplsi2;
  trunc_optab->handlers[SImode][DImode].insn_code = CODE_FOR_truncdisi2;
  sext_optab->handlers[SImode][HImode].insn_code = CODE_FOR_extendhisi2;
  sext_optab->handlers[SImode][QImode].insn_code = CODE_FOR_extendqisi2;
  sext_optab->handlers[HImode][QImode].insn_code = CODE_FOR_extendqihi2;
  zext_optab->handlers[SImode][HImode].insn_code = CODE_FOR_zero_extendhisi2;
  zext_optab->handlers[SImode][QImode].insn_code = CODE_FOR_zero_extendqisi2;
  zext_optab->handlers[HImode][QImode].insn_code = CODE_FOR_zero_extendqihi2;
  setcc_gen_code[EQ] = CODE_FOR_seq;
  setcc_gen_code[NE] = CODE_FOR_sne;
  setcc_gen_code[GT] = CODE_FOR_sgt;
  setcc_gen_code[GE] = CODE_FOR_sge;
  setcc_gen_code[LT] = CODE_FOR_slt;
  setcc_gen_code[LE] = CODE_FOR_sle;
  setcc_gen_code[GTU] = CODE_FOR_sgtu;
  setcc_gen_code[GEU] = CODE_FOR_sgeu;
  setcc_gen_code[LTU] = CODE_FOR_sltu;
  setcc_gen_code[LEU] = CODE_FOR_sleu;
  bcc_gen_fctn[EQ] = gen_beq;
  bcc_gen_fctn[NE] = gen_bne;
  bcc_gen_fctn[GT] = gen_bgt;
  bcc_gen_fctn[GE] = gen_bge;
  bcc_gen_fctn[LT] = gen_blt;
  bcc_gen_fctn[LE] = gen_ble;
  bcc_gen_fctn[GTU] = gen_bgtu;
  bcc_gen_fctn[GEU] = gen_bgeu;
  bcc_gen_fctn[LTU] = gen_bltu;
  bcc_gen_fctn[LEU] = gen_bleu;
  ffs_optab->handlers[SImode].insn_code = CODE_FOR_ffssi2;
  clz_optab->handlers[SImode].insn_code = CODE_FOR_clzsi2;
  ctz_optab->handlers[SImode].insn_code = CODE_FOR_ctzsi2;
  vec_extract_optab->handlers[V2HImode].insn_code = CODE_FOR_vec_extractv2hi;
  vec_extract_optab->handlers[V4QImode].insn_code = CODE_FOR_vec_extractv4qi;
  sync_compare_and_swap[SImode] = CODE_FOR_sync_compare_and_swapsi;
  sync_lock_test_and_set[SImode] = CODE_FOR_sync_lock_test_and_setsi;
  if (HAVE_addv2hi3)
    add_optab->handlers[V2HImode].insn_code = CODE_FOR_addv2hi3;
  if (HAVE_addv4qi3)
    add_optab->handlers[V4QImode].insn_code = CODE_FOR_addv4qi3;
  if (HAVE_subv2hi3)
    sub_optab->handlers[V2HImode].insn_code = CODE_FOR_subv2hi3;
  if (HAVE_subv4qi3)
    sub_optab->handlers[V4QImode].insn_code = CODE_FOR_subv4qi3;
  if (HAVE_absv2hi2)
    abs_optab->handlers[V2HImode].insn_code = CODE_FOR_absv2hi2;
  if (HAVE_absv4qi2)
    abs_optab->handlers[V4QImode].insn_code = CODE_FOR_absv4qi2;
  if (HAVE_ashlv2hi3)
    ashl_optab->handlers[V2HImode].insn_code = CODE_FOR_ashlv2hi3;
  if (HAVE_ashlv4qi3)
    ashl_optab->handlers[V4QImode].insn_code = CODE_FOR_ashlv4qi3;
  if (HAVE_ashrv2hi3)
    ashr_optab->handlers[V2HImode].insn_code = CODE_FOR_ashrv2hi3;
  if (HAVE_ashrv4qi3)
    ashr_optab->handlers[V4QImode].insn_code = CODE_FOR_ashrv4qi3;
  if (HAVE_lshrv2hi3)
    lshr_optab->handlers[V2HImode].insn_code = CODE_FOR_lshrv2hi3;
  if (HAVE_lshrv4qi3)
    lshr_optab->handlers[V4QImode].insn_code = CODE_FOR_lshrv4qi3;
  if (HAVE_smaxv2hi3)
    smax_optab->handlers[V2HImode].insn_code = CODE_FOR_smaxv2hi3;
  if (HAVE_sminv2hi3)
    smin_optab->handlers[V2HImode].insn_code = CODE_FOR_sminv2hi3;
  if (HAVE_umaxv4qi3)
    umax_optab->handlers[V4QImode].insn_code = CODE_FOR_umaxv4qi3;
  if (HAVE_uminv4qi3)
    umin_optab->handlers[V4QImode].insn_code = CODE_FOR_uminv4qi3;
  if (HAVE_mulsf3)
    smulv_optab->handlers[SFmode].insn_code =
    smul_optab->handlers[SFmode].insn_code = CODE_FOR_mulsf3;
  if (HAVE_addsf3)
    addv_optab->handlers[SFmode].insn_code =
    add_optab->handlers[SFmode].insn_code = CODE_FOR_addsf3;
  if (HAVE_subsf3)
    subv_optab->handlers[SFmode].insn_code =
    sub_optab->handlers[SFmode].insn_code = CODE_FOR_subsf3;
  if (HAVE_negsf2)
    negv_optab->handlers[SFmode].insn_code =
    neg_optab->handlers[SFmode].insn_code = CODE_FOR_negsf2;
  if (HAVE_abssf2)
    absv_optab->handlers[SFmode].insn_code =
    abs_optab->handlers[SFmode].insn_code = CODE_FOR_abssf2;
  if (HAVE_truncdfsf2)
    trunc_optab->handlers[SFmode][DFmode].insn_code = CODE_FOR_truncdfsf2;
  if (HAVE_extendsfdf2)
    sext_optab->handlers[DFmode][SFmode].insn_code = CODE_FOR_extendsfdf2;
  if (HAVE_muldf3)
    smulv_optab->handlers[DFmode].insn_code =
    smul_optab->handlers[DFmode].insn_code = CODE_FOR_muldf3;
  if (HAVE_adddf3)
    addv_optab->handlers[DFmode].insn_code =
    add_optab->handlers[DFmode].insn_code = CODE_FOR_adddf3;
  if (HAVE_subdf3)
    subv_optab->handlers[DFmode].insn_code =
    sub_optab->handlers[DFmode].insn_code = CODE_FOR_subdf3;
  if (HAVE_negdf2)
    negv_optab->handlers[DFmode].insn_code =
    neg_optab->handlers[DFmode].insn_code = CODE_FOR_negdf2;
  if (HAVE_absdf2)
    absv_optab->handlers[DFmode].insn_code =
    abs_optab->handlers[DFmode].insn_code = CODE_FOR_absdf2;
  mov_optab->handlers[QImode].insn_code = CODE_FOR_movqi;
  mov_optab->handlers[HImode].insn_code = CODE_FOR_movhi;
  if (HAVE_movmisalignsi)
    movmisalign_optab->handlers[SImode].insn_code = CODE_FOR_movmisalignsi;
  mov_optab->handlers[SImode].insn_code = CODE_FOR_movsi;
  mov_optab->handlers[V2HImode].insn_code = CODE_FOR_movv2hi;
  mov_optab->handlers[V4QImode].insn_code = CODE_FOR_movv4qi;
  mov_optab->handlers[DImode].insn_code = CODE_FOR_movdi;
  if (HAVE_movti)
    mov_optab->handlers[TImode].insn_code = CODE_FOR_movti;
  mov_optab->handlers[SFmode].insn_code = CODE_FOR_movsf;
  mov_optab->handlers[DFmode].insn_code = CODE_FOR_movdf;
  movmem_optab[SImode] = CODE_FOR_movmemsi;
  sdivmod_optab->handlers[SImode].insn_code = CODE_FOR_divmodsi4;
  udivmod_optab->handlers[SImode].insn_code = CODE_FOR_udivmodsi4;
  cmp_optab->handlers[DImode].insn_code = CODE_FOR_cmpdi;
  cmp_optab->handlers[SImode].insn_code = CODE_FOR_cmpsi;
  cmp_optab->handlers[HImode].insn_code = CODE_FOR_cmphi;
  cmp_optab->handlers[QImode].insn_code = CODE_FOR_cmpqi;
  tst_optab->handlers[SImode].insn_code = CODE_FOR_tstsi;
  tst_optab->handlers[DImode].insn_code = CODE_FOR_tstdi;
  addcc_optab->handlers[SImode].insn_code = CODE_FOR_addsicc;
  addcc_optab->handlers[HImode].insn_code = CODE_FOR_addhicc;
  addcc_optab->handlers[QImode].insn_code = CODE_FOR_addqicc;
  movcc_gen_code[SFmode] = CODE_FOR_movsfcc;
  movcc_gen_code[SImode] = CODE_FOR_movsicc;
  movcc_gen_code[HImode] = CODE_FOR_movhicc;
  movcc_gen_code[QImode] = CODE_FOR_movqicc;
  vec_set_optab->handlers[V2HImode].insn_code = CODE_FOR_vec_setv2hi;
  sync_add_optab[SImode] = CODE_FOR_sync_addsi;
  sync_sub_optab[SImode] = CODE_FOR_sync_subsi;
  sync_and_optab[SImode] = CODE_FOR_sync_andsi;
  sync_ior_optab[SImode] = CODE_FOR_sync_iorsi;
  sync_xor_optab[SImode] = CODE_FOR_sync_xorsi;
  sync_old_add_optab[SImode] = CODE_FOR_sync_old_addsi;
  sync_old_sub_optab[SImode] = CODE_FOR_sync_old_subsi;
  sync_old_and_optab[SImode] = CODE_FOR_sync_old_andsi;
  sync_old_ior_optab[SImode] = CODE_FOR_sync_old_iorsi;
  sync_old_xor_optab[SImode] = CODE_FOR_sync_old_xorsi;
  sync_new_add_optab[SImode] = CODE_FOR_sync_new_addsi;
  sync_new_sub_optab[SImode] = CODE_FOR_sync_new_subsi;
  sync_new_and_optab[SImode] = CODE_FOR_sync_new_andsi;
  sync_new_ior_optab[SImode] = CODE_FOR_sync_new_iorsi;
  sync_new_xor_optab[SImode] = CODE_FOR_sync_new_xorsi;
  if (HAVE_cmpdf)
    cmp_optab->handlers[DFmode].insn_code = CODE_FOR_cmpdf;
  if (HAVE_cmpsf)
    cmp_optab->handlers[SFmode].insn_code = CODE_FOR_cmpsf;

#ifdef FIXUNS_TRUNC_LIKE_FIX_TRUNC
  /* This flag says the same insns that convert to a signed fixnum
     also convert validly to an unsigned one.  */
  for (i = 0; i < NUM_MACHINE_MODES; i++)
    for (j = 0; j < NUM_MACHINE_MODES; j++)
      ufixtrunc_optab->handlers[i][j].insn_code
      = sfixtrunc_optab->handlers[i][j].insn_code;
#endif
}

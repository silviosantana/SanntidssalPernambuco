/* Generated automatically by the program `genflags'
   from the machine description file `md'.  */

#ifndef GCC_INSN_FLAGS_H
#define GCC_INSN_FLAGS_H

#define HAVE_movsi_internal (register_operand (operands[0], SImode) \
   || register_operand (operands[1], SImode))
#define HAVE_movv2hi_internal (register_operand (operands[0], V2HImode) \
   || register_operand (operands[1], V2HImode))
#define HAVE_movv4qi_internal (register_operand (operands[0], V4QImode) \
   || register_operand (operands[1], V4QImode))
#define HAVE_mov_symbol_lo 1
#define HAVE_add_symbol_hi 1
#define HAVE_pic_load_addr (flag_pic && CONSTANT_POOL_ADDRESS_P(XEXP(operands[1], 0)))
#define HAVE_pic_compute_got_from_pc (flag_pic)
#define HAVE_ldsf_predicable (TARGET_V2_INSNS)
#define HAVE_ldsi_predicable (TARGET_V2_INSNS)
#define HAVE_ldhi_predicable (TARGET_V2_INSNS)
#define HAVE_ldqi_predicable (TARGET_V2_INSNS)
#define HAVE_stsf_predicable (TARGET_V2_INSNS)
#define HAVE_stsi_predicable (TARGET_V2_INSNS)
#define HAVE_sthi_predicable (TARGET_V2_INSNS)
#define HAVE_stqi_predicable (TARGET_V2_INSNS)
#define HAVE_movsf_predicable 1
#define HAVE_movsi_predicable 1
#define HAVE_movhi_predicable 1
#define HAVE_movqi_predicable 1
#define HAVE_insv 1
#define HAVE_extv_internal (INTVAL(operands[2]) < 32)
#define HAVE_extzv_internal (INTVAL(operands[2]) < 32)
#define HAVE_pushm 1
#define HAVE_stm 1
#define HAVE_popm 1
#define HAVE_addsi3 1
#define HAVE_addhi3 1
#define HAVE_addqi3 1
#define HAVE_addsi3_lsl 1
#define HAVE_addhi3_lsl 1
#define HAVE_addqi3_lsl 1
#define HAVE_addsi3_lsl2 1
#define HAVE_addhi3_lsl2 1
#define HAVE_addqi3_lsl2 1
#define HAVE_addsi3_mul ((INTVAL(operands[3]) == 0) || (INTVAL(operands[3]) == 2) || \
   (INTVAL(operands[3]) == 4) || (INTVAL(operands[3]) == 8))
#define HAVE_addhi3_mul ((INTVAL(operands[3]) == 0) || (INTVAL(operands[3]) == 2) || \
   (INTVAL(operands[3]) == 4) || (INTVAL(operands[3]) == 8))
#define HAVE_addqi3_mul ((INTVAL(operands[3]) == 0) || (INTVAL(operands[3]) == 2) || \
   (INTVAL(operands[3]) == 4) || (INTVAL(operands[3]) == 8))
#define HAVE_addsi3_mul2 ((INTVAL(operands[3]) == 0) || (INTVAL(operands[3]) == 2) || \
   (INTVAL(operands[3]) == 4) || (INTVAL(operands[3]) == 8))
#define HAVE_addhi3_mul2 ((INTVAL(operands[3]) == 0) || (INTVAL(operands[3]) == 2) || \
   (INTVAL(operands[3]) == 4) || (INTVAL(operands[3]) == 8))
#define HAVE_addqi3_mul2 ((INTVAL(operands[3]) == 0) || (INTVAL(operands[3]) == 2) || \
   (INTVAL(operands[3]) == 4) || (INTVAL(operands[3]) == 8))
#define HAVE_adddi3 1
#define HAVE_addsi_imm_predicable 1
#define HAVE_addhi_imm_predicable 1
#define HAVE_addqi_imm_predicable 1
#define HAVE_subsi3 1
#define HAVE_subhi3 1
#define HAVE_subqi3 1
#define HAVE_subdi3 1
#define HAVE_subsi_imm_predicable 1
#define HAVE_subhi_imm_predicable 1
#define HAVE_subqi_imm_predicable 1
#define HAVE_rsubsi_imm_predicable 1
#define HAVE_rsubhi_imm_predicable 1
#define HAVE_rsubqi_imm_predicable 1
#define HAVE_mulqi3 (!TARGET_NO_MUL_INSNS)
#define HAVE_mulsi3 (!TARGET_NO_MUL_INSNS)
#define HAVE_mulhisi3 (!TARGET_NO_MUL_INSNS && TARGET_DSP)
#define HAVE_mulnhisi3 (!TARGET_NO_MUL_INSNS && TARGET_DSP)
#define HAVE_machisi3 (!TARGET_NO_MUL_INSNS && TARGET_DSP)
#define HAVE_mulsidi3 (!TARGET_NO_MUL_INSNS)
#define HAVE_umulsidi3 (!TARGET_NO_MUL_INSNS)
#define HAVE_mulaccsidi3 (!TARGET_NO_MUL_INSNS)
#define HAVE_umulaccsidi3 (!TARGET_NO_MUL_INSNS)
#define HAVE_mulsathh_h (!TARGET_NO_MUL_INSNS && TARGET_DSP)
#define HAVE_mulsatrndhh_h (!TARGET_NO_MUL_INSNS && TARGET_DSP)
#define HAVE_mulsathh_w (!TARGET_NO_MUL_INSNS && TARGET_DSP)
#define HAVE_mulsatwh_w (!TARGET_NO_MUL_INSNS && TARGET_DSP)
#define HAVE_mulsatrndwh_w (!TARGET_NO_MUL_INSNS && TARGET_DSP)
#define HAVE_macsathh_w (!TARGET_NO_MUL_INSNS && TARGET_DSP)
#define HAVE_mulwh_d (!TARGET_NO_MUL_INSNS && TARGET_DSP)
#define HAVE_mulnwh_d (!TARGET_NO_MUL_INSNS && TARGET_DSP)
#define HAVE_macwh_d (!TARGET_NO_MUL_INSNS && TARGET_DSP)
#define HAVE_machh_d (!TARGET_NO_MUL_INSNS && TARGET_DSP)
#define HAVE_satadd_w (TARGET_DSP)
#define HAVE_satsub_w (TARGET_DSP)
#define HAVE_satadd_h (TARGET_DSP)
#define HAVE_satsub_h (TARGET_DSP)
#define HAVE_sminsi3 1
#define HAVE_smaxsi3 1
#define HAVE_andsi_lshift 1
#define HAVE_iorsi_lshift 1
#define HAVE_xorsi_lshift 1
#define HAVE_andnsi 1
#define HAVE_andsi3 1
#define HAVE_anddi3 1
#define HAVE_iorsi3 1
#define HAVE_iordi3 1
#define HAVE_xorsi3 1
#define HAVE_xordi3 1
#define HAVE_andsi_predicable (TARGET_V2_INSNS)
#define HAVE_orsi_predicable (TARGET_V2_INSNS)
#define HAVE_eorsi_predicable (TARGET_V2_INSNS)
#define HAVE_addsi_predicable (TARGET_V2_INSNS)
#define HAVE_subsi_predicable (TARGET_V2_INSNS)
#define HAVE_andhi_predicable (TARGET_V2_INSNS)
#define HAVE_orhi_predicable (TARGET_V2_INSNS)
#define HAVE_eorhi_predicable (TARGET_V2_INSNS)
#define HAVE_addhi_predicable (TARGET_V2_INSNS)
#define HAVE_subhi_predicable (TARGET_V2_INSNS)
#define HAVE_andqi_predicable (TARGET_V2_INSNS)
#define HAVE_orqi_predicable (TARGET_V2_INSNS)
#define HAVE_eorqi_predicable (TARGET_V2_INSNS)
#define HAVE_addqi_predicable (TARGET_V2_INSNS)
#define HAVE_subqi_predicable (TARGET_V2_INSNS)
#define HAVE_andsi_imm_clobber_predicable (TARGET_V2_INSNS)
#define HAVE_orsi_imm_clobber_predicable (TARGET_V2_INSNS)
#define HAVE_eorsi_imm_clobber_predicable (TARGET_V2_INSNS)
#define HAVE_addsi_imm_clobber_predicable (TARGET_V2_INSNS)
#define HAVE_subsi_imm_clobber_predicable (TARGET_V2_INSNS)
#define HAVE_andhi_imm_clobber_predicable (TARGET_V2_INSNS)
#define HAVE_orhi_imm_clobber_predicable (TARGET_V2_INSNS)
#define HAVE_eorhi_imm_clobber_predicable (TARGET_V2_INSNS)
#define HAVE_addhi_imm_clobber_predicable (TARGET_V2_INSNS)
#define HAVE_subhi_imm_clobber_predicable (TARGET_V2_INSNS)
#define HAVE_andqi_imm_clobber_predicable (TARGET_V2_INSNS)
#define HAVE_orqi_imm_clobber_predicable (TARGET_V2_INSNS)
#define HAVE_eorqi_imm_clobber_predicable (TARGET_V2_INSNS)
#define HAVE_addqi_imm_clobber_predicable (TARGET_V2_INSNS)
#define HAVE_subqi_imm_clobber_predicable (TARGET_V2_INSNS)
#define HAVE_zero_extendhisi_clobber_predicable (TARGET_V2_INSNS)
#define HAVE_zero_extendqisi_clobber_predicable (TARGET_V2_INSNS)
#define HAVE_zero_extendqihi_clobber_predicable (TARGET_V2_INSNS)
#define HAVE_divmodsi4_internal 1
#define HAVE_udivmodsi4_internal 1
#define HAVE_ashlsi3 1
#define HAVE_ashrsi3 1
#define HAVE_lshrsi3 1
#define HAVE_negsi2 1
#define HAVE_negsi2_predicable (TARGET_V2_INSNS)
#define HAVE_abssi2 1
#define HAVE_one_cmplsi2 1
#define HAVE_one_cmplsi2_predicable (TARGET_V2_INSNS)
#define HAVE_bldsi 1
#define HAVE_cmpdi_internal 1
#define HAVE_cmpsi_internal 1
#define HAVE_cmphi_internal 1
#define HAVE_cmpqi_internal 1
#define HAVE_tstsi_internal 1
#define HAVE_tstdi_internal 1
#define HAVE_truncdisi2 1
#define HAVE_extendhisi2 1
#define HAVE_extendqisi2 1
#define HAVE_extendqihi2 1
#define HAVE_zero_extendhisi2 1
#define HAVE_zero_extendqisi2 1
#define HAVE_zero_extendqihi2 1
#define HAVE_ldsisi_predicable_se (TARGET_V2_INSNS)
#define HAVE_ldsihi_predicable_se (TARGET_V2_INSNS)
#define HAVE_ldsiqi_predicable_se (TARGET_V2_INSNS)
#define HAVE_ldsisi_predicable_ze (TARGET_V2_INSNS)
#define HAVE_ldsihi_predicable_ze (TARGET_V2_INSNS)
#define HAVE_ldsiqi_predicable_ze (TARGET_V2_INSNS)
#define HAVE_ldhi_predicable_ze (TARGET_V2_INSNS)
#define HAVE_ldhi_predicable_se (TARGET_V2_INSNS)
#define HAVE_seq 1
#define HAVE_sne 1
#define HAVE_sgt 1
#define HAVE_sge 1
#define HAVE_slt 1
#define HAVE_sle 1
#define HAVE_sgtu 1
#define HAVE_sgeu 1
#define HAVE_sltu 1
#define HAVE_sleu 1
#define HAVE_smi 1
#define HAVE_spl 1
#define HAVE_bmi 1
#define HAVE_bpl 1
#define HAVE_beq 1
#define HAVE_bne 1
#define HAVE_bgt 1
#define HAVE_bge 1
#define HAVE_blt 1
#define HAVE_ble 1
#define HAVE_bgtu 1
#define HAVE_bgeu 1
#define HAVE_bltu 1
#define HAVE_bleu 1
#define HAVE_addsicc_cmpdi_reg (TARGET_V2_INSNS)
#define HAVE_addhicc_cmpdi_reg (TARGET_V2_INSNS)
#define HAVE_addqicc_cmpdi_reg (TARGET_V2_INSNS)
#define HAVE_addsicc_cmpsi_reg (TARGET_V2_INSNS)
#define HAVE_addhicc_cmpsi_reg (TARGET_V2_INSNS)
#define HAVE_addqicc_cmpsi_reg (TARGET_V2_INSNS)
#define HAVE_addsicc_cmphi_reg (TARGET_V2_INSNS)
#define HAVE_addhicc_cmphi_reg (TARGET_V2_INSNS)
#define HAVE_addqicc_cmphi_reg (TARGET_V2_INSNS)
#define HAVE_addsicc_cmpqi_reg (TARGET_V2_INSNS)
#define HAVE_addhicc_cmpqi_reg (TARGET_V2_INSNS)
#define HAVE_addqicc_cmpqi_reg (TARGET_V2_INSNS)
#define HAVE_addsicc_cmpdi 1
#define HAVE_addhicc_cmpdi 1
#define HAVE_addqicc_cmpdi 1
#define HAVE_addsicc_cmpsi 1
#define HAVE_addhicc_cmpsi 1
#define HAVE_addqicc_cmpsi 1
#define HAVE_addsicc_cmphi 1
#define HAVE_addhicc_cmphi 1
#define HAVE_addqicc_cmphi 1
#define HAVE_addsicc_cmpqi 1
#define HAVE_addhicc_cmpqi 1
#define HAVE_addqicc_cmpqi 1
#define HAVE_movsfcc_cmpdi 1
#define HAVE_movsfcc_cmpsi 1
#define HAVE_movsfcc_cmphi 1
#define HAVE_movsfcc_cmpqi 1
#define HAVE_movsicc_cmpdi 1
#define HAVE_movsicc_cmpsi 1
#define HAVE_movsicc_cmphi 1
#define HAVE_movsicc_cmpqi 1
#define HAVE_movhicc_cmpdi 1
#define HAVE_movhicc_cmpsi 1
#define HAVE_movhicc_cmphi 1
#define HAVE_movhicc_cmpqi 1
#define HAVE_movqicc_cmpdi 1
#define HAVE_movqicc_cmpsi 1
#define HAVE_movqicc_cmphi 1
#define HAVE_movqicc_cmpqi 1
#define HAVE_jump 1
#define HAVE_call_internal 1
#define HAVE_call_value_internal 1
#define HAVE_return (USE_RETURN_INSN (FALSE))
#define HAVE_return_cond (USE_RETURN_INSN (TRUE))
#define HAVE_return_cond_predicable (USE_RETURN_INSN (TRUE))
#define HAVE_return_imm (USE_RETURN_INSN (FALSE) && \
   ((INTVAL(operands[0]) == -1) || (INTVAL(operands[0]) == 0) || (INTVAL(operands[0]) == 1)))
#define HAVE_return_imm_cond (USE_RETURN_INSN (TRUE) && \
   ((INTVAL(operands[0]) == -1) || (INTVAL(operands[0]) == 0) || (INTVAL(operands[0]) == 1)))
#define HAVE_return_imm_predicable (USE_RETURN_INSN (TRUE) && \
   ((INTVAL(operands[0]) == -1) || (INTVAL(operands[0]) == 0) || (INTVAL(operands[0]) == 1)))
#define HAVE_return_sireg (USE_RETURN_INSN (TRUE))
#define HAVE_return_v2hireg (USE_RETURN_INSN (TRUE))
#define HAVE_return_v4qireg (USE_RETURN_INSN (TRUE))
#define HAVE_return_sireg_cond (USE_RETURN_INSN (TRUE))
#define HAVE_return_v2hireg_cond (USE_RETURN_INSN (TRUE))
#define HAVE_return_v4qireg_cond (USE_RETURN_INSN (TRUE))
#define HAVE_nop 1
#define HAVE_indirect_jump_internal 1
#define HAVE_tablejump_add (flag_pic && \
   ((INTVAL(operands[2]) == 0) || (INTVAL(operands[2]) == 2) || \
    (INTVAL(operands[2]) == 4) || (INTVAL(operands[2]) == 8)))
#define HAVE_tablejump_insn (!flag_pic)
#define HAVE_prefetch 1
#define HAVE_eh_return 1
#define HAVE_ffssi2 1
#define HAVE_bswap_16 1
#define HAVE_bswap_32 1
#define HAVE_blockage 1
#define HAVE_clzsi2 1
#define HAVE_ctzsi2 1
#define HAVE_cache 1
#define HAVE_sync 1
#define HAVE_tlbr 1
#define HAVE_tlbw 1
#define HAVE_tlbs 1
#define HAVE_breakpoint 1
#define HAVE_mtsr 1
#define HAVE_mfsr 1
#define HAVE_mtdr 1
#define HAVE_mfdr 1
#define HAVE_musfr 1
#define HAVE_mustr 1
#define HAVE_ssrf 1
#define HAVE_csrf 1
#define HAVE_frs 1
#define HAVE_sats (TARGET_DSP)
#define HAVE_satu (TARGET_DSP)
#define HAVE_satrnds (TARGET_DSP)
#define HAVE_satrndu (TARGET_DSP)
#define HAVE_align_4 1
#define HAVE_consttable_start 1
#define HAVE_consttable_end 1
#define HAVE_consttable_4 1
#define HAVE_consttable_8 1
#define HAVE_consttable_16 1
#define HAVE_cop 1
#define HAVE_mvcrsi 1
#define HAVE_mvcrdi 1
#define HAVE_mvrcsi 1
#define HAVE_mvrcdi 1
#define HAVE_sibcall_epilogue 1
#define HAVE_ldxi ((INTVAL(operands[3]) == 24 || INTVAL(operands[3]) == 16 || INTVAL(operands[3]) == 8 \
   || INTVAL(operands[3]) == 0))
#define HAVE_vec_setv2hi_hi 1
#define HAVE_vec_setv2hi_lo 1
#define HAVE_vec_extractv2hi 1
#define HAVE_vec_extractv4qi 1
#define HAVE_concatv2hi 1
#define HAVE_sync_compare_and_swapsi 1
#define HAVE_sync_loadsi 1
#define HAVE_sync_store_if_lock 1
#define HAVE_sync_lock_test_and_setsi 1
#define HAVE_addv2hi3 (TARGET_SIMD)
#define HAVE_addv4qi3 (TARGET_SIMD)
#define HAVE_subv2hi3 (TARGET_SIMD)
#define HAVE_subv4qi3 (TARGET_SIMD)
#define HAVE_absv2hi2 (TARGET_SIMD)
#define HAVE_absv4qi2 (TARGET_SIMD)
#define HAVE_ashlv2hi3 (TARGET_SIMD)
#define HAVE_ashlv4qi3 (TARGET_SIMD)
#define HAVE_ashrv2hi3 (TARGET_SIMD)
#define HAVE_ashrv4qi3 (TARGET_SIMD)
#define HAVE_lshrv2hi3 (TARGET_SIMD)
#define HAVE_lshrv4qi3 (TARGET_SIMD)
#define HAVE_smaxv2hi3 (TARGET_SIMD)
#define HAVE_sminv2hi3 (TARGET_SIMD)
#define HAVE_umaxv4qi3 (TARGET_SIMD)
#define HAVE_uminv4qi3 (TARGET_SIMD)
#define HAVE_addsubv2hi (TARGET_SIMD)
#define HAVE_subaddv2hi (TARGET_SIMD)
#define HAVE_mulsf3 (TARGET_HARD_FLOAT)
#define HAVE_nmulsf3 (TARGET_HARD_FLOAT)
#define HAVE_macsf3 (TARGET_HARD_FLOAT)
#define HAVE_nmacsf3 (TARGET_HARD_FLOAT)
#define HAVE_msubacsf3 (TARGET_HARD_FLOAT)
#define HAVE_nmsubacsf3 (TARGET_HARD_FLOAT)
#define HAVE_addsf3 (TARGET_HARD_FLOAT)
#define HAVE_subsf3 (TARGET_HARD_FLOAT)
#define HAVE_negsf2 (TARGET_HARD_FLOAT)
#define HAVE_abssf2 (TARGET_HARD_FLOAT)
#define HAVE_truncdfsf2 (TARGET_HARD_FLOAT)
#define HAVE_extendsfdf2 (TARGET_HARD_FLOAT)
#define HAVE_muldf3 (TARGET_HARD_FLOAT)
#define HAVE_nmuldf3 (TARGET_HARD_FLOAT)
#define HAVE_macdf3 (TARGET_HARD_FLOAT)
#define HAVE_msubacdf3 (TARGET_HARD_FLOAT)
#define HAVE_nmsubacdf3 (TARGET_HARD_FLOAT)
#define HAVE_nmacdf3 (TARGET_HARD_FLOAT)
#define HAVE_adddf3 (TARGET_HARD_FLOAT)
#define HAVE_subdf3 (TARGET_HARD_FLOAT)
#define HAVE_negdf2 (TARGET_HARD_FLOAT)
#define HAVE_absdf2 (TARGET_HARD_FLOAT)
#define HAVE_cmpdf_internal (TARGET_HARD_FLOAT)
#define HAVE_cmpsf_internal (TARGET_HARD_FLOAT)
#define HAVE_fpcc_to_reg (TARGET_HARD_FLOAT)
#define HAVE_reg_to_cc (TARGET_HARD_FLOAT)
#define HAVE_stm_fp (TARGET_HARD_FLOAT)
#define HAVE_movqi 1
#define HAVE_movhi 1
#define HAVE_movmisalignsi (TARGET_UNALIGNED_WORD)
#define HAVE_movsi 1
#define HAVE_movv2hi 1
#define HAVE_movv4qi 1
#define HAVE_movdi 1
#define HAVE_movti (TARGET_ARCH_AP)
#define HAVE_movsf 1
#define HAVE_movdf 1
#define HAVE_movmemsi 1
#define HAVE_extv 1
#define HAVE_extzv 1
#define HAVE_divmodsi4 1
#define HAVE_udivmodsi4 1
#define HAVE_cmpdi 1
#define HAVE_cmpsi 1
#define HAVE_cmphi 1
#define HAVE_cmpqi 1
#define HAVE_tstsi 1
#define HAVE_tstdi 1
#define HAVE_addsicc 1
#define HAVE_addhicc 1
#define HAVE_addqicc 1
#define HAVE_movsfcc 1
#define HAVE_movsicc 1
#define HAVE_movhicc 1
#define HAVE_movqicc 1
#define HAVE_call 1
#define HAVE_call_value 1
#define HAVE_untyped_call 1
#define HAVE_nonlocal_goto_receiver (TARGET_RETURN_STACK)
#define HAVE_builtin_setjmp_receiver (flag_pic)
#define HAVE_indirect_jump 1
#define HAVE_casesi 1
#define HAVE_prologue 1
#define HAVE_epilogue 1
#define HAVE_vec_setv2hi 1
#define HAVE_sync_addsi 1
#define HAVE_sync_subsi 1
#define HAVE_sync_andsi 1
#define HAVE_sync_iorsi 1
#define HAVE_sync_xorsi 1
#define HAVE_sync_old_addsi 1
#define HAVE_sync_old_subsi 1
#define HAVE_sync_old_andsi 1
#define HAVE_sync_old_iorsi 1
#define HAVE_sync_old_xorsi 1
#define HAVE_sync_new_addsi 1
#define HAVE_sync_new_subsi 1
#define HAVE_sync_new_andsi 1
#define HAVE_sync_new_iorsi 1
#define HAVE_sync_new_xorsi 1
#define HAVE_cmpdf (TARGET_HARD_FLOAT)
#define HAVE_cmpsf (TARGET_HARD_FLOAT)
extern rtx        gen_movsi_internal                     (rtx, ...);
extern rtx        gen_movv2hi_internal                   (rtx, ...);
extern rtx        gen_movv4qi_internal                   (rtx, ...);
extern rtx        gen_mov_symbol_lo                      (rtx, ...);
extern rtx        gen_add_symbol_hi                      (rtx, ...);
extern rtx        gen_pic_load_addr                      (rtx, ...);
extern rtx        gen_pic_compute_got_from_pc            (rtx, ...);
extern rtx        gen_ldsf_predicable                    (rtx, ...);
extern rtx        gen_ldsi_predicable                    (rtx, ...);
extern rtx        gen_ldhi_predicable                    (rtx, ...);
extern rtx        gen_ldqi_predicable                    (rtx, ...);
extern rtx        gen_stsf_predicable                    (rtx, ...);
extern rtx        gen_stsi_predicable                    (rtx, ...);
extern rtx        gen_sthi_predicable                    (rtx, ...);
extern rtx        gen_stqi_predicable                    (rtx, ...);
extern rtx        gen_movsf_predicable                   (rtx, ...);
extern rtx        gen_movsi_predicable                   (rtx, ...);
extern rtx        gen_movhi_predicable                   (rtx, ...);
extern rtx        gen_movqi_predicable                   (rtx, ...);
extern rtx        gen_insv                               (rtx, ...);
extern rtx        gen_extv_internal                      (rtx, ...);
extern rtx        gen_extzv_internal                     (rtx, ...);
extern rtx        gen_pushm                              (rtx, ...);
extern rtx        gen_stm                                (rtx, ...);
extern rtx        gen_popm                               (rtx, ...);
extern rtx        gen_addsi3                             (rtx, ...);
extern rtx        gen_addhi3                             (rtx, ...);
extern rtx        gen_addqi3                             (rtx, ...);
extern rtx        gen_addsi3_lsl                         (rtx, ...);
extern rtx        gen_addhi3_lsl                         (rtx, ...);
extern rtx        gen_addqi3_lsl                         (rtx, ...);
extern rtx        gen_addsi3_lsl2                        (rtx, ...);
extern rtx        gen_addhi3_lsl2                        (rtx, ...);
extern rtx        gen_addqi3_lsl2                        (rtx, ...);
extern rtx        gen_addsi3_mul                         (rtx, ...);
extern rtx        gen_addhi3_mul                         (rtx, ...);
extern rtx        gen_addqi3_mul                         (rtx, ...);
extern rtx        gen_addsi3_mul2                        (rtx, ...);
extern rtx        gen_addhi3_mul2                        (rtx, ...);
extern rtx        gen_addqi3_mul2                        (rtx, ...);
extern rtx        gen_adddi3                             (rtx, ...);
extern rtx        gen_addsi_imm_predicable               (rtx, ...);
extern rtx        gen_addhi_imm_predicable               (rtx, ...);
extern rtx        gen_addqi_imm_predicable               (rtx, ...);
extern rtx        gen_subsi3                             (rtx, ...);
extern rtx        gen_subhi3                             (rtx, ...);
extern rtx        gen_subqi3                             (rtx, ...);
extern rtx        gen_subdi3                             (rtx, ...);
extern rtx        gen_subsi_imm_predicable               (rtx, ...);
extern rtx        gen_subhi_imm_predicable               (rtx, ...);
extern rtx        gen_subqi_imm_predicable               (rtx, ...);
extern rtx        gen_rsubsi_imm_predicable              (rtx, ...);
extern rtx        gen_rsubhi_imm_predicable              (rtx, ...);
extern rtx        gen_rsubqi_imm_predicable              (rtx, ...);
extern rtx        gen_mulqi3                             (rtx, ...);
extern rtx        gen_mulsi3                             (rtx, ...);
extern rtx        gen_mulhisi3                           (rtx, ...);
extern rtx        gen_mulnhisi3                          (rtx, ...);
extern rtx        gen_machisi3                           (rtx, ...);
extern rtx        gen_mulsidi3                           (rtx, ...);
extern rtx        gen_umulsidi3                          (rtx, ...);
extern rtx        gen_mulaccsidi3                        (rtx, ...);
extern rtx        gen_umulaccsidi3                       (rtx, ...);
extern rtx        gen_mulsathh_h                         (rtx, ...);
extern rtx        gen_mulsatrndhh_h                      (rtx, ...);
extern rtx        gen_mulsathh_w                         (rtx, ...);
extern rtx        gen_mulsatwh_w                         (rtx, ...);
extern rtx        gen_mulsatrndwh_w                      (rtx, ...);
extern rtx        gen_macsathh_w                         (rtx, ...);
extern rtx        gen_mulwh_d                            (rtx, ...);
extern rtx        gen_mulnwh_d                           (rtx, ...);
extern rtx        gen_macwh_d                            (rtx, ...);
extern rtx        gen_machh_d                            (rtx, ...);
extern rtx        gen_satadd_w                           (rtx, ...);
extern rtx        gen_satsub_w                           (rtx, ...);
extern rtx        gen_satadd_h                           (rtx, ...);
extern rtx        gen_satsub_h                           (rtx, ...);
extern rtx        gen_sminsi3                            (rtx, ...);
extern rtx        gen_smaxsi3                            (rtx, ...);
extern rtx        gen_andsi_lshift                       (rtx, ...);
extern rtx        gen_iorsi_lshift                       (rtx, ...);
extern rtx        gen_xorsi_lshift                       (rtx, ...);
extern rtx        gen_andnsi                             (rtx, ...);
extern rtx        gen_andsi3                             (rtx, ...);
extern rtx        gen_anddi3                             (rtx, ...);
extern rtx        gen_iorsi3                             (rtx, ...);
extern rtx        gen_iordi3                             (rtx, ...);
extern rtx        gen_xorsi3                             (rtx, ...);
extern rtx        gen_xordi3                             (rtx, ...);
extern rtx        gen_andsi_predicable                   (rtx, ...);
extern rtx        gen_orsi_predicable                    (rtx, ...);
extern rtx        gen_eorsi_predicable                   (rtx, ...);
extern rtx        gen_addsi_predicable                   (rtx, ...);
extern rtx        gen_subsi_predicable                   (rtx, ...);
extern rtx        gen_andhi_predicable                   (rtx, ...);
extern rtx        gen_orhi_predicable                    (rtx, ...);
extern rtx        gen_eorhi_predicable                   (rtx, ...);
extern rtx        gen_addhi_predicable                   (rtx, ...);
extern rtx        gen_subhi_predicable                   (rtx, ...);
extern rtx        gen_andqi_predicable                   (rtx, ...);
extern rtx        gen_orqi_predicable                    (rtx, ...);
extern rtx        gen_eorqi_predicable                   (rtx, ...);
extern rtx        gen_addqi_predicable                   (rtx, ...);
extern rtx        gen_subqi_predicable                   (rtx, ...);
extern rtx        gen_andsi_imm_clobber_predicable       (rtx, ...);
extern rtx        gen_orsi_imm_clobber_predicable        (rtx, ...);
extern rtx        gen_eorsi_imm_clobber_predicable       (rtx, ...);
extern rtx        gen_addsi_imm_clobber_predicable       (rtx, ...);
extern rtx        gen_subsi_imm_clobber_predicable       (rtx, ...);
extern rtx        gen_andhi_imm_clobber_predicable       (rtx, ...);
extern rtx        gen_orhi_imm_clobber_predicable        (rtx, ...);
extern rtx        gen_eorhi_imm_clobber_predicable       (rtx, ...);
extern rtx        gen_addhi_imm_clobber_predicable       (rtx, ...);
extern rtx        gen_subhi_imm_clobber_predicable       (rtx, ...);
extern rtx        gen_andqi_imm_clobber_predicable       (rtx, ...);
extern rtx        gen_orqi_imm_clobber_predicable        (rtx, ...);
extern rtx        gen_eorqi_imm_clobber_predicable       (rtx, ...);
extern rtx        gen_addqi_imm_clobber_predicable       (rtx, ...);
extern rtx        gen_subqi_imm_clobber_predicable       (rtx, ...);
extern rtx        gen_zero_extendhisi_clobber_predicable (rtx, ...);
extern rtx        gen_zero_extendqisi_clobber_predicable (rtx, ...);
extern rtx        gen_zero_extendqihi_clobber_predicable (rtx, ...);
extern rtx        gen_divmodsi4_internal                 (rtx, ...);
extern rtx        gen_udivmodsi4_internal                (rtx, ...);
extern rtx        gen_ashlsi3                            (rtx, ...);
extern rtx        gen_ashrsi3                            (rtx, ...);
extern rtx        gen_lshrsi3                            (rtx, ...);
extern rtx        gen_negsi2                             (rtx, ...);
extern rtx        gen_negsi2_predicable                  (rtx, ...);
extern rtx        gen_abssi2                             (rtx, ...);
extern rtx        gen_one_cmplsi2                        (rtx, ...);
extern rtx        gen_one_cmplsi2_predicable             (rtx, ...);
extern rtx        gen_bldsi                              (rtx, ...);
extern rtx        gen_cmpdi_internal                     (rtx, ...);
extern rtx        gen_cmpsi_internal                     (rtx, ...);
extern rtx        gen_cmphi_internal                     (rtx, ...);
extern rtx        gen_cmpqi_internal                     (rtx, ...);
extern rtx        gen_tstsi_internal                     (rtx, ...);
extern rtx        gen_tstdi_internal                     (rtx, ...);
extern rtx        gen_truncdisi2                         (rtx, ...);
extern rtx        gen_extendhisi2                        (rtx, ...);
extern rtx        gen_extendqisi2                        (rtx, ...);
extern rtx        gen_extendqihi2                        (rtx, ...);
extern rtx        gen_zero_extendhisi2                   (rtx, ...);
extern rtx        gen_zero_extendqisi2                   (rtx, ...);
extern rtx        gen_zero_extendqihi2                   (rtx, ...);
extern rtx        gen_ldsisi_predicable_se               (rtx, ...);
extern rtx        gen_ldsihi_predicable_se               (rtx, ...);
extern rtx        gen_ldsiqi_predicable_se               (rtx, ...);
extern rtx        gen_ldsisi_predicable_ze               (rtx, ...);
extern rtx        gen_ldsihi_predicable_ze               (rtx, ...);
extern rtx        gen_ldsiqi_predicable_ze               (rtx, ...);
extern rtx        gen_ldhi_predicable_ze                 (rtx, ...);
extern rtx        gen_ldhi_predicable_se                 (rtx, ...);
extern rtx        gen_seq                                (rtx, ...);
extern rtx        gen_sne                                (rtx, ...);
extern rtx        gen_sgt                                (rtx, ...);
extern rtx        gen_sge                                (rtx, ...);
extern rtx        gen_slt                                (rtx, ...);
extern rtx        gen_sle                                (rtx, ...);
extern rtx        gen_sgtu                               (rtx, ...);
extern rtx        gen_sgeu                               (rtx, ...);
extern rtx        gen_sltu                               (rtx, ...);
extern rtx        gen_sleu                               (rtx, ...);
extern rtx        gen_smi                                (rtx, ...);
extern rtx        gen_spl                                (rtx, ...);
extern rtx        gen_bmi                                (rtx, ...);
extern rtx        gen_bpl                                (rtx, ...);
extern rtx        gen_beq                                (rtx, ...);
extern rtx        gen_bne                                (rtx, ...);
extern rtx        gen_bgt                                (rtx, ...);
extern rtx        gen_bge                                (rtx, ...);
extern rtx        gen_blt                                (rtx, ...);
extern rtx        gen_ble                                (rtx, ...);
extern rtx        gen_bgtu                               (rtx, ...);
extern rtx        gen_bgeu                               (rtx, ...);
extern rtx        gen_bltu                               (rtx, ...);
extern rtx        gen_bleu                               (rtx, ...);
extern rtx        gen_addsicc_cmpdi_reg                  (rtx, ...);
extern rtx        gen_addhicc_cmpdi_reg                  (rtx, ...);
extern rtx        gen_addqicc_cmpdi_reg                  (rtx, ...);
extern rtx        gen_addsicc_cmpsi_reg                  (rtx, ...);
extern rtx        gen_addhicc_cmpsi_reg                  (rtx, ...);
extern rtx        gen_addqicc_cmpsi_reg                  (rtx, ...);
extern rtx        gen_addsicc_cmphi_reg                  (rtx, ...);
extern rtx        gen_addhicc_cmphi_reg                  (rtx, ...);
extern rtx        gen_addqicc_cmphi_reg                  (rtx, ...);
extern rtx        gen_addsicc_cmpqi_reg                  (rtx, ...);
extern rtx        gen_addhicc_cmpqi_reg                  (rtx, ...);
extern rtx        gen_addqicc_cmpqi_reg                  (rtx, ...);
extern rtx        gen_addsicc_cmpdi                      (rtx, ...);
extern rtx        gen_addhicc_cmpdi                      (rtx, ...);
extern rtx        gen_addqicc_cmpdi                      (rtx, ...);
extern rtx        gen_addsicc_cmpsi                      (rtx, ...);
extern rtx        gen_addhicc_cmpsi                      (rtx, ...);
extern rtx        gen_addqicc_cmpsi                      (rtx, ...);
extern rtx        gen_addsicc_cmphi                      (rtx, ...);
extern rtx        gen_addhicc_cmphi                      (rtx, ...);
extern rtx        gen_addqicc_cmphi                      (rtx, ...);
extern rtx        gen_addsicc_cmpqi                      (rtx, ...);
extern rtx        gen_addhicc_cmpqi                      (rtx, ...);
extern rtx        gen_addqicc_cmpqi                      (rtx, ...);
extern rtx        gen_movsfcc_cmpdi                      (rtx, ...);
extern rtx        gen_movsfcc_cmpsi                      (rtx, ...);
extern rtx        gen_movsfcc_cmphi                      (rtx, ...);
extern rtx        gen_movsfcc_cmpqi                      (rtx, ...);
extern rtx        gen_movsicc_cmpdi                      (rtx, ...);
extern rtx        gen_movsicc_cmpsi                      (rtx, ...);
extern rtx        gen_movsicc_cmphi                      (rtx, ...);
extern rtx        gen_movsicc_cmpqi                      (rtx, ...);
extern rtx        gen_movhicc_cmpdi                      (rtx, ...);
extern rtx        gen_movhicc_cmpsi                      (rtx, ...);
extern rtx        gen_movhicc_cmphi                      (rtx, ...);
extern rtx        gen_movhicc_cmpqi                      (rtx, ...);
extern rtx        gen_movqicc_cmpdi                      (rtx, ...);
extern rtx        gen_movqicc_cmpsi                      (rtx, ...);
extern rtx        gen_movqicc_cmphi                      (rtx, ...);
extern rtx        gen_movqicc_cmpqi                      (rtx, ...);
extern rtx        gen_jump                               (rtx, ...);
extern rtx        gen_call_internal                      (rtx, ...);
extern rtx        gen_call_value_internal                (rtx, ...);
extern rtx        gen_return                             (void);
extern rtx        gen_return_cond                        (rtx, ...);
extern rtx        gen_return_cond_predicable             (void);
extern rtx        gen_return_imm                         (rtx, ...);
extern rtx        gen_return_imm_cond                    (rtx, ...);
extern rtx        gen_return_imm_predicable              (rtx, ...);
extern rtx        gen_return_sireg                       (rtx, ...);
extern rtx        gen_return_v2hireg                     (rtx, ...);
extern rtx        gen_return_v4qireg                     (rtx, ...);
extern rtx        gen_return_sireg_cond                  (rtx, ...);
extern rtx        gen_return_v2hireg_cond                (rtx, ...);
extern rtx        gen_return_v4qireg_cond                (rtx, ...);
extern rtx        gen_nop                                (void);
extern rtx        gen_indirect_jump_internal             (rtx, ...);
extern rtx        gen_tablejump_add                      (rtx, ...);
extern rtx        gen_tablejump_insn                     (rtx, ...);
extern rtx        gen_prefetch                           (rtx, ...);
extern rtx        gen_eh_return                          (rtx, ...);
extern rtx        gen_ffssi2                             (rtx, ...);
extern rtx        gen_bswap_16                           (rtx, ...);
extern rtx        gen_bswap_32                           (rtx, ...);
extern rtx        gen_blockage                           (void);
extern rtx        gen_clzsi2                             (rtx, ...);
extern rtx        gen_ctzsi2                             (rtx, ...);
extern rtx        gen_cache                              (rtx, ...);
extern rtx        gen_sync                               (rtx, ...);
extern rtx        gen_tlbr                               (void);
extern rtx        gen_tlbw                               (void);
extern rtx        gen_tlbs                               (void);
extern rtx        gen_breakpoint                         (void);
extern rtx        gen_mtsr                               (rtx, ...);
extern rtx        gen_mfsr                               (rtx, ...);
extern rtx        gen_mtdr                               (rtx, ...);
extern rtx        gen_mfdr                               (rtx, ...);
extern rtx        gen_musfr                              (rtx, ...);
extern rtx        gen_mustr                              (rtx, ...);
extern rtx        gen_ssrf                               (rtx, ...);
extern rtx        gen_csrf                               (rtx, ...);
extern rtx        gen_frs                                (void);
extern rtx        gen_sats                               (rtx, ...);
extern rtx        gen_satu                               (rtx, ...);
extern rtx        gen_satrnds                            (rtx, ...);
extern rtx        gen_satrndu                            (rtx, ...);
extern rtx        gen_align_4                            (void);
extern rtx        gen_consttable_start                   (void);
extern rtx        gen_consttable_end                     (void);
extern rtx        gen_consttable_4                       (rtx, ...);
extern rtx        gen_consttable_8                       (rtx, ...);
extern rtx        gen_consttable_16                      (rtx, ...);
extern rtx        gen_cop                                (rtx, ...);
extern rtx        gen_mvcrsi                             (rtx, ...);
extern rtx        gen_mvcrdi                             (rtx, ...);
extern rtx        gen_mvrcsi                             (rtx, ...);
extern rtx        gen_mvrcdi                             (rtx, ...);
extern rtx        gen_sibcall_epilogue                   (void);
extern rtx        gen_ldxi                               (rtx, ...);
extern rtx        gen_vec_setv2hi_hi                     (rtx, ...);
extern rtx        gen_vec_setv2hi_lo                     (rtx, ...);
extern rtx        gen_vec_extractv2hi                    (rtx, ...);
extern rtx        gen_vec_extractv4qi                    (rtx, ...);
extern rtx        gen_concatv2hi                         (rtx, ...);
extern rtx        gen_sync_compare_and_swapsi            (rtx, ...);
extern rtx        gen_sync_loadsi                        (rtx, ...);
extern rtx        gen_sync_store_if_lock                 (rtx, ...);
extern rtx        gen_sync_lock_test_and_setsi           (rtx, ...);
extern rtx        gen_addv2hi3                           (rtx, ...);
extern rtx        gen_addv4qi3                           (rtx, ...);
extern rtx        gen_subv2hi3                           (rtx, ...);
extern rtx        gen_subv4qi3                           (rtx, ...);
extern rtx        gen_absv2hi2                           (rtx, ...);
extern rtx        gen_absv4qi2                           (rtx, ...);
extern rtx        gen_ashlv2hi3                          (rtx, ...);
extern rtx        gen_ashlv4qi3                          (rtx, ...);
extern rtx        gen_ashrv2hi3                          (rtx, ...);
extern rtx        gen_ashrv4qi3                          (rtx, ...);
extern rtx        gen_lshrv2hi3                          (rtx, ...);
extern rtx        gen_lshrv4qi3                          (rtx, ...);
extern rtx        gen_smaxv2hi3                          (rtx, ...);
extern rtx        gen_sminv2hi3                          (rtx, ...);
extern rtx        gen_umaxv4qi3                          (rtx, ...);
extern rtx        gen_uminv4qi3                          (rtx, ...);
extern rtx        gen_addsubv2hi                         (rtx, ...);
extern rtx        gen_subaddv2hi                         (rtx, ...);
extern rtx        gen_mulsf3                             (rtx, ...);
extern rtx        gen_nmulsf3                            (rtx, ...);
extern rtx        gen_macsf3                             (rtx, ...);
extern rtx        gen_nmacsf3                            (rtx, ...);
extern rtx        gen_msubacsf3                          (rtx, ...);
extern rtx        gen_nmsubacsf3                         (rtx, ...);
extern rtx        gen_addsf3                             (rtx, ...);
extern rtx        gen_subsf3                             (rtx, ...);
extern rtx        gen_negsf2                             (rtx, ...);
extern rtx        gen_abssf2                             (rtx, ...);
extern rtx        gen_truncdfsf2                         (rtx, ...);
extern rtx        gen_extendsfdf2                        (rtx, ...);
extern rtx        gen_muldf3                             (rtx, ...);
extern rtx        gen_nmuldf3                            (rtx, ...);
extern rtx        gen_macdf3                             (rtx, ...);
extern rtx        gen_msubacdf3                          (rtx, ...);
extern rtx        gen_nmsubacdf3                         (rtx, ...);
extern rtx        gen_nmacdf3                            (rtx, ...);
extern rtx        gen_adddf3                             (rtx, ...);
extern rtx        gen_subdf3                             (rtx, ...);
extern rtx        gen_negdf2                             (rtx, ...);
extern rtx        gen_absdf2                             (rtx, ...);
extern rtx        gen_cmpdf_internal                     (rtx, ...);
extern rtx        gen_cmpsf_internal                     (rtx, ...);
extern rtx        gen_fpcc_to_reg                        (rtx, ...);
extern rtx        gen_reg_to_cc                          (rtx, ...);
extern rtx        gen_stm_fp                             (rtx, ...);
extern rtx        gen_movqi                              (rtx, ...);
extern rtx        gen_movhi                              (rtx, ...);
extern rtx        gen_movmisalignsi                      (rtx, ...);
extern rtx        gen_movsi                              (rtx, ...);
extern rtx        gen_movv2hi                            (rtx, ...);
extern rtx        gen_movv4qi                            (rtx, ...);
extern rtx        gen_movdi                              (rtx, ...);
extern rtx        gen_movti                              (rtx, ...);
extern rtx        gen_movsf                              (rtx, ...);
extern rtx        gen_movdf                              (rtx, ...);
extern rtx        gen_movmemsi                           (rtx, ...);
extern rtx        gen_extv                               (rtx, ...);
extern rtx        gen_extzv                              (rtx, ...);
extern rtx        gen_divmodsi4                          (rtx, ...);
extern rtx        gen_udivmodsi4                         (rtx, ...);
extern rtx        gen_cmpdi                              (rtx, ...);
extern rtx        gen_cmpsi                              (rtx, ...);
extern rtx        gen_cmphi                              (rtx, ...);
extern rtx        gen_cmpqi                              (rtx, ...);
extern rtx        gen_tstsi                              (rtx, ...);
extern rtx        gen_tstdi                              (rtx, ...);
extern rtx        gen_addsicc                            (rtx, ...);
extern rtx        gen_addhicc                            (rtx, ...);
extern rtx        gen_addqicc                            (rtx, ...);
extern rtx        gen_movsfcc                            (rtx, ...);
extern rtx        gen_movsicc                            (rtx, ...);
extern rtx        gen_movhicc                            (rtx, ...);
extern rtx        gen_movqicc                            (rtx, ...);
#define GEN_CALL(A, B, C, D) gen_call ((A), (B))
extern rtx        gen_call                               (rtx, ...);
#define GEN_CALL_VALUE(A, B, C, D, E) gen_call_value ((A), (B), (C))
extern rtx        gen_call_value                         (rtx, ...);
extern rtx        gen_untyped_call                       (rtx, ...);
extern rtx        gen_nonlocal_goto_receiver             (void);
extern rtx        gen_builtin_setjmp_receiver            (rtx, ...);
extern rtx        gen_indirect_jump                      (rtx, ...);
extern rtx        gen_casesi                             (rtx, ...);
extern rtx        gen_prologue                           (void);
extern rtx        gen_epilogue                           (void);
extern rtx        gen_vec_setv2hi                        (rtx, ...);
extern rtx        gen_sync_addsi                         (rtx, ...);
extern rtx        gen_sync_subsi                         (rtx, ...);
extern rtx        gen_sync_andsi                         (rtx, ...);
extern rtx        gen_sync_iorsi                         (rtx, ...);
extern rtx        gen_sync_xorsi                         (rtx, ...);
extern rtx        gen_sync_old_addsi                     (rtx, ...);
extern rtx        gen_sync_old_subsi                     (rtx, ...);
extern rtx        gen_sync_old_andsi                     (rtx, ...);
extern rtx        gen_sync_old_iorsi                     (rtx, ...);
extern rtx        gen_sync_old_xorsi                     (rtx, ...);
extern rtx        gen_sync_new_addsi                     (rtx, ...);
extern rtx        gen_sync_new_subsi                     (rtx, ...);
extern rtx        gen_sync_new_andsi                     (rtx, ...);
extern rtx        gen_sync_new_iorsi                     (rtx, ...);
extern rtx        gen_sync_new_xorsi                     (rtx, ...);
extern rtx        gen_cmpdf                              (rtx, ...);
extern rtx        gen_cmpsf                              (rtx, ...);

#endif /* GCC_INSN_FLAGS_H */

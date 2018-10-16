/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md'.  */

#ifndef GCC_TM_PREDS_H
#define GCC_TM_PREDS_H

#ifdef HAVE_MACHINE_MODES
extern int general_operand (rtx, enum machine_mode);
extern int address_operand (rtx, enum machine_mode);
extern int register_operand (rtx, enum machine_mode);
extern int pmode_register_operand (rtx, enum machine_mode);
extern int scratch_operand (rtx, enum machine_mode);
extern int immediate_operand (rtx, enum machine_mode);
extern int const_int_operand (rtx, enum machine_mode);
extern int const_double_operand (rtx, enum machine_mode);
extern int nonimmediate_operand (rtx, enum machine_mode);
extern int nonmemory_operand (rtx, enum machine_mode);
extern int push_operand (rtx, enum machine_mode);
extern int pop_operand (rtx, enum machine_mode);
extern int memory_operand (rtx, enum machine_mode);
extern int indirect_operand (rtx, enum machine_mode);
extern int comparison_operator (rtx, enum machine_mode);
extern int avr32_indirect_register_operand (rtx, enum machine_mode);
extern int avr32_indexed_memory_operand (rtx, enum machine_mode);
extern int load_sb_memory_operand (rtx, enum machine_mode);
extern int extendqi_operand (rtx, enum machine_mode);
extern int post_inc_memory_operand (rtx, enum machine_mode);
extern int pre_dec_memory_operand (rtx, enum machine_mode);
extern int avr32_add_operand (rtx, enum machine_mode);
extern int power_of_two_operand (rtx, enum machine_mode);
extern int multiple_of_8_operand (rtx, enum machine_mode);
extern int multiple_of_16_operand (rtx, enum machine_mode);
extern int avr32_mask_upper_bits_operand (rtx, enum machine_mode);
extern int avr32_mul_operand (rtx, enum machine_mode);
extern int logical_binary_operator (rtx, enum machine_mode);
extern int logical_shift_operator (rtx, enum machine_mode);
extern int avr32_logical_shift_operand (rtx, enum machine_mode);
extern int avr32_logical_insn_operand (rtx, enum machine_mode);
extern int avr32_comparison_operator (rtx, enum machine_mode);
extern int avr32_cond3_comparison_operator (rtx, enum machine_mode);
extern int avr32_comparison_operand (rtx, enum machine_mode);
extern int one_bit_set_operand (rtx, enum machine_mode);
extern int one_bit_cleared_operand (rtx, enum machine_mode);
extern int avr32_hi16_immediate_operand (rtx, enum machine_mode);
extern int register_immediate_operand (rtx, enum machine_mode);
extern int register_const_int_operand (rtx, enum machine_mode);
extern int register_const_double_operand (rtx, enum machine_mode);
extern int avr32_label_ref_operand (rtx, enum machine_mode);
extern int avr32_const_pool_operand (rtx, enum machine_mode);
extern int avr32_const_pool_ref_operand (rtx, enum machine_mode);
extern int avr32_movti_src_operand (rtx, enum machine_mode);
extern int avr32_movti_dst_operand (rtx, enum machine_mode);
extern int avr32_k12_memory_operand (rtx, enum machine_mode);
extern int avr32_imm_disp_memory_operand (rtx, enum machine_mode);
extern int avr32_bswap_operand (rtx, enum machine_mode);
extern int avr32_cop_memory_operand (rtx, enum machine_mode);
extern int avr32_cop_move_operand (rtx, enum machine_mode);
extern int avr32_extract_shift_operand (rtx, enum machine_mode);
extern int avr32_fp_register_operand (rtx, enum machine_mode);
extern int avr32_symbol_operand (rtx, enum machine_mode);
extern int avr32_address_operand (rtx, enum machine_mode);
extern int avr32_ks16_address_operand (rtx, enum machine_mode);
extern int avr32_ks16_memory_operand (rtx, enum machine_mode);
extern int avr32_ks11_address_operand (rtx, enum machine_mode);
extern int avr32_call_operand (rtx, enum machine_mode);
extern int alu_operator (rtx, enum machine_mode);
extern int avr32_add_shift_immediate_operand (rtx, enum machine_mode);
extern int avr32_cond_register_immediate_operand (rtx, enum machine_mode);
extern int avr32_cond_immediate_operand (rtx, enum machine_mode);
extern int avr32_cond_move_operand (rtx, enum machine_mode);
extern int avr32_mov_immediate_operand (rtx, enum machine_mode);
#endif /* HAVE_MACHINE_MODES */

#endif /* tm-preds.h */

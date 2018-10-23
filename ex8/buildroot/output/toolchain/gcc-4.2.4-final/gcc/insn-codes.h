/* Generated automatically by the program `gencodes'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CODES_H
#define GCC_INSN_CODES_H

enum insn_code {
  CODE_FOR_movsi_internal = 2,
  CODE_FOR_movv2hi_internal = 3,
  CODE_FOR_movv4qi_internal = 4,
  CODE_FOR_mov_symbol_lo = 5,
  CODE_FOR_add_symbol_hi = 6,
  CODE_FOR_pic_load_addr = 7,
  CODE_FOR_pic_compute_got_from_pc = 8,
  CODE_FOR_ldsf_predicable = 13,
  CODE_FOR_ldsi_predicable = 14,
  CODE_FOR_ldhi_predicable = 15,
  CODE_FOR_ldqi_predicable = 16,
  CODE_FOR_stsf_predicable = 17,
  CODE_FOR_stsi_predicable = 18,
  CODE_FOR_sthi_predicable = 19,
  CODE_FOR_stqi_predicable = 20,
  CODE_FOR_movsf_predicable = 21,
  CODE_FOR_movsi_predicable = 22,
  CODE_FOR_movhi_predicable = 23,
  CODE_FOR_movqi_predicable = 24,
  CODE_FOR_insv = 25,
  CODE_FOR_extv_internal = 26,
  CODE_FOR_extzv_internal = 27,
  CODE_FOR_pushm = 28,
  CODE_FOR_stm = 29,
  CODE_FOR_popm = 30,
  CODE_FOR_addsi3 = 31,
  CODE_FOR_addhi3 = 32,
  CODE_FOR_addqi3 = 33,
  CODE_FOR_addsi3_lsl = 34,
  CODE_FOR_addhi3_lsl = 35,
  CODE_FOR_addqi3_lsl = 36,
  CODE_FOR_addsi3_lsl2 = 37,
  CODE_FOR_addhi3_lsl2 = 38,
  CODE_FOR_addqi3_lsl2 = 39,
  CODE_FOR_addsi3_mul = 40,
  CODE_FOR_addhi3_mul = 41,
  CODE_FOR_addqi3_mul = 42,
  CODE_FOR_addsi3_mul2 = 43,
  CODE_FOR_addhi3_mul2 = 44,
  CODE_FOR_addqi3_mul2 = 45,
  CODE_FOR_adddi3 = 46,
  CODE_FOR_addsi_imm_predicable = 47,
  CODE_FOR_addhi_imm_predicable = 48,
  CODE_FOR_addqi_imm_predicable = 49,
  CODE_FOR_subsi3 = 50,
  CODE_FOR_subhi3 = 51,
  CODE_FOR_subqi3 = 52,
  CODE_FOR_subdi3 = 59,
  CODE_FOR_subsi_imm_predicable = 60,
  CODE_FOR_subhi_imm_predicable = 61,
  CODE_FOR_subqi_imm_predicable = 62,
  CODE_FOR_rsubsi_imm_predicable = 63,
  CODE_FOR_rsubhi_imm_predicable = 64,
  CODE_FOR_rsubqi_imm_predicable = 65,
  CODE_FOR_mulqi3 = 66,
  CODE_FOR_mulsi3 = 67,
  CODE_FOR_mulhisi3 = 68,
  CODE_FOR_mulnhisi3 = 69,
  CODE_FOR_machisi3 = 70,
  CODE_FOR_mulsidi3 = 71,
  CODE_FOR_umulsidi3 = 72,
  CODE_FOR_mulaccsidi3 = 74,
  CODE_FOR_umulaccsidi3 = 75,
  CODE_FOR_mulsathh_h = 76,
  CODE_FOR_mulsatrndhh_h = 77,
  CODE_FOR_mulsathh_w = 78,
  CODE_FOR_mulsatwh_w = 79,
  CODE_FOR_mulsatrndwh_w = 80,
  CODE_FOR_macsathh_w = 81,
  CODE_FOR_mulwh_d = 82,
  CODE_FOR_mulnwh_d = 83,
  CODE_FOR_macwh_d = 84,
  CODE_FOR_machh_d = 85,
  CODE_FOR_satadd_w = 86,
  CODE_FOR_satsub_w = 87,
  CODE_FOR_satadd_h = 88,
  CODE_FOR_satsub_h = 89,
  CODE_FOR_sminsi3 = 90,
  CODE_FOR_smaxsi3 = 91,
  CODE_FOR_andsi_lshift = 92,
  CODE_FOR_iorsi_lshift = 93,
  CODE_FOR_xorsi_lshift = 94,
  CODE_FOR_andnsi = 95,
  CODE_FOR_andsi3 = 96,
  CODE_FOR_anddi3 = 97,
  CODE_FOR_iorsi3 = 98,
  CODE_FOR_iordi3 = 99,
  CODE_FOR_xorsi3 = 100,
  CODE_FOR_xordi3 = 101,
  CODE_FOR_andsi_predicable = 102,
  CODE_FOR_orsi_predicable = 103,
  CODE_FOR_eorsi_predicable = 104,
  CODE_FOR_addsi_predicable = 105,
  CODE_FOR_subsi_predicable = 106,
  CODE_FOR_andhi_predicable = 107,
  CODE_FOR_orhi_predicable = 108,
  CODE_FOR_eorhi_predicable = 109,
  CODE_FOR_addhi_predicable = 110,
  CODE_FOR_subhi_predicable = 111,
  CODE_FOR_andqi_predicable = 112,
  CODE_FOR_orqi_predicable = 113,
  CODE_FOR_eorqi_predicable = 114,
  CODE_FOR_addqi_predicable = 115,
  CODE_FOR_subqi_predicable = 116,
  CODE_FOR_andsi_imm_clobber_predicable = 117,
  CODE_FOR_orsi_imm_clobber_predicable = 118,
  CODE_FOR_eorsi_imm_clobber_predicable = 119,
  CODE_FOR_addsi_imm_clobber_predicable = 120,
  CODE_FOR_subsi_imm_clobber_predicable = 121,
  CODE_FOR_andhi_imm_clobber_predicable = 122,
  CODE_FOR_orhi_imm_clobber_predicable = 123,
  CODE_FOR_eorhi_imm_clobber_predicable = 124,
  CODE_FOR_addhi_imm_clobber_predicable = 125,
  CODE_FOR_subhi_imm_clobber_predicable = 126,
  CODE_FOR_andqi_imm_clobber_predicable = 127,
  CODE_FOR_orqi_imm_clobber_predicable = 128,
  CODE_FOR_eorqi_imm_clobber_predicable = 129,
  CODE_FOR_addqi_imm_clobber_predicable = 130,
  CODE_FOR_subqi_imm_clobber_predicable = 131,
  CODE_FOR_zero_extendhisi_clobber_predicable = 132,
  CODE_FOR_zero_extendqisi_clobber_predicable = 133,
  CODE_FOR_zero_extendqihi_clobber_predicable = 134,
  CODE_FOR_divmodsi4_internal = 135,
  CODE_FOR_udivmodsi4_internal = 136,
  CODE_FOR_ashlsi3 = 137,
  CODE_FOR_ashrsi3 = 138,
  CODE_FOR_lshrsi3 = 139,
  CODE_FOR_negsi2 = 140,
  CODE_FOR_negsi2_predicable = 141,
  CODE_FOR_abssi2 = 142,
  CODE_FOR_one_cmplsi2 = 143,
  CODE_FOR_one_cmplsi2_predicable = 144,
  CODE_FOR_bldsi = 145,
  CODE_FOR_cmpdi_internal = 146,
  CODE_FOR_cmpsi_internal = 147,
  CODE_FOR_cmphi_internal = 148,
  CODE_FOR_cmpqi_internal = 149,
  CODE_FOR_tstsi_internal = 150,
  CODE_FOR_tstdi_internal = 151,
  CODE_FOR_truncdisi2 = 152,
  CODE_FOR_extendhisi2 = 153,
  CODE_FOR_extendqisi2 = 154,
  CODE_FOR_extendqihi2 = 155,
  CODE_FOR_zero_extendhisi2 = 156,
  CODE_FOR_zero_extendqisi2 = 157,
  CODE_FOR_zero_extendqihi2 = 158,
  CODE_FOR_ldsisi_predicable_se = 159,
  CODE_FOR_ldsihi_predicable_se = 160,
  CODE_FOR_ldsiqi_predicable_se = 161,
  CODE_FOR_ldsisi_predicable_ze = 162,
  CODE_FOR_ldsihi_predicable_ze = 163,
  CODE_FOR_ldsiqi_predicable_ze = 164,
  CODE_FOR_ldhi_predicable_ze = 165,
  CODE_FOR_ldhi_predicable_se = 166,
  CODE_FOR_seq = 167,
  CODE_FOR_sne = 168,
  CODE_FOR_sgt = 169,
  CODE_FOR_sge = 170,
  CODE_FOR_slt = 171,
  CODE_FOR_sle = 172,
  CODE_FOR_sgtu = 173,
  CODE_FOR_sgeu = 174,
  CODE_FOR_sltu = 175,
  CODE_FOR_sleu = 176,
  CODE_FOR_smi = 177,
  CODE_FOR_spl = 178,
  CODE_FOR_bmi = 179,
  CODE_FOR_bpl = 181,
  CODE_FOR_beq = 183,
  CODE_FOR_bne = 184,
  CODE_FOR_bgt = 185,
  CODE_FOR_bge = 186,
  CODE_FOR_blt = 187,
  CODE_FOR_ble = 188,
  CODE_FOR_bgtu = 189,
  CODE_FOR_bgeu = 190,
  CODE_FOR_bltu = 191,
  CODE_FOR_bleu = 192,
  CODE_FOR_addsicc_cmpdi_reg = 203,
  CODE_FOR_addhicc_cmpdi_reg = 204,
  CODE_FOR_addqicc_cmpdi_reg = 205,
  CODE_FOR_addsicc_cmpsi_reg = 206,
  CODE_FOR_addhicc_cmpsi_reg = 207,
  CODE_FOR_addqicc_cmpsi_reg = 208,
  CODE_FOR_addsicc_cmphi_reg = 209,
  CODE_FOR_addhicc_cmphi_reg = 210,
  CODE_FOR_addqicc_cmphi_reg = 211,
  CODE_FOR_addsicc_cmpqi_reg = 212,
  CODE_FOR_addhicc_cmpqi_reg = 213,
  CODE_FOR_addqicc_cmpqi_reg = 214,
  CODE_FOR_addsicc_cmpdi = 215,
  CODE_FOR_addhicc_cmpdi = 216,
  CODE_FOR_addqicc_cmpdi = 217,
  CODE_FOR_addsicc_cmpsi = 218,
  CODE_FOR_addhicc_cmpsi = 219,
  CODE_FOR_addqicc_cmpsi = 220,
  CODE_FOR_addsicc_cmphi = 221,
  CODE_FOR_addhicc_cmphi = 222,
  CODE_FOR_addqicc_cmphi = 223,
  CODE_FOR_addsicc_cmpqi = 224,
  CODE_FOR_addhicc_cmpqi = 225,
  CODE_FOR_addqicc_cmpqi = 226,
  CODE_FOR_movsfcc_cmpdi = 227,
  CODE_FOR_movsfcc_cmpsi = 228,
  CODE_FOR_movsfcc_cmphi = 229,
  CODE_FOR_movsfcc_cmpqi = 230,
  CODE_FOR_movsicc_cmpdi = 231,
  CODE_FOR_movsicc_cmpsi = 232,
  CODE_FOR_movsicc_cmphi = 233,
  CODE_FOR_movsicc_cmpqi = 234,
  CODE_FOR_movhicc_cmpdi = 235,
  CODE_FOR_movhicc_cmpsi = 236,
  CODE_FOR_movhicc_cmphi = 237,
  CODE_FOR_movhicc_cmpqi = 238,
  CODE_FOR_movqicc_cmpdi = 239,
  CODE_FOR_movqicc_cmpsi = 240,
  CODE_FOR_movqicc_cmphi = 241,
  CODE_FOR_movqicc_cmpqi = 242,
  CODE_FOR_jump = 243,
  CODE_FOR_call_internal = 244,
  CODE_FOR_call_value_internal = 245,
  CODE_FOR_return = 246,
  CODE_FOR_return_cond = 247,
  CODE_FOR_return_cond_predicable = 248,
  CODE_FOR_return_imm = 249,
  CODE_FOR_return_imm_cond = 250,
  CODE_FOR_return_imm_predicable = 251,
  CODE_FOR_return_sireg = 252,
  CODE_FOR_return_v2hireg = 253,
  CODE_FOR_return_v4qireg = 254,
  CODE_FOR_return_sireg_cond = 255,
  CODE_FOR_return_v2hireg_cond = 256,
  CODE_FOR_return_v4qireg_cond = 257,
  CODE_FOR_nop = 258,
  CODE_FOR_indirect_jump_internal = 259,
  CODE_FOR_tablejump_add = 260,
  CODE_FOR_tablejump_insn = 261,
  CODE_FOR_prefetch = 262,
  CODE_FOR_eh_return = 263,
  CODE_FOR_ffssi2 = 264,
  CODE_FOR_bswap_16 = 266,
  CODE_FOR_bswap_32 = 267,
  CODE_FOR_blockage = 268,
  CODE_FOR_clzsi2 = 269,
  CODE_FOR_ctzsi2 = 270,
  CODE_FOR_cache = 271,
  CODE_FOR_sync = 272,
  CODE_FOR_tlbr = 273,
  CODE_FOR_tlbw = 274,
  CODE_FOR_tlbs = 275,
  CODE_FOR_breakpoint = 276,
  CODE_FOR_mtsr = 277,
  CODE_FOR_mfsr = 278,
  CODE_FOR_mtdr = 279,
  CODE_FOR_mfdr = 280,
  CODE_FOR_musfr = 281,
  CODE_FOR_mustr = 282,
  CODE_FOR_ssrf = 283,
  CODE_FOR_csrf = 284,
  CODE_FOR_frs = 285,
  CODE_FOR_sats = 286,
  CODE_FOR_satu = 287,
  CODE_FOR_satrnds = 288,
  CODE_FOR_satrndu = 289,
  CODE_FOR_align_4 = 290,
  CODE_FOR_consttable_start = 291,
  CODE_FOR_consttable_end = 292,
  CODE_FOR_consttable_4 = 293,
  CODE_FOR_consttable_8 = 294,
  CODE_FOR_consttable_16 = 295,
  CODE_FOR_cop = 296,
  CODE_FOR_mvcrsi = 297,
  CODE_FOR_mvcrdi = 298,
  CODE_FOR_mvrcsi = 299,
  CODE_FOR_mvrcdi = 300,
  CODE_FOR_sibcall_epilogue = 303,
  CODE_FOR_ldxi = 305,
  CODE_FOR_vec_setv2hi_hi = 307,
  CODE_FOR_vec_setv2hi_lo = 308,
  CODE_FOR_vec_extractv2hi = 309,
  CODE_FOR_vec_extractv4qi = 310,
  CODE_FOR_concatv2hi = 311,
  CODE_FOR_sync_compare_and_swapsi = 312,
  CODE_FOR_sync_loadsi = 313,
  CODE_FOR_sync_store_if_lock = 314,
  CODE_FOR_sync_lock_test_and_setsi = 315,
  CODE_FOR_addv2hi3 = 316,
  CODE_FOR_addv4qi3 = 317,
  CODE_FOR_subv2hi3 = 318,
  CODE_FOR_subv4qi3 = 319,
  CODE_FOR_absv2hi2 = 320,
  CODE_FOR_absv4qi2 = 321,
  CODE_FOR_ashlv2hi3 = 322,
  CODE_FOR_ashlv4qi3 = 323,
  CODE_FOR_ashrv2hi3 = 324,
  CODE_FOR_ashrv4qi3 = 325,
  CODE_FOR_lshrv2hi3 = 326,
  CODE_FOR_lshrv4qi3 = 327,
  CODE_FOR_smaxv2hi3 = 328,
  CODE_FOR_sminv2hi3 = 329,
  CODE_FOR_umaxv4qi3 = 330,
  CODE_FOR_uminv4qi3 = 331,
  CODE_FOR_addsubv2hi = 332,
  CODE_FOR_subaddv2hi = 333,
  CODE_FOR_mulsf3 = 336,
  CODE_FOR_nmulsf3 = 337,
  CODE_FOR_macsf3 = 338,
  CODE_FOR_nmacsf3 = 339,
  CODE_FOR_msubacsf3 = 340,
  CODE_FOR_nmsubacsf3 = 341,
  CODE_FOR_addsf3 = 342,
  CODE_FOR_subsf3 = 343,
  CODE_FOR_negsf2 = 344,
  CODE_FOR_abssf2 = 345,
  CODE_FOR_truncdfsf2 = 346,
  CODE_FOR_extendsfdf2 = 347,
  CODE_FOR_muldf3 = 348,
  CODE_FOR_nmuldf3 = 349,
  CODE_FOR_macdf3 = 350,
  CODE_FOR_msubacdf3 = 351,
  CODE_FOR_nmsubacdf3 = 352,
  CODE_FOR_nmacdf3 = 353,
  CODE_FOR_adddf3 = 354,
  CODE_FOR_subdf3 = 355,
  CODE_FOR_negdf2 = 356,
  CODE_FOR_absdf2 = 357,
  CODE_FOR_cmpdf_internal = 358,
  CODE_FOR_cmpsf_internal = 359,
  CODE_FOR_fpcc_to_reg = 360,
  CODE_FOR_reg_to_cc = 361,
  CODE_FOR_stm_fp = 362,
  CODE_FOR_movqi = 363,
  CODE_FOR_movhi = 364,
  CODE_FOR_movmisalignsi = 365,
  CODE_FOR_movsi = 366,
  CODE_FOR_movv2hi = 367,
  CODE_FOR_movv4qi = 368,
  CODE_FOR_movdi = 369,
  CODE_FOR_movti = 371,
  CODE_FOR_movsf = 373,
  CODE_FOR_movdf = 374,
  CODE_FOR_movmemsi = 376,
  CODE_FOR_extv = 377,
  CODE_FOR_extzv = 378,
  CODE_FOR_divmodsi4 = 416,
  CODE_FOR_udivmodsi4 = 417,
  CODE_FOR_cmpdi = 418,
  CODE_FOR_cmpsi = 419,
  CODE_FOR_cmphi = 420,
  CODE_FOR_cmpqi = 421,
  CODE_FOR_tstsi = 422,
  CODE_FOR_tstdi = 423,
  CODE_FOR_addsicc = 424,
  CODE_FOR_addhicc = 425,
  CODE_FOR_addqicc = 426,
  CODE_FOR_movsfcc = 427,
  CODE_FOR_movsicc = 428,
  CODE_FOR_movhicc = 429,
  CODE_FOR_movqicc = 430,
  CODE_FOR_call = 431,
  CODE_FOR_call_value = 432,
  CODE_FOR_untyped_call = 433,
  CODE_FOR_nonlocal_goto_receiver = 434,
  CODE_FOR_builtin_setjmp_receiver = 435,
  CODE_FOR_indirect_jump = 436,
  CODE_FOR_casesi = 437,
  CODE_FOR_prologue = 438,
  CODE_FOR_epilogue = 442,
  CODE_FOR_vec_setv2hi = 475,
  CODE_FOR_sync_addsi = 476,
  CODE_FOR_sync_subsi = 477,
  CODE_FOR_sync_andsi = 478,
  CODE_FOR_sync_iorsi = 479,
  CODE_FOR_sync_xorsi = 480,
  CODE_FOR_sync_old_addsi = 481,
  CODE_FOR_sync_old_subsi = 482,
  CODE_FOR_sync_old_andsi = 483,
  CODE_FOR_sync_old_iorsi = 484,
  CODE_FOR_sync_old_xorsi = 485,
  CODE_FOR_sync_new_addsi = 486,
  CODE_FOR_sync_new_subsi = 487,
  CODE_FOR_sync_new_andsi = 488,
  CODE_FOR_sync_new_iorsi = 489,
  CODE_FOR_sync_new_xorsi = 490,
  CODE_FOR_cmpdf = 498,
  CODE_FOR_cmpsf = 499,
  CODE_FOR_nothing
};

#endif /* GCC_INSN_CODES_H */
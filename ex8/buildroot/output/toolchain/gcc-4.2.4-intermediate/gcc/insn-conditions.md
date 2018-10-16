(define_conditions [
  (-1 "USE_RETURN_INSN (TRUE) && (REGNO(operands[0]) == RETVAL_REGNUM)")
  (-1 "dead_or_set_p(insn, operands[2])")
  (-1 "(reload_completed &&
    REG_P(operands[0]) && REG_P(operands[1])
    && (REGNO(operands[0]) != REGNO(operands[1])))")
  (-1 "(peep2_reg_dead_p(2, operands[0]) &&
    (INTVAL(operands[2]) < 4 && INTVAL(operands[2]) > 0))")
  (-1 "TARGET_DSP")
  (-1 "TARGET_SOFT_FLOAT
   && reload_completed
   && (REG_P (operands[0]) 
        && (REG_P (operands[1])
            || GET_CODE (operands[1]) == CONST_DOUBLE))")
  (-1 "(INTVAL(operands[3]) == 0) || (INTVAL(operands[3]) == 2) ||
   (INTVAL(operands[3]) == 4) || (INTVAL(operands[3]) == 8)")
  (-1 "register_operand (operands[0], V2HImode)
   || register_operand (operands[1], V2HImode)")
  (-1 "(peep2_reg_dead_p(2, operands[0]) || (REGNO(operands[2]) == REGNO(operands[0])))")
  (-1 "(REGNO(operands[0]) == REGNO(operands[2])) || peep2_reg_dead_p(2, operands[0])")
  (-1 "TARGET_ARCH_AP")
  (-1 "TARGET_SOFT_FLOAT
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode))")
  (-1 "reload_completed &&
   (REG_P (operands[0]) &&
   (REG_P (operands[1]) 
    || GET_CODE (operands[1]) == CONST_INT
    || GET_CODE (operands[1]) == CONST_DOUBLE))")
  (-1 "(USE_RETURN_INSN (FALSE) && (REGNO(operands[0]) == RETVAL_REGNUM) &&
   ((INTVAL(operands[1]) == -1) || (INTVAL(operands[1]) == 0) || (INTVAL(operands[1]) == 1)))")
  (-1 "register_operand (operands[0], SImode)
   || register_operand (operands[1], SImode)")
  (-1 "peep2_reg_dead_p(2, operands[0])")
  (-1 "!TARGET_NO_MUL_INSNS")
  (-1 "USE_RETURN_INSN (TRUE)")
  (-1 "INTVAL(operands[2]) < 32")
  (-1 "((peep2_reg_dead_p(2, operands[0]) &&
    (INTVAL(operands[3]) <= 16)))")
  (-1 "TARGET_HARD_FLOAT &&
   (peep2_reg_dead_p(2, operands[0]) || (REGNO(operands[3]) == REGNO(operands[0])))")
  (-1 "(register_operand (operands[0], SFmode)
    || register_operand (operands[1], SFmode))")
  (-1 "(reload_completed &&
     REG_P(operands[0]) && REG_P(operands[1])
     && (REGNO(operands[0]) != REGNO(operands[1])))")
  (-1 "TARGET_SIMD")
  (-1 "flag_pic")
  (-1 "TARGET_HARD_FLOAT
   && reload_completed
   && (REG_P(operands[0]) &&  (REGNO_REG_CLASS(REGNO(operands[0])) == GENERAL_REGS))
   && (REG_P(operands[1]) &&  (REGNO_REG_CLASS(REGNO(operands[1])) == GENERAL_REGS))")
  (-1 "((peep2_reg_dead_p(2, operands[0]) &&
    (INTVAL(operands[3]) <= 8)))")
  (-1 "TARGET_V2_INSNS")
  (-1 "USE_RETURN_INSN (FALSE) &&
   ((INTVAL(operands[0]) == -1) || (INTVAL(operands[0]) == 0) || (INTVAL(operands[0]) == 1))")
  (-1 "!TARGET_NO_MUL_INSNS && TARGET_DSP")
  (-1 "USE_RETURN_INSN (FALSE)")
  (-1 "!TARGET_NO_MUL_INSNS && TARGET_DSP
   && (peep2_reg_dead_p(1, operands[0]) || (REGNO(operands[0]) == REGNO(operands[3])))")
  (-1 "TARGET_HARD_FLOAT && peep2_reg_dead_p(2, operands[0])")
  (-1 "(peep2_reg_dead_p(2, operands[0])) || (REGNO(operands[2]) == REGNO(operands[0]))")
  (-1 "flag_pic && CONSTANT_POOL_ADDRESS_P(XEXP(operands[1], 0))")
  (-1 "(REGNO(operands[0]) == REGNO(operands[2]) || peep2_reg_dead_p(2, operands[0]))")
  (-1 "reload_completed &&
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
    || GET_CODE (operands[1]) == CONST_DOUBLE))")
  (-1 "dead_or_set_p(insn, operands[0])")
  (-1 "TARGET_HARD_FLOAT")
  (-1 "register_operand (operands[0], V4QImode)
   || register_operand (operands[1], V4QImode)")
  (-1 "(TARGET_V2_INSNS) && (TARGET_V2_INSNS)")
  (-1 "(peep2_reg_dead_p(2, operands[0]))
   || (REGNO(operands[0]) == REGNO(operands[2]))")
  (-1 "USE_RETURN_INSN (TRUE) &&
   ((INTVAL(operands[0]) == -1) || (INTVAL(operands[0]) == 0) || (INTVAL(operands[0]) == 1))")
  (-1 "flag_pic &&
   ((INTVAL(operands[2]) == 0) || (INTVAL(operands[2]) == 2) ||
    (INTVAL(operands[2]) == 4) || (INTVAL(operands[2]) == 8))")
  (-1 "register_operand (operands[0], HImode)
   || register_operand (operands[1], HImode)")
  (-1 "register_operand (operands[0], DImode)
   || register_operand (operands[1], DImode)")
  (-1 "peep2_reg_dead_p(1, operands[2])")
  (-1 "(peep2_reg_dead_p(2, operands[0]))
   || (REGNO(operands[0]) == REGNO(operands[3]))")
  (-1 "(REGNO(operands[0]) == RETVAL_REGNUM) &&
   ((INTVAL(operands[1]) == -1) || (INTVAL(operands[1]) == 0) || (INTVAL(operands[1]) == 1))")
  (-1 "TARGET_UNALIGNED_WORD")
  (-1 "USE_RETURN_INSN (TRUE) && (REGNO(operands[0]) == RETVAL_REGNUM)
   && (REGNO(operands[1]) != LR_REGNUM)
   && (REGNO_REG_CLASS(REGNO(operands[1])) == GENERAL_REGS)")
  (-1 "!flag_pic")
  (-1 "REGNO(operands[0]) != REGNO(operands[1]) && avr32_const_ok_for_constraint_p(INTVAL(operands[2]), 'K', \"Ks16\")")
  (-1 "(register_operand (operands[0], TImode)
    || register_operand (operands[1], TImode))")
  (-1 "(dead_or_set_p(insn, operands[0]))")
  (-1 "(GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload)")
  (-1 "((INTVAL(operands[0]) == -1) || (INTVAL(operands[0]) == 0) || (INTVAL(operands[0]) == 1))")
  (-1 "(INTVAL(operands[3]) == 24 || INTVAL(operands[3]) == 16 || INTVAL(operands[3]) == 8
   || INTVAL(operands[3]) == 0)")
  (-1 "(peep2_reg_dead_p(2, operands[0])) || (REGNO(operands[3]) == REGNO(operands[0]))")
  (-1 "(dead_or_set_p(insn, operands[3])) || (REGNO(operands[3]) == REGNO(operands[0]))")
  (-1 "(TARGET_V2_INSNS) && (USE_RETURN_INSN (TRUE))")
  (-1 "(TARGET_V2_INSNS) && (USE_RETURN_INSN (TRUE) &&
   ((INTVAL(operands[0]) == -1) || (INTVAL(operands[0]) == 0) || (INTVAL(operands[0]) == 1)))")
  (-1 "TARGET_RETURN_STACK")
  (-1 "avr32_rnd_operands(operands[1], operands[2])")
  (-1 "(GET_CODE (PATTERN (insn)) != COND_EXEC
    && cfun->machine->ifcvt_after_reload
    && avr32_cond_imm_clobber_splittable (insn, operands))")
  (-1 "register_operand (operands[0], QImode)
   || register_operand (operands[1], QImode)")
  (-1 "reload_completed")
])

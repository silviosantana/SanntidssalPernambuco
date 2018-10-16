/* Generated automatically by the program `genattrtab'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "real.h"
#include "output.h"
#include "insn-attr.h"
#include "toplev.h"
#include "flags.h"
#include "function.h"

#define operands recog_data.operand

int
insn_current_length (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 243:  /* jump */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (1022)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (1024)))
        {
	  return 2;
        }
      else if ((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) <= (1048575))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 202:  /* *bleu-reverse */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (254)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (256)))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 201:  /* *bltu-reverse */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (254)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (256)))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 200:  /* *bgeu-reverse */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (254)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (256)))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 199:  /* *bgtu-reverse */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (254)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (256)))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 198:  /* *ble-reverse */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (254)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (256)))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 197:  /* *blt-reverse */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (254)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (256)))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 196:  /* *bge-reverse */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (254)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (256)))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 195:  /* *bgt-reverse */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (254)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (256)))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 194:  /* *bne-reverse */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (254)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (256)))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 193:  /* *beq-reverse */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (254)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (256)))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 192:  /* bleu */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (254)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (256)))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 191:  /* bltu */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (254)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (256)))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 190:  /* bgeu */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (254)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (256)))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 189:  /* bgtu */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (254)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (256)))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 188:  /* ble */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (254)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (256)))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 187:  /* blt */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (254)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (256)))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 186:  /* bge */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (254)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (256)))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 185:  /* bgt */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (254)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (256)))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 184:  /* bne */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (254)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (256)))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 183:  /* beq */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (254)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (256)))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 182:  /* *bpl-reverse */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (254)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (256)))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 181:  /* bpl */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (254)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (256)))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 180:  /* *bmi-reverse */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (254)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (256)))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 179:  /* bmi */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (254)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (256)))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
insn_variable_length_p (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 243:  /* jump */
    case 202:  /* *bleu-reverse */
    case 201:  /* *bltu-reverse */
    case 200:  /* *bgeu-reverse */
    case 199:  /* *bgtu-reverse */
    case 198:  /* *ble-reverse */
    case 197:  /* *blt-reverse */
    case 196:  /* *bge-reverse */
    case 195:  /* *bgt-reverse */
    case 194:  /* *bne-reverse */
    case 193:  /* *beq-reverse */
    case 192:  /* bleu */
    case 191:  /* bltu */
    case 190:  /* bgeu */
    case 189:  /* bgtu */
    case 188:  /* ble */
    case 187:  /* blt */
    case 186:  /* bge */
    case 185:  /* bgt */
    case 184:  /* bne */
    case 183:  /* beq */
    case 182:  /* *bpl-reverse */
    case 181:  /* bpl */
    case 180:  /* *bmi-reverse */
    case 179:  /* bmi */
      return 1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
insn_min_length (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 334:  /* *movsf_fpcp */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1f))
        {
	  return 4;
        }
      else if (which_alternative == 5)
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 311:  /* concatv2hi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 6;
        }
      else
        {
	  return 4;
        }

    case 245:  /* call_value_internal */
    case 244:  /* call_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return 4;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 242:  /* movqicc_cmpqi */
    case 241:  /* movqicc_cmphi */
    case 240:  /* movqicc_cmpsi */
    case 239:  /* movqicc_cmpdi */
    case 238:  /* movhicc_cmpqi */
    case 237:  /* movhicc_cmphi */
    case 236:  /* movhicc_cmpsi */
    case 235:  /* movhicc_cmpdi */
    case 234:  /* movsicc_cmpqi */
    case 233:  /* movsicc_cmphi */
    case 232:  /* movsicc_cmpsi */
    case 231:  /* movsicc_cmpdi */
    case 230:  /* movsfcc_cmpqi */
    case 229:  /* movsfcc_cmphi */
    case 228:  /* movsfcc_cmpsi */
    case 227:  /* movsfcc_cmpdi */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 8;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 52:  /* subqi3 */
    case 51:  /* subhi3 */
    case 50:  /* subsi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 4;
        }
      else if (which_alternative == 2)
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return 4;
        }
      else if (which_alternative == 5)
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 10:  /* *movti_internal */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1f))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 4:  /* movv4qi_internal */
    case 3:  /* movv2hi_internal */
    case 2:  /* movsi_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return 4;
        }
      else if (which_alternative == 3)
        {
	  return 8;
        }
      else if (((1 << which_alternative) & 0x30))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 918:  /*  */
    case 916:  /*  */
    case 914:  /*  */
    case 912:  /*  */
    case 910:  /*  */
    case 908:  /*  */
    case 906:  /*  */
    case 904:  /*  */
    case 902:  /*  */
    case 900:  /*  */
    case 898:  /*  */
    case 896:  /*  */
    case 894:  /*  */
    case 892:  /*  */
    case 890:  /*  */
    case 888:  /*  */
    case 886:  /*  */
    case 884:  /*  */
    case 831:  /*  */
    case 829:  /*  */
    case 827:  /*  */
    case 825:  /*  */
    case 823:  /*  */
    case 821:  /*  */
    case 819:  /*  */
    case 817:  /*  */
    case 815:  /*  */
    case 813:  /*  */
    case 811:  /*  */
    case 809:  /*  */
    case 807:  /*  */
    case 805:  /*  */
    case 803:  /*  */
    case 801:  /*  */
    case 799:  /*  */
    case 797:  /*  */
    case 744:  /*  */
    case 742:  /*  */
    case 740:  /*  */
    case 738:  /*  */
    case 736:  /*  */
    case 734:  /*  */
    case 732:  /*  */
    case 730:  /*  */
    case 728:  /*  */
    case 726:  /*  */
    case 724:  /*  */
    case 722:  /*  */
    case 720:  /*  */
    case 718:  /*  */
    case 716:  /*  */
    case 714:  /*  */
    case 712:  /*  */
    case 710:  /*  */
    case 657:  /*  */
    case 655:  /*  */
    case 653:  /*  */
    case 651:  /*  */
    case 649:  /*  */
    case 647:  /*  */
    case 645:  /*  */
    case 643:  /*  */
    case 641:  /*  */
    case 639:  /*  */
    case 637:  /*  */
    case 635:  /*  */
    case 633:  /*  */
    case 631:  /*  */
    case 629:  /*  */
    case 627:  /*  */
    case 625:  /*  */
    case 623:  /*  */
    case 570:  /*  */
    case 568:  /*  */
    case 566:  /*  */
    case 564:  /*  */
    case 562:  /*  */
    case 560:  /*  */
    case 558:  /*  */
    case 556:  /*  */
    case 554:  /*  */
    case 552:  /*  */
    case 550:  /*  */
    case 548:  /*  */
    case 546:  /*  */
    case 544:  /*  */
    case 542:  /*  */
    case 540:  /*  */
    case 538:  /*  */
    case 536:  /*  */
    case 294:  /* consttable_8 */
    case 270:  /* ctzsi2 */
    case 226:  /* addqicc_cmpqi */
    case 225:  /* addhicc_cmpqi */
    case 224:  /* addsicc_cmpqi */
    case 223:  /* addqicc_cmphi */
    case 222:  /* addhicc_cmphi */
    case 221:  /* addsicc_cmphi */
    case 220:  /* addqicc_cmpsi */
    case 219:  /* addhicc_cmpsi */
    case 218:  /* addsicc_cmpsi */
    case 217:  /* addqicc_cmpdi */
    case 216:  /* addhicc_cmpdi */
    case 215:  /* addsicc_cmpdi */
    case 214:  /* addqicc_cmpqi_reg */
    case 213:  /* addhicc_cmpqi_reg */
    case 212:  /* addsicc_cmpqi_reg */
    case 211:  /* addqicc_cmphi_reg */
    case 210:  /* addhicc_cmphi_reg */
    case 209:  /* addsicc_cmphi_reg */
    case 208:  /* addqicc_cmpsi_reg */
    case 207:  /* addhicc_cmpsi_reg */
    case 206:  /* addsicc_cmpsi_reg */
    case 205:  /* addqicc_cmpdi_reg */
    case 204:  /* addhicc_cmpdi_reg */
    case 203:  /* addsicc_cmpdi_reg */
    case 134:  /* zero_extendqihi_clobber_predicable */
    case 133:  /* zero_extendqisi_clobber_predicable */
    case 132:  /* zero_extendhisi_clobber_predicable */
    case 131:  /* subqi_imm_clobber_predicable */
    case 130:  /* addqi_imm_clobber_predicable */
    case 129:  /* eorqi_imm_clobber_predicable */
    case 128:  /* orqi_imm_clobber_predicable */
    case 127:  /* andqi_imm_clobber_predicable */
    case 126:  /* subhi_imm_clobber_predicable */
    case 125:  /* addhi_imm_clobber_predicable */
    case 124:  /* eorhi_imm_clobber_predicable */
    case 123:  /* orhi_imm_clobber_predicable */
    case 122:  /* andhi_imm_clobber_predicable */
    case 121:  /* subsi_imm_clobber_predicable */
    case 120:  /* addsi_imm_clobber_predicable */
    case 119:  /* eorsi_imm_clobber_predicable */
    case 118:  /* orsi_imm_clobber_predicable */
    case 117:  /* andsi_imm_clobber_predicable */
    case 101:  /* xordi3 */
    case 99:  /* iordi3 */
    case 97:  /* anddi3 */
      return 8;

    case 472:  /* define_peephole, line 4725 */
      return 10 /* 0xa */;

    case 471:  /* define_peephole, line 4710 */
    case 304:  /* *sibcall_epilogue_insns_ret_imm */
    case 303:  /* sibcall_epilogue */
    case 302:  /* *epilogue_insns_ret_imm */
    case 301:  /* *epilogue_insns */
      return 12 /* 0xc */;

    case 314:  /* sync_store_if_lock */
    case 313:  /* sync_loadsi */
      return 6;

    case 312:  /* sync_compare_and_swapsi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 18 /* 0x12 */;
        }

    case 295:  /* consttable_16 */
      return 16 /* 0x10 */;

    case 292:  /* consttable_end */
    case 291:  /* consttable_start */
    case 268:  /* blockage */
      return 0;

    case 264:  /* ffssi2 */
      return 18 /* 0x12 */;

    case 259:  /* indirect_jump_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 469:  /* define_peephole, line 4683 */
    case 361:  /* reg_to_cc */
    case 290:  /* align_4 */
    case 285:  /* frs */
    case 284:  /* csrf */
    case 283:  /* ssrf */
    case 282:  /* mustr */
    case 281:  /* musfr */
    case 276:  /* breakpoint */
    case 275:  /* tlbs */
    case 274:  /* tlbw */
    case 273:  /* tlbr */
    case 265:  /* *swap_h */
    case 258:  /* nop */
    case 178:  /* spl */
    case 177:  /* smi */
    case 176:  /* sleu */
    case 175:  /* sltu */
    case 174:  /* sgeu */
    case 173:  /* sgtu */
    case 172:  /* sle */
    case 171:  /* slt */
    case 170:  /* sge */
    case 169:  /* sgt */
    case 168:  /* sne */
    case 167:  /* seq */
    case 150:  /* tstsi_internal */
    case 142:  /* abssi2 */
    case 95:  /* andnsi */
    case 30:  /* popm */
    case 28:  /* pushm */
    case 8:  /* pic_compute_got_from_pc */
    case 243:  /* jump */
    case 202:  /* *bleu-reverse */
    case 201:  /* *bltu-reverse */
    case 200:  /* *bgeu-reverse */
    case 199:  /* *bgtu-reverse */
    case 198:  /* *ble-reverse */
    case 197:  /* *blt-reverse */
    case 196:  /* *bge-reverse */
    case 195:  /* *bgt-reverse */
    case 194:  /* *bne-reverse */
    case 193:  /* *beq-reverse */
    case 192:  /* bleu */
    case 191:  /* bltu */
    case 190:  /* bgeu */
    case 189:  /* bgtu */
    case 188:  /* ble */
    case 187:  /* blt */
    case 186:  /* bge */
    case 185:  /* bgt */
    case 184:  /* bne */
    case 183:  /* beq */
    case 182:  /* *bpl-reverse */
    case 181:  /* bpl */
    case 180:  /* *bmi-reverse */
    case 179:  /* bmi */
      return 2;

    case 33:  /* addqi3 */
    case 32:  /* addhi3 */
    case 31:  /* addsi3 */
    case 158:  /* zero_extendqihi2 */
    case 157:  /* zero_extendqisi2 */
    case 156:  /* zero_extendhisi2 */
    case 155:  /* extendqihi2 */
    case 154:  /* extendqisi2 */
    case 153:  /* extendhisi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 4;
        }
      else if (which_alternative == 2)
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 143:  /* one_cmplsi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  return 2;
        }

    case 67:  /* mulsi3 */
    case 66:  /* mulqi3 */
    case 1:  /* *movhi_internal */
    case 0:  /* *movqi_internal */
    case 140:  /* negsi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 139:  /* lshrsi3 */
    case 138:  /* ashrsi3 */
    case 137:  /* ashlsi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (which_alternative == 1)
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 100:  /* xorsi3 */
    case 98:  /* iorsi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 11:  /* *movsf_internal */
    case 96:  /* andsi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 4;
        }
      else if (which_alternative == 2)
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 59:  /* subdi3 */
    case 46:  /* adddi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else
        {
	  return 6;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 4;

    }
}

int
insn_default_length (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 334:  /* *movsf_fpcp */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1f))
        {
	  return 4;
        }
      else if (which_alternative == 5)
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 311:  /* concatv2hi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 6;
        }
      else
        {
	  return 4;
        }

    case 245:  /* call_value_internal */
    case 244:  /* call_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return 4;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 242:  /* movqicc_cmpqi */
    case 241:  /* movqicc_cmphi */
    case 240:  /* movqicc_cmpsi */
    case 239:  /* movqicc_cmpdi */
    case 238:  /* movhicc_cmpqi */
    case 237:  /* movhicc_cmphi */
    case 236:  /* movhicc_cmpsi */
    case 235:  /* movhicc_cmpdi */
    case 234:  /* movsicc_cmpqi */
    case 233:  /* movsicc_cmphi */
    case 232:  /* movsicc_cmpsi */
    case 231:  /* movsicc_cmpdi */
    case 230:  /* movsfcc_cmpqi */
    case 229:  /* movsfcc_cmphi */
    case 228:  /* movsfcc_cmpsi */
    case 227:  /* movsfcc_cmpdi */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 8;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 52:  /* subqi3 */
    case 51:  /* subhi3 */
    case 50:  /* subsi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 4;
        }
      else if (which_alternative == 2)
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return 4;
        }
      else if (which_alternative == 5)
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 10:  /* *movti_internal */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1f))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 4:  /* movv4qi_internal */
    case 3:  /* movv2hi_internal */
    case 2:  /* movsi_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return 4;
        }
      else if (which_alternative == 3)
        {
	  return 8;
        }
      else if (((1 << which_alternative) & 0x30))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 472:  /* define_peephole, line 4725 */
      return 10 /* 0xa */;

    case 471:  /* define_peephole, line 4710 */
    case 304:  /* *sibcall_epilogue_insns_ret_imm */
    case 303:  /* sibcall_epilogue */
    case 302:  /* *epilogue_insns_ret_imm */
    case 301:  /* *epilogue_insns */
      return 12 /* 0xc */;

    case 469:  /* define_peephole, line 4683 */
    case 361:  /* reg_to_cc */
    case 290:  /* align_4 */
    case 285:  /* frs */
    case 284:  /* csrf */
    case 283:  /* ssrf */
    case 282:  /* mustr */
    case 281:  /* musfr */
    case 276:  /* breakpoint */
    case 275:  /* tlbs */
    case 274:  /* tlbw */
    case 273:  /* tlbr */
    case 265:  /* *swap_h */
    case 258:  /* nop */
    case 178:  /* spl */
    case 177:  /* smi */
    case 176:  /* sleu */
    case 175:  /* sltu */
    case 174:  /* sgeu */
    case 173:  /* sgtu */
    case 172:  /* sle */
    case 171:  /* slt */
    case 170:  /* sge */
    case 169:  /* sgt */
    case 168:  /* sne */
    case 167:  /* seq */
    case 150:  /* tstsi_internal */
    case 142:  /* abssi2 */
    case 95:  /* andnsi */
    case 30:  /* popm */
    case 28:  /* pushm */
    case 8:  /* pic_compute_got_from_pc */
      return 2;

    case 314:  /* sync_store_if_lock */
    case 313:  /* sync_loadsi */
      return 6;

    case 312:  /* sync_compare_and_swapsi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 18 /* 0x12 */;
        }

    case 295:  /* consttable_16 */
      return 16 /* 0x10 */;

    case 292:  /* consttable_end */
    case 291:  /* consttable_start */
    case 268:  /* blockage */
      return 0;

    case 264:  /* ffssi2 */
      return 18 /* 0x12 */;

    case 259:  /* indirect_jump_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 918:  /*  */
    case 916:  /*  */
    case 914:  /*  */
    case 912:  /*  */
    case 910:  /*  */
    case 908:  /*  */
    case 906:  /*  */
    case 904:  /*  */
    case 902:  /*  */
    case 900:  /*  */
    case 898:  /*  */
    case 896:  /*  */
    case 894:  /*  */
    case 892:  /*  */
    case 890:  /*  */
    case 888:  /*  */
    case 886:  /*  */
    case 884:  /*  */
    case 831:  /*  */
    case 829:  /*  */
    case 827:  /*  */
    case 825:  /*  */
    case 823:  /*  */
    case 821:  /*  */
    case 819:  /*  */
    case 817:  /*  */
    case 815:  /*  */
    case 813:  /*  */
    case 811:  /*  */
    case 809:  /*  */
    case 807:  /*  */
    case 805:  /*  */
    case 803:  /*  */
    case 801:  /*  */
    case 799:  /*  */
    case 797:  /*  */
    case 744:  /*  */
    case 742:  /*  */
    case 740:  /*  */
    case 738:  /*  */
    case 736:  /*  */
    case 734:  /*  */
    case 732:  /*  */
    case 730:  /*  */
    case 728:  /*  */
    case 726:  /*  */
    case 724:  /*  */
    case 722:  /*  */
    case 720:  /*  */
    case 718:  /*  */
    case 716:  /*  */
    case 714:  /*  */
    case 712:  /*  */
    case 710:  /*  */
    case 657:  /*  */
    case 655:  /*  */
    case 653:  /*  */
    case 651:  /*  */
    case 649:  /*  */
    case 647:  /*  */
    case 645:  /*  */
    case 643:  /*  */
    case 641:  /*  */
    case 639:  /*  */
    case 637:  /*  */
    case 635:  /*  */
    case 633:  /*  */
    case 631:  /*  */
    case 629:  /*  */
    case 627:  /*  */
    case 625:  /*  */
    case 623:  /*  */
    case 570:  /*  */
    case 568:  /*  */
    case 566:  /*  */
    case 564:  /*  */
    case 562:  /*  */
    case 560:  /*  */
    case 558:  /*  */
    case 556:  /*  */
    case 554:  /*  */
    case 552:  /*  */
    case 550:  /*  */
    case 548:  /*  */
    case 546:  /*  */
    case 544:  /*  */
    case 542:  /*  */
    case 540:  /*  */
    case 538:  /*  */
    case 536:  /*  */
    case 294:  /* consttable_8 */
    case 270:  /* ctzsi2 */
    case 226:  /* addqicc_cmpqi */
    case 225:  /* addhicc_cmpqi */
    case 224:  /* addsicc_cmpqi */
    case 223:  /* addqicc_cmphi */
    case 222:  /* addhicc_cmphi */
    case 221:  /* addsicc_cmphi */
    case 220:  /* addqicc_cmpsi */
    case 219:  /* addhicc_cmpsi */
    case 218:  /* addsicc_cmpsi */
    case 217:  /* addqicc_cmpdi */
    case 216:  /* addhicc_cmpdi */
    case 215:  /* addsicc_cmpdi */
    case 214:  /* addqicc_cmpqi_reg */
    case 213:  /* addhicc_cmpqi_reg */
    case 212:  /* addsicc_cmpqi_reg */
    case 211:  /* addqicc_cmphi_reg */
    case 210:  /* addhicc_cmphi_reg */
    case 209:  /* addsicc_cmphi_reg */
    case 208:  /* addqicc_cmpsi_reg */
    case 207:  /* addhicc_cmpsi_reg */
    case 206:  /* addsicc_cmpsi_reg */
    case 205:  /* addqicc_cmpdi_reg */
    case 204:  /* addhicc_cmpdi_reg */
    case 203:  /* addsicc_cmpdi_reg */
    case 134:  /* zero_extendqihi_clobber_predicable */
    case 133:  /* zero_extendqisi_clobber_predicable */
    case 132:  /* zero_extendhisi_clobber_predicable */
    case 131:  /* subqi_imm_clobber_predicable */
    case 130:  /* addqi_imm_clobber_predicable */
    case 129:  /* eorqi_imm_clobber_predicable */
    case 128:  /* orqi_imm_clobber_predicable */
    case 127:  /* andqi_imm_clobber_predicable */
    case 126:  /* subhi_imm_clobber_predicable */
    case 125:  /* addhi_imm_clobber_predicable */
    case 124:  /* eorhi_imm_clobber_predicable */
    case 123:  /* orhi_imm_clobber_predicable */
    case 122:  /* andhi_imm_clobber_predicable */
    case 121:  /* subsi_imm_clobber_predicable */
    case 120:  /* addsi_imm_clobber_predicable */
    case 119:  /* eorsi_imm_clobber_predicable */
    case 118:  /* orsi_imm_clobber_predicable */
    case 117:  /* andsi_imm_clobber_predicable */
    case 101:  /* xordi3 */
    case 99:  /* iordi3 */
    case 97:  /* anddi3 */
    case 243:  /* jump */
      return 8;

    case 33:  /* addqi3 */
    case 32:  /* addhi3 */
    case 31:  /* addsi3 */
    case 158:  /* zero_extendqihi2 */
    case 157:  /* zero_extendqisi2 */
    case 156:  /* zero_extendhisi2 */
    case 155:  /* extendqihi2 */
    case 154:  /* extendqisi2 */
    case 153:  /* extendhisi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 4;
        }
      else if (which_alternative == 2)
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 143:  /* one_cmplsi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  return 2;
        }

    case 67:  /* mulsi3 */
    case 66:  /* mulqi3 */
    case 1:  /* *movhi_internal */
    case 0:  /* *movqi_internal */
    case 140:  /* negsi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 139:  /* lshrsi3 */
    case 138:  /* ashrsi3 */
    case 137:  /* ashlsi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (which_alternative == 1)
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 100:  /* xorsi3 */
    case 98:  /* iorsi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 11:  /* *movsf_internal */
    case 96:  /* andsi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 4;
        }
      else if (which_alternative == 2)
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 59:  /* subdi3 */
    case 46:  /* adddi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else
        {
	  return 6;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 4;

    }
}

int
bypass_p (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 335:  /* *movdf_fpcp */
      extract_constrain_insn_cached (insn);
      if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (((1 << which_alternative) & 0x60)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 334:  /* *movsf_fpcp */
      extract_constrain_insn_cached (insn);
      if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 7))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 267:  /* bswap_32 */
    case 266:  /* bswap_16 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) && (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 158:  /* zero_extendqihi2 */
    case 157:  /* zero_extendqisi2 */
    case 156:  /* zero_extendhisi2 */
    case 155:  /* extendqihi2 */
    case 154:  /* extendqisi2 */
    case 153:  /* extendhisi2 */
      extract_constrain_insn_cached (insn);
      if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (!((1 << which_alternative) & 0x3)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 67:  /* mulsi3 */
    case 66:  /* mulqi3 */
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 2) && (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP))))) || ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (((1 << which_alternative) & 0x3))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 12:  /* *movdf_internal */
      extract_constrain_insn_cached (insn);
      if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 3))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 11:  /* *movsf_internal */
      extract_constrain_insn_cached (insn);
      if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (((1 << which_alternative) & 0xc)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 10:  /* *movti_internal */
      extract_constrain_insn_cached (insn);
      if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (!((1 << which_alternative) & 0x1b)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 9:  /* *movdi_internal */
      extract_constrain_insn_cached (insn);
      if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 5))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 929:  /*  */
    case 928:  /*  */
    case 927:  /*  */
    case 926:  /*  */
    case 925:  /*  */
    case 924:  /*  */
    case 923:  /*  */
    case 922:  /*  */
    case 851:  /*  */
    case 850:  /*  */
    case 849:  /*  */
    case 848:  /*  */
    case 842:  /*  */
    case 841:  /*  */
    case 840:  /*  */
    case 839:  /*  */
    case 838:  /*  */
    case 837:  /*  */
    case 836:  /*  */
    case 835:  /*  */
    case 764:  /*  */
    case 763:  /*  */
    case 762:  /*  */
    case 761:  /*  */
    case 755:  /*  */
    case 754:  /*  */
    case 753:  /*  */
    case 752:  /*  */
    case 751:  /*  */
    case 750:  /*  */
    case 749:  /*  */
    case 748:  /*  */
    case 677:  /*  */
    case 676:  /*  */
    case 675:  /*  */
    case 674:  /*  */
    case 668:  /*  */
    case 667:  /*  */
    case 666:  /*  */
    case 665:  /*  */
    case 664:  /*  */
    case 663:  /*  */
    case 662:  /*  */
    case 661:  /*  */
    case 590:  /*  */
    case 589:  /*  */
    case 588:  /*  */
    case 587:  /*  */
    case 581:  /*  */
    case 580:  /*  */
    case 579:  /*  */
    case 578:  /*  */
    case 577:  /*  */
    case 576:  /*  */
    case 575:  /*  */
    case 574:  /*  */
    case 503:  /*  */
    case 502:  /*  */
    case 501:  /*  */
    case 500:  /*  */
    case 464:  /* define_peephole, line 4601 */
    case 454:  /* define_peephole, line 4402 */
    case 453:  /* define_peephole, line 4371 */
    case 306:  /* *round */
    case 305:  /* ldxi */
    case 289:  /* satrndu */
    case 288:  /* satrnds */
    case 287:  /* satu */
    case 286:  /* sats */
    case 262:  /* prefetch */
    case 166:  /* ldhi_predicable_se */
    case 165:  /* ldhi_predicable_ze */
    case 164:  /* ldsiqi_predicable_ze */
    case 163:  /* ldsihi_predicable_ze */
    case 162:  /* ldsisi_predicable_ze */
    case 161:  /* ldsiqi_predicable_se */
    case 160:  /* ldsihi_predicable_se */
    case 159:  /* ldsisi_predicable_se */
    case 151:  /* tstdi_internal */
    case 89:  /* satsub_h */
    case 88:  /* satadd_h */
    case 87:  /* satsub_w */
    case 86:  /* satadd_w */
    case 85:  /* machh_d */
    case 84:  /* macwh_d */
    case 83:  /* mulnwh_d */
    case 82:  /* mulwh_d */
    case 81:  /* macsathh_w */
    case 80:  /* mulsatrndwh_w */
    case 79:  /* mulsatwh_w */
    case 78:  /* mulsathh_w */
    case 77:  /* mulsatrndhh_h */
    case 76:  /* mulsathh_h */
    case 75:  /* umulaccsidi3 */
    case 74:  /* mulaccsidi3 */
    case 73:  /* *mulaccsi3 */
    case 72:  /* umulsidi3 */
    case 71:  /* mulsidi3 */
    case 70:  /* machisi3 */
    case 69:  /* mulnhisi3 */
    case 68:  /* mulhisi3 */
    case 59:  /* subdi3 */
    case 46:  /* adddi3 */
    case 30:  /* popm */
    case 16:  /* ldqi_predicable */
    case 15:  /* ldhi_predicable */
    case 14:  /* ldsi_predicable */
    case 13:  /* ldsf_predicable */
    case 7:  /* pic_load_addr */
      if (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 4:  /* movv4qi_internal */
    case 3:  /* movv2hi_internal */
    case 2:  /* movsi_internal */
      extract_constrain_insn_cached (insn);
      if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (!((1 << which_alternative) & 0x27)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 1:  /* *movhi_internal */
    case 0:  /* *movqi_internal */
      extract_constrain_insn_cached (insn);
      if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 1))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && ((((((((((((get_attr_type (insn) == TYPE_ALU2) || (get_attr_type (insn) == TYPE_ALU_SAT)) || ((get_attr_type (insn) == TYPE_MULHH) || (get_attr_type (insn) == TYPE_MULWH))) || (get_attr_type (insn) == TYPE_MULWW_W)) || (get_attr_type (insn) == TYPE_MULWW_D)) || (get_attr_type (insn) == TYPE_MACHH_W)) || (get_attr_type (insn) == TYPE_MACWW_W)) || (get_attr_type (insn) == TYPE_MACWW_D)) || (get_attr_type (insn) == TYPE_LOAD)) || (get_attr_type (insn) == TYPE_LOAD_RM)) || (get_attr_type (insn) == TYPE_LOAD2)) || (get_attr_type (insn) == TYPE_LOAD4)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    default:
      return 0;

    }
}

int
insn_default_latency (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 335:  /* *movdf_fpcp */
      extract_constrain_insn_cached (insn);
      if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 5))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 6))
        {
	  return 3;
        }
      else if ((which_alternative == 7) && (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 2))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (((1 << which_alternative) & 0xa)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 334:  /* *movsf_fpcp */
      extract_constrain_insn_cached (insn);
      if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (((1 << which_alternative) & 0x60)))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 7))
        {
	  return 2;
        }
      else if ((which_alternative == 8) && (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 2))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (((1 << which_alternative) & 0xa)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 267:  /* bswap_32 */
    case 266:  /* bswap_16 */
      extract_constrain_insn_cached (insn);
      if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 2) && (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 934:  /*  */
    case 933:  /*  */
    case 932:  /*  */
    case 931:  /*  */
    case 930:  /*  */
    case 847:  /*  */
    case 846:  /*  */
    case 845:  /*  */
    case 844:  /*  */
    case 843:  /*  */
    case 760:  /*  */
    case 759:  /*  */
    case 758:  /*  */
    case 757:  /*  */
    case 756:  /*  */
    case 673:  /*  */
    case 672:  /*  */
    case 671:  /*  */
    case 670:  /*  */
    case 669:  /*  */
    case 586:  /*  */
    case 585:  /*  */
    case 584:  /*  */
    case 583:  /*  */
    case 582:  /*  */
    case 472:  /* define_peephole, line 4725 */
    case 470:  /* define_peephole, line 4696 */
    case 469:  /* define_peephole, line 4683 */
    case 466:  /* define_peephole, line 4635 */
    case 465:  /* define_peephole, line 4622 */
    case 261:  /* tablejump_insn */
    case 259:  /* indirect_jump_internal */
    case 257:  /* return_v4qireg_cond */
    case 256:  /* return_v2hireg_cond */
    case 255:  /* return_sireg_cond */
    case 254:  /* return_v4qireg */
    case 253:  /* return_v2hireg */
    case 252:  /* return_sireg */
    case 251:  /* return_imm_predicable */
    case 250:  /* return_imm_cond */
    case 249:  /* return_imm */
    case 248:  /* return_cond_predicable */
    case 247:  /* return_cond */
    case 246:  /* return */
    case 245:  /* call_value_internal */
    case 244:  /* call_internal */
      if (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP))))
        {
	  return 10 /* 0xa */;
        }
      else
        {
	  return 0;
        }

    case 158:  /* zero_extendqihi2 */
    case 157:  /* zero_extendqisi2 */
    case 156:  /* zero_extendhisi2 */
    case 155:  /* extendqihi2 */
    case 154:  /* extendqisi2 */
    case 153:  /* extendhisi2 */
      extract_constrain_insn_cached (insn);
      if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (!((1 << which_alternative) & 0x3)))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 136:  /* udivmodsi4_internal */
    case 135:  /* divmodsi4_internal */
      if (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP))))
        {
	  return 33 /* 0x21 */;
        }
      else
        {
	  return 0;
        }

    case 75:  /* umulaccsidi3 */
    case 74:  /* mulaccsidi3 */
      if (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP))))
        {
	  return 6;
        }
      else
        {
	  return 0;
        }

    case 73:  /* *mulaccsi3 */
      if (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP))))
        {
	  return 4;
        }
      else
        {
	  return 0;
        }

    case 355:  /* subdf3 */
    case 354:  /* adddf3 */
    case 353:  /* nmacdf3 */
    case 352:  /* nmsubacdf3 */
    case 351:  /* msubacdf3 */
    case 350:  /* macdf3 */
    case 349:  /* nmuldf3 */
    case 348:  /* muldf3 */
    case 343:  /* subsf3 */
    case 342:  /* addsf3 */
    case 341:  /* nmsubacsf3 */
    case 340:  /* msubacsf3 */
    case 339:  /* nmacsf3 */
    case 338:  /* macsf3 */
    case 337:  /* nmulsf3 */
    case 336:  /* mulsf3 */
    case 72:  /* umulsidi3 */
    case 71:  /* mulsidi3 */
      if (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP))))
        {
	  return 5;
        }
      else
        {
	  return 0;
        }

    case 347:  /* extendsfdf2 */
    case 346:  /* truncdfsf2 */
    case 70:  /* machisi3 */
      if (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP))))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 67:  /* mulsi3 */
    case 66:  /* mulqi3 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) && (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 855:  /*  */
    case 854:  /*  */
    case 853:  /*  */
    case 852:  /*  */
    case 768:  /*  */
    case 767:  /*  */
    case 766:  /*  */
    case 765:  /*  */
    case 681:  /*  */
    case 680:  /*  */
    case 679:  /*  */
    case 678:  /*  */
    case 594:  /*  */
    case 593:  /*  */
    case 592:  /*  */
    case 591:  /*  */
    case 507:  /*  */
    case 506:  /*  */
    case 505:  /*  */
    case 504:  /*  */
    case 471:  /* define_peephole, line 4710 */
    case 362:  /* stm_fp */
    case 304:  /* *sibcall_epilogue_insns_ret_imm */
    case 303:  /* sibcall_epilogue */
    case 302:  /* *epilogue_insns_ret_imm */
    case 301:  /* *epilogue_insns */
    case 243:  /* jump */
    case 202:  /* *bleu-reverse */
    case 201:  /* *bltu-reverse */
    case 200:  /* *bgeu-reverse */
    case 199:  /* *bgtu-reverse */
    case 198:  /* *ble-reverse */
    case 197:  /* *blt-reverse */
    case 196:  /* *bge-reverse */
    case 195:  /* *bgt-reverse */
    case 194:  /* *bne-reverse */
    case 193:  /* *beq-reverse */
    case 192:  /* bleu */
    case 191:  /* bltu */
    case 190:  /* bgeu */
    case 189:  /* bgtu */
    case 188:  /* ble */
    case 187:  /* blt */
    case 186:  /* bge */
    case 185:  /* bgt */
    case 184:  /* bne */
    case 183:  /* beq */
    case 182:  /* *bpl-reverse */
    case 181:  /* bpl */
    case 180:  /* *bmi-reverse */
    case 179:  /* bmi */
    case 29:  /* stm */
    case 28:  /* pushm */
    case 20:  /* stqi_predicable */
    case 19:  /* sthi_predicable */
    case 18:  /* stsi_predicable */
    case 17:  /* stsf_predicable */
      return 0;

    case 12:  /* *movdf_internal */
      extract_constrain_insn_cached (insn);
      if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (((1 << which_alternative) & 0x7)))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 3))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 11:  /* *movsf_internal */
      extract_constrain_insn_cached (insn);
      if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (((1 << which_alternative) & 0xc)))
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case 10:  /* *movti_internal */
      extract_constrain_insn_cached (insn);
      if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (((1 << which_alternative) & 0x13)))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (!((1 << which_alternative) & 0x1b)))
        {
	  return 4;
        }
      else
        {
	  return 0;
        }

    case 9:  /* *movdi_internal */
      extract_constrain_insn_cached (insn);
      if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 5))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 929:  /*  */
    case 928:  /*  */
    case 927:  /*  */
    case 926:  /*  */
    case 925:  /*  */
    case 924:  /*  */
    case 923:  /*  */
    case 922:  /*  */
    case 851:  /*  */
    case 850:  /*  */
    case 849:  /*  */
    case 848:  /*  */
    case 842:  /*  */
    case 841:  /*  */
    case 840:  /*  */
    case 839:  /*  */
    case 838:  /*  */
    case 837:  /*  */
    case 836:  /*  */
    case 835:  /*  */
    case 764:  /*  */
    case 763:  /*  */
    case 762:  /*  */
    case 761:  /*  */
    case 755:  /*  */
    case 754:  /*  */
    case 753:  /*  */
    case 752:  /*  */
    case 751:  /*  */
    case 750:  /*  */
    case 749:  /*  */
    case 748:  /*  */
    case 677:  /*  */
    case 676:  /*  */
    case 675:  /*  */
    case 674:  /*  */
    case 668:  /*  */
    case 667:  /*  */
    case 666:  /*  */
    case 665:  /*  */
    case 664:  /*  */
    case 663:  /*  */
    case 662:  /*  */
    case 661:  /*  */
    case 590:  /*  */
    case 589:  /*  */
    case 588:  /*  */
    case 587:  /*  */
    case 581:  /*  */
    case 580:  /*  */
    case 579:  /*  */
    case 578:  /*  */
    case 577:  /*  */
    case 576:  /*  */
    case 575:  /*  */
    case 574:  /*  */
    case 503:  /*  */
    case 502:  /*  */
    case 501:  /*  */
    case 500:  /*  */
    case 464:  /* define_peephole, line 4601 */
    case 454:  /* define_peephole, line 4402 */
    case 453:  /* define_peephole, line 4371 */
    case 360:  /* fpcc_to_reg */
    case 358:  /* cmpdf_internal */
    case 306:  /* *round */
    case 305:  /* ldxi */
    case 289:  /* satrndu */
    case 288:  /* satrnds */
    case 287:  /* satu */
    case 286:  /* sats */
    case 262:  /* prefetch */
    case 166:  /* ldhi_predicable_se */
    case 165:  /* ldhi_predicable_ze */
    case 164:  /* ldsiqi_predicable_ze */
    case 163:  /* ldsihi_predicable_ze */
    case 162:  /* ldsisi_predicable_ze */
    case 161:  /* ldsiqi_predicable_se */
    case 160:  /* ldsihi_predicable_se */
    case 159:  /* ldsisi_predicable_se */
    case 151:  /* tstdi_internal */
    case 89:  /* satsub_h */
    case 88:  /* satadd_h */
    case 87:  /* satsub_w */
    case 86:  /* satadd_w */
    case 85:  /* machh_d */
    case 84:  /* macwh_d */
    case 83:  /* mulnwh_d */
    case 82:  /* mulwh_d */
    case 81:  /* macsathh_w */
    case 80:  /* mulsatrndwh_w */
    case 79:  /* mulsatwh_w */
    case 78:  /* mulsathh_w */
    case 77:  /* mulsatrndhh_h */
    case 76:  /* mulsathh_h */
    case 69:  /* mulnhisi3 */
    case 68:  /* mulhisi3 */
    case 59:  /* subdi3 */
    case 46:  /* adddi3 */
    case 30:  /* popm */
    case 16:  /* ldqi_predicable */
    case 15:  /* ldhi_predicable */
    case 14:  /* ldsi_predicable */
    case 13:  /* ldsf_predicable */
    case 7:  /* pic_load_addr */
      if (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP))))
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case 4:  /* movv4qi_internal */
    case 3:  /* movv2hi_internal */
    case 2:  /* movsi_internal */
      extract_constrain_insn_cached (insn);
      if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (((1 << which_alternative) & 0x7)))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (!((1 << which_alternative) & 0x27)))
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case 1:  /* *movhi_internal */
    case 0:  /* *movqi_internal */
      extract_constrain_insn_cached (insn);
      if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (!((1 << which_alternative) & 0x6)))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 1))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_ALU))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (((get_attr_type (insn) == TYPE_ALU2) || (get_attr_type (insn) == TYPE_ALU_SAT)) || ((get_attr_type (insn) == TYPE_MULHH) || (get_attr_type (insn) == TYPE_MULWH))))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_MULWW_W))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_MULWW_D))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_DIV))
        {
	  return 33 /* 0x21 */;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_MACHH_W))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_MACWW_W))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_MACWW_D))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_CALL))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_LOAD))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_LOAD_RM))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_STORE))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_LOAD2))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_LOAD4))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && ((get_attr_type (insn) == TYPE_STORE2) || (get_attr_type (insn) == TYPE_STORE4)))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_FMV))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_FMUL))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_FCMPS))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_FCMPD))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_FCAST))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_FMVCPU))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && ((get_attr_type (insn) == TYPE_FLDD) || (get_attr_type (insn) == TYPE_FLDS)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    default:
      if (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    }
}

int
internal_dfa_insn_code (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 362:  /* stm_fp */
      return 30 /* 0x1e */;

    case 360:  /* fpcc_to_reg */
      if (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP))))
        {
	  return 24 /* 0x18 */;
        }
      else
        {
	  return 30 /* 0x1e */;
        }

    case 359:  /* cmpsf_internal */
      if (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP))))
        {
	  return 21 /* 0x15 */;
        }
      else
        {
	  return 30 /* 0x1e */;
        }

    case 358:  /* cmpdf_internal */
      if (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP))))
        {
	  return 22 /* 0x16 */;
        }
      else
        {
	  return 30 /* 0x1e */;
        }

    case 347:  /* extendsfdf2 */
    case 346:  /* truncdfsf2 */
      if (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP))))
        {
	  return 23 /* 0x17 */;
        }
      else
        {
	  return 30 /* 0x1e */;
        }

    case 357:  /* absdf2 */
    case 356:  /* negdf2 */
    case 345:  /* abssf2 */
    case 344:  /* negsf2 */
      if (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP))))
        {
	  return 19 /* 0x13 */;
        }
      else
        {
	  return 30 /* 0x1e */;
        }

    case 355:  /* subdf3 */
    case 354:  /* adddf3 */
    case 353:  /* nmacdf3 */
    case 352:  /* nmsubacdf3 */
    case 351:  /* msubacdf3 */
    case 350:  /* macdf3 */
    case 349:  /* nmuldf3 */
    case 348:  /* muldf3 */
    case 343:  /* subsf3 */
    case 342:  /* addsf3 */
    case 341:  /* nmsubacsf3 */
    case 340:  /* msubacsf3 */
    case 339:  /* nmacsf3 */
    case 338:  /* macsf3 */
    case 337:  /* nmulsf3 */
    case 336:  /* mulsf3 */
      if (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP))))
        {
	  return 20 /* 0x14 */;
        }
      else
        {
	  return 30 /* 0x1e */;
        }

    case 335:  /* *movdf_fpcp */
      extract_constrain_insn_cached (insn);
      if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 5))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 6))
        {
	  return 15 /* 0xf */;
        }
      else if ((which_alternative == 7) && (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 0))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 2))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (((1 << which_alternative) & 0xa)))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 4))
        {
	  return 28 /* 0x1c */;
        }
      else
        {
	  return 30 /* 0x1e */;
        }

    case 334:  /* *movsf_fpcp */
      extract_constrain_insn_cached (insn);
      if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (((1 << which_alternative) & 0x60)))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 7))
        {
	  return 12 /* 0xc */;
        }
      else if ((which_alternative == 8) && (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 0))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 2))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (((1 << which_alternative) & 0xa)))
        {
	  return 26 /* 0x1a */;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 4))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 30 /* 0x1e */;
        }

    case 267:  /* bswap_32 */
    case 266:  /* bswap_16 */
      extract_constrain_insn_cached (insn);
      if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 0))
        {
	  return 0;
        }
      else if ((which_alternative == 2) && (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))))
        {
	  return 13 /* 0xd */;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 1))
        {
	  return 14 /* 0xe */;
        }
      else
        {
	  return 30 /* 0x1e */;
        }

    case 934:  /*  */
    case 933:  /*  */
    case 932:  /*  */
    case 931:  /*  */
    case 930:  /*  */
    case 847:  /*  */
    case 846:  /*  */
    case 845:  /*  */
    case 844:  /*  */
    case 843:  /*  */
    case 760:  /*  */
    case 759:  /*  */
    case 758:  /*  */
    case 757:  /*  */
    case 756:  /*  */
    case 673:  /*  */
    case 672:  /*  */
    case 671:  /*  */
    case 670:  /*  */
    case 669:  /*  */
    case 586:  /*  */
    case 585:  /*  */
    case 584:  /*  */
    case 583:  /*  */
    case 582:  /*  */
    case 472:  /* define_peephole, line 4725 */
    case 470:  /* define_peephole, line 4696 */
    case 469:  /* define_peephole, line 4683 */
    case 466:  /* define_peephole, line 4635 */
    case 465:  /* define_peephole, line 4622 */
    case 261:  /* tablejump_insn */
    case 259:  /* indirect_jump_internal */
    case 257:  /* return_v4qireg_cond */
    case 256:  /* return_v2hireg_cond */
    case 255:  /* return_sireg_cond */
    case 254:  /* return_v4qireg */
    case 253:  /* return_v2hireg */
    case 252:  /* return_sireg */
    case 251:  /* return_imm_predicable */
    case 250:  /* return_imm_cond */
    case 249:  /* return_imm */
    case 248:  /* return_cond_predicable */
    case 247:  /* return_cond */
    case 246:  /* return */
    case 245:  /* call_value_internal */
    case 244:  /* call_internal */
      if (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP))))
        {
	  return 11 /* 0xb */;
        }
      else
        {
	  return 30 /* 0x1e */;
        }

    case 471:  /* define_peephole, line 4710 */
    case 304:  /* *sibcall_epilogue_insns_ret_imm */
    case 303:  /* sibcall_epilogue */
    case 302:  /* *epilogue_insns_ret_imm */
    case 301:  /* *epilogue_insns */
    case 243:  /* jump */
    case 202:  /* *bleu-reverse */
    case 201:  /* *bltu-reverse */
    case 200:  /* *bgeu-reverse */
    case 199:  /* *bgtu-reverse */
    case 198:  /* *ble-reverse */
    case 197:  /* *blt-reverse */
    case 196:  /* *bge-reverse */
    case 195:  /* *bgt-reverse */
    case 194:  /* *bne-reverse */
    case 193:  /* *beq-reverse */
    case 192:  /* bleu */
    case 191:  /* bltu */
    case 190:  /* bgeu */
    case 189:  /* bgtu */
    case 188:  /* ble */
    case 187:  /* blt */
    case 186:  /* bge */
    case 185:  /* bgt */
    case 184:  /* bne */
    case 183:  /* beq */
    case 182:  /* *bpl-reverse */
    case 181:  /* bpl */
    case 180:  /* *bmi-reverse */
    case 179:  /* bmi */
      if (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP))))
        {
	  return 10 /* 0xa */;
        }
      else
        {
	  return 30 /* 0x1e */;
        }

    case 158:  /* zero_extendqihi2 */
    case 157:  /* zero_extendqisi2 */
    case 156:  /* zero_extendhisi2 */
    case 155:  /* extendqihi2 */
    case 154:  /* extendqisi2 */
    case 153:  /* extendhisi2 */
      extract_constrain_insn_cached (insn);
      if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (!((1 << which_alternative) & 0x3)))
        {
	  return 13 /* 0xd */;
        }
      else
        {
	  return 30 /* 0x1e */;
        }

    case 136:  /* udivmodsi4_internal */
    case 135:  /* divmodsi4_internal */
      if (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP))))
        {
	  return 6;
        }
      else
        {
	  return 30 /* 0x1e */;
        }

    case 464:  /* define_peephole, line 4601 */
    case 306:  /* *round */
    case 289:  /* satrndu */
    case 288:  /* satrnds */
    case 287:  /* satu */
    case 286:  /* sats */
    case 89:  /* satsub_h */
    case 88:  /* satadd_h */
    case 87:  /* satsub_w */
    case 86:  /* satadd_w */
      if (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP))))
        {
	  return 2;
        }
      else
        {
	  return 30 /* 0x1e */;
        }

    case 75:  /* umulaccsidi3 */
    case 74:  /* mulaccsidi3 */
      if (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP))))
        {
	  return 9;
        }
      else
        {
	  return 30 /* 0x1e */;
        }

    case 73:  /* *mulaccsi3 */
      if (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP))))
        {
	  return 8;
        }
      else
        {
	  return 30 /* 0x1e */;
        }

    case 72:  /* umulsidi3 */
    case 71:  /* mulsidi3 */
      if (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP))))
        {
	  return 5;
        }
      else
        {
	  return 30 /* 0x1e */;
        }

    case 70:  /* machisi3 */
      if (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP))))
        {
	  return 7;
        }
      else
        {
	  return 30 /* 0x1e */;
        }

    case 85:  /* machh_d */
    case 84:  /* macwh_d */
    case 83:  /* mulnwh_d */
    case 82:  /* mulwh_d */
    case 81:  /* macsathh_w */
    case 80:  /* mulsatrndwh_w */
    case 79:  /* mulsatwh_w */
    case 78:  /* mulsathh_w */
    case 77:  /* mulsatrndhh_h */
    case 76:  /* mulsathh_h */
    case 69:  /* mulnhisi3 */
    case 68:  /* mulhisi3 */
      if (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP))))
        {
	  return 3;
        }
      else
        {
	  return 30 /* 0x1e */;
        }

    case 67:  /* mulsi3 */
    case 66:  /* mulqi3 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) && (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 4;
        }
      else
        {
	  return 30 /* 0x1e */;
        }

    case 151:  /* tstdi_internal */
    case 59:  /* subdi3 */
    case 46:  /* adddi3 */
      if (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP))))
        {
	  return 1;
        }
      else
        {
	  return 30 /* 0x1e */;
        }

    case 855:  /*  */
    case 854:  /*  */
    case 853:  /*  */
    case 852:  /*  */
    case 768:  /*  */
    case 767:  /*  */
    case 766:  /*  */
    case 765:  /*  */
    case 681:  /*  */
    case 680:  /*  */
    case 679:  /*  */
    case 678:  /*  */
    case 594:  /*  */
    case 593:  /*  */
    case 592:  /*  */
    case 591:  /*  */
    case 507:  /*  */
    case 506:  /*  */
    case 505:  /*  */
    case 504:  /*  */
    case 29:  /* stm */
    case 28:  /* pushm */
    case 20:  /* stqi_predicable */
    case 19:  /* sthi_predicable */
    case 18:  /* stsi_predicable */
    case 17:  /* stsf_predicable */
      if (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP))))
        {
	  return 14 /* 0xe */;
        }
      else
        {
	  return 30 /* 0x1e */;
        }

    case 12:  /* *movdf_internal */
      extract_constrain_insn_cached (insn);
      if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (((1 << which_alternative) & 0x7)))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 3))
        {
	  return 15 /* 0xf */;
        }
      else if ((which_alternative == 4) && (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))))
        {
	  return 17 /* 0x11 */;
        }
      else
        {
	  return 30 /* 0x1e */;
        }

    case 11:  /* *movsf_internal */
      extract_constrain_insn_cached (insn);
      if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 2))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 3))
        {
	  return 12 /* 0xc */;
        }
      else if ((which_alternative == 4) && (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))))
        {
	  return 14 /* 0xe */;
        }
      else
        {
	  return 30 /* 0x1e */;
        }

    case 10:  /* *movti_internal */
      extract_constrain_insn_cached (insn);
      if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (((1 << which_alternative) & 0x13)))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (!((1 << which_alternative) & 0x1b)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 3))
        {
	  return 18 /* 0x12 */;
        }
      else
        {
	  return 30 /* 0x1e */;
        }

    case 9:  /* *movdi_internal */
      extract_constrain_insn_cached (insn);
      if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 5))
        {
	  return 15 /* 0xf */;
        }
      else if ((which_alternative == 6) && (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))))
        {
	  return 17 /* 0x11 */;
        }
      else
        {
	  return 30 /* 0x1e */;
        }

    case 929:  /*  */
    case 928:  /*  */
    case 927:  /*  */
    case 926:  /*  */
    case 925:  /*  */
    case 924:  /*  */
    case 923:  /*  */
    case 922:  /*  */
    case 851:  /*  */
    case 850:  /*  */
    case 849:  /*  */
    case 848:  /*  */
    case 842:  /*  */
    case 841:  /*  */
    case 840:  /*  */
    case 839:  /*  */
    case 838:  /*  */
    case 837:  /*  */
    case 836:  /*  */
    case 835:  /*  */
    case 764:  /*  */
    case 763:  /*  */
    case 762:  /*  */
    case 761:  /*  */
    case 755:  /*  */
    case 754:  /*  */
    case 753:  /*  */
    case 752:  /*  */
    case 751:  /*  */
    case 750:  /*  */
    case 749:  /*  */
    case 748:  /*  */
    case 677:  /*  */
    case 676:  /*  */
    case 675:  /*  */
    case 674:  /*  */
    case 668:  /*  */
    case 667:  /*  */
    case 666:  /*  */
    case 665:  /*  */
    case 664:  /*  */
    case 663:  /*  */
    case 662:  /*  */
    case 661:  /*  */
    case 590:  /*  */
    case 589:  /*  */
    case 588:  /*  */
    case 587:  /*  */
    case 581:  /*  */
    case 580:  /*  */
    case 579:  /*  */
    case 578:  /*  */
    case 577:  /*  */
    case 576:  /*  */
    case 575:  /*  */
    case 574:  /*  */
    case 503:  /*  */
    case 502:  /*  */
    case 501:  /*  */
    case 500:  /*  */
    case 454:  /* define_peephole, line 4402 */
    case 453:  /* define_peephole, line 4371 */
    case 305:  /* ldxi */
    case 262:  /* prefetch */
    case 166:  /* ldhi_predicable_se */
    case 165:  /* ldhi_predicable_ze */
    case 164:  /* ldsiqi_predicable_ze */
    case 163:  /* ldsihi_predicable_ze */
    case 162:  /* ldsisi_predicable_ze */
    case 161:  /* ldsiqi_predicable_se */
    case 160:  /* ldsihi_predicable_se */
    case 159:  /* ldsisi_predicable_se */
    case 30:  /* popm */
    case 16:  /* ldqi_predicable */
    case 15:  /* ldhi_predicable */
    case 14:  /* ldsi_predicable */
    case 13:  /* ldsf_predicable */
    case 7:  /* pic_load_addr */
      if (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP))))
        {
	  return 12 /* 0xc */;
        }
      else
        {
	  return 30 /* 0x1e */;
        }

    case 4:  /* movv4qi_internal */
    case 3:  /* movv2hi_internal */
    case 2:  /* movsi_internal */
      extract_constrain_insn_cached (insn);
      if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (((1 << which_alternative) & 0x7)))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 3))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (!((1 << which_alternative) & 0x2f)))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 5))
        {
	  return 14 /* 0xe */;
        }
      else
        {
	  return 30 /* 0x1e */;
        }

    case 1:  /* *movhi_internal */
    case 0:  /* *movqi_internal */
      extract_constrain_insn_cached (insn);
      if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (!((1 << which_alternative) & 0x6)))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 1))
        {
	  return 13 /* 0xd */;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (which_alternative == 2))
        {
	  return 14 /* 0xe */;
        }
      else
        {
	  return 30 /* 0x1e */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_ALU))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_ALU2))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_ALU_SAT))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && ((get_attr_type (insn) == TYPE_MULHH) || (get_attr_type (insn) == TYPE_MULWH)))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_MULWW_W))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_MULWW_D))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_DIV))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_MACHH_W))
        {
	  return 7;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_MACWW_W))
        {
	  return 8;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_MACWW_D))
        {
	  return 9;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_BRANCH))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_CALL))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_LOAD))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_LOAD_RM))
        {
	  return 13 /* 0xd */;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_STORE))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_LOAD2))
        {
	  return 15 /* 0xf */;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_LOAD4))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_STORE2))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_STORE4))
        {
	  return 18 /* 0x12 */;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_FMV))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_FMUL))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_FCMPS))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_FCMPD))
        {
	  return 22 /* 0x16 */;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_FCAST))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_FMVCPU))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_FLDD))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_FLDS))
        {
	  return 26 /* 0x1a */;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_FSTS))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP)))) && (get_attr_type (insn) == TYPE_FSTD))
        {
	  return 28 /* 0x1c */;
        }
      else
        {
	  return 30 /* 0x1e */;
        }

    default:
      if (((
#line 34 "/home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gcc-4.2.4/gcc/config/avr32/avr32.md"
(avr32_arch->arch_type)) == (
(PIPELINE_AP))))
        {
	  return 0;
        }
      else
        {
	  return 30 /* 0x1e */;
        }

    }
}

enum attr_cc
get_attr_cc (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 259:  /* indirect_jump_internal */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return CC_NONE;
        }
      else
        {
	  return CC_CLOBBER;
        }

    case 158:  /* zero_extendqihi2 */
    case 157:  /* zero_extendqisi2 */
    case 156:  /* zero_extendhisi2 */
    case 155:  /* extendqihi2 */
    case 154:  /* extendqisi2 */
    case 153:  /* extendhisi2 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return CC_SET_NCZ;
        }
      else
        {
	  return CC_NONE;
        }

    case 11:  /* *movsf_internal */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return CC_NONE;
        }
      else if (which_alternative == 2)
        {
	  return CC_CLOBBER;
        }
      else
        {
	  return CC_NONE;
        }

    case 4:  /* movv4qi_internal */
    case 3:  /* movv2hi_internal */
    case 2:  /* movsi_internal */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return CC_NONE;
        }
      else if (which_alternative == 2)
        {
	  return CC_SET_Z_IF_NOT_V2;
        }
      else if (which_alternative == 3)
        {
	  return CC_SET_Z;
        }
      else if (((1 << which_alternative) & 0x30))
        {
	  return CC_NONE;
        }
      else
        {
	  return CC_CLOBBER;
        }

    case 361:  /* reg_to_cc */
      return CC_FROM_FPCC;

    case 358:  /* cmpdf_internal */
    case 359:  /* cmpsf_internal */
      return CC_FPCOMPARE;

    case 245:  /* call_value_internal */
    case 466:  /* define_peephole, line 4635 */
      return CC_CALL_SET;

    case 8:  /* pic_compute_got_from_pc */
    case 32:  /* addhi3 */
    case 33:  /* addqi3 */
    case 35:  /* addhi3_lsl */
    case 36:  /* addqi3_lsl */
    case 38:  /* addhi3_lsl2 */
    case 39:  /* addqi3_lsl2 */
    case 41:  /* addhi3_mul */
    case 42:  /* addqi3_mul */
    case 44:  /* addhi3_mul2 */
    case 45:  /* addqi3_mul2 */
    case 51:  /* subhi3 */
    case 52:  /* subqi3 */
    case 54:  /* *subhi3_mul */
    case 55:  /* *subqi3_mul */
    case 57:  /* *subhi3_lsl */
    case 58:  /* *subqi3_lsl */
    case 97:  /* anddi3 */
    case 99:  /* iordi3 */
    case 101:  /* xordi3 */
    case 244:  /* call_internal */
    case 260:  /* tablejump_add */
    case 264:  /* ffssi2 */
    case 281:  /* musfr */
    case 283:  /* ssrf */
    case 284:  /* csrf */
    case 307:  /* vec_setv2hi_hi */
    case 308:  /* vec_setv2hi_lo */
    case 309:  /* vec_extractv2hi */
    case 310:  /* vec_extractv4qi */
    case 312:  /* sync_compare_and_swapsi */
    case 313:  /* sync_loadsi */
    case 314:  /* sync_store_if_lock */
    case 453:  /* define_peephole, line 4371 */
    case 454:  /* define_peephole, line 4402 */
    case 464:  /* define_peephole, line 4601 */
    case 465:  /* define_peephole, line 4622 */
      return CC_CLOBBER;

    case 146:  /* cmpdi_internal */
    case 147:  /* cmpsi_internal */
    case 148:  /* cmphi_internal */
    case 149:  /* cmpqi_internal */
    case 150:  /* tstsi_internal */
    case 151:  /* tstdi_internal */
      return CC_COMPARE;

    case 145:  /* bldsi */
      return CC_BLD;

    case 92:  /* andsi_lshift */
    case 93:  /* iorsi_lshift */
    case 94:  /* xorsi_lshift */
    case 95:  /* andnsi */
    case 96:  /* andsi3 */
    case 98:  /* iorsi3 */
    case 100:  /* xorsi3 */
    case 142:  /* abssi2 */
    case 143:  /* one_cmplsi2 */
    case 269:  /* clzsi2 */
    case 270:  /* ctzsi2 */
    case 386:  /* define_peephole, line 1769 */
    case 387:  /* define_peephole, line 1769 */
    case 388:  /* define_peephole, line 1769 */
    case 389:  /* define_peephole, line 1787 */
    case 390:  /* define_peephole, line 1787 */
    case 391:  /* define_peephole, line 1787 */
    case 461:  /* define_peephole, line 4544 */
    case 462:  /* define_peephole, line 4555 */
      return CC_SET_Z;

    case 25:  /* insv */
    case 26:  /* extv_internal */
    case 27:  /* extzv_internal */
    case 137:  /* ashlsi3 */
    case 138:  /* ashrsi3 */
    case 139:  /* lshrsi3 */
      return CC_SET_NCZ;

    case 31:  /* addsi3 */
    case 34:  /* addsi3_lsl */
    case 37:  /* addsi3_lsl2 */
    case 40:  /* addsi3_mul */
    case 43:  /* addsi3_mul2 */
    case 46:  /* adddi3 */
    case 50:  /* subsi3 */
    case 53:  /* *subsi3_mul */
    case 56:  /* *subsi3_lsl */
    case 59:  /* subdi3 */
    case 140:  /* negsi2 */
      return CC_SET_VNCZ;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 0:  /* *movqi_internal */
    case 1:  /* *movhi_internal */
    case 5:  /* mov_symbol_lo */
    case 6:  /* add_symbol_hi */
    case 7:  /* pic_load_addr */
    case 9:  /* *movdi_internal */
    case 10:  /* *movti_internal */
    case 12:  /* *movdf_internal */
    case 28:  /* pushm */
    case 29:  /* stm */
    case 30:  /* popm */
    case 66:  /* mulqi3 */
    case 67:  /* mulsi3 */
    case 68:  /* mulhisi3 */
    case 69:  /* mulnhisi3 */
    case 70:  /* machisi3 */
    case 71:  /* mulsidi3 */
    case 72:  /* umulsidi3 */
    case 73:  /* *mulaccsi3 */
    case 74:  /* mulaccsidi3 */
    case 75:  /* umulaccsidi3 */
    case 76:  /* mulsathh_h */
    case 77:  /* mulsatrndhh_h */
    case 78:  /* mulsathh_w */
    case 79:  /* mulsatwh_w */
    case 80:  /* mulsatrndwh_w */
    case 81:  /* macsathh_w */
    case 82:  /* mulwh_d */
    case 83:  /* mulnwh_d */
    case 84:  /* macwh_d */
    case 85:  /* machh_d */
    case 86:  /* satadd_w */
    case 87:  /* satsub_w */
    case 88:  /* satadd_h */
    case 89:  /* satsub_h */
    case 90:  /* sminsi3 */
    case 91:  /* smaxsi3 */
    case 135:  /* divmodsi4_internal */
    case 136:  /* udivmodsi4_internal */
    case 152:  /* truncdisi2 */
    case 167:  /* seq */
    case 168:  /* sne */
    case 169:  /* sgt */
    case 170:  /* sge */
    case 171:  /* slt */
    case 172:  /* sle */
    case 173:  /* sgtu */
    case 174:  /* sgeu */
    case 175:  /* sltu */
    case 176:  /* sleu */
    case 177:  /* smi */
    case 178:  /* spl */
    case 179:  /* bmi */
    case 180:  /* *bmi-reverse */
    case 181:  /* bpl */
    case 182:  /* *bpl-reverse */
    case 183:  /* beq */
    case 184:  /* bne */
    case 185:  /* bgt */
    case 186:  /* bge */
    case 187:  /* blt */
    case 188:  /* ble */
    case 189:  /* bgtu */
    case 190:  /* bgeu */
    case 191:  /* bltu */
    case 192:  /* bleu */
    case 193:  /* *beq-reverse */
    case 194:  /* *bne-reverse */
    case 195:  /* *bgt-reverse */
    case 196:  /* *bge-reverse */
    case 197:  /* *blt-reverse */
    case 198:  /* *ble-reverse */
    case 199:  /* *bgtu-reverse */
    case 200:  /* *bgeu-reverse */
    case 201:  /* *bltu-reverse */
    case 202:  /* *bleu-reverse */
    case 243:  /* jump */
    case 246:  /* return */
    case 247:  /* return_cond */
    case 248:  /* return_cond_predicable */
    case 249:  /* return_imm */
    case 250:  /* return_imm_cond */
    case 251:  /* return_imm_predicable */
    case 252:  /* return_sireg */
    case 253:  /* return_v2hireg */
    case 254:  /* return_v4qireg */
    case 255:  /* return_sireg_cond */
    case 256:  /* return_v2hireg_cond */
    case 257:  /* return_v4qireg_cond */
    case 258:  /* nop */
    case 261:  /* tablejump_insn */
    case 262:  /* prefetch */
    case 263:  /* eh_return */
    case 265:  /* *swap_h */
    case 266:  /* bswap_16 */
    case 267:  /* bswap_32 */
    case 268:  /* blockage */
    case 271:  /* cache */
    case 272:  /* sync */
    case 273:  /* tlbr */
    case 274:  /* tlbw */
    case 275:  /* tlbs */
    case 276:  /* breakpoint */
    case 277:  /* mtsr */
    case 278:  /* mfsr */
    case 279:  /* mtdr */
    case 280:  /* mfdr */
    case 282:  /* mustr */
    case 285:  /* frs */
    case 286:  /* sats */
    case 287:  /* satu */
    case 288:  /* satrnds */
    case 289:  /* satrndu */
    case 290:  /* align_4 */
    case 291:  /* consttable_start */
    case 292:  /* consttable_end */
    case 293:  /* consttable_4 */
    case 294:  /* consttable_8 */
    case 295:  /* consttable_16 */
    case 296:  /* cop */
    case 297:  /* mvcrsi */
    case 298:  /* mvcrdi */
    case 299:  /* mvrcsi */
    case 300:  /* mvrcdi */
    case 301:  /* *epilogue_insns */
    case 302:  /* *epilogue_insns_ret_imm */
    case 303:  /* sibcall_epilogue */
    case 304:  /* *sibcall_epilogue_insns_ret_imm */
    case 305:  /* ldxi */
    case 306:  /* *round */
    case 311:  /* concatv2hi */
    case 315:  /* sync_lock_test_and_setsi */
    case 316:  /* addv2hi3 */
    case 317:  /* addv4qi3 */
    case 318:  /* subv2hi3 */
    case 319:  /* subv4qi3 */
    case 320:  /* absv2hi2 */
    case 321:  /* absv4qi2 */
    case 322:  /* ashlv2hi3 */
    case 323:  /* ashlv4qi3 */
    case 324:  /* ashrv2hi3 */
    case 325:  /* ashrv4qi3 */
    case 326:  /* lshrv2hi3 */
    case 327:  /* lshrv4qi3 */
    case 328:  /* smaxv2hi3 */
    case 329:  /* sminv2hi3 */
    case 330:  /* umaxv4qi3 */
    case 331:  /* uminv4qi3 */
    case 332:  /* addsubv2hi */
    case 333:  /* subaddv2hi */
    case 334:  /* *movsf_fpcp */
    case 335:  /* *movdf_fpcp */
    case 336:  /* mulsf3 */
    case 337:  /* nmulsf3 */
    case 338:  /* macsf3 */
    case 339:  /* nmacsf3 */
    case 340:  /* msubacsf3 */
    case 341:  /* nmsubacsf3 */
    case 342:  /* addsf3 */
    case 343:  /* subsf3 */
    case 344:  /* negsf2 */
    case 345:  /* abssf2 */
    case 346:  /* truncdfsf2 */
    case 347:  /* extendsfdf2 */
    case 348:  /* muldf3 */
    case 349:  /* nmuldf3 */
    case 350:  /* macdf3 */
    case 351:  /* msubacdf3 */
    case 352:  /* nmsubacdf3 */
    case 353:  /* nmacdf3 */
    case 354:  /* adddf3 */
    case 355:  /* subdf3 */
    case 356:  /* negdf2 */
    case 357:  /* absdf2 */
    case 360:  /* fpcc_to_reg */
    case 362:  /* stm_fp */
    case 469:  /* define_peephole, line 4683 */
    case 470:  /* define_peephole, line 4696 */
    case 471:  /* define_peephole, line 4710 */
    case 472:  /* define_peephole, line 4725 */
    case 582:  /*  */
    case 583:  /*  */
    case 584:  /*  */
    case 585:  /*  */
    case 586:  /*  */
    case 669:  /*  */
    case 670:  /*  */
    case 671:  /*  */
    case 672:  /*  */
    case 673:  /*  */
    case 756:  /*  */
    case 757:  /*  */
    case 758:  /*  */
    case 759:  /*  */
    case 760:  /*  */
    case 843:  /*  */
    case 844:  /*  */
    case 845:  /*  */
    case 846:  /*  */
    case 847:  /*  */
    case 930:  /*  */
    case 931:  /*  */
    case 932:  /*  */
    case 933:  /*  */
    case 934:  /*  */
      return CC_NONE;

    default:
      return CC_CMP_COND_INSN;

    }
}

enum attr_predicable
get_attr_predicable (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 0:  /* *movqi_internal */
    case 1:  /* *movhi_internal */
    case 2:  /* movsi_internal */
    case 3:  /* movv2hi_internal */
    case 4:  /* movv4qi_internal */
    case 5:  /* mov_symbol_lo */
    case 6:  /* add_symbol_hi */
    case 7:  /* pic_load_addr */
    case 8:  /* pic_compute_got_from_pc */
    case 9:  /* *movdi_internal */
    case 10:  /* *movti_internal */
    case 11:  /* *movsf_internal */
    case 12:  /* *movdf_internal */
    case 25:  /* insv */
    case 26:  /* extv_internal */
    case 27:  /* extzv_internal */
    case 28:  /* pushm */
    case 29:  /* stm */
    case 30:  /* popm */
    case 31:  /* addsi3 */
    case 32:  /* addhi3 */
    case 33:  /* addqi3 */
    case 34:  /* addsi3_lsl */
    case 35:  /* addhi3_lsl */
    case 36:  /* addqi3_lsl */
    case 37:  /* addsi3_lsl2 */
    case 38:  /* addhi3_lsl2 */
    case 39:  /* addqi3_lsl2 */
    case 40:  /* addsi3_mul */
    case 41:  /* addhi3_mul */
    case 42:  /* addqi3_mul */
    case 43:  /* addsi3_mul2 */
    case 44:  /* addhi3_mul2 */
    case 45:  /* addqi3_mul2 */
    case 46:  /* adddi3 */
    case 50:  /* subsi3 */
    case 51:  /* subhi3 */
    case 52:  /* subqi3 */
    case 53:  /* *subsi3_mul */
    case 54:  /* *subhi3_mul */
    case 55:  /* *subqi3_mul */
    case 56:  /* *subsi3_lsl */
    case 57:  /* *subhi3_lsl */
    case 58:  /* *subqi3_lsl */
    case 59:  /* subdi3 */
    case 66:  /* mulqi3 */
    case 67:  /* mulsi3 */
    case 68:  /* mulhisi3 */
    case 69:  /* mulnhisi3 */
    case 70:  /* machisi3 */
    case 71:  /* mulsidi3 */
    case 72:  /* umulsidi3 */
    case 73:  /* *mulaccsi3 */
    case 74:  /* mulaccsidi3 */
    case 75:  /* umulaccsidi3 */
    case 76:  /* mulsathh_h */
    case 77:  /* mulsatrndhh_h */
    case 78:  /* mulsathh_w */
    case 79:  /* mulsatwh_w */
    case 80:  /* mulsatrndwh_w */
    case 81:  /* macsathh_w */
    case 82:  /* mulwh_d */
    case 83:  /* mulnwh_d */
    case 84:  /* macwh_d */
    case 85:  /* machh_d */
    case 86:  /* satadd_w */
    case 87:  /* satsub_w */
    case 88:  /* satadd_h */
    case 89:  /* satsub_h */
    case 90:  /* sminsi3 */
    case 91:  /* smaxsi3 */
    case 92:  /* andsi_lshift */
    case 93:  /* iorsi_lshift */
    case 94:  /* xorsi_lshift */
    case 95:  /* andnsi */
    case 96:  /* andsi3 */
    case 97:  /* anddi3 */
    case 98:  /* iorsi3 */
    case 99:  /* iordi3 */
    case 100:  /* xorsi3 */
    case 101:  /* xordi3 */
    case 135:  /* divmodsi4_internal */
    case 136:  /* udivmodsi4_internal */
    case 137:  /* ashlsi3 */
    case 138:  /* ashrsi3 */
    case 139:  /* lshrsi3 */
    case 140:  /* negsi2 */
    case 142:  /* abssi2 */
    case 143:  /* one_cmplsi2 */
    case 145:  /* bldsi */
    case 146:  /* cmpdi_internal */
    case 147:  /* cmpsi_internal */
    case 148:  /* cmphi_internal */
    case 149:  /* cmpqi_internal */
    case 150:  /* tstsi_internal */
    case 151:  /* tstdi_internal */
    case 152:  /* truncdisi2 */
    case 153:  /* extendhisi2 */
    case 154:  /* extendqisi2 */
    case 155:  /* extendqihi2 */
    case 156:  /* zero_extendhisi2 */
    case 157:  /* zero_extendqisi2 */
    case 158:  /* zero_extendqihi2 */
    case 167:  /* seq */
    case 168:  /* sne */
    case 169:  /* sgt */
    case 170:  /* sge */
    case 171:  /* slt */
    case 172:  /* sle */
    case 173:  /* sgtu */
    case 174:  /* sgeu */
    case 175:  /* sltu */
    case 176:  /* sleu */
    case 177:  /* smi */
    case 178:  /* spl */
    case 179:  /* bmi */
    case 180:  /* *bmi-reverse */
    case 181:  /* bpl */
    case 182:  /* *bpl-reverse */
    case 183:  /* beq */
    case 184:  /* bne */
    case 185:  /* bgt */
    case 186:  /* bge */
    case 187:  /* blt */
    case 188:  /* ble */
    case 189:  /* bgtu */
    case 190:  /* bgeu */
    case 191:  /* bltu */
    case 192:  /* bleu */
    case 193:  /* *beq-reverse */
    case 194:  /* *bne-reverse */
    case 195:  /* *bgt-reverse */
    case 196:  /* *bge-reverse */
    case 197:  /* *blt-reverse */
    case 198:  /* *ble-reverse */
    case 199:  /* *bgtu-reverse */
    case 200:  /* *bgeu-reverse */
    case 201:  /* *bltu-reverse */
    case 202:  /* *bleu-reverse */
    case 203:  /* addsicc_cmpdi_reg */
    case 204:  /* addhicc_cmpdi_reg */
    case 205:  /* addqicc_cmpdi_reg */
    case 206:  /* addsicc_cmpsi_reg */
    case 207:  /* addhicc_cmpsi_reg */
    case 208:  /* addqicc_cmpsi_reg */
    case 209:  /* addsicc_cmphi_reg */
    case 210:  /* addhicc_cmphi_reg */
    case 211:  /* addqicc_cmphi_reg */
    case 212:  /* addsicc_cmpqi_reg */
    case 213:  /* addhicc_cmpqi_reg */
    case 214:  /* addqicc_cmpqi_reg */
    case 215:  /* addsicc_cmpdi */
    case 216:  /* addhicc_cmpdi */
    case 217:  /* addqicc_cmpdi */
    case 218:  /* addsicc_cmpsi */
    case 219:  /* addhicc_cmpsi */
    case 220:  /* addqicc_cmpsi */
    case 221:  /* addsicc_cmphi */
    case 222:  /* addhicc_cmphi */
    case 223:  /* addqicc_cmphi */
    case 224:  /* addsicc_cmpqi */
    case 225:  /* addhicc_cmpqi */
    case 226:  /* addqicc_cmpqi */
    case 227:  /* movsfcc_cmpdi */
    case 228:  /* movsfcc_cmpsi */
    case 229:  /* movsfcc_cmphi */
    case 230:  /* movsfcc_cmpqi */
    case 231:  /* movsicc_cmpdi */
    case 232:  /* movsicc_cmpsi */
    case 233:  /* movsicc_cmphi */
    case 234:  /* movsicc_cmpqi */
    case 235:  /* movhicc_cmpdi */
    case 236:  /* movhicc_cmpsi */
    case 237:  /* movhicc_cmphi */
    case 238:  /* movhicc_cmpqi */
    case 239:  /* movqicc_cmpdi */
    case 240:  /* movqicc_cmpsi */
    case 241:  /* movqicc_cmphi */
    case 242:  /* movqicc_cmpqi */
    case 243:  /* jump */
    case 244:  /* call_internal */
    case 245:  /* call_value_internal */
    case 246:  /* return */
    case 247:  /* return_cond */
    case 249:  /* return_imm */
    case 250:  /* return_imm_cond */
    case 255:  /* return_sireg_cond */
    case 256:  /* return_v2hireg_cond */
    case 257:  /* return_v4qireg_cond */
    case 258:  /* nop */
    case 259:  /* indirect_jump_internal */
    case 260:  /* tablejump_add */
    case 261:  /* tablejump_insn */
    case 262:  /* prefetch */
    case 263:  /* eh_return */
    case 264:  /* ffssi2 */
    case 265:  /* *swap_h */
    case 266:  /* bswap_16 */
    case 267:  /* bswap_32 */
    case 268:  /* blockage */
    case 269:  /* clzsi2 */
    case 270:  /* ctzsi2 */
    case 271:  /* cache */
    case 272:  /* sync */
    case 273:  /* tlbr */
    case 274:  /* tlbw */
    case 275:  /* tlbs */
    case 276:  /* breakpoint */
    case 277:  /* mtsr */
    case 278:  /* mfsr */
    case 279:  /* mtdr */
    case 280:  /* mfdr */
    case 281:  /* musfr */
    case 282:  /* mustr */
    case 283:  /* ssrf */
    case 284:  /* csrf */
    case 285:  /* frs */
    case 286:  /* sats */
    case 287:  /* satu */
    case 288:  /* satrnds */
    case 289:  /* satrndu */
    case 290:  /* align_4 */
    case 291:  /* consttable_start */
    case 292:  /* consttable_end */
    case 293:  /* consttable_4 */
    case 294:  /* consttable_8 */
    case 295:  /* consttable_16 */
    case 296:  /* cop */
    case 297:  /* mvcrsi */
    case 298:  /* mvcrdi */
    case 299:  /* mvrcsi */
    case 300:  /* mvrcdi */
    case 301:  /* *epilogue_insns */
    case 302:  /* *epilogue_insns_ret_imm */
    case 303:  /* sibcall_epilogue */
    case 304:  /* *sibcall_epilogue_insns_ret_imm */
    case 305:  /* ldxi */
    case 306:  /* *round */
    case 307:  /* vec_setv2hi_hi */
    case 308:  /* vec_setv2hi_lo */
    case 309:  /* vec_extractv2hi */
    case 310:  /* vec_extractv4qi */
    case 311:  /* concatv2hi */
    case 312:  /* sync_compare_and_swapsi */
    case 313:  /* sync_loadsi */
    case 314:  /* sync_store_if_lock */
    case 315:  /* sync_lock_test_and_setsi */
    case 316:  /* addv2hi3 */
    case 317:  /* addv4qi3 */
    case 318:  /* subv2hi3 */
    case 319:  /* subv4qi3 */
    case 320:  /* absv2hi2 */
    case 321:  /* absv4qi2 */
    case 322:  /* ashlv2hi3 */
    case 323:  /* ashlv4qi3 */
    case 324:  /* ashrv2hi3 */
    case 325:  /* ashrv4qi3 */
    case 326:  /* lshrv2hi3 */
    case 327:  /* lshrv4qi3 */
    case 328:  /* smaxv2hi3 */
    case 329:  /* sminv2hi3 */
    case 330:  /* umaxv4qi3 */
    case 331:  /* uminv4qi3 */
    case 332:  /* addsubv2hi */
    case 333:  /* subaddv2hi */
    case 334:  /* *movsf_fpcp */
    case 335:  /* *movdf_fpcp */
    case 336:  /* mulsf3 */
    case 337:  /* nmulsf3 */
    case 338:  /* macsf3 */
    case 339:  /* nmacsf3 */
    case 340:  /* msubacsf3 */
    case 341:  /* nmsubacsf3 */
    case 342:  /* addsf3 */
    case 343:  /* subsf3 */
    case 344:  /* negsf2 */
    case 345:  /* abssf2 */
    case 346:  /* truncdfsf2 */
    case 347:  /* extendsfdf2 */
    case 348:  /* muldf3 */
    case 349:  /* nmuldf3 */
    case 350:  /* macdf3 */
    case 351:  /* msubacdf3 */
    case 352:  /* nmsubacdf3 */
    case 353:  /* nmacdf3 */
    case 354:  /* adddf3 */
    case 355:  /* subdf3 */
    case 356:  /* negdf2 */
    case 357:  /* absdf2 */
    case 358:  /* cmpdf_internal */
    case 359:  /* cmpsf_internal */
    case 360:  /* fpcc_to_reg */
    case 361:  /* reg_to_cc */
    case 362:  /* stm_fp */
    case 386:  /* define_peephole, line 1769 */
    case 387:  /* define_peephole, line 1769 */
    case 388:  /* define_peephole, line 1769 */
    case 389:  /* define_peephole, line 1787 */
    case 390:  /* define_peephole, line 1787 */
    case 391:  /* define_peephole, line 1787 */
    case 453:  /* define_peephole, line 4371 */
    case 454:  /* define_peephole, line 4402 */
    case 461:  /* define_peephole, line 4544 */
    case 462:  /* define_peephole, line 4555 */
    case 464:  /* define_peephole, line 4601 */
    case 465:  /* define_peephole, line 4622 */
    case 466:  /* define_peephole, line 4635 */
    case 469:  /* define_peephole, line 4683 */
    case 470:  /* define_peephole, line 4696 */
    case 471:  /* define_peephole, line 4710 */
    case 472:  /* define_peephole, line 4725 */
      return PREDICABLE_NO;

    default:
      return PREDICABLE_YES;

    }
}

enum attr_type
get_attr_type (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 334:  /* *movsf_fpcp */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FMV;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_FLDS;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_FMVCPU;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_FLDS;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_FSTS;
        }
      else if (((1 << which_alternative) & 0x60))
        {
	  return TYPE_ALU;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 158:  /* zero_extendqihi2 */
    case 157:  /* zero_extendqisi2 */
    case 156:  /* zero_extendhisi2 */
    case 155:  /* extendqihi2 */
    case 154:  /* extendqisi2 */
    case 153:  /* extendhisi2 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_ALU;
        }
      else
        {
	  return TYPE_LOAD_RM;
        }

    case 67:  /* mulsi3 */
    case 66:  /* mulqi3 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_MULWW_W;
        }
      else
        {
	  return TYPE_MULWH;
        }

    case 12:  /* *movdf_internal */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return TYPE_ALU;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_LOAD2;
        }
      else
        {
	  return TYPE_STORE2;
        }

    case 11:  /* *movsf_internal */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_ALU;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_ALU2;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 10:  /* *movti_internal */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_ALU;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_LOAD4;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE4;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_ALU;
        }
      else
        {
	  return TYPE_LOAD4;
        }

    case 9:  /* *movdi_internal */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1f))
        {
	  return TYPE_ALU;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_LOAD2;
        }
      else
        {
	  return TYPE_STORE2;
        }

    case 4:  /* movv4qi_internal */
    case 3:  /* movv2hi_internal */
    case 2:  /* movsi_internal */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return TYPE_ALU;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_ALU2;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_LOAD;
        }

    case 0:  /* *movqi_internal */
    case 1:  /* *movhi_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_ALU;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD_RM;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_ALU;
        }

    case 266:  /* bswap_16 */
    case 267:  /* bswap_32 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_ALU;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_LOAD_RM;
        }

    case 335:  /* *movdf_fpcp */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FMV;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_FLDD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_FMVCPU;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_FLDD;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_FSTD;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_ALU2;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_LOAD2;
        }
      else
        {
	  return TYPE_STORE2;
        }

    case 362:  /* stm_fp */
      return TYPE_FSTM;

    case 360:  /* fpcc_to_reg */
      return TYPE_FMVCPU;

    case 344:  /* negsf2 */
    case 345:  /* abssf2 */
    case 356:  /* negdf2 */
    case 357:  /* absdf2 */
      return TYPE_FMV;

    case 346:  /* truncdfsf2 */
    case 347:  /* extendsfdf2 */
      return TYPE_FCAST;

    case 358:  /* cmpdf_internal */
      return TYPE_FCMPD;

    case 359:  /* cmpsf_internal */
      return TYPE_FCMPS;

    case 336:  /* mulsf3 */
    case 337:  /* nmulsf3 */
    case 338:  /* macsf3 */
    case 339:  /* nmacsf3 */
    case 340:  /* msubacsf3 */
    case 341:  /* nmsubacsf3 */
    case 342:  /* addsf3 */
    case 343:  /* subsf3 */
    case 348:  /* muldf3 */
    case 349:  /* nmuldf3 */
    case 350:  /* macdf3 */
    case 351:  /* msubacdf3 */
    case 352:  /* nmsubacdf3 */
    case 353:  /* nmacdf3 */
    case 354:  /* adddf3 */
    case 355:  /* subdf3 */
      return TYPE_FMUL;

    case 17:  /* stsf_predicable */
    case 18:  /* stsi_predicable */
    case 19:  /* sthi_predicable */
    case 20:  /* stqi_predicable */
    case 28:  /* pushm */
    case 29:  /* stm */
    case 504:  /*  */
    case 505:  /*  */
    case 506:  /*  */
    case 507:  /*  */
    case 591:  /*  */
    case 592:  /*  */
    case 593:  /*  */
    case 594:  /*  */
    case 678:  /*  */
    case 679:  /*  */
    case 680:  /*  */
    case 681:  /*  */
    case 765:  /*  */
    case 766:  /*  */
    case 767:  /*  */
    case 768:  /*  */
    case 852:  /*  */
    case 853:  /*  */
    case 854:  /*  */
    case 855:  /*  */
      return TYPE_STORE;

    case 7:  /* pic_load_addr */
    case 13:  /* ldsf_predicable */
    case 14:  /* ldsi_predicable */
    case 15:  /* ldhi_predicable */
    case 16:  /* ldqi_predicable */
    case 30:  /* popm */
    case 159:  /* ldsisi_predicable_se */
    case 160:  /* ldsihi_predicable_se */
    case 161:  /* ldsiqi_predicable_se */
    case 162:  /* ldsisi_predicable_ze */
    case 163:  /* ldsihi_predicable_ze */
    case 164:  /* ldsiqi_predicable_ze */
    case 165:  /* ldhi_predicable_ze */
    case 166:  /* ldhi_predicable_se */
    case 262:  /* prefetch */
    case 305:  /* ldxi */
    case 453:  /* define_peephole, line 4371 */
    case 454:  /* define_peephole, line 4402 */
    case 500:  /*  */
    case 501:  /*  */
    case 502:  /*  */
    case 503:  /*  */
    case 574:  /*  */
    case 575:  /*  */
    case 576:  /*  */
    case 577:  /*  */
    case 578:  /*  */
    case 579:  /*  */
    case 580:  /*  */
    case 581:  /*  */
    case 587:  /*  */
    case 588:  /*  */
    case 589:  /*  */
    case 590:  /*  */
    case 661:  /*  */
    case 662:  /*  */
    case 663:  /*  */
    case 664:  /*  */
    case 665:  /*  */
    case 666:  /*  */
    case 667:  /*  */
    case 668:  /*  */
    case 674:  /*  */
    case 675:  /*  */
    case 676:  /*  */
    case 677:  /*  */
    case 748:  /*  */
    case 749:  /*  */
    case 750:  /*  */
    case 751:  /*  */
    case 752:  /*  */
    case 753:  /*  */
    case 754:  /*  */
    case 755:  /*  */
    case 761:  /*  */
    case 762:  /*  */
    case 763:  /*  */
    case 764:  /*  */
    case 835:  /*  */
    case 836:  /*  */
    case 837:  /*  */
    case 838:  /*  */
    case 839:  /*  */
    case 840:  /*  */
    case 841:  /*  */
    case 842:  /*  */
    case 848:  /*  */
    case 849:  /*  */
    case 850:  /*  */
    case 851:  /*  */
    case 922:  /*  */
    case 923:  /*  */
    case 924:  /*  */
    case 925:  /*  */
    case 926:  /*  */
    case 927:  /*  */
    case 928:  /*  */
    case 929:  /*  */
      return TYPE_LOAD;

    case 244:  /* call_internal */
    case 245:  /* call_value_internal */
    case 246:  /* return */
    case 247:  /* return_cond */
    case 248:  /* return_cond_predicable */
    case 249:  /* return_imm */
    case 250:  /* return_imm_cond */
    case 251:  /* return_imm_predicable */
    case 252:  /* return_sireg */
    case 253:  /* return_v2hireg */
    case 254:  /* return_v4qireg */
    case 255:  /* return_sireg_cond */
    case 256:  /* return_v2hireg_cond */
    case 257:  /* return_v4qireg_cond */
    case 259:  /* indirect_jump_internal */
    case 261:  /* tablejump_insn */
    case 465:  /* define_peephole, line 4622 */
    case 466:  /* define_peephole, line 4635 */
    case 469:  /* define_peephole, line 4683 */
    case 470:  /* define_peephole, line 4696 */
    case 472:  /* define_peephole, line 4725 */
    case 582:  /*  */
    case 583:  /*  */
    case 584:  /*  */
    case 585:  /*  */
    case 586:  /*  */
    case 669:  /*  */
    case 670:  /*  */
    case 671:  /*  */
    case 672:  /*  */
    case 673:  /*  */
    case 756:  /*  */
    case 757:  /*  */
    case 758:  /*  */
    case 759:  /*  */
    case 760:  /*  */
    case 843:  /*  */
    case 844:  /*  */
    case 845:  /*  */
    case 846:  /*  */
    case 847:  /*  */
    case 930:  /*  */
    case 931:  /*  */
    case 932:  /*  */
    case 933:  /*  */
    case 934:  /*  */
      return TYPE_CALL;

    case 179:  /* bmi */
    case 180:  /* *bmi-reverse */
    case 181:  /* bpl */
    case 182:  /* *bpl-reverse */
    case 183:  /* beq */
    case 184:  /* bne */
    case 185:  /* bgt */
    case 186:  /* bge */
    case 187:  /* blt */
    case 188:  /* ble */
    case 189:  /* bgtu */
    case 190:  /* bgeu */
    case 191:  /* bltu */
    case 192:  /* bleu */
    case 193:  /* *beq-reverse */
    case 194:  /* *bne-reverse */
    case 195:  /* *bgt-reverse */
    case 196:  /* *bge-reverse */
    case 197:  /* *blt-reverse */
    case 198:  /* *ble-reverse */
    case 199:  /* *bgtu-reverse */
    case 200:  /* *bgeu-reverse */
    case 201:  /* *bltu-reverse */
    case 202:  /* *bleu-reverse */
    case 243:  /* jump */
    case 301:  /* *epilogue_insns */
    case 302:  /* *epilogue_insns_ret_imm */
    case 303:  /* sibcall_epilogue */
    case 304:  /* *sibcall_epilogue_insns_ret_imm */
    case 471:  /* define_peephole, line 4710 */
      return TYPE_BRANCH;

    case 74:  /* mulaccsidi3 */
    case 75:  /* umulaccsidi3 */
      return TYPE_MACWW_D;

    case 73:  /* *mulaccsi3 */
      return TYPE_MACWW_W;

    case 70:  /* machisi3 */
      return TYPE_MACHH_W;

    case 135:  /* divmodsi4_internal */
    case 136:  /* udivmodsi4_internal */
      return TYPE_DIV;

    case 71:  /* mulsidi3 */
    case 72:  /* umulsidi3 */
      return TYPE_MULWW_D;

    case 79:  /* mulsatwh_w */
    case 80:  /* mulsatrndwh_w */
    case 82:  /* mulwh_d */
    case 83:  /* mulnwh_d */
    case 84:  /* macwh_d */
    case 85:  /* machh_d */
      return TYPE_MULWH;

    case 68:  /* mulhisi3 */
    case 69:  /* mulnhisi3 */
    case 76:  /* mulsathh_h */
    case 77:  /* mulsatrndhh_h */
    case 78:  /* mulsathh_w */
    case 81:  /* macsathh_w */
      return TYPE_MULHH;

    case 86:  /* satadd_w */
    case 87:  /* satsub_w */
    case 88:  /* satadd_h */
    case 89:  /* satsub_h */
    case 286:  /* sats */
    case 287:  /* satu */
    case 288:  /* satrnds */
    case 289:  /* satrndu */
    case 306:  /* *round */
    case 464:  /* define_peephole, line 4601 */
      return TYPE_ALU_SAT;

    case 46:  /* adddi3 */
    case 59:  /* subdi3 */
    case 151:  /* tstdi_internal */
      return TYPE_ALU2;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return TYPE_ALU;

    }
}

const int length_unit_log = 1;

/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "toplev.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

#ifdef ENABLE_CHECKING
  memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
  memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
#endif

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 472:
    case 471:
    case 470:
    case 469:
    case 466:
    case 465:
    case 464:
    case 462:
    case 461:
    case 454:
    case 453:
    case 391:
    case 390:
    case 389:
    case 388:
    case 387:
    case 386:
      for (i = XVECLEN (pat, 0) - 1; i >= 0; i--)
          ro[i] = *(ro_loc[i] = &XVECEXP (pat, 0, i));
      break;

    case 934:  /* cmpsf+435 */
    case 933:  /* cmpsf+434 */
    case 932:  /* cmpsf+433 */
    case 931:  /* cmpsf+432 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 0), 0), 1));
      break;

    case 930:  /* cmpsf+431 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 0), 0), 1));
      break;

    case 929:  /* cmpsf+430 */
    case 928:  /* cmpsf+429 */
    case 927:  /* cmpsf+428 */
    case 926:  /* cmpsf+427 */
    case 925:  /* cmpsf+426 */
    case 924:  /* cmpsf+425 */
    case 923:  /* cmpsf+424 */
    case 922:  /* cmpsf+423 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 0), 0), 1));
      break;

    case 921:  /* cmpsf+422 */
    case 920:  /* cmpsf+421 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 918:  /* cmpsf+419 */
    case 916:  /* cmpsf+417 */
    case 914:  /* cmpsf+415 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 0), 0), 1));
      break;

    case 912:  /* cmpsf+413 */
    case 910:  /* cmpsf+411 */
    case 908:  /* cmpsf+409 */
    case 906:  /* cmpsf+407 */
    case 904:  /* cmpsf+405 */
    case 902:  /* cmpsf+403 */
    case 900:  /* cmpsf+401 */
    case 898:  /* cmpsf+399 */
    case 896:  /* cmpsf+397 */
    case 894:  /* cmpsf+395 */
    case 892:  /* cmpsf+393 */
    case 890:  /* cmpsf+391 */
    case 888:  /* cmpsf+389 */
    case 886:  /* cmpsf+387 */
    case 884:  /* cmpsf+385 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 0), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (pat, 0), 0), 1));
      break;

    case 883:  /* cmpsf+384 */
    case 882:  /* cmpsf+383 */
    case 881:  /* cmpsf+382 */
    case 880:  /* cmpsf+381 */
    case 879:  /* cmpsf+380 */
    case 878:  /* cmpsf+379 */
    case 877:  /* cmpsf+378 */
    case 876:  /* cmpsf+377 */
    case 875:  /* cmpsf+376 */
    case 874:  /* cmpsf+375 */
    case 873:  /* cmpsf+374 */
    case 872:  /* cmpsf+373 */
    case 871:  /* cmpsf+372 */
    case 870:  /* cmpsf+371 */
    case 869:  /* cmpsf+370 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 0), 0), 1));
      break;

    case 868:  /* cmpsf+369 */
    case 867:  /* cmpsf+368 */
    case 866:  /* cmpsf+367 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 865:  /* cmpsf+366 */
    case 864:  /* cmpsf+365 */
    case 863:  /* cmpsf+364 */
    case 862:  /* cmpsf+363 */
    case 861:  /* cmpsf+362 */
    case 860:  /* cmpsf+361 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 859:  /* cmpsf+360 */
    case 858:  /* cmpsf+359 */
    case 857:  /* cmpsf+358 */
    case 856:  /* cmpsf+357 */
    case 855:  /* cmpsf+356 */
    case 854:  /* cmpsf+355 */
    case 853:  /* cmpsf+354 */
    case 852:  /* cmpsf+353 */
    case 851:  /* cmpsf+352 */
    case 850:  /* cmpsf+351 */
    case 849:  /* cmpsf+350 */
    case 848:  /* cmpsf+349 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 0), 0), 1));
      break;

    case 847:  /* cmpsf+348 */
    case 846:  /* cmpsf+347 */
    case 845:  /* cmpsf+346 */
    case 844:  /* cmpsf+345 */
    case 760:  /* cmpsf+261 */
    case 759:  /* cmpsf+260 */
    case 758:  /* cmpsf+259 */
    case 757:  /* cmpsf+258 */
    case 673:  /* cmpsf+174 */
    case 672:  /* cmpsf+173 */
    case 671:  /* cmpsf+172 */
    case 670:  /* cmpsf+171 */
    case 586:  /* cmpsf+87 */
    case 585:  /* cmpsf+86 */
    case 584:  /* cmpsf+85 */
    case 583:  /* cmpsf+84 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 1));
      break;

    case 843:  /* cmpsf+344 */
    case 756:  /* cmpsf+257 */
    case 669:  /* cmpsf+170 */
    case 582:  /* cmpsf+83 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 1));
      break;

    case 842:  /* cmpsf+343 */
    case 841:  /* cmpsf+342 */
    case 840:  /* cmpsf+341 */
    case 839:  /* cmpsf+340 */
    case 838:  /* cmpsf+339 */
    case 837:  /* cmpsf+338 */
    case 836:  /* cmpsf+337 */
    case 835:  /* cmpsf+336 */
    case 755:  /* cmpsf+256 */
    case 754:  /* cmpsf+255 */
    case 753:  /* cmpsf+254 */
    case 752:  /* cmpsf+253 */
    case 751:  /* cmpsf+252 */
    case 750:  /* cmpsf+251 */
    case 749:  /* cmpsf+250 */
    case 748:  /* cmpsf+249 */
    case 668:  /* cmpsf+169 */
    case 667:  /* cmpsf+168 */
    case 666:  /* cmpsf+167 */
    case 665:  /* cmpsf+166 */
    case 664:  /* cmpsf+165 */
    case 663:  /* cmpsf+164 */
    case 662:  /* cmpsf+163 */
    case 661:  /* cmpsf+162 */
    case 581:  /* cmpsf+82 */
    case 580:  /* cmpsf+81 */
    case 579:  /* cmpsf+80 */
    case 578:  /* cmpsf+79 */
    case 577:  /* cmpsf+78 */
    case 576:  /* cmpsf+77 */
    case 575:  /* cmpsf+76 */
    case 574:  /* cmpsf+75 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 1));
      break;

    case 834:  /* cmpsf+335 */
    case 833:  /* cmpsf+334 */
    case 747:  /* cmpsf+248 */
    case 746:  /* cmpsf+247 */
    case 660:  /* cmpsf+161 */
    case 659:  /* cmpsf+160 */
    case 573:  /* cmpsf+74 */
    case 572:  /* cmpsf+73 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 831:  /* cmpsf+332 */
    case 829:  /* cmpsf+330 */
    case 827:  /* cmpsf+328 */
    case 744:  /* cmpsf+245 */
    case 742:  /* cmpsf+243 */
    case 740:  /* cmpsf+241 */
    case 657:  /* cmpsf+158 */
    case 655:  /* cmpsf+156 */
    case 653:  /* cmpsf+154 */
    case 570:  /* cmpsf+71 */
    case 568:  /* cmpsf+69 */
    case 566:  /* cmpsf+67 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 1));
      break;

    case 825:  /* cmpsf+326 */
    case 823:  /* cmpsf+324 */
    case 821:  /* cmpsf+322 */
    case 819:  /* cmpsf+320 */
    case 817:  /* cmpsf+318 */
    case 815:  /* cmpsf+316 */
    case 813:  /* cmpsf+314 */
    case 811:  /* cmpsf+312 */
    case 809:  /* cmpsf+310 */
    case 807:  /* cmpsf+308 */
    case 805:  /* cmpsf+306 */
    case 803:  /* cmpsf+304 */
    case 801:  /* cmpsf+302 */
    case 799:  /* cmpsf+300 */
    case 797:  /* cmpsf+298 */
    case 738:  /* cmpsf+239 */
    case 736:  /* cmpsf+237 */
    case 734:  /* cmpsf+235 */
    case 732:  /* cmpsf+233 */
    case 730:  /* cmpsf+231 */
    case 728:  /* cmpsf+229 */
    case 726:  /* cmpsf+227 */
    case 724:  /* cmpsf+225 */
    case 722:  /* cmpsf+223 */
    case 720:  /* cmpsf+221 */
    case 718:  /* cmpsf+219 */
    case 716:  /* cmpsf+217 */
    case 714:  /* cmpsf+215 */
    case 712:  /* cmpsf+213 */
    case 710:  /* cmpsf+211 */
    case 651:  /* cmpsf+152 */
    case 649:  /* cmpsf+150 */
    case 647:  /* cmpsf+148 */
    case 645:  /* cmpsf+146 */
    case 643:  /* cmpsf+144 */
    case 641:  /* cmpsf+142 */
    case 639:  /* cmpsf+140 */
    case 637:  /* cmpsf+138 */
    case 635:  /* cmpsf+136 */
    case 633:  /* cmpsf+134 */
    case 631:  /* cmpsf+132 */
    case 629:  /* cmpsf+130 */
    case 627:  /* cmpsf+128 */
    case 625:  /* cmpsf+126 */
    case 623:  /* cmpsf+124 */
    case 564:  /* cmpsf+65 */
    case 562:  /* cmpsf+63 */
    case 560:  /* cmpsf+61 */
    case 558:  /* cmpsf+59 */
    case 556:  /* cmpsf+57 */
    case 554:  /* cmpsf+55 */
    case 552:  /* cmpsf+53 */
    case 550:  /* cmpsf+51 */
    case 548:  /* cmpsf+49 */
    case 546:  /* cmpsf+47 */
    case 544:  /* cmpsf+45 */
    case 542:  /* cmpsf+43 */
    case 540:  /* cmpsf+41 */
    case 538:  /* cmpsf+39 */
    case 536:  /* cmpsf+37 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 1));
      break;

    case 796:  /* cmpsf+297 */
    case 795:  /* cmpsf+296 */
    case 794:  /* cmpsf+295 */
    case 793:  /* cmpsf+294 */
    case 792:  /* cmpsf+293 */
    case 791:  /* cmpsf+292 */
    case 790:  /* cmpsf+291 */
    case 789:  /* cmpsf+290 */
    case 788:  /* cmpsf+289 */
    case 787:  /* cmpsf+288 */
    case 786:  /* cmpsf+287 */
    case 785:  /* cmpsf+286 */
    case 784:  /* cmpsf+285 */
    case 783:  /* cmpsf+284 */
    case 782:  /* cmpsf+283 */
    case 709:  /* cmpsf+210 */
    case 708:  /* cmpsf+209 */
    case 707:  /* cmpsf+208 */
    case 706:  /* cmpsf+207 */
    case 705:  /* cmpsf+206 */
    case 704:  /* cmpsf+205 */
    case 703:  /* cmpsf+204 */
    case 702:  /* cmpsf+203 */
    case 701:  /* cmpsf+202 */
    case 700:  /* cmpsf+201 */
    case 699:  /* cmpsf+200 */
    case 698:  /* cmpsf+199 */
    case 697:  /* cmpsf+198 */
    case 696:  /* cmpsf+197 */
    case 695:  /* cmpsf+196 */
    case 622:  /* cmpsf+123 */
    case 621:  /* cmpsf+122 */
    case 620:  /* cmpsf+121 */
    case 619:  /* cmpsf+120 */
    case 618:  /* cmpsf+119 */
    case 617:  /* cmpsf+118 */
    case 616:  /* cmpsf+117 */
    case 615:  /* cmpsf+116 */
    case 614:  /* cmpsf+115 */
    case 613:  /* cmpsf+114 */
    case 612:  /* cmpsf+113 */
    case 611:  /* cmpsf+112 */
    case 610:  /* cmpsf+111 */
    case 609:  /* cmpsf+110 */
    case 608:  /* cmpsf+109 */
    case 535:  /* cmpsf+36 */
    case 534:  /* cmpsf+35 */
    case 533:  /* cmpsf+34 */
    case 532:  /* cmpsf+33 */
    case 531:  /* cmpsf+32 */
    case 530:  /* cmpsf+31 */
    case 529:  /* cmpsf+30 */
    case 528:  /* cmpsf+29 */
    case 527:  /* cmpsf+28 */
    case 526:  /* cmpsf+27 */
    case 525:  /* cmpsf+26 */
    case 524:  /* cmpsf+25 */
    case 523:  /* cmpsf+24 */
    case 522:  /* cmpsf+23 */
    case 521:  /* cmpsf+22 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 1));
      break;

    case 781:  /* cmpsf+282 */
    case 780:  /* cmpsf+281 */
    case 779:  /* cmpsf+280 */
    case 694:  /* cmpsf+195 */
    case 693:  /* cmpsf+194 */
    case 692:  /* cmpsf+193 */
    case 607:  /* cmpsf+108 */
    case 606:  /* cmpsf+107 */
    case 605:  /* cmpsf+106 */
    case 520:  /* cmpsf+21 */
    case 519:  /* cmpsf+20 */
    case 518:  /* cmpsf+19 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 778:  /* cmpsf+279 */
    case 777:  /* cmpsf+278 */
    case 776:  /* cmpsf+277 */
    case 775:  /* cmpsf+276 */
    case 774:  /* cmpsf+275 */
    case 773:  /* cmpsf+274 */
    case 691:  /* cmpsf+192 */
    case 690:  /* cmpsf+191 */
    case 689:  /* cmpsf+190 */
    case 688:  /* cmpsf+189 */
    case 687:  /* cmpsf+188 */
    case 686:  /* cmpsf+187 */
    case 604:  /* cmpsf+105 */
    case 603:  /* cmpsf+104 */
    case 602:  /* cmpsf+103 */
    case 601:  /* cmpsf+102 */
    case 600:  /* cmpsf+101 */
    case 599:  /* cmpsf+100 */
    case 517:  /* cmpsf+18 */
    case 516:  /* cmpsf+17 */
    case 515:  /* cmpsf+16 */
    case 514:  /* cmpsf+15 */
    case 513:  /* cmpsf+14 */
    case 512:  /* cmpsf+13 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 772:  /* cmpsf+273 */
    case 771:  /* cmpsf+272 */
    case 770:  /* cmpsf+271 */
    case 769:  /* cmpsf+270 */
    case 768:  /* cmpsf+269 */
    case 767:  /* cmpsf+268 */
    case 766:  /* cmpsf+267 */
    case 765:  /* cmpsf+266 */
    case 764:  /* cmpsf+265 */
    case 763:  /* cmpsf+264 */
    case 762:  /* cmpsf+263 */
    case 761:  /* cmpsf+262 */
    case 685:  /* cmpsf+186 */
    case 684:  /* cmpsf+185 */
    case 683:  /* cmpsf+184 */
    case 682:  /* cmpsf+183 */
    case 681:  /* cmpsf+182 */
    case 680:  /* cmpsf+181 */
    case 679:  /* cmpsf+180 */
    case 678:  /* cmpsf+179 */
    case 677:  /* cmpsf+178 */
    case 676:  /* cmpsf+177 */
    case 675:  /* cmpsf+176 */
    case 674:  /* cmpsf+175 */
    case 598:  /* cmpsf+99 */
    case 597:  /* cmpsf+98 */
    case 596:  /* cmpsf+97 */
    case 595:  /* cmpsf+96 */
    case 594:  /* cmpsf+95 */
    case 593:  /* cmpsf+94 */
    case 592:  /* cmpsf+93 */
    case 591:  /* cmpsf+92 */
    case 590:  /* cmpsf+91 */
    case 589:  /* cmpsf+90 */
    case 588:  /* cmpsf+89 */
    case 587:  /* cmpsf+88 */
    case 511:  /* cmpsf+12 */
    case 510:  /* cmpsf+11 */
    case 509:  /* cmpsf+10 */
    case 508:  /* cmpsf+9 */
    case 507:  /* cmpsf+8 */
    case 506:  /* cmpsf+7 */
    case 505:  /* cmpsf+6 */
    case 504:  /* cmpsf+5 */
    case 503:  /* cmpsf+4 */
    case 502:  /* cmpsf+3 */
    case 501:  /* cmpsf+2 */
    case 500:  /* cmpsf+1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 1));
      break;

    case 353:  /* nmacdf3 */
    case 352:  /* nmsubacdf3 */
    case 341:  /* nmsubacsf3 */
    case 339:  /* nmacsf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 351:  /* msubacdf3 */
    case 350:  /* macdf3 */
    case 340:  /* msubacsf3 */
    case 338:  /* macsf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 349:  /* nmuldf3 */
    case 337:  /* nmulsf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 333:  /* subaddv2hi */
    case 332:  /* addsubv2hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 315:  /* sync_lock_test_and_setsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 314:  /* sync_store_if_lock */
    case 313:  /* sync_loadsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      break;

    case 312:  /* sync_compare_and_swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 310:  /* vec_extractv4qi */
    case 309:  /* vec_extractv2hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 306:  /* *round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 305:  /* ldxi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 2));
      break;

    case 296:  /* cop */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (pat, 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (pat, 0, 4));
      break;

    case 289:  /* satrndu */
    case 288:  /* satrnds */
    case 287:  /* satu */
    case 286:  /* sats */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 279:  /* mtdr */
    case 277:  /* mtsr */
    case 271:  /* cache */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 267:  /* bswap_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 266:  /* bswap_16 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 265:  /* *swap_h */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 263:  /* eh_return */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 262:  /* prefetch */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 2));
      break;

    case 261:  /* tablejump_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 260:  /* tablejump_add */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 257:  /* return_v4qireg_cond */
    case 256:  /* return_v2hireg_cond */
    case 255:  /* return_sireg_cond */
    case 250:  /* return_imm_cond */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0));
      break;

    case 304:  /* *sibcall_epilogue_insns_ret_imm */
    case 302:  /* *epilogue_insns_ret_imm */
    case 254:  /* return_v4qireg */
    case 253:  /* return_v2hireg */
    case 252:  /* return_sireg */
    case 251:  /* return_imm_predicable */
    case 249:  /* return_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 303:  /* sibcall_epilogue */
    case 301:  /* *epilogue_insns */
    case 292:  /* consttable_end */
    case 291:  /* consttable_start */
    case 290:  /* align_4 */
    case 285:  /* frs */
    case 276:  /* breakpoint */
    case 275:  /* tlbs */
    case 274:  /* tlbw */
    case 273:  /* tlbr */
    case 268:  /* blockage */
    case 258:  /* nop */
    case 248:  /* return_cond_predicable */
    case 246:  /* return */
      break;

    case 245:  /* call_value_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 244:  /* call_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 247:  /* return_cond */
    case 243:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

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
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

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
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0);
      recog_data.dup_num[0] = 2;
      break;

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
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

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
    case 182:  /* *bpl-reverse */
    case 180:  /* *bmi-reverse */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

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
    case 181:  /* bpl */
    case 179:  /* bmi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 360:  /* fpcc_to_reg */
    case 282:  /* mustr */
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
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 259:  /* indirect_jump_internal */
    case 151:  /* tstdi_internal */
    case 150:  /* tstsi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 359:  /* cmpsf_internal */
    case 358:  /* cmpdf_internal */
    case 149:  /* cmpqi_internal */
    case 148:  /* cmphi_internal */
    case 147:  /* cmpsi_internal */
    case 146:  /* cmpdi_internal */
    case 145:  /* bldsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 144:  /* one_cmplsi2_predicable */
    case 141:  /* negsi2_predicable */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 298:  /* mvcrdi */
    case 297:  /* mvcrsi */
    case 136:  /* udivmodsi4_internal */
    case 135:  /* divmodsi4_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 134:  /* zero_extendqihi_clobber_predicable */
    case 133:  /* zero_extendqisi_clobber_predicable */
    case 132:  /* zero_extendhisi_clobber_predicable */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

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
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 308:  /* vec_setv2hi_lo */
    case 307:  /* vec_setv2hi_hi */
    case 95:  /* andnsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 94:  /* xorsi_lshift */
    case 93:  /* iorsi_lshift */
    case 92:  /* andsi_lshift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 85:  /* machh_d */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 84:  /* macwh_d */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 83:  /* mulnwh_d */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 82:  /* mulwh_d */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 81:  /* macsathh_w */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 80:  /* mulsatrndwh_w */
    case 77:  /* mulsatrndhh_h */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      break;

    case 79:  /* mulsatwh_w */
    case 78:  /* mulsathh_w */
    case 76:  /* mulsathh_h */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 73:  /* *mulaccsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 75:  /* umulaccsidi3 */
    case 74:  /* mulaccsidi3 */
    case 70:  /* machisi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 69:  /* mulnhisi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 72:  /* umulsidi3 */
    case 71:  /* mulsidi3 */
    case 68:  /* mulhisi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 65:  /* rsubqi_imm_predicable */
    case 64:  /* rsubhi_imm_predicable */
    case 63:  /* rsubsi_imm_predicable */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 58:  /* *subqi3_lsl */
    case 57:  /* *subhi3_lsl */
    case 56:  /* *subsi3_lsl */
    case 55:  /* *subqi3_mul */
    case 54:  /* *subhi3_mul */
    case 53:  /* *subsi3_mul */
    case 45:  /* addqi3_mul2 */
    case 44:  /* addhi3_mul2 */
    case 43:  /* addsi3_mul2 */
    case 39:  /* addqi3_lsl2 */
    case 38:  /* addhi3_lsl2 */
    case 37:  /* addsi3_lsl2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 42:  /* addqi3_mul */
    case 41:  /* addhi3_mul */
    case 40:  /* addsi3_mul */
    case 36:  /* addqi3_lsl */
    case 35:  /* addhi3_lsl */
    case 34:  /* addsi3_lsl */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 355:  /* subdf3 */
    case 354:  /* adddf3 */
    case 348:  /* muldf3 */
    case 343:  /* subsf3 */
    case 342:  /* addsf3 */
    case 336:  /* mulsf3 */
    case 331:  /* uminv4qi3 */
    case 330:  /* umaxv4qi3 */
    case 329:  /* sminv2hi3 */
    case 328:  /* smaxv2hi3 */
    case 327:  /* lshrv4qi3 */
    case 326:  /* lshrv2hi3 */
    case 325:  /* ashrv4qi3 */
    case 324:  /* ashrv2hi3 */
    case 323:  /* ashlv4qi3 */
    case 322:  /* ashlv2hi3 */
    case 319:  /* subv4qi3 */
    case 318:  /* subv2hi3 */
    case 317:  /* addv4qi3 */
    case 316:  /* addv2hi3 */
    case 311:  /* concatv2hi */
    case 139:  /* lshrsi3 */
    case 138:  /* ashrsi3 */
    case 137:  /* ashlsi3 */
    case 116:  /* subqi_predicable */
    case 115:  /* addqi_predicable */
    case 114:  /* eorqi_predicable */
    case 113:  /* orqi_predicable */
    case 112:  /* andqi_predicable */
    case 111:  /* subhi_predicable */
    case 110:  /* addhi_predicable */
    case 109:  /* eorhi_predicable */
    case 108:  /* orhi_predicable */
    case 107:  /* andhi_predicable */
    case 106:  /* subsi_predicable */
    case 105:  /* addsi_predicable */
    case 104:  /* eorsi_predicable */
    case 103:  /* orsi_predicable */
    case 102:  /* andsi_predicable */
    case 101:  /* xordi3 */
    case 100:  /* xorsi3 */
    case 99:  /* iordi3 */
    case 98:  /* iorsi3 */
    case 97:  /* anddi3 */
    case 96:  /* andsi3 */
    case 91:  /* smaxsi3 */
    case 90:  /* sminsi3 */
    case 89:  /* satsub_h */
    case 88:  /* satadd_h */
    case 87:  /* satsub_w */
    case 86:  /* satadd_w */
    case 67:  /* mulsi3 */
    case 66:  /* mulqi3 */
    case 59:  /* subdi3 */
    case 52:  /* subqi3 */
    case 51:  /* subhi3 */
    case 50:  /* subsi3 */
    case 46:  /* adddi3 */
    case 33:  /* addqi3 */
    case 32:  /* addhi3 */
    case 31:  /* addsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 295:  /* consttable_16 */
    case 294:  /* consttable_8 */
    case 293:  /* consttable_4 */
    case 284:  /* csrf */
    case 283:  /* ssrf */
    case 281:  /* musfr */
    case 272:  /* sync */
    case 30:  /* popm */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 362:  /* stm_fp */
    case 300:  /* mvrcdi */
    case 299:  /* mvrcsi */
    case 29:  /* stm */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      break;

    case 361:  /* reg_to_cc */
    case 28:  /* pushm */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 27:  /* extzv_internal */
    case 26:  /* extv_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 25:  /* insv */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 8:  /* pic_compute_got_from_pc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 280:  /* mfdr */
    case 278:  /* mfsr */
    case 7:  /* pic_load_addr */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 62:  /* subqi_imm_predicable */
    case 61:  /* subhi_imm_predicable */
    case 60:  /* subsi_imm_predicable */
    case 49:  /* addqi_imm_predicable */
    case 48:  /* addhi_imm_predicable */
    case 47:  /* addsi_imm_predicable */
    case 6:  /* add_symbol_hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 357:  /* absdf2 */
    case 356:  /* negdf2 */
    case 347:  /* extendsfdf2 */
    case 346:  /* truncdfsf2 */
    case 345:  /* abssf2 */
    case 344:  /* negsf2 */
    case 321:  /* absv4qi2 */
    case 320:  /* absv2hi2 */
    case 270:  /* ctzsi2 */
    case 269:  /* clzsi2 */
    case 264:  /* ffssi2 */
    case 166:  /* ldhi_predicable_se */
    case 165:  /* ldhi_predicable_ze */
    case 164:  /* ldsiqi_predicable_ze */
    case 163:  /* ldsihi_predicable_ze */
    case 162:  /* ldsisi_predicable_ze */
    case 161:  /* ldsiqi_predicable_se */
    case 160:  /* ldsihi_predicable_se */
    case 159:  /* ldsisi_predicable_se */
    case 158:  /* zero_extendqihi2 */
    case 157:  /* zero_extendqisi2 */
    case 156:  /* zero_extendhisi2 */
    case 155:  /* extendqihi2 */
    case 154:  /* extendqisi2 */
    case 153:  /* extendhisi2 */
    case 152:  /* truncdisi2 */
    case 143:  /* one_cmplsi2 */
    case 142:  /* abssi2 */
    case 140:  /* negsi2 */
    case 5:  /* mov_symbol_lo */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 335:  /* *movdf_fpcp */
    case 334:  /* *movsf_fpcp */
    case 24:  /* movqi_predicable */
    case 23:  /* movhi_predicable */
    case 22:  /* movsi_predicable */
    case 21:  /* movsf_predicable */
    case 20:  /* stqi_predicable */
    case 19:  /* sthi_predicable */
    case 18:  /* stsi_predicable */
    case 17:  /* stsf_predicable */
    case 16:  /* ldqi_predicable */
    case 15:  /* ldhi_predicable */
    case 14:  /* ldsi_predicable */
    case 13:  /* ldsf_predicable */
    case 12:  /* *movdf_internal */
    case 11:  /* *movsf_internal */
    case 10:  /* *movti_internal */
    case 9:  /* *movdi_internal */
    case 4:  /* movv4qi_internal */
    case 3:  /* movv2hi_internal */
    case 2:  /* movsi_internal */
    case 1:  /* *movhi_internal */
    case 0:  /* *movqi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    }
}

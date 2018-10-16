# This script is called from ld/genscript.sh 
# There is a difference on how 'bash' and POSIX handles 
# the  '.' (source) command in a script.
# genscript.sh calls this script with argument ${EMULATION_NAME}
# but that will fail on POSIX compilant shells like 'sh' or 'dash'
# therefor I use the variable directly instead of $1 
EMULATION=${EMULATION_NAME}
SCRIPT_NAME=elf_xip
TEMPLATE_NAME=elf32
EXTRA_EM_FILE=avr32elf
OUTPUT_FORMAT="elf32-avr32"
ARCH=avr32
MAXPAGESIZE=4096
ENTRY=_start
EMBEDDED=yes
NO_SMALL_DATA=yes
NOP=0xd703d703

DATA_SEGMENT_ALIGN=8
BSS_ALIGNMENT=8

RO_LMA_REGION="FLASH"
RO_VMA_REGION="FLASH"
RW_LMA_REGION="FLASH"
RW_VMA_REGION="CPUSRAM"

STACK_SIZE=0x1000
STACK_ADDR="ORIGIN(CPUSRAM) + LENGTH(CPUSRAM) - ${STACK_SIZE}"

DATA_SEGMENT_END="__heap_start__ = ALIGN(8);
  . = ${STACK_ADDR};
  __heap_end__ = .;"

case "$EMULATION" in
avr32elf_ap*)
    MACHINE=ap
    INITIAL_READONLY_SECTIONS=".reset : {  *(.reset) } >FLASH AT>FLASH
    . = . & 0x9fffffff;"
    TEXT_START_ADDR=0xa0000000
    case "$EMULATION" in
	    avr32elf_ap700[0-2])
	       MEMORY="MEMORY
  {
	FLASH (rxai) : ORIGIN = 0x00000000, LENGTH = 64M
	CPUSRAM (rwxa) : ORIGIN = 0x24000000, LENGTH = 32K
  }"
        ;;
    avr32elf_ap7200)
        MEMORY="MEMORY
  {
    FLASH (rxai) : ORIGIN = 0x00000000, LENGTH = 64M
    CPUSRAM (rwxa) : ORIGIN = 0x08000000, LENGTH = 64K
  }"
        ;;
    esac
    ;;

avr32elf_uc3*)
    MACHINE=uc
    INITIAL_READONLY_SECTIONS=".reset : {  *(.reset) } >FLASH AT>FLASH"
    TEXT_START_ADDR=0x80000000
    OTHER_SECTIONS=".userpage :  {	*(.userpage .userpage.*)  } >USERPAGE AT>USERPAGE
  	.factorypage :  {	*(.factorypage .factorypage.*)  } >FACTORYPAGE AT>FACTORYPAGE"

    case "$EMULATION" in
    avr32elf_uc3a[01]512*)
       MEMORY="MEMORY
  {
    FLASH (rxai!w) : ORIGIN = 0x80000000, LENGTH = 512K
    CPUSRAM (wxa!ri) : ORIGIN = 0x00000000, LENGTH = 64K
	USERPAGE : ORIGIN = 0x80800000, LENGTH = 512
	FACTORYPAGE : ORIGIN = 0x80800200, LENGTH = 512
  }"
        ;;

    avr32elf_uc3a[01]256)
        MEMORY="MEMORY
  {
    FLASH (rxai!w) : ORIGIN = 0x80000000, LENGTH = 256K
    CPUSRAM (wxa!ri) : ORIGIN = 0x00000000, LENGTH = 64K
	USERPAGE : ORIGIN = 0x80800000, LENGTH = 512
	FACTORYPAGE : ORIGIN = 0x80800200, LENGTH = 512
  }"
        ;;

    avr32elf_uc3b[01]256*)
        MEMORY="MEMORY
  {
    FLASH (rxai!w) : ORIGIN = 0x80000000, LENGTH = 256K
    CPUSRAM (wxa!ri) : ORIGIN = 0x00000000, LENGTH = 32K
	USERPAGE : ORIGIN = 0x80800000, LENGTH = 512
	FACTORYPAGE : ORIGIN = 0x80800200, LENGTH = 512
  }"
        ;;

    avr32elf_uc3[ab][01]128)
        MEMORY="MEMORY
  {
    FLASH (rxai!w) : ORIGIN = 0x80000000, LENGTH = 128K
    CPUSRAM (wxa!ri) : ORIGIN = 0x00000000, LENGTH = 32K
	USERPAGE : ORIGIN = 0x80800000, LENGTH = 512
	FACTORYPAGE : ORIGIN = 0x80800200, LENGTH = 512
  }"
        ;;

    avr32elf_uc3b[01]64)
        MEMORY="MEMORY
  {
    FLASH (rxai!w) : ORIGIN = 0x80000000, LENGTH = 64K
    CPUSRAM (wxa!ri) : ORIGIN = 0x00000000, LENGTH = 16K
	USERPAGE : ORIGIN = 0x80800000, LENGTH = 512
	FACTORYPAGE : ORIGIN = 0x80800200, LENGTH = 512
  }"
        ;;

    avr32elf_uc3a3256*)
        MEMORY="MEMORY
  {
    FLASH (rxai!w) : ORIGIN = 0x80000000, LENGTH = 256K
    CPUSRAM (wxa!ri) : ORIGIN = 0x00000000, LENGTH = 64K
    HSBSRAM (wxa!ri) : ORIGIN = 0xFF000000, LENGTH = 64K
	USERPAGE : ORIGIN = 0x80800000, LENGTH = 512
	FACTORYPAGE : ORIGIN = 0x80800200, LENGTH = 512
  }"
  		OTHER_SECTIONS ="${OTHER_SECTIONS}
  	.hsbsram       : { *(.hsbsram .hsbsram.*) } >HSBSRAM AT>FLASH :FLASH
"
  		
        ;;

    avr32elf_uc3a3128*)
        MEMORY="MEMORY
  {
    FLASH (rxai!w) : ORIGIN = 0x80000000, LENGTH = 128K
    CPUSRAM (wxa!ri) : ORIGIN = 0x00000000, LENGTH = 64K
    HSBSRAM (wxa!ri) : ORIGIN = 0xFF000000, LENGTH = 64K
    USERPAGE : ORIGIN = 0x80800000, LENGTH = 512
    FACTORYPAGE : ORIGIN = 0x80800200, LENGTH = 512
  }"
  		OTHER_SECTIONS ="${OTHER_SECTIONS}
  	.hsbsram       : { *(.hsbsram .hsbsram.*) } >HSBSRAM AT>FLASH :FLASH
"
        ;;

    avr32elf_uc3a364*)
        MEMORY="MEMORY
  {
    FLASH (rxai!w) : ORIGIN = 0x80000000, LENGTH = 64K
    CPUSRAM (wxa!ri) : ORIGIN = 0x00000000, LENGTH = 64K
    HSBSRAM (wxa!ri) : ORIGIN = 0xFF000000, LENGTH = 64K
	USERPAGE : ORIGIN = 0x80800000, LENGTH = 512
	FACTORYPAGE : ORIGIN = 0x80800200, LENGTH = 512
  }"
  		OTHER_SECTIONS ="${OTHER_SECTIONS}
  	.hsbsram       : { *(.hsbsram .hsbsram.*) } >HSBSRAM AT>FLASH :FLASH
"
        ;;


    esac
    ;;

esac

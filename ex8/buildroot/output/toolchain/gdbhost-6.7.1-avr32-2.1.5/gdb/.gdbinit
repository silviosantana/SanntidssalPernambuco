echo Setting up the environment for debugging gdb.\n

set complaints 1

b internal_error

b info_command
commands
	silent
	return
end

dir /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gdb-6.7.1-avr32-2.1.5/gdb/../libiberty
dir /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gdb-6.7.1-avr32-2.1.5/gdb/../bfd
dir /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/gdb-6.7.1-avr32-2.1.5/gdb
dir .
set prompt (top-gdb) 

dir /home/student/Documents/SanntidssalPernambuco/ex8/buildroot/output/toolchain/binutils-2.18-avr32-1.0.1/gas
dir .

break as_warn
break as_warn_where
break as_bad
break as_bad_where
break as_fatal
break as_assert
break as_abort

define pe
call print_expr ($)
end

document pe
Print *$ as an expressionS, expanding parameters.
end

define ps
call print_symbol_value ($)
end

document ps
Print *$ as a symbolS, including expression value.
end

define pf
call print_fixup ($)
end

document pf
Print *$ as a fixS, including symbol value.
end

# Put this last, in case it fails.

break abort
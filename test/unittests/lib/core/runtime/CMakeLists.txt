macro(add_runtime_unittest unittest)
    add_unittest(${unittest} lib/core/runtime/)
endmacro(add_runtime_unittest unittest)

add_runtime_unittest(i32_add_unittest)
add_runtime_unittest(i32_and_unittest)
add_runtime_unittest(i32_sub_unittest)
add_runtime_unittest(i32_clz_unittest)
add_runtime_unittest(i32_ctz_unittest)
add_runtime_unittest(i32_const_unittest)
add_runtime_unittest(i32_div_s_unittest)
add_runtime_unittest(i32_div_u_unittest)
add_runtime_unittest(i32_mul_unittest)

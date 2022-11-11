project(ABDSCrypt)
cmake_minimum_required(VERSION 3.22)
add_compile_options(-g)

add_executable(abdsppid abdsppid.c)
target_link_libraries(abdsppid)

add_executable(abdstmzn abdstmzn.c)
target_link_libraries(abdstmzn)

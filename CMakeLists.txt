cmake_minimum_required(VERSION 3.5)

project(Examples_16)

find_package(Threads)

SET(CMAKE_CXX_COMPILER /usr/local/Cellar/gcc/9.2.0_2/bin/c++-9)

add_executable(braces braces.cpp)
set_target_properties(braces PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)
target_link_libraries(braces ${CMAKE_THREAD_LIBS_INIT})

add_executable(initializer_list initializer_list.cpp)
set_target_properties(initializer_list PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)
target_link_libraries(initializer_list ${CMAKE_THREAD_LIBS_INIT})

add_executable(cartesian_product cartesian_product.cpp)
set_target_properties(cartesian_product PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)
target_link_libraries(cartesian_product ${CMAKE_THREAD_LIBS_INIT})

add_executable(chains chains.cpp)
set_target_properties(chains PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)
target_link_libraries(chains ${CMAKE_THREAD_LIBS_INIT})

add_executable(compress compress.cpp)
set_target_properties(compress PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)
target_link_libraries(compress ${CMAKE_THREAD_LIBS_INIT})

add_executable(nuclear_reaction nuclear_reaction.cpp)
set_target_properties(nuclear_reaction PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)
target_link_libraries(nuclear_reaction ${CMAKE_THREAD_LIBS_INIT})

add_executable(remove_consecutive_whitespace remove_consecutive_whitespace.cpp)
set_target_properties(remove_consecutive_whitespace PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)
target_link_libraries(remove_consecutive_whitespace ${CMAKE_THREAD_LIBS_INIT})

add_executable(split split.cpp)
set_target_properties(split PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)
target_link_libraries(split ${CMAKE_THREAD_LIBS_INIT})

add_executable(structured_bindings structured_bindings.cpp)
set_target_properties(structured_bindings PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)
target_link_libraries(structured_bindings ${CMAKE_THREAD_LIBS_INIT})

add_executable(transform_if transform_if.cpp)
set_target_properties(transform_if PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)
target_link_libraries(transform_if ${CMAKE_THREAD_LIBS_INIT})
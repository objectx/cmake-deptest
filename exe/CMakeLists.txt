

cmake_minimum_required (VERSION 3.13)

project (exe)

add_executable (exe src/main.c)
target_link_libraries (exe PRIVATE lib2)

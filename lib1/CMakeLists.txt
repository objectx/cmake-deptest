
cmake_minimum_required (VERSION 3.13)

project (lib1)

add_library (lib1 STATIC src/lib1.c)
target_include_directories (lib1 PUBLIC include)

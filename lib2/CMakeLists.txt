
cmake_minimum_required (VERSION 3.13)

project (lib2)

add_library (lib2 STATIC src/lib2.c)
if (HACKY_DEPENDENCY)
    target_include_directories (lib2 PUBLIC include
                                     PRIVATE $<TARGET_PROPERTY:lib1,INTERFACE_INCLUDE_DIRECTORIES>)
    target_link_libraries (lib2 INTERFACE lib1)
else ()
    target_include_directories (lib2 PUBLIC include)
    target_link_libraries (lib2 PRIVATE lib1)
endif ()

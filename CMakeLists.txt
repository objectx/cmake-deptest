
cmake_minimum_required (VERSION 3.13)

project (cmake-test)

option (HACKY_DEPENDENCY "Use hacky dependency management" NO)

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set (CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_subdirectory (lib1)
add_subdirectory (lib2)
add_subdirectory (exe)

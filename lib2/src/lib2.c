
#include <lib2.h>
#include <lib1.h>

#include <stdio.h>

void lib2_func () {
    lib1_func ();
    fprintf (stderr, "LIB2\n");
}

// face.c
//
// Written by M17A/H15C,
// on May 2024
//
// The program prints two simple faces
/*
 Face 1:
   ~ ~
  0 0
   o
   -

 Face 2:
  ~ ~
  0 0
   o
  \_/

*/

#include <stdio.h>

int main(void) {
    
    // Face 1
    printf("~ ~\n");
    printf("0 0\n");
    printf(" o\n");
    printf(" -\n");
    
    // Face 2
    printf("~ ~\n");
    printf("0 0\n");
    printf(" o\n");
    printf("\\_/\n");

    // alternate way to print
    // if doing this way, make sure to indent
    // lines after first printf to show it is part of same one
    printf("~ ~\n"
           "0 0\n"
           " o\n"
           "\\_/\n");

    return 0;
}

// Extra notes:
// 2 steps to run program

// 1. Compile
//    dcc -o face face.c 
//    or
//    dcc face.c -o face

// 2. Run Program
//    ./face

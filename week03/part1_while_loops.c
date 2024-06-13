// part1_while_loops.c
//
// Written by H15C
// on June 2024
//
// This program is a simple demonstration of a count loop in c


#include <stdio.h>

int main(void) {
	printf("Start of loop!");

    int counter = 0;
	while (counter < 10) {
		printf("%d\n", counter);
		counter++;
	}

	printf("End of loop!");

    return 0;
}

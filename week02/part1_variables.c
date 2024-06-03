// part1_variables
//
// This program was written by M17A/H15C (z55555555),
// on 3/06/24
//
// This program calculates the area of a circle

#include <stdio.h>

#define PI 3.14159

int main(void) {
	// 1. Declare the variables
	double radius;
	
    // 2. Initalise the variables
	radius = 1.5;

	// combine step 1 and 2
	//double pi = 3.14159;
    
    // 3. Calculate the area of the circle
	double area = PI * radius * radius;
    
	// 4. Print the result
  // The .3 rounds to 3 decimal places. You can replace 3 with any number
	printf("A circle of radius %.3lf has area %.3lf\n", radius, area);

	return 0;
}

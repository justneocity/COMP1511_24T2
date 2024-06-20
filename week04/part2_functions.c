// functions.c
//
// Written by M17A, H15C
// on June 2024
//
// This program is a simple demonstration of functions

#include <stdio.h>

// Function protoype
int add(int number1, int number2);
void print_intro(void);

int main() {
    int result;
    int num1 = 5;
    int num2 = 3;

    // Function call
    result = add(num1, num2);

    printf("Result: %d\n", result);

    // Can also call function multiple times
    int num3 = 3;
    int num4 = 4;
    result = add(num3, num4);
    printf("Result: %d\n", result);

    // example of calling void function
    print_intro();
    return 0;
}

// Function definition
int add(int number1, int number2) {
    // Function body
    int sum = number1 + number2;
    // return statement
    return sum;
}

void print_intro(void) {
    printf("This code sums two numbers using the add function\n");
}


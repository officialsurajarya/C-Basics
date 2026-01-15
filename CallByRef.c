#include<stdio.h>
void square(int* n);

int main() {
    int number = 4;
    square(&number); //send address of number
    printf("number = %d\n",number);
}

// Call by Reference
void square(int* n) {
    *n = *n * *n; //value of Address of n 4*4
    printf("Square = %d\n",*n);
}
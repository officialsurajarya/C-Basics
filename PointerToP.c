#include<stdio.h>

int main() {

    int x=22;
    int *ptr = &x;
    int **pptr = &ptr;

    //* use for value
    //& use for address
    
    printf("%d",**pptr);
}


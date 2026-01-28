#include<stdio.h>

int main() {

    int marks[5] = {97,98,99};
    printf("%d\n",marks[0]);
    printf("%d\n",marks[1]);
    printf("%d\n",marks[2]);
    
    marks[3] = 89;
    
    printf("%d\n",marks[3]);
    
    return 0;
}

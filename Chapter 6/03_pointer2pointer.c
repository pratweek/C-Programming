#include<stdio.h>

int main (){
    int i = 6;
    int*j = &i;
    int**k = &j; // k is a pointer to a pointer and it stores the address of j
    printf("The value of i is %d", i);
    printf("The value of i is %d", *j);
    printf("The value of i is %d", *(&i));
    printf("The value of i is %d", **(&j));
    
    return 0;
}
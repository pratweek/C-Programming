#include<stdio.h>

int main (){
    int i = 2;
    int*ptr = &i;
    int**ptr2 = &ptr;
    printf("The value of i is %d", **ptr2);
    printf("The value of i is %d", *ptr);
    printf("\nThe address of i is %p\n", &i);
    return 0;
}
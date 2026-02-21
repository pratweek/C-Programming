#include<stdio.h>

int main (){

    //pointer  Arithmetic using integer pointer
   /* int a =5;
    int *ptr = &a;
    printf("The address of a is %u \n", &a);
    printf("The address of a is %u \n", ptr);
    ptr++;
    printf("\n The value of ptr after increment is %u ", ptr );*/


    // pointer arithmetic using character pointer


    char a = 'z';
    char *ptr = &a;
    printf("The address of a is %u \n", &a);
    printf("The address of a is %u \n", ptr);
    ptr++;
    printf("\n The value of ptr after increment is %u ", ptr );
    return 0;
}
#include<stdio.h>

int main (){
    char i = 'A';
    char*j = &i; // j is a pointer to a character and it stores the address of i
    float k = 5.643;
    float*l = &k; // l is pointer ointing to an float variable and it store its address 
    printf("\n The address of k is %p", l);
    printf("\n The value at address l is %f", *(l));
    printf("\n The address of i is %p" , j);
    return 0;
}
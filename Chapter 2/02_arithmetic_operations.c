#include<stdio.h>

int main (){
    int a = 5;
    int b = 7;
    int c = 8;
    int d = a+b;
    printf("The value of a is %d and value of b is % d and sum is %d", a,b,c);
    // the modulus operator % is used to get value of remainder 
    printf("The remainder when a is divided by b is : %d", b%a);
    int z = b*c;  // Allowed
    // int z; b*c=z, // not allowed  
    
    
// this doesn't work for exponentiation in c 
// int d = a^b;
// int divided by int gives result in int, ex : b/a gives 1 not 1.4 instead use float for such circumstances

    return 0;
}
#include<stdio.h>

int main (){
    int product = 1;
    int i = 1;
    int n =8;
    while (i<=n);
    
    {
      product *= i;
      i++;

    }
    printf("Factorial of %d is %d",n,product );
    

    return 0;
}
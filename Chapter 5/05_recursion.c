#include<stdio.h>
int factorial(int);

int factorial(int n){
    if(n==1 || n==0){   // Base condition 
        return 1;  // code will not run forward if return is used
    }
    return factorial(n-1)*n;
}
int main (){
    int a =3;
    printf("The factorial of %d is %d ", a, factorial(a));
    
    return 0;
}
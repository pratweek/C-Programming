#include<stdio.h>
int sum(int, int);  // Function prototype

// Function definition
int sum(int x , int y){
   // printf("the sum is %d\n ", x+y);
    return x+y;
}
int main (){
    int a =1;
    int b = 2;
   int c = sum (a,b);   //Function Call
    //int c  = a+b;
   // printf("The sum is %d \n",c);
   printf("%d\n",c);
    
    int a1 = 12;
    int b1 = 23;
    sum (a1,b1);    //Function Call
   /* int c1 = a1+b1;
    printf("the sum is %d \n", c1); */

    int a2 = 56;
    int b2= 34;
    sum (a2,b2);

    return 0;
}

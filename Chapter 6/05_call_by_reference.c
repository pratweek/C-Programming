#include<stdio.h>

int sum(int*,int*);
int sum(int* a,int* b){
    *a = 6;

return (*a+*b);
// Here we are passing the address of x and y to the function sum
// So we can change the value of x using a pointer a
// This is called call by reference

}

int main (){
    int x = 3 ;
     int y =5;
     printf("The sum of 3 and 5 is %d", sum(&x,&y));
     printf("\n The value of x is %d",x);

    return 0;
}
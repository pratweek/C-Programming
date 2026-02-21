#include<stdio.h>

int sum(int,int);
int sum(int a, int b){
    a=6;
    return a+b;
}
int main (){
    int x = 6, y=8;
    printf("The sum of 5 and 6 is %d", sum(x,y));
    return 0;
}
// Sum function cannot change x using a because copy of x is provided to sum in a
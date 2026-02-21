#include<stdio.h>

int main (){
    int a = 4;
    printf("%d %d %d ",a, ++a,a++);
    // evaluation order of arguments is not defined in c
    // so it may produce different results in different compilers
    // here it is producing  6 6 4 as evaluating from right to left 
    return 0;
}
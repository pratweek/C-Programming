#include<stdio.h>

int main (){
    int a = 5;
    int b = 6;
    int c = 8;

    printf("The value is %d\n", a*b/c + 7);
    printf("The value is %d\n", 4*b/5*c + 7*a);
    // 4*b/5*c + 7*a
    // 4*b/5*c + 35
    // 24/5*c +35
    // 4*c+35= 67
        return 0;
        // associativity for */% is left to right 
        // precedence is followed by */% then +- then =
        // to avoid confsion always use parentheis
}
#include<stdio.h>

typedef struct c{
    int real;
    int img;
} Complex;

int main (){
    Complex c = {1,2};
    printf("The value of complex number is %di + %d j", c.real, c.img);
    return 0;
}
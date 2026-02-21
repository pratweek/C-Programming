#include<stdio.h>

float c2f(float c);
float c2f(float c){
    return (c*9/5) +32;
}
int main (){
    float c= 34.0;
    printf("The temerature in farenheit is %.2f", c2f(c));
    return 0;
}
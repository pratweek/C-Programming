#include<stdio.h>

float force(float m);
float force(float m){
    return m*9.8;
}
int main (){
    int m = 45.0;
    printf("The value of force is %f", force(m));
    return 0;
}
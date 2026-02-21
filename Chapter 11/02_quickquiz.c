#include<stdio.h>
#include<stdlib.h>

int main (){
    float n=5;
    float* ptr;
    ptr = (float*) malloc(n * sizeof(float));  //malloc is used for memory allocation 

    ptr[0] = 4.57;

    ptr[1] = 5.896;

    ptr[2] = 4.69;

    ptr[3] = 9.438;

    ptr[4] = 7.462;

    printf("%.2f\n", ptr[0]);
    printf("%.2f\n", ptr[1]);
    printf("%.2f\n", ptr[2]);
    printf("%.2f\n", ptr[3]);
    printf("%.2f\n", ptr[4]);
    
    return 0;
}
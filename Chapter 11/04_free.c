#include<stdio.h>
#include<stdlib.h>

int main (){
    int n;
    int* ptr;
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));  
    ptr[0]=4;
    free(ptr);  // memory of ptr is released for freed
    printf("%d", ptr[0]); // it will give garbage value instead of 4 as ptr is freed 
    return 0;
}
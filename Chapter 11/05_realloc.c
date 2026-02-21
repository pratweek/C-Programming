#include<stdio.h>
#include<stdlib.h>

int main (){
    int n =5;
    int* ptr;
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));  
    ptr[0]=4;
    
    printf("%d", ptr[0]); 
    ptr = (int*) realloc(ptr, 10 * sizeof(int));  // realloc is used to reallocate memory
    //Now 10 integers can be stored
    return 0;
}
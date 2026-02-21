#include<stdio.h>

int main (){
    int marks[6];
    printf("Enter marks of 6 students\n");
     for (int i =0; i<6; i++){
        scanf(" %d \n", &marks[i]);
    }

    for( int i =0; i<6; i++){
        printf("The address of marks at index %d is %u \n", i, &marks[i]);
    }
   
    return 0;
}
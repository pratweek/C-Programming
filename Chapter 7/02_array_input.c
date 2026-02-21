#include<stdio.h>

int main (){
    int marks[6];
    printf("Enter marks of 6 students\n");
   /* scanf("%d", &marks[0]);
    scanf("%d", &marks[1]);
    scanf("%d", &marks[2]);
    scanf("%d", &marks[3]);
    scanf("%d", &marks[4]);
    scanf("%d", &marks[5]);*/


    for (int i =0; i<6; i++){
        scanf(" %d \n", &marks[i]);
    }

    for( int i =0; i<6; i++){
        printf("The value of marks at index %d is %d \n", i, marks[i]);
    }
    printf("Marks of student 0 and 1 is %d and %d", marks[0], marks[1]);
    return 0;
}
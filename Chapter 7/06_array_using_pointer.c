#include<stdio.h>

int main (){
    int marks[] = {56,67,67,55};
    int *ptr = &marks[0]; // point to the first element of the array
    // int*ptr = marks; // same as int*ptr = &marks[0];

    for (int i = 0; i < 4; i++)
    {
      // printf("The marks at index %d is %d \n", i, marks[i]);
       printf("The marks at index %d is %d \n", i, *ptr);
       ptr++;
    }
    
    return 0;
}
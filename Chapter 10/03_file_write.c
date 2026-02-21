#include<stdio.h>

int main (){
    FILE *fptr;
    fptr = fopen("prateek.txt", "w");  // w to write in file
    // Write mode erases all data and write the data on top of it
    // To avoid this we use  "a"(append)
    int num = 789;
    fprintf(fptr, "%d", num);  // fprintf to write in file
    fclose(fptr);
    return 0;
}
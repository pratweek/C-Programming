#include<stdio.h>

int main (){
    FILE *ptr;
    int num;


ptr = fopen("int.txt","r") ;// r is read mode here
fscanf(ptr,"%d",&num);


fclose(ptr);
ptr = fopen("int.txt", "w"); // w is write mode here
fprintf(ptr,"%d",2*num);
fclose(ptr);

    return 0;
}
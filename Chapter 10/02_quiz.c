#include<stdio.h>

int main (){
    FILE *ptr;
    ptr = fopen("harry.txt", "r");   // r for read mode

    if(ptr == NULL){
        printf("The file does not exist ! Sorry \n");
        
    }
    else{
    int num;
     fscanf(ptr ,"%d", &num);
     printf("The value of num is %d \n",num);
     
     fscanf(ptr ,"%d", &num);
     printf("The value of num is %d \n",num);
    }

    fclose(ptr);  //  to close file
     
    return 0;
}
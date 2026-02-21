#include<stdio.h>
// ACCII Value
// value from 97 to 122 is lower case
int main (){
    char pr = 'k';
    printf("Enter character %c \n", pr);
    printf("The value of character is %d", pr);
    if( pr >=97 && pr<=122){
        printf("This character is lowercase\n");
    }
    else {
        printf("This character is upper case \n");

    }
    
    return 0;
}
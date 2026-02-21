#include<stdio.h>

int main (){
    char ch ;
    FILE *ptr;
    ptr = fopen("prateek.txt", "a");
    while (1)
    {
        ch = fgetc(ptr);  // when all the content of a file has benn read break
        printf("%c",ch);

        if (ch == EOF){  //EOF stands for end of file character
            break;
        }
     
    }
    return 0;
   
}
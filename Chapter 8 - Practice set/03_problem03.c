#include<stdio.h>
int strlen(char str[]){
    int i = 0, count;
    char c = str[i];
    while (c!= '\0')
    {
       c = str[i];
       i++;
    }
    return count; // removing null character
}
int main (){
    char str[] = "Prateek";
 /* int i = 0, count;
    char c = str[i];
    while (c!= '/0')
    {
       c = str[i];
       i++;
    }
    count = i-1; // removing null character*/
    int count = strlen(str);
    printf("%d",count);
    
    return 0;
}
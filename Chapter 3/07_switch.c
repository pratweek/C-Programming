#include<stdio.h>

int main (){
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    switch(a){
        case 1 : 
        printf("You entered 1");
        break;
        case 2 :
        printf("You enter 2");
        break;
        case 3 :
        printf("You enter 3");
        break;
        default:
        printf("Nothing matched");
        

    }
    return 0;
}
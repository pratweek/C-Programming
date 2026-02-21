#include<stdio.h>

int main (){
    int age = 45;
    if(age>60){
        printf("You can drive and you are senoir citizen");

    }
    else if(age>18){
        printf("You canot drive");

    }

    else if(age>40){
        printf("You can drive and you are elder");

    }
    else{
        printf("You cannot drive");

    }
    return 0;
}
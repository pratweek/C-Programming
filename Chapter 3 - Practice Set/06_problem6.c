#include<stdio.h>

int main (){
    int a=4, b=7, c=9, d=9;
    if(a>b && a>c && a>d){
        printf("The greatest no is %d \n",a);
    }
    else if (b>a && b>c && b>d){
        printf("The greatest no is %d \n",b);
    }
    else if (c>a && c>b && c>d){
        printf("The gratest no is %d \n ",c);
    }
     else if (d>a && d>b && d>c){
     printf("The greatest no is %d \n",d);
}
 
    return 0;
}
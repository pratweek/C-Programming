#include<stdio.h>

int main (){
    
    int a= 1, b = 1;
    printf("The value of a and b is %d\n", a&&b); // and operator
    printf("The value of a or b is %d\n", a||b);  // or operator
    printf("The value of not (a) is %d\n", !a);  // not operator

    if (a && b ){
        printf("Both are true");
    }
    

 if (a){
if(b){
    printf("Both are true");
}
 }

    return 0;
}
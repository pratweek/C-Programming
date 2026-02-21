#include<stdio.h>

void change_to_ten_times(int);
void change_to_ten_times(int a){
    a= a*10;
}

int main (){
    int x = 45;
    printf("The value of x is %d", x);
    change_to_ten_times(x);
    printf("The value of x after function call is %d",x);
    return 0;
}
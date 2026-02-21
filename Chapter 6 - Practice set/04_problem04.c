#include<stdio.h>

void value_ten_times(int*);
void value_ten_times(int*a){
    *a = *a*10;
}
int main (){
    int x =45;
    value_ten_times(&x);
    printf("The value of x is %d",x);
    return 0;
}
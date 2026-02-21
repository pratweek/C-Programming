#include<stdio.h>
void value_ten_times(int*);

void value_ten_times(int* a){
    *a = *a*10;

}
int main (){
    int x = 56;
    printf("The value of is %d", x);
    value_ten_times(&x);
    printf("\n The value of x is %d ",x);

    return 0;
}
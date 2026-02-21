#include<stdio.h>
int change(int a){
    a = 77; // Misomer
    return 0;
}
int main(){
    int b =22;
    change(b); // value of b remains same
    printf("b is %d",b);
    



    return 0;
}

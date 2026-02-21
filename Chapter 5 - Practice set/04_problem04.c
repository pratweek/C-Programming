#include<stdio.h>
// 0,1,1,2,3,5,8,13...
//fibocacci(n) = fibocacci(n-1) + fibocacci(n-2);
int fibocacci(int);

int fibocacci(int n){
    if (n==1 || n==2){
        return n-1;
    }
    else {
        return fibocacci(n-1) + fibocacci(n-2);
    }
}
int main (){
    int n=4;
    printf("The value of %d term of fibonacci series is %d ", n,fibocacci(n));
    return 0;
}
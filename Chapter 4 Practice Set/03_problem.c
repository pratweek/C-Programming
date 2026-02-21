#include<stdio.h>
// Sum of n natural numbers

int main (){
    int i =1;
    int n;
    printf("Enter n \n", n);
    scanf("%d",&n);
    int sum=0;
    while (i<=n){
        sum += i; // sum = sum + i
        i++;
    }
    printf("The sum of first n natural numbers is %d",sum);
    
    
    return 0;
}
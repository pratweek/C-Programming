#include<stdio.h>

int main (){
    int i = 1;
    int n;
    printf("Enter n %d \n", n);
    scanf("%d",&n);
    int sum =0;

   /* do 
    {
        sum +=i;
        i++;
    }
    while (i<=n);*/

    // Using for loop
    for (int i =0; i <=n ; i++)
    {
        sum += i;

    }
    
    printf("The sum of n natural numbers is %d", sum);

    return 0;
}
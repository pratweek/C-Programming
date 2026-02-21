#include<stdio.h>

int main (){
    int i =72, j =67; 
    int*p1 = &i;  // p1 is a pointer to an integer and it stores the address of i
    int*p2 = &j;
    printf("The address of i and j is %p and %p", &i, &j);
    printf("\n The address of p1 is %p", p1);
    printf("\n The address of i is %u is", &i);
    printf("\n The value of j is %u", p2);
    printf("\n The value at adress p1 is %d", *(p1));
    printf("\n The address of p1 is %u", &p1);
    return 0;
    // Output will be in hexadecimal format 
    // the value of i stored in p1 and p1 itself has its own address 
    
}
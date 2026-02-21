#include<stdio.h>

  int* sum(int a,int b){
   int s = a+b;
   int* ptr = &s;
    printf("\nThe sum is %d",s);
    return ptr;
}


 int* average(int a, int b){
    float f = (a+b)/2.0;
    float* ptr = &f;
    
    

    printf("\nThe average is %f",f);
    return ptr;
}
int main (){
    int x =4;
    int y =6;

    int* ptr1;
    float* ptr2 ;

    // We are catching the return values here
    ptr1 = sum(x,y);
    ptr2 = average(x,y);

sum(x,y);
average(x,y);


printf("\n The address of sum is %u and adress of average is %u",ptr1,ptr2);
    
    return 0;
}
#include<stdio.h>

int main (){
    int i =5;
    printf("Value of i is %d \n",i);
    i= i+5;
    printf("The value of i is %d \n",i);
    //++ i;
    printf("The value of i is %d \n", i++); //10
    printf("The value of is %d \n", ++i);  //12
    printf("The value of i is %d \n", i);  //12

    i +=2; // same as i = i+2
    printf("The value of i is %d \n",i);
    

    /*i++ prints i first and then increments i (Post increment operator)
    ++i increments i first and then prints i (Post increment operator)
    */


    return 0;
}
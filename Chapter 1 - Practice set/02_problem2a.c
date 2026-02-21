#include<stdio.h>

int main (){
    int radius, height;
    printf("Enter radius of cylinder\n", radius);
    scanf("%d", &radius);
    printf("Enter height of cylinder\n", height);
    scanf("%d", &height);
    printf("The volume of cylinder with radius %d and height %d is %f", radius, height, 3.14*radius*radius*height);
    

    return 0;
}
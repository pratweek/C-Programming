#include<stdio.h>

typedef struct c{
    int real;
     int img;

} Complex;

void display(Complex c){
    printf("The value of complex number is %d + %di",c.real, c.img);
}



int main (){
    Complex carr[5];
    for (int i = 0; i < 5; i++)
{
    
    printf("Enter real part\n");
    scanf("%d", &carr[i].real);
    printf("Enter Imaginary part\n");
    scanf("%d" ,&carr[i].img);
    display(carr[i]);
}
    
    return 0;
}
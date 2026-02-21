#include<stdio.h>

struct employee
{
    int code;
    float salary;
    char name[20];

};

int main (){
    struct employee e1;
    e1.code = 56;
    e1.salary = 67.54;
    struct employee *ptr;
    ptr =&e1;
    printf("%d", (*ptr).code); // printf("%d", ptr->code); Exactly same 
     // -> is arrow operator
    return 0;
}
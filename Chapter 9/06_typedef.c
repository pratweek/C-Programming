#include<stdio.h>

/*int main (){
    typedef int prateek;  // typedef is used to give a new name to an existing data type
    prateek a = 88;
    printf("The value of harry is %d \n", a);
    return 0;
}*/

typedef struct employee  
{
    int code;
    float salary;
    char name[10];
} Emp;


int main (){
    Emp e1;
    Emp* ptr1 = &e1;
    e1.code = 4564;
    strcpy(e1.name, "Prateek");
    e1.salary = 56.75;

    printf("%d %f %s", e1.code, e1.salary, e1.name);
    printf("%d %f %s", ptr1->code, ptr1->salary, ptr1->name);
    return 0;
}




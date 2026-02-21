#include<stdio.h>
#include<string.h>


 struct employee  
{
    int code;
    float salary;
    char name[10];
};


int main (){
  typedef struct employee Emp;
    Emp e1;
    e1.code = 4564;
    strcpy(e1.name, "Prateek");
    e1.salary = 56.75;

    printf("%d %f %s", e1.code, e1.salary, e1.name);
    return 0;
}
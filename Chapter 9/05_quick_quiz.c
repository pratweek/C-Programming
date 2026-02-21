#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[10];

};

void show(struct employee e);  // function prototype
void show(struct employee e){
    printf("code is %d \n Salary is %f\n Name is %s\n ", e.code, e.salary, e.name);

}

int main (){
    struct employee e1; 
    e1.code = 5675;
    strcpy(e1.name, "Prateek");
    e1.salary = 584.68;
    show(e1); //function call

    
    return 0;
}
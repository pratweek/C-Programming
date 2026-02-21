#include<stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main (){
    struct employee facebook[100];
    facebook[0].code = 100;
    facebook[1].code = 101;
    struct employee prateek = {100,65.78,"PrateekRaj"};
    printf("%d %f %s\n", prateek.code , prateek.salary, prateek.name);
    return 0;
}
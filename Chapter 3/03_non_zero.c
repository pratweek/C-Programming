#include<stdio.h>

int main (){
    
    if (1){
        printf("This if is executed!\n");

    }
    if(3622){
       printf("This if is also executed\n");
    }
       if(5.6){
        printf("This if is also executed\n");
       }
       if('c'){
        printf("This if is also executed\n");
       }
       if (0){
        printf("I am not executed\n"); //0 will not be executed in if stateents
       }

        
    
    return 0;
}

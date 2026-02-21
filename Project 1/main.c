#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main (){
    srand(time(0));
    int random_number = (rand()%100) + 1;
    int no_of_guess = 0;
    int guessed_number;

    // printf("Random number : %d\n", random_number);
    do {
        printf("Guess the number : ");
    scanf("%d", &guessed_number);
    if(guessed_number>random_number){
        printf("Lower number please\n");
    }
    else if (random_number>guessed_number){
        printf("higher number please \n");
        
    }
    else{
        printf("Congrats!!\n");

    }
    no_of_guess++;
    }

    
    while(guessed_number!= random_number);
    printf("You guessed the number in %d guesses", no_of_guess);

    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*
    Author : Siddhesh Deshpande
    Purpose : Number Guessing Game
    Date : 14/05/2024
*/

int main()
{
    int random, guess;
    int no_of_guess = 0;
    srand(time(NULL));

    printf("Welcome to the world of Guessing Number\n");
    random = rand() % 100 + 1;          // Generating between 0 to 100
    // printf("Number generated is: %d\n", random);
    do
    {
        printf("Please enter your Guess between(1 to 100):");
        scanf("%d", &guess);
        no_of_guess++;

        if (guess < random)
        {
            printf("Guess a Larger Number\n");
        }
        else if (guess > random)
        {
            printf("Guess a Smaller Number\n");
        }
        else
        {
            printf("\nCongratulations!!! You have successfully guessed the Number in %d attempts\n", no_of_guess);
        }

    } while (guess != random);
    
    printf("\nBye Bye, Thanks for Playing.\n");
    printf("Developed by Siddhesh Deshpande\n");
    return 0;
}
#include <stdio.h>
int main()
{
    int secrat = 25;
    int guess;
    int attempts = 0;
    {
        printf("===== NUMBER GUESSING GAME =====\n);

        printf("guessing a number between 1 and 50: ");
        scanf("%d", &guess);

        while (guess != secret);
        {
        attempts++;
        
        if(guess > secret)
        {
        printf("Too High! Try Again.\n");
        }
        else
        {
        printf("Too Low! Try Again.\n");
        }

        printf("\nGuess a number between 1 and 50: ")
        scanf("%d", &guess);
        }

        attempts++;

        printf("\nCongratulation! You guessed the correct number.\n");
        printf("Total attempts: "%d\n", attempts);

        return 0;
        }


        


    

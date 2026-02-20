#include <stdio.h>


int main()
{
    int secretNumber = 42, userGuess, tries = 0;
    
    printf("The guess the number game!\n");
    printf("Dear USER, Try to guess the secret number between 1 and 100.\n");
    do
    {
        printf(" Number: ");
        scanf("%d", &userGuess);

        //Indice
        if (userGuess !=  secretNumber)
        {
            if (userGuess < secretNumber)
            {
                printf(" The value is lesser than the secret number ! Try again.\n");
            }
            else
            {
                printf(" The value is greater than the secret number ! Try again.\n");
            }
        }
        
        tries++;
    } while (userGuess != secretNumber);
    
    if (userGuess == secretNumber)
    {
        printf("Tries: %d\n", tries);

        if (tries <= 5)
        {
            printf("Well done !\n");
        } else if (tries <= 10)
        {
            printf("Not bad !\n");
        } else
        {
            printf("Bad Player !\n");
        }
        
    }
    


    return 0;
}

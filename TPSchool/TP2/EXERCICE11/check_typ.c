#include <stdio.h>

int main() {
    //DECLARATION OF VARIABLES
    char c ;

    //READ A CHARACTER
    printf("Enter a character: ");
    scanf("%c", &c);

    //CHECK IF THE CHARACTER IS NUMBER OR NOT
    printf("Checking if the character is a number using switch statement...\n");
    switch (c)
    {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            printf("The character (%c) is a number.\n", c);
            break;
        
        default:
            printf("The character (%c) is not a number.\n", c);
            break;
    }

    printf("\nChecking if the character is a number using if statement...\n");
    if (c >= '0' && c <= '9') {
        printf("The character (%c) is a number.\n", c);
    } else {
        printf("The character (%c) is not a number.\n", c);
    }

    return 0;
}
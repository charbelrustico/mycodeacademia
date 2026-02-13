#include <stdio.h>


int main(){

    //Constant of the price of the normal ticket
    const int normal_ticket = 7;
    //Declaration of remainder variables
    int user_age=0, discount, reduction, price;

    //Collect the user's age
    printf("Enter the age of the user: ");
    while(user_age <= 0) {
        scanf("%d", &user_age);
        if (user_age <= 0) {
            printf("Please enter a valid age: ");
        }
    }

    //Calculate the discount depending on the user's age and print the price of the ticket
    if (user_age < 5) {
        discount = 60;
        price = normal_ticket - (normal_ticket * discount / 100);
        printf("\nYou are children of %d years !\n The price of the ticket is: %d euros for you.", user_age, price);
    } else if (user_age >60) {
        discount = 55;
        price = normal_ticket - (normal_ticket * discount / 100);
        printf("\nCongrulations !\n For you, the price of the ticket is: %d euros.", price);
    } else {
        printf("\nThe price of the ticket is: %d euros.", normal_ticket);
    }

    return 0;
}
#include <stdio.h>

int main() {

    float interest_rate=-1, initial_amount, final_amount, interest_amount;

    printf("How much money do you want to deposit now ? ");
    scanf("%f", &initial_amount);


    while (interest_rate < 0 || interest_rate > 100){
        printf("What is the interest rate in your bank ? ");
        scanf("%f", &interest_rate);
    }

    interest_amount = initial_amount * (interest_rate / 100);
    final_amount = initial_amount + interest_amount;

    printf("It's done ! \n your interest is %.2f CFA \n your final amount is %.2f CFA\n", interest_amount, final_amount);
    
    return 0;
}
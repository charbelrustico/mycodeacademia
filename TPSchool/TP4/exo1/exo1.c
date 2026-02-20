#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int Num_Tab[10],i;

    //Read values
    printf("\nEnter 10 integers in Array");
    for ( i = 0; i < 10; i++)
    {
        printf("\n Value %d : ",i+1);
        scanf("%d",&Num_Tab[i]);
    }

    //Print values of Array
    printf("\nHere are 10 integers that you introduce in Array");
    for ( i = 0; i < 10; i++)
    {
        printf("\n Value %d : %d",i+1,Num_Tab[i]);
    }
    

    return 0;
}
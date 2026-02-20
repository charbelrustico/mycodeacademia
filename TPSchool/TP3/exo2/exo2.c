#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,nbre_term;

    //Read the number of term
    printf("How much number of term for series ? :");
    scanf("%d",&nbre_term);

    //Loop of the series
    printf("This is a series of 5 to %d \n",nbre_term*5);

    for(i=5;i<=nbre_term*5;i+=5){
        printf("%d\n",i);
    }


    return 0;
}

#include <stdio.h>
#include <stdlib.h>

//Define an size of each array
#define SIZE_A 5
#define SIZE_B 7
#define SIZE_C (SIZE_A + SIZE_B) //Size of TabC is the sum of size of TabA and TabB

int main() {
    
    int TabA[SIZE_A], TabB[SIZE_B], TabC[SIZE_C], i, j; //3 Arrays with 5,7 and 12 elements

    //Read value in TabA
    printf("\nEnter %d values for TabA : ",SIZE_A);
    for(i=0; i<SIZE_A; i++){
        printf("\n Value %d : ",i+1);
        scanf("%d",&TabA[i]);
    }

    //Read value in TabB
    printf("\nEnter %d values for TabB : ",SIZE_B);
    for(i=0; i<SIZE_B; i++){
        printf("\n Value %d : ",i+1);
        scanf("%d",&TabB[i]);
    }

    //Copy values of TabA to TabC
    for(i=0; i<SIZE_A; i++){
        TabC[i] = TabA[i];
    }

    //Copy values of TabB to TabC
    for(i=0; i<SIZE_B; i++){
        TabC[SIZE_A+i] = TabB[i];
    }

    //Print values of TabC
    printf("\nTabC contains the following values : ");
    for(i=0; i<SIZE_C; i++){
        printf("%d ",TabC[i]);
    }
    
    return 0;
}
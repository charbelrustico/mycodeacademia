#include <stdio.h>
#include <stdlib.h>

int main(){
    float Numbers[10], smallNum, LargNum, meanNumbers, sumNumbers=0;
    int i;

    //Read 10 values
    printf("Enter 10 values\n");
    for(i=0;i<10;i++){
        do{
            printf("\n Number %d :",i+1);
            scanf("%f",&Numbers[i]);
        }while (Numbers[i]<0);
    }

    //Initialize value of SmallNum and LargNum
    smallNum = Numbers[0];
    LargNum = Numbers[0];
    
    //Operations Loop
    for(i=0;i<9;i++){
        
        //Calculate addition of all numbers
        sumNumbers+=Numbers[i];

        //Compare numbers for determine largest and smallest number
        if(Numbers[i]<smallNum){
            smallNum = Numbers[i];
        }
        if (Numbers[i] > LargNum)
        {
            LargNum = Numbers[i];
        }
    }

    //Calculate arithmetic mean of all numbers
    meanNumbers = sumNumbers/10;
    
    //Print result
    printf("\nHere results :\n");
    printf("1. Addition of the numbers = %2.f\n", sumNumbers);
    printf("2. Arithmetic mean of the numbers = %2.f\n", meanNumbers);
    printf("3. Largest number = %2.f\n", LargNum);
    printf("4. Smaller number = %2.f\n", smallNum);


    return 0;
}
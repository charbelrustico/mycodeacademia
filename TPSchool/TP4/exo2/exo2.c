#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int numTab[21], value, countValue=0,i;

    printf("Enter integers in Array - Tap 0 or introduce 20 values to stop programme\n");

    do
    {
        printf("\nValue %d : ",countValue+1);
        scanf("%d",&value);

        //Stock to array in inverse order
        numTab[20-countValue] = value; 
        printf("\nnumTab[%d] = %d",20-countValue,numTab[20-countValue]);


        countValue++;
        printf("\ncountValue = %d",countValue);

        printf("\nvalue == 0 || countValue == 20 : %d\n",(value == 0) || (countValue == 20));
        printf("\nvalue != 0 || countValue != 20 : %d\n",(value != 0) || (countValue != 20));


    } while ( (value!=0)&&(countValue!=20) );

    //Print result
    
    printf("\nHere value that you introduced in inverse order\n");
    for ( i = 0; i < countValue; i++)
    {
        printf("\nValue %d : %d",20-i,numTab[20-i]);
    }
    
        
    
    

    return 0;
}
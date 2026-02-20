#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int NumberTab[4][3], sumColums[4] = {0,0,0,0}, LargSum=0,LargColumn, i, j; //2 Dimensions Tab with 4 rows and 3 columns*

    //Read value in Array
    for(i=0; i<3; i++){
        printf("\n%d ROW ",i+1);
        for(j=0; j<4; j++){
            printf("\n COLUMN %d : ",j+1);
            scanf("%d",&NumberTab[i][j]);

            //Make sum of each column
            sumColums[j] += NumberTab[i][j];
        }
    }

    //Compare Sum of each column
    for(i=0; i<4; i++){
        if (sumColums[i]>LargSum)
        {
            LargSum = sumColums[i];
            LargColumn = i+1;
        }
        //printf("\n COLUMN %d sum = %d",i+1,sumColums[i]);
    }

    /*Print value in Array
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            printf("\nTab[%d][%d] = %d",i,j,NumberTab[i][j]);
        }
    }*/

    //Print the largest sum of columns
    printf("\nThe largest sum of columns is : %d (Column %d)\n",LargSum,LargColumn);

    return 0;
}
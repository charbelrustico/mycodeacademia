#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,sum=0,nbr_total=0;

    do{
        //Read a value a in keyboard
        printf("\nEnter an number :");
        scanf("%d",&a);

        if(a!=0){
            //Print the value
            printf("Input number = %d\n",a);

            //Count number of input value
            nbr_total++;
            
            //Sum of all value
            sum+=a;
        }
    }while(a!=0);

    //Print the final count number and sum 
    printf("You enter finally : %d numbers and the sum = %d\n",nbr_total,sum);

    

    return 0;
}

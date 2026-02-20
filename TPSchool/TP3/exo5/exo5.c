#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;

    printf("Voici le tableau ASCII de %d à %d \n",33,126);
    printf("____________________________________\n");
    printf("| Decimales | ASCII | Hexadecimale |\n");
    printf("|___________|_______|______________|\n");                                             
    //Boucle                                         
    for(i=33;i<=126;i++){
        if (i<100)
        {
            printf("|    %i     |   %c   |      %x      |\n",i,i,i);    
            printf("|___________|_______|______________|\n");
        }else
        {
            printf("|    %i    |   %c   |      %x      |\n",i,i,i);    
            printf("|___________|_______|______________|\n");
        }
                                    
    
    }


    return 0;
}
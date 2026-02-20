#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;

    printf("Count from 1 to 100\n");
    for(i=1; i<=100; i++){
        printf("%d\n", i);
    }    
    
    printf("\nCount from 1 to 100 counting two by two\n");
    for(i=1; i<=100; i+=2){
        printf("%d\n", i);
    }

    printf("\nDecont of 1 at 100\n");
    for(i=101; i>=1; i--)
        printf("%d\n", i);

    
    printf("\nCount  multiple three\n");
    for(i=0; i<=100; i+=3){
        if(i==0)
            continue;
        else
            printf("%d\n", i);
    }

    return 0;
}

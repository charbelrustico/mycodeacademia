#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char username[5]="root",password[5]="1234", user_name[5],user_pass[5];
    int try=3;

    printf("Welcome to Auth Panel\n");
    do{
        printf("\n Enter a valid credentials \n");
        printf(" Username:");
        scanf("%s",user_name);
        printf(" Password:");
        scanf("%s",user_pass);

        if(strcmp(username,user_name)==0 && strcmp(password,user_pass)==0 ){
            printf("\nLog In Succesful !\n");
            break;
        }else{
            try--;
        }
    }while (try!=0);

    if(try==0)
        printf("\nNo more tries available !");
    




    return 0;
}

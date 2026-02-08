#include <stdio.h>

int main() {

    //Variable declaration
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age > 21)
        printf("1");
    else
        printf("0");
    
    

    return 0;
    
}
#include <stdio.h>

int main() {
    //Variable declaration
    char a[20], b[20], temp[20];
    printf("Enter value of a: ");
    scanf("%s", a);
    printf("Enter value of b: ");
    scanf("%s", b);

    printf("Before permutation:\n a = %s\n b = %s\n", a, b);

    //Permutation of values using a temporary variable and the strcpy function
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);

    printf("After permutation:\n");
    printf("a = %s\n", a);
    printf("b = %s\n", b);
    return 0;
    
}
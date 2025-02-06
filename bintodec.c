// code to convert bin to dec
#include <stdio.h>
#include <math.h>
int main() {
    long binary;
    int decimal = 0, remainder, i = 0;
    printf("Enter a binary number: ");
    scanf("%ld", &binary);
    while (binary != 0) {
        remainder = binary % 10; 
        decimal += remainder * pow(2, i); 
        binary = binary / 10;
        i++; 
    }
    printf("The decimal equivalent is: %d\n", decimal);
    return 0;
}

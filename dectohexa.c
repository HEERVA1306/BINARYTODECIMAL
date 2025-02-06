// code to convert dec to hex
#include <stdio.h>
int main() {
    int decimal, remainder;
    char hex[50];  
    int i = 0;  
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    if (decimal == 0) {
        printf("The hexadecimal equivalent is 0\n");
        return 0;
    }
    while (decimal != 0) {
        remainder = decimal % 16;
        if (remainder < 10) {
            hex[i] = remainder + '0';  
        } else {
            hex[i] = remainder - 10 + 'A'; 
        }
        decimal = decimal / 16;
        i++;
    }
    printf("The hexadecimal equivalent is: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");
    return 0;
}

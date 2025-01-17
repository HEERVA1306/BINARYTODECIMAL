#include <stdio.h>

void decimalToBinary(int n) {
    // Array to store binary number
    int binary[32];
    int i = 0;
    
    // Special case: if n is 0
    if (n == 0) {
        printf("0");
        return;
    }

    // Convert decimal to binary
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    
    // Print the binary number in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int decimal;
    
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    
    printf("Binary equivalent: ");
    decimalToBinary(decimal);
    
    return 0;
}

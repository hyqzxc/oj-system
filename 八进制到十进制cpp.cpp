#include <stdio.h>

int main() {
    int octal, decimal = 0, base = 1;
    while (scanf("%d", &octal) != EOF)
    {
        if (octal == 0)
        {
            return 0;
        }
    
        while (octal != 0) 
        {
            int digit = octal % 10;
            decimal += digit * base;
            base *= 8;
            octal /= 10;
        } printf("%d\n", decimal); octal = 0; decimal = 0; base = 1;
    }
    return 0;
}

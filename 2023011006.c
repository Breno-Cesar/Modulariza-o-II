#include <stdio.h>

void decimal_binario(int dec) {
    if (dec == 0)
        return;
    decimal_binario(dec / 2);
    printf("%d", dec % 2);
}

int main() {
    int dec;
    printf("Insira um numero decimal: ");
    scanf("%d", &dec);
    decimal_binario(dec);
    printf("\n");
    return 0;
}

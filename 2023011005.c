#include <stdio.h>

int binario_decimal(int bin) {
    int dec = 0;
    int pot = 1;
    while (bin > 0) {
        int resto = bin % 10;
        dec += resto * pot;
        bin = bin / 10;
        pot = pot * 2;
    }
    return dec;
}

int main() {
    int bin;
    printf("Insira um numero binario: ");
    scanf("%d", &bin);
    int dec = binario_decimal(bin);
    printf("%d em binario e igual a %d em decimal\n", bin, dec);
    return 0;
}

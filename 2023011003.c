#include <stdio.h>

int verifica_digitos(int x, int y) {
    int conta_digitos_x = 0, aux_x = x;
    int conta_digitos_y = 0, aux_y = y;

    while (aux_x > 0) {
        aux_x /= 10;
        conta_digitos_x++;
    }

    while (aux_y > 0) {
        aux_y /= 10;
        conta_digitos_y++;
    }

    x = x % (int) pow(10, conta_digitos_y);
    return x == y;
}

int main() {
    int x, y;
    printf("Insira o primeiro inteiro: ");
    scanf("%d", &x);
    printf("Insira o segundo inteiro: ");
    scanf("%d", &y);
    if (verifica_digitos(x, y)) {
        printf("%d corresponde aos ultimos digitos de %d\n", y, x);
    } else {
        printf("%d nao corresponde aos ultimos digitos de %d\n", y, x);
    }
    return 0;
}

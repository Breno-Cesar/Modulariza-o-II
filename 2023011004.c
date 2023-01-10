#include <stdio.h>

int segmento(int x, int y) {
    int a;
    while (y > 0) {
        a = y % 10;
        if (x == a)
            return 1;
        y = y/10;
    }
    return 0;
}

int main() {
    int x, y;
    printf("Insira o primeiro inteiro: ");
    scanf("%d", &x);
    printf("Insira o segundo inteiro: ");
    scanf("%d", &y);
    if (x < y) {
        if (segmento(x, y)) {
            printf("%d e um segmento de %d\n", x, y);
        } else {
            printf("%d nao e um segmento de %d\n", x, y);
        }
    } else {
        printf("x precisa ser menor que y\n");
    }
    return 0;
}

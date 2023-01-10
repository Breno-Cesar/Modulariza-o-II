#include <stdio.h>

int conta_digitos(int n, int d) {
    int cont = 0;
    while (n > 0) {
        if (n % 10 == d) {
            cont++;
        }
        n /= 10;
    }
    return cont;
}

int main() {
    int n, d, cont;
    printf("Insira o numero inteiro: ");
    scanf("%d", &n);
    printf("Insira o digito a ser contado: ");
    scanf("%d", &d);
    cont = conta_digitos(n, d);
    printf("O digito %d aparece %d vezes em %d\n", d, cont, n);
    return 0;
}

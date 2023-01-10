#include <stdio.h>
int conta_digitos(int n, int d) 
{
    int cont = 0;
    while (n > 0) {
        if (n % 10 == d) {
            cont++;
        }
        n /= 10;
    }
    return cont;
}
int permutacao(int n1, int n2) {
    int i;
    for (i = 0; i <= 9; i++) {
        if (conta_digitos(n1, i) != conta_digitos(n2, i)) {
            return 0;
        }
    }
    return 1;
}
int main() {
   int n1, n2;
    printf("Insira o primeiro numero inteiro: ");
    scanf("%d", &n1);
    printf("Insira o segundo numero inteiro: ");
    scanf("%d", &n2);
    if (permutacao(n1, n2)) {
        printf("%d é uma permutacao de %d\n", n1, n2);
    } else {
        printf("%d nao e uma permutacao de %d\n", n1, n2);
    }
    return 0;
}


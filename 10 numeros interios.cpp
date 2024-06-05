#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeros[10];
    int valor_referencia;
    int i, count = 0;

    printf("Digite 10 numeros inteiros:\n");

    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Digite um valor de referencia inteiro: ");
    scanf("%d", &valor_referencia);

     printf("Numeros maiores que o valor de referencia %d:\n", valor_referencia);
    for (i = 0; i < 10; i++) {
        if (numeros[i] > valor_referencia) {
            printf("%d\n", numeros[i]);
        }

        if (numeros[i] == valor_referencia) {
            count++;
        }
    }

    printf("O valor de referencia aparece %d vezes no vetor.\n", count);

    return 0;
}


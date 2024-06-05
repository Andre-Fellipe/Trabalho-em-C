#include <stdio.h>
#include <stdlib.h>

void calcularTabuada(int numero) {
    int i;

    printf("Tabuada de %d:\n", numero);
    for (i = 1; i <= 20; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

int main() {
    int numero;

    printf("Digite um numero para calcular a tabuada: ");
    scanf("%d", &numero);

    calcularTabuada(numero);

    return 0;
}



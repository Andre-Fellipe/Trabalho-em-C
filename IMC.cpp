#include <stdio.h>
#include <stdlib.h>

int main() {
    float peso, altura, imc;

    printf("Digite o peso em quilogramas: ");
    scanf("%f", &peso);
    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC e de: %.2f\n", imc);
    if (imc < 18.5) {
        printf("Abaixo do peso.\n");
    } else if (imc >= 18.5 && imc < 25) {
        printf("Peso normal.\n");
    } else if (imc >= 25 && imc < 30) {
        printf("Sobrepeso.\n");
    } else if (imc >= 30 && imc < 35) {
        printf("Obesidade grau 1.\n");
    } else if (imc >= 35 && imc < 40) {
        printf("Obesidade grau 2.\n");
    } else {
        printf("Obesidade grau 3.\n");
    }

    return 0;
}


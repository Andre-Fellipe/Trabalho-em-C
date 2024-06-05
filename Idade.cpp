#include <stdio.h>
#include <stdlib.h>

int main() {
    int quantidade, i;
    int faixas_etarias[3] = {0};
    int idade;

    printf("Digite a quantidade de pessoas a serem entrevistadas: ");
    scanf("%d", &quantidade);

    for (i = 0; i < quantidade; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);

        if (idade >= 18 && idade < 35) {
            faixas_etarias[0]++;
        } else if (idade >= 35 && idade < 65) {
            faixas_etarias[1]++;
        } else if (idade >= 65 && idade <= 80) {
            faixas_etarias[2]++;
        }
    }

    printf("\nResultados da pesquisa:\n");
    printf("Jovens (>= 18 e < 35 anos): %d\n", faixas_etarias[0]);
    printf("Adultos (>= 35 e < 65 anos): %d\n", faixas_etarias[1]);
    printf("Idosos (>= 65 anos): %d\n", faixas_etarias[2]);

    return 0;
}


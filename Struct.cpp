#include <stdio.h>
#include <stdlib.h>

struct Aluno {
    int matricula;
    char nome[50];
    float nota_av;
    float simulado1;
    float simulado2;
};

int main() {
    struct Aluno aluno;

    printf("Digite a matricula do aluno: ");
    scanf("%d", &aluno.matricula);

    printf("Digite o nome do aluno: ");
    scanf("%s", aluno.nome); 

    printf("Digite a nota da avaliacao do aluno: ");
    scanf("%f", &aluno.nota_av);

    printf("Digite a nota do primeiro simulado do aluno: ");
    scanf("%f", &aluno.simulado1);

    printf("Digite a nota do segundo simulado do aluno: ");
    scanf("%f", &aluno.simulado2);

    printf("\nDados do aluno:\n");
    printf("Matricula: %d\n", aluno.matricula);
    printf("Nome: %s\n", aluno.nome);
    printf("Nota da avaliacao: %.2f\n", aluno.nota_av);
    printf("Nota do primeiro simulado: %.2f\n", aluno.simulado1);
    printf("Nota do segundo simulado: %.2f\n", aluno.simulado2);

    return 0;
}


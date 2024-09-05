#include <stdio.h>

const int N = 5;

struct Aluno
{
    int num;
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
}
s[N];

void encontrarAluno()
{
    int i;
    int alunoMaiorNota1 = 0;
    int alunoMaiorMediaGeral = 0;
    int alunoMenorMediaGeral = 0;

    for (i = 1; i < N; i++)
    {
        if (s[i].nota1 > s[alunoMaiorNota1].nota1)
            alunoMaiorNota1 = i;
    }

    for (i = 1; i < N; i++)
    {
        float mediaGeralI = (s[i].nota1 + s[i].nota2 + s[i].nota3) / 3.0;
        float mediaGeralAlunoMaiorMediaGeral = (s[alunoMaiorMediaGeral].nota1 +
                                                s[alunoMaiorMediaGeral].nota2 +
                                                s[alunoMaiorMediaGeral].nota3) / 3.0;

        if (mediaGeralI > mediaGeralAlunoMaiorMediaGeral)
            alunoMaiorMediaGeral = i;

        if (mediaGeralI < (s[alunoMenorMediaGeral].nota1 +
                          s[alunoMenorMediaGeral].nota2 +
                          s[alunoMenorMediaGeral].nota3) / 3.0)
            alunoMenorMediaGeral = i;
    }

    printf("\nAluno com maior nota na 1a Prova: %s\n", s[alunoMaiorNota1].nome);
    printf("Aluno com maior media geral: %s\n", s[alunoMaiorMediaGeral].nome);
    printf("Aluno com menor media geral: %s\n", s[alunoMenorMediaGeral].nome);

    for (i = 0; i < N; i++)
    {
        float mediaGeral = (s[i].nota1 + s[i].nota2 + s[i].nota3) / 3.0;
        if (mediaGeral >= 6.0)
            printf("%s foi aprovado.\n", s[i].nome);
        else
            printf("%s foi reprovado.\n", s[i].nome);
    }
}

int main (void)
{
    printf("\n||Insira as informacoes dos alunos||\n");

    for(int i = 0; i < N; i++)
    {
        s[i].num = i + 1;

        printf("\nPara o aluno n°%d\n", s[i].num);
        printf("Nome: ");
        scanf("%s", s[i].nome);
        printf("Matricula: ");
        scanf("%d", &s[i].matricula);

        do
        {
            printf("Nota da 1a Prova: ");
            scanf("%f", &s[i].nota1);
        }
        while (s[i].nota1 > 30);

        do
        {
            printf("Nota da 2a Prova: ");
            scanf("%f", &s[i].nota1);
        }
        while (s[i].nota2 > 30);

        do
        {
            printf("Nota da 3a Prova: ");
            scanf("%f", &s[i].nota1);
        }
        while (s[i].nota1 > 40);
    }

    printf("||Exibindo Informações||");

    for(int i = 0; i < 5; i++)
    {
        printf("\nAluno n°%d: ", i + 1);
        printf("Nome: %s\t", s[i].nome);
        //puts(s[i].nome);
        printf("Matricula: %d\t", s[i].matricula);
        printf("Nota da 1a Prova: %2.f\t", s[i].nota1);
        printf("Nota da 2a Prova: %2.f\t", s[i].nota2);
        printf("Nota da 3a Prova: %2.f\t\n", s[i].nota3);
    }

    encontrarAluno();

    return 0;
}

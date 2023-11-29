#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define quantidadeLinhas 5
#define quantidadeColunas 3

/*Crie um programa que fa�a o cadastro de 5 alunos em uma escola, armazenando seus dados como: nome,
idade e  3 notas  para cada aluno. Ao final, mostre todos os dados dos alunos como: nome, idade,
as notas e a m�dia. Ap�s calcular a m�dia, verifique para cada aluno se este estar� aprovado (m�dia maior ou igual a 7,0),
em recupera��o (m�dia menor que 7,0 e maior ou igual a 5,0) ou reprovado (m�dia menor que 5,0) com base nestes crit�rios.*/

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nomes[quantidadeLinhas][501], resultado[quantidadeLinhas][501];
    int idades[quantidadeLinhas], i, j;
    float medias[quantidadeLinhas], notas[quantidadeLinhas][quantidadeColunas], somaNotas[quantidadeLinhas] = {0};

    // Coleta de dados do usu�rio:
    for (i = 0; i < quantidadeLinhas; i++)
    {
        printf("Insira o nome do %d� aluno: \n", i + 1);
        gets(nomes[i]);
        printf("Insira a idade de %s: \n", nomes[i]);
        scanf("%d", &idades[i]);

        do
        {
            for (j = 0; j < quantidadeColunas; j++)
            {
                printf("Insira a %d� nota de %s: \n", j + 1, nomes[i]);
                scanf("%f", &notas[i][j]);

                if ((notas[i][j]) < 0 || (notas[i][j] > 10))
                {
                    printf("A nota inserida � inv�lida, digite novamente!\n");
                    Sleep(3000);
                    system("cls || clear");
                    j--;
                }
            }
        } while ((notas[i][j]) < 0 || (notas[i][j] > 10));

        printf("\n");

        fflush(stdin);
    }

    system("cls || clear");

    // Impress�o dos dados coletados:

    for (i = 0; i < quantidadeLinhas; i++)
    {
        printf("Nome do %d� aluno: %s\n", i + 1, nomes[i]);
        printf("Idade do %d� aluno: %d \n", i + 1, idades[i]);

        for (j = 0; j < quantidadeColunas; j++)
        {
            printf("%d� nota de %s: %.2f\n", j + 1, nomes[i], notas[i][j]);
            somaNotas[i] += notas[i][j];
        }

        medias[i] = somaNotas[i] / quantidadeColunas;

        if (medias[i] >= 7)
        {
            strcpy(resultado[i], "O aluno est� APROVADO!");
        }
        else if ((medias[i] >= 5) && (medias[i] < 7))
        {
            strcpy(resultado[i], "O aluno est� em RECUPERA��O!");
        }
        else
        {
            strcpy(resultado[i], "O aluno est� REPROVADO!");
        }

        printf("M�dia do %d� aluno: %.2f\n", i + 1, medias[i]);
        printf("\n");
    }

    // Impress�o da situa��o do aluno:
    for (i = 0; i < quantidadeLinhas; i++)
    {

        printf("Situa��o do %d� aluno: %s\n", i + 1, resultado[i]);
    }

    return 0;
}
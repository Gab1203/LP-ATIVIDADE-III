#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define quantidade 5

/*Crie um algoritmo que leia o nome, a idade, o peso e a altura de 5 pessoas, armazenando em vetores.

- Mostre as informações solicitadas de cada pessoa e informe:
A maior altura e a menor altura.
O maior peso e menor peso;
A maior idade e a menor idade.*/

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nomes[quantidade][501];
    int idades[quantidade], i, maiorIdade = __WINT_MIN__, menorIdade = __INT_MAX__;
    float pesos[quantidade], alturas[quantidade];
    float maiorPeso = __WINT_MIN__, menorPeso = __INT_MAX__, maiorAltura = __WINT_MIN__, menorAltura = __INT_MAX__;

    // Coleta de dados do usuário a partir de um laço For.

    for (i = 0; i < quantidade; i++)
    {
        printf("Insira o nome da %d° pessoa: \n", i + 1);
        gets(nomes[i]);
        printf("Insira a idade de %s: \n", nomes[i]);
        scanf("%d", &idades[i]);
        printf("Insira o peso em Kg de %s: \n", nomes[i]);
        scanf("%f", &pesos[i]);
        printf("Insira a altura em metros de %s: \n", nomes[i]);
        scanf("%f", &alturas[i]);
        printf("\n");

        fflush(stdin);
    }

    system("cls || clear");
    // Impressão dos dados coletados:

    for (i = 0; i < quantidade; i++)
    {
        printf("\nNome da %d° pessoa: %s\n", i + 1, nomes[i]);
        printf("Idade da %d° pessoa: %d\n", i + 1, idades[i]);
        printf("Peso da %d° pessoa: %.2f\n", i + 1, pesos[i]);
        printf("Altura da %d° pessoa: %.2f\n", i + 1, alturas[i]);

        maiorIdade = maiorIdade > idades[i] ? maiorIdade : idades[i];
        menorIdade = menorIdade < idades[i] ? menorIdade : idades[i];
        maiorPeso = maiorPeso > pesos[i] ? maiorPeso : pesos[i];
        menorPeso = menorPeso < pesos[i] ? menorPeso : pesos[i];
        maiorAltura = maiorAltura > alturas[i] ? maiorAltura : alturas[i];
        menorAltura = menorAltura < alturas[i] ? menorAltura : alturas[i];
    }

    // Impressão dos resultados:
    printf("\nMaior idade: %d\n", maiorIdade);
    printf("Menor idade: %d\n", menorIdade);
    printf("Maior peso: %.2f\n", maiorPeso);
    printf("Menor peso: %.2f\n", menorPeso);
    printf("Maior altura: %.2f\n", maiorAltura);
    printf("Menor altura: %.2f\n", menorAltura);

    return 0;
}
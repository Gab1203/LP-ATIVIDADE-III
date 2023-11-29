#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define quantidade 5

/*Crie um software que leia 5 números inteiros e, em seguida, mostre na tela:
A quantidade de números ímpares;
A quantidade de números negativos;
O maior e o menor número;
A média de números pares;
A média de números inseridos.*/

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numeros[quantidade], i;
    int contadorImpares = 0, contadorPares = 0, contadorNegativos = 0, ContadorPositivos = 0;
    int maiorNumero = __WINT_MIN__, menorNumero = __INT_MAX__;
    float mediaPares, mediaImpares, mediaGeral, somaPar = 0, somaImpar = 0, somaGeral = 0;
    ;

    // Coleta de dados do usuário:
    for (i = 0; i < quantidade; i++)
    {
        printf("Digite o %d° número inteiro: \n", i + 1);
        scanf("%d", &numeros[i]);
    }
    system("cls || clear");

    // Impressão dos dados coletados:
    for (i = 0; i < quantidade; i++)
    {
        printf("%d° número: %d\n", i + 1, numeros[i]);

        somaGeral += numeros[i];

        if (numeros[i] % 2 == 0)
        {
            contadorPares++;
            somaPar += numeros[i];
        }
        else
        {
            contadorImpares++;
            somaImpar += numeros[i];
        }

        if (numeros[i] > 0)
        {
            ContadorPositivos++;
        }
        else if ((numeros[i] < 0) && (numeros[i] != 0))
        {

            contadorNegativos++;
        }

        maiorNumero = maiorNumero > numeros[i] ? maiorNumero : numeros[i];
        menorNumero = menorNumero < numeros[i] ? menorNumero : numeros[i];
    }
    printf("\n");

    mediaGeral = somaGeral / quantidade;
    mediaPares = somaPar / contadorPares;
    mediaImpares = somaImpar / contadorImpares;
    // Impressão dos resultados
    printf("Quantidade de números pares: %d\n", contadorPares);
    printf("Média de números pares: %.2f\n", mediaPares);
    printf("Quantidade de números impares: %d\n", contadorImpares);
    printf("Média de números impares: %.2f\n", mediaImpares);
    printf("Quantidade de números positivos: %d\n", ContadorPositivos);
    printf("Quantidade de números negativos: %d\n", contadorNegativos);
    printf("Maior número: %d\n", maiorNumero);
    printf("Menor número: %d\n", menorNumero);
    printf("Média dos números total: %.2f\n", mediaGeral);

    return 0;
}
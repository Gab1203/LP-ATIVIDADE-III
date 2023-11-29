#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define quantidade 5

/*Crie um software que leia 5 n�meros inteiros e, em seguida, mostre na tela:
A quantidade de n�meros �mpares;
A quantidade de n�meros negativos;
O maior e o menor n�mero;
A m�dia de n�meros pares;
A m�dia de n�meros inseridos.*/

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numeros[quantidade], i;
    int contadorImpares = 0, contadorPares = 0, contadorNegativos = 0, ContadorPositivos = 0;
    int maiorNumero = __WINT_MIN__, menorNumero = __INT_MAX__;
    float mediaPares, mediaImpares, mediaGeral, somaPar = 0, somaImpar = 0, somaGeral = 0;
    ;

    // Coleta de dados do usu�rio:
    for (i = 0; i < quantidade; i++)
    {
        printf("Digite o %d� n�mero inteiro: \n", i + 1);
        scanf("%d", &numeros[i]);
    }
    system("cls || clear");

    // Impress�o dos dados coletados:
    for (i = 0; i < quantidade; i++)
    {
        printf("%d� n�mero: %d\n", i + 1, numeros[i]);

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
    // Impress�o dos resultados
    printf("Quantidade de n�meros pares: %d\n", contadorPares);
    printf("M�dia de n�meros pares: %.2f\n", mediaPares);
    printf("Quantidade de n�meros impares: %d\n", contadorImpares);
    printf("M�dia de n�meros impares: %.2f\n", mediaImpares);
    printf("Quantidade de n�meros positivos: %d\n", ContadorPositivos);
    printf("Quantidade de n�meros negativos: %d\n", contadorNegativos);
    printf("Maior n�mero: %d\n", maiorNumero);
    printf("Menor n�mero: %d\n", menorNumero);
    printf("M�dia dos n�meros total: %.2f\n", mediaGeral);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

/*Desenvolva um programa que registre as vendas de uma loja, armazenando os valores em um vetor e apresentando o
total de vendas ao final. Considere que cada venda precisa do nome de um produto, seu preço e sua quantidade. Crie um menu
 onde o usuário possa digitar o número 1 para adicionar uma venda e o número 2 para sair do menu e exibir o total das vendas realizadas.*/

int main()
{
    setlocale(LC_ALL, "portuguese");

    int codigo, i, contadorVendas = 0, quantidadesProduto[999];
    float precos[999];
    char nomesProdutos[999][501];

    do
    {
        printf("| 1 - Adicionar uma venda\n| 2 - Sair do menu e exibir os resultados\n\n");
        printf("Insira o código desejado: \n");
        scanf("%d", &codigo);

        switch (codigo)
        {
        case 1:

            printf("\n| 1 - Adicionar uma venda |\n\n");
            fflush(stdin);
            printf("Insira o nome do produto:\n");
            gets(nomesProdutos[contadorVendas]);
            fflush(stdin);
            printf("Insira o preço do produto em R$:\n");
            scanf("%f", &precos[contadorVendas]);
            printf("Insira a quantidade desejada:\n");
            scanf("%d", &quantidadesProduto[contadorVendas]);
            printf("\n");

            contadorVendas++;
            break;

        case 2:
            system("cls || clear");
            printf("| 2 - Sair do menu e exibir os resultados |\n");

            for (i = 0; i < contadorVendas; i++)
            {

                fflush(stdin);
                printf("\n%d° venda: \n", i + 1);
                printf("Nome do produto: %s\n", nomesProdutos[i]);
                printf("Preço do produto: R$ %.2f\n", precos[i]);
                printf("Quantidade do produto: %d\n", quantidadesProduto[i]);
                fflush(stdin);
            }

            printf("\nTotal de vendas: %d\n", contadorVendas);

            break;

        default:

            printf("Código inválido, digite novamente!\n");
            Sleep(3000);
            system("cls || clear");
            break;
        }
    } while (codigo != 2);

    return 0;
}
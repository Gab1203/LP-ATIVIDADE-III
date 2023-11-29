#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

/*Implemente um programa que permita cadastrar contatos telef�nicos em uma agenda, utilizando vetores
para armazenar os nomes e n�meros de telefone.
Permita que o usu�rio digite o c�digo 1 para adicionar um n�mero e 2 para mostrar os n�meros cadastrados e encerrar o software.*/

int main()
{
    setlocale(LC_ALL, "portuguese");

    int codigo = 0, i, contadorContatos = 0;
    char contatos[999][101], nomes[999][501];

    do
    {

        printf("| 1 - Cadastrar n�mero telef�nico\n| 2 - Mostrar os n�meros cadastrados e encerramento de software\n\n");
        printf("Insira o c�digo desejado: \n");
        scanf("%d", &codigo);
        printf("\n");

        switch (codigo)
        {
        case 1:

            printf("\n| 1 - Cadastrar n�mero telef�nico |\n\n");

            fflush(stdin);
            printf("Digite o nome da pessoa: \n");
            gets(nomes[contadorContatos]);

            fflush(stdin);
            printf("Digite o n�mero telef�nico desejado: \n");
            gets(contatos[contadorContatos]);
            fflush(stdin);
            printf("\n");
            contadorContatos++;
            break;

        case 2:

            system("cls || clear");

            printf("| 2 - Mostrar os n�meros cadastrados e encerramento de software |\n\n");
            for (i = 0; i < contadorContatos; i++)
            {
                fflush(stdin);
                printf("%d� nome: %s\n", i + 1, nomes[i]);
                printf("%d� n�mero telef�nico: %s\n", i + 1, contatos[i]);
                fflush(stdin);
            }

            break;

        default:
            printf("C�digo inv�lido, digite novamente!\n");
            Sleep(3000);
            system("cls || clear");

            break;
        }

    } while (codigo != 2);

    return 0;
}
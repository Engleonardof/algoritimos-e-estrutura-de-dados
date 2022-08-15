#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int opcao;
    int nOpcao1 = 0;
    int nOpcao2 = 0;
    int nOpcao3 = 0;
    float totalConta = 0;


    do {
        printf("------------ MENU ---------------\n");
        printf("1 - Opção 1 - R$ 12,00 \n");
        printf("2 - Opção 2 - R$ 15,00 \n");
        printf("3 - Opção 3 - R$  5,50 \n");
        printf("4 - Sair!\n");
        printf("---------------------------------\n");
        printf("Digite sua escolha: ");
        scanf("%d", &opcao);


        switch(opcao) {
            case 1:
                printf("Você escolheu a opção 1\n");
                printf("Adicionado em sua conta R$ 12,00\n");
                totalConta += 12;
                nOpcao1++;
                break;
            case 2:
                printf("Você escolheu a opção 2\n");
                printf("Adicionado em sua conta R$ 15,00\n");
                totalConta += 15;
                nOpcao2++;
                break;
            case 3:
                printf("Você escolheu a opção 3\n");
                printf("Adicionado em sua conta R$ 5,50\n");
                totalConta += 5.5;
                nOpcao3++;
                break;
            case 4:
                printf("Detalhes da conta:\n");
                printf("%d x Opção 1 (valor unitário R$ 12,00) = R$ %.2f\n", nOpcao1, nOpcao1*12.0);
                printf("%d x Opção 2 (valor unitário R$ 15,00) = R$ %.2f\n", nOpcao2, nOpcao2*15.0);
                printf("%d x Opção 3 (valor unitário R$  5,50) = R$ %.2f\n", nOpcao3, nOpcao3*5.5);
                printf("Sua conta deu um total de: R$ %.2f\n", totalConta);
                break;
            default:
                printf("OPÇÃO INVÁLIDA!\n");
        }
    } while(opcao != 4);


    return 0;
}

#include "calculadora.h"
#include <stdio.h>

int main() {
    int opcao_int;
    Operacao opcao;
    float a, b, resultado;

    do {
        printf("\n===========================\n");
        printf("CALCULADORA\n");
        printf("===========================\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacaoo\n");
        printf("4 - Divisao\n");
        printf("0 - Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao_int);

        opcao = (Operacao)opcao_int;

        if(opcao == SAIR) {
            printf("\nEncerrando a calculadora...\n");
            break;
        }

        if(opcao >= SOMA && opcao <= DIVISAO) {
            printf("Insira o primeiro numero: ");
            scanf("%f", &a);
            printf("Insira o segundo numero: ");
            scanf("%f", &b);
        }

        switch(opcao) {
            case SOMA:
                resultado = somar(a, b);
                printf("\n%.2f + %.2f = %.2f\n", a, b, resultado);
                break;

            case SUBTRACAO:
                resultado = subtrair(a, b);
                printf("\n%.2f - %.2f = %.2f\n", a, b, resultado);
                break;

            case MULTIPLICACAO:
                resultado = multiplicar(a, b);
                printf("\n%.2f * %.2f = %.2f\n", a, b, resultado);
                break;

            case DIVISAO:
                if(b == 0) {
                    printf("Erro: divisao por zero");
                }
                else {
                    resultado = dividir(a, b);
                    printf("\n%.2f / %.2f = %.2f\n", a, b, resultado);
                }
                break;

            default:
                printf("\nOpção invalida. Tente novamente.\n");
                break;
        }
    }
    while(opcao != SAIR);

    return 0;
}
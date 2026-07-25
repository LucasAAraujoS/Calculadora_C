#ifndef CALCULADORA_H
#define CALCULADORA_H

// Definição do Enum para mapear as opções
typedef enum {
    SOMA = 1,
    SUBTRACAO,
    MULTIPLICACAO,
    DIVISAO,
    SAIR = 0
} Operacao;

// Protótipos das funções
float somar(float a, float b);
float subtrair(float a, float b);
float multiplicar(float a, float b);
float dividir(float a, float b);

#endif
#include "calculadora.h"
#include <stdio.h>

float somar(float a, float b) {
    return a + b;
}
float subtrair(float a, float b) {
    return a - b;
}
float multiplicar(float a, float b) {
    return a * b;
}
float dividir(float a, float b) {
    if(b == 0) {
        printf("Erro: divisão por 0\n");
        return 0;
    }
    return a / b;
}
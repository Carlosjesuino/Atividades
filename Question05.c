#include <stdio.h>

int main() {
    
    float num1, num2;
  
    printf("Digite o primeiro número real: ");
    scanf("%f", &num1);

    printf("Digite o segundo número real: ");
    scanf("%f", &num2);

    
    float soma = num1 + num2;
    float subtracao = num1 - num2;
    float multiplicacao = num1 * num2;

    
    float divisao = (num2 != 0) ? (num1 / num2) : 0;

    
    printf("Soma: %.2f\n", soma);
    printf("Subtração: %.2f\n", subtracao);
    printf("Multiplicação: %.2f\n", multiplicacao);
    printf("Divisão: %.2f\n", divisao);

    return 0;
}

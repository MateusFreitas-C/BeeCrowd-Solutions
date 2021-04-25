/*
  Autor: Mateus Freitas;
  Nome: Cálculo Simples;
*/

#include <stdio.h>
 
int main() {
    int cod1, cod2, num1, num2;
    float valor1, valor2, valorTotal;

    scanf("%d%d%f", &cod1, &num1, &valor1);
    scanf("%d%d%f", &cod2, &num2, &valor2);

    valor1 = num1 * valor1;
    valor2 = num2 * valor2;
    valorTotal = valor1 + valor2;

    printf("VALOR A PAGAR: R$ %.2f\n", valorTotal);

    return 0;
}
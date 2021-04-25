/*
  Autor: Mateus Freitas;
  Nome: Salário com Bônus;
*/

#include <stdio.h>
 
int main() {
    char vendedor;
    double salarioFixo, vendas, total;
    
    scanf("%s", &vendedor);
    scanf("%lf%lf", &salarioFixo, &vendas);
    total = salarioFixo + (0.15*vendas);
    printf("TOTAL = R$ %.2lf\n", total);
    
 
    return 0;
}
/*
  Autor: Mateus Freitas;
  Nome: Aumento de Salário;
*/

#include <stdio.h>
 
int main() {
    float salarioBase, salarioReajustado, reajuste;

    scanf("%f", &salarioBase);

    if (salarioBase <= 400.00){
        reajuste = (salarioBase * 0.15);
        salarioReajustado = salarioBase + reajuste;
        printf("Novo salario: %.2f\n", salarioReajustado);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 15 %%\n");

    }else if (salarioBase <= 800){
        reajuste = salarioBase * 0.12 ;
        salarioReajustado = salarioBase + reajuste;
        printf("Novo salario: %.2f\n", salarioReajustado);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 12 %%\n");

    }else if (salarioBase <= 1200){
        reajuste = salarioBase * 0.10 ;
        salarioReajustado = salarioBase + reajuste;
        printf("Novo salario: %.2f\n", salarioReajustado);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 10 %%\n");

    }else if (salarioBase <= 2000){
        reajuste = salarioBase * 0.07 ;
        salarioReajustado = salarioBase + reajuste;
        printf("Novo salario: %.2f\n", salarioReajustado);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 7 %%\n");

    }else if (salarioBase > 2000){
        reajuste = salarioBase * 0.04 ;
        salarioReajustado = salarioBase + reajuste;
        printf("Novo salario: %.2f\n", salarioReajustado);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}
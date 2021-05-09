/*
  Autor: Mateus Freitas;
  Nome: Salário;
*/

#include <stdio.h>
 
int main() {
    int number, hora;
    float salario, salarioHora;
    
    scanf("%d", &number);
    scanf("%d%f", &hora, &salarioHora);
    salario = hora * salarioHora;
    
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salario);
    
    return 0;
}
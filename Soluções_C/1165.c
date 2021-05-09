/*
  Autor: Mateus Freitas;
  Nome: Número Primo;
*/

#include <stdio.h>
 
int main() {
    int n, i, t, j, resultado;

    scanf("%d", &t);
    resultado = 0;
    for(i = 1; i <= t; i++){
        scanf("%d", &n);

        for (j = 1; j < n; j++){
            if (n%j == 0){
                resultado = resultado + 1;
            }
        }
        if (resultado == 1){
            printf("%d eh primo\n", n);
        }else {
            printf("%d nao eh primo\n", n);
            }

        resultado = 0;
    }

return 0;
}
/*
  Autor: Mateus Freitas;
  Nome: Primo Rapido;
*/

#include <stdio.h>
 
int main() {
    unsigned long long x, resultado = 0;
    int n, i, j;

    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        resultado = 0;
        scanf("%llu", &x);

        for(j = 1; j < sqrt(x); j++){
            if (x%j == 0){
                resultado = resultado + 1;
            }if(resultado > 1){
                break;
            }
        }
        if (resultado == 1){
            printf("Prime\n");
        }else {
            printf("Not Prime\n");
        }

    }

return 0;
}
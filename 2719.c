/*
  Autor: Mateus Freitas;
  Nome: Quantas Viagens Fará o Noel?;
*/

#include <stdio.h>
 
int main() {
    int t, n, m, i, j, soma=0;
    unsigned short peso, viagens = 1;

    scanf("%d", &t);
    for(i = 1; i <= t; i++){
        scanf("%d%d", &n, &m);
       
        soma = 0;
        peso = 0;
        viagens = 1;
        for(j = 1; j <= n; j++){
            scanf("%hu", &peso);
            soma += peso;
            if (soma > m){
                ++viagens, soma = peso;
            }
        }

        printf("%hu\n", viagens);
    }

return 0;
}
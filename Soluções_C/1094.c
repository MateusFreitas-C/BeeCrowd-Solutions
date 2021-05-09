/*
  Autor: Mateus Freitas;
  Nome: Experiências;
*/

#include <stdio.h>
 
int main() {
    int n, q, coelho=0, rato=0, sapo=0, i, soma = 0;
    float pCoelho, pRato, pSapo;
    char tipo;

    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        scanf("%d%*c%c", &q, &tipo);
        soma = soma + q;

        if(tipo == 'C'){
            coelho += q;

        }else if(tipo == 'S'){
            sapo += q;

        }else if(tipo == 'R'){
            rato += q;
        }
    }
    printf("Total: %d cobaias\n", soma);
    printf("Total de coelhos: %d\n", coelho);
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n", sapo);

    pCoelho = coelho / (soma * 1.0);
    pRato = rato / (soma * 1.0);
    pSapo = sapo / (soma * 1.0);

    printf("Percentual de coelhos: %.2f %%\n", pCoelho * 100);
	printf("Percentual de ratos: %.2f %%\n", pRato * 100);
	printf("Percentual de sapos: %.2f %%\n", pSapo * 100);

return 0;
}
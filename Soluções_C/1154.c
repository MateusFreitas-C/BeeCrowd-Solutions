/*
  Autor: Mateus Freitas;
  Nome: Idades;
*/

#include <stdio.h>
 
int main() {
	int i, tentativas;
	double media, soma;

	soma = 0;
	tentativas = 0;
	do{
        scanf("%d", &i);
        if(i > 0){
            tentativas = tentativas + 1;
            soma = soma + i;
        }else{
        }

	}while (i>=0);

	media = soma / tentativas;
	printf("%.2lf\n", media);

	return 0;
}
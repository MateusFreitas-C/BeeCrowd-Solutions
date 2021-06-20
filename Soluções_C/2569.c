/*
  Autor: Mateus Freitas;
  Nome: A Bruxa do 7 x 1;
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int num1, num2, i = 0, soma, mult;
	char operador, vetor1[10], vetor2[10];

	scanf("%s %c %s", &vetor1, &operador, &vetor2);

	while(vetor1[i] != '\0'){
		if(vetor1[i] == '7'){
			vetor1[i] = '0';
		}

		i++;
	}

	num1 = atoi(vetor1);
	i = 0;

	while(vetor2[i] != '\0'){
		if(vetor2[i] == '7'){
			vetor2[i] = '0';
		}

		i++;
	}

	num2 = atoi(vetor2);

	if(operador == '+'){
		soma = num1 + num2;

		sprintf(vetor1, "%d", soma);
		i = 0;

		while(vetor1[i] != '\0'){
			if(vetor1[i] == '7'){
				vetor1[i] = '0';
			}

			i++;
		}

		soma = atoi(vetor1);

		printf("%d\n", soma);
	}else{
		mult = num1 * num2;

		sprintf(vetor1, "%d", mult);
		 i = 0;

		while(vetor1[i] != '\0'){
			if(vetor1[i] == '7'){
				vetor1[i] = '0';
			}

			i++;
		}

		mult = atoi(vetor1);

		printf("%d\n", mult);
	}

	return 0;
}
/*
  Autor: Mateus Freitas;
  Nome: Números Pares;
*/

#include <stdio.h>
 
int main() {
    int i, resto, x;

    for(i = 1; i <= 100; i = i + 1){

        resto = i%2;
        if(resto == 0){
           printf("%d\n", i);
        }
    }

	return 0;
}
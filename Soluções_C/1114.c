/*
  Autor: Mateus Freitas;
  Nome: Senha Fixa;
*/

#include <stdio.h>
 
int main() {
	int palpite, correto;

	correto = 2002;

	do{
        scanf("%d", &palpite);
        if(palpite !=  correto){
            puts("Senha Invalida");
    }}
	while (palpite != correto);

    puts("Acesso Permitido");

	return 0;
}

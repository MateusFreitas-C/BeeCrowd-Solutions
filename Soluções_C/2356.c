/*
  Autor: Mateus Freitas;
  Nome: Bactéria I;
*/

#include <stdio.h>
#include <string.h>

int main(){
	
    char d[110], s[110];
	
	while (scanf(" %s %s", d, s) != EOF){

	    if (!strstr(d, s)){
		    printf("Nao resistente\n");

        }else{
		    printf("Resistente\n");
        }
    }


return 0;
}
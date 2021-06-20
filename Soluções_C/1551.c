/*
  Autor: Mateus Freitas;
  Nome: Frase Completa;
*/

#include <stdio.h>

int main(){
    int n, contador = 0, i, j, letra;
    char frase[1002];
    scanf("%d%*c", &n);

    while(n--){
        fgets(frase, 1002, stdin);

        char alfabeto[27] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0' };

        for(i=0; frase[i] != '\0'; i++){

            for(j = 0; alfabeto[j] != '\0'; j++){
                
                if (frase[i] == alfabeto[j]){
                    letra = 1;
                    alfabeto[j] = '1';
                    break;
                }
            }
            if(letra == 1){
                contador ++;
            }
            letra = 0;
        }

        if(contador == 26){
            printf("frase completa\n");

        }else if(contador > 12){
            printf("frase quase completa\n");

        }else{
            printf("frase mal elaborada\n");
        }

        contador = 0;
    }

    return 0;
}
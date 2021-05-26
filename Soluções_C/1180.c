/*
  Autor: Mateus Freitas;
  Nome: Menor e Posição;
*/

#include <stdio.h>

int main(){
    int i, n[1000], aux=0, t;

    scanf("%d", &t);

    for(i = 0; i < t; i++){
        scanf("%d", &n[i]);
    }

    for(i = 1; i < t; i++){
        if(n[i] < n[aux]){
            aux = i;
        }
    }

    printf("Menor valor: %d\n", n[aux]);
    printf("Posicao: %d\n", aux);

return 0;
}

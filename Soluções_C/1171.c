/*
  Autor: Mateus Freitas;
  Nome: Frequência de Números;
*/

#include <stdio.h>

#define MAX 2001

int main(){
    int i, n[MAX] = {0}, t, aux;

    scanf("%d", &t);

    for(i = 0; i < t; i++){
        scanf("%d", &aux);
        n[aux]++;
    }

    for(i = 1; i < MAX; i++){
        if(n[i] > 0){
            printf("%d aparece %d vez(es)\n", i, n[i]);
        }
    }

return 0;
}

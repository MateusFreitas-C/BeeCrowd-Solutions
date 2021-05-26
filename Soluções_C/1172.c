/*
  Autor: Mateus Freitas;
  Nome: Substituição em Vetor I;
*/

#include <stdio.h>

int main(){
    int x[10], i;

    for(i = 0; i < 10; i++){
        scanf("%d", &x[i]);
    }
    
    for(i = 0; i < 10; i++){
        printf("X[%d] = %d\n", i, x[i] <=0 ? 1 : x[i]);
    }

return 0;
}

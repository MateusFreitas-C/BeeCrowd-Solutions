/*
  Autor: Mateus Freitas;
  Nome: Preenchimento de Vetor I;
*/

#include <stdio.h>

int main(){
    int n[10], i, x;

    scanf("%d", &x);

    for(i = 0; i < 10; i++){
        if(i==0){
            n[i] = x;
        }else{
            n[i] = n[i-1] *2;
        }
        printf("N[%d] = %d\n", i, n[i]);
    }

return 0;
}

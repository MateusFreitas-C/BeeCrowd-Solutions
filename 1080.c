/*
  Autor: Mateus Freitas;
  Nome: Maior e Posição;
*/

#include <stdio.h>
 
int main() {
    int n, i, a=0, posicao=0;

    for(i = 1; i <= 100; i++){
        scanf("%d", &n);
        
        if(a < n){
            a = n;
            posicao = i; 
        }
    }
    
    printf("%d\n", a);
    printf("%d\n", posicao);

    return 0;
}

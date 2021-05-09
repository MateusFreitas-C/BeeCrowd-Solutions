/*
  Autor: Mateus Freitas;
  Nome: Identificando o Chá;
*/

#include <stdio.h>
 
int main() {
    int t, i, p, contador=0;

    scanf("%d", &t);

    for(i = 1; i <= 5; i++){
        scanf("%d", &p);
        if(p == t){
            contador++;
        }
    }
    printf("%d\n", contador);

return 0;
}
/*
  Autor: Mateus Freitas;
  Nome: Jogo do Maior;
*/

#include <stdio.h>
 
int main() {
    int t, i, p1, p2, contador=0, contador2=0;

    do {
        scanf("%d", &t);
        for(i = 1; i <= t; i++){
            scanf("%d%d", &p1, &p2);
            if(p1 > p2){
                contador++;
            }if(p2 > p1){
                contador2++;
            }if(p1 == p2){
                contador = contador + 0;
                contador2 = contador2 + 0;
            }
        }
        if (t != 0){
            printf("%d %d\n", contador, contador2);
        }
        contador2 = 0;
        contador = 0;
    }while(t != 0);

return 0;
}
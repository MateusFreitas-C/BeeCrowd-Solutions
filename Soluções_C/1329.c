/*
  Autor: Mateus Freitas;
  Nome: Cara ou Coroa;
*/

#include <stdio.h>
 
int main() {
    int t, i, p, contador=0, contador2=0;

    do {
        scanf("%d", &t);
        for(i = 1; i <= t; i++){
            scanf("%d", &p);
            if(p == 1){
                contador2++;
            }else if(p==0){
                contador++;
            }
        }
        if (t != 0){
            printf("Mary won %d times and John won %d times\n", contador, contador2);
        }
        contador2 = 0;
        contador = 0;
    }while(t != 0);

return 0;
}

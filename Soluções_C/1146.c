/*
  Autor: Mateus Freitas;
  Nome: Sequências Crescentes;
*/

#include <stdio.h>
 
int main() {
    int x, i=1;

    do{
        scanf("%d", &x);

        for(i = 1; i <= x; i++){
            printf("%d", i);

            if (i != x){
                printf(" ");
            }else{
                printf("\n");
            }
        }

    }while (x != 0);

    return 0;
}

/*
  Autor: Mateus Freitas;
  Nome: Crescimento Populacional;
*/

#include <stdio.h>
 
int main() {
    int t, pa, pb, i, j=0;
    double g1, g2;


    scanf("%d", &t);
    for(i = 1; i <= t; i++){
        j = 0;
        scanf("%d%d%lf%lf", &pa, &pb, &g1, &g2);

        while(pa <= pb && j < 101){
            pa += (int)((pa*g1)/100);
            pb += (int)((pb*g2)/100);
            j++;
        }
        if(j > 100){
            printf("Mais de 1 seculo.\n");
        }else{
            printf("%d anos.\n", j);
        }
    }

return 0;
}
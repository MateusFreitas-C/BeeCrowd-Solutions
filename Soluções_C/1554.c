/*
  Autor: Mateus Freitas;
  Nome: Bilhar N+1;
*/

#include <stdio.h>

unsigned long Distancia(int xB, int yB, int x, int y){
    int nX, nY;

    nX = x - xB;
    nY = y - yB;

    return (nX*nX + nY*nY);
}

int main(void){
    int c, n, x, y, xB, yB, i, bola;
    unsigned long dist, distNova;

    scanf("%d", &c);

    while (c--){
        scanf("%d", &n);
        scanf("%d %d", &xB, &yB);

        scanf("%d %d", &x, &y);
        dist = Distancia(xB, yB, x, y);
        bola = i = 1;

        while (--n){
            i++;

            scanf("%d %d", &x, &y);
            distNova = Distancia(xB, yB, x, y);

            if (distNova < dist){
                bola = i;
                dist = distNova;
            }
        }

        printf("%d\n", bola);
    }

    return 0;
}

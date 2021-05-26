/*
  Autor: Mateus Freitas;
  Nome: Botas Perdidas;
*/

#include <stdio.h>

int main() {

    int n;
    while (scanf("%d", &n) != EOF) {

        int m[n], i, j, pares = 0;
        char l[n];

        for(i = 0; i < n; i++){
            scanf("%d %c", &m[i], &l[i]);
        }
        for(i = 0; i < n; i++){
            for (j = i+1; j < n; j++){
                if(m[i] == m[j] && l[i] != l[j] && l[i] != 'P' && l[j] != 'P'){
                    pares++;
                    l[i] = 'P';
                    l[j] = 'P';
                }
            }
        }

        printf("%d\n", pares);
    }

    return 0;
}
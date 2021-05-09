/*
  Autor: Mateus Freitas;
  Nome: Blobs;
*/

#include <stdio.h>
 
int main() {
    int n, i, dias;
    float comida, comidaRestante;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%f", &comida);

        for(dias = 0; comida > 1; dias++){
            comidaRestante = comida/2;
            comida = comidaRestante;
        }
        printf("%d dias\n", dias);
        comida = 0;
    }
    
    return 0;
}
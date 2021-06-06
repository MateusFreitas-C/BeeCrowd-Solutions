/*
  Autor: Mateus Freitas;
  Nome: Perguntas mais Frequentes;
*/

#include <stdio.h>

int main(){
    int n, k, p[1000], i, copia[1000], contador=0, resposta=0, j, m;

    while(1){
        scanf("%d %d", &n, &k);

        if(n == 0 && k == 0){
            break;
        }

        for(i = 0; i < n; i++){
            scanf("%d", &p[i]);
        }

        for(i = 0; i < n; i++){
            copia[i] = p[i];
        }

        for (i = 0; i < n; i++){
            contador = 0;

            for(j = 0; j < n; j++){
                
                if(p[i] == copia[j]){
                    copia[j] = 0;
                    contador++;
                }
                if(contador == k){
                    resposta++;

                    for (m = j+1; m < n; m++){
                        if(p[i] == copia[m]){
                            copia[m] = 0;
                        }
                    }
                    break;
                }
            }
            copia[i] = 0;
        }
        printf("%d\n", resposta);
        resposta = 0;
    }
    
    return 0;
}
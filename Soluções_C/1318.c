/*
  Autor: Mateus Freitas;
  Nome: Bilhetes Falso;
*/

#include <stdio.h>

int main(){
    int bilhetes, pessoas, i, contador=0, j, k;

    while(scanf("%d %d", &bilhetes, &pessoas) && bilhetes != 0 && pessoas != 0){

        int nBilhetes[pessoas], aux[pessoas];

        for(i = 0; i < pessoas; i++){
            scanf("%d", &nBilhetes[i]);
        }

        for(i = 0; i < pessoas; i++){
           aux[i] = nBilhetes[i];
        }

        for(i = 0; i < pessoas; i++){

            for(j = 0; j < pessoas; j++){

                if(i != j){
                    if(nBilhetes[i] == aux[j]){
                        contador++;
                        aux[j] = 0;

                        for (k = j; k < pessoas; k++){
							if (nBilhetes[i] == aux[k]){
								aux[k] = 0;
							}
                        }
                    break;
                    }
                }
                aux[i] = 0;
            }
        }
        printf("%d\n", contador);
        contador = 0;
    }

    return 0;
}

/*
  Autor: Mateus Freitas;
  Nome: Coleção de Pomekon;
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char pomekon[151][1001], tempPomekon[1001];
    int qPomekons, n, i, achou;

    scanf("%d", &n);

    qPomekons = 0;
    while(n--){
        scanf("%s", tempPomekon);

        achou = 0;
        for(i = 0; i < qPomekons; i++){
            if (strcmp(pomekon[i], tempPomekon) == 0){
                achou = 1;
                break;
            }
        }

        if (!achou){
            strcpy(pomekon[qPomekons], tempPomekon);
            qPomekons++;
        }
    }

    printf("Falta(m) %d pomekon(s).\n", 151 - qPomekons);

    return 0;
}

/*
  Autor: Mateus Freitas;
  Nome: A Biblioteca do Senhor Severino;
*/

#include <stdio.h>
#include <string.h>

char livro[1000][5];

void Orderna(int n){
    int i, j, ordena;
    char aux[5];

    for(i = 0; i < n; i++){

        for(j = i+1; j < n; j++){
            ordena = strcmp(livro[i], livro[j]);

            if(ordena > 0){
                strcpy(aux, livro[i]);
                strcpy(livro[i], livro[j]);
                strcpy(livro[j], aux);
            }
        }
    }
}


int main(){
    int i, n;

    while(scanf("%d", &n) != EOF){
        for (i = 0; i < n; i++){
            scanf("%s", livro[i]);
        }

        Orderna(n);

        for(i = 0; i < n; i++){
            puts(livro[i]);
        }
    }

return 0;
}
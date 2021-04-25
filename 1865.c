/*
  Autor: Mateus Freitas;
  Nome: Mjölnir;
*/

#include <stdio.h>
#include <string.h>

int main() {
    int c, forca, i;
    char nome[1000];

    scanf("%d", &c);
    for(i = c; i > 0; i = i - 1){
        scanf("%s%*c", &nome);
        scanf("%d", &forca);

        if(nome[0] == 'T'&& nome[1] == 'h' && nome[2] == 'o' && nome[3] == 'r'){
            puts("Y");
        }else{
            puts("N");
        }
    }

    return 0;
}
/*
  Autor: Mateus Freitas;
  Nome: Linha na Matriz;
*/

#include <stdio.h>

int main(){
    int l, i, j;
    double m[12][12], soma=0;
    char t;

    scanf("%d%*c", &l);
    scanf("%c", &t);

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%lf", &m[i][j]);
        }
    }

    for(j = 0; j < 12; j++){
        soma = soma + m[l][j];
    }

    if(t == 'S'){
        printf("%.1lf\n", soma);
    }else{
        printf("%.1lf\n", soma/12);
    }

    return 0;
}
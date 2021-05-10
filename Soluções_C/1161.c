/*
  Autor: Mateus Freitas;
  Nome: Soma de Fatoriais;
*/

#include <stdio.h>

unsigned long long Fatorial (int m){
    unsigned long long fatorial = 1;
    int i;

    for(i = 1; i <= m; i++){
        fatorial *= i;
    }
    return fatorial;
}

int main(void){
    int m, n;
    unsigned long long soma;

    while(scanf("%d %d", &m, &n)!= EOF){
        soma = Fatorial(m) + Fatorial(n);
        printf("%llu\n",soma);
    }

    return 0;
}

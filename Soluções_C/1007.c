/*
  Autor: Mateus Freitas;
  Nome: Diferença;
*/

#include <stdio.h>

int main() {
    int a, b, c, d, m;

    scanf("%d%d%d%d", &a, &b,&c, &d);
    m = (a*b) - (c*d);
    printf("DIFERENCA = %d\n", m);

    return 0;
}
/*
  Autor: Mateus Freitas;
  Nome: Cachorros-Quentes;
*/

#include <stdio.h>
 
int main() {
    int h, p;
    double m;

    scanf("%d%d", &h, &p);

    m = h*1.0 / p;

    printf("%.2lf\n", m);
 
    return 0;
}
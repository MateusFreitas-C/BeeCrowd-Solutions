/*
  Autor: Mateus Freitas;
  Nome: Media 1;
*/

#include <stdio.h>

int main() {
    float a, b, m;

    scanf("%f", &a);
    scanf("%f", &b);
    m = ((a*3.5) + (b*7.5)) / 11;
    printf("MEDIA = %.5f\n", m);


    return 0;
}
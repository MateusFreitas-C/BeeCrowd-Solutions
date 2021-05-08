/*
  Autor: Mateus Freitas;
  Nome: Área;
*/

#include <stdio.h>

int main(void){
    double a, b, c;
    double areaTri, areaCir, areaTrap, areaQuad, areaRet;

    scanf("%lf %lf %lf", &a, &b, &c);
    
    areaTri = (a * c) / 2;
    areaCir = (c * c) * 3.14159;
    areaTrap = ((a+b)*c) / 2;
    areaQuad = b * b;
    areaRet = a * b;
    printf ("TRIANGULO: %.3lf\n", areaTri);
    printf ("CIRCULO: %.3lf\n", areaCir);
    printf ("TRAPEZIO: %.3lf\n", areaTrap);
    printf ("QUADRADO: %.3lf\n", areaQuad);
    printf ("RETANGULO: %.3lf\n", areaRet);

    return 0;
}
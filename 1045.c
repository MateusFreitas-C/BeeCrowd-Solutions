/*
  Autor: Mateus Freitas;
  Nome: Tipos de Triângulos;
*/

#include <stdio.h>
 
int main() {
    double a, b, c, x;

    scanf("%lf%lf%lf", &a, &b, &c);

    if (a < b){
        x = a;
        a = b;
        b = x;

    }if (b < c){
        x = b;
        b = c;
        c = x;

    }if (a < b){
        x = a;
        a = b;
        b = x;
    }

    if (a >= b + c){
        printf("NAO FORMA TRIANGULO\n");
    }else if ((a*a) == (b*b) + (c*c)){
        printf("TRIANGULO RETANGULO\n");
    }else if ((a*a) > (b*b) + (c*c)){
        printf("TRIANGULO OBTUSANGULO\n");
    }else if ((a*a) < (b*b) + (c*c)){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (a == b && a== c){
        printf("TRIANGULO EQUILATERO\n");
    }else if (a == b || a == c || b == c){
        printf("TRIANGULO ISOSCELES\n");
    }

return 0;
}

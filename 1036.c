/*
  Autor: Mateus Freitas;
  Nome: Fórmula de Bhaskara;
*/

#include <stdio.h>
#include <math.h>

int main(void){
    double a, b, c;
    double delta, x1, x2, x;

    scanf("%lf %lf %lf", &a, &b, &c);
    
    delta = (b * b) - (4 * a * c);
    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);
    x = (-b / (2*a));

    if (a==0 || delta < 0){
        printf("Impossivel calcular\n");
    } else if (delta == 0){
        printf("R1 = %.5lf\n", x);
    } else if (delta > 0){
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("R1 = %.5lf\n", x1);
        printf("R2 = %.5lf\n", x2);
        }

    return 0;
}

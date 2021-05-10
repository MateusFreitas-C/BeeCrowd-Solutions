/*
  Autor: Mateus Freitas;
  Nome: Funções;
*/

#include <stdio.h>

float Rafel(x, y){

    float resultado = ((3*3) * (x*x)) + (y*y);
    return resultado;
}

float Beto(x, y){

    float resultado = (2 * (x*x)) + ((5*5)*(y*y));
    return resultado;
}

float Carlos(x, y){

    float resultado = (-100 * x) + (y*y*y);
    return resultado;
}

 int main() {
    int n, x, y;
    float r, b, c;

    scanf("%d", &n);

    while(n--){
        scanf("%d %d", &x, &y);
        r = Rafel(x, y);
        b = Beto(x, y);
        c = Carlos(x, y);

        if(r > c && r > b){
            puts("Rafael ganhou");

        }else if (b > c && b > r){
            puts("Beto ganhou");

        }else if (c > b && c > r){
            puts("Carlos ganhou");
        }
    }

return 0;
}

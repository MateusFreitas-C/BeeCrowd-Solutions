/*
  Autor: Mateus Freitas;
  Nome: Jornada nas Estrelas;
*/

#include <stdio.h>

int main() {

    int t, i;
    long long unsigned soma = 0, soma2 = 0;

    scanf("%d", &t);

    int carneiros[t], n[t];

    for (i = 0; i < t; i++) {
        scanf("%d", &carneiros[i]);
        n[i] = 0;
    }

    i = 0;
    while (i >= 0 && i < t) {

        if (carneiros[i] == 0){
            i--;

        }else{

            carneiros[i]--;
            n[i] = 1;

            if (carneiros[i] % 2 == 1){
                i--;

            }else{
                i++;
            }
        }
    }

    for (i = 0; i < t; i++) {

        soma += carneiros[i];

        if (n[i])
            soma2++;
    }

    printf("%llu %llu\n", soma2, soma);

    return 0;
}

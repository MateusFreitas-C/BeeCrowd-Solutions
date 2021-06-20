/*
  Autor: Mateus Freitas;
  Nome: LED;
*/

#include <stdio.h>

int main(){
    int n, contador = 0, i;
    char v [102];

    scanf("%d", &n);

    while(n--){
        scanf("%s", &v);

        for(i = 0; v[i] != '\0'; i++){

            if (v[i] == '1'){
                contador += 2;

            }else if (v[i] == '2' || v[i] == '3' || v[i] == '5'){
                contador += 5;

            }else if (v[i] == '4'){
                contador += 4;

            }else if(v[i] == '6' || v[i] == '9' || v[i] == '0'){
                contador += 6;

            }else if(v[i] == '8'){
                contador += 7;

            }else if (v[i] == '7'){
                contador += 3;
            }

        }
        printf("%d leds\n", contador);
        contador = 0;
    }

    return 0;
}

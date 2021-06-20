/*
  Autor: Mateus Freitas;
  Nome: Huaauhahhuahau;
*/

#include <stdio.h>

int main(){
    
    int i, j, tam, r = 1;
    char linha[52], vogais[52];
    scanf("%s", &linha);
    
    for (i = 0, j = 0; linha[i] != '\0'; i++){
        switch (linha[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vogais[j] = linha[i];
                j++;
                break;
        }
    }
    
    tam = j;
    for (i = 0; i < tam/2; i++, j--) {
        if (vogais[i] != vogais[j-1]) {
            r = 0;
            break;
        }
    }
    
    if(r){
        puts("S");
    }else{
        puts("N");
    }

    return 0;
}
/*
  Autor: Mateus Freitas;
  Nome: Andando no Tempo;
*/

#include <stdio.h>
 
int main() {
    unsigned long long x, resultado = 0;
    int n, i, j;

    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        resultado = 0;
        scanf("%llu", &x);

        for(j = 1; j < sqrt(x); j++){
            if (x%j == 0){
                resultado = resultado + 1;
            }if(resultado > 1){
                break;
            }
        }
        if (resultado == 1){
            printf("Prime\n");
        }else {
            printf("Not Prime\n");
        }

    }

return 0;
}

#include <stdio.h>
 
int main() {
    int a, b, c;

    scanf("%d %d %d",&a,&b,&c);

    if(a-b == 0 || a-c == 0 || (b-c == 0)){
        printf("S\n");
    }else if(a+b-c == 0 || b-a+c == 0 || c-a+b == 0){
        printf("S\n");
    }else if(a-b-c == 0 || b-a-c == 0 || c-a-b == 0){
        printf("S\n");
    }else{
        printf("N\n");
    }
    
return 0;
}

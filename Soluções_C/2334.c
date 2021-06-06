/*
  Autor: Mateus Freitas;
  Nome: Patinhos;
*/

#include <stdio.h>

int main(){
    unsigned long long int n;
    
    while(scanf("%llu", &n)){
        if(n == -1){
            break;
        }
        if(n == 0){ 
         printf("0\n");

        }else{
        printf("%llu\n", n - 1);
        }
    }
    return 0;
}
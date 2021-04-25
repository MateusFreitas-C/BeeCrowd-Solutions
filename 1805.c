/* 
Autor: Mateus Freitas; 
Nome: Soma Natural; 
*/ 

#include <stdio.h>
 
int main() {
    unsigned long long m, n, soma;

    scanf("%llu%llu", &m, &n);
    soma = ((m + n) * (n - m + 1)) / 2;
    printf("%llu\n", soma);

return 0;
}

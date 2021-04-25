#include <stdio.h>
 
int main() {
    int t, i, n, soma = 0, j;

    scanf("%d", &t);

    for(i = 1; i <= t; i++){
        scanf("%d", &n);

        for(j = 1; j <= n/2; j++){
            if(n % j == 0){
                soma += j;
            }
        }
        if(soma == n){
            printf("%d eh perfeito\n", n);
        }else{
            printf("%d nao eh perfeito\n", n);
        }
    soma = 0;
    }
    return 0;
}

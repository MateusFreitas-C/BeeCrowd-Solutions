#include <stdio.h>

int main(void){
    int m, n, soma, i, x;

    soma = 0;
    x = 0;

    do{
        scanf("%d%d", &m, &n);
        if (m > 0 && n > 0){
             if(m < n){
                for(i = m; i <= n; i++){
                    soma = soma + i;
                    printf("%d ", i);
                }
                printf("Sum=%d\n", soma);
                soma = 0;
            }else{
                for(i = n; i <= m; i++){
                    soma = soma + i;
                    printf("%d ", i);
                }
                printf("Sum=%d\n", soma);
                soma = 0;
            }
        }else {
            return 0;
    }
    }
    while(m > 0 || n > 0);

	return 0;
    
}

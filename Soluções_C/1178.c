#include <stdio.h>
 
int main() {
 
    double vetor [100];
    double x = 0;
    
    scanf("%lf", &x);
    
    for(int i = 0; i < 100; i++){
        vetor[i] = x;
        x = x/2;
        printf("N[%d] = %.4lf\n",i, vetor[i]);
    }
 
    return 0;
}
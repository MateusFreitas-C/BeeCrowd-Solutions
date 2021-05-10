/*
  Autor: Mateus Freitas;
  Nome: Fibonacci em Vetor;
*/

#include<stdio.h>

long long int Fib(long long int n){
    long long int j, a = 0, b = 1, c;

        for(j = 0 ; j < n ; j++ ){
            if (j <= 1){
                c = j;
          }
            else{
                c = a + b;
                a = b;
                b = c;
          }
       }
    return c;
}

int main(){
    long long int n, c;
    int i,t;

    scanf("%d", &t);

    for(i = 1; i <= t; i++){
        scanf("%lld",&n);
        n=n+1;
        printf("Fib(%lld) = %lld\n",n-1,Fib(n));
   }
   return 0;
}

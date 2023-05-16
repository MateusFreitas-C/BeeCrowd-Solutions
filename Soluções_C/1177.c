
#include <stdio.h>

int main()
{
    int vetor [1000];
    int t = 0, aux;
    
    scanf("%d", &t);
    
    aux = 0;
    
    for (int i = 0; i < 1000; i++){
        
        if(aux == t){
            aux = 0;
        }
            
        vetor[i] = aux;   
        aux++;
        printf("N[%d] = %d\n",i, vetor[i]);
    }

    return 0;
}


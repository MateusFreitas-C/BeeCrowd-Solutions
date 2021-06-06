/*
  Autor: Mateus Freitas;
  Nome: O Despertar da Força;
*/

#include <stdio.h>

int main(){
    int m, n, i, j, x=0, y=0;
    int t[1000][1000];

    scanf("%d %d", &m, &n);

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &t[i][j]);
        }
    }

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){

            if(t[i][j] == 42){

                if(t[i-1][j-1] == 7 && t[i-1][j] == 7 && t[i-1][j+1] == 7){

                    if(t[i][j-1] == 7 && t[i][j+1] == 7){
                        
                        if(t[i+1][j-1] == 7 && t[i+1][j] == 7 && t[i+1][j+1] == 7){
                            x = i+1;
                            y = j+1;
                        }
                    }
                }
            }
        }
    }
    printf("%d %d\n", x, y);

    return 0;
}
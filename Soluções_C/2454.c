/*
  Autor: Mateus Freitas;
  Nome: Flíper;
*/

#include <stdio.h>
 
int main() {
    int p, r;
    char c;

    scanf("%d%d", &p, &r);

    if (p == 0){
        printf("C\n");
    }else if (p == 1 && r == 0){
        printf("B\n");
    }else if (r == 1){
        printf("A\n");
    }

    return 0;
}
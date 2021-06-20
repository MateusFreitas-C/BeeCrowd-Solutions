/*
  Autor: Mateus Freitas;
  Nome: OBI URI;
*/

#include <stdio.h>
#include <string.h>

int main(){

  int n, i, t;
  char palavra[30];
  
  scanf("%d", &n);

  for ( i = 0; i < n; i++){

    scanf("%s", palavra);
    t = strlen(palavra);

    if (i != 0)
      printf(" ");
    if (t == 3 && palavra[0] == 'O' && palavra[1] == 'B')
      printf("OBI");
    else if (t == 3 && palavra[0] == 'U' && palavra[1] == 'R')
      printf("URI");
    else
      printf("%s", palavra);

  }
  printf("\n");

  return 0;
}
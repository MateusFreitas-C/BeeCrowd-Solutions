/*
  Autor: Mateus Freitas;
  Nome: Desafio de Bino;
*/
 
#include <stdio.h>
 
int Multiplo_2(int l){
    int m2=0;
    
    if(l % 2 == 0){
        m2++;
    }
    return m2;
}

int Multiplo_3(int l){
    int m3=0;
    if(l % 3 == 0){
        m3++;
    }
    return m3;
}

int Multiplo_4(int l){
    int m4=0;
    if (l % 4 == 0){
        m4++;
    }
    return m4;
}

int Multiplo_5(int l){
    int m5=0;
    if (l % 5 == 0){
        m5++;
    }
    return m5;
}

int main(){
    int n, l, i, m2=0, m3=0, m4=0, m5=0;

    scanf("%d", &n);

    for (i = 0; i < n; i++){
        scanf("%d", &l);

        m2 += Multiplo_2(l);
        m3 += Multiplo_3(l);
        m4 += Multiplo_4(l);
        m5 += Multiplo_5(l);
    }

    printf("%d Multiplo(s) de 2\n", m2);
    printf("%d Multiplo(s) de 3\n", m3);
    printf("%d Multiplo(s) de 4\n", m4);
    printf("%d Multiplo(s) de 5\n", m5);
    
return 0;
}
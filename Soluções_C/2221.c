/*
  Autor: Mateus Freitas;
  Nome: Batalha de Pomekons;
*/

#include <stdio.h>

double ValorGolpe(int ataque, int defesa, int nivel, int bonus){
    double valor;

    if (nivel %2 == 0){
        valor = (ataque + defesa) / 2 + bonus;
        return valor;
    }else{
        valor = (ataque + defesa) / 2;
        return valor;
    }

}

int main(void){
    int ataqueD, defesaD, nivelD, ataqueG, defesaG, nivelG, bonus, quant;
    double valorD, valorG;

    scanf("%d", &quant);

    while(quant--){
        scanf("%d", &bonus);
        scanf("%d %d %d", &ataqueD, &defesaD, &nivelD);
        scanf("%d %d %d", &ataqueG, &defesaG, &nivelG);

        valorD = ValorGolpe(ataqueD, defesaD, nivelD, bonus);
        valorG = ValorGolpe(ataqueG, defesaG, nivelG, bonus);

        if(valorD > valorG){
            printf("Dabriel\n");

        }else if(valorD < valorG){
            printf("Guarte\n");

        }else if (valorD == valorG){
            printf("Empate\n");
        }
    }

    return 0;
}

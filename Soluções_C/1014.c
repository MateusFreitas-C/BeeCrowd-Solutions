#include <stdio.h>

int main()
{
    int dist;
    double consumo, cons_Medio;
    
    scanf("%d", &dist);
    scanf("%lf", &consumo);
    
    cons_Medio = dist / consumo;
    
    printf("%.3lf km/l\n", cons_Medio);

    return 0;
}

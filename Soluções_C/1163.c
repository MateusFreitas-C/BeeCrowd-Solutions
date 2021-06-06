/*
  Autor: Mateus Freitas;
  Nome: Angry Ducks;
*/

#include <stdio.h>
#include <math.h>

#define PI 3.14159
#define G 9.80665

double CalculoDist(double vel, double ang, double h){
    double vel1, vel2, y, dist;

    y = vel * sin(ang * PI/180) * vel * sin(ang * PI/180) / (2 * G);
    vel1 = vel * sin(ang * PI/180);
    vel2 = vel * cos(ang * PI/180);
    dist = ((vel1 * vel2) / G) + (vel2 * (sqrt((2 * (h + y)) / G)));

    return dist;
}

int main(){
    double h, ang, dist, vel;
    int n, p1, p2, i;

    while(scanf("%lf", &h) != EOF){
        
        scanf("%d %d", &p1, &p2);
        scanf("%d", &n);

        for(i = 1; i <= n; i++){
            scanf("%lf %lf", &ang, &vel);

            dist = CalculoDist(vel, ang, h);
            
            if(dist >= p1 && dist <= p2){
                printf("%.5lf -> DUCK\n", dist);

            }else{
                printf("%.5lf -> NUCK\n", dist);
            }
        }
    }

    return 0;
}
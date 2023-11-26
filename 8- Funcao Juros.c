#include<stdio.h>

double juros(double c, double m, double t){
    double j = 0;
    double t2= t/100;
    j= c*m*t2;
    return j;
}


int main(){

    double c, m, t;
    scanf("%lf %lf %lf", &c, &m, &t);
    printf("%.2lf", juros(c, m, t));

    return 0;
}

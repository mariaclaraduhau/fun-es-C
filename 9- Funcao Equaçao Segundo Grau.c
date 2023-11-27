#include<stdio.h>
#include<math.h>

void equacao(int a, int b, int c){
    int delta = pow(b,2) - 4 * a *c;

    if(delta > 0){
        double x1 = (-(b) + sqrt(delta)) / (2 * a);
        printf("%.1lf\n", x1);
        double x2 = (- (b) - sqrt(delta)) / (2 * a);
        printf("%.1lf\n", x2);

    }else if (delta == 0){
        double x = ((- b) + delta) / (2 * a);
        printf("%.1lf\n", x);
    }else {
        printf("Nao existem raizes.\n");
    }
}


int main(){

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    equacao(a, b, c);

    return 0;
}

#include <stdio.h>

int delta(int a, int b, int c){
    int resultado;
    resultado= (b*b)-4*a*c;
    return(resultado);
}

int main() {

    int a, b, c, resultado;
    scanf("%d %d %d", &a, &b, &c);
    resultado = delta(a, b, c);
    printf("%d", resultado);

    return 0;
}

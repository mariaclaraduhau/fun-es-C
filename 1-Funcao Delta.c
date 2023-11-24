#include <stdio.h>

int maior(int a, int b, int c){
    int resultado;
    resultado= (b*b)-4*a*c;
    printf("%d", resultado);
    return(resultado);
}

int main() {

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    maior(a, b, c);

    return 0;
}


 

#include <stdio.h>

int maior(int x, int y){
    int resultado;
    if (x>y){
        resultado = x;
    }
    else{
        resultado = y;
    }
    return(resultado);
}

int main() {

    int x, y, resultado;
    scanf("%d %d", &x, &y);
    resultado = maior(x, y);
    printf("%d\n", resultado);

    return 0;
}

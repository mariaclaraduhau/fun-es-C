#include<stdio.h>

int somapar(int a, int b){
    int i, soma;

    for(i=a; i<=b; i++){
        if(i%2==0){
            soma+=i;
        }
    }
    return soma;
}


int main(){

    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", somapar(a, b));

    return 0;
}

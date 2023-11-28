#include<stdio.h>

int divisores(int n){
    int i;

    for(i=1; i<=n; i++){
        if(n%i == 0){
            printf("%d ", i);
        }
    }
    printf("\n");
}


int main(){

    int n=0;
    scanf("%d", &n);
    divisores(n);

    return 0;
}

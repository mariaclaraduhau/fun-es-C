#include <stdio.h>

int contagem(int n){
    int i;
    for (i=1; i<=n; i++){
        printf("%d\n", i);
    }
}

int main() {

    int n;
    scanf("%d", &n);
    contagem(n);

    return 0;
}

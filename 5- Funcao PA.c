#include<stdio.h>

int soma(int n, int a1, int an){
    int pa = 0;
    for (int i=0; i<n; i++){
        pa = ((i*(a1 + an)))/ 2;
        printf("%d\n", pa);
    }
    return  pa;
}


int main(){

    int n, a1, an;

    scanf("%d %d %d", &n, &a1, &an);
    soma(n, a1, an);

    return 0;
}

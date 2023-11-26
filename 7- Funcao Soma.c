#include<stdio.h>

int soma(int n1, int n2, int n3){
    int result = 0, maior=0, menor=0;
    
    if(n1>n2 && n1>n3){
        maior=n1;
    }
    else if(n1<n2 && n1<n3){
        menor=n1;
    }
    if(n2>n1 && n2>n3){
        maior=n2;
    }
    else if(n2<n1 && n2<n3){
        menor=n2;
    }
    if(n3>n1 && n3>n2){
        maior=n3;
    }
    else if(n3<n1 && n3<n2){
        menor=n3;
    }
    result= maior+menor;
    return  result;
}


int main(){

    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("%d", soma(n1, n2, n3));

    return 0;
}

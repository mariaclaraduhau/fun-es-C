#include<stdio.h>

int forma(int b, int h){
    int result = 0;
    if(b==h){
        result=1;
    }
    else{
        result=0;
    }
    return  result;
}


int main(){
    int b, h;
    scanf("%d %d", &b, &h);
    printf("%d", forma(b, h));

    return 0;
}

#include <stdio.h>

int s = 0, p = 0;

void somaprod(int a, int b);

void main(void){

    int a = 0, b = 0;

    printf("Digite dois nuhmeros: "); 
    scanf("%d %d%*c", &a, &b);

    somaprod(a,b);

    printf("Soma: %d\nProduto: %d\n", s, p);

}

void somaprod(int a, int b){
    s = a+b;
    p = a*b;
}
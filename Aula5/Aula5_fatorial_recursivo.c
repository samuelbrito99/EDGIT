#include <stdio.h>

int fatorial(int n);

int main(){

    int numero = 0;

    printf("Digite um nuhmero para saber o fatorial: ");
    scanf(" %d%*c", &numero);

    printf("%d! = %d", numero, fatorial(numero));

    return 1;
}

int fatorial(int n){
    if(n == 0)
        return 1;
    else
        return n * fatorial(n-1);
}
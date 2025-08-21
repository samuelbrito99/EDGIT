#include <stdio.h>

void imprime(float a);

void main(void){

    for(float i = 0; i < 20; i++)
        imprime(i*10);

}

void imprime(float a){
    static int n = 1;

    printf("%.2f ", a);
    
    if((n%5) == 0 ) printf("\n");
    n++;
}
#include <stdlib.h>
#include <stdio.h>

float media(int n, float* v);
float variancia(int n, float* v, float m);

int main(void){

    int n = 0;

    printf("### CÁLCULO MÉDIA e VARIÂNCIA ###\n");
    printf("Vamos trabalhar com quantos valores?\n");
    scanf(" %d%*c", &n);

    // Alocando memória dinamicamente.
    float* v = (float*)malloc(n*sizeof(float));

    if(!v){
        printf("\nNão temos mais memória...");
        exit(1);
    }

    for(int i = 0; i < n; i++){
        printf("Digite o número %d: ", i+1);
        scanf(" %f%*c", &v[i]);
    }

    printf("Média: %.2f\nVariância: %.2f", media(n, v), variancia(n, v, media(n,v)));

    free(v);

    return 1;
}


float media(int n, float* v){
    float med = 0.0F;

    for(int i = 0; i < n; i++)
        med += v[i];

    return med/(float)n;
}

float variancia(int n, float* v, float m){
    float var = 0.0F;

    for(int i = 0; i < n; i++)
        var += ((v[i]-m) * (v[i]-m));

    return var/(float)n;
}
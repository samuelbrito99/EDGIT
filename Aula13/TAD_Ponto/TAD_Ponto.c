#include "TAD_Ponto.h"
#include <stdlib.h>
#include <math.h>

PPonto pto_cria(float x, float y){
    PPonto pto = (PPonto)malloc(sizeof(Ponto));

    if(!pto){
        printf("Não conseguimos alocar dinamicamente o ponto...\n");
        exit(1);
    }

    pto->x = x;
    pto->y = y;

    return pto;
}

void pto_libera(PPonto p){
    free(p);
}

void pto_acessa(PPonto p, float* x, float* y){
    *x = p->x;
    *y = p->y;
}

void pto_atribui(PPonto p, float x, float y){
    p->x = x;
    p->y = y;
}

float pto_distanctia(PPonto p, PPonto q){
    return sqrt(pow(p->x - q->x,2)+pow(p->y - q->y,2))
}
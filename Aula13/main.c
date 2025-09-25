#include ".\TAD_Ponto\TAD_Ponto.h"

int main(int argc, char** argv){

    PPonto p1 = pto_cria(3.0, PI);
    PPonto p2 = pto_cria(0.0, 1.0);
    float x, y;

    printf("Temos os pontos...\n");
    pto_acessa(p1,&x,&y);
    printf("P1(%.2f, %.2f)\n", x, y);
    pto_acessa(p2,&x,&y);
    printf("P1(%.2f, %.2f)", x, y);

    printf("A distância entre P1 e P2 é de %.2f unidades.\n",pto_distanctia(p1, p2));

    return 0;
}
#include <stdio.h>

// Definição da estrutura ponto.
struct ponto {
    float x;
    float y;
};

typedef struct ponto Ponto;

// Protótipos de funções
void imprimir_ponto(Ponto* p_func);

int main(){
    Ponto p1;

    p1.x = 0.0;
    p1.y = 1.0;

    printf("Ente com valores de \"x\" e \"y\" do plano cartesiano separados por vírgula: ");
    scanf(" %f,%f", &p1.x, &p1.y);

   imprimir_ponto(&p1);

    return 1;
}

void imprimir_ponto(Ponto* p_func){

     printf("\n(%.2f, %.2f)\n", p_func->x, p_func->y);
}
#include <stdio.h>
#include <math.h>

// Definição da estrutura ponto.
struct ponto {
    float x;
    float y;
};

typedef struct ponto Ponto;

// Protótipos de funções
void imprimir_ponto(Ponto* p_func);
float distancia(Ponto* p, Ponto* q);
Ponto centro_geom(int n, Ponto* v);

int main(){
    Ponto pontos[] = {{0.0, 1.0}, {1.0, 0.0}, {3.0, 2.0}, {0.5, 5.0}, {2.5, 6.0}};

    printf("A distância entre P1 e P2: %.2f\n", distancia(&pontos[0], &pontos[1]));

    printf("O centro Geométrico deles é...");
    Ponto cg = centro_geom(5, pontos);

    imprimir_ponto(&cg);

    return 1;
}

void imprimir_ponto(Ponto* p_func){

     printf("\n(%.2f, %.2f)\n", p_func->x, p_func->y);
}

float distancia(Ponto* p, Ponto* q){
    return sqrt((p->x - q->x)*(p->x - q->x) + (p->y - q->y)*(p->y - q->y));
}

Ponto centro_geom(int n, Ponto* v){

    Ponto cg = {0.0, 0.0};

    for(int i = 0; i< n; i++)
    {
        cg.x += v[i].x;
        cg.y += v[i].y;
    }
    cg.x /= n;
    cg.y /= n;

    return cg;
}
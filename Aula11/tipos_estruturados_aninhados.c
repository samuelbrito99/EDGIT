#include <stdio.h>

// Definição da estrutura ponto.
typedef struct ponto {
    float x;
    float y;
} Ponto;


struct linha{
    Ponto p_ini;
    Ponto p_fim;
};

typedef struct linha Linha;

// Protótipos de funções
void imprimir_ponto(Ponto* p_func);
void imprimir_linha(Linha* l_func);

int main(){
    Linha l1;
    Linha l2 = {
                {1.2, 3.14},
                {3.12, 6.8}
            };

    printf("$$ Trabalhando com linha $$\n");
    
    printf("Ponto Inicial\n");
    printf("Ente com valores de \"x\" e \"y\" do plano cartesiano separados por vírgula: ");
    scanf(" %f,%f", &l1.p_ini.x, &l1.p_ini.y);
    
    printf("Ponto Final\n");
    printf("Ente com valores de \"x\" e \"y\" do plano cartesiano separados por vírgula: ");
    scanf(" %f,%f", &l1.p_fim.x, &l1.p_fim.y);

    printf("Linha 1:\n");
    imprimir_linha(&l1);
    printf("Linha 2:\n");
    imprimir_linha(&l2);

    return 1;
}

void imprimir_ponto(Ponto* p_func){

     printf("(%.2f, %.2f)", p_func->x, p_func->y);
}

void imprimir_linha(Linha* l_func){
    printf("Ponto inicial: ");
    imprimir_ponto(&l_func->p_ini);
    printf("| Ponto final: ");
    imprimir_ponto(&l_func->p_fim);
}
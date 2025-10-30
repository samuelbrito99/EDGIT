#include <stdio.h>
#include <stdlib.h>

#define RET 0
#define TRI 1
#define CIR 2

typedef struct retangulo{
    float b;
    float h;
} Retangulo;

typedef struct tiangulo{
    float b;
    float h;
} Triangulo;

typedef struct circulo{
    float r;
} Circulo;

typedef struct listahet{
    int tipo;
    void* info;
    struct listahet* prox;    
} Listahet;

Listahet* cria_ret(float b, float h);
Listahet* cria_tri(float b, float h);
Listahet* cria_cir(float r);

Listahet* lsthet_insere(Listahet* l, int tipo);
void lsthet_imprime(Listahet* l);

int main(){
    // Crio uma lista heterogênea vazia.
    Listahet* lista = NULL;

    lista = lsthet_insere(lista, TRI);
    lista = lsthet_insere(lista, RET);
    lista = lsthet_insere(lista, CIR);

    lsthet_imprime(lista);

    return 0;
}


Listahet* cria_ret(float b, float h){
    Retangulo* r = (Retangulo*)malloc(sizeof(Retangulo));
    if(!r){
        printf("Não temos memória para manipular um retângulo...\n");
        return NULL;
    }
    Listahet* p = (Listahet*)malloc(sizeof(Listahet));
    if(!p){
        printf("Não temos memória para alocar um elemento da lista encadeada...\n");
        free(r);
        return NULL;
    }
    // Guarda os valores que definem o retângulo.
    r->b = b;
    r->h = h;

    // Guarda os valores para manipularmos a lista encadeada que conterá o retângulo.
    p->tipo = RET;
    p->info = r;
    p->prox = NULL;

    // Retorna a referência do elemento da lista que conterá o retângulo.
    return p;
}

Listahet* cria_tri(float b, float h){
    Triangulo* t = (Triangulo*)malloc(sizeof(Triangulo));
    if(!t){
        printf("Não temos memória para manipular um triângulo...\n");
        return NULL;
    }
    Listahet* p = (Listahet*)malloc(sizeof(Listahet));
    if(!p){
        printf("Não temos memória para alocar um elemento da lista encadeada...\n");
        free(t);
        return NULL;
    }
    // Guarda os valores que definem o retângulo.
    t->b = b;
    t->h = h;

    // Guarda os valores para manipularmos a lista encadeada que conterá o retângulo.
    p->tipo = TRI;
    p->info = t;
    p->prox = NULL;

    // Retorna a referência do elemento da lista que conterá o retângulo.
    return p;
}

Listahet* cria_cir(float r){
    Circulo* c = (Circulo*)malloc(sizeof(Circulo));
    if(!c){
        printf("Não temos memória para manipular um Círculo...\n");
        return NULL;
    }
    Listahet* p = (Listahet*)malloc(sizeof(Listahet));
    if(!p){
        printf("Não temos memória para alocar um elemento da lista encadeada...\n");
        free(c);
        return NULL;
    }
    // Guarda os valores que definem o retângulo.
    c->r = r;

    // Guarda os valores para manipularmos a lista encadeada que conterá o retângulo.
    p->tipo = CIR;
    p->info = c;
    p->prox = NULL;

    // Retorna a referência do elemento da lista que conterá o retângulo.
    return p;
}

Listahet* lsthet_insere(Listahet* l, int tipo){
    Listahet* novo_elemento = NULL;
    float b = 0.0;
    float h = 0.0;
    float r = 0.0;

    switch(tipo){
        case RET:

            printf("### CRIANDO RETÂNGULO ###\n");
            printf("digite a base: ");
                scanf(" %f", &b);
            printf("digite a altura: ");
                scanf(" %f", &h);

            novo_elemento = cria_ret( b, h);
        break;
        case TRI:
            printf("### CRIANDO TRIÂNGULO ###\n");
            printf("digite a base: ");
                scanf(" %f", &b);
            printf("digite a altura: ");
                scanf(" %f", &h);

            novo_elemento = cria_tri( b, h);
        break;
        case CIR:
            printf("### CRIANDO CÍRCULO ###\n");
            printf("digite o raio: ");
                scanf(" %f", &r);

            novo_elemento = cria_cir( r);
        break;
        default: 
            printf("Tipo inválido...\n");
    }

    if(!novo_elemento){
        printf("Novo elemento não inserido na lista...\n");
    }
    else{
        // Caso a lista esteja vazia.
        if(l == NULL){
            l = novo_elemento;
        }
        // Caso a lista já contenha algum elemento.
        else{
            novo_elemento->prox = l;
            l = novo_elemento;
        }
    }

    return l;
}
void lsthet_imprime(Listahet* l){

    for(Listahet* p = l; p != NULL; p = p->prox)
        switch(p->tipo){
            case RET:
                Retangulo* ret = (Retangulo*)p->info;
                printf("\n### RETÂNGULO ###\n");
                printf("base: %.2f\n", ret->b);
                printf("altura: %.2f\n", ret->h);
            break;
            case TRI:
                Triangulo* tri = (Triangulo*)p->info;
                printf("\n### TRIÂNGULO ###\n");
                printf("base: %.2f\n", tri->b);
                printf("altura: %.2f\n", tri->h);
            break;
            case CIR:
                Circulo* cir = (Circulo*)p->info;
                printf("\n### CÍRCULO ###\n");
                printf("raio: %f\n", cir->r);
            break;
            default: 
                printf("Tipo inválido...\n");
        }
}
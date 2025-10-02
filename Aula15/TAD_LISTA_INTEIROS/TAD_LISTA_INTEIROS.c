#include "TAD_LISTA_INTEIROS.h"
#include <stdlib.h>
#include <stdio.h>

Lista* lst_cria(){
    return NULL;
}

Lista* lst_insere(Lista* l, int info){
    Lista* novo = (Lista*)malloc(sizeof(Lista));

    if(!novo){
        printf("Não temos mais memória para alocar na lista...\n");
        return l;
    }

    novo->info = info;
    novo->prox = l;

    return novo;
}

Lista* lst_imprime(Lista* l){

    for(Lista* p = l; p != NULL; p = p->prox)
        printf("info: %d\n", p->info);
        
}

Lista* lst_busca(Lista* l, int v){
    for(Lista* p = l; p != NULL; p=p->prox){
        if(p->info == v)
            return p;
    }
    return NULL;
}

int lst_vazia(Lista* l){
    return l == NULL;
}

void lst_libera(Lista* l){
    for(Lista* p = l; p != NULL; p=p->prox){
        Lista* t = p->prox;
        free(p);
        p=t;
    }
}
 
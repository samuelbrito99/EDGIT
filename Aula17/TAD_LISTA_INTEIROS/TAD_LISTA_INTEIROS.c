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

Lista* lst_retira(Lista* l, int v){
    Lista* ant = NULL;
    Lista* p = l;


    while(p != NULL && p->info != v){
        ant = p;
        p = p->prox;
    }

    if(p == NULL)
        return l;

    if(ant == NULL){
        l = p->prox; 
    }
    else{
        ant->prox = p->prox;
    }

    free(p);

    return l;
}

Lista* lst_insere_ordenado(Lista* l, int v){
    Lista* ant = NULL;
    Lista* p = l;

    while(p != NULL && p->info < v){
        ant = p;
        p = p->prox;
    }

    Lista* novo = (Lista*)malloc(sizeof(Lista));
    novo->info = v;

    if(ant == NULL){
        novo->prox = l;
        l = novo;
    }
    else{
        ant->prox = novo;
        novo->prox = p;
    }

    return l;
}

int lst_igual(Lista* l1, Lista* l2){
    Lista* p1;
    Lista* p2;

    for(p1=l1, p2=l2; p1 != NULL && p2 != NULL; p1 = p1->prox, p2 = p2->prox)
        if (p1->info != p2->info)
            return 0;

    return p1 == p2;
}
 
#include "TAD_LISTA_CONTATOS.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

Lista* lst_cria(){
    return NULL;
}

Lista* lst_insere(Lista* l, char* nome, char* tel){
    Lista* novo = (Lista*)malloc(sizeof(Lista));

    if(!novo){
        printf("Não temos mais memória para alocar na lista...\n");
        return l;
    }

    strcpy(novo->info.nome, nome);
    strcpy(novo->info.tel, tel);

    novo->prox = l;

    return novo;
}

Lista* lst_imprime(Lista* l){

    for(Lista* p = l; p != NULL; p = p->prox)
        printf("----------\nnome: %s\ntelefone: %s\n", p->info.nome, p->info.tel);
        
}

Lista* lst_busca(Lista* l, char* nome){
    for(Lista* p = l; p != NULL; p=p->prox){
        if(strcmp(p->info.nome, nome) == 0)
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

Lista* lst_retira(Lista* l, char* nome){
    Lista* ant = NULL;
    Lista* p = l;


    while(p != NULL && strcmp(p->info.nome, nome)){
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

Lista* lst_insere_ordenado(Lista* l, char* nome, char* tel){
    Lista* ant = NULL;
    Lista* p = l;

    while(p != NULL && (strcmp(p->info.nome, nome) > 0)){
        ant = p;
        p = p->prox;
    }

    Lista* novo = (Lista*)malloc(sizeof(Lista));
    
    strcpy(novo->info.nome, nome);
    strcpy(novo->info.tel, tel);

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
        if (strcmp(p1->info.nome, p2->info.nome) != 0)
            return 0;

    return p1 == p2;
}
 
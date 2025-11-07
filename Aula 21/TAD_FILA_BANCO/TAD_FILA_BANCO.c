#include "TAD_FILA_BANCO.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fila_vazia(Fila* f){
    return f->ini == NULL || f->fim == NULL;
}

Fila* fila_cria(){
    Fila* queue = (Fila*)malloc(sizeof(Fila));
    queue->ini = queue->fim = NULL;

    return queue;
}

void fila_enqueue(Fila* f, int prioridade, char* nome){
    Lista* elemento = (Lista*)malloc(sizeof(Lista));

    elemento->prio = prioridade;
    strcpy(elemento->nome, nome);
    elemento->prox = NULL;

    if(fila_vazia(f)){
        f->fim = f->ini = elemento;
    }
    else{
        f->fim->prox = elemento;
        f->fim = elemento;
    }
}

Lista* fila_dequeue(Fila* f){

    if(fila_vazia(f))
        return NULL;
    
    // Busca o elemento de maior prioridade
    Lista* p = f->ini;
    Lista* maior_prioridade = p;

    while(p != NULL){
        if(maior_prioridade->prio < p->prio)
            maior_prioridade = p;
        p = p->prox;
    }

    //Retira o elemento de maior prioridade da fila
    p = f->ini;
    Lista* ant = NULL;
    // .. do início da fila.
    if(maior_prioridade == f->ini){
        f->ini = p->prox; 
    }//.. do meio ou final da fila.
    else{    
        while(p != maior_prioridade){
            ant = p;
            p=p->prox;
        }
    
        ant->prox = p->prox;
    }
    
    return maior_prioridade;
}

void fila_free(Fila* f){
    Lista* aux = NULL;
    Lista* p = f->ini;
    while(p != NULL){
        aux = p;
        p=p->prox;
        free(aux);
    }

    free(f);
}

void fila_imprime(Fila* f){
    
    printf("\n### Fila do Banco ###\n");
    for(Lista* p = f->ini; p != NULL; p = p->prox){
        printf("#Prioridade: %d - %s\n", p->prio, p->nome);
    }
}
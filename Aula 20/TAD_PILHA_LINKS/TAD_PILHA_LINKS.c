#include "TAD_PILHA_LINKS.h"
#include <stdlib.h>
#include <string.h>

Pilha* pilha_cria(void){
    Pilha* nova_pilha = (Pilha*)malloc(sizeof(Pilha));
    nova_pilha->topo = NULL;
    return nova_pilha;
}

int pilha_vazia(Pilha* p){
    return p->topo == NULL;
}

char* pilha_pop(Pilha* p){
    if(pilha_vazia(p))
        return;
    Lista* topo_atual = p->topo;
    char* link_pop = topo_atual->link;

    p->topo = topo_atual->prox;
    free(topo_atual);

    return link_pop;
}

char* pilha_topo(Pilha* p){
    if(pilha_vazia(p))
        return NULL;
        
    return p->topo->link;
}

void pilha_push(Pilha* p, char* link){
    Lista* novo_topo = (Lista*)malloc(sizeof(Lista));
    novo_topo->link = (char*)malloc(sizeof(char)*(strlen(link)+1));
    strcpy(novo_topo->link, link);

    novo_topo->prox = p->topo;
    p->topo = novo_topo;
}

void pilha_libera(Pilha* p){
    Lista* i = p->topo;
    while( i != NULL){
        free(i->link);
        Lista* aux = i->prox;
        free(i);
        i = aux;
    }
}
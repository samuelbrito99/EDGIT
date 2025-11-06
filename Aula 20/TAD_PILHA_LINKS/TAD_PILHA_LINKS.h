#ifndef __TAD_PILHA_LINKS_H__
    #define __TAD_PILHA_LINKS_H__

    typedef struct lista{
        char* link;
        struct lista* prox;
    } Lista;

    typedef struct pilha{
        Lista* topo;
    } Pilha;

    Pilha* pilha_cria(void);
    void pilha_push(Pilha* p, char* link);
    char* pilha_pop(Pilha* p);
    char* pilha_topo(Pilha* p);
    int pilha_vazia(Pilha* p);
    void pilha_libera(Pilha* p);

    #include "TAD_PILHA_LINKS.c"
#endif
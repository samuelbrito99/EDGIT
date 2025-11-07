#ifndef __TAD_FILA_BANCO_H__
    #define __TAD_FILA_BANCO_H__

    typedef struct lista{
        int prio;
        char nome[51];
        struct lista* prox;
    } Lista;

    typedef struct fila{
        Lista* ini;
        Lista* fim;
    } Fila;

    Fila* fila_cria();
    void fila_enqueue(Fila* f, int prioridade, char* nome);
    Lista* fila_dequeue(Fila* f);
    void fila_free(Fila* f);
    void fila_imprime(Fila* f);

    #include "TAD_FILA_BANCO.c"
#endif
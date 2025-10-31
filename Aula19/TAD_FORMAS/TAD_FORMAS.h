#ifndef __TAD_FORMAS_H__
    #define __TAD_FORMAS_H__
    #include <stdio.h>
    #include <stdlib.h>

    typedef enum tipo {RET, TRI, CIR} Tipo;

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
        // int tipo;
        Tipo geometria;
        void* info;
        struct listahet* prox;    
    } Listahet;

    Listahet* cria_ret(float b, float h);
    Listahet* cria_tri(float b, float h);
    Listahet* cria_cir(float r);

    Listahet* lsthet_cria_vazia();
    Listahet* lsthet_deleta_formas(Listahet* l, Tipo geometria);
    Listahet* lsthet_libera(Listahet* l);
    Listahet* lsthet_busca_forma(Listahet* l, Tipo geometria);

    float lsthet_calc_area(void* info, Tipo geometria);
    float lsthet_area_total(Listahet* l);
    int lsthet_conta_tipo(Listahet* l, Tipo geometria);


    Listahet* lsthet_insere(Listahet* l, Tipo geometria);
    void lsthet_imprime(Listahet* l);
    void lsthet_imprime_tipo(Listahet* l, Tipo geometria);
    
    #include "TAD_FORMAS.c"
#endif
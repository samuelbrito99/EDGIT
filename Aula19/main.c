#include "TAD_FORMAS\TAD_FORMAS.h"

int main(){
    // Crio uma lista heterogênea vazia.
    Listahet* lista = NULL;

    lista = lsthet_insere(lista, TRI);
    lista = lsthet_insere(lista, RET);
    lista = lsthet_insere(lista, CIR);

    lsthet_imprime(lista);

    return 0;
}
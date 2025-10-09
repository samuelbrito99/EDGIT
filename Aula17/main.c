#include "TAD_LISTA_INTEIROS\TAD_LISTA_INTEIROS.h"

int main(){
    Lista* lista1 = lst_cria();
    Lista* lista2 = lst_cria();

    lista1 = lst_insere(lista1, 2);
    lista1 = lst_insere(lista1, 1);
    lista1 = lst_insere(lista1, 3);

    lista2 = lst_insere(lista2, 1);
    lista2 = lst_insere(lista2, 2);
    lista2 = lst_insere(lista2, 3);

    if(lst_igual(lista1, lista2))
        printf("São listas iguais...\n");
    else
        printf("São listas diferentes...\n");

    
    free(lista1);
    free(lista2);   

    return 1;
}
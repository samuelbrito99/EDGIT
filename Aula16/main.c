#include "TAD_LISTA_INTEIROS\TAD_LISTA_INTEIROS.h"

int main(){
    Lista* minha_lista = lst_cria();

    minha_lista = lst_insere(minha_lista, 1);
    minha_lista = lst_insere(minha_lista, 2);
    minha_lista = lst_insere(minha_lista, 3);
    minha_lista = lst_insere_ordenado(minha_lista, 4);

    if(!lst_vazia(minha_lista)){
        printf("\nLista não está vazia...\n");
        lst_imprime(minha_lista);
    }
    else{
        printf("\nLista está vazia...\n");
    }

    printf("O elemento 2...");
    
    if(lst_busca(minha_lista, 2))
        printf("está na lista.\n");
    else
        printf("não está na lista.\n");
    
    printf("Retirando o elemento 2...");

    minha_lista = lst_retira(minha_lista, 2);

    printf("\nO elemento 2...");
    
    if(lst_busca(minha_lista, 2))
        printf("está na lista.\n");
    else
        printf("não está na lista.");
    
    free(minha_lista);

    return 1;
}
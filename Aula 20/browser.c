#include <stdio.h>
#include "TAD_PILHA_LINKS\TAD_PILHA_LINKS.h"

int main(void){

    Pilha* UNDO = pilha_cria();
    Pilha* REDO = pilha_cria();
    char barra_de_enderecos[81];
    char* pagina_recuperada;

    // Insere um link na pilha UNDO
    printf("https://");
    scanf("%80[^\n]%*c", barra_de_enderecos);
    pilha_push(UNDO, barra_de_enderecos);
    printf("%s carregado...\n", barra_de_enderecos);

    // Insere outro link na pilha UNDO
    printf("https://");
    scanf("%80[^\n]%*c", barra_de_enderecos);
    pilha_push(UNDO, barra_de_enderecos);
    printf("%s carregado...\n", barra_de_enderecos);

    // Retornando para a página anterior.
    // Retira da pilha UNDO e insere na REDO.
    printf("Voltando <<\n");
    pagina_recuperada = pilha_pop(UNDO);
    pilha_push(REDO, pagina_recuperada);
    free(pagina_recuperada);
    strcpy(barra_de_enderecos, pilha_topo(UNDO));
    printf("%s carregado...\n", barra_de_enderecos);

    // Retornando para a página vazia.
    // Retira da pilha UNDO e insere na REDO.
    printf("Voltando <<\n");
    pagina_recuperada = pilha_pop(UNDO);
    pilha_push(REDO, pagina_recuperada);
    free(pagina_recuperada);
    if(!pilha_vazia(UNDO)){
        strcpy(barra_de_enderecos, pilha_topo(UNDO));
        printf("%s carregado...\n", barra_de_enderecos);
    }
    else{
        printf("Barra de endereços vazia...\n", barra_de_enderecos);
    }

    // Retornando para a primeira página.
    // Retira da pilha REDO e insere na UNDO.
    printf("Voltando <<\n");
    pagina_recuperada = pilha_pop(REDO);
    pilha_push(UNDO, pagina_recuperada);
    free(pagina_recuperada);
    strcpy(barra_de_enderecos, pilha_topo(UNDO));
    printf("%s carregado...\n", barra_de_enderecos);

    pilha_libera(UNDO);
    pilha_libera(REDO);

    return 0;
}
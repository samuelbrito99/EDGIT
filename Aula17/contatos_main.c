#include "TAD_LISTA_CONTATOS\TAD_LISTA_CONTATOS.h"

int main(){
    Lista* casamento = lst_cria();

    casamento = lst_insere_ordenado(casamento, "Kauã", "88999880099");
    casamento = lst_insere_ordenado(casamento, "Vitor", "88911880044");
    casamento = lst_insere_ordenado(casamento, "Francisco", "88978880033");

    lst_imprime(casamento);
    
    free(casamento);

    return 1;
}
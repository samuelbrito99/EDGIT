#include "TAD_FILA_BANCO\TAD_FILA_BANCO.h"
#include <stdio.h>


int main(){
    Fila* BancoBrasil = fila_cria();
    
    fila_enqueue(BancoBrasil, 1, "Valter");
    fila_enqueue(BancoBrasil, 1, "João");
    fila_enqueue(BancoBrasil, 2, "Raimundo");
    fila_enqueue(BancoBrasil, 1, "Maria");

    fila_imprime(BancoBrasil);
    
    // Desenfileirando Raimundo
    Lista* em_atendimento = fila_dequeue(BancoBrasil);

    printf("Prioridade %d - %s está em atendimento", em_atendimento->prio,em_atendimento->nome);
    free(em_atendimento);

    fila_imprime(BancoBrasil);

    fila_free(BancoBrasil);
    return 0;
}
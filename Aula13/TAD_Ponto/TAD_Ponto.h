#ifndef __TAD_PONTO_H__
    #define __TAD_PONTO_H__

    #define PI 3.14

    struct ponto{
        float x;
        float y;
    };

    typedef struct ponto Ponto;
    typedef Ponto* PPonto;


    /* Cria um Ponto
    *   Retorna o ponteiro para estrutura de um
    *   ponto alocado na memória e inicializado
    *   com os valores de x e y.
    */
   PPonto pto_cria(float x, float y);

   /*Libera um ponto
   *    Libera um ponto alocado dinamicamente.
   */
  void pto_libera(PPonto p);

    /*Acessa um ponto
    *   Acessa os valores de x e y de um ponto
    *   através de variáveis passadas por referência.
    */
    void pto_acessa(PPonto p, float* x, float* y);

    /* Atribui valores ao ponto
    *    Atualiza os valores de um ponto (x,y)
    *    através da passagem de parâmetros por valor.
    */
    void pto_atribui(PPonto p, float x, float y);

    /* Calcula distância entre pontos
    *   Retorna a distância euclidiana entre
    *   dois pontos quaisquer no plano cartesiano.
    */
   float pto_distanctia(PPonto p, PPonto q);


    #include "TAD_Ponto.c"
#endif
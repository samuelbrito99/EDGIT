#include <stdio.h>

int main(){

    int fatorial = 1, numero = 0, contador = 0;

    // Verificação do número para cálculo do fatorial: 
    // apenas números não negativos são aceitos.
    do{
        printf("Digite o nuhmero nao negativo para saber o fatorial: ");
        scanf(" %d", &numero);
    }while(numero < 0);
    
    // contador = numero;
    
    // while(contador > 1){
    //     fatorial *= contador;
    //     contador--;
    // }

    for(contador = numero; contador > 1; contador--)
        fatorial*= contador;

    printf("%d! = %d", numero, fatorial);

    return 0;
}
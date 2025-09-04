#include <stdio.h>
#include <stdlib.h>


void imprime(char* s);
int main(){
    // char nome[]="Raimundo Valter Costa Filho";
    char* nome = "Raimundo Valter Costa Filho";
    
    imprime(nome);

    return 1;
}

void imprime(char* s){
    
    for(int i = 0; s[i]!= '\0'; i++)
        printf("%c", s[i]);
    printf("\n");
}
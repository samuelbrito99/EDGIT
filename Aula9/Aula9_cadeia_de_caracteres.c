#include <stdio.h>
#include <stdlib.h>

void copia_string(char* string_origem, char* string_destino);
int comprimento(char* s);
void imprime(char* s);
int main(){
    
    char buffer_nome[81]={'\0'};
    
    printf("Digite seu nome: ");
    scanf(" %80[^\n]", buffer_nome);

    char* meu_nome = (char*)malloc((comprimento(buffer_nome)+1)*sizeof(char));

    copia_string(buffer_nome, meu_nome);

    printf("Os dados gravados são apenas \"%s\".", meu_nome);

    return 1;
}

void imprime(char* s){
    
    for(int i = 0; s[i]!= '\0'; i++)
        printf("%c", s[i]);
    printf("\n");
}


int comprimento(char* s){
    int n = 0;
    while(s[n] != '\0')
        n++;

    return n;
}

void copia_string(char* string_origem, char* string_destino){

    int i = 0;

    while(string_origem[i] != '\0'){
        string_destino[i] = string_origem[i];
        i++;
    }

    string_destino[i] = '\0';

    // for(int i = 0; string_origem[i] != '\0'; string_destino[++i] = '\0')
    //     string_destino[i] = string_origem[i];

}
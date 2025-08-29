#include <stdio.h>

char maiusculo(char c);
char minusculo(char c);
void converte_maiuscula(char* string);
void converte_minuscula(char* string);

int main(){
    char cidade[81];
    int numero = 0;

    printf("Digite o nome de sua ciade: ");
    scanf(" %80[^\n]", cidade);

    printf("Original: %s\n", cidade);
    
    converte_maiuscula(cidade);
    printf("Maiúscula: %s\n", cidade);

    converte_minuscula(cidade);
    printf("Minúscula: %s\n", cidade);
    
    return 1;
}

char minusculo(char c){

    if('A' <= c && c <= 'Z')
        c = c - 'A' +'a';
    
        return c;
}

char maiusculo(char c){
    if('a' <= c && c <= 'z')
        c = c - 'a' + 'A';
    
        return c;
}

void converte_maiuscula(char* string){
    int idx = 0;

    while(string[idx] != '\0'){
        string[idx] = maiusculo(string[idx]);
        idx++;
    }

}

void converte_minuscula(char* string){
    int idx = 0;

    while(string[idx] != '\0'){
        string[idx] = minusculo(string[idx]);
        idx++;
    }       
}
#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int comprimento(char* string);
char* duplica(char* linha);
int lenomes(char** alunos);
void imprimenomes(int n, char** alunos);
void liberanomes(int n, char** alunos);

int main(){
    char* alunos[MAX];

    int n = lenomes(alunos);
    imprimenomes(n, alunos);

    liberanomes(n, alunos);

    return 1;
}

int comprimento(char* string){
    int n = 0;

    while(string[n] != '\0')
        n++;

    return n;
}

char* duplica(char* linha){
    char* duplicata = (char*)malloc((comprimento(linha)+1)*sizeof(char));
    
    for(int i = 0; i< comprimento(linha); duplicata[++i]='\0')
        duplicata[i] = linha[i];
    
        return duplicata;
}

int lenomes(char** alunos){
    char linha[121];
    int n = 0;

    do{
        printf("Quantos alunos vamos registrar na turma?\n>>");
        scanf(" %d", &n);
    }while(n>MAX);

    for(int i = 0; i< n; i++){
        printf("Digite nome %d: ", i+1);
        scanf(" %120[^\n]",linha);
        alunos[i] = duplica(linha);    
    }

    return n;
}

void imprimenomes(int n, char** alunos){
    printf("## LISTA DE ALUNOS ##\n");

    for(int i = 0; i < n; i++)
        printf("%s\n", alunos[i]);
}

void liberanomes(int n, char** alunos){

    for(int i = 0; i < n; i++)
        free(alunos[i]);
        
}


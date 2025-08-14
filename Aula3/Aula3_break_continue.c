#include <stdio.h>

int main(){

    printf("Imprimindo a sequencia 0, 1, 2, 3, 4, parando no 5.\n");
    for(int i = 0; i < 10 ; i++){
        if(i == 5){
            printf("_ ");
            break;
        }


        printf("%d ", i);
    }    

    printf("Fim\n");

    printf("Imprimindo a sequencia 0, 1, 2,..., 9 pulando o 5.\n");
    for(int i = 0; i < 10 ; i++){
        if(i == 5){
            printf("_ ");
            continue;
        }

        printf("%d ", i);
    }    

    printf("Fim\n");

    return 0;
}
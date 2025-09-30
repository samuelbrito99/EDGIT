#include "TAD_Matriz\tAD_Matriz.h"

int main(int argc, char** argv){
    PMatrix A = mat_create(4,4);
    PMatrix B = mat_create(3,4);

    // ## Atribui valores à Matriz;

    for(int i = 0; i < mat_lines(A); i++)
        for(int j = 0; j < mat_columns(A); j++)
            mat_update(A, i, j, i+j+1);
    
    for(int i = 0; i < mat_lines(B); i++)
        for(int j = 0; j < mat_columns(B); j++)
            mat_update(B, i, j, i*j+1);
    
    printf("Imprimindo a matriz A...\n");
    mat_print(A);
    
    printf("\nImprimindo a matriz B...\n");
    mat_print(B);
    
    mat_delete(A);
    mat_delete(B);

    return 0;
}
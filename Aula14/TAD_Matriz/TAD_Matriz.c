
#include "TAD_Matriz.h"
#include <stdlib.h>
#include <stdio.h>

PMatrix mat_create(int lines, int columns){
    PMatrix mat = (PMatrix)malloc(sizeof(Matrix));
    int i = 0;
    
    if(!mat){
        printf("Não temos memória para alocar uma matriz...\n");
        return NULL;
    }

    mat->lines = lines;
    mat->columns = columns;

    mat->v = (float**)malloc(lines*sizeof(float*));

    if(!mat->v){
        free(mat);
        printf("Não temos memósia para alocar uma matriz...\n");
        return NULL;
    }

    for(i = 0; i< lines; i++){
        mat->v[i] = (float*)malloc(columns*sizeof(float));

        if(!mat->v[i])
            break;
    }

    if(i != lines){
        printf("Não temos memória para criar a matriz...\n");
        for(int j; j < i; j++)
            free(mat->v[j]);
        free(mat);

        return NULL;
    }

    return mat;
}

float mat_read(PMatrix mat, int i, int j){
    
    return mat->v[i][j];

}

void mat_update(PMatrix mat, int i, int j, float value){
    mat->v[i][j] = value;
}

void mat_delete(PMatrix mat){
    
    for(int i = 0; i< mat->lines; i++)
        free(mat->v[i]);
    
    free(mat);
}

void mat_print(PMatrix mat){

    for(int i = 0; i < mat->lines; i++){

        for(int j = 0; j < mat->columns; j++)
            printf("%8.2f", mat->v[i][j]);
        
        printf("\n");
    }

}

int mat_lines(PMatrix mat){
    return mat->lines;
}

int mat_columns(PMatrix mat){
    return mat->columns;
}

PMatrix mat_copy(PMatrix mat);

PMatrix mat_add(PMatrix mat_A, PMatrix mat_B);

PMatrix mat_sub(PMatrix mat_A, PMatrix mat_B);

PMatrix mat_mult(PMatrix mat_A, PMatrix mat_B);

PMatrix mat_trans(PMatrix mat);

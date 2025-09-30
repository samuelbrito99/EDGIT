#ifndef __TAD_Matriz_H__
    #define __TAD_Matriz_H__

    struct matrix{
        int lines;
        int columns;
        float** v;
    };

    typedef struct matrix Matrix;
    typedef Matrix* PMatrix;

    PMatrix mat_create(int lines, int columns);
    float mat_read(PMatrix mat, int i, int j);
    void mat_update(PMatrix mat, int i, int j, float value);
    void mat_delete(PMatrix mat);

    void mat_print(PMatrix mat);
    int mat_lines(PMatrix mat);
    int mat_columns(PMatrix mat);
    PMatrix mat_copy(PMatrix mat);
    PMatrix mat_add(PMatrix mat_A, PMatrix mat_B);
    PMatrix mat_sub(PMatrix mat_A, PMatrix mat_B);
    PMatrix mat_mult(PMatrix mat_A, PMatrix mat_B);
    PMatrix mat_trans(PMatrix mat);

    #include "TAD_Matriz.c"
#endif
#include <stdio.h>

int main(){

    int a = 0, b = 0, max = 0;

    printf("\nDigite dois nuhmeros separados por espaço: ");
    scanf(" %d %d", &a, &b);

    // if(a > b)
    //     max = a;
    // else    
    //     max = b;

    max = a > b ? a : b;
    
    printf("O maior eh: %d", max);

    return 0;
}
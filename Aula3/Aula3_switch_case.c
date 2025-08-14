#include <stdio.h>

int main(){
    float numero1 = 0., numero2 = 0.;
    char op = ' ';

    printf("Digite nuhmero operador numero: ");
    scanf(" %f %c %f", &numero1, &op, &numero2);

    switch(op){
        case '+':
            printf(" = %.2f\n", numero1 + numero2);
        break;
        case '-':
            printf(" = %.2f\n", numero1 - numero2);
        break;
        case '*':
            printf(" = %.2f\n", numero1 * numero2);
        break;
        case '/':
            printf(" = %.2f\n", numero1 / numero2);
        break;
        default:
            printf("\n Voceh nao digitou uma expressao vahlida...\n");

    }

    return 0;
}
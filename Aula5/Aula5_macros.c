
#include <stdio.h>

#define max(a,b) (((a)>(b))?a:b)
#define min(a,b) (((a)<(b))?a:b)
#define soma(a,b) a+b
#define f(x) (2*x*x+2*x+1)

// Não faz sentido.
#define fat(n) n*fat(n-1)


int main(){

    printf("Maior: %d\n", 2*max(10,100));//printf("Maior: %d\n", 2*10>100?10:100));
    printf("Soma: %d\n", soma(10,100));
    printf("f(%d) = %d\n",5, f(5));

    return 1;
}
#include <stdio.h>

char minusculo(char c);
char maiusculo(char c);

int digito(char c);

int main(){
    char c = 'a';

    printf("\n%c : %d\n", c, c);

    if(digito(c))
        printf("\n%c eh digito!\n", c);
    else
        printf("\n%c não eh digito...\n", c);

    return 1;
}

int digito(char c){
    
    if('0' <= c && c <= '9' )
        return 1;

    return 0;
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
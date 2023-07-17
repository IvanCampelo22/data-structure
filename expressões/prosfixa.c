#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "../pilhas/pilha.h"

char *prosfixa(char *e){
    static char s[256];
    int j=0;
    Pilha P = pilha(256);
    for (int i=0; e[i]; i++)
        if( isdigit(e[i]) ) s[j++] = e[i];
        else if(strchr("+*-/", e[i]) ) empilha(e[i], P);
        else if(e[i] == ')' ) s[j++] = desempilha(P);
    s[j]='\0';
    destroip(&P);
    return s;
    }

int prio(char o){
    switch(o){
        case '(': return 0;
        case '+':
        case '-': return 1;
        case '*':
        case '/': return 2;
    }
    return -1;
}

int main(void){
    char e[256];
    printf("Infixa?");
    gets(e);
    printf("Posfixa: %s\n\n", prosfixa(e));
    return 0;
}


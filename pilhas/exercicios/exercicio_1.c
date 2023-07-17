#include <stdio.h>
#include "../pilha.h"

int main(void){
    Pilha P = pilha(3);
    empilha(1, P);
    empilha(2, P);
    printf("%d\n", desempilha(P));
    printf("%d\n", desempilha(P));
    printf("%d\n", desempilha(P));
    return 0;
}

/* o retorn é de pilha vazia, porque ele empilhou dois elementos em um local que tinha espaço para três
    e desempilhou 3. Então retornou ao vazio
*/
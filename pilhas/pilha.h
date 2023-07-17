#include <stdio.h>
#include <stdlib.h>

typedef char Itemp;

typedef struct pilha {
    int max;
    int topo;
    Itemp *item;
} *Pilha;

Pilha pilha(int m){
    Pilha P = (Pilha) malloc(sizeof(struct pilha));
    P->max = m;
    P->topo = -1;
    P->item = (Itemp *) malloc(m*sizeof(Itemp));
    return P;
    
}

int vaziap(Pilha P){
    if( P->topo == -1) return 1;
}

int cheiap (Pilha P){
    if( P->topo == P->max-1) return 1;
    else return 0;
}

void empilha(Itemp x, Pilha P) {
    if (cheiap(P) ) {puts("pilha cheia!"); abort(); } 
    P->topo++;
    P->item[P->topo] = x;
    
}
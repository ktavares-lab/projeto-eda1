#include <stdio.h>
#include <stlib.h>
#include "ListaContatos.h"

struct elemento{
    CLIENTE dados;
    
    struct elemento *prox;
}

typedef struct elemento ELEM;

Lista*criaLista(){
    Lista *li; 
    li = (Lista*)malloc(sizeof(Lista));
    if(li != NULL){
        *li = NULL;
    }
    return li;
}

void abortaPrograma(){
    printf("ERRO! Lista nao foi alocada, ");
    printf("progama sera encerrado...\n\n\n");
    system("pause");
    exit(1);
}
void apagaLista(Lista *li){
    if(li != NULL){
        ELEM *no;
        while((*li) != NULL){
            no = *li;
            *li = (*li)->prox;
            free(no);
        }
        free(li);
    }
}

int tamanhoLista(Lista *li){
    if(li == NULL){
        abortaPrograma;
    }
    int acum = 0;
    ELEM *no = *li;
    while(no != NULL){
        acum++;
        no = no->prox;
    }
    return acum;
}
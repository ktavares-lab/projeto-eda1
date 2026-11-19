#include <stdio.h>
#include <stlib.h>
#include "ListaContatos.h"

int main(){
    Lista *li = NULL;

    if((li=criaLista())==NULL){
        abortaPrograma();
    }
    apagaLista(li);
    x = tamanhoLista(li);
    printf("O tomanho da lista e: %d", x);
}
    
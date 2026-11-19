#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LISTALIGADA_H
typedef struct cliente{
    int codigo;
    char nome[50];
    char tel_fixo[20];
    char tel_cel[20];
    char empresa[50];
    char email[50];
    char departamento[20];
} Cliente;

typedef struct elemento*Lista;  

Lista*criaLista();


void abortaPrograma();
void apagaLista(Lista *li);
int tamanhoLista(Lista *li);
#endif










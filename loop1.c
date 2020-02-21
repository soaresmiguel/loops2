#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
int x,tam;

char nome[30];
 
    printf("digite um nome\n");
    scanf(" %s",nome);
    tam = strlen(nome);
    printf("Esse nome tem %d\n\n",tam);
    for (x=1; x <= tam ; x++ ) {
        printf(" %s",nome);
    }

}

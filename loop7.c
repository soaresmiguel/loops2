#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int x = 0,consoante = 0, vogal = 0, other = 0, tam = 0, l ,i;
    char nome[30];
    char nome1[30];
    char apelido[30];
 
    printf("digite um nome: ");
    scanf(" %[^\n]",nome);

    tam = strlen(nome);
    printf("%s\n",nome);
    printf("Esse nome tem %d de letras\n\n",tam);

    for( x = 0 ; nome[x] != '\0' ; x++ ) {
        if (nome[x] == 'a' || nome[x] == 'A' || nome[x] == 'E' || nome[x] == 'e' || nome[x]== 'i'|| nome[x] == 'I' || nome[x] == 'o'|| nome[x] == 'O' || nome[x] == 'u' ||  nome[x] == 'U' ) {
            vogal++;
        } else if (nome[x] >= 'a' && nome[x] <= 'z' || nome[x] >= 'A' && nome[x] <= 'Z') {
             consoante++;
        }
  
    
       
    }

        printf("aeiou : %d \n",vogal);

        printf("bcdfghjklmnpqrstvwxyz : %d \n",consoante);
        
        printf("nome: \n");
        scanf("%s",nome1);
        printf("apelido\n");
        scanf("%s",apelido);

        printf("seu nome é %s %s\n",nome1,apelido);

        l=strlen(nome1);
        printf("reverse string: \n");
        for(i = l-1; i>= 0; i--)
        {
            printf("%c\n",nome1[i]);
        }

        }

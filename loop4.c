#include <stdio.h>

int main() {
    char ok[] = "apenas um teste realizado no dia 18 fevereiro de 2020";
    char s;
    int letras = 0;
   int counter = 0;
    for(s =0; ok[s] != '\0'; s++ ) {
        if (ok[s] >='0' && ok[s] <='9')
        counter++; 
          else if (ok[s]>='a' && ok[s]<= 'z' || ok[s]>='A' && ok[s]<='Z')
         letras++;
        
    }
    printf("tem numeros %d\n",counter);
    printf("tem letras:%d\n",letras);
}
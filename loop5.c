#include <stdio.h>
int main() {
    printf("introduza 10 numeros\n");
    
    int s[11];
    int maior = 0;

    for( int a =0; a<=10; a++ ) {
    scanf("%d",&s[a]);
    if (s[a] > maior) {
        maior = s[a];
    }
    }
printf("o maior numero introduzido foi ,,,, %d\n",maior);
for ( int a =0; a<=10; a++ ) {
    printf(" numero introduzidos: %d\n",s[a]);
}
}
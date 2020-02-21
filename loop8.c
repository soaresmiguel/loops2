#include <stdio.h>
int main() {

    printf("introduza 10 numeros\n");
    
    int s[10];
    

    for(int a = 0; a < 10; a++) {

        s[a] = a + 1;
     
    }

    for(int x = 0; x < 10; x++) {

        printf("%d", s[x]);

    }
    printf("\n");
    
return 0; 
}

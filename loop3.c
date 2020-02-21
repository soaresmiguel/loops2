#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main() {
    int x[20];
    int max =20;
    int min =10;
    int counter = 0;

    srand();

    for (int i = 0; i < 20; i++) {
        x[i] = rand % 30;

    }

    for (int i =0; i < 20; i++) {

        if (x[i] >= min && x[i] <= max) {
            counter++;
        }
    }
    printf(" %d",counter);
}
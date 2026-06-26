#include <stdio.h>

#define SIZE 5

int main() {
    int another[SIZE], numbers[SIZE];
    int rotacao, i;

    for (i = 0; i < SIZE; i++) {
        printf("Entre com um valor para a posição %d: ", i+1);
        scanf("%d", &numbers[i]);
    }


    printf("quanto é a rotação do array: ");
    scanf("%d", &rotacao);
    if (rotacao >= SIZE) {
        rotacao %= SIZE;
    }
 
    for (i = 0; i < SIZE; i++) {
        another[rotacao] = numbers[i];
        rotacao++;
        if (rotacao > (SIZE - 1)) {
            rotacao = 0;
        }
    }

    printf("\n\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d\t", another[i]);
    }

    return 0;
}
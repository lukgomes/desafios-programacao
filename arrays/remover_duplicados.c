/*Dado um array de 20 números inteiros (pode conter duplicatas), crie um novo array sem elementos repetidos e exiba o resultado. O array original pode não estar ordenado.*/
#include <stdio.h>

#define SIZE 20

int main() {
    int numbers[SIZE];
    int num[SIZE], i, j, cont= 0, aux;

    for (i = 0; i < SIZE; i++) {
        printf("Entre com um valor para a posição %d: ", i+1);
        scanf("%d", &numbers[i]);
    }
    
    for (i = 0; i < SIZE; i++) {
        aux = 0;
        for (j = 0; j < SIZE; j++) {
            if (num[j] == numbers[i]) {
                aux = '\0';
                break;
            }
            aux = numbers[i];
        }

        if (aux != '\0') {
            num[cont] = aux;
            cont++;
        }
    }


    printf("\n\n");
    for (i = 0; i < cont; i++) {
        printf("%d - ", num[i]);
    }
    printf("\n");
    return 0;
}
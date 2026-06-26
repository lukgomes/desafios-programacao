/*Implemente um programa que leia 15 números inteiros em um array e os ordene em ordem crescente usando o método de ordenação que preferir (Bubble Sort, Selection Sort, etc.). Exiba o array ordenado.*/
#include <stdio.h>

#define SIZE 5

int main() {
    int i, aux, j, numbers[SIZE];

    for (i = 0; i < SIZE; i++) {
        printf("Entre com um valor para a posição %d: ", i+1);
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < SIZE; i++) {
        printf("%d\t", numbers[i]);
    }
    printf("\n");

    
    for (i = 0; i < SIZE; i++) {
        for (j = i; j < SIZE; j++) {
            if (numbers[i] > numbers[j]) {
                aux = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = aux;
            }
        }    
    }

    for (i = 0; i < SIZE; i++) {
        printf("%d\t", numbers[i]);
    }
    printf("\n");
    

    return 0;
}
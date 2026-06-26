/*Escreva um programa que leia um array de 15 números inteiros e encontre o segundo maior elemento do array. O programa deve funcionar mesmo se houver números repetidos.*/
#include <stdio.h>

#define SIZE 15

int main() {
    int i, numbers[SIZE], max, another;

    for (i = 0; i < SIZE; i++) {
        printf("Entre com um valor para a posição %d: ", i+1);
        scanf("%d", &numbers[i]);
    }
    max = another = numbers[0];

    for (i = 0; i < SIZE; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < max && numbers[i] > another) {
            another = numbers[i];
        }
    }
    
    printf("%d é o maior numero.\n%d é o proximo maio numero\n", max, another);


    

    return 0;
}
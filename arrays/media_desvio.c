/*
Escreva um programa que leia n números (n ≤ 50) para um array, calcule a média aritmética e depois conte quantos números estão acima e quantos estão abaixo da média.*/
#include <stdio.h>

int main() {
    int i, size, total = 0, down = 0, up = 0;

    printf("informe a quantidade de numeros a serem informados: ");
    scanf("%d", &size);
    int numbers[size];

    for (i = 0; i < size; i++) {
        printf("Entre com um valor para a posição %d: ", i+1);
        scanf("%d", &numbers[i]);
        total += numbers[i];
    }
    total = total / size;

    for (i = 0; i < size; i++) {
        if (numbers[i] > total) {
            up++;
        }else {
            down++;
        }
    }

    printf("\n\nTotal %d\n", total);
    printf("\n\n%d valores acima da media\n%d avaixo da media.\n", up, down);

    return 0;
}
#include <iostream>
#include <math.h>

using std::cin;
using std::cout;

int main(int argc, char *argv[]) {
    float comprimento, haste, metade_comprimento, metragem_cabo;
    float total_cabo = 0;

    start:
    cout << "Informe o comprimento da ponte, entre 2 a 4 KM: ";
    cin >> comprimento;
    if (comprimento < 2 || comprimento > 4) {
        goto start;
    }
    haste = comprimento * 1000 / 20; //tamanho da haste de ferro em metros
    metade_comprimento = comprimento / 2 * 1000; //tamanho de metade da ponte em metros
    
    // Essas variaveis recebem a 5ª parte da ponte e da haste
    float parte_haste = haste / 5;
    float parte_comprimento = metade_comprimento / 5;

    for (int i = 0; i < 5; i++) {
        metragem_cabo = pow(haste, 2) + pow(metade_comprimento ,2);
        total_cabo = total_cabo + sqrtf(metragem_cabo);
        haste = haste - parte_haste;
        metade_comprimento = metade_comprimento - parte_comprimento;
    }

    total_cabo = total_cabo * 4;
    cout << "Serão utilizados um total de " << total_cabo << " metros gastos na ponte. \n";


    return 0;
}
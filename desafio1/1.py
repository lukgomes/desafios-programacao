#!/bin/env python3

import math

comprimento = float(input("Informe o comprimento da ponte, entre 2 a 4 Km. "))

total_cabo = 0

haste = comprimento * 1000 / 20
metade_comprimento = comprimento / 2 * 1000

parte_hastes = haste / 5
parte_comprimento = metade_comprimento / 5

for i in range(5):
    metragem_cabo = haste ** 2 + metade_comprimento ** 2
    total_cabo = total_cabo + math.sqrt(metragem_cabo)
    print(metragem_cabo)
    haste = haste - parte_hastes
    metade_comprimento = metade_comprimento - parte_comprimento


total_cabo *= 4
print(f"Serão utilizado um total de {total_cabo:.2f} metros gastos na ponte.\n")

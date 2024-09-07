#!/bin/env ruby

puts("Informe o comprimento da ponte, entre 2 a 4 km: ")
comprimento = gets.to_f

total_cabo = 0

haste = comprimento * 1000 / 20
metade_comprimento = comprimento / 2 * 1000

parte_hastes = haste / 5
parte_comprimento = metade_comprimento / 5

for i in 0..4
    metragem_cabo = haste ** 2 + metade_comprimento ** 2
    total_cabo = total_cabo + Math.sqrt(metragem_cabo)
    puts metragem_cabo
    haste -= parte_hastes
    metade_comprimento -= parte_comprimento
end

total_cabo *= 4
puts "Serão utilizados um total de " + total_cabo.ceil(2).to_s + " metros gastos na ponte"

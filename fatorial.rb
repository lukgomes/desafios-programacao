def fat(i)
    if i <= 1
        return 1
    else
        return i * fat(i - 1)
    end
end

for i in (1..7)
    puts(fat(i))
end

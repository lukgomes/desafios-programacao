def fat(i):
    if i <= 1:
        return 1
    else:
        return i * fat(i - 1)
    

for i in range(8):
    print(fat(i))

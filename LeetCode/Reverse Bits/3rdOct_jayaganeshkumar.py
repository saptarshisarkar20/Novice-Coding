def reverseBits(n):
    return sum([ ((n >> i - 1) & 1) << (32 - i) for i in range(1, 33) ])

print(reverseBits(int(input())))
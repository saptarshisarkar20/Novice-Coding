def reverse_bits(y):
    while len(y) < 32:
        y = '0' + y
    return str(int(y[::-1], base=2)) + " (" + y[::-1] + ")"

print(reverse_bits("00000010100101000001111010011100"))

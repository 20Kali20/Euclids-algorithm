def NWD(a, b):
    while b != 0:
        c = a%b
        a = b
        b = c
    return a

a = int(input('Enter number: '))
b = int(input('Enter number: '))
print(NWD(a, b))
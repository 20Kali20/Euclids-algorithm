def NWD(a, b):
    n = 1
    m = 0
    p = 0
    s = 1

    while b != 0:
        c = a % b
        q = a // b
        a = b
        b = c

        r = p
        t = s

        p = n - q * p
        s = m - q * s
        n = r
        m = t
    return (a, n, m)

a = int(input('Enter number: '))
b = int(input('Enter number: '))

print(NWD(a, b)[0], '=', NWD(a, b)[1], '*', a, '+', NWD(a, b)[2], '*', b)
a = input()
b = 0
for i in a:
    if ord(i) in range(ord('a'), ord('s')):
        b += (ord(i) - 1) % 3 + 1
    else:
        if i in ('s', 'z'):
            b += 4
        elif i in ('t', 'w', ' '):
            b += 1
        elif i in ('u', 'x'):
            b += 2
        elif i in ('v', 'y'):
            b += 3
print(b)

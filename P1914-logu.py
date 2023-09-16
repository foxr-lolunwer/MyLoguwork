n = int(input())
a = input()
b = ""
x = None
for i in a:
    x = ord(i) + n
    if x > ord('z'):
        x = x - ord('z') + ord('a') - 1
    x = chr(x)
    b += x
print(b)

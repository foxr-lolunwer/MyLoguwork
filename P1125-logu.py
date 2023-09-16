a = input()
b = {}
max_b = 0
min_b = 50
for i in a:
    if i not in b.keys():
        b.setdefault(i, 1)
    else:
        b[i] += 1
for i in b.keys():
    if b[i] > max_b:
        max_b = b[i]
    if b[i] < min_b:
        min_b = b[i]
n = max_b - min_b
list_n = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47]
if n in list_n:
    print("Lucky Word")
    print(n)
else:
    print("No Answer")
    print(0)

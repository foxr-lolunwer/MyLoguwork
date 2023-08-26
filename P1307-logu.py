n = input()
list_n = []
mark = 1
mark_2 = True
if n[0] == '-':
    mark = -1
for i in n:
    list_n.append(i)
list_n.reverse()
n = ''
for i in list_n:
    if i != '-':
        n += i
print(mark * int(n))

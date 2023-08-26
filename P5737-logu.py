n = input().split()
n = [int(n[0]), int(n[1])]
num = 0
year = []
for i in range(n[0], n[1] + 1):
    if (i % 4 == 0 and i % 100 != 0) or i % 400 == 0:
        year.append(i)
        num += 1
    else:
        continue
print(num)
for i in year:
    print(i, end=" ")

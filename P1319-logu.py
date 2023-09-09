a = input().split()
n = int(a[0])
num_list = []
for i in a[1:]:
    num_list.append(int(i))
str_num = ""
num = "0"
for i in range(len(num_list)):
    if i % 2 == 0:
        num = "0"
    else:
        num = "1"
    str_num += num * num_list[i]

for i in range(n * n):
    print(str_num[i], end="")
    if (i + 1) % n == 0:
        print()
        

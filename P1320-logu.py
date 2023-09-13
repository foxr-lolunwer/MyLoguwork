count = 0
num_list = input().strip()
outcome = ""
flag = 0
n = len(num_list)
for i in range(len(num_list) - 1):
    num_list += input().strip()
for i in num_list:
    if int(i) == flag:
        count += 1
    else:
        outcome += str(count) + " "
        count = 1
        if flag == 0:
            flag = 1
        else:
            flag = 0
outcome += str(count) + " "
print(str(n) + " " + outcome)

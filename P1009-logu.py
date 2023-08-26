count = 1
n = int(input())
num = 1
result_num = 0
for k in range(1, n + 1):
    num = 1
    for i in range(1, k + 1):
        num *= i;
    result_num += num
    # 1+1+
print(result_num)

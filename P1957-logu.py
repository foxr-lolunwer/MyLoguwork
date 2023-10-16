def operate_int(str_list):
    global last
    if len(str_list) == 3:
        last = str_list[0]
        return [str_list[0], int(str_list[1]), int(str_list[2])]
    else:
        return [last, int(str_list[0]), int(str_list[1])]


n = int(input())
num_str = []
out = []
last = 0
for i in range(n):
    num_str = operate_int(input().strip().split())
    if num_str[0] == 'a':
        out.append("%d+%d=%d" % (num_str[1], num_str[2], num_str[1] + num_str[2]))
    elif num_str[0] == 'b':
        out.append("%d-%d=%d" % (num_str[1], num_str[2], num_str[1] - num_str[2]))
    elif num_str[0] == 'c':
        out.append("%d*%d=%d" % (num_str[1], num_str[2], num_str[1] * num_str[2]))
    elif num_str[0] == 'd':
        out.append("%d/%d=%d" % (num_str[1], num_str[2], num_str[1] / num_str[2]))
    else:
        continue
for i in out:
    print(i)
    print(len(i))


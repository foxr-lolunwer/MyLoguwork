a = []
b = []
c = []
d = []
m_sum = 0
n = int(input())
for i in range(n):
    m = 0
    agree = input().split()
    a.append(int(agree[0]))
    b.append(int(agree[1]))
    c.append(int(agree[2]))
    d.append(a[i] + b[i] + c[i])
    for k in range(i):
        x = a[i] - a[k]
        y = b[i] - b[k]
        z = c[i] - c[k]
        v = d[i] - d[k]
        if abs(x) <= 5 and abs(y) <= 5 and abs(z) <= 5 and abs(v) <= 10:
            m_sum += 1
print(m_sum)

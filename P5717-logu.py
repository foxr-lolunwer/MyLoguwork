n = input().split()
n = [int(n[0]), int(n[1]), int(n[2])]
n.sort()
a = int(n[0])
b = int(n[1])
c = int(n[2])
if a + b <= c:
    print("Not triangle")
else:
    if a * a + b * b == c * c:
        print("Right triangle")
    elif a * a + b * b > c * c:
        print("Acute triangle")
    else:
        print("Obtuse triangle")
    if a == b:
        print("Isosceles triangle")
    if a == b and b == c:
        print("Equilateral triangle")

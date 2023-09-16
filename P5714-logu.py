x = input().split()
m = float(x[0])
n = float(x[1])
a = m / (n * n)
if a < 18.5:
    print("Underweight")
elif 18.5 <= a < 24:
    print("Normal")
elif a >= 24:
    print("%.6g\nOverweight" % a)

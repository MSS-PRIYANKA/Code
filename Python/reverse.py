n = int(input())
if n >= 0:
    print(str(n)[::-1])
elif n == -0:
    print("-0")
else:
    n= n * -1
    n = str(n)[::-1]
    n = int(n) * -1
    print(n)
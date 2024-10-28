num = int(input())
j = 1
for i in range(1, num + 1):
    print(" " * (num - j) + "*" * j)
    j += 1


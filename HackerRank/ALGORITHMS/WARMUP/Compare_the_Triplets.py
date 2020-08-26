a1, a2, a3 = raw_input().split()

b1 = input()
b2 = input()
b3 = input()

a, b = 0

if a1 > b1:
    a = a + 1
if a2 > b2:
    a = a + 1
if a3 > b3:
    a = a + 1
if b1 > a1:
    b = b + 1
if b2 > a2:
    b = b + 1
if b3 > a3:
    b = b + 1

print(a, b)

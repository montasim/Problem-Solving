number = int(input())

string = " "

for i in range(0, number):
    string = input()

acending = string.sort()
decending = string.reverse()

for i in range(0, number):
    print(acending[i])

for i in range(0, number):
    print(decending[i])

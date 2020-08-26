#    /* ------------------------------------------------------------------------------------------
#    Author    : Mohammad Montasim -Al- Mamun Shuvo
#    Copyright : Copyright 2020, Mohammad Montasim -Al- Mamun Shuvo
#    Email     : montasimmamun@gmail.com
#    Github    : https://github.com/montasimmamun/

#    Date      : Created on 21/07/2020
#    Version   : 1.0.1
#    ------------------------------------------------------------------------------------------*/

N = int(input())
phoneBook = dict()

for i in range(N):
    line = input()
    line = line.split()
    phoneBook[line[0]] = phoneBook.get(line[0], line[1])

while 1:
    try:
        q = input()
        if q in phoneBook:
            print(str(q) + "=" + str(phoneBook[q]))
        else:
            print("Not found")
    except:
        break

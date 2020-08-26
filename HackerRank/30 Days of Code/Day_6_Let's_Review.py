# ------------------------------------------------------------------------------------------
#    Author    : Mohammad Montasim -Al- Mamun Shuvo
#    Copyright : Copyright 2020, Mohammad Montasim -Al- Mamun Shuvo
#    Email     : montasimmamun@gmail.com
#    Github    : https://github.com/montasimmamun/

#    Date      : Created on 18/07/2020
#    Version   : 1.0.1
# ------------------------------------------------------------------------------------------

# Enter your code here. Read input from STDIN. Print output to STDOUT

number = int(input())

for i in range(0, number):

    string = input()
    print(string[::2], string[1::2])

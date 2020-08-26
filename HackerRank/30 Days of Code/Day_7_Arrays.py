#    /* ------------------------------------------------------------------------------------------
#    Author    : Mohammad Montasim -Al- Mamun Shuvo
#    Copyright : Copyright 2020, Mohammad Montasim -Al- Mamun Shuvo
#    Email     : montasimmamun@gmail.com
#    Github    : https://github.com/montasimmamun/

#    Date      : Created on 21/07/2020
#    Version   : 1.0.1
#    ------------------------------------------------------------------------------------------*/

# input the size of your list as an integer
n = int(input())

# user inputs the values
# strip() removes any leading or trailing whitespace
# split(' ') separates the values using space
# the values are then added to the arr list

arr = list(int(i) for i in input().strip().split(' '))

# loop through the reversed list and print the output
for num in reversed(arr):
    print(num, end=' ')

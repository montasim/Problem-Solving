#    /* ------------------------------------------------------------------------------------------
#    Author    : Mohammad Montasim -Al- Mamun Shuvo
#    Copyright : Copyright 2020, Mohammad Montasim -Al- Mamun Shuvo
#    Email     : montasimmamun@gmail.com
#    Github    : https://github.com/montasimmamun/

#    Date      : Created on 18/07/2020
#    Version   : 1.0.1
#    ------------------------------------------------------------------------------------------*/


n = int(input())

if (n % 2 != 0):
    print("Weird")
elif (n % 2 == 0):
    if (n > 1 and n < 6):
        print("Not Weird")

    elif (n > 5 and n < 21):
        print("Weird")

    else:
        print("Not Weird")
else:
    pass

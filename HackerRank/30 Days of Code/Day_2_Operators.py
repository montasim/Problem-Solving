#    /* ------------------------------------------------------------------------------------------
#    Author    : Mohammad Montasim -Al- Mamun Shuvo
#    Copyright : Copyright 2020, Mohammad Montasim -Al- Mamun Shuvo
#    Email     : montasimmamun@gmail.com
#    Github    : https://github.com/montasimmamun/

#    Date      : Created on 18/07/2020
#    Version   : 1.0.1
#    ------------------------------------------------------------------------------------------*/


mealCost = float(input())
tipPercent = int(input())
taxPercent = int(input())

tip = mealCost * tipPercent / 100
tax = mealCost * taxPercent / 100

totalCost = round(mealCost + tip + tax)

print(totalCost)

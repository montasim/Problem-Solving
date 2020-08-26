/*    ------------------------------------------------------------------------------------------
 #    Author    : Mohammad Montasim -Al- Mamun Shuvo
 #    Credits   : https://www.youtube.com/channel/UCeVMnSShP_Iviwkknt83cww
 #    Email     : montasimmamun@gmail.com
 #    Github    : https://github.com/montasimmamun/

 #    Date      : Created on 
 #    Version   : 1.0.1
 #    ------------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    double mealCost, tip, tax;
    int totalCost, tipPercent, taxPercent;

    scanf("%lf %d %d", &mealCost, &tipPercent, &taxPercent);

    tip = mealCost * tipPercent / 100;
    tax = mealCost * taxPercent / 100;

    totalCost = round(mealCost + tip + tax);

    printf("%d", totalCost);

    return 0;
}

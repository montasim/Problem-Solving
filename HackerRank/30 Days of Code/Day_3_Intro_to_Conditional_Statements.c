/*    ------------------------------------------------------------------------------------------
 #    Author    : Mohammad Montasim -Al- Mamun Shuvo
 #    Copyright : Copyright 2020, Mohammad Montasim -Al- Mamun Shuvo
 #    Email     : montasimmamun@gmail.com
 #    Github    : https://github.com/montasimmamun/

 #    Date      : Created on 19/07/2020
 #    Version   : 1.0.1
 #    ------------------------------------------------------------------------------------------*/



#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;

    scanf("%d", &n);

    if (n % 2 != 0)
    {
        printf("Weird");
    }
    else if (n % 2 == 0)
    {
        if (n > 1 && n < 6)
        {
            printf("Not Weird");
        }
        else if (n > 5 && n < 21)
        {
            printf("Weird");
        }
        else
        {
            printf("Not Weird");
        }
    }
    else
    {
        /* code */
    }

    return 0;
}

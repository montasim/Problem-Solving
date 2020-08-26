/*    ------------------------------------------------------------------------------------------
 #    Author    : Mohammad Montasim -Al- Mamun Shuvo
 #    Copyright : Copyright 2020, Mohammad Montasim -Al- Mamun Shuvo
 #    Email     : montasimmamun@gmail.com
 #    Github    : https://github.com/montasimmamun/

 #    Date      : Created on 19/07/2020
 #    Version   : 1.0.1
 #    ------------------------------------------------------------------------------------------*/


#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, i;
    scanf("%d", &n);

    for (i = 1; i < 11; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}

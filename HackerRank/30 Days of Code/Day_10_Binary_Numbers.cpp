/*    ------------------------------------------------------------------------------------------
 #    Author    : Mohammad Montasim -Al- Mamun Shuvo
 #    Copyright : Copyright 2020, Mohammad Montasim -Al- Mamun Shuvo
 #    Email     : montasimmamun@gmail.com
 #    Github    : https://github.com/montasimmamun/

 #    Date      : Created on 18/07/2020
 #    Version   : 1.0.1
 #    ------------------------------------------------------------------------------------------*/

#include <iostream>
using namespace std;
int main()
{
    int array[10], input, count = 0, i;

    cin >> input;

    for (i = 0; input > 0; i++)
    {
        array[i] = input % 2;
        input = input / 2;
    }

    for (i = i - 1; i >= 0; i--)
    {
        if (array[i] == 1)
        {
            if (array[i] == 1 && array[i + 1] == 1)
            {
                count += 2;
            }
            else
            {
                count = 1;
            }
        }
    }

    cout << count;
}
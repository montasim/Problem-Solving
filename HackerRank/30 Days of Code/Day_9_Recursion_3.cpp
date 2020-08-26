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
int factorial(int input)
{
    if (input == 1)
    {
        return 1;
    }
    else
    {
        int factorial = input;

        for (int i = 2; i < input; i++)
        {
            factorial = factorial * i;
        }

        return factorial;
    }
}

int main(int argc, char const *argv[])
{
    int input, result;

    cin >> input;

    cout << factorial(input);

    return 0;
}

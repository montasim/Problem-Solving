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
    int factorial = 1;
    for (int i = 1; i <= input; i++)
    {
        factorial = factorial * input;
        input--;
    }

    return factorial;
}

int main(int argc, char const *argv[])
{
    int input, result;

    cin >> input;

    cout << factorial(input);

    return 0;
}

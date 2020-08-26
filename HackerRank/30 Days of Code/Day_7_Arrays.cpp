/*    ------------------------------------------------------------------------------------------
 #    Author    : Mohammad Montasim -Al- Mamun Shuvo
 #    Copyright : Copyright 2020, Mohammad Montasim -Al- Mamun Shuvo
 #    Email     : montasimmamun@gmail.com
 #    Github    : https://github.com/montasimmamun/

 #    Date      : Created on 18/07/2020
 #    Version   : 1.0.1
 #    ------------------------------------------------------------------------------------------*/

#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int input;

    cin >> input;

    string inputArray[input];

    for (int i = 0; i < input; i++)
    {
        cin >> inputArray[i];
    }

    for (int i = input - 1; i > -1; i--)
    {
        cout << inputArray[i] << " ";
    }

    return 0;
}

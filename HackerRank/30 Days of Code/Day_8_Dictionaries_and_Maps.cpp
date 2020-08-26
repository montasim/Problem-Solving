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

    string inputName[input];
    string inputNumber[input];

    for (int i = 0; i < input; i++)
    {
        cin >> inputName[i] >> inputNumber[i];
    }

    string searchInput[input];
    for (int i = 0; i < input; i++)
    {
        cin >> searchInput[i];
    }

    for (int i = 0; i < input; i++)
    {
        if (inputName[i].compare(searchInput[i]) == 0)
        {
            cout << inputName[i] << "=" << inputNumber[i] << endl;
        }
        else
        {
            cout << "Not found" << endl;
        }
    }
    return 0;
}

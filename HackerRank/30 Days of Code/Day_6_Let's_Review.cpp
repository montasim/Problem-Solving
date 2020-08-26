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
int main()
{
    int n;

    cin >> n;

    string inputArray[n];

    for (int i = 0; i < n; i++)
    {
        cin >> inputArray[i];
    }

    for (int i = 0; i < n; i++)
    {
        string fromArray = inputArray[i];

        for (int i = 0; i < fromArray.length(); i++)
        {
            if (i % 2 == 0)
            {
                cout << fromArray[i];
            }
        }

        cout << " ";

        for (int i = 1; i < fromArray.length(); i++)
        {
            if (i % 2 != 0)
            {
                cout << fromArray[i];
            }
        }

        cout << endl;
    }

    return 0;
}

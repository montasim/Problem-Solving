#include <iostream>
using namespace std;
int main()
{
    int a[3] = {0, 0, 0},
        b[3] = {0, 0, 0},
        returnArray[2] = {0, 0};

    cin >> a[0] >> a[1] >> a[2];
    cin >> b[0] >> b[1] >> b[2];

    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            returnArray[0] = returnArray[0] + 1;
        }
        if (a[i] < b[i])
        {
            returnArray[i] = returnArray[1] + 1;
        }
        if (a[i] == b[i])
        {
            returnArray[0] = returnArray[0] + 0;
            returnArray[1] = returnArray[1] + 0;
        }
    }

    cout << returnArray[0] << " " << returnArray[1];

    return 0;
}

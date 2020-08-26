#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int input, tempSize;
    cin >> input;

    tempSize = input;
    long double array[tempSize];
    for (int i = 0; i < input; i++)
    {
        cin >> array[i];
    }

    long double sumArray = 0;
    for (int i = 0; i < input; i++)
    {
        sumArray = sumArray + array[i];
    }

    cout.precision(17);
    cout << sumArray << fixed;

    return 0;
}

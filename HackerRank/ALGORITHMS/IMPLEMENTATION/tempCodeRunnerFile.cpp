#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int n, p, totalMove, frontMove, middlePoint;

    cin >> n >> p;

    if (n == p)
    {
        cout << 0;
    }
    else
    {
        totalMove = n / 2;

        frontMove = p / 2;
        middlePoint = totalMove / 2;

        cout << min(frontMove, middlePoint) << endl;
    }

    return 0;
}
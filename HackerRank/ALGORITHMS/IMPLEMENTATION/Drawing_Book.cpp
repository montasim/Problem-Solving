#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int n, p, totalMove, frontMove, middlePoint;

    cin >> n >> p;

    totalMove = n / 2;
    cout << "total: " << totalMove << endl;

    frontMove = p / 2;
    cout << "frontMove: " << frontMove << endl;

    middlePoint = totalMove / 2;
    cout << "middlePoint: " << middlePoint << endl;

    cout << min(frontMove - 1, middlePoint - 1) << endl;

    return 0;
}
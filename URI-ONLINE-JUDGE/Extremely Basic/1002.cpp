#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double A, R;

    scanf("%lf", &R);

    A = 3.14159 * (R * R);

    printf("A=%.4lf\n", A);

    return 0;
}
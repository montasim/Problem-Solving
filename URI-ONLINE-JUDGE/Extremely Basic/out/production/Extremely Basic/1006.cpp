#include <iostream>
using namespace std;
int main()
{
    float A, B, C, MEDIA;

    cin >> A;
    cin >> B;
    cin >> C;

    MEDIA = ((A * 2) + (B * 3) + (C * 5)) / 10;

    printf("MEDIA = %.1lf\n", MEDIA);

    return 0;
}
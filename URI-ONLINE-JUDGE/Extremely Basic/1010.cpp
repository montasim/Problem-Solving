#include <iostream>
using namespace std;
int main()
{
    int CODE1, NOPRODUCT1;
    float PFOUNIT1;

    int CODE2, NOPRODUCT2;
    float PFOUNIT2;

    scanf("%d %d %f", &CODE1, &NOPRODUCT1, &PFOUNIT1);
    scanf("%d %d %f", &CODE2, &NOPRODUCT2, &PFOUNIT2);

    float TPRICE = ((NOPRODUCT1 * PFOUNIT1) + (NOPRODUCT2 * PFOUNIT2));

    printf("VALOR A PAGAR: R$ %.2f\n", TPRICE);
    

    return 0;
}
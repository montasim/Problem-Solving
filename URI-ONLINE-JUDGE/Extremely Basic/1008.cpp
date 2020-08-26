#include <iostream>
using namespace std;
int main()
{
    int NUMBER, WHOUR;
    float AMOUNTPH, SALARY;

    scanf("%d", &NUMBER);
    scanf("%d", &WHOUR);
    scanf("%f", &AMOUNTPH);

    SALARY = WHOUR * AMOUNTPH;

    printf("NUMBER = %d\n", NUMBER);
    printf("SALARY = U$ %.2f\n", SALARY);

    return 0;
}
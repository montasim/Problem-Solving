#include <iostream>
using namespace std;
int main()
{
    char NAME[10];
    float FSALARY, TSALES, TSALARY;

    fgets(NAME, sizeof(NAME), stdin);
    scanf("%f", &FSALARY);
    scanf("%f", &TSALES);

    TSALARY = (FSALARY + ((TSALES * 15) / 100));

    printf("TOTAL = R$ %.2f\n", TSALARY);
    

    return 0;
}
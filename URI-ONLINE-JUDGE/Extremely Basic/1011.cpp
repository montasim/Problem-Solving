#include <iostream>
using namespace std;
 
int main() { 
    float RADIUS;
    scanf("%f", &RADIUS);

    double VOLUME = (4.0 / 3) * 3.14159 * (RADIUS * RADIUS * RADIUS);

    printf("VOLUME = %.3f\n", VOLUME);

    return 0;
}
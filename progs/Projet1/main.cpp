#include <iostream>

using namespace std;

float sum(float, float);

int main()
{
    float a = 1.4;
    float b = 3.5;
    float c = sum(a, b);

    printf("c = %f\n", c);

    return 0;
}

float sum(float as, float bs){
    float cs = as + bs;
    return cs;
}

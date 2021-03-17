#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(int argc, char const *argv[])
{
    double x, y, z, r;
    
    scanf("%lf %lf %lf", &x, &y, &z);

    r = (x + x * (y+pow(z,2)) ) /((x+PI)*(y+PI)) ;

    printf("%.6lf\n", r);

    return 0;
}



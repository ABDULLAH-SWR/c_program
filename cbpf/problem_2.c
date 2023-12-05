//sphere
#include<stdio.h>
#define pi 3.14
int main()
{
    double r,area,volume;
    scanf("%lf",&r);
    area=4*pi*r*r;
    volume=4/3*pi*r*r*r;
    printf("Area = %.2lf\n",area);
    printf("Volume = %.2lf",volume);
    return 0;
}
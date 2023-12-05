//floating number separation
#include<stdio.h>
int main()
{
    double num,float_part;
    int int_part;
    printf("Enter a float value\n");
    scanf("%lf",&num);
    int_part=(int)num;
    printf("%d\n",int_part);
    float_part=num-(int)num;
    printf("%lf\n",float_part);
    return 0;
}
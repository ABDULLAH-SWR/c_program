//simple interest
#include<stdio.h>
int main()
{
    int p,n,r;
    double i;
    printf("Enter the principle = \n");
    scanf("%d",&p);
    printf("Enter the No of years = \n");
    scanf("%d",&n);
    printf("Enter rate of interest = \n");
    scanf("%d",&r);
    i=((double)p*n*r)/100;
    printf("Simple interest = %.2lf\n",i);
    return 0;
}
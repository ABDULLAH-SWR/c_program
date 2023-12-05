//percentage
#include<stdio.h>
int main()
{
    int num1,num2;
    double percentage;
    scanf("%d%d",&num1,&num2);
    percentage=((double)num1/num2)*100;
    printf("%d is %.2lf%% of %d\n",num1,percentage,num2);
    return 0;
}
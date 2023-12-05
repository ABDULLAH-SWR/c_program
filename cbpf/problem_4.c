//digit breakdown
#include<stdio.h>
int main()
{
    int num,h,t,u;
    scanf("%d",&num);
    u=num%10;
    num=num/10;
    t=num%10;
    h=num/10;
    printf("%d hundreds\n%d tens\n%d unints\n",h,t,u);
    return 0;
}
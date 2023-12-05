//four digit number sum of digit
#include<stdio.h>
int main()
{
    int num,digit,total=0;
    scanf("%d",&num);
    for(int i=0;i<4;i++)
    {
        digit=num%10;
        total=total+digit;
        num=num/10;
    }
    printf("%d",total);
    return 0;
}
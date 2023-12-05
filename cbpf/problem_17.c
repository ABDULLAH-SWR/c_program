//leap year 
#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year = \n");
    scanf("%d",&year);
    if(year%400==0)
    printf("Its a leap year\n");
    else if(year%4==0&&year%100!=0)
    printf("Its a leap year\n");
    else 
    printf("Its not a leap year\n");
    return 0;
}
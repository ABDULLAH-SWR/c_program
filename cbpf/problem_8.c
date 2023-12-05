//days conversion
#include<stdio.h>
int main()
{
    int day;
    printf("Enter the number of days = \n");
    scanf("%d",&day);
    int year,month,days;
    year=day/365;
    day=day-(year*365);
    month=day/30;
    days=day-(month*30);
    printf("Years: %d Month: %d Days: %d\n ",year,month,days);
    return 0;
}
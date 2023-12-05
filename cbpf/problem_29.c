#include<stdio.h>
int main(){
    int non_leap,leap=0,ref_year=1900,year;
    scanf("%d",&year);
    int dif=year-ref_year;
    while(ref_year<year){
        if(ref_year%4==0&&ref_year%100!=0)
        {
            leap++;
        }
        else if(ref_year%400 == 0)
        {
            leap++;
        }
        ref_year++;
    }
    int days=(dif-leap)*365+ leap*366;
    int day = days%7;
    switch (day)
    {
        case 0:
        printf("Monday\n");
        break;
        case 1:
        printf("Tuesday\n");
        break;
        case 2:
        printf("Wednesday\n");
        break;
        case 3:
        printf("Thursday\n");
        case 4:
        printf("Friday\n");
        case 5:
        printf("Saturday\n");
        break;
        case 6:
        printf("Sunday\n");
        break;
    default:
    printf("Something went wrong\n");
        break;
        return 0;
    }

}
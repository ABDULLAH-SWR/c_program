//total digits
#include<stdio.h>
int numCount(int num)
{
    int count=0;
    while(num != 0)
    {
        count++;
        num=num/10;
    }
    return count;
}
int main()
{
    int num;
    scanf("%d",&num);
    printf("Total digits = %d\n",numCount(num));
    return 0;
}
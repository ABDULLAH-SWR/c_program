//if number is divisible by 2,5
#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num%2==0&&num%5==0)
    {
        printf("Number is even and divisible by 5\n");  
    }
    else if(num%2!=0&&num%5!=0)
    printf("Number is not divisible by 2 and 5\n");
    else
    printf("Number is not divisible by any of them\n");
    return 0;
}
//swap without using temp
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers = \n");
    scanf("%d%d",&a,&b);
    printf("a=%d\nb=%d\n\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d\nb=%d\n",a,b);
    return 0;
}
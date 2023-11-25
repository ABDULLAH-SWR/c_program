#include<stdio.h>
int main()
{
    char country[]={'B','a','n','g','l','a','d','e','s','h'};
    printf("%s\n",country);
    for(int i=0;i<10;i++)
    {
        if(country[i]>=97&&country[i]<=122)
        {
            country[i]='A'+(country[i]-'a');
        }
    }
    printf("%s\n",country);
    //lower case
    for(int i=0;i<10;i++)
    {
        if(country[i]>=65&&country[i]<=90)
        {
            country[i]='a'+(country[i]-'A');
        }
    }
    printf("%s\n",country);
    return 0;
}
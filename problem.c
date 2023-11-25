#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    char word[num][100];
    for(int i=0;i<num;i++)
    {
        scanf("%s",word[i]);
    int length=0;
    for(int i=0;i<100;i++)
    {
        if(word[i]!=0)
        {
            length++;
        }
        else
        break;
    }
    if(length>10)
    {
        int middle=length-2;
        printf("%c%d%c\n",word[0],middle,word[length-1]);
    }
    else
    printf("%s",word);
    }
    return 0;
}
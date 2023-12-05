#include<stdio.h>
int main(){
char c;
scanf("%c",&c);
for(int i=7;i>=0;i--)
{
    printf("%d",(c>>i)&1);
}
printf("\n");
return 0;
}
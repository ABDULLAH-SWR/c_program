#include<stdio.h>
int main(){
    int num,digit,sum=0;
    scanf("%d",&num);
   /* if(num>=0&&num<=9){
        printf("sum = %d",num);
    }*/
    if(num<0){
        num=-1*num;
    }
    while (num>0){
        digit=num%10;
        num=num/10;
        sum+=digit;
    }
    printf("%d\n",sum);
    return 0;
}
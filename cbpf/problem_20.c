#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num<0)
    printf("Number is negative\n");
    else if(num>0)
    printf("Number is positive\n");
    else 
    printf("Number is zero\n");
    return 0;
}
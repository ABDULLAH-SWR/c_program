#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num>=80&&num<=100)
    printf("A+\n");
    else if(num>=75&&num<79)
    printf("A\n");
    else 
    printf("Value invalid\n");
}
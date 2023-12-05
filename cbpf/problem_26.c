#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num%2==0){
        if(num%4==0)
        printf("Number is even and divisible by 4\n");
        else 
        printf("Number is even but not divisible by 4\n");
    }
    else{
        if(num%3==0)
        printf("number is odd and divisible by 3\n");
        else 
        printf("number is odd but not divisible by 3\n");
    }
    return 0;
}
//binary to decimal
#include<stdio.h>
int main(){
    int num,decimal=0;
    scanf("%d",&num);
    int base = 1;
    while(num){
        int last_digit = num % 10 ;
        num = num / 10;
        decimal = decimal + last_digit*base;
        base = base * 2 ;

    }
    printf("%d\n",decimal);
    return 0;
}

//binary to octal
#include<stdio.h>
int main(){
    int binary,decimal=0,octal;
    scanf("%d",&binary);
    int last_digit;
    int temp = binary;
    int base =1;
    //binary to decimal
    while(temp){
        last_digit=temp % 10;
        temp = temp /10 ;
        decimal = decimal + last_digit*base;
        base = base * 2;
    }
    printf("%d\n",decimal);
    //decimal to octal
    int remainder[32],i=0;
    while(decimal){
        remainder[i] = decimal % 8 ;
        decimal = decimal / 10 ;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",remainder[j]);
    }
    printf("\n");
    return 0;
}
//binary to hexadecimal
#include<stdio.h>
int main(){
    //binary to decimal
    int num,decimal=0;
    scanf("%d",&num);
    int base = 1;
    while(num){
        int last_digit = num % 10 ;
        num = num / 10;
        decimal = decimal + last_digit*base;
        base = base * 2 ;

    }
    //decimal to hexa
     int remainder[32],i=0;
    while(decimal>0){
        remainder[i]=decimal%16;
        decimal=decimal/16;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        if(remainder[j]>9){
            if(remainder[j]==10){
                printf("%c",'A');
            }
                        if(remainder[j]==11){
                printf("%c",'B');
            }
                        if(remainder[j]==12){
                printf("%c",'C');
            }
                        if(remainder[j]==13){
                printf("%c",'D');
            }
                        if(remainder[j]==14){
                printf("%c",'E');
            }
                        if(remainder[j]==15){
                printf("%c",'F');
            }
        }
        else
        printf("%d",remainder[j]);
    }
    printf("\n");
}
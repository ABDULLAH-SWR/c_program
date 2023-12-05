//decimal to hexadecimal
#include<stdio.h>
int main(){
    int num,remainder[32],i=0;
    scanf("%d",&num);
    while(num>0){
        remainder[i]=num%16;
        num=num/16;
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
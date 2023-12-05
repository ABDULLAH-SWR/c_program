//frequency 
#include<stdio.h>
int main(){
    int num,last_digit;
    scanf("%d",&num);
    int fre[10];
    for(int i=0;i<10;i++){
        fre[i]=0;
    }
    int temp=num;
    while(temp!=0){
        last_digit = temp % 10;
        temp = temp / 10;
        fre[last_digit]++;
    }
    for(int i=0;i<10;i++){
        if(fre[i]!=0)
        printf("frequency of %d = %d\n",i,fre[i]);
    }
    return 0;
}
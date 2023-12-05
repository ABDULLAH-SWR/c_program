//decimal to binary
#include<stdio.h>
int main(){
    int num,remainder[32];
    scanf("%d",&num);
    int i=0;
    while(num>0){
        remainder[i]=num%2;
        num=num/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",remainder[j]);
    }
}
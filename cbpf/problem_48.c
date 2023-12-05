//number of digits
#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int counter=0;
    while(num>0){
        num=num/10;
        counter++;
    }
    printf("%d\n",counter);
    return 0;
}
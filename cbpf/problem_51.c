//factors of a number 
#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int last = num / 2;
    for(int i=1;i<=last;i++){
        if(num % i == 0){
            printf("%d\n",i);
        }
    }
    return 0;
}
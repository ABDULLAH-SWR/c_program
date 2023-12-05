#include<stdio.h>
#include<math.h>
int main(){
    int num;
    scanf("%d",&num);
    int flag=1;
    double sq=sqrt(num);
    for(int i=2;i<=sq;i++){
        if(num%i==0){
            flag=0;
        }
    }
    if(flag){
        printf("prime\n");
    }
    else {
        printf("non prime\n");
    }
    return 0;
}
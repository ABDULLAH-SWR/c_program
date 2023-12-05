#include<stdio.h>
int main(){
    int num,fac=1;
    scanf("%d",&num);
    for(int i=num;i>1;i--){
        fac=fac*i;
    }
    printf("%d\n",fac);
}
#include<stdio.h>
int main(){
    int base,power,result=1;
    scanf("%d%d",&base,&power);
    for(int i=0;i<power;i++){
        result=base*result;
    }
    printf("%d\n",result);
    return 0;
}
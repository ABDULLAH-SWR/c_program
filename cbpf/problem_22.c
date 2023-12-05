#include<stdio.h>
int main(){
 int a,b,c,max,low,max2;
    scanf("%d%d%d",&a,&b,&c);
    if(a >= b){
    max=a;
    low=b;
    }
    else{
    max=b;
    low=a;
    }
    if(c>=max)
    printf("%d %d %d\n",low,max,c);
    else if(c<=max&&c>=low){
        printf("%d %d %d\n",low,c,max);
    }
    else if(c<=low)
    printf("%d %d %d\n",c,low,max);
    return 0;
}
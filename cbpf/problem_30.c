#include<stdio.h>
int main(){
    int n,sum=0;
    double avg;
    scanf("%d",&n);
    for(int i=0;i<=n*2;i++){
        if(i%2!=0){
            sum+=i;
        }
    }
    printf("sum = %d\nAverage = %.2lf\n",sum,(double)sum/n);
    return 0;

}
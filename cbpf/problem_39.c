#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int prev1=1,prev2=0;
    if(n<1){
        printf("Invalid input\n");
    }
    else if(n==1){
        printf("%d",0);
    }
    else if(n==2){
        printf("%d %d\n",0,1);
    }
    else{
        printf("%d %d ",0,1);
    }
   for(int i=0;i<n-2;i++){
        int fn=prev1+prev2;
        prev2=prev1;
        prev1=fn;
        printf("%d ",fn);
    }
}
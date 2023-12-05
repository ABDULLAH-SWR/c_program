#include<stdio.h>
int main(){
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    if(num1<num2)
    printf("Up\n");
    else if(num2<num1)
    printf("Down\n");
    else if(num1==num2)
    printf("Equal\n");
    else 
    printf("Error\n");
    return 0;
}
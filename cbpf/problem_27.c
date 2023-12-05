#include<stdio.h>
int main(){
    int angle1,angle2;
    int angle=(180-(angle1+angle2));
    scanf("%d%d",&angle1,&angle2);
    if(angle1==90||angle2==90)
    printf("yes\n");
    else if(angle==90)
    printf("yes\n");
    else 
    printf("no\n");
    return 0;
}
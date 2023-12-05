#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    switch(c) {
        case '+':
        printf("Addition = %d\n",n1+n2);
        break;
        case '-':
        printf("substraction = %d\n",n1-n2);
        break;
        case '*':
        printf("Product = %d\n",n1*n2);
        break;
        case '/':
        printf("Division %.2lf\n",(double)n1/n2);
        break;
        default:
        printf("Something went wrong!\n");
        break;
    }
}
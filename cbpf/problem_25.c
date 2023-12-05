#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if(c>='A'&& c<='Z')
    printf("An uppercase letter\n");
    else if(c>='a'&&c<='z')
    printf("A lowercase letter\n");
    else if(c>=48&&c<=57)
    printf("A digit\n");
    else
    printf("I dont know\n");
}
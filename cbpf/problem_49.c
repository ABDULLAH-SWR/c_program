//palindrome
#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    //reverse the number
    int temp=num;
    int rev = 0;
    while (temp>0)
    {
        rev = rev*10+temp%10;
        temp = temp /10;
    }
    printf("%d\n",rev);
    if(num==rev){
        printf("Palindrome\n");
    }
    else{
        printf("Not a palindrome\n");
    }
    return 0;
    
}
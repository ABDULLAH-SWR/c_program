#include<stdio.h>
#include<math.h>
int is_prime(int num);
int main()
{
    int num;
    while(1)
    {
        printf("Enter a number( 0 to exit) = \n");
        scanf("%d",&num);
        if(num==0)
        break;
        if(is_prime(num)==1)
        {
            printf("Its a prime number\n");
        }
        else
        {
            printf("Its not a prime number\n");
        }
    }
}
int is_prime(int num)
{
    int root;
    if(num==2)//if the function is equal to two its prime
    {
        return 1;
    }
    if(num%2 == 0)//if its even its not prime
    {
        return 0;
    }
    root = sqrt(num);
    for(int i=3;i<=root;i+=2)//if its divisible by odd number its not prime
    {
        if(num%i == 0)
        {
            return 0;
        }
    }
    return 1;
}
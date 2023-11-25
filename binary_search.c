//binary search
#include<stdio.h>
int main()
{
    int ara[10]={21,25,26,29,36,38,39,40,45,50};
    int mid_index,low_index=0,high_index=9,num;
    scanf("%d",&num);
    while(low_index<=high_index)
    {
        mid_index=(low_index+high_index)/2;
        if(ara[mid_index]==num)
        {
            break;
        }
        if(num>ara[mid_index])
        {
            low_index=mid_index+1;
        }
        else
        {
            high_index=mid_index-1;
        }
    }
    if(low_index>high_index)
    printf("%d is not in the array",num);
    else
    printf("%d is found in the array,Its the %dth element of the array\n",ara[mid_index],mid_index);
    return 0;
}
//previous and next letter
#include<stdio.h>
int main()
{
    char c;
    printf("Enter a letter = \n");
    scanf("%c",&c);
    char previous=--c;
    c=++c;
    char next=++c;
    int p_ascii,n_ascii;
    // p_ascii=previous;
    // n_ascii=next;
    printf("Previous = %c\nNext = %c\n",previous,next);
    printf("Previous ascii = %d\nNext ascii = %d",previous,next);
    return 0;
}
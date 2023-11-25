#include <stdio.h>

int main() {
    int n, i,length;
    printf("Enter the number of words: ");
    scanf("%d", &n);
    char words[n][100];
    for (i = 0; i < n; i++) {
        printf("Enter word %d: ", i + 1);
        scanf("%s", words[i]);
    }
    for(i=0;i<n;i++)
    {
        int length=0;
        if(words[i]!=0)
        {
            length++
        }
        if(length>=10)
        {
            int middle=length-2;
            printf("%c%d%c\n",words[0],middle,words[length-1]);
        }
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
//is program started serves as a flag to determine whether a program is processing or not
int main()
{
    char s[1002],word[100];
    int i,j,length,is_word_started=0;
    fgets(s,sizeof(s),stdin);
    length=strlen(s);
    for(i=0,j=0;i<length;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            if(is_word_started==0)//0 means it is the start of a new word
            {
                is_word_started=1;//its started to process a word
                word[j]='A'+(s[i]-'a');
                j++;
                 //printf("%d\n",j);
            }
            else
            {
                //printf("%d\n",j);
                word[j]=s[i];
                j++;
            }
        }
        else if(s[i]>='A'&& s[i]<='Z')
        {
            if(is_word_started==0)
            {
                is_word_started=1;
            }
            word[j]=s[i];
            j++;
        }
        else
        {
            if(is_word_started==1)
            {
                is_word_started=0;
                word[j]='\0';
                printf("%s\n",word);
                j=0;
            }

        }
    }
    if(is_word_started==1)
    {
        is_word_started=0;
        word[j]='\0';
        printf("%s\n",word);
    }
    return 0;
}
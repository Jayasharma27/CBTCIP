#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch[100];
    int line=0,word=0,character=0,i;
    printf("Enter the  text:\n");
    scanf("%[^*]",ch);
  
    for(i=0;ch[i]!='\0';i++)
    {
        character++;
        if(ch[i]=='\n')
        {
            line++;
        } 
        if(ch[i]=='\n' && ch[i+1]!='\n' || ch[i]==' ' && ch[i+1]!=' ' || ch[i]=='\t' && ch[i+1]!='\t')
        {
            word++;
        }
    }
        printf("The total no of line is %d \n", line);
        printf("The total no of character is %d \n",character);
        printf("The total no of word is %d", word);
        return 0;
    }

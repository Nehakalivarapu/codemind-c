#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int c=1,len=0,i;
    scanf("%[^
]s",str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]==' ')
        {
            c++;
        }
    }
    printf("%d",c);
}
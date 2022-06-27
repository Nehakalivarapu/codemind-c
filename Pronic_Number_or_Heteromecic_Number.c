#include<stdio.h>
int main()
{
    int n,c=0,i,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i*(i+1)==n)
        {
            c++;
            break;
        }
    }
    if(c==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
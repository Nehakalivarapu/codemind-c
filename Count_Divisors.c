#include<stdio.h>
int main()
{
    int n,k,r,c=0,i;
    scanf("%d%d%d",&n,&r,&k);
    for(i=n;i<=r;i++)
    {
        if(i%k==0)
        {
            c++;
        }
    }
    printf("%d",c);
}
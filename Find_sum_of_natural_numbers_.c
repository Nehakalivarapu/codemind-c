#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<n+1;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}
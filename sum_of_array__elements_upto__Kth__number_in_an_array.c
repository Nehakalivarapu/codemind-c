#include<stdio.h>
int main()
{
    int n,arr[100],i,b,s=0,ind;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]==b)
        {
            ind=i;
            break;
        }
    }
    for(i=0;i<=ind;i++)
    {
        s=s+arr[i];
    }
    printf("%d",s);
}
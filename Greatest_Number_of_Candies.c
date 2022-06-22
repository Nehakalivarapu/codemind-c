#include<stdio.h>
int main()
{
    int i,n,max=0,arr[100],e;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&e);
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]+e<max)
        {
            printf("False ");
        }
        else
        {
            printf("True ");
        }
    }
}
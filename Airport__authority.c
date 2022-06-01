#include<stdio.h>
int main()
{
    int i,t,n,sum=0;
    scanf("%d",&n);
    int arr[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(arr[i]<=t)
        {
            sum=sum+1;
        }
        else
        {
            sum=sum+2;
        }
    }
    printf("%d",sum);
    return 0;
}
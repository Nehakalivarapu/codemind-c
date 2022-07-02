#include<stdio.h>
int main()
{
    int c=0,n,i,s=0,avg=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    avg=s/n;
    for(i=0;i<n;i++)
    {
        if(avg==arr[i])
        {
            c++;
        }
    }
    if(c>0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
#include<stdio.h>
int main()
{
    int n,arr[100],i,s=0,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
      f=f+arr[i];  
    }
    for(i=n/2;i<n;i++)
    {
        s=s+arr[i];
    }
    if(f>s)
    {
        printf("%d",f-s);
    }
    else
    {
        printf("%d",s-f);
    }
}
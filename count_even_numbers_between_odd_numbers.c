#include<stdio.h>
int main()
{
    int arr[100],n,i,c=0,j,ind=0,ind1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            ind=i;
            break;
        }
    }
    for(j=n-1;j>=0;j--)
    {
        if(arr[j]%2!=0)
        {
            ind1=j;
            break;
        }
    }
    for(i=ind+1;i<ind1;i++)
    {
        if(arr[i]%2==0)
        {
            c++;
        }
    }
    printf("%d",c);
}
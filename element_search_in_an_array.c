#include<stdio.h>
int main()
{
    int i,c=0,n,s=0,k;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
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
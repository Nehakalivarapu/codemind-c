#include<stdio.h>
int main()
{
    int i,min,arr[100],n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=0;i<n;i++)
    {
        min>arr[i];
        {
            min=arr[i];
        }
    }
    printf("%d",min);
    return 0;
}
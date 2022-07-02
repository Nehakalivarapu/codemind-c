#include<stdio.h>
int main()
{
    int i,n,s=0,c=0;
    float avg=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    avg=(float)s/n;
    printf("%.2f",avg);
    return 0;
}
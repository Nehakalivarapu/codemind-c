#include<stdio.h>
int main()
{
    int arr[100];
    long int sum;
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("%ld",sum);
}
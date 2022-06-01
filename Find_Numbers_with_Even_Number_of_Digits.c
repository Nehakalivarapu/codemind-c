#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,c=0,d,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        d=log10(arr[i])+1;
        if(d%2==0) 
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
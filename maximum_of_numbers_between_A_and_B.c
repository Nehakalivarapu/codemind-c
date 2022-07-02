#include<stdio.h>
int main()
{
    int p=0,n,k[100],a,b,i,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&k[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(k[i]>=a and k[i]<=b)
        {
            p++;
            if(k[i]>max)
            {
                max=k[i];
                
            }
        }
    }
    if(p!=0)
    {
        printf("%d",max);
    }
    else
    {
        printf("-1");
    }
}
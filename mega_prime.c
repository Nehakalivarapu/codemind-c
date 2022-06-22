#include<stdio.h>
int main()
{
    int n,d,i,k=0,c=0,x=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        while(n!=0)
        {
            d=n%10;
            for(i=2;i<d;i++)
            {
                if(d%i==0)
                {
                    k++;
                }
            }
            if(d==1)
            {
                x++;
            }
            n=n/10;
        }
    }
    if(k==0&&c==0&&x==0)
    {
        printf("Mega Prime");
    }
    else
    {
        printf("Not Mega Prime");
    }
}
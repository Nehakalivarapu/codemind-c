#include<stdio.h>
int main()
{
    int n,d,t=0,k,c=0,s=0,j,m=0;
    scanf("%d",&n);
    while (n>0)
    {
        d=n%10;
        s=s+d;
        n=n/10;
    }
    while(s>0)
    {
        k=s%10;
        t=t+k;
        c++;
        s=s/10;
    }
    if(c==2)
    {
        while(t>0)
        {
            j=t%10;
            m=m+j;
            t=t/10;
        }
        printf("%d",m);
    }
    else
    {
        printf("%d",t);
    }
}
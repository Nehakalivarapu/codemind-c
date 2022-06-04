#include<stdio.h>
int main()
{
    int a,b,k=0,i,j,s=0,s1=0,l=0;
    scanf("%d%d",&a,&b);
    k=b;
    i=a;
    for(i=1;i<=a/2;i++)
    {
        if(a%i==0)
        {
            s=s+i;
        }
    }
    for(j=1;j<=b/2;j++)
    {
        if(b%j==0)
        {
            s1=s1+j;
        }
    }
    if(a==s1 && b==s)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
    return 0;
}
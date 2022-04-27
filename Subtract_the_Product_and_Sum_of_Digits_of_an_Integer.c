#include<stdio.h>
int main()
{
    int n,d,sum=0,pro=1,res;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        sum=sum+d;
        pro=pro*d;
        n=n/10;
    }
    res=pro-sum;
    printf("%d",res);
}
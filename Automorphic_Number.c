#include<stdio.h>
int main()
{
    int temp,sum=0,r=0,k,n,sq=0,d;
    scanf("%d",&n);
    sq=n*n;
    temp=n;
    while(n!=0)
    {
        d=n%10;
        k=sq%10;
        sum=sum*10+k;
        sq=sq/10;
        n=n/10;
    }
    while(sum!=0)
    {
        d=sum%10;
        r=r*10+d;
        sum=sum/10;
    }
    if(r==temp)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
    
}
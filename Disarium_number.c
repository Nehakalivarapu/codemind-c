#include<stdio.h>
#include<math.h>
int main()
{
    int i,temp,s=0,k,n,d,c=0,rev,t1;
    scanf("%d",&n);
    temp=n;
    t1=n;
    while(n>0)
    {
        d=n%10;
        c++;
        n=n/10;
    }
    while(temp>0)
    {
        k=temp%10;
        s=s+pow(k,c);
        c--;
        temp=temp/10;
        
    }
    if(s==t1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
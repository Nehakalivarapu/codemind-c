#include<stdio.h>
int main()
{
    int n,d,num=0;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        if(d>num)
        {
            num=d;
        }
        n=n/10;
    }
    printf("%d",num);
    return 0;
}
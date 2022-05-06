#include<stdio.h>
int main()
{
    long int n,d,k;
    int c=0;
    scanf("%ld",&n);
    d=n%10;
    if(d!=0)
    {
        while(n>0)
        {
            k=n%10;
            c++;
            n=n/10;
        }
        if(c==10)
        {
            printf("Valid");
        }
        else
        {
            printf("Invalid");
        }
    }
    else
    {
        printf("Invalid");
    }
}
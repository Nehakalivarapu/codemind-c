#include<stdio.h>
int main()
{
    int s,t,b,c;
    scanf("%d%d%d",&s,&b,&t);
    c=2*t*s*b*512;
    printf("%dKB",c/1024);
}
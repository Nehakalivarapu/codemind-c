#include<stdio.h>
int main()
{
    int t,i,j,a,c=0,p1=0,p2=0,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a);
        for(k=a;k>2;k--)
        {
            c=0;
            for(j=2;j<k;j++)
            {
                c=0;
                if(k%j==0)
                {
                    c=1;
                    break;
                }
            }
            if(c==0)
            {
                p1=k;
                break;
            }
        }
        for(k=a;k<a+100;k++)
        {
            c=0;
            for(j=2;j<k;j++)
            {
                if(k%j==0)
                {
                    c=1;
                    break;
                }
            }
            if(c==0)
            {
                p2=k;
                break;
            }
        }
        if(a-p1<=p2-a)
        {
            printf("%d
",p1);
        }
        else
        {
            printf("%d
",p2);
        }
    }
}
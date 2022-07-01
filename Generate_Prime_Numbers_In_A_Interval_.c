#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,j,c=0;
    scanf("%d%d",&a,&b);
    if(a<10)
    {
        printf("2
");
        printf("3
");
        printf("5
");
        printf("7
");
        a=10;
    }
    for(i=a;i<=b;i++)
    {
        c=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c=1;
                break;
            }
            
        }
        if(c==0)
        {
            printf("%d
",i);
        }
    }
}

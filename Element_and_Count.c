#include<stdio.h>
int main()
 {
     int n,i,j,c=1;
     scanf("%d",&n);
     int a[n];
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
         c=1;
         for(j=i+1;j<n;j++)
         {
             if(a[i]==a[j])
             {  
                 c++;
                 a[j]=-1;
             }
         }
         if(a[i]==-1)
         {
             continue;
         }
         printf("%d ",a[i]);
         printf("%d ",c);
     }
 }
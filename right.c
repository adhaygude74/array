#include<stdio.h>
int main()
{
   int i,j,n,sum=0;
int a[10][10];
   printf("enter the number of element");
   scanf("%d",&n);

   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }

      for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           if(i==j)
           {
               sum=sum+a[i][j];
           }
       }

   }
   printf("%d",sum);

    return 0;
}
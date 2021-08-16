#include<stdio.h>

int main()
{
   int i=0,j=0,a[10];
int s=0,n=0;
   printf("Enter the number of element");
   scanf("%d",&n);

   for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);

  }


   printf("Enter the sum of element");
   scanf("%d",&s);

      for(i=0;i<n;i++)
      {
          for(j=i+1;j<n;j++)
          {
              if(a[i]+a[j]==s)
              {
                  printf("%d\t%d",i,j);
              }
          }
      }

    return 0;
}
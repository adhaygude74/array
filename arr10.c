#include<stdio.h>

int main()
{
   int i,j,m,n;
int a[10];
   printf("Enter the number of elemnts");
   scanf("%d",&n);

    printf("Enter the number of elemnts");
    for(i=0;i<n;i++)
    {
   scanf("%d",&a[i]);
    }

      printf("Enter the specified position");
        scanf("\n%d",&j);

          printf("Enter the specified number");
        scanf("\n%d",&m);


printf("\n");
      for(i=0;i<n;i++)
   {
      printf("%d\t",a[i]);

   }
    
    for(i=n;i>=j;i--)
    {

          a[i]=a[i-1];
    }
      a[j-1]=m;
      printf("\n");
    
       for(i=0;i<=n;i++)
   {
      printf("%d\t",a[i]);

   }

    return 0;
}
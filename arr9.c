#include<stdio.h>

int main()
{
    int i,j,n=0,k;
   int a[10];
    printf("Enter the number of el;ements");
    scanf("%d",&n);

printf("Enter the number of el;ements");
  

   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);

   }

   printf("Enter the specified position");
   scanf("\n%d",&j);

  i=0;
  printf("\n");
      for(i=0;i<n;i++)
   {
      printf("%d\t",a[i]);

   }
   printf("\n");

  while(i!=j-1){
      i++;
  }
     

    while(i<n)
    {
       a[i]=a[i+1];
       i++;
    }
    n--;
printf("\n");
      for(i=0;i<n;i++)
   {
      printf("%d\t",a[i]);

   }

    return 0;
}
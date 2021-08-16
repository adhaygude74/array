#include<stdio.h>

int main()
{
   int i,j,n=0,max;
  int a[10];
   printf("Enter the number of element");
   scanf("%d",&n);

   printf("Enter the number of element");
   for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
max=j=a[0];
  for(i=0;i<n;i++)
  {
            if(max<a[i])
            {
                j=max;
                max=a[i];
            }
            else if((j>a[i])  && (max>a[i]))
            {
                j=a[i];
            }

  }
  printf("\n%d\n",j);

    return 0;
}
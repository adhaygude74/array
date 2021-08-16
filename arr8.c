#include<stdio.h>
  int m=20;
int main()
{
    int i, n;
    int max=0,min=0;
int a[10];
    printf("Enter the number of element");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
          scanf("%d",&a[i]);
    }

max=a[0];
min=a[0];
    for(i=0;i<n;i++)
    {
          
      if(min>a[i])
      {
        min=a[i];
      }

   if(max<a[i])
      {
        max=a[i];
      }
    }

  printf("minimum number %d\n",min);
    printf("maximum number %d",max);

return 0;

}

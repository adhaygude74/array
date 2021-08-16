#include<stdio.h>

int main()
{
   int i,j,m,n;
int a[10],s;
   printf("Enter the number of elemnts");
   scanf("%d",&n);

    printf("Enter the number of elemnts");
    for(i=0;i<n;i++)
    {
   scanf("%d",&a[i]);
    }

    
printf("\n");
      for(i=0;i<n;i++)
   {
      printf("%d\t",a[i]);

   }
       
printf("\n");

   m=s=a[0];
    
    for(i=0;i<=n;i++)
    {

        if(m>a[i])
        {
            s=m;
            m=a[i];
        }
       
    }
      printf("%d",s);
    return 0;
}
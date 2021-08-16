#include<stdio.h>


int main()
{
    int n,a[10];
 int l1=0,l2=0;
    printf("Enter the number of elemnt");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
  
  l1=a[0];
  l2=a[0];

      for(int i=0;i<n;i++)
      {
             if(a[i]>l1)
             {
                 l2=l1;
                 l1=a[i];
             }
             else if((a[i]<l2) && (a[i]<l1) )
             {

                 l2=a[i];
             }

      }

       printf("\n");

        printf("%d\t",l2);

  
    return 0;
}
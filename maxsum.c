#include<stdio.h>
int main()
{
  int i=0,c=0,j,k,sum=0;
  int a[]={8, 3, 8, -5, 4, 3, -4, 3, 5};
int max=0;
    c= sizeof(a)/sizeof(a[0]);

     for(i=0;i<c;i++)
     {
         printf("%d\t",a[i]);
     }

     for(i=0;i<c;i++)
     {
        for(j=0;j<c;j++)
        {
            sum=0;
            for(k=i;k<j;k++)
            {
                   sum=sum+a[i];
            }
              if(sum>max)
              {
                  max=sum;
              }
        }
     }

     printf("\n%d\n",max);


    return 0;

}
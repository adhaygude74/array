//remove duplicate  element
#include<stdio.h>

int main()
{
  int i,n,sa;
   int a[10],b[10]={0};
int max=0;
   printf("Enter the number of elementys");
   scanf("%d",&n);

   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
 
    for(i=0;i<n;i++)
    {
        b[a[i]]++;
    }
     for(i=0;i<n;i++)
    {
         if(b[i]>0  )
      printf("\n%d number of times\t%d\t",i,b[i]);
    }

max=b[0];
sa=0;
    for(i=0;i<n;i++)
    {
          if(b[i]>max)
          {
              max=b[i];
              sa=i;
          }
    }

//  printf("\n%d",sa);
   


   

    return 0;
}
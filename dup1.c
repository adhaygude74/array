#include<stdio.h>

int main()
{
     int n=0,k=0,p=0;
     int a[10],hash[100];

     printf("Enter the number of element");
     scanf("%d",&n);

     for(int i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
         
     }
     for(int i=0;i<100;i++)
  {
     hash[i]=0;
  }


  for(int i=0;i<n;i++)
  {
      
      hash[a[i]]++;
    //   printf("Akshay");
  }

   for(int i=0;i<100;i++)
  {
      if(hash[i]>0 && hash[i]<2)
      {
          k++;
    printf("%d\t",i);
      }
  }
//p=n-k;
//printf("\n%d",p);
    return 0;
}
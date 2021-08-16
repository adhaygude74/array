#include<stdio.h>

int main()
{
    int  i,n,a[10];
    int b[100],s=100;
    printf("Enter the number if element");
    scanf("%d",&n);

     printf("Enter the number if element");
     for(i=0;i<n;i++)
     {
       scanf("%d",&a[i]);
     
     }
     for(i=0;i<100;i++)
     {
    b[i]=0;

     }
     for(i=0;i<100;i++)
     {
    b[a[i]]++;

     }

 for(i=0;i<100;i++)
     {
       
    printf("\n%d\t%d",b[i],i);
      

     }

    
return 0;



}

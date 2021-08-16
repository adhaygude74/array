#include<stdio.h>

int main()
{
    int i, n,f=0;
    int hash[15]={0};
int a[10];
    printf("Enter the number of element");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
          scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
          hash[a[i]]++;
    }

   for(i=0;i<15;i++)
    {
        //printf("\n");
          if((hash[i]>0) && (hash[i]<2)){
               printf("%d\t",i);
             //  f++;

          }
    }
  
 // printf("duplicates elements %d",n-f);

return 0;
}
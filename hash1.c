#include<stdio.h>
 //int m=20;
int main()
{
    int i, n;
    int hash[100]={0};
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

 for(i=0;i<100;i++)
    {
     
       
               printf(" %d\t",hash[i]);
        
    }
return 0;
}
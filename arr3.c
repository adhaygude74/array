

#include<stdio.h>

int main()
{
   int i,n,sum=0;
int a[10],b[10];

    printf("Enter tyhe number ofa elements");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

     for(i=0;i<n;i++)
    {
    b[i]=a[i];
    }

  for(i=0;i<n;i++)
    {
        printf("%d\t",b[i]);
    }

    return 0;
}
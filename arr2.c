// sum of all element


#include<stdio.h>

int main()
{
   int i,n,sum=0;
int a[10];

    printf("Enter tyhe number ofa elements");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

     for(i=0;i<n;i++)
    {
    sum=sum+a[i];
    }

    printf("%d",sum);
    return 0;
}
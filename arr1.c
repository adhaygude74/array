#include<stdio.h>


int main()
{
    int i,a[10];
    int n;

    printf("Enter tyhe number ofa elements");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

     for(i=n-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }


    return 0;
}
#include<stdio.h>

int main()
{
        int n,i,j,temp;
        int a[10],b[10],c[25];
int s;
        printf("Enter the elements in array");
        scanf("%d",&n);

            printf("Enter the elements in array");
            for(i=0;i<n;i++){
        scanf("%d",&a[i]);
            }

            printf("Enter the elements in array");
            for(i=0;i<n;i++){
        scanf("%d",&b[i]);
            }

            s=n+n;

            for(i=0;i<n;i++)
            {
                c[i]=a[i];
            }

          for(j=0;j<n;j++)
            {
                c[i]=b[j];
                i++;
            }

for(i=0;i<s;i++)
{
        printf("%d\t",c[i]);

}

  for(i=0;i<s;i++)
{
    for(j=0;j<s-1;j++)
    {
        if(c[j]<c[j+1])
        {
   temp=c[j];
   c[j]=c[j+1];
   c[j+1]=temp;
        }
    }
}
printf("\n");
for(i=0;i<s;i++)
{
    printf("%d\t",c[i]);
}
    return 0;
}
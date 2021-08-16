#include<stdio.h>


int main()
{
    int n,a[10][10];
 
    printf("Enter the number of elemnt");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        for(int j=0;i<n;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }

 for(int i=0;i<n;i++)
    {
        for(int j=0;i<n;j++)
        {
            if(a[i][j]==0)
            {
                for(int k=i;k<n;)
                {
                      for(int s=0;s<n;s++)
                      {
                          a[k][s]=0;
                        //  continue;
                      }
                }
            }
        }
    }

     for(int i=0;i<n;i++)
    {
        for(int j=0;i<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
 return 0;
}
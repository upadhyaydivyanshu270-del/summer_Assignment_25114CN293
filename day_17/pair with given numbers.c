#include<stdio.h>
int main()
{
    int a[20],n,i,j,sum;

    printf("Enter size : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter required sum : ");
    scanf("%d",&sum);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==sum)
            {
                printf("Pair = %d %d",a[i],a[j]);
            }
        }
    }

    return 0;
}
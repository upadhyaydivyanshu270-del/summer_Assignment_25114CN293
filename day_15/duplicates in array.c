#include<stdio.h>
int main()
{
    int a[20],n,i,j;

    printf("Enter size : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Duplicate elements are : ");

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("%d ",a[i]);
                break;
            }
        }
    }

    return 0;
}
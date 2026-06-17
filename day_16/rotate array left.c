#include<stdio.h>
int main()
{
    int a[20],n,i,temp;

    printf("Enter size : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    temp=a[0];

    for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }

    a[n-1]=temp;

    printf("Array after left rotation : ");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
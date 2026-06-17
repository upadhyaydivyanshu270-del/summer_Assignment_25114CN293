#include<stdio.h>
int main()
{
    int a[20],n,i,item;

    printf("Enter size : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter element to search : ");
    scanf("%d",&item);

    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            printf("Element found at position %d",i+1);
            return 0;
        }
    }

    printf("Element not found");

    return 0;
}
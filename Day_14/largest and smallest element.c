#include<stdio.h>
int main()
{
    int a[10],n,i,largest,smallest;

    printf("Enter size : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    largest=a[0];
    smallest=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>largest)
            largest=a[i];

        if(a[i]<smallest)
            smallest=a[i];
    }

    printf("Largest = %d\n",largest);
    printf("Smallest = %d",smallest);
    return 0;
}
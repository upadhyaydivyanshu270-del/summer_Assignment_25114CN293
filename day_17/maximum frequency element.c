#include<stdio.h>
int main()
{
    int a[20],n,i,j,count,max=0,element;

    printf("Enter size : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        count=0;

        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
                count++;
        }

        if(count>max)
        {
            max=count;
            element=a[i];
        }
    }

    printf("Maximum Frequency Element = %d",element);

    return 0;
}
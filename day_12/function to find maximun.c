#include<stdio.h>
int maximum(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    int a,b;

    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);

    printf("Maximum = %d",maximum(a,b));

    return 0;
}
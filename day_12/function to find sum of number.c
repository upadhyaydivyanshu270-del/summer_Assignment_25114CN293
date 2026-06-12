#include<stdio.h>
int sum(int a,int b)
{
    int s;

    s = a + b;

    return s;
}

int main()
{
    int a,b;

    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);

    printf("Sum = %d",sum(a,b));

    return 0;
}
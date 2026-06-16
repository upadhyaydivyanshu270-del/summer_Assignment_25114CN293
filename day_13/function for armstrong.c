#include <stdio.h>
int armstrong(int n)
{
    int sum = 0, rem, temp = n;

    while(n > 0)
    {
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }

    if(sum == temp)
        return 1;
    else
        return 0;
}

int main()
{
    int num;
    scanf("%d", &num);

    if(armstrong(num))
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}
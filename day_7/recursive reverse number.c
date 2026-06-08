#include <stdio.h>
int rev = 0;
void reverseNum(int n)
{
    if(n==0)
        return;

    rev = rev*10 + n%10;
    reverseNum(n/10);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    reverseNum(n);

    printf("Reverse = %d",rev);

    return 0;
}
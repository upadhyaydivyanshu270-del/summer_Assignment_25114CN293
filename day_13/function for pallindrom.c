#include <stdio.h>
int palindrome(int n)
{
    int rev = 0, temp = n;

    while(n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    if(temp == rev)
        return 1;
    else
        return 0;
}

int main()
{
    int num;
    scanf("%d", &num);

    if(palindrome(num))
        printf("Palindrome Number");
    else
        printf("Not Palindrome Number");

    return 0;
}
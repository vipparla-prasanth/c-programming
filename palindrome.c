#include<stdio.h>
int main()
{
    int n,rev=0,digit,temp;
    printf("enter a number : ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        digit = n%10;
        rev = rev*10+digit;
        n = n/10;
    }
    if(rev=temp)
        printf("%d is a palindrome\n",temp);
    else
        printf("%d is not a palindrome\n",temp);
    return 0;
}
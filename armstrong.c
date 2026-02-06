#include<stdio.h>
int main()
{
    int n,sum=0,rem,temp;
    printf("etner a number : ");
    scanf("%d",&n);
    temp=n;
    while(n>0) {
        rem = n%10;
        sum = sum+(rem*rem*rem);
        n = n/10;
    }
    if(sum==temp)
        printf("%d is a armstrong number\n",temp);
    else
        printf("%d is not a armstrong number.\n",temp);
}
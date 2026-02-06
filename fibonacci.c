/*the FIBONACCI series means the sum of the present and the before value like the numbers starts from 0 and then 1 will be as 1 and it is added
to the previoud number i.e, 0, the vlaue is 1 again(0+1=1 resulting in the series as 0 1 1) and the present 1 is added to the previous 1 (1+1=2
resulting series as 0 1 1 2) and the same adding will be continued up to given number of terms*/
#include<stdio.h>
int fib(int n);
int main()
{
    int n,i;
    printf("how many terms do u need ?\n enter : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("%d\t",fib(i));
    }
}
int fib(int n)
{
    if(n==0)
        return 0;
    else if (n==1)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}
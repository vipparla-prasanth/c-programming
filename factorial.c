#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("enter number : \n");
    scanf("%d",&n);

    if(n<0)
    {
        printf("factorial of %d does not exist!!\n");
    }
    else{
        for(i=1;i<=n;i++)
        {
            fact*=i;
        }
        printf("factorial of %d is %d\n",n,fact);
    }
    return 0;
}
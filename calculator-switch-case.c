#include<stdio.h>
int main()
{
    int choice;
    float a,b;
    char loop;
    do {

    printf("\n1.add.\n2.sub.\n3.mul.\n4.div.\n");
    printf("\nenter choice : ");
    scanf("%d", &choice);
    printf("enter two numbers : ");
    scanf("%f%f",&a,&b);

    switch (choice) {
        case 1 :
            printf("the addition of %.2f and %.2f is %.2f\n",a,b,a+b);
            break;
        case 2 :
            printf("the subraction of %.2f and %.2f is %.2f\n",a,b,a-b);
            break;
        case 3 :
            printf("the multiplication of %.2f and %.2f is %.2f\n",a,b,a*b);
            break;
        case 4 :
            if (b==0)
                printf("division with 0 is not possible\n");
            else
            {
                printf("the division of %.2f and %.2f is %.2f\n",a,b,a/b);
            }
            break;
        default : 
            printf("enter a valid choice!!, and try again\n");
            break;
    }
    printf("do you want to try any other numbers : (Y/N)");
    scanf(" %c",&loop);
} while (loop=='Y' || loop=='y');
    
    return 0;
}
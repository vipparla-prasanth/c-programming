#include<stdio.h>   //including a header file for standard input and output
int main()
{
    int choice;
    float a,b;
    char loop;
    do {              //exit controlled loop

    printf("\n1.add.\n2.sub.\n3.mul.\n4.div.\n");    
    printf("\nenter choice : ");          //asking the user to enter choice
    scanf("%d", &choice);                 //used for reading the input choice
    printf("enter two numbers : ");        //asking the user to enter two numbers
    scanf("%f%f",&a,&b);                    //reading two floating point values

    switch (choice) {                       //switch is to execute one block of code out of many based on the value of a single expression
        case 1 :                            //case 1 : means when user entered number 1 these block of code will be executed
            
            printf("the addition of %.2f and %.2f is %.2f\n",a,b,a+b);         //performing and printing the added values of given two numbers 
            
            break;                          //break is used to terminate the switch immediatly                             
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
        default :                 //default statement is used when the input is outof range 
            printf("enter a valid choice!!, and try again\n");
            break;
    }
    printf("do you want to try any other numbers : (Y/N)");  //asking the user to continue with other numbers or not 
    scanf(" %c",&loop);
} while (loop=='Y' || loop=='y');        //if user enter 'Y' OR 'y' the do while loop will continue 
    
    return 0;                //as we have used int in the main function we should return a value at the end of the program so we returned 0

}

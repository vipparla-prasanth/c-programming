//without using functions and it is the program of just taking input using scanf() and printing the read values
#include<stdio.h>
#include<stdlib.h>
//declaration of structure before main function
struct student {
    char name[30];
    char roll[10];
    float beee,maths,eg,phy,c;
    float tl,avg;
};
int main() 
{
    int n;
    struct student s[800]; //declaring the STRUCTURE VARIABLE in main function
    float beee,maths,eg,phy,c;
    float tl,avg;
 
    
    
    printf("enter the count of students : \n");
    scanf("%d",&n);

    if((n>800) || (n<0)) 
    {
        printf("sorry it is impossible to enter the data of %d students at time, try for less than 800 students only\n",n);
    }
    else
    {
        printf("enter the details of students : \n");
        for(int i=0;i<n;i++)
        {
            printf("enter student %d details : \n",i+1);
            printf("enter name : ");
            scanf("%s",s[i].name);
            printf("roll number : ");
            scanf("%s",s[i].roll);
            printf("BEEE : ");
            scanf("%f",&s[i].beee);
            printf("physics : ");
            scanf("%f",&s[i].phy);
            printf("EG : ");
            scanf("%f",&s[i].eg);
            printf("introduction to programming : ");
            scanf("%f",&s[i].c);
            printf("LA & C : ");
            scanf("%f",&s[i].maths);

            s[i].tl=s[i].beee+s[i].maths+s[i].phy+s[i].eg+s[i].c;
            s[i].avg=s[i].tl /5.0;

           }

           for(int i=0;i<n;i++)
        {
            printf("---------------------------------------------------------\n");
            printf("details of student %d : \n",i+1);
            printf("name : %s\n",s[i].name);
            printf("roll number : %s\n",s[i].roll);
            printf("BEEE : %.2f\n,PHYSICS : %.2f\nINTRODUCTION TO PROGRAMMING : %.2f\nLA & C : %.2f\nEG : %.2f\n",s[i].beee,s[i].phy,s[i].c,s[i].maths,s[i].eg);
            printf("total = %.2f\n",s[i].tl);
            printf("average = %.2f\n",s[i].avg);
            printf("\n------------------------------------------------------\n");

        }


        
    }

    

    return 0;
}
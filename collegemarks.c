#include<stdio.h>      //included a header file for standard input and output
#include<stdlib.h>        //specifically in this program we included this header file to write exit code only

struct student              //declaring stucture (global variables) 
{
    char name[30];
    char roll[10];
    float beee, ps, maths, eg, c, tl, avg;
};

void printMenu()
{
    printf("================STORE STUDENT DETAILS=================\n");
    printf("this is for first year, 1st SEM only\n");
    printf("\n1.Assignment 1.\n2. Assignment 2.\n3. Mid 1.\n4. Mid 2.\n5. Internal.\n6. External.\n7. sem 1.\n");
}

int getStudentCount()
{
    int n;
    printf("what is the count of students : \n");
    scanf("%d", &n);

    if (n > 800 || n < 0)
    {
        printf("invalid no. of students and rememeber that max students is 800!!\n");
        exit(1);
    }
    return n;
}

void assignment1(struct student s[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\nenter student %d details : \n",i+1);
        printf("\nenter studnet %d name : ",i+1);
        scanf("%s",s[i].name);
        printf("Roll number : ");
        scanf("%s",s[i].roll);

        printf("=============== ASSIGNMENT 1 ============== (for 5 marks): \n");
        printf("BEEE : ");
        scanf("%f",&s[i].beee);
        printf("C programming : ");
        scanf("%f",&s[i].c);
        printf("physics : ");
        scanf("%f",&s[i].ps);
        printf("linear algebra and calculus : ");
        scanf("%f",&s[i].maths);

        printf("%s details stored!!",s[i].name);
    }
}

void assignment2(struct student s[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\nenter student %d details : \n",i+1);
        printf("\nenter studnet %d name : ",i+1);
        scanf("%s",s[i].name);
        printf("Roll number : ");
        scanf("%s",s[i].roll);

        printf("============== ASSIGNMENT 2 ==============(for 5 marks): \n");
        printf("BEEE : ");
        scanf("%f",&s[i].beee);
        printf("C programming : ");
        scanf("%f",&s[i].c);
        printf("physics : ");
        scanf("%f",&s[i].ps);
        printf("linear algebra and calculus : ");
        scanf("%f",&s[i].maths);

        printf("%s details stored!!",s[i].name);
    }
}

void mid1(struct student s[], int n)
{
    float tl, avg;
    for(int i=0;i<n;i++)
    {
        printf("\nenter student %d details : \n",i+1);
        printf("\nenter studnet %d name : ",i+1);
        scanf("%s",s[i].name);
        printf("Roll number : ");
        scanf("%s",s[i].roll);

        printf("============ MID 1 ============ (for 30 MARKS marks): \n");
        printf("BEEE : ");
        scanf("%f",&s[i].beee);
        printf("C programming : ");
        scanf("%f",&s[i].c);
        printf("physics : ");
        scanf("%f",&s[i].ps);
        printf("linear algebra and calculus : ");
        scanf("%f",&s[i].maths);
        printf("Engineering Graphics : ");
        scanf("%f",&s[i].eg);

        tl = s[i].beee + s[i].ps + s[i].maths + s[i].ps + s[i].c + s[i].eg;
        avg = (tl/30)*25;

        s[i].tl = tl;
        s[i].avg = avg;

        printf("total = %.2f, average = %.2f\n",tl,avg);
        printf("%s details stored!!,for mid 1",s[i].name);
    }
}

void mid2(struct student s[], int n)
{
    float tl, avg;
    for(int i=0;i<n;i++)
    {
        printf("\nenter student %d details : \n",i+1);
        printf("\nenter studnet %d name : ",i+1);
        scanf("%s",s[i].name);
        printf("Roll number : ");
        scanf("%s",s[i].roll);

        printf("============ MID 2 ============ (for 30 MARKS marks): \n");
        printf("BEEE : ");
        scanf("%f",&s[i].beee);
        printf("C programming : ");
        scanf("%f",&s[i].c);
        printf("physics : ");
        scanf("%f",&s[i].ps);
        printf("linear algebra and calculus : ");
        scanf("%f",&s[i].maths);
        printf("Engineering Graphics : ");
        scanf("%f",&s[i].eg);

        tl = s[i].beee + s[i].ps + s[i].maths + s[i].ps + s[i].c + s[i].eg;
        avg = (tl/30)*25;

        s[i].tl = tl;
        s[i].avg = avg;

        printf("total = %.2f, average = %.2f\n",tl,avg);
        printf("%s details stored!!, for MID 2\n",s[i].name);
    }
}

void sem1(struct student s[], int n)
{
    float tl, avg;
    for(int i=0;i<n;i++)
    {
        printf("\nenter student %d details : \n",i+1);
        printf("\nenter studnet %d name : ",i+1);
        scanf("%s",s[i].name);
        printf("Roll number : ");
        scanf("%s",s[i].roll);

        printf("================= SEM 1 ================ (for 70 MARKS marks): \n");
        printf("BEEE : ");
        scanf("%f",&s[i].beee);
        printf("C programming : ");
        scanf("%f",&s[i].c);
        printf("physics : ");
        scanf("%f",&s[i].ps);
        printf("linear algebra and calculus : ");
        scanf("%f",&s[i].maths);
        printf("Engineering Graphics : ");
        scanf("%f",&s[i].eg);

        tl = s[i].beee + s[i].ps + s[i].maths + s[i].ps + s[i].c + s[i].eg;
        avg = tl / 6;

        s[i].tl = tl;
        s[i].avg = avg;

        printf("total = %.2f, average = %.2f\n",tl,avg);
        printf("%s details stored!!, for SEM 1 \n",s[i].name);
    }
}

void finalReview(struct student s[], int n, int opt)
{
    printf("\n==================== LAST REVIEW OF THE DETAILS ====================== \n");

    if (opt >= 1 && opt <= 4 || opt == 7)
    {
        for(int i=0;i<n;i++)
        {
            if (opt == 1 || opt == 2)
            {
                printf("| %-15s | %-10s | %-5.1f | %-5.1f | %-5.1f | %-5.1f |\n",
                       s[i].name, s[i].roll, s[i].beee, s[i].c, s[i].ps, s[i].maths);
            }
            else
            {
                printf("| %-15s | %-10s | %-5.1f | %-5.1f | %-5.1f | %-5.1f | %-5.1f | %-6.1f | %-6.1f |\n",
                       s[i].name, s[i].roll, s[i].beee, s[i].c, s[i].ps, s[i].maths, s[i].eg, s[i].tl, s[i].avg);
            }
        }
    }
}

int main()
{
    struct student s[800];
    int opt, n;

    printMenu();
    printf("\nenter your choice : ");
    scanf("%d",&opt);

    n = getStudentCount();

    switch(opt)
    {
        case 1: assignment1(s,n); break;
        case 2: assignment2(s,n); break;
        case 3: mid1(s,n); break;
        case 4: mid2(s,n); break;
        case 5: printf("\nINTERNALS DIDNT START YET, PLEASE TRY AFTER FEW DAYS\n"); break;
        case 6: printf("\nEXTERNALS DIDNT START YET, PLEASE TRY AFTER FEW DAYS\n"); break;
        case 7: sem1(s,n); break;
        default: printf("\ninvalid choice!!!\n"); break;
    }

    finalReview(s,n,opt);
    return 0;
}


#include<stdio.h>
int main()
{
    FILE *fp1, *fp2;
    int ch;

    fp1 = fopen("source.txt", "r");
    fp2 = fopen("target.txt", "w");

    if(fp1==NULL || fp2 == NULL)
    {
        printf("files does not exists\n");
        return 0;
    }

    while((ch=fgetc(fp1))!=EOF)
    {
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("file copied successfully\n");

    return 0;
}
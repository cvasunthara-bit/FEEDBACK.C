#include <stdio.h>

int main()
{
    FILE *fp;
    int ch;

    fp = fopen("feedback.txt", "w");

    if(fp == NULL)
    {
        printf("File open failed\n");
        return 0;
    }

    fprintf(fp,"ABOUT C PROGRAMMING:\n");
    fprintf(fp,"1.I learned how to use array and strings in c programming.\n");
    fprintf(fp,"2.I understood the importance of sturctures and unions.\n");
    fprintf(fp,"3.I learned how to handle input and output operations.\n");
    fprintf(fp,"4.I understood how to use break and continue statements.\n");
    fprintf(fp,"5.C programming helps me develop problem-solving skills.\n");

    fclose(fp);

    fp = fopen("feedback.txt", "a");

    if(fp == NULL)
    {
        printf("File open failed\n");
        return 0;
    }

    fprintf(fp,"\nFEEDBACK ABOUT C LECTURER:\n");
    fprintf(fp,"1. The lecturer teaches the concepts in an easy way.\n");
    fprintf(fp,"2. The lecturer encourages students to learn programming.\n");
    fprintf(fp,"3. Practical examples make the lessons more interesting.\n");
    fprintf(fp,"4. Regular coding practice helps us understand the topics better.\n");
    fprintf(fp,"5. The lecturer is helpful and supportive in clearing doubts.\n");

    fclose(fp);

    fp = fopen("feedback.txt", "r");

    if(fp == NULL)
    {
        printf("File open failed\n");
        return 0;
    }

    printf("\nFEEDBACK REPORT\n");

    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}

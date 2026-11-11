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
    fprintf(fp,"1. C is a powerful and efficient programming language.\n");
    fprintf(fp,"2. C supports functions and modular programming.\n");
    fprintf(fp,"3. C is used to develop system software.\n");
    fprintf(fp,"4. C provides pointers for memory management.\n");
    fprintf(fp,"5. C helps to improve logical thinking and problem-solving skills.\n");

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
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(void)
{
    char content[80];
    char newcontent[80];

    //Step 1: Open text files and check that they open//
    FILE *fp1, *fp2;

    fp1 = fopen("test1.txt","r");
    fp2 = fopen("textt.txt","w");

    if(fp1 == NULL || fp2 == NULL)
    {
        printf("Error reading file\n");
        exit(0);
    }
    printf("Files open correctly\n");

    //Step 2: Get text from original file//
    while(fgets(content, sizeof(content), fp1) !=NULL)
    {
        fputs (content, stdout);
        strcpy (content, newcontent);
    }

    printf("%s", newcontent);
    printf("Text retrieved from original file\n");

    //Step 3: Copy text to new file//
    while(fgets(content, sizeof(content), fp1) !=NULL)
    {
        fprintf(fp2, newcontent);
    }
    printf("file created and text copied to it");

    //Step 4: Close both files and end program//
    fclose(fp1);
    fclose(fp2);

    getch();
    return 0;
}

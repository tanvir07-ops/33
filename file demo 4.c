#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("test.txt","r");
    char name;
    if(file==NULL)
    {

        printf("File doesn't exist\n");

    }
    else
    {
        while(!feof(file))
        {
            name = getc(file);
            printf("%c",name);

        }
        printf("\n");

        printf("File is opened\n");
        fclose(file);



    }






}


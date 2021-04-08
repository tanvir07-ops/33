#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    char name[100];
     int i;
    file = fopen("test.txt","a");

    if(file==NULL)
    {
        printf("File is not exist\n");




    }
    else
    {
        printf("Enter the name=");

        scanf("%[^\n]s",&name);



        fprintf(file,"%s",name);


        printf("File is opened\n");
        printf("File is written successfully\n");

        fclose(file);


    }





}



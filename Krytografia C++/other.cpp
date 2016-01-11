#include "other.h"
char* readTextFromFile(char* fileName)
{
    char *txt;
    FILE *file;
    int i,length;
    file=fopen(fileName, "r");
    length=sizeof(*file);
    txt=(char*)malloc(length);
    for(i=0; i<length; i++)
    {
        fscanf(file, "%c", &txt[i]);
    }
    fclose(file);
    return txt;
}


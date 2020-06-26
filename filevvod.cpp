#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"cloth.h"
char* filevvod(){
    char buffer[128];
    char *a;
    fgets(buffer,128,stdin);
    a=new char [sizeof(char)*(strlen(buffer)+1)];
    strcpy(a,buffer);
    return a;
}

#include<stdio.h>
#include"cloth.h"
#include<string.h>
#include<stdlib.h>
char* read2 (FILE *f,char *a)
{
    char *b;
    b=new char[sizeof(char)*strlen(a)+1];
    strcpy(b,a);
    return b;
}
cloth* read ()
{
    FILE *f;
    char *k;
    char a[50];
    cloth *head=NULL;
    f=fopen("Laba.txt","r");
    if(f==NULL)return head;
    while (1)
    {
        cloth *tmp;
        k=fgets(a,50,f);
        if(k==0)break;
        tmp=new cloth [sizeof(cloth)];
        tmp->name=read2(f,a);
        fgets(a,50,f);
        tmp->size=read2(f,a);
        fgets(a,50,f);
        tmp->mark=read2(f,a);
        fscanf(f,"%f",&tmp->price);
        fgets(a,50,f);
        tmp->male=read2(f,a);
        fscanf(f,"%d",&tmp->store);
        tmp->next=head;
        head=tmp;
    }
    fclose(f);
    return head;
}

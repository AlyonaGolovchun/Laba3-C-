#include<stdio.h>
#include<string.h>
#include"cloth.h"
cloth *poisk(char *str,cloth *head)
{
    while(head !=NULL)
    {
        if(!strcmp(head->name,str))
            break;
        else head=head->next;
    }
    return head;
}

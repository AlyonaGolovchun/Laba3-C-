#include<stdio.h>
#include<stdlib.h>
#include"cloth.h"
cloth* deletecloth(cloth *head)
{
        cloth *dop;
        dop=head->next;
        free(head->name);
        free(head->size);
        free(head->mark);
        free(head->male);
        free(head);
    return dop;
}

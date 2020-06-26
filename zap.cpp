#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"cloth.h"
void zapis(cloth *head){
        FILE *f;
        f=fopen("Laba.txt","w");
    while(head !=NULL){
            fprintf(f,"%s%s%s%f%s%d ",head->name,head->size,head->mark,head->price,head->male,head->store);
            head=deletecloth(head);
        }
        fclose(f);
}

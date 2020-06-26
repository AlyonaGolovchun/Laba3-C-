#ifndef CLOTH_H
#define CLOTH_H

#include<stdio.h>
typedef class cloth
{
    public:
    char* name;
    char* size;
    char* mark;
    float price;
    char* male;
    int store;
    class cloth* next;
}cloth;
cloth* deletecloth(cloth *head);
cloth *newcloth(cloth * head);
cloth *poisk(char *str,cloth *head);
char* read2 (FILE *f,char *a);
cloth* read();
void redakt(cloth *head);
char* filevvod();
void zapis(cloth *head);
void menu();

#endif // CLOTH_H

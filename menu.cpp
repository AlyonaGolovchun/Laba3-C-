#include<stdio.h>
#include"cloth.h"
#include <iostream>
using namespace std;
void menu()
{
    cloth *head=NULL;
    cloth *help;
    cloth *help2;
    int v;
    head=read();
    do
    {
        cout << "Вас приветствует программа управления базой данных об одежде в магазине." << endl
             << "Пожалуйста выберите действие:" << endl
             << "Добавить вещь.[1]" << endl
             << "Удалить вещь.[2]" << endl
             << "Вывести информацию о всех вещах.[3]" << endl
             << "Вывести информацию по определенной одежде.[4]" << endl
             << "Редактировать вещи.[5]" << endl
             << "Выход.[0]" << endl;
        cin >> v;
        getchar();
        switch(v)
        {
            case 1:
                head=newcloth(head);
            break;
            case 2:
                help=head;
                help2=head;
                if(help==NULL)
                {
                    cout << "Еще нет ни одной вещи." << endl;
                    break;
                }
                printf("Введите название вещи:");
                help=poisk(filevvod(),help);
                if(help==NULL)
                {
                    cout << "Вещь с данным номером не заведена." << endl;
                    break;
                }
                if(help==head)
                    head=deletecloth(help);
                else
                {
                    while(1)
                    {
                        if(help2->next==help)
                            break;
                        else help2=help2->next;
                    }
                    help2->next=deletecloth(help);
                }
            break;
            case 3:
                help=head;
                if(help==NULL)
                {
                    cout << "Еще нет ни одной вещи." << endl;
                    break;
                }
                while(help !=NULL)
                {
                    cout << "Название: " << help->name
                         << "Размер: " << help->size
                         << "Марка: " << help->mark
                         << "Цена: " << help->price << endl
                         << "Пол: " << help->male
                         << "Количество на складе: " << help->store << endl;
                    help=help->next;
                }
            break;
            case 4:
                help=head;
                if(help==NULL)
                {
                    cout << "Еще нет ни одной вещи." << endl;
                    break;
                }
                cout << "Введите название вещи:" << endl;
                help=poisk(filevvod(),help);
                if(help==NULL){
                    cout << "Вещь с данным номером не заведен." << endl;
                    break;
                }
                cout << "Название: " << help->name
                     << "Размер: " << help->size
                     << "Марка: " << help->mark
                     << "Цена: " << help->price << endl
                     << "Пол: " << help->male
                     << "Количество на складе: " << help->store << endl;
                help=help->next;

            break;
            case 5:
                help=head;
                if(help==NULL)
                {
                    cout << "Еще нет ни одной вещи." << endl;
                    break;
                }
                cout << "Введите название вещи:" << endl;
                help=poisk(filevvod(),help);
                if(help==NULL)
                {
                    cout << "Вещь с данным номером не заведен." << endl;
                    break;
                }
                redakt(help);
            break;
            case 0:
                zapis(head);
                cout << endl << "До свидания." << endl;
            break;
            default:
                cout << "Команды под данным номером не существует." << endl;
            break;
        }
    }
    while(v!=0);
}

#include<stdio.h>
#include<stdlib.h>
#include"cloth.h"
#include <iostream>
using namespace std;
void redakt(cloth *head)
{
    int y;
        do
    {
            cout << "Выберете ,что нужно отредактировать:" << endl
                 << "Редактировать название.[1]" << endl
                 << "Редактировать размер.[2]" << endl
                 << "Редактировать марку.[3]" << endl
                 << "Редактировать цену.[4]" << endl
                 << "Редактировать пол.[5]" << endl
                 << "Редактировать количество товара на складе.[6]" << endl
                 << "Выход из режима редактирования.[7]" << endl;
            cin >> y;
            getchar();
            switch(y)
            {
            case 1:
                free(head->name);
                cout << "Введите новое название: " << endl;
                head->name=filevvod();
            break;
            case 2:
                free(head->size);
                cout << "Введите новый размер: " << endl;
                head->size=filevvod();
            break;
            case 3:
                free(head->mark);
                cout << "Введите новую марку: " << endl;
                head->mark=filevvod();
            break;
            case 4:
                cout << "Введите новую цену: " << endl;
                cin >> head->price;
            break;
            case 5:
                free(head->male);
                cout << "Введите новый пол: " << endl;
                head->male=filevvod();
            break;
            case 6:
                cout << "Введите новое число количества товара на складе: " << endl;
                cin >> head->store;
            break;
            case 7:
            break;
            default:
                cout << "Команды под данным номером не существует." << endl;
            break;
            }
        }
    while(y !=7);
}

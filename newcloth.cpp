#include<stdio.h>
#include<stdlib.h>
#include"cloth.h"
#include <iostream>
using namespace std;

cloth *newcloth(cloth *head)
{
    cloth *shmot=new cloth[sizeof(cloth)];
    cout << "Введите название одежды" << endl;
    shmot->name=filevvod();
    cout << "Введите размер" << endl;
    shmot->size=filevvod();
    cout << "Введите название марки" << endl;
    shmot->mark=filevvod();
    cout << "Введите цену" << endl;
    cin >> shmot->price;
        getchar();
    cout << "Введите пол" << endl;
    shmot->male=filevvod();
    cout << "Введите количество товара на складе" << endl;
    cin >> shmot->store;
    shmot->next=head;
    return shmot;
}

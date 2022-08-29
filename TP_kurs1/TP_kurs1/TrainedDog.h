#pragma once
#include "Dog.h"
ref class TrainedDog :public Dog
{
private:
    int trained;
public:
    TrainedDog()//конструктор
    {
        trained = 1;

    }
    //добавить поле и свойство,отвечаюшее за натренерованность
    //переопределить метод 

};


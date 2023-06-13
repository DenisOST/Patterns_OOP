#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include <random>
#include <stdlib.h>
#include <time.h>
#include "windows.h"    // Для временной задержки Sleep

using namespace std;

class Emulation
{
protected:

public:
    // Функция генерирования случайного ответа.
    static int RandomAnswer()
    {
        /*
        random_device Deterministic_number;				        //Качественное детерменированное число
	    default_random_engine Seed(Deterministic_number());	    //Востановимая последовательность чисел
	    uniform_int_distribution<> Сalculation_Machine(0, 1);   //ГСПЧ равного распределения
        return Сalculation_Machine(Seed);
        */

        Sleep(1000);

        // Установить генератор случайных чисел
        srand(time(NULL));

        int num = rand() % 2;
        return num;
    }
};


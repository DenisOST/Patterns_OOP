#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include <random>
#include <stdlib.h>
#include <time.h>
#include "windows.h"    // ��� ��������� �������� Sleep

using namespace std;

class Emulation
{
protected:

public:
    // ������� ������������� ���������� ������.
    static int RandomAnswer()
    {
        /*
        random_device Deterministic_number;				        //������������ ����������������� �����
	    default_random_engine Seed(Deterministic_number());	    //������������ ������������������ �����
	    uniform_int_distribution<> �alculation_Machine(0, 1);   //���� ������� �������������
        return �alculation_Machine(Seed);
        */

        Sleep(1000);

        // ���������� ��������� ��������� �����
        srand(time(NULL));

        int num = rand() % 2;
        return num;
    }

    // ������� ������������� ���������� �������������� ����� � ��������� ��������.
    // �������� �����: [min, max]
    static int GetRandomInt(int min, int max)
    {
        // ���������� ��������� ��������� �����
        srand(time(NULL));

        // �������� ��������� ����� - �������
        int num = min + rand() % (max - min + 1);

        return num;
    }
};




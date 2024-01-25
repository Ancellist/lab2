// L2E5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <Windows.h>
#include <iostream>

void main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float a;
    float b;

    printf("Введите 1-ый катет=");
    scanf_s("%f", &a);

    printf("Введите 2-ой катет=");
    scanf_s("%f", &b);

    float c = a * a + b * b;
    c = sqrt(c);

    printf("Гипотенуза равна = %2.2f", c);
}
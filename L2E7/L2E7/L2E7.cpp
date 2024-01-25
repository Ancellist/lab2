// L2E5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <Windows.h>
#include <iostream>

void main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    float mounths;
    float money;
    float money_in_mounth;

    printf("Введите срок кредита = ");
    scanf_s("%f", &mounths);
    printf("Введите сумму кредита = ");
    scanf_s("%f", &money);
    printf("Введите ежемесячный платеж = ");
    scanf_s("%f", &money_in_mounth);

    float p = money_in_mounth * mounths - money;
    printf("Переплата составит %2.2f", p);
}
#include <stdio.h>
#include <Windows.h>
#include <math.h>

void main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float h ;
	printf("������� ������ � ������");
	scanf_s("%f", &h);

	float g = 9.8;
	float t = sqrt(2 * h / g);

	printf("������ � ������� ������ ������� %f ������\n", h);
	printf("�������� ����� %f ������\n", t);
}
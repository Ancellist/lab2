#include <Windows.h>
#include <math.h>
#include <stdio.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float m;
	int rub_m;
	int salary;

	printf("������� ������� �������� m^2=");
	scanf_s("%f", &m);

	printf("������� ��������� 1 �� � � ���.=");
	scanf_s("%d", &rub_m);

	printf("������� ������ �������� ���=");
	scanf_s("%d", &salary);

	float price = m * rub_m;
	float mounths = price / (salary / 2);

	printf("�������� �������� %f m^2 �� ���� %d ����� %2.1f ��� \n ", m,rub_m,price );
	printf("��� �������� %d ��� �� ��� �������� ������ %1.1f �������\n ",salary,mounths);
}
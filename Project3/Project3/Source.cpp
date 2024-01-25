#include <Windows.h>
#include <math.h>
#include <stdio.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float m;
	int rub_m;
	int salary;

	printf("¬ведите площадь квартиры m^2=");
	scanf_s("%f", &m);

	printf("¬ведите стоимость 1 кв м в руб.=");
	scanf_s("%d", &rub_m);

	printf("¬ведите размер зарплаты руб=");
	scanf_s("%d", &salary);

	float price = m * rub_m;
	float mounths = price / (salary / 2);

	printf(" вартира площадью %f m^2 по цене %d стоит %2.1f руб \n ", m,rub_m,price );
	printf("ѕри зарплате %d руб на эту квартиру копить %1.1f мес€цев\n ",salary,mounths);
}
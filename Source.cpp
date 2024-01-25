#include <stdio.h>
#include <Windows.h>
#include <math.h>

void main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float h ;
	printf("Введите высоту в метрах");
	scanf_s("%f", &h);

	float g = 9.8;
	float t = sqrt(2 * h / g);

	printf("Высота с которой падает предмет %f метров\n", h);
	printf("Коснется через %f секунд\n", t);
}
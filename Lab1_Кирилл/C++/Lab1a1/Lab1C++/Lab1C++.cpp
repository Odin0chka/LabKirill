// Lab1C++.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Coordinate.h"
#include <iostream>
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Coordinate c1, c2, sum;

	printf("Укажите координату первой точки\n");
	c1.Read();
	c2.Init(5, 10, 15, 25, 30, 35);

	sum = sum.add(c1, c2);

	printf("\nПервая координата: \n");
	c1.Display();
	printf("\nВторая координата: \n");
	c2.Display();
	printf("\nСумма отрезков: \n");
	sum.Display();
	printf("\n");
	system("pause");
	return 0;
}

/*18. Класс координаты точки на карте состоит из трех вещественных полей (градусы, минуты и секунды).
Реализовать метод округления до градусов и вычисления координат точки, находящейся на середине отрезка,
соединяющего две другие точки (метод называется add).*/
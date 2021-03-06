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
	Coordinate* sum = new Coordinate();
	Coordinate* coor = new Coordinate[2];

	printf("Укажите координату первой точки\n");
	coor[0].Read();
	coor[1].Init(5, 10, 15, 25, 30, 35);
	
	*sum = sum->add(coor[0], coor[1]);

	printf("\nПервая координата: \n");
	coor[0].Display();
	printf("\nВторая координата: \n");
	coor[1].Display();
	printf("\nСумма отрезков: \n");
	sum->Display();
	printf("\n");
	system("pause");

	delete[] coor;
	delete sum;
	return 0;
}

/*18. Класс координаты точки на карте состоит из трех вещественных полей (градусы, минуты и секунды).
Реализовать метод округления до градусов и вычисления координат точки, находящейся на середине отрезка,
соединяющего две другие точки (метод называется add).*/
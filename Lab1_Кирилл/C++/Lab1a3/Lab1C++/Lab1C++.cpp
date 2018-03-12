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
	//x - широта
	//y - долгота
	//Coordinate x1, y1, x2, y2, middleX, middleY;
	Coordinate* middleX = new Coordinate();
	Coordinate* middleY = new Coordinate();
	Coordinate* one = new Coordinate[2];
	Coordinate* two = new Coordinate[2];

	//80 30 12
	//45 29 59
	printf("Укажите широту первой координаты: ");
	one[0].Read();
	printf("Укажите долготу первой координаты: ");
	one[1].Read();
	two[0].Init(45, 12, 55);
	two[1].Init(85, 42, 18);
	
	*middleX = Coordinate::add(one[0], one[1]);
	*middleY = Coordinate::add(two[0], two[1]);

	//*middleX = middleX->add(one[0], one[1]);
	//*middleY = middleY->add(two[0], two[1]);

	printf("\nПервая координата: \nШирота\n");
	one[0].Display();
	printf("Долгота\n");
	one[1].Display();
	printf("\nВторая координата: \nШирота\n");
	two[0].Display();
	printf("Долгота\n");
	two[1].Display();
	printf("\nСередина отрезка: \nШирота\n");
	middleX->Display();
	printf("Долгота\n");
	middleY->Display();
	system("pause");
	return 0;
}

/*18. Класс координаты точки на карте состоит из трех вещественных полей (градусы, минуты и секунды).
Реализовать метод округления до градусов и вычисления координат точки, находящейся на середине отрезка,
соединяющего две другие точки (метод называется add).*/
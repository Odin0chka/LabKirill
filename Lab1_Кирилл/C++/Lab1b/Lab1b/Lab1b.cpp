// Lab1b.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include "Student.h"
#include "Predmet.h"
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Student st, st2;
	Predmet predmeti[3];
	int rating_mas[3];
	predmeti[0].Init((char *)"Математика", 7, 5);
	rating_mas[0] = 64;
	predmeti[1].Init((char *)"Программирование", 12, 9);
	rating_mas[1] = 90;
	predmeti[2].Read();
	printf("\tОценка: ");
	scanf("%d", &rating_mas[2]);
	system("cls");

	st.Init((char *)"Осинин Алексей Коснтантинович", rating_mas, predmeti);
	st.Display();
	system("pause");
	system("cls");
	st2.Read();
	printf("\nВывод\n");
	st2.Display();

	system("pause");
    return 0;
}


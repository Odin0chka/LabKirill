#include "stdafx.h"
#include "Predmet.h"

void Predmet::Init(char* name, int num, int lab)
{
	_name = name;
	_numberOfHours = num;
	if (lab > 10)
		_labor = 10;
	else if (lab < 1)
		_labor = 1;
	else
		_labor = lab;
}

void Predmet::Display()
{
	printf("\tПредмет: %s\n", _name);
	printf("\tТрудоемкость: %d\n", _labor);
	printf("\tКоличестов часов: %d\n", _numberOfHours);
}

float Predmet::Weight()
{
	return ((float)_numberOfHours / 8) * ((float)_labor / 10);
}

void Predmet::Read()
{
	printf("\tНазвание предмета: ");
	//scanf("%s", _name);
	getchar();
	gets_s(_name, 50);
	printf("\tТрудоемкость: ");
	int test = 0;
	scanf_s("%d", &test);
	if (test > 10)
		_labor = 10;
	else if (test < 1)
		_labor = 1;
	else
		_labor = test;
	printf("\tКоличестов часов: ");
	scanf("%d", &_numberOfHours);
}

char* Predmet::GetName()
{
	return _name;
}

Predmet::Predmet()
{
	_name = new char[50];
	_numberOfHours = 0;
	_labor = 1;
}


Predmet::~Predmet()
{
}
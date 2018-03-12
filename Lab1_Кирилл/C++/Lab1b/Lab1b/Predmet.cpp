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
	printf("\t�������: %s\n", _name);
	printf("\t������������: %d\n", _labor);
	printf("\t���������� �����: %d\n", _numberOfHours);
}

float Predmet::Weight()
{
	return ((float)_numberOfHours / 8) * ((float)_labor / 10);
}

void Predmet::Read()
{
	printf("\t�������� ��������: ");
	//scanf("%s", _name);
	getchar();
	gets_s(_name, 50);
	printf("\t������������: ");
	int test = 0;
	scanf_s("%d", &test);
	if (test > 10)
		_labor = 10;
	else if (test < 1)
		_labor = 1;
	else
		_labor = test;
	printf("\t���������� �����: ");
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
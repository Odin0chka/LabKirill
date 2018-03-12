#include "stdafx.h"
#include "Student.h"

void Student::Init(char* name, int* rat, Predmet* pr)
{
	_fio = name;
	for (int i = 0; i < 3; i++)
	{
		_rating[i] = rat[i];
		_pr[i] = pr[i];
	}
}

void Student::Display()
{
	printf("������: %s\n", _fio);
	for (int i = 0; i < 3; i++)
	{
		_pr[i].Display();
		printf("\t������: %d\n\n", _rating[i]);
	}
	printf("C������ ������� �������: %.2f\n", Average_Rating());
	printf("������������ ��� � ��������: %s\n", Max());

}

float Student::Average_Rating()
{
	float avr = 0;
	for (int i = 0; i < 3; i++)
		avr += _rating[i] * _pr[i].Weight();
	avr /= 3;
	return avr;
}

void Student::Read()
{
	printf("������� ��� �������: ");
	//scanf("%s", _fio);
	getchar();
	gets_s(_fio, 100);
	printf("���������� � ���������: \n");
	for (int i = 0; i < 3; i++)
	{
		_pr[i].Read();
		printf("\t������: ");
		scanf("%d", &_rating[i]);
	}
}

char* Student::Max()
{
	float max = 0;
	int num = -1;
	for (int i = 0; i < 3; i++)
		if (max < _pr[i].Weight())
		{
			max = _pr[i].Weight();
			num = i;
		}
	return _pr[num].GetName();
}

Student::Student()
{
	_fio = new char[100];
}


Student::~Student()
{
}

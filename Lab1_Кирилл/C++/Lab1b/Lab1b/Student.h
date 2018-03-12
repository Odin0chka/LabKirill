#pragma once
#include "Predmet.h"
class Student
{
public:
	Student();
	~Student();
	void Init(char* name, int* rat, Predmet* pr);
	void Display();
	void Read();
	float Average_Rating();
	char* Max();
private:
	char *_fio;
	int _rating[3];
	Predmet _pr[3];
};


#include "stdafx.h"
#include "Coordinate.h"
#include "math.h"

Coordinate::Coordinate()
{
	degrees = 0;
	minutes = 0;
	seconds = 0;
}

Coordinate Coordinate::add(Coordinate one, Coordinate two)
{
	Coordinate res;
	res.degrees = (one.degrees + two.degrees) / 2;
	res.minutes = (one.minutes + two.minutes) / 2;
	res.seconds = (one.seconds + two.seconds) / 2;
	return res;
}

int Coordinate::RoundDegrees() {
	int temp = 0;
	if (seconds >= 30)
		temp++;
	if (minutes + temp >= 30)
		temp++;
	if (temp == 2)
		return degrees + 1;
	else
		return degrees;
}

void Coordinate::Display()
{
	printf("\tГрадусы: %d\n", degrees);
	printf("\tМинуты: %d\n", minutes);
	printf("\tСекунды: %d\n", seconds);
	printf("\tОкругление: %d\n", RoundDegrees());
}

void Coordinate::Init(int degrees, int minutes, int seconds)
{
	this->degrees = degrees;
	this->minutes = minutes;
	this->seconds = seconds;
}

void Coordinate::Read()
{
	scanf_s("%d %d %d", &degrees, &minutes, &seconds);
}

Coordinate::~Coordinate()
{
}

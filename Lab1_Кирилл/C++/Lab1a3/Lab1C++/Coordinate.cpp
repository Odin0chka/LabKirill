#include "stdafx.h"
#include "Coordinate.h"
#include "math.h"

Coordinate::Coordinate()
{
	x1 = 0;
	y1 = 0;
	z1 = 0;
	x2 = 0;
	y2 = 0;
	z2 = 0;
}

Coordinate Coordinate::add(Coordinate one, Coordinate two)
{
	Coordinate res;
	res.x1 = one.x1;
	res.y1 = one.y1;
	res.z1 = one.z1;
	res.x2 = two.x2;
	res.y2 = two.y2;
	res.z2 = two.z2;
	return res;
}

float Coordinate::LenghtOt() {
	float len = sqrt(pow(x1 + x2, 2) + pow(y1 + y2, 2) + pow(z1 + z2, 2));
	return len;
}

void Coordinate::Display()
{
	printf("\tx1: %.2f\n", x1);
	printf("\ty1: %.2f\n", y1);
	printf("\tz1: %.2f\n", z1);
	printf("\tx2: %.2f\n", x2);
	printf("\ty2: %.2f\n", y2);
	printf("\tz2: %.2f\n", z2);
	printf("\tДлина отрезка: %.2f\n", LenghtOt());
}

void Coordinate::Init(float cx1, float cy1, float cz1, float cx2, float cy2, float cz2)
{
	x1 = cx1;
	y1 = cy1;
	z1 = cz1;
	x2 = cx2;
	y2 = cy2;
	z2 = cz2;
}

void Coordinate::Read()
{
	printf("\tx1: ");
	scanf_s("%f", &x1);
	printf("\ty1: ");
	scanf_s("%f", &y1);
	printf("\tz1: ");
	scanf_s("%f", &z1);
	printf("\tx2: ");
	scanf_s("%f", &x2);
	printf("\ty2: ");
	scanf_s("%f", &y2);
	printf("\tz2: ");
	scanf_s("%f", &z2);
}

Coordinate::~Coordinate()
{
}

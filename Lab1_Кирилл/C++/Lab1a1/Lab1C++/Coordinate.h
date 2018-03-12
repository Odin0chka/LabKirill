#pragma once
class Coordinate
{
public:
	Coordinate();
	~Coordinate();
	void Init(float cx1, float cy1, float cz1, float cx2, float cy2, float cz2);
	void Read();
	void Display();
	float LenghtOt();
	static Coordinate add(Coordinate one, Coordinate two);
private:
	float x1;
	float y1;
	float z1;
	float x2;
	float y2;
	float z2;
};
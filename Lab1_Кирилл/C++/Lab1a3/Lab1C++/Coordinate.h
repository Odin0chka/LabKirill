#pragma once
class Coordinate
{
public:
	Coordinate();
	~Coordinate();
	void Init(int degrees, int minutes, int seconds);
	void Read();
	void Display();
	int RoundDegrees();
	static Coordinate add(Coordinate one, Coordinate two);
private:
	int degrees;
	int minutes;
	int seconds;
};
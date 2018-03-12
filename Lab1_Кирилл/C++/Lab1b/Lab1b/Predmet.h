#pragma once
class Predmet
{
public:
	Predmet();
	~Predmet();
	void Init(char* name, int num, int lab);
	void Display();
	void Read();
	float Weight();
	char* GetName();
private:
	char *_name;
	int _numberOfHours;
	int _labor;
};


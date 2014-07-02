#pragma once
#include <string>
using std::string;

class Organism
{
public:
	Organism(int X, int Y);
	~Organism(void);

	string getName();
	void setName(string Name);
private:
	string sName;
	bool isConstant;
	bool atHomeostasis;
	short unsigned int color;
	
	//int nextX;
	//int nextY;
	int itsX;
	int itsY;
	int startX;
	int startY;
	int origX;
	int origY;

	unsigned short int left;
	unsigned short int right;
	unsigned short int itsID;
};


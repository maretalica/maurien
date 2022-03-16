#pragma once
#include <string>
using namespace std;

class tiles
{
public:
	virtual void explode() = 0;
	void setSymbol(char sym);
	string getSymbol();
	void setCoordinate(int X, int Y);
	int getX();
	int getY();

protected:
	string symbol;
	int x;
	int y;
}; 
